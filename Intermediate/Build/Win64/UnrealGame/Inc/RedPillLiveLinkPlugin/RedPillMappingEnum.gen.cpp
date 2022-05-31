// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedPillLiveLinkPlugin/Public/RedPillMappingEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedPillMappingEnum() {}
// Cross Module References
	REDPILLLIVELINKPLUGIN_API UEnum* Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping();
	UPackage* Z_Construct_UPackage__Script_RedPillLiveLinkPlugin();
	REDPILLLIVELINKPLUGIN_API UEnum* Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERedPillMapping;
	static UEnum* ERedPillMapping_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERedPillMapping.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERedPillMapping.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping, Z_Construct_UPackage__Script_RedPillLiveLinkPlugin(), TEXT("ERedPillMapping"));
		}
		return Z_Registration_Info_UEnum_ERedPillMapping.OuterSingleton;
	}
	template<> REDPILLLIVELINKPLUGIN_API UEnum* StaticEnum<ERedPillMapping>()
	{
		return ERedPillMapping_StaticEnum();
	}
	struct Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping_Statics::Enumerators[] = {
		{ "ERedPillMapping::Hips", (int64)ERedPillMapping::Hips },
		{ "ERedPillMapping::Spine", (int64)ERedPillMapping::Spine },
		{ "ERedPillMapping::Spine1", (int64)ERedPillMapping::Spine1 },
		{ "ERedPillMapping::Spine2", (int64)ERedPillMapping::Spine2 },
		{ "ERedPillMapping::Spine3", (int64)ERedPillMapping::Spine3 },
		{ "ERedPillMapping::Neck", (int64)ERedPillMapping::Neck },
		{ "ERedPillMapping::Head", (int64)ERedPillMapping::Head },
		{ "ERedPillMapping::LeftShoulder", (int64)ERedPillMapping::LeftShoulder },
		{ "ERedPillMapping::LeftUpperArm", (int64)ERedPillMapping::LeftUpperArm },
		{ "ERedPillMapping::LeftLowerArm", (int64)ERedPillMapping::LeftLowerArm },
		{ "ERedPillMapping::LeftHand", (int64)ERedPillMapping::LeftHand },
		{ "ERedPillMapping::RightShoulder", (int64)ERedPillMapping::RightShoulder },
		{ "ERedPillMapping::RightUpperArm", (int64)ERedPillMapping::RightUpperArm },
		{ "ERedPillMapping::RightLowerArm", (int64)ERedPillMapping::RightLowerArm },
		{ "ERedPillMapping::RightHand", (int64)ERedPillMapping::RightHand },
		{ "ERedPillMapping::LeftUpperLeg", (int64)ERedPillMapping::LeftUpperLeg },
		{ "ERedPillMapping::LeftLowerLeg", (int64)ERedPillMapping::LeftLowerLeg },
		{ "ERedPillMapping::LeftFoot", (int64)ERedPillMapping::LeftFoot },
		{ "ERedPillMapping::LeftToe", (int64)ERedPillMapping::LeftToe },
		{ "ERedPillMapping::RightUpperLeg", (int64)ERedPillMapping::RightUpperLeg },
		{ "ERedPillMapping::RightLowerLeg", (int64)ERedPillMapping::RightLowerLeg },
		{ "ERedPillMapping::RightFoot", (int64)ERedPillMapping::RightFoot },
		{ "ERedPillMapping::RightToe", (int64)ERedPillMapping::RightToe },
		{ "ERedPillMapping::LeftPinky1", (int64)ERedPillMapping::LeftPinky1 },
		{ "ERedPillMapping::LeftPinky2", (int64)ERedPillMapping::LeftPinky2 },
		{ "ERedPillMapping::LeftPinky3", (int64)ERedPillMapping::LeftPinky3 },
		{ "ERedPillMapping::LeftRing1", (int64)ERedPillMapping::LeftRing1 },
		{ "ERedPillMapping::LeftRing2", (int64)ERedPillMapping::LeftRing2 },
		{ "ERedPillMapping::LeftRing3", (int64)ERedPillMapping::LeftRing3 },
		{ "ERedPillMapping::LeftMiddle1", (int64)ERedPillMapping::LeftMiddle1 },
		{ "ERedPillMapping::LeftMiddle2", (int64)ERedPillMapping::LeftMiddle2 },
		{ "ERedPillMapping::LeftMiddle3", (int64)ERedPillMapping::LeftMiddle3 },
		{ "ERedPillMapping::LeftIndex1", (int64)ERedPillMapping::LeftIndex1 },
		{ "ERedPillMapping::LeftIndex2", (int64)ERedPillMapping::LeftIndex2 },
		{ "ERedPillMapping::LeftIndex3", (int64)ERedPillMapping::LeftIndex3 },
		{ "ERedPillMapping::LeftThumb1", (int64)ERedPillMapping::LeftThumb1 },
		{ "ERedPillMapping::LeftThumb2", (int64)ERedPillMapping::LeftThumb2 },
		{ "ERedPillMapping::LeftThumb3", (int64)ERedPillMapping::LeftThumb3 },
		{ "ERedPillMapping::RightPinky1", (int64)ERedPillMapping::RightPinky1 },
		{ "ERedPillMapping::RightPinky2", (int64)ERedPillMapping::RightPinky2 },
		{ "ERedPillMapping::RightPinky3", (int64)ERedPillMapping::RightPinky3 },
		{ "ERedPillMapping::RightRing1", (int64)ERedPillMapping::RightRing1 },
		{ "ERedPillMapping::RightRing2", (int64)ERedPillMapping::RightRing2 },
		{ "ERedPillMapping::RightRing3", (int64)ERedPillMapping::RightRing3 },
		{ "ERedPillMapping::RightMiddle1", (int64)ERedPillMapping::RightMiddle1 },
		{ "ERedPillMapping::RightMiddle2", (int64)ERedPillMapping::RightMiddle2 },
		{ "ERedPillMapping::RightMiddle3", (int64)ERedPillMapping::RightMiddle3 },
		{ "ERedPillMapping::RightIndex1", (int64)ERedPillMapping::RightIndex1 },
		{ "ERedPillMapping::RightIndex2", (int64)ERedPillMapping::RightIndex2 },
		{ "ERedPillMapping::RightIndex3", (int64)ERedPillMapping::RightIndex3 },
		{ "ERedPillMapping::RightThumb1", (int64)ERedPillMapping::RightThumb1 },
		{ "ERedPillMapping::RightThumb2", (int64)ERedPillMapping::RightThumb2 },
		{ "ERedPillMapping::RightThumb3", (int64)ERedPillMapping::RightThumb3 },
		{ "ERedPillMapping::None", (int64)ERedPillMapping::None },
		{ "ERedPillMapping::Count", (int64)ERedPillMapping::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Name", "ERedPillMapping::Count" },
		{ "Head.DisplayName", "Head" },
		{ "Head.Name", "ERedPillMapping::Head" },
		{ "Hips.DisplayName", "Hips" },
		{ "Hips.Name", "ERedPillMapping::Hips" },
		{ "LeftFoot.DisplayName", "LeftFoot" },
		{ "LeftFoot.Name", "ERedPillMapping::LeftFoot" },
		{ "LeftHand.DisplayName", "LeftHand" },
		{ "LeftHand.Name", "ERedPillMapping::LeftHand" },
		{ "LeftIndex1.DisplayName", "LeftIndex1" },
		{ "LeftIndex1.Name", "ERedPillMapping::LeftIndex1" },
		{ "LeftIndex2.DisplayName", "LeftIndex2" },
		{ "LeftIndex2.Name", "ERedPillMapping::LeftIndex2" },
		{ "LeftIndex3.DisplayName", "LeftIndex3" },
		{ "LeftIndex3.Name", "ERedPillMapping::LeftIndex3" },
		{ "LeftLowerArm.DisplayName", "LeftLowerArm" },
		{ "LeftLowerArm.Name", "ERedPillMapping::LeftLowerArm" },
		{ "LeftLowerLeg.DisplayName", "LeftLowerLeg" },
		{ "LeftLowerLeg.Name", "ERedPillMapping::LeftLowerLeg" },
		{ "LeftMiddle1.DisplayName", "LeftMiddle1" },
		{ "LeftMiddle1.Name", "ERedPillMapping::LeftMiddle1" },
		{ "LeftMiddle2.DisplayName", "LeftMiddle2" },
		{ "LeftMiddle2.Name", "ERedPillMapping::LeftMiddle2" },
		{ "LeftMiddle3.DisplayName", "LeftMiddle3" },
		{ "LeftMiddle3.Name", "ERedPillMapping::LeftMiddle3" },
		{ "LeftPinky1.DisplayName", "LeftPinky1" },
		{ "LeftPinky1.Name", "ERedPillMapping::LeftPinky1" },
		{ "LeftPinky2.DisplayName", "LeftPinky2" },
		{ "LeftPinky2.Name", "ERedPillMapping::LeftPinky2" },
		{ "LeftPinky3.DisplayName", "LeftPinky3" },
		{ "LeftPinky3.Name", "ERedPillMapping::LeftPinky3" },
		{ "LeftRing1.DisplayName", "LeftRing1" },
		{ "LeftRing1.Name", "ERedPillMapping::LeftRing1" },
		{ "LeftRing2.DisplayName", "LeftRing2" },
		{ "LeftRing2.Name", "ERedPillMapping::LeftRing2" },
		{ "LeftRing3.DisplayName", "LeftRing3" },
		{ "LeftRing3.Name", "ERedPillMapping::LeftRing3" },
		{ "LeftShoulder.DisplayName", "LeftShoulder" },
		{ "LeftShoulder.Name", "ERedPillMapping::LeftShoulder" },
		{ "LeftThumb1.DisplayName", "LeftThumb1" },
		{ "LeftThumb1.Name", "ERedPillMapping::LeftThumb1" },
		{ "LeftThumb2.DisplayName", "LeftThumb2" },
		{ "LeftThumb2.Name", "ERedPillMapping::LeftThumb2" },
		{ "LeftThumb3.DisplayName", "LeftThumb3" },
		{ "LeftThumb3.Name", "ERedPillMapping::LeftThumb3" },
		{ "LeftToe.DisplayName", "LeftToe" },
		{ "LeftToe.Name", "ERedPillMapping::LeftToe" },
		{ "LeftUpperArm.DisplayName", "LeftUpperArm" },
		{ "LeftUpperArm.Name", "ERedPillMapping::LeftUpperArm" },
		{ "LeftUpperLeg.DisplayName", "LeftUpperLeg" },
		{ "LeftUpperLeg.Name", "ERedPillMapping::LeftUpperLeg" },
		{ "ModuleRelativePath", "Public/RedPillMappingEnum.h" },
		{ "Neck.DisplayName", "Neck" },
		{ "Neck.Name", "ERedPillMapping::Neck" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ERedPillMapping::None" },
		{ "RightFoot.DisplayName", "RightFoot" },
		{ "RightFoot.Name", "ERedPillMapping::RightFoot" },
		{ "RightHand.DisplayName", "RightHand" },
		{ "RightHand.Name", "ERedPillMapping::RightHand" },
		{ "RightIndex1.DisplayName", "RightIndex1" },
		{ "RightIndex1.Name", "ERedPillMapping::RightIndex1" },
		{ "RightIndex2.DisplayName", "RightIndex2" },
		{ "RightIndex2.Name", "ERedPillMapping::RightIndex2" },
		{ "RightIndex3.DisplayName", "RightIndex3" },
		{ "RightIndex3.Name", "ERedPillMapping::RightIndex3" },
		{ "RightLowerArm.DisplayName", "RightLowerArm" },
		{ "RightLowerArm.Name", "ERedPillMapping::RightLowerArm" },
		{ "RightLowerLeg.DisplayName", "RightLowerLeg" },
		{ "RightLowerLeg.Name", "ERedPillMapping::RightLowerLeg" },
		{ "RightMiddle1.DisplayName", "RightMiddle1" },
		{ "RightMiddle1.Name", "ERedPillMapping::RightMiddle1" },
		{ "RightMiddle2.DisplayName", "RightMiddle2" },
		{ "RightMiddle2.Name", "ERedPillMapping::RightMiddle2" },
		{ "RightMiddle3.DisplayName", "RightMiddle3" },
		{ "RightMiddle3.Name", "ERedPillMapping::RightMiddle3" },
		{ "RightPinky1.DisplayName", "RightPinky1" },
		{ "RightPinky1.Name", "ERedPillMapping::RightPinky1" },
		{ "RightPinky2.DisplayName", "RightPinky2" },
		{ "RightPinky2.Name", "ERedPillMapping::RightPinky2" },
		{ "RightPinky3.DisplayName", "RightPinky3" },
		{ "RightPinky3.Name", "ERedPillMapping::RightPinky3" },
		{ "RightRing1.DisplayName", "RightRing1" },
		{ "RightRing1.Name", "ERedPillMapping::RightRing1" },
		{ "RightRing2.DisplayName", "RightRing2" },
		{ "RightRing2.Name", "ERedPillMapping::RightRing2" },
		{ "RightRing3.DisplayName", "RightRing3" },
		{ "RightRing3.Name", "ERedPillMapping::RightRing3" },
		{ "RightShoulder.DisplayName", "RightShoulder" },
		{ "RightShoulder.Name", "ERedPillMapping::RightShoulder" },
		{ "RightThumb1.DisplayName", "RightThumb1" },
		{ "RightThumb1.Name", "ERedPillMapping::RightThumb1" },
		{ "RightThumb2.DisplayName", "RightThumb2" },
		{ "RightThumb2.Name", "ERedPillMapping::RightThumb2" },
		{ "RightThumb3.DisplayName", "RightThumb3" },
		{ "RightThumb3.Name", "ERedPillMapping::RightThumb3" },
		{ "RightToe.DisplayName", "RightToe" },
		{ "RightToe.Name", "ERedPillMapping::RightToe" },
		{ "RightUpperArm.DisplayName", "RightUpperArm" },
		{ "RightUpperArm.Name", "ERedPillMapping::RightUpperArm" },
		{ "RightUpperLeg.DisplayName", "RightUpperLeg" },
		{ "RightUpperLeg.Name", "ERedPillMapping::RightUpperLeg" },
		{ "Spine.DisplayName", "Spine" },
		{ "Spine.Name", "ERedPillMapping::Spine" },
		{ "Spine1.DisplayName", "Spine1" },
		{ "Spine1.Name", "ERedPillMapping::Spine1" },
		{ "Spine2.DisplayName", "Spine2" },
		{ "Spine2.Name", "ERedPillMapping::Spine2" },
		{ "Spine3.DisplayName", "Spine3" },
		{ "Spine3.Name", "ERedPillMapping::Spine3" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RedPillLiveLinkPlugin,
		nullptr,
		"ERedPillMapping",
		"ERedPillMapping",
		Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping()
	{
		if (!Z_Registration_Info_UEnum_ERedPillMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERedPillMapping.InnerSingleton, Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERedPillMapping.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERedPillRetargetNamingConvention;
	static UEnum* ERedPillRetargetNamingConvention_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERedPillRetargetNamingConvention.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERedPillRetargetNamingConvention.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention, Z_Construct_UPackage__Script_RedPillLiveLinkPlugin(), TEXT("ERedPillRetargetNamingConvention"));
		}
		return Z_Registration_Info_UEnum_ERedPillRetargetNamingConvention.OuterSingleton;
	}
	template<> REDPILLLIVELINKPLUGIN_API UEnum* StaticEnum<ERedPillRetargetNamingConvention>()
	{
		return ERedPillRetargetNamingConvention_StaticEnum();
	}
	struct Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention_Statics::Enumerators[] = {
		{ "ERedPillRetargetNamingConvention::Default", (int64)ERedPillRetargetNamingConvention::Default },
		{ "ERedPillRetargetNamingConvention::Metahuman", (int64)ERedPillRetargetNamingConvention::Metahuman },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention_Statics::Enum_MetaDataParams[] = {
		{ "Default.Comment", "// Default Manually set bone naming map \n" },
		{ "Default.DisplayName", "Manual" },
		{ "Default.Name", "ERedPillRetargetNamingConvention::Default" },
		{ "Default.ToolTip", "Default Manually set bone naming map" },
		{ "Metahuman.Comment", "// Use bone map used in Unreal engine and Metahuman\n" },
		{ "Metahuman.DisplayName", "Unreal/Metahuman" },
		{ "Metahuman.Name", "ERedPillRetargetNamingConvention::Metahuman" },
		{ "Metahuman.ToolTip", "Use bone map used in Unreal engine and Metahuman" },
		{ "ModuleRelativePath", "Public/RedPillMappingEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RedPillLiveLinkPlugin,
		nullptr,
		"ERedPillRetargetNamingConvention",
		"ERedPillRetargetNamingConvention",
		Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention()
	{
		if (!Z_Registration_Info_UEnum_ERedPillRetargetNamingConvention.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERedPillRetargetNamingConvention.InnerSingleton, Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERedPillRetargetNamingConvention.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_RedPillLiveLinkPlugin_Source_RedPillLiveLinkPlugin_Public_RedPillMappingEnum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RedPillLiveLinkPlugin_Source_RedPillLiveLinkPlugin_Public_RedPillMappingEnum_h_Statics::EnumInfo[] = {
		{ ERedPillMapping_StaticEnum, TEXT("ERedPillMapping"), &Z_Registration_Info_UEnum_ERedPillMapping, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2528714698U) },
		{ ERedPillRetargetNamingConvention_StaticEnum, TEXT("ERedPillRetargetNamingConvention"), &Z_Registration_Info_UEnum_ERedPillRetargetNamingConvention, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2956852199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RedPillLiveLinkPlugin_Source_RedPillLiveLinkPlugin_Public_RedPillMappingEnum_h_3680229584(TEXT("/Script/RedPillLiveLinkPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RedPillLiveLinkPlugin_Source_RedPillLiveLinkPlugin_Public_RedPillMappingEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RedPillLiveLinkPlugin_Source_RedPillLiveLinkPlugin_Public_RedPillMappingEnum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
