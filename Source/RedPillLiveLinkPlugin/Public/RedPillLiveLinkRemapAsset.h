// Copyright Red Pill Lab, Ltd. All Rights Reserved.
#pragma once

#include <map>
#include "CoreMinimal.h"
#include "RedPillMappingEnum.h"
#include "LiveLinkRemapAsset.h"
#include "Animation/PoseAsset.h"
#include "RedPillLiveLinkRemapAsset.generated.h"

UCLASS(Blueprintable)
class REDPILLLIVELINKPLUGIN_API URedPillLiveLinkRemapAsset : public ULiveLinkRemapAsset
{
	GENERATED_UCLASS_BODY()
	
public: 
	//~ Begin UObject Interface
	virtual void BeginDestroy() override;
	virtual void PostLoad() override;
	// Build OutPose from AnimationData if subject was from this type
	virtual void BuildPoseFromAnimationData(float DeltaTime, const FLiveLinkSkeletonStaticData* InSkeletonData, const FLiveLinkAnimationFrameData* InFrameData, FCompactPose& OutPose) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	//~ End UObject Interface
	UPROPERTY()
	USkeletalMesh* m_skeletal_mesh_DEPRECATED;
	UPROPERTY(EditAnywhere, DisplayName = "Naming Convention", BlueprintReadWrite, Category = "Bones Names")
	ERedPillRetargetNamingConvention m_remapping_convention = ERedPillRetargetNamingConvention::Default;
	// The skeleton object which we're animating
	UPROPERTY(EditAnywhere, DisplayName = "Skeleton", BlueprintReadWrite, Category = "Red Pill Live Link Remap", DuplicateTransient)
	USkeleton* m_skeleton = nullptr;;
	UPROPERTY(EditAnywhere, DisplayName = "TPose", Category = "Red Pill Live Link Remap")
	UAnimSequence* TPoseAnimation = nullptr;;
	TArray<FName> m_skeleton_bone_names;
	void SetSkeleton(USkeleton* Skeleton);
	void FetchSkeletonBoneNames();
private:
	UPROPERTY(EditAnywhere, DisplayName = "Remapping Assets", Category = "Red Pill Live Link Remap")
	TMap<FName, ERedPillMapping> m_remapping_rows;
	static TMap<FName, ERedPillMapping> s_metahuman_remapping;
	TArray<FTransform> m_tposeWorld;
	TArray<FTransform> m_rpToUnrealTpose;
	TMap<FName, FName> BoneNameMap;
	/** Blueprint.OnCompiled delegate handle */
	FDelegateHandle OnBlueprintCompiledDelegate;
	int m_retarget;
	void OnBlueprintClassCompiled(UBlueprint* TargetBlueprint);
	void AddBoneNamesToRemapTable();
	void calculateTposeValues(FCompactPose OutPose, const FLiveLinkSkeletonStaticData& InSkeletonData, const FLiveLinkAnimationFrameData& InFrameData, FBlendedCurve& OutCurve);
	TArray<FName> PopulateBoneNames(const FLiveLinkSkeletonStaticData* InSkeletonData);
	float calculateVectorScale(FVector xsensVec, FVector unrealVec);
	FTransform GetWorldReferencePose(const FCompactPose& Pose, const FCompactPoseBoneIndex& Index);
};
