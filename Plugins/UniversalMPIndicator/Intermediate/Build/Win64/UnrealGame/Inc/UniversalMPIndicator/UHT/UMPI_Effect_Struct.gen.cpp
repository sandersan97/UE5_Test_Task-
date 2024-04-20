// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalMPIndicator/Public/UMPI_Effect_Struct.h"
#include "UniversalMPIndicator/Public/UMPI_DistanceText_Struct.h"
#include "UniversalMPIndicator/Public/UMPI_OnScreenOpacity_Struct.h"
#include "UniversalMPIndicator/Public/UMPI_OnScreenPulse_Struct.h"
#include "UniversalMPIndicator/Public/UMPI_OnScreenRotation_Struct.h"
#include "UniversalMPIndicator/Public/UMPI_OnScreenScaleSwift_Struct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMPI_Effect_Struct() {}
// Cross Module References
	UNIVERSALMPINDICATOR_API UEnum* Z_Construct_UEnum_UniversalMPIndicator_UMPI_OffScreenRotationRule_Enum_OP();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_Effect_Struct();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_OnScreenOpacity_Struct();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_OnScreenPulse_Struct();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_OnScreenRotation_Struct();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct();
	UPackage* Z_Construct_UPackage__Script_UniversalMPIndicator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UMPI_Effect_Struct;
class UScriptStruct* FUMPI_Effect_Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UMPI_Effect_Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UMPI_Effect_Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUMPI_Effect_Struct, (UObject*)Z_Construct_UPackage__Script_UniversalMPIndicator(), TEXT("UMPI_Effect_Struct"));
	}
	return Z_Registration_Info_UScriptStruct_UMPI_Effect_Struct.OuterSingleton;
}
template<> UNIVERSALMPINDICATOR_API UScriptStruct* StaticStruct<FUMPI_Effect_Struct>()
{
	return FUMPI_Effect_Struct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Off_Rotation_Rule_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Off_Rotation_Rule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Distance_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScreenScaleSwift_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnScreenScaleSwift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScreen_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnScreen_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScreenOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnScreenOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScreenPulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnScreenPulse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UMPI_Effect_Struct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUMPI_Effect_Struct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_Off_Rotation_Rule_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Off Rotation Rule" },
		{ "ModuleRelativePath", "Public/UMPI_Effect_Struct.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_Off_Rotation_Rule = { "Off_Rotation_Rule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_Effect_Struct, Off_Rotation_Rule), Z_Construct_UEnum_UniversalMPIndicator_UMPI_OffScreenRotationRule_Enum_OP, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_Off_Rotation_Rule_MetaData), Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_Off_Rotation_Rule_MetaData) }; // 3714026738
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_Distance_Text_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Distance Text" },
		{ "ModuleRelativePath", "Public/UMPI_Effect_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_Distance_Text = { "Distance_Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_Effect_Struct, Distance_Text), Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_Distance_Text_MetaData), Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_Distance_Text_MetaData) }; // 2778229714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenScaleSwift_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "On Screen Scale Swift Settings" },
		{ "ModuleRelativePath", "Public/UMPI_Effect_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenScaleSwift = { "OnScreenScaleSwift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_Effect_Struct, OnScreenScaleSwift), Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenScaleSwift_MetaData), Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenScaleSwift_MetaData) }; // 3958893389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreen_Rotation_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "OnScreen Rotation" },
		{ "ModuleRelativePath", "Public/UMPI_Effect_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreen_Rotation = { "OnScreen_Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_Effect_Struct, OnScreen_Rotation), Z_Construct_UScriptStruct_FUMPI_OnScreenRotation_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreen_Rotation_MetaData), Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreen_Rotation_MetaData) }; // 2018052707
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenOpacity_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "On Screen Opacity" },
		{ "ModuleRelativePath", "Public/UMPI_Effect_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenOpacity = { "OnScreenOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_Effect_Struct, OnScreenOpacity), Z_Construct_UScriptStruct_FUMPI_OnScreenOpacity_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenOpacity_MetaData), Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenOpacity_MetaData) }; // 414591706
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenPulse_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "On Screen Pulse" },
		{ "ModuleRelativePath", "Public/UMPI_Effect_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenPulse = { "OnScreenPulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_Effect_Struct, OnScreenPulse), Z_Construct_UScriptStruct_FUMPI_OnScreenPulse_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenPulse_MetaData), Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenPulse_MetaData) }; // 1447443942
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_Off_Rotation_Rule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_Distance_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenScaleSwift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreen_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewProp_OnScreenPulse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalMPIndicator,
		nullptr,
		&NewStructOps,
		"UMPI_Effect_Struct",
		Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::PropPointers),
		sizeof(FUMPI_Effect_Struct),
		alignof(FUMPI_Effect_Struct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUMPI_Effect_Struct()
	{
		if (!Z_Registration_Info_UScriptStruct_UMPI_Effect_Struct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UMPI_Effect_Struct.InnerSingleton, Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UMPI_Effect_Struct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_Effect_Struct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_Effect_Struct_h_Statics::ScriptStructInfo[] = {
		{ FUMPI_Effect_Struct::StaticStruct, Z_Construct_UScriptStruct_FUMPI_Effect_Struct_Statics::NewStructOps, TEXT("UMPI_Effect_Struct"), &Z_Registration_Info_UScriptStruct_UMPI_Effect_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUMPI_Effect_Struct), 1947603263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_Effect_Struct_h_3352183503(TEXT("/Script/UniversalMPIndicator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_Effect_Struct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_Effect_Struct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
