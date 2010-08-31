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

#ifndef SKINLAYOUT_CDL
#define SKINLAYOUT_CDL

#include <CdlEngine.h>
#include <skinlayout.cdl.common.h>

namespace SkinLayout
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


// CDL API functions, as defined in skinlayout.cdl

inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_1()		{ return (*(TxInput_field_skin_placing__find_list__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xInput_field_skin_placing__find_list__Line_1)))(); }

inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_2()		{ return (*(TxInput_field_skin_placing__find_list__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xInput_field_skin_placing__find_list__Line_2)))(); }

inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_3()		{ return (*(TxInput_field_skin_placing__find_list__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xInput_field_skin_placing__find_list__Line_3)))(); }

inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_4()		{ return (*(TxInput_field_skin_placing__find_list__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xInput_field_skin_placing__find_list__Line_4)))(); }

inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_5()		{ return (*(TxInput_field_skin_placing__find_list__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xInput_field_skin_placing__find_list__Line_5)))(); }

inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_6()		{ return (*(TxInput_field_skin_placing__find_list__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xInput_field_skin_placing__find_list__Line_6)))(); }

inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_7()		{ return (*(TxInput_field_skin_placing__find_list__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xInput_field_skin_placing__find_list__Line_7)))(); }

inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_8()		{ return (*(TxInput_field_skin_placing__find_list__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xInput_field_skin_placing__find_list__Line_8)))(); }

inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_9()		{ return (*(TxInput_field_skin_placing__find_list__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xInput_field_skin_placing__find_list__Line_9)))(); }

inline TAknLayoutTableLimits xInput_field_skin_placing__find_list__Limits()		{ return (*(TxInput_field_skin_placing__find_list__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xInput_field_skin_placing__find_list__Limits)))(); }

inline TAknWindowLineLayout xInput_field_skin_placing__find_list_(TInt aLineIndex)		{ return (*(TxInput_field_skin_placing__find_list__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xInput_field_skin_placing__find_list_)))(aLineIndex); }

inline TAknWindowLineLayout Screen_background_skin_placing_Line_1()		{ return (*(TScreen_background_skin_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Screen_background_skin_placing_Line_1)))(); }

inline TAknWindowLineLayout Area_background_skin_placing_Line_1()		{ return (*(TArea_background_skin_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Area_background_skin_placing_Line_1)))(); }

inline TAknWindowLineLayout Area_background_skin_placing_Line_2(TInt aIndex_t, TInt aIndex_H)		{ return (*(TArea_background_skin_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Area_background_skin_placing_Line_2)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout Area_background_skin_placing_Line_3()		{ return (*(TArea_background_skin_placing_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Area_background_skin_placing_Line_3)))(); }

inline TAknWindowLineLayout Pane_background_skin_naming_Line_1()		{ return (*(TPane_background_skin_naming_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pane_background_skin_naming_Line_1)))(); }

inline TAknWindowLineLayout Navi_pane_background_stripe_skin_placing_Line_1(TInt aCommon1)		{ return (*(TNavi_pane_background_stripe_skin_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_background_stripe_skin_placing_Line_1)))(aCommon1); }

inline TAknWindowLineLayout Navi_pane_background_stripe_skin_placing_Line_2()		{ return (*(TNavi_pane_background_stripe_skin_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_background_stripe_skin_placing_Line_2)))(); }

inline TAknWindowLineLayout Volume_level_skin_placing_Line_1(TInt aIndex_l)		{ return (*(TVolume_level_skin_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_level_skin_placing_Line_1)))(aIndex_l); }

inline TAknWindowLineLayout Volume_level_skin_placing_Line_2(TInt aIndex_l)		{ return (*(TVolume_level_skin_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_level_skin_placing_Line_2)))(aIndex_l); }

inline TAknLayoutTableLimits Volume_level_skin_placing_Limits()		{ return (*(TVolume_level_skin_placing_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_level_skin_placing_Limits)))(); }

inline TAknWindowLineLayout Volume_level_skin_placing(TInt aLineIndex, TInt aIndex_l)		{ return (*(TVolume_level_skin_placing_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_level_skin_placing)))(aLineIndex, aIndex_l); }

inline TAknWindowLineLayout Volume_area_values_Line_1(TInt aIndex_l)		{ return (*(TVolume_area_values_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values_Line_1)))(aIndex_l); }

inline TAknWindowLineLayout Volume_area_values_Line_2(TInt aIndex_l)		{ return (*(TVolume_area_values_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values_Line_2)))(aIndex_l); }

inline TAknWindowLineLayout Volume_area_values_Line_3(TInt aIndex_l)		{ return (*(TVolume_area_values_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values_Line_3)))(aIndex_l); }

inline TAknWindowLineLayout Volume_area_values_Line_4(TInt aIndex_l)		{ return (*(TVolume_area_values_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values_Line_4)))(aIndex_l); }

inline TAknWindowLineLayout Volume_area_values_Line_5(TInt aIndex_l)		{ return (*(TVolume_area_values_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values_Line_5)))(aIndex_l); }

inline TAknWindowLineLayout Volume_area_values_Line_6(TInt aIndex_l)		{ return (*(TVolume_area_values_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values_Line_6)))(aIndex_l); }

inline TAknWindowLineLayout Volume_area_values_Line_7(TInt aIndex_l)		{ return (*(TVolume_area_values_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values_Line_7)))(aIndex_l); }

inline TAknWindowLineLayout Volume_area_values_Line_8(TInt aIndex_l)		{ return (*(TVolume_area_values_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values_Line_8)))(aIndex_l); }

inline TAknWindowLineLayout Volume_area_values_Line_9(TInt aIndex_l)		{ return (*(TVolume_area_values_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values_Line_9)))(aIndex_l); }

inline TAknWindowLineLayout Volume_area_values_Line_10(TInt aIndex_l)		{ return (*(TVolume_area_values_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values_Line_10)))(aIndex_l); }

inline TAknWindowLineLayout Volume_area_values_Line_11(TInt aIndex_l)		{ return (*(TVolume_area_values_Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values_Line_11)))(aIndex_l); }

inline TAknLayoutTableLimits Volume_area_values_Limits()		{ return (*(TVolume_area_values_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values_Limits)))(); }

inline TAknWindowLineLayout Volume_area_values(TInt aLineIndex, TInt aIndex_l)		{ return (*(TVolume_area_values_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_area_values)))(aLineIndex, aIndex_l); }

inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_1()		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Column_background_and_list_slice_skin_placing_Line_1)))(); }

inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_2()		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Column_background_and_list_slice_skin_placing_Line_2)))(); }

inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_3()		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Column_background_and_list_slice_skin_placing_Line_3)))(); }

inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_4()		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Column_background_and_list_slice_skin_placing_Line_4)))(); }

inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_5()		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Column_background_and_list_slice_skin_placing_Line_5)))(); }

inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_6()		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Column_background_and_list_slice_skin_placing_Line_6)))(); }

inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_7()		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Column_background_and_list_slice_skin_placing_Line_7)))(); }

inline TAknLayoutTableLimits Column_background_and_list_slice_skin_placing_Limits()		{ return (*(TColumn_background_and_list_slice_skin_placing_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Column_background_and_list_slice_skin_placing_Limits)))(); }

inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing(TInt aLineIndex)		{ return (*(TColumn_background_and_list_slice_skin_placing_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Column_background_and_list_slice_skin_placing)))(aLineIndex); }

inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_1()		{ return (*(TSetting_list_item_skin_elements__value_background__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_elements__value_background__Line_1)))(); }

inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_2()		{ return (*(TSetting_list_item_skin_elements__value_background__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_elements__value_background__Line_2)))(); }

inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_3()		{ return (*(TSetting_list_item_skin_elements__value_background__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_elements__value_background__Line_3)))(); }

inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_4()		{ return (*(TSetting_list_item_skin_elements__value_background__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_elements__value_background__Line_4)))(); }

inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_5()		{ return (*(TSetting_list_item_skin_elements__value_background__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_elements__value_background__Line_5)))(); }

inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_6()		{ return (*(TSetting_list_item_skin_elements__value_background__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_elements__value_background__Line_6)))(); }

inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_7()		{ return (*(TSetting_list_item_skin_elements__value_background__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_elements__value_background__Line_7)))(); }

inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_8()		{ return (*(TSetting_list_item_skin_elements__value_background__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_elements__value_background__Line_8)))(); }

inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_9()		{ return (*(TSetting_list_item_skin_elements__value_background__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_elements__value_background__Line_9)))(); }

inline TAknLayoutTableLimits Setting_list_item_skin_elements__value_background__Limits()		{ return (*(TSetting_list_item_skin_elements__value_background__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_elements__value_background__Limits)))(); }

inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background_(TInt aLineIndex)		{ return (*(TSetting_list_item_skin_elements__value_background__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_elements__value_background_)))(aLineIndex); }

inline TAknWindowLineLayout Setting_list_item_skin_placing__volume__Line_1()		{ return (*(TSetting_list_item_skin_placing__volume__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_placing__volume__Line_1)))(); }

inline TAknWindowLineLayout Setting_list_item_skin_placing__volume__Line_2()		{ return (*(TSetting_list_item_skin_placing__volume__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_placing__volume__Line_2)))(); }

inline TAknLayoutTableLimits Setting_list_item_skin_placing__volume__Limits()		{ return (*(TSetting_list_item_skin_placing__volume__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_placing__volume__Limits)))(); }

inline TAknWindowLineLayout Setting_list_item_skin_placing__volume_(TInt aLineIndex)		{ return (*(TSetting_list_item_skin_placing__volume__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_list_item_skin_placing__volume_)))(aLineIndex); }

inline TAknWindowLineLayout Settings_volume_area_values_Line_1()		{ return (*(TSettings_volume_area_values_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_Line_1)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_Line_2()		{ return (*(TSettings_volume_area_values_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_Line_2)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_Line_3()		{ return (*(TSettings_volume_area_values_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_Line_3)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_Line_4()		{ return (*(TSettings_volume_area_values_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_Line_4)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_Line_5()		{ return (*(TSettings_volume_area_values_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_Line_5)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_Line_6()		{ return (*(TSettings_volume_area_values_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_Line_6)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_Line_7()		{ return (*(TSettings_volume_area_values_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_Line_7)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_Line_8()		{ return (*(TSettings_volume_area_values_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_Line_8)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_Line_9()		{ return (*(TSettings_volume_area_values_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_Line_9)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_Line_10()		{ return (*(TSettings_volume_area_values_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_Line_10)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_Line_11()		{ return (*(TSettings_volume_area_values_Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_Line_11)))(); }

inline TAknLayoutTableLimits Settings_volume_area_values_Limits()		{ return (*(TSettings_volume_area_values_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_Limits)))(); }

inline TAknWindowLineLayout Settings_volume_area_values(TInt aLineIndex)		{ return (*(TSettings_volume_area_values_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values)))(aLineIndex); }

inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_1(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__general__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__Line_1)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_2()		{ return (*(TList_highlight_skin_placing__general__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__Line_2)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_3()		{ return (*(TList_highlight_skin_placing__general__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__Line_3)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_4()		{ return (*(TList_highlight_skin_placing__general__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__Line_4)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_5()		{ return (*(TList_highlight_skin_placing__general__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__Line_5)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_6()		{ return (*(TList_highlight_skin_placing__general__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__Line_6)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_7()		{ return (*(TList_highlight_skin_placing__general__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__Line_7)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_8(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__general__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__Line_8)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_9(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__general__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__Line_9)))(aParentRect); }

inline TAknLayoutTableLimits List_highlight_skin_placing__general__SUB_TABLE_0_Limits()		{ return (*(TList_highlight_skin_placing__general__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__general__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_highlight_skin_placing__general__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits List_highlight_skin_placing__general__SUB_TABLE_1_Limits()		{ return (*(TList_highlight_skin_placing__general__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__general__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__general__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__general__SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_1()		{ return (*(TList_highlight_skin_placing__settings__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__settings__Line_1)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_2()		{ return (*(TList_highlight_skin_placing__settings__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__settings__Line_2)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_3()		{ return (*(TList_highlight_skin_placing__settings__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__settings__Line_3)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_4()		{ return (*(TList_highlight_skin_placing__settings__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__settings__Line_4)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_5()		{ return (*(TList_highlight_skin_placing__settings__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__settings__Line_5)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_6()		{ return (*(TList_highlight_skin_placing__settings__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__settings__Line_6)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_7()		{ return (*(TList_highlight_skin_placing__settings__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__settings__Line_7)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_8()		{ return (*(TList_highlight_skin_placing__settings__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__settings__Line_8)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_9()		{ return (*(TList_highlight_skin_placing__settings__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__settings__Line_9)))(); }

inline TAknLayoutTableLimits List_highlight_skin_placing__settings__Limits()		{ return (*(TList_highlight_skin_placing__settings__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__settings__Limits)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__settings_(TInt aLineIndex)		{ return (*(TList_highlight_skin_placing__settings__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__settings_)))(aLineIndex); }

inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_1(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__apps_specific__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__Line_1)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_2()		{ return (*(TList_highlight_skin_placing__apps_specific__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__Line_2)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_3()		{ return (*(TList_highlight_skin_placing__apps_specific__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__Line_3)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_4()		{ return (*(TList_highlight_skin_placing__apps_specific__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__Line_4)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_5()		{ return (*(TList_highlight_skin_placing__apps_specific__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__Line_5)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_6(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__apps_specific__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__Line_6)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_7(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__apps_specific__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__Line_7)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_8(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__apps_specific__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__Line_8)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_9(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__apps_specific__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__Line_9)))(aParentRect); }

inline TAknLayoutTableLimits List_highlight_skin_placing__apps_specific__SUB_TABLE_0_Limits()		{ return (*(TList_highlight_skin_placing__apps_specific__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_highlight_skin_placing__apps_specific__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits List_highlight_skin_placing__apps_specific__SUB_TABLE_1_Limits()		{ return (*(TList_highlight_skin_placing__apps_specific__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__apps_specific__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__apps_specific__SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_1(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__popup_specific__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__Line_1)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_2()		{ return (*(TList_highlight_skin_placing__popup_specific__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__Line_2)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_3()		{ return (*(TList_highlight_skin_placing__popup_specific__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__Line_3)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_4()		{ return (*(TList_highlight_skin_placing__popup_specific__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__Line_4)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_5()		{ return (*(TList_highlight_skin_placing__popup_specific__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__Line_5)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_6(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__popup_specific__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__Line_6)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_7(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__popup_specific__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__Line_7)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_8(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__popup_specific__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__Line_8)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_9(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__popup_specific__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__Line_9)))(aParentRect); }

inline TAknLayoutTableLimits List_highlight_skin_placing__popup_specific__SUB_TABLE_0_Limits()		{ return (*(TList_highlight_skin_placing__popup_specific__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_highlight_skin_placing__popup_specific__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits List_highlight_skin_placing__popup_specific__SUB_TABLE_1_Limits()		{ return (*(TList_highlight_skin_placing__popup_specific__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__popup_specific__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_specific__SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_1(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__popup_windows__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__Line_1)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_2()		{ return (*(TList_highlight_skin_placing__popup_windows__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__Line_2)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_3()		{ return (*(TList_highlight_skin_placing__popup_windows__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__Line_3)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_4()		{ return (*(TList_highlight_skin_placing__popup_windows__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__Line_4)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_5()		{ return (*(TList_highlight_skin_placing__popup_windows__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__Line_5)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_6(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__popup_windows__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__Line_6)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_7(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__popup_windows__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__Line_7)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_8(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__popup_windows__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__Line_8)))(aParentRect); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_9(const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__popup_windows__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__Line_9)))(aParentRect); }

inline TAknLayoutTableLimits List_highlight_skin_placing__popup_windows__SUB_TABLE_0_Limits()		{ return (*(TList_highlight_skin_placing__popup_windows__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_highlight_skin_placing__popup_windows__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits List_highlight_skin_placing__popup_windows__SUB_TABLE_1_Limits()		{ return (*(TList_highlight_skin_placing__popup_windows__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TList_highlight_skin_placing__popup_windows__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_highlight_skin_placing__popup_windows__SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_1(const TRect& aParentRect)		{ return (*(THighlight_skin_placing__grid__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_2()		{ return (*(THighlight_skin_placing__grid__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__Line_2)))(); }

inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_3()		{ return (*(THighlight_skin_placing__grid__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__Line_3)))(); }

inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_4()		{ return (*(THighlight_skin_placing__grid__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__Line_4)))(); }

inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_5()		{ return (*(THighlight_skin_placing__grid__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__Line_5)))(); }

inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_6(const TRect& aParentRect)		{ return (*(THighlight_skin_placing__grid__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__Line_6)))(aParentRect); }

inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_7(const TRect& aParentRect)		{ return (*(THighlight_skin_placing__grid__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__Line_7)))(aParentRect); }

inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_8(const TRect& aParentRect)		{ return (*(THighlight_skin_placing__grid__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__Line_8)))(aParentRect); }

inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_9(const TRect& aParentRect)		{ return (*(THighlight_skin_placing__grid__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__Line_9)))(aParentRect); }

inline TAknLayoutTableLimits Highlight_skin_placing__grid__SUB_TABLE_0_Limits()		{ return (*(THighlight_skin_placing__grid__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Highlight_skin_placing__grid__SUB_TABLE_0(TInt aLineIndex)		{ return (*(THighlight_skin_placing__grid__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Highlight_skin_placing__grid__SUB_TABLE_1_Limits()		{ return (*(THighlight_skin_placing__grid__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Highlight_skin_placing__grid__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(THighlight_skin_placing__grid__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__grid__SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_1(const TRect& aParentRect)		{ return (*(THighlight_skin_placing__form_popup_field__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_2()		{ return (*(THighlight_skin_placing__form_popup_field__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__Line_2)))(); }

inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_3()		{ return (*(THighlight_skin_placing__form_popup_field__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__Line_3)))(); }

inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_4()		{ return (*(THighlight_skin_placing__form_popup_field__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__Line_4)))(); }

inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_5()		{ return (*(THighlight_skin_placing__form_popup_field__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__Line_5)))(); }

inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_6(const TRect& aParentRect)		{ return (*(THighlight_skin_placing__form_popup_field__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__Line_6)))(aParentRect); }

inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_7(const TRect& aParentRect)		{ return (*(THighlight_skin_placing__form_popup_field__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__Line_7)))(aParentRect); }

inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_8(const TRect& aParentRect)		{ return (*(THighlight_skin_placing__form_popup_field__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__Line_8)))(aParentRect); }

inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_9(const TRect& aParentRect)		{ return (*(THighlight_skin_placing__form_popup_field__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__Line_9)))(aParentRect); }

inline TAknLayoutTableLimits Highlight_skin_placing__form_popup_field__SUB_TABLE_0_Limits()		{ return (*(THighlight_skin_placing__form_popup_field__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__SUB_TABLE_0(TInt aLineIndex)		{ return (*(THighlight_skin_placing__form_popup_field__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Highlight_skin_placing__form_popup_field__SUB_TABLE_1_Limits()		{ return (*(THighlight_skin_placing__form_popup_field__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(THighlight_skin_placing__form_popup_field__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_skin_placing__form_popup_field__SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout xFind_pop_up_window_elements_Line_1()		{ return (*(TxFind_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xFind_pop_up_window_elements_Line_1)))(); }

inline TAknWindowLineLayout xFind_pop_up_window_elements_Line_2()		{ return (*(TxFind_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xFind_pop_up_window_elements_Line_2)))(); }

inline TAknWindowLineLayout xFind_pop_up_window_elements_Line_3()		{ return (*(TxFind_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xFind_pop_up_window_elements_Line_3)))(); }

inline TAknLayoutTableLimits xFind_pop_up_window_elements_Limits()		{ return (*(TxFind_pop_up_window_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xFind_pop_up_window_elements_Limits)))(); }

inline TAknWindowLineLayout xFind_pop_up_window_elements(TInt aLineIndex)		{ return (*(TxFind_pop_up_window_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_xFind_pop_up_window_elements)))(aLineIndex); }

inline TAknWindowLineLayout Input_field_skin_placing__general__Line_1()		{ return (*(TInput_field_skin_placing__general__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_field_skin_placing__general__Line_1)))(); }

inline TAknWindowLineLayout Input_field_skin_placing__general__Line_2()		{ return (*(TInput_field_skin_placing__general__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_field_skin_placing__general__Line_2)))(); }

inline TAknWindowLineLayout Input_field_skin_placing__general__Line_3()		{ return (*(TInput_field_skin_placing__general__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_field_skin_placing__general__Line_3)))(); }

inline TAknWindowLineLayout Input_field_skin_placing__general__Line_4()		{ return (*(TInput_field_skin_placing__general__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_field_skin_placing__general__Line_4)))(); }

inline TAknWindowLineLayout Input_field_skin_placing__general__Line_5()		{ return (*(TInput_field_skin_placing__general__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_field_skin_placing__general__Line_5)))(); }

inline TAknWindowLineLayout Input_field_skin_placing__general__Line_6()		{ return (*(TInput_field_skin_placing__general__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_field_skin_placing__general__Line_6)))(); }

inline TAknWindowLineLayout Input_field_skin_placing__general__Line_7()		{ return (*(TInput_field_skin_placing__general__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_field_skin_placing__general__Line_7)))(); }

inline TAknWindowLineLayout Input_field_skin_placing__general__Line_8()		{ return (*(TInput_field_skin_placing__general__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_field_skin_placing__general__Line_8)))(); }

inline TAknWindowLineLayout Input_field_skin_placing__general__Line_9()		{ return (*(TInput_field_skin_placing__general__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_field_skin_placing__general__Line_9)))(); }

inline TAknLayoutTableLimits Input_field_skin_placing__general__Limits()		{ return (*(TInput_field_skin_placing__general__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_field_skin_placing__general__Limits)))(); }

inline TAknWindowLineLayout Input_field_skin_placing__general_(TInt aLineIndex)		{ return (*(TInput_field_skin_placing__general__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_field_skin_placing__general_)))(aLineIndex); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_1()		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__background_highlight__Line_1)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_2()		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__background_highlight__Line_2)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_3()		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__background_highlight__Line_3)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_4()		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__background_highlight__Line_4)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_5()		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__background_highlight__Line_5)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_6()		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__background_highlight__Line_6)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_7()		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__background_highlight__Line_7)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_8()		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__background_highlight__Line_8)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_9()		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__background_highlight__Line_9)))(); }

inline TAknLayoutTableLimits Edited_settings_item_skin_placing__background_highlight__Limits()		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__background_highlight__Limits)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight_(TInt aLineIndex)		{ return (*(TEdited_settings_item_skin_placing__background_highlight__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__background_highlight_)))(aLineIndex); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_1(const TRect& aParentRect)		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_2()		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__Line_2)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_3()		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__Line_3)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_4()		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__Line_4)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_5()		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__Line_5)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_6()		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__Line_6)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_7()		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__Line_7)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_8(const TRect& aParentRect)		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__Line_8)))(aParentRect); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_9(const TRect& aParentRect)		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__Line_9)))(aParentRect); }

inline TAknLayoutTableLimits Edited_settings_item_skin_placing__value_background__SUB_TABLE_0_Limits()		{ return (*(TEdited_settings_item_skin_placing__value_background__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TEdited_settings_item_skin_placing__value_background__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Edited_settings_item_skin_placing__value_background__SUB_TABLE_1_Limits()		{ return (*(TEdited_settings_item_skin_placing__value_background__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TEdited_settings_item_skin_placing__value_background__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__value_background__SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_1(const TRect& aParentRect)		{ return (*(TEdited_settings_item_skin_placing__input__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_2()		{ return (*(TEdited_settings_item_skin_placing__input__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__Line_2)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_3()		{ return (*(TEdited_settings_item_skin_placing__input__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__Line_3)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_4()		{ return (*(TEdited_settings_item_skin_placing__input__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__Line_4)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_5()		{ return (*(TEdited_settings_item_skin_placing__input__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__Line_5)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_6()		{ return (*(TEdited_settings_item_skin_placing__input__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__Line_6)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_7()		{ return (*(TEdited_settings_item_skin_placing__input__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__Line_7)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_8(const TRect& aParentRect)		{ return (*(TEdited_settings_item_skin_placing__input__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__Line_8)))(aParentRect); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_9(const TRect& aParentRect)		{ return (*(TEdited_settings_item_skin_placing__input__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__Line_9)))(aParentRect); }

inline TAknLayoutTableLimits Edited_settings_item_skin_placing__input__SUB_TABLE_0_Limits()		{ return (*(TEdited_settings_item_skin_placing__input__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TEdited_settings_item_skin_placing__input__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Edited_settings_item_skin_placing__input__SUB_TABLE_1_Limits()		{ return (*(TEdited_settings_item_skin_placing__input__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TEdited_settings_item_skin_placing__input__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Edited_settings_item_skin_placing__input__SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout Setting_volume_skin_placing_Line_1()		{ return (*(TSetting_volume_skin_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_skin_placing_Line_1)))(); }

inline TAknWindowLineLayout Setting_volume_skin_placing_Line_2()		{ return (*(TSetting_volume_skin_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_skin_placing_Line_2)))(); }

inline TAknLayoutTableLimits Setting_volume_skin_placing_Limits()		{ return (*(TSetting_volume_skin_placing_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_skin_placing_Limits)))(); }

inline TAknWindowLineLayout Setting_volume_skin_placing(TInt aLineIndex)		{ return (*(TSetting_volume_skin_placing_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Setting_volume_skin_placing)))(aLineIndex); }

inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_1()		{ return (*(TSettings_volume_area_values_dup_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup_Line_1)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_2()		{ return (*(TSettings_volume_area_values_dup_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup_Line_2)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_3()		{ return (*(TSettings_volume_area_values_dup_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup_Line_3)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_4()		{ return (*(TSettings_volume_area_values_dup_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup_Line_4)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_5()		{ return (*(TSettings_volume_area_values_dup_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup_Line_5)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_6()		{ return (*(TSettings_volume_area_values_dup_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup_Line_6)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_7()		{ return (*(TSettings_volume_area_values_dup_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup_Line_7)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_8()		{ return (*(TSettings_volume_area_values_dup_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup_Line_8)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_9()		{ return (*(TSettings_volume_area_values_dup_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup_Line_9)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_10()		{ return (*(TSettings_volume_area_values_dup_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup_Line_10)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_11()		{ return (*(TSettings_volume_area_values_dup_Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup_Line_11)))(); }

inline TAknLayoutTableLimits Settings_volume_area_values_dup_Limits()		{ return (*(TSettings_volume_area_values_dup_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup_Limits)))(); }

inline TAknWindowLineLayout Settings_volume_area_values_dup(TInt aLineIndex)		{ return (*(TSettings_volume_area_values_dup_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Settings_volume_area_values_dup)))(aLineIndex); }

inline TAknWindowLineLayout Popup_windows_skin_placing__dimming__Line_1()		{ return (*(TPopup_windows_skin_placing__dimming__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__dimming__Line_1)))(); }

inline TAknWindowLineLayout Popup_windows_skin_placing__background_slice__Line_1(const TRect& aParentRect)		{ return (*(TPopup_windows_skin_placing__background_slice__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__background_slice__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Popup_windows_skin_placing__background_slice__Line_2()		{ return (*(TPopup_windows_skin_placing__background_slice__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__background_slice__Line_2)))(); }

inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_1(const TRect& aParentRect)		{ return (*(TPopup_windows_skin_placing__frame_general__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_2()		{ return (*(TPopup_windows_skin_placing__frame_general__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__Line_2)))(); }

inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_3()		{ return (*(TPopup_windows_skin_placing__frame_general__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__Line_3)))(); }

inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_4()		{ return (*(TPopup_windows_skin_placing__frame_general__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__Line_4)))(); }

inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_5()		{ return (*(TPopup_windows_skin_placing__frame_general__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__Line_5)))(); }

inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_6()		{ return (*(TPopup_windows_skin_placing__frame_general__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__Line_6)))(); }

inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_7()		{ return (*(TPopup_windows_skin_placing__frame_general__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__Line_7)))(); }

inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_8(const TRect& aParentRect)		{ return (*(TPopup_windows_skin_placing__frame_general__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__Line_8)))(aParentRect); }

inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_9(const TRect& aParentRect)		{ return (*(TPopup_windows_skin_placing__frame_general__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__Line_9)))(aParentRect); }

inline TAknLayoutTableLimits Popup_windows_skin_placing__frame_general__SUB_TABLE_0_Limits()		{ return (*(TPopup_windows_skin_placing__frame_general__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TPopup_windows_skin_placing__frame_general__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Popup_windows_skin_placing__frame_general__SUB_TABLE_1_Limits()		{ return (*(TPopup_windows_skin_placing__frame_general__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TPopup_windows_skin_placing__frame_general__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Popup_windows_skin_placing__frame_general__SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout Submenu_skin_placing_Line_1(const TRect& aParentRect)		{ return (*(TSubmenu_skin_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Submenu_skin_placing_Line_2()		{ return (*(TSubmenu_skin_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_Line_2)))(); }

inline TAknWindowLineLayout Submenu_skin_placing_Line_3()		{ return (*(TSubmenu_skin_placing_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_Line_3)))(); }

inline TAknWindowLineLayout Submenu_skin_placing_Line_4()		{ return (*(TSubmenu_skin_placing_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_Line_4)))(); }

inline TAknWindowLineLayout Submenu_skin_placing_Line_5()		{ return (*(TSubmenu_skin_placing_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_Line_5)))(); }

inline TAknWindowLineLayout Submenu_skin_placing_Line_6(const TRect& aParentRect)		{ return (*(TSubmenu_skin_placing_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_Line_6)))(aParentRect); }

inline TAknWindowLineLayout Submenu_skin_placing_Line_7(const TRect& aParentRect)		{ return (*(TSubmenu_skin_placing_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_Line_7)))(aParentRect); }

inline TAknWindowLineLayout Submenu_skin_placing_Line_8(const TRect& aParentRect)		{ return (*(TSubmenu_skin_placing_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_Line_8)))(aParentRect); }

inline TAknWindowLineLayout Submenu_skin_placing_Line_9(const TRect& aParentRect)		{ return (*(TSubmenu_skin_placing_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_Line_9)))(aParentRect); }

inline TAknLayoutTableLimits Submenu_skin_placing_SUB_TABLE_0_Limits()		{ return (*(TSubmenu_skin_placing_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Submenu_skin_placing_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TSubmenu_skin_placing_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Submenu_skin_placing_SUB_TABLE_1_Limits()		{ return (*(TSubmenu_skin_placing_SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Submenu_skin_placing_SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TSubmenu_skin_placing_SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Submenu_skin_placing_SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout Slice_skin_placing__fastapps__Line_1()		{ return (*(TSlice_skin_placing__fastapps__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slice_skin_placing__fastapps__Line_1)))(); }

inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_1(const TRect& aParentRect)		{ return (*(TFast_application_swapping_skin_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_2()		{ return (*(TFast_application_swapping_skin_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_Line_2)))(); }

inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_3()		{ return (*(TFast_application_swapping_skin_placing_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_Line_3)))(); }

inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_4()		{ return (*(TFast_application_swapping_skin_placing_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_Line_4)))(); }

inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_5()		{ return (*(TFast_application_swapping_skin_placing_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_Line_5)))(); }

inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_6()		{ return (*(TFast_application_swapping_skin_placing_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_Line_6)))(); }

inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_7()		{ return (*(TFast_application_swapping_skin_placing_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_Line_7)))(); }

inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_8(const TRect& aParentRect)		{ return (*(TFast_application_swapping_skin_placing_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_Line_8)))(aParentRect); }

inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_9(const TRect& aParentRect)		{ return (*(TFast_application_swapping_skin_placing_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_Line_9)))(aParentRect); }

inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_10(const TRect& aParentRect)		{ return (*(TFast_application_swapping_skin_placing_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_Line_10)))(aParentRect); }

inline TAknLayoutTableLimits Fast_application_swapping_skin_placing_SUB_TABLE_0_Limits()		{ return (*(TFast_application_swapping_skin_placing_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Fast_application_swapping_skin_placing_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TFast_application_swapping_skin_placing_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Fast_application_swapping_skin_placing_SUB_TABLE_1_Limits()		{ return (*(TFast_application_swapping_skin_placing_SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Fast_application_swapping_skin_placing_SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TFast_application_swapping_skin_placing_SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Fast_application_swapping_skin_placing_SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout wallpaper_pane()		{ return (*(Twallpaper_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_wallpaper_pane)))(); }

inline TAknWindowLineLayout Changes_to_existing_elements__idle_wallpaper__Line_2(const TRect& aParentRect, TInt aIndex_t, TInt aIndex_H)		{ return (*(TChanges_to_existing_elements__idle_wallpaper__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Changes_to_existing_elements__idle_wallpaper__Line_2)))(aParentRect, aIndex_t, aIndex_H); }

inline TAknWindowLineLayout Idle_clock_skin_placing___analogue__Line_1()		{ return (*(TIdle_clock_skin_placing___analogue__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_clock_skin_placing___analogue__Line_1)))(); }

inline TAknWindowLineLayout Idle_clock_skin_placing___analogue__Line_2()		{ return (*(TIdle_clock_skin_placing___analogue__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_clock_skin_placing___analogue__Line_2)))(); }

inline TAknWindowLineLayout Idle_clock_skin_placing___analogue__Line_3()		{ return (*(TIdle_clock_skin_placing___analogue__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_clock_skin_placing___analogue__Line_3)))(); }

inline TAknWindowLineLayout Idle_clock_skin_placing___analogue__Line_4()		{ return (*(TIdle_clock_skin_placing___analogue__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_clock_skin_placing___analogue__Line_4)))(); }

inline TAknWindowLineLayout Idle_clock_skin_placing___analogue__Line_5()		{ return (*(TIdle_clock_skin_placing___analogue__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_clock_skin_placing___analogue__Line_5)))(); }

inline TAknLayoutTableLimits Idle_clock_skin_placing___analogue__Limits()		{ return (*(TIdle_clock_skin_placing___analogue__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_clock_skin_placing___analogue__Limits)))(); }

inline TAknWindowLineLayout Idle_clock_skin_placing___analogue_(TInt aLineIndex)		{ return (*(TIdle_clock_skin_placing___analogue__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_clock_skin_placing___analogue_)))(aLineIndex); }

inline TAknWindowLineLayout Idle_clock_skin_placing___digital__Line_1(TInt aIndex_l)		{ return (*(TIdle_clock_skin_placing___digital__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_clock_skin_placing___digital__Line_1)))(aIndex_l); }

inline TAknWindowLineLayout Idle_clock_skin_placing___digital__Line_2(TInt aIndex_l)		{ return (*(TIdle_clock_skin_placing___digital__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_clock_skin_placing___digital__Line_2)))(aIndex_l); }

inline TAknWindowLineLayout Idle_clock_skin_placing___digital__Line_3(const TRect& aParentRect)		{ return (*(TIdle_clock_skin_placing___digital__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_clock_skin_placing___digital__Line_3)))(aParentRect); }

inline TAknLayoutTableLimits Idle_clock_skin_placing___digital__SUB_TABLE_0_Limits()		{ return (*(TIdle_clock_skin_placing___digital__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_clock_skin_placing___digital__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Idle_clock_skin_placing___digital__SUB_TABLE_0(TInt aLineIndex, TInt aIndex_l)		{ return (*(TIdle_clock_skin_placing___digital__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Idle_clock_skin_placing___digital__SUB_TABLE_0)))(aLineIndex, aIndex_l); }

inline TAknWindowLineLayout Power_save_state_skin_placing_Line_1()		{ return (*(TPower_save_state_skin_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Power_save_state_skin_placing_Line_1)))(); }

inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_1()		{ return (*(TCalendar_skin_elements__general__dup_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_skin_elements__general__dup_Line_1)))(); }

inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_2()		{ return (*(TCalendar_skin_elements__general__dup_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_skin_elements__general__dup_Line_2)))(); }

inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_3()		{ return (*(TCalendar_skin_elements__general__dup_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_skin_elements__general__dup_Line_3)))(); }

inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_4()		{ return (*(TCalendar_skin_elements__general__dup_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_skin_elements__general__dup_Line_4)))(); }

inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_5()		{ return (*(TCalendar_skin_elements__general__dup_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_skin_elements__general__dup_Line_5)))(); }

inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_6()		{ return (*(TCalendar_skin_elements__general__dup_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_skin_elements__general__dup_Line_6)))(); }

inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_7()		{ return (*(TCalendar_skin_elements__general__dup_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_skin_elements__general__dup_Line_7)))(); }

inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_8()		{ return (*(TCalendar_skin_elements__general__dup_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_skin_elements__general__dup_Line_8)))(); }

inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_9()		{ return (*(TCalendar_skin_elements__general__dup_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_skin_elements__general__dup_Line_9)))(); }

inline TAknLayoutTableLimits Calendar_skin_elements__general__dup_Limits()		{ return (*(TCalendar_skin_elements__general__dup_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_skin_elements__general__dup_Limits)))(); }

inline TAknWindowLineLayout Calendar_skin_elements__general__dup(TInt aLineIndex)		{ return (*(TCalendar_skin_elements__general__dup_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_skin_elements__general__dup)))(aLineIndex); }

inline TAknWindowLineLayout Slice_skin_placing__pinb__Line_1()		{ return (*(TSlice_skin_placing__pinb__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Slice_skin_placing__pinb__Line_1)))(); }

inline TAknWindowLineLayout Favorites_skin_placing_Line_1()		{ return (*(TFavorites_skin_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Favorites_skin_placing_Line_1)))(); }

inline TAknWindowLineLayout Favorites_skin_placing_Line_2()		{ return (*(TFavorites_skin_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Favorites_skin_placing_Line_2)))(); }

inline TAknWindowLineLayout Favorites_skin_placing_Line_3()		{ return (*(TFavorites_skin_placing_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Favorites_skin_placing_Line_3)))(); }

inline TAknWindowLineLayout Favorites_skin_placing_Line_4()		{ return (*(TFavorites_skin_placing_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Favorites_skin_placing_Line_4)))(); }

inline TAknWindowLineLayout Favorites_skin_placing_Line_5()		{ return (*(TFavorites_skin_placing_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Favorites_skin_placing_Line_5)))(); }

inline TAknWindowLineLayout Favorites_skin_placing_Line_6()		{ return (*(TFavorites_skin_placing_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Favorites_skin_placing_Line_6)))(); }

inline TAknWindowLineLayout Favorites_skin_placing_Line_7()		{ return (*(TFavorites_skin_placing_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Favorites_skin_placing_Line_7)))(); }

inline TAknWindowLineLayout Favorites_skin_placing_Line_8()		{ return (*(TFavorites_skin_placing_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Favorites_skin_placing_Line_8)))(); }

inline TAknWindowLineLayout Favorites_skin_placing_Line_9()		{ return (*(TFavorites_skin_placing_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Favorites_skin_placing_Line_9)))(); }

inline TAknWindowLineLayout Favorites_skin_placing_Line_10()		{ return (*(TFavorites_skin_placing_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Favorites_skin_placing_Line_10)))(); }

inline TAknLayoutTableLimits Favorites_skin_placing_Limits()		{ return (*(TFavorites_skin_placing_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Favorites_skin_placing_Limits)))(); }

inline TAknWindowLineLayout Favorites_skin_placing(TInt aLineIndex)		{ return (*(TFavorites_skin_placing_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Favorites_skin_placing)))(aLineIndex); }

inline TAknWindowLineLayout Screen_saver_skin_placing_Line_1()		{ return (*(TScreen_saver_skin_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Screen_saver_skin_placing_Line_1)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__Line_1(TInt aIndex_l, TInt aIndex_t)		{ return (*(TColour_palette_preview_screen_element_placing__main_area__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__Line_1)))(aIndex_l, aIndex_t); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_1()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_1)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_2()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_2)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_3()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_3)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_4()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_4)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_5()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_5)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_6()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_6)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_7()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_7)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_8()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_8)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_9()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_9)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_10()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_10)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_11()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_11)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_12()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_12_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_12)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_13()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_13_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_13)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_14()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_14_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_14)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_15()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_15_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_15)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_16()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_16_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_16)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_17()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_17_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_17)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_18()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_18_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_18)))(); }

inline TAknLayoutTableLimits Colour_palette_preview_screen_element_placing__main_area__dup_Limits()		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Limits)))(); }

inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup(TInt aLineIndex)		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colour_palette_preview_screen_element_placing__main_area__dup)))(aLineIndex); }

inline TAknWindowLineLayout Chinese_FEP_pop_up_window_lines_Line_1(TInt aPaneLayout)		{ return (*(TChinese_FEP_pop_up_window_lines_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_pop_up_window_lines_Line_1)))(aPaneLayout); }

inline TAknWindowLineLayout Chinese_FEP_pop_up_window_lines_Line_2()		{ return (*(TChinese_FEP_pop_up_window_lines_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_pop_up_window_lines_Line_2)))(); }

inline TAknWindowLineLayout Scaling_on_background_images__general__Line_1()		{ return (*(TScaling_on_background_images__general__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_background_images__general__Line_1)))(); }

inline TAknWindowLineLayout Scaling_on_status_area_background__general__Line_1(TInt aCommon1)		{ return (*(TScaling_on_status_area_background__general__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_status_area_background__general__Line_1)))(aCommon1); }

inline TAknWindowLineLayout Scaling_on_status_area_background__idle__Line_1(TInt aCommon1)		{ return (*(TScaling_on_status_area_background__idle__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_status_area_background__idle__Line_1)))(aCommon1); }

inline TAknWindowLineLayout Scaling_on_navi_pane_background_images_Line_1()		{ return (*(TScaling_on_navi_pane_background_images_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_navi_pane_background_images_Line_1)))(); }

inline TAknWindowLineLayout Scaling_on_tab_graphics_Line_1()		{ return (*(TScaling_on_tab_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_tab_graphics_Line_1)))(); }

inline TAknWindowLineLayout Scaling_on_setting_list_volume_skin_elements_Line_1(TInt aCommon1)		{ return (*(TScaling_on_setting_list_volume_skin_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_setting_list_volume_skin_elements_Line_1)))(aCommon1); }

inline TAknWindowLineLayout Scaling_on_setting_volume_skin_Line_1(TInt aCommon1)		{ return (*(TScaling_on_setting_volume_skin_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_setting_volume_skin_Line_1)))(aCommon1); }

inline TAknWindowLineLayout Scaling_on_setting_volume_skin_sizes_Line_1()		{ return (*(TScaling_on_setting_volume_skin_sizes_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_setting_volume_skin_sizes_Line_1)))(); }

inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__dimming__Line_1()		{ return (*(TScaling_on_pop_up_windows_skin_placing__dimming__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__dimming__Line_1)))(); }

inline TAknWindowLineLayout Scaling_on_ending_graphics_for_fast_application_swapping_window_Line_1()		{ return (*(TScaling_on_ending_graphics_for_fast_application_swapping_window_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_ending_graphics_for_fast_application_swapping_window_Line_1)))(); }

inline TAknWindowLineLayout Scaling_on_power_save_state_skin_element_size_Line_1()		{ return (*(TScaling_on_power_save_state_skin_element_size_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_power_save_state_skin_element_size_Line_1)))(); }

inline TAknWindowLineLayout Scaling_on_screensaver_skin_size_Line_1()		{ return (*(TScaling_on_screensaver_skin_size_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_screensaver_skin_size_Line_1)))(); }

inline TAknWindowLineLayout Notepad_skin_element_placing_Line_1()		{ return (*(TNotepad_skin_element_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notepad_skin_element_placing_Line_1)))(); }

inline TAknWindowLineLayout Notepad_skin_element_placing_Line_2()		{ return (*(TNotepad_skin_element_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notepad_skin_element_placing_Line_2)))(); }

inline TAknWindowLineLayout Notepad_skin_element_placing_Line_3()		{ return (*(TNotepad_skin_element_placing_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notepad_skin_element_placing_Line_3)))(); }

inline TAknWindowLineLayout Notepad_skin_element_placing_Line_4()		{ return (*(TNotepad_skin_element_placing_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notepad_skin_element_placing_Line_4)))(); }

inline TAknWindowLineLayout Notepad_skin_element_placing_Line_5()		{ return (*(TNotepad_skin_element_placing_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notepad_skin_element_placing_Line_5)))(); }

inline TAknWindowLineLayout Notepad_skin_element_placing_Line_6()		{ return (*(TNotepad_skin_element_placing_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notepad_skin_element_placing_Line_6)))(); }

inline TAknWindowLineLayout Notepad_skin_element_placing_Line_7()		{ return (*(TNotepad_skin_element_placing_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notepad_skin_element_placing_Line_7)))(); }

inline TAknWindowLineLayout Notepad_skin_element_placing_Line_8()		{ return (*(TNotepad_skin_element_placing_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notepad_skin_element_placing_Line_8)))(); }

inline TAknWindowLineLayout Notepad_skin_element_placing_Line_9()		{ return (*(TNotepad_skin_element_placing_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notepad_skin_element_placing_Line_9)))(); }

inline TAknLayoutTableLimits Notepad_skin_element_placing_Limits()		{ return (*(TNotepad_skin_element_placing_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notepad_skin_element_placing_Limits)))(); }

inline TAknWindowLineLayout Notepad_skin_element_placing(TInt aLineIndex)		{ return (*(TNotepad_skin_element_placing_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Notepad_skin_element_placing)))(aLineIndex); }

inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_1()		{ return (*(TCalculator_paper_skin_element_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_paper_skin_element_placing_Line_1)))(); }

inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_2()		{ return (*(TCalculator_paper_skin_element_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_paper_skin_element_placing_Line_2)))(); }

inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_3()		{ return (*(TCalculator_paper_skin_element_placing_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_paper_skin_element_placing_Line_3)))(); }

inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_4()		{ return (*(TCalculator_paper_skin_element_placing_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_paper_skin_element_placing_Line_4)))(); }

inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_5()		{ return (*(TCalculator_paper_skin_element_placing_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_paper_skin_element_placing_Line_5)))(); }

inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_6()		{ return (*(TCalculator_paper_skin_element_placing_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_paper_skin_element_placing_Line_6)))(); }

inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_7()		{ return (*(TCalculator_paper_skin_element_placing_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_paper_skin_element_placing_Line_7)))(); }

inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_8()		{ return (*(TCalculator_paper_skin_element_placing_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_paper_skin_element_placing_Line_8)))(); }

inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_9()		{ return (*(TCalculator_paper_skin_element_placing_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_paper_skin_element_placing_Line_9)))(); }

inline TAknLayoutTableLimits Calculator_paper_skin_element_placing_Limits()		{ return (*(TCalculator_paper_skin_element_placing_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_paper_skin_element_placing_Limits)))(); }

inline TAknWindowLineLayout Calculator_paper_skin_element_placing(TInt aLineIndex)		{ return (*(TCalculator_paper_skin_element_placing_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_paper_skin_element_placing)))(aLineIndex); }

inline TAknWindowLineLayout Calculator_glass_element_placing_Line_1()		{ return (*(TCalculator_glass_element_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_glass_element_placing_Line_1)))(); }

inline TAknWindowLineLayout Calculator_glass_element_placing_Line_2()		{ return (*(TCalculator_glass_element_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_glass_element_placing_Line_2)))(); }

inline TAknWindowLineLayout Calculator_glass_element_placing_Line_3()		{ return (*(TCalculator_glass_element_placing_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_glass_element_placing_Line_3)))(); }

inline TAknLayoutTableLimits Calculator_glass_element_placing_Limits()		{ return (*(TCalculator_glass_element_placing_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_glass_element_placing_Limits)))(); }

inline TAknWindowLineLayout Calculator_glass_element_placing(TInt aLineIndex)		{ return (*(TCalculator_glass_element_placing_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_glass_element_placing)))(aLineIndex); }

inline TAknWindowLineLayout Scalingon_background_images__general__Line_1()		{ return (*(TScalingon_background_images__general__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_background_images__general__Line_1)))(); }

inline TAknWindowLineLayout Scalingon_background_images__general__Line_2()		{ return (*(TScalingon_background_images__general__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_background_images__general__Line_2)))(); }

inline TAknLayoutTableLimits Scalingon_background_images__general__Limits()		{ return (*(TScalingon_background_images__general__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_background_images__general__Limits)))(); }

inline TAknWindowLineLayout Scalingon_background_images__general_(TInt aLineIndex)		{ return (*(TScalingon_background_images__general__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_background_images__general_)))(aLineIndex); }

inline TAknWindowLineLayout Scaling_on_status_area_background__general__Line_2(TInt aCommon1)		{ return (*(TScaling_on_status_area_background__general__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_status_area_background__general__Line_2)))(aCommon1); }

inline TAknLayoutTableLimits Scaling_on_status_area_background__general__Limits()		{ return (*(TScaling_on_status_area_background__general__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_status_area_background__general__Limits)))(); }

inline TAknWindowLineLayout Scaling_on_status_area_background__general_(TInt aLineIndex, TInt aCommon1)		{ return (*(TScaling_on_status_area_background__general__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_status_area_background__general_)))(aLineIndex, aCommon1); }

inline TAknWindowLineLayout Scaling_on_status_area_background__idle__Line_2(TInt aCommon1)		{ return (*(TScaling_on_status_area_background__idle__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_status_area_background__idle__Line_2)))(aCommon1); }

inline TAknLayoutTableLimits Scaling_on_status_area_background__idle__Limits()		{ return (*(TScaling_on_status_area_background__idle__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_status_area_background__idle__Limits)))(); }

inline TAknWindowLineLayout Scaling_on_status_area_background__idle_(TInt aLineIndex, TInt aCommon1)		{ return (*(TScaling_on_status_area_background__idle__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_status_area_background__idle_)))(aLineIndex, aCommon1); }

inline TAknWindowLineLayout Scalingon_navipane_background_images_Line_1()		{ return (*(TScalingon_navipane_background_images_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_navipane_background_images_Line_1)))(); }

inline TAknWindowLineLayout Scalingon_navipane_background_images_Line_2()		{ return (*(TScalingon_navipane_background_images_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_navipane_background_images_Line_2)))(); }

inline TAknLayoutTableLimits Scalingon_navipane_background_images_Limits()		{ return (*(TScalingon_navipane_background_images_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_navipane_background_images_Limits)))(); }

inline TAknWindowLineLayout Scalingon_navipane_background_images(TInt aLineIndex)		{ return (*(TScalingon_navipane_background_images_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_navipane_background_images)))(aLineIndex); }

inline TAknWindowLineLayout Scalingon_tab_graphics_Line_1()		{ return (*(TScalingon_tab_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_tab_graphics_Line_1)))(); }

inline TAknWindowLineLayout Scalingon_tab_graphics_Line_2()		{ return (*(TScalingon_tab_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_tab_graphics_Line_2)))(); }

inline TAknLayoutTableLimits Scalingon_tab_graphics_Limits()		{ return (*(TScalingon_tab_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_tab_graphics_Limits)))(); }

inline TAknWindowLineLayout Scalingon_tab_graphics(TInt aLineIndex)		{ return (*(TScalingon_tab_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_tab_graphics)))(aLineIndex); }

inline TAknWindowLineLayout Scalinon_volume_area_values_Line_1(TInt aIndex_l)		{ return (*(TScalinon_volume_area_values_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values_Line_1)))(aIndex_l); }

inline TAknWindowLineLayout Scalinon_volume_area_values_Line_2(TInt aIndex_l)		{ return (*(TScalinon_volume_area_values_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values_Line_2)))(aIndex_l); }

inline TAknWindowLineLayout Scalinon_volume_area_values_Line_3(TInt aIndex_l)		{ return (*(TScalinon_volume_area_values_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values_Line_3)))(aIndex_l); }

inline TAknWindowLineLayout Scalinon_volume_area_values_Line_4(TInt aIndex_l)		{ return (*(TScalinon_volume_area_values_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values_Line_4)))(aIndex_l); }

inline TAknWindowLineLayout Scalinon_volume_area_values_Line_5(TInt aIndex_l)		{ return (*(TScalinon_volume_area_values_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values_Line_5)))(aIndex_l); }

inline TAknWindowLineLayout Scalinon_volume_area_values_Line_6(TInt aIndex_l)		{ return (*(TScalinon_volume_area_values_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values_Line_6)))(aIndex_l); }

inline TAknWindowLineLayout Scalinon_volume_area_values_Line_7(TInt aIndex_l)		{ return (*(TScalinon_volume_area_values_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values_Line_7)))(aIndex_l); }

inline TAknWindowLineLayout Scalinon_volume_area_values_Line_8(TInt aIndex_l)		{ return (*(TScalinon_volume_area_values_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values_Line_8)))(aIndex_l); }

inline TAknWindowLineLayout Scalinon_volume_area_values_Line_9(TInt aIndex_l)		{ return (*(TScalinon_volume_area_values_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values_Line_9)))(aIndex_l); }

inline TAknWindowLineLayout Scalinon_volume_area_values_Line_10(TInt aIndex_l)		{ return (*(TScalinon_volume_area_values_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values_Line_10)))(aIndex_l); }

inline TAknWindowLineLayout Scalinon_volume_area_values_Line_11(TInt aIndex_l)		{ return (*(TScalinon_volume_area_values_Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values_Line_11)))(aIndex_l); }

inline TAknLayoutTableLimits Scalinon_volume_area_values_Limits()		{ return (*(TScalinon_volume_area_values_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values_Limits)))(); }

inline TAknWindowLineLayout Scalinon_volume_area_values(TInt aLineIndex, TInt aIndex_l)		{ return (*(TScalinon_volume_area_values_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalinon_volume_area_values)))(aLineIndex, aIndex_l); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_1()		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_1)))(); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_2()		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_2)))(); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_3()		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_3)))(); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_4()		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_4)))(); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_5()		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_5)))(); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_6()		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_6)))(); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_7()		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_7)))(); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_8()		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_8)))(); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_9()		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_9)))(); }

inline TAknLayoutTableLimits Scalingon_setting_list_item_skin_elements__value_background__Limits()		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_elements__value_background__Limits)))(); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background_(TInt aLineIndex)		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_elements__value_background_)))(aLineIndex); }

inline TAknWindowLineLayout Scalingon_setting_list_volume_skin_elements_Line_1(TInt aCommon1)		{ return (*(TScalingon_setting_list_volume_skin_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_volume_skin_elements_Line_1)))(aCommon1); }

inline TAknWindowLineLayout Scalingon_setting_list_volume_skin_elements_Line_2(TInt aCommon1)		{ return (*(TScalingon_setting_list_volume_skin_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_volume_skin_elements_Line_2)))(aCommon1); }

inline TAknLayoutTableLimits Scalingon_setting_list_volume_skin_elements_Limits()		{ return (*(TScalingon_setting_list_volume_skin_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_volume_skin_elements_Limits)))(); }

inline TAknWindowLineLayout Scalingon_setting_list_volume_skin_elements(TInt aLineIndex, TInt aCommon1)		{ return (*(TScalingon_setting_list_volume_skin_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_volume_skin_elements)))(aLineIndex, aCommon1); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_placing_Line_1()		{ return (*(TScalingon_setting_list_item_skin_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_placing_Line_1)))(); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_placing_Line_2()		{ return (*(TScalingon_setting_list_item_skin_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_placing_Line_2)))(); }

inline TAknLayoutTableLimits Scalingon_setting_list_item_skin_placing_Limits()		{ return (*(TScalingon_setting_list_item_skin_placing_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_placing_Limits)))(); }

inline TAknWindowLineLayout Scalingon_setting_list_item_skin_placing(TInt aLineIndex)		{ return (*(TScalingon_setting_list_item_skin_placing_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_list_item_skin_placing)))(aLineIndex); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_1(const TRect& aParentRect)		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_2()		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__Line_2)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_3()		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__Line_3)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_4()		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__Line_4)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_5()		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__Line_5)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_6()		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__Line_6)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_7()		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__Line_7)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_8(const TRect& aParentRect)		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__Line_8)))(aParentRect); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_9(const TRect& aParentRect)		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__Line_9)))(aParentRect); }

inline TAknLayoutTableLimits Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_0_Limits()		{ return (*(TScaling_on_list_highlight_skin_placing__general__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TScaling_on_list_highlight_skin_placing__general__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_1_Limits()		{ return (*(TScaling_on_list_highlight_skin_placing__general__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TScaling_on_list_highlight_skin_placing__general__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_1()		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_1)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_2()		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_2)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_3()		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_3)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_4()		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_4)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_5()		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_5)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_6()		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_6)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_7()		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_7)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_8()		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_8)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_9()		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_9)))(); }

inline TAknLayoutTableLimits Scaling_on_list_highlight_skin_placing__settings__Limits()		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__settings__Limits)))(); }

inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings_(TInt aLineIndex)		{ return (*(TScaling_on_list_highlight_skin_placing__settings__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_list_highlight_skin_placing__settings_)))(aLineIndex); }

inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_1()		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_1)))(); }

inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_2()		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_2)))(); }

inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_3()		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_3)))(); }

inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_4()		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_4)))(); }

inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_5()		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_5)))(); }

inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_6()		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_6)))(); }

inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_7()		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_7)))(); }

inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_8()		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_8)))(); }

inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_9()		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_9)))(); }

inline TAknLayoutTableLimits Scalingon_edited_settings_item_skin_placing__background_highlight__Limits()		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Limits)))(); }

inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight_(TInt aLineIndex)		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight_)))(aLineIndex); }

inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_1(const TRect& aParentRect)		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_2()		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_2)))(); }

inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_3()		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_3)))(); }

inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_4()		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_4)))(); }

inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_5(TInt aIndex_r)		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_5)))(aIndex_r); }

inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_6()		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_6)))(); }

inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_7()		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_7)))(); }

inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_8(const TRect& aParentRect)		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_8)))(aParentRect); }

inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_9(const TRect& aParentRect)		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_9)))(aParentRect); }

inline TAknLayoutTableLimits Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_0_Limits()		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_1_Limits()		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_1(TInt aLineIndex)		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_1)))(aLineIndex); }

inline TAknLayoutTableLimits Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_2_Limits()		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_2_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_2_Limits)))(); }

inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_2(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_2)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout Scalingon_setting_volume_skin_Line_1(TInt aCommon1)		{ return (*(TScalingon_setting_volume_skin_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_volume_skin_Line_1)))(aCommon1); }

inline TAknWindowLineLayout Scalingon_setting_volume_skin_Line_2(TInt aCommon1)		{ return (*(TScalingon_setting_volume_skin_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_volume_skin_Line_2)))(aCommon1); }

inline TAknLayoutTableLimits Scalingon_setting_volume_skin_Limits()		{ return (*(TScalingon_setting_volume_skin_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_volume_skin_Limits)))(); }

inline TAknWindowLineLayout Scalingon_setting_volume_skin(TInt aLineIndex, TInt aCommon1)		{ return (*(TScalingon_setting_volume_skin_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_setting_volume_skin)))(aLineIndex, aCommon1); }

inline TAknWindowLineLayout Scaling_on_setting_volume_skin_sizes_Line_2()		{ return (*(TScaling_on_setting_volume_skin_sizes_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_setting_volume_skin_sizes_Line_2)))(); }

inline TAknLayoutTableLimits Scaling_on_setting_volume_skin_sizes_Limits()		{ return (*(TScaling_on_setting_volume_skin_sizes_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_setting_volume_skin_sizes_Limits)))(); }

inline TAknWindowLineLayout Scaling_on_setting_volume_skin_sizes(TInt aLineIndex)		{ return (*(TScaling_on_setting_volume_skin_sizes_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_setting_volume_skin_sizes)))(aLineIndex); }

inline TAknWindowLineLayout Scalingon_pop_up_windows_skin_placing__dimming__Line_1()		{ return (*(TScalingon_pop_up_windows_skin_placing__dimming__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_pop_up_windows_skin_placing__dimming__Line_1)))(); }

inline TAknWindowLineLayout Scalingon_pop_up_windows_skin_placing__dimming__Line_2()		{ return (*(TScalingon_pop_up_windows_skin_placing__dimming__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_pop_up_windows_skin_placing__dimming__Line_2)))(); }

inline TAknLayoutTableLimits Scalingon_pop_up_windows_skin_placing__dimming__Limits()		{ return (*(TScalingon_pop_up_windows_skin_placing__dimming__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_pop_up_windows_skin_placing__dimming__Limits)))(); }

inline TAknWindowLineLayout Scalingon_pop_up_windows_skin_placing__dimming_(TInt aLineIndex)		{ return (*(TScalingon_pop_up_windows_skin_placing__dimming__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_pop_up_windows_skin_placing__dimming_)))(aLineIndex); }

inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_1(const TRect& aParentRect)		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_2()		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_2)))(); }

inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_3()		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_3)))(); }

inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_4()		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_4)))(); }

inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_5()		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_5)))(); }

inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_6()		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_6)))(); }

inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_7()		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_7)))(); }

inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_8(const TRect& aParentRect)		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_8)))(aParentRect); }

inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_9(const TRect& aParentRect)		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_9)))(aParentRect); }

inline TAknLayoutTableLimits Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_0_Limits()		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_1_Limits()		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_1)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout Scaling_on_ending_graphics_for_fast_application_swappingwindow_Line_1()		{ return (*(TScaling_on_ending_graphics_for_fast_application_swappingwindow_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_ending_graphics_for_fast_application_swappingwindow_Line_1)))(); }

inline TAknWindowLineLayout Scaling_on_ending_graphics_for_fast_application_swappingwindow_Line_2()		{ return (*(TScaling_on_ending_graphics_for_fast_application_swappingwindow_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_ending_graphics_for_fast_application_swappingwindow_Line_2)))(); }

inline TAknLayoutTableLimits Scaling_on_ending_graphics_for_fast_application_swappingwindow_Limits()		{ return (*(TScaling_on_ending_graphics_for_fast_application_swappingwindow_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_ending_graphics_for_fast_application_swappingwindow_Limits)))(); }

inline TAknWindowLineLayout Scaling_on_ending_graphics_for_fast_application_swappingwindow(TInt aLineIndex)		{ return (*(TScaling_on_ending_graphics_for_fast_application_swappingwindow_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_ending_graphics_for_fast_application_swappingwindow)))(aLineIndex); }

inline TAknWindowLineLayout Scaling_on_power_save_state_skin_element_size_Line_2()		{ return (*(TScaling_on_power_save_state_skin_element_size_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_power_save_state_skin_element_size_Line_2)))(); }

inline TAknLayoutTableLimits Scaling_on_power_save_state_skin_element_size_Limits()		{ return (*(TScaling_on_power_save_state_skin_element_size_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_power_save_state_skin_element_size_Limits)))(); }

inline TAknWindowLineLayout Scaling_on_power_save_state_skin_element_size(TInt aLineIndex)		{ return (*(TScaling_on_power_save_state_skin_element_size_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_power_save_state_skin_element_size)))(aLineIndex); }

inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_1()		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_1)))(); }

inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_2()		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_2)))(); }

inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_3()		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_3)))(); }

inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_4()		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_4)))(); }

inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_5()		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_5)))(); }

inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_6()		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_6)))(); }

inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_7()		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_7)))(); }

inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_8()		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_8)))(); }

inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_9()		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_9)))(); }

inline TAknLayoutTableLimits Scaling_on_calendar_skin_element_placing_and_size__dayweek__Limits()		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Limits)))(); }

inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek_(TInt aLineIndex)		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek_)))(aLineIndex); }

inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_1()		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_1)))(); }

inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_2()		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_2)))(); }

inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_3()		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_3)))(); }

inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_4()		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_4)))(); }

inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_5()		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_5)))(); }

inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_6()		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_6)))(); }

inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_7()		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_7)))(); }

inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_8()		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_8)))(); }

inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_9()		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_9)))(); }

inline TAknLayoutTableLimits Scalingon_calendar_skin_element_placing_and_size__month__Limits()		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Limits)))(); }

inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month_(TInt aLineIndex)		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scalingon_calendar_skin_element_placing_and_size__month_)))(aLineIndex); }

inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_1()		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_1)))(); }

inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_2()		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_2)))(); }

inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_3()		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_3)))(); }

inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_4()		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_4)))(); }

inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_5()		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_5)))(); }

inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_6()		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_6)))(); }

inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_7()		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_7)))(); }

inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_8()		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_8)))(); }

inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_9()		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_9)))(); }

inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_10()		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_10)))(); }

inline TAknLayoutTableLimits Scaling_on_favourites_skin_sizes_and_placing_Limits()		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_favourites_skin_sizes_and_placing_Limits)))(); }

inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing(TInt aLineIndex)		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Scaling_on_favourites_skin_sizes_and_placing)))(aLineIndex); }



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

// CDL API functions, as defined in skinlayout.cdl

	inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_1() const		{ return (*(TxInput_field_skin_placing__find_list__Line_1_sig*)(GetFunction(EApiId_xInput_field_skin_placing__find_list__Line_1)))(); }

	inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_2() const		{ return (*(TxInput_field_skin_placing__find_list__Line_2_sig*)(GetFunction(EApiId_xInput_field_skin_placing__find_list__Line_2)))(); }

	inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_3() const		{ return (*(TxInput_field_skin_placing__find_list__Line_3_sig*)(GetFunction(EApiId_xInput_field_skin_placing__find_list__Line_3)))(); }

	inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_4() const		{ return (*(TxInput_field_skin_placing__find_list__Line_4_sig*)(GetFunction(EApiId_xInput_field_skin_placing__find_list__Line_4)))(); }

	inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_5() const		{ return (*(TxInput_field_skin_placing__find_list__Line_5_sig*)(GetFunction(EApiId_xInput_field_skin_placing__find_list__Line_5)))(); }

	inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_6() const		{ return (*(TxInput_field_skin_placing__find_list__Line_6_sig*)(GetFunction(EApiId_xInput_field_skin_placing__find_list__Line_6)))(); }

	inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_7() const		{ return (*(TxInput_field_skin_placing__find_list__Line_7_sig*)(GetFunction(EApiId_xInput_field_skin_placing__find_list__Line_7)))(); }

	inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_8() const		{ return (*(TxInput_field_skin_placing__find_list__Line_8_sig*)(GetFunction(EApiId_xInput_field_skin_placing__find_list__Line_8)))(); }

	inline TAknWindowLineLayout xInput_field_skin_placing__find_list__Line_9() const		{ return (*(TxInput_field_skin_placing__find_list__Line_9_sig*)(GetFunction(EApiId_xInput_field_skin_placing__find_list__Line_9)))(); }

	inline TAknLayoutTableLimits xInput_field_skin_placing__find_list__Limits() const		{ return (*(TxInput_field_skin_placing__find_list__Limits_sig*)(GetFunction(EApiId_xInput_field_skin_placing__find_list__Limits)))(); }

	inline TAknWindowLineLayout xInput_field_skin_placing__find_list_(TInt aLineIndex) const		{ return (*(TxInput_field_skin_placing__find_list__sig*)(GetFunction(EApiId_xInput_field_skin_placing__find_list_)))(aLineIndex); }

	inline TAknWindowLineLayout Screen_background_skin_placing_Line_1() const		{ return (*(TScreen_background_skin_placing_Line_1_sig*)(GetFunction(EApiId_Screen_background_skin_placing_Line_1)))(); }

	inline TAknWindowLineLayout Area_background_skin_placing_Line_1() const		{ return (*(TArea_background_skin_placing_Line_1_sig*)(GetFunction(EApiId_Area_background_skin_placing_Line_1)))(); }

	inline TAknWindowLineLayout Area_background_skin_placing_Line_2(TInt aIndex_t, TInt aIndex_H) const		{ return (*(TArea_background_skin_placing_Line_2_sig*)(GetFunction(EApiId_Area_background_skin_placing_Line_2)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout Area_background_skin_placing_Line_3() const		{ return (*(TArea_background_skin_placing_Line_3_sig*)(GetFunction(EApiId_Area_background_skin_placing_Line_3)))(); }

	inline TAknWindowLineLayout Pane_background_skin_naming_Line_1() const		{ return (*(TPane_background_skin_naming_Line_1_sig*)(GetFunction(EApiId_Pane_background_skin_naming_Line_1)))(); }

	inline TAknWindowLineLayout Navi_pane_background_stripe_skin_placing_Line_1(TInt aCommon1) const		{ return (*(TNavi_pane_background_stripe_skin_placing_Line_1_sig*)(GetFunction(EApiId_Navi_pane_background_stripe_skin_placing_Line_1)))(aCommon1); }

	inline TAknWindowLineLayout Navi_pane_background_stripe_skin_placing_Line_2() const		{ return (*(TNavi_pane_background_stripe_skin_placing_Line_2_sig*)(GetFunction(EApiId_Navi_pane_background_stripe_skin_placing_Line_2)))(); }

	inline TAknWindowLineLayout Volume_level_skin_placing_Line_1(TInt aIndex_l) const		{ return (*(TVolume_level_skin_placing_Line_1_sig*)(GetFunction(EApiId_Volume_level_skin_placing_Line_1)))(aIndex_l); }

	inline TAknWindowLineLayout Volume_level_skin_placing_Line_2(TInt aIndex_l) const		{ return (*(TVolume_level_skin_placing_Line_2_sig*)(GetFunction(EApiId_Volume_level_skin_placing_Line_2)))(aIndex_l); }

	inline TAknLayoutTableLimits Volume_level_skin_placing_Limits() const		{ return (*(TVolume_level_skin_placing_Limits_sig*)(GetFunction(EApiId_Volume_level_skin_placing_Limits)))(); }

	inline TAknWindowLineLayout Volume_level_skin_placing(TInt aLineIndex, TInt aIndex_l) const		{ return (*(TVolume_level_skin_placing_sig*)(GetFunction(EApiId_Volume_level_skin_placing)))(aLineIndex, aIndex_l); }

	inline TAknWindowLineLayout Volume_area_values_Line_1(TInt aIndex_l) const		{ return (*(TVolume_area_values_Line_1_sig*)(GetFunction(EApiId_Volume_area_values_Line_1)))(aIndex_l); }

	inline TAknWindowLineLayout Volume_area_values_Line_2(TInt aIndex_l) const		{ return (*(TVolume_area_values_Line_2_sig*)(GetFunction(EApiId_Volume_area_values_Line_2)))(aIndex_l); }

	inline TAknWindowLineLayout Volume_area_values_Line_3(TInt aIndex_l) const		{ return (*(TVolume_area_values_Line_3_sig*)(GetFunction(EApiId_Volume_area_values_Line_3)))(aIndex_l); }

	inline TAknWindowLineLayout Volume_area_values_Line_4(TInt aIndex_l) const		{ return (*(TVolume_area_values_Line_4_sig*)(GetFunction(EApiId_Volume_area_values_Line_4)))(aIndex_l); }

	inline TAknWindowLineLayout Volume_area_values_Line_5(TInt aIndex_l) const		{ return (*(TVolume_area_values_Line_5_sig*)(GetFunction(EApiId_Volume_area_values_Line_5)))(aIndex_l); }

	inline TAknWindowLineLayout Volume_area_values_Line_6(TInt aIndex_l) const		{ return (*(TVolume_area_values_Line_6_sig*)(GetFunction(EApiId_Volume_area_values_Line_6)))(aIndex_l); }

	inline TAknWindowLineLayout Volume_area_values_Line_7(TInt aIndex_l) const		{ return (*(TVolume_area_values_Line_7_sig*)(GetFunction(EApiId_Volume_area_values_Line_7)))(aIndex_l); }

	inline TAknWindowLineLayout Volume_area_values_Line_8(TInt aIndex_l) const		{ return (*(TVolume_area_values_Line_8_sig*)(GetFunction(EApiId_Volume_area_values_Line_8)))(aIndex_l); }

	inline TAknWindowLineLayout Volume_area_values_Line_9(TInt aIndex_l) const		{ return (*(TVolume_area_values_Line_9_sig*)(GetFunction(EApiId_Volume_area_values_Line_9)))(aIndex_l); }

	inline TAknWindowLineLayout Volume_area_values_Line_10(TInt aIndex_l) const		{ return (*(TVolume_area_values_Line_10_sig*)(GetFunction(EApiId_Volume_area_values_Line_10)))(aIndex_l); }

	inline TAknWindowLineLayout Volume_area_values_Line_11(TInt aIndex_l) const		{ return (*(TVolume_area_values_Line_11_sig*)(GetFunction(EApiId_Volume_area_values_Line_11)))(aIndex_l); }

	inline TAknLayoutTableLimits Volume_area_values_Limits() const		{ return (*(TVolume_area_values_Limits_sig*)(GetFunction(EApiId_Volume_area_values_Limits)))(); }

	inline TAknWindowLineLayout Volume_area_values(TInt aLineIndex, TInt aIndex_l) const		{ return (*(TVolume_area_values_sig*)(GetFunction(EApiId_Volume_area_values)))(aLineIndex, aIndex_l); }

	inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_1() const		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_1_sig*)(GetFunction(EApiId_Column_background_and_list_slice_skin_placing_Line_1)))(); }

	inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_2() const		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_2_sig*)(GetFunction(EApiId_Column_background_and_list_slice_skin_placing_Line_2)))(); }

	inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_3() const		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_3_sig*)(GetFunction(EApiId_Column_background_and_list_slice_skin_placing_Line_3)))(); }

	inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_4() const		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_4_sig*)(GetFunction(EApiId_Column_background_and_list_slice_skin_placing_Line_4)))(); }

	inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_5() const		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_5_sig*)(GetFunction(EApiId_Column_background_and_list_slice_skin_placing_Line_5)))(); }

	inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_6() const		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_6_sig*)(GetFunction(EApiId_Column_background_and_list_slice_skin_placing_Line_6)))(); }

	inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing_Line_7() const		{ return (*(TColumn_background_and_list_slice_skin_placing_Line_7_sig*)(GetFunction(EApiId_Column_background_and_list_slice_skin_placing_Line_7)))(); }

	inline TAknLayoutTableLimits Column_background_and_list_slice_skin_placing_Limits() const		{ return (*(TColumn_background_and_list_slice_skin_placing_Limits_sig*)(GetFunction(EApiId_Column_background_and_list_slice_skin_placing_Limits)))(); }

	inline TAknWindowLineLayout Column_background_and_list_slice_skin_placing(TInt aLineIndex) const		{ return (*(TColumn_background_and_list_slice_skin_placing_sig*)(GetFunction(EApiId_Column_background_and_list_slice_skin_placing)))(aLineIndex); }

	inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_1() const		{ return (*(TSetting_list_item_skin_elements__value_background__Line_1_sig*)(GetFunction(EApiId_Setting_list_item_skin_elements__value_background__Line_1)))(); }

	inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_2() const		{ return (*(TSetting_list_item_skin_elements__value_background__Line_2_sig*)(GetFunction(EApiId_Setting_list_item_skin_elements__value_background__Line_2)))(); }

	inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_3() const		{ return (*(TSetting_list_item_skin_elements__value_background__Line_3_sig*)(GetFunction(EApiId_Setting_list_item_skin_elements__value_background__Line_3)))(); }

	inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_4() const		{ return (*(TSetting_list_item_skin_elements__value_background__Line_4_sig*)(GetFunction(EApiId_Setting_list_item_skin_elements__value_background__Line_4)))(); }

	inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_5() const		{ return (*(TSetting_list_item_skin_elements__value_background__Line_5_sig*)(GetFunction(EApiId_Setting_list_item_skin_elements__value_background__Line_5)))(); }

	inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_6() const		{ return (*(TSetting_list_item_skin_elements__value_background__Line_6_sig*)(GetFunction(EApiId_Setting_list_item_skin_elements__value_background__Line_6)))(); }

	inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_7() const		{ return (*(TSetting_list_item_skin_elements__value_background__Line_7_sig*)(GetFunction(EApiId_Setting_list_item_skin_elements__value_background__Line_7)))(); }

	inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_8() const		{ return (*(TSetting_list_item_skin_elements__value_background__Line_8_sig*)(GetFunction(EApiId_Setting_list_item_skin_elements__value_background__Line_8)))(); }

	inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background__Line_9() const		{ return (*(TSetting_list_item_skin_elements__value_background__Line_9_sig*)(GetFunction(EApiId_Setting_list_item_skin_elements__value_background__Line_9)))(); }

	inline TAknLayoutTableLimits Setting_list_item_skin_elements__value_background__Limits() const		{ return (*(TSetting_list_item_skin_elements__value_background__Limits_sig*)(GetFunction(EApiId_Setting_list_item_skin_elements__value_background__Limits)))(); }

	inline TAknWindowLineLayout Setting_list_item_skin_elements__value_background_(TInt aLineIndex) const		{ return (*(TSetting_list_item_skin_elements__value_background__sig*)(GetFunction(EApiId_Setting_list_item_skin_elements__value_background_)))(aLineIndex); }

	inline TAknWindowLineLayout Setting_list_item_skin_placing__volume__Line_1() const		{ return (*(TSetting_list_item_skin_placing__volume__Line_1_sig*)(GetFunction(EApiId_Setting_list_item_skin_placing__volume__Line_1)))(); }

	inline TAknWindowLineLayout Setting_list_item_skin_placing__volume__Line_2() const		{ return (*(TSetting_list_item_skin_placing__volume__Line_2_sig*)(GetFunction(EApiId_Setting_list_item_skin_placing__volume__Line_2)))(); }

	inline TAknLayoutTableLimits Setting_list_item_skin_placing__volume__Limits() const		{ return (*(TSetting_list_item_skin_placing__volume__Limits_sig*)(GetFunction(EApiId_Setting_list_item_skin_placing__volume__Limits)))(); }

	inline TAknWindowLineLayout Setting_list_item_skin_placing__volume_(TInt aLineIndex) const		{ return (*(TSetting_list_item_skin_placing__volume__sig*)(GetFunction(EApiId_Setting_list_item_skin_placing__volume_)))(aLineIndex); }

	inline TAknWindowLineLayout Settings_volume_area_values_Line_1() const		{ return (*(TSettings_volume_area_values_Line_1_sig*)(GetFunction(EApiId_Settings_volume_area_values_Line_1)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_Line_2() const		{ return (*(TSettings_volume_area_values_Line_2_sig*)(GetFunction(EApiId_Settings_volume_area_values_Line_2)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_Line_3() const		{ return (*(TSettings_volume_area_values_Line_3_sig*)(GetFunction(EApiId_Settings_volume_area_values_Line_3)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_Line_4() const		{ return (*(TSettings_volume_area_values_Line_4_sig*)(GetFunction(EApiId_Settings_volume_area_values_Line_4)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_Line_5() const		{ return (*(TSettings_volume_area_values_Line_5_sig*)(GetFunction(EApiId_Settings_volume_area_values_Line_5)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_Line_6() const		{ return (*(TSettings_volume_area_values_Line_6_sig*)(GetFunction(EApiId_Settings_volume_area_values_Line_6)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_Line_7() const		{ return (*(TSettings_volume_area_values_Line_7_sig*)(GetFunction(EApiId_Settings_volume_area_values_Line_7)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_Line_8() const		{ return (*(TSettings_volume_area_values_Line_8_sig*)(GetFunction(EApiId_Settings_volume_area_values_Line_8)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_Line_9() const		{ return (*(TSettings_volume_area_values_Line_9_sig*)(GetFunction(EApiId_Settings_volume_area_values_Line_9)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_Line_10() const		{ return (*(TSettings_volume_area_values_Line_10_sig*)(GetFunction(EApiId_Settings_volume_area_values_Line_10)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_Line_11() const		{ return (*(TSettings_volume_area_values_Line_11_sig*)(GetFunction(EApiId_Settings_volume_area_values_Line_11)))(); }

	inline TAknLayoutTableLimits Settings_volume_area_values_Limits() const		{ return (*(TSettings_volume_area_values_Limits_sig*)(GetFunction(EApiId_Settings_volume_area_values_Limits)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values(TInt aLineIndex) const		{ return (*(TSettings_volume_area_values_sig*)(GetFunction(EApiId_Settings_volume_area_values)))(aLineIndex); }

	inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_1(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__general__Line_1_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_2() const		{ return (*(TList_highlight_skin_placing__general__Line_2_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__Line_2)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_3() const		{ return (*(TList_highlight_skin_placing__general__Line_3_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__Line_3)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_4() const		{ return (*(TList_highlight_skin_placing__general__Line_4_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__Line_4)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_5() const		{ return (*(TList_highlight_skin_placing__general__Line_5_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__Line_5)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_6() const		{ return (*(TList_highlight_skin_placing__general__Line_6_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__Line_6)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_7() const		{ return (*(TList_highlight_skin_placing__general__Line_7_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__Line_7)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_8(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__general__Line_8_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__Line_8)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__general__Line_9(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__general__Line_9_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits List_highlight_skin_placing__general__SUB_TABLE_0_Limits() const		{ return (*(TList_highlight_skin_placing__general__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__general__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_highlight_skin_placing__general__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits List_highlight_skin_placing__general__SUB_TABLE_1_Limits() const		{ return (*(TList_highlight_skin_placing__general__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__general__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__general__SUB_TABLE_1_sig*)(GetFunction(EApiId_List_highlight_skin_placing__general__SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_1() const		{ return (*(TList_highlight_skin_placing__settings__Line_1_sig*)(GetFunction(EApiId_List_highlight_skin_placing__settings__Line_1)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_2() const		{ return (*(TList_highlight_skin_placing__settings__Line_2_sig*)(GetFunction(EApiId_List_highlight_skin_placing__settings__Line_2)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_3() const		{ return (*(TList_highlight_skin_placing__settings__Line_3_sig*)(GetFunction(EApiId_List_highlight_skin_placing__settings__Line_3)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_4() const		{ return (*(TList_highlight_skin_placing__settings__Line_4_sig*)(GetFunction(EApiId_List_highlight_skin_placing__settings__Line_4)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_5() const		{ return (*(TList_highlight_skin_placing__settings__Line_5_sig*)(GetFunction(EApiId_List_highlight_skin_placing__settings__Line_5)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_6() const		{ return (*(TList_highlight_skin_placing__settings__Line_6_sig*)(GetFunction(EApiId_List_highlight_skin_placing__settings__Line_6)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_7() const		{ return (*(TList_highlight_skin_placing__settings__Line_7_sig*)(GetFunction(EApiId_List_highlight_skin_placing__settings__Line_7)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_8() const		{ return (*(TList_highlight_skin_placing__settings__Line_8_sig*)(GetFunction(EApiId_List_highlight_skin_placing__settings__Line_8)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__settings__Line_9() const		{ return (*(TList_highlight_skin_placing__settings__Line_9_sig*)(GetFunction(EApiId_List_highlight_skin_placing__settings__Line_9)))(); }

	inline TAknLayoutTableLimits List_highlight_skin_placing__settings__Limits() const		{ return (*(TList_highlight_skin_placing__settings__Limits_sig*)(GetFunction(EApiId_List_highlight_skin_placing__settings__Limits)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__settings_(TInt aLineIndex) const		{ return (*(TList_highlight_skin_placing__settings__sig*)(GetFunction(EApiId_List_highlight_skin_placing__settings_)))(aLineIndex); }

	inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_1(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__apps_specific__Line_1_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_2() const		{ return (*(TList_highlight_skin_placing__apps_specific__Line_2_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__Line_2)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_3() const		{ return (*(TList_highlight_skin_placing__apps_specific__Line_3_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__Line_3)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_4() const		{ return (*(TList_highlight_skin_placing__apps_specific__Line_4_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__Line_4)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_5() const		{ return (*(TList_highlight_skin_placing__apps_specific__Line_5_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__Line_5)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_6(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__apps_specific__Line_6_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__Line_6)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_7(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__apps_specific__Line_7_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__Line_7)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_8(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__apps_specific__Line_8_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__Line_8)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__Line_9(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__apps_specific__Line_9_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits List_highlight_skin_placing__apps_specific__SUB_TABLE_0_Limits() const		{ return (*(TList_highlight_skin_placing__apps_specific__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_highlight_skin_placing__apps_specific__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits List_highlight_skin_placing__apps_specific__SUB_TABLE_1_Limits() const		{ return (*(TList_highlight_skin_placing__apps_specific__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__apps_specific__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__apps_specific__SUB_TABLE_1_sig*)(GetFunction(EApiId_List_highlight_skin_placing__apps_specific__SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_1(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__popup_specific__Line_1_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_2() const		{ return (*(TList_highlight_skin_placing__popup_specific__Line_2_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__Line_2)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_3() const		{ return (*(TList_highlight_skin_placing__popup_specific__Line_3_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__Line_3)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_4() const		{ return (*(TList_highlight_skin_placing__popup_specific__Line_4_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__Line_4)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_5() const		{ return (*(TList_highlight_skin_placing__popup_specific__Line_5_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__Line_5)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_6(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__popup_specific__Line_6_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__Line_6)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_7(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__popup_specific__Line_7_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__Line_7)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_8(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__popup_specific__Line_8_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__Line_8)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__Line_9(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__popup_specific__Line_9_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits List_highlight_skin_placing__popup_specific__SUB_TABLE_0_Limits() const		{ return (*(TList_highlight_skin_placing__popup_specific__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_highlight_skin_placing__popup_specific__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits List_highlight_skin_placing__popup_specific__SUB_TABLE_1_Limits() const		{ return (*(TList_highlight_skin_placing__popup_specific__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_specific__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__popup_specific__SUB_TABLE_1_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_specific__SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_1(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__popup_windows__Line_1_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_2() const		{ return (*(TList_highlight_skin_placing__popup_windows__Line_2_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__Line_2)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_3() const		{ return (*(TList_highlight_skin_placing__popup_windows__Line_3_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__Line_3)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_4() const		{ return (*(TList_highlight_skin_placing__popup_windows__Line_4_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__Line_4)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_5() const		{ return (*(TList_highlight_skin_placing__popup_windows__Line_5_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__Line_5)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_6(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__popup_windows__Line_6_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__Line_6)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_7(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__popup_windows__Line_7_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__Line_7)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_8(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__popup_windows__Line_8_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__Line_8)))(aParentRect); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__Line_9(const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__popup_windows__Line_9_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits List_highlight_skin_placing__popup_windows__SUB_TABLE_0_Limits() const		{ return (*(TList_highlight_skin_placing__popup_windows__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_highlight_skin_placing__popup_windows__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits List_highlight_skin_placing__popup_windows__SUB_TABLE_1_Limits() const		{ return (*(TList_highlight_skin_placing__popup_windows__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout List_highlight_skin_placing__popup_windows__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TList_highlight_skin_placing__popup_windows__SUB_TABLE_1_sig*)(GetFunction(EApiId_List_highlight_skin_placing__popup_windows__SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_1(const TRect& aParentRect) const		{ return (*(THighlight_skin_placing__grid__Line_1_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_2() const		{ return (*(THighlight_skin_placing__grid__Line_2_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__Line_2)))(); }

	inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_3() const		{ return (*(THighlight_skin_placing__grid__Line_3_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__Line_3)))(); }

	inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_4() const		{ return (*(THighlight_skin_placing__grid__Line_4_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__Line_4)))(); }

	inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_5() const		{ return (*(THighlight_skin_placing__grid__Line_5_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__Line_5)))(); }

	inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_6(const TRect& aParentRect) const		{ return (*(THighlight_skin_placing__grid__Line_6_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__Line_6)))(aParentRect); }

	inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_7(const TRect& aParentRect) const		{ return (*(THighlight_skin_placing__grid__Line_7_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__Line_7)))(aParentRect); }

	inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_8(const TRect& aParentRect) const		{ return (*(THighlight_skin_placing__grid__Line_8_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__Line_8)))(aParentRect); }

	inline TAknWindowLineLayout Highlight_skin_placing__grid__Line_9(const TRect& aParentRect) const		{ return (*(THighlight_skin_placing__grid__Line_9_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits Highlight_skin_placing__grid__SUB_TABLE_0_Limits() const		{ return (*(THighlight_skin_placing__grid__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Highlight_skin_placing__grid__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(THighlight_skin_placing__grid__SUB_TABLE_0_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Highlight_skin_placing__grid__SUB_TABLE_1_Limits() const		{ return (*(THighlight_skin_placing__grid__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Highlight_skin_placing__grid__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(THighlight_skin_placing__grid__SUB_TABLE_1_sig*)(GetFunction(EApiId_Highlight_skin_placing__grid__SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_1(const TRect& aParentRect) const		{ return (*(THighlight_skin_placing__form_popup_field__Line_1_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_2() const		{ return (*(THighlight_skin_placing__form_popup_field__Line_2_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__Line_2)))(); }

	inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_3() const		{ return (*(THighlight_skin_placing__form_popup_field__Line_3_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__Line_3)))(); }

	inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_4() const		{ return (*(THighlight_skin_placing__form_popup_field__Line_4_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__Line_4)))(); }

	inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_5() const		{ return (*(THighlight_skin_placing__form_popup_field__Line_5_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__Line_5)))(); }

	inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_6(const TRect& aParentRect) const		{ return (*(THighlight_skin_placing__form_popup_field__Line_6_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__Line_6)))(aParentRect); }

	inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_7(const TRect& aParentRect) const		{ return (*(THighlight_skin_placing__form_popup_field__Line_7_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__Line_7)))(aParentRect); }

	inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_8(const TRect& aParentRect) const		{ return (*(THighlight_skin_placing__form_popup_field__Line_8_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__Line_8)))(aParentRect); }

	inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__Line_9(const TRect& aParentRect) const		{ return (*(THighlight_skin_placing__form_popup_field__Line_9_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits Highlight_skin_placing__form_popup_field__SUB_TABLE_0_Limits() const		{ return (*(THighlight_skin_placing__form_popup_field__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(THighlight_skin_placing__form_popup_field__SUB_TABLE_0_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Highlight_skin_placing__form_popup_field__SUB_TABLE_1_Limits() const		{ return (*(THighlight_skin_placing__form_popup_field__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Highlight_skin_placing__form_popup_field__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(THighlight_skin_placing__form_popup_field__SUB_TABLE_1_sig*)(GetFunction(EApiId_Highlight_skin_placing__form_popup_field__SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout xFind_pop_up_window_elements_Line_1() const		{ return (*(TxFind_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_xFind_pop_up_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout xFind_pop_up_window_elements_Line_2() const		{ return (*(TxFind_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_xFind_pop_up_window_elements_Line_2)))(); }

	inline TAknWindowLineLayout xFind_pop_up_window_elements_Line_3() const		{ return (*(TxFind_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_xFind_pop_up_window_elements_Line_3)))(); }

	inline TAknLayoutTableLimits xFind_pop_up_window_elements_Limits() const		{ return (*(TxFind_pop_up_window_elements_Limits_sig*)(GetFunction(EApiId_xFind_pop_up_window_elements_Limits)))(); }

	inline TAknWindowLineLayout xFind_pop_up_window_elements(TInt aLineIndex) const		{ return (*(TxFind_pop_up_window_elements_sig*)(GetFunction(EApiId_xFind_pop_up_window_elements)))(aLineIndex); }

	inline TAknWindowLineLayout Input_field_skin_placing__general__Line_1() const		{ return (*(TInput_field_skin_placing__general__Line_1_sig*)(GetFunction(EApiId_Input_field_skin_placing__general__Line_1)))(); }

	inline TAknWindowLineLayout Input_field_skin_placing__general__Line_2() const		{ return (*(TInput_field_skin_placing__general__Line_2_sig*)(GetFunction(EApiId_Input_field_skin_placing__general__Line_2)))(); }

	inline TAknWindowLineLayout Input_field_skin_placing__general__Line_3() const		{ return (*(TInput_field_skin_placing__general__Line_3_sig*)(GetFunction(EApiId_Input_field_skin_placing__general__Line_3)))(); }

	inline TAknWindowLineLayout Input_field_skin_placing__general__Line_4() const		{ return (*(TInput_field_skin_placing__general__Line_4_sig*)(GetFunction(EApiId_Input_field_skin_placing__general__Line_4)))(); }

	inline TAknWindowLineLayout Input_field_skin_placing__general__Line_5() const		{ return (*(TInput_field_skin_placing__general__Line_5_sig*)(GetFunction(EApiId_Input_field_skin_placing__general__Line_5)))(); }

	inline TAknWindowLineLayout Input_field_skin_placing__general__Line_6() const		{ return (*(TInput_field_skin_placing__general__Line_6_sig*)(GetFunction(EApiId_Input_field_skin_placing__general__Line_6)))(); }

	inline TAknWindowLineLayout Input_field_skin_placing__general__Line_7() const		{ return (*(TInput_field_skin_placing__general__Line_7_sig*)(GetFunction(EApiId_Input_field_skin_placing__general__Line_7)))(); }

	inline TAknWindowLineLayout Input_field_skin_placing__general__Line_8() const		{ return (*(TInput_field_skin_placing__general__Line_8_sig*)(GetFunction(EApiId_Input_field_skin_placing__general__Line_8)))(); }

	inline TAknWindowLineLayout Input_field_skin_placing__general__Line_9() const		{ return (*(TInput_field_skin_placing__general__Line_9_sig*)(GetFunction(EApiId_Input_field_skin_placing__general__Line_9)))(); }

	inline TAknLayoutTableLimits Input_field_skin_placing__general__Limits() const		{ return (*(TInput_field_skin_placing__general__Limits_sig*)(GetFunction(EApiId_Input_field_skin_placing__general__Limits)))(); }

	inline TAknWindowLineLayout Input_field_skin_placing__general_(TInt aLineIndex) const		{ return (*(TInput_field_skin_placing__general__sig*)(GetFunction(EApiId_Input_field_skin_placing__general_)))(aLineIndex); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_1() const		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_1_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__background_highlight__Line_1)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_2() const		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_2_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__background_highlight__Line_2)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_3() const		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_3_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__background_highlight__Line_3)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_4() const		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_4_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__background_highlight__Line_4)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_5() const		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_5_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__background_highlight__Line_5)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_6() const		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_6_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__background_highlight__Line_6)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_7() const		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_7_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__background_highlight__Line_7)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_8() const		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_8_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__background_highlight__Line_8)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight__Line_9() const		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Line_9_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__background_highlight__Line_9)))(); }

	inline TAknLayoutTableLimits Edited_settings_item_skin_placing__background_highlight__Limits() const		{ return (*(TEdited_settings_item_skin_placing__background_highlight__Limits_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__background_highlight__Limits)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__background_highlight_(TInt aLineIndex) const		{ return (*(TEdited_settings_item_skin_placing__background_highlight__sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__background_highlight_)))(aLineIndex); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_1(const TRect& aParentRect) const		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_1_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_2() const		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_2_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__Line_2)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_3() const		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_3_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__Line_3)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_4() const		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_4_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__Line_4)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_5() const		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_5_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__Line_5)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_6() const		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_6_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__Line_6)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_7() const		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_7_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__Line_7)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_8(const TRect& aParentRect) const		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_8_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__Line_8)))(aParentRect); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__Line_9(const TRect& aParentRect) const		{ return (*(TEdited_settings_item_skin_placing__value_background__Line_9_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits Edited_settings_item_skin_placing__value_background__SUB_TABLE_0_Limits() const		{ return (*(TEdited_settings_item_skin_placing__value_background__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TEdited_settings_item_skin_placing__value_background__SUB_TABLE_0_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Edited_settings_item_skin_placing__value_background__SUB_TABLE_1_Limits() const		{ return (*(TEdited_settings_item_skin_placing__value_background__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__value_background__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TEdited_settings_item_skin_placing__value_background__SUB_TABLE_1_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__value_background__SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_1(const TRect& aParentRect) const		{ return (*(TEdited_settings_item_skin_placing__input__Line_1_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_2() const		{ return (*(TEdited_settings_item_skin_placing__input__Line_2_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__Line_2)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_3() const		{ return (*(TEdited_settings_item_skin_placing__input__Line_3_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__Line_3)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_4() const		{ return (*(TEdited_settings_item_skin_placing__input__Line_4_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__Line_4)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_5() const		{ return (*(TEdited_settings_item_skin_placing__input__Line_5_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__Line_5)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_6() const		{ return (*(TEdited_settings_item_skin_placing__input__Line_6_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__Line_6)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_7() const		{ return (*(TEdited_settings_item_skin_placing__input__Line_7_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__Line_7)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_8(const TRect& aParentRect) const		{ return (*(TEdited_settings_item_skin_placing__input__Line_8_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__Line_8)))(aParentRect); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__Line_9(const TRect& aParentRect) const		{ return (*(TEdited_settings_item_skin_placing__input__Line_9_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits Edited_settings_item_skin_placing__input__SUB_TABLE_0_Limits() const		{ return (*(TEdited_settings_item_skin_placing__input__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TEdited_settings_item_skin_placing__input__SUB_TABLE_0_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Edited_settings_item_skin_placing__input__SUB_TABLE_1_Limits() const		{ return (*(TEdited_settings_item_skin_placing__input__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Edited_settings_item_skin_placing__input__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TEdited_settings_item_skin_placing__input__SUB_TABLE_1_sig*)(GetFunction(EApiId_Edited_settings_item_skin_placing__input__SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout Setting_volume_skin_placing_Line_1() const		{ return (*(TSetting_volume_skin_placing_Line_1_sig*)(GetFunction(EApiId_Setting_volume_skin_placing_Line_1)))(); }

	inline TAknWindowLineLayout Setting_volume_skin_placing_Line_2() const		{ return (*(TSetting_volume_skin_placing_Line_2_sig*)(GetFunction(EApiId_Setting_volume_skin_placing_Line_2)))(); }

	inline TAknLayoutTableLimits Setting_volume_skin_placing_Limits() const		{ return (*(TSetting_volume_skin_placing_Limits_sig*)(GetFunction(EApiId_Setting_volume_skin_placing_Limits)))(); }

	inline TAknWindowLineLayout Setting_volume_skin_placing(TInt aLineIndex) const		{ return (*(TSetting_volume_skin_placing_sig*)(GetFunction(EApiId_Setting_volume_skin_placing)))(aLineIndex); }

	inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_1() const		{ return (*(TSettings_volume_area_values_dup_Line_1_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup_Line_1)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_2() const		{ return (*(TSettings_volume_area_values_dup_Line_2_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup_Line_2)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_3() const		{ return (*(TSettings_volume_area_values_dup_Line_3_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup_Line_3)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_4() const		{ return (*(TSettings_volume_area_values_dup_Line_4_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup_Line_4)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_5() const		{ return (*(TSettings_volume_area_values_dup_Line_5_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup_Line_5)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_6() const		{ return (*(TSettings_volume_area_values_dup_Line_6_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup_Line_6)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_7() const		{ return (*(TSettings_volume_area_values_dup_Line_7_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup_Line_7)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_8() const		{ return (*(TSettings_volume_area_values_dup_Line_8_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup_Line_8)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_9() const		{ return (*(TSettings_volume_area_values_dup_Line_9_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup_Line_9)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_10() const		{ return (*(TSettings_volume_area_values_dup_Line_10_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup_Line_10)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_dup_Line_11() const		{ return (*(TSettings_volume_area_values_dup_Line_11_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup_Line_11)))(); }

	inline TAknLayoutTableLimits Settings_volume_area_values_dup_Limits() const		{ return (*(TSettings_volume_area_values_dup_Limits_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup_Limits)))(); }

	inline TAknWindowLineLayout Settings_volume_area_values_dup(TInt aLineIndex) const		{ return (*(TSettings_volume_area_values_dup_sig*)(GetFunction(EApiId_Settings_volume_area_values_dup)))(aLineIndex); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__dimming__Line_1() const		{ return (*(TPopup_windows_skin_placing__dimming__Line_1_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__dimming__Line_1)))(); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__background_slice__Line_1(const TRect& aParentRect) const		{ return (*(TPopup_windows_skin_placing__background_slice__Line_1_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__background_slice__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__background_slice__Line_2() const		{ return (*(TPopup_windows_skin_placing__background_slice__Line_2_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__background_slice__Line_2)))(); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_1(const TRect& aParentRect) const		{ return (*(TPopup_windows_skin_placing__frame_general__Line_1_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_2() const		{ return (*(TPopup_windows_skin_placing__frame_general__Line_2_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__Line_2)))(); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_3() const		{ return (*(TPopup_windows_skin_placing__frame_general__Line_3_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__Line_3)))(); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_4() const		{ return (*(TPopup_windows_skin_placing__frame_general__Line_4_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__Line_4)))(); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_5() const		{ return (*(TPopup_windows_skin_placing__frame_general__Line_5_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__Line_5)))(); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_6() const		{ return (*(TPopup_windows_skin_placing__frame_general__Line_6_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__Line_6)))(); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_7() const		{ return (*(TPopup_windows_skin_placing__frame_general__Line_7_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__Line_7)))(); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_8(const TRect& aParentRect) const		{ return (*(TPopup_windows_skin_placing__frame_general__Line_8_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__Line_8)))(aParentRect); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__Line_9(const TRect& aParentRect) const		{ return (*(TPopup_windows_skin_placing__frame_general__Line_9_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits Popup_windows_skin_placing__frame_general__SUB_TABLE_0_Limits() const		{ return (*(TPopup_windows_skin_placing__frame_general__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TPopup_windows_skin_placing__frame_general__SUB_TABLE_0_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Popup_windows_skin_placing__frame_general__SUB_TABLE_1_Limits() const		{ return (*(TPopup_windows_skin_placing__frame_general__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Popup_windows_skin_placing__frame_general__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TPopup_windows_skin_placing__frame_general__SUB_TABLE_1_sig*)(GetFunction(EApiId_Popup_windows_skin_placing__frame_general__SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout Submenu_skin_placing_Line_1(const TRect& aParentRect) const		{ return (*(TSubmenu_skin_placing_Line_1_sig*)(GetFunction(EApiId_Submenu_skin_placing_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Submenu_skin_placing_Line_2() const		{ return (*(TSubmenu_skin_placing_Line_2_sig*)(GetFunction(EApiId_Submenu_skin_placing_Line_2)))(); }

	inline TAknWindowLineLayout Submenu_skin_placing_Line_3() const		{ return (*(TSubmenu_skin_placing_Line_3_sig*)(GetFunction(EApiId_Submenu_skin_placing_Line_3)))(); }

	inline TAknWindowLineLayout Submenu_skin_placing_Line_4() const		{ return (*(TSubmenu_skin_placing_Line_4_sig*)(GetFunction(EApiId_Submenu_skin_placing_Line_4)))(); }

	inline TAknWindowLineLayout Submenu_skin_placing_Line_5() const		{ return (*(TSubmenu_skin_placing_Line_5_sig*)(GetFunction(EApiId_Submenu_skin_placing_Line_5)))(); }

	inline TAknWindowLineLayout Submenu_skin_placing_Line_6(const TRect& aParentRect) const		{ return (*(TSubmenu_skin_placing_Line_6_sig*)(GetFunction(EApiId_Submenu_skin_placing_Line_6)))(aParentRect); }

	inline TAknWindowLineLayout Submenu_skin_placing_Line_7(const TRect& aParentRect) const		{ return (*(TSubmenu_skin_placing_Line_7_sig*)(GetFunction(EApiId_Submenu_skin_placing_Line_7)))(aParentRect); }

	inline TAknWindowLineLayout Submenu_skin_placing_Line_8(const TRect& aParentRect) const		{ return (*(TSubmenu_skin_placing_Line_8_sig*)(GetFunction(EApiId_Submenu_skin_placing_Line_8)))(aParentRect); }

	inline TAknWindowLineLayout Submenu_skin_placing_Line_9(const TRect& aParentRect) const		{ return (*(TSubmenu_skin_placing_Line_9_sig*)(GetFunction(EApiId_Submenu_skin_placing_Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits Submenu_skin_placing_SUB_TABLE_0_Limits() const		{ return (*(TSubmenu_skin_placing_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Submenu_skin_placing_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Submenu_skin_placing_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TSubmenu_skin_placing_SUB_TABLE_0_sig*)(GetFunction(EApiId_Submenu_skin_placing_SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Submenu_skin_placing_SUB_TABLE_1_Limits() const		{ return (*(TSubmenu_skin_placing_SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Submenu_skin_placing_SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Submenu_skin_placing_SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TSubmenu_skin_placing_SUB_TABLE_1_sig*)(GetFunction(EApiId_Submenu_skin_placing_SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout Slice_skin_placing__fastapps__Line_1() const		{ return (*(TSlice_skin_placing__fastapps__Line_1_sig*)(GetFunction(EApiId_Slice_skin_placing__fastapps__Line_1)))(); }

	inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_1(const TRect& aParentRect) const		{ return (*(TFast_application_swapping_skin_placing_Line_1_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_2() const		{ return (*(TFast_application_swapping_skin_placing_Line_2_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_Line_2)))(); }

	inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_3() const		{ return (*(TFast_application_swapping_skin_placing_Line_3_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_Line_3)))(); }

	inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_4() const		{ return (*(TFast_application_swapping_skin_placing_Line_4_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_Line_4)))(); }

	inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_5() const		{ return (*(TFast_application_swapping_skin_placing_Line_5_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_Line_5)))(); }

	inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_6() const		{ return (*(TFast_application_swapping_skin_placing_Line_6_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_Line_6)))(); }

	inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_7() const		{ return (*(TFast_application_swapping_skin_placing_Line_7_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_Line_7)))(); }

	inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_8(const TRect& aParentRect) const		{ return (*(TFast_application_swapping_skin_placing_Line_8_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_Line_8)))(aParentRect); }

	inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_9(const TRect& aParentRect) const		{ return (*(TFast_application_swapping_skin_placing_Line_9_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_Line_9)))(aParentRect); }

	inline TAknWindowLineLayout Fast_application_swapping_skin_placing_Line_10(const TRect& aParentRect) const		{ return (*(TFast_application_swapping_skin_placing_Line_10_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_Line_10)))(aParentRect); }

	inline TAknLayoutTableLimits Fast_application_swapping_skin_placing_SUB_TABLE_0_Limits() const		{ return (*(TFast_application_swapping_skin_placing_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Fast_application_swapping_skin_placing_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TFast_application_swapping_skin_placing_SUB_TABLE_0_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Fast_application_swapping_skin_placing_SUB_TABLE_1_Limits() const		{ return (*(TFast_application_swapping_skin_placing_SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Fast_application_swapping_skin_placing_SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TFast_application_swapping_skin_placing_SUB_TABLE_1_sig*)(GetFunction(EApiId_Fast_application_swapping_skin_placing_SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout wallpaper_pane() const		{ return (*(Twallpaper_pane_sig*)(GetFunction(EApiId_wallpaper_pane)))(); }

	inline TAknWindowLineLayout Changes_to_existing_elements__idle_wallpaper__Line_2(const TRect& aParentRect, TInt aIndex_t, TInt aIndex_H) const		{ return (*(TChanges_to_existing_elements__idle_wallpaper__Line_2_sig*)(GetFunction(EApiId_Changes_to_existing_elements__idle_wallpaper__Line_2)))(aParentRect, aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout Idle_clock_skin_placing___analogue__Line_1() const		{ return (*(TIdle_clock_skin_placing___analogue__Line_1_sig*)(GetFunction(EApiId_Idle_clock_skin_placing___analogue__Line_1)))(); }

	inline TAknWindowLineLayout Idle_clock_skin_placing___analogue__Line_2() const		{ return (*(TIdle_clock_skin_placing___analogue__Line_2_sig*)(GetFunction(EApiId_Idle_clock_skin_placing___analogue__Line_2)))(); }

	inline TAknWindowLineLayout Idle_clock_skin_placing___analogue__Line_3() const		{ return (*(TIdle_clock_skin_placing___analogue__Line_3_sig*)(GetFunction(EApiId_Idle_clock_skin_placing___analogue__Line_3)))(); }

	inline TAknWindowLineLayout Idle_clock_skin_placing___analogue__Line_4() const		{ return (*(TIdle_clock_skin_placing___analogue__Line_4_sig*)(GetFunction(EApiId_Idle_clock_skin_placing___analogue__Line_4)))(); }

	inline TAknWindowLineLayout Idle_clock_skin_placing___analogue__Line_5() const		{ return (*(TIdle_clock_skin_placing___analogue__Line_5_sig*)(GetFunction(EApiId_Idle_clock_skin_placing___analogue__Line_5)))(); }

	inline TAknLayoutTableLimits Idle_clock_skin_placing___analogue__Limits() const		{ return (*(TIdle_clock_skin_placing___analogue__Limits_sig*)(GetFunction(EApiId_Idle_clock_skin_placing___analogue__Limits)))(); }

	inline TAknWindowLineLayout Idle_clock_skin_placing___analogue_(TInt aLineIndex) const		{ return (*(TIdle_clock_skin_placing___analogue__sig*)(GetFunction(EApiId_Idle_clock_skin_placing___analogue_)))(aLineIndex); }

	inline TAknWindowLineLayout Idle_clock_skin_placing___digital__Line_1(TInt aIndex_l) const		{ return (*(TIdle_clock_skin_placing___digital__Line_1_sig*)(GetFunction(EApiId_Idle_clock_skin_placing___digital__Line_1)))(aIndex_l); }

	inline TAknWindowLineLayout Idle_clock_skin_placing___digital__Line_2(TInt aIndex_l) const		{ return (*(TIdle_clock_skin_placing___digital__Line_2_sig*)(GetFunction(EApiId_Idle_clock_skin_placing___digital__Line_2)))(aIndex_l); }

	inline TAknWindowLineLayout Idle_clock_skin_placing___digital__Line_3(const TRect& aParentRect) const		{ return (*(TIdle_clock_skin_placing___digital__Line_3_sig*)(GetFunction(EApiId_Idle_clock_skin_placing___digital__Line_3)))(aParentRect); }

	inline TAknLayoutTableLimits Idle_clock_skin_placing___digital__SUB_TABLE_0_Limits() const		{ return (*(TIdle_clock_skin_placing___digital__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Idle_clock_skin_placing___digital__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Idle_clock_skin_placing___digital__SUB_TABLE_0(TInt aLineIndex, TInt aIndex_l) const		{ return (*(TIdle_clock_skin_placing___digital__SUB_TABLE_0_sig*)(GetFunction(EApiId_Idle_clock_skin_placing___digital__SUB_TABLE_0)))(aLineIndex, aIndex_l); }

	inline TAknWindowLineLayout Power_save_state_skin_placing_Line_1() const		{ return (*(TPower_save_state_skin_placing_Line_1_sig*)(GetFunction(EApiId_Power_save_state_skin_placing_Line_1)))(); }

	inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_1() const		{ return (*(TCalendar_skin_elements__general__dup_Line_1_sig*)(GetFunction(EApiId_Calendar_skin_elements__general__dup_Line_1)))(); }

	inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_2() const		{ return (*(TCalendar_skin_elements__general__dup_Line_2_sig*)(GetFunction(EApiId_Calendar_skin_elements__general__dup_Line_2)))(); }

	inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_3() const		{ return (*(TCalendar_skin_elements__general__dup_Line_3_sig*)(GetFunction(EApiId_Calendar_skin_elements__general__dup_Line_3)))(); }

	inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_4() const		{ return (*(TCalendar_skin_elements__general__dup_Line_4_sig*)(GetFunction(EApiId_Calendar_skin_elements__general__dup_Line_4)))(); }

	inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_5() const		{ return (*(TCalendar_skin_elements__general__dup_Line_5_sig*)(GetFunction(EApiId_Calendar_skin_elements__general__dup_Line_5)))(); }

	inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_6() const		{ return (*(TCalendar_skin_elements__general__dup_Line_6_sig*)(GetFunction(EApiId_Calendar_skin_elements__general__dup_Line_6)))(); }

	inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_7() const		{ return (*(TCalendar_skin_elements__general__dup_Line_7_sig*)(GetFunction(EApiId_Calendar_skin_elements__general__dup_Line_7)))(); }

	inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_8() const		{ return (*(TCalendar_skin_elements__general__dup_Line_8_sig*)(GetFunction(EApiId_Calendar_skin_elements__general__dup_Line_8)))(); }

	inline TAknWindowLineLayout Calendar_skin_elements__general__dup_Line_9() const		{ return (*(TCalendar_skin_elements__general__dup_Line_9_sig*)(GetFunction(EApiId_Calendar_skin_elements__general__dup_Line_9)))(); }

	inline TAknLayoutTableLimits Calendar_skin_elements__general__dup_Limits() const		{ return (*(TCalendar_skin_elements__general__dup_Limits_sig*)(GetFunction(EApiId_Calendar_skin_elements__general__dup_Limits)))(); }

	inline TAknWindowLineLayout Calendar_skin_elements__general__dup(TInt aLineIndex) const		{ return (*(TCalendar_skin_elements__general__dup_sig*)(GetFunction(EApiId_Calendar_skin_elements__general__dup)))(aLineIndex); }

	inline TAknWindowLineLayout Slice_skin_placing__pinb__Line_1() const		{ return (*(TSlice_skin_placing__pinb__Line_1_sig*)(GetFunction(EApiId_Slice_skin_placing__pinb__Line_1)))(); }

	inline TAknWindowLineLayout Favorites_skin_placing_Line_1() const		{ return (*(TFavorites_skin_placing_Line_1_sig*)(GetFunction(EApiId_Favorites_skin_placing_Line_1)))(); }

	inline TAknWindowLineLayout Favorites_skin_placing_Line_2() const		{ return (*(TFavorites_skin_placing_Line_2_sig*)(GetFunction(EApiId_Favorites_skin_placing_Line_2)))(); }

	inline TAknWindowLineLayout Favorites_skin_placing_Line_3() const		{ return (*(TFavorites_skin_placing_Line_3_sig*)(GetFunction(EApiId_Favorites_skin_placing_Line_3)))(); }

	inline TAknWindowLineLayout Favorites_skin_placing_Line_4() const		{ return (*(TFavorites_skin_placing_Line_4_sig*)(GetFunction(EApiId_Favorites_skin_placing_Line_4)))(); }

	inline TAknWindowLineLayout Favorites_skin_placing_Line_5() const		{ return (*(TFavorites_skin_placing_Line_5_sig*)(GetFunction(EApiId_Favorites_skin_placing_Line_5)))(); }

	inline TAknWindowLineLayout Favorites_skin_placing_Line_6() const		{ return (*(TFavorites_skin_placing_Line_6_sig*)(GetFunction(EApiId_Favorites_skin_placing_Line_6)))(); }

	inline TAknWindowLineLayout Favorites_skin_placing_Line_7() const		{ return (*(TFavorites_skin_placing_Line_7_sig*)(GetFunction(EApiId_Favorites_skin_placing_Line_7)))(); }

	inline TAknWindowLineLayout Favorites_skin_placing_Line_8() const		{ return (*(TFavorites_skin_placing_Line_8_sig*)(GetFunction(EApiId_Favorites_skin_placing_Line_8)))(); }

	inline TAknWindowLineLayout Favorites_skin_placing_Line_9() const		{ return (*(TFavorites_skin_placing_Line_9_sig*)(GetFunction(EApiId_Favorites_skin_placing_Line_9)))(); }

	inline TAknWindowLineLayout Favorites_skin_placing_Line_10() const		{ return (*(TFavorites_skin_placing_Line_10_sig*)(GetFunction(EApiId_Favorites_skin_placing_Line_10)))(); }

	inline TAknLayoutTableLimits Favorites_skin_placing_Limits() const		{ return (*(TFavorites_skin_placing_Limits_sig*)(GetFunction(EApiId_Favorites_skin_placing_Limits)))(); }

	inline TAknWindowLineLayout Favorites_skin_placing(TInt aLineIndex) const		{ return (*(TFavorites_skin_placing_sig*)(GetFunction(EApiId_Favorites_skin_placing)))(aLineIndex); }

	inline TAknWindowLineLayout Screen_saver_skin_placing_Line_1() const		{ return (*(TScreen_saver_skin_placing_Line_1_sig*)(GetFunction(EApiId_Screen_saver_skin_placing_Line_1)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__Line_1(TInt aIndex_l, TInt aIndex_t) const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__Line_1_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__Line_1)))(aIndex_l, aIndex_t); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_1() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_1_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_1)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_2() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_2_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_2)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_3() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_3_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_3)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_4() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_4_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_4)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_5() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_5_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_5)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_6() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_6_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_6)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_7() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_7_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_7)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_8() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_8_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_8)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_9() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_9_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_9)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_10() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_10_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_10)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_11() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_11_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_11)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_12() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_12_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_12)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_13() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_13_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_13)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_14() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_14_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_14)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_15() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_15_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_15)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_16() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_16_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_16)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_17() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_17_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_17)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup_Line_18() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Line_18_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Line_18)))(); }

	inline TAknLayoutTableLimits Colour_palette_preview_screen_element_placing__main_area__dup_Limits() const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_Limits_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup_Limits)))(); }

	inline TAknWindowLineLayout Colour_palette_preview_screen_element_placing__main_area__dup(TInt aLineIndex) const		{ return (*(TColour_palette_preview_screen_element_placing__main_area__dup_sig*)(GetFunction(EApiId_Colour_palette_preview_screen_element_placing__main_area__dup)))(aLineIndex); }

	inline TAknWindowLineLayout Chinese_FEP_pop_up_window_lines_Line_1(TInt aPaneLayout) const		{ return (*(TChinese_FEP_pop_up_window_lines_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_pop_up_window_lines_Line_1)))(aPaneLayout); }

	inline TAknWindowLineLayout Chinese_FEP_pop_up_window_lines_Line_2() const		{ return (*(TChinese_FEP_pop_up_window_lines_Line_2_sig*)(GetFunction(EApiId_Chinese_FEP_pop_up_window_lines_Line_2)))(); }

	inline TAknWindowLineLayout Scaling_on_background_images__general__Line_1() const		{ return (*(TScaling_on_background_images__general__Line_1_sig*)(GetFunction(EApiId_Scaling_on_background_images__general__Line_1)))(); }

	inline TAknWindowLineLayout Scaling_on_status_area_background__general__Line_1(TInt aCommon1) const		{ return (*(TScaling_on_status_area_background__general__Line_1_sig*)(GetFunction(EApiId_Scaling_on_status_area_background__general__Line_1)))(aCommon1); }

	inline TAknWindowLineLayout Scaling_on_status_area_background__idle__Line_1(TInt aCommon1) const		{ return (*(TScaling_on_status_area_background__idle__Line_1_sig*)(GetFunction(EApiId_Scaling_on_status_area_background__idle__Line_1)))(aCommon1); }

	inline TAknWindowLineLayout Scaling_on_navi_pane_background_images_Line_1() const		{ return (*(TScaling_on_navi_pane_background_images_Line_1_sig*)(GetFunction(EApiId_Scaling_on_navi_pane_background_images_Line_1)))(); }

	inline TAknWindowLineLayout Scaling_on_tab_graphics_Line_1() const		{ return (*(TScaling_on_tab_graphics_Line_1_sig*)(GetFunction(EApiId_Scaling_on_tab_graphics_Line_1)))(); }

	inline TAknWindowLineLayout Scaling_on_setting_list_volume_skin_elements_Line_1(TInt aCommon1) const		{ return (*(TScaling_on_setting_list_volume_skin_elements_Line_1_sig*)(GetFunction(EApiId_Scaling_on_setting_list_volume_skin_elements_Line_1)))(aCommon1); }

	inline TAknWindowLineLayout Scaling_on_setting_volume_skin_Line_1(TInt aCommon1) const		{ return (*(TScaling_on_setting_volume_skin_Line_1_sig*)(GetFunction(EApiId_Scaling_on_setting_volume_skin_Line_1)))(aCommon1); }

	inline TAknWindowLineLayout Scaling_on_setting_volume_skin_sizes_Line_1() const		{ return (*(TScaling_on_setting_volume_skin_sizes_Line_1_sig*)(GetFunction(EApiId_Scaling_on_setting_volume_skin_sizes_Line_1)))(); }

	inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__dimming__Line_1() const		{ return (*(TScaling_on_pop_up_windows_skin_placing__dimming__Line_1_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__dimming__Line_1)))(); }

	inline TAknWindowLineLayout Scaling_on_ending_graphics_for_fast_application_swapping_window_Line_1() const		{ return (*(TScaling_on_ending_graphics_for_fast_application_swapping_window_Line_1_sig*)(GetFunction(EApiId_Scaling_on_ending_graphics_for_fast_application_swapping_window_Line_1)))(); }

	inline TAknWindowLineLayout Scaling_on_power_save_state_skin_element_size_Line_1() const		{ return (*(TScaling_on_power_save_state_skin_element_size_Line_1_sig*)(GetFunction(EApiId_Scaling_on_power_save_state_skin_element_size_Line_1)))(); }

	inline TAknWindowLineLayout Scaling_on_screensaver_skin_size_Line_1() const		{ return (*(TScaling_on_screensaver_skin_size_Line_1_sig*)(GetFunction(EApiId_Scaling_on_screensaver_skin_size_Line_1)))(); }

	inline TAknWindowLineLayout Notepad_skin_element_placing_Line_1() const		{ return (*(TNotepad_skin_element_placing_Line_1_sig*)(GetFunction(EApiId_Notepad_skin_element_placing_Line_1)))(); }

	inline TAknWindowLineLayout Notepad_skin_element_placing_Line_2() const		{ return (*(TNotepad_skin_element_placing_Line_2_sig*)(GetFunction(EApiId_Notepad_skin_element_placing_Line_2)))(); }

	inline TAknWindowLineLayout Notepad_skin_element_placing_Line_3() const		{ return (*(TNotepad_skin_element_placing_Line_3_sig*)(GetFunction(EApiId_Notepad_skin_element_placing_Line_3)))(); }

	inline TAknWindowLineLayout Notepad_skin_element_placing_Line_4() const		{ return (*(TNotepad_skin_element_placing_Line_4_sig*)(GetFunction(EApiId_Notepad_skin_element_placing_Line_4)))(); }

	inline TAknWindowLineLayout Notepad_skin_element_placing_Line_5() const		{ return (*(TNotepad_skin_element_placing_Line_5_sig*)(GetFunction(EApiId_Notepad_skin_element_placing_Line_5)))(); }

	inline TAknWindowLineLayout Notepad_skin_element_placing_Line_6() const		{ return (*(TNotepad_skin_element_placing_Line_6_sig*)(GetFunction(EApiId_Notepad_skin_element_placing_Line_6)))(); }

	inline TAknWindowLineLayout Notepad_skin_element_placing_Line_7() const		{ return (*(TNotepad_skin_element_placing_Line_7_sig*)(GetFunction(EApiId_Notepad_skin_element_placing_Line_7)))(); }

	inline TAknWindowLineLayout Notepad_skin_element_placing_Line_8() const		{ return (*(TNotepad_skin_element_placing_Line_8_sig*)(GetFunction(EApiId_Notepad_skin_element_placing_Line_8)))(); }

	inline TAknWindowLineLayout Notepad_skin_element_placing_Line_9() const		{ return (*(TNotepad_skin_element_placing_Line_9_sig*)(GetFunction(EApiId_Notepad_skin_element_placing_Line_9)))(); }

	inline TAknLayoutTableLimits Notepad_skin_element_placing_Limits() const		{ return (*(TNotepad_skin_element_placing_Limits_sig*)(GetFunction(EApiId_Notepad_skin_element_placing_Limits)))(); }

	inline TAknWindowLineLayout Notepad_skin_element_placing(TInt aLineIndex) const		{ return (*(TNotepad_skin_element_placing_sig*)(GetFunction(EApiId_Notepad_skin_element_placing)))(aLineIndex); }

	inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_1() const		{ return (*(TCalculator_paper_skin_element_placing_Line_1_sig*)(GetFunction(EApiId_Calculator_paper_skin_element_placing_Line_1)))(); }

	inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_2() const		{ return (*(TCalculator_paper_skin_element_placing_Line_2_sig*)(GetFunction(EApiId_Calculator_paper_skin_element_placing_Line_2)))(); }

	inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_3() const		{ return (*(TCalculator_paper_skin_element_placing_Line_3_sig*)(GetFunction(EApiId_Calculator_paper_skin_element_placing_Line_3)))(); }

	inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_4() const		{ return (*(TCalculator_paper_skin_element_placing_Line_4_sig*)(GetFunction(EApiId_Calculator_paper_skin_element_placing_Line_4)))(); }

	inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_5() const		{ return (*(TCalculator_paper_skin_element_placing_Line_5_sig*)(GetFunction(EApiId_Calculator_paper_skin_element_placing_Line_5)))(); }

	inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_6() const		{ return (*(TCalculator_paper_skin_element_placing_Line_6_sig*)(GetFunction(EApiId_Calculator_paper_skin_element_placing_Line_6)))(); }

	inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_7() const		{ return (*(TCalculator_paper_skin_element_placing_Line_7_sig*)(GetFunction(EApiId_Calculator_paper_skin_element_placing_Line_7)))(); }

	inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_8() const		{ return (*(TCalculator_paper_skin_element_placing_Line_8_sig*)(GetFunction(EApiId_Calculator_paper_skin_element_placing_Line_8)))(); }

	inline TAknWindowLineLayout Calculator_paper_skin_element_placing_Line_9() const		{ return (*(TCalculator_paper_skin_element_placing_Line_9_sig*)(GetFunction(EApiId_Calculator_paper_skin_element_placing_Line_9)))(); }

	inline TAknLayoutTableLimits Calculator_paper_skin_element_placing_Limits() const		{ return (*(TCalculator_paper_skin_element_placing_Limits_sig*)(GetFunction(EApiId_Calculator_paper_skin_element_placing_Limits)))(); }

	inline TAknWindowLineLayout Calculator_paper_skin_element_placing(TInt aLineIndex) const		{ return (*(TCalculator_paper_skin_element_placing_sig*)(GetFunction(EApiId_Calculator_paper_skin_element_placing)))(aLineIndex); }

	inline TAknWindowLineLayout Calculator_glass_element_placing_Line_1() const		{ return (*(TCalculator_glass_element_placing_Line_1_sig*)(GetFunction(EApiId_Calculator_glass_element_placing_Line_1)))(); }

	inline TAknWindowLineLayout Calculator_glass_element_placing_Line_2() const		{ return (*(TCalculator_glass_element_placing_Line_2_sig*)(GetFunction(EApiId_Calculator_glass_element_placing_Line_2)))(); }

	inline TAknWindowLineLayout Calculator_glass_element_placing_Line_3() const		{ return (*(TCalculator_glass_element_placing_Line_3_sig*)(GetFunction(EApiId_Calculator_glass_element_placing_Line_3)))(); }

	inline TAknLayoutTableLimits Calculator_glass_element_placing_Limits() const		{ return (*(TCalculator_glass_element_placing_Limits_sig*)(GetFunction(EApiId_Calculator_glass_element_placing_Limits)))(); }

	inline TAknWindowLineLayout Calculator_glass_element_placing(TInt aLineIndex) const		{ return (*(TCalculator_glass_element_placing_sig*)(GetFunction(EApiId_Calculator_glass_element_placing)))(aLineIndex); }

	inline TAknWindowLineLayout Scalingon_background_images__general__Line_1() const		{ return (*(TScalingon_background_images__general__Line_1_sig*)(GetFunction(EApiId_Scalingon_background_images__general__Line_1)))(); }

	inline TAknWindowLineLayout Scalingon_background_images__general__Line_2() const		{ return (*(TScalingon_background_images__general__Line_2_sig*)(GetFunction(EApiId_Scalingon_background_images__general__Line_2)))(); }

	inline TAknLayoutTableLimits Scalingon_background_images__general__Limits() const		{ return (*(TScalingon_background_images__general__Limits_sig*)(GetFunction(EApiId_Scalingon_background_images__general__Limits)))(); }

	inline TAknWindowLineLayout Scalingon_background_images__general_(TInt aLineIndex) const		{ return (*(TScalingon_background_images__general__sig*)(GetFunction(EApiId_Scalingon_background_images__general_)))(aLineIndex); }

	inline TAknWindowLineLayout Scaling_on_status_area_background__general__Line_2(TInt aCommon1) const		{ return (*(TScaling_on_status_area_background__general__Line_2_sig*)(GetFunction(EApiId_Scaling_on_status_area_background__general__Line_2)))(aCommon1); }

	inline TAknLayoutTableLimits Scaling_on_status_area_background__general__Limits() const		{ return (*(TScaling_on_status_area_background__general__Limits_sig*)(GetFunction(EApiId_Scaling_on_status_area_background__general__Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_status_area_background__general_(TInt aLineIndex, TInt aCommon1) const		{ return (*(TScaling_on_status_area_background__general__sig*)(GetFunction(EApiId_Scaling_on_status_area_background__general_)))(aLineIndex, aCommon1); }

	inline TAknWindowLineLayout Scaling_on_status_area_background__idle__Line_2(TInt aCommon1) const		{ return (*(TScaling_on_status_area_background__idle__Line_2_sig*)(GetFunction(EApiId_Scaling_on_status_area_background__idle__Line_2)))(aCommon1); }

	inline TAknLayoutTableLimits Scaling_on_status_area_background__idle__Limits() const		{ return (*(TScaling_on_status_area_background__idle__Limits_sig*)(GetFunction(EApiId_Scaling_on_status_area_background__idle__Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_status_area_background__idle_(TInt aLineIndex, TInt aCommon1) const		{ return (*(TScaling_on_status_area_background__idle__sig*)(GetFunction(EApiId_Scaling_on_status_area_background__idle_)))(aLineIndex, aCommon1); }

	inline TAknWindowLineLayout Scalingon_navipane_background_images_Line_1() const		{ return (*(TScalingon_navipane_background_images_Line_1_sig*)(GetFunction(EApiId_Scalingon_navipane_background_images_Line_1)))(); }

	inline TAknWindowLineLayout Scalingon_navipane_background_images_Line_2() const		{ return (*(TScalingon_navipane_background_images_Line_2_sig*)(GetFunction(EApiId_Scalingon_navipane_background_images_Line_2)))(); }

	inline TAknLayoutTableLimits Scalingon_navipane_background_images_Limits() const		{ return (*(TScalingon_navipane_background_images_Limits_sig*)(GetFunction(EApiId_Scalingon_navipane_background_images_Limits)))(); }

	inline TAknWindowLineLayout Scalingon_navipane_background_images(TInt aLineIndex) const		{ return (*(TScalingon_navipane_background_images_sig*)(GetFunction(EApiId_Scalingon_navipane_background_images)))(aLineIndex); }

	inline TAknWindowLineLayout Scalingon_tab_graphics_Line_1() const		{ return (*(TScalingon_tab_graphics_Line_1_sig*)(GetFunction(EApiId_Scalingon_tab_graphics_Line_1)))(); }

	inline TAknWindowLineLayout Scalingon_tab_graphics_Line_2() const		{ return (*(TScalingon_tab_graphics_Line_2_sig*)(GetFunction(EApiId_Scalingon_tab_graphics_Line_2)))(); }

	inline TAknLayoutTableLimits Scalingon_tab_graphics_Limits() const		{ return (*(TScalingon_tab_graphics_Limits_sig*)(GetFunction(EApiId_Scalingon_tab_graphics_Limits)))(); }

	inline TAknWindowLineLayout Scalingon_tab_graphics(TInt aLineIndex) const		{ return (*(TScalingon_tab_graphics_sig*)(GetFunction(EApiId_Scalingon_tab_graphics)))(aLineIndex); }

	inline TAknWindowLineLayout Scalinon_volume_area_values_Line_1(TInt aIndex_l) const		{ return (*(TScalinon_volume_area_values_Line_1_sig*)(GetFunction(EApiId_Scalinon_volume_area_values_Line_1)))(aIndex_l); }

	inline TAknWindowLineLayout Scalinon_volume_area_values_Line_2(TInt aIndex_l) const		{ return (*(TScalinon_volume_area_values_Line_2_sig*)(GetFunction(EApiId_Scalinon_volume_area_values_Line_2)))(aIndex_l); }

	inline TAknWindowLineLayout Scalinon_volume_area_values_Line_3(TInt aIndex_l) const		{ return (*(TScalinon_volume_area_values_Line_3_sig*)(GetFunction(EApiId_Scalinon_volume_area_values_Line_3)))(aIndex_l); }

	inline TAknWindowLineLayout Scalinon_volume_area_values_Line_4(TInt aIndex_l) const		{ return (*(TScalinon_volume_area_values_Line_4_sig*)(GetFunction(EApiId_Scalinon_volume_area_values_Line_4)))(aIndex_l); }

	inline TAknWindowLineLayout Scalinon_volume_area_values_Line_5(TInt aIndex_l) const		{ return (*(TScalinon_volume_area_values_Line_5_sig*)(GetFunction(EApiId_Scalinon_volume_area_values_Line_5)))(aIndex_l); }

	inline TAknWindowLineLayout Scalinon_volume_area_values_Line_6(TInt aIndex_l) const		{ return (*(TScalinon_volume_area_values_Line_6_sig*)(GetFunction(EApiId_Scalinon_volume_area_values_Line_6)))(aIndex_l); }

	inline TAknWindowLineLayout Scalinon_volume_area_values_Line_7(TInt aIndex_l) const		{ return (*(TScalinon_volume_area_values_Line_7_sig*)(GetFunction(EApiId_Scalinon_volume_area_values_Line_7)))(aIndex_l); }

	inline TAknWindowLineLayout Scalinon_volume_area_values_Line_8(TInt aIndex_l) const		{ return (*(TScalinon_volume_area_values_Line_8_sig*)(GetFunction(EApiId_Scalinon_volume_area_values_Line_8)))(aIndex_l); }

	inline TAknWindowLineLayout Scalinon_volume_area_values_Line_9(TInt aIndex_l) const		{ return (*(TScalinon_volume_area_values_Line_9_sig*)(GetFunction(EApiId_Scalinon_volume_area_values_Line_9)))(aIndex_l); }

	inline TAknWindowLineLayout Scalinon_volume_area_values_Line_10(TInt aIndex_l) const		{ return (*(TScalinon_volume_area_values_Line_10_sig*)(GetFunction(EApiId_Scalinon_volume_area_values_Line_10)))(aIndex_l); }

	inline TAknWindowLineLayout Scalinon_volume_area_values_Line_11(TInt aIndex_l) const		{ return (*(TScalinon_volume_area_values_Line_11_sig*)(GetFunction(EApiId_Scalinon_volume_area_values_Line_11)))(aIndex_l); }

	inline TAknLayoutTableLimits Scalinon_volume_area_values_Limits() const		{ return (*(TScalinon_volume_area_values_Limits_sig*)(GetFunction(EApiId_Scalinon_volume_area_values_Limits)))(); }

	inline TAknWindowLineLayout Scalinon_volume_area_values(TInt aLineIndex, TInt aIndex_l) const		{ return (*(TScalinon_volume_area_values_sig*)(GetFunction(EApiId_Scalinon_volume_area_values)))(aLineIndex, aIndex_l); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_1() const		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_1_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_1)))(); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_2() const		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_2_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_2)))(); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_3() const		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_3_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_3)))(); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_4() const		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_4_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_4)))(); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_5() const		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_5_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_5)))(); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_6() const		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_6_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_6)))(); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_7() const		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_7_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_7)))(); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_8() const		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_8_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_8)))(); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background__Line_9() const		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Line_9_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_elements__value_background__Line_9)))(); }

	inline TAknLayoutTableLimits Scalingon_setting_list_item_skin_elements__value_background__Limits() const		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__Limits_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_elements__value_background__Limits)))(); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_elements__value_background_(TInt aLineIndex) const		{ return (*(TScalingon_setting_list_item_skin_elements__value_background__sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_elements__value_background_)))(aLineIndex); }

	inline TAknWindowLineLayout Scalingon_setting_list_volume_skin_elements_Line_1(TInt aCommon1) const		{ return (*(TScalingon_setting_list_volume_skin_elements_Line_1_sig*)(GetFunction(EApiId_Scalingon_setting_list_volume_skin_elements_Line_1)))(aCommon1); }

	inline TAknWindowLineLayout Scalingon_setting_list_volume_skin_elements_Line_2(TInt aCommon1) const		{ return (*(TScalingon_setting_list_volume_skin_elements_Line_2_sig*)(GetFunction(EApiId_Scalingon_setting_list_volume_skin_elements_Line_2)))(aCommon1); }

	inline TAknLayoutTableLimits Scalingon_setting_list_volume_skin_elements_Limits() const		{ return (*(TScalingon_setting_list_volume_skin_elements_Limits_sig*)(GetFunction(EApiId_Scalingon_setting_list_volume_skin_elements_Limits)))(); }

	inline TAknWindowLineLayout Scalingon_setting_list_volume_skin_elements(TInt aLineIndex, TInt aCommon1) const		{ return (*(TScalingon_setting_list_volume_skin_elements_sig*)(GetFunction(EApiId_Scalingon_setting_list_volume_skin_elements)))(aLineIndex, aCommon1); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_placing_Line_1() const		{ return (*(TScalingon_setting_list_item_skin_placing_Line_1_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_placing_Line_1)))(); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_placing_Line_2() const		{ return (*(TScalingon_setting_list_item_skin_placing_Line_2_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_placing_Line_2)))(); }

	inline TAknLayoutTableLimits Scalingon_setting_list_item_skin_placing_Limits() const		{ return (*(TScalingon_setting_list_item_skin_placing_Limits_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_placing_Limits)))(); }

	inline TAknWindowLineLayout Scalingon_setting_list_item_skin_placing(TInt aLineIndex) const		{ return (*(TScalingon_setting_list_item_skin_placing_sig*)(GetFunction(EApiId_Scalingon_setting_list_item_skin_placing)))(aLineIndex); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_1(const TRect& aParentRect) const		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_1_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_2() const		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_2_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__Line_2)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_3() const		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_3_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__Line_3)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_4() const		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_4_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__Line_4)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_5() const		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_5_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__Line_5)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_6() const		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_6_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__Line_6)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_7() const		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_7_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__Line_7)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_8(const TRect& aParentRect) const		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_8_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__Line_8)))(aParentRect); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__Line_9(const TRect& aParentRect) const		{ return (*(TScaling_on_list_highlight_skin_placing__general__Line_9_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_0_Limits() const		{ return (*(TScaling_on_list_highlight_skin_placing__general__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TScaling_on_list_highlight_skin_placing__general__SUB_TABLE_0_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_1_Limits() const		{ return (*(TScaling_on_list_highlight_skin_placing__general__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TScaling_on_list_highlight_skin_placing__general__SUB_TABLE_1_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__general__SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_1() const		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_1_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_1)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_2() const		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_2_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_2)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_3() const		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_3_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_3)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_4() const		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_4_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_4)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_5() const		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_5_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_5)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_6() const		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_6_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_6)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_7() const		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_7_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_7)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_8() const		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_8_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_8)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings__Line_9() const		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Line_9_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__settings__Line_9)))(); }

	inline TAknLayoutTableLimits Scaling_on_list_highlight_skin_placing__settings__Limits() const		{ return (*(TScaling_on_list_highlight_skin_placing__settings__Limits_sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__settings__Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_list_highlight_skin_placing__settings_(TInt aLineIndex) const		{ return (*(TScaling_on_list_highlight_skin_placing__settings__sig*)(GetFunction(EApiId_Scaling_on_list_highlight_skin_placing__settings_)))(aLineIndex); }

	inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_1() const		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_1_sig*)(GetFunction(EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_1)))(); }

	inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_2() const		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_2_sig*)(GetFunction(EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_2)))(); }

	inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_3() const		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_3_sig*)(GetFunction(EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_3)))(); }

	inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_4() const		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_4_sig*)(GetFunction(EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_4)))(); }

	inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_5() const		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_5_sig*)(GetFunction(EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_5)))(); }

	inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_6() const		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_6_sig*)(GetFunction(EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_6)))(); }

	inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_7() const		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_7_sig*)(GetFunction(EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_7)))(); }

	inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_8() const		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_8_sig*)(GetFunction(EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_8)))(); }

	inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight__Line_9() const		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Line_9_sig*)(GetFunction(EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Line_9)))(); }

	inline TAknLayoutTableLimits Scalingon_edited_settings_item_skin_placing__background_highlight__Limits() const		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__Limits_sig*)(GetFunction(EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight__Limits)))(); }

	inline TAknWindowLineLayout Scalingon_edited_settings_item_skin_placing__background_highlight_(TInt aLineIndex) const		{ return (*(TScalingon_edited_settings_item_skin_placing__background_highlight__sig*)(GetFunction(EApiId_Scalingon_edited_settings_item_skin_placing__background_highlight_)))(aLineIndex); }

	inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_1(const TRect& aParentRect) const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_1_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_2() const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_2_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_2)))(); }

	inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_3() const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_3_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_3)))(); }

	inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_4() const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_4_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_4)))(); }

	inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_5(TInt aIndex_r) const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_5_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_5)))(aIndex_r); }

	inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_6() const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_6_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_6)))(); }

	inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_7() const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_7_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_7)))(); }

	inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_8(const TRect& aParentRect) const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_8_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_8)))(aParentRect); }

	inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_9(const TRect& aParentRect) const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__Line_9_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_0_Limits() const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_0_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_1_Limits() const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_1(TInt aLineIndex) const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_1_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_1)))(aLineIndex); }

	inline TAknLayoutTableLimits Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_2_Limits() const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_2_Limits_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_2_Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_2(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TScaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_2_sig*)(GetFunction(EApiId_Scaling_on_edited_settings_item_skin_placing__valuebackground__SUB_TABLE_2)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout Scalingon_setting_volume_skin_Line_1(TInt aCommon1) const		{ return (*(TScalingon_setting_volume_skin_Line_1_sig*)(GetFunction(EApiId_Scalingon_setting_volume_skin_Line_1)))(aCommon1); }

	inline TAknWindowLineLayout Scalingon_setting_volume_skin_Line_2(TInt aCommon1) const		{ return (*(TScalingon_setting_volume_skin_Line_2_sig*)(GetFunction(EApiId_Scalingon_setting_volume_skin_Line_2)))(aCommon1); }

	inline TAknLayoutTableLimits Scalingon_setting_volume_skin_Limits() const		{ return (*(TScalingon_setting_volume_skin_Limits_sig*)(GetFunction(EApiId_Scalingon_setting_volume_skin_Limits)))(); }

	inline TAknWindowLineLayout Scalingon_setting_volume_skin(TInt aLineIndex, TInt aCommon1) const		{ return (*(TScalingon_setting_volume_skin_sig*)(GetFunction(EApiId_Scalingon_setting_volume_skin)))(aLineIndex, aCommon1); }

	inline TAknWindowLineLayout Scaling_on_setting_volume_skin_sizes_Line_2() const		{ return (*(TScaling_on_setting_volume_skin_sizes_Line_2_sig*)(GetFunction(EApiId_Scaling_on_setting_volume_skin_sizes_Line_2)))(); }

	inline TAknLayoutTableLimits Scaling_on_setting_volume_skin_sizes_Limits() const		{ return (*(TScaling_on_setting_volume_skin_sizes_Limits_sig*)(GetFunction(EApiId_Scaling_on_setting_volume_skin_sizes_Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_setting_volume_skin_sizes(TInt aLineIndex) const		{ return (*(TScaling_on_setting_volume_skin_sizes_sig*)(GetFunction(EApiId_Scaling_on_setting_volume_skin_sizes)))(aLineIndex); }

	inline TAknWindowLineLayout Scalingon_pop_up_windows_skin_placing__dimming__Line_1() const		{ return (*(TScalingon_pop_up_windows_skin_placing__dimming__Line_1_sig*)(GetFunction(EApiId_Scalingon_pop_up_windows_skin_placing__dimming__Line_1)))(); }

	inline TAknWindowLineLayout Scalingon_pop_up_windows_skin_placing__dimming__Line_2() const		{ return (*(TScalingon_pop_up_windows_skin_placing__dimming__Line_2_sig*)(GetFunction(EApiId_Scalingon_pop_up_windows_skin_placing__dimming__Line_2)))(); }

	inline TAknLayoutTableLimits Scalingon_pop_up_windows_skin_placing__dimming__Limits() const		{ return (*(TScalingon_pop_up_windows_skin_placing__dimming__Limits_sig*)(GetFunction(EApiId_Scalingon_pop_up_windows_skin_placing__dimming__Limits)))(); }

	inline TAknWindowLineLayout Scalingon_pop_up_windows_skin_placing__dimming_(TInt aLineIndex) const		{ return (*(TScalingon_pop_up_windows_skin_placing__dimming__sig*)(GetFunction(EApiId_Scalingon_pop_up_windows_skin_placing__dimming_)))(aLineIndex); }

	inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_1(const TRect& aParentRect) const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_1_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_2() const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_2_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_2)))(); }

	inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_3() const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_3_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_3)))(); }

	inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_4() const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_4_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_4)))(); }

	inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_5() const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_5_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_5)))(); }

	inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_6() const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_6_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_6)))(); }

	inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_7() const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_7_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_7)))(); }

	inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_8(const TRect& aParentRect) const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_8_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_8)))(aParentRect); }

	inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__Line_9(const TRect& aParentRect) const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__Line_9_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__Line_9)))(aParentRect); }

	inline TAknLayoutTableLimits Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_0_Limits() const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_0_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_1_Limits() const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_1(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TScaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_1_sig*)(GetFunction(EApiId_Scaling_on_pop_up_windows_skin_placing__frame_general__SUB_TABLE_1)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout Scaling_on_ending_graphics_for_fast_application_swappingwindow_Line_1() const		{ return (*(TScaling_on_ending_graphics_for_fast_application_swappingwindow_Line_1_sig*)(GetFunction(EApiId_Scaling_on_ending_graphics_for_fast_application_swappingwindow_Line_1)))(); }

	inline TAknWindowLineLayout Scaling_on_ending_graphics_for_fast_application_swappingwindow_Line_2() const		{ return (*(TScaling_on_ending_graphics_for_fast_application_swappingwindow_Line_2_sig*)(GetFunction(EApiId_Scaling_on_ending_graphics_for_fast_application_swappingwindow_Line_2)))(); }

	inline TAknLayoutTableLimits Scaling_on_ending_graphics_for_fast_application_swappingwindow_Limits() const		{ return (*(TScaling_on_ending_graphics_for_fast_application_swappingwindow_Limits_sig*)(GetFunction(EApiId_Scaling_on_ending_graphics_for_fast_application_swappingwindow_Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_ending_graphics_for_fast_application_swappingwindow(TInt aLineIndex) const		{ return (*(TScaling_on_ending_graphics_for_fast_application_swappingwindow_sig*)(GetFunction(EApiId_Scaling_on_ending_graphics_for_fast_application_swappingwindow)))(aLineIndex); }

	inline TAknWindowLineLayout Scaling_on_power_save_state_skin_element_size_Line_2() const		{ return (*(TScaling_on_power_save_state_skin_element_size_Line_2_sig*)(GetFunction(EApiId_Scaling_on_power_save_state_skin_element_size_Line_2)))(); }

	inline TAknLayoutTableLimits Scaling_on_power_save_state_skin_element_size_Limits() const		{ return (*(TScaling_on_power_save_state_skin_element_size_Limits_sig*)(GetFunction(EApiId_Scaling_on_power_save_state_skin_element_size_Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_power_save_state_skin_element_size(TInt aLineIndex) const		{ return (*(TScaling_on_power_save_state_skin_element_size_sig*)(GetFunction(EApiId_Scaling_on_power_save_state_skin_element_size)))(aLineIndex); }

	inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_1() const		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_1_sig*)(GetFunction(EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_1)))(); }

	inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_2() const		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_2_sig*)(GetFunction(EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_2)))(); }

	inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_3() const		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_3_sig*)(GetFunction(EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_3)))(); }

	inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_4() const		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_4_sig*)(GetFunction(EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_4)))(); }

	inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_5() const		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_5_sig*)(GetFunction(EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_5)))(); }

	inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_6() const		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_6_sig*)(GetFunction(EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_6)))(); }

	inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_7() const		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_7_sig*)(GetFunction(EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_7)))(); }

	inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_8() const		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_8_sig*)(GetFunction(EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_8)))(); }

	inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_9() const		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Line_9_sig*)(GetFunction(EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Line_9)))(); }

	inline TAknLayoutTableLimits Scaling_on_calendar_skin_element_placing_and_size__dayweek__Limits() const		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__Limits_sig*)(GetFunction(EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek__Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_calendar_skin_element_placing_and_size__dayweek_(TInt aLineIndex) const		{ return (*(TScaling_on_calendar_skin_element_placing_and_size__dayweek__sig*)(GetFunction(EApiId_Scaling_on_calendar_skin_element_placing_and_size__dayweek_)))(aLineIndex); }

	inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_1() const		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_1_sig*)(GetFunction(EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_1)))(); }

	inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_2() const		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_2_sig*)(GetFunction(EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_2)))(); }

	inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_3() const		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_3_sig*)(GetFunction(EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_3)))(); }

	inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_4() const		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_4_sig*)(GetFunction(EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_4)))(); }

	inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_5() const		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_5_sig*)(GetFunction(EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_5)))(); }

	inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_6() const		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_6_sig*)(GetFunction(EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_6)))(); }

	inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_7() const		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_7_sig*)(GetFunction(EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_7)))(); }

	inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_8() const		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_8_sig*)(GetFunction(EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_8)))(); }

	inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month__Line_9() const		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Line_9_sig*)(GetFunction(EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Line_9)))(); }

	inline TAknLayoutTableLimits Scalingon_calendar_skin_element_placing_and_size__month__Limits() const		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__Limits_sig*)(GetFunction(EApiId_Scalingon_calendar_skin_element_placing_and_size__month__Limits)))(); }

	inline TAknWindowLineLayout Scalingon_calendar_skin_element_placing_and_size__month_(TInt aLineIndex) const		{ return (*(TScalingon_calendar_skin_element_placing_and_size__month__sig*)(GetFunction(EApiId_Scalingon_calendar_skin_element_placing_and_size__month_)))(aLineIndex); }

	inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_1() const		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_1_sig*)(GetFunction(EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_1)))(); }

	inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_2() const		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_2_sig*)(GetFunction(EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_2)))(); }

	inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_3() const		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_3_sig*)(GetFunction(EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_3)))(); }

	inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_4() const		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_4_sig*)(GetFunction(EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_4)))(); }

	inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_5() const		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_5_sig*)(GetFunction(EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_5)))(); }

	inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_6() const		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_6_sig*)(GetFunction(EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_6)))(); }

	inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_7() const		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_7_sig*)(GetFunction(EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_7)))(); }

	inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_8() const		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_8_sig*)(GetFunction(EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_8)))(); }

	inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_9() const		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_9_sig*)(GetFunction(EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_9)))(); }

	inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing_Line_10() const		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Line_10_sig*)(GetFunction(EApiId_Scaling_on_favourites_skin_sizes_and_placing_Line_10)))(); }

	inline TAknLayoutTableLimits Scaling_on_favourites_skin_sizes_and_placing_Limits() const		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_Limits_sig*)(GetFunction(EApiId_Scaling_on_favourites_skin_sizes_and_placing_Limits)))(); }

	inline TAknWindowLineLayout Scaling_on_favourites_skin_sizes_and_placing(TInt aLineIndex) const		{ return (*(TScaling_on_favourites_skin_sizes_and_placing_sig*)(GetFunction(EApiId_Scaling_on_favourites_skin_sizes_and_placing)))(aLineIndex); }

private:
	CInstance();
	};

} // end of namespace SkinLayout
#endif // SKINLAYOUT_CDL
