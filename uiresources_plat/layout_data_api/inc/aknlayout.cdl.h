/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description:
*
*/

// It contains the client API.
// It should not be modified manually.

#ifndef AKNLAYOUT_CDL
#define AKNLAYOUT_CDL

#include <CdlEngine.h>
#include <aknlayout.cdl.common.h>

namespace AknLayout
{

class CInstance;

// Standard interface functions 
inline void LoadCustomisationL(const TCdlRef& aRef)                          { CdlEngine::LoadCustomisationL(aRef); }
inline void LoadCustomisationL(const TDesC& aLibName, TInt aInstId)          { TCdlRef ref = { aInstId, { KCdlInterfaceUidValue }, &aLibName }; LoadCustomisationL(ref); }
inline void RequireCustomisationL()                                          { CdlEngine::RequireCustomisationL(&KCdlInterface); }
inline TBool IsCustomisationStarted()                                        { return CdlEngine::IsCustomisationStarted(&KCdlInterface); }
inline const CInstance& CustomisationInstance()                              { return (const CInstance&)(CdlEngine::CustomisationInstance(KCdlInterfaceUid)); }
inline void SetCustomisationChangeObserverL(MCdlChangeObserver* aObserver)   { CdlEngine::SetCustomisationChangeObserverL(aObserver, KCdlInterfaceUid); }

inline const TCdlRef& LastAccessedRef()                                      { return CdlEngine::LastAccessedRef(KCdlInterfaceUid); }
inline void FileNameRelativeToLastAccessedInstance(TFileName& aFileName)     { CdlEngine::FileNameRelativeToLastAccessedInstance(KCdlInterfaceUid, aFileName); }


// CDL API functions, as defined in aknlayout.cdl

// LAF Table : Screen dimensions
inline TAknWindowLineLayout screen()		{ return (*(Tscreen_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_screen)))(); }

// LAF Table : Application window dimensions
inline TAknWindowLineLayout application_window(const TRect& aParentRect)		{ return (*(Tapplication_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_application_window)))(aParentRect); }

// LAF Table : Application window descendants
inline TAknWindowLineLayout status_pane(const TRect& aParentRect, TInt aIndex_H)		{ return (*(Tstatus_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_status_pane)))(aParentRect, aIndex_H); }

inline TAknWindowLineLayout main_pane(const TRect& aParentRect, TInt aCommon1, TInt aIndex_t, TInt aIndex_b)		{ return (*(Tmain_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_pane)))(aParentRect, aCommon1, aIndex_t, aIndex_b); }

inline TAknWindowLineLayout control_pane(const TRect& aParentRect)		{ return (*(Tcontrol_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_control_pane)))(aParentRect); }

// LAF Table : Status pane descendants
inline TAknWindowLineLayout signal_pane(const TRect& aParentRect)		{ return (*(Tsignal_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_signal_pane)))(aParentRect); }

inline TAknWindowLineLayout context_pane(const TRect& aParentRect, TInt aIndex_W)		{ return (*(Tcontext_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_context_pane)))(aParentRect, aIndex_W); }

inline TAknWindowLineLayout title_pane(TInt aCommon1)		{ return (*(Ttitle_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_title_pane)))(aCommon1); }

inline TAknWindowLineLayout battery_pane(const TRect& aParentRect)		{ return (*(Tbattery_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_battery_pane)))(aParentRect); }

inline TAknWindowLineLayout uni_indicator_pane(const TRect& aParentRect)		{ return (*(Tuni_indicator_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_uni_indicator_pane)))(aParentRect); }

inline TAknWindowLineLayout navi_pane(TInt aCommon1)		{ return (*(Tnavi_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_navi_pane)))(aCommon1); }

// LAF Table : Status pane elements
inline TAknWindowLineLayout Status_pane_elements_Line_1()		{ return (*(TStatus_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Status_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Status_pane_elements_Line_2()		{ return (*(TStatus_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Status_pane_elements_Line_2)))(); }

inline TAknLayoutTableLimits Status_pane_elements_Limits()		{ return (*(TStatus_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Status_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Status_pane_elements(TInt aLineIndex)		{ return (*(TStatus_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Status_pane_elements)))(aLineIndex); }

// LAF Table : Signal pane elements
inline TAknWindowLineLayout Signal_pane_elements_Line_1()		{ return (*(TSignal_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Signal_pane_elements_Line_2()		{ return (*(TSignal_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_pane_elements_Line_2)))(); }

inline TAknLayoutTableLimits Signal_pane_elements_Limits()		{ return (*(TSignal_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Signal_pane_elements(TInt aLineIndex)		{ return (*(TSignal_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_pane_elements)))(aLineIndex); }

// LAF Table : Signal strength area values
inline TAknWindowLineLayout Signal_strength_area_values_Line_1()		{ return (*(TSignal_strength_area_values_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_strength_area_values_Line_1)))(); }

inline TAknWindowLineLayout Signal_strength_area_values_Line_2()		{ return (*(TSignal_strength_area_values_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_strength_area_values_Line_2)))(); }

inline TAknWindowLineLayout Signal_strength_area_values_Line_3()		{ return (*(TSignal_strength_area_values_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_strength_area_values_Line_3)))(); }

inline TAknWindowLineLayout Signal_strength_area_values_Line_4()		{ return (*(TSignal_strength_area_values_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_strength_area_values_Line_4)))(); }

inline TAknWindowLineLayout Signal_strength_area_values_Line_5()		{ return (*(TSignal_strength_area_values_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_strength_area_values_Line_5)))(); }

inline TAknWindowLineLayout Signal_strength_area_values_Line_6()		{ return (*(TSignal_strength_area_values_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_strength_area_values_Line_6)))(); }

inline TAknWindowLineLayout Signal_strength_area_values_Line_7()		{ return (*(TSignal_strength_area_values_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_strength_area_values_Line_7)))(); }

inline TAknWindowLineLayout Signal_strength_area_values_Line_8()		{ return (*(TSignal_strength_area_values_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_strength_area_values_Line_8)))(); }

inline TAknLayoutTableLimits Signal_strength_area_values_Limits()		{ return (*(TSignal_strength_area_values_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_strength_area_values_Limits)))(); }

inline TAknWindowLineLayout Signal_strength_area_values(TInt aLineIndex)		{ return (*(TSignal_strength_area_values_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Signal_strength_area_values)))(aLineIndex); }

// LAF Table : Battery pane elements
inline TAknWindowLineLayout Battery_pane_elements_Line_1()		{ return (*(TBattery_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Battery_pane_elements_Line_2()		{ return (*(TBattery_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_pane_elements_Line_2)))(); }

inline TAknLayoutTableLimits Battery_pane_elements_Limits()		{ return (*(TBattery_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Battery_pane_elements(TInt aLineIndex)		{ return (*(TBattery_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_pane_elements)))(aLineIndex); }

// LAF Table : Battery strength area values
inline TAknWindowLineLayout Battery_strength_area_values_Line_1()		{ return (*(TBattery_strength_area_values_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_strength_area_values_Line_1)))(); }

inline TAknWindowLineLayout Battery_strength_area_values_Line_2()		{ return (*(TBattery_strength_area_values_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_strength_area_values_Line_2)))(); }

inline TAknWindowLineLayout Battery_strength_area_values_Line_3()		{ return (*(TBattery_strength_area_values_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_strength_area_values_Line_3)))(); }

inline TAknWindowLineLayout Battery_strength_area_values_Line_4()		{ return (*(TBattery_strength_area_values_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_strength_area_values_Line_4)))(); }

inline TAknWindowLineLayout Battery_strength_area_values_Line_5()		{ return (*(TBattery_strength_area_values_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_strength_area_values_Line_5)))(); }

inline TAknWindowLineLayout Battery_strength_area_values_Line_6()		{ return (*(TBattery_strength_area_values_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_strength_area_values_Line_6)))(); }

inline TAknWindowLineLayout Battery_strength_area_values_Line_7()		{ return (*(TBattery_strength_area_values_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_strength_area_values_Line_7)))(); }

inline TAknWindowLineLayout Battery_strength_area_values_Line_8()		{ return (*(TBattery_strength_area_values_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_strength_area_values_Line_8)))(); }

inline TAknLayoutTableLimits Battery_strength_area_values_Limits()		{ return (*(TBattery_strength_area_values_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_strength_area_values_Limits)))(); }

inline TAknWindowLineLayout Battery_strength_area_values(TInt aLineIndex)		{ return (*(TBattery_strength_area_values_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Battery_strength_area_values)))(aLineIndex); }

// LAF Table : Context pane elements
inline TAknWindowLineLayout Context_pane_elements_Line_1()		{ return (*(TContext_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Context_pane_elements_Line_1)))(); }

// LAF Table : Title pane texts
inline TAknTextLineLayout Title_pane_texts_Line_1(TInt aIndex_l, TInt aIndex_W)		{ return (*(TTitle_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Title_pane_texts_Line_1)))(aIndex_l, aIndex_W); }

inline TAknTextLineLayout Title_pane_texts_Line_2(TInt aIndex_B, TInt aIndex_W)		{ return (*(TTitle_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Title_pane_texts_Line_2)))(aIndex_B, aIndex_W); }

inline TAknMultiLineTextLayout Multiline_Title_pane_texts_Line_2(TInt aIndex_W, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Title_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Title_pane_texts_Line_2)))(aIndex_W, aNumberOfLinesShown); }

// LAF Table : Title pane elements
inline TAknWindowLineLayout Title_pane_elements_Line_1()		{ return (*(TTitle_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Title_pane_elements_Line_1)))(); }

// LAF Table : Universal indicator pane elements
inline TAknWindowLineLayout Universal_indicator_pane_elements_Line_1(TInt aIndex_t)		{ return (*(TUniversal_indicator_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Universal_indicator_pane_elements_Line_1)))(aIndex_t); }

// LAF Table : Navi pane arrow elements
inline TAknWindowLineLayout Navi_pane_arrow_elements_Line_1()		{ return (*(TNavi_pane_arrow_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_arrow_elements_Line_1)))(); }

inline TAknWindowLineLayout Navi_pane_arrow_elements_Line_2(TInt aIndex_l, TInt aIndex_r)		{ return (*(TNavi_pane_arrow_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_arrow_elements_Line_2)))(aIndex_l, aIndex_r); }

// LAF Table : Navi pane tab elements
inline TAknWindowLineLayout Navi_pane_tab_elements_Line_1()		{ return (*(TNavi_pane_tab_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_1)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_2()		{ return (*(TNavi_pane_tab_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_2)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_3()		{ return (*(TNavi_pane_tab_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_3)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_4()		{ return (*(TNavi_pane_tab_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_4)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_5()		{ return (*(TNavi_pane_tab_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_5)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_6()		{ return (*(TNavi_pane_tab_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_6)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_7()		{ return (*(TNavi_pane_tab_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_7)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_8()		{ return (*(TNavi_pane_tab_elements_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_8)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_9()		{ return (*(TNavi_pane_tab_elements_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_9)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_10()		{ return (*(TNavi_pane_tab_elements_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_10)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_11()		{ return (*(TNavi_pane_tab_elements_Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_11)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_12()		{ return (*(TNavi_pane_tab_elements_Line_12_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_12)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_13()		{ return (*(TNavi_pane_tab_elements_Line_13_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_13)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements_Line_14()		{ return (*(TNavi_pane_tab_elements_Line_14_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Line_14)))(); }

inline TAknLayoutTableLimits Navi_pane_tab_elements_Limits()		{ return (*(TNavi_pane_tab_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements_Limits)))(); }

inline TAknWindowLineLayout Navi_pane_tab_elements(TInt aLineIndex)		{ return (*(TNavi_pane_tab_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_tab_elements)))(aLineIndex); }

// LAF Table : Elements on the tabs
inline TAknWindowLineLayout Elements_on_the_tabs_Line_1(TInt aIndex_l)		{ return (*(TElements_on_the_tabs_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Elements_on_the_tabs_Line_1)))(aIndex_l); }

inline TAknWindowLineLayout Elements_on_the_tabs_Line_2(TInt aIndex_l)		{ return (*(TElements_on_the_tabs_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Elements_on_the_tabs_Line_2)))(aIndex_l); }

inline TAknWindowLineLayout Elements_on_the_tabs_Line_3(TInt aIndex_l)		{ return (*(TElements_on_the_tabs_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Elements_on_the_tabs_Line_3)))(aIndex_l); }

inline TAknLayoutTableLimits Elements_on_the_tabs_Limits()		{ return (*(TElements_on_the_tabs_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Elements_on_the_tabs_Limits)))(); }

inline TAknWindowLineLayout Elements_on_the_tabs(TInt aLineIndex, TInt aIndex_l)		{ return (*(TElements_on_the_tabs_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Elements_on_the_tabs)))(aLineIndex, aIndex_l); }

// LAF Table : Texts on the tabs
inline TAknTextLineLayout Texts_on_the_tabs_Line_1(TInt aCommon1)		{ return (*(TTexts_on_the_tabs_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Texts_on_the_tabs_Line_1)))(aCommon1); }

inline TAknTextLineLayout Texts_on_the_tabs_Line_2(TInt aCommon1)		{ return (*(TTexts_on_the_tabs_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Texts_on_the_tabs_Line_2)))(aCommon1); }

inline TAknTextLineLayout Texts_on_the_tabs_Line_3(TInt aCommon1)		{ return (*(TTexts_on_the_tabs_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Texts_on_the_tabs_Line_3)))(aCommon1); }

inline TAknTextLineLayout Texts_on_the_tabs_Line_4(TInt aCommon1)		{ return (*(TTexts_on_the_tabs_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Texts_on_the_tabs_Line_4)))(aCommon1); }

inline TAknTextLineLayout Texts_on_the_tabs_Line_5(TInt aCommon1)		{ return (*(TTexts_on_the_tabs_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Texts_on_the_tabs_Line_5)))(aCommon1); }

inline TAknLayoutTableLimits Texts_on_the_tabs_Limits()		{ return (*(TTexts_on_the_tabs_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Texts_on_the_tabs_Limits)))(); }

inline TAknTextLineLayout Texts_on_the_tabs(TInt aLineIndex, TInt aCommon1)		{ return (*(TTexts_on_the_tabs_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Texts_on_the_tabs)))(aLineIndex, aCommon1); }

// LAF Table : Navi pane icons
inline TAknWindowLineLayout Navi_pane_icons_Line_1()		{ return (*(TNavi_pane_icons_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_icons_Line_1)))(); }

inline TAknWindowLineLayout Navi_pane_icons_Line_2(TInt aCommon1)		{ return (*(TNavi_pane_icons_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_icons_Line_2)))(aCommon1); }

// LAF Table : Navi pane texts
inline TAknTextLineLayout Navi_pane_texts_Line_1(TInt aCommon1)		{ return (*(TNavi_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_texts_Line_1)))(aCommon1); }

inline TAknTextLineLayout Navi_pane_texts_Line_2(TInt aIndex_J)		{ return (*(TNavi_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_texts_Line_2)))(aIndex_J); }

inline TAknTextLineLayout Navi_pane_texts_Line_3(TInt aIndex_C)		{ return (*(TNavi_pane_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_texts_Line_3)))(aIndex_C); }

inline TAknTextLineLayout Navi_pane_texts_Line_4()		{ return (*(TNavi_pane_texts_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_texts_Line_4)))(); }

inline TAknTextLineLayout Navi_pane_texts_Line_5()		{ return (*(TNavi_pane_texts_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_texts_Line_5)))(); }

inline TAknTextLineLayout Navi_pane_texts_Line_6(TInt aIndex_l)		{ return (*(TNavi_pane_texts_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_texts_Line_6)))(aIndex_l); }

inline TAknTextLineLayout Navi_pane_texts_Line_7(TInt aIndex_C, TInt aIndex_W)		{ return (*(TNavi_pane_texts_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_texts_Line_7)))(aIndex_C, aIndex_W); }

// LAF Table : Navi pane area for editing status icons
inline TAknWindowLineLayout Navi_pane_area_for_editing_status_icons_Line_1()		{ return (*(TNavi_pane_area_for_editing_status_icons_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_area_for_editing_status_icons_Line_1)))(); }

// LAF Table : Volume glider elements (one)
inline TAknWindowLineLayout Volume_glider_elements__one__Line_1(TInt aIndex_l)		{ return (*(TVolume_glider_elements__one__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_glider_elements__one__Line_1)))(aIndex_l); }

inline TAknWindowLineLayout volume_navi_pane(TInt aIndex_l)		{ return (*(Tvolume_navi_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_volume_navi_pane)))(aIndex_l); }

inline TAknLayoutTableLimits Volume_glider_elements__one__Limits()		{ return (*(TVolume_glider_elements__one__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_glider_elements__one__Limits)))(); }

inline TAknWindowLineLayout Volume_glider_elements__one_(TInt aLineIndex, TInt aIndex_l)		{ return (*(TVolume_glider_elements__one__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_glider_elements__one_)))(aLineIndex, aIndex_l); }

// LAF Table : Volume pane elements (one)
inline TAknWindowLineLayout Volume_pane_elements__one__Line_1(TInt aIndex_C)		{ return (*(TVolume_pane_elements__one__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_pane_elements__one__Line_1)))(aIndex_C); }

inline TAknWindowLineLayout Volume_pane_elements__one__Line_2(TInt aIndex_C)		{ return (*(TVolume_pane_elements__one__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_pane_elements__one__Line_2)))(aIndex_C); }

inline TAknWindowLineLayout Volume_pane_elements__one__Line_3(TInt aIndex_C)		{ return (*(TVolume_pane_elements__one__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_pane_elements__one__Line_3)))(aIndex_C); }

inline TAknWindowLineLayout Volume_pane_elements__one__Line_4(TInt aIndex_C)		{ return (*(TVolume_pane_elements__one__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_pane_elements__one__Line_4)))(aIndex_C); }

inline TAknWindowLineLayout Volume_pane_elements__one__Line_5(TInt aIndex_C)		{ return (*(TVolume_pane_elements__one__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_pane_elements__one__Line_5)))(aIndex_C); }

inline TAknWindowLineLayout Volume_pane_elements__one__Line_6(TInt aIndex_C)		{ return (*(TVolume_pane_elements__one__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_pane_elements__one__Line_6)))(aIndex_C); }

inline TAknWindowLineLayout Volume_pane_elements__one__Line_7(TInt aIndex_C)		{ return (*(TVolume_pane_elements__one__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_pane_elements__one__Line_7)))(aIndex_C); }

inline TAknWindowLineLayout Volume_pane_elements__one__Line_8(TInt aIndex_C)		{ return (*(TVolume_pane_elements__one__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_pane_elements__one__Line_8)))(aIndex_C); }

inline TAknWindowLineLayout Volume_pane_elements__one__Line_9(TInt aIndex_C)		{ return (*(TVolume_pane_elements__one__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_pane_elements__one__Line_9)))(aIndex_C); }

inline TAknWindowLineLayout Volume_pane_elements__one__Line_10(TInt aIndex_C)		{ return (*(TVolume_pane_elements__one__Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_pane_elements__one__Line_10)))(aIndex_C); }

inline TAknLayoutTableLimits Volume_pane_elements__one__Limits()		{ return (*(TVolume_pane_elements__one__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_pane_elements__one__Limits)))(); }

inline TAknWindowLineLayout Volume_pane_elements__one_(TInt aLineIndex, TInt aIndex_C)		{ return (*(TVolume_pane_elements__one__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_pane_elements__one_)))(aLineIndex, aIndex_C); }

// LAF Table : Main pane descendants
inline TAknWindowLineLayout list_gen_pane(TInt aIndex_H)		{ return (*(Tlist_gen_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_gen_pane)))(aIndex_H); }

inline TAknWindowLineLayout find_pane()		{ return (*(Tfind_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_find_pane)))(); }

inline TAknWindowLineLayout wallpaper_pane()		{ return (*(Twallpaper_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_wallpaper_pane)))(); }

inline TAknWindowLineLayout indicator_pane()		{ return (*(Tindicator_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_indicator_pane)))(); }

inline TAknWindowLineLayout soft_indicator_pane(TInt aIndex_H)		{ return (*(Tsoft_indicator_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_soft_indicator_pane)))(aIndex_H); }

// LAF Table : List pane column division
inline TAknWindowLineLayout A_column()		{ return (*(TA_column_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_A_column)))(); }

inline TAknWindowLineLayout B_column()		{ return (*(TB_column_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_B_column)))(); }

inline TAknWindowLineLayout C_column()		{ return (*(TC_column_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_C_column)))(); }

inline TAknWindowLineLayout D_column()		{ return (*(TD_column_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_D_column)))(); }

inline TAknLayoutTableLimits List_pane_column_division_Limits()		{ return (*(TList_pane_column_division_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_column_division_Limits)))(); }

inline TAknWindowLineLayout List_pane_column_division(TInt aLineIndex)		{ return (*(TList_pane_column_division_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_column_division)))(aLineIndex); }

// LAF Table : General list pane descendants
inline TAknWindowLineLayout list_single_pane(TInt aIndex_t)		{ return (*(Tlist_single_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_number_pane(TInt aIndex_t)		{ return (*(Tlist_single_number_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_number_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_heading_pane(TInt aIndex_t)		{ return (*(Tlist_single_heading_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_heading_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_graphic_pane(TInt aIndex_t)		{ return (*(Tlist_single_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_graphic_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_graphic_heading_pane(TInt aIndex_t)		{ return (*(Tlist_single_graphic_heading_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_graphic_heading_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_number_heading_pane(TInt aIndex_t)		{ return (*(Tlist_single_number_heading_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_number_heading_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_large_graphic_pane(TInt aIndex_t)		{ return (*(Tlist_single_large_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_large_graphic_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_double_pane(TInt aIndex_t)		{ return (*(Tlist_double_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_double_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_double2_pane(TInt aIndex_t)		{ return (*(Tlist_double2_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_double2_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_double_number_pane_list_single_big_number_pane(TInt aIndex_t)		{ return (*(Tlist_double_number_pane_list_single_big_number_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_double_number_pane_list_single_big_number_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_double_time_pane(TInt aIndex_t)		{ return (*(Tlist_double_time_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_double_time_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_double_large_graphic_pane_list_double2_large_graphic_pane_list_single_big_large_graphic_pane(TInt aIndex_t)		{ return (*(Tlist_double_large_graphic_pane_list_double2_large_graphic_pane_list_single_big_large_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_double_large_graphic_pane_list_double2_large_graphic_pane_list_single_big_large_graphic_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_double_graphic_pane_list_double2_graphic_pane(TInt aIndex_t)		{ return (*(Tlist_double_graphic_pane_list_double2_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_double_graphic_pane_list_double2_graphic_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_big_heading_graphic_pane(TInt aIndex_t)		{ return (*(Tlist_single_big_heading_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_big_heading_graphic_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_big_heading_pane(TInt aIndex_t)		{ return (*(Tlist_single_big_heading_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_big_heading_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_setting_pane_list_big_setting_pane(TInt aIndex_t)		{ return (*(Tlist_setting_pane_list_big_setting_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_setting_pane_list_big_setting_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_setting_number_pane_list_big_setting_number_pane(TInt aIndex_t)		{ return (*(Tlist_setting_number_pane_list_big_setting_number_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_setting_number_pane_list_big_setting_number_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_setting_double2_pane(TInt aIndex_t)		{ return (*(Tlist_setting_double2_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_setting_double2_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_double2_graphic_pane(TInt aIndex_t)		{ return (*(Tlist_double2_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_double2_graphic_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_double2_large_graphic_pane(TInt aIndex_t)		{ return (*(Tlist_double2_large_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_double2_large_graphic_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_2graphic_pane(TInt aIndex_t)		{ return (*(Tlist_single_2graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_2graphic_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_double2_graphic_large_graphic_pane(TInt aIndex_t)		{ return (*(Tlist_double2_graphic_large_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_double2_graphic_large_graphic_pane)))(aIndex_t); }

inline TAknLayoutTableLimits General_list_pane_descendants_Limits()		{ return (*(TGeneral_list_pane_descendants_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_General_list_pane_descendants_Limits)))(); }

inline TAknWindowLineLayout General_list_pane_descendants(TInt aLineIndex, TInt aIndex_t)		{ return (*(TGeneral_list_pane_descendants_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_General_list_pane_descendants)))(aLineIndex, aIndex_t); }

// LAF Table : List pane elements (single)
inline TAknWindowLineLayout List_pane_elements__single__Line_1()		{ return (*(TList_pane_elements__single__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__single__Line_2(TInt aIndex_l)		{ return (*(TList_pane_elements__single__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single__Line_2)))(aIndex_l); }

// LAF Table : List pane texts (single)
inline TAknTextLineLayout List_pane_texts__single__Line_1(TInt aIndex_r, TInt aIndex_W)		{ return (*(TList_pane_texts__single__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single__Line_1)))(aIndex_r, aIndex_W); }

// LAF Table : List pane elements (single number)
inline TAknWindowLineLayout List_pane_elements__single_number__Line_1()		{ return (*(TList_pane_elements__single_number__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_number__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__single_number__Line_2(TInt aIndex_l)		{ return (*(TList_pane_elements__single_number__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_number__Line_2)))(aIndex_l); }

// LAF Table : List pane texts (single number)
inline TAknTextLineLayout List_pane_texts__single_number__Line_1()		{ return (*(TList_pane_texts__single_number__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_number__Line_1)))(); }

inline TAknTextLineLayout List_pane_texts__single_number__Line_2(TInt aIndex_r, TInt aIndex_W)		{ return (*(TList_pane_texts__single_number__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_number__Line_2)))(aIndex_r, aIndex_W); }

// LAF Table : List pane elements (single heading)
inline TAknWindowLineLayout List_pane_elements__single_heading__Line_1()		{ return (*(TList_pane_elements__single_heading__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_heading__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__single_heading__Line_2()		{ return (*(TList_pane_elements__single_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_heading__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__single_heading__Line_3(TInt aIndex_l)		{ return (*(TList_pane_elements__single_heading__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_heading__Line_3)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_elements__single_heading__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__single_heading__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_heading__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__single_heading__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__single_heading__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_heading__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (single heading)
inline TAknTextLineLayout List_pane_texts__single_heading__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__single_heading__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_heading__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__single_heading__Line_2(TInt aCommon1)		{ return (*(TList_pane_texts__single_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_heading__Line_2)))(aCommon1); }

inline TAknLayoutTableLimits List_pane_texts__single_heading__Limits()		{ return (*(TList_pane_texts__single_heading__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_heading__Limits)))(); }

inline TAknTextLineLayout List_pane_texts__single_heading_(TInt aLineIndex, TInt aCommon1)		{ return (*(TList_pane_texts__single_heading__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_heading_)))(aLineIndex, aCommon1); }

// LAF Table : List pane elements (single graphic)
inline TAknWindowLineLayout List_pane_elements__single_graphic__Line_1()		{ return (*(TList_pane_elements__single_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__single_graphic__Line_2()		{ return (*(TList_pane_elements__single_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_graphic__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__single_graphic__Line_3(TInt aIndex_l)		{ return (*(TList_pane_elements__single_graphic__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_graphic__Line_3)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_elements__single_graphic__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__single_graphic__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_graphic__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__single_graphic__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__single_graphic__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_graphic__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (single graphic)
inline TAknTextLineLayout List_pane_texts__single_graphic__Line_1(TInt aIndex_r, TInt aIndex_W)		{ return (*(TList_pane_texts__single_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_graphic__Line_1)))(aIndex_r, aIndex_W); }

// LAF Table : List pane elements (single graphic heading)
inline TAknWindowLineLayout List_pane_elements__single_graphic_heading__Line_1()		{ return (*(TList_pane_elements__single_graphic_heading__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_graphic_heading__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__single_graphic_heading__Line_2()		{ return (*(TList_pane_elements__single_graphic_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_graphic_heading__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__single_graphic_heading__Line_3()		{ return (*(TList_pane_elements__single_graphic_heading__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_graphic_heading__Line_3)))(); }

inline TAknWindowLineLayout List_pane_elements__single_graphic_heading__Line_4(TInt aIndex_l)		{ return (*(TList_pane_elements__single_graphic_heading__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_graphic_heading__Line_4)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_elements__single_graphic_heading__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__single_graphic_heading__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_graphic_heading__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__single_graphic_heading__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__single_graphic_heading__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_graphic_heading__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (single graphic heading)
inline TAknTextLineLayout List_pane_texts__single_graphic_heading__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__single_graphic_heading__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_graphic_heading__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__single_graphic_heading__Line_2(TInt aCommon1)		{ return (*(TList_pane_texts__single_graphic_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_graphic_heading__Line_2)))(aCommon1); }

inline TAknLayoutTableLimits List_pane_texts__single_graphic_heading__Limits()		{ return (*(TList_pane_texts__single_graphic_heading__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_graphic_heading__Limits)))(); }

inline TAknTextLineLayout List_pane_texts__single_graphic_heading_(TInt aLineIndex, TInt aCommon1)		{ return (*(TList_pane_texts__single_graphic_heading__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_graphic_heading_)))(aLineIndex, aCommon1); }

// LAF Table : List pane elements (single number heading)
inline TAknWindowLineLayout List_pane_elements__single_number_heading__Line_1()		{ return (*(TList_pane_elements__single_number_heading__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_number_heading__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__single_number_heading__Line_2()		{ return (*(TList_pane_elements__single_number_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_number_heading__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__single_number_heading__Line_3(TInt aIndex_l)		{ return (*(TList_pane_elements__single_number_heading__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_number_heading__Line_3)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_elements__single_number_heading__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__single_number_heading__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_number_heading__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__single_number_heading__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__single_number_heading__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_number_heading__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (single number heading)
inline TAknTextLineLayout List_pane_texts__single_number_heading__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__single_number_heading__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_number_heading__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__single_number_heading__Line_2(TInt aCommon1)		{ return (*(TList_pane_texts__single_number_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_number_heading__Line_2)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__single_number_heading__Line_3(TInt aCommon1)		{ return (*(TList_pane_texts__single_number_heading__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_number_heading__Line_3)))(aCommon1); }

inline TAknLayoutTableLimits List_pane_texts__single_number_heading__Limits()		{ return (*(TList_pane_texts__single_number_heading__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_number_heading__Limits)))(); }

inline TAknTextLineLayout List_pane_texts__single_number_heading_(TInt aLineIndex, TInt aCommon1)		{ return (*(TList_pane_texts__single_number_heading__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_number_heading_)))(aLineIndex, aCommon1); }

// LAF Table : List pane elements (single large graphic)
inline TAknWindowLineLayout List_pane_elements__single_large_graphic__Line_1()		{ return (*(TList_pane_elements__single_large_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_large_graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__single_large_graphic__Line_2(TInt aIndex_t)		{ return (*(TList_pane_elements__single_large_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_large_graphic__Line_2)))(aIndex_t); }

inline TAknWindowLineLayout List_pane_elements__single_large_graphic__Line_3(TInt aIndex_l)		{ return (*(TList_pane_elements__single_large_graphic__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_large_graphic__Line_3)))(aIndex_l); }

inline TAknWindowLineLayout do_not_use_empty_pane1()		{ return (*(Tdo_not_use_empty_pane1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_do_not_use_empty_pane1)))(); }

inline TAknWindowLineLayout do_not_use_empty_pane2()		{ return (*(Tdo_not_use_empty_pane2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_do_not_use_empty_pane2)))(); }

// LAF Table : List pane texts (single large graphic)
inline TAknTextLineLayout List_pane_texts__single_large_graphic__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__single_large_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_large_graphic__Line_1)))(aCommon1); }

// LAF Table : List pane elements (double)
inline TAknWindowLineLayout List_pane_elements__double__Line_1()		{ return (*(TList_pane_elements__double__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__double__Line_2(TInt aIndex_l)		{ return (*(TList_pane_elements__double__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double__Line_2)))(aIndex_l); }

// LAF Table : List pane texts (double)
inline TAknTextLineLayout List_pane_texts__double__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__double__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__double__Line_2()		{ return (*(TList_pane_texts__double__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double__Line_2)))(); }

// LAF Table : List pane text (double2)
inline TAknTextLineLayout List_pane_text__double2__Line_1(TInt aCommon1)		{ return (*(TList_pane_text__double2__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_text__double2__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_text__double2__Line_2()		{ return (*(TList_pane_text__double2__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_text__double2__Line_2)))(); }

// LAF Table : List pane elements (double number)
inline TAknWindowLineLayout List_pane_elements__double_number__Line_1()		{ return (*(TList_pane_elements__double_number__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_number__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__double_number__Line_2(TInt aIndex_l)		{ return (*(TList_pane_elements__double_number__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_number__Line_2)))(aIndex_l); }

// LAF Table : List pane texts (double number)
inline TAknTextLineLayout List_pane_texts__double_number__Line_1()		{ return (*(TList_pane_texts__double_number__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_number__Line_1)))(); }

inline TAknTextLineLayout List_pane_texts__double_number__Line_2(TInt aCommon1)		{ return (*(TList_pane_texts__double_number__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_number__Line_2)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__double_number__Line_3()		{ return (*(TList_pane_texts__double_number__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_number__Line_3)))(); }

// LAF Table : List pane elements (double graphic)
inline TAknWindowLineLayout List_pane_elements__double_graphic__Line_1()		{ return (*(TList_pane_elements__double_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__double_graphic__Line_2()		{ return (*(TList_pane_elements__double_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_graphic__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__double_graphic__Line_3(TInt aIndex_l)		{ return (*(TList_pane_elements__double_graphic__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_graphic__Line_3)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_elements__double_graphic__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__double_graphic__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_graphic__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__double_graphic__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__double_graphic__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_graphic__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (double graphic)
inline TAknTextLineLayout List_pane_texts__double_graphic__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__double_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_graphic__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__double_graphic__Line_2()		{ return (*(TList_pane_texts__double_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_graphic__Line_2)))(); }

// LAF Table : List pane elements (double2 graphic)
inline TAknWindowLineLayout List_pane_elements__double2_graphic__Line_1()		{ return (*(TList_pane_elements__double2_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__double2_graphic__Line_2()		{ return (*(TList_pane_elements__double2_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_graphic__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__double2_graphic__Line_3(TInt aIndex_l)		{ return (*(TList_pane_elements__double2_graphic__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_graphic__Line_3)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_elements__double2_graphic__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__double2_graphic__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_graphic__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__double2_graphic__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__double2_graphic__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_graphic__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (double2 graphic)
inline TAknTextLineLayout List_pane_texts__double2_graphic__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__double2_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double2_graphic__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__double2_graphic__Line_2()		{ return (*(TList_pane_texts__double2_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double2_graphic__Line_2)))(); }

// LAF Table : List pane elements (double2 large graphic)
inline TAknWindowLineLayout List_pane_elements__double2_large_graphic__Line_1()		{ return (*(TList_pane_elements__double2_large_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_large_graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__double2_large_graphic__Line_2()		{ return (*(TList_pane_elements__double2_large_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_large_graphic__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__double2_large_graphic__Line_3(TInt aIndex_l)		{ return (*(TList_pane_elements__double2_large_graphic__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_large_graphic__Line_3)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_elements__double2_large_graphic__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__double2_large_graphic__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_large_graphic__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__double2_large_graphic__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__double2_large_graphic__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_large_graphic__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (double2 large graphic)
inline TAknTextLineLayout List_pane_texts__double2_large_graphic__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__double2_large_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double2_large_graphic__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__double2_large_graphic__Line_2()		{ return (*(TList_pane_texts__double2_large_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double2_large_graphic__Line_2)))(); }

// LAF Table : List pane elements (large single heading graphic)
inline TAknWindowLineLayout List_pane_elements__large_single_heading_graphic__Line_1()		{ return (*(TList_pane_elements__large_single_heading_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__large_single_heading_graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__large_single_heading_graphic__Line_2()		{ return (*(TList_pane_elements__large_single_heading_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__large_single_heading_graphic__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__large_single_heading_graphic__Line_3(TInt aIndex_l)		{ return (*(TList_pane_elements__large_single_heading_graphic__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__large_single_heading_graphic__Line_3)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_elements__large_single_heading_graphic__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__large_single_heading_graphic__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__large_single_heading_graphic__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__large_single_heading_graphic__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__large_single_heading_graphic__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__large_single_heading_graphic__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (large single heading graphic)
inline TAknTextLineLayout List_pane_texts__large_single_heading_graphic__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__large_single_heading_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__large_single_heading_graphic__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__large_single_heading_graphic__Line_2()		{ return (*(TList_pane_texts__large_single_heading_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__large_single_heading_graphic__Line_2)))(); }

// LAF Table : List pane elements (large single heading)
inline TAknWindowLineLayout List_pane_elements__large_single_heading__Line_1()		{ return (*(TList_pane_elements__large_single_heading__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__large_single_heading__Line_1)))(); }

// LAF Table : List pane texts (large single heading)
inline TAknTextLineLayout List_pane_texts__large_single_heading__Line_1()		{ return (*(TList_pane_texts__large_single_heading__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__large_single_heading__Line_1)))(); }

inline TAknTextLineLayout List_pane_texts__large_single_heading__Line_2()		{ return (*(TList_pane_texts__large_single_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__large_single_heading__Line_2)))(); }

inline TAknLayoutTableLimits List_pane_texts__large_single_heading__Limits()		{ return (*(TList_pane_texts__large_single_heading__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__large_single_heading__Limits)))(); }

inline TAknTextLineLayout List_pane_texts__large_single_heading_(TInt aLineIndex)		{ return (*(TList_pane_texts__large_single_heading__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__large_single_heading_)))(aLineIndex); }

// LAF Table : List pane elements (double time)
inline TAknWindowLineLayout List_pane_elements__double_time__Line_1()		{ return (*(TList_pane_elements__double_time__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_time__Line_1)))(); }

// LAF Table : List pane texts (double time)
inline TAknTextLineLayout List_pane_texts__double_time__Line_1()		{ return (*(TList_pane_texts__double_time__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_time__Line_1)))(); }

inline TAknTextLineLayout List_pane_texts__double_time__Line_2()		{ return (*(TList_pane_texts__double_time__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_time__Line_2)))(); }

inline TAknTextLineLayout List_pane_texts__double_time__Line_3()		{ return (*(TList_pane_texts__double_time__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_time__Line_3)))(); }

inline TAknTextLineLayout List_pane_texts__double_time__Line_4()		{ return (*(TList_pane_texts__double_time__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_time__Line_4)))(); }

inline TAknLayoutTableLimits List_pane_texts__double_time__Limits()		{ return (*(TList_pane_texts__double_time__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_time__Limits)))(); }

inline TAknTextLineLayout List_pane_texts__double_time_(TInt aLineIndex)		{ return (*(TList_pane_texts__double_time__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_time_)))(aLineIndex); }

// LAF Table : List pane elements (double large graphic)
inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_1()		{ return (*(TList_pane_elements__double_large_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_large_graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_2()		{ return (*(TList_pane_elements__double_large_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_large_graphic__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_3()		{ return (*(TList_pane_elements__double_large_graphic__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_large_graphic__Line_3)))(); }

inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_4()		{ return (*(TList_pane_elements__double_large_graphic__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_large_graphic__Line_4)))(); }

inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_5()		{ return (*(TList_pane_elements__double_large_graphic__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_large_graphic__Line_5)))(); }

inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_6()		{ return (*(TList_pane_elements__double_large_graphic__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_large_graphic__Line_6)))(); }

inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_7()		{ return (*(TList_pane_elements__double_large_graphic__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_large_graphic__Line_7)))(); }

inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_8()		{ return (*(TList_pane_elements__double_large_graphic__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_large_graphic__Line_8)))(); }

inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_9(TInt aIndex_l)		{ return (*(TList_pane_elements__double_large_graphic__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_large_graphic__Line_9)))(aIndex_l); }

inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_10()		{ return (*(TList_pane_elements__double_large_graphic__Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double_large_graphic__Line_10)))(); }

// LAF Table : List pane texts (double large graphic)
inline TAknTextLineLayout List_pane_texts__double_large_graphic__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__double_large_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_large_graphic__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__double_large_graphic__Line_2()		{ return (*(TList_pane_texts__double_large_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double_large_graphic__Line_2)))(); }

// LAF Table : List pane elements (setting)
inline TAknWindowLineLayout List_pane_elements__setting__Line_1()		{ return (*(TList_pane_elements__setting__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__setting__Line_2()		{ return (*(TList_pane_elements__setting__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__setting__Line_3()		{ return (*(TList_pane_elements__setting__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting__Line_3)))(); }

inline TAknWindowLineLayout List_pane_elements__setting__Line_4()		{ return (*(TList_pane_elements__setting__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting__Line_4)))(); }

inline TAknWindowLineLayout List_pane_elements__setting__Line_5()		{ return (*(TList_pane_elements__setting__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting__Line_5)))(); }

inline TAknWindowLineLayout List_pane_elements__setting__Line_6()		{ return (*(TList_pane_elements__setting__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting__Line_6)))(); }

inline TAknLayoutTableLimits List_pane_elements__setting__Limits()		{ return (*(TList_pane_elements__setting__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting__Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__setting_(TInt aLineIndex)		{ return (*(TList_pane_elements__setting__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_)))(aLineIndex); }

// LAF Table : List pane texts (setting)
inline TAknTextLineLayout List_pane_texts__setting__Line_1()		{ return (*(TList_pane_texts__setting__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting__Line_1)))(); }

inline TAknTextLineLayout List_pane_texts__setting__Line_2()		{ return (*(TList_pane_texts__setting__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting__Line_2)))(); }

inline TAknTextLineLayout List_pane_texts__setting__Line_3()		{ return (*(TList_pane_texts__setting__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting__Line_3)))(); }

inline TAknTextLineLayout List_pane_texts__setting__Line_4()		{ return (*(TList_pane_texts__setting__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting__Line_4)))(); }

inline TAknLayoutTableLimits List_pane_texts__setting__Limits()		{ return (*(TList_pane_texts__setting__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting__Limits)))(); }

inline TAknTextLineLayout List_pane_texts__setting_(TInt aLineIndex)		{ return (*(TList_pane_texts__setting__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting_)))(aLineIndex); }

// LAF Table : List pane elements (setting number)
inline TAknWindowLineLayout List_pane_elements__setting_number__Line_1()		{ return (*(TList_pane_elements__setting_number__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_number__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__setting_number__Line_2()		{ return (*(TList_pane_elements__setting_number__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_number__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__setting_number__Line_3()		{ return (*(TList_pane_elements__setting_number__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_number__Line_3)))(); }

inline TAknWindowLineLayout List_pane_elements__setting_number__Line_4()		{ return (*(TList_pane_elements__setting_number__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_number__Line_4)))(); }

inline TAknWindowLineLayout List_pane_elements__setting_number__Line_5()		{ return (*(TList_pane_elements__setting_number__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_number__Line_5)))(); }

inline TAknLayoutTableLimits List_pane_elements__setting_number__Limits()		{ return (*(TList_pane_elements__setting_number__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_number__Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__setting_number_(TInt aLineIndex)		{ return (*(TList_pane_elements__setting_number__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_number_)))(aLineIndex); }

// LAF Table : List pane texts (setting number)
inline TAknTextLineLayout List_pane_texts__setting_number__Line_1()		{ return (*(TList_pane_texts__setting_number__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting_number__Line_1)))(); }

inline TAknTextLineLayout List_pane_texts__setting_number__Line_2()		{ return (*(TList_pane_texts__setting_number__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting_number__Line_2)))(); }

inline TAknTextLineLayout List_pane_texts__setting_number__Line_3()		{ return (*(TList_pane_texts__setting_number__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting_number__Line_3)))(); }

inline TAknTextLineLayout List_pane_texts__setting_number__Line_4()		{ return (*(TList_pane_texts__setting_number__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting_number__Line_4)))(); }

inline TAknLayoutTableLimits List_pane_texts__setting_number__Limits()		{ return (*(TList_pane_texts__setting_number__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting_number__Limits)))(); }

inline TAknTextLineLayout List_pane_texts__setting_number_(TInt aLineIndex)		{ return (*(TList_pane_texts__setting_number__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting_number_)))(aLineIndex); }

// LAF Table : Setting volume elements
inline TAknWindowLineLayout Setting_volume_elements_Line_1(TInt aIndex_C)		{ return (*(TSetting_volume_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_elements_Line_1)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_elements_Line_2(TInt aIndex_C)		{ return (*(TSetting_volume_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_elements_Line_2)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_elements_Line_3(TInt aIndex_C)		{ return (*(TSetting_volume_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_elements_Line_3)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_elements_Line_4(TInt aIndex_C)		{ return (*(TSetting_volume_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_elements_Line_4)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_elements_Line_5(TInt aIndex_C)		{ return (*(TSetting_volume_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_elements_Line_5)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_elements_Line_6(TInt aIndex_C)		{ return (*(TSetting_volume_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_elements_Line_6)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_elements_Line_7(TInt aIndex_C)		{ return (*(TSetting_volume_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_elements_Line_7)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_elements_Line_8(TInt aIndex_C)		{ return (*(TSetting_volume_elements_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_elements_Line_8)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_elements_Line_9(TInt aIndex_C)		{ return (*(TSetting_volume_elements_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_elements_Line_9)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_elements_Line_10(TInt aIndex_C)		{ return (*(TSetting_volume_elements_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_elements_Line_10)))(aIndex_C); }

inline TAknLayoutTableLimits Setting_volume_elements_Limits()		{ return (*(TSetting_volume_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_elements_Limits)))(); }

inline TAknWindowLineLayout Setting_volume_elements(TInt aLineIndex, TInt aIndex_C)		{ return (*(TSetting_volume_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_elements)))(aLineIndex, aIndex_C); }

// LAF Table : Setting slider elements
inline TAknWindowLineLayout Setting_slider_elements_Line_1()		{ return (*(TSetting_slider_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_slider_elements_Line_1)))(); }

// LAF Table : List pane elements (setting double2)
inline TAknWindowLineLayout List_pane_elements__setting_double2__Line_1()		{ return (*(TList_pane_elements__setting_double2__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_double2__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__setting_double2__Line_2()		{ return (*(TList_pane_elements__setting_double2__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_double2__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__setting_double2__Line_3()		{ return (*(TList_pane_elements__setting_double2__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_double2__Line_3)))(); }

inline TAknLayoutTableLimits List_pane_elements__setting_double2__Limits()		{ return (*(TList_pane_elements__setting_double2__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_double2__Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__setting_double2_(TInt aLineIndex)		{ return (*(TList_pane_elements__setting_double2__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__setting_double2_)))(aLineIndex); }

// LAF Table : List pane lines (A column)
inline TAknWindowLineLayout List_pane_lines__A_column__Line_1(TInt aCommon1)		{ return (*(TList_pane_lines__A_column__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_lines__A_column__Line_1)))(aCommon1); }

inline TAknWindowLineLayout List_pane_lines__A_column__Line_2()		{ return (*(TList_pane_lines__A_column__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_lines__A_column__Line_2)))(); }

// LAF Table : List pane lines (AB columns)
inline TAknWindowLineLayout List_pane_lines__AB_columns__Line_1(TInt aCommon1)		{ return (*(TList_pane_lines__AB_columns__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_lines__AB_columns__Line_1)))(aCommon1); }

inline TAknWindowLineLayout List_pane_lines__AB_columns__Line_2()		{ return (*(TList_pane_lines__AB_columns__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_lines__AB_columns__Line_2)))(); }

// LAF Table : List pane lines (BC columns)
inline TAknWindowLineLayout List_pane_lines__BC_columns__Line_1(TInt aCommon1)		{ return (*(TList_pane_lines__BC_columns__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_lines__BC_columns__Line_1)))(aCommon1); }

inline TAknWindowLineLayout List_pane_lines__BC_columns__Line_2()		{ return (*(TList_pane_lines__BC_columns__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_lines__BC_columns__Line_2)))(); }

// LAF Table : List pane highlight graphics (various)
inline TAknWindowLineLayout List_pane_highlight_graphics__various__Line_1(const TRect& aParentRect)		{ return (*(TList_pane_highlight_graphics__various__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight_graphics__various__Line_1)))(aParentRect); }

inline TAknWindowLineLayout List_pane_highlight_graphics__various__Line_2(const TRect& aParentRect)		{ return (*(TList_pane_highlight_graphics__various__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight_graphics__various__Line_2)))(aParentRect); }

inline TAknWindowLineLayout List_pane_highlight_graphics__various__Line_3(TInt aIndex_l)		{ return (*(TList_pane_highlight_graphics__various__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight_graphics__various__Line_3)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_highlight_graphics__various__SUB_TABLE_0_Limits()		{ return (*(TList_pane_highlight_graphics__various__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight_graphics__various__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_highlight_graphics__various__SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TList_pane_highlight_graphics__various__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight_graphics__various__SUB_TABLE_0)))(aLineIndex, aParentRect); }

// LAF Table : List pane highlight graphics (setting number)
inline TAknWindowLineLayout List_pane_highlight_graphics__setting_number__Line_1(const TRect& aParentRect)		{ return (*(TList_pane_highlight_graphics__setting_number__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight_graphics__setting_number__Line_1)))(aParentRect); }

inline TAknWindowLineLayout List_pane_highlight_graphics__setting_number__Line_2(const TRect& aParentRect)		{ return (*(TList_pane_highlight_graphics__setting_number__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight_graphics__setting_number__Line_2)))(aParentRect); }

inline TAknWindowLineLayout List_pane_highlight_graphics__setting_number__Line_3()		{ return (*(TList_pane_highlight_graphics__setting_number__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight_graphics__setting_number__Line_3)))(); }

inline TAknLayoutTableLimits List_pane_highlight_graphics__setting_number__SUB_TABLE_0_Limits()		{ return (*(TList_pane_highlight_graphics__setting_number__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight_graphics__setting_number__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_highlight_graphics__setting_number__SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TList_pane_highlight_graphics__setting_number__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight_graphics__setting_number__SUB_TABLE_0)))(aLineIndex, aParentRect); }

// LAF Table : Find pane elements
inline TAknWindowLineLayout Find_pane_elements_Line_1()		{ return (*(TFind_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Find_pane_elements_Line_2()		{ return (*(TFind_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Find_pane_elements_Line_3()		{ return (*(TFind_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements_Line_3)))(); }

inline TAknWindowLineLayout Find_pane_elements_Line_4()		{ return (*(TFind_pane_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements_Line_4)))(); }

inline TAknWindowLineLayout Find_pane_elements_Line_5()		{ return (*(TFind_pane_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements_Line_5)))(); }

inline TAknLayoutTableLimits Find_pane_elements_Limits()		{ return (*(TFind_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Find_pane_elements(TInt aLineIndex)		{ return (*(TFind_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements)))(aLineIndex); }

// LAF Table : Find pane texts
inline TAknTextLineLayout Find_pane_texts_Line_1()		{ return (*(TFind_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_texts_Line_1)))(); }

// LAF Table : Form descendant panes
inline TAknWindowLineLayout form_field_data_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tform_field_data_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_form_field_data_pane)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout form_field_data_wide_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tform_field_data_wide_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_form_field_data_wide_pane)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout form_field_popup_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tform_field_popup_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_form_field_popup_pane)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout form_field_popup_wide_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tform_field_popup_wide_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_form_field_popup_wide_pane)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout form_field_slider_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tform_field_slider_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_form_field_slider_pane)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout form_field_slider_wide_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tform_field_slider_wide_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_form_field_slider_wide_pane)))(aIndex_t, aIndex_H); }

inline TAknLayoutTableLimits Form_descendant_panes_Limits()		{ return (*(TForm_descendant_panes_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_descendant_panes_Limits)))(); }

inline TAknWindowLineLayout Form_descendant_panes(TInt aLineIndex, TInt aIndex_t, TInt aIndex_H)		{ return (*(TForm_descendant_panes_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_descendant_panes)))(aLineIndex, aIndex_t, aIndex_H); }

// LAF Table : Form data field elements
inline TAknWindowLineLayout Form_data_field_elements_Line_1(TInt aIndex_H)		{ return (*(TForm_data_field_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_field_elements_Line_1)))(aIndex_H); }

inline TAknWindowLineLayout Form_data_field_elements_Line_2()		{ return (*(TForm_data_field_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_field_elements_Line_2)))(); }

inline TAknWindowLineLayout Form_data_field_elements_Line_3(TInt aIndex_H)		{ return (*(TForm_data_field_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_field_elements_Line_3)))(aIndex_H); }

inline TAknWindowLineLayout Form_data_field_elements_Line_4()		{ return (*(TForm_data_field_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_field_elements_Line_4)))(); }

// LAF Table : Form data field texts
inline TAknTextLineLayout Form_data_field_texts_Line_1(TInt aCommon1, TInt aIndex_B)		{ return (*(TForm_data_field_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_field_texts_Line_1)))(aCommon1, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Form_data_field_texts_Line_1(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Form_data_field_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Form_data_field_texts_Line_1)))(aCommon1, aNumberOfLinesShown); }

inline TAknTextLineLayout Form_data_field_texts_Line_2(TInt aIndex_B)		{ return (*(TForm_data_field_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_field_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Form_data_field_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Form_data_field_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Form_data_field_texts_Line_2)))(aNumberOfLinesShown); }

// LAF Table : Form data wide field elements
inline TAknWindowLineLayout Form_data_wide_field_elements_Line_1(TInt aIndex_H)		{ return (*(TForm_data_wide_field_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_wide_field_elements_Line_1)))(aIndex_H); }

inline TAknWindowLineLayout Form_data_wide_field_elements_Line_2()		{ return (*(TForm_data_wide_field_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_wide_field_elements_Line_2)))(); }

inline TAknWindowLineLayout Form_data_wide_field_elements_Line_3(TInt aIndex_H)		{ return (*(TForm_data_wide_field_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_wide_field_elements_Line_3)))(aIndex_H); }

inline TAknWindowLineLayout Form_data_wide_field_elements_Line_4()		{ return (*(TForm_data_wide_field_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_wide_field_elements_Line_4)))(); }

// LAF Table : Form data wide field texts
inline TAknTextLineLayout Form_data_wide_field_texts_Line_1()		{ return (*(TForm_data_wide_field_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_wide_field_texts_Line_1)))(); }

inline TAknTextLineLayout Form_data_wide_field_texts_Line_2(TInt aIndex_B)		{ return (*(TForm_data_wide_field_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_wide_field_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Form_data_wide_field_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Form_data_wide_field_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Form_data_wide_field_texts_Line_2)))(aNumberOfLinesShown); }

// LAF Table : Form pop-up field elements and descendants
inline TAknWindowLineLayout Form_pop_up_field_elements_and_descendants_Line_1(TInt aIndex_H)		{ return (*(TForm_pop_up_field_elements_and_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_pop_up_field_elements_and_descendants_Line_1)))(aIndex_H); }

inline TAknWindowLineLayout Form_pop_up_field_elements_and_descendants_Line_2()		{ return (*(TForm_pop_up_field_elements_and_descendants_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_pop_up_field_elements_and_descendants_Line_2)))(); }

inline TAknWindowLineLayout Form_pop_up_field_elements_and_descendants_Line_3(TInt aIndex_H)		{ return (*(TForm_pop_up_field_elements_and_descendants_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_pop_up_field_elements_and_descendants_Line_3)))(aIndex_H); }

inline TAknWindowLineLayout Form_pop_up_field_elements_and_descendants_Line_4()		{ return (*(TForm_pop_up_field_elements_and_descendants_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_pop_up_field_elements_and_descendants_Line_4)))(); }

inline TAknWindowLineLayout Form_pop_up_field_elements_and_descendants_Line_5()		{ return (*(TForm_pop_up_field_elements_and_descendants_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_pop_up_field_elements_and_descendants_Line_5)))(); }

inline TAknWindowLineLayout list_form_pane(TInt aIndex_H)		{ return (*(Tlist_form_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_form_pane)))(aIndex_H); }

// LAF Table : List pane elements (form pop-up)
inline TAknWindowLineLayout list_form_graphic_pane(TInt aIndex_t)		{ return (*(Tlist_form_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_form_graphic_pane)))(aIndex_t); }

// LAF Table : List pane elements (form graphic)
inline TAknWindowLineLayout List_pane_elements__form_graphic__Line_1(TInt aIndex_C)		{ return (*(TList_pane_elements__form_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__form_graphic__Line_1)))(aIndex_C); }

inline TAknWindowLineLayout List_pane_elements__form_graphic__Line_2()		{ return (*(TList_pane_elements__form_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__form_graphic__Line_2)))(); }

// LAF Table : List pane texts (form graphic)
inline TAknTextLineLayout List_pane_texts__form_graphic__Line_1(TInt aIndex_C, TInt aCommon1)		{ return (*(TList_pane_texts__form_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__form_graphic__Line_1)))(aIndex_C, aCommon1); }

// LAF Table : Form pop-up wide field elements and descendants
inline TAknWindowLineLayout Form_pop_up_wide_field_elements_and_descendants_Line_1(TInt aIndex_H)		{ return (*(TForm_pop_up_wide_field_elements_and_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_pop_up_wide_field_elements_and_descendants_Line_1)))(aIndex_H); }

inline TAknWindowLineLayout Form_pop_up_wide_field_elements_and_descendants_Line_2()		{ return (*(TForm_pop_up_wide_field_elements_and_descendants_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_pop_up_wide_field_elements_and_descendants_Line_2)))(); }

inline TAknWindowLineLayout Form_pop_up_wide_field_elements_and_descendants_Line_3(TInt aIndex_H)		{ return (*(TForm_pop_up_wide_field_elements_and_descendants_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_pop_up_wide_field_elements_and_descendants_Line_3)))(aIndex_H); }

inline TAknWindowLineLayout Form_pop_up_wide_field_elements_and_descendants_Line_4()		{ return (*(TForm_pop_up_wide_field_elements_and_descendants_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_pop_up_wide_field_elements_and_descendants_Line_4)))(); }

inline TAknWindowLineLayout Form_pop_up_wide_field_elements_and_descendants_Line_5()		{ return (*(TForm_pop_up_wide_field_elements_and_descendants_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_pop_up_wide_field_elements_and_descendants_Line_5)))(); }

inline TAknWindowLineLayout list_form_wide_pane(TInt aCommon1, TInt aIndex_H)		{ return (*(Tlist_form_wide_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_form_wide_pane)))(aCommon1, aIndex_H); }

// LAF Table : List pane elements (form pop-up wide)
inline TAknWindowLineLayout list_form_graphic_wide_pane(TInt aIndex_t)		{ return (*(Tlist_form_graphic_wide_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_form_graphic_wide_pane)))(aIndex_t); }

// LAF Table : List pane elements (form graphic wide)
inline TAknWindowLineLayout List_pane_elements__form_graphic_wide__Line_1(TInt aIndex_C)		{ return (*(TList_pane_elements__form_graphic_wide__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__form_graphic_wide__Line_1)))(aIndex_C); }

inline TAknWindowLineLayout List_pane_elements__form_graphic_wide__Line_2()		{ return (*(TList_pane_elements__form_graphic_wide__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__form_graphic_wide__Line_2)))(); }

// LAF Table : List pane texts (form graphic wide)
inline TAknTextLineLayout List_pane_texts__form_graphic_wide__Line_1(TInt aIndex_C, TInt aIndex_l, TInt aIndex_r, TInt aIndex_W)		{ return (*(TList_pane_texts__form_graphic_wide__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__form_graphic_wide__Line_1)))(aIndex_C, aIndex_l, aIndex_r, aIndex_W); }

// LAF Table : Form slider field elements and descendants
inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_Line_1(TInt aIndex_H)		{ return (*(TForm_slider_field_elements_and_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_elements_and_descendants_Line_1)))(aIndex_H); }

inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_Line_2()		{ return (*(TForm_slider_field_elements_and_descendants_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_elements_and_descendants_Line_2)))(); }

inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_Line_3(TInt aIndex_H)		{ return (*(TForm_slider_field_elements_and_descendants_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_elements_and_descendants_Line_3)))(aIndex_H); }

inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_Line_4()		{ return (*(TForm_slider_field_elements_and_descendants_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_elements_and_descendants_Line_4)))(); }

inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_Line_5()		{ return (*(TForm_slider_field_elements_and_descendants_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_elements_and_descendants_Line_5)))(); }

inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_Line_6(TInt aIndex_t)		{ return (*(TForm_slider_field_elements_and_descendants_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_elements_and_descendants_Line_6)))(aIndex_t); }

// LAF Table : Slider pane elements (form)
inline TAknWindowLineLayout Slider_pane_elements__form__Line_1()		{ return (*(TSlider_pane_elements__form__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_pane_elements__form__Line_1)))(); }

inline TAknWindowLineLayout Slider_pane_elements__form__Line_2()		{ return (*(TSlider_pane_elements__form__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_pane_elements__form__Line_2)))(); }

inline TAknLayoutTableLimits Slider_pane_elements__form__Limits()		{ return (*(TSlider_pane_elements__form__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_pane_elements__form__Limits)))(); }

inline TAknWindowLineLayout Slider_pane_elements__form_(TInt aLineIndex)		{ return (*(TSlider_pane_elements__form__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_pane_elements__form_)))(aLineIndex); }

// LAF Table : Form slider field texts
inline TAknTextLineLayout Form_slider_field_texts_Line_1()		{ return (*(TForm_slider_field_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_texts_Line_1)))(); }

inline TAknTextLineLayout Form_slider_field_texts_Line_2()		{ return (*(TForm_slider_field_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_texts_Line_2)))(); }

inline TAknTextLineLayout Form_slider_field_texts_Line_3(TInt aCommon1, TInt aIndex_B)		{ return (*(TForm_slider_field_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_texts_Line_3)))(aCommon1, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Form_slider_field_texts_Line_3(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Form_slider_field_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Form_slider_field_texts_Line_3)))(aCommon1, aNumberOfLinesShown); }

inline TAknLayoutTableLimits Form_slider_field_texts_SUB_TABLE_0_Limits()		{ return (*(TForm_slider_field_texts_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_texts_SUB_TABLE_0_Limits)))(); }

inline TAknTextLineLayout Form_slider_field_texts_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TForm_slider_field_texts_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_texts_SUB_TABLE_0)))(aLineIndex); }

// LAF Table : Form slider field elements and descendants_dup
inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_dup_Line_1(TInt aIndex_H)		{ return (*(TForm_slider_field_elements_and_descendants_dup_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_elements_and_descendants_dup_Line_1)))(aIndex_H); }

inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_dup_Line_2()		{ return (*(TForm_slider_field_elements_and_descendants_dup_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_elements_and_descendants_dup_Line_2)))(); }

inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_dup_Line_3(TInt aIndex_H)		{ return (*(TForm_slider_field_elements_and_descendants_dup_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_elements_and_descendants_dup_Line_3)))(aIndex_H); }

inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_dup_Line_4()		{ return (*(TForm_slider_field_elements_and_descendants_dup_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_elements_and_descendants_dup_Line_4)))(); }

inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_dup_Line_5()		{ return (*(TForm_slider_field_elements_and_descendants_dup_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_elements_and_descendants_dup_Line_5)))(); }

inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_dup_Line_6(TInt aIndex_t)		{ return (*(TForm_slider_field_elements_and_descendants_dup_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_elements_and_descendants_dup_Line_6)))(aIndex_t); }

// LAF Table : Slider pane elements (form)_dup
inline TAknWindowLineLayout Slider_pane_elements__form__dup_Line_1()		{ return (*(TSlider_pane_elements__form__dup_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_pane_elements__form__dup_Line_1)))(); }

inline TAknWindowLineLayout Slider_pane_elements__form__dup_Line_2()		{ return (*(TSlider_pane_elements__form__dup_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_pane_elements__form__dup_Line_2)))(); }

inline TAknLayoutTableLimits Slider_pane_elements__form__dup_Limits()		{ return (*(TSlider_pane_elements__form__dup_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_pane_elements__form__dup_Limits)))(); }

inline TAknWindowLineLayout Slider_pane_elements__form__dup(TInt aLineIndex)		{ return (*(TSlider_pane_elements__form__dup_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_pane_elements__form__dup)))(aLineIndex); }

// LAF Table : Form slider field texts_dup
inline TAknTextLineLayout Form_slider_field_texts_dup_Line_1()		{ return (*(TForm_slider_field_texts_dup_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_texts_dup_Line_1)))(); }

inline TAknTextLineLayout Form_slider_field_texts_dup_Line_2()		{ return (*(TForm_slider_field_texts_dup_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_texts_dup_Line_2)))(); }

inline TAknTextLineLayout Form_slider_field_texts_dup_Line_3(TInt aCommon1, TInt aIndex_B)		{ return (*(TForm_slider_field_texts_dup_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_texts_dup_Line_3)))(aCommon1, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Form_slider_field_texts_dup_Line_3(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Form_slider_field_texts_dup_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Form_slider_field_texts_dup_Line_3)))(aCommon1, aNumberOfLinesShown); }

inline TAknLayoutTableLimits Form_slider_field_texts_dup_SUB_TABLE_0_Limits()		{ return (*(TForm_slider_field_texts_dup_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_texts_dup_SUB_TABLE_0_Limits)))(); }

inline TAknTextLineLayout Form_slider_field_texts_dup_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TForm_slider_field_texts_dup_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_slider_field_texts_dup_SUB_TABLE_0)))(aLineIndex); }

// LAF Table : Cursor graphics (13)
inline TAknWindowLineLayout Cursor_graphics__13__Line_1()		{ return (*(TCursor_graphics__13__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cursor_graphics__13__Line_1)))(); }

// LAF Table : Predictive text input graphics (13)
inline TAknWindowLineLayout Predictive_text_input_graphics__13__Line_1()		{ return (*(TPredictive_text_input_graphics__13__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_text_input_graphics__13__Line_1)))(); }

inline TAknWindowLineLayout Predictive_text_input_graphics__13__Line_2()		{ return (*(TPredictive_text_input_graphics__13__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_text_input_graphics__13__Line_2)))(); }

inline TAknLayoutTableLimits Predictive_text_input_graphics__13__Limits()		{ return (*(TPredictive_text_input_graphics__13__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_text_input_graphics__13__Limits)))(); }

inline TAknWindowLineLayout Predictive_text_input_graphics__13_(TInt aLineIndex)		{ return (*(TPredictive_text_input_graphics__13__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_text_input_graphics__13_)))(aLineIndex); }

// LAF Table : Cut copy and paste highlight graphics (13)
inline TAknWindowLineLayout Cut_copy_and_paste_highlight_graphics__13__Line_1()		{ return (*(TCut_copy_and_paste_highlight_graphics__13__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cut_copy_and_paste_highlight_graphics__13__Line_1)))(); }

// LAF Table : Time and date entry graphics (13)
inline TAknWindowLineLayout Time_and_date_entry_graphics__13__Line_1()		{ return (*(TTime_and_date_entry_graphics__13__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Time_and_date_entry_graphics__13__Line_1)))(); }

// LAF Table : Cursor graphics (12)
inline TAknWindowLineLayout Cursor_graphics__12__Line_1()		{ return (*(TCursor_graphics__12__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cursor_graphics__12__Line_1)))(); }

// LAF Table : Predictive text input graphics (12)
inline TAknWindowLineLayout Predictive_text_input_graphics__12__Line_1()		{ return (*(TPredictive_text_input_graphics__12__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_text_input_graphics__12__Line_1)))(); }

inline TAknWindowLineLayout Predictive_text_input_graphics__12__Line_2()		{ return (*(TPredictive_text_input_graphics__12__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_text_input_graphics__12__Line_2)))(); }

inline TAknLayoutTableLimits Predictive_text_input_graphics__12__Limits()		{ return (*(TPredictive_text_input_graphics__12__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_text_input_graphics__12__Limits)))(); }

inline TAknWindowLineLayout Predictive_text_input_graphics__12_(TInt aLineIndex)		{ return (*(TPredictive_text_input_graphics__12__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_text_input_graphics__12_)))(aLineIndex); }

// LAF Table : Cut copy and paste highlight graphics (12)
inline TAknWindowLineLayout Cut_copy_and_paste_highlight_graphics__12__Line_1()		{ return (*(TCut_copy_and_paste_highlight_graphics__12__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cut_copy_and_paste_highlight_graphics__12__Line_1)))(); }

// LAF Table : Time and date entry graphics (12)
inline TAknWindowLineLayout Time_and_date_entry_graphics__12__Line_1()		{ return (*(TTime_and_date_entry_graphics__12__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Time_and_date_entry_graphics__12__Line_1)))(); }

// LAF Table : AVKON specific list pane
inline TAknWindowLineLayout list_set_graphic_pane(TInt aIndex_t)		{ return (*(Tlist_set_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_set_graphic_pane)))(aIndex_t); }

// LAF Table : List pane elements (set graphic)
inline TAknWindowLineLayout List_pane_elements__set_graphic__Line_1(TInt aIndex_C)		{ return (*(TList_pane_elements__set_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__set_graphic__Line_1)))(aIndex_C); }

inline TAknWindowLineLayout List_pane_elements__set_graphic__Line_2()		{ return (*(TList_pane_elements__set_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__set_graphic__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__set_graphic__Line_3()		{ return (*(TList_pane_elements__set_graphic__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__set_graphic__Line_3)))(); }

inline TAknLayoutTableLimits List_pane_elements__set_graphic__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__set_graphic__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__set_graphic__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__set_graphic__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__set_graphic__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__set_graphic__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (set graphic)
inline TAknTextLineLayout List_pane_texts__set_graphic__Line_1(TInt aIndex_C, TInt aIndex_l, TInt aIndex_W)		{ return (*(TList_pane_texts__set_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__set_graphic__Line_1)))(aIndex_C, aIndex_l, aIndex_W); }

// LAF Table : Application grid descendant
inline TAknWindowLineLayout Application_grid_descendant_Line_1(TInt aIndex_l, TInt aIndex_t)		{ return (*(TApplication_grid_descendant_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Application_grid_descendant_Line_1)))(aIndex_l, aIndex_t); }

// LAF Table : Cell pane elements (app)
inline TAknWindowLineLayout Cell_pane_elements__app__Line_1()		{ return (*(TCell_pane_elements__app__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__app__Line_1)))(); }

inline TAknWindowLineLayout Cell_pane_elements__app__Line_2()		{ return (*(TCell_pane_elements__app__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__app__Line_2)))(); }

inline TAknLayoutTableLimits Cell_pane_elements__app__Limits()		{ return (*(TCell_pane_elements__app__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__app__Limits)))(); }

inline TAknWindowLineLayout Cell_pane_elements__app_(TInt aLineIndex)		{ return (*(TCell_pane_elements__app__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__app_)))(aLineIndex); }

// LAF Table : Cell pane texts (app)
inline TAknTextLineLayout Cell_pane_texts__app__Line_1()		{ return (*(TCell_pane_texts__app__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_texts__app__Line_1)))(); }

// LAF Table : Cell pane highlight elements (various)
inline TAknWindowLineLayout Cell_pane_highlight_elements__various__Line_1(const TRect& aParentRect)		{ return (*(TCell_pane_highlight_elements__various__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_highlight_elements__various__Line_1)))(aParentRect); }

// LAF Table : Wallpaper pane element
inline TAknWindowLineLayout Wallpaper_pane_element_Line_1(const TRect& aParentRect)		{ return (*(TWallpaper_pane_element_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Wallpaper_pane_element_Line_1)))(aParentRect); }

// LAF Table : Indicator pane elements
inline TAknWindowLineLayout Indicator_pane_elements_Line_1()		{ return (*(TIndicator_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Indicator_pane_elements_Line_1)))(); }

// LAF Table : Soft indicator pane elements
inline TAknWindowLineLayout Soft_indicator_pane_elements_Line_1(const TRect& aParentRect, TInt aIndex_t, TInt aIndex_H)		{ return (*(TSoft_indicator_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Soft_indicator_pane_elements_Line_1)))(aParentRect, aIndex_t, aIndex_H); }

// LAF Table : Soft indicator pane texts
inline TAknTextLineLayout Soft_indicator_pane_texts_Line_1(TInt aIndex_B)		{ return (*(TSoft_indicator_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Soft_indicator_pane_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Soft_indicator_pane_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Soft_indicator_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Soft_indicator_pane_texts_Line_1)))(aNumberOfLinesShown); }

// LAF Table : Idle power save state descendant
inline TAknWindowLineLayout power_save_pane(TInt aIndex_t)		{ return (*(Tpower_save_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_power_save_pane)))(aIndex_t); }

// LAF Table : Power save pane descendants
inline TAknWindowLineLayout Power_save_pane_descendants_Line_1()		{ return (*(TPower_save_pane_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Power_save_pane_descendants_Line_1)))(); }

inline TAknWindowLineLayout Power_save_pane_descendants_Line_2()		{ return (*(TPower_save_pane_descendants_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Power_save_pane_descendants_Line_2)))(); }

inline TAknWindowLineLayout Power_save_pane_descendants_Line_3()		{ return (*(TPower_save_pane_descendants_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Power_save_pane_descendants_Line_3)))(); }

inline TAknLayoutTableLimits Power_save_pane_descendants_Limits()		{ return (*(TPower_save_pane_descendants_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Power_save_pane_descendants_Limits)))(); }

inline TAknWindowLineLayout Power_save_pane_descendants(TInt aLineIndex)		{ return (*(TPower_save_pane_descendants_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Power_save_pane_descendants)))(aLineIndex); }

// LAF Table : Idle power save state texts
inline TAknTextLineLayout Idle_power_save_state_texts_Line_1()		{ return (*(TIdle_power_save_state_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_power_save_state_texts_Line_1)))(); }

inline TAknTextLineLayout Idle_power_save_state_texts_Line_2()		{ return (*(TIdle_power_save_state_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_power_save_state_texts_Line_2)))(); }

inline TAknTextLineLayout Idle_power_save_state_texts_Line_3()		{ return (*(TIdle_power_save_state_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_power_save_state_texts_Line_3)))(); }

inline TAknTextLineLayout Idle_power_save_state_texts_Line_4()		{ return (*(TIdle_power_save_state_texts_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_power_save_state_texts_Line_4)))(); }

inline TAknLayoutTableLimits Idle_power_save_state_texts_Limits()		{ return (*(TIdle_power_save_state_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_power_save_state_texts_Limits)))(); }

inline TAknTextLineLayout Idle_power_save_state_texts(TInt aLineIndex)		{ return (*(TIdle_power_save_state_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_power_save_state_texts)))(aLineIndex); }

// LAF Table : Application selection grid elements
inline TAknWindowLineLayout grid_app_pane()		{ return (*(Tgrid_app_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_app_pane)))(); }

// LAF Table : Empty list texts
inline TAknTextLineLayout Empty_list_texts_Line_1(TInt aIndex_B)		{ return (*(TEmpty_list_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Empty_list_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Empty_list_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Empty_list_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Empty_list_texts_Line_1)))(aNumberOfLinesShown); }

// LAF Table : Empty list texts (find)
inline TAknTextLineLayout Empty_list_texts__find__Line_1(TInt aIndex_B)		{ return (*(TEmpty_list_texts__find__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Empty_list_texts__find__Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Empty_list_texts__find__Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Empty_list_texts__find__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Empty_list_texts__find__Line_1)))(aNumberOfLinesShown); }

// LAF Table : List pane elements and descendants (settings edited)
inline TAknWindowLineLayout List_pane_elements_and_descendants__settings_edited__Line_1()		{ return (*(TList_pane_elements_and_descendants__settings_edited__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements_and_descendants__settings_edited__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements_and_descendants__settings_edited__Line_2()		{ return (*(TList_pane_elements_and_descendants__settings_edited__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements_and_descendants__settings_edited__Line_2)))(); }

inline TAknWindowLineLayout list_set_pane(TInt aCommon1)		{ return (*(Tlist_set_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_set_pane)))(aCommon1); }

inline TAknWindowLineLayout List_pane_elements_and_descendants__settings_edited__Line_4()		{ return (*(TList_pane_elements_and_descendants__settings_edited__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements_and_descendants__settings_edited__Line_4)))(); }

inline TAknWindowLineLayout setting_volume_pane()		{ return (*(Tsetting_volume_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_setting_volume_pane)))(); }

inline TAknWindowLineLayout setting_slider_pane()		{ return (*(Tsetting_slider_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_setting_slider_pane)))(); }

inline TAknWindowLineLayout setting_slider_graphic_pane()		{ return (*(Tsetting_slider_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_setting_slider_graphic_pane)))(); }

inline TAknWindowLineLayout setting_text_pane()		{ return (*(Tsetting_text_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_setting_text_pane)))(); }

inline TAknWindowLineLayout setting_code_pane()		{ return (*(Tsetting_code_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_setting_code_pane)))(); }

// LAF Table : Setting item texts
inline TAknTextLineLayout Setting_item_texts_Line_1()		{ return (*(TSetting_item_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_item_texts_Line_1)))(); }

inline TAknTextLineLayout Setting_item_texts_Line_2(TInt aCommon1)		{ return (*(TSetting_item_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_item_texts_Line_2)))(aCommon1); }

// LAF Table : Setting volume pane elements
inline TAknWindowLineLayout Setting_volume_pane_elements_Line_1()		{ return (*(TSetting_volume_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Setting_volume_pane_elements_Line_2(TInt aIndex_C)		{ return (*(TSetting_volume_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_Line_2)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_pane_elements_Line_3(TInt aIndex_C)		{ return (*(TSetting_volume_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_Line_3)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_pane_elements_Line_4(TInt aIndex_C)		{ return (*(TSetting_volume_pane_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_Line_4)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_pane_elements_Line_5(TInt aIndex_C)		{ return (*(TSetting_volume_pane_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_Line_5)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_pane_elements_Line_6(TInt aIndex_C)		{ return (*(TSetting_volume_pane_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_Line_6)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_pane_elements_Line_7(TInt aIndex_C)		{ return (*(TSetting_volume_pane_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_Line_7)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_pane_elements_Line_8(TInt aIndex_C)		{ return (*(TSetting_volume_pane_elements_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_Line_8)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_pane_elements_Line_9(TInt aIndex_C)		{ return (*(TSetting_volume_pane_elements_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_Line_9)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_pane_elements_Line_10(TInt aIndex_C)		{ return (*(TSetting_volume_pane_elements_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_Line_10)))(aIndex_C); }

inline TAknWindowLineLayout Setting_volume_pane_elements_Line_11(TInt aIndex_C)		{ return (*(TSetting_volume_pane_elements_Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_Line_11)))(aIndex_C); }

inline TAknLayoutTableLimits Setting_volume_pane_elements_SUB_TABLE_0_Limits()		{ return (*(TSetting_volume_pane_elements_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Setting_volume_pane_elements_SUB_TABLE_0(TInt aLineIndex, TInt aIndex_C)		{ return (*(TSetting_volume_pane_elements_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_pane_elements_SUB_TABLE_0)))(aLineIndex, aIndex_C); }

// LAF Table : Setting slider pane elements and descendants
inline TAknWindowLineLayout Setting_slider_pane_elements_and_descendants_Line_1()		{ return (*(TSetting_slider_pane_elements_and_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_slider_pane_elements_and_descendants_Line_1)))(); }

inline TAknWindowLineLayout Setting_slider_pane_elements_and_descendants_Line_2()		{ return (*(TSetting_slider_pane_elements_and_descendants_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_slider_pane_elements_and_descendants_Line_2)))(); }

inline TAknLayoutTableLimits Setting_slider_pane_elements_and_descendants_Limits()		{ return (*(TSetting_slider_pane_elements_and_descendants_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_slider_pane_elements_and_descendants_Limits)))(); }

inline TAknWindowLineLayout Setting_slider_pane_elements_and_descendants(TInt aLineIndex)		{ return (*(TSetting_slider_pane_elements_and_descendants_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_slider_pane_elements_and_descendants)))(aLineIndex); }

// LAF Table : Slider pane elements
inline TAknWindowLineLayout Slider_pane_elements_Line_1()		{ return (*(TSlider_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Slider_pane_elements_Line_2()		{ return (*(TSlider_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_pane_elements_Line_2)))(); }

inline TAknLayoutTableLimits Slider_pane_elements_Limits()		{ return (*(TSlider_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Slider_pane_elements(TInt aLineIndex)		{ return (*(TSlider_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_pane_elements)))(aLineIndex); }

// LAF Table : Slider texts (set)
inline TAknTextLineLayout Slider_texts__set__Line_1()		{ return (*(TSlider_texts__set__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_texts__set__Line_1)))(); }

inline TAknTextLineLayout Slider_texts__set__Line_2(TInt aCommon1)		{ return (*(TSlider_texts__set__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_texts__set__Line_2)))(aCommon1); }

inline TAknMultiLineTextLayout Multiline_Slider_texts__set__Line_2(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Slider_texts__set__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Slider_texts__set__Line_2)))(aCommon1, aNumberOfLinesShown); }

// LAF Table : Setting slider pane (graphic) elements and descendants
inline TAknWindowLineLayout Setting_slider_pane__graphic__elements_and_descendants_Line_1()		{ return (*(TSetting_slider_pane__graphic__elements_and_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_slider_pane__graphic__elements_and_descendants_Line_1)))(); }

inline TAknWindowLineLayout Setting_slider_pane__graphic__elements_and_descendants_Line_2()		{ return (*(TSetting_slider_pane__graphic__elements_and_descendants_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_slider_pane__graphic__elements_and_descendants_Line_2)))(); }

inline TAknWindowLineLayout Setting_slider_pane__graphic__elements_and_descendants_Line_3()		{ return (*(TSetting_slider_pane__graphic__elements_and_descendants_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_slider_pane__graphic__elements_and_descendants_Line_3)))(); }

inline TAknLayoutTableLimits Setting_slider_pane__graphic__elements_and_descendants_Limits()		{ return (*(TSetting_slider_pane__graphic__elements_and_descendants_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_slider_pane__graphic__elements_and_descendants_Limits)))(); }

inline TAknWindowLineLayout Setting_slider_pane__graphic__elements_and_descendants(TInt aLineIndex)		{ return (*(TSetting_slider_pane__graphic__elements_and_descendants_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_slider_pane__graphic__elements_and_descendants)))(aLineIndex); }

// LAF Table : Slider with graphic texts (set)
inline TAknTextLineLayout Slider_with_graphic_texts__set__Line_1(TInt aCommon1)		{ return (*(TSlider_with_graphic_texts__set__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slider_with_graphic_texts__set__Line_1)))(aCommon1); }

inline TAknMultiLineTextLayout Multiline_Slider_with_graphic_texts__set__Line_1(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Slider_with_graphic_texts__set__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Slider_with_graphic_texts__set__Line_1)))(aCommon1, aNumberOfLinesShown); }

// LAF Table : Setting text pane elements
inline TAknWindowLineLayout Setting_text_pane_elements_Line_1()		{ return (*(TSetting_text_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_text_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Setting_text_pane_elements_Line_2()		{ return (*(TSetting_text_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_text_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Setting_text_pane_elements_Line_3()		{ return (*(TSetting_text_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_text_pane_elements_Line_3)))(); }

inline TAknWindowLineLayout Setting_text_pane_elements_Line_4()		{ return (*(TSetting_text_pane_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_text_pane_elements_Line_4)))(); }

inline TAknLayoutTableLimits Setting_text_pane_elements_Limits()		{ return (*(TSetting_text_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_text_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Setting_text_pane_elements(TInt aLineIndex)		{ return (*(TSetting_text_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_text_pane_elements)))(aLineIndex); }

// LAF Table : Setting text pane texts
inline TAknTextLineLayout Setting_text_pane_texts_Line_1(TInt aIndex_B, TInt aIndex_J)		{ return (*(TSetting_text_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_text_pane_texts_Line_1)))(aIndex_B, aIndex_J); }

inline TAknMultiLineTextLayout Multiline_Setting_text_pane_texts_Line_1(TInt aIndex_J, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Setting_text_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Setting_text_pane_texts_Line_1)))(aIndex_J, aNumberOfLinesShown); }

// LAF Table : Code time and date entry pane elements
inline TAknWindowLineLayout Code_time_and_date_entry_pane_elements_Line_1()		{ return (*(TCode_time_and_date_entry_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_time_and_date_entry_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Code_time_and_date_entry_pane_elements_Line_2()		{ return (*(TCode_time_and_date_entry_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_time_and_date_entry_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Code_time_and_date_entry_pane_elements_Line_3()		{ return (*(TCode_time_and_date_entry_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_time_and_date_entry_pane_elements_Line_3)))(); }

inline TAknLayoutTableLimits Code_time_and_date_entry_pane_elements_Limits()		{ return (*(TCode_time_and_date_entry_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_time_and_date_entry_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Code_time_and_date_entry_pane_elements(TInt aLineIndex)		{ return (*(TCode_time_and_date_entry_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_time_and_date_entry_pane_elements)))(aLineIndex); }

// LAF Table : Code time and date entry pane texts
inline TAknTextLineLayout Code_time_and_date_entry_pane_texts_Line_1()		{ return (*(TCode_time_and_date_entry_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_time_and_date_entry_pane_texts_Line_1)))(); }

// LAF Table : Control pane elements
inline TAknWindowLineLayout Control_pane_elements_Line_1()		{ return (*(TControl_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Control_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Control_pane_elements_Line_2()		{ return (*(TControl_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Control_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Control_pane_elements_Line_3()		{ return (*(TControl_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Control_pane_elements_Line_3)))(); }

inline TAknWindowLineLayout Control_pane_elements_Line_4()		{ return (*(TControl_pane_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Control_pane_elements_Line_4)))(); }

inline TAknLayoutTableLimits Control_pane_elements_Limits()		{ return (*(TControl_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Control_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Control_pane_elements(TInt aLineIndex)		{ return (*(TControl_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Control_pane_elements)))(aLineIndex); }

// LAF Table : Control pane texts
inline TAknTextLineLayout Control_pane_texts_Line_1()		{ return (*(TControl_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Control_pane_texts_Line_1)))(); }

inline TAknTextLineLayout Control_pane_texts_Line_2()		{ return (*(TControl_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Control_pane_texts_Line_2)))(); }

inline TAknLayoutTableLimits Control_pane_texts_Limits()		{ return (*(TControl_pane_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Control_pane_texts_Limits)))(); }

inline TAknTextLineLayout Control_pane_texts(TInt aLineIndex)		{ return (*(TControl_pane_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Control_pane_texts)))(aLineIndex); }

// LAF Table : Pop-up windows (main pane as parent)
inline TAknWindowLineLayout popup_menu_window(TInt aIndex_H)		{ return (*(Tpopup_menu_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_menu_window)))(aIndex_H); }

inline TAknWindowLineLayout Pop_up_windows__main_pane_as_parent__Line_2(TInt aCommon1)		{ return (*(TPop_up_windows__main_pane_as_parent__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_windows__main_pane_as_parent__Line_2)))(aCommon1); }

inline TAknWindowLineLayout popup_menu_graphic_window(TInt aIndex_H)		{ return (*(Tpopup_menu_graphic_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_menu_graphic_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_menu_graphic_heading_window(TInt aIndex_H)		{ return (*(Tpopup_menu_graphic_heading_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_menu_graphic_heading_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_menu_double_window(TInt aIndex_H)		{ return (*(Tpopup_menu_double_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_menu_double_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_menu_double_large_graphic_window(TInt aIndex_H)		{ return (*(Tpopup_menu_double_large_graphic_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_menu_double_large_graphic_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_note_window(TInt aIndex_H)		{ return (*(Tpopup_note_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_note_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_note_wait_window(TInt aIndex_H)		{ return (*(Tpopup_note_wait_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_note_wait_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_note_image_window()		{ return (*(Tpopup_note_image_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_note_image_window)))(); }

inline TAknWindowLineLayout popup_query_data_window(TInt aIndex_H)		{ return (*(Tpopup_query_data_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_query_data_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_query_code_window(TInt aIndex_H)		{ return (*(Tpopup_query_code_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_query_code_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_query_time_window(TInt aIndex_H)		{ return (*(Tpopup_query_time_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_query_time_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_query_date_window(TInt aIndex_H)		{ return (*(Tpopup_query_date_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_query_date_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_query_data_code_window(TInt aIndex_H)		{ return (*(Tpopup_query_data_code_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_query_data_code_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_find_window()		{ return (*(Tpopup_find_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_find_window)))(); }

inline TAknWindowLineLayout popup_snote_single_text_window(TInt aIndex_H)		{ return (*(Tpopup_snote_single_text_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_snote_single_text_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_snote_single_graphic_window(TInt aIndex_H)		{ return (*(Tpopup_snote_single_graphic_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_snote_single_graphic_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_snote_group_window(TInt aIndex_H)		{ return (*(Tpopup_snote_group_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_snote_group_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_grid_graphic_window(TInt aIndex_H)		{ return (*(Tpopup_grid_graphic_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_grid_graphic_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_menu_double2_window(TInt aIndex_H)		{ return (*(Tpopup_menu_double2_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_menu_double2_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_grid_large_graphic_colour_window()		{ return (*(Tpopup_grid_large_graphic_colour_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_grid_large_graphic_colour_window)))(); }

// LAF Table : Pop-up windows (status pane as parent)
inline TAknWindowLineLayout popup_fast_swap_window(TInt aIndex_W, TInt aIndex_H)		{ return (*(Tpopup_fast_swap_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_fast_swap_window)))(aIndex_W, aIndex_H); }

// LAF Table : Pop-up window list pane descendants
inline TAknWindowLineLayout list_single_popup_menu_pane(TInt aIndex_t)		{ return (*(Tlist_single_popup_menu_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_popup_menu_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_heading_popup_menu_pane(TInt aIndex_t)		{ return (*(Tlist_single_heading_popup_menu_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_heading_popup_menu_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_graphic_popup_menu_pane(TInt aIndex_t)		{ return (*(Tlist_single_graphic_popup_menu_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_graphic_popup_menu_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_graphic_heading_popup_menu_pane(TInt aIndex_t)		{ return (*(Tlist_single_graphic_heading_popup_menu_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_graphic_heading_popup_menu_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_menu_double_popup_menu_pane(TInt aIndex_t)		{ return (*(Tlist_menu_double_popup_menu_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_menu_double_popup_menu_pane)))(aIndex_t); }

inline TAknWindowLineLayout list_single_popup_submenu_pane(TInt aIndex_t, TInt aIndex_W)		{ return (*(Tlist_single_popup_submenu_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_popup_submenu_pane)))(aIndex_t, aIndex_W); }

inline TAknWindowLineLayout list_double_large_graphic_popup_menu_pane(TInt aIndex_t)		{ return (*(Tlist_double_large_graphic_popup_menu_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_double_large_graphic_popup_menu_pane)))(aIndex_t); }

inline TAknWindowLineLayout Pop_up_window_list_pane_descendants_Line_8()		{ return (*(TPop_up_window_list_pane_descendants_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_window_list_pane_descendants_Line_8)))(); }

inline TAknWindowLineLayout list_double2_popup_menu_pane(TInt aIndex_t)		{ return (*(Tlist_double2_popup_menu_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_double2_popup_menu_pane)))(aIndex_t); }

// LAF Table : List pane elements (menu single)
inline TAknWindowLineLayout List_pane_elements__menu_single__Line_1()		{ return (*(TList_pane_elements__menu_single__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__menu_single__Line_2()		{ return (*(TList_pane_elements__menu_single__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__menu_single__Line_3(TInt aIndex_l)		{ return (*(TList_pane_elements__menu_single__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single__Line_3)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_elements__menu_single__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__menu_single__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__menu_single__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__menu_single__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (menu single)
inline TAknTextLineLayout List_pane_texts__menu_single__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__menu_single__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_single__Line_1)))(aCommon1); }

// LAF Table : List pane text (submenu single)
inline TAknTextLineLayout List_pane_text__submenu_single__Line_1(TInt aIndex_W)		{ return (*(TList_pane_text__submenu_single__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_text__submenu_single__Line_1)))(aIndex_W); }

// LAF Table : List pane elements (menu single graphic)
inline TAknWindowLineLayout List_pane_elements__menu_single_graphic__Line_1()		{ return (*(TList_pane_elements__menu_single_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single_graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__menu_single_graphic__Line_2(TInt aIndex_l)		{ return (*(TList_pane_elements__menu_single_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single_graphic__Line_2)))(aIndex_l); }

// LAF Table : List pane texts (menu single graphic)
inline TAknTextLineLayout List_pane_texts__menu_single_graphic__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__menu_single_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_single_graphic__Line_1)))(aCommon1); }

// LAF Table : List pane elements (menu single heading)
inline TAknWindowLineLayout List_pane_elements__menu_single_heading__Line_1()		{ return (*(TList_pane_elements__menu_single_heading__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single_heading__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__menu_single_heading__Line_2(TInt aIndex_l)		{ return (*(TList_pane_elements__menu_single_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single_heading__Line_2)))(aIndex_l); }

// LAF Table : List pane texts (menu single heading)
inline TAknTextLineLayout List_pane_texts__menu_single_heading__Line_1()		{ return (*(TList_pane_texts__menu_single_heading__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_single_heading__Line_1)))(); }

inline TAknTextLineLayout List_pane_texts__menu_single_heading__Line_2(TInt aCommon1)		{ return (*(TList_pane_texts__menu_single_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_single_heading__Line_2)))(aCommon1); }

// LAF Table : List pane elements (menu single graphic heading)
inline TAknWindowLineLayout List_pane_elements__menu_single_graphic_heading__Line_1()		{ return (*(TList_pane_elements__menu_single_graphic_heading__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single_graphic_heading__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__menu_single_graphic_heading__Line_2()		{ return (*(TList_pane_elements__menu_single_graphic_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single_graphic_heading__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__menu_single_graphic_heading__Line_3(TInt aIndex_l)		{ return (*(TList_pane_elements__menu_single_graphic_heading__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single_graphic_heading__Line_3)))(aIndex_l); }

// LAF Table : List pane texts (menu single graphic heading)
inline TAknTextLineLayout List_pane_texts__menu_single_graphic_heading__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__menu_single_graphic_heading__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_single_graphic_heading__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__menu_single_graphic_heading__Line_2(TInt aCommon1)		{ return (*(TList_pane_texts__menu_single_graphic_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_single_graphic_heading__Line_2)))(aCommon1); }

inline TAknLayoutTableLimits List_pane_texts__menu_single_graphic_heading__Limits()		{ return (*(TList_pane_texts__menu_single_graphic_heading__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_single_graphic_heading__Limits)))(); }

inline TAknTextLineLayout List_pane_texts__menu_single_graphic_heading_(TInt aLineIndex, TInt aCommon1)		{ return (*(TList_pane_texts__menu_single_graphic_heading__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_single_graphic_heading_)))(aLineIndex, aCommon1); }

// LAF Table : List pane elements (menu double)
inline TAknWindowLineLayout List_pane_elements__menu_double__Line_1(TInt aIndex_l)		{ return (*(TList_pane_elements__menu_double__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_double__Line_1)))(aIndex_l); }

// LAF Table : List pane texts (menu double)
inline TAknTextLineLayout List_pane_texts__menu_double__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__menu_double__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_double__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__menu_double__Line_2()		{ return (*(TList_pane_texts__menu_double__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_double__Line_2)))(); }

// LAF Table : List pane elements (menu double2)
inline TAknWindowLineLayout List_pane_elements__menu_double2__Line_1(TInt aIndex_l)		{ return (*(TList_pane_elements__menu_double2__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_double2__Line_1)))(aIndex_l); }

// LAF Table : List pane texts (menu double2)
inline TAknTextLineLayout List_pane_texts__menu_double2__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__menu_double2__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_double2__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__menu_double2__Line_2()		{ return (*(TList_pane_texts__menu_double2__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_double2__Line_2)))(); }

// LAF Table : List pane elements (menu double large graphic)
inline TAknWindowLineLayout List_pane_elements__menu_double_large_graphic__Line_1()		{ return (*(TList_pane_elements__menu_double_large_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_double_large_graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__menu_double_large_graphic__Line_2(TInt aIndex_l)		{ return (*(TList_pane_elements__menu_double_large_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_double_large_graphic__Line_2)))(aIndex_l); }

// LAF Table : List pane texts (menu double large graphic)
inline TAknTextLineLayout List_pane_texts__menu_double_large_graphic__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__menu_double_large_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_double_large_graphic__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__menu_double_large_graphic__Line_2()		{ return (*(TList_pane_texts__menu_double_large_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__menu_double_large_graphic__Line_2)))(); }

// LAF Table : Highlight graphics (various)
inline TAknWindowLineLayout Highlight_graphics__various__Line_1(const TRect& aParentRect)		{ return (*(THighlight_graphics__various__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_graphics__various__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Highlight_graphics__various__Line_2(const TRect& aParentRect)		{ return (*(THighlight_graphics__various__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_graphics__various__Line_2)))(aParentRect); }

inline TAknLayoutTableLimits Highlight_graphics__various__Limits()		{ return (*(THighlight_graphics__various__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_graphics__various__Limits)))(); }

inline TAknWindowLineLayout Highlight_graphics__various_(TInt aLineIndex, const TRect& aParentRect)		{ return (*(THighlight_graphics__various__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_graphics__various_)))(aLineIndex, aParentRect); }

// LAF Table : Pop-up window grid pane descendants (graphic)
inline TAknWindowLineLayout cell_graphic_popup_pane(TInt aIndex_l, TInt aIndex_t)		{ return (*(Tcell_graphic_popup_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_graphic_popup_pane)))(aIndex_l, aIndex_t); }

// LAF Table : Cell pane elements (pop-up graphic)
inline TAknWindowLineLayout Cell_pane_elements__pop_up_graphic__Line_1()		{ return (*(TCell_pane_elements__pop_up_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__pop_up_graphic__Line_1)))(); }

// LAF Table : Cell pane texts (pop-up graphic)
inline TAknTextLineLayout Cell_pane_texts__pop_up_graphic__Line_1()		{ return (*(TCell_pane_texts__pop_up_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_texts__pop_up_graphic__Line_1)))(); }

// LAF Table : Pop-up window grid pane descendants (large graphic colour)
inline TAknWindowLineLayout cell_large_graphic_colour_popup_pane(TInt aIndex_l, TInt aIndex_t, TInt aIndex_H)		{ return (*(Tcell_large_graphic_colour_popup_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_large_graphic_colour_popup_pane)))(aIndex_l, aIndex_t, aIndex_H); }

// LAF Table : Cell pane elements (pop-up large graphic colour)
inline TAknWindowLineLayout colour(TInt aIndex_H)		{ return (*(Tcolour_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_colour)))(aIndex_H); }

// LAF Table : Pop-up window cell pane (large graphic colour none)
inline TAknWindowLineLayout Pop_up_window_cell_pane__large_graphic_colour_none__Line_1()		{ return (*(TPop_up_window_cell_pane__large_graphic_colour_none__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_window_cell_pane__large_graphic_colour_none__Line_1)))(); }

// LAF Table : Cell pane texts (pop-up large graphic colour none)
inline TAknTextLineLayout Cell_pane_texts__pop_up_large_graphic_colour_none__Line_1()		{ return (*(TCell_pane_texts__pop_up_large_graphic_colour_none__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_texts__pop_up_large_graphic_colour_none__Line_1)))(); }

// LAF Table : Highlight elements (grid pop-up)
inline TAknWindowLineLayout Highlight_elements__grid_pop_up__Line_1(const TRect& aParentRect)		{ return (*(THighlight_elements__grid_pop_up__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_elements__grid_pop_up__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Highlight_elements__grid_pop_up__Line_2(const TRect& aParentRect)		{ return (*(THighlight_elements__grid_pop_up__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_elements__grid_pop_up__Line_2)))(aParentRect); }

inline TAknLayoutTableLimits Highlight_elements__grid_pop_up__Limits()		{ return (*(THighlight_elements__grid_pop_up__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_elements__grid_pop_up__Limits)))(); }

inline TAknWindowLineLayout Highlight_elements__grid_pop_up_(TInt aLineIndex, const TRect& aParentRect)		{ return (*(THighlight_elements__grid_pop_up__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_elements__grid_pop_up_)))(aLineIndex, aParentRect); }

// LAF Table : List heading pane elements
inline TAknWindowLineLayout List_heading_pane_elements_Line_1()		{ return (*(TList_heading_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_heading_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout List_heading_pane_elements_Line_2()		{ return (*(TList_heading_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_heading_pane_elements_Line_2)))(); }

inline TAknLayoutTableLimits List_heading_pane_elements_Limits()		{ return (*(TList_heading_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_heading_pane_elements_Limits)))(); }

inline TAknWindowLineLayout List_heading_pane_elements(TInt aLineIndex)		{ return (*(TList_heading_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_heading_pane_elements)))(aLineIndex); }

// LAF Table : List heading pane texts
inline TAknTextLineLayout List_heading_pane_texts_Line_1(TInt aIndex_W)		{ return (*(TList_heading_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_heading_pane_texts_Line_1)))(aIndex_W); }

// LAF Table : Pop-up menu with heading window graphics
inline TAknWindowLineLayout Pop_up_menu_with_heading_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TPop_up_menu_with_heading_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_heading_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Pop_up_menu_with_heading_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TPop_up_menu_with_heading_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_heading_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Pop_up_menu_with_heading_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TPop_up_menu_with_heading_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_heading_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Pop_up_menu_with_heading_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TPop_up_menu_with_heading_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_heading_window_graphics_Line_4)))(aParentRect); }

inline TAknWindowLineLayout Pop_up_menu_with_heading_window_graphics_Line_5(const TRect& aParentRect)		{ return (*(TPop_up_menu_with_heading_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_heading_window_graphics_Line_5)))(aParentRect); }

inline TAknLayoutTableLimits Pop_up_menu_with_heading_window_graphics_Limits()		{ return (*(TPop_up_menu_with_heading_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_heading_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Pop_up_menu_with_heading_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TPop_up_menu_with_heading_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_heading_window_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Menu pop-up window descendants
inline TAknWindowLineLayout list_menu_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tlist_menu_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_menu_pane)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout Menu_pop_up_window_descendants_Line_2()		{ return (*(TMenu_pop_up_window_descendants_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_descendants_Line_2)))(); }

// LAF Table : Menu pop-up window graphics
inline TAknWindowLineLayout Menu_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TMenu_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Menu_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TMenu_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Menu_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TMenu_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Menu_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TMenu_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknWindowLineLayout Menu_pop_up_window_graphics_Line_5(const TRect& aParentRect)		{ return (*(TMenu_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_graphics_Line_5)))(aParentRect); }

inline TAknLayoutTableLimits Menu_pop_up_window_graphics_Limits()		{ return (*(TMenu_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Menu_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TMenu_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Submenu pop-up window descendants
inline TAknWindowLineLayout list_submenu_pane(TInt aIndex_W, TInt aIndex_H)		{ return (*(Tlist_submenu_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_submenu_pane)))(aIndex_W, aIndex_H); }

// LAF Table : Submenu pop-up window graphics
inline TAknWindowLineLayout Submenu_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TSubmenu_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Submenu_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TSubmenu_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Submenu_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TSubmenu_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Submenu_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TSubmenu_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknLayoutTableLimits Submenu_pop_up_window_graphics_Limits()		{ return (*(TSubmenu_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Submenu_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TSubmenu_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_pop_up_window_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Submenu pop-up window positioning
inline TAknWindowLineLayout Submenu_pop_up_window_positioning_Line_1(TInt aIndex_W, TInt aIndex_H)		{ return (*(TSubmenu_pop_up_window_positioning_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_pop_up_window_positioning_Line_1)))(aIndex_W, aIndex_H); }

inline TAknWindowLineLayout Submenu_pop_up_window_positioning_Line_2(TInt aIndex_W, TInt aIndex_H)		{ return (*(TSubmenu_pop_up_window_positioning_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_pop_up_window_positioning_Line_2)))(aIndex_W, aIndex_H); }

inline TAknLayoutTableLimits Submenu_pop_up_window_positioning_Limits()		{ return (*(TSubmenu_pop_up_window_positioning_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_pop_up_window_positioning_Limits)))(); }

inline TAknWindowLineLayout Submenu_pop_up_window_positioning(TInt aLineIndex, TInt aIndex_W, TInt aIndex_H)		{ return (*(TSubmenu_pop_up_window_positioning_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_pop_up_window_positioning)))(aLineIndex, aIndex_W, aIndex_H); }

// LAF Table : Menu pop-up window descendant (single graphic)
inline TAknWindowLineLayout list_menu_graphic_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tlist_menu_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_menu_graphic_pane)))(aIndex_t, aIndex_H); }

// LAF Table : Menu pop-up window descendants (single heading)
inline TAknWindowLineLayout list_menu_heading_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tlist_menu_heading_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_menu_heading_pane)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout Menu_pop_up_window_descendants__single_heading__Line_2()		{ return (*(TMenu_pop_up_window_descendants__single_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_descendants__single_heading__Line_2)))(); }

inline TAknWindowLineLayout Menu_pop_up_window_descendants__single_heading__Line_3(TInt aIndex_r)		{ return (*(TMenu_pop_up_window_descendants__single_heading__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_descendants__single_heading__Line_3)))(aIndex_r); }

// LAF Table : Menu pop-up window descendants and elements (single graphic heading)
inline TAknWindowLineLayout list_menu_graphic_heading_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tlist_menu_graphic_heading_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_menu_graphic_heading_pane)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout Menu_pop_up_window_descendants_and_elements__single_graphic_heading__Line_2()		{ return (*(TMenu_pop_up_window_descendants_and_elements__single_graphic_heading__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_descendants_and_elements__single_graphic_heading__Line_2)))(); }

inline TAknWindowLineLayout Menu_pop_up_window_descendants_and_elements__single_graphic_heading__Line_3(TInt aIndex_r)		{ return (*(TMenu_pop_up_window_descendants_and_elements__single_graphic_heading__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_descendants_and_elements__single_graphic_heading__Line_3)))(aIndex_r); }

// LAF Table : Menu pop-up window descendants (double double2)
inline TAknWindowLineLayout list_menu_double_pane_list_menu_double2_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tlist_menu_double_pane_list_menu_double2_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_menu_double_pane_list_menu_double2_pane)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout Menu_pop_up_window_descendants__double_double2__Line_2()		{ return (*(TMenu_pop_up_window_descendants__double_double2__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_descendants__double_double2__Line_2)))(); }

// LAF Table : Menu pop-up window descendants (double)
inline TAknWindowLineLayout list_menu_double_large_graphic_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tlist_menu_double_large_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_menu_double_large_graphic_pane)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout Menu_pop_up_window_descendants__double__Line_2()		{ return (*(TMenu_pop_up_window_descendants__double__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Menu_pop_up_window_descendants__double__Line_2)))(); }

// LAF Table : Note pop-up window elements
inline TAknWindowLineLayout Note_pop_up_window_elements_Line_1()		{ return (*(TNote_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_pop_up_window_elements_Line_1)))(); }

// LAF Table : Note pop-up window texts
inline TAknTextLineLayout Note_pop_up_window_texts_Line_1(TInt aCommon1)		{ return (*(TNote_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_pop_up_window_texts_Line_1)))(aCommon1); }

inline TAknMultiLineTextLayout Multiline_Note_pop_up_window_texts_Line_1(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Note_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Note_pop_up_window_texts_Line_1)))(aCommon1, aNumberOfLinesShown); }

// LAF Table : Note pop-up window graphics
inline TAknWindowLineLayout Note_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TNote_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Note_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TNote_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Note_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TNote_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Note_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TNote_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknWindowLineLayout Note_pop_up_window_graphics_Line_5(const TRect& aParentRect)		{ return (*(TNote_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_pop_up_window_graphics_Line_5)))(aParentRect); }

inline TAknLayoutTableLimits Note_pop_up_window_graphics_Limits()		{ return (*(TNote_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Note_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TNote_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_pop_up_window_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Wait or progress note pop-up window elements
inline TAknWindowLineLayout Wait_or_progress_note_pop_up_window_elements_Line_1()		{ return (*(TWait_or_progress_note_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Wait_or_progress_note_pop_up_window_elements_Line_1)))(); }

inline TAknWindowLineLayout Wait_or_progress_note_pop_up_window_elements_Line_2(TInt aIndex_t)		{ return (*(TWait_or_progress_note_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Wait_or_progress_note_pop_up_window_elements_Line_2)))(aIndex_t); }

inline TAknWindowLineLayout Wait_or_progress_note_pop_up_window_elements_Line_3()		{ return (*(TWait_or_progress_note_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Wait_or_progress_note_pop_up_window_elements_Line_3)))(); }

inline TAknWindowLineLayout Wait_or_progress_note_pop_up_window_elements_Line_4()		{ return (*(TWait_or_progress_note_pop_up_window_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Wait_or_progress_note_pop_up_window_elements_Line_4)))(); }

inline TAknLayoutTableLimits First_general_event_elements_Limits()		{ return (*(TFirst_general_event_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_general_event_elements_Limits)))(); }

inline TAknWindowLineLayout First_general_event_elements(TInt aLineIndex)		{ return (*(TFirst_general_event_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_general_event_elements)))(aLineIndex); }

// LAF Table : Wait or progress note pop-up window texts
inline TAknTextLineLayout Wait_or_progress_note_pop_up_window_texts_Line_1(TInt aCommon1, TInt aNotCommon, TInt aIndex_B)		{ return (*(TWait_or_progress_note_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Wait_or_progress_note_pop_up_window_texts_Line_1)))(aCommon1, aNotCommon, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Wait_or_progress_note_pop_up_window_texts_Line_1(TInt aCommon1, TInt aNotCommon, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Wait_or_progress_note_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Wait_or_progress_note_pop_up_window_texts_Line_1)))(aCommon1, aNotCommon, aNumberOfLinesShown); }

// LAF Table : Note with an image pop-up window elements
inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_1()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_1)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_2()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_2)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_3()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_3)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_4()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_4)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_5()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_5)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_6()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_6)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_7()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_7)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_8()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_8)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_9()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_9)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_10()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_10)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_11()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_11)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_12()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_12_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_12)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_13()		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_13_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Line_13)))(); }

inline TAknLayoutTableLimits Note_with_an_image_pop_up_window_elements_Limits()		{ return (*(TNote_with_an_image_pop_up_window_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements_Limits)))(); }

inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements(TInt aLineIndex)		{ return (*(TNote_with_an_image_pop_up_window_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_elements)))(aLineIndex); }

// LAF Table : Note with an image pop-up window texts
inline TAknTextLineLayout Note_with_an_image_pop_up_window_texts_Line_1(TInt aIndex_l, TInt aIndex_r, TInt aIndex_B, TInt aIndex_W)		{ return (*(TNote_with_an_image_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_an_image_pop_up_window_texts_Line_1)))(aIndex_l, aIndex_r, aIndex_B, aIndex_W); }

inline TAknMultiLineTextLayout Multiline_Note_with_an_image_pop_up_window_texts_Line_1(TInt aIndex_l, TInt aIndex_r, TInt aIndex_W, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Note_with_an_image_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Note_with_an_image_pop_up_window_texts_Line_1)))(aIndex_l, aIndex_r, aIndex_W, aNumberOfLinesShown); }

// LAF Table : Query with heading window graphics
inline TAknWindowLineLayout Query_with_heading_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TQuery_with_heading_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Query_with_heading_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Query_with_heading_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TQuery_with_heading_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Query_with_heading_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Query_with_heading_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TQuery_with_heading_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Query_with_heading_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Query_with_heading_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TQuery_with_heading_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Query_with_heading_window_graphics_Line_4)))(aParentRect); }

inline TAknWindowLineLayout Query_with_heading_window_graphics_Line_5(const TRect& aParentRect)		{ return (*(TQuery_with_heading_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Query_with_heading_window_graphics_Line_5)))(aParentRect); }

inline TAknLayoutTableLimits Query_with_heading_window_graphics_Limits()		{ return (*(TQuery_with_heading_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Query_with_heading_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Query_with_heading_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TQuery_with_heading_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Query_with_heading_window_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Query with heading window descendants
inline TAknWindowLineLayout popup_list_heading_pane(const TRect& aParentRect)		{ return (*(Tpopup_list_heading_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_list_heading_pane)))(aParentRect); }

// LAF Table : Heading pane elements
inline TAknWindowLineLayout Heading_pane_elements_Line_1()		{ return (*(THeading_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Heading_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Icon(TInt aIndex_t)		{ return (*(TIcon_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Icon)))(aIndex_t); }

//TAknWindowLineLayout Icon();
//TAknLayoutTableLimits Heading_pane_elements_SUB_TABLE_0_Limits();
//TAknLayoutTableLimits Heading_pane_elements_Limits();
//TAknWindowLineLayout Heading_pane_elements_SUB_TABLE_0(TInt aLineIndex);
//TAknWindowLineLayout Heading_pane_elements_(TInt aLineIndex);
// LAF Table : Heading pane texts
inline TAknTextLineLayout Heading_pane_texts_Line_1(TInt aIndex_W)		{ return (*(THeading_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Heading_pane_texts_Line_1)))(aIndex_W); }

// LAF Table : Data query pop-up window elements
inline TAknWindowLineLayout Data_query_pop_up_window_elements_Line_1(TInt aIndex_t)		{ return (*(TData_query_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_elements_Line_1)))(aIndex_t); }

inline TAknWindowLineLayout Data_query_pop_up_window_elements_Line_2(const TRect& aParentRect, TInt aCommon1)		{ return (*(TData_query_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_elements_Line_2)))(aParentRect, aCommon1); }

inline TAknWindowLineLayout Data_query_pop_up_window_elements_Line_3(const TRect& aParentRect, TInt aCommon1)		{ return (*(TData_query_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_elements_Line_3)))(aParentRect, aCommon1); }

inline TAknWindowLineLayout Data_query_pop_up_window_elements_Line_4(TInt aIndex_t)		{ return (*(TData_query_pop_up_window_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_elements_Line_4)))(aIndex_t); }

inline TAknWindowLineLayout Data_query_pop_up_window_elements_Line_5()		{ return (*(TData_query_pop_up_window_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_elements_Line_5)))(); }

// LAF Table : Data query pop-up window texts
inline TAknTextLineLayout Data_query_pop_up_window_texts_Line_1(TInt aIndex_B)		{ return (*(TData_query_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Data_query_pop_up_window_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Data_query_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Data_query_pop_up_window_texts_Line_1)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Data_query_pop_up_window_texts_Line_2(TInt aIndex_B, TInt aIndex_J)		{ return (*(TData_query_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_texts_Line_2)))(aIndex_B, aIndex_J); }

inline TAknMultiLineTextLayout Multiline_Data_query_pop_up_window_texts_Line_2(TInt aIndex_J, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Data_query_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Data_query_pop_up_window_texts_Line_2)))(aIndex_J, aNumberOfLinesShown); }

// LAF Table : Data query pop-up window graphics
inline TAknWindowLineLayout Data_query_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TData_query_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Data_query_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TData_query_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Data_query_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TData_query_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Data_query_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TData_query_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknWindowLineLayout Data_query_pop_up_window_graphics_Line_5(const TRect& aParentRect)		{ return (*(TData_query_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_graphics_Line_5)))(aParentRect); }

inline TAknLayoutTableLimits Data_query_pop_up_window_graphics_Limits()		{ return (*(TData_query_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Data_query_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TData_query_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Data_query_pop_up_window_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Code query pop-up window elements
inline TAknWindowLineLayout Code_query_pop_up_window_elements_Line_1(TInt aIndex_t)		{ return (*(TCode_query_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_query_pop_up_window_elements_Line_1)))(aIndex_t); }

inline TAknWindowLineLayout Code_query_pop_up_window_elements_Line_2(TInt aIndex_t)		{ return (*(TCode_query_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_query_pop_up_window_elements_Line_2)))(aIndex_t); }

inline TAknWindowLineLayout Code_query_pop_up_window_elements_Line_3(TInt aIndex_t)		{ return (*(TCode_query_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_query_pop_up_window_elements_Line_3)))(aIndex_t); }

inline TAknWindowLineLayout Code_query_pop_up_window_elements_Line_4(TInt aIndex_t)		{ return (*(TCode_query_pop_up_window_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_query_pop_up_window_elements_Line_4)))(aIndex_t); }

inline TAknLayoutTableLimits Code_query_pop_up_window_elements_Limits()		{ return (*(TCode_query_pop_up_window_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_query_pop_up_window_elements_Limits)))(); }

inline TAknWindowLineLayout Code_query_pop_up_window_elements(TInt aLineIndex, TInt aIndex_t)		{ return (*(TCode_query_pop_up_window_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_query_pop_up_window_elements)))(aLineIndex, aIndex_t); }

// LAF Table : Code query pop-up window texts
inline TAknTextLineLayout Code_query_pop_up_window_texts_Line_1(TInt aIndex_B)		{ return (*(TCode_query_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_query_pop_up_window_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Code_query_pop_up_window_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Code_query_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Code_query_pop_up_window_texts_Line_1)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Code_query_pop_up_window_texts_Line_2(TInt aIndex_B)		{ return (*(TCode_query_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_query_pop_up_window_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Code_query_pop_up_window_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Code_query_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Code_query_pop_up_window_texts_Line_2)))(aNumberOfLinesShown); }

inline TAknLayoutTableLimits Code_query_pop_up_window_texts_Limits()		{ return (*(TCode_query_pop_up_window_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_query_pop_up_window_texts_Limits)))(); }

inline TAknTextLineLayout Code_query_pop_up_window_texts(TInt aLineIndex, TInt aIndex_B)		{ return (*(TCode_query_pop_up_window_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Code_query_pop_up_window_texts)))(aLineIndex, aIndex_B); }

// LAF Table : Combined data and code query pop-up window elements
inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_elements_Line_1(TInt aIndex_C, TInt aIndex_t)		{ return (*(TCombined_data_and_code_query_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_elements_Line_1)))(aIndex_C, aIndex_t); }

inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_elements_Line_2(TInt aIndex_C, TInt aIndex_t)		{ return (*(TCombined_data_and_code_query_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_elements_Line_2)))(aIndex_C, aIndex_t); }

inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_elements_Line_3(TInt aIndex_t)		{ return (*(TCombined_data_and_code_query_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_elements_Line_3)))(aIndex_t); }

inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_elements_Line_4(TInt aIndex_t)		{ return (*(TCombined_data_and_code_query_pop_up_window_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_elements_Line_4)))(aIndex_t); }

inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_elements_Line_5(TInt aIndex_t)		{ return (*(TCombined_data_and_code_query_pop_up_window_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_elements_Line_5)))(aIndex_t); }

// LAF Table : Combined data and code query pop-up window texts
inline TAknTextLineLayout Combined_data_and_code_query_pop_up_window_texts_Line_1(TInt aIndex_B)		{ return (*(TCombined_data_and_code_query_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Combined_data_and_code_query_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_1)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Combined_data_and_code_query_pop_up_window_texts_Line_2(TInt aIndex_B)		{ return (*(TCombined_data_and_code_query_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Combined_data_and_code_query_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_2)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Combined_data_and_code_query_pop_up_window_texts_Line_3(TInt aIndex_B)		{ return (*(TCombined_data_and_code_query_pop_up_window_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_texts_Line_3)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_3(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Combined_data_and_code_query_pop_up_window_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_3)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Combined_data_and_code_query_pop_up_window_texts_Line_4(TInt aIndex_B)		{ return (*(TCombined_data_and_code_query_pop_up_window_texts_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_texts_Line_4)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_4(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Combined_data_and_code_query_pop_up_window_texts_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_4)))(aNumberOfLinesShown); }

inline TAknLayoutTableLimits Combined_data_and_code_query_pop_up_window_texts_Limits()		{ return (*(TCombined_data_and_code_query_pop_up_window_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_texts_Limits)))(); }

inline TAknTextLineLayout Combined_data_and_code_query_pop_up_window_texts(TInt aLineIndex, TInt aIndex_B)		{ return (*(TCombined_data_and_code_query_pop_up_window_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_texts)))(aLineIndex, aIndex_B); }

// LAF Table : Combined data and code query pop-up window graphics
inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_graphics_Line_2(const TRect& aParentRect, TInt aIndex_H)		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_graphics_Line_2)))(aParentRect, aIndex_H); }

inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_graphics_Line_3(const TRect& aParentRect, TInt aIndex_H)		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_graphics_Line_3)))(aParentRect, aIndex_H); }

inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_graphics_Line_4(const TRect& aParentRect, TInt aIndex_H)		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_graphics_Line_4)))(aParentRect, aIndex_H); }

inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_graphics_Line_5(const TRect& aParentRect, TInt aIndex_H)		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_graphics_Line_5)))(aParentRect, aIndex_H); }

inline TAknLayoutTableLimits Combined_data_and_code_query_pop_up_window_graphics_SUB_TABLE_0_Limits()		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_graphics_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_graphics_SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect, TInt aIndex_H)		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Combined_data_and_code_query_pop_up_window_graphics_SUB_TABLE_0)))(aLineIndex, aParentRect, aIndex_H); }

// LAF Table : Find pop-up window elements
inline TAknWindowLineLayout Find_pop_up_window_elements_Line_1()		{ return (*(TFind_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_elements_Line_1)))(); }

inline TAknWindowLineLayout Find_pop_up_window_elements_Line_2()		{ return (*(TFind_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_elements_Line_2)))(); }

inline TAknWindowLineLayout Find_pop_up_window_elements_Line_3()		{ return (*(TFind_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_elements_Line_3)))(); }

inline TAknWindowLineLayout Find_pop_up_window_elements_Line_4()		{ return (*(TFind_pop_up_window_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_elements_Line_4)))(); }

inline TAknLayoutTableLimits Find_pop_up_window_elements_Limits()		{ return (*(TFind_pop_up_window_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_elements_Limits)))(); }

inline TAknWindowLineLayout Find_pop_up_window_elements(TInt aLineIndex)		{ return (*(TFind_pop_up_window_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_elements)))(aLineIndex); }

// LAF Table : Find pop-up window texts
inline TAknTextLineLayout Find_pop_up_window_texts_Line_1()		{ return (*(TFind_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_texts_Line_1)))(); }

// LAF Table : Find pop-up window graphics
inline TAknWindowLineLayout Find_pop_up_window_graphics_Line_1()		{ return (*(TFind_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_graphics_Line_1)))(); }

inline TAknWindowLineLayout Find_pop_up_window_graphics_Line_2()		{ return (*(TFind_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_graphics_Line_2)))(); }

inline TAknWindowLineLayout Find_pop_up_window_graphics_Line_3()		{ return (*(TFind_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_graphics_Line_3)))(); }

inline TAknWindowLineLayout Find_pop_up_window_graphics_Line_4()		{ return (*(TFind_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_graphics_Line_4)))(); }

inline TAknWindowLineLayout Find_pop_up_window_graphics_Line_5()		{ return (*(TFind_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_graphics_Line_5)))(); }

inline TAknLayoutTableLimits Find_pop_up_window_graphics_Limits()		{ return (*(TFind_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Find_pop_up_window_graphics(TInt aLineIndex)		{ return (*(TFind_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_graphics)))(aLineIndex); }

// LAF Table : Pop-up menu with find pane graphics
inline TAknWindowLineLayout Pop_up_menu_with_find_pane_graphics_Line_1(const TRect& aParentRect)		{ return (*(TPop_up_menu_with_find_pane_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_find_pane_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Pop_up_menu_with_find_pane_graphics_Line_2(const TRect& aParentRect)		{ return (*(TPop_up_menu_with_find_pane_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_find_pane_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Pop_up_menu_with_find_pane_graphics_Line_3(const TRect& aParentRect)		{ return (*(TPop_up_menu_with_find_pane_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_find_pane_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Pop_up_menu_with_find_pane_graphics_Line_4(const TRect& aParentRect)		{ return (*(TPop_up_menu_with_find_pane_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_find_pane_graphics_Line_4)))(aParentRect); }

inline TAknWindowLineLayout Pop_up_menu_with_find_pane_graphics_Line_5(const TRect& aParentRect)		{ return (*(TPop_up_menu_with_find_pane_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_find_pane_graphics_Line_5)))(aParentRect); }

inline TAknLayoutTableLimits Pop_up_menu_with_find_pane_graphics_Limits()		{ return (*(TPop_up_menu_with_find_pane_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_find_pane_graphics_Limits)))(); }

inline TAknWindowLineLayout Pop_up_menu_with_find_pane_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TPop_up_menu_with_find_pane_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_menu_with_find_pane_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Notification pop-up window elements (text)
inline TAknWindowLineLayout Notification_pop_up_window_elements__text__Line_1()		{ return (*(TNotification_pop_up_window_elements__text__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_elements__text__Line_1)))(); }

// LAF Table : Notification pop-up window texts (text)
inline TAknTextLineLayout Notification_pop_up_window_texts__text__Line_1(TInt aIndex_B)		{ return (*(TNotification_pop_up_window_texts__text__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_texts__text__Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Notification_pop_up_window_texts__text__Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Notification_pop_up_window_texts__text__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Notification_pop_up_window_texts__text__Line_1)))(aNumberOfLinesShown); }

// LAF Table : Notification pop-up window graphics (text)
inline TAknWindowLineLayout Notification_pop_up_window_graphics__text__Line_1(const TRect& aParentRect)		{ return (*(TNotification_pop_up_window_graphics__text__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_graphics__text__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Notification_pop_up_window_graphics__text__Line_2(const TRect& aParentRect)		{ return (*(TNotification_pop_up_window_graphics__text__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_graphics__text__Line_2)))(aParentRect); }

inline TAknWindowLineLayout Notification_pop_up_window_graphics__text__Line_3(const TRect& aParentRect)		{ return (*(TNotification_pop_up_window_graphics__text__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_graphics__text__Line_3)))(aParentRect); }

inline TAknWindowLineLayout Notification_pop_up_window_graphics__text__Line_4(const TRect& aParentRect)		{ return (*(TNotification_pop_up_window_graphics__text__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_graphics__text__Line_4)))(aParentRect); }

inline TAknWindowLineLayout Notification_pop_up_window_graphics__text__Line_5(const TRect& aParentRect)		{ return (*(TNotification_pop_up_window_graphics__text__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_graphics__text__Line_5)))(aParentRect); }

inline TAknLayoutTableLimits Notification_pop_up_window_graphics__text__Limits()		{ return (*(TNotification_pop_up_window_graphics__text__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_graphics__text__Limits)))(); }

inline TAknWindowLineLayout Notification_pop_up_window_graphics__text_(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TNotification_pop_up_window_graphics__text__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_graphics__text_)))(aLineIndex, aParentRect); }

// LAF Table : Notification pop-up window elements (graphic)
inline TAknWindowLineLayout Notification_pop_up_window_elements__graphic__Line_1()		{ return (*(TNotification_pop_up_window_elements__graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_elements__graphic__Line_1)))(); }

inline TAknWindowLineLayout Notification_pop_up_window_elements__graphic__Line_2()		{ return (*(TNotification_pop_up_window_elements__graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_elements__graphic__Line_2)))(); }

inline TAknLayoutTableLimits Notification_pop_up_window_elements__graphic__Limits()		{ return (*(TNotification_pop_up_window_elements__graphic__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_elements__graphic__Limits)))(); }

inline TAknWindowLineLayout Notification_pop_up_window_elements__graphic_(TInt aLineIndex)		{ return (*(TNotification_pop_up_window_elements__graphic__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_elements__graphic_)))(aLineIndex); }

// LAF Table : Notification pop-up window texts (graphic)
inline TAknTextLineLayout Notification_pop_up_window_texts__graphic__Line_1(TInt aCommon1)		{ return (*(TNotification_pop_up_window_texts__graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notification_pop_up_window_texts__graphic__Line_1)))(aCommon1); }

inline TAknMultiLineTextLayout Multiline_Notification_pop_up_window_texts__graphic__Line_1(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Notification_pop_up_window_texts__graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Notification_pop_up_window_texts__graphic__Line_1)))(aCommon1, aNumberOfLinesShown); }

// LAF Table : Identifier icon selection pop-up window descendants
inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_descendants_Line_1(TInt aIndex_t)		{ return (*(TIdentifier_icon_selection_pop_up_window_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Identifier_icon_selection_pop_up_window_descendants_Line_1)))(aIndex_t); }

inline TAknWindowLineLayout grid_graphic_popup_pane(TInt aCommon1, TInt aIndex_H)		{ return (*(Tgrid_graphic_popup_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_graphic_popup_pane)))(aCommon1, aIndex_H); }

// LAF Table : Identifier icon selection pop-up window elements
inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_elements_Line_1(TInt aCommon1)		{ return (*(TIdentifier_icon_selection_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Identifier_icon_selection_pop_up_window_elements_Line_1)))(aCommon1); }

inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_elements_Line_2(TInt aIndex_l, TInt aIndex_t, TInt aIndex_H)		{ return (*(TIdentifier_icon_selection_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Identifier_icon_selection_pop_up_window_elements_Line_2)))(aIndex_l, aIndex_t, aIndex_H); }

// LAF Table : Identifier icon selection pop-up window graphics
inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Identifier_icon_selection_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_graphics_Line_2(const TRect& aParentRect, TInt aIndex_t)		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Identifier_icon_selection_pop_up_window_graphics_Line_2)))(aParentRect, aIndex_t); }

inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_graphics_Line_3(const TRect& aParentRect, TInt aIndex_t)		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Identifier_icon_selection_pop_up_window_graphics_Line_3)))(aParentRect, aIndex_t); }

inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_graphics_Line_4(const TRect& aParentRect, TInt aIndex_t)		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Identifier_icon_selection_pop_up_window_graphics_Line_4)))(aParentRect, aIndex_t); }

inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_graphics_Line_5(const TRect& aParentRect, TInt aIndex_t)		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Identifier_icon_selection_pop_up_window_graphics_Line_5)))(aParentRect, aIndex_t); }

inline TAknLayoutTableLimits Identifier_icon_selection_pop_up_window_graphics_SUB_TABLE_0_Limits()		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Identifier_icon_selection_pop_up_window_graphics_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_graphics_SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect, TInt aIndex_t)		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Identifier_icon_selection_pop_up_window_graphics_SUB_TABLE_0)))(aLineIndex, aParentRect, aIndex_t); }

// LAF Table : Colour selection pop-up window descendants
inline TAknWindowLineLayout Colour_selection_pop_up_window_descendants_Line_1()		{ return (*(TColour_selection_pop_up_window_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_selection_pop_up_window_descendants_Line_1)))(); }

inline TAknWindowLineLayout Colour_selection_pop_up_window_descendants_Line_2()		{ return (*(TColour_selection_pop_up_window_descendants_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_selection_pop_up_window_descendants_Line_2)))(); }

inline TAknWindowLineLayout grid_large_graphic_colour_popup_pane(TInt aCommon1)		{ return (*(Tgrid_large_graphic_colour_popup_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_large_graphic_colour_popup_pane)))(aCommon1); }

// LAF Table : Composer symbol selection pop-up window elements
inline TAknWindowLineLayout Composer_symbol_selection_pop_up_window_elements_Line_1(TInt aIndex_t)		{ return (*(TComposer_symbol_selection_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Composer_symbol_selection_pop_up_window_elements_Line_1)))(aIndex_t); }

inline TAknWindowLineLayout Composer_symbol_selection_pop_up_window_elements_Line_2(TInt aIndex_l, TInt aIndex_t, TInt aIndex_W, TInt aIndex_H)		{ return (*(TComposer_symbol_selection_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Composer_symbol_selection_pop_up_window_elements_Line_2)))(aIndex_l, aIndex_t, aIndex_W, aIndex_H); }

// LAF Table : Colour selection pop-up window graphics
inline TAknWindowLineLayout Colour_selection_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TColour_selection_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_selection_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Colour_selection_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TColour_selection_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_selection_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Colour_selection_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TColour_selection_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_selection_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Colour_selection_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TColour_selection_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_selection_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknWindowLineLayout Colour_selection_pop_up_window_graphics_Line_5(const TRect& aParentRect)		{ return (*(TColour_selection_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_selection_pop_up_window_graphics_Line_5)))(aParentRect); }

inline TAknLayoutTableLimits Colour_selection_pop_up_window_graphics_Limits()		{ return (*(TColour_selection_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_selection_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Colour_selection_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TColour_selection_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_selection_pop_up_window_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Fast application swapping pop-up window descendants
inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_descendants_Line_1(TInt aIndex_t)		{ return (*(TFast_application_swapping_pop_up_window_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_pop_up_window_descendants_Line_1)))(aIndex_t); }

// LAF Table : Fast application swapping pop-up window graphics
inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TFast_application_swapping_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TFast_application_swapping_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TFast_application_swapping_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TFast_application_swapping_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_Line_5(const TRect& aParentRect)		{ return (*(TFast_application_swapping_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_pop_up_window_graphics_Line_5)))(aParentRect); }

inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_Line_6()		{ return (*(TFast_application_swapping_pop_up_window_graphics_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_pop_up_window_graphics_Line_6)))(); }

inline TAknLayoutTableLimits Fast_application_swapping_pop_up_window_graphics_SUB_TABLE_0_Limits()		{ return (*(TFast_application_swapping_pop_up_window_graphics_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_pop_up_window_graphics_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TFast_application_swapping_pop_up_window_graphics_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_pop_up_window_graphics_SUB_TABLE_0)))(aLineIndex, aParentRect); }

// LAF Table : List pane texts (setting, double2)
inline TAknTextLineLayout List_pane_texts__setting__double2__Line_1()		{ return (*(TList_pane_texts__setting__double2__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting__double2__Line_1)))(); }

inline TAknTextLineLayout List_pane_texts__setting__double2__Line_2()		{ return (*(TList_pane_texts__setting__double2__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting__double2__Line_2)))(); }

inline TAknLayoutTableLimits List_pane_texts__setting__double2__Limits()		{ return (*(TList_pane_texts__setting__double2__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting__double2__Limits)))(); }

inline TAknTextLineLayout List_pane_texts__setting__double2_(TInt aLineIndex)		{ return (*(TList_pane_texts__setting__double2__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__setting__double2_)))(aLineIndex); }

// LAF Table : List pane elements (single 2graphic)
inline TAknWindowLineLayout List_pane_elements__single_2graphic__Line_1()		{ return (*(TList_pane_elements__single_2graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_2graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__single_2graphic__Line_2()		{ return (*(TList_pane_elements__single_2graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_2graphic__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__single_2graphic__Line_3()		{ return (*(TList_pane_elements__single_2graphic__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_2graphic__Line_3)))(); }

inline TAknWindowLineLayout List_pane_elements__single_2graphic__Line_4(TInt aIndex_l)		{ return (*(TList_pane_elements__single_2graphic__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_2graphic__Line_4)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_elements__single_2graphic__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__single_2graphic__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_2graphic__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__single_2graphic__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__single_2graphic__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__single_2graphic__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (single 2graphic)
inline TAknTextLineLayout List_pane_texts__single_2graphic__Line_1(TInt aIndex_r, TInt aIndex_W)		{ return (*(TList_pane_texts__single_2graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__single_2graphic__Line_1)))(aIndex_r, aIndex_W); }

// LAF Table : List pane elements (double2 graphic large graphic)
inline TAknWindowLineLayout List_pane_elements__double2_graphic_large_graphic__Line_1()		{ return (*(TList_pane_elements__double2_graphic_large_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_graphic_large_graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__double2_graphic_large_graphic__Line_2()		{ return (*(TList_pane_elements__double2_graphic_large_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_graphic_large_graphic__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__double2_graphic_large_graphic__Line_3()		{ return (*(TList_pane_elements__double2_graphic_large_graphic__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_graphic_large_graphic__Line_3)))(); }

inline TAknWindowLineLayout List_pane_elements__double2_graphic_large_graphic__Line_4(TInt aIndex_l)		{ return (*(TList_pane_elements__double2_graphic_large_graphic__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_graphic_large_graphic__Line_4)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_elements__double2_graphic_large_graphic__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__double2_graphic_large_graphic__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_graphic_large_graphic__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__double2_graphic_large_graphic__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__double2_graphic_large_graphic__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__double2_graphic_large_graphic__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (double2 graphic large graphic)
inline TAknTextLineLayout List_pane_texts__double2_graphic_large_graphic__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__double2_graphic_large_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double2_graphic_large_graphic__Line_1)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__double2_graphic_large_graphic__Line_2()		{ return (*(TList_pane_texts__double2_graphic_large_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__double2_graphic_large_graphic__Line_2)))(); }

// LAF Table : Form data wide graphic field texts
inline TAknTextLineLayout Form_data_wide_graphic_field_texts_Line_1()		{ return (*(TForm_data_wide_graphic_field_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_wide_graphic_field_texts_Line_1)))(); }

inline TAknTextLineLayout Form_data_wide_graphic_field_texts_Line_2(TInt aIndex_B)		{ return (*(TForm_data_wide_graphic_field_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Form_data_wide_graphic_field_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Form_data_wide_graphic_field_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Form_data_wide_graphic_field_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Form_data_wide_graphic_field_texts_Line_2)))(aNumberOfLinesShown); }

// LAF Table : Application window descendants 2.1
inline TAknWindowLineLayout status_small_pane()		{ return (*(Tstatus_small_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_status_small_pane)))(); }

// LAF Table : Small status pane descendants and elements
inline TAknWindowLineLayout Small_status_pane_descendants_and_elements_Line_1()		{ return (*(TSmall_status_pane_descendants_and_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_pane_descendants_and_elements_Line_1)))(); }

inline TAknWindowLineLayout status_small_icon_pane()		{ return (*(Tstatus_small_icon_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_status_small_icon_pane)))(); }

inline TAknWindowLineLayout status_small_wait_pane()		{ return (*(Tstatus_small_wait_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_status_small_wait_pane)))(); }

inline TAknWindowLineLayout Small_status_pane_descendants_and_elements_Line_4()		{ return (*(TSmall_status_pane_descendants_and_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_pane_descendants_and_elements_Line_4)))(); }

inline TAknWindowLineLayout Small_status_pane_descendants_and_elements_Line_5()		{ return (*(TSmall_status_pane_descendants_and_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_pane_descendants_and_elements_Line_5)))(); }

inline TAknWindowLineLayout Small_status_pane_descendants_and_elements_Line_6()		{ return (*(TSmall_status_pane_descendants_and_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_pane_descendants_and_elements_Line_6)))(); }

inline TAknLayoutTableLimits Small_status_pane_descendants_and_elements_Limits()		{ return (*(TSmall_status_pane_descendants_and_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_pane_descendants_and_elements_Limits)))(); }

inline TAknWindowLineLayout Small_status_pane_descendants_and_elements(TInt aLineIndex)		{ return (*(TSmall_status_pane_descendants_and_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_pane_descendants_and_elements)))(aLineIndex); }

// LAF Table : Small status pane texts
inline TAknTextLineLayout Small_status_pane_texts_Line_1(TInt aIndex_J)		{ return (*(TSmall_status_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_pane_texts_Line_1)))(aIndex_J); }

// LAF Table : Small status waiting pane components
inline TAknWindowLineLayout Small_status_waiting_pane_components_Line_1()		{ return (*(TSmall_status_waiting_pane_components_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_waiting_pane_components_Line_1)))(); }

inline TAknWindowLineLayout Small_status_waiting_pane_components_Line_2()		{ return (*(TSmall_status_waiting_pane_components_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_waiting_pane_components_Line_2)))(); }

inline TAknWindowLineLayout Small_status_waiting_pane_components_Line_3()		{ return (*(TSmall_status_waiting_pane_components_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_waiting_pane_components_Line_3)))(); }

inline TAknWindowLineLayout Small_status_waiting_pane_components_Line_4()		{ return (*(TSmall_status_waiting_pane_components_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_waiting_pane_components_Line_4)))(); }

inline TAknLayoutTableLimits Small_status_waiting_pane_components_Limits()		{ return (*(TSmall_status_waiting_pane_components_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_waiting_pane_components_Limits)))(); }

inline TAknWindowLineLayout Small_status_waiting_pane_components(TInt aLineIndex)		{ return (*(TSmall_status_waiting_pane_components_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Small_status_waiting_pane_components)))(aLineIndex); }

// Layouts for AknPopupForm
inline TAknWindowLineLayout Note_with_additional_information_popup_window_elements_Line_1()		{ return (*(TNote_with_additional_information_popup_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_additional_information_popup_window_elements_Line_1)))(); }

inline TAknWindowLineLayout Note_with_additional_information_popup_window_elements_Line_2(TInt aIndex_W)		{ return (*(TNote_with_additional_information_popup_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_additional_information_popup_window_elements_Line_2)))(aIndex_W); }

inline TAknWindowLineLayout Note_with_additional_information_popup_window_elements_Line_3(TInt aIndex_W)		{ return (*(TNote_with_additional_information_popup_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_additional_information_popup_window_elements_Line_3)))(aIndex_W); }

inline TAknTextLineLayout Note_with_additional_information_popup_window_texts_Line_1(TInt aCommon1, TInt aIndex_B)		{ return (*(TNote_with_additional_information_popup_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_additional_information_popup_window_texts_Line_1)))(aCommon1, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Note_with_additional_information_popup_window_texts_Line_1(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Note_with_additional_information_popup_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Note_with_additional_information_popup_window_texts_Line_1)))(aCommon1, aNumberOfLinesShown); }

inline TAknTextLineLayout Note_with_additional_information_popup_window_texts_Line_2(TInt aIndex_B)		{ return (*(TNote_with_additional_information_popup_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_additional_information_popup_window_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Note_with_additional_information_popup_window_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Note_with_additional_information_popup_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Note_with_additional_information_popup_window_texts_Line_2)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Note_with_additional_information_popup_window_texts_Line_3(TInt aCommon1, TInt aIndex_B)		{ return (*(TNote_with_additional_information_popup_window_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_with_additional_information_popup_window_texts_Line_3)))(aCommon1, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Note_with_additional_information_popup_window_texts_Line_3(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Note_with_additional_information_popup_window_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Note_with_additional_information_popup_window_texts_Line_3)))(aCommon1, aNumberOfLinesShown); }

inline TAknTextLineLayout Heading_pane_texts_Line_2()		{ return (*(THeading_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Heading_pane_texts_Line_2)))(); }

inline TAknWindowLineLayout Side_volume_key_popup_window_elements_Line_1()		{ return (*(TSide_volume_key_popup_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Side_volume_key_popup_window_elements_Line_1)))(); }

inline TAknWindowLineLayout Side_volume_key_popup_window_elements_Line_2()		{ return (*(TSide_volume_key_popup_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Side_volume_key_popup_window_elements_Line_2)))(); }

inline TAknTextLineLayout Side_volume_key_popup_window_texts_Line_1()		{ return (*(TSide_volume_key_popup_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Side_volume_key_popup_window_texts_Line_1)))(); }

inline TAknTextLineLayout Side_volume_key_popup_window_texts_Line_2()		{ return (*(TSide_volume_key_popup_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Side_volume_key_popup_window_texts_Line_2)))(); }

inline TAknWindowLineLayout Side_volume_key_popup_window_background_Line_1(const TRect& aParentRect)		{ return (*(TSide_volume_key_popup_window_background_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Side_volume_key_popup_window_background_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Side_volume_key_popup_window_background_Line_2(const TRect& aParentRect)		{ return (*(TSide_volume_key_popup_window_background_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Side_volume_key_popup_window_background_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Side_volume_key_popup_window_background_Line_3(const TRect& aParentRect)		{ return (*(TSide_volume_key_popup_window_background_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Side_volume_key_popup_window_background_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Side_volume_key_popup_window_background_Line_4(const TRect& aParentRect)		{ return (*(TSide_volume_key_popup_window_background_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Side_volume_key_popup_window_background_Line_4)))(aParentRect); }

// LAF Table : Transparent setting item texts
inline TAknTextLineLayout Transparent_setting_item_texts_Line_1()		{ return (*(TTransparent_setting_item_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Transparent_setting_item_texts_Line_1)))(); }

inline TAknTextLineLayout Transparent_setting_item_texts_Line_2()		{ return (*(TTransparent_setting_item_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Transparent_setting_item_texts_Line_2)))(); }

inline TAknTextLineLayout Transparent_setting_item_texts_Line_3(TInt aCommon1)		{ return (*(TTransparent_setting_item_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Transparent_setting_item_texts_Line_3)))(aCommon1); }

inline TAknTextLineLayout Transparent_setting_item_texts_Line_4(TInt aCommon1)		{ return (*(TTransparent_setting_item_texts_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Transparent_setting_item_texts_Line_4)))(aCommon1); }

// LAF Table : List pane texts (set trans graphic)
inline TAknTextLineLayout List_pane_texts__set_trans_graphic__Line_1(TInt aIndex_l, TInt aIndex_W)		{ return (*(TList_pane_texts__set_trans_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__set_trans_graphic__Line_1)))(aIndex_l, aIndex_W); }

inline TAknTextLineLayout List_pane_texts__set_trans_graphic__Line_2(TInt aIndex_l, TInt aIndex_W)		{ return (*(TList_pane_texts__set_trans_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__set_trans_graphic__Line_2)))(aIndex_l, aIndex_W); }

// LAF Table : List pane elements and descendants (settings edited)
inline TAknWindowLineLayout list_set_trans_pane(TInt aIndex_H)		{ return (*(Tlist_set_trans_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_set_trans_pane)))(aIndex_H); }

// LAF Table : AVKON specific list pane
inline TAknWindowLineLayout list_set_trans_graphic_pane(TInt aIndex_t)		{ return (*(Tlist_set_trans_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_set_trans_graphic_pane)))(aIndex_t); }

// LAF Table : List pane elements (set trans graphic)
inline TAknWindowLineLayout List_pane_elements__set_trans_graphic__Line_1()		{ return (*(TList_pane_elements__set_trans_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__set_trans_graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__set_trans_graphic__Line_2()		{ return (*(TList_pane_elements__set_trans_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__set_trans_graphic__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__set_trans_graphic__Line_3()		{ return (*(TList_pane_elements__set_trans_graphic__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__set_trans_graphic__Line_3)))(); }

inline TAknWindowLineLayout List_pane_elements__set_trans_graphic__Line_4()		{ return (*(TList_pane_elements__set_trans_graphic__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__set_trans_graphic__Line_4)))(); }

inline TAknWindowLineLayout List_pane_elements__set_trans_graphic__Line_5()		{ return (*(TList_pane_elements__set_trans_graphic__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__set_trans_graphic__Line_5)))(); }

// Active idle state layouts
inline TAknTextLineLayout Soft_indicator_texts_Line_1()		{ return (*(TSoft_indicator_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Soft_indicator_texts_Line_1)))(); }

inline TAknWindowLineLayout ai_links_pane()		{ return (*(Tai_links_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_ai_links_pane)))(); }

inline TAknWindowLineLayout ai_gene_pane(TInt aIndex_H)		{ return (*(Tai_gene_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_ai_gene_pane)))(aIndex_H); }

inline TAknWindowLineLayout Link_pane_elements_and_descendant_panes_Line_1()		{ return (*(TLink_pane_elements_and_descendant_panes_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_pane_elements_and_descendant_panes_Line_1)))(); }

inline TAknWindowLineLayout grid_ai_links_pane()		{ return (*(Tgrid_ai_links_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_ai_links_pane)))(); }

inline TAknLayoutTableLimits Link_pane_elements_and_descendant_panes_Limits()		{ return (*(TLink_pane_elements_and_descendant_panes_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_pane_elements_and_descendant_panes_Limits)))(); }

inline TAknWindowLineLayout Link_pane_elements_and_descendant_panes(TInt aLineIndex)		{ return (*(TLink_pane_elements_and_descendant_panes_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_pane_elements_and_descendant_panes)))(aLineIndex); }

inline TAknWindowLineLayout cell_ai_link_pane(TInt aIndex_l)		{ return (*(Tcell_ai_link_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_ai_link_pane)))(aIndex_l); }

inline TAknWindowLineLayout Link_shortcut_cell_pane_elements_Line_1()		{ return (*(TLink_shortcut_cell_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_cell_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Link_shortcut_cell_pane_elements_Line_2()		{ return (*(TLink_shortcut_cell_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_cell_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Link_shortcut_cell_pane_elements_Line_3()		{ return (*(TLink_shortcut_cell_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_cell_pane_elements_Line_3)))(); }

inline TAknWindowLineLayout Link_shortcut_cell_pane_elements_Line_4()		{ return (*(TLink_shortcut_cell_pane_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_cell_pane_elements_Line_4)))(); }

inline TAknLayoutTableLimits Link_shortcut_cell_pane_elements_Limits()		{ return (*(TLink_shortcut_cell_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_cell_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Link_shortcut_cell_pane_elements(TInt aLineIndex)		{ return (*(TLink_shortcut_cell_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_cell_pane_elements)))(aLineIndex); }

inline TAknWindowLineLayout popup_ai_links_title_window()		{ return (*(Tpopup_ai_links_title_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_ai_links_title_window)))(); }

inline TAknTextLineLayout Link_shortcut_title_texts_Line_1()		{ return (*(TLink_shortcut_title_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_title_texts_Line_1)))(); }

inline TAknWindowLineLayout Link_shortcut_title_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TLink_shortcut_title_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_title_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Link_shortcut_title_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TLink_shortcut_title_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_title_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Link_shortcut_title_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TLink_shortcut_title_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_title_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Link_shortcut_title_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TLink_shortcut_title_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_title_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknLayoutTableLimits Link_shortcut_title_pop_up_window_graphics_Limits()		{ return (*(TLink_shortcut_title_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_title_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Link_shortcut_title_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TLink_shortcut_title_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Link_shortcut_title_pop_up_window_graphics)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout ai_gene_pane_1()		{ return (*(Tai_gene_pane_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_ai_gene_pane_1)))(); }

inline TAknWindowLineLayout ai_gene_pane_2(TInt aIndex_t)		{ return (*(Tai_gene_pane_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_ai_gene_pane_2)))(aIndex_t); }

inline TAknWindowLineLayout First_general_event_elements_Line_1()		{ return (*(TFirst_general_event_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_general_event_elements_Line_1)))(); }

inline TAknWindowLineLayout First_general_event_elements_Line_2()		{ return (*(TFirst_general_event_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_general_event_elements_Line_2)))(); }

inline TAknTextLineLayout First_general_event_texts_Line_1(TInt aCommon1)		{ return (*(TFirst_general_event_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_general_event_texts_Line_1)))(aCommon1); }

inline TAknTextLineLayout Second_general_event_pane_texts_Line_1(TInt aCommon1)		{ return (*(TSecond_general_event_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_general_event_pane_texts_Line_1)))(aCommon1); }

inline TAknWindowLineLayout Shortcut_link_highlight_Line_1(const TRect& aParentRect)		{ return (*(TShortcut_link_highlight_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Shortcut_link_highlight_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Highlight_for_other_Active_Idle_items_Line_1(const TRect& aParentRect)		{ return (*(THighlight_for_other_Active_Idle_items_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_for_other_Active_Idle_items_Line_1)))(aParentRect); }

inline TAknTextLineLayout Find_pop_up_window_texts_Line_2()		{ return (*(TFind_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_texts_Line_2)))(); }

inline TAknLayoutTableLimits Find_pop_up_window_texts_Limits()		{ return (*(TFind_pop_up_window_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_texts_Limits)))(); }

inline TAknTextLineLayout Find_pop_up_window_texts(TInt aLineIndex)		{ return (*(TFind_pop_up_window_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_texts)))(aLineIndex); }

inline TAknTextLineLayout Find_pane_texts_Line_2()		{ return (*(TFind_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_texts_Line_2)))(); }

inline TAknLayoutTableLimits Find_pane_texts_Limits()		{ return (*(TFind_pane_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_texts_Limits)))(); }

inline TAknTextLineLayout Find_pane_texts(TInt aLineIndex)		{ return (*(TFind_pane_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_texts)))(aLineIndex); }

inline TAknWindowLineLayout ai_gene_pane_3()		{ return (*(Tai_gene_pane_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_ai_gene_pane_3)))(); }

inline TAknWindowLineLayout Third_general_event_elements_Line_1()		{ return (*(TThird_general_event_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Third_general_event_elements_Line_1)))(); }

inline TAknWindowLineLayout Third_general_event_elements_Line_2()		{ return (*(TThird_general_event_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Third_general_event_elements_Line_2)))(); }

inline TAknLayoutTableLimits Third_general_event_elements_Limits()		{ return (*(TThird_general_event_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Third_general_event_elements_Limits)))(); }

inline TAknWindowLineLayout Third_general_event_elements(TInt aLineIndex)		{ return (*(TThird_general_event_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Third_general_event_elements)))(aLineIndex); }

inline TAknWindowLineLayout popup_ai_message_window()		{ return (*(Tpopup_ai_message_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_ai_message_window)))(); }

inline TAknWindowLineLayout Active_idle_message_pop_up_window_descendants_Line_1()		{ return (*(TActive_idle_message_pop_up_window_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_pop_up_window_descendants_Line_1)))(); }

inline TAknWindowLineLayout Active_idle_message_pop_up_window_descendants_Line_2()		{ return (*(TActive_idle_message_pop_up_window_descendants_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_pop_up_window_descendants_Line_2)))(); }

inline TAknWindowLineLayout Active_idle_message_pop_up_window_descendants_Line_3()		{ return (*(TActive_idle_message_pop_up_window_descendants_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_pop_up_window_descendants_Line_3)))(); }

inline TAknLayoutTableLimits Active_idle_message_pop_up_window_descendants_Limits()		{ return (*(TActive_idle_message_pop_up_window_descendants_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_pop_up_window_descendants_Limits)))(); }

inline TAknWindowLineLayout Active_idle_message_pop_up_window_descendants(TInt aLineIndex)		{ return (*(TActive_idle_message_pop_up_window_descendants_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_pop_up_window_descendants)))(aLineIndex); }

inline TAknTextLineLayout Active_idle_message_popup_window_texts_Line_1(TInt aCommon1, TInt aIndex_B)		{ return (*(TActive_idle_message_popup_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_popup_window_texts_Line_1)))(aCommon1, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Active_idle_message_popup_window_texts_Line_1(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Active_idle_message_popup_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Active_idle_message_popup_window_texts_Line_1)))(aCommon1, aNumberOfLinesShown); }

inline TAknWindowLineLayout Active_idle_heading_pane_elements_Line_1()		{ return (*(TActive_idle_heading_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_heading_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Active_idle_heading_pane_elements_Line_2()		{ return (*(TActive_idle_heading_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_heading_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Active_idle_heading_pane_elements_Line_3()		{ return (*(TActive_idle_heading_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_heading_pane_elements_Line_3)))(); }

inline TAknWindowLineLayout Active_idle_heading_pane_elements_Line_4()		{ return (*(TActive_idle_heading_pane_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_heading_pane_elements_Line_4)))(); }

inline TAknLayoutTableLimits Active_idle_heading_pane_elements_Limits()		{ return (*(TActive_idle_heading_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_heading_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Active_idle_heading_pane_elements(TInt aLineIndex)		{ return (*(TActive_idle_heading_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_heading_pane_elements)))(aLineIndex); }

inline TAknTextLineLayout Active_idle_heading_pane_texts_Line_1(TInt aCommon1)		{ return (*(TActive_idle_heading_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_heading_pane_texts_Line_1)))(aCommon1); }

inline TAknTextLineLayout Active_idle_heading_pane_texts_Line_2()		{ return (*(TActive_idle_heading_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_heading_pane_texts_Line_2)))(); }

inline TAknWindowLineLayout Active_idle_message_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TActive_idle_message_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Active_idle_message_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TActive_idle_message_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Active_idle_message_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TActive_idle_message_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Active_idle_message_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TActive_idle_message_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknWindowLineLayout Active_idle_message_pop_up_window_graphics_Line_5(const TRect& aParentRect)		{ return (*(TActive_idle_message_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_pop_up_window_graphics_Line_5)))(aParentRect); }

inline TAknLayoutTableLimits Active_idle_message_pop_up_window_graphics_Limits()		{ return (*(TActive_idle_message_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Active_idle_message_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TActive_idle_message_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Active_idle_message_pop_up_window_graphics)))(aLineIndex, aParentRect); }



class CInstance : public CCdlInstance
	{
public:
	enum { ETypeId = KCdlInterfaceUidValue };

	inline static const CInstance& CustomisationInstance()                                                    { return (const CInstance&)(CdlEngine::CustomisationInstance(KCdlInterfaceUid)); }
	inline static CInstance* NewL(const TCdlRef& aRef, const CCdlInstance* aSubLayer = NULL)                  { return (CInstance*) CCdlInstance::NewL(aRef, &KCdlInterface, aSubLayer); }
	inline static CInstance* NewLC(const TCdlRef& aRef, const CCdlInstance* aSubLayer = NULL)                 { return (CInstance*) CCdlInstance::NewLC(aRef, &KCdlInterface, aSubLayer); }
	inline static CInstance* NewL(const TDesC& aLibName, TInt aImplId, const CCdlInstance* aSubLayer = NULL)  { TCdlRef ref = { aImplId, { KCdlInterfaceUidValue }, &aLibName }; return NewL(ref, aSubLayer); }
	inline static CInstance* NewLC(const TDesC& aLibName, TInt aImplId, const CCdlInstance* aSubLayer = NULL) { TCdlRef ref = { aImplId, { KCdlInterfaceUidValue }, &aLibName }; return NewLC(ref, aSubLayer); }

	inline const CInstance* SubLayer()                                                                        { return static_cast<const CInstance*>(CCdlInstance::SubLayer()); }

// CDL API functions, as defined in aknlayout.cdl

	// LAF Table : Screen dimensions
	inline TAknWindowLineLayout screen() const		{ return (*(Tscreen_sig*)(GetFunction(EApiId_screen)))(); }

	// LAF Table : Application window dimensions
	inline TAknWindowLineLayout application_window(const TRect& aParentRect) const		{ return (*(Tapplication_window_sig*)(GetFunction(EApiId_application_window)))(aParentRect); }

	// LAF Table : Application window descendants
	inline TAknWindowLineLayout status_pane(const TRect& aParentRect, TInt aIndex_H) const		{ return (*(Tstatus_pane_sig*)(GetFunction(EApiId_status_pane)))(aParentRect, aIndex_H); }

	inline TAknWindowLineLayout main_pane(const TRect& aParentRect, TInt aCommon1, TInt aIndex_t, TInt aIndex_b) const		{ return (*(Tmain_pane_sig*)(GetFunction(EApiId_main_pane)))(aParentRect, aCommon1, aIndex_t, aIndex_b); }

	inline TAknWindowLineLayout control_pane(const TRect& aParentRect) const		{ return (*(Tcontrol_pane_sig*)(GetFunction(EApiId_control_pane)))(aParentRect); }

	// LAF Table : Status pane descendants
	inline TAknWindowLineLayout signal_pane(const TRect& aParentRect) const		{ return (*(Tsignal_pane_sig*)(GetFunction(EApiId_signal_pane)))(aParentRect); }

	inline TAknWindowLineLayout context_pane(const TRect& aParentRect, TInt aIndex_W) const		{ return (*(Tcontext_pane_sig*)(GetFunction(EApiId_context_pane)))(aParentRect, aIndex_W); }

	inline TAknWindowLineLayout title_pane(TInt aCommon1) const		{ return (*(Ttitle_pane_sig*)(GetFunction(EApiId_title_pane)))(aCommon1); }

	inline TAknWindowLineLayout battery_pane(const TRect& aParentRect) const		{ return (*(Tbattery_pane_sig*)(GetFunction(EApiId_battery_pane)))(aParentRect); }

	inline TAknWindowLineLayout uni_indicator_pane(const TRect& aParentRect) const		{ return (*(Tuni_indicator_pane_sig*)(GetFunction(EApiId_uni_indicator_pane)))(aParentRect); }

	inline TAknWindowLineLayout navi_pane(TInt aCommon1) const		{ return (*(Tnavi_pane_sig*)(GetFunction(EApiId_navi_pane)))(aCommon1); }

	// LAF Table : Status pane elements
	inline TAknWindowLineLayout Status_pane_elements_Line_1() const		{ return (*(TStatus_pane_elements_Line_1_sig*)(GetFunction(EApiId_Status_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Status_pane_elements_Line_2() const		{ return (*(TStatus_pane_elements_Line_2_sig*)(GetFunction(EApiId_Status_pane_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Status_pane_elements_Limits() const		{ return (*(TStatus_pane_elements_Limits_sig*)(GetFunction(EApiId_Status_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Status_pane_elements(TInt aLineIndex) const		{ return (*(TStatus_pane_elements_sig*)(GetFunction(EApiId_Status_pane_elements)))(aLineIndex); }

	// LAF Table : Signal pane elements
	inline TAknWindowLineLayout Signal_pane_elements_Line_1() const		{ return (*(TSignal_pane_elements_Line_1_sig*)(GetFunction(EApiId_Signal_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Signal_pane_elements_Line_2() const		{ return (*(TSignal_pane_elements_Line_2_sig*)(GetFunction(EApiId_Signal_pane_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Signal_pane_elements_Limits() const		{ return (*(TSignal_pane_elements_Limits_sig*)(GetFunction(EApiId_Signal_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Signal_pane_elements(TInt aLineIndex) const		{ return (*(TSignal_pane_elements_sig*)(GetFunction(EApiId_Signal_pane_elements)))(aLineIndex); }

	// LAF Table : Signal strength area values
	inline TAknWindowLineLayout Signal_strength_area_values_Line_1() const		{ return (*(TSignal_strength_area_values_Line_1_sig*)(GetFunction(EApiId_Signal_strength_area_values_Line_1)))(); }

	inline TAknWindowLineLayout Signal_strength_area_values_Line_2() const		{ return (*(TSignal_strength_area_values_Line_2_sig*)(GetFunction(EApiId_Signal_strength_area_values_Line_2)))(); }

	inline TAknWindowLineLayout Signal_strength_area_values_Line_3() const		{ return (*(TSignal_strength_area_values_Line_3_sig*)(GetFunction(EApiId_Signal_strength_area_values_Line_3)))(); }

	inline TAknWindowLineLayout Signal_strength_area_values_Line_4() const		{ return (*(TSignal_strength_area_values_Line_4_sig*)(GetFunction(EApiId_Signal_strength_area_values_Line_4)))(); }

	inline TAknWindowLineLayout Signal_strength_area_values_Line_5() const		{ return (*(TSignal_strength_area_values_Line_5_sig*)(GetFunction(EApiId_Signal_strength_area_values_Line_5)))(); }

	inline TAknWindowLineLayout Signal_strength_area_values_Line_6() const		{ return (*(TSignal_strength_area_values_Line_6_sig*)(GetFunction(EApiId_Signal_strength_area_values_Line_6)))(); }

	inline TAknWindowLineLayout Signal_strength_area_values_Line_7() const		{ return (*(TSignal_strength_area_values_Line_7_sig*)(GetFunction(EApiId_Signal_strength_area_values_Line_7)))(); }

	inline TAknWindowLineLayout Signal_strength_area_values_Line_8() const		{ return (*(TSignal_strength_area_values_Line_8_sig*)(GetFunction(EApiId_Signal_strength_area_values_Line_8)))(); }

	inline TAknLayoutTableLimits Signal_strength_area_values_Limits() const		{ return (*(TSignal_strength_area_values_Limits_sig*)(GetFunction(EApiId_Signal_strength_area_values_Limits)))(); }

	inline TAknWindowLineLayout Signal_strength_area_values(TInt aLineIndex) const		{ return (*(TSignal_strength_area_values_sig*)(GetFunction(EApiId_Signal_strength_area_values)))(aLineIndex); }

	// LAF Table : Battery pane elements
	inline TAknWindowLineLayout Battery_pane_elements_Line_1() const		{ return (*(TBattery_pane_elements_Line_1_sig*)(GetFunction(EApiId_Battery_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Battery_pane_elements_Line_2() const		{ return (*(TBattery_pane_elements_Line_2_sig*)(GetFunction(EApiId_Battery_pane_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Battery_pane_elements_Limits() const		{ return (*(TBattery_pane_elements_Limits_sig*)(GetFunction(EApiId_Battery_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Battery_pane_elements(TInt aLineIndex) const		{ return (*(TBattery_pane_elements_sig*)(GetFunction(EApiId_Battery_pane_elements)))(aLineIndex); }

	// LAF Table : Battery strength area values
	inline TAknWindowLineLayout Battery_strength_area_values_Line_1() const		{ return (*(TBattery_strength_area_values_Line_1_sig*)(GetFunction(EApiId_Battery_strength_area_values_Line_1)))(); }

	inline TAknWindowLineLayout Battery_strength_area_values_Line_2() const		{ return (*(TBattery_strength_area_values_Line_2_sig*)(GetFunction(EApiId_Battery_strength_area_values_Line_2)))(); }

	inline TAknWindowLineLayout Battery_strength_area_values_Line_3() const		{ return (*(TBattery_strength_area_values_Line_3_sig*)(GetFunction(EApiId_Battery_strength_area_values_Line_3)))(); }

	inline TAknWindowLineLayout Battery_strength_area_values_Line_4() const		{ return (*(TBattery_strength_area_values_Line_4_sig*)(GetFunction(EApiId_Battery_strength_area_values_Line_4)))(); }

	inline TAknWindowLineLayout Battery_strength_area_values_Line_5() const		{ return (*(TBattery_strength_area_values_Line_5_sig*)(GetFunction(EApiId_Battery_strength_area_values_Line_5)))(); }

	inline TAknWindowLineLayout Battery_strength_area_values_Line_6() const		{ return (*(TBattery_strength_area_values_Line_6_sig*)(GetFunction(EApiId_Battery_strength_area_values_Line_6)))(); }

	inline TAknWindowLineLayout Battery_strength_area_values_Line_7() const		{ return (*(TBattery_strength_area_values_Line_7_sig*)(GetFunction(EApiId_Battery_strength_area_values_Line_7)))(); }

	inline TAknWindowLineLayout Battery_strength_area_values_Line_8() const		{ return (*(TBattery_strength_area_values_Line_8_sig*)(GetFunction(EApiId_Battery_strength_area_values_Line_8)))(); }

	inline TAknLayoutTableLimits Battery_strength_area_values_Limits() const		{ return (*(TBattery_strength_area_values_Limits_sig*)(GetFunction(EApiId_Battery_strength_area_values_Limits)))(); }

	inline TAknWindowLineLayout Battery_strength_area_values(TInt aLineIndex) const		{ return (*(TBattery_strength_area_values_sig*)(GetFunction(EApiId_Battery_strength_area_values)))(aLineIndex); }

	// LAF Table : Context pane elements
	inline TAknWindowLineLayout Context_pane_elements_Line_1() const		{ return (*(TContext_pane_elements_Line_1_sig*)(GetFunction(EApiId_Context_pane_elements_Line_1)))(); }

	// LAF Table : Title pane texts
	inline TAknTextLineLayout Title_pane_texts_Line_1(TInt aIndex_l, TInt aIndex_W) const		{ return (*(TTitle_pane_texts_Line_1_sig*)(GetFunction(EApiId_Title_pane_texts_Line_1)))(aIndex_l, aIndex_W); }

	inline TAknTextLineLayout Title_pane_texts_Line_2(TInt aIndex_B, TInt aIndex_W) const		{ return (*(TTitle_pane_texts_Line_2_sig*)(GetFunction(EApiId_Title_pane_texts_Line_2)))(aIndex_B, aIndex_W); }

	inline TAknMultiLineTextLayout Multiline_Title_pane_texts_Line_2(TInt aIndex_W, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Title_pane_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Title_pane_texts_Line_2)))(aIndex_W, aNumberOfLinesShown); }

	// LAF Table : Title pane elements
	inline TAknWindowLineLayout Title_pane_elements_Line_1() const		{ return (*(TTitle_pane_elements_Line_1_sig*)(GetFunction(EApiId_Title_pane_elements_Line_1)))(); }

	// LAF Table : Universal indicator pane elements
	inline TAknWindowLineLayout Universal_indicator_pane_elements_Line_1(TInt aIndex_t) const		{ return (*(TUniversal_indicator_pane_elements_Line_1_sig*)(GetFunction(EApiId_Universal_indicator_pane_elements_Line_1)))(aIndex_t); }

	// LAF Table : Navi pane arrow elements
	inline TAknWindowLineLayout Navi_pane_arrow_elements_Line_1() const		{ return (*(TNavi_pane_arrow_elements_Line_1_sig*)(GetFunction(EApiId_Navi_pane_arrow_elements_Line_1)))(); }

	inline TAknWindowLineLayout Navi_pane_arrow_elements_Line_2(TInt aIndex_l, TInt aIndex_r) const		{ return (*(TNavi_pane_arrow_elements_Line_2_sig*)(GetFunction(EApiId_Navi_pane_arrow_elements_Line_2)))(aIndex_l, aIndex_r); }

	// LAF Table : Navi pane tab elements
	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_1() const		{ return (*(TNavi_pane_tab_elements_Line_1_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_1)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_2() const		{ return (*(TNavi_pane_tab_elements_Line_2_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_2)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_3() const		{ return (*(TNavi_pane_tab_elements_Line_3_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_3)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_4() const		{ return (*(TNavi_pane_tab_elements_Line_4_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_4)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_5() const		{ return (*(TNavi_pane_tab_elements_Line_5_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_5)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_6() const		{ return (*(TNavi_pane_tab_elements_Line_6_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_6)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_7() const		{ return (*(TNavi_pane_tab_elements_Line_7_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_7)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_8() const		{ return (*(TNavi_pane_tab_elements_Line_8_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_8)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_9() const		{ return (*(TNavi_pane_tab_elements_Line_9_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_9)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_10() const		{ return (*(TNavi_pane_tab_elements_Line_10_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_10)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_11() const		{ return (*(TNavi_pane_tab_elements_Line_11_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_11)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_12() const		{ return (*(TNavi_pane_tab_elements_Line_12_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_12)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_13() const		{ return (*(TNavi_pane_tab_elements_Line_13_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_13)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements_Line_14() const		{ return (*(TNavi_pane_tab_elements_Line_14_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Line_14)))(); }

	inline TAknLayoutTableLimits Navi_pane_tab_elements_Limits() const		{ return (*(TNavi_pane_tab_elements_Limits_sig*)(GetFunction(EApiId_Navi_pane_tab_elements_Limits)))(); }

	inline TAknWindowLineLayout Navi_pane_tab_elements(TInt aLineIndex) const		{ return (*(TNavi_pane_tab_elements_sig*)(GetFunction(EApiId_Navi_pane_tab_elements)))(aLineIndex); }

	// LAF Table : Elements on the tabs
	inline TAknWindowLineLayout Elements_on_the_tabs_Line_1(TInt aIndex_l) const		{ return (*(TElements_on_the_tabs_Line_1_sig*)(GetFunction(EApiId_Elements_on_the_tabs_Line_1)))(aIndex_l); }

	inline TAknWindowLineLayout Elements_on_the_tabs_Line_2(TInt aIndex_l) const		{ return (*(TElements_on_the_tabs_Line_2_sig*)(GetFunction(EApiId_Elements_on_the_tabs_Line_2)))(aIndex_l); }

	inline TAknWindowLineLayout Elements_on_the_tabs_Line_3(TInt aIndex_l) const		{ return (*(TElements_on_the_tabs_Line_3_sig*)(GetFunction(EApiId_Elements_on_the_tabs_Line_3)))(aIndex_l); }

	inline TAknLayoutTableLimits Elements_on_the_tabs_Limits() const		{ return (*(TElements_on_the_tabs_Limits_sig*)(GetFunction(EApiId_Elements_on_the_tabs_Limits)))(); }

	inline TAknWindowLineLayout Elements_on_the_tabs(TInt aLineIndex, TInt aIndex_l) const		{ return (*(TElements_on_the_tabs_sig*)(GetFunction(EApiId_Elements_on_the_tabs)))(aLineIndex, aIndex_l); }

	// LAF Table : Texts on the tabs
	inline TAknTextLineLayout Texts_on_the_tabs_Line_1(TInt aCommon1) const		{ return (*(TTexts_on_the_tabs_Line_1_sig*)(GetFunction(EApiId_Texts_on_the_tabs_Line_1)))(aCommon1); }

	inline TAknTextLineLayout Texts_on_the_tabs_Line_2(TInt aCommon1) const		{ return (*(TTexts_on_the_tabs_Line_2_sig*)(GetFunction(EApiId_Texts_on_the_tabs_Line_2)))(aCommon1); }

	inline TAknTextLineLayout Texts_on_the_tabs_Line_3(TInt aCommon1) const		{ return (*(TTexts_on_the_tabs_Line_3_sig*)(GetFunction(EApiId_Texts_on_the_tabs_Line_3)))(aCommon1); }

	inline TAknTextLineLayout Texts_on_the_tabs_Line_4(TInt aCommon1) const		{ return (*(TTexts_on_the_tabs_Line_4_sig*)(GetFunction(EApiId_Texts_on_the_tabs_Line_4)))(aCommon1); }

	inline TAknTextLineLayout Texts_on_the_tabs_Line_5(TInt aCommon1) const		{ return (*(TTexts_on_the_tabs_Line_5_sig*)(GetFunction(EApiId_Texts_on_the_tabs_Line_5)))(aCommon1); }

	inline TAknLayoutTableLimits Texts_on_the_tabs_Limits() const		{ return (*(TTexts_on_the_tabs_Limits_sig*)(GetFunction(EApiId_Texts_on_the_tabs_Limits)))(); }

	inline TAknTextLineLayout Texts_on_the_tabs(TInt aLineIndex, TInt aCommon1) const		{ return (*(TTexts_on_the_tabs_sig*)(GetFunction(EApiId_Texts_on_the_tabs)))(aLineIndex, aCommon1); }

	// LAF Table : Navi pane icons
	inline TAknWindowLineLayout Navi_pane_icons_Line_1() const		{ return (*(TNavi_pane_icons_Line_1_sig*)(GetFunction(EApiId_Navi_pane_icons_Line_1)))(); }

	inline TAknWindowLineLayout Navi_pane_icons_Line_2(TInt aCommon1) const		{ return (*(TNavi_pane_icons_Line_2_sig*)(GetFunction(EApiId_Navi_pane_icons_Line_2)))(aCommon1); }

	// LAF Table : Navi pane texts
	inline TAknTextLineLayout Navi_pane_texts_Line_1(TInt aCommon1) const		{ return (*(TNavi_pane_texts_Line_1_sig*)(GetFunction(EApiId_Navi_pane_texts_Line_1)))(aCommon1); }

	inline TAknTextLineLayout Navi_pane_texts_Line_2(TInt aIndex_J) const		{ return (*(TNavi_pane_texts_Line_2_sig*)(GetFunction(EApiId_Navi_pane_texts_Line_2)))(aIndex_J); }

	inline TAknTextLineLayout Navi_pane_texts_Line_3(TInt aIndex_C) const		{ return (*(TNavi_pane_texts_Line_3_sig*)(GetFunction(EApiId_Navi_pane_texts_Line_3)))(aIndex_C); }

	inline TAknTextLineLayout Navi_pane_texts_Line_4() const		{ return (*(TNavi_pane_texts_Line_4_sig*)(GetFunction(EApiId_Navi_pane_texts_Line_4)))(); }

	inline TAknTextLineLayout Navi_pane_texts_Line_5() const		{ return (*(TNavi_pane_texts_Line_5_sig*)(GetFunction(EApiId_Navi_pane_texts_Line_5)))(); }

	inline TAknTextLineLayout Navi_pane_texts_Line_6(TInt aIndex_l) const		{ return (*(TNavi_pane_texts_Line_6_sig*)(GetFunction(EApiId_Navi_pane_texts_Line_6)))(aIndex_l); }

	inline TAknTextLineLayout Navi_pane_texts_Line_7(TInt aIndex_C, TInt aIndex_W) const		{ return (*(TNavi_pane_texts_Line_7_sig*)(GetFunction(EApiId_Navi_pane_texts_Line_7)))(aIndex_C, aIndex_W); }

	// LAF Table : Navi pane area for editing status icons
	inline TAknWindowLineLayout Navi_pane_area_for_editing_status_icons_Line_1() const		{ return (*(TNavi_pane_area_for_editing_status_icons_Line_1_sig*)(GetFunction(EApiId_Navi_pane_area_for_editing_status_icons_Line_1)))(); }

	// LAF Table : Volume glider elements (one)
	inline TAknWindowLineLayout Volume_glider_elements__one__Line_1(TInt aIndex_l) const		{ return (*(TVolume_glider_elements__one__Line_1_sig*)(GetFunction(EApiId_Volume_glider_elements__one__Line_1)))(aIndex_l); }

	inline TAknWindowLineLayout volume_navi_pane(TInt aIndex_l) const		{ return (*(Tvolume_navi_pane_sig*)(GetFunction(EApiId_volume_navi_pane)))(aIndex_l); }

	inline TAknLayoutTableLimits Volume_glider_elements__one__Limits() const		{ return (*(TVolume_glider_elements__one__Limits_sig*)(GetFunction(EApiId_Volume_glider_elements__one__Limits)))(); }

	inline TAknWindowLineLayout Volume_glider_elements__one_(TInt aLineIndex, TInt aIndex_l) const		{ return (*(TVolume_glider_elements__one__sig*)(GetFunction(EApiId_Volume_glider_elements__one_)))(aLineIndex, aIndex_l); }

	// LAF Table : Volume pane elements (one)
	inline TAknWindowLineLayout Volume_pane_elements__one__Line_1(TInt aIndex_C) const		{ return (*(TVolume_pane_elements__one__Line_1_sig*)(GetFunction(EApiId_Volume_pane_elements__one__Line_1)))(aIndex_C); }

	inline TAknWindowLineLayout Volume_pane_elements__one__Line_2(TInt aIndex_C) const		{ return (*(TVolume_pane_elements__one__Line_2_sig*)(GetFunction(EApiId_Volume_pane_elements__one__Line_2)))(aIndex_C); }

	inline TAknWindowLineLayout Volume_pane_elements__one__Line_3(TInt aIndex_C) const		{ return (*(TVolume_pane_elements__one__Line_3_sig*)(GetFunction(EApiId_Volume_pane_elements__one__Line_3)))(aIndex_C); }

	inline TAknWindowLineLayout Volume_pane_elements__one__Line_4(TInt aIndex_C) const		{ return (*(TVolume_pane_elements__one__Line_4_sig*)(GetFunction(EApiId_Volume_pane_elements__one__Line_4)))(aIndex_C); }

	inline TAknWindowLineLayout Volume_pane_elements__one__Line_5(TInt aIndex_C) const		{ return (*(TVolume_pane_elements__one__Line_5_sig*)(GetFunction(EApiId_Volume_pane_elements__one__Line_5)))(aIndex_C); }

	inline TAknWindowLineLayout Volume_pane_elements__one__Line_6(TInt aIndex_C) const		{ return (*(TVolume_pane_elements__one__Line_6_sig*)(GetFunction(EApiId_Volume_pane_elements__one__Line_6)))(aIndex_C); }

	inline TAknWindowLineLayout Volume_pane_elements__one__Line_7(TInt aIndex_C) const		{ return (*(TVolume_pane_elements__one__Line_7_sig*)(GetFunction(EApiId_Volume_pane_elements__one__Line_7)))(aIndex_C); }

	inline TAknWindowLineLayout Volume_pane_elements__one__Line_8(TInt aIndex_C) const		{ return (*(TVolume_pane_elements__one__Line_8_sig*)(GetFunction(EApiId_Volume_pane_elements__one__Line_8)))(aIndex_C); }

	inline TAknWindowLineLayout Volume_pane_elements__one__Line_9(TInt aIndex_C) const		{ return (*(TVolume_pane_elements__one__Line_9_sig*)(GetFunction(EApiId_Volume_pane_elements__one__Line_9)))(aIndex_C); }

	inline TAknWindowLineLayout Volume_pane_elements__one__Line_10(TInt aIndex_C) const		{ return (*(TVolume_pane_elements__one__Line_10_sig*)(GetFunction(EApiId_Volume_pane_elements__one__Line_10)))(aIndex_C); }

	inline TAknLayoutTableLimits Volume_pane_elements__one__Limits() const		{ return (*(TVolume_pane_elements__one__Limits_sig*)(GetFunction(EApiId_Volume_pane_elements__one__Limits)))(); }

	inline TAknWindowLineLayout Volume_pane_elements__one_(TInt aLineIndex, TInt aIndex_C) const		{ return (*(TVolume_pane_elements__one__sig*)(GetFunction(EApiId_Volume_pane_elements__one_)))(aLineIndex, aIndex_C); }

	// LAF Table : Main pane descendants
	inline TAknWindowLineLayout list_gen_pane(TInt aIndex_H) const		{ return (*(Tlist_gen_pane_sig*)(GetFunction(EApiId_list_gen_pane)))(aIndex_H); }

	inline TAknWindowLineLayout find_pane() const		{ return (*(Tfind_pane_sig*)(GetFunction(EApiId_find_pane)))(); }

	inline TAknWindowLineLayout wallpaper_pane() const		{ return (*(Twallpaper_pane_sig*)(GetFunction(EApiId_wallpaper_pane)))(); }

	inline TAknWindowLineLayout indicator_pane() const		{ return (*(Tindicator_pane_sig*)(GetFunction(EApiId_indicator_pane)))(); }

	inline TAknWindowLineLayout soft_indicator_pane(TInt aIndex_H) const		{ return (*(Tsoft_indicator_pane_sig*)(GetFunction(EApiId_soft_indicator_pane)))(aIndex_H); }

	// LAF Table : List pane column division
	inline TAknWindowLineLayout A_column() const		{ return (*(TA_column_sig*)(GetFunction(EApiId_A_column)))(); }

	inline TAknWindowLineLayout B_column() const		{ return (*(TB_column_sig*)(GetFunction(EApiId_B_column)))(); }

	inline TAknWindowLineLayout C_column() const		{ return (*(TC_column_sig*)(GetFunction(EApiId_C_column)))(); }

	inline TAknWindowLineLayout D_column() const		{ return (*(TD_column_sig*)(GetFunction(EApiId_D_column)))(); }

	inline TAknLayoutTableLimits List_pane_column_division_Limits() const		{ return (*(TList_pane_column_division_Limits_sig*)(GetFunction(EApiId_List_pane_column_division_Limits)))(); }

	inline TAknWindowLineLayout List_pane_column_division(TInt aLineIndex) const		{ return (*(TList_pane_column_division_sig*)(GetFunction(EApiId_List_pane_column_division)))(aLineIndex); }

	// LAF Table : General list pane descendants
	inline TAknWindowLineLayout list_single_pane(TInt aIndex_t) const		{ return (*(Tlist_single_pane_sig*)(GetFunction(EApiId_list_single_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_number_pane(TInt aIndex_t) const		{ return (*(Tlist_single_number_pane_sig*)(GetFunction(EApiId_list_single_number_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_heading_pane(TInt aIndex_t) const		{ return (*(Tlist_single_heading_pane_sig*)(GetFunction(EApiId_list_single_heading_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_graphic_pane(TInt aIndex_t) const		{ return (*(Tlist_single_graphic_pane_sig*)(GetFunction(EApiId_list_single_graphic_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_graphic_heading_pane(TInt aIndex_t) const		{ return (*(Tlist_single_graphic_heading_pane_sig*)(GetFunction(EApiId_list_single_graphic_heading_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_number_heading_pane(TInt aIndex_t) const		{ return (*(Tlist_single_number_heading_pane_sig*)(GetFunction(EApiId_list_single_number_heading_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_large_graphic_pane(TInt aIndex_t) const		{ return (*(Tlist_single_large_graphic_pane_sig*)(GetFunction(EApiId_list_single_large_graphic_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_double_pane(TInt aIndex_t) const		{ return (*(Tlist_double_pane_sig*)(GetFunction(EApiId_list_double_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_double2_pane(TInt aIndex_t) const		{ return (*(Tlist_double2_pane_sig*)(GetFunction(EApiId_list_double2_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_double_number_pane_list_single_big_number_pane(TInt aIndex_t) const		{ return (*(Tlist_double_number_pane_list_single_big_number_pane_sig*)(GetFunction(EApiId_list_double_number_pane_list_single_big_number_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_double_time_pane(TInt aIndex_t) const		{ return (*(Tlist_double_time_pane_sig*)(GetFunction(EApiId_list_double_time_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_double_large_graphic_pane_list_double2_large_graphic_pane_list_single_big_large_graphic_pane(TInt aIndex_t) const		{ return (*(Tlist_double_large_graphic_pane_list_double2_large_graphic_pane_list_single_big_large_graphic_pane_sig*)(GetFunction(EApiId_list_double_large_graphic_pane_list_double2_large_graphic_pane_list_single_big_large_graphic_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_double_graphic_pane_list_double2_graphic_pane(TInt aIndex_t) const		{ return (*(Tlist_double_graphic_pane_list_double2_graphic_pane_sig*)(GetFunction(EApiId_list_double_graphic_pane_list_double2_graphic_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_big_heading_graphic_pane(TInt aIndex_t) const		{ return (*(Tlist_single_big_heading_graphic_pane_sig*)(GetFunction(EApiId_list_single_big_heading_graphic_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_big_heading_pane(TInt aIndex_t) const		{ return (*(Tlist_single_big_heading_pane_sig*)(GetFunction(EApiId_list_single_big_heading_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_setting_pane_list_big_setting_pane(TInt aIndex_t) const		{ return (*(Tlist_setting_pane_list_big_setting_pane_sig*)(GetFunction(EApiId_list_setting_pane_list_big_setting_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_setting_number_pane_list_big_setting_number_pane(TInt aIndex_t) const		{ return (*(Tlist_setting_number_pane_list_big_setting_number_pane_sig*)(GetFunction(EApiId_list_setting_number_pane_list_big_setting_number_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_setting_double2_pane(TInt aIndex_t) const		{ return (*(Tlist_setting_double2_pane_sig*)(GetFunction(EApiId_list_setting_double2_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_double2_graphic_pane(TInt aIndex_t) const		{ return (*(Tlist_double2_graphic_pane_sig*)(GetFunction(EApiId_list_double2_graphic_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_double2_large_graphic_pane(TInt aIndex_t) const		{ return (*(Tlist_double2_large_graphic_pane_sig*)(GetFunction(EApiId_list_double2_large_graphic_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_2graphic_pane(TInt aIndex_t) const		{ return (*(Tlist_single_2graphic_pane_sig*)(GetFunction(EApiId_list_single_2graphic_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_double2_graphic_large_graphic_pane(TInt aIndex_t) const		{ return (*(Tlist_double2_graphic_large_graphic_pane_sig*)(GetFunction(EApiId_list_double2_graphic_large_graphic_pane)))(aIndex_t); }

	inline TAknLayoutTableLimits General_list_pane_descendants_Limits() const		{ return (*(TGeneral_list_pane_descendants_Limits_sig*)(GetFunction(EApiId_General_list_pane_descendants_Limits)))(); }

	inline TAknWindowLineLayout General_list_pane_descendants(TInt aLineIndex, TInt aIndex_t) const		{ return (*(TGeneral_list_pane_descendants_sig*)(GetFunction(EApiId_General_list_pane_descendants)))(aLineIndex, aIndex_t); }

	// LAF Table : List pane elements (single)
	inline TAknWindowLineLayout List_pane_elements__single__Line_1() const		{ return (*(TList_pane_elements__single__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__single__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__single__Line_2(TInt aIndex_l) const		{ return (*(TList_pane_elements__single__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__single__Line_2)))(aIndex_l); }

	// LAF Table : List pane texts (single)
	inline TAknTextLineLayout List_pane_texts__single__Line_1(TInt aIndex_r, TInt aIndex_W) const		{ return (*(TList_pane_texts__single__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__single__Line_1)))(aIndex_r, aIndex_W); }

	// LAF Table : List pane elements (single number)
	inline TAknWindowLineLayout List_pane_elements__single_number__Line_1() const		{ return (*(TList_pane_elements__single_number__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__single_number__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_number__Line_2(TInt aIndex_l) const		{ return (*(TList_pane_elements__single_number__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__single_number__Line_2)))(aIndex_l); }

	// LAF Table : List pane texts (single number)
	inline TAknTextLineLayout List_pane_texts__single_number__Line_1() const		{ return (*(TList_pane_texts__single_number__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__single_number__Line_1)))(); }

	inline TAknTextLineLayout List_pane_texts__single_number__Line_2(TInt aIndex_r, TInt aIndex_W) const		{ return (*(TList_pane_texts__single_number__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__single_number__Line_2)))(aIndex_r, aIndex_W); }

	// LAF Table : List pane elements (single heading)
	inline TAknWindowLineLayout List_pane_elements__single_heading__Line_1() const		{ return (*(TList_pane_elements__single_heading__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__single_heading__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_heading__Line_2() const		{ return (*(TList_pane_elements__single_heading__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__single_heading__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_heading__Line_3(TInt aIndex_l) const		{ return (*(TList_pane_elements__single_heading__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__single_heading__Line_3)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_elements__single_heading__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__single_heading__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__single_heading__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_heading__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__single_heading__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__single_heading__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (single heading)
	inline TAknTextLineLayout List_pane_texts__single_heading__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__single_heading__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__single_heading__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__single_heading__Line_2(TInt aCommon1) const		{ return (*(TList_pane_texts__single_heading__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__single_heading__Line_2)))(aCommon1); }

	inline TAknLayoutTableLimits List_pane_texts__single_heading__Limits() const		{ return (*(TList_pane_texts__single_heading__Limits_sig*)(GetFunction(EApiId_List_pane_texts__single_heading__Limits)))(); }

	inline TAknTextLineLayout List_pane_texts__single_heading_(TInt aLineIndex, TInt aCommon1) const		{ return (*(TList_pane_texts__single_heading__sig*)(GetFunction(EApiId_List_pane_texts__single_heading_)))(aLineIndex, aCommon1); }

	// LAF Table : List pane elements (single graphic)
	inline TAknWindowLineLayout List_pane_elements__single_graphic__Line_1() const		{ return (*(TList_pane_elements__single_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__single_graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_graphic__Line_2() const		{ return (*(TList_pane_elements__single_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__single_graphic__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_graphic__Line_3(TInt aIndex_l) const		{ return (*(TList_pane_elements__single_graphic__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__single_graphic__Line_3)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_elements__single_graphic__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__single_graphic__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__single_graphic__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_graphic__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__single_graphic__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__single_graphic__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (single graphic)
	inline TAknTextLineLayout List_pane_texts__single_graphic__Line_1(TInt aIndex_r, TInt aIndex_W) const		{ return (*(TList_pane_texts__single_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__single_graphic__Line_1)))(aIndex_r, aIndex_W); }

	// LAF Table : List pane elements (single graphic heading)
	inline TAknWindowLineLayout List_pane_elements__single_graphic_heading__Line_1() const		{ return (*(TList_pane_elements__single_graphic_heading__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__single_graphic_heading__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_graphic_heading__Line_2() const		{ return (*(TList_pane_elements__single_graphic_heading__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__single_graphic_heading__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_graphic_heading__Line_3() const		{ return (*(TList_pane_elements__single_graphic_heading__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__single_graphic_heading__Line_3)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_graphic_heading__Line_4(TInt aIndex_l) const		{ return (*(TList_pane_elements__single_graphic_heading__Line_4_sig*)(GetFunction(EApiId_List_pane_elements__single_graphic_heading__Line_4)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_elements__single_graphic_heading__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__single_graphic_heading__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__single_graphic_heading__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_graphic_heading__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__single_graphic_heading__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__single_graphic_heading__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (single graphic heading)
	inline TAknTextLineLayout List_pane_texts__single_graphic_heading__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__single_graphic_heading__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__single_graphic_heading__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__single_graphic_heading__Line_2(TInt aCommon1) const		{ return (*(TList_pane_texts__single_graphic_heading__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__single_graphic_heading__Line_2)))(aCommon1); }

	inline TAknLayoutTableLimits List_pane_texts__single_graphic_heading__Limits() const		{ return (*(TList_pane_texts__single_graphic_heading__Limits_sig*)(GetFunction(EApiId_List_pane_texts__single_graphic_heading__Limits)))(); }

	inline TAknTextLineLayout List_pane_texts__single_graphic_heading_(TInt aLineIndex, TInt aCommon1) const		{ return (*(TList_pane_texts__single_graphic_heading__sig*)(GetFunction(EApiId_List_pane_texts__single_graphic_heading_)))(aLineIndex, aCommon1); }

	// LAF Table : List pane elements (single number heading)
	inline TAknWindowLineLayout List_pane_elements__single_number_heading__Line_1() const		{ return (*(TList_pane_elements__single_number_heading__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__single_number_heading__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_number_heading__Line_2() const		{ return (*(TList_pane_elements__single_number_heading__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__single_number_heading__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_number_heading__Line_3(TInt aIndex_l) const		{ return (*(TList_pane_elements__single_number_heading__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__single_number_heading__Line_3)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_elements__single_number_heading__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__single_number_heading__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__single_number_heading__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_number_heading__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__single_number_heading__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__single_number_heading__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (single number heading)
	inline TAknTextLineLayout List_pane_texts__single_number_heading__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__single_number_heading__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__single_number_heading__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__single_number_heading__Line_2(TInt aCommon1) const		{ return (*(TList_pane_texts__single_number_heading__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__single_number_heading__Line_2)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__single_number_heading__Line_3(TInt aCommon1) const		{ return (*(TList_pane_texts__single_number_heading__Line_3_sig*)(GetFunction(EApiId_List_pane_texts__single_number_heading__Line_3)))(aCommon1); }

	inline TAknLayoutTableLimits List_pane_texts__single_number_heading__Limits() const		{ return (*(TList_pane_texts__single_number_heading__Limits_sig*)(GetFunction(EApiId_List_pane_texts__single_number_heading__Limits)))(); }

	inline TAknTextLineLayout List_pane_texts__single_number_heading_(TInt aLineIndex, TInt aCommon1) const		{ return (*(TList_pane_texts__single_number_heading__sig*)(GetFunction(EApiId_List_pane_texts__single_number_heading_)))(aLineIndex, aCommon1); }

	// LAF Table : List pane elements (single large graphic)
	inline TAknWindowLineLayout List_pane_elements__single_large_graphic__Line_1() const		{ return (*(TList_pane_elements__single_large_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__single_large_graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_large_graphic__Line_2(TInt aIndex_t) const		{ return (*(TList_pane_elements__single_large_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__single_large_graphic__Line_2)))(aIndex_t); }

	inline TAknWindowLineLayout List_pane_elements__single_large_graphic__Line_3(TInt aIndex_l) const		{ return (*(TList_pane_elements__single_large_graphic__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__single_large_graphic__Line_3)))(aIndex_l); }

	inline TAknWindowLineLayout do_not_use_empty_pane1() const		{ return (*(Tdo_not_use_empty_pane1_sig*)(GetFunction(EApiId_do_not_use_empty_pane1)))(); }

	inline TAknWindowLineLayout do_not_use_empty_pane2() const		{ return (*(Tdo_not_use_empty_pane2_sig*)(GetFunction(EApiId_do_not_use_empty_pane2)))(); }

	// LAF Table : List pane texts (single large graphic)
	inline TAknTextLineLayout List_pane_texts__single_large_graphic__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__single_large_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__single_large_graphic__Line_1)))(aCommon1); }

	// LAF Table : List pane elements (double)
	inline TAknWindowLineLayout List_pane_elements__double__Line_1() const		{ return (*(TList_pane_elements__double__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__double__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__double__Line_2(TInt aIndex_l) const		{ return (*(TList_pane_elements__double__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__double__Line_2)))(aIndex_l); }

	// LAF Table : List pane texts (double)
	inline TAknTextLineLayout List_pane_texts__double__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__double__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__double__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__double__Line_2() const		{ return (*(TList_pane_texts__double__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__double__Line_2)))(); }

	// LAF Table : List pane text (double2)
	inline TAknTextLineLayout List_pane_text__double2__Line_1(TInt aCommon1) const		{ return (*(TList_pane_text__double2__Line_1_sig*)(GetFunction(EApiId_List_pane_text__double2__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_text__double2__Line_2() const		{ return (*(TList_pane_text__double2__Line_2_sig*)(GetFunction(EApiId_List_pane_text__double2__Line_2)))(); }

	// LAF Table : List pane elements (double number)
	inline TAknWindowLineLayout List_pane_elements__double_number__Line_1() const		{ return (*(TList_pane_elements__double_number__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__double_number__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__double_number__Line_2(TInt aIndex_l) const		{ return (*(TList_pane_elements__double_number__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__double_number__Line_2)))(aIndex_l); }

	// LAF Table : List pane texts (double number)
	inline TAknTextLineLayout List_pane_texts__double_number__Line_1() const		{ return (*(TList_pane_texts__double_number__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__double_number__Line_1)))(); }

	inline TAknTextLineLayout List_pane_texts__double_number__Line_2(TInt aCommon1) const		{ return (*(TList_pane_texts__double_number__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__double_number__Line_2)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__double_number__Line_3() const		{ return (*(TList_pane_texts__double_number__Line_3_sig*)(GetFunction(EApiId_List_pane_texts__double_number__Line_3)))(); }

	// LAF Table : List pane elements (double graphic)
	inline TAknWindowLineLayout List_pane_elements__double_graphic__Line_1() const		{ return (*(TList_pane_elements__double_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__double_graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__double_graphic__Line_2() const		{ return (*(TList_pane_elements__double_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__double_graphic__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__double_graphic__Line_3(TInt aIndex_l) const		{ return (*(TList_pane_elements__double_graphic__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__double_graphic__Line_3)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_elements__double_graphic__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__double_graphic__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__double_graphic__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__double_graphic__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__double_graphic__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__double_graphic__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (double graphic)
	inline TAknTextLineLayout List_pane_texts__double_graphic__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__double_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__double_graphic__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__double_graphic__Line_2() const		{ return (*(TList_pane_texts__double_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__double_graphic__Line_2)))(); }

	// LAF Table : List pane elements (double2 graphic)
	inline TAknWindowLineLayout List_pane_elements__double2_graphic__Line_1() const		{ return (*(TList_pane_elements__double2_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__double2_graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__double2_graphic__Line_2() const		{ return (*(TList_pane_elements__double2_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__double2_graphic__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__double2_graphic__Line_3(TInt aIndex_l) const		{ return (*(TList_pane_elements__double2_graphic__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__double2_graphic__Line_3)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_elements__double2_graphic__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__double2_graphic__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__double2_graphic__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__double2_graphic__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__double2_graphic__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__double2_graphic__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (double2 graphic)
	inline TAknTextLineLayout List_pane_texts__double2_graphic__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__double2_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__double2_graphic__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__double2_graphic__Line_2() const		{ return (*(TList_pane_texts__double2_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__double2_graphic__Line_2)))(); }

	// LAF Table : List pane elements (double2 large graphic)
	inline TAknWindowLineLayout List_pane_elements__double2_large_graphic__Line_1() const		{ return (*(TList_pane_elements__double2_large_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__double2_large_graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__double2_large_graphic__Line_2() const		{ return (*(TList_pane_elements__double2_large_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__double2_large_graphic__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__double2_large_graphic__Line_3(TInt aIndex_l) const		{ return (*(TList_pane_elements__double2_large_graphic__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__double2_large_graphic__Line_3)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_elements__double2_large_graphic__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__double2_large_graphic__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__double2_large_graphic__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__double2_large_graphic__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__double2_large_graphic__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__double2_large_graphic__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (double2 large graphic)
	inline TAknTextLineLayout List_pane_texts__double2_large_graphic__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__double2_large_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__double2_large_graphic__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__double2_large_graphic__Line_2() const		{ return (*(TList_pane_texts__double2_large_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__double2_large_graphic__Line_2)))(); }

	// LAF Table : List pane elements (large single heading graphic)
	inline TAknWindowLineLayout List_pane_elements__large_single_heading_graphic__Line_1() const		{ return (*(TList_pane_elements__large_single_heading_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__large_single_heading_graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__large_single_heading_graphic__Line_2() const		{ return (*(TList_pane_elements__large_single_heading_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__large_single_heading_graphic__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__large_single_heading_graphic__Line_3(TInt aIndex_l) const		{ return (*(TList_pane_elements__large_single_heading_graphic__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__large_single_heading_graphic__Line_3)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_elements__large_single_heading_graphic__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__large_single_heading_graphic__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__large_single_heading_graphic__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__large_single_heading_graphic__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__large_single_heading_graphic__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__large_single_heading_graphic__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (large single heading graphic)
	inline TAknTextLineLayout List_pane_texts__large_single_heading_graphic__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__large_single_heading_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__large_single_heading_graphic__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__large_single_heading_graphic__Line_2() const		{ return (*(TList_pane_texts__large_single_heading_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__large_single_heading_graphic__Line_2)))(); }

	// LAF Table : List pane elements (large single heading)
	inline TAknWindowLineLayout List_pane_elements__large_single_heading__Line_1() const		{ return (*(TList_pane_elements__large_single_heading__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__large_single_heading__Line_1)))(); }

	// LAF Table : List pane texts (large single heading)
	inline TAknTextLineLayout List_pane_texts__large_single_heading__Line_1() const		{ return (*(TList_pane_texts__large_single_heading__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__large_single_heading__Line_1)))(); }

	inline TAknTextLineLayout List_pane_texts__large_single_heading__Line_2() const		{ return (*(TList_pane_texts__large_single_heading__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__large_single_heading__Line_2)))(); }

	inline TAknLayoutTableLimits List_pane_texts__large_single_heading__Limits() const		{ return (*(TList_pane_texts__large_single_heading__Limits_sig*)(GetFunction(EApiId_List_pane_texts__large_single_heading__Limits)))(); }

	inline TAknTextLineLayout List_pane_texts__large_single_heading_(TInt aLineIndex) const		{ return (*(TList_pane_texts__large_single_heading__sig*)(GetFunction(EApiId_List_pane_texts__large_single_heading_)))(aLineIndex); }

	// LAF Table : List pane elements (double time)
	inline TAknWindowLineLayout List_pane_elements__double_time__Line_1() const		{ return (*(TList_pane_elements__double_time__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__double_time__Line_1)))(); }

	// LAF Table : List pane texts (double time)
	inline TAknTextLineLayout List_pane_texts__double_time__Line_1() const		{ return (*(TList_pane_texts__double_time__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__double_time__Line_1)))(); }

	inline TAknTextLineLayout List_pane_texts__double_time__Line_2() const		{ return (*(TList_pane_texts__double_time__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__double_time__Line_2)))(); }

	inline TAknTextLineLayout List_pane_texts__double_time__Line_3() const		{ return (*(TList_pane_texts__double_time__Line_3_sig*)(GetFunction(EApiId_List_pane_texts__double_time__Line_3)))(); }

	inline TAknTextLineLayout List_pane_texts__double_time__Line_4() const		{ return (*(TList_pane_texts__double_time__Line_4_sig*)(GetFunction(EApiId_List_pane_texts__double_time__Line_4)))(); }

	inline TAknLayoutTableLimits List_pane_texts__double_time__Limits() const		{ return (*(TList_pane_texts__double_time__Limits_sig*)(GetFunction(EApiId_List_pane_texts__double_time__Limits)))(); }

	inline TAknTextLineLayout List_pane_texts__double_time_(TInt aLineIndex) const		{ return (*(TList_pane_texts__double_time__sig*)(GetFunction(EApiId_List_pane_texts__double_time_)))(aLineIndex); }

	// LAF Table : List pane elements (double large graphic)
	inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_1() const		{ return (*(TList_pane_elements__double_large_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__double_large_graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_2() const		{ return (*(TList_pane_elements__double_large_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__double_large_graphic__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_3() const		{ return (*(TList_pane_elements__double_large_graphic__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__double_large_graphic__Line_3)))(); }

	inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_4() const		{ return (*(TList_pane_elements__double_large_graphic__Line_4_sig*)(GetFunction(EApiId_List_pane_elements__double_large_graphic__Line_4)))(); }

	inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_5() const		{ return (*(TList_pane_elements__double_large_graphic__Line_5_sig*)(GetFunction(EApiId_List_pane_elements__double_large_graphic__Line_5)))(); }

	inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_6() const		{ return (*(TList_pane_elements__double_large_graphic__Line_6_sig*)(GetFunction(EApiId_List_pane_elements__double_large_graphic__Line_6)))(); }

	inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_7() const		{ return (*(TList_pane_elements__double_large_graphic__Line_7_sig*)(GetFunction(EApiId_List_pane_elements__double_large_graphic__Line_7)))(); }

	inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_8() const		{ return (*(TList_pane_elements__double_large_graphic__Line_8_sig*)(GetFunction(EApiId_List_pane_elements__double_large_graphic__Line_8)))(); }

	inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_9(TInt aIndex_l) const		{ return (*(TList_pane_elements__double_large_graphic__Line_9_sig*)(GetFunction(EApiId_List_pane_elements__double_large_graphic__Line_9)))(aIndex_l); }

	inline TAknWindowLineLayout List_pane_elements__double_large_graphic__Line_10() const		{ return (*(TList_pane_elements__double_large_graphic__Line_10_sig*)(GetFunction(EApiId_List_pane_elements__double_large_graphic__Line_10)))(); }

	// LAF Table : List pane texts (double large graphic)
	inline TAknTextLineLayout List_pane_texts__double_large_graphic__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__double_large_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__double_large_graphic__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__double_large_graphic__Line_2() const		{ return (*(TList_pane_texts__double_large_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__double_large_graphic__Line_2)))(); }

	// LAF Table : List pane elements (setting)
	inline TAknWindowLineLayout List_pane_elements__setting__Line_1() const		{ return (*(TList_pane_elements__setting__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__setting__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting__Line_2() const		{ return (*(TList_pane_elements__setting__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__setting__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting__Line_3() const		{ return (*(TList_pane_elements__setting__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__setting__Line_3)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting__Line_4() const		{ return (*(TList_pane_elements__setting__Line_4_sig*)(GetFunction(EApiId_List_pane_elements__setting__Line_4)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting__Line_5() const		{ return (*(TList_pane_elements__setting__Line_5_sig*)(GetFunction(EApiId_List_pane_elements__setting__Line_5)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting__Line_6() const		{ return (*(TList_pane_elements__setting__Line_6_sig*)(GetFunction(EApiId_List_pane_elements__setting__Line_6)))(); }

	inline TAknLayoutTableLimits List_pane_elements__setting__Limits() const		{ return (*(TList_pane_elements__setting__Limits_sig*)(GetFunction(EApiId_List_pane_elements__setting__Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting_(TInt aLineIndex) const		{ return (*(TList_pane_elements__setting__sig*)(GetFunction(EApiId_List_pane_elements__setting_)))(aLineIndex); }

	// LAF Table : List pane texts (setting)
	inline TAknTextLineLayout List_pane_texts__setting__Line_1() const		{ return (*(TList_pane_texts__setting__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__setting__Line_1)))(); }

	inline TAknTextLineLayout List_pane_texts__setting__Line_2() const		{ return (*(TList_pane_texts__setting__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__setting__Line_2)))(); }

	inline TAknTextLineLayout List_pane_texts__setting__Line_3() const		{ return (*(TList_pane_texts__setting__Line_3_sig*)(GetFunction(EApiId_List_pane_texts__setting__Line_3)))(); }

	inline TAknTextLineLayout List_pane_texts__setting__Line_4() const		{ return (*(TList_pane_texts__setting__Line_4_sig*)(GetFunction(EApiId_List_pane_texts__setting__Line_4)))(); }

	inline TAknLayoutTableLimits List_pane_texts__setting__Limits() const		{ return (*(TList_pane_texts__setting__Limits_sig*)(GetFunction(EApiId_List_pane_texts__setting__Limits)))(); }

	inline TAknTextLineLayout List_pane_texts__setting_(TInt aLineIndex) const		{ return (*(TList_pane_texts__setting__sig*)(GetFunction(EApiId_List_pane_texts__setting_)))(aLineIndex); }

	// LAF Table : List pane elements (setting number)
	inline TAknWindowLineLayout List_pane_elements__setting_number__Line_1() const		{ return (*(TList_pane_elements__setting_number__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__setting_number__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting_number__Line_2() const		{ return (*(TList_pane_elements__setting_number__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__setting_number__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting_number__Line_3() const		{ return (*(TList_pane_elements__setting_number__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__setting_number__Line_3)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting_number__Line_4() const		{ return (*(TList_pane_elements__setting_number__Line_4_sig*)(GetFunction(EApiId_List_pane_elements__setting_number__Line_4)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting_number__Line_5() const		{ return (*(TList_pane_elements__setting_number__Line_5_sig*)(GetFunction(EApiId_List_pane_elements__setting_number__Line_5)))(); }

	inline TAknLayoutTableLimits List_pane_elements__setting_number__Limits() const		{ return (*(TList_pane_elements__setting_number__Limits_sig*)(GetFunction(EApiId_List_pane_elements__setting_number__Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting_number_(TInt aLineIndex) const		{ return (*(TList_pane_elements__setting_number__sig*)(GetFunction(EApiId_List_pane_elements__setting_number_)))(aLineIndex); }

	// LAF Table : List pane texts (setting number)
	inline TAknTextLineLayout List_pane_texts__setting_number__Line_1() const		{ return (*(TList_pane_texts__setting_number__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__setting_number__Line_1)))(); }

	inline TAknTextLineLayout List_pane_texts__setting_number__Line_2() const		{ return (*(TList_pane_texts__setting_number__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__setting_number__Line_2)))(); }

	inline TAknTextLineLayout List_pane_texts__setting_number__Line_3() const		{ return (*(TList_pane_texts__setting_number__Line_3_sig*)(GetFunction(EApiId_List_pane_texts__setting_number__Line_3)))(); }

	inline TAknTextLineLayout List_pane_texts__setting_number__Line_4() const		{ return (*(TList_pane_texts__setting_number__Line_4_sig*)(GetFunction(EApiId_List_pane_texts__setting_number__Line_4)))(); }

	inline TAknLayoutTableLimits List_pane_texts__setting_number__Limits() const		{ return (*(TList_pane_texts__setting_number__Limits_sig*)(GetFunction(EApiId_List_pane_texts__setting_number__Limits)))(); }

	inline TAknTextLineLayout List_pane_texts__setting_number_(TInt aLineIndex) const		{ return (*(TList_pane_texts__setting_number__sig*)(GetFunction(EApiId_List_pane_texts__setting_number_)))(aLineIndex); }

	// LAF Table : Setting volume elements
	inline TAknWindowLineLayout Setting_volume_elements_Line_1(TInt aIndex_C) const		{ return (*(TSetting_volume_elements_Line_1_sig*)(GetFunction(EApiId_Setting_volume_elements_Line_1)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_elements_Line_2(TInt aIndex_C) const		{ return (*(TSetting_volume_elements_Line_2_sig*)(GetFunction(EApiId_Setting_volume_elements_Line_2)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_elements_Line_3(TInt aIndex_C) const		{ return (*(TSetting_volume_elements_Line_3_sig*)(GetFunction(EApiId_Setting_volume_elements_Line_3)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_elements_Line_4(TInt aIndex_C) const		{ return (*(TSetting_volume_elements_Line_4_sig*)(GetFunction(EApiId_Setting_volume_elements_Line_4)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_elements_Line_5(TInt aIndex_C) const		{ return (*(TSetting_volume_elements_Line_5_sig*)(GetFunction(EApiId_Setting_volume_elements_Line_5)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_elements_Line_6(TInt aIndex_C) const		{ return (*(TSetting_volume_elements_Line_6_sig*)(GetFunction(EApiId_Setting_volume_elements_Line_6)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_elements_Line_7(TInt aIndex_C) const		{ return (*(TSetting_volume_elements_Line_7_sig*)(GetFunction(EApiId_Setting_volume_elements_Line_7)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_elements_Line_8(TInt aIndex_C) const		{ return (*(TSetting_volume_elements_Line_8_sig*)(GetFunction(EApiId_Setting_volume_elements_Line_8)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_elements_Line_9(TInt aIndex_C) const		{ return (*(TSetting_volume_elements_Line_9_sig*)(GetFunction(EApiId_Setting_volume_elements_Line_9)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_elements_Line_10(TInt aIndex_C) const		{ return (*(TSetting_volume_elements_Line_10_sig*)(GetFunction(EApiId_Setting_volume_elements_Line_10)))(aIndex_C); }

	inline TAknLayoutTableLimits Setting_volume_elements_Limits() const		{ return (*(TSetting_volume_elements_Limits_sig*)(GetFunction(EApiId_Setting_volume_elements_Limits)))(); }

	inline TAknWindowLineLayout Setting_volume_elements(TInt aLineIndex, TInt aIndex_C) const		{ return (*(TSetting_volume_elements_sig*)(GetFunction(EApiId_Setting_volume_elements)))(aLineIndex, aIndex_C); }

	// LAF Table : Setting slider elements
	inline TAknWindowLineLayout Setting_slider_elements_Line_1() const		{ return (*(TSetting_slider_elements_Line_1_sig*)(GetFunction(EApiId_Setting_slider_elements_Line_1)))(); }

	// LAF Table : List pane elements (setting double2)
	inline TAknWindowLineLayout List_pane_elements__setting_double2__Line_1() const		{ return (*(TList_pane_elements__setting_double2__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__setting_double2__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting_double2__Line_2() const		{ return (*(TList_pane_elements__setting_double2__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__setting_double2__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting_double2__Line_3() const		{ return (*(TList_pane_elements__setting_double2__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__setting_double2__Line_3)))(); }

	inline TAknLayoutTableLimits List_pane_elements__setting_double2__Limits() const		{ return (*(TList_pane_elements__setting_double2__Limits_sig*)(GetFunction(EApiId_List_pane_elements__setting_double2__Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__setting_double2_(TInt aLineIndex) const		{ return (*(TList_pane_elements__setting_double2__sig*)(GetFunction(EApiId_List_pane_elements__setting_double2_)))(aLineIndex); }

	// LAF Table : List pane lines (A column)
	inline TAknWindowLineLayout List_pane_lines__A_column__Line_1(TInt aCommon1) const		{ return (*(TList_pane_lines__A_column__Line_1_sig*)(GetFunction(EApiId_List_pane_lines__A_column__Line_1)))(aCommon1); }

	inline TAknWindowLineLayout List_pane_lines__A_column__Line_2() const		{ return (*(TList_pane_lines__A_column__Line_2_sig*)(GetFunction(EApiId_List_pane_lines__A_column__Line_2)))(); }

	// LAF Table : List pane lines (AB columns)
	inline TAknWindowLineLayout List_pane_lines__AB_columns__Line_1(TInt aCommon1) const		{ return (*(TList_pane_lines__AB_columns__Line_1_sig*)(GetFunction(EApiId_List_pane_lines__AB_columns__Line_1)))(aCommon1); }

	inline TAknWindowLineLayout List_pane_lines__AB_columns__Line_2() const		{ return (*(TList_pane_lines__AB_columns__Line_2_sig*)(GetFunction(EApiId_List_pane_lines__AB_columns__Line_2)))(); }

	// LAF Table : List pane lines (BC columns)
	inline TAknWindowLineLayout List_pane_lines__BC_columns__Line_1(TInt aCommon1) const		{ return (*(TList_pane_lines__BC_columns__Line_1_sig*)(GetFunction(EApiId_List_pane_lines__BC_columns__Line_1)))(aCommon1); }

	inline TAknWindowLineLayout List_pane_lines__BC_columns__Line_2() const		{ return (*(TList_pane_lines__BC_columns__Line_2_sig*)(GetFunction(EApiId_List_pane_lines__BC_columns__Line_2)))(); }

	// LAF Table : List pane highlight graphics (various)
	inline TAknWindowLineLayout List_pane_highlight_graphics__various__Line_1(const TRect& aParentRect) const		{ return (*(TList_pane_highlight_graphics__various__Line_1_sig*)(GetFunction(EApiId_List_pane_highlight_graphics__various__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout List_pane_highlight_graphics__various__Line_2(const TRect& aParentRect) const		{ return (*(TList_pane_highlight_graphics__various__Line_2_sig*)(GetFunction(EApiId_List_pane_highlight_graphics__various__Line_2)))(aParentRect); }

	inline TAknWindowLineLayout List_pane_highlight_graphics__various__Line_3(TInt aIndex_l) const		{ return (*(TList_pane_highlight_graphics__various__Line_3_sig*)(GetFunction(EApiId_List_pane_highlight_graphics__various__Line_3)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_highlight_graphics__various__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_highlight_graphics__various__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_highlight_graphics__various__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_highlight_graphics__various__SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TList_pane_highlight_graphics__various__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_highlight_graphics__various__SUB_TABLE_0)))(aLineIndex, aParentRect); }

	// LAF Table : List pane highlight graphics (setting number)
	inline TAknWindowLineLayout List_pane_highlight_graphics__setting_number__Line_1(const TRect& aParentRect) const		{ return (*(TList_pane_highlight_graphics__setting_number__Line_1_sig*)(GetFunction(EApiId_List_pane_highlight_graphics__setting_number__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout List_pane_highlight_graphics__setting_number__Line_2(const TRect& aParentRect) const		{ return (*(TList_pane_highlight_graphics__setting_number__Line_2_sig*)(GetFunction(EApiId_List_pane_highlight_graphics__setting_number__Line_2)))(aParentRect); }

	inline TAknWindowLineLayout List_pane_highlight_graphics__setting_number__Line_3() const		{ return (*(TList_pane_highlight_graphics__setting_number__Line_3_sig*)(GetFunction(EApiId_List_pane_highlight_graphics__setting_number__Line_3)))(); }

	inline TAknLayoutTableLimits List_pane_highlight_graphics__setting_number__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_highlight_graphics__setting_number__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_highlight_graphics__setting_number__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_highlight_graphics__setting_number__SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TList_pane_highlight_graphics__setting_number__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_highlight_graphics__setting_number__SUB_TABLE_0)))(aLineIndex, aParentRect); }

	// LAF Table : Find pane elements
	inline TAknWindowLineLayout Find_pane_elements_Line_1() const		{ return (*(TFind_pane_elements_Line_1_sig*)(GetFunction(EApiId_Find_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Find_pane_elements_Line_2() const		{ return (*(TFind_pane_elements_Line_2_sig*)(GetFunction(EApiId_Find_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Find_pane_elements_Line_3() const		{ return (*(TFind_pane_elements_Line_3_sig*)(GetFunction(EApiId_Find_pane_elements_Line_3)))(); }

	inline TAknWindowLineLayout Find_pane_elements_Line_4() const		{ return (*(TFind_pane_elements_Line_4_sig*)(GetFunction(EApiId_Find_pane_elements_Line_4)))(); }

	inline TAknWindowLineLayout Find_pane_elements_Line_5() const		{ return (*(TFind_pane_elements_Line_5_sig*)(GetFunction(EApiId_Find_pane_elements_Line_5)))(); }

	inline TAknLayoutTableLimits Find_pane_elements_Limits() const		{ return (*(TFind_pane_elements_Limits_sig*)(GetFunction(EApiId_Find_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Find_pane_elements(TInt aLineIndex) const		{ return (*(TFind_pane_elements_sig*)(GetFunction(EApiId_Find_pane_elements)))(aLineIndex); }

	// LAF Table : Find pane texts
	inline TAknTextLineLayout Find_pane_texts_Line_1() const		{ return (*(TFind_pane_texts_Line_1_sig*)(GetFunction(EApiId_Find_pane_texts_Line_1)))(); }

	// LAF Table : Form descendant panes
	inline TAknWindowLineLayout form_field_data_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tform_field_data_pane_sig*)(GetFunction(EApiId_form_field_data_pane)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout form_field_data_wide_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tform_field_data_wide_pane_sig*)(GetFunction(EApiId_form_field_data_wide_pane)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout form_field_popup_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tform_field_popup_pane_sig*)(GetFunction(EApiId_form_field_popup_pane)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout form_field_popup_wide_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tform_field_popup_wide_pane_sig*)(GetFunction(EApiId_form_field_popup_wide_pane)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout form_field_slider_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tform_field_slider_pane_sig*)(GetFunction(EApiId_form_field_slider_pane)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout form_field_slider_wide_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tform_field_slider_wide_pane_sig*)(GetFunction(EApiId_form_field_slider_wide_pane)))(aIndex_t, aIndex_H); }

	inline TAknLayoutTableLimits Form_descendant_panes_Limits() const		{ return (*(TForm_descendant_panes_Limits_sig*)(GetFunction(EApiId_Form_descendant_panes_Limits)))(); }

	inline TAknWindowLineLayout Form_descendant_panes(TInt aLineIndex, TInt aIndex_t, TInt aIndex_H) const		{ return (*(TForm_descendant_panes_sig*)(GetFunction(EApiId_Form_descendant_panes)))(aLineIndex, aIndex_t, aIndex_H); }

	// LAF Table : Form data field elements
	inline TAknWindowLineLayout Form_data_field_elements_Line_1(TInt aIndex_H) const		{ return (*(TForm_data_field_elements_Line_1_sig*)(GetFunction(EApiId_Form_data_field_elements_Line_1)))(aIndex_H); }

	inline TAknWindowLineLayout Form_data_field_elements_Line_2() const		{ return (*(TForm_data_field_elements_Line_2_sig*)(GetFunction(EApiId_Form_data_field_elements_Line_2)))(); }

	inline TAknWindowLineLayout Form_data_field_elements_Line_3(TInt aIndex_H) const		{ return (*(TForm_data_field_elements_Line_3_sig*)(GetFunction(EApiId_Form_data_field_elements_Line_3)))(aIndex_H); }

	inline TAknWindowLineLayout Form_data_field_elements_Line_4() const		{ return (*(TForm_data_field_elements_Line_4_sig*)(GetFunction(EApiId_Form_data_field_elements_Line_4)))(); }

	// LAF Table : Form data field texts
	inline TAknTextLineLayout Form_data_field_texts_Line_1(TInt aCommon1, TInt aIndex_B) const		{ return (*(TForm_data_field_texts_Line_1_sig*)(GetFunction(EApiId_Form_data_field_texts_Line_1)))(aCommon1, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Form_data_field_texts_Line_1(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Form_data_field_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Form_data_field_texts_Line_1)))(aCommon1, aNumberOfLinesShown); }

	inline TAknTextLineLayout Form_data_field_texts_Line_2(TInt aIndex_B) const		{ return (*(TForm_data_field_texts_Line_2_sig*)(GetFunction(EApiId_Form_data_field_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Form_data_field_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Form_data_field_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Form_data_field_texts_Line_2)))(aNumberOfLinesShown); }

	// LAF Table : Form data wide field elements
	inline TAknWindowLineLayout Form_data_wide_field_elements_Line_1(TInt aIndex_H) const		{ return (*(TForm_data_wide_field_elements_Line_1_sig*)(GetFunction(EApiId_Form_data_wide_field_elements_Line_1)))(aIndex_H); }

	inline TAknWindowLineLayout Form_data_wide_field_elements_Line_2() const		{ return (*(TForm_data_wide_field_elements_Line_2_sig*)(GetFunction(EApiId_Form_data_wide_field_elements_Line_2)))(); }

	inline TAknWindowLineLayout Form_data_wide_field_elements_Line_3(TInt aIndex_H) const		{ return (*(TForm_data_wide_field_elements_Line_3_sig*)(GetFunction(EApiId_Form_data_wide_field_elements_Line_3)))(aIndex_H); }

	inline TAknWindowLineLayout Form_data_wide_field_elements_Line_4() const		{ return (*(TForm_data_wide_field_elements_Line_4_sig*)(GetFunction(EApiId_Form_data_wide_field_elements_Line_4)))(); }

	// LAF Table : Form data wide field texts
	inline TAknTextLineLayout Form_data_wide_field_texts_Line_1() const		{ return (*(TForm_data_wide_field_texts_Line_1_sig*)(GetFunction(EApiId_Form_data_wide_field_texts_Line_1)))(); }

	inline TAknTextLineLayout Form_data_wide_field_texts_Line_2(TInt aIndex_B) const		{ return (*(TForm_data_wide_field_texts_Line_2_sig*)(GetFunction(EApiId_Form_data_wide_field_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Form_data_wide_field_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Form_data_wide_field_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Form_data_wide_field_texts_Line_2)))(aNumberOfLinesShown); }

	// LAF Table : Form pop-up field elements and descendants
	inline TAknWindowLineLayout Form_pop_up_field_elements_and_descendants_Line_1(TInt aIndex_H) const		{ return (*(TForm_pop_up_field_elements_and_descendants_Line_1_sig*)(GetFunction(EApiId_Form_pop_up_field_elements_and_descendants_Line_1)))(aIndex_H); }

	inline TAknWindowLineLayout Form_pop_up_field_elements_and_descendants_Line_2() const		{ return (*(TForm_pop_up_field_elements_and_descendants_Line_2_sig*)(GetFunction(EApiId_Form_pop_up_field_elements_and_descendants_Line_2)))(); }

	inline TAknWindowLineLayout Form_pop_up_field_elements_and_descendants_Line_3(TInt aIndex_H) const		{ return (*(TForm_pop_up_field_elements_and_descendants_Line_3_sig*)(GetFunction(EApiId_Form_pop_up_field_elements_and_descendants_Line_3)))(aIndex_H); }

	inline TAknWindowLineLayout Form_pop_up_field_elements_and_descendants_Line_4() const		{ return (*(TForm_pop_up_field_elements_and_descendants_Line_4_sig*)(GetFunction(EApiId_Form_pop_up_field_elements_and_descendants_Line_4)))(); }

	inline TAknWindowLineLayout Form_pop_up_field_elements_and_descendants_Line_5() const		{ return (*(TForm_pop_up_field_elements_and_descendants_Line_5_sig*)(GetFunction(EApiId_Form_pop_up_field_elements_and_descendants_Line_5)))(); }

	inline TAknWindowLineLayout list_form_pane(TInt aIndex_H) const		{ return (*(Tlist_form_pane_sig*)(GetFunction(EApiId_list_form_pane)))(aIndex_H); }

	// LAF Table : List pane elements (form pop-up)
	inline TAknWindowLineLayout list_form_graphic_pane(TInt aIndex_t) const		{ return (*(Tlist_form_graphic_pane_sig*)(GetFunction(EApiId_list_form_graphic_pane)))(aIndex_t); }

	// LAF Table : List pane elements (form graphic)
	inline TAknWindowLineLayout List_pane_elements__form_graphic__Line_1(TInt aIndex_C) const		{ return (*(TList_pane_elements__form_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__form_graphic__Line_1)))(aIndex_C); }

	inline TAknWindowLineLayout List_pane_elements__form_graphic__Line_2() const		{ return (*(TList_pane_elements__form_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__form_graphic__Line_2)))(); }

	// LAF Table : List pane texts (form graphic)
	inline TAknTextLineLayout List_pane_texts__form_graphic__Line_1(TInt aIndex_C, TInt aCommon1) const		{ return (*(TList_pane_texts__form_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__form_graphic__Line_1)))(aIndex_C, aCommon1); }

	// LAF Table : Form pop-up wide field elements and descendants
	inline TAknWindowLineLayout Form_pop_up_wide_field_elements_and_descendants_Line_1(TInt aIndex_H) const		{ return (*(TForm_pop_up_wide_field_elements_and_descendants_Line_1_sig*)(GetFunction(EApiId_Form_pop_up_wide_field_elements_and_descendants_Line_1)))(aIndex_H); }

	inline TAknWindowLineLayout Form_pop_up_wide_field_elements_and_descendants_Line_2() const		{ return (*(TForm_pop_up_wide_field_elements_and_descendants_Line_2_sig*)(GetFunction(EApiId_Form_pop_up_wide_field_elements_and_descendants_Line_2)))(); }

	inline TAknWindowLineLayout Form_pop_up_wide_field_elements_and_descendants_Line_3(TInt aIndex_H) const		{ return (*(TForm_pop_up_wide_field_elements_and_descendants_Line_3_sig*)(GetFunction(EApiId_Form_pop_up_wide_field_elements_and_descendants_Line_3)))(aIndex_H); }

	inline TAknWindowLineLayout Form_pop_up_wide_field_elements_and_descendants_Line_4() const		{ return (*(TForm_pop_up_wide_field_elements_and_descendants_Line_4_sig*)(GetFunction(EApiId_Form_pop_up_wide_field_elements_and_descendants_Line_4)))(); }

	inline TAknWindowLineLayout Form_pop_up_wide_field_elements_and_descendants_Line_5() const		{ return (*(TForm_pop_up_wide_field_elements_and_descendants_Line_5_sig*)(GetFunction(EApiId_Form_pop_up_wide_field_elements_and_descendants_Line_5)))(); }

	inline TAknWindowLineLayout list_form_wide_pane(TInt aCommon1, TInt aIndex_H) const		{ return (*(Tlist_form_wide_pane_sig*)(GetFunction(EApiId_list_form_wide_pane)))(aCommon1, aIndex_H); }

	// LAF Table : List pane elements (form pop-up wide)
	inline TAknWindowLineLayout list_form_graphic_wide_pane(TInt aIndex_t) const		{ return (*(Tlist_form_graphic_wide_pane_sig*)(GetFunction(EApiId_list_form_graphic_wide_pane)))(aIndex_t); }

	// LAF Table : List pane elements (form graphic wide)
	inline TAknWindowLineLayout List_pane_elements__form_graphic_wide__Line_1(TInt aIndex_C) const		{ return (*(TList_pane_elements__form_graphic_wide__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__form_graphic_wide__Line_1)))(aIndex_C); }

	inline TAknWindowLineLayout List_pane_elements__form_graphic_wide__Line_2() const		{ return (*(TList_pane_elements__form_graphic_wide__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__form_graphic_wide__Line_2)))(); }

	// LAF Table : List pane texts (form graphic wide)
	inline TAknTextLineLayout List_pane_texts__form_graphic_wide__Line_1(TInt aIndex_C, TInt aIndex_l, TInt aIndex_r, TInt aIndex_W) const		{ return (*(TList_pane_texts__form_graphic_wide__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__form_graphic_wide__Line_1)))(aIndex_C, aIndex_l, aIndex_r, aIndex_W); }

	// LAF Table : Form slider field elements and descendants
	inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_Line_1(TInt aIndex_H) const		{ return (*(TForm_slider_field_elements_and_descendants_Line_1_sig*)(GetFunction(EApiId_Form_slider_field_elements_and_descendants_Line_1)))(aIndex_H); }

	inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_Line_2() const		{ return (*(TForm_slider_field_elements_and_descendants_Line_2_sig*)(GetFunction(EApiId_Form_slider_field_elements_and_descendants_Line_2)))(); }

	inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_Line_3(TInt aIndex_H) const		{ return (*(TForm_slider_field_elements_and_descendants_Line_3_sig*)(GetFunction(EApiId_Form_slider_field_elements_and_descendants_Line_3)))(aIndex_H); }

	inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_Line_4() const		{ return (*(TForm_slider_field_elements_and_descendants_Line_4_sig*)(GetFunction(EApiId_Form_slider_field_elements_and_descendants_Line_4)))(); }

	inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_Line_5() const		{ return (*(TForm_slider_field_elements_and_descendants_Line_5_sig*)(GetFunction(EApiId_Form_slider_field_elements_and_descendants_Line_5)))(); }

	inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_Line_6(TInt aIndex_t) const		{ return (*(TForm_slider_field_elements_and_descendants_Line_6_sig*)(GetFunction(EApiId_Form_slider_field_elements_and_descendants_Line_6)))(aIndex_t); }

	// LAF Table : Slider pane elements (form)
	inline TAknWindowLineLayout Slider_pane_elements__form__Line_1() const		{ return (*(TSlider_pane_elements__form__Line_1_sig*)(GetFunction(EApiId_Slider_pane_elements__form__Line_1)))(); }

	inline TAknWindowLineLayout Slider_pane_elements__form__Line_2() const		{ return (*(TSlider_pane_elements__form__Line_2_sig*)(GetFunction(EApiId_Slider_pane_elements__form__Line_2)))(); }

	inline TAknLayoutTableLimits Slider_pane_elements__form__Limits() const		{ return (*(TSlider_pane_elements__form__Limits_sig*)(GetFunction(EApiId_Slider_pane_elements__form__Limits)))(); }

	inline TAknWindowLineLayout Slider_pane_elements__form_(TInt aLineIndex) const		{ return (*(TSlider_pane_elements__form__sig*)(GetFunction(EApiId_Slider_pane_elements__form_)))(aLineIndex); }

	// LAF Table : Form slider field texts
	inline TAknTextLineLayout Form_slider_field_texts_Line_1() const		{ return (*(TForm_slider_field_texts_Line_1_sig*)(GetFunction(EApiId_Form_slider_field_texts_Line_1)))(); }

	inline TAknTextLineLayout Form_slider_field_texts_Line_2() const		{ return (*(TForm_slider_field_texts_Line_2_sig*)(GetFunction(EApiId_Form_slider_field_texts_Line_2)))(); }

	inline TAknTextLineLayout Form_slider_field_texts_Line_3(TInt aCommon1, TInt aIndex_B) const		{ return (*(TForm_slider_field_texts_Line_3_sig*)(GetFunction(EApiId_Form_slider_field_texts_Line_3)))(aCommon1, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Form_slider_field_texts_Line_3(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Form_slider_field_texts_Line_3_sig*)(GetFunction(EApiId_Multiline_Form_slider_field_texts_Line_3)))(aCommon1, aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Form_slider_field_texts_SUB_TABLE_0_Limits() const		{ return (*(TForm_slider_field_texts_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Form_slider_field_texts_SUB_TABLE_0_Limits)))(); }

	inline TAknTextLineLayout Form_slider_field_texts_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TForm_slider_field_texts_SUB_TABLE_0_sig*)(GetFunction(EApiId_Form_slider_field_texts_SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : Form slider field elements and descendants_dup
	inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_dup_Line_1(TInt aIndex_H) const		{ return (*(TForm_slider_field_elements_and_descendants_dup_Line_1_sig*)(GetFunction(EApiId_Form_slider_field_elements_and_descendants_dup_Line_1)))(aIndex_H); }

	inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_dup_Line_2() const		{ return (*(TForm_slider_field_elements_and_descendants_dup_Line_2_sig*)(GetFunction(EApiId_Form_slider_field_elements_and_descendants_dup_Line_2)))(); }

	inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_dup_Line_3(TInt aIndex_H) const		{ return (*(TForm_slider_field_elements_and_descendants_dup_Line_3_sig*)(GetFunction(EApiId_Form_slider_field_elements_and_descendants_dup_Line_3)))(aIndex_H); }

	inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_dup_Line_4() const		{ return (*(TForm_slider_field_elements_and_descendants_dup_Line_4_sig*)(GetFunction(EApiId_Form_slider_field_elements_and_descendants_dup_Line_4)))(); }

	inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_dup_Line_5() const		{ return (*(TForm_slider_field_elements_and_descendants_dup_Line_5_sig*)(GetFunction(EApiId_Form_slider_field_elements_and_descendants_dup_Line_5)))(); }

	inline TAknWindowLineLayout Form_slider_field_elements_and_descendants_dup_Line_6(TInt aIndex_t) const		{ return (*(TForm_slider_field_elements_and_descendants_dup_Line_6_sig*)(GetFunction(EApiId_Form_slider_field_elements_and_descendants_dup_Line_6)))(aIndex_t); }

	// LAF Table : Slider pane elements (form)_dup
	inline TAknWindowLineLayout Slider_pane_elements__form__dup_Line_1() const		{ return (*(TSlider_pane_elements__form__dup_Line_1_sig*)(GetFunction(EApiId_Slider_pane_elements__form__dup_Line_1)))(); }

	inline TAknWindowLineLayout Slider_pane_elements__form__dup_Line_2() const		{ return (*(TSlider_pane_elements__form__dup_Line_2_sig*)(GetFunction(EApiId_Slider_pane_elements__form__dup_Line_2)))(); }

	inline TAknLayoutTableLimits Slider_pane_elements__form__dup_Limits() const		{ return (*(TSlider_pane_elements__form__dup_Limits_sig*)(GetFunction(EApiId_Slider_pane_elements__form__dup_Limits)))(); }

	inline TAknWindowLineLayout Slider_pane_elements__form__dup(TInt aLineIndex) const		{ return (*(TSlider_pane_elements__form__dup_sig*)(GetFunction(EApiId_Slider_pane_elements__form__dup)))(aLineIndex); }

	// LAF Table : Form slider field texts_dup
	inline TAknTextLineLayout Form_slider_field_texts_dup_Line_1() const		{ return (*(TForm_slider_field_texts_dup_Line_1_sig*)(GetFunction(EApiId_Form_slider_field_texts_dup_Line_1)))(); }

	inline TAknTextLineLayout Form_slider_field_texts_dup_Line_2() const		{ return (*(TForm_slider_field_texts_dup_Line_2_sig*)(GetFunction(EApiId_Form_slider_field_texts_dup_Line_2)))(); }

	inline TAknTextLineLayout Form_slider_field_texts_dup_Line_3(TInt aCommon1, TInt aIndex_B) const		{ return (*(TForm_slider_field_texts_dup_Line_3_sig*)(GetFunction(EApiId_Form_slider_field_texts_dup_Line_3)))(aCommon1, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Form_slider_field_texts_dup_Line_3(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Form_slider_field_texts_dup_Line_3_sig*)(GetFunction(EApiId_Multiline_Form_slider_field_texts_dup_Line_3)))(aCommon1, aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Form_slider_field_texts_dup_SUB_TABLE_0_Limits() const		{ return (*(TForm_slider_field_texts_dup_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Form_slider_field_texts_dup_SUB_TABLE_0_Limits)))(); }

	inline TAknTextLineLayout Form_slider_field_texts_dup_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TForm_slider_field_texts_dup_SUB_TABLE_0_sig*)(GetFunction(EApiId_Form_slider_field_texts_dup_SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : Cursor graphics (13)
	inline TAknWindowLineLayout Cursor_graphics__13__Line_1() const		{ return (*(TCursor_graphics__13__Line_1_sig*)(GetFunction(EApiId_Cursor_graphics__13__Line_1)))(); }

	// LAF Table : Predictive text input graphics (13)
	inline TAknWindowLineLayout Predictive_text_input_graphics__13__Line_1() const		{ return (*(TPredictive_text_input_graphics__13__Line_1_sig*)(GetFunction(EApiId_Predictive_text_input_graphics__13__Line_1)))(); }

	inline TAknWindowLineLayout Predictive_text_input_graphics__13__Line_2() const		{ return (*(TPredictive_text_input_graphics__13__Line_2_sig*)(GetFunction(EApiId_Predictive_text_input_graphics__13__Line_2)))(); }

	inline TAknLayoutTableLimits Predictive_text_input_graphics__13__Limits() const		{ return (*(TPredictive_text_input_graphics__13__Limits_sig*)(GetFunction(EApiId_Predictive_text_input_graphics__13__Limits)))(); }

	inline TAknWindowLineLayout Predictive_text_input_graphics__13_(TInt aLineIndex) const		{ return (*(TPredictive_text_input_graphics__13__sig*)(GetFunction(EApiId_Predictive_text_input_graphics__13_)))(aLineIndex); }

	// LAF Table : Cut copy and paste highlight graphics (13)
	inline TAknWindowLineLayout Cut_copy_and_paste_highlight_graphics__13__Line_1() const		{ return (*(TCut_copy_and_paste_highlight_graphics__13__Line_1_sig*)(GetFunction(EApiId_Cut_copy_and_paste_highlight_graphics__13__Line_1)))(); }

	// LAF Table : Time and date entry graphics (13)
	inline TAknWindowLineLayout Time_and_date_entry_graphics__13__Line_1() const		{ return (*(TTime_and_date_entry_graphics__13__Line_1_sig*)(GetFunction(EApiId_Time_and_date_entry_graphics__13__Line_1)))(); }

	// LAF Table : Cursor graphics (12)
	inline TAknWindowLineLayout Cursor_graphics__12__Line_1() const		{ return (*(TCursor_graphics__12__Line_1_sig*)(GetFunction(EApiId_Cursor_graphics__12__Line_1)))(); }

	// LAF Table : Predictive text input graphics (12)
	inline TAknWindowLineLayout Predictive_text_input_graphics__12__Line_1() const		{ return (*(TPredictive_text_input_graphics__12__Line_1_sig*)(GetFunction(EApiId_Predictive_text_input_graphics__12__Line_1)))(); }

	inline TAknWindowLineLayout Predictive_text_input_graphics__12__Line_2() const		{ return (*(TPredictive_text_input_graphics__12__Line_2_sig*)(GetFunction(EApiId_Predictive_text_input_graphics__12__Line_2)))(); }

	inline TAknLayoutTableLimits Predictive_text_input_graphics__12__Limits() const		{ return (*(TPredictive_text_input_graphics__12__Limits_sig*)(GetFunction(EApiId_Predictive_text_input_graphics__12__Limits)))(); }

	inline TAknWindowLineLayout Predictive_text_input_graphics__12_(TInt aLineIndex) const		{ return (*(TPredictive_text_input_graphics__12__sig*)(GetFunction(EApiId_Predictive_text_input_graphics__12_)))(aLineIndex); }

	// LAF Table : Cut copy and paste highlight graphics (12)
	inline TAknWindowLineLayout Cut_copy_and_paste_highlight_graphics__12__Line_1() const		{ return (*(TCut_copy_and_paste_highlight_graphics__12__Line_1_sig*)(GetFunction(EApiId_Cut_copy_and_paste_highlight_graphics__12__Line_1)))(); }

	// LAF Table : Time and date entry graphics (12)
	inline TAknWindowLineLayout Time_and_date_entry_graphics__12__Line_1() const		{ return (*(TTime_and_date_entry_graphics__12__Line_1_sig*)(GetFunction(EApiId_Time_and_date_entry_graphics__12__Line_1)))(); }

	// LAF Table : AVKON specific list pane
	inline TAknWindowLineLayout list_set_graphic_pane(TInt aIndex_t) const		{ return (*(Tlist_set_graphic_pane_sig*)(GetFunction(EApiId_list_set_graphic_pane)))(aIndex_t); }

	// LAF Table : List pane elements (set graphic)
	inline TAknWindowLineLayout List_pane_elements__set_graphic__Line_1(TInt aIndex_C) const		{ return (*(TList_pane_elements__set_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__set_graphic__Line_1)))(aIndex_C); }

	inline TAknWindowLineLayout List_pane_elements__set_graphic__Line_2() const		{ return (*(TList_pane_elements__set_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__set_graphic__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__set_graphic__Line_3() const		{ return (*(TList_pane_elements__set_graphic__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__set_graphic__Line_3)))(); }

	inline TAknLayoutTableLimits List_pane_elements__set_graphic__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__set_graphic__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__set_graphic__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__set_graphic__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__set_graphic__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__set_graphic__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (set graphic)
	inline TAknTextLineLayout List_pane_texts__set_graphic__Line_1(TInt aIndex_C, TInt aIndex_l, TInt aIndex_W) const		{ return (*(TList_pane_texts__set_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__set_graphic__Line_1)))(aIndex_C, aIndex_l, aIndex_W); }

	// LAF Table : Application grid descendant
	inline TAknWindowLineLayout Application_grid_descendant_Line_1(TInt aIndex_l, TInt aIndex_t) const		{ return (*(TApplication_grid_descendant_Line_1_sig*)(GetFunction(EApiId_Application_grid_descendant_Line_1)))(aIndex_l, aIndex_t); }

	// LAF Table : Cell pane elements (app)
	inline TAknWindowLineLayout Cell_pane_elements__app__Line_1() const		{ return (*(TCell_pane_elements__app__Line_1_sig*)(GetFunction(EApiId_Cell_pane_elements__app__Line_1)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__app__Line_2() const		{ return (*(TCell_pane_elements__app__Line_2_sig*)(GetFunction(EApiId_Cell_pane_elements__app__Line_2)))(); }

	inline TAknLayoutTableLimits Cell_pane_elements__app__Limits() const		{ return (*(TCell_pane_elements__app__Limits_sig*)(GetFunction(EApiId_Cell_pane_elements__app__Limits)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__app_(TInt aLineIndex) const		{ return (*(TCell_pane_elements__app__sig*)(GetFunction(EApiId_Cell_pane_elements__app_)))(aLineIndex); }

	// LAF Table : Cell pane texts (app)
	inline TAknTextLineLayout Cell_pane_texts__app__Line_1() const		{ return (*(TCell_pane_texts__app__Line_1_sig*)(GetFunction(EApiId_Cell_pane_texts__app__Line_1)))(); }

	// LAF Table : Cell pane highlight elements (various)
	inline TAknWindowLineLayout Cell_pane_highlight_elements__various__Line_1(const TRect& aParentRect) const		{ return (*(TCell_pane_highlight_elements__various__Line_1_sig*)(GetFunction(EApiId_Cell_pane_highlight_elements__various__Line_1)))(aParentRect); }

	// LAF Table : Wallpaper pane element
	inline TAknWindowLineLayout Wallpaper_pane_element_Line_1(const TRect& aParentRect) const		{ return (*(TWallpaper_pane_element_Line_1_sig*)(GetFunction(EApiId_Wallpaper_pane_element_Line_1)))(aParentRect); }

	// LAF Table : Indicator pane elements
	inline TAknWindowLineLayout Indicator_pane_elements_Line_1() const		{ return (*(TIndicator_pane_elements_Line_1_sig*)(GetFunction(EApiId_Indicator_pane_elements_Line_1)))(); }

	// LAF Table : Soft indicator pane elements
	inline TAknWindowLineLayout Soft_indicator_pane_elements_Line_1(const TRect& aParentRect, TInt aIndex_t, TInt aIndex_H) const		{ return (*(TSoft_indicator_pane_elements_Line_1_sig*)(GetFunction(EApiId_Soft_indicator_pane_elements_Line_1)))(aParentRect, aIndex_t, aIndex_H); }

	// LAF Table : Soft indicator pane texts
	inline TAknTextLineLayout Soft_indicator_pane_texts_Line_1(TInt aIndex_B) const		{ return (*(TSoft_indicator_pane_texts_Line_1_sig*)(GetFunction(EApiId_Soft_indicator_pane_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Soft_indicator_pane_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Soft_indicator_pane_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Soft_indicator_pane_texts_Line_1)))(aNumberOfLinesShown); }

	// LAF Table : Idle power save state descendant
	inline TAknWindowLineLayout power_save_pane(TInt aIndex_t) const		{ return (*(Tpower_save_pane_sig*)(GetFunction(EApiId_power_save_pane)))(aIndex_t); }

	// LAF Table : Power save pane descendants
	inline TAknWindowLineLayout Power_save_pane_descendants_Line_1() const		{ return (*(TPower_save_pane_descendants_Line_1_sig*)(GetFunction(EApiId_Power_save_pane_descendants_Line_1)))(); }

	inline TAknWindowLineLayout Power_save_pane_descendants_Line_2() const		{ return (*(TPower_save_pane_descendants_Line_2_sig*)(GetFunction(EApiId_Power_save_pane_descendants_Line_2)))(); }

	inline TAknWindowLineLayout Power_save_pane_descendants_Line_3() const		{ return (*(TPower_save_pane_descendants_Line_3_sig*)(GetFunction(EApiId_Power_save_pane_descendants_Line_3)))(); }

	inline TAknLayoutTableLimits Power_save_pane_descendants_Limits() const		{ return (*(TPower_save_pane_descendants_Limits_sig*)(GetFunction(EApiId_Power_save_pane_descendants_Limits)))(); }

	inline TAknWindowLineLayout Power_save_pane_descendants(TInt aLineIndex) const		{ return (*(TPower_save_pane_descendants_sig*)(GetFunction(EApiId_Power_save_pane_descendants)))(aLineIndex); }

	// LAF Table : Idle power save state texts
	inline TAknTextLineLayout Idle_power_save_state_texts_Line_1() const		{ return (*(TIdle_power_save_state_texts_Line_1_sig*)(GetFunction(EApiId_Idle_power_save_state_texts_Line_1)))(); }

	inline TAknTextLineLayout Idle_power_save_state_texts_Line_2() const		{ return (*(TIdle_power_save_state_texts_Line_2_sig*)(GetFunction(EApiId_Idle_power_save_state_texts_Line_2)))(); }

	inline TAknTextLineLayout Idle_power_save_state_texts_Line_3() const		{ return (*(TIdle_power_save_state_texts_Line_3_sig*)(GetFunction(EApiId_Idle_power_save_state_texts_Line_3)))(); }

	inline TAknTextLineLayout Idle_power_save_state_texts_Line_4() const		{ return (*(TIdle_power_save_state_texts_Line_4_sig*)(GetFunction(EApiId_Idle_power_save_state_texts_Line_4)))(); }

	inline TAknLayoutTableLimits Idle_power_save_state_texts_Limits() const		{ return (*(TIdle_power_save_state_texts_Limits_sig*)(GetFunction(EApiId_Idle_power_save_state_texts_Limits)))(); }

	inline TAknTextLineLayout Idle_power_save_state_texts(TInt aLineIndex) const		{ return (*(TIdle_power_save_state_texts_sig*)(GetFunction(EApiId_Idle_power_save_state_texts)))(aLineIndex); }

	// LAF Table : Application selection grid elements
	inline TAknWindowLineLayout grid_app_pane() const		{ return (*(Tgrid_app_pane_sig*)(GetFunction(EApiId_grid_app_pane)))(); }

	// LAF Table : Empty list texts
	inline TAknTextLineLayout Empty_list_texts_Line_1(TInt aIndex_B) const		{ return (*(TEmpty_list_texts_Line_1_sig*)(GetFunction(EApiId_Empty_list_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Empty_list_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Empty_list_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Empty_list_texts_Line_1)))(aNumberOfLinesShown); }

	// LAF Table : Empty list texts (find)
	inline TAknTextLineLayout Empty_list_texts__find__Line_1(TInt aIndex_B) const		{ return (*(TEmpty_list_texts__find__Line_1_sig*)(GetFunction(EApiId_Empty_list_texts__find__Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Empty_list_texts__find__Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Empty_list_texts__find__Line_1_sig*)(GetFunction(EApiId_Multiline_Empty_list_texts__find__Line_1)))(aNumberOfLinesShown); }

	// LAF Table : List pane elements and descendants (settings edited)
	inline TAknWindowLineLayout List_pane_elements_and_descendants__settings_edited__Line_1() const		{ return (*(TList_pane_elements_and_descendants__settings_edited__Line_1_sig*)(GetFunction(EApiId_List_pane_elements_and_descendants__settings_edited__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements_and_descendants__settings_edited__Line_2() const		{ return (*(TList_pane_elements_and_descendants__settings_edited__Line_2_sig*)(GetFunction(EApiId_List_pane_elements_and_descendants__settings_edited__Line_2)))(); }

	inline TAknWindowLineLayout list_set_pane(TInt aCommon1) const		{ return (*(Tlist_set_pane_sig*)(GetFunction(EApiId_list_set_pane)))(aCommon1); }

	inline TAknWindowLineLayout List_pane_elements_and_descendants__settings_edited__Line_4() const		{ return (*(TList_pane_elements_and_descendants__settings_edited__Line_4_sig*)(GetFunction(EApiId_List_pane_elements_and_descendants__settings_edited__Line_4)))(); }

	inline TAknWindowLineLayout setting_volume_pane() const		{ return (*(Tsetting_volume_pane_sig*)(GetFunction(EApiId_setting_volume_pane)))(); }

	inline TAknWindowLineLayout setting_slider_pane() const		{ return (*(Tsetting_slider_pane_sig*)(GetFunction(EApiId_setting_slider_pane)))(); }

	inline TAknWindowLineLayout setting_slider_graphic_pane() const		{ return (*(Tsetting_slider_graphic_pane_sig*)(GetFunction(EApiId_setting_slider_graphic_pane)))(); }

	inline TAknWindowLineLayout setting_text_pane() const		{ return (*(Tsetting_text_pane_sig*)(GetFunction(EApiId_setting_text_pane)))(); }

	inline TAknWindowLineLayout setting_code_pane() const		{ return (*(Tsetting_code_pane_sig*)(GetFunction(EApiId_setting_code_pane)))(); }

	// LAF Table : Setting item texts
	inline TAknTextLineLayout Setting_item_texts_Line_1() const		{ return (*(TSetting_item_texts_Line_1_sig*)(GetFunction(EApiId_Setting_item_texts_Line_1)))(); }

	inline TAknTextLineLayout Setting_item_texts_Line_2(TInt aCommon1) const		{ return (*(TSetting_item_texts_Line_2_sig*)(GetFunction(EApiId_Setting_item_texts_Line_2)))(aCommon1); }

	// LAF Table : Setting volume pane elements
	inline TAknWindowLineLayout Setting_volume_pane_elements_Line_1() const		{ return (*(TSetting_volume_pane_elements_Line_1_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Setting_volume_pane_elements_Line_2(TInt aIndex_C) const		{ return (*(TSetting_volume_pane_elements_Line_2_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_Line_2)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_pane_elements_Line_3(TInt aIndex_C) const		{ return (*(TSetting_volume_pane_elements_Line_3_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_Line_3)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_pane_elements_Line_4(TInt aIndex_C) const		{ return (*(TSetting_volume_pane_elements_Line_4_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_Line_4)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_pane_elements_Line_5(TInt aIndex_C) const		{ return (*(TSetting_volume_pane_elements_Line_5_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_Line_5)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_pane_elements_Line_6(TInt aIndex_C) const		{ return (*(TSetting_volume_pane_elements_Line_6_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_Line_6)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_pane_elements_Line_7(TInt aIndex_C) const		{ return (*(TSetting_volume_pane_elements_Line_7_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_Line_7)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_pane_elements_Line_8(TInt aIndex_C) const		{ return (*(TSetting_volume_pane_elements_Line_8_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_Line_8)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_pane_elements_Line_9(TInt aIndex_C) const		{ return (*(TSetting_volume_pane_elements_Line_9_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_Line_9)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_pane_elements_Line_10(TInt aIndex_C) const		{ return (*(TSetting_volume_pane_elements_Line_10_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_Line_10)))(aIndex_C); }

	inline TAknWindowLineLayout Setting_volume_pane_elements_Line_11(TInt aIndex_C) const		{ return (*(TSetting_volume_pane_elements_Line_11_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_Line_11)))(aIndex_C); }

	inline TAknLayoutTableLimits Setting_volume_pane_elements_SUB_TABLE_0_Limits() const		{ return (*(TSetting_volume_pane_elements_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Setting_volume_pane_elements_SUB_TABLE_0(TInt aLineIndex, TInt aIndex_C) const		{ return (*(TSetting_volume_pane_elements_SUB_TABLE_0_sig*)(GetFunction(EApiId_Setting_volume_pane_elements_SUB_TABLE_0)))(aLineIndex, aIndex_C); }

	// LAF Table : Setting slider pane elements and descendants
	inline TAknWindowLineLayout Setting_slider_pane_elements_and_descendants_Line_1() const		{ return (*(TSetting_slider_pane_elements_and_descendants_Line_1_sig*)(GetFunction(EApiId_Setting_slider_pane_elements_and_descendants_Line_1)))(); }

	inline TAknWindowLineLayout Setting_slider_pane_elements_and_descendants_Line_2() const		{ return (*(TSetting_slider_pane_elements_and_descendants_Line_2_sig*)(GetFunction(EApiId_Setting_slider_pane_elements_and_descendants_Line_2)))(); }

	inline TAknLayoutTableLimits Setting_slider_pane_elements_and_descendants_Limits() const		{ return (*(TSetting_slider_pane_elements_and_descendants_Limits_sig*)(GetFunction(EApiId_Setting_slider_pane_elements_and_descendants_Limits)))(); }

	inline TAknWindowLineLayout Setting_slider_pane_elements_and_descendants(TInt aLineIndex) const		{ return (*(TSetting_slider_pane_elements_and_descendants_sig*)(GetFunction(EApiId_Setting_slider_pane_elements_and_descendants)))(aLineIndex); }

	// LAF Table : Slider pane elements
	inline TAknWindowLineLayout Slider_pane_elements_Line_1() const		{ return (*(TSlider_pane_elements_Line_1_sig*)(GetFunction(EApiId_Slider_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Slider_pane_elements_Line_2() const		{ return (*(TSlider_pane_elements_Line_2_sig*)(GetFunction(EApiId_Slider_pane_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Slider_pane_elements_Limits() const		{ return (*(TSlider_pane_elements_Limits_sig*)(GetFunction(EApiId_Slider_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Slider_pane_elements(TInt aLineIndex) const		{ return (*(TSlider_pane_elements_sig*)(GetFunction(EApiId_Slider_pane_elements)))(aLineIndex); }

	// LAF Table : Slider texts (set)
	inline TAknTextLineLayout Slider_texts__set__Line_1() const		{ return (*(TSlider_texts__set__Line_1_sig*)(GetFunction(EApiId_Slider_texts__set__Line_1)))(); }

	inline TAknTextLineLayout Slider_texts__set__Line_2(TInt aCommon1) const		{ return (*(TSlider_texts__set__Line_2_sig*)(GetFunction(EApiId_Slider_texts__set__Line_2)))(aCommon1); }

	inline TAknMultiLineTextLayout Multiline_Slider_texts__set__Line_2(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Slider_texts__set__Line_2_sig*)(GetFunction(EApiId_Multiline_Slider_texts__set__Line_2)))(aCommon1, aNumberOfLinesShown); }

	// LAF Table : Setting slider pane (graphic) elements and descendants
	inline TAknWindowLineLayout Setting_slider_pane__graphic__elements_and_descendants_Line_1() const		{ return (*(TSetting_slider_pane__graphic__elements_and_descendants_Line_1_sig*)(GetFunction(EApiId_Setting_slider_pane__graphic__elements_and_descendants_Line_1)))(); }

	inline TAknWindowLineLayout Setting_slider_pane__graphic__elements_and_descendants_Line_2() const		{ return (*(TSetting_slider_pane__graphic__elements_and_descendants_Line_2_sig*)(GetFunction(EApiId_Setting_slider_pane__graphic__elements_and_descendants_Line_2)))(); }

	inline TAknWindowLineLayout Setting_slider_pane__graphic__elements_and_descendants_Line_3() const		{ return (*(TSetting_slider_pane__graphic__elements_and_descendants_Line_3_sig*)(GetFunction(EApiId_Setting_slider_pane__graphic__elements_and_descendants_Line_3)))(); }

	inline TAknLayoutTableLimits Setting_slider_pane__graphic__elements_and_descendants_Limits() const		{ return (*(TSetting_slider_pane__graphic__elements_and_descendants_Limits_sig*)(GetFunction(EApiId_Setting_slider_pane__graphic__elements_and_descendants_Limits)))(); }

	inline TAknWindowLineLayout Setting_slider_pane__graphic__elements_and_descendants(TInt aLineIndex) const		{ return (*(TSetting_slider_pane__graphic__elements_and_descendants_sig*)(GetFunction(EApiId_Setting_slider_pane__graphic__elements_and_descendants)))(aLineIndex); }

	// LAF Table : Slider with graphic texts (set)
	inline TAknTextLineLayout Slider_with_graphic_texts__set__Line_1(TInt aCommon1) const		{ return (*(TSlider_with_graphic_texts__set__Line_1_sig*)(GetFunction(EApiId_Slider_with_graphic_texts__set__Line_1)))(aCommon1); }

	inline TAknMultiLineTextLayout Multiline_Slider_with_graphic_texts__set__Line_1(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Slider_with_graphic_texts__set__Line_1_sig*)(GetFunction(EApiId_Multiline_Slider_with_graphic_texts__set__Line_1)))(aCommon1, aNumberOfLinesShown); }

	// LAF Table : Setting text pane elements
	inline TAknWindowLineLayout Setting_text_pane_elements_Line_1() const		{ return (*(TSetting_text_pane_elements_Line_1_sig*)(GetFunction(EApiId_Setting_text_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Setting_text_pane_elements_Line_2() const		{ return (*(TSetting_text_pane_elements_Line_2_sig*)(GetFunction(EApiId_Setting_text_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Setting_text_pane_elements_Line_3() const		{ return (*(TSetting_text_pane_elements_Line_3_sig*)(GetFunction(EApiId_Setting_text_pane_elements_Line_3)))(); }

	inline TAknWindowLineLayout Setting_text_pane_elements_Line_4() const		{ return (*(TSetting_text_pane_elements_Line_4_sig*)(GetFunction(EApiId_Setting_text_pane_elements_Line_4)))(); }

	inline TAknLayoutTableLimits Setting_text_pane_elements_Limits() const		{ return (*(TSetting_text_pane_elements_Limits_sig*)(GetFunction(EApiId_Setting_text_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Setting_text_pane_elements(TInt aLineIndex) const		{ return (*(TSetting_text_pane_elements_sig*)(GetFunction(EApiId_Setting_text_pane_elements)))(aLineIndex); }

	// LAF Table : Setting text pane texts
	inline TAknTextLineLayout Setting_text_pane_texts_Line_1(TInt aIndex_B, TInt aIndex_J) const		{ return (*(TSetting_text_pane_texts_Line_1_sig*)(GetFunction(EApiId_Setting_text_pane_texts_Line_1)))(aIndex_B, aIndex_J); }

	inline TAknMultiLineTextLayout Multiline_Setting_text_pane_texts_Line_1(TInt aIndex_J, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Setting_text_pane_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Setting_text_pane_texts_Line_1)))(aIndex_J, aNumberOfLinesShown); }

	// LAF Table : Code time and date entry pane elements
	inline TAknWindowLineLayout Code_time_and_date_entry_pane_elements_Line_1() const		{ return (*(TCode_time_and_date_entry_pane_elements_Line_1_sig*)(GetFunction(EApiId_Code_time_and_date_entry_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Code_time_and_date_entry_pane_elements_Line_2() const		{ return (*(TCode_time_and_date_entry_pane_elements_Line_2_sig*)(GetFunction(EApiId_Code_time_and_date_entry_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Code_time_and_date_entry_pane_elements_Line_3() const		{ return (*(TCode_time_and_date_entry_pane_elements_Line_3_sig*)(GetFunction(EApiId_Code_time_and_date_entry_pane_elements_Line_3)))(); }

	inline TAknLayoutTableLimits Code_time_and_date_entry_pane_elements_Limits() const		{ return (*(TCode_time_and_date_entry_pane_elements_Limits_sig*)(GetFunction(EApiId_Code_time_and_date_entry_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Code_time_and_date_entry_pane_elements(TInt aLineIndex) const		{ return (*(TCode_time_and_date_entry_pane_elements_sig*)(GetFunction(EApiId_Code_time_and_date_entry_pane_elements)))(aLineIndex); }

	// LAF Table : Code time and date entry pane texts
	inline TAknTextLineLayout Code_time_and_date_entry_pane_texts_Line_1() const		{ return (*(TCode_time_and_date_entry_pane_texts_Line_1_sig*)(GetFunction(EApiId_Code_time_and_date_entry_pane_texts_Line_1)))(); }

	// LAF Table : Control pane elements
	inline TAknWindowLineLayout Control_pane_elements_Line_1() const		{ return (*(TControl_pane_elements_Line_1_sig*)(GetFunction(EApiId_Control_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Control_pane_elements_Line_2() const		{ return (*(TControl_pane_elements_Line_2_sig*)(GetFunction(EApiId_Control_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Control_pane_elements_Line_3() const		{ return (*(TControl_pane_elements_Line_3_sig*)(GetFunction(EApiId_Control_pane_elements_Line_3)))(); }

	inline TAknWindowLineLayout Control_pane_elements_Line_4() const		{ return (*(TControl_pane_elements_Line_4_sig*)(GetFunction(EApiId_Control_pane_elements_Line_4)))(); }

	inline TAknLayoutTableLimits Control_pane_elements_Limits() const		{ return (*(TControl_pane_elements_Limits_sig*)(GetFunction(EApiId_Control_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Control_pane_elements(TInt aLineIndex) const		{ return (*(TControl_pane_elements_sig*)(GetFunction(EApiId_Control_pane_elements)))(aLineIndex); }

	// LAF Table : Control pane texts
	inline TAknTextLineLayout Control_pane_texts_Line_1() const		{ return (*(TControl_pane_texts_Line_1_sig*)(GetFunction(EApiId_Control_pane_texts_Line_1)))(); }

	inline TAknTextLineLayout Control_pane_texts_Line_2() const		{ return (*(TControl_pane_texts_Line_2_sig*)(GetFunction(EApiId_Control_pane_texts_Line_2)))(); }

	inline TAknLayoutTableLimits Control_pane_texts_Limits() const		{ return (*(TControl_pane_texts_Limits_sig*)(GetFunction(EApiId_Control_pane_texts_Limits)))(); }

	inline TAknTextLineLayout Control_pane_texts(TInt aLineIndex) const		{ return (*(TControl_pane_texts_sig*)(GetFunction(EApiId_Control_pane_texts)))(aLineIndex); }

	// LAF Table : Pop-up windows (main pane as parent)
	inline TAknWindowLineLayout popup_menu_window(TInt aIndex_H) const		{ return (*(Tpopup_menu_window_sig*)(GetFunction(EApiId_popup_menu_window)))(aIndex_H); }

	inline TAknWindowLineLayout Pop_up_windows__main_pane_as_parent__Line_2(TInt aCommon1) const		{ return (*(TPop_up_windows__main_pane_as_parent__Line_2_sig*)(GetFunction(EApiId_Pop_up_windows__main_pane_as_parent__Line_2)))(aCommon1); }

	inline TAknWindowLineLayout popup_menu_graphic_window(TInt aIndex_H) const		{ return (*(Tpopup_menu_graphic_window_sig*)(GetFunction(EApiId_popup_menu_graphic_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_menu_graphic_heading_window(TInt aIndex_H) const		{ return (*(Tpopup_menu_graphic_heading_window_sig*)(GetFunction(EApiId_popup_menu_graphic_heading_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_menu_double_window(TInt aIndex_H) const		{ return (*(Tpopup_menu_double_window_sig*)(GetFunction(EApiId_popup_menu_double_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_menu_double_large_graphic_window(TInt aIndex_H) const		{ return (*(Tpopup_menu_double_large_graphic_window_sig*)(GetFunction(EApiId_popup_menu_double_large_graphic_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_note_window(TInt aIndex_H) const		{ return (*(Tpopup_note_window_sig*)(GetFunction(EApiId_popup_note_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_note_wait_window(TInt aIndex_H) const		{ return (*(Tpopup_note_wait_window_sig*)(GetFunction(EApiId_popup_note_wait_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_note_image_window() const		{ return (*(Tpopup_note_image_window_sig*)(GetFunction(EApiId_popup_note_image_window)))(); }

	inline TAknWindowLineLayout popup_query_data_window(TInt aIndex_H) const		{ return (*(Tpopup_query_data_window_sig*)(GetFunction(EApiId_popup_query_data_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_query_code_window(TInt aIndex_H) const		{ return (*(Tpopup_query_code_window_sig*)(GetFunction(EApiId_popup_query_code_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_query_time_window(TInt aIndex_H) const		{ return (*(Tpopup_query_time_window_sig*)(GetFunction(EApiId_popup_query_time_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_query_date_window(TInt aIndex_H) const		{ return (*(Tpopup_query_date_window_sig*)(GetFunction(EApiId_popup_query_date_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_query_data_code_window(TInt aIndex_H) const		{ return (*(Tpopup_query_data_code_window_sig*)(GetFunction(EApiId_popup_query_data_code_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_find_window() const		{ return (*(Tpopup_find_window_sig*)(GetFunction(EApiId_popup_find_window)))(); }

	inline TAknWindowLineLayout popup_snote_single_text_window(TInt aIndex_H) const		{ return (*(Tpopup_snote_single_text_window_sig*)(GetFunction(EApiId_popup_snote_single_text_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_snote_single_graphic_window(TInt aIndex_H) const		{ return (*(Tpopup_snote_single_graphic_window_sig*)(GetFunction(EApiId_popup_snote_single_graphic_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_snote_group_window(TInt aIndex_H) const		{ return (*(Tpopup_snote_group_window_sig*)(GetFunction(EApiId_popup_snote_group_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_grid_graphic_window(TInt aIndex_H) const		{ return (*(Tpopup_grid_graphic_window_sig*)(GetFunction(EApiId_popup_grid_graphic_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_menu_double2_window(TInt aIndex_H) const		{ return (*(Tpopup_menu_double2_window_sig*)(GetFunction(EApiId_popup_menu_double2_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_grid_large_graphic_colour_window() const		{ return (*(Tpopup_grid_large_graphic_colour_window_sig*)(GetFunction(EApiId_popup_grid_large_graphic_colour_window)))(); }

	// LAF Table : Pop-up windows (status pane as parent)
	inline TAknWindowLineLayout popup_fast_swap_window(TInt aIndex_W, TInt aIndex_H) const		{ return (*(Tpopup_fast_swap_window_sig*)(GetFunction(EApiId_popup_fast_swap_window)))(aIndex_W, aIndex_H); }

	// LAF Table : Pop-up window list pane descendants
	inline TAknWindowLineLayout list_single_popup_menu_pane(TInt aIndex_t) const		{ return (*(Tlist_single_popup_menu_pane_sig*)(GetFunction(EApiId_list_single_popup_menu_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_heading_popup_menu_pane(TInt aIndex_t) const		{ return (*(Tlist_single_heading_popup_menu_pane_sig*)(GetFunction(EApiId_list_single_heading_popup_menu_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_graphic_popup_menu_pane(TInt aIndex_t) const		{ return (*(Tlist_single_graphic_popup_menu_pane_sig*)(GetFunction(EApiId_list_single_graphic_popup_menu_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_graphic_heading_popup_menu_pane(TInt aIndex_t) const		{ return (*(Tlist_single_graphic_heading_popup_menu_pane_sig*)(GetFunction(EApiId_list_single_graphic_heading_popup_menu_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_menu_double_popup_menu_pane(TInt aIndex_t) const		{ return (*(Tlist_menu_double_popup_menu_pane_sig*)(GetFunction(EApiId_list_menu_double_popup_menu_pane)))(aIndex_t); }

	inline TAknWindowLineLayout list_single_popup_submenu_pane(TInt aIndex_t, TInt aIndex_W) const		{ return (*(Tlist_single_popup_submenu_pane_sig*)(GetFunction(EApiId_list_single_popup_submenu_pane)))(aIndex_t, aIndex_W); }

	inline TAknWindowLineLayout list_double_large_graphic_popup_menu_pane(TInt aIndex_t) const		{ return (*(Tlist_double_large_graphic_popup_menu_pane_sig*)(GetFunction(EApiId_list_double_large_graphic_popup_menu_pane)))(aIndex_t); }

	inline TAknWindowLineLayout Pop_up_window_list_pane_descendants_Line_8() const		{ return (*(TPop_up_window_list_pane_descendants_Line_8_sig*)(GetFunction(EApiId_Pop_up_window_list_pane_descendants_Line_8)))(); }

	inline TAknWindowLineLayout list_double2_popup_menu_pane(TInt aIndex_t) const		{ return (*(Tlist_double2_popup_menu_pane_sig*)(GetFunction(EApiId_list_double2_popup_menu_pane)))(aIndex_t); }

	// LAF Table : List pane elements (menu single)
	inline TAknWindowLineLayout List_pane_elements__menu_single__Line_1() const		{ return (*(TList_pane_elements__menu_single__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__menu_single__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__menu_single__Line_2() const		{ return (*(TList_pane_elements__menu_single__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__menu_single__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__menu_single__Line_3(TInt aIndex_l) const		{ return (*(TList_pane_elements__menu_single__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__menu_single__Line_3)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_elements__menu_single__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__menu_single__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__menu_single__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__menu_single__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__menu_single__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__menu_single__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (menu single)
	inline TAknTextLineLayout List_pane_texts__menu_single__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__menu_single__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__menu_single__Line_1)))(aCommon1); }

	// LAF Table : List pane text (submenu single)
	inline TAknTextLineLayout List_pane_text__submenu_single__Line_1(TInt aIndex_W) const		{ return (*(TList_pane_text__submenu_single__Line_1_sig*)(GetFunction(EApiId_List_pane_text__submenu_single__Line_1)))(aIndex_W); }

	// LAF Table : List pane elements (menu single graphic)
	inline TAknWindowLineLayout List_pane_elements__menu_single_graphic__Line_1() const		{ return (*(TList_pane_elements__menu_single_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__menu_single_graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__menu_single_graphic__Line_2(TInt aIndex_l) const		{ return (*(TList_pane_elements__menu_single_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__menu_single_graphic__Line_2)))(aIndex_l); }

	// LAF Table : List pane texts (menu single graphic)
	inline TAknTextLineLayout List_pane_texts__menu_single_graphic__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__menu_single_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__menu_single_graphic__Line_1)))(aCommon1); }

	// LAF Table : List pane elements (menu single heading)
	inline TAknWindowLineLayout List_pane_elements__menu_single_heading__Line_1() const		{ return (*(TList_pane_elements__menu_single_heading__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__menu_single_heading__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__menu_single_heading__Line_2(TInt aIndex_l) const		{ return (*(TList_pane_elements__menu_single_heading__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__menu_single_heading__Line_2)))(aIndex_l); }

	// LAF Table : List pane texts (menu single heading)
	inline TAknTextLineLayout List_pane_texts__menu_single_heading__Line_1() const		{ return (*(TList_pane_texts__menu_single_heading__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__menu_single_heading__Line_1)))(); }

	inline TAknTextLineLayout List_pane_texts__menu_single_heading__Line_2(TInt aCommon1) const		{ return (*(TList_pane_texts__menu_single_heading__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__menu_single_heading__Line_2)))(aCommon1); }

	// LAF Table : List pane elements (menu single graphic heading)
	inline TAknWindowLineLayout List_pane_elements__menu_single_graphic_heading__Line_1() const		{ return (*(TList_pane_elements__menu_single_graphic_heading__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__menu_single_graphic_heading__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__menu_single_graphic_heading__Line_2() const		{ return (*(TList_pane_elements__menu_single_graphic_heading__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__menu_single_graphic_heading__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__menu_single_graphic_heading__Line_3(TInt aIndex_l) const		{ return (*(TList_pane_elements__menu_single_graphic_heading__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__menu_single_graphic_heading__Line_3)))(aIndex_l); }

	// LAF Table : List pane texts (menu single graphic heading)
	inline TAknTextLineLayout List_pane_texts__menu_single_graphic_heading__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__menu_single_graphic_heading__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__menu_single_graphic_heading__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__menu_single_graphic_heading__Line_2(TInt aCommon1) const		{ return (*(TList_pane_texts__menu_single_graphic_heading__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__menu_single_graphic_heading__Line_2)))(aCommon1); }

	inline TAknLayoutTableLimits List_pane_texts__menu_single_graphic_heading__Limits() const		{ return (*(TList_pane_texts__menu_single_graphic_heading__Limits_sig*)(GetFunction(EApiId_List_pane_texts__menu_single_graphic_heading__Limits)))(); }

	inline TAknTextLineLayout List_pane_texts__menu_single_graphic_heading_(TInt aLineIndex, TInt aCommon1) const		{ return (*(TList_pane_texts__menu_single_graphic_heading__sig*)(GetFunction(EApiId_List_pane_texts__menu_single_graphic_heading_)))(aLineIndex, aCommon1); }

	// LAF Table : List pane elements (menu double)
	inline TAknWindowLineLayout List_pane_elements__menu_double__Line_1(TInt aIndex_l) const		{ return (*(TList_pane_elements__menu_double__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__menu_double__Line_1)))(aIndex_l); }

	// LAF Table : List pane texts (menu double)
	inline TAknTextLineLayout List_pane_texts__menu_double__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__menu_double__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__menu_double__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__menu_double__Line_2() const		{ return (*(TList_pane_texts__menu_double__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__menu_double__Line_2)))(); }

	// LAF Table : List pane elements (menu double2)
	inline TAknWindowLineLayout List_pane_elements__menu_double2__Line_1(TInt aIndex_l) const		{ return (*(TList_pane_elements__menu_double2__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__menu_double2__Line_1)))(aIndex_l); }

	// LAF Table : List pane texts (menu double2)
	inline TAknTextLineLayout List_pane_texts__menu_double2__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__menu_double2__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__menu_double2__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__menu_double2__Line_2() const		{ return (*(TList_pane_texts__menu_double2__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__menu_double2__Line_2)))(); }

	// LAF Table : List pane elements (menu double large graphic)
	inline TAknWindowLineLayout List_pane_elements__menu_double_large_graphic__Line_1() const		{ return (*(TList_pane_elements__menu_double_large_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__menu_double_large_graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__menu_double_large_graphic__Line_2(TInt aIndex_l) const		{ return (*(TList_pane_elements__menu_double_large_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__menu_double_large_graphic__Line_2)))(aIndex_l); }

	// LAF Table : List pane texts (menu double large graphic)
	inline TAknTextLineLayout List_pane_texts__menu_double_large_graphic__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__menu_double_large_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__menu_double_large_graphic__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__menu_double_large_graphic__Line_2() const		{ return (*(TList_pane_texts__menu_double_large_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__menu_double_large_graphic__Line_2)))(); }

	// LAF Table : Highlight graphics (various)
	inline TAknWindowLineLayout Highlight_graphics__various__Line_1(const TRect& aParentRect) const		{ return (*(THighlight_graphics__various__Line_1_sig*)(GetFunction(EApiId_Highlight_graphics__various__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Highlight_graphics__various__Line_2(const TRect& aParentRect) const		{ return (*(THighlight_graphics__various__Line_2_sig*)(GetFunction(EApiId_Highlight_graphics__various__Line_2)))(aParentRect); }

	inline TAknLayoutTableLimits Highlight_graphics__various__Limits() const		{ return (*(THighlight_graphics__various__Limits_sig*)(GetFunction(EApiId_Highlight_graphics__various__Limits)))(); }

	inline TAknWindowLineLayout Highlight_graphics__various_(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(THighlight_graphics__various__sig*)(GetFunction(EApiId_Highlight_graphics__various_)))(aLineIndex, aParentRect); }

	// LAF Table : Pop-up window grid pane descendants (graphic)
	inline TAknWindowLineLayout cell_graphic_popup_pane(TInt aIndex_l, TInt aIndex_t) const		{ return (*(Tcell_graphic_popup_pane_sig*)(GetFunction(EApiId_cell_graphic_popup_pane)))(aIndex_l, aIndex_t); }

	// LAF Table : Cell pane elements (pop-up graphic)
	inline TAknWindowLineLayout Cell_pane_elements__pop_up_graphic__Line_1() const		{ return (*(TCell_pane_elements__pop_up_graphic__Line_1_sig*)(GetFunction(EApiId_Cell_pane_elements__pop_up_graphic__Line_1)))(); }

	// LAF Table : Cell pane texts (pop-up graphic)
	inline TAknTextLineLayout Cell_pane_texts__pop_up_graphic__Line_1() const		{ return (*(TCell_pane_texts__pop_up_graphic__Line_1_sig*)(GetFunction(EApiId_Cell_pane_texts__pop_up_graphic__Line_1)))(); }

	// LAF Table : Pop-up window grid pane descendants (large graphic colour)
	inline TAknWindowLineLayout cell_large_graphic_colour_popup_pane(TInt aIndex_l, TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tcell_large_graphic_colour_popup_pane_sig*)(GetFunction(EApiId_cell_large_graphic_colour_popup_pane)))(aIndex_l, aIndex_t, aIndex_H); }

	// LAF Table : Cell pane elements (pop-up large graphic colour)
	inline TAknWindowLineLayout colour(TInt aIndex_H) const		{ return (*(Tcolour_sig*)(GetFunction(EApiId_colour)))(aIndex_H); }

	// LAF Table : Pop-up window cell pane (large graphic colour none)
	inline TAknWindowLineLayout Pop_up_window_cell_pane__large_graphic_colour_none__Line_1() const		{ return (*(TPop_up_window_cell_pane__large_graphic_colour_none__Line_1_sig*)(GetFunction(EApiId_Pop_up_window_cell_pane__large_graphic_colour_none__Line_1)))(); }

	// LAF Table : Cell pane texts (pop-up large graphic colour none)
	inline TAknTextLineLayout Cell_pane_texts__pop_up_large_graphic_colour_none__Line_1() const		{ return (*(TCell_pane_texts__pop_up_large_graphic_colour_none__Line_1_sig*)(GetFunction(EApiId_Cell_pane_texts__pop_up_large_graphic_colour_none__Line_1)))(); }

	// LAF Table : Highlight elements (grid pop-up)
	inline TAknWindowLineLayout Highlight_elements__grid_pop_up__Line_1(const TRect& aParentRect) const		{ return (*(THighlight_elements__grid_pop_up__Line_1_sig*)(GetFunction(EApiId_Highlight_elements__grid_pop_up__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Highlight_elements__grid_pop_up__Line_2(const TRect& aParentRect) const		{ return (*(THighlight_elements__grid_pop_up__Line_2_sig*)(GetFunction(EApiId_Highlight_elements__grid_pop_up__Line_2)))(aParentRect); }

	inline TAknLayoutTableLimits Highlight_elements__grid_pop_up__Limits() const		{ return (*(THighlight_elements__grid_pop_up__Limits_sig*)(GetFunction(EApiId_Highlight_elements__grid_pop_up__Limits)))(); }

	inline TAknWindowLineLayout Highlight_elements__grid_pop_up_(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(THighlight_elements__grid_pop_up__sig*)(GetFunction(EApiId_Highlight_elements__grid_pop_up_)))(aLineIndex, aParentRect); }

	// LAF Table : List heading pane elements
	inline TAknWindowLineLayout List_heading_pane_elements_Line_1() const		{ return (*(TList_heading_pane_elements_Line_1_sig*)(GetFunction(EApiId_List_heading_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout List_heading_pane_elements_Line_2() const		{ return (*(TList_heading_pane_elements_Line_2_sig*)(GetFunction(EApiId_List_heading_pane_elements_Line_2)))(); }

	inline TAknLayoutTableLimits List_heading_pane_elements_Limits() const		{ return (*(TList_heading_pane_elements_Limits_sig*)(GetFunction(EApiId_List_heading_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout List_heading_pane_elements(TInt aLineIndex) const		{ return (*(TList_heading_pane_elements_sig*)(GetFunction(EApiId_List_heading_pane_elements)))(aLineIndex); }

	// LAF Table : List heading pane texts
	inline TAknTextLineLayout List_heading_pane_texts_Line_1(TInt aIndex_W) const		{ return (*(TList_heading_pane_texts_Line_1_sig*)(GetFunction(EApiId_List_heading_pane_texts_Line_1)))(aIndex_W); }

	// LAF Table : Pop-up menu with heading window graphics
	inline TAknWindowLineLayout Pop_up_menu_with_heading_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TPop_up_menu_with_heading_window_graphics_Line_1_sig*)(GetFunction(EApiId_Pop_up_menu_with_heading_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Pop_up_menu_with_heading_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TPop_up_menu_with_heading_window_graphics_Line_2_sig*)(GetFunction(EApiId_Pop_up_menu_with_heading_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Pop_up_menu_with_heading_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TPop_up_menu_with_heading_window_graphics_Line_3_sig*)(GetFunction(EApiId_Pop_up_menu_with_heading_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Pop_up_menu_with_heading_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TPop_up_menu_with_heading_window_graphics_Line_4_sig*)(GetFunction(EApiId_Pop_up_menu_with_heading_window_graphics_Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Pop_up_menu_with_heading_window_graphics_Line_5(const TRect& aParentRect) const		{ return (*(TPop_up_menu_with_heading_window_graphics_Line_5_sig*)(GetFunction(EApiId_Pop_up_menu_with_heading_window_graphics_Line_5)))(aParentRect); }

	inline TAknLayoutTableLimits Pop_up_menu_with_heading_window_graphics_Limits() const		{ return (*(TPop_up_menu_with_heading_window_graphics_Limits_sig*)(GetFunction(EApiId_Pop_up_menu_with_heading_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Pop_up_menu_with_heading_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TPop_up_menu_with_heading_window_graphics_sig*)(GetFunction(EApiId_Pop_up_menu_with_heading_window_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Menu pop-up window descendants
	inline TAknWindowLineLayout list_menu_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tlist_menu_pane_sig*)(GetFunction(EApiId_list_menu_pane)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout Menu_pop_up_window_descendants_Line_2() const		{ return (*(TMenu_pop_up_window_descendants_Line_2_sig*)(GetFunction(EApiId_Menu_pop_up_window_descendants_Line_2)))(); }

	// LAF Table : Menu pop-up window graphics
	inline TAknWindowLineLayout Menu_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TMenu_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Menu_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Menu_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TMenu_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Menu_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Menu_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TMenu_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Menu_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Menu_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TMenu_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Menu_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Menu_pop_up_window_graphics_Line_5(const TRect& aParentRect) const		{ return (*(TMenu_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Menu_pop_up_window_graphics_Line_5)))(aParentRect); }

	inline TAknLayoutTableLimits Menu_pop_up_window_graphics_Limits() const		{ return (*(TMenu_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Menu_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Menu_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TMenu_pop_up_window_graphics_sig*)(GetFunction(EApiId_Menu_pop_up_window_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Submenu pop-up window descendants
	inline TAknWindowLineLayout list_submenu_pane(TInt aIndex_W, TInt aIndex_H) const		{ return (*(Tlist_submenu_pane_sig*)(GetFunction(EApiId_list_submenu_pane)))(aIndex_W, aIndex_H); }

	// LAF Table : Submenu pop-up window graphics
	inline TAknWindowLineLayout Submenu_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TSubmenu_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Submenu_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Submenu_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TSubmenu_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Submenu_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Submenu_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TSubmenu_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Submenu_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Submenu_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TSubmenu_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Submenu_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknLayoutTableLimits Submenu_pop_up_window_graphics_Limits() const		{ return (*(TSubmenu_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Submenu_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Submenu_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TSubmenu_pop_up_window_graphics_sig*)(GetFunction(EApiId_Submenu_pop_up_window_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Submenu pop-up window positioning
	inline TAknWindowLineLayout Submenu_pop_up_window_positioning_Line_1(TInt aIndex_W, TInt aIndex_H) const		{ return (*(TSubmenu_pop_up_window_positioning_Line_1_sig*)(GetFunction(EApiId_Submenu_pop_up_window_positioning_Line_1)))(aIndex_W, aIndex_H); }

	inline TAknWindowLineLayout Submenu_pop_up_window_positioning_Line_2(TInt aIndex_W, TInt aIndex_H) const		{ return (*(TSubmenu_pop_up_window_positioning_Line_2_sig*)(GetFunction(EApiId_Submenu_pop_up_window_positioning_Line_2)))(aIndex_W, aIndex_H); }

	inline TAknLayoutTableLimits Submenu_pop_up_window_positioning_Limits() const		{ return (*(TSubmenu_pop_up_window_positioning_Limits_sig*)(GetFunction(EApiId_Submenu_pop_up_window_positioning_Limits)))(); }

	inline TAknWindowLineLayout Submenu_pop_up_window_positioning(TInt aLineIndex, TInt aIndex_W, TInt aIndex_H) const		{ return (*(TSubmenu_pop_up_window_positioning_sig*)(GetFunction(EApiId_Submenu_pop_up_window_positioning)))(aLineIndex, aIndex_W, aIndex_H); }

	// LAF Table : Menu pop-up window descendant (single graphic)
	inline TAknWindowLineLayout list_menu_graphic_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tlist_menu_graphic_pane_sig*)(GetFunction(EApiId_list_menu_graphic_pane)))(aIndex_t, aIndex_H); }

	// LAF Table : Menu pop-up window descendants (single heading)
	inline TAknWindowLineLayout list_menu_heading_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tlist_menu_heading_pane_sig*)(GetFunction(EApiId_list_menu_heading_pane)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout Menu_pop_up_window_descendants__single_heading__Line_2() const		{ return (*(TMenu_pop_up_window_descendants__single_heading__Line_2_sig*)(GetFunction(EApiId_Menu_pop_up_window_descendants__single_heading__Line_2)))(); }

	inline TAknWindowLineLayout Menu_pop_up_window_descendants__single_heading__Line_3(TInt aIndex_r) const		{ return (*(TMenu_pop_up_window_descendants__single_heading__Line_3_sig*)(GetFunction(EApiId_Menu_pop_up_window_descendants__single_heading__Line_3)))(aIndex_r); }

	// LAF Table : Menu pop-up window descendants and elements (single graphic heading)
	inline TAknWindowLineLayout list_menu_graphic_heading_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tlist_menu_graphic_heading_pane_sig*)(GetFunction(EApiId_list_menu_graphic_heading_pane)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout Menu_pop_up_window_descendants_and_elements__single_graphic_heading__Line_2() const		{ return (*(TMenu_pop_up_window_descendants_and_elements__single_graphic_heading__Line_2_sig*)(GetFunction(EApiId_Menu_pop_up_window_descendants_and_elements__single_graphic_heading__Line_2)))(); }

	inline TAknWindowLineLayout Menu_pop_up_window_descendants_and_elements__single_graphic_heading__Line_3(TInt aIndex_r) const		{ return (*(TMenu_pop_up_window_descendants_and_elements__single_graphic_heading__Line_3_sig*)(GetFunction(EApiId_Menu_pop_up_window_descendants_and_elements__single_graphic_heading__Line_3)))(aIndex_r); }

	// LAF Table : Menu pop-up window descendants (double double2)
	inline TAknWindowLineLayout list_menu_double_pane_list_menu_double2_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tlist_menu_double_pane_list_menu_double2_pane_sig*)(GetFunction(EApiId_list_menu_double_pane_list_menu_double2_pane)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout Menu_pop_up_window_descendants__double_double2__Line_2() const		{ return (*(TMenu_pop_up_window_descendants__double_double2__Line_2_sig*)(GetFunction(EApiId_Menu_pop_up_window_descendants__double_double2__Line_2)))(); }

	// LAF Table : Menu pop-up window descendants (double)
	inline TAknWindowLineLayout list_menu_double_large_graphic_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tlist_menu_double_large_graphic_pane_sig*)(GetFunction(EApiId_list_menu_double_large_graphic_pane)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout Menu_pop_up_window_descendants__double__Line_2() const		{ return (*(TMenu_pop_up_window_descendants__double__Line_2_sig*)(GetFunction(EApiId_Menu_pop_up_window_descendants__double__Line_2)))(); }

	// LAF Table : Note pop-up window elements
	inline TAknWindowLineLayout Note_pop_up_window_elements_Line_1() const		{ return (*(TNote_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Note_pop_up_window_elements_Line_1)))(); }

	// LAF Table : Note pop-up window texts
	inline TAknTextLineLayout Note_pop_up_window_texts_Line_1(TInt aCommon1) const		{ return (*(TNote_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Note_pop_up_window_texts_Line_1)))(aCommon1); }

	inline TAknMultiLineTextLayout Multiline_Note_pop_up_window_texts_Line_1(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Note_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Note_pop_up_window_texts_Line_1)))(aCommon1, aNumberOfLinesShown); }

	// LAF Table : Note pop-up window graphics
	inline TAknWindowLineLayout Note_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TNote_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Note_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Note_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TNote_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Note_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Note_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TNote_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Note_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Note_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TNote_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Note_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Note_pop_up_window_graphics_Line_5(const TRect& aParentRect) const		{ return (*(TNote_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Note_pop_up_window_graphics_Line_5)))(aParentRect); }

	inline TAknLayoutTableLimits Note_pop_up_window_graphics_Limits() const		{ return (*(TNote_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Note_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Note_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TNote_pop_up_window_graphics_sig*)(GetFunction(EApiId_Note_pop_up_window_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Wait or progress note pop-up window elements
	inline TAknWindowLineLayout Wait_or_progress_note_pop_up_window_elements_Line_1() const		{ return (*(TWait_or_progress_note_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Wait_or_progress_note_pop_up_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout Wait_or_progress_note_pop_up_window_elements_Line_2(TInt aIndex_t) const		{ return (*(TWait_or_progress_note_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Wait_or_progress_note_pop_up_window_elements_Line_2)))(aIndex_t); }

	inline TAknWindowLineLayout Wait_or_progress_note_pop_up_window_elements_Line_3() const		{ return (*(TWait_or_progress_note_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_Wait_or_progress_note_pop_up_window_elements_Line_3)))(); }

	inline TAknWindowLineLayout Wait_or_progress_note_pop_up_window_elements_Line_4() const		{ return (*(TWait_or_progress_note_pop_up_window_elements_Line_4_sig*)(GetFunction(EApiId_Wait_or_progress_note_pop_up_window_elements_Line_4)))(); }

	inline TAknLayoutTableLimits First_general_event_elements_Limits() const		{ return (*(TFirst_general_event_elements_Limits_sig*)(GetFunction(EApiId_First_general_event_elements_Limits)))(); }

	inline TAknWindowLineLayout First_general_event_elements(TInt aLineIndex) const		{ return (*(TFirst_general_event_elements_sig*)(GetFunction(EApiId_First_general_event_elements)))(aLineIndex); }

	// LAF Table : Wait or progress note pop-up window texts
	inline TAknTextLineLayout Wait_or_progress_note_pop_up_window_texts_Line_1(TInt aCommon1, TInt aNotCommon, TInt aIndex_B) const		{ return (*(TWait_or_progress_note_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Wait_or_progress_note_pop_up_window_texts_Line_1)))(aCommon1, aNotCommon, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Wait_or_progress_note_pop_up_window_texts_Line_1(TInt aCommon1, TInt aNotCommon, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Wait_or_progress_note_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Wait_or_progress_note_pop_up_window_texts_Line_1)))(aCommon1, aNotCommon, aNumberOfLinesShown); }

	// LAF Table : Note with an image pop-up window elements
	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_1() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_2() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_2)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_3() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_3)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_4() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_4_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_4)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_5() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_5_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_5)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_6() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_6_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_6)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_7() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_7_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_7)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_8() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_8_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_8)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_9() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_9_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_9)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_10() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_10_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_10)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_11() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_11_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_11)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_12() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_12_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_12)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements_Line_13() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Line_13_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Line_13)))(); }

	inline TAknLayoutTableLimits Note_with_an_image_pop_up_window_elements_Limits() const		{ return (*(TNote_with_an_image_pop_up_window_elements_Limits_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements_Limits)))(); }

	inline TAknWindowLineLayout Note_with_an_image_pop_up_window_elements(TInt aLineIndex) const		{ return (*(TNote_with_an_image_pop_up_window_elements_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_elements)))(aLineIndex); }

	// LAF Table : Note with an image pop-up window texts
	inline TAknTextLineLayout Note_with_an_image_pop_up_window_texts_Line_1(TInt aIndex_l, TInt aIndex_r, TInt aIndex_B, TInt aIndex_W) const		{ return (*(TNote_with_an_image_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Note_with_an_image_pop_up_window_texts_Line_1)))(aIndex_l, aIndex_r, aIndex_B, aIndex_W); }

	inline TAknMultiLineTextLayout Multiline_Note_with_an_image_pop_up_window_texts_Line_1(TInt aIndex_l, TInt aIndex_r, TInt aIndex_W, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Note_with_an_image_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Note_with_an_image_pop_up_window_texts_Line_1)))(aIndex_l, aIndex_r, aIndex_W, aNumberOfLinesShown); }

	// LAF Table : Query with heading window graphics
	inline TAknWindowLineLayout Query_with_heading_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TQuery_with_heading_window_graphics_Line_1_sig*)(GetFunction(EApiId_Query_with_heading_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Query_with_heading_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TQuery_with_heading_window_graphics_Line_2_sig*)(GetFunction(EApiId_Query_with_heading_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Query_with_heading_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TQuery_with_heading_window_graphics_Line_3_sig*)(GetFunction(EApiId_Query_with_heading_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Query_with_heading_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TQuery_with_heading_window_graphics_Line_4_sig*)(GetFunction(EApiId_Query_with_heading_window_graphics_Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Query_with_heading_window_graphics_Line_5(const TRect& aParentRect) const		{ return (*(TQuery_with_heading_window_graphics_Line_5_sig*)(GetFunction(EApiId_Query_with_heading_window_graphics_Line_5)))(aParentRect); }

	inline TAknLayoutTableLimits Query_with_heading_window_graphics_Limits() const		{ return (*(TQuery_with_heading_window_graphics_Limits_sig*)(GetFunction(EApiId_Query_with_heading_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Query_with_heading_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TQuery_with_heading_window_graphics_sig*)(GetFunction(EApiId_Query_with_heading_window_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Query with heading window descendants
	inline TAknWindowLineLayout popup_list_heading_pane(const TRect& aParentRect) const		{ return (*(Tpopup_list_heading_pane_sig*)(GetFunction(EApiId_popup_list_heading_pane)))(aParentRect); }

	// LAF Table : Heading pane elements
	inline TAknWindowLineLayout Heading_pane_elements_Line_1() const		{ return (*(THeading_pane_elements_Line_1_sig*)(GetFunction(EApiId_Heading_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Icon(TInt aIndex_t) const		{ return (*(TIcon_sig*)(GetFunction(EApiId_Icon)))(aIndex_t); }

	//TAknWindowLineLayout Icon();
	//TAknLayoutTableLimits Heading_pane_elements_SUB_TABLE_0_Limits();
	//TAknLayoutTableLimits Heading_pane_elements_Limits();
	//TAknWindowLineLayout Heading_pane_elements_SUB_TABLE_0(TInt aLineIndex);
	//TAknWindowLineLayout Heading_pane_elements_(TInt aLineIndex);
	// LAF Table : Heading pane texts
	inline TAknTextLineLayout Heading_pane_texts_Line_1(TInt aIndex_W) const		{ return (*(THeading_pane_texts_Line_1_sig*)(GetFunction(EApiId_Heading_pane_texts_Line_1)))(aIndex_W); }

	// LAF Table : Data query pop-up window elements
	inline TAknWindowLineLayout Data_query_pop_up_window_elements_Line_1(TInt aIndex_t) const		{ return (*(TData_query_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Data_query_pop_up_window_elements_Line_1)))(aIndex_t); }

	inline TAknWindowLineLayout Data_query_pop_up_window_elements_Line_2(const TRect& aParentRect, TInt aCommon1) const		{ return (*(TData_query_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Data_query_pop_up_window_elements_Line_2)))(aParentRect, aCommon1); }

	inline TAknWindowLineLayout Data_query_pop_up_window_elements_Line_3(const TRect& aParentRect, TInt aCommon1) const		{ return (*(TData_query_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_Data_query_pop_up_window_elements_Line_3)))(aParentRect, aCommon1); }

	inline TAknWindowLineLayout Data_query_pop_up_window_elements_Line_4(TInt aIndex_t) const		{ return (*(TData_query_pop_up_window_elements_Line_4_sig*)(GetFunction(EApiId_Data_query_pop_up_window_elements_Line_4)))(aIndex_t); }

	inline TAknWindowLineLayout Data_query_pop_up_window_elements_Line_5() const		{ return (*(TData_query_pop_up_window_elements_Line_5_sig*)(GetFunction(EApiId_Data_query_pop_up_window_elements_Line_5)))(); }

	// LAF Table : Data query pop-up window texts
	inline TAknTextLineLayout Data_query_pop_up_window_texts_Line_1(TInt aIndex_B) const		{ return (*(TData_query_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Data_query_pop_up_window_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Data_query_pop_up_window_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Data_query_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Data_query_pop_up_window_texts_Line_1)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Data_query_pop_up_window_texts_Line_2(TInt aIndex_B, TInt aIndex_J) const		{ return (*(TData_query_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Data_query_pop_up_window_texts_Line_2)))(aIndex_B, aIndex_J); }

	inline TAknMultiLineTextLayout Multiline_Data_query_pop_up_window_texts_Line_2(TInt aIndex_J, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Data_query_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Data_query_pop_up_window_texts_Line_2)))(aIndex_J, aNumberOfLinesShown); }

	// LAF Table : Data query pop-up window graphics
	inline TAknWindowLineLayout Data_query_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TData_query_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Data_query_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Data_query_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TData_query_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Data_query_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Data_query_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TData_query_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Data_query_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Data_query_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TData_query_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Data_query_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Data_query_pop_up_window_graphics_Line_5(const TRect& aParentRect) const		{ return (*(TData_query_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Data_query_pop_up_window_graphics_Line_5)))(aParentRect); }

	inline TAknLayoutTableLimits Data_query_pop_up_window_graphics_Limits() const		{ return (*(TData_query_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Data_query_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Data_query_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TData_query_pop_up_window_graphics_sig*)(GetFunction(EApiId_Data_query_pop_up_window_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Code query pop-up window elements
	inline TAknWindowLineLayout Code_query_pop_up_window_elements_Line_1(TInt aIndex_t) const		{ return (*(TCode_query_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Code_query_pop_up_window_elements_Line_1)))(aIndex_t); }

	inline TAknWindowLineLayout Code_query_pop_up_window_elements_Line_2(TInt aIndex_t) const		{ return (*(TCode_query_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Code_query_pop_up_window_elements_Line_2)))(aIndex_t); }

	inline TAknWindowLineLayout Code_query_pop_up_window_elements_Line_3(TInt aIndex_t) const		{ return (*(TCode_query_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_Code_query_pop_up_window_elements_Line_3)))(aIndex_t); }

	inline TAknWindowLineLayout Code_query_pop_up_window_elements_Line_4(TInt aIndex_t) const		{ return (*(TCode_query_pop_up_window_elements_Line_4_sig*)(GetFunction(EApiId_Code_query_pop_up_window_elements_Line_4)))(aIndex_t); }

	inline TAknLayoutTableLimits Code_query_pop_up_window_elements_Limits() const		{ return (*(TCode_query_pop_up_window_elements_Limits_sig*)(GetFunction(EApiId_Code_query_pop_up_window_elements_Limits)))(); }

	inline TAknWindowLineLayout Code_query_pop_up_window_elements(TInt aLineIndex, TInt aIndex_t) const		{ return (*(TCode_query_pop_up_window_elements_sig*)(GetFunction(EApiId_Code_query_pop_up_window_elements)))(aLineIndex, aIndex_t); }

	// LAF Table : Code query pop-up window texts
	inline TAknTextLineLayout Code_query_pop_up_window_texts_Line_1(TInt aIndex_B) const		{ return (*(TCode_query_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Code_query_pop_up_window_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Code_query_pop_up_window_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Code_query_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Code_query_pop_up_window_texts_Line_1)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Code_query_pop_up_window_texts_Line_2(TInt aIndex_B) const		{ return (*(TCode_query_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Code_query_pop_up_window_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Code_query_pop_up_window_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Code_query_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Code_query_pop_up_window_texts_Line_2)))(aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Code_query_pop_up_window_texts_Limits() const		{ return (*(TCode_query_pop_up_window_texts_Limits_sig*)(GetFunction(EApiId_Code_query_pop_up_window_texts_Limits)))(); }

	inline TAknTextLineLayout Code_query_pop_up_window_texts(TInt aLineIndex, TInt aIndex_B) const		{ return (*(TCode_query_pop_up_window_texts_sig*)(GetFunction(EApiId_Code_query_pop_up_window_texts)))(aLineIndex, aIndex_B); }

	// LAF Table : Combined data and code query pop-up window elements
	inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_elements_Line_1(TInt aIndex_C, TInt aIndex_t) const		{ return (*(TCombined_data_and_code_query_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_elements_Line_1)))(aIndex_C, aIndex_t); }

	inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_elements_Line_2(TInt aIndex_C, TInt aIndex_t) const		{ return (*(TCombined_data_and_code_query_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_elements_Line_2)))(aIndex_C, aIndex_t); }

	inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_elements_Line_3(TInt aIndex_t) const		{ return (*(TCombined_data_and_code_query_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_elements_Line_3)))(aIndex_t); }

	inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_elements_Line_4(TInt aIndex_t) const		{ return (*(TCombined_data_and_code_query_pop_up_window_elements_Line_4_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_elements_Line_4)))(aIndex_t); }

	inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_elements_Line_5(TInt aIndex_t) const		{ return (*(TCombined_data_and_code_query_pop_up_window_elements_Line_5_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_elements_Line_5)))(aIndex_t); }

	// LAF Table : Combined data and code query pop-up window texts
	inline TAknTextLineLayout Combined_data_and_code_query_pop_up_window_texts_Line_1(TInt aIndex_B) const		{ return (*(TCombined_data_and_code_query_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Combined_data_and_code_query_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_1)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Combined_data_and_code_query_pop_up_window_texts_Line_2(TInt aIndex_B) const		{ return (*(TCombined_data_and_code_query_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Combined_data_and_code_query_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_2)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Combined_data_and_code_query_pop_up_window_texts_Line_3(TInt aIndex_B) const		{ return (*(TCombined_data_and_code_query_pop_up_window_texts_Line_3_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_texts_Line_3)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_3(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Combined_data_and_code_query_pop_up_window_texts_Line_3_sig*)(GetFunction(EApiId_Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_3)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Combined_data_and_code_query_pop_up_window_texts_Line_4(TInt aIndex_B) const		{ return (*(TCombined_data_and_code_query_pop_up_window_texts_Line_4_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_texts_Line_4)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_4(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Combined_data_and_code_query_pop_up_window_texts_Line_4_sig*)(GetFunction(EApiId_Multiline_Combined_data_and_code_query_pop_up_window_texts_Line_4)))(aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Combined_data_and_code_query_pop_up_window_texts_Limits() const		{ return (*(TCombined_data_and_code_query_pop_up_window_texts_Limits_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_texts_Limits)))(); }

	inline TAknTextLineLayout Combined_data_and_code_query_pop_up_window_texts(TInt aLineIndex, TInt aIndex_B) const		{ return (*(TCombined_data_and_code_query_pop_up_window_texts_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_texts)))(aLineIndex, aIndex_B); }

	// LAF Table : Combined data and code query pop-up window graphics
	inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_graphics_Line_2(const TRect& aParentRect, TInt aIndex_H) const		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_graphics_Line_2)))(aParentRect, aIndex_H); }

	inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_graphics_Line_3(const TRect& aParentRect, TInt aIndex_H) const		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_graphics_Line_3)))(aParentRect, aIndex_H); }

	inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_graphics_Line_4(const TRect& aParentRect, TInt aIndex_H) const		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_graphics_Line_4)))(aParentRect, aIndex_H); }

	inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_graphics_Line_5(const TRect& aParentRect, TInt aIndex_H) const		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_graphics_Line_5)))(aParentRect, aIndex_H); }

	inline TAknLayoutTableLimits Combined_data_and_code_query_pop_up_window_graphics_SUB_TABLE_0_Limits() const		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_graphics_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Combined_data_and_code_query_pop_up_window_graphics_SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect, TInt aIndex_H) const		{ return (*(TCombined_data_and_code_query_pop_up_window_graphics_SUB_TABLE_0_sig*)(GetFunction(EApiId_Combined_data_and_code_query_pop_up_window_graphics_SUB_TABLE_0)))(aLineIndex, aParentRect, aIndex_H); }

	// LAF Table : Find pop-up window elements
	inline TAknWindowLineLayout Find_pop_up_window_elements_Line_1() const		{ return (*(TFind_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Find_pop_up_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout Find_pop_up_window_elements_Line_2() const		{ return (*(TFind_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Find_pop_up_window_elements_Line_2)))(); }

	inline TAknWindowLineLayout Find_pop_up_window_elements_Line_3() const		{ return (*(TFind_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_Find_pop_up_window_elements_Line_3)))(); }

	inline TAknWindowLineLayout Find_pop_up_window_elements_Line_4() const		{ return (*(TFind_pop_up_window_elements_Line_4_sig*)(GetFunction(EApiId_Find_pop_up_window_elements_Line_4)))(); }

	inline TAknLayoutTableLimits Find_pop_up_window_elements_Limits() const		{ return (*(TFind_pop_up_window_elements_Limits_sig*)(GetFunction(EApiId_Find_pop_up_window_elements_Limits)))(); }

	inline TAknWindowLineLayout Find_pop_up_window_elements(TInt aLineIndex) const		{ return (*(TFind_pop_up_window_elements_sig*)(GetFunction(EApiId_Find_pop_up_window_elements)))(aLineIndex); }

	// LAF Table : Find pop-up window texts
	inline TAknTextLineLayout Find_pop_up_window_texts_Line_1() const		{ return (*(TFind_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Find_pop_up_window_texts_Line_1)))(); }

	// LAF Table : Find pop-up window graphics
	inline TAknWindowLineLayout Find_pop_up_window_graphics_Line_1() const		{ return (*(TFind_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Find_pop_up_window_graphics_Line_1)))(); }

	inline TAknWindowLineLayout Find_pop_up_window_graphics_Line_2() const		{ return (*(TFind_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Find_pop_up_window_graphics_Line_2)))(); }

	inline TAknWindowLineLayout Find_pop_up_window_graphics_Line_3() const		{ return (*(TFind_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Find_pop_up_window_graphics_Line_3)))(); }

	inline TAknWindowLineLayout Find_pop_up_window_graphics_Line_4() const		{ return (*(TFind_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Find_pop_up_window_graphics_Line_4)))(); }

	inline TAknWindowLineLayout Find_pop_up_window_graphics_Line_5() const		{ return (*(TFind_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Find_pop_up_window_graphics_Line_5)))(); }

	inline TAknLayoutTableLimits Find_pop_up_window_graphics_Limits() const		{ return (*(TFind_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Find_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Find_pop_up_window_graphics(TInt aLineIndex) const		{ return (*(TFind_pop_up_window_graphics_sig*)(GetFunction(EApiId_Find_pop_up_window_graphics)))(aLineIndex); }

	// LAF Table : Pop-up menu with find pane graphics
	inline TAknWindowLineLayout Pop_up_menu_with_find_pane_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TPop_up_menu_with_find_pane_graphics_Line_1_sig*)(GetFunction(EApiId_Pop_up_menu_with_find_pane_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Pop_up_menu_with_find_pane_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TPop_up_menu_with_find_pane_graphics_Line_2_sig*)(GetFunction(EApiId_Pop_up_menu_with_find_pane_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Pop_up_menu_with_find_pane_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TPop_up_menu_with_find_pane_graphics_Line_3_sig*)(GetFunction(EApiId_Pop_up_menu_with_find_pane_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Pop_up_menu_with_find_pane_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TPop_up_menu_with_find_pane_graphics_Line_4_sig*)(GetFunction(EApiId_Pop_up_menu_with_find_pane_graphics_Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Pop_up_menu_with_find_pane_graphics_Line_5(const TRect& aParentRect) const		{ return (*(TPop_up_menu_with_find_pane_graphics_Line_5_sig*)(GetFunction(EApiId_Pop_up_menu_with_find_pane_graphics_Line_5)))(aParentRect); }

	inline TAknLayoutTableLimits Pop_up_menu_with_find_pane_graphics_Limits() const		{ return (*(TPop_up_menu_with_find_pane_graphics_Limits_sig*)(GetFunction(EApiId_Pop_up_menu_with_find_pane_graphics_Limits)))(); }

	inline TAknWindowLineLayout Pop_up_menu_with_find_pane_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TPop_up_menu_with_find_pane_graphics_sig*)(GetFunction(EApiId_Pop_up_menu_with_find_pane_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Notification pop-up window elements (text)
	inline TAknWindowLineLayout Notification_pop_up_window_elements__text__Line_1() const		{ return (*(TNotification_pop_up_window_elements__text__Line_1_sig*)(GetFunction(EApiId_Notification_pop_up_window_elements__text__Line_1)))(); }

	// LAF Table : Notification pop-up window texts (text)
	inline TAknTextLineLayout Notification_pop_up_window_texts__text__Line_1(TInt aIndex_B) const		{ return (*(TNotification_pop_up_window_texts__text__Line_1_sig*)(GetFunction(EApiId_Notification_pop_up_window_texts__text__Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Notification_pop_up_window_texts__text__Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Notification_pop_up_window_texts__text__Line_1_sig*)(GetFunction(EApiId_Multiline_Notification_pop_up_window_texts__text__Line_1)))(aNumberOfLinesShown); }

	// LAF Table : Notification pop-up window graphics (text)
	inline TAknWindowLineLayout Notification_pop_up_window_graphics__text__Line_1(const TRect& aParentRect) const		{ return (*(TNotification_pop_up_window_graphics__text__Line_1_sig*)(GetFunction(EApiId_Notification_pop_up_window_graphics__text__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Notification_pop_up_window_graphics__text__Line_2(const TRect& aParentRect) const		{ return (*(TNotification_pop_up_window_graphics__text__Line_2_sig*)(GetFunction(EApiId_Notification_pop_up_window_graphics__text__Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Notification_pop_up_window_graphics__text__Line_3(const TRect& aParentRect) const		{ return (*(TNotification_pop_up_window_graphics__text__Line_3_sig*)(GetFunction(EApiId_Notification_pop_up_window_graphics__text__Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Notification_pop_up_window_graphics__text__Line_4(const TRect& aParentRect) const		{ return (*(TNotification_pop_up_window_graphics__text__Line_4_sig*)(GetFunction(EApiId_Notification_pop_up_window_graphics__text__Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Notification_pop_up_window_graphics__text__Line_5(const TRect& aParentRect) const		{ return (*(TNotification_pop_up_window_graphics__text__Line_5_sig*)(GetFunction(EApiId_Notification_pop_up_window_graphics__text__Line_5)))(aParentRect); }

	inline TAknLayoutTableLimits Notification_pop_up_window_graphics__text__Limits() const		{ return (*(TNotification_pop_up_window_graphics__text__Limits_sig*)(GetFunction(EApiId_Notification_pop_up_window_graphics__text__Limits)))(); }

	inline TAknWindowLineLayout Notification_pop_up_window_graphics__text_(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TNotification_pop_up_window_graphics__text__sig*)(GetFunction(EApiId_Notification_pop_up_window_graphics__text_)))(aLineIndex, aParentRect); }

	// LAF Table : Notification pop-up window elements (graphic)
	inline TAknWindowLineLayout Notification_pop_up_window_elements__graphic__Line_1() const		{ return (*(TNotification_pop_up_window_elements__graphic__Line_1_sig*)(GetFunction(EApiId_Notification_pop_up_window_elements__graphic__Line_1)))(); }

	inline TAknWindowLineLayout Notification_pop_up_window_elements__graphic__Line_2() const		{ return (*(TNotification_pop_up_window_elements__graphic__Line_2_sig*)(GetFunction(EApiId_Notification_pop_up_window_elements__graphic__Line_2)))(); }

	inline TAknLayoutTableLimits Notification_pop_up_window_elements__graphic__Limits() const		{ return (*(TNotification_pop_up_window_elements__graphic__Limits_sig*)(GetFunction(EApiId_Notification_pop_up_window_elements__graphic__Limits)))(); }

	inline TAknWindowLineLayout Notification_pop_up_window_elements__graphic_(TInt aLineIndex) const		{ return (*(TNotification_pop_up_window_elements__graphic__sig*)(GetFunction(EApiId_Notification_pop_up_window_elements__graphic_)))(aLineIndex); }

	// LAF Table : Notification pop-up window texts (graphic)
	inline TAknTextLineLayout Notification_pop_up_window_texts__graphic__Line_1(TInt aCommon1) const		{ return (*(TNotification_pop_up_window_texts__graphic__Line_1_sig*)(GetFunction(EApiId_Notification_pop_up_window_texts__graphic__Line_1)))(aCommon1); }

	inline TAknMultiLineTextLayout Multiline_Notification_pop_up_window_texts__graphic__Line_1(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Notification_pop_up_window_texts__graphic__Line_1_sig*)(GetFunction(EApiId_Multiline_Notification_pop_up_window_texts__graphic__Line_1)))(aCommon1, aNumberOfLinesShown); }

	// LAF Table : Identifier icon selection pop-up window descendants
	inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_descendants_Line_1(TInt aIndex_t) const		{ return (*(TIdentifier_icon_selection_pop_up_window_descendants_Line_1_sig*)(GetFunction(EApiId_Identifier_icon_selection_pop_up_window_descendants_Line_1)))(aIndex_t); }

	inline TAknWindowLineLayout grid_graphic_popup_pane(TInt aCommon1, TInt aIndex_H) const		{ return (*(Tgrid_graphic_popup_pane_sig*)(GetFunction(EApiId_grid_graphic_popup_pane)))(aCommon1, aIndex_H); }

	// LAF Table : Identifier icon selection pop-up window elements
	inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_elements_Line_1(TInt aCommon1) const		{ return (*(TIdentifier_icon_selection_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Identifier_icon_selection_pop_up_window_elements_Line_1)))(aCommon1); }

	inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_elements_Line_2(TInt aIndex_l, TInt aIndex_t, TInt aIndex_H) const		{ return (*(TIdentifier_icon_selection_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Identifier_icon_selection_pop_up_window_elements_Line_2)))(aIndex_l, aIndex_t, aIndex_H); }

	// LAF Table : Identifier icon selection pop-up window graphics
	inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Identifier_icon_selection_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_graphics_Line_2(const TRect& aParentRect, TInt aIndex_t) const		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Identifier_icon_selection_pop_up_window_graphics_Line_2)))(aParentRect, aIndex_t); }

	inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_graphics_Line_3(const TRect& aParentRect, TInt aIndex_t) const		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Identifier_icon_selection_pop_up_window_graphics_Line_3)))(aParentRect, aIndex_t); }

	inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_graphics_Line_4(const TRect& aParentRect, TInt aIndex_t) const		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Identifier_icon_selection_pop_up_window_graphics_Line_4)))(aParentRect, aIndex_t); }

	inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_graphics_Line_5(const TRect& aParentRect, TInt aIndex_t) const		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Identifier_icon_selection_pop_up_window_graphics_Line_5)))(aParentRect, aIndex_t); }

	inline TAknLayoutTableLimits Identifier_icon_selection_pop_up_window_graphics_SUB_TABLE_0_Limits() const		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Identifier_icon_selection_pop_up_window_graphics_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Identifier_icon_selection_pop_up_window_graphics_SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect, TInt aIndex_t) const		{ return (*(TIdentifier_icon_selection_pop_up_window_graphics_SUB_TABLE_0_sig*)(GetFunction(EApiId_Identifier_icon_selection_pop_up_window_graphics_SUB_TABLE_0)))(aLineIndex, aParentRect, aIndex_t); }

	// LAF Table : Colour selection pop-up window descendants
	inline TAknWindowLineLayout Colour_selection_pop_up_window_descendants_Line_1() const		{ return (*(TColour_selection_pop_up_window_descendants_Line_1_sig*)(GetFunction(EApiId_Colour_selection_pop_up_window_descendants_Line_1)))(); }

	inline TAknWindowLineLayout Colour_selection_pop_up_window_descendants_Line_2() const		{ return (*(TColour_selection_pop_up_window_descendants_Line_2_sig*)(GetFunction(EApiId_Colour_selection_pop_up_window_descendants_Line_2)))(); }

	inline TAknWindowLineLayout grid_large_graphic_colour_popup_pane(TInt aCommon1) const		{ return (*(Tgrid_large_graphic_colour_popup_pane_sig*)(GetFunction(EApiId_grid_large_graphic_colour_popup_pane)))(aCommon1); }

	// LAF Table : Composer symbol selection pop-up window elements
	inline TAknWindowLineLayout Composer_symbol_selection_pop_up_window_elements_Line_1(TInt aIndex_t) const		{ return (*(TComposer_symbol_selection_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Composer_symbol_selection_pop_up_window_elements_Line_1)))(aIndex_t); }

	inline TAknWindowLineLayout Composer_symbol_selection_pop_up_window_elements_Line_2(TInt aIndex_l, TInt aIndex_t, TInt aIndex_W, TInt aIndex_H) const		{ return (*(TComposer_symbol_selection_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Composer_symbol_selection_pop_up_window_elements_Line_2)))(aIndex_l, aIndex_t, aIndex_W, aIndex_H); }

	// LAF Table : Colour selection pop-up window graphics
	inline TAknWindowLineLayout Colour_selection_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TColour_selection_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Colour_selection_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Colour_selection_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TColour_selection_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Colour_selection_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Colour_selection_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TColour_selection_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Colour_selection_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Colour_selection_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TColour_selection_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Colour_selection_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Colour_selection_pop_up_window_graphics_Line_5(const TRect& aParentRect) const		{ return (*(TColour_selection_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Colour_selection_pop_up_window_graphics_Line_5)))(aParentRect); }

	inline TAknLayoutTableLimits Colour_selection_pop_up_window_graphics_Limits() const		{ return (*(TColour_selection_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Colour_selection_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Colour_selection_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TColour_selection_pop_up_window_graphics_sig*)(GetFunction(EApiId_Colour_selection_pop_up_window_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Fast application swapping pop-up window descendants
	inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_descendants_Line_1(TInt aIndex_t) const		{ return (*(TFast_application_swapping_pop_up_window_descendants_Line_1_sig*)(GetFunction(EApiId_Fast_application_swapping_pop_up_window_descendants_Line_1)))(aIndex_t); }

	// LAF Table : Fast application swapping pop-up window graphics
	inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TFast_application_swapping_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Fast_application_swapping_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TFast_application_swapping_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Fast_application_swapping_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TFast_application_swapping_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Fast_application_swapping_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TFast_application_swapping_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Fast_application_swapping_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_Line_5(const TRect& aParentRect) const		{ return (*(TFast_application_swapping_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Fast_application_swapping_pop_up_window_graphics_Line_5)))(aParentRect); }

	inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_Line_6() const		{ return (*(TFast_application_swapping_pop_up_window_graphics_Line_6_sig*)(GetFunction(EApiId_Fast_application_swapping_pop_up_window_graphics_Line_6)))(); }

	inline TAknLayoutTableLimits Fast_application_swapping_pop_up_window_graphics_SUB_TABLE_0_Limits() const		{ return (*(TFast_application_swapping_pop_up_window_graphics_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Fast_application_swapping_pop_up_window_graphics_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Fast_application_swapping_pop_up_window_graphics_SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TFast_application_swapping_pop_up_window_graphics_SUB_TABLE_0_sig*)(GetFunction(EApiId_Fast_application_swapping_pop_up_window_graphics_SUB_TABLE_0)))(aLineIndex, aParentRect); }

	// LAF Table : List pane texts (setting, double2)
	inline TAknTextLineLayout List_pane_texts__setting__double2__Line_1() const		{ return (*(TList_pane_texts__setting__double2__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__setting__double2__Line_1)))(); }

	inline TAknTextLineLayout List_pane_texts__setting__double2__Line_2() const		{ return (*(TList_pane_texts__setting__double2__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__setting__double2__Line_2)))(); }

	inline TAknLayoutTableLimits List_pane_texts__setting__double2__Limits() const		{ return (*(TList_pane_texts__setting__double2__Limits_sig*)(GetFunction(EApiId_List_pane_texts__setting__double2__Limits)))(); }

	inline TAknTextLineLayout List_pane_texts__setting__double2_(TInt aLineIndex) const		{ return (*(TList_pane_texts__setting__double2__sig*)(GetFunction(EApiId_List_pane_texts__setting__double2_)))(aLineIndex); }

	// LAF Table : List pane elements (single 2graphic)
	inline TAknWindowLineLayout List_pane_elements__single_2graphic__Line_1() const		{ return (*(TList_pane_elements__single_2graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__single_2graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_2graphic__Line_2() const		{ return (*(TList_pane_elements__single_2graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__single_2graphic__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_2graphic__Line_3() const		{ return (*(TList_pane_elements__single_2graphic__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__single_2graphic__Line_3)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_2graphic__Line_4(TInt aIndex_l) const		{ return (*(TList_pane_elements__single_2graphic__Line_4_sig*)(GetFunction(EApiId_List_pane_elements__single_2graphic__Line_4)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_elements__single_2graphic__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__single_2graphic__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__single_2graphic__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__single_2graphic__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__single_2graphic__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__single_2graphic__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (single 2graphic)
	inline TAknTextLineLayout List_pane_texts__single_2graphic__Line_1(TInt aIndex_r, TInt aIndex_W) const		{ return (*(TList_pane_texts__single_2graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__single_2graphic__Line_1)))(aIndex_r, aIndex_W); }

	// LAF Table : List pane elements (double2 graphic large graphic)
	inline TAknWindowLineLayout List_pane_elements__double2_graphic_large_graphic__Line_1() const		{ return (*(TList_pane_elements__double2_graphic_large_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__double2_graphic_large_graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__double2_graphic_large_graphic__Line_2() const		{ return (*(TList_pane_elements__double2_graphic_large_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__double2_graphic_large_graphic__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__double2_graphic_large_graphic__Line_3() const		{ return (*(TList_pane_elements__double2_graphic_large_graphic__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__double2_graphic_large_graphic__Line_3)))(); }

	inline TAknWindowLineLayout List_pane_elements__double2_graphic_large_graphic__Line_4(TInt aIndex_l) const		{ return (*(TList_pane_elements__double2_graphic_large_graphic__Line_4_sig*)(GetFunction(EApiId_List_pane_elements__double2_graphic_large_graphic__Line_4)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_elements__double2_graphic_large_graphic__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__double2_graphic_large_graphic__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__double2_graphic_large_graphic__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__double2_graphic_large_graphic__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__double2_graphic_large_graphic__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__double2_graphic_large_graphic__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (double2 graphic large graphic)
	inline TAknTextLineLayout List_pane_texts__double2_graphic_large_graphic__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__double2_graphic_large_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__double2_graphic_large_graphic__Line_1)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__double2_graphic_large_graphic__Line_2() const		{ return (*(TList_pane_texts__double2_graphic_large_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__double2_graphic_large_graphic__Line_2)))(); }

	// LAF Table : Form data wide graphic field texts
	inline TAknTextLineLayout Form_data_wide_graphic_field_texts_Line_1() const		{ return (*(TForm_data_wide_graphic_field_texts_Line_1_sig*)(GetFunction(EApiId_Form_data_wide_graphic_field_texts_Line_1)))(); }

	inline TAknTextLineLayout Form_data_wide_graphic_field_texts_Line_2(TInt aIndex_B) const		{ return (*(TForm_data_wide_graphic_field_texts_Line_2_sig*)(GetFunction(EApiId_Form_data_wide_graphic_field_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Form_data_wide_graphic_field_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Form_data_wide_graphic_field_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Form_data_wide_graphic_field_texts_Line_2)))(aNumberOfLinesShown); }

	// LAF Table : Application window descendants 2.1
	inline TAknWindowLineLayout status_small_pane() const		{ return (*(Tstatus_small_pane_sig*)(GetFunction(EApiId_status_small_pane)))(); }

	// LAF Table : Small status pane descendants and elements
	inline TAknWindowLineLayout Small_status_pane_descendants_and_elements_Line_1() const		{ return (*(TSmall_status_pane_descendants_and_elements_Line_1_sig*)(GetFunction(EApiId_Small_status_pane_descendants_and_elements_Line_1)))(); }

	inline TAknWindowLineLayout status_small_icon_pane() const		{ return (*(Tstatus_small_icon_pane_sig*)(GetFunction(EApiId_status_small_icon_pane)))(); }

	inline TAknWindowLineLayout status_small_wait_pane() const		{ return (*(Tstatus_small_wait_pane_sig*)(GetFunction(EApiId_status_small_wait_pane)))(); }

	inline TAknWindowLineLayout Small_status_pane_descendants_and_elements_Line_4() const		{ return (*(TSmall_status_pane_descendants_and_elements_Line_4_sig*)(GetFunction(EApiId_Small_status_pane_descendants_and_elements_Line_4)))(); }

	inline TAknWindowLineLayout Small_status_pane_descendants_and_elements_Line_5() const		{ return (*(TSmall_status_pane_descendants_and_elements_Line_5_sig*)(GetFunction(EApiId_Small_status_pane_descendants_and_elements_Line_5)))(); }

	inline TAknWindowLineLayout Small_status_pane_descendants_and_elements_Line_6() const		{ return (*(TSmall_status_pane_descendants_and_elements_Line_6_sig*)(GetFunction(EApiId_Small_status_pane_descendants_and_elements_Line_6)))(); }

	inline TAknLayoutTableLimits Small_status_pane_descendants_and_elements_Limits() const		{ return (*(TSmall_status_pane_descendants_and_elements_Limits_sig*)(GetFunction(EApiId_Small_status_pane_descendants_and_elements_Limits)))(); }

	inline TAknWindowLineLayout Small_status_pane_descendants_and_elements(TInt aLineIndex) const		{ return (*(TSmall_status_pane_descendants_and_elements_sig*)(GetFunction(EApiId_Small_status_pane_descendants_and_elements)))(aLineIndex); }

	// LAF Table : Small status pane texts
	inline TAknTextLineLayout Small_status_pane_texts_Line_1(TInt aIndex_J) const		{ return (*(TSmall_status_pane_texts_Line_1_sig*)(GetFunction(EApiId_Small_status_pane_texts_Line_1)))(aIndex_J); }

	// LAF Table : Small status waiting pane components
	inline TAknWindowLineLayout Small_status_waiting_pane_components_Line_1() const		{ return (*(TSmall_status_waiting_pane_components_Line_1_sig*)(GetFunction(EApiId_Small_status_waiting_pane_components_Line_1)))(); }

	inline TAknWindowLineLayout Small_status_waiting_pane_components_Line_2() const		{ return (*(TSmall_status_waiting_pane_components_Line_2_sig*)(GetFunction(EApiId_Small_status_waiting_pane_components_Line_2)))(); }

	inline TAknWindowLineLayout Small_status_waiting_pane_components_Line_3() const		{ return (*(TSmall_status_waiting_pane_components_Line_3_sig*)(GetFunction(EApiId_Small_status_waiting_pane_components_Line_3)))(); }

	inline TAknWindowLineLayout Small_status_waiting_pane_components_Line_4() const		{ return (*(TSmall_status_waiting_pane_components_Line_4_sig*)(GetFunction(EApiId_Small_status_waiting_pane_components_Line_4)))(); }

	inline TAknLayoutTableLimits Small_status_waiting_pane_components_Limits() const		{ return (*(TSmall_status_waiting_pane_components_Limits_sig*)(GetFunction(EApiId_Small_status_waiting_pane_components_Limits)))(); }

	inline TAknWindowLineLayout Small_status_waiting_pane_components(TInt aLineIndex) const		{ return (*(TSmall_status_waiting_pane_components_sig*)(GetFunction(EApiId_Small_status_waiting_pane_components)))(aLineIndex); }

	// Layouts for AknPopupForm
	inline TAknWindowLineLayout Note_with_additional_information_popup_window_elements_Line_1() const		{ return (*(TNote_with_additional_information_popup_window_elements_Line_1_sig*)(GetFunction(EApiId_Note_with_additional_information_popup_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout Note_with_additional_information_popup_window_elements_Line_2(TInt aIndex_W) const		{ return (*(TNote_with_additional_information_popup_window_elements_Line_2_sig*)(GetFunction(EApiId_Note_with_additional_information_popup_window_elements_Line_2)))(aIndex_W); }

	inline TAknWindowLineLayout Note_with_additional_information_popup_window_elements_Line_3(TInt aIndex_W) const		{ return (*(TNote_with_additional_information_popup_window_elements_Line_3_sig*)(GetFunction(EApiId_Note_with_additional_information_popup_window_elements_Line_3)))(aIndex_W); }

	inline TAknTextLineLayout Note_with_additional_information_popup_window_texts_Line_1(TInt aCommon1, TInt aIndex_B) const		{ return (*(TNote_with_additional_information_popup_window_texts_Line_1_sig*)(GetFunction(EApiId_Note_with_additional_information_popup_window_texts_Line_1)))(aCommon1, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Note_with_additional_information_popup_window_texts_Line_1(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Note_with_additional_information_popup_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Note_with_additional_information_popup_window_texts_Line_1)))(aCommon1, aNumberOfLinesShown); }

	inline TAknTextLineLayout Note_with_additional_information_popup_window_texts_Line_2(TInt aIndex_B) const		{ return (*(TNote_with_additional_information_popup_window_texts_Line_2_sig*)(GetFunction(EApiId_Note_with_additional_information_popup_window_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Note_with_additional_information_popup_window_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Note_with_additional_information_popup_window_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Note_with_additional_information_popup_window_texts_Line_2)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Note_with_additional_information_popup_window_texts_Line_3(TInt aCommon1, TInt aIndex_B) const		{ return (*(TNote_with_additional_information_popup_window_texts_Line_3_sig*)(GetFunction(EApiId_Note_with_additional_information_popup_window_texts_Line_3)))(aCommon1, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Note_with_additional_information_popup_window_texts_Line_3(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Note_with_additional_information_popup_window_texts_Line_3_sig*)(GetFunction(EApiId_Multiline_Note_with_additional_information_popup_window_texts_Line_3)))(aCommon1, aNumberOfLinesShown); }

	inline TAknTextLineLayout Heading_pane_texts_Line_2() const		{ return (*(THeading_pane_texts_Line_2_sig*)(GetFunction(EApiId_Heading_pane_texts_Line_2)))(); }

	inline TAknWindowLineLayout Side_volume_key_popup_window_elements_Line_1() const		{ return (*(TSide_volume_key_popup_window_elements_Line_1_sig*)(GetFunction(EApiId_Side_volume_key_popup_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout Side_volume_key_popup_window_elements_Line_2() const		{ return (*(TSide_volume_key_popup_window_elements_Line_2_sig*)(GetFunction(EApiId_Side_volume_key_popup_window_elements_Line_2)))(); }

	inline TAknTextLineLayout Side_volume_key_popup_window_texts_Line_1() const		{ return (*(TSide_volume_key_popup_window_texts_Line_1_sig*)(GetFunction(EApiId_Side_volume_key_popup_window_texts_Line_1)))(); }

	inline TAknTextLineLayout Side_volume_key_popup_window_texts_Line_2() const		{ return (*(TSide_volume_key_popup_window_texts_Line_2_sig*)(GetFunction(EApiId_Side_volume_key_popup_window_texts_Line_2)))(); }

	inline TAknWindowLineLayout Side_volume_key_popup_window_background_Line_1(const TRect& aParentRect) const		{ return (*(TSide_volume_key_popup_window_background_Line_1_sig*)(GetFunction(EApiId_Side_volume_key_popup_window_background_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Side_volume_key_popup_window_background_Line_2(const TRect& aParentRect) const		{ return (*(TSide_volume_key_popup_window_background_Line_2_sig*)(GetFunction(EApiId_Side_volume_key_popup_window_background_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Side_volume_key_popup_window_background_Line_3(const TRect& aParentRect) const		{ return (*(TSide_volume_key_popup_window_background_Line_3_sig*)(GetFunction(EApiId_Side_volume_key_popup_window_background_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Side_volume_key_popup_window_background_Line_4(const TRect& aParentRect) const		{ return (*(TSide_volume_key_popup_window_background_Line_4_sig*)(GetFunction(EApiId_Side_volume_key_popup_window_background_Line_4)))(aParentRect); }

	// LAF Table : Transparent setting item texts
	inline TAknTextLineLayout Transparent_setting_item_texts_Line_1() const		{ return (*(TTransparent_setting_item_texts_Line_1_sig*)(GetFunction(EApiId_Transparent_setting_item_texts_Line_1)))(); }

	inline TAknTextLineLayout Transparent_setting_item_texts_Line_2() const		{ return (*(TTransparent_setting_item_texts_Line_2_sig*)(GetFunction(EApiId_Transparent_setting_item_texts_Line_2)))(); }

	inline TAknTextLineLayout Transparent_setting_item_texts_Line_3(TInt aCommon1) const		{ return (*(TTransparent_setting_item_texts_Line_3_sig*)(GetFunction(EApiId_Transparent_setting_item_texts_Line_3)))(aCommon1); }

	inline TAknTextLineLayout Transparent_setting_item_texts_Line_4(TInt aCommon1) const		{ return (*(TTransparent_setting_item_texts_Line_4_sig*)(GetFunction(EApiId_Transparent_setting_item_texts_Line_4)))(aCommon1); }

	// LAF Table : List pane texts (set trans graphic)
	inline TAknTextLineLayout List_pane_texts__set_trans_graphic__Line_1(TInt aIndex_l, TInt aIndex_W) const		{ return (*(TList_pane_texts__set_trans_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__set_trans_graphic__Line_1)))(aIndex_l, aIndex_W); }

	inline TAknTextLineLayout List_pane_texts__set_trans_graphic__Line_2(TInt aIndex_l, TInt aIndex_W) const		{ return (*(TList_pane_texts__set_trans_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__set_trans_graphic__Line_2)))(aIndex_l, aIndex_W); }

	// LAF Table : List pane elements and descendants (settings edited)
	inline TAknWindowLineLayout list_set_trans_pane(TInt aIndex_H) const		{ return (*(Tlist_set_trans_pane_sig*)(GetFunction(EApiId_list_set_trans_pane)))(aIndex_H); }

	// LAF Table : AVKON specific list pane
	inline TAknWindowLineLayout list_set_trans_graphic_pane(TInt aIndex_t) const		{ return (*(Tlist_set_trans_graphic_pane_sig*)(GetFunction(EApiId_list_set_trans_graphic_pane)))(aIndex_t); }

	// LAF Table : List pane elements (set trans graphic)
	inline TAknWindowLineLayout List_pane_elements__set_trans_graphic__Line_1() const		{ return (*(TList_pane_elements__set_trans_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__set_trans_graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__set_trans_graphic__Line_2() const		{ return (*(TList_pane_elements__set_trans_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__set_trans_graphic__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__set_trans_graphic__Line_3() const		{ return (*(TList_pane_elements__set_trans_graphic__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__set_trans_graphic__Line_3)))(); }

	inline TAknWindowLineLayout List_pane_elements__set_trans_graphic__Line_4() const		{ return (*(TList_pane_elements__set_trans_graphic__Line_4_sig*)(GetFunction(EApiId_List_pane_elements__set_trans_graphic__Line_4)))(); }

	inline TAknWindowLineLayout List_pane_elements__set_trans_graphic__Line_5() const		{ return (*(TList_pane_elements__set_trans_graphic__Line_5_sig*)(GetFunction(EApiId_List_pane_elements__set_trans_graphic__Line_5)))(); }

	// Active idle state layouts
	inline TAknTextLineLayout Soft_indicator_texts_Line_1() const		{ return (*(TSoft_indicator_texts_Line_1_sig*)(GetFunction(EApiId_Soft_indicator_texts_Line_1)))(); }

	inline TAknWindowLineLayout ai_links_pane() const		{ return (*(Tai_links_pane_sig*)(GetFunction(EApiId_ai_links_pane)))(); }

	inline TAknWindowLineLayout ai_gene_pane(TInt aIndex_H) const		{ return (*(Tai_gene_pane_sig*)(GetFunction(EApiId_ai_gene_pane)))(aIndex_H); }

	inline TAknWindowLineLayout Link_pane_elements_and_descendant_panes_Line_1() const		{ return (*(TLink_pane_elements_and_descendant_panes_Line_1_sig*)(GetFunction(EApiId_Link_pane_elements_and_descendant_panes_Line_1)))(); }

	inline TAknWindowLineLayout grid_ai_links_pane() const		{ return (*(Tgrid_ai_links_pane_sig*)(GetFunction(EApiId_grid_ai_links_pane)))(); }

	inline TAknLayoutTableLimits Link_pane_elements_and_descendant_panes_Limits() const		{ return (*(TLink_pane_elements_and_descendant_panes_Limits_sig*)(GetFunction(EApiId_Link_pane_elements_and_descendant_panes_Limits)))(); }

	inline TAknWindowLineLayout Link_pane_elements_and_descendant_panes(TInt aLineIndex) const		{ return (*(TLink_pane_elements_and_descendant_panes_sig*)(GetFunction(EApiId_Link_pane_elements_and_descendant_panes)))(aLineIndex); }

	inline TAknWindowLineLayout cell_ai_link_pane(TInt aIndex_l) const		{ return (*(Tcell_ai_link_pane_sig*)(GetFunction(EApiId_cell_ai_link_pane)))(aIndex_l); }

	inline TAknWindowLineLayout Link_shortcut_cell_pane_elements_Line_1() const		{ return (*(TLink_shortcut_cell_pane_elements_Line_1_sig*)(GetFunction(EApiId_Link_shortcut_cell_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Link_shortcut_cell_pane_elements_Line_2() const		{ return (*(TLink_shortcut_cell_pane_elements_Line_2_sig*)(GetFunction(EApiId_Link_shortcut_cell_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Link_shortcut_cell_pane_elements_Line_3() const		{ return (*(TLink_shortcut_cell_pane_elements_Line_3_sig*)(GetFunction(EApiId_Link_shortcut_cell_pane_elements_Line_3)))(); }

	inline TAknWindowLineLayout Link_shortcut_cell_pane_elements_Line_4() const		{ return (*(TLink_shortcut_cell_pane_elements_Line_4_sig*)(GetFunction(EApiId_Link_shortcut_cell_pane_elements_Line_4)))(); }

	inline TAknLayoutTableLimits Link_shortcut_cell_pane_elements_Limits() const		{ return (*(TLink_shortcut_cell_pane_elements_Limits_sig*)(GetFunction(EApiId_Link_shortcut_cell_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Link_shortcut_cell_pane_elements(TInt aLineIndex) const		{ return (*(TLink_shortcut_cell_pane_elements_sig*)(GetFunction(EApiId_Link_shortcut_cell_pane_elements)))(aLineIndex); }

	inline TAknWindowLineLayout popup_ai_links_title_window() const		{ return (*(Tpopup_ai_links_title_window_sig*)(GetFunction(EApiId_popup_ai_links_title_window)))(); }

	inline TAknTextLineLayout Link_shortcut_title_texts_Line_1() const		{ return (*(TLink_shortcut_title_texts_Line_1_sig*)(GetFunction(EApiId_Link_shortcut_title_texts_Line_1)))(); }

	inline TAknWindowLineLayout Link_shortcut_title_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TLink_shortcut_title_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Link_shortcut_title_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Link_shortcut_title_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TLink_shortcut_title_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Link_shortcut_title_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Link_shortcut_title_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TLink_shortcut_title_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Link_shortcut_title_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Link_shortcut_title_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TLink_shortcut_title_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Link_shortcut_title_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknLayoutTableLimits Link_shortcut_title_pop_up_window_graphics_Limits() const		{ return (*(TLink_shortcut_title_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Link_shortcut_title_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Link_shortcut_title_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TLink_shortcut_title_pop_up_window_graphics_sig*)(GetFunction(EApiId_Link_shortcut_title_pop_up_window_graphics)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout ai_gene_pane_1() const		{ return (*(Tai_gene_pane_1_sig*)(GetFunction(EApiId_ai_gene_pane_1)))(); }

	inline TAknWindowLineLayout ai_gene_pane_2(TInt aIndex_t) const		{ return (*(Tai_gene_pane_2_sig*)(GetFunction(EApiId_ai_gene_pane_2)))(aIndex_t); }

	inline TAknWindowLineLayout First_general_event_elements_Line_1() const		{ return (*(TFirst_general_event_elements_Line_1_sig*)(GetFunction(EApiId_First_general_event_elements_Line_1)))(); }

	inline TAknWindowLineLayout First_general_event_elements_Line_2() const		{ return (*(TFirst_general_event_elements_Line_2_sig*)(GetFunction(EApiId_First_general_event_elements_Line_2)))(); }

	inline TAknTextLineLayout First_general_event_texts_Line_1(TInt aCommon1) const		{ return (*(TFirst_general_event_texts_Line_1_sig*)(GetFunction(EApiId_First_general_event_texts_Line_1)))(aCommon1); }

	inline TAknTextLineLayout Second_general_event_pane_texts_Line_1(TInt aCommon1) const		{ return (*(TSecond_general_event_pane_texts_Line_1_sig*)(GetFunction(EApiId_Second_general_event_pane_texts_Line_1)))(aCommon1); }

	inline TAknWindowLineLayout Shortcut_link_highlight_Line_1(const TRect& aParentRect) const		{ return (*(TShortcut_link_highlight_Line_1_sig*)(GetFunction(EApiId_Shortcut_link_highlight_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Highlight_for_other_Active_Idle_items_Line_1(const TRect& aParentRect) const		{ return (*(THighlight_for_other_Active_Idle_items_Line_1_sig*)(GetFunction(EApiId_Highlight_for_other_Active_Idle_items_Line_1)))(aParentRect); }

	inline TAknTextLineLayout Find_pop_up_window_texts_Line_2() const		{ return (*(TFind_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Find_pop_up_window_texts_Line_2)))(); }

	inline TAknLayoutTableLimits Find_pop_up_window_texts_Limits() const		{ return (*(TFind_pop_up_window_texts_Limits_sig*)(GetFunction(EApiId_Find_pop_up_window_texts_Limits)))(); }

	inline TAknTextLineLayout Find_pop_up_window_texts(TInt aLineIndex) const		{ return (*(TFind_pop_up_window_texts_sig*)(GetFunction(EApiId_Find_pop_up_window_texts)))(aLineIndex); }

	inline TAknTextLineLayout Find_pane_texts_Line_2() const		{ return (*(TFind_pane_texts_Line_2_sig*)(GetFunction(EApiId_Find_pane_texts_Line_2)))(); }

	inline TAknLayoutTableLimits Find_pane_texts_Limits() const		{ return (*(TFind_pane_texts_Limits_sig*)(GetFunction(EApiId_Find_pane_texts_Limits)))(); }

	inline TAknTextLineLayout Find_pane_texts(TInt aLineIndex) const		{ return (*(TFind_pane_texts_sig*)(GetFunction(EApiId_Find_pane_texts)))(aLineIndex); }

	inline TAknWindowLineLayout ai_gene_pane_3() const		{ return (*(Tai_gene_pane_3_sig*)(GetFunction(EApiId_ai_gene_pane_3)))(); }

	inline TAknWindowLineLayout Third_general_event_elements_Line_1() const		{ return (*(TThird_general_event_elements_Line_1_sig*)(GetFunction(EApiId_Third_general_event_elements_Line_1)))(); }

	inline TAknWindowLineLayout Third_general_event_elements_Line_2() const		{ return (*(TThird_general_event_elements_Line_2_sig*)(GetFunction(EApiId_Third_general_event_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Third_general_event_elements_Limits() const		{ return (*(TThird_general_event_elements_Limits_sig*)(GetFunction(EApiId_Third_general_event_elements_Limits)))(); }

	inline TAknWindowLineLayout Third_general_event_elements(TInt aLineIndex) const		{ return (*(TThird_general_event_elements_sig*)(GetFunction(EApiId_Third_general_event_elements)))(aLineIndex); }

	inline TAknWindowLineLayout popup_ai_message_window() const		{ return (*(Tpopup_ai_message_window_sig*)(GetFunction(EApiId_popup_ai_message_window)))(); }

	inline TAknWindowLineLayout Active_idle_message_pop_up_window_descendants_Line_1() const		{ return (*(TActive_idle_message_pop_up_window_descendants_Line_1_sig*)(GetFunction(EApiId_Active_idle_message_pop_up_window_descendants_Line_1)))(); }

	inline TAknWindowLineLayout Active_idle_message_pop_up_window_descendants_Line_2() const		{ return (*(TActive_idle_message_pop_up_window_descendants_Line_2_sig*)(GetFunction(EApiId_Active_idle_message_pop_up_window_descendants_Line_2)))(); }

	inline TAknWindowLineLayout Active_idle_message_pop_up_window_descendants_Line_3() const		{ return (*(TActive_idle_message_pop_up_window_descendants_Line_3_sig*)(GetFunction(EApiId_Active_idle_message_pop_up_window_descendants_Line_3)))(); }

	inline TAknLayoutTableLimits Active_idle_message_pop_up_window_descendants_Limits() const		{ return (*(TActive_idle_message_pop_up_window_descendants_Limits_sig*)(GetFunction(EApiId_Active_idle_message_pop_up_window_descendants_Limits)))(); }

	inline TAknWindowLineLayout Active_idle_message_pop_up_window_descendants(TInt aLineIndex) const		{ return (*(TActive_idle_message_pop_up_window_descendants_sig*)(GetFunction(EApiId_Active_idle_message_pop_up_window_descendants)))(aLineIndex); }

	inline TAknTextLineLayout Active_idle_message_popup_window_texts_Line_1(TInt aCommon1, TInt aIndex_B) const		{ return (*(TActive_idle_message_popup_window_texts_Line_1_sig*)(GetFunction(EApiId_Active_idle_message_popup_window_texts_Line_1)))(aCommon1, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Active_idle_message_popup_window_texts_Line_1(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Active_idle_message_popup_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Active_idle_message_popup_window_texts_Line_1)))(aCommon1, aNumberOfLinesShown); }

	inline TAknWindowLineLayout Active_idle_heading_pane_elements_Line_1() const		{ return (*(TActive_idle_heading_pane_elements_Line_1_sig*)(GetFunction(EApiId_Active_idle_heading_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Active_idle_heading_pane_elements_Line_2() const		{ return (*(TActive_idle_heading_pane_elements_Line_2_sig*)(GetFunction(EApiId_Active_idle_heading_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Active_idle_heading_pane_elements_Line_3() const		{ return (*(TActive_idle_heading_pane_elements_Line_3_sig*)(GetFunction(EApiId_Active_idle_heading_pane_elements_Line_3)))(); }

	inline TAknWindowLineLayout Active_idle_heading_pane_elements_Line_4() const		{ return (*(TActive_idle_heading_pane_elements_Line_4_sig*)(GetFunction(EApiId_Active_idle_heading_pane_elements_Line_4)))(); }

	inline TAknLayoutTableLimits Active_idle_heading_pane_elements_Limits() const		{ return (*(TActive_idle_heading_pane_elements_Limits_sig*)(GetFunction(EApiId_Active_idle_heading_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Active_idle_heading_pane_elements(TInt aLineIndex) const		{ return (*(TActive_idle_heading_pane_elements_sig*)(GetFunction(EApiId_Active_idle_heading_pane_elements)))(aLineIndex); }

	inline TAknTextLineLayout Active_idle_heading_pane_texts_Line_1(TInt aCommon1) const		{ return (*(TActive_idle_heading_pane_texts_Line_1_sig*)(GetFunction(EApiId_Active_idle_heading_pane_texts_Line_1)))(aCommon1); }

	inline TAknTextLineLayout Active_idle_heading_pane_texts_Line_2() const		{ return (*(TActive_idle_heading_pane_texts_Line_2_sig*)(GetFunction(EApiId_Active_idle_heading_pane_texts_Line_2)))(); }

	inline TAknWindowLineLayout Active_idle_message_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TActive_idle_message_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Active_idle_message_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Active_idle_message_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TActive_idle_message_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Active_idle_message_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Active_idle_message_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TActive_idle_message_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Active_idle_message_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Active_idle_message_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TActive_idle_message_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Active_idle_message_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Active_idle_message_pop_up_window_graphics_Line_5(const TRect& aParentRect) const		{ return (*(TActive_idle_message_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Active_idle_message_pop_up_window_graphics_Line_5)))(aParentRect); }

	inline TAknLayoutTableLimits Active_idle_message_pop_up_window_graphics_Limits() const		{ return (*(TActive_idle_message_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Active_idle_message_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Active_idle_message_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TActive_idle_message_pop_up_window_graphics_sig*)(GetFunction(EApiId_Active_idle_message_pop_up_window_graphics)))(aLineIndex, aParentRect); }

private:
	CInstance();
	};

} // end of namespace AknLayout
#endif // AKNLAYOUT_CDL
