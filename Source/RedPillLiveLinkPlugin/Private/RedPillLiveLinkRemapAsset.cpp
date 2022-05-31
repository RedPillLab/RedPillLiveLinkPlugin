// Copyright Red Pill Lab, Ltd. All Rights Reserved.


#include "RedPillLiveLinkRemapAsset.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "LiveLinkTypes.h"
#include "BonePose.h"
#include "SegmentInformation.h"

#include "Animation/AnimSequence.h"
#include "Animation/Skeleton.h"
#include "Engine/SkeletalMesh.h"
#include "Misc/PackageName.h"
#include "Misc/Paths.h"
#if ENGINE_MAJOR_VERSION >= 5
#include "Animation/AttributesRuntime.h"
#else
#include "Animation/CustomAttributesRuntime.h"
#endif
#include "Animation/AnimationPoseData.h"

#include <map>
#define MYLOG(a, ...)  UE_LOG(LogTemp, Warning, TEXT(a), __VA_ARGS__)


TMap<FName, ERedPillMapping> URedPillLiveLinkRemapAsset::s_metahuman_remapping{
	{"root",  ERedPillMapping::None},{"pelvis",  ERedPillMapping::Hips},{"spine_01",  ERedPillMapping::Spine},{"spine_02",  ERedPillMapping::Spine1},{"spine_03",  ERedPillMapping::Spine2},{"spine_04",  ERedPillMapping::None},{"spine_05",  ERedPillMapping::Spine3},
	{"neck_01",  ERedPillMapping::Neck},{"neck_02",  ERedPillMapping::None},{"head",  ERedPillMapping::Head},
	{"clavicle_l",  ERedPillMapping::LeftShoulder},{"upperarm_l",  ERedPillMapping::LeftUpperArm},{"lowerarm_l",  ERedPillMapping::LeftLowerArm},{"hand_l",  ERedPillMapping::LeftHand},
	{"index_metacarpal_l",  ERedPillMapping::None},{"index_01_l",  ERedPillMapping::LeftIndex1},{"index_02_l",  ERedPillMapping::LeftIndex2},{"index_03_l",  ERedPillMapping::LeftIndex3},
	{"middle_metacarpal_l",  ERedPillMapping::None},{"middle_01_l",  ERedPillMapping::LeftMiddle1},{"middle_02_l",  ERedPillMapping::LeftMiddle2},{"middle_03_l",  ERedPillMapping::LeftMiddle3},
	{"pinky_metacarpal_l",  ERedPillMapping::None},{"pinky_01_l",  ERedPillMapping::LeftPinky1},{"pinky_02_l",  ERedPillMapping::LeftPinky2},{"pinky_03_l",  ERedPillMapping::LeftPinky3},
	{"ring_metacarpal_l",  ERedPillMapping::None},{"ring_01_l",  ERedPillMapping::LeftRing1},{"ring_02_l",  ERedPillMapping::LeftRing2},{"ring_03_l",  ERedPillMapping::LeftRing3},
	{"thumb_01_l",  ERedPillMapping::LeftThumb1},{"thumb_02_l",  ERedPillMapping::LeftThumb2},{"thumb_03_l",  ERedPillMapping::LeftThumb3},
	{"wrist_inner_l",  ERedPillMapping::None},{"wrist_outer_l",  ERedPillMapping::None},{"lowerarm_twist_02_l",  ERedPillMapping::None},{"lowerarm_twist_01_l",  ERedPillMapping::None},
	{"lowerarm_correctiveRoot_l",  ERedPillMapping::None},{"lowerarm_out_l",  ERedPillMapping::None},{"lowerarm_in_l",  ERedPillMapping::None},{"lowerarm_fwd_l",  ERedPillMapping::None},
	{"lowerarm_bck_l",  ERedPillMapping::None},{"upperarm_twist_01_l",  ERedPillMapping::None},{"upperarm_twist_02_l",  ERedPillMapping::None},{"upperarm_tricep_l",  ERedPillMapping::None},
	{"upperarm_bicep_l",  ERedPillMapping::None},{"upperarm_correctiveRoot_l",  ERedPillMapping::None},{"upperarm_bck_l",  ERedPillMapping::None},{"upperarm_fwd_l",  ERedPillMapping::None},
	{"upperarm_in_l",  ERedPillMapping::None},{"upperarm_out_l",  ERedPillMapping::None},{"clavicle_out_l",  ERedPillMapping::None},{"clavicle_scap_l",  ERedPillMapping::None},
	{"clavicle_r",  ERedPillMapping::RightShoulder},{"upperarm_r",  ERedPillMapping::RightUpperArm},{"lowerarm_r",  ERedPillMapping::RightLowerArm},{"hand_r",  ERedPillMapping::RightHand},
	{"index_metacarpal_r",  ERedPillMapping::None},{"index_01_r",  ERedPillMapping::RightIndex1},{"index_02_r",  ERedPillMapping::RightIndex2},{"index_03_r",  ERedPillMapping::RightIndex3},
	{"middle_metacarpal_r",  ERedPillMapping::None},{"middle_01_r",  ERedPillMapping::RightMiddle1},{"middle_02_r",  ERedPillMapping::RightMiddle2},{"middle_03_r",  ERedPillMapping::RightMiddle3},
	{"pinky_metacarpal_r",  ERedPillMapping::None},{"pinky_01_r",  ERedPillMapping::RightPinky1},{"pinky_02_r",  ERedPillMapping::RightPinky2},{"pinky_03_r",  ERedPillMapping::RightPinky3},
	{"ring_metacarpal_r",  ERedPillMapping::None},{"ring_01_r",  ERedPillMapping::RightRing1},{"ring_02_r",  ERedPillMapping::RightRing2},{"ring_03_r",  ERedPillMapping::RightRing3},
	{"thumb_01_r",  ERedPillMapping::RightThumb1},{"thumb_02_r",  ERedPillMapping::RightThumb2},{"thumb_03_r",  ERedPillMapping::RightThumb3},{"wrist_inner_r",  ERedPillMapping::None},
	{"wrist_outer_r",  ERedPillMapping::None},{"lowerarm_twist_02_r",  ERedPillMapping::None},{"lowerarm_twist_01_r",  ERedPillMapping::None},{"lowerarm_correctiveRoot_r",  ERedPillMapping::None},
	{"lowerarm_out_r",  ERedPillMapping::None},{"lowerarm_fwd_r",  ERedPillMapping::None},{"lowerarm_in_r",  ERedPillMapping::None},{"lowerarm_bck_r",  ERedPillMapping::None},{"upperarm_twist_01_r",  ERedPillMapping::None},
	{"upperarm_twist_02_r",  ERedPillMapping::None},{"upperarm_tricep_r",  ERedPillMapping::None},{"upperarm_bicep_r",  ERedPillMapping::None},{"upperarm_correctiveRoot_r",  ERedPillMapping::None},
	{"upperarm_fwd_r",  ERedPillMapping::None},{"upperarm_bck_r",  ERedPillMapping::None},{"upperarm_in_r",  ERedPillMapping::None},{"upperarm_out_r",  ERedPillMapping::None},{"clavicle_out_r",  ERedPillMapping::None},
	{"clavicle_scap_r",  ERedPillMapping::None},{"clavicle_pec_r",  ERedPillMapping::None},{"spine_04_latissimus_l",  ERedPillMapping::None},{"spine_04_latissimus_r",  ERedPillMapping::None},
	{"clavicle_pec_l",  ERedPillMapping::None},{"thigh_r",  ERedPillMapping::RightUpperLeg},{"calf_r",  ERedPillMapping::RightLowerLeg},{"foot_r",  ERedPillMapping::RightFoot},{"ball_r",  ERedPillMapping::RightToe},
	{"ankle_bck_r",  ERedPillMapping::None},{"ankle_fwd_r",  ERedPillMapping::None},{"calf_twist_02_r",  ERedPillMapping::None},{"calf_twist_01_r",  ERedPillMapping::None},{"calf_correctiveRoot_r",  ERedPillMapping::None},
	{"calf_kneeBack_r",  ERedPillMapping::None},{"calf_knee_r",  ERedPillMapping::None},{"thigh_twist_01_r",  ERedPillMapping::None},{"thigh_twist_02_r",  ERedPillMapping::None},{"thigh_correctiveRoot_r",  ERedPillMapping::None},
	{"thigh_fwd_r",  ERedPillMapping::None},{"thigh_bck_r",  ERedPillMapping::None},{"thigh_out_r",  ERedPillMapping::None},{"thigh_in_r",  ERedPillMapping::None},{"thigh_l",  ERedPillMapping::LeftUpperLeg},
	{"calf_l",  ERedPillMapping::LeftLowerLeg},{"foot_l",  ERedPillMapping::LeftFoot},{"ball_l",  ERedPillMapping::LeftToe},{"ankle_bck_l",  ERedPillMapping::None},{"ankle_fwd_l",  ERedPillMapping::None},
	{"calf_twist_02_l",  ERedPillMapping::None},{"calf_twist_01_l",  ERedPillMapping::None},{"calf_correctiveRoot_l",  ERedPillMapping::None},{"calf_kneeBack_l",  ERedPillMapping::None},
	{"calf_knee_l",  ERedPillMapping::None},{"thigh_twist_01_l",  ERedPillMapping::None},{"thigh_twist_02_l",  ERedPillMapping::None},{"thigh_correctiveRoot_l",  ERedPillMapping::None},
	{"thigh_bck_l",  ERedPillMapping::None},{"thigh_fwd_l",  ERedPillMapping::None},{"thigh_out_l",  ERedPillMapping::None},{"thigh_in_l",  ERedPillMapping::None},{"calf_twistCor_02_r",  ERedPillMapping::None},
	{"thigh_twistCor_01_r",  ERedPillMapping::None},{"thigh_twistCor_02_r",  ERedPillMapping::None},{"calf_twistCor_02_l",  ERedPillMapping::None},{"thigh_twistCor_01_l",  ERedPillMapping::None},
	{"thigh_twistCor_02_l",  ERedPillMapping::None},{"upperarm_twistCor_01_l",  ERedPillMapping::None},{"upperarm_twistCor_02_l",  ERedPillMapping::None},{"upperarm_twistCor_01_r",  ERedPillMapping::None},
	{"upperarm_twistCor_02_r",  ERedPillMapping::None},{"thigh_fwd_lwr_r",  ERedPillMapping::None},{"thigh_bck_lwr_r",  ERedPillMapping::None},{"thigh_fwd_lwr_l",  ERedPillMapping::None},
	{"thigh_bck_lwr_l",  ERedPillMapping::None},{"upperarm_bicep_l_dyn",  ERedPillMapping::None},{"upperarm_tricep_l_dyn",  ERedPillMapping::None},{"clavicle_out_l_dyn",  ERedPillMapping::None},
	{"upperarm_tricep_r_dyn",  ERedPillMapping::None},{"upperarm_bicep_r_dyn",  ERedPillMapping::None},{"clavicle_out_r_dyn",  ERedPillMapping::None},{"clavicle_pec_r_dyn",  ERedPillMapping::None},
	{"clavicle_pec_l_dyn",  ERedPillMapping::None},{"thigh_twistCor_01_l_dyn",  ERedPillMapping::None},{"thigh_twistCor_02_l_dyn",  ERedPillMapping::None},{"thigh_twistCor_01_r_dyn",  ERedPillMapping::None},
	{"thigh_twistCor_02_r_dyn",  ERedPillMapping::None},{"pinky_03_bulge_l",  ERedPillMapping::None},{"pinky_03_half_l",  ERedPillMapping::None},{"pinky_03_in_l",  ERedPillMapping::None},{"pinky_02_dip_l",  ERedPillMapping::None},
	{"pinky_02_bulge_l",  ERedPillMapping::None},{"pinky_02_side_out_l",  ERedPillMapping::None},{"pinky_02_side_inn_l",  ERedPillMapping::None},{"pinky_02_half_l",  ERedPillMapping::None},
	{"pinky_02_in_l",  ERedPillMapping::None},{"pinky_02_pip_l",  ERedPillMapping::None},{"pinky_01_palmMid_l",  ERedPillMapping::None},{"pinky_01_bulge_l",  ERedPillMapping::None},{"pinky_01_side_out_l",  ERedPillMapping::None},
	{"pinky_01_side_inn_l",  ERedPillMapping::None},{"pinky_01_half_l",  ERedPillMapping::None},{"pinky_01_mcp_l",  ERedPillMapping::None},{"pinky_01_palm_l",  ERedPillMapping::None},
	{"pinky_metacarpal_slide_l",  ERedPillMapping::None},{"ring_03_bulge_l",  ERedPillMapping::None},{"ring_03_half_l",  ERedPillMapping::None},{"ring_02_dip_l",  ERedPillMapping::None},{"ring_03_in_l",  ERedPillMapping::None},
	{"ring_02_bulge_l",  ERedPillMapping::None},{"ring_02_side_out_l",  ERedPillMapping::None},{"ring_02_side_inn_l",  ERedPillMapping::None},{"ring_02_half_l",  ERedPillMapping::None},{"ring_02_in_l",  ERedPillMapping::None},
	{"ring_02_pip_l",  ERedPillMapping::None},{"ring_01_palmMid_l",  ERedPillMapping::None},{"ring_01_bulge_l",  ERedPillMapping::None},{"ring_01_side_out_l",  ERedPillMapping::None},{"ring_01_side_inn_l",  ERedPillMapping::None},
	{"ring_01_half_l",  ERedPillMapping::None},{"ring_01_mcp_l",  ERedPillMapping::None},{"ring_01_palm_l",  ERedPillMapping::None},{"ring_metacarpal_slide_l",  ERedPillMapping::None},{"thumb_03_bulge_l",  ERedPillMapping::None},
	{"thumb_03_side_out_l",  ERedPillMapping::None},{"thumb_03_side_inn_l",  ERedPillMapping::None},{"thumb_03_half_l",  ERedPillMapping::None},{"thumb_03_pip_l",  ERedPillMapping::None},{"thumb_03_in_l",  ERedPillMapping::None},
	{"thumb_02_bulge_l",  ERedPillMapping::None},{"thumb_02_side_out_l",  ERedPillMapping::None},{"thumb_02_side_inn_l",  ERedPillMapping::None},{"thumb_02_half_l",  ERedPillMapping::None},{"thumb_02_in_l",  ERedPillMapping::None},
	{"thumb_02_mcp_l",  ERedPillMapping::None},{"thumb_01_side_out_l",  ERedPillMapping::None},{"thumb_01_side_inn_l",  ERedPillMapping::None},{"middle_03_bulge_l",  ERedPillMapping::None},{"middle_03_half_l",  ERedPillMapping::None},
	{"middle_03_in_l",  ERedPillMapping::None},{"middle_02_dip_l",  ERedPillMapping::None},{"middle_02_bulge_l",  ERedPillMapping::None},{"middle_02_side_out_l",  ERedPillMapping::None},{"middle_02_side_inn_l",  ERedPillMapping::None},
	{"middle_02_half_l",  ERedPillMapping::None},{"middle_02_pip_l",  ERedPillMapping::None},{"middle_02_in_l",  ERedPillMapping::None},{"middle_01_palmMid_l",  ERedPillMapping::None},{"middle_01_bulge_l",  ERedPillMapping::None},
	{"middle_01_side_out_l",  ERedPillMapping::None},{"middle_01_side_inn_l",  ERedPillMapping::None},{"middle_01_half_l",  ERedPillMapping::None},{"middle_01_mcp_l",  ERedPillMapping::None},
	{"middle_01_palm_l",  ERedPillMapping::None},{"middle_metacarpal_slide_l",  ERedPillMapping::None},{"index_03_bulge_l",  ERedPillMapping::None},{"index_03_half_l",  ERedPillMapping::None},
	{"index_02_dip_l",  ERedPillMapping::None},{"index_03_in_l",  ERedPillMapping::None},{"index_02_bulge_l",  ERedPillMapping::None},{"index_02_side_out_l",  ERedPillMapping::None},{"index_02_side_inn_l",  ERedPillMapping::None},
	{"index_02_half_l",  ERedPillMapping::None},{"index_02_in_l",  ERedPillMapping::None},{"index_02_pip_l",  ERedPillMapping::None},{"index_01_palmMid_l",  ERedPillMapping::None},{"index_01_bulge_l",  ERedPillMapping::None},
	{"index_01_side_out_l",  ERedPillMapping::None},{"index_01_side_inn_l",  ERedPillMapping::None},{"index_01_half_l",  ERedPillMapping::None},{"index_01_mcp_l",  ERedPillMapping::None},{"index_01_palm_l",  ERedPillMapping::None},
	{"index_metacarpal_slide_l",  ERedPillMapping::None},{"pinky_03_bulge_r",  ERedPillMapping::None},{"pinky_03_half_r",  ERedPillMapping::None},{"pinky_03_in_r",  ERedPillMapping::None},{"pinky_02_dip_r",  ERedPillMapping::None},
	{"pinky_02_bulge_r",  ERedPillMapping::None},{"pinky_02_side_out_r",  ERedPillMapping::None},{"pinky_02_side_inn_r",  ERedPillMapping::None},{"pinky_02_half_r",  ERedPillMapping::None},{"pinky_02_in_r",  ERedPillMapping::None},
	{"pinky_02_pip_r",  ERedPillMapping::None},{"pinky_01_palmMid_r",  ERedPillMapping::None},{"pinky_01_bulge_r",  ERedPillMapping::None},{"pinky_01_side_out_r",  ERedPillMapping::None},{"pinky_01_side_inn_r",  ERedPillMapping::None},
	{"pinky_01_half_r",  ERedPillMapping::None},{"pinky_01_mcp_r",  ERedPillMapping::None},{"pinky_01_palm_r",  ERedPillMapping::None},{"pinky_metacarpal_slide_r",  ERedPillMapping::None},{"ring_03_bulge_r",  ERedPillMapping::None},
	{"ring_03_half_r",  ERedPillMapping::None},{"ring_02_dip_r",  ERedPillMapping::None},{"ring_03_in_r",  ERedPillMapping::None},{"ring_02_bulge_r",  ERedPillMapping::None},{"ring_02_side_out_r",  ERedPillMapping::None},
	{"ring_02_side_inn_r",  ERedPillMapping::None},{"ring_02_half_r",  ERedPillMapping::None},{"ring_02_in_r",  ERedPillMapping::None},{"ring_02_pip_r",  ERedPillMapping::None},{"ring_01_palmMid_r",  ERedPillMapping::None},
	{"ring_01_bulge_r",  ERedPillMapping::None},{"ring_01_side_out_r",  ERedPillMapping::None},{"ring_01_side_inn_r",  ERedPillMapping::None},{"ring_01_half_r",  ERedPillMapping::None},{"ring_01_mcp_r",  ERedPillMapping::None},
	{"ring_01_palm_r",  ERedPillMapping::None},{"ring_metacarpal_slide_r",  ERedPillMapping::None},{"thumb_03_bulge_r",  ERedPillMapping::None},{"thumb_03_side_out_r",  ERedPillMapping::None},
	{"thumb_03_side_inn_r",  ERedPillMapping::None},{"thumb_03_half_r",  ERedPillMapping::None},{"thumb_03_pip_r",  ERedPillMapping::None},{"thumb_03_in_r",  ERedPillMapping::None},{"thumb_02_bulge_r",  ERedPillMapping::None},
	{"thumb_02_side_out_r",  ERedPillMapping::None},{"thumb_02_side_inn_r",  ERedPillMapping::None},{"thumb_02_half_r",  ERedPillMapping::None},{"thumb_02_in_r",  ERedPillMapping::None},{"thumb_02_mcp_r",  ERedPillMapping::None},
	{"thumb_01_side_out_r",  ERedPillMapping::None},{"thumb_01_side_inn_r",  ERedPillMapping::None},{"middle_03_bulge_r",  ERedPillMapping::None},{"middle_03_half_r",  ERedPillMapping::None},{"middle_03_in_r",  ERedPillMapping::None},
	{"middle_02_dip_r",  ERedPillMapping::None},{"middle_02_bulge_r",  ERedPillMapping::None},{"middle_02_side_out_r",  ERedPillMapping::None},{"middle_02_side_inn_r",  ERedPillMapping::None},
	{"middle_02_half_r",  ERedPillMapping::None},{"middle_02_pip_r",  ERedPillMapping::None},{"middle_02_in_r",  ERedPillMapping::None},{"middle_01_palmMid_r",  ERedPillMapping::None},
	{"middle_01_bulge_r",  ERedPillMapping::None},{"middle_01_side_out_r",  ERedPillMapping::None},{"middle_01_side_inn_r",  ERedPillMapping::None},{"middle_01_half_r",  ERedPillMapping::None},
	{"middle_01_mcp_r",  ERedPillMapping::None},{"middle_01_palm_r",  ERedPillMapping::None},{"middle_metacarpal_slide_r",  ERedPillMapping::None},{"index_03_bulge_r",  ERedPillMapping::None},
	{"index_03_half_r",  ERedPillMapping::None},{"index_02_dip_r",  ERedPillMapping::None},{"index_03_in_r",  ERedPillMapping::None},{"index_02_bulge_r",  ERedPillMapping::None},{"index_02_side_out_r",  ERedPillMapping::None},
	{"index_02_side_inn_r",  ERedPillMapping::None},{"index_02_half_r",  ERedPillMapping::None},{"index_02_in_r",  ERedPillMapping::None},{"index_02_pip_r",  ERedPillMapping::None},{"index_01_palmMid_r",  ERedPillMapping::None},
	{"index_01_bulge_r",  ERedPillMapping::None},{"index_01_side_out_r",  ERedPillMapping::None},{"index_01_side_inn_r",  ERedPillMapping::None},{"index_01_half_r",  ERedPillMapping::None},
	{"index_01_mcp_r",  ERedPillMapping::None},{"index_01_palm_r",  ERedPillMapping::None},{"index_metacarpal_slide_r",  ERedPillMapping::None},{"littletoe_01_r",  ERedPillMapping::None},
	{"littletoe_02_r",  ERedPillMapping::None},{"middletoe_01_r",  ERedPillMapping::None},{"middletoe_02_r",  ERedPillMapping::None},{"bigtoe_01_r",  ERedPillMapping::None},{"bigtoe_02_r",  ERedPillMapping::None},
	{"indextoe_01_r",  ERedPillMapping::None},{"indextoe_02_r",  ERedPillMapping::None},{"indextoe_01_l",  ERedPillMapping::None},{"indextoe_02_l",  ERedPillMapping::None},{"bigtoe_01_l",  ERedPillMapping::None},
	{"bigtoe_02_l",  ERedPillMapping::None},{"littletoe_01_l",  ERedPillMapping::None},{"littletoe_02_l",  ERedPillMapping::None},{"middletoe_01_l",  ERedPillMapping::None},{"middletoe_02_l",  ERedPillMapping::None},
	{"ringtoe_01_r",  ERedPillMapping::None},{"ringtoe_02_r",  ERedPillMapping::None},{"ringtoe_01_l",  ERedPillMapping::None},{"ringtoe_02_l",  ERedPillMapping::None} };

URedPillLiveLinkRemapAsset::URedPillLiveLinkRemapAsset(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.DoNotCreateDefaultSubobject(GetClass()->GetDefaultObjectName()))
{
	
	auto name = GetClass()->GetDefaultObjectName();
	auto cdo = GetClass()->GetDefaultObject();

#if WITH_EDITOR
	UBlueprint* Blueprint = Cast<UBlueprint>(GetClass()->ClassGeneratedBy);
	if (Blueprint)
	{
	
		OnBlueprintCompiledDelegate = Blueprint->OnCompiled().AddUObject(this, &URedPillLiveLinkRemapAsset::OnBlueprintClassCompiled);
	}
	
	
#endif
	
}
#if WITH_EDITOR


void URedPillLiveLinkRemapAsset::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.Property != nullptr)
	{
		FName PropertyName = PropertyChangedEvent.GetPropertyName();
		FName MemberPropertyName = (PropertyChangedEvent.MemberProperty != nullptr) ? PropertyChangedEvent.MemberProperty->GetFName() : NAME_None;

		if (PropertyName == GET_MEMBER_NAME_CHECKED(URedPillLiveLinkRemapAsset, m_skeleton))
		{
			AddBoneNamesToRemapTable();
		}
		else if (PropertyName == GET_MEMBER_NAME_CHECKED(URedPillLiveLinkRemapAsset, m_remapping_convention))
		{
			AddBoneNamesToRemapTable();
		}
		else if (MemberPropertyName == GET_MEMBER_NAME_CHECKED(URedPillLiveLinkRemapAsset, m_remapping_rows))
		{
			// When user changes any row mapping, switch to Manual mapping type, so these changes won't be lost
			m_remapping_convention = ERedPillRetargetNamingConvention::Default;
		}

	}
}

