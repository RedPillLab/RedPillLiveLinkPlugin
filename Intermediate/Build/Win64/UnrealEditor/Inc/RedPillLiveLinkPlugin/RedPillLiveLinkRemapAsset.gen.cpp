// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedPillLiveLinkPlugin/Public/RedPillLiveLinkRemapAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedPillLiveLinkRemapAsset() {}
// Cross Module References
	REDPILLLIVELINKPLUGIN_API UClass* Z_Construct_UClass_URedPillLiveLinkRemapAsset_NoRegister();
	REDPILLLIVELINKPLUGIN_API UClass* Z_Construct_UClass_URedPillLiveLinkRemapAsset();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset();
	UPackage* Z_Construct_UPackage__Script_RedPillLiveLinkPlugin();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	REDPILLLIVELINKPLUGIN_API UEnum* Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	REDPILLLIVELINKPLUGIN_API UEnum* Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping();
// End Cross Module References
	void URedPillLiveLinkRemapAsset::StaticRegisterNativesURedPillLiveLinkRemapAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URedPillLiveLinkRemapAsset);
	UClass* Z_Construct_UClass_URedPillLiveLinkRemapAsset_NoRegister()
	{
		return URedPillLiveLinkRemapAsset::StaticClass();
	}
	struct Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_skeletal_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_skeletal_mesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_remapping_convention_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_remapping_convention_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_remapping_convention;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TPoseAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TPoseAnimation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_remapping_rows_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_remapping_rows_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_m_remapping_rows_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_remapping_rows_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_m_remapping_rows;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRemapAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_RedPillLiveLinkPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RedPillLiveLinkRemapAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RedPillLiveLinkRemapAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_skeletal_mesh_MetaData[] = {
		{ "Comment", "//~ End UObject Interface\n" },
		{ "ModuleRelativePath", "Public/RedPillLiveLinkRemapAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_skeletal_mesh = { "m_skeletal_mesh", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URedPillLiveLinkRemapAsset, m_skeletal_mesh_DEPRECATED), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_skeletal_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_skeletal_mesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_convention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_convention_MetaData[] = {
		{ "Category", "Bones Names" },
		{ "DisplayName", "Naming Convention" },
		{ "ModuleRelativePath", "Public/RedPillLiveLinkRemapAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_convention = { "m_remapping_convention", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URedPillLiveLinkRemapAsset, m_remapping_convention), Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillRetargetNamingConvention, METADATA_PARAMS(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_convention_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_convention_MetaData)) }; // 2956852199
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_skeleton_MetaData[] = {
		{ "Category", "Red Pill Live Link Remap" },
		{ "Comment", "// The skeleton object which we're animating\n" },
		{ "DisplayName", "Skeleton" },
		{ "ModuleRelativePath", "Public/RedPillLiveLinkRemapAsset.h" },
		{ "ToolTip", "The skeleton object which we're animating" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_skeleton = { "m_skeleton", nullptr, (EPropertyFlags)0x0010000000200005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URedPillLiveLinkRemapAsset, m_skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_TPoseAnimation_MetaData[] = {
		{ "Category", "Red Pill Live Link Remap" },
		{ "DisplayName", "TPose" },
		{ "ModuleRelativePath", "Public/RedPillLiveLinkRemapAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_TPoseAnimation = { "TPoseAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URedPillLiveLinkRemapAsset, TPoseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_TPoseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_TPoseAnimation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_rows_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_rows_ValueProp = { "m_remapping_rows", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_RedPillLiveLinkPlugin_ERedPillMapping, METADATA_PARAMS(nullptr, 0) }; // 2528714698
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp = { "m_remapping_rows_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_rows_MetaData[] = {
		{ "Category", "Red Pill Live Link Remap" },
		{ "DisplayName", "Remapping Assets" },
		{ "ModuleRelativePath", "Public/RedPillLiveLinkRemapAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_rows = { "m_remapping_rows", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URedPillLiveLinkRemapAsset, m_remapping_rows), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_rows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_rows_MetaData)) }; // 2528714698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_skeletal_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_convention_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_convention,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_TPoseAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_rows_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_rows_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::NewProp_m_remapping_rows,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URedPillLiveLinkRemapAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::ClassParams = {
		&URedPillLiveLinkRemapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URedPillLiveLinkRemapAsset()
	{
		if (!Z_Registration_Info_UClass_URedPillLiveLinkRemapAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URedPillLiveLinkRemapAsset.OuterSingleton, Z_Construct_UClass_URedPillLiveLinkRemapAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URedPillLiveLinkRemapAsset.OuterSingleton;
	}
	template<> REDPILLLIVELINKPLUGIN_API UClass* StaticClass<URedPillLiveLinkRemapAsset>()
	{
		return URedPillLiveLinkRemapAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URedPillLiveLinkRemapAsset);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_RedPillLiveLinkPlugin_Source_RedPillLiveLinkPlugin_Public_RedPillLiveLinkRemapAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RedPillLiveLinkPlugin_Source_RedPillLiveLinkPlugin_Public_RedPillLiveLinkRemapAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URedPillLiveLinkRemapAsset, URedPillLiveLinkRemapAsset::StaticClass, TEXT("URedPillLiveLinkRemapAsset"), &Z_Registration_Info_UClass_URedPillLiveLinkRemapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URedPillLiveLinkRemapAsset), 481483885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RedPillLiveLinkPlugin_Source_RedPillLiveLinkPlugin_Public_RedPillLiveLinkRemapAsset_h_1499964873(TEXT("/Script/RedPillLiveLinkPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RedPillLiveLinkPlugin_Source_RedPillLiveLinkPlugin_Public_RedPillLiveLinkRemapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RedPillLiveLinkPlugin_Source_RedPillLiveLinkPlugin_Public_RedPillLiveLinkRemapAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
