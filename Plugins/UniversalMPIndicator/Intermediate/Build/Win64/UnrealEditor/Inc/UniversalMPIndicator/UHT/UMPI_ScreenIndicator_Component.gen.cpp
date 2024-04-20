// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalMPIndicator/Public/UMPI_ScreenIndicator_Component.h"
#include "UniversalMPIndicator/Public/UMPI_IndicatorSettings_Struct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMPI_ScreenIndicator_Component() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UNIVERSALMPINDICATOR_API UClass* Z_Construct_UClass_UUMPI_ScreenIndicator_Component();
	UNIVERSALMPINDICATOR_API UClass* Z_Construct_UClass_UUMPI_ScreenIndicator_Component_NoRegister();
	UNIVERSALMPINDICATOR_API UClass* Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_NoRegister();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct();
	UPackage* Z_Construct_UPackage__Script_UniversalMPIndicator();
// End Cross Module References
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_Component::execSpawn_Indicator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn_Indicator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_Component::execSet_Indicator_ZOrder)
	{
		P_GET_OBJECT(AActor,Z_Param_targetActor);
		P_GET_STRUCT(FVector,Z_Param_targetLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Set_Indicator_ZOrder(Z_Param_targetActor,Z_Param_targetLocation,Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_Component::execCreate_Indicator)
	{
		P_GET_STRUCT(FUMPI_IndicatorSettings_Struct,Z_Param_indicatorData);
		P_GET_OBJECT(AActor,Z_Param_targetActor);
		P_GET_STRUCT(FVector,Z_Param_enteredLocation);
		P_GET_OBJECT_REF(UUMPI_ScreenIndicator_WidgetBase,Z_Param_Out_indicatorWidgetRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Create_Indicator(Z_Param_indicatorData,Z_Param_targetActor,Z_Param_enteredLocation,Z_Param_Out_indicatorWidgetRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_Component::execRemove_Indicator)
	{
		P_GET_OBJECT(UUMPI_ScreenIndicator_WidgetBase,Z_Param_indicatorWidgetRef);
		P_GET_UBOOL(Z_Param_Immediately);
		P_GET_OBJECT(AActor,Z_Param_targetActor);
		P_GET_STRUCT(FVector,Z_Param_targetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Remove_Indicator(Z_Param_indicatorWidgetRef,Z_Param_Immediately,Z_Param_targetActor,Z_Param_targetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_Component::execCheck_Actor_Is_Tracking)
	{
		P_GET_OBJECT(AActor,Z_Param_targetActor);
		P_GET_STRUCT(FVector,Z_Param_targetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Check_Actor_Is_Tracking(Z_Param_targetActor,Z_Param_targetLocation);
		P_NATIVE_END;
	}
	void UUMPI_ScreenIndicator_Component::StaticRegisterNativesUUMPI_ScreenIndicator_Component()
	{
		UClass* Class = UUMPI_ScreenIndicator_Component::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Check_Actor_Is_Tracking", &UUMPI_ScreenIndicator_Component::execCheck_Actor_Is_Tracking },
			{ "Create_Indicator", &UUMPI_ScreenIndicator_Component::execCreate_Indicator },
			{ "Remove_Indicator", &UUMPI_ScreenIndicator_Component::execRemove_Indicator },
			{ "Set_Indicator_ZOrder", &UUMPI_ScreenIndicator_Component::execSet_Indicator_ZOrder },
			{ "Spawn_Indicator", &UUMPI_ScreenIndicator_Component::execSpawn_Indicator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics
	{
		struct UMPI_ScreenIndicator_Component_eventCheck_Actor_Is_Tracking_Parms
		{
			AActor* targetActor;
			FVector targetLocation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_Component_eventCheck_Actor_Is_Tracking_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::NewProp_targetLocation = { "targetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_Component_eventCheck_Actor_Is_Tracking_Parms, targetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UMPI_ScreenIndicator_Component_eventCheck_Actor_Is_Tracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMPI_ScreenIndicator_Component_eventCheck_Actor_Is_Tracking_Parms), &Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::NewProp_targetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::NewProp_targetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "DisplayName", "Check Actor Is Already Tracking?" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_Component, nullptr, "Check_Actor_Is_Tracking", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::UMPI_ScreenIndicator_Component_eventCheck_Actor_Is_Tracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::UMPI_ScreenIndicator_Component_eventCheck_Actor_Is_Tracking_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics
	{
		struct UMPI_ScreenIndicator_Component_eventCreate_Indicator_Parms
		{
			FUMPI_IndicatorSettings_Struct indicatorData;
			AActor* targetActor;
			FVector enteredLocation;
			UUMPI_ScreenIndicator_WidgetBase* indicatorWidgetRef;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_indicatorData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_enteredLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_indicatorWidgetRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_indicatorWidgetRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::NewProp_indicatorData = { "indicatorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_Component_eventCreate_Indicator_Parms, indicatorData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct, METADATA_PARAMS(0, nullptr) }; // 4198140835
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_Component_eventCreate_Indicator_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::NewProp_enteredLocation = { "enteredLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_Component_eventCreate_Indicator_Parms, enteredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::NewProp_indicatorWidgetRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::NewProp_indicatorWidgetRef = { "indicatorWidgetRef", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_Component_eventCreate_Indicator_Parms, indicatorWidgetRef), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::NewProp_indicatorWidgetRef_MetaData), Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::NewProp_indicatorWidgetRef_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::NewProp_indicatorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::NewProp_targetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::NewProp_enteredLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::NewProp_indicatorWidgetRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "DisplayName", "Create Indicator" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_Component, nullptr, "Create_Indicator", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::UMPI_ScreenIndicator_Component_eventCreate_Indicator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::UMPI_ScreenIndicator_Component_eventCreate_Indicator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics
	{
		struct UMPI_ScreenIndicator_Component_eventRemove_Indicator_Parms
		{
			UUMPI_ScreenIndicator_WidgetBase* indicatorWidgetRef;
			bool Immediately;
			AActor* targetActor;
			FVector targetLocation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_indicatorWidgetRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_indicatorWidgetRef;
		static void NewProp_Immediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Immediately;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_indicatorWidgetRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_indicatorWidgetRef = { "indicatorWidgetRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_Component_eventRemove_Indicator_Parms, indicatorWidgetRef), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_indicatorWidgetRef_MetaData), Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_indicatorWidgetRef_MetaData) };
	void Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_Immediately_SetBit(void* Obj)
	{
		((UMPI_ScreenIndicator_Component_eventRemove_Indicator_Parms*)Obj)->Immediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_Immediately = { "Immediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMPI_ScreenIndicator_Component_eventRemove_Indicator_Parms), &Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_Immediately_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_Component_eventRemove_Indicator_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_targetLocation = { "targetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_Component_eventRemove_Indicator_Parms, targetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_indicatorWidgetRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_Immediately,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_targetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::NewProp_targetLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "DisplayName", "Remove Indicator" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_Component, nullptr, "Remove_Indicator", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::UMPI_ScreenIndicator_Component_eventRemove_Indicator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::UMPI_ScreenIndicator_Component_eventRemove_Indicator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics
	{
		struct UMPI_ScreenIndicator_Component_eventSet_Indicator_ZOrder_Parms
		{
			AActor* targetActor;
			FVector targetLocation;
			int32 ZOrder;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetLocation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_Component_eventSet_Indicator_ZOrder_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::NewProp_targetLocation = { "targetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_Component_eventSet_Indicator_ZOrder_Parms, targetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_Component_eventSet_Indicator_ZOrder_Parms, ZOrder), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::NewProp_targetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::NewProp_targetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::NewProp_ZOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "DisplayName", "Set Indicator ZOrder" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_Component, nullptr, "Set_Indicator_ZOrder", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::UMPI_ScreenIndicator_Component_eventSet_Indicator_ZOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::UMPI_ScreenIndicator_Component_eventSet_Indicator_ZOrder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Spawn_Indicator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Spawn_Indicator_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "DisplayName", "Spawn Indicator" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Spawn_Indicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_Component, nullptr, "Spawn_Indicator", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Spawn_Indicator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Spawn_Indicator_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Spawn_Indicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Spawn_Indicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUMPI_ScreenIndicator_Component);
	UClass* Z_Construct_UClass_UUMPI_ScreenIndicator_Component_NoRegister()
	{
		return UUMPI_ScreenIndicator_Component::StaticClass();
	}
	struct Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndicatorSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndicatorSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseDataTable_MetaData[];
#endif
		static void NewProp_UseDataTable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clear_All_On_End_Play_MetaData[];
#endif
		static void NewProp_Clear_All_On_End_Play_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Clear_All_On_End_Play;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTableToUse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTableToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_Row_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataTable_Row_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor_Indicator_List_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor_Indicator_List_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_Indicator_List_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Actor_Indicator_List;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Location_Indicator_List_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location_Indicator_List_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_Indicator_List_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Location_Indicator_List;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indicator_Widget_ToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Indicator_Widget_ToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndicatorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndicatorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedIndicatorWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedIndicatorWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalMPIndicator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Check_Actor_Is_Tracking, "Check_Actor_Is_Tracking" }, // 1161397567
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Create_Indicator, "Create_Indicator" }, // 1349754565
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Remove_Indicator, "Remove_Indicator" }, // 284974018
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Set_Indicator_ZOrder, "Set_Indicator_ZOrder" }, // 819377258
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_Component_Spawn_Indicator, "Spawn_Indicator" }, // 1819086481
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UMPI_ScreenIndicator_Component.h" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_IndicatorSettings_MetaData[] = {
		{ "Category", "UMPI Settings" },
		{ "DisplayName", "Indicator Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_IndicatorSettings = { "IndicatorSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_Component, IndicatorSettings), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_IndicatorSettings_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_IndicatorSettings_MetaData) }; // 4198140835
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_UseDataTable_MetaData[] = {
		{ "Category", "UMPI DataTable" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	void Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_UseDataTable_SetBit(void* Obj)
	{
		((UUMPI_ScreenIndicator_Component*)Obj)->UseDataTable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_UseDataTable = { "UseDataTable", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUMPI_ScreenIndicator_Component), &Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_UseDataTable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_UseDataTable_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_UseDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Clear_All_On_End_Play_MetaData[] = {
		{ "Category", "UMPI DataTable" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	void Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Clear_All_On_End_Play_SetBit(void* Obj)
	{
		((UUMPI_ScreenIndicator_Component*)Obj)->Clear_All_On_End_Play = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Clear_All_On_End_Play = { "Clear_All_On_End_Play", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUMPI_ScreenIndicator_Component), &Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Clear_All_On_End_Play_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Clear_All_On_End_Play_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Clear_All_On_End_Play_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_DataTableToUse_MetaData[] = {
		{ "Category", "UMPI DataTable" },
		{ "EditCondition", "UseDataTable" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_DataTableToUse = { "DataTableToUse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_Component, DataTableToUse), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_DataTableToUse_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_DataTableToUse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_DataTable_Row_Index_MetaData[] = {
		{ "Category", "UMPI DataTable" },
		{ "EditCondition", "UseDataTable" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_DataTable_Row_Index = { "DataTable_Row_Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_Component, DataTable_Row_Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_DataTable_Row_Index_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_DataTable_Row_Index_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Actor_Indicator_List_ValueProp = { "Actor_Indicator_List", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Actor_Indicator_List_Key_KeyProp = { "Actor_Indicator_List_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Actor_Indicator_List_MetaData[] = {
		{ "Category", "UMPI Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Actor_Indicator_List = { "Actor_Indicator_List", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_Component, Actor_Indicator_List), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Actor_Indicator_List_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Actor_Indicator_List_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Location_Indicator_List_ValueProp = { "Location_Indicator_List", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Location_Indicator_List_Key_KeyProp = { "Location_Indicator_List_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Location_Indicator_List_MetaData[] = {
		{ "Category", "UMPI Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Location_Indicator_List = { "Location_Indicator_List", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_Component, Location_Indicator_List), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Location_Indicator_List_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Location_Indicator_List_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Indicator_Widget_ToSpawn_MetaData[] = {
		{ "Category", "UMPI Settings" },
		{ "DisplayName", "Indicator Widget" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Indicator_Widget_ToSpawn = { "Indicator_Widget_ToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_Component, Indicator_Widget_ToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Indicator_Widget_ToSpawn_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Indicator_Widget_ToSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_IndicatorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_IndicatorData = { "IndicatorData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_Component, IndicatorData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_IndicatorData_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_IndicatorData_MetaData) }; // 4198140835
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_SpawnedIndicatorWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_SpawnedIndicatorWidget = { "SpawnedIndicatorWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_Component, SpawnedIndicatorWidget), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_SpawnedIndicatorWidget_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_SpawnedIndicatorWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Target_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Target_Actor = { "Target_Actor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_Component, Target_Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Target_Actor_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Target_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Target_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_Component.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Target_Location = { "Target_Location", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_Component, Target_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Target_Location_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Target_Location_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_IndicatorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_UseDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Clear_All_On_End_Play,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_DataTableToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_DataTable_Row_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Actor_Indicator_List_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Actor_Indicator_List_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Actor_Indicator_List,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Location_Indicator_List_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Location_Indicator_List_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Location_Indicator_List,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Indicator_Widget_ToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_IndicatorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_SpawnedIndicatorWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Target_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::NewProp_Target_Location,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMPI_ScreenIndicator_Component>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::ClassParams = {
		&UUMPI_ScreenIndicator_Component::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::Class_MetaDataParams), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUMPI_ScreenIndicator_Component()
	{
		if (!Z_Registration_Info_UClass_UUMPI_ScreenIndicator_Component.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUMPI_ScreenIndicator_Component.OuterSingleton, Z_Construct_UClass_UUMPI_ScreenIndicator_Component_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUMPI_ScreenIndicator_Component.OuterSingleton;
	}
	template<> UNIVERSALMPINDICATOR_API UClass* StaticClass<UUMPI_ScreenIndicator_Component>()
	{
		return UUMPI_ScreenIndicator_Component::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMPI_ScreenIndicator_Component);
	UUMPI_ScreenIndicator_Component::~UUMPI_ScreenIndicator_Component() {}
	struct Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_Component_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_Component_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUMPI_ScreenIndicator_Component, UUMPI_ScreenIndicator_Component::StaticClass, TEXT("UUMPI_ScreenIndicator_Component"), &Z_Registration_Info_UClass_UUMPI_ScreenIndicator_Component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUMPI_ScreenIndicator_Component), 4159591375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_Component_h_4262105624(TEXT("/Script/UniversalMPIndicator"),
		Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_Component_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_Component_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