void URedPillLiveLinkRemapAsset::OnBlueprintClassCompiled(UBlueprint* TargetBlueprint)
{
	AddBoneNamesToRemapTable();
}
#endif // WITH_EDITOR

void URedPillLiveLinkRemapAsset::SetSkeleton(USkeleton* Skeleton)
{
	MYLOG("SetSkeleton");
	m_skeleton = Skeleton;
	AddBoneNamesToRemapTable();
}

void URedPillLiveLinkRemapAsset::FetchSkeletonBoneNames()
{
	if (m_skeleton != nullptr)
	{
		const FReferenceSkeleton& RefSkeleton = m_skeleton->GetReferenceSkeleton();

		m_skeleton_bone_names.Empty(RefSkeleton.GetNum());
		for (int32 BoneIndex = 0; BoneIndex < RefSkeleton.GetNum(); BoneIndex++)
		{
			m_skeleton_bone_names.Add(RefSkeleton.GetBoneName(BoneIndex));

		}
	}
	else
	{

		m_skeleton_bone_names.Empty();
	}
}

void URedPillLiveLinkRemapAsset::AddBoneNamesToRemapTable()
{

	MYLOG("AddBoneNamesToRemapTable");
	if (m_skeleton != nullptr)
	{
		FetchSkeletonBoneNames();

		// Attempt to fill according to naming convention
		for (int32 i = 0; i < m_skeleton_bone_names.Num(); i++)
		{
			ERedPillMapping CurrBone = ERedPillMapping(static_cast<int>(ERedPillMapping::None));
			if (m_remapping_convention == ERedPillRetargetNamingConvention::Metahuman)
			{
				auto find = s_metahuman_remapping.Find(m_skeleton_bone_names[i]);
				if(find)
					CurrBone = *find;
			}
			
			if (!m_remapping_rows.Find(m_skeleton_bone_names[i]))
				m_remapping_rows.Add(m_skeleton_bone_names[i], CurrBone);
			else
			{
				//m_remapping_rows
				//CurrBone = *m_remapping_rows.Find(m_skeleton_bone_names[i]);
				//MYLOG("AddBoneNamesToRemapTable %s - %d", *m_skeleton_bone_names[i].ToString(), static_cast<int>(CurrBone));
				if (m_remapping_convention != ERedPillRetargetNamingConvention::Default)
					*m_remapping_rows.Find(m_skeleton_bone_names[i]) = CurrBone;
			}
		}

	}
}


