// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalMPIndicator/Public/UMPI_Indicator_Type_Enum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMPI_Indicator_Type_Enum() {}
// Cross Module References
	UNIVERSALMPINDICATOR_API UEnum* Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP();
	UPackage* Z_Construct_UPackage__Script_UniversalMPIndicator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UMPI_Indicator_Type_Enum_OP;
	static UEnum* UMPI_Indicator_Type_Enum_OP_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UMPI_Indicator_Type_Enum_OP.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UMPI_Indicator_Type_Enum_OP.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP, (UObject*)Z_Construct_UPackage__Script_UniversalMPIndicator(), TEXT("UMPI_Indicator_Type_Enum_OP"));
		}
		return Z_Registration_Info_UEnum_UMPI_Indicator_Type_Enum_OP.OuterSingleton;
	}
	template<> UNIVERSALMPINDICATOR_API UEnum* StaticEnum<UMPI_Indicator_Type_Enum_OP>()
	{
		return UMPI_Indicator_Type_Enum_OP_StaticEnum();
	}
	struct Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP_Statics::Enumerators[] = {
		{ "OP_Classic", (int64)OP_Classic },
		{ "OP_Circle", (int64)OP_Circle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Indicator Type" },
		{ "ModuleRelativePath", "Public/UMPI_Indicator_Type_Enum.h" },
		{ "OP_Circle.DisplayName", "Circle" },
		{ "OP_Circle.Name", "OP_Circle" },
		{ "OP_Classic.DisplayName", "Classic" },
		{ "OP_Classic.Name", "OP_Classic" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UniversalMPIndicator,
		nullptr,
		"UMPI_Indicator_Type_Enum_OP",
		"UMPI_Indicator_Type_Enum_OP",
		Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP()
	{
		if (!Z_Registration_Info_UEnum_UMPI_Indicator_Type_Enum_OP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UMPI_Indicator_Type_Enum_OP.InnerSingleton, Z_Construct_UEnum_UniversalMPIndicator_UMPI_Indicator_Type_Enum_OP_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UMPI_Indicator_Type_Enum_OP.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_Indicator_Type_Enum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_Indicator_Type_Enum_h_Statics::EnumInfo[] = {
		{ UMPI_Indicator_Type_Enum_OP_StaticEnum, TEXT("UMPI_Indicator_Type_Enum_OP"), &Z_Registration_Info_UEnum_UMPI_Indicator_Type_Enum_OP, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2800802237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_Indicator_Type_Enum_h_224691617(TEXT("/Script/UniversalMPIndicator"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_Indicator_Type_Enum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_Indicator_Type_Enum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
