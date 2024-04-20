// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalMPIndicator/Public/UMPI_OnScreen_Texture_Struct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMPI_OnScreen_Texture_Struct() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct();
	UPackage* Z_Construct_UPackage__Script_UniversalMPIndicator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UMPI_OnScreen_Texture_Struct;
class UScriptStruct* FUMPI_OnScreen_Texture_Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UMPI_OnScreen_Texture_Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UMPI_OnScreen_Texture_Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct, (UObject*)Z_Construct_UPackage__Script_UniversalMPIndicator(), TEXT("UMPI_OnScreen_Texture_Struct"));
	}
	return Z_Registration_Info_UScriptStruct_UMPI_OnScreen_Texture_Struct.OuterSingleton;
}
template<> UNIVERSALMPINDICATOR_API UScriptStruct* StaticStruct<FUMPI_OnScreen_Texture_Struct>()
{
	return FUMPI_OnScreen_Texture_Struct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Use_Material_Image_MetaData[];
#endif
		static void NewProp_Use_Material_Image_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Use_Material_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Screen_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Screen_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Screen_Indicator_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Screen_Indicator_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Screen_Indicator_Pivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Screen_Indicator_Pivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tint_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tint_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UMPI_OnScreen_Texture_Struct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUMPI_OnScreen_Texture_Struct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Use_Material_Image_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Use Material Image" },
		{ "ModuleRelativePath", "Public/UMPI_OnScreen_Texture_Struct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Use_Material_Image_SetBit(void* Obj)
	{
		((FUMPI_OnScreen_Texture_Struct*)Obj)->Use_Material_Image = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Use_Material_Image = { "Use_Material_Image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUMPI_OnScreen_Texture_Struct), &Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Use_Material_Image_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Use_Material_Image_MetaData), Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Use_Material_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Material_Image_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Indicator Material Image" },
		{ "EditCondition", "Use_Material_Image" },
		{ "ModuleRelativePath", "Public/UMPI_OnScreen_Texture_Struct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Material_Image = { "Material_Image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_OnScreen_Texture_Struct, Material_Image), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Material_Image_MetaData), Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Material_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Texture_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Indicator Texture" },
		{ "ModuleRelativePath", "Public/UMPI_OnScreen_Texture_Struct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Texture = { "Screen_Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_OnScreen_Texture_Struct, Screen_Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Texture_MetaData), Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Texture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Indicator_Size_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Indicator Size" },
		{ "ModuleRelativePath", "Public/UMPI_OnScreen_Texture_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Indicator_Size = { "Screen_Indicator_Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_OnScreen_Texture_Struct, Screen_Indicator_Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Indicator_Size_MetaData), Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Indicator_Size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Indicator_Pivot_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Indicator Pivot" },
		{ "ModuleRelativePath", "Public/UMPI_OnScreen_Texture_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Indicator_Pivot = { "Screen_Indicator_Pivot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_OnScreen_Texture_Struct, Screen_Indicator_Pivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Indicator_Pivot_MetaData), Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Indicator_Pivot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Tint_Color_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Tint Color" },
		{ "ModuleRelativePath", "Public/UMPI_OnScreen_Texture_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Tint_Color = { "Tint_Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_OnScreen_Texture_Struct, Tint_Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Tint_Color_MetaData), Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Tint_Color_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Use_Material_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Material_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Indicator_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Screen_Indicator_Pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewProp_Tint_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalMPIndicator,
		nullptr,
		&NewStructOps,
		"UMPI_OnScreen_Texture_Struct",
		Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::PropPointers),
		sizeof(FUMPI_OnScreen_Texture_Struct),
		alignof(FUMPI_OnScreen_Texture_Struct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct()
	{
		if (!Z_Registration_Info_UScriptStruct_UMPI_OnScreen_Texture_Struct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UMPI_OnScreen_Texture_Struct.InnerSingleton, Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UMPI_OnScreen_Texture_Struct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_OnScreen_Texture_Struct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_OnScreen_Texture_Struct_h_Statics::ScriptStructInfo[] = {
		{ FUMPI_OnScreen_Texture_Struct::StaticStruct, Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct_Statics::NewStructOps, TEXT("UMPI_OnScreen_Texture_Struct"), &Z_Registration_Info_UScriptStruct_UMPI_OnScreen_Texture_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUMPI_OnScreen_Texture_Struct), 2930103461U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_OnScreen_Texture_Struct_h_2506386435(TEXT("/Script/UniversalMPIndicator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_OnScreen_Texture_Struct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_OnScreen_Texture_Struct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