void URedPillLiveLinkRemapAsset::PostLoad()
{
	Super::PostLoad();

	// Upgrade the asset
	if (m_skeletal_mesh_DEPRECATED != nullptr)
	{
		m_skeleton = m_skeletal_mesh_DEPRECATED->GetSkeleton();
		m_skeletal_mesh_DEPRECATED = nullptr;
		if (m_remapping_convention != ERedPillRetargetNamingConvention::Default)
		{
			// Verify the correctness of remapping convention - if it doesn't match, set it to Manual
			TMap<FName, ERedPillMapping> SavedRemappingRows = m_remapping_rows;
			AddBoneNamesToRemapTable();
			if (m_remapping_rows.OrderIndependentCompareEqual(SavedRemappingRows) == false)
			{
				// If regeneration of bone list will produce a different result, revert results and force remapping convention to Manual
				m_remapping_rows = SavedRemappingRows;
				m_remapping_convention = ERedPillRetargetNamingConvention::Default;
			}
		}
		//// Verify the correctness of remapping convention - if it doesn't match, set it to Manual
		//TMap<FName, ERedPillMapping> SavedRemappingRows = m_remapping_rows;
		//AddBoneNamesToRemapTable();
		//if (m_remapping_rows.OrderIndependentCompareEqual(SavedRemappingRows) == false)
		//{
		//	// If regeneration of bone list will produce a different result, revert results and force remapping convention to Manual
		//	m_remapping_rows = SavedRemappingRows;
		//}
		
	}

	FetchSkeletonBoneNames();
}

