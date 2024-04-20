// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UMPI_ScreenIndicator_WidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlateVisibility : uint8;
#ifdef UNIVERSALMPINDICATOR_UMPI_ScreenIndicator_WidgetBase_generated_h
#error "UMPI_ScreenIndicator_WidgetBase.generated.h already included, missing '#pragma once' in UMPI_ScreenIndicator_WidgetBase.h"
#endif
#define UNIVERSALMPINDICATOR_UMPI_ScreenIndicator_WidgetBase_generated_h

#define FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_SPARSE_DATA
#define FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFind_Closest_Edge); \
	DECLARE_FUNCTION(execOffScr_Distance_TextF); \
	DECLARE_FUNCTION(execOffScreen_Position_And_Angle); \
	DECLARE_FUNCTION(execOFFScrVerticalBoxVisibility); \
	DECLARE_FUNCTION(execCalculate_Off_Screen_Position); \
	DECLARE_FUNCTION(execOffScreen_Edge_Clamp); \
	DECLARE_FUNCTION(execCalculate_Actor_Bound_Offset); \
	DECLARE_FUNCTION(execOnScrVerticalBoxVisibility); \
	DECLARE_FUNCTION(execPulse_OnScreen_Effect); \
	DECLARE_FUNCTION(execFadeIn_OnScreen_Effect); \
	DECLARE_FUNCTION(execRotation_OnScreen_Effect); \
	DECLARE_FUNCTION(execOnScreen_Scale_Swift); \
	DECLARE_FUNCTION(execOnScreen_Edge_Clamp); \
	DECLARE_FUNCTION(execSet_OnScreen_Position); \
	DECLARE_FUNCTION(execCheck_Distance); \
	DECLARE_FUNCTION(execBind_Indicator_Visibility); \
	DECLARE_FUNCTION(execSet_Pivot_Of_Indicators); \
	DECLARE_FUNCTION(execSet_Indicator_Textures); \
	DECLARE_FUNCTION(execTake_Target_Location); \
	DECLARE_FUNCTION(execCheck_Target_Is_In_Viewport); \
	DECLARE_FUNCTION(execBind_Distance_Text_Visibility); \
	DECLARE_FUNCTION(execBind_Distance_Text_Value); \
	DECLARE_FUNCTION(execRemove_Itself_from_Indicator_List); \
	DECLARE_FUNCTION(execCustom_Remove_From_Parent);


#define FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_ACCESSORS
#define FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMPI_ScreenIndicator_WidgetBase(); \
	friend struct Z_Construct_UClass_UUMPI_ScreenIndicator_WidgetBase_Statics; \
public: \
	DECLARE_CLASS(UUMPI_ScreenIndicator_WidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UniversalMPIndicator"), NO_API) \
	DECLARE_SERIALIZER(UUMPI_ScreenIndicator_WidgetBase)


#define FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMPI_ScreenIndicator_WidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMPI_ScreenIndicator_WidgetBase(UUMPI_ScreenIndicator_WidgetBase&&); \
	NO_API UUMPI_ScreenIndicator_WidgetBase(const UUMPI_ScreenIndicator_WidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMPI_ScreenIndicator_WidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMPI_ScreenIndicator_WidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMPI_ScreenIndicator_WidgetBase) \
	NO_API virtual ~UUMPI_ScreenIndicator_WidgetBase();


#define FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_22_PROLOG
#define FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_SPARSE_DATA \
	FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_ACCESSORS \
	FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_INCLASS_NO_PURE_DECLS \
	FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIVERSALMPINDICATOR_API UClass* StaticClass<class UUMPI_ScreenIndicator_WidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Test_Task_Plugins_UniversalMPIndicator_Source_UniversalMPIndicator_Public_UMPI_ScreenIndicator_WidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
