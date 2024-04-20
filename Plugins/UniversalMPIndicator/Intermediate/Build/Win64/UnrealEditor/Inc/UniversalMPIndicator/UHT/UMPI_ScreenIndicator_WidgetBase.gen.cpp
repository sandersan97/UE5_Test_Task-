// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalMPIndicator/Public/UMPI_ScreenIndicator_WidgetBase.h"
#include "UniversalMPIndicator/Public/UMPI_IndicatorSettings_Struct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMPI_ScreenIndicator_WidgetBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UNIVERSALMPINDICATOR_API UClass* Z_Construct_UClass_UUMPI_ScreenIndicator_Component_NoRegister();
	UNIVERSALMPINDICATOR_API UClass* Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase();
	UNIVERSALMPINDICATOR_API UClass* Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_NoRegister();
	UNIVERSALMPINDICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct();
	UPackage* Z_Construct_UPackage__Script_UniversalMPIndicator();
// End Cross Module References
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execFind_Closest_Edge)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Find_Closest_Edge(Z_Param_Out_angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execOffScr_Distance_TextF)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Current_Angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OffScr_Distance_TextF(Z_Param_Current_Angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execOffScreen_Position_And_Angle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OffScreen_Position_And_Angle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execOFFScrVerticalBoxVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=P_THIS->OFFScrVerticalBoxVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execCalculate_Off_Screen_Position)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OffScreen_Position);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Render_Angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Calculate_Off_Screen_Position(Z_Param_Out_OffScreen_Position,Z_Param_Out_Render_Angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execOffScreen_Edge_Clamp)
	{
		P_GET_STRUCT(FVector2D,Z_Param_entered2D_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->OffScreen_Edge_Clamp(Z_Param_entered2D_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execCalculate_Actor_Bound_Offset)
	{
		P_GET_STRUCT(FVector,Z_Param_enteredVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Calculate_Actor_Bound_Offset(Z_Param_enteredVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execOnScrVerticalBoxVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=P_THIS->OnScrVerticalBoxVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execPulse_OnScreen_Effect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pulse_OnScreen_Effect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execFadeIn_OnScreen_Effect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeIn_OnScreen_Effect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execRotation_OnScreen_Effect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rotation_OnScreen_Effect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execOnScreen_Scale_Swift)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnScreen_Scale_Swift();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execOnScreen_Edge_Clamp)
	{
		P_GET_STRUCT(FVector2D,Z_Param_enteredValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->OnScreen_Edge_Clamp(Z_Param_enteredValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execSet_OnScreen_Position)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Set_OnScreen_Position();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execCheck_Distance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Check_Distance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execBind_Indicator_Visibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=P_THIS->Bind_Indicator_Visibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execSet_Pivot_Of_Indicators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Set_Pivot_Of_Indicators();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execSet_Indicator_Textures)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Set_Indicator_Textures();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execTake_Target_Location)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Take_Target_Location();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execCheck_Target_Is_In_Viewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Check_Target_Is_In_Viewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execBind_Distance_Text_Visibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=P_THIS->Bind_Distance_Text_Visibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execBind_Distance_Text_Value)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->Bind_Distance_Text_Value();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execRemove_Itself_from_Indicator_List)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Remove_Itself_from_Indicator_List();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMPI_ScreenIndicator_WidgetBase::execCustom_Remove_From_Parent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Custom_Remove_From_Parent();
		P_NATIVE_END;
	}
	void UUMPI_ScreenIndicator_WidgetBase::StaticRegisterNativesUUMPI_ScreenIndicator_WidgetBase()
	{
		UClass* Class = UUMPI_ScreenIndicator_WidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Bind_Distance_Text_Value", &UUMPI_ScreenIndicator_WidgetBase::execBind_Distance_Text_Value },
			{ "Bind_Distance_Text_Visibility", &UUMPI_ScreenIndicator_WidgetBase::execBind_Distance_Text_Visibility },
			{ "Bind_Indicator_Visibility", &UUMPI_ScreenIndicator_WidgetBase::execBind_Indicator_Visibility },
			{ "Calculate_Actor_Bound_Offset", &UUMPI_ScreenIndicator_WidgetBase::execCalculate_Actor_Bound_Offset },
			{ "Calculate_Off_Screen_Position", &UUMPI_ScreenIndicator_WidgetBase::execCalculate_Off_Screen_Position },
			{ "Check_Distance", &UUMPI_ScreenIndicator_WidgetBase::execCheck_Distance },
			{ "Check_Target_Is_In_Viewport", &UUMPI_ScreenIndicator_WidgetBase::execCheck_Target_Is_In_Viewport },
			{ "Custom_Remove_From_Parent", &UUMPI_ScreenIndicator_WidgetBase::execCustom_Remove_From_Parent },
			{ "FadeIn_OnScreen_Effect", &UUMPI_ScreenIndicator_WidgetBase::execFadeIn_OnScreen_Effect },
			{ "Find_Closest_Edge", &UUMPI_ScreenIndicator_WidgetBase::execFind_Closest_Edge },
			{ "OffScr_Distance_TextF", &UUMPI_ScreenIndicator_WidgetBase::execOffScr_Distance_TextF },
			{ "OffScreen_Edge_Clamp", &UUMPI_ScreenIndicator_WidgetBase::execOffScreen_Edge_Clamp },
			{ "OffScreen_Position_And_Angle", &UUMPI_ScreenIndicator_WidgetBase::execOffScreen_Position_And_Angle },
			{ "OFFScrVerticalBoxVisibility", &UUMPI_ScreenIndicator_WidgetBase::execOFFScrVerticalBoxVisibility },
			{ "OnScreen_Edge_Clamp", &UUMPI_ScreenIndicator_WidgetBase::execOnScreen_Edge_Clamp },
			{ "OnScreen_Scale_Swift", &UUMPI_ScreenIndicator_WidgetBase::execOnScreen_Scale_Swift },
			{ "OnScrVerticalBoxVisibility", &UUMPI_ScreenIndicator_WidgetBase::execOnScrVerticalBoxVisibility },
			{ "Pulse_OnScreen_Effect", &UUMPI_ScreenIndicator_WidgetBase::execPulse_OnScreen_Effect },
			{ "Remove_Itself_from_Indicator_List", &UUMPI_ScreenIndicator_WidgetBase::execRemove_Itself_from_Indicator_List },
			{ "Rotation_OnScreen_Effect", &UUMPI_ScreenIndicator_WidgetBase::execRotation_OnScreen_Effect },
			{ "Set_Indicator_Textures", &UUMPI_ScreenIndicator_WidgetBase::execSet_Indicator_Textures },
			{ "Set_OnScreen_Position", &UUMPI_ScreenIndicator_WidgetBase::execSet_OnScreen_Position },
			{ "Set_Pivot_Of_Indicators", &UUMPI_ScreenIndicator_WidgetBase::execSet_Pivot_Of_Indicators },
			{ "Take_Target_Location", &UUMPI_ScreenIndicator_WidgetBase::execTake_Target_Location },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventBind_Distance_Text_Value_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventBind_Distance_Text_Value_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Bind_Distance_Text_Value", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::UMPI_ScreenIndicator_WidgetBase_eventBind_Distance_Text_Value_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::UMPI_ScreenIndicator_WidgetBase_eventBind_Distance_Text_Value_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventBind_Distance_Text_Visibility_Parms
		{
			ESlateVisibility ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventBind_Distance_Text_Visibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 1295612096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Bind_Distance_Text_Visibility", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::UMPI_ScreenIndicator_WidgetBase_eventBind_Distance_Text_Visibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::UMPI_ScreenIndicator_WidgetBase_eventBind_Distance_Text_Visibility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventBind_Indicator_Visibility_Parms
		{
			ESlateVisibility ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventBind_Indicator_Visibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 1295612096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Bind_Indicator_Visibility", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::UMPI_ScreenIndicator_WidgetBase_eventBind_Indicator_Visibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::UMPI_ScreenIndicator_WidgetBase_eventBind_Indicator_Visibility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventCalculate_Actor_Bound_Offset_Parms
		{
			FVector enteredVector;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_enteredVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::NewProp_enteredVector = { "enteredVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventCalculate_Actor_Bound_Offset_Parms, enteredVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventCalculate_Actor_Bound_Offset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::NewProp_enteredVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OnScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Calculate_Actor_Bound_Offset", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::UMPI_ScreenIndicator_WidgetBase_eventCalculate_Actor_Bound_Offset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::UMPI_ScreenIndicator_WidgetBase_eventCalculate_Actor_Bound_Offset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventCalculate_Off_Screen_Position_Parms
		{
			FVector2D OffScreen_Position;
			float Render_Angle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffScreen_Position;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Render_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::NewProp_OffScreen_Position = { "OffScreen_Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventCalculate_Off_Screen_Position_Parms, OffScreen_Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::NewProp_Render_Angle = { "Render_Angle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventCalculate_Off_Screen_Position_Parms, Render_Angle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::NewProp_OffScreen_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::NewProp_Render_Angle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OFFScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Calculate_Off_Screen_Position", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::UMPI_ScreenIndicator_WidgetBase_eventCalculate_Off_Screen_Position_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::UMPI_ScreenIndicator_WidgetBase_eventCalculate_Off_Screen_Position_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventCheck_Distance_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UMPI_ScreenIndicator_WidgetBase_eventCheck_Distance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMPI_ScreenIndicator_WidgetBase_eventCheck_Distance_Parms), &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Check_Distance", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::UMPI_ScreenIndicator_WidgetBase_eventCheck_Distance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::UMPI_ScreenIndicator_WidgetBase_eventCheck_Distance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventCheck_Target_Is_In_Viewport_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UMPI_ScreenIndicator_WidgetBase_eventCheck_Target_Is_In_Viewport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMPI_ScreenIndicator_WidgetBase_eventCheck_Target_Is_In_Viewport_Parms), &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Check_Target_Is_In_Viewport", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::UMPI_ScreenIndicator_WidgetBase_eventCheck_Target_Is_In_Viewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::UMPI_ScreenIndicator_WidgetBase_eventCheck_Target_Is_In_Viewport_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Custom_Remove_From_Parent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Custom_Remove_From_Parent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Custom_Remove_From_Parent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Custom_Remove_From_Parent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Custom_Remove_From_Parent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Custom_Remove_From_Parent_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Custom_Remove_From_Parent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Custom_Remove_From_Parent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_FadeIn_OnScreen_Effect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_FadeIn_OnScreen_Effect_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OnScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_FadeIn_OnScreen_Effect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "FadeIn_OnScreen_Effect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_FadeIn_OnScreen_Effect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_FadeIn_OnScreen_Effect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_FadeIn_OnScreen_Effect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_FadeIn_OnScreen_Effect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventFind_Closest_Edge_Parms
		{
			float angle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::NewProp_angle = { "angle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventFind_Closest_Edge_Parms, angle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::NewProp_angle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OFFScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Find_Closest_Edge", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::UMPI_ScreenIndicator_WidgetBase_eventFind_Closest_Edge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::UMPI_ScreenIndicator_WidgetBase_eventFind_Closest_Edge_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventOffScr_Distance_TextF_Parms
		{
			float Current_Angle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Current_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::NewProp_Current_Angle = { "Current_Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventOffScr_Distance_TextF_Parms, Current_Angle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::NewProp_Current_Angle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OFFScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "OffScr_Distance_TextF", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::UMPI_ScreenIndicator_WidgetBase_eventOffScr_Distance_TextF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::UMPI_ScreenIndicator_WidgetBase_eventOffScr_Distance_TextF_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventOffScreen_Edge_Clamp_Parms
		{
			FVector2D entered2D_Size;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_entered2D_Size;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::NewProp_entered2D_Size = { "entered2D_Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventOffScreen_Edge_Clamp_Parms, entered2D_Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventOffScreen_Edge_Clamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::NewProp_entered2D_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OFFScreen Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------ OFF Screen Functions Down --------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------------------------------ OFF Screen Functions Down --------------------------------------------------------------------------------------" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "OffScreen_Edge_Clamp", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::UMPI_ScreenIndicator_WidgetBase_eventOffScreen_Edge_Clamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::UMPI_ScreenIndicator_WidgetBase_eventOffScreen_Edge_Clamp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Position_And_Angle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Position_And_Angle_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OFFScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Position_And_Angle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "OffScreen_Position_And_Angle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Position_And_Angle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Position_And_Angle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Position_And_Angle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Position_And_Angle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventOFFScrVerticalBoxVisibility_Parms
		{
			ESlateVisibility ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventOFFScrVerticalBoxVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 1295612096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OFFScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "OFFScrVerticalBoxVisibility", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::UMPI_ScreenIndicator_WidgetBase_eventOFFScrVerticalBoxVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::UMPI_ScreenIndicator_WidgetBase_eventOFFScrVerticalBoxVisibility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventOnScreen_Edge_Clamp_Parms
		{
			FVector2D enteredValue;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_enteredValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::NewProp_enteredValue = { "enteredValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventOnScreen_Edge_Clamp_Parms, enteredValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventOnScreen_Edge_Clamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::NewProp_enteredValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OnScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "OnScreen_Edge_Clamp", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::UMPI_ScreenIndicator_WidgetBase_eventOnScreen_Edge_Clamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::UMPI_ScreenIndicator_WidgetBase_eventOnScreen_Edge_Clamp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Scale_Swift_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Scale_Swift_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OnScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Scale_Swift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "OnScreen_Scale_Swift", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Scale_Swift_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Scale_Swift_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Scale_Swift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Scale_Swift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics
	{
		struct UMPI_ScreenIndicator_WidgetBase_eventOnScrVerticalBoxVisibility_Parms
		{
			ESlateVisibility ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMPI_ScreenIndicator_WidgetBase_eventOnScrVerticalBoxVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 1295612096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OnScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "OnScrVerticalBoxVisibility", nullptr, nullptr, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::UMPI_ScreenIndicator_WidgetBase_eventOnScrVerticalBoxVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::UMPI_ScreenIndicator_WidgetBase_eventOnScrVerticalBoxVisibility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Pulse_OnScreen_Effect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Pulse_OnScreen_Effect_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OnScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Pulse_OnScreen_Effect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Pulse_OnScreen_Effect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Pulse_OnScreen_Effect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Pulse_OnScreen_Effect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Pulse_OnScreen_Effect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Pulse_OnScreen_Effect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Remove_Itself_from_Indicator_List_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Remove_Itself_from_Indicator_List_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Remove_Itself_from_Indicator_List_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Remove_Itself_from_Indicator_List", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Remove_Itself_from_Indicator_List_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Remove_Itself_from_Indicator_List_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Remove_Itself_from_Indicator_List()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Remove_Itself_from_Indicator_List_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Rotation_OnScreen_Effect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Rotation_OnScreen_Effect_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OnScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Rotation_OnScreen_Effect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Rotation_OnScreen_Effect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Rotation_OnScreen_Effect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Rotation_OnScreen_Effect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Rotation_OnScreen_Effect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Rotation_OnScreen_Effect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Indicator_Textures_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Indicator_Textures_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Indicator_Textures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Set_Indicator_Textures", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Indicator_Textures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Indicator_Textures_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Indicator_Textures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Indicator_Textures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_OnScreen_Position_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_OnScreen_Position_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI OnScreen Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------  ON Screen Functions Down  ------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------------------------------------------------------------  ON Screen Functions Down  ------------------------------------------------------------" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_OnScreen_Position_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Set_OnScreen_Position", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_OnScreen_Position_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_OnScreen_Position_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_OnScreen_Position()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_OnScreen_Position_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Pivot_Of_Indicators_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Pivot_Of_Indicators_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Pivot_Of_Indicators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Set_Pivot_Of_Indicators", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Pivot_Of_Indicators_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Pivot_Of_Indicators_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Pivot_Of_Indicators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Pivot_Of_Indicators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Take_Target_Location_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Take_Target_Location_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMPI Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Take_Target_Location_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, nullptr, "Take_Target_Location", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Take_Target_Location_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Take_Target_Location_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Take_Target_Location()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Take_Target_Location_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUMPI_ScreenIndicator_WidgetBase);
	UClass* Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_NoRegister()
	{
		return UUMPI_ScreenIndicator_WidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeOut_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FadeOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScr_Distance_Canvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OnScr_Distance_Canvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScr_Distance_Text_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OnScr_Distance_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScr_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OnScr_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScrVertical_Box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OnScrVertical_Box;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffScr_Distance_Canvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OffScr_Distance_Canvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffScr_Distance_Text_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OffScr_Distance_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffScr_Texture_Canvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OffScr_Texture_Canvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffScr_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OffScr_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndicatorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndicatorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indicator_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Indicator_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScreen_Scale_From_To_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnScreen_Scale_From_To_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScreen_FadeIn_Opacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OnScreen_FadeIn_Opacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFromToEffect_is_Done_MetaData[];
#endif
		static void NewProp_ScaleFromToEffect_is_Done_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScaleFromToEffect_is_Done;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Is_Target_Selected_MetaData[];
#endif
		static void NewProp_Is_Target_Selected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Is_Target_Selected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primary_Screen_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Primary_Screen_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spawn_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spawn_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Degree_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Degree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_On_Off_Screen_MetaData[];
#endif
		static void NewProp_On_Off_Screen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_On_Off_Screen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indicator_Visibility_Bind_MetaData[];
#endif
		static void NewProp_Indicator_Visibility_Bind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Indicator_Visibility_Bind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edge_Interp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Edge_Interp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndicatorTickFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndicatorTickFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_ActorP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target_ActorP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_LocationP_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target_LocationP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalMPIndicator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Value, "Bind_Distance_Text_Value" }, // 1316667034
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Distance_Text_Visibility, "Bind_Distance_Text_Visibility" }, // 3748822657
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Bind_Indicator_Visibility, "Bind_Indicator_Visibility" }, // 1767075231
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Actor_Bound_Offset, "Calculate_Actor_Bound_Offset" }, // 68806096
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Calculate_Off_Screen_Position, "Calculate_Off_Screen_Position" }, // 2147658139
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Distance, "Check_Distance" }, // 1682494066
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Check_Target_Is_In_Viewport, "Check_Target_Is_In_Viewport" }, // 3093811680
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Custom_Remove_From_Parent, "Custom_Remove_From_Parent" }, // 2327052495
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_FadeIn_OnScreen_Effect, "FadeIn_OnScreen_Effect" }, // 4215956249
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Find_Closest_Edge, "Find_Closest_Edge" }, // 3820907720
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScr_Distance_TextF, "OffScr_Distance_TextF" }, // 4008176776
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Edge_Clamp, "OffScreen_Edge_Clamp" }, // 3930363624
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OffScreen_Position_And_Angle, "OffScreen_Position_And_Angle" }, // 3404040025
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OFFScrVerticalBoxVisibility, "OFFScrVerticalBoxVisibility" }, // 3791985216
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Edge_Clamp, "OnScreen_Edge_Clamp" }, // 194437559
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScreen_Scale_Swift, "OnScreen_Scale_Swift" }, // 1261940559
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_OnScrVerticalBoxVisibility, "OnScrVerticalBoxVisibility" }, // 1362362500
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Pulse_OnScreen_Effect, "Pulse_OnScreen_Effect" }, // 52782868
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Remove_Itself_from_Indicator_List, "Remove_Itself_from_Indicator_List" }, // 4086236096
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Rotation_OnScreen_Effect, "Rotation_OnScreen_Effect" }, // 1002362449
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Indicator_Textures, "Set_Indicator_Textures" }, // 805785452
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_OnScreen_Position, "Set_OnScreen_Position" }, // 1557007906
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Set_Pivot_Of_Indicators, "Set_Pivot_Of_Indicators" }, // 668177526
		{ &Z_Construct_UFunction_UUMPI_ScreenIndicator_WidgetBase_Take_Target_Location, "Take_Target_Location" }, // 3259838552
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UMPI_ScreenIndicator_WidgetBase.h" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_FadeOut_MetaData[] = {
		{ "BindWidgetAnim", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------  Meta Binded Values ------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------------------------------------------------------------  Meta Binded Values ------------------------------------------------------------" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_FadeOut = { "FadeOut", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, FadeOut), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_FadeOut_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_FadeOut_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Distance_Canvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UMPI OnScreen Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Distance_Canvas = { "OnScr_Distance_Canvas", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, OnScr_Distance_Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Distance_Canvas_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Distance_Canvas_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Distance_Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UMPI OnScreen Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Distance_Text = { "OnScr_Distance_Text", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, OnScr_Distance_Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Distance_Text_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Distance_Text_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Texture_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UMPI OnScreen Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Texture = { "OnScr_Texture", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, OnScr_Texture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Texture_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Texture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScrVertical_Box_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UMPI OnScreen Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScrVertical_Box = { "OnScrVertical_Box", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, OnScrVertical_Box), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScrVertical_Box_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScrVertical_Box_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Distance_Canvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UMPI OFF_Screen Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Distance_Canvas = { "OffScr_Distance_Canvas", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, OffScr_Distance_Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Distance_Canvas_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Distance_Canvas_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Distance_Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UMPI OFF_Screen Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Distance_Text = { "OffScr_Distance_Text", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, OffScr_Distance_Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Distance_Text_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Distance_Text_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Texture_Canvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UMPI OFF_Screen Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Texture_Canvas = { "OffScr_Texture_Canvas", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, OffScr_Texture_Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Texture_Canvas_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Texture_Canvas_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Texture_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UMPI OFF_Screen Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Texture = { "OffScr_Texture", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, OffScr_Texture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Texture_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Texture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_IndicatorData_MetaData[] = {
		{ "Category", "UMPI Calculation Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------  Normal Created Values ------------------------------------------------------------\n" },
#endif
		{ "DisplayName", "Indicator Data" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------------------------------------------------------------  Normal Created Values ------------------------------------------------------------" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_IndicatorData = { "IndicatorData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, IndicatorData), Z_Construct_UScriptStruct_FUMPI_IndicatorSettings_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_IndicatorData_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_IndicatorData_MetaData) }; // 4198140835
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Indicator_Component_MetaData[] = {
		{ "Category", "UMPI Settings" },
		{ "DisplayName", "Indicator Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Indicator_Component = { "Indicator_Component", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, Indicator_Component), Z_Construct_UClass_UUMPI_ScreenIndicator_Component_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Indicator_Component_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Indicator_Component_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_Actor_MetaData[] = {
		{ "Category", "UMPI Settings" },
		{ "DisplayName", "Indicator Data" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_Actor = { "Target_Actor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, Target_Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_Actor_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_Location_MetaData[] = {
		{ "Category", "UMPI Settings" },
		{ "DisplayName", "Indicator Data" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_Location = { "Target_Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, Target_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_Location_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScreen_Scale_From_To_Effect_MetaData[] = {
		{ "Category", "UMPI OnScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScreen_Scale_From_To_Effect = { "OnScreen_Scale_From_To_Effect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, OnScreen_Scale_From_To_Effect), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScreen_Scale_From_To_Effect_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScreen_Scale_From_To_Effect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScreen_FadeIn_Opacity_MetaData[] = {
		{ "Category", "UMPI OnScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScreen_FadeIn_Opacity = { "OnScreen_FadeIn_Opacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, OnScreen_FadeIn_Opacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScreen_FadeIn_Opacity_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScreen_FadeIn_Opacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_ScaleFromToEffect_is_Done_MetaData[] = {
		{ "Category", "UMPI OnScreen Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_ScaleFromToEffect_is_Done_SetBit(void* Obj)
	{
		((UUMPI_ScreenIndicator_WidgetBase*)Obj)->ScaleFromToEffect_is_Done = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_ScaleFromToEffect_is_Done = { "ScaleFromToEffect_is_Done", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUMPI_ScreenIndicator_WidgetBase), &Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_ScaleFromToEffect_is_Done_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_ScaleFromToEffect_is_Done_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_ScaleFromToEffect_is_Done_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Is_Target_Selected_MetaData[] = {
		{ "Category", "UMPI Calculation Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Is_Target_Selected_SetBit(void* Obj)
	{
		((UUMPI_ScreenIndicator_WidgetBase*)Obj)->Is_Target_Selected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Is_Target_Selected = { "Is_Target_Selected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUMPI_ScreenIndicator_WidgetBase), &Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Is_Target_Selected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Is_Target_Selected_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Is_Target_Selected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Primary_Screen_Position_MetaData[] = {
		{ "Category", "UMPI Calculation Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Primary_Screen_Position = { "Primary_Screen_Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, Primary_Screen_Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Primary_Screen_Position_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Primary_Screen_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Spawn_Time_MetaData[] = {
		{ "Category", "UMPI Calculation Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Spawn_Time = { "Spawn_Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, Spawn_Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Spawn_Time_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Spawn_Time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Degree_MetaData[] = {
		{ "Category", "UMPI Calculation Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Degree = { "Degree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, Degree), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Degree_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Degree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_On_Off_Screen_MetaData[] = {
		{ "Category", "UMPI Calculation Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_On_Off_Screen_SetBit(void* Obj)
	{
		((UUMPI_ScreenIndicator_WidgetBase*)Obj)->On_Off_Screen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_On_Off_Screen = { "On_Off_Screen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUMPI_ScreenIndicator_WidgetBase), &Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_On_Off_Screen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_On_Off_Screen_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_On_Off_Screen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Center_Direction_MetaData[] = {
		{ "Category", "UMPI Calculation Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Center_Direction = { "Center_Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, Center_Direction), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Center_Direction_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Center_Direction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Indicator_Visibility_Bind_MetaData[] = {
		{ "Category", "UMPI Calculation Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Indicator_Visibility_Bind_SetBit(void* Obj)
	{
		((UUMPI_ScreenIndicator_WidgetBase*)Obj)->Indicator_Visibility_Bind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Indicator_Visibility_Bind = { "Indicator_Visibility_Bind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUMPI_ScreenIndicator_WidgetBase), &Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Indicator_Visibility_Bind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Indicator_Visibility_Bind_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Indicator_Visibility_Bind_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Edge_Interp_MetaData[] = {
		{ "Category", "UMPI Calculation Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Edge_Interp = { "Edge_Interp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, Edge_Interp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Edge_Interp_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Edge_Interp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_IndicatorTickFrequency_MetaData[] = {
		{ "Category", "UMPI Calculation Settings" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_IndicatorTickFrequency = { "IndicatorTickFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, IndicatorTickFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_IndicatorTickFrequency_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_IndicatorTickFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_ActorP_MetaData[] = {
		{ "Category", "UMPI Calculation Settings" },
		{ "DisplayName", "Target ActorP" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_ActorP = { "Target_ActorP", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, Target_ActorP), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_ActorP_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_ActorP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_LocationP_MetaData[] = {
		{ "Category", "UMPI Calculation Settings" },
		{ "DisplayName", "Target LocationP" },
		{ "ModuleRelativePath", "Public/UMPI_ScreenIndicator_WidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_LocationP = { "Target_LocationP", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMPI_ScreenIndicator_WidgetBase, Target_LocationP), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_LocationP_MetaData), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_LocationP_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_FadeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Distance_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Distance_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScr_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScrVertical_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Distance_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Distance_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Texture_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OffScr_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_IndicatorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Indicator_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScreen_Scale_From_To_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_OnScreen_FadeIn_Opacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_ScaleFromToEffect_is_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Is_Target_Selected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Primary_Screen_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Spawn_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Degree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_On_Off_Screen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Center_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Indicator_Visibility_Bind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Edge_Interp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_IndicatorTickFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_ActorP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::NewProp_Target_LocationP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMPI_ScreenIndicator_WidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::ClassParams = {
		&UUMPI_ScreenIndicator_WidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase()
	{
		if (!Z_Registration_Info_UClass_UUMPI_ScreenIndicator_WidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUMPI_ScreenIndicator_WidgetBase.OuterSingleton, Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUMPI_ScreenIndicator_WidgetBase.OuterSingleton;
	}
	template<> UNIVERSALMPINDICATOR_API UClass* StaticClass<UUMPI_ScreenIndicator_WidgetBase>()
	{
		return UUMPI_ScreenIndicator_WidgetBase::StaticClass();
	}
	UUMPI_ScreenIndicator_WidgetBase::UUMPI_ScreenIndicator_WidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMPI_ScreenIndicator_WidgetBase);
	UUMPI_ScreenIndicator_WidgetBase::~UUMPI_ScreenIndicator_WidgetBase() {}
	struct Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase, UUMPI_ScreenIndicator_WidgetBase::StaticClass, TEXT("UUMPI_ScreenIndicator_WidgetBase"), &Z_Registration_Info_UClass_UUMPI_ScreenIndicator_WidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUMPI_ScreenIndicator_WidgetBase), 4066129109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_3769311200(TEXT("/Script/UniversalMPIndicator"),
		Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
