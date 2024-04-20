// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalMPIndicator/Public/UMPI_IndicatorType_Struct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMPI_IndicatorType_Struct() {}
// Cross Module References
	UNIVERSALMPINDICATOR_API UEnum* Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct();
	UPackage* Z_Construct_UPackage__Script_UniversalMPIndicator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UMPI_IndicatorType_Struct;
class UScriptStruct* FUMPI_IndicatorType_Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UMPI_IndicatorType_Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UMPI_IndicatorType_Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct, (UObject*)Z_Construct_UPackage__Script_UniversalMPIndicator(), TEXT("UMPI_IndicatorType_Struct"));
	}
	return Z_Registration_Info_UScriptStruct_UMPI_IndicatorType_Struct.OuterSingleton;
}
template<> UNIVERSALMPINDICATOR_API UScriptStruct* StaticStruct<FUMPI_IndicatorType_Struct>()
{
	return FUMPI_IndicatorType_Struct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indicator_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Indicator_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Circle_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Circle_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorType_Struct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUMPI_IndicatorType_Struct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::NewProp_Indicator_Type_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Indicator Type" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorType_Struct.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::NewProp_Indicator_Type = { "Indicator_Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorType_Struct, Indicator_Type), Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::NewProp_Indicator_Type_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::NewProp_Indicator_Type_MetaData) }; // 2800802237
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::NewProp_Circle_Radius_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Circle Radius" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorType_Struct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::NewProp_Circle_Radius = { "Circle_Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorType_Struct, Circle_Radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::NewProp_Circle_Radius_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::NewProp_Circle_Radius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::NewProp_Indicator_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::NewProp_Circle_Radius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalMPIndicator,
		nullptr,
		&NewStructOps,
		"UMPI_IndicatorType_Struct",
		Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::PropPointers),
		sizeof(FUMPI_IndicatorType_Struct),
		alignof(FUMPI_IndicatorType_Struct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct()
	{
		if (!Z_Registration_Info_UScriptStruct_UMPI_IndicatorType_Struct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UMPI_IndicatorType_Struct.InnerSingleton, Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UMPI_IndicatorType_Struct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_IndicatorType_Struct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_IndicatorType_Struct_h_Statics::ScriptStructInfo[] = {
		{ FUMPI_IndicatorType_Struct::StaticStruct, Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct_Statics::NewStructOps, TEXT("UMPI_IndicatorType_Struct"), &Z_Registration_Info_UScriptStruct_UMPI_IndicatorType_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUMPI_IndicatorType_Struct), 3111184373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_IndicatorType_Struct_h_1716582169(TEXT("/Script/UniversalMPIndicator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_IndicatorType_Struct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_IndicatorType_Struct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