void URedPillLiveLinkRemapAsset::BeginDestroy()
{
#if WITH_EDITOR
	if (OnBlueprintCompiledDelegate.IsValid())
	{
		if (UBlueprint* Blueprint = Cast<UBlueprint>(GetClass()->ClassGeneratedBy))
		{
			Blueprint->OnCompiled().Remove(OnBlueprintCompiledDelegate);
		}
		OnBlueprintCompiledDelegate.Reset();
	}
#endif

	Super::BeginDestroy();
}


TArray<FName> URedPillLiveLinkRemapAsset::PopulateBoneNames(const FLiveLinkSkeletonStaticData* InSkeletonData)
{
	const auto& source_bone_names = InSkeletonData->GetBoneNames();

	TArray<FName> transformed_bone_names;
	transformed_bone_names.Reserve(source_bone_names.Num() + 4);

	//todo: BoneNameMap is never emptied
	for (const auto& bone_name : source_bone_names)
	{

		const UEnum* AnimStateEnum = FindObject<UEnum>(ANY_PACKAGE, TEXT("ERedPillMapping"), true);
		int32 Index = AnimStateEnum->GetIndexByName(bone_name);
		FName* TargetBoneName = BoneNameMap.Find(bone_name);
		if (TargetBoneName == nullptr)
		{
			auto key = m_remapping_rows.FindKey((ERedPillMapping)Index);
			if (key)
			{
				FName new_name = *(key);
				transformed_bone_names.Add(new_name);
				BoneNameMap.Add(bone_name, new_name);
			}
			else
			{
				transformed_bone_names.Add("None");
				BoneNameMap.Add(bone_name, "None");
			}
			//transformed_bone_names.Add("None");
		}
		else
			transformed_bone_names.Add(*TargetBoneName);
	}

	return transformed_bone_names;
}

