// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalMPIndicator/Public/UMPI_OnScreenScaleSwift_Struct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMPI_OnScreenScaleSwift_Struct() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct();
	UPackage* Z_Construct_UPackage__Script_UniversalMPIndicator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UMPI_OnScreenScaleSwift_Struct;
class UScriptStruct* FUMPI_OnScreenScaleSwift_Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UMPI_OnScreenScaleSwift_Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UMPI_OnScreenScaleSwift_Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct, (UObject*)Z_Construct_UPackage__Script_UniversalMPIndicator(), TEXT("UMPI_OnScreenScaleSwift_Struct"));
	}
	return Z_Registration_Info_UScriptStruct_UMPI_OnScreenScaleSwift_Struct.OuterSingleton;
}
template<> UNIVERSALMPINDICATOR_API UScriptStruct* StaticStruct<FUMPI_OnScreenScaleSwift_Struct>()
{
	return FUMPI_OnScreenScaleSwift_Struct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Use_MetaData[];
#endif
		static void NewProp_Use_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Use;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Init_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Init_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Do_Once_MetaData[];
#endif
		static void NewProp_Do_Once_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Do_Once;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UMPI_OnScreenScaleSwift_Struct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUMPI_OnScreenScaleSwift_Struct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Use_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Use" },
		{ "ModuleRelativePath", "Public/UMPI_OnScreenScaleSwift_Struct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Use_SetBit(void* Obj)
	{
		((FUMPI_OnScreenScaleSwift_Struct*)Obj)->Use = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Use = { "Use", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUMPI_OnScreenScaleSwift_Struct), &Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Use_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Use_MetaData), Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Use_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Init_Scale_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Init Scale" },
		{ "ModuleRelativePath", "Public/UMPI_OnScreenScaleSwift_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Init_Scale = { "Init_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_OnScreenScaleSwift_Struct, Init_Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Init_Scale_MetaData), Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Init_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Speed" },
		{ "ModuleRelativePath", "Public/UMPI_OnScreenScaleSwift_Struct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_OnScreenScaleSwift_Struct, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Speed_MetaData), Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Do_Once_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Do Once" },
		{ "ModuleRelativePath", "Public/UMPI_OnScreenScaleSwift_Struct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Do_Once_SetBit(void* Obj)
	{
		((FUMPI_OnScreenScaleSwift_Struct*)Obj)->Do_Once = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Do_Once = { "Do_Once", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUMPI_OnScreenScaleSwift_Struct), &Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Do_Once_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Do_Once_MetaData), Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Do_Once_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Use,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Init_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewProp_Do_Once,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalMPIndicator,
		nullptr,
		&NewStructOps,
		"UMPI_OnScreenScaleSwift_Struct",
		Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::PropPointers),
		sizeof(FUMPI_OnScreenScaleSwift_Struct),
		alignof(FUMPI_OnScreenScaleSwift_Struct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct()
	{
		if (!Z_Registration_Info_UScriptStruct_UMPI_OnScreenScaleSwift_Struct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UMPI_OnScreenScaleSwift_Struct.InnerSingleton, Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UMPI_OnScreenScaleSwift_Struct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_OnScreenScaleSwift_Struct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_OnScreenScaleSwift_Struct_h_Statics::ScriptStructInfo[] = {
		{ FUMPI_OnScreenScaleSwift_Struct::StaticStruct, Z_Construct_UScriptStruct_FUMPI_OnScreenScaleSwift_Struct_Statics::NewStructOps, TEXT("UMPI_OnScreenScaleSwift_Struct"), &Z_Registration_Info_UScriptStruct_UMPI_OnScreenScaleSwift_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUMPI_OnScreenScaleSwift_Struct), 3958893389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_OnScreenScaleSwift_Struct_h_2379578079(TEXT("/Script/UniversalMPIndicator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_OnScreenScaleSwift_Struct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_OnScreenScaleSwift_Struct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS