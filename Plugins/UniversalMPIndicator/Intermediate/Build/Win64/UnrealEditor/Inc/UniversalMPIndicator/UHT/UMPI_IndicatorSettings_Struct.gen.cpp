// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalMPIndicator/Public/UMPI_IndicatorSettings_Struct.h"
#include "UniversalMPIndicator/Public/UMPI_Effect_Struct.h"
#include "UniversalMPIndicator/Public/UMPI_IndicatorType_Struct.h"
#include "UniversalMPIndicator/Public/UMPI_OffScreen_Texture_Struct.h"
#include "UniversalMPIndicator/Public/UMPI_OnScreen_Texture_Struct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMPI_IndicatorSettings_Struct() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_Effect_Struct();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_OffScreen_Texture_Struct();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct();
	UPackage* Z_Construct_UPackage__Script_UniversalMPIndicator();
// End Cross Module References

static_assert(std::is_polymorphic<FUMPI_IndicatorSettings_Struct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUMPI_IndicatorSettings_Struct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UMPI_IndicatorSettings_Struct;
class UScriptStruct* FUMPI_IndicatorSettings_Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UMPI_IndicatorSettings_Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UMPI_IndicatorSettings_Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct, (UObject*)Z_Construct_UPackage__Script_UniversalMPIndicator(), TEXT("UMPI_IndicatorSettings_Struct"));
	}
	return Z_Registration_Info_UScriptStruct_UMPI_IndicatorSettings_Struct.OuterSingleton;
}
template<> UNIVERSALMPINDICATOR_API UScriptStruct* StaticStruct<FUMPI_IndicatorSettings_Struct>()
{
	return FUMPI_IndicatorSettings_Struct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScreen_Texture_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnScreen_Texture_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffScreen_Texture_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffScreen_Texture_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Use_Distance_Modificator_MetaData[];
#endif
		static void NewProp_Use_Distance_Modificator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Use_Distance_Modificator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_Modification_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance_Modification_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_Unit_Indicator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Distance_Unit_Indicator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arrive_Function_MetaData[];
#endif
		static void NewProp_Arrive_Function_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Arrive_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_For_Arrive_Units_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance_For_Arrive_Units;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_Based_Visibility_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance_Based_Visibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Life_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Life_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Use_Z_Offset_MetaData[];
#endif
		static void NewProp_Use_Z_Offset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Use_Z_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Additional_Z_Offsett_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Additional_Z_Offsett;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indicator_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Indicator_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUMPI_IndicatorSettings_Struct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_OnScreen_Texture_Settings_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "OnScreen Texture Settings" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_OnScreen_Texture_Settings = { "OnScreen_Texture_Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorSettings_Struct, OnScreen_Texture_Settings), Z_Construct_UScriptStruct_FUMPI_OnScreen_Texture_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_OnScreen_Texture_Settings_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_OnScreen_Texture_Settings_MetaData) }; // 2930103461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_OffScreen_Texture_Settings_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "OffScreen Texture Settings" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_OffScreen_Texture_Settings = { "OffScreen_Texture_Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorSettings_Struct, OffScreen_Texture_Settings), Z_Construct_UScriptStruct_FUMPI_OffScreen_Texture_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_OffScreen_Texture_Settings_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_OffScreen_Texture_Settings_MetaData) }; // 288693653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_ZOrder_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "ZOrder" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorSettings_Struct, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_ZOrder_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_ZOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Distance_Modificator_MetaData[] = {
		{ "Category", "Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This is the value which activate or desactivate the indicator distance Modificator. */" },
#endif
		{ "DisplayName", "Use Distance Modificator" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the value which activate or desactivate the indicator distance Modificator." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Distance_Modificator_SetBit(void* Obj)
	{
		((FUMPI_IndicatorSettings_Struct*)Obj)->Use_Distance_Modificator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Distance_Modificator = { "Use_Distance_Modificator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUMPI_IndicatorSettings_Struct), &Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Distance_Modificator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Distance_Modificator_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Distance_Modificator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Modification_Value_MetaData[] = {
		{ "Category", "Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This is the value which devide the main distance value(in Unreal Units), if divide to 100 result will be in metres (by def is 100 for metre show). */" },
#endif
		{ "DisplayName", "Distance Modification Value" },
		{ "EditCondition", "Use_Distance_Modificator" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the value which devide the main distance value(in Unreal Units), if divide to 100 result will be in metres (by def is 100 for metre show)." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Modification_Value = { "Distance_Modification_Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorSettings_Struct, Distance_Modification_Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Modification_Value_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Modification_Value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Unit_Indicator_MetaData[] = {
		{ "Category", "Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This is Distance unit indicator */" },
#endif
		{ "DisplayName", "Distance Unit Indicator" },
		{ "EditCondition", "Use_Distance_Modificator" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is Distance unit indicator" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Unit_Indicator = { "Distance_Unit_Indicator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorSettings_Struct, Distance_Unit_Indicator), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Unit_Indicator_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Unit_Indicator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Arrive_Function_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Enable Arrive Calculation Function" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Arrive_Function_SetBit(void* Obj)
	{
		((FUMPI_IndicatorSettings_Struct*)Obj)->Arrive_Function = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Arrive_Function = { "Arrive_Function", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUMPI_IndicatorSettings_Struct), &Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Arrive_Function_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Arrive_Function_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Arrive_Function_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_For_Arrive_Units_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Distance For Arrive in Units (m * 100)" },
		{ "EditCondition", "Arrive_Function" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_For_Arrive_Units = { "Distance_For_Arrive_Units", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorSettings_Struct, Distance_For_Arrive_Units), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_For_Arrive_Units_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_For_Arrive_Units_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Based_Visibility_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Distance Based Visibility" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Based_Visibility = { "Distance_Based_Visibility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorSettings_Struct, Distance_Based_Visibility), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Based_Visibility_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Based_Visibility_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Life_Time_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Life Time" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Life_Time = { "Life_Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorSettings_Struct, Life_Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Life_Time_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Life_Time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Z_Offset_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Use Bound Z Offset for Actor Target" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Z_Offset_SetBit(void* Obj)
	{
		((FUMPI_IndicatorSettings_Struct*)Obj)->Use_Z_Offset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Z_Offset = { "Use_Z_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUMPI_IndicatorSettings_Struct), &Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Z_Offset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Z_Offset_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Z_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Additional_Z_Offsett_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Additional Bound Z Offsett for Actor Target" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Additional_Z_Offsett = { "Additional_Z_Offsett", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorSettings_Struct, Additional_Z_Offsett), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Additional_Z_Offsett_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Additional_Z_Offsett_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Indicator_Type_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Indicator Type" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Indicator_Type = { "Indicator_Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorSettings_Struct, Indicator_Type), Z_Construct_UScriptStruct_FUMPI_IndicatorType_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Indicator_Type_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Indicator_Type_MetaData) }; // 3111184373
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_EffectSettings_MetaData[] = {
		{ "Category", "Struct" },
		{ "DisplayName", "Effect Settings" },
		{ "ModuleRelativePath", "Public/UMPI_IndicatorSettings_Struct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_EffectSettings = { "EffectSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUMPI_IndicatorSettings_Struct, EffectSettings), Z_Construct_UScriptStruct_FUMPI_Effect_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_EffectSettings_MetaData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_EffectSettings_MetaData) }; // 1947603263
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_OnScreen_Texture_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_OffScreen_Texture_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Distance_Modificator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Modification_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Unit_Indicator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Arrive_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_For_Arrive_Units,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Distance_Based_Visibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Life_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Use_Z_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Additional_Z_Offsett,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_Indicator_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewProp_EffectSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalMPIndicator,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UMPI_IndicatorSettings_Struct",
		Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::PropPointers),
		sizeof(FUMPI_IndicatorSettings_Struct),
		alignof(FUMPI_IndicatorSettings_Struct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct()
	{
		if (!Z_Registration_Info_UScriptStruct_UMPI_IndicatorSettings_Struct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UMPI_IndicatorSettings_Struct.InnerSingleton, Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UMPI_IndicatorSettings_Struct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_IndicatorSettings_Struct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_IndicatorSettings_Struct_h_Statics::ScriptStructInfo[] = {
		{ FUMPI_IndicatorSettings_Struct::StaticStruct, Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct_Statics::NewStructOps, TEXT("UMPI_IndicatorSettings_Struct"), &Z_Registration_Info_UScriptStruct_UMPI_IndicatorSettings_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUMPI_IndicatorSettings_Struct), 4198140835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_IndicatorSettings_Struct_h_1937736162(TEXT("/Script/UniversalMPIndicator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_IndicatorSettings_Struct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_IndicatorSettings_Struct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