FTransform URedPillLiveLinkRemapAsset::GetWorldReferencePose(const FCompactPose& Pose, const FCompactPoseBoneIndex& Index)
{
	if (Index == INDEX_NONE)
	{
		return FTransform::Identity;
	}
	return (Pose.GetRefPose(Index) * GetWorldReferencePose(Pose, Pose.GetParentBoneIndex(Index)));
}

void URedPillLiveLinkRemapAsset::calculateTposeValues(FCompactPose OutPose, const FLiveLinkSkeletonStaticData& InSkeletonData, const FLiveLinkAnimationFrameData& InFrameData, FBlendedCurve& OutCurve)
{
	bool logValid = false;
	std::map<int, int> parentOverride;

	auto TransformedBoneNames = PopulateBoneNames(&InSkeletonData);

	//get reference pose values
	TArray<FTransform> TPose = OutPose.GetBoneContainer().GetReferenceSkeleton().GetRefBonePose();
	if (TPoseAnimation)
	{

#if ENGINE_MAJOR_VERSION >= 5
		UE::Anim::FStackAttributeContainer attributes;
#else
		FStackCustomAttributes attributes;
#endif
		FAnimationPoseData outAnimationPoseData(OutPose, OutCurve, attributes);
		TPoseAnimation->GetAnimationPose(outAnimationPoseData, FAnimExtractContext(0, true));
		TPose = OutPose.GetBones();

	}
	else
	{
		TPose = OutPose.GetBones();
	}
	FVector uniformScale = OutPose.GetBoneContainer().GetReferenceSkeleton().GetRefBonePose()[0].GetScale3D();
	//calculate the character tpose rotation and position in world space

	m_tposeWorld = TPose;
	for (int32 i = 0; i < TPose.Num(); ++i)
	{
		if (m_tposeWorld.IsValidIndex(i))
		{
			FCompactPoseBoneIndex ParentIndex = OutPose.GetParentBoneIndex(FCompactPoseBoneIndex(i));
			if (m_tposeWorld.IsValidIndex(ParentIndex.GetInt()))
			{
				m_tposeWorld[i].SetRotation(m_tposeWorld[ParentIndex.GetInt()].GetRotation() * TPose[i].GetRotation());
				m_tposeWorld[i].SetTranslation(m_tposeWorld[ParentIndex.GetInt()].GetRotation().RotateVector(TPose[i].GetTranslation() * uniformScale) + m_tposeWorld[ParentIndex.GetInt()].GetTranslation());
			}
		}
	}

	m_rpToUnrealTpose.SetNum(InFrameData.Transforms.Num());
	for (int32 i = 0; i < InFrameData.Transforms.Num(); ++i)
	{
		FName BoneName = TransformedBoneNames[i];

		int32 MeshIndex = OutPose.GetBoneContainer().GetPoseBoneIndexForBoneName(BoneName);
		FCompactPoseBoneIndex CPIndex = OutPose.GetBoneContainer().MakeCompactPoseIndex(FMeshPoseBoneIndex(MeshIndex));
		FCompactPoseBoneIndex ParentIndex = FCompactPoseBoneIndex(INDEX_NONE);
		if (CPIndex != INDEX_NONE)
			ParentIndex = OutPose.GetParentBoneIndex(CPIndex);

		if (m_tposeWorld.IsValidIndex(CPIndex.GetInt()))
		{
			m_rpToUnrealTpose[i].SetRotation(m_tposeWorld[CPIndex.GetInt()].GetRotation());
			m_rpToUnrealTpose[i].SetTranslation(TPose[CPIndex.GetInt()].GetTranslation());
		}
	}
}
float URedPillLiveLinkRemapAsset::calculateVectorScale(FVector xsensVec, FVector unrealVec)
{
	float xsensLength = xsensVec.Size();
	float unrealLength = unrealVec.Size();

	return (unrealLength / xsensLength);
}


