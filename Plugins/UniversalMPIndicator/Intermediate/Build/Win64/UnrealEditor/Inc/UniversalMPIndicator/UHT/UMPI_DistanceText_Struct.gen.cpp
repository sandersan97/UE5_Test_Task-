// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalMPIndicator/Public/UMPI_DistanceText_Struct.h"
#include "Fonts/SlateFontInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMPI_DistanceText_Struct() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct();
	UPackage* Z_Construct_UPackage__Script_UniversalMPIndicator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UMPI_DistanceText_Struct;
class UScriptStruct* FUMPI_DistanceText_Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UMPI_DistanceText_Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UMPI_DistanceText_Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct, (UObject*)Z_Construct_UPackage__Script_UniversalMPIndicator(), TEXT("UMPI_DistanceText_Struct"));
	}
	return Z_Registration_Info_UScriptStruct_UMPI_DistanceText_Struct.OuterSingleton;
}
template<> UNIVERSALMPINDICATOR_API UScriptStruct* StaticStruct<FUMPI_DistanceText_Struct>()
{
	return FUMPI_DistanceText_Struct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Show_Distance_Text_MetaData[];
#endif
		static void NewProp_Show_Distance_Text_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Show_Distance_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Font_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Text_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UMPI_DistanceText_Struct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUMPI_DistanceText_Struct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Show_Distance_Text_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "ShowDistance Text" },
		{ "ModuleRelativePath", "Public/UMPI_DistanceText_Struct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Show_Distance_Text_SetBit(void* Obj)
	{
		((FUMPI_DistanceText_Struct*)Obj)->Show_Distance_Text = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Show_Distance_Text = { "Show_Distance_Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUMPI_DistanceText_Struct), &Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Show_Distance_Text_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Show_Distance_Text_MetaData), Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Show_Distance_Text_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Font_Settings_MetaData[] = {
		{ "Category", "Struct" },
		{ "ModuleRelativePath", "Public/UMPI_DistanceText_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Font_Settings = { "Font_Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_DistanceText_Struct, Font_Settings), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Font_Settings_MetaData), Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Font_Settings_MetaData) }; // 2074891513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Text_Color_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Text Color" },
		{ "ModuleRelativePath", "Public/UMPI_DistanceText_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Text_Color = { "Text_Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_DistanceText_Struct, Text_Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Text_Color_MetaData), Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Text_Color_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Show_Distance_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Font_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewProp_Text_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalMPIndicator,
		nullptr,
		&NewStructOps,
		"UMPI_DistanceText_Struct",
		Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::PropPointers),
		sizeof(FUMPI_DistanceText_Struct),
		alignof(FUMPI_DistanceText_Struct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct()
	{
		if (!Z_Registration_Info_UScriptStruct_UMPI_DistanceText_Struct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UMPI_DistanceText_Struct.InnerSingleton, Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UMPI_DistanceText_Struct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_DistanceText_Struct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_DistanceText_Struct_h_Statics::ScriptStructInfo[] = {
		{ FUMPI_DistanceText_Struct::StaticStruct, Z_Construct_UScriptStruct_FUMPI_DistanceText_Struct_Statics::NewStructOps, TEXT("UMPI_DistanceText_Struct"), &Z_Registration_Info_UScriptStruct_UMPI_DistanceText_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUMPI_DistanceText_Struct), 2778229714U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_DistanceText_Struct_h_3254278263(TEXT("/Script/UniversalMPIndicator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_DistanceText_Struct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_DistanceText_Struct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