void URedPillLiveLinkRemapAsset::BuildPoseFromAnimationData(float DeltaTime, const FLiveLinkSkeletonStaticData* InSkeletonData, const FLiveLinkAnimationFrameData* InFrameData, FCompactPose& OutPose)
{
	bool logValid = false;
	std::map<int, int> parentOverride;

	auto TransformedBoneNames = PopulateBoneNames(InSkeletonData);

	FVector uniformScale = OutPose.GetBoneContainer().GetReferenceSkeleton().GetRefBonePose()[0].GetScale3D();
	//if (!m_skeleton || !TPoseAnimation) return;
	if (m_retarget++ >= 100 || (InFrameData->Transforms.Num() != m_rpToUnrealTpose.Num()))
	{
		FBlendedCurve OutCurve;
		calculateTposeValues(OutPose, *InSkeletonData, *InFrameData, OutCurve);
		m_retarget = 0;
	}
	
	TArray<FTransform> SegData;
	for (int32 i = 0; i < InFrameData->Transforms.Num(); ++i)
	{
		FName BoneName = TransformedBoneNames[i];

		FTransform BoneTransform = InFrameData->Transforms[i];
		int parent = 0;
		SegData.Add(BoneTransform);
		const FName MapBoneName = *BoneNameMap.FindKey(BoneName);
		int32 MeshIndex = OutPose.GetBoneContainer().GetPoseBoneIndexForBoneName(BoneName);
		FCompactPoseBoneIndex CPIndex = OutPose.GetBoneContainer().MakeCompactPoseIndex(FMeshPoseBoneIndex(MeshIndex));
		FCompactPoseBoneIndex ParentIndex = FCompactPoseBoneIndex(INDEX_NONE);
		if (CPIndex != INDEX_NONE)
			ParentIndex = OutPose.GetParentBoneIndex(CPIndex);

		auto boneId = OutPose.GetBoneContainer().GetReferenceSkeleton().FindBoneIndex(BoneName);
	
		//set translation and rotation for the pelvis
		if (MapBoneName == "Hips")
		{

			//MYLOG("%d Bone index = %d", i, boneIndex);
			if (boneId >= 0)
			{
				//scale the pelvis to the correct height with the Xsens data and Unreal skeleton
				float scale = m_tposeWorld[boneId].GetTranslation().Z / BoneTransform.GetScale3D().Z;// calculateVectorScale(BoneTransform.GetScale3D(), m_tposeWorld[boneId].GetTranslation());
				if (isinf(scale))
					scale = calculateVectorScale(OutPose.GetBoneContainer().GetReferenceSkeleton().GetRefBonePose()[boneId].GetTranslation(), m_tposeWorld[boneId].GetTranslation());
				auto pos = BoneTransform.GetTranslation();
				pos = FVector(pos.X, pos.Z, pos.Y);
				if (pos == FVector(0, 0, 0))
				{
					scale = 1;
					pos = m_rpToUnrealTpose[0].GetTranslation();
				}
				//Calculate the pelvis rotation using the mvn and tpose rotation
				auto gT = GetWorldReferencePose(OutPose, ParentIndex);
				auto gQ = gT.GetRotation();
				SegData[i].SetTranslation(gQ.Inverse() * (pos * scale - gT.GetLocation()) * gT.GetScale3D());
				auto q = BoneTransform.GetRotation();
				FQuat drot = q * m_rpToUnrealTpose[i].GetRotation();
				// remove the rotation of the parent from the current segment rotation before applying
				drot = gQ.Inverse() * drot;
				SegData[i].SetRotation(drot);
				SegData[i].SetScale3D(m_tposeWorld[boneId].GetScale3D());
				BoneTransform = SegData[i];
				SegData[i].SetRotation(q * m_rpToUnrealTpose[i].GetRotation());

			}
		}
		else if (i > 0)
		{
			//if an Xsens bone is not mapped to a bone from the current character find a parent that is for the child to use
			if (BoneName == "None")
			{
				parent = SegmentInformation::parentIndex[i];
				int cur = parent;
				FName parentBoneName = *BoneNameMap.Find(SegmentInformation::SegmentBoneNames[parent]);
				while (parentBoneName == "None")
				{
					cur = parent;
					parent = SegmentInformation::parentIndex[parent];
					if (parent < 0)
					{
						break;
					}
					parentBoneName = *BoneNameMap.Find(SegmentInformation::SegmentBoneNames[parent]);
				}
				auto parentBoneIndex = OutPose.GetBoneContainer().GetReferenceSkeleton().FindBoneIndex(parentBoneName);

				parentOverride[i] = cur;
			}
			else if (m_rpToUnrealTpose.Num() > i)
			{
				//xsens parent
				parent = SegmentInformation::parentIndex[i];// -1] + 1;
				//character bone index
				//auto boneIndex = OutPose.GetBoneContainer().GetReferenceSkeleton().FindBoneIndex(BoneName);
				auto boneIndex = OutPose.GetBoneContainer().GetPoseBoneIndexForBoneName(BoneName);// .GetReferenceSkeleton().FindBoneIndex(BoneName);
				auto id_array = OutPose.GetBoneContainer().GetBoneIndicesArray();
				for (int d = 0; d < id_array.Num(); d++)
				{
					if (id_array[d] == boneIndex)
						boneIndex = d;
				}
				if (boneIndex >= 0)
				{
					//character parent bone index
					auto parentBoneIndex = OutPose.GetBoneContainer().GetReferenceSkeleton().GetParentIndex(boneIndex);
					id_array = OutPose.GetBoneContainer().GetBoneIndicesArray();
					for (int d = 0; d < id_array.Num(); d++)
					{
						if (id_array[d] == parentBoneIndex)
							parentBoneIndex = d;
					}
					//if parent is not mapped override it with a parent that is
					auto it = parentOverride.find(parent);
					if (it != parentOverride.end())
					{
						parent = it->second;
					}
					auto q = BoneTransform.GetRotation();
					//combine the tpose and mvn rotation
					FQuat drot = q * m_rpToUnrealTpose[i].GetRotation();
					SegData[i].SetRotation(drot);
					// remove the rotation of the parent from the current segment rotation before applying
					drot = SegData[parent].GetRotation().Inverse() * drot;
					BoneTransform.SetRotation(drot);
					//BoneTransform.SetTranslation(m_rpToUnrealTpose[i].GetTranslation());
					BoneTransform.SetTranslation(OutPose.GetBoneContainer().GetReferenceSkeleton().GetRefBonePose()[boneId].GetTranslation());
					BoneTransform.SetScale3D(OutPose.GetBoneContainer().GetReferenceSkeleton().GetRefBonePose()[boneIndex].GetScale3D());
				}
				else
				{
					//MYLOG("%d Bone index = %d, parent = %d", i, boneIndex, parent);
				}
			}
		}
		
		if (MeshIndex != INDEX_NONE)
		{
			if (CPIndex != INDEX_NONE)
			{
				OutPose[CPIndex] = BoneTransform;
			}
		}
	}
}