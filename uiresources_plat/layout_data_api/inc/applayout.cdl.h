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

#ifndef APPLAYOUT_CDL
#define APPLAYOUT_CDL

#include <CdlEngine.h>
#include <applayout.cdl.common.h>

namespace AppLayout
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


// CDL API functions, as defined in applayout.cdl

inline TAknWindowLineLayout Browser_image_highlight_Line_1()		{ return (*(TBrowser_image_highlight_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_highlight_Line_1)))(); }

inline TAknWindowLineLayout Browser_image_highlight_Line_2()		{ return (*(TBrowser_image_highlight_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_highlight_Line_2)))(); }

inline TAknWindowLineLayout Browser_image_highlight_Line_3()		{ return (*(TBrowser_image_highlight_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_highlight_Line_3)))(); }

inline TAknWindowLineLayout Browser_image_highlight_Line_4()		{ return (*(TBrowser_image_highlight_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_highlight_Line_4)))(); }

inline TAknWindowLineLayout Browser_image_highlight_Line_5()		{ return (*(TBrowser_image_highlight_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_highlight_Line_5)))(); }

inline TAknWindowLineLayout Browser_image_highlight_Line_6()		{ return (*(TBrowser_image_highlight_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_highlight_Line_6)))(); }

inline TAknWindowLineLayout Browser_image_highlight_Line_7()		{ return (*(TBrowser_image_highlight_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_highlight_Line_7)))(); }

inline TAknWindowLineLayout Browser_image_highlight_Line_8()		{ return (*(TBrowser_image_highlight_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_highlight_Line_8)))(); }

inline TAknWindowLineLayout Browser_image_highlight_Line_9()		{ return (*(TBrowser_image_highlight_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_highlight_Line_9)))(); }

inline TAknLayoutTableLimits Browser_image_highlight_Limits()		{ return (*(TBrowser_image_highlight_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_highlight_Limits)))(); }

inline TAknWindowLineLayout Browser_image_highlight(TInt aLineIndex)		{ return (*(TBrowser_image_highlight_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_highlight)))(aLineIndex); }

// LAF Table : Navi pane elements
inline TAknWindowLineLayout Navi_pane_elements_Line_1()		{ return (*(TNavi_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_pane_elements_Line_1)))(); }

// LAF Table : Application specific list panes
inline TAknWindowLineLayout list_cale_time_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tlist_cale_time_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_cale_time_pane)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout list_pinb_item_pane(TInt aIndex_t)		{ return (*(Tlist_pinb_item_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_pinb_item_pane)))(aIndex_t); }

// LAF Table : List pane elements (cale time)
inline TAknWindowLineLayout List_pane_elements__cale_time__Line_1(TInt aIndex_t)		{ return (*(TList_pane_elements__cale_time__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__cale_time__Line_1)))(aIndex_t); }

inline TAknWindowLineLayout List_pane_elements__cale_time__Line_2()		{ return (*(TList_pane_elements__cale_time__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__cale_time__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__cale_time__Line_3(TInt aIndex_l, TInt aIndex_t)		{ return (*(TList_pane_elements__cale_time__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__cale_time__Line_3)))(aIndex_l, aIndex_t); }

// LAF Table : List pane texts (cale time)
inline TAknTextLineLayout List_pane_texts__cale_time__Line_1(TInt aCommon1, TInt aIndex_B)		{ return (*(TList_pane_texts__cale_time__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__cale_time__Line_1)))(aCommon1, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_List_pane_texts__cale_time__Line_1(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_List_pane_texts__cale_time__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_List_pane_texts__cale_time__Line_1)))(aCommon1, aNumberOfLinesShown); }

inline TAknTextLineLayout List_pane_texts__cale_time__Line_2(TInt aCommon1)		{ return (*(TList_pane_texts__cale_time__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__cale_time__Line_2)))(aCommon1); }

inline TAknTextLineLayout List_pane_texts__cale_time__Line_3(TInt aIndex_l, TInt aIndex_r, TInt aIndex_B, TInt aIndex_W)		{ return (*(TList_pane_texts__cale_time__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__cale_time__Line_3)))(aIndex_l, aIndex_r, aIndex_B, aIndex_W); }

inline TAknMultiLineTextLayout Multiline_List_pane_texts__cale_time__Line_3(TInt aIndex_l, TInt aIndex_r, TInt aIndex_W, TInt aNumberOfLinesShown)		{ return (*(TMultiline_List_pane_texts__cale_time__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_List_pane_texts__cale_time__Line_3)))(aIndex_l, aIndex_r, aIndex_W, aNumberOfLinesShown); }

// LAF Table : List pane elements (pinb item)
inline TAknWindowLineLayout List_pane_elements__pinb_item__Line_1()		{ return (*(TList_pane_elements__pinb_item__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__pinb_item__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__pinb_item__Line_2()		{ return (*(TList_pane_elements__pinb_item__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__pinb_item__Line_2)))(); }

inline TAknWindowLineLayout List_pane_elements__pinb_item__Line_3()		{ return (*(TList_pane_elements__pinb_item__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__pinb_item__Line_3)))(); }

inline TAknWindowLineLayout List_pane_elements__pinb_item__Line_4(TInt aIndex_l)		{ return (*(TList_pane_elements__pinb_item__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__pinb_item__Line_4)))(aIndex_l); }

inline TAknLayoutTableLimits List_pane_elements__pinb_item__SUB_TABLE_0_Limits()		{ return (*(TList_pane_elements__pinb_item__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__pinb_item__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__pinb_item__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TList_pane_elements__pinb_item__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__pinb_item__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : List pane texts (pinb item)
inline TAknTextLineLayout List_pane_texts__pinb_item__Line_1(TInt aCommon1)		{ return (*(TList_pane_texts__pinb_item__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__pinb_item__Line_1)))(aCommon1); }

// LAF Table : List pane highlight (several)
inline TAknWindowLineLayout List_pane_highlight__several__Line_1(const TRect& aParentRect)		{ return (*(TList_pane_highlight__several__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight__several__Line_1)))(aParentRect); }

inline TAknWindowLineLayout List_pane_highlight__several__Line_2(const TRect& aParentRect)		{ return (*(TList_pane_highlight__several__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight__several__Line_2)))(aParentRect); }

inline TAknLayoutTableLimits List_pane_highlight__several__Limits()		{ return (*(TList_pane_highlight__several__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight__several__Limits)))(); }

inline TAknWindowLineLayout List_pane_highlight__several_(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TList_pane_highlight__several__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight__several_)))(aLineIndex, aParentRect); }

// LAF Table : Grid pane descendants
inline TAknWindowLineLayout cell_pinb_pane(TInt aIndex_l, TInt aIndex_t)		{ return (*(Tcell_pinb_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_pinb_pane)))(aIndex_l, aIndex_t); }

inline TAknWindowLineLayout cell_qdial_pane(TInt aIndex_l, TInt aIndex_t)		{ return (*(Tcell_qdial_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_qdial_pane)))(aIndex_l, aIndex_t); }

inline TAknWindowLineLayout cell_cale_month_pane(TInt aIndex_l, TInt aIndex_t, TInt aIndex_W)		{ return (*(Tcell_cale_month_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_cale_month_pane)))(aIndex_l, aIndex_t, aIndex_W); }

inline TAknWindowLineLayout cell_calc_pane(TInt aIndex_l, TInt aIndex_t)		{ return (*(Tcell_calc_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_calc_pane)))(aIndex_l, aIndex_t); }

inline TAknWindowLineLayout cell_cale_week_pane(TInt aIndex_l, TInt aIndex_t)		{ return (*(Tcell_cale_week_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_cale_week_pane)))(aIndex_l, aIndex_t); }

inline TAknWindowLineLayout cell_vorec_pane(TInt aIndex_t)		{ return (*(Tcell_vorec_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_vorec_pane)))(aIndex_t); }

inline TAknWindowLineLayout cell_gms_pane(TInt aIndex_l, TInt aIndex_t)		{ return (*(Tcell_gms_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_gms_pane)))(aIndex_l, aIndex_t); }

inline TAknWindowLineLayout cell_mp_pane(TInt aIndex_t)		{ return (*(Tcell_mp_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_mp_pane)))(aIndex_t); }

inline TAknLayoutTableLimits Grid_pane_descendants_SUB_TABLE_0_Limits()		{ return (*(TGrid_pane_descendants_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Grid_pane_descendants_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Grid_pane_descendants_SUB_TABLE_0(TInt aLineIndex, TInt aIndex_l, TInt aIndex_t)		{ return (*(TGrid_pane_descendants_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Grid_pane_descendants_SUB_TABLE_0)))(aLineIndex, aIndex_l, aIndex_t); }

// LAF Table : Cell pane elements (pinb)
inline TAknWindowLineLayout Cell_pane_elements__pinb__Line_1()		{ return (*(TCell_pane_elements__pinb__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__pinb__Line_1)))(); }

inline TAknWindowLineLayout Cell_pane_elements__pinb__Line_2()		{ return (*(TCell_pane_elements__pinb__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__pinb__Line_2)))(); }

inline TAknWindowLineLayout Cell_pane_elements__pinb__Line_3()		{ return (*(TCell_pane_elements__pinb__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__pinb__Line_3)))(); }

inline TAknLayoutTableLimits Cell_pane_elements__pinb__Limits()		{ return (*(TCell_pane_elements__pinb__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__pinb__Limits)))(); }

inline TAknWindowLineLayout Cell_pane_elements__pinb_(TInt aLineIndex)		{ return (*(TCell_pane_elements__pinb__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__pinb_)))(aLineIndex); }

// LAF Table : Cell pane elements (qdial)
inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_1()		{ return (*(TCell_pane_elements__qdial__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_1)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_2()		{ return (*(TCell_pane_elements__qdial__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_2)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_3()		{ return (*(TCell_pane_elements__qdial__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_3)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_4()		{ return (*(TCell_pane_elements__qdial__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_4)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_5()		{ return (*(TCell_pane_elements__qdial__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_5)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_6()		{ return (*(TCell_pane_elements__qdial__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_6)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_7()		{ return (*(TCell_pane_elements__qdial__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_7)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_8()		{ return (*(TCell_pane_elements__qdial__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_8)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_9()		{ return (*(TCell_pane_elements__qdial__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_9)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_10()		{ return (*(TCell_pane_elements__qdial__Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_10)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_11()		{ return (*(TCell_pane_elements__qdial__Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_11)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_12()		{ return (*(TCell_pane_elements__qdial__Line_12_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_12)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_13()		{ return (*(TCell_pane_elements__qdial__Line_13_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_13)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_14()		{ return (*(TCell_pane_elements__qdial__Line_14_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_14)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_15()		{ return (*(TCell_pane_elements__qdial__Line_15_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_15)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_16()		{ return (*(TCell_pane_elements__qdial__Line_16_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_16)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_17()		{ return (*(TCell_pane_elements__qdial__Line_17_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_17)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_18()		{ return (*(TCell_pane_elements__qdial__Line_18_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_18)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_19()		{ return (*(TCell_pane_elements__qdial__Line_19_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_19)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_20()		{ return (*(TCell_pane_elements__qdial__Line_20_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_20)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_21()		{ return (*(TCell_pane_elements__qdial__Line_21_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Line_21)))(); }

inline TAknLayoutTableLimits Cell_pane_elements__qdial__Limits()		{ return (*(TCell_pane_elements__qdial__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial__Limits)))(); }

inline TAknWindowLineLayout Cell_pane_elements__qdial_(TInt aLineIndex)		{ return (*(TCell_pane_elements__qdial__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__qdial_)))(aLineIndex); }

// LAF Table : Cell pane texts (qdial)
inline TAknTextLineLayout Cell_pane_texts__qdial__Line_1(TInt aIndex_l, TInt aCommon1, TInt aIndex_W)		{ return (*(TCell_pane_texts__qdial__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_texts__qdial__Line_1)))(aIndex_l, aCommon1, aIndex_W); }

inline TAknMultiLineTextLayout Multiline_Cell_pane_texts__qdial__Line_1(TInt aIndex_l, TInt aCommon1, TInt aIndex_W, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Cell_pane_texts__qdial__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Cell_pane_texts__qdial__Line_1)))(aIndex_l, aCommon1, aIndex_W, aNumberOfLinesShown); }

// LAF Table : Cell pane elements (cale month)
inline TAknWindowLineLayout Cell_pane_elements__cale_month__Line_1(TInt aIndex_C, TInt aIndex_W)		{ return (*(TCell_pane_elements__cale_month__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__cale_month__Line_1)))(aIndex_C, aIndex_W); }

inline TAknWindowLineLayout Cell_pane_elements__cale_month__Line_2(TInt aIndex_l)		{ return (*(TCell_pane_elements__cale_month__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__cale_month__Line_2)))(aIndex_l); }

// LAF Table : Cell pane texts (cale month)
inline TAknTextLineLayout Cell_pane_texts__cale_month__Line_1(TInt aIndex_C, TInt aCommon1)		{ return (*(TCell_pane_texts__cale_month__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_texts__cale_month__Line_1)))(aIndex_C, aCommon1); }

// LAF Table : Cell pane elements (calc)
inline TAknWindowLineLayout Cell_pane_elements__calc__Line_1()		{ return (*(TCell_pane_elements__calc__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__calc__Line_1)))(); }

// LAF Table : Cell pane elements (cale week)
inline TAknWindowLineLayout Cell_pane_elements__cale_week__Line_1(const TRect& aParentRect, TInt aIndex_C)		{ return (*(TCell_pane_elements__cale_week__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__cale_week__Line_1)))(aParentRect, aIndex_C); }

inline TAknWindowLineLayout Cell_pane_elements__cale_week__Line_2(TInt aIndex_t)		{ return (*(TCell_pane_elements__cale_week__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__cale_week__Line_2)))(aIndex_t); }

inline TAknWindowLineLayout Cell_pane_elements__cale_week__Line_3(TInt aIndex_t)		{ return (*(TCell_pane_elements__cale_week__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__cale_week__Line_3)))(aIndex_t); }

inline TAknWindowLineLayout Cell_pane_elements__cale_week__Line_4()		{ return (*(TCell_pane_elements__cale_week__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__cale_week__Line_4)))(); }

inline TAknLayoutTableLimits Cell_pane_elements__cale_week__SUB_TABLE_0_Limits()		{ return (*(TCell_pane_elements__cale_week__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__cale_week__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Cell_pane_elements__cale_week__SUB_TABLE_0(TInt aLineIndex, TInt aIndex_t)		{ return (*(TCell_pane_elements__cale_week__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__cale_week__SUB_TABLE_0)))(aLineIndex, aIndex_t); }

// LAF Table : Voice Recorder cell elements
inline TAknWindowLineLayout Voice_Recorder_cell_elements_Line_1()		{ return (*(TVoice_Recorder_cell_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_cell_elements_Line_1)))(); }

// LAF Table : Graphical message cell elements
inline TAknWindowLineLayout Graphical_message_cell_elements_Line_1()		{ return (*(TGraphical_message_cell_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_cell_elements_Line_1)))(); }

inline TAknWindowLineLayout Graphical_message_cell_elements_Line_2()		{ return (*(TGraphical_message_cell_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_cell_elements_Line_2)))(); }

inline TAknLayoutTableLimits Graphical_message_cell_elements_Limits()		{ return (*(TGraphical_message_cell_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_cell_elements_Limits)))(); }

inline TAknWindowLineLayout Graphical_message_cell_elements(TInt aLineIndex)		{ return (*(TGraphical_message_cell_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_cell_elements)))(aLineIndex); }

// LAF Table : MediaPlayer cell elements
inline TAknWindowLineLayout MediaPlayer_cell_elements_Line_1()		{ return (*(TMediaPlayer_cell_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_MediaPlayer_cell_elements_Line_1)))(); }

// LAF Table : Cell pane highlight elements (various)
inline TAknWindowLineLayout Cell_pane_highlight_elements__various__Line_1(const TRect& aParentRect)		{ return (*(TCell_pane_highlight_elements__various__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_highlight_elements__various__Line_1)))(aParentRect); }

// LAF Table : Cell pane highlight elements (qdial)
inline TAknWindowLineLayout Cell_pane_highlight_elements__qdial__Line_1(const TRect& aParentRect)		{ return (*(TCell_pane_highlight_elements__qdial__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_highlight_elements__qdial__Line_1)))(aParentRect); }

inline TAknWindowLineLayout Cell_pane_highlight_elements__qdial__Line_2()		{ return (*(TCell_pane_highlight_elements__qdial__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_highlight_elements__qdial__Line_2)))(); }

// LAF Table : Browser texts
inline TAknTextLineLayout Browser_texts_Line_1(TInt aIndex_C, TInt aIndex_B)		{ return (*(TBrowser_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_texts_Line_1)))(aIndex_C, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Browser_texts_Line_1(TInt aIndex_C, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Browser_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Browser_texts_Line_1)))(aIndex_C, aNumberOfLinesShown); }

inline TAknTextLineLayout Browser_texts_Line_2(TInt aIndex_C, TInt aIndex_B)		{ return (*(TBrowser_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_texts_Line_2)))(aIndex_C, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Browser_texts_Line_2(TInt aIndex_C, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Browser_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Browser_texts_Line_2)))(aIndex_C, aNumberOfLinesShown); }

inline TAknTextLineLayout Browser_texts_Line_3(TInt aIndex_C, TInt aIndex_B)		{ return (*(TBrowser_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_texts_Line_3)))(aIndex_C, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Browser_texts_Line_3(TInt aIndex_C, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Browser_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Browser_texts_Line_3)))(aIndex_C, aNumberOfLinesShown); }

inline TAknLayoutTableLimits Browser_texts_Limits()		{ return (*(TBrowser_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_texts_Limits)))(); }

inline TAknTextLineLayout Browser_texts(TInt aLineIndex, TInt aIndex_C, TInt aIndex_B)		{ return (*(TBrowser_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_texts)))(aLineIndex, aIndex_C, aIndex_B); }

// LAF Table : Browser selection box elements
inline TAknWindowLineLayout Browser_selection_box_elements_Line_1()		{ return (*(TBrowser_selection_box_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_selection_box_elements_Line_1)))(); }

inline TAknWindowLineLayout Browser_selection_box_elements_Line_2()		{ return (*(TBrowser_selection_box_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_selection_box_elements_Line_2)))(); }

inline TAknWindowLineLayout Browser_selection_box_elements_Line_3()		{ return (*(TBrowser_selection_box_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_selection_box_elements_Line_3)))(); }

inline TAknWindowLineLayout Browser_selection_box_elements_Line_4()		{ return (*(TBrowser_selection_box_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_selection_box_elements_Line_4)))(); }

inline TAknLayoutTableLimits Browser_selection_box_elements_Limits()		{ return (*(TBrowser_selection_box_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_selection_box_elements_Limits)))(); }

inline TAknWindowLineLayout Browser_selection_box_elements(TInt aLineIndex)		{ return (*(TBrowser_selection_box_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_selection_box_elements)))(aLineIndex); }

// LAF Table : Browser highlights
inline TAknWindowLineLayout Browser_highlights_Line_1(const TRect& aParentRect, TInt aCommon1)		{ return (*(TBrowser_highlights_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_highlights_Line_1)))(aParentRect, aCommon1); }

inline TAknWindowLineLayout Browser_highlights_Line_2(const TRect& aParentRect, TInt aCommon1)		{ return (*(TBrowser_highlights_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_highlights_Line_2)))(aParentRect, aCommon1); }

inline TAknLayoutTableLimits Browser_highlights_Limits()		{ return (*(TBrowser_highlights_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_highlights_Limits)))(); }

inline TAknWindowLineLayout Browser_highlights(TInt aLineIndex, const TRect& aParentRect, TInt aCommon1)		{ return (*(TBrowser_highlights_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_highlights)))(aLineIndex, aParentRect, aCommon1); }

// LAF Table : Browser text link underlining
inline TAknWindowLineLayout Browser_text_link_underlining_Line_1(const TRect& aParentRect, TInt aIndex_W)		{ return (*(TBrowser_text_link_underlining_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_text_link_underlining_Line_1)))(aParentRect, aIndex_W); }

// LAF Table : Browser table frame graphics and highlight
inline TAknWindowLineLayout Browser_table_frame_graphics_and_highlight_Line_1()		{ return (*(TBrowser_table_frame_graphics_and_highlight_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_table_frame_graphics_and_highlight_Line_1)))(); }

inline TAknWindowLineLayout Browser_table_frame_graphics_and_highlight_Line_2()		{ return (*(TBrowser_table_frame_graphics_and_highlight_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_table_frame_graphics_and_highlight_Line_2)))(); }

inline TAknLayoutTableLimits Browser_table_frame_graphics_and_highlight_Limits()		{ return (*(TBrowser_table_frame_graphics_and_highlight_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_table_frame_graphics_and_highlight_Limits)))(); }

inline TAknWindowLineLayout Browser_table_frame_graphics_and_highlight(TInt aLineIndex)		{ return (*(TBrowser_table_frame_graphics_and_highlight_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_table_frame_graphics_and_highlight)))(aLineIndex); }

// LAF Table : Browser image frame and highlight
inline TAknWindowLineLayout Browser_image_frame_and_highlight_Line_1(TInt aIndex_C)		{ return (*(TBrowser_image_frame_and_highlight_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_frame_and_highlight_Line_1)))(aIndex_C); }

inline TAknWindowLineLayout Browser_image_frame_and_highlight_Line_2()		{ return (*(TBrowser_image_frame_and_highlight_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_frame_and_highlight_Line_2)))(); }

inline TAknWindowLineLayout Browser_image_frame_and_highlight_Line_3()		{ return (*(TBrowser_image_frame_and_highlight_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_frame_and_highlight_Line_3)))(); }

inline TAknLayoutTableLimits Browser_image_frame_and_highlight_SUB_TABLE_0_Limits()		{ return (*(TBrowser_image_frame_and_highlight_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_frame_and_highlight_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Browser_image_frame_and_highlight_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TBrowser_image_frame_and_highlight_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_image_frame_and_highlight_SUB_TABLE_0)))(aLineIndex); }

// LAF Table : Browser broken image
inline TAknWindowLineLayout Browser_broken_image_Line_1()		{ return (*(TBrowser_broken_image_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_broken_image_Line_1)))(); }

inline TAknWindowLineLayout Browser_broken_image_Line_2()		{ return (*(TBrowser_broken_image_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_broken_image_Line_2)))(); }

inline TAknWindowLineLayout Browser_broken_image_Line_3()		{ return (*(TBrowser_broken_image_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_broken_image_Line_3)))(); }

inline TAknLayoutTableLimits Browser_broken_image_Limits()		{ return (*(TBrowser_broken_image_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_broken_image_Limits)))(); }

inline TAknWindowLineLayout Browser_broken_image(TInt aLineIndex)		{ return (*(TBrowser_broken_image_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_broken_image)))(aLineIndex); }

// LAF Table : Browser broken image text
inline TAknTextLineLayout Browser_broken_image_text_Line_1()		{ return (*(TBrowser_broken_image_text_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_broken_image_text_Line_1)))(); }

// LAF Table : Calendar Day view elements and descendants
inline TAknWindowLineLayout Calendar_Day_view_elements_and_descendants_Line_1()		{ return (*(TCalendar_Day_view_elements_and_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Day_view_elements_and_descendants_Line_1)))(); }

inline TAknWindowLineLayout Calendar_Day_view_elements_and_descendants_Line_2()		{ return (*(TCalendar_Day_view_elements_and_descendants_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Day_view_elements_and_descendants_Line_2)))(); }

inline TAknWindowLineLayout Calendar_Day_view_elements_and_descendants_Line_3()		{ return (*(TCalendar_Day_view_elements_and_descendants_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Day_view_elements_and_descendants_Line_3)))(); }

inline TAknWindowLineLayout list_cale_pane()		{ return (*(Tlist_cale_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_cale_pane)))(); }

inline TAknLayoutTableLimits Calendar_Day_view_elements_and_descendants_Limits()		{ return (*(TCalendar_Day_view_elements_and_descendants_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Day_view_elements_and_descendants_Limits)))(); }

inline TAknWindowLineLayout Calendar_Day_view_elements_and_descendants(TInt aLineIndex)		{ return (*(TCalendar_Day_view_elements_and_descendants_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Day_view_elements_and_descendants)))(aLineIndex); }

// LAF Table : List pane texts (cale time empty)
inline TAknTextLineLayout List_pane_texts__cale_time_empty__Line_1(TInt aIndex_B)		{ return (*(TList_pane_texts__cale_time_empty__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__cale_time_empty__Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_List_pane_texts__cale_time_empty__Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_List_pane_texts__cale_time_empty__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_List_pane_texts__cale_time_empty__Line_1)))(aNumberOfLinesShown); }

// LAF Table : Calendar Week view elements
inline TAknWindowLineLayout Calendar_Week_view_elements_Line_1()		{ return (*(TCalendar_Week_view_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Week_view_elements_Line_1)))(); }

inline TAknWindowLineLayout Calendar_Week_view_elements_Line_2()		{ return (*(TCalendar_Week_view_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Week_view_elements_Line_2)))(); }

inline TAknWindowLineLayout Calendar_Week_view_elements_Line_3()		{ return (*(TCalendar_Week_view_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Week_view_elements_Line_3)))(); }

inline TAknWindowLineLayout Calendar_Week_view_elements_Line_4()		{ return (*(TCalendar_Week_view_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Week_view_elements_Line_4)))(); }

inline TAknWindowLineLayout Calendar_Week_view_elements_Line_5()		{ return (*(TCalendar_Week_view_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Week_view_elements_Line_5)))(); }

inline TAknWindowLineLayout Calendar_Week_view_elements_Line_6(TInt aIndex_l)		{ return (*(TCalendar_Week_view_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Week_view_elements_Line_6)))(aIndex_l); }

inline TAknWindowLineLayout Calendar_Week_view_elements_Line_7(TInt aIndex_t)		{ return (*(TCalendar_Week_view_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Week_view_elements_Line_7)))(aIndex_t); }

inline TAknWindowLineLayout Calendar_Week_view_elements_Line_8(TInt aIndex_t)		{ return (*(TCalendar_Week_view_elements_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Week_view_elements_Line_8)))(aIndex_t); }

inline TAknWindowLineLayout grid_cale_week_pane()		{ return (*(Tgrid_cale_week_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_cale_week_pane)))(); }

inline TAknLayoutTableLimits Calendar_Week_view_elements_SUB_TABLE_0_Limits()		{ return (*(TCalendar_Week_view_elements_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Week_view_elements_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Calendar_Week_view_elements_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TCalendar_Week_view_elements_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Week_view_elements_SUB_TABLE_0)))(aLineIndex); }

// LAF Table : Calendar Week view texts
inline TAknTextLineLayout Calendar_Week_view_texts_Line_1(TInt aCommon1)		{ return (*(TCalendar_Week_view_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Week_view_texts_Line_1)))(aCommon1); }

inline TAknTextLineLayout Calendar_Week_view_texts_Line_2(TInt aIndex_B)		{ return (*(TCalendar_Week_view_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Week_view_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Calendar_Week_view_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Calendar_Week_view_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Calendar_Week_view_texts_Line_2)))(aNumberOfLinesShown); }

// LAF Table : Calendar Month view elements
inline TAknWindowLineLayout Calendar_Month_view_elements_Line_1()		{ return (*(TCalendar_Month_view_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Month_view_elements_Line_1)))(); }

inline TAknWindowLineLayout Calendar_Month_view_elements_Line_2()		{ return (*(TCalendar_Month_view_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Month_view_elements_Line_2)))(); }

inline TAknWindowLineLayout Calendar_Month_view_elements_Line_3()		{ return (*(TCalendar_Month_view_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Month_view_elements_Line_3)))(); }

inline TAknWindowLineLayout Calendar_Month_view_elements_Line_4()		{ return (*(TCalendar_Month_view_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Month_view_elements_Line_4)))(); }

inline TAknWindowLineLayout Calendar_Month_view_elements_Line_5()		{ return (*(TCalendar_Month_view_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Month_view_elements_Line_5)))(); }

inline TAknWindowLineLayout Calendar_Month_view_elements_Line_6(TInt aIndex_l)		{ return (*(TCalendar_Month_view_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Month_view_elements_Line_6)))(aIndex_l); }

inline TAknWindowLineLayout Calendar_Month_view_elements_Line_7(TInt aCommon1, TInt aIndex_t)		{ return (*(TCalendar_Month_view_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Month_view_elements_Line_7)))(aCommon1, aIndex_t); }

inline TAknWindowLineLayout grid_cale_month_pane(TInt aCommon1)		{ return (*(Tgrid_cale_month_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_cale_month_pane)))(aCommon1); }

inline TAknLayoutTableLimits Calendar_Month_view_elements_SUB_TABLE_0_Limits()		{ return (*(TCalendar_Month_view_elements_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Month_view_elements_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Calendar_Month_view_elements_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TCalendar_Month_view_elements_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Month_view_elements_SUB_TABLE_0)))(aLineIndex); }

// LAF Table : Calendar Month view texts
inline TAknTextLineLayout Calendar_Month_view_texts_Line_1(TInt aCommon1)		{ return (*(TCalendar_Month_view_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Month_view_texts_Line_1)))(aCommon1); }

inline TAknTextLineLayout Calendar_Month_view_texts_Line_2(TInt aIndex_B)		{ return (*(TCalendar_Month_view_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_Month_view_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Calendar_Month_view_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Calendar_Month_view_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Calendar_Month_view_texts_Line_2)))(aNumberOfLinesShown); }

// LAF Table : Calculator elements
inline TAknWindowLineLayout Calculator_elements_Line_1()		{ return (*(TCalculator_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_elements_Line_1)))(); }

inline TAknWindowLineLayout gqn_graf_calc_paper()		{ return (*(Tgqn_graf_calc_paper_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_gqn_graf_calc_paper)))(); }

inline TAknWindowLineLayout Calculator_elements_Line_3(TInt aIndex_t)		{ return (*(TCalculator_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_elements_Line_3)))(aIndex_t); }

inline TAknWindowLineLayout grid_calc_pane()		{ return (*(Tgrid_calc_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_calc_pane)))(); }

inline TAknLayoutTableLimits Calculator_elements_SUB_TABLE_0_Limits()		{ return (*(TCalculator_elements_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_elements_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Calculator_elements_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TCalculator_elements_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_elements_SUB_TABLE_0)))(aLineIndex); }

// LAF Table : Calculator texts
inline TAknTextLineLayout Calculator_texts_Line_1()		{ return (*(TCalculator_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_texts_Line_1)))(); }

inline TAknTextLineLayout Calculator_texts_Line_2()		{ return (*(TCalculator_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_texts_Line_2)))(); }

inline TAknTextLineLayout Calculator_texts_Line_3()		{ return (*(TCalculator_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_texts_Line_3)))(); }

inline TAknTextLineLayout Calculator_texts_Line_4()		{ return (*(TCalculator_texts_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_texts_Line_4)))(); }

inline TAknTextLineLayout Calculator_texts_Line_5()		{ return (*(TCalculator_texts_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_texts_Line_5)))(); }

inline TAknTextLineLayout Calculator_texts_Line_6()		{ return (*(TCalculator_texts_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_texts_Line_6)))(); }

inline TAknTextLineLayout Calculator_texts_Line_7(TInt aIndex_B)		{ return (*(TCalculator_texts_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_texts_Line_7)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Calculator_texts_Line_7(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Calculator_texts_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Calculator_texts_Line_7)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Calculator_texts_Line_8(TInt aIndex_B)		{ return (*(TCalculator_texts_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_texts_Line_8)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Calculator_texts_Line_8(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Calculator_texts_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Calculator_texts_Line_8)))(aNumberOfLinesShown); }

inline TAknLayoutTableLimits Calculator_texts_SUB_TABLE_0_Limits()		{ return (*(TCalculator_texts_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_texts_SUB_TABLE_0_Limits)))(); }

inline TAknTextLineLayout Calculator_texts_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TCalculator_texts_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_texts_SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Calculator_texts_SUB_TABLE_1_Limits()		{ return (*(TCalculator_texts_SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_texts_SUB_TABLE_1_Limits)))(); }

inline TAknTextLineLayout Calculator_texts_SUB_TABLE_1(TInt aLineIndex, TInt aIndex_B)		{ return (*(TCalculator_texts_SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calculator_texts_SUB_TABLE_1)))(aLineIndex, aIndex_B); }

// LAF Table : Real Time Alarm Clock view descendants panes and elements
inline TAknWindowLineLayout popup_clock__ref__window()		{ return (*(Tpopup_clock__ref__window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_clock__ref__window)))(); }

inline TAknWindowLineLayout Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_2()		{ return (*(TReal_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_2)))(); }

inline TAknWindowLineLayout Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_3()		{ return (*(TReal_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_3)))(); }

inline TAknWindowLineLayout Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_4()		{ return (*(TReal_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_4)))(); }

inline TAknWindowLineLayout Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_5()		{ return (*(TReal_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_5)))(); }

inline TAknLayoutTableLimits Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Limits()		{ return (*(TReal_Time_Alarm_Clock_view_descendants_panes_and_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Limits)))(); }

inline TAknWindowLineLayout Real_Time_Alarm_Clock_view_descendants_panes_and_elements(TInt aLineIndex)		{ return (*(TReal_Time_Alarm_Clock_view_descendants_panes_and_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_descendants_panes_and_elements)))(aLineIndex); }

// LAF Table : Real Time Alarm Clock view texts (skins)
inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__Line_1(TInt aCommon1)		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_texts__skins__Line_1)))(aCommon1); }

inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__Line_2(TInt aIndex_B)		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_texts__skins__Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Real_Time_Alarm_Clock_view_texts__skins__Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Real_Time_Alarm_Clock_view_texts__skins__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Real_Time_Alarm_Clock_view_texts__skins__Line_2)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__Line_3()		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_texts__skins__Line_3)))(); }

inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__Line_4(TInt aIndex_B)		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_texts__skins__Line_4)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Real_Time_Alarm_Clock_view_texts__skins__Line_4(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Real_Time_Alarm_Clock_view_texts__skins__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Real_Time_Alarm_Clock_view_texts__skins__Line_4)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__Line_5()		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_texts__skins__Line_5)))(); }

inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__Line_6()		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_texts__skins__Line_6)))(); }

inline TAknLayoutTableLimits Real_Time_Alarm_Clock_view_texts__skins__SUB_TABLE_0_Limits()		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_texts__skins__SUB_TABLE_0_Limits)))(); }

inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_Time_Alarm_Clock_view_texts__skins__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : Clock find pane elements
inline TAknWindowLineLayout Clock_find_pane_elements_Line_1()		{ return (*(TClock_find_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Clock_find_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Clock_find_pane_elements_Line_2()		{ return (*(TClock_find_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Clock_find_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Clock_find_pane_elements_Line_3()		{ return (*(TClock_find_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Clock_find_pane_elements_Line_3)))(); }

inline TAknWindowLineLayout Clock_find_pane_elements_Line_4()		{ return (*(TClock_find_pane_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Clock_find_pane_elements_Line_4)))(); }

inline TAknWindowLineLayout Clock_find_pane_elements_Line_5()		{ return (*(TClock_find_pane_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Clock_find_pane_elements_Line_5)))(); }

inline TAknLayoutTableLimits Clock_find_pane_elements_Limits()		{ return (*(TClock_find_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Clock_find_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Clock_find_pane_elements(TInt aLineIndex)		{ return (*(TClock_find_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Clock_find_pane_elements)))(aLineIndex); }

// LAF Table : Find pane texts
inline TAknTextLineLayout Find_pane_texts_Line_1()		{ return (*(TFind_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_texts_Line_1)))(); }

// LAF Table : Camcorder Still Image Viewfinder descendants and elements
inline TAknWindowLineLayout Near_QCIF()		{ return (*(TNear_QCIF_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Near_QCIF)))(); }

inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_2()		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_2)))(); }

inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_3()		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_3)))(); }

inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_4()		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_4)))(); }

inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_5()		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_5)))(); }

inline TAknLayoutTableLimits Camcorder_Still_Image_Viewfinder_descendants_and_elements_Limits()		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Limits)))(); }

inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements(TInt aLineIndex)		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements)))(aLineIndex); }

// LAF Table : Camcorder Zooming factor pane elements
inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_Line_1()		{ return (*(TCamcorder_Zooming_factor_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Zooming_factor_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_Line_2()		{ return (*(TCamcorder_Zooming_factor_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Zooming_factor_pane_elements_Line_2)))(); }

inline TAknLayoutTableLimits Camcorder_Zooming_factor_pane_elements_Limits()		{ return (*(TCamcorder_Zooming_factor_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Zooming_factor_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements(TInt aLineIndex)		{ return (*(TCamcorder_Zooming_factor_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Zooming_factor_pane_elements)))(aLineIndex); }

// LAF Table : Camcorder Still Image Viewfinder texts
inline TAknTextLineLayout Camcorder_Still_Image_Viewfinder_texts_Line_1()		{ return (*(TCamcorder_Still_Image_Viewfinder_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_texts_Line_1)))(); }

inline TAknTextLineLayout Camcorder_Still_Image_Viewfinder_texts_Line_2()		{ return (*(TCamcorder_Still_Image_Viewfinder_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_texts_Line_2)))(); }

inline TAknLayoutTableLimits Camcorder_Still_Image_Viewfinder_texts_Limits()		{ return (*(TCamcorder_Still_Image_Viewfinder_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_texts_Limits)))(); }

inline TAknTextLineLayout Camcorder_Still_Image_Viewfinder_texts(TInt aLineIndex)		{ return (*(TCamcorder_Still_Image_Viewfinder_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_texts)))(aLineIndex); }

// LAF Table : Camcorder Video Viewfinder descendants and elements
inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_1()		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_1)))(); }

inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_2()		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_2)))(); }

inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_3(TInt aIndex_C)		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_3)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_4(TInt aIndex_C)		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_4)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_5(TInt aIndex_C)		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_5)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_6(TInt aIndex_C)		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_6)))(aIndex_C); }

inline TAknLayoutTableLimits Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_0_Limits()		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_1_Limits()		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_1(TInt aLineIndex, TInt aIndex_C)		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_1)))(aLineIndex, aIndex_C); }

// LAF Table : Camcorder Video Recording descendants and elements
inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_1()		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_1)))(); }

inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_2()		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_2)))(); }

inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_3(TInt aIndex_C)		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_3)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_4(TInt aIndex_C)		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_4)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_5(TInt aIndex_C)		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_5)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_6(TInt aIndex_C)		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_6)))(aIndex_C); }

inline TAknLayoutTableLimits Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_0_Limits()		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_1_Limits()		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_1(TInt aLineIndex, TInt aIndex_C)		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_1)))(aLineIndex, aIndex_C); }

// LAF Table : Camcorder Duration texts
inline TAknTextLineLayout Camcorder_Duration_texts_Line_1()		{ return (*(TCamcorder_Duration_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Duration_texts_Line_1)))(); }

// LAF Table : Camcorder Post Recording elements
inline TAknWindowLineLayout QVGA()		{ return (*(TQVGA_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_QVGA)))(); }

inline TAknWindowLineLayout Camcorder_Video_Post_recording_elements_Line_2()		{ return (*(TCamcorder_Video_Post_recording_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Post_recording_elements_Line_2)))(); }

inline TAknWindowLineLayout Camcorder_Video_Post_recording_elements_Line_3()		{ return (*(TCamcorder_Video_Post_recording_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Post_recording_elements_Line_3)))(); }

inline TAknLayoutTableLimits Camcorder_Video_Post_recording_elements_Limits()		{ return (*(TCamcorder_Video_Post_recording_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Post_recording_elements_Limits)))(); }

inline TAknWindowLineLayout Camcorder_Video_Post_recording_elements(TInt aLineIndex)		{ return (*(TCamcorder_Video_Post_recording_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Post_recording_elements)))(aLineIndex); }

// LAF Table : Graphical message selection layout elements
inline TAknWindowLineLayout Graphical_message_selection_layout_elements_Line_1(TInt aIndex_t)		{ return (*(TGraphical_message_selection_layout_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_selection_layout_elements_Line_1)))(aIndex_t); }

inline TAknWindowLineLayout Graphical_message_selection_layout_elements_Line_2(TInt aIndex_l)		{ return (*(TGraphical_message_selection_layout_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_selection_layout_elements_Line_2)))(aIndex_l); }

inline TAknWindowLineLayout grid_gms_pane()		{ return (*(Tgrid_gms_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_gms_pane)))(); }

// LAF Table : Help texts
inline TAknTextLineLayout Help_texts_Line_1(TInt aIndex_B)		{ return (*(THelp_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Help_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Help_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Help_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Help_texts_Line_1)))(aNumberOfLinesShown); }

// LAF Table : Phonebook Photo view elements
inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_1()		{ return (*(TPhonebook_Photo_view_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_Photo_view_elements_Line_1)))(); }

inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_2()		{ return (*(TPhonebook_Photo_view_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_Photo_view_elements_Line_2)))(); }

inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_3()		{ return (*(TPhonebook_Photo_view_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_Photo_view_elements_Line_3)))(); }

inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_4()		{ return (*(TPhonebook_Photo_view_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_Photo_view_elements_Line_4)))(); }

inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_5()		{ return (*(TPhonebook_Photo_view_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_Photo_view_elements_Line_5)))(); }

inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_6()		{ return (*(TPhonebook_Photo_view_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_Photo_view_elements_Line_6)))(); }

inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_7()		{ return (*(TPhonebook_Photo_view_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_Photo_view_elements_Line_7)))(); }

inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_8()		{ return (*(TPhonebook_Photo_view_elements_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_Photo_view_elements_Line_8)))(); }

inline TAknLayoutTableLimits Phonebook_Photo_view_elements_Limits()		{ return (*(TPhonebook_Photo_view_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_Photo_view_elements_Limits)))(); }

inline TAknWindowLineLayout Phonebook_Photo_view_elements(TInt aLineIndex)		{ return (*(TPhonebook_Photo_view_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_Photo_view_elements)))(aLineIndex); }

// LAF Table : Presence status list components
inline TAknWindowLineLayout Presence_status_list_components_Line_1()		{ return (*(TPresence_status_list_components_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_list_components_Line_1)))(); }

inline TAknWindowLineLayout Presence_status_list_components_Line_2()		{ return (*(TPresence_status_list_components_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_list_components_Line_2)))(); }

inline TAknWindowLineLayout Presence_status_list_components_Line_3()		{ return (*(TPresence_status_list_components_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_list_components_Line_3)))(); }

inline TAknWindowLineLayout image_or_qgn_prop_dyc_big__ref_()		{ return (*(Timage_or_qgn_prop_dyc_big__ref__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_image_or_qgn_prop_dyc_big__ref_)))(); }

// LAF Table : Presence status list texts
inline TAknTextLineLayout Presence_status_list_texts_Line_1(TInt aIndex_B)		{ return (*(TPresence_status_list_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_list_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Presence_status_list_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Presence_status_list_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Presence_status_list_texts_Line_1)))(aNumberOfLinesShown); }

// LAF Table : Pinboard elements (grid)
inline TAknWindowLineLayout Pinboard_elements__grid__Line_1()		{ return (*(TPinboard_elements__grid__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__grid__Line_1)))(); }

inline TAknWindowLineLayout Pinboard_elements__grid__Line_2()		{ return (*(TPinboard_elements__grid__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__grid__Line_2)))(); }

inline TAknWindowLineLayout Pinboard_elements__grid__Line_3()		{ return (*(TPinboard_elements__grid__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__grid__Line_3)))(); }

inline TAknWindowLineLayout Pinboard_elements__grid__Line_4(TInt aCommon1)		{ return (*(TPinboard_elements__grid__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__grid__Line_4)))(aCommon1); }

inline TAknWindowLineLayout Pinboard_elements__grid__Line_5()		{ return (*(TPinboard_elements__grid__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__grid__Line_5)))(); }

inline TAknWindowLineLayout Pinboard_elements__grid__Line_6(TInt aCommon1)		{ return (*(TPinboard_elements__grid__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__grid__Line_6)))(aCommon1); }

inline TAknWindowLineLayout Pinboard_elements__grid__Line_7()		{ return (*(TPinboard_elements__grid__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__grid__Line_7)))(); }

inline TAknWindowLineLayout find_pinb_pane()		{ return (*(Tfind_pinb_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_find_pinb_pane)))(); }

inline TAknLayoutTableLimits Pinboard_elements__grid__SUB_TABLE_0_Limits()		{ return (*(TPinboard_elements__grid__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__grid__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Pinboard_elements__grid__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TPinboard_elements__grid__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__grid__SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Pinboard_elements__grid__SUB_TABLE_1_Limits()		{ return (*(TPinboard_elements__grid__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__grid__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Pinboard_elements__grid__SUB_TABLE_1(TInt aLineIndex)		{ return (*(TPinboard_elements__grid__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__grid__SUB_TABLE_1)))(aLineIndex); }

// LAF Table : Find pane elements (pinb)
inline TAknWindowLineLayout Find_pane_elements__pinb__Line_1()		{ return (*(TFind_pane_elements__pinb__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements__pinb__Line_1)))(); }

inline TAknWindowLineLayout Find_pane_elements__pinb__Line_2()		{ return (*(TFind_pane_elements__pinb__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements__pinb__Line_2)))(); }

inline TAknWindowLineLayout Find_pane_elements__pinb__Line_3()		{ return (*(TFind_pane_elements__pinb__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements__pinb__Line_3)))(); }

inline TAknWindowLineLayout Find_pane_elements__pinb__Line_4()		{ return (*(TFind_pane_elements__pinb__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements__pinb__Line_4)))(); }

inline TAknLayoutTableLimits Find_pane_elements__pinb__Limits()		{ return (*(TFind_pane_elements__pinb__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements__pinb__Limits)))(); }

inline TAknWindowLineLayout Find_pane_elements__pinb_(TInt aLineIndex)		{ return (*(TFind_pane_elements__pinb__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements__pinb_)))(aLineIndex); }

// LAF Table : Find pane texts (pinb)
inline TAknTextLineLayout Find_pane_texts__pinb__Line_1()		{ return (*(TFind_pane_texts__pinb__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_texts__pinb__Line_1)))(); }

inline TAknTextLineLayout Find_pane_texts__pinb__Line_2()		{ return (*(TFind_pane_texts__pinb__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_texts__pinb__Line_2)))(); }

inline TAknLayoutTableLimits Find_pane_texts__pinb__Limits()		{ return (*(TFind_pane_texts__pinb__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_texts__pinb__Limits)))(); }

inline TAknTextLineLayout Find_pane_texts__pinb_(TInt aLineIndex)		{ return (*(TFind_pane_texts__pinb__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_texts__pinb_)))(aLineIndex); }

// LAF Table : Pinboard elements (list)
inline TAknWindowLineLayout Pinboard_elements__list__Line_1()		{ return (*(TPinboard_elements__list__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__list__Line_1)))(); }

inline TAknWindowLineLayout Pinboard_elements__list__Line_2()		{ return (*(TPinboard_elements__list__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__list__Line_2)))(); }

inline TAknWindowLineLayout Pinboard_elements__list__Line_3()		{ return (*(TPinboard_elements__list__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__list__Line_3)))(); }

inline TAknWindowLineLayout Pinboard_elements__list__Line_4(TInt aCommon1)		{ return (*(TPinboard_elements__list__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__list__Line_4)))(aCommon1); }

inline TAknWindowLineLayout Pinboard_elements__list__Line_5()		{ return (*(TPinboard_elements__list__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__list__Line_5)))(); }

inline TAknWindowLineLayout Pinboard_elements__list__Line_6(TInt aCommon1)		{ return (*(TPinboard_elements__list__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__list__Line_6)))(aCommon1); }

inline TAknWindowLineLayout list_pinb_pane()		{ return (*(Tlist_pinb_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_pinb_pane)))(); }

inline TAknLayoutTableLimits Pinboard_elements__list__SUB_TABLE_0_Limits()		{ return (*(TPinboard_elements__list__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__list__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Pinboard_elements__list__SUB_TABLE_0(TInt aLineIndex)		{ return (*(TPinboard_elements__list__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinboard_elements__list__SUB_TABLE_0)))(aLineIndex); }

// LAF Table : Speed Dial descendants
inline TAknWindowLineLayout Speed_Dial_descendants_Line_1()		{ return (*(TSpeed_Dial_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Speed_Dial_descendants_Line_1)))(); }

// LAF Table : Voice Recorder elements
inline TAknWindowLineLayout grid_vorec_pane()		{ return (*(Tgrid_vorec_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_vorec_pane)))(); }

inline TAknWindowLineLayout Voice_Recorder_elements_Line_2()		{ return (*(TVoice_Recorder_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_elements_Line_2)))(); }

inline TAknWindowLineLayout Voice_Recorder_elements_Line_3()		{ return (*(TVoice_Recorder_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_elements_Line_3)))(); }

inline TAknWindowLineLayout Voice_Recorder_elements_Line_4()		{ return (*(TVoice_Recorder_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_elements_Line_4)))(); }

inline TAknWindowLineLayout Voice_Recorder_elements_Line_5()		{ return (*(TVoice_Recorder_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_elements_Line_5)))(); }

inline TAknLayoutTableLimits Voice_Recorder_elements_Limits()		{ return (*(TVoice_Recorder_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_elements_Limits)))(); }

inline TAknWindowLineLayout Voice_Recorder_elements(TInt aLineIndex)		{ return (*(TVoice_Recorder_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_elements)))(aLineIndex); }

// LAF Table : Voice Recorder texts
inline TAknTextLineLayout Voice_Recorder_texts_Line_1()		{ return (*(TVoice_Recorder_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_texts_Line_1)))(); }

inline TAknTextLineLayout Voice_Recorder_texts_Line_2()		{ return (*(TVoice_Recorder_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_texts_Line_2)))(); }

inline TAknTextLineLayout Voice_Recorder_texts_Line_3()		{ return (*(TVoice_Recorder_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_texts_Line_3)))(); }

inline TAknTextLineLayout Voice_Recorder_texts_Line_4()		{ return (*(TVoice_Recorder_texts_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_texts_Line_4)))(); }

inline TAknTextLineLayout Voice_Recorder_texts_Line_5()		{ return (*(TVoice_Recorder_texts_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_texts_Line_5)))(); }

inline TAknTextLineLayout Voice_Recorder_texts_Line_6()		{ return (*(TVoice_Recorder_texts_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_texts_Line_6)))(); }

inline TAknLayoutTableLimits Voice_Recorder_texts_Limits()		{ return (*(TVoice_Recorder_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_texts_Limits)))(); }

inline TAknTextLineLayout Voice_Recorder_texts(TInt aLineIndex)		{ return (*(TVoice_Recorder_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Voice_Recorder_texts)))(aLineIndex); }

// LAF Table : Message writing texts
inline TAknTextLineLayout Message_writing_texts_Line_1(TInt aIndex_B)		{ return (*(TMessage_writing_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Message_writing_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Message_writing_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Message_writing_texts_Line_1)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Message_writing_texts_Line_2(TInt aIndex_B)		{ return (*(TMessage_writing_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Message_writing_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Message_writing_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Message_writing_texts_Line_2)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Message_writing_texts_Line_3(TInt aIndex_B)		{ return (*(TMessage_writing_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_texts_Line_3)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Message_writing_texts_Line_3(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Message_writing_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Message_writing_texts_Line_3)))(aNumberOfLinesShown); }

inline TAknLayoutTableLimits Message_writing_texts_Limits()		{ return (*(TMessage_writing_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_texts_Limits)))(); }

inline TAknTextLineLayout Message_writing_texts(TInt aLineIndex, TInt aIndex_B)		{ return (*(TMessage_writing_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_texts)))(aLineIndex, aIndex_B); }

// LAF Table : Smart Messages
inline TAknTextLineLayout Smart_Messages_Line_1(TInt aIndex_B)		{ return (*(TSmart_Messages_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Smart_Messages_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Smart_Messages_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Smart_Messages_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Smart_Messages_Line_1)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Smart_Messages_Line_2(TInt aIndex_B)		{ return (*(TSmart_Messages_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Smart_Messages_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Smart_Messages_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Smart_Messages_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Smart_Messages_Line_2)))(aNumberOfLinesShown); }

inline TAknLayoutTableLimits Smart_Messages_Limits()		{ return (*(TSmart_Messages_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Smart_Messages_Limits)))(); }

inline TAknTextLineLayout Smart_Messages(TInt aLineIndex, TInt aIndex_B)		{ return (*(TSmart_Messages_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Smart_Messages)))(aLineIndex, aIndex_B); }

// LAF Table : Note writing layout elements
inline TAknWindowLineLayout Note_writing_layout_elements_Line_1()		{ return (*(TNote_writing_layout_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_writing_layout_elements_Line_1)))(); }

inline TAknWindowLineLayout Note_writing_layout_elements_Line_2()		{ return (*(TNote_writing_layout_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_writing_layout_elements_Line_2)))(); }

inline TAknWindowLineLayout Note_writing_layout_elements_Line_3()		{ return (*(TNote_writing_layout_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_writing_layout_elements_Line_3)))(); }

inline TAknWindowLineLayout Note_writing_layout_elements_Line_4()		{ return (*(TNote_writing_layout_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_writing_layout_elements_Line_4)))(); }

inline TAknWindowLineLayout Note_writing_layout_elements_Line_5(TInt aIndex_t)		{ return (*(TNote_writing_layout_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_writing_layout_elements_Line_5)))(aIndex_t); }

inline TAknLayoutTableLimits Note_writing_layout_elements_SUB_TABLE_0_Limits()		{ return (*(TNote_writing_layout_elements_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_writing_layout_elements_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Note_writing_layout_elements_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TNote_writing_layout_elements_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_writing_layout_elements_SUB_TABLE_0)))(aLineIndex); }

// LAF Table : Note writing texts
inline TAknTextLineLayout Note_writing_texts_Line_1(TInt aIndex_B)		{ return (*(TNote_writing_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Note_writing_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Note_writing_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Note_writing_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Note_writing_texts_Line_1)))(aNumberOfLinesShown); }

// LAF Table : IM chat view descendant panes
inline TAknWindowLineLayout im_reading_pane(TInt aIndex_H)		{ return (*(Tim_reading_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_im_reading_pane)))(aIndex_H); }

inline TAknWindowLineLayout im_writing_pane(TInt aCommon1)		{ return (*(Tim_writing_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_im_writing_pane)))(aCommon1); }

// LAF Table : IM navi pane texts
inline TAknTextLineLayout IM_navi_pane_texts_Line_1(TInt aIndex_C, TInt aIndex_W)		{ return (*(TIM_navi_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_navi_pane_texts_Line_1)))(aIndex_C, aIndex_W); }

// LAF Table : IM reading pane texts
inline TAknTextLineLayout IM_reading_pane_texts_Line_1(TInt aCommon1)		{ return (*(TIM_reading_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_reading_pane_texts_Line_1)))(aCommon1); }

inline TAknTextLineLayout IM_reading_pane_texts_Line_2()		{ return (*(TIM_reading_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_reading_pane_texts_Line_2)))(); }

inline TAknWindowLineLayout im_reading_field(TInt aIndex_t)		{ return (*(Tim_reading_field_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_im_reading_field)))(aIndex_t); }

// LAF Table : IM text elements
inline TAknWindowLineLayout IM_text_elements_Line_1()		{ return (*(TIM_text_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_text_elements_Line_1)))(); }

inline TAknWindowLineLayout IM_text_elements_Line_2()		{ return (*(TIM_text_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_text_elements_Line_2)))(); }

inline TAknWindowLineLayout smiley__qgn_prop_im_smileys__ref__()		{ return (*(Tsmiley__qgn_prop_im_smileys__ref___sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_smiley__qgn_prop_im_smileys__ref__)))(); }

inline TAknLayoutTableLimits IM_text_elements_Limits()		{ return (*(TIM_text_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_text_elements_Limits)))(); }

inline TAknWindowLineLayout IM_text_elements(TInt aLineIndex)		{ return (*(TIM_text_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_text_elements)))(aLineIndex); }

// LAF Table : IM reading field highlight graphics
inline TAknWindowLineLayout IM_reading_field_highlight_graphics_Line_1(const TRect& aParentRect)		{ return (*(TIM_reading_field_highlight_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_reading_field_highlight_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout IM_reading_field_highlight_graphics_Line_2(const TRect& aParentRect)		{ return (*(TIM_reading_field_highlight_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_reading_field_highlight_graphics_Line_2)))(aParentRect); }

inline TAknLayoutTableLimits IM_reading_field_highlight_graphics_Limits()		{ return (*(TIM_reading_field_highlight_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_reading_field_highlight_graphics_Limits)))(); }

inline TAknWindowLineLayout IM_reading_field_highlight_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TIM_reading_field_highlight_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_reading_field_highlight_graphics)))(aLineIndex, aParentRect); }

// LAF Table : IM writing field elements
inline TAknWindowLineLayout IM_writing_field_elements_Line_1(TInt aIndex_H)		{ return (*(TIM_writing_field_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_writing_field_elements_Line_1)))(aIndex_H); }

inline TAknWindowLineLayout IM_writing_field_elements_Line_2()		{ return (*(TIM_writing_field_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_writing_field_elements_Line_2)))(); }

inline TAknWindowLineLayout IM_writing_field_elements_Line_3(TInt aIndex_H)		{ return (*(TIM_writing_field_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_writing_field_elements_Line_3)))(aIndex_H); }

// LAF Table : IM writing pane texts
inline TAknTextLineLayout IM_writing_pane_texts_Line_1(TInt aIndex_B)		{ return (*(TIM_writing_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IM_writing_pane_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_IM_writing_pane_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_IM_writing_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_IM_writing_pane_texts_Line_1)))(aNumberOfLinesShown); }

// LAF Table : Media Player layout descendant pane
inline TAknWindowLineLayout mp_bg_pane()		{ return (*(Tmp_bg_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_mp_bg_pane)))(); }

// LAF Table : Empty Player view elements
inline TAknWindowLineLayout Empty_Player_view_elements_Line_1()		{ return (*(TEmpty_Player_view_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Empty_Player_view_elements_Line_1)))(); }

// LAF Table : Media Player Playback view navi pane elements
inline TAknWindowLineLayout Media_Player_Playback_view_navi_pane_elements_Line_1()		{ return (*(TMedia_Player_Playback_view_navi_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_navi_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Media_Player_Playback_view_navi_pane_elements_Line_2()		{ return (*(TMedia_Player_Playback_view_navi_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_navi_pane_elements_Line_2)))(); }

inline TAknLayoutTableLimits Media_Player_Playback_view_navi_pane_elements_Limits()		{ return (*(TMedia_Player_Playback_view_navi_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_navi_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Media_Player_Playback_view_navi_pane_elements(TInt aLineIndex)		{ return (*(TMedia_Player_Playback_view_navi_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_navi_pane_elements)))(aLineIndex); }

// LAF Table : Media Player Playback view navi pane texts
inline TAknTextLineLayout Media_Player_Playback_view_navi_pane_texts_Line_1()		{ return (*(TMedia_Player_Playback_view_navi_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_navi_pane_texts_Line_1)))(); }

// LAF Table : Media Player Playlist navi pane elements
inline TAknWindowLineLayout Media_Player_Playlist_navi_pane_elements_Line_1()		{ return (*(TMedia_Player_Playlist_navi_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playlist_navi_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Media_Player_Playlist_navi_pane_elements_Line_2()		{ return (*(TMedia_Player_Playlist_navi_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playlist_navi_pane_elements_Line_2)))(); }

inline TAknLayoutTableLimits Media_Player_Playlist_navi_pane_elements_Limits()		{ return (*(TMedia_Player_Playlist_navi_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playlist_navi_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Media_Player_Playlist_navi_pane_elements(TInt aLineIndex)		{ return (*(TMedia_Player_Playlist_navi_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playlist_navi_pane_elements)))(aLineIndex); }

// LAF Table : Media Player Playback view  elements
inline TAknWindowLineLayout grid_mp_pane()		{ return (*(Tgrid_mp_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_mp_pane)))(); }

inline TAknWindowLineLayout Media_Player_Playback_view_elements_Line_2()		{ return (*(TMedia_Player_Playback_view_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_elements_Line_2)))(); }

inline TAknWindowLineLayout Media_Player_Playback_view_elements_Line_3()		{ return (*(TMedia_Player_Playback_view_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_elements_Line_3)))(); }

inline TAknWindowLineLayout Media_Player_Playback_view_elements_Line_4()		{ return (*(TMedia_Player_Playback_view_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_elements_Line_4)))(); }

inline TAknWindowLineLayout Media_Player_Playback_view_elements_Line_5()		{ return (*(TMedia_Player_Playback_view_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_elements_Line_5)))(); }

inline TAknWindowLineLayout Media_Player_Playback_view_elements_Line_6()		{ return (*(TMedia_Player_Playback_view_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_elements_Line_6)))(); }

// LAF Table : Media Player Playback view texts
inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_1()		{ return (*(TMedia_Player_Playback_view_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_texts_Line_1)))(); }

inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_2()		{ return (*(TMedia_Player_Playback_view_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_texts_Line_2)))(); }

inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_3()		{ return (*(TMedia_Player_Playback_view_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_texts_Line_3)))(); }

inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_4()		{ return (*(TMedia_Player_Playback_view_texts_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_texts_Line_4)))(); }

inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_5()		{ return (*(TMedia_Player_Playback_view_texts_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_texts_Line_5)))(); }

inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_6()		{ return (*(TMedia_Player_Playback_view_texts_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_texts_Line_6)))(); }

inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_7()		{ return (*(TMedia_Player_Playback_view_texts_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_texts_Line_7)))(); }

inline TAknLayoutTableLimits Media_Player_Playback_view_texts_Limits()		{ return (*(TMedia_Player_Playback_view_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_texts_Limits)))(); }

inline TAknTextLineLayout Media_Player_Playback_view_texts(TInt aLineIndex)		{ return (*(TMedia_Player_Playback_view_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_Playback_view_texts)))(aLineIndex); }

// LAF Table : SMIL presentation attachment element
inline TAknWindowLineLayout SMIL_presentation_attachment_element_Line_1()		{ return (*(TSMIL_presentation_attachment_element_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_presentation_attachment_element_Line_1)))(); }

// LAF Table : SMIL presentation attachment highlight
inline TAknWindowLineLayout SMIL_presentation_attachment_highlight_Line_1()		{ return (*(TSMIL_presentation_attachment_highlight_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_presentation_attachment_highlight_Line_1)))(); }

inline TAknWindowLineLayout SMIL_presentation_attachment_highlight_Line_2()		{ return (*(TSMIL_presentation_attachment_highlight_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_presentation_attachment_highlight_Line_2)))(); }

inline TAknLayoutTableLimits SMIL_presentation_attachment_highlight_Limits()		{ return (*(TSMIL_presentation_attachment_highlight_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_presentation_attachment_highlight_Limits)))(); }

inline TAknWindowLineLayout SMIL_presentation_attachment_highlight(TInt aLineIndex)		{ return (*(TSMIL_presentation_attachment_highlight_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_presentation_attachment_highlight)))(aLineIndex); }

// LAF Table : SMIL presentation elements and descendant panes
inline TAknWindowLineLayout SMIL_presentation_elements_and_descendant_panes_Line_1()		{ return (*(TSMIL_presentation_elements_and_descendant_panes_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_presentation_elements_and_descendant_panes_Line_1)))(); }

inline TAknWindowLineLayout smil_status_pane()		{ return (*(Tsmil_status_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_smil_status_pane)))(); }

inline TAknWindowLineLayout smil_text_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tsmil_text_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_smil_text_pane)))(aIndex_t, aIndex_H); }

inline TAknLayoutTableLimits SMIL_presentation_elements_and_descendant_panes_SUB_TABLE_0_Limits()		{ return (*(TSMIL_presentation_elements_and_descendant_panes_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_presentation_elements_and_descendant_panes_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout SMIL_presentation_elements_and_descendant_panes_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TSMIL_presentation_elements_and_descendant_panes_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_presentation_elements_and_descendant_panes_SUB_TABLE_0)))(aLineIndex); }

// LAF Table : SMIL status pane elements and descendant panes
inline TAknWindowLineLayout smil_volume_pane()		{ return (*(Tsmil_volume_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_smil_volume_pane)))(); }

inline TAknWindowLineLayout SMIL_status_pane_elements_and_descendant_panes_Line_2()		{ return (*(TSMIL_status_pane_elements_and_descendant_panes_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_status_pane_elements_and_descendant_panes_Line_2)))(); }

inline TAknWindowLineLayout SMIL_status_pane_elements_and_descendant_panes_Line_3()		{ return (*(TSMIL_status_pane_elements_and_descendant_panes_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_status_pane_elements_and_descendant_panes_Line_3)))(); }

inline TAknWindowLineLayout SMIL_status_pane_elements_and_descendant_panes_Line_4()		{ return (*(TSMIL_status_pane_elements_and_descendant_panes_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_status_pane_elements_and_descendant_panes_Line_4)))(); }

inline TAknLayoutTableLimits SMIL_status_pane_elements_and_descendant_panes_Limits()		{ return (*(TSMIL_status_pane_elements_and_descendant_panes_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_status_pane_elements_and_descendant_panes_Limits)))(); }

inline TAknWindowLineLayout SMIL_status_pane_elements_and_descendant_panes(TInt aLineIndex)		{ return (*(TSMIL_status_pane_elements_and_descendant_panes_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_status_pane_elements_and_descendant_panes)))(aLineIndex); }

// LAF Table : SMIL status pane texts
inline TAknTextLineLayout SMIL_status_pane_texts_Line_1()		{ return (*(TSMIL_status_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_status_pane_texts_Line_1)))(); }

// LAF Table : SMIL volume pane elements
inline TAknWindowLineLayout SMIL_volume_pane_elements_Line_1()		{ return (*(TSMIL_volume_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_volume_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout SMIL_volume_pane_elements_Line_2()		{ return (*(TSMIL_volume_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_volume_pane_elements_Line_2)))(); }

inline TAknLayoutTableLimits SMIL_volume_pane_elements_Limits()		{ return (*(TSMIL_volume_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_volume_pane_elements_Limits)))(); }

inline TAknWindowLineLayout SMIL_volume_pane_elements(TInt aLineIndex)		{ return (*(TSMIL_volume_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_volume_pane_elements)))(aLineIndex); }

inline TAknTextLineLayout Location_request_type_texts_Line_1(TInt aIndex_B)		{ return (*(TLocation_request_type_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Location_request_type_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Location_request_type_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Location_request_type_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Location_request_type_texts_Line_1)))(aNumberOfLinesShown); }

inline TAknWindowLineLayout Location_requestor_pane_elements_Line_1(TInt aIndex_l)		{ return (*(TLocation_requestor_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Location_requestor_pane_elements_Line_1)))(aIndex_l); }

inline TAknTextLineLayout Location_reqestor_pane_texts_Line_1(TInt aIndex_r, TInt aIndex_W)		{ return (*(TLocation_reqestor_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Location_reqestor_pane_texts_Line_1)))(aIndex_r, aIndex_W); }

inline TAknWindowLineLayout Location_request_popup_window_grapihcs_Line_1(const TRect& aParentRect)		{ return (*(TLocation_request_popup_window_grapihcs_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Location_request_popup_window_grapihcs_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Location_request_popup_window_grapihcs_Line_2(const TRect& aParentRect)		{ return (*(TLocation_request_popup_window_grapihcs_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Location_request_popup_window_grapihcs_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Location_request_popup_window_grapihcs_Line_3(const TRect& aParentRect)		{ return (*(TLocation_request_popup_window_grapihcs_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Location_request_popup_window_grapihcs_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Location_request_popup_window_grapihcs_Line_4(const TRect& aParentRect)		{ return (*(TLocation_request_popup_window_grapihcs_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Location_request_popup_window_grapihcs_Line_4)))(aParentRect); }

inline TAknWindowLineLayout Location_request_popup_window_grapihcs_Line_5(const TRect& aParentRect)		{ return (*(TLocation_request_popup_window_grapihcs_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Location_request_popup_window_grapihcs_Line_5)))(aParentRect); }

inline TAknLayoutTableLimits Location_request_popup_window_grapihcs_Limits()		{ return (*(TLocation_request_popup_window_grapihcs_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Location_request_popup_window_grapihcs_Limits)))(); }

inline TAknWindowLineLayout Location_request_popup_window_grapihcs(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TLocation_request_popup_window_grapihcs_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Location_request_popup_window_grapihcs)))(aLineIndex, aParentRect); }

inline TAknLayoutTableLimits Volume_strength_area_values_Limits()		{ return (*(TVolume_strength_area_values_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_strength_area_values_Limits)))(); }

inline TAknWindowLineLayout Volume_strength_area_values(TInt aLineIndex)		{ return (*(TVolume_strength_area_values_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_strength_area_values)))(aLineIndex); }

// LAF Table : SMIL text pane elements
inline TAknWindowLineLayout SMIL_text_pane_elements_Line_1(const TRect& aParentRect)		{ return (*(TSMIL_text_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_text_pane_elements_Line_1)))(aParentRect); }

inline TAknWindowLineLayout smil_scroll_pane(const TRect& aParentRect)		{ return (*(Tsmil_scroll_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_smil_scroll_pane)))(aParentRect); }

// LAF Table : SMIL text pane texts
inline TAknTextLineLayout SMIL_text_pane_texts_Line_1(TInt aCommon1, TInt aIndex_B)		{ return (*(TSMIL_text_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_text_pane_texts_Line_1)))(aCommon1, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_SMIL_text_pane_texts_Line_1(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_SMIL_text_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_SMIL_text_pane_texts_Line_1)))(aCommon1, aNumberOfLinesShown); }

// LAF Table : SMIL scroll pane elements
inline TAknWindowLineLayout SMIL_scroll_pane_elements_Line_1(const TRect& aParentRect)		{ return (*(TSMIL_scroll_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_scroll_pane_elements_Line_1)))(aParentRect); }

inline TAknWindowLineLayout SMIL_scroll_pane_elements_Line_2()		{ return (*(TSMIL_scroll_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_scroll_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout SMIL_scroll_pane_elements_Line_3()		{ return (*(TSMIL_scroll_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_scroll_pane_elements_Line_3)))(); }

inline TAknLayoutTableLimits SMIL_scroll_pane_elements_SUB_TABLE_0_Limits()		{ return (*(TSMIL_scroll_pane_elements_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_scroll_pane_elements_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout SMIL_scroll_pane_elements_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TSMIL_scroll_pane_elements_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SMIL_scroll_pane_elements_SUB_TABLE_0)))(aLineIndex); }

// LAF Table : Pop-up windows (status pane as parent)
inline TAknWindowLineLayout popup_pbook_thumbnail_window()		{ return (*(Tpopup_pbook_thumbnail_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_pbook_thumbnail_window)))(); }

inline TAknWindowLineLayout popup_call_status_window(TInt aIndex_l)		{ return (*(Tpopup_call_status_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_call_status_window)))(aIndex_l); }

inline TAknWindowLineLayout popup_call_video_up_window(TInt aCommon1)		{ return (*(Tpopup_call_video_up_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_call_video_up_window)))(aCommon1); }

inline TAknWindowLineLayout popup_cale_events_window(TInt aCommon1)		{ return (*(Tpopup_cale_events_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_cale_events_window)))(aCommon1); }

// LAF Table : Pop-up window list pane descendants(call conf)
inline TAknWindowLineLayout list_single_graphic_popup_conf_pane(TInt aIndex_t)		{ return (*(Tlist_single_graphic_popup_conf_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_graphic_popup_conf_pane)))(aIndex_t); }

// LAF Table : List pane elements (conf single graphic)
inline TAknWindowLineLayout List_pane_elements__conf_single_graphic__Line_1()		{ return (*(TList_pane_elements__conf_single_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__conf_single_graphic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__conf_single_graphic__Line_2()		{ return (*(TList_pane_elements__conf_single_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__conf_single_graphic__Line_2)))(); }

inline TAknLayoutTableLimits List_pane_elements__conf_single_graphic__Limits()		{ return (*(TList_pane_elements__conf_single_graphic__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__conf_single_graphic__Limits)))(); }

inline TAknWindowLineLayout List_pane_elements__conf_single_graphic_(TInt aLineIndex)		{ return (*(TList_pane_elements__conf_single_graphic__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__conf_single_graphic_)))(aLineIndex); }

// LAF Table : List pane texts (conf single graphic)
inline TAknTextLineLayout List_pane_texts__conf_single_graphic__Line_1()		{ return (*(TList_pane_texts__conf_single_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__conf_single_graphic__Line_1)))(); }

// LAF Table : List pane elements (menu single graphic bt)
inline TAknWindowLineLayout List_pane_elements__menu_single_graphic_bt__Line_1()		{ return (*(TList_pane_elements__menu_single_graphic_bt__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single_graphic_bt__Line_1)))(); }

inline TAknWindowLineLayout List_pane_elements__menu_single_graphic_bt__Line_2(TInt aIndex_l)		{ return (*(TList_pane_elements__menu_single_graphic_bt__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__menu_single_graphic_bt__Line_2)))(aIndex_l); }

// LAF Table : List pane text (menu single graphic bt)
inline TAknTextLineLayout List_pane_text__menu_single_graphic_bt__Line_1(TInt aCommon1)		{ return (*(TList_pane_text__menu_single_graphic_bt__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_text__menu_single_graphic_bt__Line_1)))(aCommon1); }

// LAF Table : Highlight graphics
inline TAknWindowLineLayout Highlight_graphics_Line_1(const TRect& aParentRect)		{ return (*(THighlight_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Highlight_graphics_Line_2(const TRect& aParentRect)		{ return (*(THighlight_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_graphics_Line_2)))(aParentRect); }

inline TAknLayoutTableLimits Highlight_graphics_Limits()		{ return (*(THighlight_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_graphics_Limits)))(); }

inline TAknWindowLineLayout Highlight_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(THighlight_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Pop-up window grid pane descendants (large graphic gms)
inline TAknWindowLineLayout cell_large_graphic_popup_pane(TInt aIndex_l, TInt aIndex_t)		{ return (*(Tcell_large_graphic_popup_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_large_graphic_popup_pane)))(aIndex_l, aIndex_t); }

// LAF Table : Cell pane elements (popup large graphic gms)
inline TAknWindowLineLayout Cell_pane_elements__popup_large_graphic_gms__Line_1()		{ return (*(TCell_pane_elements__popup_large_graphic_gms__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__popup_large_graphic_gms__Line_1)))(); }

inline TAknWindowLineLayout Cell_pane_elements__popup_large_graphic_gms__Line_2()		{ return (*(TCell_pane_elements__popup_large_graphic_gms__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__popup_large_graphic_gms__Line_2)))(); }

inline TAknLayoutTableLimits Cell_pane_elements__popup_large_graphic_gms__Limits()		{ return (*(TCell_pane_elements__popup_large_graphic_gms__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__popup_large_graphic_gms__Limits)))(); }

inline TAknWindowLineLayout Cell_pane_elements__popup_large_graphic_gms_(TInt aLineIndex)		{ return (*(TCell_pane_elements__popup_large_graphic_gms__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_elements__popup_large_graphic_gms_)))(aLineIndex); }

// LAF Table : Highlight elements (grid pop-up)
inline TAknWindowLineLayout Highlight_elements__grid_pop_up__Line_1(const TRect& aParentRect)		{ return (*(THighlight_elements__grid_pop_up__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Highlight_elements__grid_pop_up__Line_1)))(aParentRect); }

// LAF Table : Number entry pop-up window texts
inline TAknTextLineLayout Number_entry_pop_up_window_texts_Line_1(TInt aCommon1)		{ return (*(TNumber_entry_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Number_entry_pop_up_window_texts_Line_1)))(aCommon1); }

inline TAknTextLineLayout Number_entry_pop_up_window_texts_Line_2(TInt aCommon1, TInt aIndex_B)		{ return (*(TNumber_entry_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Number_entry_pop_up_window_texts_Line_2)))(aCommon1, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Number_entry_pop_up_window_texts_Line_2(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Number_entry_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Number_entry_pop_up_window_texts_Line_2)))(aCommon1, aNumberOfLinesShown); }

// LAF Table : Number entry pop-up window graphics
inline TAknWindowLineLayout Number_entry_pop_up_window_graphics_Line_1(TInt aCommon1)		{ return (*(TNumber_entry_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Number_entry_pop_up_window_graphics_Line_1)))(aCommon1); }

inline TAknWindowLineLayout Number_entry_pop_up_window_graphics_Line_2(TInt aCommon1)		{ return (*(TNumber_entry_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Number_entry_pop_up_window_graphics_Line_2)))(aCommon1); }

inline TAknWindowLineLayout Number_entry_pop_up_window_graphics_Line_3(TInt aCommon1)		{ return (*(TNumber_entry_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Number_entry_pop_up_window_graphics_Line_3)))(aCommon1); }

inline TAknWindowLineLayout Number_entry_pop_up_window_graphics_Line_4(TInt aCommon1)		{ return (*(TNumber_entry_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Number_entry_pop_up_window_graphics_Line_4)))(aCommon1); }

inline TAknWindowLineLayout Number_entry_pop_up_window_graphics_Line_5(TInt aCommon1)		{ return (*(TNumber_entry_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Number_entry_pop_up_window_graphics_Line_5)))(aCommon1); }

inline TAknLayoutTableLimits Number_entry_pop_up_window_graphics_SUB_TABLE_0_Limits()		{ return (*(TNumber_entry_pop_up_window_graphics_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Number_entry_pop_up_window_graphics_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Number_entry_pop_up_window_graphics_SUB_TABLE_0(TInt aLineIndex, TInt aCommon1)		{ return (*(TNumber_entry_pop_up_window_graphics_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Number_entry_pop_up_window_graphics_SUB_TABLE_0)))(aLineIndex, aCommon1); }

// LAF Table : Phonebook memory status pop-up window descendants and elements
inline TAknWindowLineLayout popup_heading_pane()		{ return (*(Tpopup_heading_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_heading_pane)))(); }

inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_descendants_and_elements_Line_2()		{ return (*(TPhonebook_memory_status_pop_up_window_descendants_and_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_descendants_and_elements_Line_2)))(); }

inline TAknLayoutTableLimits Phonebook_memory_status_pop_up_window_descendants_and_elements_Limits()		{ return (*(TPhonebook_memory_status_pop_up_window_descendants_and_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_descendants_and_elements_Limits)))(); }

inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_descendants_and_elements(TInt aLineIndex)		{ return (*(TPhonebook_memory_status_pop_up_window_descendants_and_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_descendants_and_elements)))(aLineIndex); }

// LAF Table : Phonebook memory status pop-up window texts
inline TAknTextLineLayout Phonebook_memory_status_pop_up_window_texts_Line_1(TInt aIndex_B)		{ return (*(TPhonebook_memory_status_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Phonebook_memory_status_pop_up_window_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Phonebook_memory_status_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Phonebook_memory_status_pop_up_window_texts_Line_1)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Phonebook_memory_status_pop_up_window_texts_Line_2(TInt aIndex_B)		{ return (*(TPhonebook_memory_status_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Phonebook_memory_status_pop_up_window_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Phonebook_memory_status_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Phonebook_memory_status_pop_up_window_texts_Line_2)))(aNumberOfLinesShown); }

inline TAknLayoutTableLimits Phonebook_memory_status_pop_up_window_texts_Limits()		{ return (*(TPhonebook_memory_status_pop_up_window_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_texts_Limits)))(); }

inline TAknTextLineLayout Phonebook_memory_status_pop_up_window_texts(TInt aLineIndex, TInt aIndex_B)		{ return (*(TPhonebook_memory_status_pop_up_window_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_texts)))(aLineIndex, aIndex_B); }

// LAF Table : Phonebook memory status pop-up window graphics
inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_graphics_Line_1()		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_graphics_Line_1)))(); }

inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_graphics_Line_2()		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_graphics_Line_2)))(); }

inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_graphics_Line_3()		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_graphics_Line_3)))(); }

inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_graphics_Line_4()		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_graphics_Line_4)))(); }

inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_graphics_Line_5()		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_graphics_Line_5)))(); }

inline TAknLayoutTableLimits Phonebook_memory_status_pop_up_window_graphics_Limits()		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_graphics(TInt aLineIndex)		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Phonebook_memory_status_pop_up_window_graphics)))(aLineIndex); }

// LAF Table : Graphical message image selection pop-up window descendants
inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_descendants_Line_1()		{ return (*(TGraphical_message_image_selection_pop_up_window_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_image_selection_pop_up_window_descendants_Line_1)))(); }

inline TAknWindowLineLayout grid_large_graphic_popup_pane(TInt aIndex_H)		{ return (*(Tgrid_large_graphic_popup_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_large_graphic_popup_pane)))(aIndex_H); }

// LAF Table : Graphical message image selection pop-up window elements
inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_elements_Line_1(TInt aIndex_t)		{ return (*(TGraphical_message_image_selection_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_image_selection_pop_up_window_elements_Line_1)))(aIndex_t); }

inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_elements_Line_2(TInt aIndex_l, TInt aIndex_H)		{ return (*(TGraphical_message_image_selection_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_image_selection_pop_up_window_elements_Line_2)))(aIndex_l, aIndex_H); }

// LAF Table : Graphical message image selection pop-up window graphics
inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_image_selection_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_image_selection_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_image_selection_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_image_selection_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_graphics_Line_5(const TRect& aParentRect)		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_image_selection_pop_up_window_graphics_Line_5)))(aParentRect); }

inline TAknLayoutTableLimits Graphical_message_image_selection_pop_up_window_graphics_Limits()		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_image_selection_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Graphical_message_image_selection_pop_up_window_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Browser WIM PIN Code query pop-up window elements
inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_1()		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_1)))(); }

inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_2(TInt aIndex_t)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_2)))(aIndex_t); }

inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_3(TInt aIndex_t)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_3)))(aIndex_t); }

inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_4(TInt aIndex_t)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_4)))(aIndex_t); }

inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_5()		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_5)))(); }

inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_6(TInt aIndex_t)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_6)))(aIndex_t); }

inline TAknLayoutTableLimits Browser_WIM_PIN_Code_query_pop_up_window_elements_SUB_TABLE_0_Limits()		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_SUB_TABLE_0(TInt aLineIndex, TInt aIndex_t)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_SUB_TABLE_0)))(aLineIndex, aIndex_t); }

// LAF Table : Browser WIM PIN Code query pop-up window texts
inline TAknTextLineLayout Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_1()		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_1)))(); }

inline TAknTextLineLayout Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_2(TInt aIndex_B)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_2)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_3(TInt aIndex_B)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_3)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_3(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_3)))(aNumberOfLinesShown); }

inline TAknLayoutTableLimits Browser_WIM_PIN_Code_query_pop_up_window_texts_SUB_TABLE_0_Limits()		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_texts_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_texts_SUB_TABLE_0_Limits)))(); }

inline TAknTextLineLayout Browser_WIM_PIN_Code_query_pop_up_window_texts_SUB_TABLE_0(TInt aLineIndex, TInt aIndex_B)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_texts_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_texts_SUB_TABLE_0)))(aLineIndex, aIndex_B); }

// LAF Table : Browser WIM PIN Code query pop-up window graphics
inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_5(const TRect& aParentRect)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_5)))(aParentRect); }

inline TAknLayoutTableLimits Browser_WIM_PIN_Code_query_pop_up_window_graphics_Limits()		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Browser Digital Signing query pop-up window elements
inline TAknWindowLineLayout Browser_Digital_Signing_query_pop_up_window_elements_Line_1()		{ return (*(TBrowser_Digital_Signing_query_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_Digital_Signing_query_pop_up_window_elements_Line_1)))(); }

inline TAknWindowLineLayout Browser_Digital_Signing_query_pop_up_window_elements_Line_2()		{ return (*(TBrowser_Digital_Signing_query_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_Digital_Signing_query_pop_up_window_elements_Line_2)))(); }

inline TAknLayoutTableLimits Browser_Digital_Signing_query_pop_up_window_elements_Limits()		{ return (*(TBrowser_Digital_Signing_query_pop_up_window_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_Digital_Signing_query_pop_up_window_elements_Limits)))(); }

inline TAknWindowLineLayout Browser_Digital_Signing_query_pop_up_window_elements(TInt aLineIndex)		{ return (*(TBrowser_Digital_Signing_query_pop_up_window_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_Digital_Signing_query_pop_up_window_elements)))(aLineIndex); }

// LAF Table : Browser Digital Signing query pop-up window texts
inline TAknTextLineLayout Browser_Digital_Signing_query_pop_up_window_texts_Line_1()		{ return (*(TBrowser_Digital_Signing_query_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_Digital_Signing_query_pop_up_window_texts_Line_1)))(); }

inline TAknTextLineLayout Browser_Digital_Signing_query_pop_up_window_texts_Line_2(TInt aCommon1, TInt aIndex_B)		{ return (*(TBrowser_Digital_Signing_query_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_Digital_Signing_query_pop_up_window_texts_Line_2)))(aCommon1, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Browser_Digital_Signing_query_pop_up_window_texts_Line_2(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Browser_Digital_Signing_query_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Browser_Digital_Signing_query_pop_up_window_texts_Line_2)))(aCommon1, aNumberOfLinesShown); }

// LAF Table : SAT Information query pop-up window elements
inline TAknWindowLineLayout SAT_Information_query_pop_up_window_elements_Line_1()		{ return (*(TSAT_Information_query_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SAT_Information_query_pop_up_window_elements_Line_1)))(); }

inline TAknWindowLineLayout SAT_Information_query_pop_up_window_elements_Line_2()		{ return (*(TSAT_Information_query_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SAT_Information_query_pop_up_window_elements_Line_2)))(); }

inline TAknLayoutTableLimits SAT_Information_query_pop_up_window_elements_Limits()		{ return (*(TSAT_Information_query_pop_up_window_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SAT_Information_query_pop_up_window_elements_Limits)))(); }

inline TAknWindowLineLayout SAT_Information_query_pop_up_window_elements(TInt aLineIndex)		{ return (*(TSAT_Information_query_pop_up_window_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SAT_Information_query_pop_up_window_elements)))(aLineIndex); }

// LAF Table : SAT Information query pop-up window texts
inline TAknTextLineLayout SAT_Information_query_pop_up_window_texts_Line_1(TInt aCommon1, TInt aIndex_B)		{ return (*(TSAT_Information_query_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_SAT_Information_query_pop_up_window_texts_Line_1)))(aCommon1, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_SAT_Information_query_pop_up_window_texts_Line_1(TInt aCommon1, TInt aNumberOfLinesShown)		{ return (*(TMultiline_SAT_Information_query_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_SAT_Information_query_pop_up_window_texts_Line_1)))(aCommon1, aNumberOfLinesShown); }

// LAF Table : Analogue clock pop-up window elements
inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_Line_1(const TRect& aParentRect)		{ return (*(TAnalogue_clock_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Analogue_clock_pop_up_window_elements_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_Line_2(const TRect& aParentRect)		{ return (*(TAnalogue_clock_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Analogue_clock_pop_up_window_elements_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_Line_3()		{ return (*(TAnalogue_clock_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Analogue_clock_pop_up_window_elements_Line_3)))(); }

inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_Line_4()		{ return (*(TAnalogue_clock_pop_up_window_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Analogue_clock_pop_up_window_elements_Line_4)))(); }

inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_Line_5()		{ return (*(TAnalogue_clock_pop_up_window_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Analogue_clock_pop_up_window_elements_Line_5)))(); }

inline TAknLayoutTableLimits Analogue_clock_pop_up_window_elements_SUB_TABLE_0_Limits()		{ return (*(TAnalogue_clock_pop_up_window_elements_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Analogue_clock_pop_up_window_elements_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TAnalogue_clock_pop_up_window_elements_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Analogue_clock_pop_up_window_elements_SUB_TABLE_0)))(aLineIndex, aParentRect); }

inline TAknLayoutTableLimits Analogue_clock_pop_up_window_elements_SUB_TABLE_1_Limits()		{ return (*(TAnalogue_clock_pop_up_window_elements_SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Analogue_clock_pop_up_window_elements_SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_SUB_TABLE_1(TInt aLineIndex)		{ return (*(TAnalogue_clock_pop_up_window_elements_SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Analogue_clock_pop_up_window_elements_SUB_TABLE_1)))(aLineIndex); }

// LAF Table : Analogue clock pop-up window texts
inline TAknTextLineLayout Analogue_clock_pop_up_window_texts_Line_1()		{ return (*(TAnalogue_clock_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Analogue_clock_pop_up_window_texts_Line_1)))(); }

// LAF Table : Digital clock pop-up window elements
inline TAknWindowLineLayout Digital_clock_pop_up_window_elements_Line_1()		{ return (*(TDigital_clock_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Digital_clock_pop_up_window_elements_Line_1)))(); }

inline TAknWindowLineLayout Digital_clock_pop_up_window_elements_Line_2()		{ return (*(TDigital_clock_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Digital_clock_pop_up_window_elements_Line_2)))(); }

inline TAknWindowLineLayout Digital_clock_pop_up_window_elements_Line_3()		{ return (*(TDigital_clock_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Digital_clock_pop_up_window_elements_Line_3)))(); }

inline TAknLayoutTableLimits Digital_clock_pop_up_window_elements_Limits()		{ return (*(TDigital_clock_pop_up_window_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Digital_clock_pop_up_window_elements_Limits)))(); }

inline TAknWindowLineLayout Digital_clock_pop_up_window_elements(TInt aLineIndex)		{ return (*(TDigital_clock_pop_up_window_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Digital_clock_pop_up_window_elements)))(aLineIndex); }

// LAF Table : Digital clock pop-up window texts
inline TAknTextLineLayout Digital_clock_pop_up_window_texts_Line_1()		{ return (*(TDigital_clock_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Digital_clock_pop_up_window_texts_Line_1)))(); }

inline TAknTextLineLayout Digital_clock_pop_up_window_texts_Line_2()		{ return (*(TDigital_clock_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Digital_clock_pop_up_window_texts_Line_2)))(); }

inline TAknLayoutTableLimits Digital_clock_pop_up_window_texts_Limits()		{ return (*(TDigital_clock_pop_up_window_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Digital_clock_pop_up_window_texts_Limits)))(); }

inline TAknTextLineLayout Digital_clock_pop_up_window_texts(TInt aLineIndex)		{ return (*(TDigital_clock_pop_up_window_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Digital_clock_pop_up_window_texts)))(aLineIndex); }

// LAF Table : Thumbnail pop-up window elements
inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_1()		{ return (*(TThumbnail_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_1)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_2()		{ return (*(TThumbnail_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_2)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_3()		{ return (*(TThumbnail_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_3)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_4()		{ return (*(TThumbnail_pop_up_window_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_4)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_5()		{ return (*(TThumbnail_pop_up_window_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_5)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_6()		{ return (*(TThumbnail_pop_up_window_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_6)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_7()		{ return (*(TThumbnail_pop_up_window_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_7)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_8()		{ return (*(TThumbnail_pop_up_window_elements_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_8)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_9()		{ return (*(TThumbnail_pop_up_window_elements_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_9)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_10()		{ return (*(TThumbnail_pop_up_window_elements_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_10)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_11()		{ return (*(TThumbnail_pop_up_window_elements_Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_11)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_12()		{ return (*(TThumbnail_pop_up_window_elements_Line_12_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_12)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_13()		{ return (*(TThumbnail_pop_up_window_elements_Line_13_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_13)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_14()		{ return (*(TThumbnail_pop_up_window_elements_Line_14_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_14)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_15()		{ return (*(TThumbnail_pop_up_window_elements_Line_15_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_15)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_16()		{ return (*(TThumbnail_pop_up_window_elements_Line_16_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_16)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_17()		{ return (*(TThumbnail_pop_up_window_elements_Line_17_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_17)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_18()		{ return (*(TThumbnail_pop_up_window_elements_Line_18_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Line_18)))(); }

inline TAknLayoutTableLimits Thumbnail_pop_up_window_elements_Limits()		{ return (*(TThumbnail_pop_up_window_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements_Limits)))(); }

inline TAknWindowLineLayout Thumbnail_pop_up_window_elements(TInt aLineIndex)		{ return (*(TThumbnail_pop_up_window_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_pop_up_window_elements)))(aLineIndex); }

// LAF Table : Call status pop-up window elements
inline TAknWindowLineLayout Call_status_pop_up_window_elements_Line_1()		{ return (*(TCall_status_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Call_status_pop_up_window_elements_Line_1)))(); }

inline TAknWindowLineLayout Call_status_pop_up_window_elements_Line_2()		{ return (*(TCall_status_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Call_status_pop_up_window_elements_Line_2)))(); }

inline TAknWindowLineLayout Call_status_pop_up_window_elements_Line_3()		{ return (*(TCall_status_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Call_status_pop_up_window_elements_Line_3)))(); }

inline TAknWindowLineLayout Call_status_pop_up_window_elements_Line_4()		{ return (*(TCall_status_pop_up_window_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Call_status_pop_up_window_elements_Line_4)))(); }

inline TAknLayoutTableLimits Call_status_pop_up_window_elements_Limits()		{ return (*(TCall_status_pop_up_window_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Call_status_pop_up_window_elements_Limits)))(); }

inline TAknWindowLineLayout Call_status_pop_up_window_elements(TInt aLineIndex)		{ return (*(TCall_status_pop_up_window_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Call_status_pop_up_window_elements)))(aLineIndex); }

// LAF Table : Incoming call pop-up window elements
inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_1()		{ return (*(TIncoming_call_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_1)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_2()		{ return (*(TIncoming_call_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_2)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_3()		{ return (*(TIncoming_call_pop_up_window_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_3)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_4()		{ return (*(TIncoming_call_pop_up_window_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_4)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_5()		{ return (*(TIncoming_call_pop_up_window_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_5)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_6()		{ return (*(TIncoming_call_pop_up_window_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_6)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_7()		{ return (*(TIncoming_call_pop_up_window_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_7)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_8()		{ return (*(TIncoming_call_pop_up_window_elements_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_8)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_9()		{ return (*(TIncoming_call_pop_up_window_elements_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_9)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_10()		{ return (*(TIncoming_call_pop_up_window_elements_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_10)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_11()		{ return (*(TIncoming_call_pop_up_window_elements_Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_11)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_12()		{ return (*(TIncoming_call_pop_up_window_elements_Line_12_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_12)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_13()		{ return (*(TIncoming_call_pop_up_window_elements_Line_13_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_13)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_14(TInt aIndex_r)		{ return (*(TIncoming_call_pop_up_window_elements_Line_14_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_14)))(aIndex_r); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_15()		{ return (*(TIncoming_call_pop_up_window_elements_Line_15_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_Line_15)))(); }

inline TAknLayoutTableLimits Incoming_call_pop_up_window_elements_SUB_TABLE_0_Limits()		{ return (*(TIncoming_call_pop_up_window_elements_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TIncoming_call_pop_up_window_elements_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements_SUB_TABLE_0)))(aLineIndex); }

// LAF Table : Incoming call pop-up window texts
inline TAknTextLineLayout Incoming_call_pop_up_window_texts_Line_1(TInt aCommon1, TInt aCommon2)		{ return (*(TIncoming_call_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_texts_Line_1)))(aCommon1, aCommon2); }

inline TAknMultiLineTextLayout Multiline_Incoming_call_pop_up_window_texts_Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Incoming_call_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Incoming_call_pop_up_window_texts_Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

inline TAknTextLineLayout Incoming_call_pop_up_window_texts_Line_2(TInt aCommon1, TInt aCommon2)		{ return (*(TIncoming_call_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_texts_Line_2)))(aCommon1, aCommon2); }

inline TAknMultiLineTextLayout Multiline_Incoming_call_pop_up_window_texts_Line_2(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Incoming_call_pop_up_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Incoming_call_pop_up_window_texts_Line_2)))(aCommon1, aCommon2, aNumberOfLinesShown); }

inline TAknLayoutTableLimits Incoming_call_pop_up_window_texts_Limits()		{ return (*(TIncoming_call_pop_up_window_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_texts_Limits)))(); }

inline TAknTextLineLayout Incoming_call_pop_up_window_texts(TInt aLineIndex, TInt aCommon1, TInt aCommon2)		{ return (*(TIncoming_call_pop_up_window_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_texts)))(aLineIndex, aCommon1, aCommon2); }

// LAF Table : Incoming call pop-up window graphics
inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics_Line_1(TInt aIndex_H)		{ return (*(TIncoming_call_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics_Line_1)))(aIndex_H); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics_Line_2(TInt aIndex_H)		{ return (*(TIncoming_call_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics_Line_2)))(aIndex_H); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics_Line_3(TInt aIndex_H)		{ return (*(TIncoming_call_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics_Line_3)))(aIndex_H); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics_Line_4(TInt aIndex_H)		{ return (*(TIncoming_call_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics_Line_4)))(aIndex_H); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics_Line_5(TInt aIndex_H)		{ return (*(TIncoming_call_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics_Line_5)))(aIndex_H); }

inline TAknLayoutTableLimits Incoming_call_pop_up_window_graphics_Limits()		{ return (*(TIncoming_call_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics(TInt aLineIndex, TInt aIndex_H)		{ return (*(TIncoming_call_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics)))(aLineIndex, aIndex_H); }

// LAF Table : Incoming call pop-up window elements (NE)
inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_1()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_1)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_2()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_2)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_3()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_3)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_4()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_4)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_5()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_5)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_6()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_6)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_7()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_7)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_8()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_8)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_9()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_9)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_10()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_10)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_11()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_11)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_12()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_12_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_12)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_13()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_13_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_13)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_14()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_14_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_14)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_15()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_15_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Line_15)))(); }

inline TAknLayoutTableLimits Incoming_call_pop_up_window_elements__NE__Limits()		{ return (*(TIncoming_call_pop_up_window_elements__NE__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE__Limits)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE_(TInt aLineIndex)		{ return (*(TIncoming_call_pop_up_window_elements__NE__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_elements__NE_)))(aLineIndex); }

// LAF Table : Incoming call pop-up window texts (NE)
inline TAknTextLineLayout Incoming_call_pop_up_window_texts__NE__Line_1(TInt aCommon1, TInt aCommon2)		{ return (*(TIncoming_call_pop_up_window_texts__NE__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_texts__NE__Line_1)))(aCommon1, aCommon2); }

inline TAknMultiLineTextLayout Multiline_Incoming_call_pop_up_window_texts__NE__Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Incoming_call_pop_up_window_texts__NE__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Incoming_call_pop_up_window_texts__NE__Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

inline TAknTextLineLayout Incoming_call_pop_up_window_texts__NE__Line_2(TInt aCommon1, TInt aCommon2)		{ return (*(TIncoming_call_pop_up_window_texts__NE__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_texts__NE__Line_2)))(aCommon1, aCommon2); }

inline TAknMultiLineTextLayout Multiline_Incoming_call_pop_up_window_texts__NE__Line_2(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Incoming_call_pop_up_window_texts__NE__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Incoming_call_pop_up_window_texts__NE__Line_2)))(aCommon1, aCommon2, aNumberOfLinesShown); }

inline TAknLayoutTableLimits Incoming_call_pop_up_window_texts__NE__Limits()		{ return (*(TIncoming_call_pop_up_window_texts__NE__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_texts__NE__Limits)))(); }

inline TAknTextLineLayout Incoming_call_pop_up_window_texts__NE_(TInt aLineIndex, TInt aCommon1, TInt aCommon2)		{ return (*(TIncoming_call_pop_up_window_texts__NE__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_texts__NE_)))(aLineIndex, aCommon1, aCommon2); }

// LAF Table : Incoming call pop-up window graphics (NE)
inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics__NE__Line_1()		{ return (*(TIncoming_call_pop_up_window_graphics__NE__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics__NE__Line_1)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics__NE__Line_2()		{ return (*(TIncoming_call_pop_up_window_graphics__NE__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics__NE__Line_2)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics__NE__Line_3()		{ return (*(TIncoming_call_pop_up_window_graphics__NE__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics__NE__Line_3)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics__NE__Line_4()		{ return (*(TIncoming_call_pop_up_window_graphics__NE__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics__NE__Line_4)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics__NE__Line_5()		{ return (*(TIncoming_call_pop_up_window_graphics__NE__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics__NE__Line_5)))(); }

inline TAknLayoutTableLimits Incoming_call_pop_up_window_graphics__NE__Limits()		{ return (*(TIncoming_call_pop_up_window_graphics__NE__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics__NE__Limits)))(); }

inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics__NE_(TInt aLineIndex)		{ return (*(TIncoming_call_pop_up_window_graphics__NE__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_call_pop_up_window_graphics__NE_)))(aLineIndex); }

// LAF Table : Outgoing call pop-up window elements (held)
inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_1()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_1)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_2()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_2)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_3()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_3)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_4()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_4)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_5()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_5)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_6()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_6)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_7()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_7)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_8()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_8)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_9()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_9)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_10()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_10)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_11()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_11)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_12()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_12_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_12)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_13()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_13_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_13)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_14()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_14_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_14)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_15()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_15_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Line_15)))(); }

inline TAknLayoutTableLimits Outgoing_call_pop_up_window_elements__held__Limits()		{ return (*(TOutgoing_call_pop_up_window_elements__held__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held__Limits)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held_(TInt aLineIndex)		{ return (*(TOutgoing_call_pop_up_window_elements__held__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held_)))(aLineIndex); }

// LAF Table : Outgoing call pop-up window texts (held)
inline TAknTextLineLayout Outgoing_call_pop_up_window_texts__held__Line_1(TInt aCommon1, TInt aCommon2)		{ return (*(TOutgoing_call_pop_up_window_texts__held__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_texts__held__Line_1)))(aCommon1, aCommon2); }

inline TAknMultiLineTextLayout Multiline_Outgoing_call_pop_up_window_texts__held__Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Outgoing_call_pop_up_window_texts__held__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Outgoing_call_pop_up_window_texts__held__Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

// LAF Table : Outgoing call pop-up window graphics (held)
inline TAknWindowLineLayout Outgoing_call_pop_up_window_graphics__held__Line_1()		{ return (*(TOutgoing_call_pop_up_window_graphics__held__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_graphics__held__Line_1)))(); }

// LAF Table : Outgoing call pop-up window elements (held NE)
inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held_NE__Line_1()		{ return (*(TOutgoing_call_pop_up_window_elements__held_NE__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held_NE__Line_1)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held_NE__Line_2()		{ return (*(TOutgoing_call_pop_up_window_elements__held_NE__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held_NE__Line_2)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held_NE__Line_3()		{ return (*(TOutgoing_call_pop_up_window_elements__held_NE__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held_NE__Line_3)))(); }

inline TAknLayoutTableLimits Outgoing_call_pop_up_window_elements__held_NE__Limits()		{ return (*(TOutgoing_call_pop_up_window_elements__held_NE__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held_NE__Limits)))(); }

inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held_NE_(TInt aLineIndex)		{ return (*(TOutgoing_call_pop_up_window_elements__held_NE__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_elements__held_NE_)))(aLineIndex); }

// LAF Table : Outgoing call pop-up window texts (held NE)
inline TAknTextLineLayout Outgoing_call_pop_up_window_texts__held_NE__Line_1()		{ return (*(TOutgoing_call_pop_up_window_texts__held_NE__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_texts__held_NE__Line_1)))(); }

// LAF Table : Outgoing call pop-up window graphics (held NE)
inline TAknWindowLineLayout Outgoing_call_pop_up_window_graphics__held_NE__Line_1()		{ return (*(TOutgoing_call_pop_up_window_graphics__held_NE__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoing_call_pop_up_window_graphics__held_NE__Line_1)))(); }

// LAF Table : First call pop-up window elements (one call)
inline TAknWindowLineLayout First_call_pop_up_window_elements__one_call__Line_1()		{ return (*(TFirst_call_pop_up_window_elements__one_call__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__one_call__Line_1)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__one_call__Line_2()		{ return (*(TFirst_call_pop_up_window_elements__one_call__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__one_call__Line_2)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__one_call__Line_3()		{ return (*(TFirst_call_pop_up_window_elements__one_call__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__one_call__Line_3)))(); }

inline TAknLayoutTableLimits First_call_pop_up_window_elements__one_call__Limits()		{ return (*(TFirst_call_pop_up_window_elements__one_call__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__one_call__Limits)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__one_call_(TInt aLineIndex)		{ return (*(TFirst_call_pop_up_window_elements__one_call__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__one_call_)))(aLineIndex); }

// LAF Table : First call pop-up window texts (one call)
inline TAknTextLineLayout First_call_pop_up_window_texts__one_call__Line_1(TInt aCommon1, TInt aCommon2)		{ return (*(TFirst_call_pop_up_window_texts__one_call__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_texts__one_call__Line_1)))(aCommon1, aCommon2); }

inline TAknMultiLineTextLayout Multiline_First_call_pop_up_window_texts__one_call__Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown)		{ return (*(TMultiline_First_call_pop_up_window_texts__one_call__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_First_call_pop_up_window_texts__one_call__Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

inline TAknTextLineLayout First_call_pop_up_window_texts__one_call__Line_2(TInt aCommon1)		{ return (*(TFirst_call_pop_up_window_texts__one_call__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_texts__one_call__Line_2)))(aCommon1); }

// LAF Table : First call pop-up window graphics (one call)
inline TAknWindowLineLayout First_call_pop_up_window_graphics__one_call__Line_1()		{ return (*(TFirst_call_pop_up_window_graphics__one_call__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_graphics__one_call__Line_1)))(); }

// LAF Table : First call pop-up window elements (two calls)
inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_1()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_1)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_2()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_2)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_3()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_3)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_4()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_4)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_5()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_5)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_6()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_6)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_7()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_7)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_8()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_8)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_9()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_9)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_10()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_10)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_11()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_11)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_12()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_12_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_12)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_13()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_13_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_13)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_14()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_14_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_14)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_15()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_15_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Line_15)))(); }

inline TAknLayoutTableLimits First_call_pop_up_window_elements__two_calls__Limits()		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls__Limits)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls_(TInt aLineIndex)		{ return (*(TFirst_call_pop_up_window_elements__two_calls__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls_)))(aLineIndex); }

// LAF Table : First call pop-up window texts (two calls)
inline TAknTextLineLayout First_call_pop_up_window_texts__two_calls__Line_1(TInt aCommon1, TInt aCommon2)		{ return (*(TFirst_call_pop_up_window_texts__two_calls__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_texts__two_calls__Line_1)))(aCommon1, aCommon2); }

inline TAknMultiLineTextLayout Multiline_First_call_pop_up_window_texts__two_calls__Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown)		{ return (*(TMultiline_First_call_pop_up_window_texts__two_calls__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_First_call_pop_up_window_texts__two_calls__Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

inline TAknTextLineLayout First_call_pop_up_window_texts__two_calls__Line_2(TInt aCommon1)		{ return (*(TFirst_call_pop_up_window_texts__two_calls__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_texts__two_calls__Line_2)))(aCommon1); }

// LAF Table : First call pop-up window graphics (two calls)
inline TAknWindowLineLayout First_call_pop_up_window_graphics__two_calls__Line_1()		{ return (*(TFirst_call_pop_up_window_graphics__two_calls__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_graphics__two_calls__Line_1)))(); }

// LAF Table : First call pop-up window elements (two calls a waiting call)
inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls_a_waiting_call__Line_1()		{ return (*(TFirst_call_pop_up_window_elements__two_calls_a_waiting_call__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls_a_waiting_call__Line_1)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls_a_waiting_call__Line_2()		{ return (*(TFirst_call_pop_up_window_elements__two_calls_a_waiting_call__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls_a_waiting_call__Line_2)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls_a_waiting_call__Line_3()		{ return (*(TFirst_call_pop_up_window_elements__two_calls_a_waiting_call__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls_a_waiting_call__Line_3)))(); }

inline TAknLayoutTableLimits First_call_pop_up_window_elements__two_calls_a_waiting_call__Limits()		{ return (*(TFirst_call_pop_up_window_elements__two_calls_a_waiting_call__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls_a_waiting_call__Limits)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls_a_waiting_call_(TInt aLineIndex)		{ return (*(TFirst_call_pop_up_window_elements__two_calls_a_waiting_call__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_elements__two_calls_a_waiting_call_)))(aLineIndex); }

// LAF Table : First call pop-up window texts (two calls a waiting call)
inline TAknTextLineLayout First_call_pop_up_window_texts__two_calls_a_waiting_call__Line_1()		{ return (*(TFirst_call_pop_up_window_texts__two_calls_a_waiting_call__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_texts__two_calls_a_waiting_call__Line_1)))(); }

// LAF Table : First call pop-up window graphics (two calls a waiting call)
inline TAknWindowLineLayout First_call_pop_up_window_graphics__two_calls_a_waiting_call__Line_1()		{ return (*(TFirst_call_pop_up_window_graphics__two_calls_a_waiting_call__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_graphics__two_calls_a_waiting_call__Line_1)))(); }

// LAF Table : First call pop-up window graphics (two wait NE)
inline TAknWindowLineLayout First_call_pop_up_window_graphics__two_wait_NE__Line_1()		{ return (*(TFirst_call_pop_up_window_graphics__two_wait_NE__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_graphics__two_wait_NE__Line_1)))(); }

// LAF Table : Waiting call pop-up window elements (held out NE)
inline TAknWindowLineLayout Waiting_call_pop_up_window_elements__held_out_NE__Line_1()		{ return (*(TWaiting_call_pop_up_window_elements__held_out_NE__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Waiting_call_pop_up_window_elements__held_out_NE__Line_1)))(); }

inline TAknWindowLineLayout Waiting_call_pop_up_window_elements__held_out_NE__Line_2()		{ return (*(TWaiting_call_pop_up_window_elements__held_out_NE__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Waiting_call_pop_up_window_elements__held_out_NE__Line_2)))(); }

inline TAknWindowLineLayout Waiting_call_pop_up_window_elements__held_out_NE__Line_3()		{ return (*(TWaiting_call_pop_up_window_elements__held_out_NE__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Waiting_call_pop_up_window_elements__held_out_NE__Line_3)))(); }

inline TAknLayoutTableLimits Waiting_call_pop_up_window_elements__held_out_NE__Limits()		{ return (*(TWaiting_call_pop_up_window_elements__held_out_NE__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Waiting_call_pop_up_window_elements__held_out_NE__Limits)))(); }

inline TAknWindowLineLayout Waiting_call_pop_up_window_elements__held_out_NE_(TInt aLineIndex)		{ return (*(TWaiting_call_pop_up_window_elements__held_out_NE__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Waiting_call_pop_up_window_elements__held_out_NE_)))(aLineIndex); }

// LAF Table : Waiting call pop-up window texts (held out NE)
inline TAknTextLineLayout Waiting_call_pop_up_window_texts__held_out_NE__Line_1()		{ return (*(TWaiting_call_pop_up_window_texts__held_out_NE__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Waiting_call_pop_up_window_texts__held_out_NE__Line_1)))(); }

// LAF Table : Waiting call pop-up window graphics (held out NE)
inline TAknWindowLineLayout Waiting_call_pop_up_window_graphics__held_out_NE__Line_1()		{ return (*(TWaiting_call_pop_up_window_graphics__held_out_NE__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Waiting_call_pop_up_window_graphics__held_out_NE__Line_1)))(); }

// LAF Table : Waiting call pop-up window graphics (out)
inline TAknWindowLineLayout Waiting_call_pop_up_window_graphics__out__Line_1()		{ return (*(TWaiting_call_pop_up_window_graphics__out__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Waiting_call_pop_up_window_graphics__out__Line_1)))(); }

// LAF Table : Second call pop-up window elements (two)
inline TAknWindowLineLayout Second_call_pop_up_window_elements__two__Line_1()		{ return (*(TSecond_call_pop_up_window_elements__two__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_elements__two__Line_1)))(); }

inline TAknWindowLineLayout Second_call_pop_up_window_elements__two__Line_2()		{ return (*(TSecond_call_pop_up_window_elements__two__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_elements__two__Line_2)))(); }

inline TAknWindowLineLayout Second_call_pop_up_window_elements__two__Line_3()		{ return (*(TSecond_call_pop_up_window_elements__two__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_elements__two__Line_3)))(); }

inline TAknLayoutTableLimits Second_call_pop_up_window_elements__two__Limits()		{ return (*(TSecond_call_pop_up_window_elements__two__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_elements__two__Limits)))(); }

inline TAknWindowLineLayout Second_call_pop_up_window_elements__two_(TInt aLineIndex)		{ return (*(TSecond_call_pop_up_window_elements__two__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_elements__two_)))(aLineIndex); }

// LAF Table : Second call pop-up window texts (two calls)
inline TAknTextLineLayout Second_call_pop_up_window_texts__two_calls__Line_1(TInt aCommon1, TInt aCommon2)		{ return (*(TSecond_call_pop_up_window_texts__two_calls__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_texts__two_calls__Line_1)))(aCommon1, aCommon2); }

inline TAknMultiLineTextLayout Multiline_Second_call_pop_up_window_texts__two_calls__Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Second_call_pop_up_window_texts__two_calls__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Second_call_pop_up_window_texts__two_calls__Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

inline TAknTextLineLayout Second_call_pop_up_window_texts__two_calls__Line_2(TInt aCommon1)		{ return (*(TSecond_call_pop_up_window_texts__two_calls__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_texts__two_calls__Line_2)))(aCommon1); }

// LAF Table : Second call pop-up window graphics (two calls)
inline TAknWindowLineLayout Second_call_pop_up_window_graphics__two_calls__Line_1()		{ return (*(TSecond_call_pop_up_window_graphics__two_calls__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_graphics__two_calls__Line_1)))(); }

// LAF Table : Second call pop-up window elements (two calls waiting call)
inline TAknWindowLineLayout Second_call_pop_up_window_elements__two_calls_waiting_call__Line_1()		{ return (*(TSecond_call_pop_up_window_elements__two_calls_waiting_call__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_elements__two_calls_waiting_call__Line_1)))(); }

inline TAknWindowLineLayout Second_call_pop_up_window_elements__two_calls_waiting_call__Line_2()		{ return (*(TSecond_call_pop_up_window_elements__two_calls_waiting_call__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_elements__two_calls_waiting_call__Line_2)))(); }

inline TAknWindowLineLayout Second_call_pop_up_window_elements__two_calls_waiting_call__Line_3()		{ return (*(TSecond_call_pop_up_window_elements__two_calls_waiting_call__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_elements__two_calls_waiting_call__Line_3)))(); }

inline TAknLayoutTableLimits Second_call_pop_up_window_elements__two_calls_waiting_call__Limits()		{ return (*(TSecond_call_pop_up_window_elements__two_calls_waiting_call__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_elements__two_calls_waiting_call__Limits)))(); }

inline TAknWindowLineLayout Second_call_pop_up_window_elements__two_calls_waiting_call_(TInt aLineIndex)		{ return (*(TSecond_call_pop_up_window_elements__two_calls_waiting_call__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_elements__two_calls_waiting_call_)))(aLineIndex); }

// LAF Table : Second call pop-up window texts (two calls waiting call)
inline TAknTextLineLayout Second_call_pop_up_window_texts__two_calls_waiting_call__Line_1()		{ return (*(TSecond_call_pop_up_window_texts__two_calls_waiting_call__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_texts__two_calls_waiting_call__Line_1)))(); }

// LAF Table : Second call pop-up window graphics (two calls waiting call)
inline TAknWindowLineLayout Second_call_pop_up_window_graphics__two_calls_waiting_call__Line_1()		{ return (*(TSecond_call_pop_up_window_graphics__two_calls_waiting_call__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Second_call_pop_up_window_graphics__two_calls_waiting_call__Line_1)))(); }

// LAF Table : Conference call pop-up window descendants and elements
inline TAknWindowLineLayout Conference_call_pop_up_window_descendants_and_elements_Line_1(const TRect& aParentRect)		{ return (*(TConference_call_pop_up_window_descendants_and_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Conference_call_pop_up_window_descendants_and_elements_Line_1)))(aParentRect); }

inline TAknWindowLineLayout list_conf_pane(TInt aIndex_H)		{ return (*(Tlist_conf_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_conf_pane)))(aIndex_H); }

// LAF Table : Conference call pop-up window texts
inline TAknTextLineLayout Conference_call_pop_up_window_texts_Line_1(TInt aIndex_B)		{ return (*(TConference_call_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Conference_call_pop_up_window_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Conference_call_pop_up_window_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Conference_call_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Conference_call_pop_up_window_texts_Line_1)))(aNumberOfLinesShown); }

// LAF Table : Muted state elements
inline TAknWindowLineLayout Muted_state_elements_Line_1()		{ return (*(TMuted_state_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Muted_state_elements_Line_1)))(); }

// LAF Table : Calendar events list popup components
inline TAknWindowLineLayout Calendar_events_list_popup_components_Line_1(TInt aIndex_t)		{ return (*(TCalendar_events_list_popup_components_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_events_list_popup_components_Line_1)))(aIndex_t); }

// LAF Table : Calendar events list popup texts
inline TAknTextLineLayout Calendar_events_list_popup_texts_Line_1(TInt aIndex_B)		{ return (*(TCalendar_events_list_popup_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_events_list_popup_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Calendar_events_list_popup_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Calendar_events_list_popup_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Calendar_events_list_popup_texts_Line_1)))(aNumberOfLinesShown); }

// LAF Table : Calendar events list popup graphics
inline TAknWindowLineLayout Calendar_events_list_popup_graphics_Line_1(const TRect& aParentRect)		{ return (*(TCalendar_events_list_popup_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_events_list_popup_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Calendar_events_list_popup_graphics_Line_2(const TRect& aParentRect)		{ return (*(TCalendar_events_list_popup_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_events_list_popup_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Calendar_events_list_popup_graphics_Line_3(const TRect& aParentRect)		{ return (*(TCalendar_events_list_popup_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_events_list_popup_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Calendar_events_list_popup_graphics_Line_4(const TRect& aParentRect)		{ return (*(TCalendar_events_list_popup_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_events_list_popup_graphics_Line_4)))(aParentRect); }

inline TAknLayoutTableLimits Calendar_events_list_popup_graphics_Limits()		{ return (*(TCalendar_events_list_popup_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_events_list_popup_graphics_Limits)))(); }

inline TAknWindowLineLayout Calendar_events_list_popup_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TCalendar_events_list_popup_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Calendar_events_list_popup_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Presence status popup window elements
inline TAknWindowLineLayout cell_cams_pane(TInt aIndex_l, TInt aIndex_t)		{ return (*(Tcell_cams_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_cams_pane)))(aIndex_l, aIndex_t); }

inline TAknWindowLineLayout image_or_qgn_prop_dyc__ref_()		{ return (*(Timage_or_qgn_prop_dyc__ref__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_image_or_qgn_prop_dyc__ref_)))(); }

inline TAknWindowLineLayout loc_type_pane(TInt aIndex_H)		{ return (*(Tloc_type_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_loc_type_pane)))(aIndex_H); }

inline TAknWindowLineLayout loc_req_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tloc_req_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_loc_req_pane)))(aIndex_t, aIndex_H); }

// LAF Table : Additional heading pane elements
inline TAknWindowLineLayout Additional_heading_pane_elements_Line_1()		{ return (*(TAdditional_heading_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Additional_heading_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Additional_heading_pane_elements_Line_2()		{ return (*(TAdditional_heading_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Additional_heading_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Additional_heading_pane_elements_Line_3()		{ return (*(TAdditional_heading_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Additional_heading_pane_elements_Line_3)))(); }

// LAF Table : Presence status popup window texts
inline TAknTextLineLayout Presence_status_popup_window_texts_Line_1()		{ return (*(TPresence_status_popup_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_popup_window_texts_Line_1)))(); }

inline TAknTextLineLayout Presence_status_popup_window_texts_Line_2(TInt aIndex_B)		{ return (*(TPresence_status_popup_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_popup_window_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Presence_status_popup_window_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Presence_status_popup_window_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Presence_status_popup_window_texts_Line_2)))(aNumberOfLinesShown); }

// LAF Table : Presence status window graphics
inline TAknWindowLineLayout Presence_status_window_graphics_Line_1()		{ return (*(TPresence_status_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_window_graphics_Line_1)))(); }

inline TAknWindowLineLayout Presence_status_window_graphics_Line_2()		{ return (*(TPresence_status_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_window_graphics_Line_2)))(); }

inline TAknWindowLineLayout Presence_status_window_graphics_Line_3()		{ return (*(TPresence_status_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_window_graphics_Line_3)))(); }

inline TAknWindowLineLayout Presence_status_window_graphics_Line_4()		{ return (*(TPresence_status_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_window_graphics_Line_4)))(); }

inline TAknWindowLineLayout Presence_status_window_graphics_Line_5()		{ return (*(TPresence_status_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_window_graphics_Line_5)))(); }

inline TAknLayoutTableLimits Presence_status_window_graphics_Limits()		{ return (*(TPresence_status_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Presence_status_window_graphics(TInt aLineIndex)		{ return (*(TPresence_status_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Presence_status_window_graphics)))(aLineIndex); }

// LAF Table : Pop-up windows (main pane as parent)
inline TAknWindowLineLayout popup_number_entry_window()		{ return (*(Tpopup_number_entry_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_number_entry_window)))(); }

inline TAknWindowLineLayout popup_pb_memory_status_window()		{ return (*(Tpopup_pb_memory_status_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_pb_memory_status_window)))(); }

inline TAknWindowLineLayout popup_grid_large_graphic_window(TInt aIndex_H)		{ return (*(Tpopup_grid_large_graphic_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_grid_large_graphic_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_call_audio_in_window(TInt aCommon1)		{ return (*(Tpopup_call_audio_in_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_call_audio_in_window)))(aCommon1); }

inline TAknWindowLineLayout popup_call_audio_out_window(TInt aCommon1)		{ return (*(Tpopup_call_audio_out_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_call_audio_out_window)))(aCommon1); }

inline TAknWindowLineLayout popup_call_audio_first_window(TInt aIndex_r, TInt aCommon1)		{ return (*(Tpopup_call_audio_first_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_call_audio_first_window)))(aIndex_r, aCommon1); }

inline TAknWindowLineLayout popup_call_audio_wait_window(TInt aCommon1)		{ return (*(Tpopup_call_audio_wait_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_call_audio_wait_window)))(aCommon1); }

inline TAknWindowLineLayout popup_call_audio_second_window(TInt aIndex_r, TInt aCommon1)		{ return (*(Tpopup_call_audio_second_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_call_audio_second_window)))(aIndex_r, aCommon1); }

inline TAknWindowLineLayout popup_call_audio_conf_window(TInt aIndex_H)		{ return (*(Tpopup_call_audio_conf_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_call_audio_conf_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_call_video_in_window()		{ return (*(Tpopup_call_video_in_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_call_video_in_window)))(); }

inline TAknWindowLineLayout popup_call_video_first_window()		{ return (*(Tpopup_call_video_first_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_call_video_first_window)))(); }

inline TAknWindowLineLayout popup_call_video_down_window()		{ return (*(Tpopup_call_video_down_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_call_video_down_window)))(); }

inline TAknWindowLineLayout popup_query_wml_wim_window(TInt aIndex_H)		{ return (*(Tpopup_query_wml_wim_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_query_wml_wim_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_query_wml_sign_window(TInt aIndex_H)		{ return (*(Tpopup_query_wml_sign_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_query_wml_sign_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_query_sat_info_window(TInt aIndex_H)		{ return (*(Tpopup_query_sat_info_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_query_sat_info_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_grid_large_compo_graphic_window()		{ return (*(Tpopup_grid_large_compo_graphic_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_grid_large_compo_graphic_window)))(); }

inline TAknWindowLineLayout popup_dyc_status_message_window()		{ return (*(Tpopup_dyc_status_message_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_dyc_status_message_window)))(); }

// LAF Table : Thumbnail image sizes
inline TAknWindowLineLayout VGA()		{ return (*(TVGA_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_VGA)))(); }

inline TAknWindowLineLayout VGA_turned_90()		{ return (*(TVGA_turned_90_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_VGA_turned_90)))(); }

inline TAknWindowLineLayout CIF()		{ return (*(TCIF_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_CIF)))(); }

inline TAknWindowLineLayout CIF_turned_90()		{ return (*(TCIF_turned_90_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_CIF_turned_90)))(); }

inline TAknWindowLineLayout Communicator_personal_image()		{ return (*(TCommunicator_personal_image_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Communicator_personal_image)))(); }

inline TAknWindowLineLayout Image_aspect_ratio___0_625()		{ return (*(TImage_aspect_ratio___0_625_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Image_aspect_ratio___0_625)))(); }

inline TAknWindowLineLayout Image_aspect_ratio___1_467()		{ return (*(TImage_aspect_ratio___1_467_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Image_aspect_ratio___1_467)))(); }

inline TAknWindowLineLayout _0_625___image_aspect_ratio___1_467()		{ return (*(T_0_625___image_aspect_ratio___1_467_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId__0_625___image_aspect_ratio___1_467)))(); }

inline TAknLayoutTableLimits Thumbnail_image_sizes_Limits()		{ return (*(TThumbnail_image_sizes_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_image_sizes_Limits)))(); }

inline TAknWindowLineLayout Thumbnail_image_sizes(TInt aLineIndex)		{ return (*(TThumbnail_image_sizes_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Thumbnail_image_sizes)))(aLineIndex); }

// LAF Table : Message writing layout elements
inline TAknWindowLineLayout Message_writing_layout_elements_Line_1(TInt aIndex_t, TInt aIndex_H)		{ return (*(TMessage_writing_layout_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_layout_elements_Line_1)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout Message_writing_layout_elements_Line_2(TInt aIndex_t, TInt aIndex_H)		{ return (*(TMessage_writing_layout_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_layout_elements_Line_2)))(aIndex_t, aIndex_H); }

inline TAknWindowLineLayout Message_writing_layout_elements_Line_3(TInt aIndex_t)		{ return (*(TMessage_writing_layout_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_layout_elements_Line_3)))(aIndex_t); }

inline TAknWindowLineLayout Message_writing_layout_elements_Line_4(TInt aIndex_H)		{ return (*(TMessage_writing_layout_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_layout_elements_Line_4)))(aIndex_H); }

inline TAknWindowLineLayout Message_writing_layout_elements_Line_5(TInt aIndex_t)		{ return (*(TMessage_writing_layout_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_layout_elements_Line_5)))(aIndex_t); }

inline TAknWindowLineLayout Message_writing_layout_elements_Line_6(TInt aIndex_C, TInt aIndex_t)		{ return (*(TMessage_writing_layout_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_layout_elements_Line_6)))(aIndex_C, aIndex_t); }

inline TAknWindowLineLayout Message_writing_layout_elements_Line_7()		{ return (*(TMessage_writing_layout_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_layout_elements_Line_7)))(); }

inline TAknWindowLineLayout Message_writing_layout_elements_Line_8(TInt aIndex_t, TInt aIndex_W, TInt aIndex_H)		{ return (*(TMessage_writing_layout_elements_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Message_writing_layout_elements_Line_8)))(aIndex_t, aIndex_W, aIndex_H); }

inline TAknWindowLineLayout CamcorderBurst_Mode_Post_Recording_cell_elements_Line_1()		{ return (*(TCamcorderBurst_Mode_Post_Recording_cell_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_CamcorderBurst_Mode_Post_Recording_cell_elements_Line_1)))(); }

inline TAknWindowLineLayout CamcorderBurst_Mode_Post_Recording_cell_elements_Line_2()		{ return (*(TCamcorderBurst_Mode_Post_Recording_cell_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_CamcorderBurst_Mode_Post_Recording_cell_elements_Line_2)))(); }

inline TAknLayoutTableLimits CamcorderBurst_Mode_Post_Recording_cell_elements_Limits()		{ return (*(TCamcorderBurst_Mode_Post_Recording_cell_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_CamcorderBurst_Mode_Post_Recording_cell_elements_Limits)))(); }

inline TAknWindowLineLayout CamcorderBurst_Mode_Post_Recording_cell_elements(TInt aLineIndex)		{ return (*(TCamcorderBurst_Mode_Post_Recording_cell_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_CamcorderBurst_Mode_Post_Recording_cell_elements)))(aLineIndex); }

inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_6()		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_6)))(); }

inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_7()		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_7)))(); }

inline TAknWindowLineLayout near_QCIF()		{ return (*(Tnear_QCIF_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_near_QCIF)))(); }

inline TAknTextLineLayout Media_Player_navi_pane_texts_Line_1()		{ return (*(TMedia_Player_navi_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Media_Player_navi_pane_texts_Line_1)))(); }

inline TAknWindowLineLayout Volume_strength_area_values_Line_1()		{ return (*(TVolume_strength_area_values_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_strength_area_values_Line_1)))(); }

inline TAknWindowLineLayout Volume_strength_area_values_Line_2()		{ return (*(TVolume_strength_area_values_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_strength_area_values_Line_2)))(); }

inline TAknWindowLineLayout Volume_strength_area_values_Line_3()		{ return (*(TVolume_strength_area_values_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_strength_area_values_Line_3)))(); }

inline TAknWindowLineLayout Volume_strength_area_values_Line_4()		{ return (*(TVolume_strength_area_values_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_strength_area_values_Line_4)))(); }

inline TAknWindowLineLayout Volume_strength_area_values_Line_5()		{ return (*(TVolume_strength_area_values_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_strength_area_values_Line_5)))(); }

inline TAknWindowLineLayout Volume_strength_area_values_Line_6()		{ return (*(TVolume_strength_area_values_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_strength_area_values_Line_6)))(); }

inline TAknWindowLineLayout Volume_strength_area_values_Line_7()		{ return (*(TVolume_strength_area_values_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_strength_area_values_Line_7)))(); }

inline TAknWindowLineLayout Volume_strength_area_values_Line_8()		{ return (*(TVolume_strength_area_values_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Volume_strength_area_values_Line_8)))(); }

inline TAknWindowLineLayout blid_compass_pane()		{ return (*(Tblid_compass_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_blid_compass_pane)))(); }

inline TAknWindowLineLayout BLID_compass_view_elements_Line_2()		{ return (*(TBLID_compass_view_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_BLID_compass_view_elements_Line_2)))(); }

inline TAknWindowLineLayout BLID_compass_view_elements_Line_3()		{ return (*(TBLID_compass_view_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_BLID_compass_view_elements_Line_3)))(); }

inline TAknLayoutTableLimits BLID_compass_view_elements_Limits()		{ return (*(TBLID_compass_view_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_BLID_compass_view_elements_Limits)))(); }

inline TAknWindowLineLayout BLID_compass_view_elements(TInt aLineIndex)		{ return (*(TBLID_compass_view_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_BLID_compass_view_elements)))(aLineIndex); }

inline TAknWindowLineLayout Accuracyvalues_Line_1()		{ return (*(TAccuracyvalues_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Accuracyvalues_Line_1)))(); }

inline TAknWindowLineLayout Accuracyvalues_Line_2()		{ return (*(TAccuracyvalues_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Accuracyvalues_Line_2)))(); }

inline TAknWindowLineLayout Accuracyvalues_Line_3()		{ return (*(TAccuracyvalues_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Accuracyvalues_Line_3)))(); }

inline TAknWindowLineLayout Accuracyvalues_Line_4()		{ return (*(TAccuracyvalues_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Accuracyvalues_Line_4)))(); }

inline TAknWindowLineLayout Accuracyvalues_Line_5()		{ return (*(TAccuracyvalues_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Accuracyvalues_Line_5)))(); }

inline TAknWindowLineLayout Accuracyvalues_Line_6()		{ return (*(TAccuracyvalues_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Accuracyvalues_Line_6)))(); }

inline TAknWindowLineLayout Accuracyvalues_Line_7()		{ return (*(TAccuracyvalues_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Accuracyvalues_Line_7)))(); }

inline TAknWindowLineLayout Accuracyvalues_Line_8()		{ return (*(TAccuracyvalues_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Accuracyvalues_Line_8)))(); }

inline TAknLayoutTableLimits Accuracyvalues_Limits()		{ return (*(TAccuracyvalues_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Accuracyvalues_Limits)))(); }

inline TAknWindowLineLayout Accuracyvalues(TInt aLineIndex)		{ return (*(TAccuracyvalues_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Accuracyvalues)))(aLineIndex); }

inline TAknTextLineLayout BLIDcompass_view_texts_Line_1()		{ return (*(TBLIDcompass_view_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_BLIDcompass_view_texts_Line_1)))(); }

inline TAknTextLineLayout BLIDcompass_view_texts_Line_2()		{ return (*(TBLIDcompass_view_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_BLIDcompass_view_texts_Line_2)))(); }

inline TAknTextLineLayout BLIDcompass_view_texts_Line_3()		{ return (*(TBLIDcompass_view_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_BLIDcompass_view_texts_Line_3)))(); }

inline TAknLayoutTableLimits BLIDcompass_view_texts_Limits()		{ return (*(TBLIDcompass_view_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_BLIDcompass_view_texts_Limits)))(); }

inline TAknTextLineLayout BLIDcompass_view_texts(TInt aLineIndex)		{ return (*(TBLIDcompass_view_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_BLIDcompass_view_texts)))(aLineIndex); }

inline TAknWindowLineLayout Compasspane_elements_Line_1()		{ return (*(TCompasspane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Compasspane_elements_Line_1)))(); }

inline TAknWindowLineLayout Arrow_head__graphic()		{ return (*(TArrow_head__graphic_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Arrow_head__graphic)))(); }

inline TAknWindowLineLayout Arrow_body__graphic()		{ return (*(TArrow_body__graphic_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Arrow_body__graphic)))(); }

inline TAknLayoutTableLimits Compasspane_elements_Limits()		{ return (*(TCompasspane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Compasspane_elements_Limits)))(); }

inline TAknWindowLineLayout Compasspane_elements(TInt aLineIndex)		{ return (*(TCompasspane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Compasspane_elements)))(aLineIndex); }

inline TAknWindowLineLayout blid_direction_pane()		{ return (*(Tblid_direction_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_blid_direction_pane)))(); }

inline TAknTextLineLayout BLIDdirection_elements_Line_1()		{ return (*(TBLIDdirection_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_BLIDdirection_elements_Line_1)))(); }

inline TAknWindowLineLayout Outgoingincoming_video_call_elements_Line_1()		{ return (*(TOutgoingincoming_video_call_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoingincoming_video_call_elements_Line_1)))(); }

inline TAknWindowLineLayout Outgoingincoming_video_call_elements_Line_2()		{ return (*(TOutgoingincoming_video_call_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoingincoming_video_call_elements_Line_2)))(); }

inline TAknLayoutTableLimits Outgoingincoming_video_call_elements_Limits()		{ return (*(TOutgoingincoming_video_call_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoingincoming_video_call_elements_Limits)))(); }

inline TAknWindowLineLayout Outgoingincoming_video_call_elements(TInt aLineIndex)		{ return (*(TOutgoingincoming_video_call_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Outgoingincoming_video_call_elements)))(aLineIndex); }

inline TAknWindowLineLayout Uplink_video_image__large__Line_1()		{ return (*(TUplink_video_image__large__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Uplink_video_image__large__Line_1)))(); }

inline TAknWindowLineLayout Uplink_video_image__large__Line_2()		{ return (*(TUplink_video_image__large__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Uplink_video_image__large__Line_2)))(); }

inline TAknWindowLineLayout Uplink_video_image__large__Line_3()		{ return (*(TUplink_video_image__large__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Uplink_video_image__large__Line_3)))(); }

inline TAknLayoutTableLimits Uplink_video_image__large__Limits()		{ return (*(TUplink_video_image__large__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Uplink_video_image__large__Limits)))(); }

inline TAknWindowLineLayout Uplink_video_image__large_(TInt aLineIndex)		{ return (*(TUplink_video_image__large__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Uplink_video_image__large_)))(aLineIndex); }

inline TAknWindowLineLayout Downlink_video_image_Line_1()		{ return (*(TDownlink_video_image_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Downlink_video_image_Line_1)))(); }

inline TAknWindowLineLayout downlink_stream()		{ return (*(Tdownlink_stream_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_downlink_stream)))(); }

inline TAknWindowLineLayout Downlink_video_image_Line_3()		{ return (*(TDownlink_video_image_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Downlink_video_image_Line_3)))(); }

inline TAknLayoutTableLimits Downlink_video_image_Limits()		{ return (*(TDownlink_video_image_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Downlink_video_image_Limits)))(); }

inline TAknWindowLineLayout Downlink_video_image(TInt aLineIndex)		{ return (*(TDownlink_video_image_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Downlink_video_image)))(aLineIndex); }

inline TAknWindowLineLayout title_pane()		{ return (*(Ttitle_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_title_pane)))(); }

inline TAknWindowLineLayout uni_indicator_pane()		{ return (*(Tuni_indicator_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_uni_indicator_pane)))(); }

inline TAknLayoutTableLimits Status_pane_changes_Limits()		{ return (*(TStatus_pane_changes_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Status_pane_changes_Limits)))(); }

inline TAknWindowLineLayout Status_pane_changes(TInt aLineIndex)		{ return (*(TStatus_pane_changes_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Status_pane_changes)))(aLineIndex); }

inline TAknTextLineLayout Title_pane_texts_Line_2(TInt aIndex_B)		{ return (*(TTitle_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Title_pane_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Title_pane_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Title_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Title_pane_texts_Line_2)))(aNumberOfLinesShown); }

inline TAknWindowLineLayout Navipane_elements_and_descendant_panes_Line_1()		{ return (*(TNavipane_elements_and_descendant_panes_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navipane_elements_and_descendant_panes_Line_1)))(); }

inline TAknWindowLineLayout zooming_pane()		{ return (*(Tzooming_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_zooming_pane)))(); }

inline TAknLayoutTableLimits Navipane_elements_and_descendant_panes_Limits()		{ return (*(TNavipane_elements_and_descendant_panes_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navipane_elements_and_descendant_panes_Limits)))(); }

inline TAknWindowLineLayout Navipane_elements_and_descendant_panes(TInt aLineIndex)		{ return (*(TNavipane_elements_and_descendant_panes_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navipane_elements_and_descendant_panes)))(aLineIndex); }

inline TAknWindowLineLayout Zooming_pane_elements_Line_1()		{ return (*(TZooming_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Zooming_pane_elements_Line_2()		{ return (*(TZooming_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Zooming_pane_elements_Line_3()		{ return (*(TZooming_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_pane_elements_Line_3)))(); }

inline TAknWindowLineLayout Zooming_pane_elements_Line_4()		{ return (*(TZooming_pane_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_pane_elements_Line_4)))(); }

inline TAknLayoutTableLimits Zooming_pane_elements_Limits()		{ return (*(TZooming_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Zooming_pane_elements(TInt aLineIndex)		{ return (*(TZooming_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_pane_elements)))(aLineIndex); }

inline TAknTextLineLayout Navipanetexts_Line_1()		{ return (*(TNavipanetexts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navipanetexts_Line_1)))(); }

inline TAknTextLineLayout Navipanetexts_Line_2()		{ return (*(TNavipanetexts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navipanetexts_Line_2)))(); }

inline TAknLayoutTableLimits Navipanetexts_Limits()		{ return (*(TNavipanetexts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navipanetexts_Limits)))(); }

inline TAknTextLineLayout Navipanetexts(TInt aLineIndex)		{ return (*(TNavipanetexts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navipanetexts)))(aLineIndex); }

inline TAknWindowLineLayout Videocall_indicator__NEwaiting_call__Line_1()		{ return (*(TVideocall_indicator__NEwaiting_call__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Videocall_indicator__NEwaiting_call__Line_1)))(); }

inline TAknWindowLineLayout Videocall_indicator__NEwaiting_call__Line_2()		{ return (*(TVideocall_indicator__NEwaiting_call__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Videocall_indicator__NEwaiting_call__Line_2)))(); }

inline TAknLayoutTableLimits Videocall_indicator__NEwaiting_call__Limits()		{ return (*(TVideocall_indicator__NEwaiting_call__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Videocall_indicator__NEwaiting_call__Limits)))(); }

inline TAknWindowLineLayout Videocall_indicator__NEwaiting_call_(TInt aLineIndex)		{ return (*(TVideocall_indicator__NEwaiting_call__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Videocall_indicator__NEwaiting_call_)))(aLineIndex); }

inline TAknWindowLineLayout Callstatus_pop_up_window_elements_Line_1()		{ return (*(TCallstatus_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Callstatus_pop_up_window_elements_Line_1)))(); }

inline TAknWindowLineLayout Callstatus_pop_up_window_elements_Line_2()		{ return (*(TCallstatus_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Callstatus_pop_up_window_elements_Line_2)))(); }

inline TAknLayoutTableLimits Callstatus_pop_up_window_elements_Limits()		{ return (*(TCallstatus_pop_up_window_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Callstatus_pop_up_window_elements_Limits)))(); }

inline TAknWindowLineLayout Callstatus_pop_up_window_elements(TInt aLineIndex)		{ return (*(TCallstatus_pop_up_window_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Callstatus_pop_up_window_elements)))(aLineIndex); }

inline TAknWindowLineLayout Rectangle()		{ return (*(TRectangle_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Rectangle)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_2()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_2)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_3()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_3)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_4()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_4)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_5()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_5)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_6()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_6)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_7()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_7)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_8()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_8)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_9()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_9)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_10()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_10)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_11()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_11)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_12()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_12_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_12)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_13()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_13_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_13)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_14()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_14_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_14)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_15()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_15_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_15)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_16()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_16_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_16)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_17()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_17_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_17)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_18()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_18_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_18)))(); }

inline TAknLayoutTableLimits Colorpalette_preview_screen_element_placing__main_area__Limits()		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area__Limits)))(); }

inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area_(TInt aLineIndex)		{ return (*(TColorpalette_preview_screen_element_placing__main_area__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_element_placing__main_area_)))(aLineIndex); }

inline TAknTextLineLayout Colorpalette_preview_screen_text_placing__main_area__Line_1()		{ return (*(TColorpalette_preview_screen_text_placing__main_area__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_text_placing__main_area__Line_1)))(); }

inline TAknTextLineLayout Colorpalette_preview_screen_text_placing__main_area__Line_2()		{ return (*(TColorpalette_preview_screen_text_placing__main_area__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_text_placing__main_area__Line_2)))(); }

inline TAknLayoutTableLimits Colorpalette_preview_screen_text_placing__main_area__Limits()		{ return (*(TColorpalette_preview_screen_text_placing__main_area__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_text_placing__main_area__Limits)))(); }

inline TAknTextLineLayout Colorpalette_preview_screen_text_placing__main_area_(TInt aLineIndex)		{ return (*(TColorpalette_preview_screen_text_placing__main_area__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Colorpalette_preview_screen_text_placing__main_area_)))(aLineIndex); }

inline TAknWindowLineLayout audioskin_pane()		{ return (*(Taudioskin_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_audioskin_pane)))(); }

inline TAknTextLineLayout Audio_Playbackview_texts_Line_1()		{ return (*(TAudio_Playbackview_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Audio_Playbackview_texts_Line_1)))(); }

inline TAknTextLineLayout Audio_Playbackview_texts_Line_2()		{ return (*(TAudio_Playbackview_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Audio_Playbackview_texts_Line_2)))(); }

inline TAknTextLineLayout Audio_Playbackview_texts_Line_3()		{ return (*(TAudio_Playbackview_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Audio_Playbackview_texts_Line_3)))(); }

inline TAknTextLineLayout Audio_Playbackview_texts_Line_4()		{ return (*(TAudio_Playbackview_texts_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Audio_Playbackview_texts_Line_4)))(); }

inline TAknLayoutTableLimits Audio_Playbackview_texts_Limits()		{ return (*(TAudio_Playbackview_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Audio_Playbackview_texts_Limits)))(); }

inline TAknTextLineLayout Audio_Playbackview_texts(TInt aLineIndex)		{ return (*(TAudio_Playbackview_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Audio_Playbackview_texts)))(aLineIndex); }

inline TAknWindowLineLayout Audioskin_pane_elements_Line_1()		{ return (*(TAudioskin_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Audioskin_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout popup_loc_request_window(TInt aIndex_H)		{ return (*(Tpopup_loc_request_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_loc_request_window)))(aIndex_H); }

inline TAknWindowLineLayout list_single_graphic_popup_wml_pane(TInt aIndex_t)		{ return (*(Tlist_single_graphic_popup_wml_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_graphic_popup_wml_pane)))(aIndex_t); }

inline TAknLayoutTableLimits Pop_up_window_list_pane_descendants_call_conf__Limits()		{ return (*(TPop_up_window_list_pane_descendants_call_conf__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_window_list_pane_descendants_call_conf__Limits)))(); }

inline TAknWindowLineLayout Pop_up_window_list_pane_descendants_call_conf_(TInt aLineIndex, TInt aIndex_t)		{ return (*(TPop_up_window_list_pane_descendants_call_conf__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pop_up_window_list_pane_descendants_call_conf_)))(aLineIndex, aIndex_t); }

inline TAknWindowLineLayout list_wml_pane(TInt aIndex_H)		{ return (*(Tlist_wml_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_wml_pane)))(aIndex_H); }

inline TAknWindowLineLayout Browser_address_field_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TBrowser_address_field_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_address_field_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Browser_address_field_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TBrowser_address_field_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_address_field_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Browser_address_field_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TBrowser_address_field_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_address_field_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Browser_address_field_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TBrowser_address_field_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_address_field_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknLayoutTableLimits Browser_address_field_pop_up_window_graphics_Limits()		{ return (*(TBrowser_address_field_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_address_field_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Browser_address_field_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TBrowser_address_field_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Browser_address_field_pop_up_window_graphics)))(aLineIndex, aParentRect); }

inline TAknTextLineLayout First_call_pop_up_window_texts__one_call__Line_3()		{ return (*(TFirst_call_pop_up_window_texts__one_call__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_texts__one_call__Line_3)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_graphics__one_call__Line_2()		{ return (*(TFirst_call_pop_up_window_graphics__one_call__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_graphics__one_call__Line_2)))(); }

inline TAknLayoutTableLimits First_call_pop_up_window_graphics__one_call__Limits()		{ return (*(TFirst_call_pop_up_window_graphics__one_call__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_graphics__one_call__Limits)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_graphics__one_call_(TInt aLineIndex)		{ return (*(TFirst_call_pop_up_window_graphics__one_call__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_graphics__one_call_)))(aLineIndex); }

inline TAknTextLineLayout First_call_pop_up_window_texts__two_calls__Line_3()		{ return (*(TFirst_call_pop_up_window_texts__two_calls__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_texts__two_calls__Line_3)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_graphics__two_calls__Line_2()		{ return (*(TFirst_call_pop_up_window_graphics__two_calls__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_graphics__two_calls__Line_2)))(); }

inline TAknLayoutTableLimits First_call_pop_up_window_graphics__two_calls__Limits()		{ return (*(TFirst_call_pop_up_window_graphics__two_calls__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_graphics__two_calls__Limits)))(); }

inline TAknWindowLineLayout First_call_pop_up_window_graphics__two_calls_(TInt aLineIndex)		{ return (*(TFirst_call_pop_up_window_graphics__two_calls__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_call_pop_up_window_graphics__two_calls_)))(aLineIndex); }

inline TAknWindowLineLayout Call_type_pane_split_Line_1()		{ return (*(TCall_type_pane_split_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Call_type_pane_split_Line_1)))(); }

inline TAknWindowLineLayout Call_type_pane_split_Line_2()		{ return (*(TCall_type_pane_split_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Call_type_pane_split_Line_2)))(); }

inline TAknWindowLineLayout popup_wml_address_window(TInt aIndex_b, TInt aIndex_H)		{ return (*(Tpopup_wml_address_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_wml_address_window)))(aIndex_b, aIndex_H); }

inline TAknWindowLineLayout List_pane_elements__browser_single_graphic__Line_1(TInt aIndex_C)		{ return (*(TList_pane_elements__browser_single_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__browser_single_graphic__Line_1)))(aIndex_C); }

inline TAknWindowLineLayout List_pane_elements__browser_single_graphic__Line_2()		{ return (*(TList_pane_elements__browser_single_graphic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_elements__browser_single_graphic__Line_2)))(); }

inline TAknTextLineLayout List_pane_texts__browser_single_graphic__Line_1(TInt aIndex_C)		{ return (*(TList_pane_texts__browser_single_graphic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__browser_single_graphic__Line_1)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_8()		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_8)))(); }

inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_9()		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_9)))(); }

inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_7(TInt aIndex_C)		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_7)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_8(TInt aIndex_C)		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_8)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_7(TInt aIndex_C)		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_7)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_8(TInt aIndex_C)		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_8)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_9(TInt aIndex_C)		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_9)))(aIndex_C); }

inline TAknTextLineLayout Camcorder_viewfinder_texts_Line_1(TInt aIndex_C)		{ return (*(TCamcorder_viewfinder_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_viewfinder_texts_Line_1)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Still_Image_Burst_Mode_Post_recording_elements_Line_1(TInt aIndex_t)		{ return (*(TCamcorder_Still_Image_Burst_Mode_Post_recording_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Burst_Mode_Post_recording_elements_Line_1)))(aIndex_t); }

inline TAknWindowLineLayout Camcorder_Still_Image_Burst_Mode_Post_recording_elements_Line_2(TInt aIndex_l)		{ return (*(TCamcorder_Still_Image_Burst_Mode_Post_recording_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Still_Image_Burst_Mode_Post_recording_elements_Line_2)))(aIndex_l); }

inline TAknWindowLineLayout grid_cams_pane()		{ return (*(Tgrid_cams_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_cams_pane)))(); }

inline TAknTextLineLayout Camcorder_Burst_Mode_texts_Line_1()		{ return (*(TCamcorder_Burst_Mode_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Burst_Mode_texts_Line_1)))(); }

inline TAknWindowLineLayout Camcorder_Brightness_Contrast_descendants_and_elements_Line_1()		{ return (*(TCamcorder_Brightness_Contrast_descendants_and_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Brightness_Contrast_descendants_and_elements_Line_1)))(); }

inline TAknWindowLineLayout navi_slider_pane()		{ return (*(Tnavi_slider_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_navi_slider_pane)))(); }

inline TAknLayoutTableLimits Camcorder_Brightness_Contrast_descendants_and_elements_Limits()		{ return (*(TCamcorder_Brightness_Contrast_descendants_and_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Brightness_Contrast_descendants_and_elements_Limits)))(); }

inline TAknWindowLineLayout Camcorder_Brightness_Contrast_descendants_and_elements(TInt aLineIndex)		{ return (*(TCamcorder_Brightness_Contrast_descendants_and_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Brightness_Contrast_descendants_and_elements)))(aLineIndex); }

inline TAknWindowLineLayout Navi_Slider_pane_elements_Line_1()		{ return (*(TNavi_Slider_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_Slider_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Navi_Slider_pane_elements_Line_2()		{ return (*(TNavi_Slider_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_Slider_pane_elements_Line_2)))(); }

inline TAknLayoutTableLimits Navi_Slider_pane_elements_Limits()		{ return (*(TNavi_Slider_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_Slider_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Navi_Slider_pane_elements(TInt aLineIndex)		{ return (*(TNavi_Slider_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Navi_Slider_pane_elements)))(aLineIndex); }

inline TAknWindowLineLayout Camcorder_Manual_Exposure_descendants_and_elements_Line_1()		{ return (*(TCamcorder_Manual_Exposure_descendants_and_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Manual_Exposure_descendants_and_elements_Line_1)))(); }

inline TAknWindowLineLayout Zooming_steps_sizes_Line_1()		{ return (*(TZooming_steps_sizes_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_steps_sizes_Line_1)))(); }

inline TAknWindowLineLayout Zooming_steps_sizes_Line_2()		{ return (*(TZooming_steps_sizes_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_steps_sizes_Line_2)))(); }

inline TAknWindowLineLayout Zooming_steps_sizes_Line_3()		{ return (*(TZooming_steps_sizes_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_steps_sizes_Line_3)))(); }

inline TAknWindowLineLayout Zooming_steps_sizes_Line_4()		{ return (*(TZooming_steps_sizes_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_steps_sizes_Line_4)))(); }

inline TAknWindowLineLayout Zooming_steps_sizes_Line_5()		{ return (*(TZooming_steps_sizes_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_steps_sizes_Line_5)))(); }

inline TAknWindowLineLayout Zooming_steps_sizes_Line_6()		{ return (*(TZooming_steps_sizes_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_steps_sizes_Line_6)))(); }

inline TAknWindowLineLayout Zooming_steps_sizes_Line_7()		{ return (*(TZooming_steps_sizes_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_steps_sizes_Line_7)))(); }

inline TAknWindowLineLayout Zooming_steps_sizes_Line_8()		{ return (*(TZooming_steps_sizes_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_steps_sizes_Line_8)))(); }

inline TAknWindowLineLayout Zooming_steps_sizes_Line_9()		{ return (*(TZooming_steps_sizes_Line_9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_steps_sizes_Line_9)))(); }

inline TAknWindowLineLayout Zooming_steps_sizes_Line_10()		{ return (*(TZooming_steps_sizes_Line_10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_steps_sizes_Line_10)))(); }

inline TAknWindowLineLayout Zooming_steps_sizes_Line_11()		{ return (*(TZooming_steps_sizes_Line_11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Zooming_steps_sizes_Line_11)))(); }

inline TAknWindowLineLayout Uplink_video_image__small__Line_1()		{ return (*(TUplink_video_image__small__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Uplink_video_image__small__Line_1)))(); }

inline TAknWindowLineLayout Uplink_video_image__small__Line_2()		{ return (*(TUplink_video_image__small__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Uplink_video_image__small__Line_2)))(); }

inline TAknWindowLineLayout Uplink_video_image__small__Line_3()		{ return (*(TUplink_video_image__small__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Uplink_video_image__small__Line_3)))(); }

inline TAknLayoutTableLimits Uplink_video_image__small__Limits()		{ return (*(TUplink_video_image__small__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Uplink_video_image__small__Limits)))(); }

inline TAknWindowLineLayout Uplink_video_image__small_(TInt aLineIndex)		{ return (*(TUplink_video_image__small__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Uplink_video_image__small_)))(aLineIndex); }

inline TAknWindowLineLayout Downlink_video_image_Line_4()		{ return (*(TDownlink_video_image_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Downlink_video_image_Line_4)))(); }

inline TAknWindowLineLayout downlink_stream_area()		{ return (*(Tdownlink_stream_area_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_downlink_stream_area)))(); }

inline TAknWindowLineLayout MIDP_text_elements_Line_1(TInt aIndex_t)		{ return (*(TMIDP_text_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_MIDP_text_elements_Line_1)))(aIndex_t); }

inline TAknWindowLineLayout MIDP_text_elements_Line_2()		{ return (*(TMIDP_text_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_MIDP_text_elements_Line_2)))(); }

inline TAknTextLineLayout MIDP_texts_Line_1(TInt aIndex_B)		{ return (*(TMIDP_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_MIDP_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_MIDP_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_MIDP_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_MIDP_texts_Line_1)))(aNumberOfLinesShown); }

// LAF Table : Camcorder Zooming factor pane elements v2
inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_v2_Line_1(TInt aIndex_C)		{ return (*(TCamcorder_Zooming_factor_pane_elements_v2_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Zooming_factor_pane_elements_v2_Line_1)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_v2_Line_2(TInt aIndex_C)		{ return (*(TCamcorder_Zooming_factor_pane_elements_v2_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Zooming_factor_pane_elements_v2_Line_2)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_v2_Line_3(TInt aIndex_C)		{ return (*(TCamcorder_Zooming_factor_pane_elements_v2_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Zooming_factor_pane_elements_v2_Line_3)))(aIndex_C); }

inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_v2_Line_4(TInt aIndex_C)		{ return (*(TCamcorder_Zooming_factor_pane_elements_v2_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Zooming_factor_pane_elements_v2_Line_4)))(aIndex_C); }

inline TAknLayoutTableLimits Camcorder_Zooming_factor_pane_elements_v2_Limits()		{ return (*(TCamcorder_Zooming_factor_pane_elements_v2_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Zooming_factor_pane_elements_v2_Limits)))(); }

inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_v2(TInt aLineIndex, TInt aIndex_C)		{ return (*(TCamcorder_Zooming_factor_pane_elements_v2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Camcorder_Zooming_factor_pane_elements_v2)))(aLineIndex, aIndex_C); }

// FM Radio layouts
inline TAknWindowLineLayout cell_radio_pane(TInt aIndex_t)		{ return (*(Tcell_radio_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_radio_pane)))(aIndex_t); }

inline TAknWindowLineLayout FM_Radio_cell_elements_Line_1()		{ return (*(TFM_Radio_cell_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_cell_elements_Line_1)))(); }

inline TAknWindowLineLayout grid_radio_pane()		{ return (*(Tgrid_radio_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_radio_pane)))(); }

inline TAknWindowLineLayout FM_Radio_elements_Line_2()		{ return (*(TFM_Radio_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_elements_Line_2)))(); }

inline TAknWindowLineLayout FM_Radio_elements_Line_3()		{ return (*(TFM_Radio_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_elements_Line_3)))(); }

inline TAknWindowLineLayout FM_Radio_elements_Line_4()		{ return (*(TFM_Radio_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_elements_Line_4)))(); }

inline TAknWindowLineLayout FM_Radio_elements_Line_5()		{ return (*(TFM_Radio_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_elements_Line_5)))(); }

inline TAknLayoutTableLimits FM_Radio_elements_Limits()		{ return (*(TFM_Radio_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_elements_Limits)))(); }

inline TAknWindowLineLayout FM_Radio_elements(TInt aLineIndex)		{ return (*(TFM_Radio_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_elements)))(aLineIndex); }

inline TAknTextLineLayout FM_Radio_texts_Line_1()		{ return (*(TFM_Radio_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_texts_Line_1)))(); }

inline TAknTextLineLayout FM_Radio_texts_Line_2()		{ return (*(TFM_Radio_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_texts_Line_2)))(); }

inline TAknTextLineLayout FM_Radio_texts_Line_3()		{ return (*(TFM_Radio_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_texts_Line_3)))(); }

inline TAknTextLineLayout FM_Radio_texts_Line_4()		{ return (*(TFM_Radio_texts_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_texts_Line_4)))(); }

inline TAknTextLineLayout FM_Radio_texts_Line_5()		{ return (*(TFM_Radio_texts_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_texts_Line_5)))(); }

inline TAknLayoutTableLimits FM_Radio_texts_Limits()		{ return (*(TFM_Radio_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_texts_Limits)))(); }

inline TAknTextLineLayout FM_Radio_texts(TInt aLineIndex)		{ return (*(TFM_Radio_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_FM_Radio_texts)))(aLineIndex); }

inline TAknWindowLineLayout aid_cams_cif_uncrop_pane()		{ return (*(Taid_cams_cif_uncrop_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_cams_cif_uncrop_pane)))(); }

inline TAknWindowLineLayout video_down_subqcif_pane()		{ return (*(Tvideo_down_subqcif_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_video_down_subqcif_pane)))(); }



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

// CDL API functions, as defined in applayout.cdl

	inline TAknWindowLineLayout Browser_image_highlight_Line_1() const		{ return (*(TBrowser_image_highlight_Line_1_sig*)(GetFunction(EApiId_Browser_image_highlight_Line_1)))(); }

	inline TAknWindowLineLayout Browser_image_highlight_Line_2() const		{ return (*(TBrowser_image_highlight_Line_2_sig*)(GetFunction(EApiId_Browser_image_highlight_Line_2)))(); }

	inline TAknWindowLineLayout Browser_image_highlight_Line_3() const		{ return (*(TBrowser_image_highlight_Line_3_sig*)(GetFunction(EApiId_Browser_image_highlight_Line_3)))(); }

	inline TAknWindowLineLayout Browser_image_highlight_Line_4() const		{ return (*(TBrowser_image_highlight_Line_4_sig*)(GetFunction(EApiId_Browser_image_highlight_Line_4)))(); }

	inline TAknWindowLineLayout Browser_image_highlight_Line_5() const		{ return (*(TBrowser_image_highlight_Line_5_sig*)(GetFunction(EApiId_Browser_image_highlight_Line_5)))(); }

	inline TAknWindowLineLayout Browser_image_highlight_Line_6() const		{ return (*(TBrowser_image_highlight_Line_6_sig*)(GetFunction(EApiId_Browser_image_highlight_Line_6)))(); }

	inline TAknWindowLineLayout Browser_image_highlight_Line_7() const		{ return (*(TBrowser_image_highlight_Line_7_sig*)(GetFunction(EApiId_Browser_image_highlight_Line_7)))(); }

	inline TAknWindowLineLayout Browser_image_highlight_Line_8() const		{ return (*(TBrowser_image_highlight_Line_8_sig*)(GetFunction(EApiId_Browser_image_highlight_Line_8)))(); }

	inline TAknWindowLineLayout Browser_image_highlight_Line_9() const		{ return (*(TBrowser_image_highlight_Line_9_sig*)(GetFunction(EApiId_Browser_image_highlight_Line_9)))(); }

	inline TAknLayoutTableLimits Browser_image_highlight_Limits() const		{ return (*(TBrowser_image_highlight_Limits_sig*)(GetFunction(EApiId_Browser_image_highlight_Limits)))(); }

	inline TAknWindowLineLayout Browser_image_highlight(TInt aLineIndex) const		{ return (*(TBrowser_image_highlight_sig*)(GetFunction(EApiId_Browser_image_highlight)))(aLineIndex); }

	// LAF Table : Navi pane elements
	inline TAknWindowLineLayout Navi_pane_elements_Line_1() const		{ return (*(TNavi_pane_elements_Line_1_sig*)(GetFunction(EApiId_Navi_pane_elements_Line_1)))(); }

	// LAF Table : Application specific list panes
	inline TAknWindowLineLayout list_cale_time_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tlist_cale_time_pane_sig*)(GetFunction(EApiId_list_cale_time_pane)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout list_pinb_item_pane(TInt aIndex_t) const		{ return (*(Tlist_pinb_item_pane_sig*)(GetFunction(EApiId_list_pinb_item_pane)))(aIndex_t); }

	// LAF Table : List pane elements (cale time)
	inline TAknWindowLineLayout List_pane_elements__cale_time__Line_1(TInt aIndex_t) const		{ return (*(TList_pane_elements__cale_time__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__cale_time__Line_1)))(aIndex_t); }

	inline TAknWindowLineLayout List_pane_elements__cale_time__Line_2() const		{ return (*(TList_pane_elements__cale_time__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__cale_time__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__cale_time__Line_3(TInt aIndex_l, TInt aIndex_t) const		{ return (*(TList_pane_elements__cale_time__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__cale_time__Line_3)))(aIndex_l, aIndex_t); }

	// LAF Table : List pane texts (cale time)
	inline TAknTextLineLayout List_pane_texts__cale_time__Line_1(TInt aCommon1, TInt aIndex_B) const		{ return (*(TList_pane_texts__cale_time__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__cale_time__Line_1)))(aCommon1, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_List_pane_texts__cale_time__Line_1(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_List_pane_texts__cale_time__Line_1_sig*)(GetFunction(EApiId_Multiline_List_pane_texts__cale_time__Line_1)))(aCommon1, aNumberOfLinesShown); }

	inline TAknTextLineLayout List_pane_texts__cale_time__Line_2(TInt aCommon1) const		{ return (*(TList_pane_texts__cale_time__Line_2_sig*)(GetFunction(EApiId_List_pane_texts__cale_time__Line_2)))(aCommon1); }

	inline TAknTextLineLayout List_pane_texts__cale_time__Line_3(TInt aIndex_l, TInt aIndex_r, TInt aIndex_B, TInt aIndex_W) const		{ return (*(TList_pane_texts__cale_time__Line_3_sig*)(GetFunction(EApiId_List_pane_texts__cale_time__Line_3)))(aIndex_l, aIndex_r, aIndex_B, aIndex_W); }

	inline TAknMultiLineTextLayout Multiline_List_pane_texts__cale_time__Line_3(TInt aIndex_l, TInt aIndex_r, TInt aIndex_W, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_List_pane_texts__cale_time__Line_3_sig*)(GetFunction(EApiId_Multiline_List_pane_texts__cale_time__Line_3)))(aIndex_l, aIndex_r, aIndex_W, aNumberOfLinesShown); }

	// LAF Table : List pane elements (pinb item)
	inline TAknWindowLineLayout List_pane_elements__pinb_item__Line_1() const		{ return (*(TList_pane_elements__pinb_item__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__pinb_item__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__pinb_item__Line_2() const		{ return (*(TList_pane_elements__pinb_item__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__pinb_item__Line_2)))(); }

	inline TAknWindowLineLayout List_pane_elements__pinb_item__Line_3() const		{ return (*(TList_pane_elements__pinb_item__Line_3_sig*)(GetFunction(EApiId_List_pane_elements__pinb_item__Line_3)))(); }

	inline TAknWindowLineLayout List_pane_elements__pinb_item__Line_4(TInt aIndex_l) const		{ return (*(TList_pane_elements__pinb_item__Line_4_sig*)(GetFunction(EApiId_List_pane_elements__pinb_item__Line_4)))(aIndex_l); }

	inline TAknLayoutTableLimits List_pane_elements__pinb_item__SUB_TABLE_0_Limits() const		{ return (*(TList_pane_elements__pinb_item__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_List_pane_elements__pinb_item__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__pinb_item__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TList_pane_elements__pinb_item__SUB_TABLE_0_sig*)(GetFunction(EApiId_List_pane_elements__pinb_item__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : List pane texts (pinb item)
	inline TAknTextLineLayout List_pane_texts__pinb_item__Line_1(TInt aCommon1) const		{ return (*(TList_pane_texts__pinb_item__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__pinb_item__Line_1)))(aCommon1); }

	// LAF Table : List pane highlight (several)
	inline TAknWindowLineLayout List_pane_highlight__several__Line_1(const TRect& aParentRect) const		{ return (*(TList_pane_highlight__several__Line_1_sig*)(GetFunction(EApiId_List_pane_highlight__several__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout List_pane_highlight__several__Line_2(const TRect& aParentRect) const		{ return (*(TList_pane_highlight__several__Line_2_sig*)(GetFunction(EApiId_List_pane_highlight__several__Line_2)))(aParentRect); }

	inline TAknLayoutTableLimits List_pane_highlight__several__Limits() const		{ return (*(TList_pane_highlight__several__Limits_sig*)(GetFunction(EApiId_List_pane_highlight__several__Limits)))(); }

	inline TAknWindowLineLayout List_pane_highlight__several_(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TList_pane_highlight__several__sig*)(GetFunction(EApiId_List_pane_highlight__several_)))(aLineIndex, aParentRect); }

	// LAF Table : Grid pane descendants
	inline TAknWindowLineLayout cell_pinb_pane(TInt aIndex_l, TInt aIndex_t) const		{ return (*(Tcell_pinb_pane_sig*)(GetFunction(EApiId_cell_pinb_pane)))(aIndex_l, aIndex_t); }

	inline TAknWindowLineLayout cell_qdial_pane(TInt aIndex_l, TInt aIndex_t) const		{ return (*(Tcell_qdial_pane_sig*)(GetFunction(EApiId_cell_qdial_pane)))(aIndex_l, aIndex_t); }

	inline TAknWindowLineLayout cell_cale_month_pane(TInt aIndex_l, TInt aIndex_t, TInt aIndex_W) const		{ return (*(Tcell_cale_month_pane_sig*)(GetFunction(EApiId_cell_cale_month_pane)))(aIndex_l, aIndex_t, aIndex_W); }

	inline TAknWindowLineLayout cell_calc_pane(TInt aIndex_l, TInt aIndex_t) const		{ return (*(Tcell_calc_pane_sig*)(GetFunction(EApiId_cell_calc_pane)))(aIndex_l, aIndex_t); }

	inline TAknWindowLineLayout cell_cale_week_pane(TInt aIndex_l, TInt aIndex_t) const		{ return (*(Tcell_cale_week_pane_sig*)(GetFunction(EApiId_cell_cale_week_pane)))(aIndex_l, aIndex_t); }

	inline TAknWindowLineLayout cell_vorec_pane(TInt aIndex_t) const		{ return (*(Tcell_vorec_pane_sig*)(GetFunction(EApiId_cell_vorec_pane)))(aIndex_t); }

	inline TAknWindowLineLayout cell_gms_pane(TInt aIndex_l, TInt aIndex_t) const		{ return (*(Tcell_gms_pane_sig*)(GetFunction(EApiId_cell_gms_pane)))(aIndex_l, aIndex_t); }

	inline TAknWindowLineLayout cell_mp_pane(TInt aIndex_t) const		{ return (*(Tcell_mp_pane_sig*)(GetFunction(EApiId_cell_mp_pane)))(aIndex_t); }

	inline TAknLayoutTableLimits Grid_pane_descendants_SUB_TABLE_0_Limits() const		{ return (*(TGrid_pane_descendants_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Grid_pane_descendants_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Grid_pane_descendants_SUB_TABLE_0(TInt aLineIndex, TInt aIndex_l, TInt aIndex_t) const		{ return (*(TGrid_pane_descendants_SUB_TABLE_0_sig*)(GetFunction(EApiId_Grid_pane_descendants_SUB_TABLE_0)))(aLineIndex, aIndex_l, aIndex_t); }

	// LAF Table : Cell pane elements (pinb)
	inline TAknWindowLineLayout Cell_pane_elements__pinb__Line_1() const		{ return (*(TCell_pane_elements__pinb__Line_1_sig*)(GetFunction(EApiId_Cell_pane_elements__pinb__Line_1)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__pinb__Line_2() const		{ return (*(TCell_pane_elements__pinb__Line_2_sig*)(GetFunction(EApiId_Cell_pane_elements__pinb__Line_2)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__pinb__Line_3() const		{ return (*(TCell_pane_elements__pinb__Line_3_sig*)(GetFunction(EApiId_Cell_pane_elements__pinb__Line_3)))(); }

	inline TAknLayoutTableLimits Cell_pane_elements__pinb__Limits() const		{ return (*(TCell_pane_elements__pinb__Limits_sig*)(GetFunction(EApiId_Cell_pane_elements__pinb__Limits)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__pinb_(TInt aLineIndex) const		{ return (*(TCell_pane_elements__pinb__sig*)(GetFunction(EApiId_Cell_pane_elements__pinb_)))(aLineIndex); }

	// LAF Table : Cell pane elements (qdial)
	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_1() const		{ return (*(TCell_pane_elements__qdial__Line_1_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_1)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_2() const		{ return (*(TCell_pane_elements__qdial__Line_2_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_2)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_3() const		{ return (*(TCell_pane_elements__qdial__Line_3_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_3)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_4() const		{ return (*(TCell_pane_elements__qdial__Line_4_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_4)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_5() const		{ return (*(TCell_pane_elements__qdial__Line_5_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_5)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_6() const		{ return (*(TCell_pane_elements__qdial__Line_6_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_6)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_7() const		{ return (*(TCell_pane_elements__qdial__Line_7_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_7)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_8() const		{ return (*(TCell_pane_elements__qdial__Line_8_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_8)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_9() const		{ return (*(TCell_pane_elements__qdial__Line_9_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_9)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_10() const		{ return (*(TCell_pane_elements__qdial__Line_10_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_10)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_11() const		{ return (*(TCell_pane_elements__qdial__Line_11_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_11)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_12() const		{ return (*(TCell_pane_elements__qdial__Line_12_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_12)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_13() const		{ return (*(TCell_pane_elements__qdial__Line_13_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_13)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_14() const		{ return (*(TCell_pane_elements__qdial__Line_14_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_14)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_15() const		{ return (*(TCell_pane_elements__qdial__Line_15_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_15)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_16() const		{ return (*(TCell_pane_elements__qdial__Line_16_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_16)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_17() const		{ return (*(TCell_pane_elements__qdial__Line_17_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_17)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_18() const		{ return (*(TCell_pane_elements__qdial__Line_18_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_18)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_19() const		{ return (*(TCell_pane_elements__qdial__Line_19_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_19)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_20() const		{ return (*(TCell_pane_elements__qdial__Line_20_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_20)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial__Line_21() const		{ return (*(TCell_pane_elements__qdial__Line_21_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Line_21)))(); }

	inline TAknLayoutTableLimits Cell_pane_elements__qdial__Limits() const		{ return (*(TCell_pane_elements__qdial__Limits_sig*)(GetFunction(EApiId_Cell_pane_elements__qdial__Limits)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__qdial_(TInt aLineIndex) const		{ return (*(TCell_pane_elements__qdial__sig*)(GetFunction(EApiId_Cell_pane_elements__qdial_)))(aLineIndex); }

	// LAF Table : Cell pane texts (qdial)
	inline TAknTextLineLayout Cell_pane_texts__qdial__Line_1(TInt aIndex_l, TInt aCommon1, TInt aIndex_W) const		{ return (*(TCell_pane_texts__qdial__Line_1_sig*)(GetFunction(EApiId_Cell_pane_texts__qdial__Line_1)))(aIndex_l, aCommon1, aIndex_W); }

	inline TAknMultiLineTextLayout Multiline_Cell_pane_texts__qdial__Line_1(TInt aIndex_l, TInt aCommon1, TInt aIndex_W, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Cell_pane_texts__qdial__Line_1_sig*)(GetFunction(EApiId_Multiline_Cell_pane_texts__qdial__Line_1)))(aIndex_l, aCommon1, aIndex_W, aNumberOfLinesShown); }

	// LAF Table : Cell pane elements (cale month)
	inline TAknWindowLineLayout Cell_pane_elements__cale_month__Line_1(TInt aIndex_C, TInt aIndex_W) const		{ return (*(TCell_pane_elements__cale_month__Line_1_sig*)(GetFunction(EApiId_Cell_pane_elements__cale_month__Line_1)))(aIndex_C, aIndex_W); }

	inline TAknWindowLineLayout Cell_pane_elements__cale_month__Line_2(TInt aIndex_l) const		{ return (*(TCell_pane_elements__cale_month__Line_2_sig*)(GetFunction(EApiId_Cell_pane_elements__cale_month__Line_2)))(aIndex_l); }

	// LAF Table : Cell pane texts (cale month)
	inline TAknTextLineLayout Cell_pane_texts__cale_month__Line_1(TInt aIndex_C, TInt aCommon1) const		{ return (*(TCell_pane_texts__cale_month__Line_1_sig*)(GetFunction(EApiId_Cell_pane_texts__cale_month__Line_1)))(aIndex_C, aCommon1); }

	// LAF Table : Cell pane elements (calc)
	inline TAknWindowLineLayout Cell_pane_elements__calc__Line_1() const		{ return (*(TCell_pane_elements__calc__Line_1_sig*)(GetFunction(EApiId_Cell_pane_elements__calc__Line_1)))(); }

	// LAF Table : Cell pane elements (cale week)
	inline TAknWindowLineLayout Cell_pane_elements__cale_week__Line_1(const TRect& aParentRect, TInt aIndex_C) const		{ return (*(TCell_pane_elements__cale_week__Line_1_sig*)(GetFunction(EApiId_Cell_pane_elements__cale_week__Line_1)))(aParentRect, aIndex_C); }

	inline TAknWindowLineLayout Cell_pane_elements__cale_week__Line_2(TInt aIndex_t) const		{ return (*(TCell_pane_elements__cale_week__Line_2_sig*)(GetFunction(EApiId_Cell_pane_elements__cale_week__Line_2)))(aIndex_t); }

	inline TAknWindowLineLayout Cell_pane_elements__cale_week__Line_3(TInt aIndex_t) const		{ return (*(TCell_pane_elements__cale_week__Line_3_sig*)(GetFunction(EApiId_Cell_pane_elements__cale_week__Line_3)))(aIndex_t); }

	inline TAknWindowLineLayout Cell_pane_elements__cale_week__Line_4() const		{ return (*(TCell_pane_elements__cale_week__Line_4_sig*)(GetFunction(EApiId_Cell_pane_elements__cale_week__Line_4)))(); }

	inline TAknLayoutTableLimits Cell_pane_elements__cale_week__SUB_TABLE_0_Limits() const		{ return (*(TCell_pane_elements__cale_week__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Cell_pane_elements__cale_week__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__cale_week__SUB_TABLE_0(TInt aLineIndex, TInt aIndex_t) const		{ return (*(TCell_pane_elements__cale_week__SUB_TABLE_0_sig*)(GetFunction(EApiId_Cell_pane_elements__cale_week__SUB_TABLE_0)))(aLineIndex, aIndex_t); }

	// LAF Table : Voice Recorder cell elements
	inline TAknWindowLineLayout Voice_Recorder_cell_elements_Line_1() const		{ return (*(TVoice_Recorder_cell_elements_Line_1_sig*)(GetFunction(EApiId_Voice_Recorder_cell_elements_Line_1)))(); }

	// LAF Table : Graphical message cell elements
	inline TAknWindowLineLayout Graphical_message_cell_elements_Line_1() const		{ return (*(TGraphical_message_cell_elements_Line_1_sig*)(GetFunction(EApiId_Graphical_message_cell_elements_Line_1)))(); }

	inline TAknWindowLineLayout Graphical_message_cell_elements_Line_2() const		{ return (*(TGraphical_message_cell_elements_Line_2_sig*)(GetFunction(EApiId_Graphical_message_cell_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Graphical_message_cell_elements_Limits() const		{ return (*(TGraphical_message_cell_elements_Limits_sig*)(GetFunction(EApiId_Graphical_message_cell_elements_Limits)))(); }

	inline TAknWindowLineLayout Graphical_message_cell_elements(TInt aLineIndex) const		{ return (*(TGraphical_message_cell_elements_sig*)(GetFunction(EApiId_Graphical_message_cell_elements)))(aLineIndex); }

	// LAF Table : MediaPlayer cell elements
	inline TAknWindowLineLayout MediaPlayer_cell_elements_Line_1() const		{ return (*(TMediaPlayer_cell_elements_Line_1_sig*)(GetFunction(EApiId_MediaPlayer_cell_elements_Line_1)))(); }

	// LAF Table : Cell pane highlight elements (various)
	inline TAknWindowLineLayout Cell_pane_highlight_elements__various__Line_1(const TRect& aParentRect) const		{ return (*(TCell_pane_highlight_elements__various__Line_1_sig*)(GetFunction(EApiId_Cell_pane_highlight_elements__various__Line_1)))(aParentRect); }

	// LAF Table : Cell pane highlight elements (qdial)
	inline TAknWindowLineLayout Cell_pane_highlight_elements__qdial__Line_1(const TRect& aParentRect) const		{ return (*(TCell_pane_highlight_elements__qdial__Line_1_sig*)(GetFunction(EApiId_Cell_pane_highlight_elements__qdial__Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Cell_pane_highlight_elements__qdial__Line_2() const		{ return (*(TCell_pane_highlight_elements__qdial__Line_2_sig*)(GetFunction(EApiId_Cell_pane_highlight_elements__qdial__Line_2)))(); }

	// LAF Table : Browser texts
	inline TAknTextLineLayout Browser_texts_Line_1(TInt aIndex_C, TInt aIndex_B) const		{ return (*(TBrowser_texts_Line_1_sig*)(GetFunction(EApiId_Browser_texts_Line_1)))(aIndex_C, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Browser_texts_Line_1(TInt aIndex_C, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Browser_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Browser_texts_Line_1)))(aIndex_C, aNumberOfLinesShown); }

	inline TAknTextLineLayout Browser_texts_Line_2(TInt aIndex_C, TInt aIndex_B) const		{ return (*(TBrowser_texts_Line_2_sig*)(GetFunction(EApiId_Browser_texts_Line_2)))(aIndex_C, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Browser_texts_Line_2(TInt aIndex_C, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Browser_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Browser_texts_Line_2)))(aIndex_C, aNumberOfLinesShown); }

	inline TAknTextLineLayout Browser_texts_Line_3(TInt aIndex_C, TInt aIndex_B) const		{ return (*(TBrowser_texts_Line_3_sig*)(GetFunction(EApiId_Browser_texts_Line_3)))(aIndex_C, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Browser_texts_Line_3(TInt aIndex_C, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Browser_texts_Line_3_sig*)(GetFunction(EApiId_Multiline_Browser_texts_Line_3)))(aIndex_C, aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Browser_texts_Limits() const		{ return (*(TBrowser_texts_Limits_sig*)(GetFunction(EApiId_Browser_texts_Limits)))(); }

	inline TAknTextLineLayout Browser_texts(TInt aLineIndex, TInt aIndex_C, TInt aIndex_B) const		{ return (*(TBrowser_texts_sig*)(GetFunction(EApiId_Browser_texts)))(aLineIndex, aIndex_C, aIndex_B); }

	// LAF Table : Browser selection box elements
	inline TAknWindowLineLayout Browser_selection_box_elements_Line_1() const		{ return (*(TBrowser_selection_box_elements_Line_1_sig*)(GetFunction(EApiId_Browser_selection_box_elements_Line_1)))(); }

	inline TAknWindowLineLayout Browser_selection_box_elements_Line_2() const		{ return (*(TBrowser_selection_box_elements_Line_2_sig*)(GetFunction(EApiId_Browser_selection_box_elements_Line_2)))(); }

	inline TAknWindowLineLayout Browser_selection_box_elements_Line_3() const		{ return (*(TBrowser_selection_box_elements_Line_3_sig*)(GetFunction(EApiId_Browser_selection_box_elements_Line_3)))(); }

	inline TAknWindowLineLayout Browser_selection_box_elements_Line_4() const		{ return (*(TBrowser_selection_box_elements_Line_4_sig*)(GetFunction(EApiId_Browser_selection_box_elements_Line_4)))(); }

	inline TAknLayoutTableLimits Browser_selection_box_elements_Limits() const		{ return (*(TBrowser_selection_box_elements_Limits_sig*)(GetFunction(EApiId_Browser_selection_box_elements_Limits)))(); }

	inline TAknWindowLineLayout Browser_selection_box_elements(TInt aLineIndex) const		{ return (*(TBrowser_selection_box_elements_sig*)(GetFunction(EApiId_Browser_selection_box_elements)))(aLineIndex); }

	// LAF Table : Browser highlights
	inline TAknWindowLineLayout Browser_highlights_Line_1(const TRect& aParentRect, TInt aCommon1) const		{ return (*(TBrowser_highlights_Line_1_sig*)(GetFunction(EApiId_Browser_highlights_Line_1)))(aParentRect, aCommon1); }

	inline TAknWindowLineLayout Browser_highlights_Line_2(const TRect& aParentRect, TInt aCommon1) const		{ return (*(TBrowser_highlights_Line_2_sig*)(GetFunction(EApiId_Browser_highlights_Line_2)))(aParentRect, aCommon1); }

	inline TAknLayoutTableLimits Browser_highlights_Limits() const		{ return (*(TBrowser_highlights_Limits_sig*)(GetFunction(EApiId_Browser_highlights_Limits)))(); }

	inline TAknWindowLineLayout Browser_highlights(TInt aLineIndex, const TRect& aParentRect, TInt aCommon1) const		{ return (*(TBrowser_highlights_sig*)(GetFunction(EApiId_Browser_highlights)))(aLineIndex, aParentRect, aCommon1); }

	// LAF Table : Browser text link underlining
	inline TAknWindowLineLayout Browser_text_link_underlining_Line_1(const TRect& aParentRect, TInt aIndex_W) const		{ return (*(TBrowser_text_link_underlining_Line_1_sig*)(GetFunction(EApiId_Browser_text_link_underlining_Line_1)))(aParentRect, aIndex_W); }

	// LAF Table : Browser table frame graphics and highlight
	inline TAknWindowLineLayout Browser_table_frame_graphics_and_highlight_Line_1() const		{ return (*(TBrowser_table_frame_graphics_and_highlight_Line_1_sig*)(GetFunction(EApiId_Browser_table_frame_graphics_and_highlight_Line_1)))(); }

	inline TAknWindowLineLayout Browser_table_frame_graphics_and_highlight_Line_2() const		{ return (*(TBrowser_table_frame_graphics_and_highlight_Line_2_sig*)(GetFunction(EApiId_Browser_table_frame_graphics_and_highlight_Line_2)))(); }

	inline TAknLayoutTableLimits Browser_table_frame_graphics_and_highlight_Limits() const		{ return (*(TBrowser_table_frame_graphics_and_highlight_Limits_sig*)(GetFunction(EApiId_Browser_table_frame_graphics_and_highlight_Limits)))(); }

	inline TAknWindowLineLayout Browser_table_frame_graphics_and_highlight(TInt aLineIndex) const		{ return (*(TBrowser_table_frame_graphics_and_highlight_sig*)(GetFunction(EApiId_Browser_table_frame_graphics_and_highlight)))(aLineIndex); }

	// LAF Table : Browser image frame and highlight
	inline TAknWindowLineLayout Browser_image_frame_and_highlight_Line_1(TInt aIndex_C) const		{ return (*(TBrowser_image_frame_and_highlight_Line_1_sig*)(GetFunction(EApiId_Browser_image_frame_and_highlight_Line_1)))(aIndex_C); }

	inline TAknWindowLineLayout Browser_image_frame_and_highlight_Line_2() const		{ return (*(TBrowser_image_frame_and_highlight_Line_2_sig*)(GetFunction(EApiId_Browser_image_frame_and_highlight_Line_2)))(); }

	inline TAknWindowLineLayout Browser_image_frame_and_highlight_Line_3() const		{ return (*(TBrowser_image_frame_and_highlight_Line_3_sig*)(GetFunction(EApiId_Browser_image_frame_and_highlight_Line_3)))(); }

	inline TAknLayoutTableLimits Browser_image_frame_and_highlight_SUB_TABLE_0_Limits() const		{ return (*(TBrowser_image_frame_and_highlight_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Browser_image_frame_and_highlight_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Browser_image_frame_and_highlight_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TBrowser_image_frame_and_highlight_SUB_TABLE_0_sig*)(GetFunction(EApiId_Browser_image_frame_and_highlight_SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : Browser broken image
	inline TAknWindowLineLayout Browser_broken_image_Line_1() const		{ return (*(TBrowser_broken_image_Line_1_sig*)(GetFunction(EApiId_Browser_broken_image_Line_1)))(); }

	inline TAknWindowLineLayout Browser_broken_image_Line_2() const		{ return (*(TBrowser_broken_image_Line_2_sig*)(GetFunction(EApiId_Browser_broken_image_Line_2)))(); }

	inline TAknWindowLineLayout Browser_broken_image_Line_3() const		{ return (*(TBrowser_broken_image_Line_3_sig*)(GetFunction(EApiId_Browser_broken_image_Line_3)))(); }

	inline TAknLayoutTableLimits Browser_broken_image_Limits() const		{ return (*(TBrowser_broken_image_Limits_sig*)(GetFunction(EApiId_Browser_broken_image_Limits)))(); }

	inline TAknWindowLineLayout Browser_broken_image(TInt aLineIndex) const		{ return (*(TBrowser_broken_image_sig*)(GetFunction(EApiId_Browser_broken_image)))(aLineIndex); }

	// LAF Table : Browser broken image text
	inline TAknTextLineLayout Browser_broken_image_text_Line_1() const		{ return (*(TBrowser_broken_image_text_Line_1_sig*)(GetFunction(EApiId_Browser_broken_image_text_Line_1)))(); }

	// LAF Table : Calendar Day view elements and descendants
	inline TAknWindowLineLayout Calendar_Day_view_elements_and_descendants_Line_1() const		{ return (*(TCalendar_Day_view_elements_and_descendants_Line_1_sig*)(GetFunction(EApiId_Calendar_Day_view_elements_and_descendants_Line_1)))(); }

	inline TAknWindowLineLayout Calendar_Day_view_elements_and_descendants_Line_2() const		{ return (*(TCalendar_Day_view_elements_and_descendants_Line_2_sig*)(GetFunction(EApiId_Calendar_Day_view_elements_and_descendants_Line_2)))(); }

	inline TAknWindowLineLayout Calendar_Day_view_elements_and_descendants_Line_3() const		{ return (*(TCalendar_Day_view_elements_and_descendants_Line_3_sig*)(GetFunction(EApiId_Calendar_Day_view_elements_and_descendants_Line_3)))(); }

	inline TAknWindowLineLayout list_cale_pane() const		{ return (*(Tlist_cale_pane_sig*)(GetFunction(EApiId_list_cale_pane)))(); }

	inline TAknLayoutTableLimits Calendar_Day_view_elements_and_descendants_Limits() const		{ return (*(TCalendar_Day_view_elements_and_descendants_Limits_sig*)(GetFunction(EApiId_Calendar_Day_view_elements_and_descendants_Limits)))(); }

	inline TAknWindowLineLayout Calendar_Day_view_elements_and_descendants(TInt aLineIndex) const		{ return (*(TCalendar_Day_view_elements_and_descendants_sig*)(GetFunction(EApiId_Calendar_Day_view_elements_and_descendants)))(aLineIndex); }

	// LAF Table : List pane texts (cale time empty)
	inline TAknTextLineLayout List_pane_texts__cale_time_empty__Line_1(TInt aIndex_B) const		{ return (*(TList_pane_texts__cale_time_empty__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__cale_time_empty__Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_List_pane_texts__cale_time_empty__Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_List_pane_texts__cale_time_empty__Line_1_sig*)(GetFunction(EApiId_Multiline_List_pane_texts__cale_time_empty__Line_1)))(aNumberOfLinesShown); }

	// LAF Table : Calendar Week view elements
	inline TAknWindowLineLayout Calendar_Week_view_elements_Line_1() const		{ return (*(TCalendar_Week_view_elements_Line_1_sig*)(GetFunction(EApiId_Calendar_Week_view_elements_Line_1)))(); }

	inline TAknWindowLineLayout Calendar_Week_view_elements_Line_2() const		{ return (*(TCalendar_Week_view_elements_Line_2_sig*)(GetFunction(EApiId_Calendar_Week_view_elements_Line_2)))(); }

	inline TAknWindowLineLayout Calendar_Week_view_elements_Line_3() const		{ return (*(TCalendar_Week_view_elements_Line_3_sig*)(GetFunction(EApiId_Calendar_Week_view_elements_Line_3)))(); }

	inline TAknWindowLineLayout Calendar_Week_view_elements_Line_4() const		{ return (*(TCalendar_Week_view_elements_Line_4_sig*)(GetFunction(EApiId_Calendar_Week_view_elements_Line_4)))(); }

	inline TAknWindowLineLayout Calendar_Week_view_elements_Line_5() const		{ return (*(TCalendar_Week_view_elements_Line_5_sig*)(GetFunction(EApiId_Calendar_Week_view_elements_Line_5)))(); }

	inline TAknWindowLineLayout Calendar_Week_view_elements_Line_6(TInt aIndex_l) const		{ return (*(TCalendar_Week_view_elements_Line_6_sig*)(GetFunction(EApiId_Calendar_Week_view_elements_Line_6)))(aIndex_l); }

	inline TAknWindowLineLayout Calendar_Week_view_elements_Line_7(TInt aIndex_t) const		{ return (*(TCalendar_Week_view_elements_Line_7_sig*)(GetFunction(EApiId_Calendar_Week_view_elements_Line_7)))(aIndex_t); }

	inline TAknWindowLineLayout Calendar_Week_view_elements_Line_8(TInt aIndex_t) const		{ return (*(TCalendar_Week_view_elements_Line_8_sig*)(GetFunction(EApiId_Calendar_Week_view_elements_Line_8)))(aIndex_t); }

	inline TAknWindowLineLayout grid_cale_week_pane() const		{ return (*(Tgrid_cale_week_pane_sig*)(GetFunction(EApiId_grid_cale_week_pane)))(); }

	inline TAknLayoutTableLimits Calendar_Week_view_elements_SUB_TABLE_0_Limits() const		{ return (*(TCalendar_Week_view_elements_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Calendar_Week_view_elements_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Calendar_Week_view_elements_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TCalendar_Week_view_elements_SUB_TABLE_0_sig*)(GetFunction(EApiId_Calendar_Week_view_elements_SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : Calendar Week view texts
	inline TAknTextLineLayout Calendar_Week_view_texts_Line_1(TInt aCommon1) const		{ return (*(TCalendar_Week_view_texts_Line_1_sig*)(GetFunction(EApiId_Calendar_Week_view_texts_Line_1)))(aCommon1); }

	inline TAknTextLineLayout Calendar_Week_view_texts_Line_2(TInt aIndex_B) const		{ return (*(TCalendar_Week_view_texts_Line_2_sig*)(GetFunction(EApiId_Calendar_Week_view_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Calendar_Week_view_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Calendar_Week_view_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Calendar_Week_view_texts_Line_2)))(aNumberOfLinesShown); }

	// LAF Table : Calendar Month view elements
	inline TAknWindowLineLayout Calendar_Month_view_elements_Line_1() const		{ return (*(TCalendar_Month_view_elements_Line_1_sig*)(GetFunction(EApiId_Calendar_Month_view_elements_Line_1)))(); }

	inline TAknWindowLineLayout Calendar_Month_view_elements_Line_2() const		{ return (*(TCalendar_Month_view_elements_Line_2_sig*)(GetFunction(EApiId_Calendar_Month_view_elements_Line_2)))(); }

	inline TAknWindowLineLayout Calendar_Month_view_elements_Line_3() const		{ return (*(TCalendar_Month_view_elements_Line_3_sig*)(GetFunction(EApiId_Calendar_Month_view_elements_Line_3)))(); }

	inline TAknWindowLineLayout Calendar_Month_view_elements_Line_4() const		{ return (*(TCalendar_Month_view_elements_Line_4_sig*)(GetFunction(EApiId_Calendar_Month_view_elements_Line_4)))(); }

	inline TAknWindowLineLayout Calendar_Month_view_elements_Line_5() const		{ return (*(TCalendar_Month_view_elements_Line_5_sig*)(GetFunction(EApiId_Calendar_Month_view_elements_Line_5)))(); }

	inline TAknWindowLineLayout Calendar_Month_view_elements_Line_6(TInt aIndex_l) const		{ return (*(TCalendar_Month_view_elements_Line_6_sig*)(GetFunction(EApiId_Calendar_Month_view_elements_Line_6)))(aIndex_l); }

	inline TAknWindowLineLayout Calendar_Month_view_elements_Line_7(TInt aCommon1, TInt aIndex_t) const		{ return (*(TCalendar_Month_view_elements_Line_7_sig*)(GetFunction(EApiId_Calendar_Month_view_elements_Line_7)))(aCommon1, aIndex_t); }

	inline TAknWindowLineLayout grid_cale_month_pane(TInt aCommon1) const		{ return (*(Tgrid_cale_month_pane_sig*)(GetFunction(EApiId_grid_cale_month_pane)))(aCommon1); }

	inline TAknLayoutTableLimits Calendar_Month_view_elements_SUB_TABLE_0_Limits() const		{ return (*(TCalendar_Month_view_elements_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Calendar_Month_view_elements_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Calendar_Month_view_elements_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TCalendar_Month_view_elements_SUB_TABLE_0_sig*)(GetFunction(EApiId_Calendar_Month_view_elements_SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : Calendar Month view texts
	inline TAknTextLineLayout Calendar_Month_view_texts_Line_1(TInt aCommon1) const		{ return (*(TCalendar_Month_view_texts_Line_1_sig*)(GetFunction(EApiId_Calendar_Month_view_texts_Line_1)))(aCommon1); }

	inline TAknTextLineLayout Calendar_Month_view_texts_Line_2(TInt aIndex_B) const		{ return (*(TCalendar_Month_view_texts_Line_2_sig*)(GetFunction(EApiId_Calendar_Month_view_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Calendar_Month_view_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Calendar_Month_view_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Calendar_Month_view_texts_Line_2)))(aNumberOfLinesShown); }

	// LAF Table : Calculator elements
	inline TAknWindowLineLayout Calculator_elements_Line_1() const		{ return (*(TCalculator_elements_Line_1_sig*)(GetFunction(EApiId_Calculator_elements_Line_1)))(); }

	inline TAknWindowLineLayout gqn_graf_calc_paper() const		{ return (*(Tgqn_graf_calc_paper_sig*)(GetFunction(EApiId_gqn_graf_calc_paper)))(); }

	inline TAknWindowLineLayout Calculator_elements_Line_3(TInt aIndex_t) const		{ return (*(TCalculator_elements_Line_3_sig*)(GetFunction(EApiId_Calculator_elements_Line_3)))(aIndex_t); }

	inline TAknWindowLineLayout grid_calc_pane() const		{ return (*(Tgrid_calc_pane_sig*)(GetFunction(EApiId_grid_calc_pane)))(); }

	inline TAknLayoutTableLimits Calculator_elements_SUB_TABLE_0_Limits() const		{ return (*(TCalculator_elements_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Calculator_elements_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Calculator_elements_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TCalculator_elements_SUB_TABLE_0_sig*)(GetFunction(EApiId_Calculator_elements_SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : Calculator texts
	inline TAknTextLineLayout Calculator_texts_Line_1() const		{ return (*(TCalculator_texts_Line_1_sig*)(GetFunction(EApiId_Calculator_texts_Line_1)))(); }

	inline TAknTextLineLayout Calculator_texts_Line_2() const		{ return (*(TCalculator_texts_Line_2_sig*)(GetFunction(EApiId_Calculator_texts_Line_2)))(); }

	inline TAknTextLineLayout Calculator_texts_Line_3() const		{ return (*(TCalculator_texts_Line_3_sig*)(GetFunction(EApiId_Calculator_texts_Line_3)))(); }

	inline TAknTextLineLayout Calculator_texts_Line_4() const		{ return (*(TCalculator_texts_Line_4_sig*)(GetFunction(EApiId_Calculator_texts_Line_4)))(); }

	inline TAknTextLineLayout Calculator_texts_Line_5() const		{ return (*(TCalculator_texts_Line_5_sig*)(GetFunction(EApiId_Calculator_texts_Line_5)))(); }

	inline TAknTextLineLayout Calculator_texts_Line_6() const		{ return (*(TCalculator_texts_Line_6_sig*)(GetFunction(EApiId_Calculator_texts_Line_6)))(); }

	inline TAknTextLineLayout Calculator_texts_Line_7(TInt aIndex_B) const		{ return (*(TCalculator_texts_Line_7_sig*)(GetFunction(EApiId_Calculator_texts_Line_7)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Calculator_texts_Line_7(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Calculator_texts_Line_7_sig*)(GetFunction(EApiId_Multiline_Calculator_texts_Line_7)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Calculator_texts_Line_8(TInt aIndex_B) const		{ return (*(TCalculator_texts_Line_8_sig*)(GetFunction(EApiId_Calculator_texts_Line_8)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Calculator_texts_Line_8(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Calculator_texts_Line_8_sig*)(GetFunction(EApiId_Multiline_Calculator_texts_Line_8)))(aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Calculator_texts_SUB_TABLE_0_Limits() const		{ return (*(TCalculator_texts_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Calculator_texts_SUB_TABLE_0_Limits)))(); }

	inline TAknTextLineLayout Calculator_texts_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TCalculator_texts_SUB_TABLE_0_sig*)(GetFunction(EApiId_Calculator_texts_SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Calculator_texts_SUB_TABLE_1_Limits() const		{ return (*(TCalculator_texts_SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Calculator_texts_SUB_TABLE_1_Limits)))(); }

	inline TAknTextLineLayout Calculator_texts_SUB_TABLE_1(TInt aLineIndex, TInt aIndex_B) const		{ return (*(TCalculator_texts_SUB_TABLE_1_sig*)(GetFunction(EApiId_Calculator_texts_SUB_TABLE_1)))(aLineIndex, aIndex_B); }

	// LAF Table : Real Time Alarm Clock view descendants panes and elements
	inline TAknWindowLineLayout popup_clock__ref__window() const		{ return (*(Tpopup_clock__ref__window_sig*)(GetFunction(EApiId_popup_clock__ref__window)))(); }

	inline TAknWindowLineLayout Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_2() const		{ return (*(TReal_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_2_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_2)))(); }

	inline TAknWindowLineLayout Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_3() const		{ return (*(TReal_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_3_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_3)))(); }

	inline TAknWindowLineLayout Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_4() const		{ return (*(TReal_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_4_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_4)))(); }

	inline TAknWindowLineLayout Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_5() const		{ return (*(TReal_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_5_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Line_5)))(); }

	inline TAknLayoutTableLimits Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Limits() const		{ return (*(TReal_Time_Alarm_Clock_view_descendants_panes_and_elements_Limits_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_descendants_panes_and_elements_Limits)))(); }

	inline TAknWindowLineLayout Real_Time_Alarm_Clock_view_descendants_panes_and_elements(TInt aLineIndex) const		{ return (*(TReal_Time_Alarm_Clock_view_descendants_panes_and_elements_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_descendants_panes_and_elements)))(aLineIndex); }

	// LAF Table : Real Time Alarm Clock view texts (skins)
	inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__Line_1(TInt aCommon1) const		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__Line_1_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_texts__skins__Line_1)))(aCommon1); }

	inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__Line_2(TInt aIndex_B) const		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__Line_2_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_texts__skins__Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Real_Time_Alarm_Clock_view_texts__skins__Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Real_Time_Alarm_Clock_view_texts__skins__Line_2_sig*)(GetFunction(EApiId_Multiline_Real_Time_Alarm_Clock_view_texts__skins__Line_2)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__Line_3() const		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__Line_3_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_texts__skins__Line_3)))(); }

	inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__Line_4(TInt aIndex_B) const		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__Line_4_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_texts__skins__Line_4)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Real_Time_Alarm_Clock_view_texts__skins__Line_4(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Real_Time_Alarm_Clock_view_texts__skins__Line_4_sig*)(GetFunction(EApiId_Multiline_Real_Time_Alarm_Clock_view_texts__skins__Line_4)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__Line_5() const		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__Line_5_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_texts__skins__Line_5)))(); }

	inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__Line_6() const		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__Line_6_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_texts__skins__Line_6)))(); }

	inline TAknLayoutTableLimits Real_Time_Alarm_Clock_view_texts__skins__SUB_TABLE_0_Limits() const		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_texts__skins__SUB_TABLE_0_Limits)))(); }

	inline TAknTextLineLayout Real_Time_Alarm_Clock_view_texts__skins__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TReal_Time_Alarm_Clock_view_texts__skins__SUB_TABLE_0_sig*)(GetFunction(EApiId_Real_Time_Alarm_Clock_view_texts__skins__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : Clock find pane elements
	inline TAknWindowLineLayout Clock_find_pane_elements_Line_1() const		{ return (*(TClock_find_pane_elements_Line_1_sig*)(GetFunction(EApiId_Clock_find_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Clock_find_pane_elements_Line_2() const		{ return (*(TClock_find_pane_elements_Line_2_sig*)(GetFunction(EApiId_Clock_find_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Clock_find_pane_elements_Line_3() const		{ return (*(TClock_find_pane_elements_Line_3_sig*)(GetFunction(EApiId_Clock_find_pane_elements_Line_3)))(); }

	inline TAknWindowLineLayout Clock_find_pane_elements_Line_4() const		{ return (*(TClock_find_pane_elements_Line_4_sig*)(GetFunction(EApiId_Clock_find_pane_elements_Line_4)))(); }

	inline TAknWindowLineLayout Clock_find_pane_elements_Line_5() const		{ return (*(TClock_find_pane_elements_Line_5_sig*)(GetFunction(EApiId_Clock_find_pane_elements_Line_5)))(); }

	inline TAknLayoutTableLimits Clock_find_pane_elements_Limits() const		{ return (*(TClock_find_pane_elements_Limits_sig*)(GetFunction(EApiId_Clock_find_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Clock_find_pane_elements(TInt aLineIndex) const		{ return (*(TClock_find_pane_elements_sig*)(GetFunction(EApiId_Clock_find_pane_elements)))(aLineIndex); }

	// LAF Table : Find pane texts
	inline TAknTextLineLayout Find_pane_texts_Line_1() const		{ return (*(TFind_pane_texts_Line_1_sig*)(GetFunction(EApiId_Find_pane_texts_Line_1)))(); }

	// LAF Table : Camcorder Still Image Viewfinder descendants and elements
	inline TAknWindowLineLayout Near_QCIF() const		{ return (*(TNear_QCIF_sig*)(GetFunction(EApiId_Near_QCIF)))(); }

	inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_2() const		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_2_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_2)))(); }

	inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_3() const		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_3_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_3)))(); }

	inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_4() const		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_4_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_4)))(); }

	inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_5() const		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_5_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_5)))(); }

	inline TAknLayoutTableLimits Camcorder_Still_Image_Viewfinder_descendants_and_elements_Limits() const		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Limits_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Limits)))(); }

	inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements(TInt aLineIndex) const		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements)))(aLineIndex); }

	// LAF Table : Camcorder Zooming factor pane elements
	inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_Line_1() const		{ return (*(TCamcorder_Zooming_factor_pane_elements_Line_1_sig*)(GetFunction(EApiId_Camcorder_Zooming_factor_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_Line_2() const		{ return (*(TCamcorder_Zooming_factor_pane_elements_Line_2_sig*)(GetFunction(EApiId_Camcorder_Zooming_factor_pane_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Camcorder_Zooming_factor_pane_elements_Limits() const		{ return (*(TCamcorder_Zooming_factor_pane_elements_Limits_sig*)(GetFunction(EApiId_Camcorder_Zooming_factor_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements(TInt aLineIndex) const		{ return (*(TCamcorder_Zooming_factor_pane_elements_sig*)(GetFunction(EApiId_Camcorder_Zooming_factor_pane_elements)))(aLineIndex); }

	// LAF Table : Camcorder Still Image Viewfinder texts
	inline TAknTextLineLayout Camcorder_Still_Image_Viewfinder_texts_Line_1() const		{ return (*(TCamcorder_Still_Image_Viewfinder_texts_Line_1_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_texts_Line_1)))(); }

	inline TAknTextLineLayout Camcorder_Still_Image_Viewfinder_texts_Line_2() const		{ return (*(TCamcorder_Still_Image_Viewfinder_texts_Line_2_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_texts_Line_2)))(); }

	inline TAknLayoutTableLimits Camcorder_Still_Image_Viewfinder_texts_Limits() const		{ return (*(TCamcorder_Still_Image_Viewfinder_texts_Limits_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_texts_Limits)))(); }

	inline TAknTextLineLayout Camcorder_Still_Image_Viewfinder_texts(TInt aLineIndex) const		{ return (*(TCamcorder_Still_Image_Viewfinder_texts_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_texts)))(aLineIndex); }

	// LAF Table : Camcorder Video Viewfinder descendants and elements
	inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_1() const		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_1_sig*)(GetFunction(EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_1)))(); }

	inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_2() const		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_2_sig*)(GetFunction(EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_2)))(); }

	inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_3(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_3_sig*)(GetFunction(EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_3)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_4(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_4_sig*)(GetFunction(EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_4)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_5(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_5_sig*)(GetFunction(EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_5)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_6(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_6_sig*)(GetFunction(EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_6)))(aIndex_C); }

	inline TAknLayoutTableLimits Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_0_Limits() const		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_0_sig*)(GetFunction(EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_1_Limits() const		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_1(TInt aLineIndex, TInt aIndex_C) const		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_1_sig*)(GetFunction(EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_SUB_TABLE_1)))(aLineIndex, aIndex_C); }

	// LAF Table : Camcorder Video Recording descendants and elements
	inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_1() const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_1_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_1)))(); }

	inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_2() const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_2_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_2)))(); }

	inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_3(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_3_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_3)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_4(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_4_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_4)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_5(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_5_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_5)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_6(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_6_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_6)))(aIndex_C); }

	inline TAknLayoutTableLimits Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_0_Limits() const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_SUB_TABLE_0_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_1_Limits() const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_1(TInt aLineIndex, TInt aIndex_C) const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_SUB_TABLE_1_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_SUB_TABLE_1)))(aLineIndex, aIndex_C); }

	// LAF Table : Camcorder Duration texts
	inline TAknTextLineLayout Camcorder_Duration_texts_Line_1() const		{ return (*(TCamcorder_Duration_texts_Line_1_sig*)(GetFunction(EApiId_Camcorder_Duration_texts_Line_1)))(); }

	// LAF Table : Camcorder Post Recording elements
	inline TAknWindowLineLayout QVGA() const		{ return (*(TQVGA_sig*)(GetFunction(EApiId_QVGA)))(); }

	inline TAknWindowLineLayout Camcorder_Video_Post_recording_elements_Line_2() const		{ return (*(TCamcorder_Video_Post_recording_elements_Line_2_sig*)(GetFunction(EApiId_Camcorder_Video_Post_recording_elements_Line_2)))(); }

	inline TAknWindowLineLayout Camcorder_Video_Post_recording_elements_Line_3() const		{ return (*(TCamcorder_Video_Post_recording_elements_Line_3_sig*)(GetFunction(EApiId_Camcorder_Video_Post_recording_elements_Line_3)))(); }

	inline TAknLayoutTableLimits Camcorder_Video_Post_recording_elements_Limits() const		{ return (*(TCamcorder_Video_Post_recording_elements_Limits_sig*)(GetFunction(EApiId_Camcorder_Video_Post_recording_elements_Limits)))(); }

	inline TAknWindowLineLayout Camcorder_Video_Post_recording_elements(TInt aLineIndex) const		{ return (*(TCamcorder_Video_Post_recording_elements_sig*)(GetFunction(EApiId_Camcorder_Video_Post_recording_elements)))(aLineIndex); }

	// LAF Table : Graphical message selection layout elements
	inline TAknWindowLineLayout Graphical_message_selection_layout_elements_Line_1(TInt aIndex_t) const		{ return (*(TGraphical_message_selection_layout_elements_Line_1_sig*)(GetFunction(EApiId_Graphical_message_selection_layout_elements_Line_1)))(aIndex_t); }

	inline TAknWindowLineLayout Graphical_message_selection_layout_elements_Line_2(TInt aIndex_l) const		{ return (*(TGraphical_message_selection_layout_elements_Line_2_sig*)(GetFunction(EApiId_Graphical_message_selection_layout_elements_Line_2)))(aIndex_l); }

	inline TAknWindowLineLayout grid_gms_pane() const		{ return (*(Tgrid_gms_pane_sig*)(GetFunction(EApiId_grid_gms_pane)))(); }

	// LAF Table : Help texts
	inline TAknTextLineLayout Help_texts_Line_1(TInt aIndex_B) const		{ return (*(THelp_texts_Line_1_sig*)(GetFunction(EApiId_Help_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Help_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Help_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Help_texts_Line_1)))(aNumberOfLinesShown); }

	// LAF Table : Phonebook Photo view elements
	inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_1() const		{ return (*(TPhonebook_Photo_view_elements_Line_1_sig*)(GetFunction(EApiId_Phonebook_Photo_view_elements_Line_1)))(); }

	inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_2() const		{ return (*(TPhonebook_Photo_view_elements_Line_2_sig*)(GetFunction(EApiId_Phonebook_Photo_view_elements_Line_2)))(); }

	inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_3() const		{ return (*(TPhonebook_Photo_view_elements_Line_3_sig*)(GetFunction(EApiId_Phonebook_Photo_view_elements_Line_3)))(); }

	inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_4() const		{ return (*(TPhonebook_Photo_view_elements_Line_4_sig*)(GetFunction(EApiId_Phonebook_Photo_view_elements_Line_4)))(); }

	inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_5() const		{ return (*(TPhonebook_Photo_view_elements_Line_5_sig*)(GetFunction(EApiId_Phonebook_Photo_view_elements_Line_5)))(); }

	inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_6() const		{ return (*(TPhonebook_Photo_view_elements_Line_6_sig*)(GetFunction(EApiId_Phonebook_Photo_view_elements_Line_6)))(); }

	inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_7() const		{ return (*(TPhonebook_Photo_view_elements_Line_7_sig*)(GetFunction(EApiId_Phonebook_Photo_view_elements_Line_7)))(); }

	inline TAknWindowLineLayout Phonebook_Photo_view_elements_Line_8() const		{ return (*(TPhonebook_Photo_view_elements_Line_8_sig*)(GetFunction(EApiId_Phonebook_Photo_view_elements_Line_8)))(); }

	inline TAknLayoutTableLimits Phonebook_Photo_view_elements_Limits() const		{ return (*(TPhonebook_Photo_view_elements_Limits_sig*)(GetFunction(EApiId_Phonebook_Photo_view_elements_Limits)))(); }

	inline TAknWindowLineLayout Phonebook_Photo_view_elements(TInt aLineIndex) const		{ return (*(TPhonebook_Photo_view_elements_sig*)(GetFunction(EApiId_Phonebook_Photo_view_elements)))(aLineIndex); }

	// LAF Table : Presence status list components
	inline TAknWindowLineLayout Presence_status_list_components_Line_1() const		{ return (*(TPresence_status_list_components_Line_1_sig*)(GetFunction(EApiId_Presence_status_list_components_Line_1)))(); }

	inline TAknWindowLineLayout Presence_status_list_components_Line_2() const		{ return (*(TPresence_status_list_components_Line_2_sig*)(GetFunction(EApiId_Presence_status_list_components_Line_2)))(); }

	inline TAknWindowLineLayout Presence_status_list_components_Line_3() const		{ return (*(TPresence_status_list_components_Line_3_sig*)(GetFunction(EApiId_Presence_status_list_components_Line_3)))(); }

	inline TAknWindowLineLayout image_or_qgn_prop_dyc_big__ref_() const		{ return (*(Timage_or_qgn_prop_dyc_big__ref__sig*)(GetFunction(EApiId_image_or_qgn_prop_dyc_big__ref_)))(); }

	// LAF Table : Presence status list texts
	inline TAknTextLineLayout Presence_status_list_texts_Line_1(TInt aIndex_B) const		{ return (*(TPresence_status_list_texts_Line_1_sig*)(GetFunction(EApiId_Presence_status_list_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Presence_status_list_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Presence_status_list_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Presence_status_list_texts_Line_1)))(aNumberOfLinesShown); }

	// LAF Table : Pinboard elements (grid)
	inline TAknWindowLineLayout Pinboard_elements__grid__Line_1() const		{ return (*(TPinboard_elements__grid__Line_1_sig*)(GetFunction(EApiId_Pinboard_elements__grid__Line_1)))(); }

	inline TAknWindowLineLayout Pinboard_elements__grid__Line_2() const		{ return (*(TPinboard_elements__grid__Line_2_sig*)(GetFunction(EApiId_Pinboard_elements__grid__Line_2)))(); }

	inline TAknWindowLineLayout Pinboard_elements__grid__Line_3() const		{ return (*(TPinboard_elements__grid__Line_3_sig*)(GetFunction(EApiId_Pinboard_elements__grid__Line_3)))(); }

	inline TAknWindowLineLayout Pinboard_elements__grid__Line_4(TInt aCommon1) const		{ return (*(TPinboard_elements__grid__Line_4_sig*)(GetFunction(EApiId_Pinboard_elements__grid__Line_4)))(aCommon1); }

	inline TAknWindowLineLayout Pinboard_elements__grid__Line_5() const		{ return (*(TPinboard_elements__grid__Line_5_sig*)(GetFunction(EApiId_Pinboard_elements__grid__Line_5)))(); }

	inline TAknWindowLineLayout Pinboard_elements__grid__Line_6(TInt aCommon1) const		{ return (*(TPinboard_elements__grid__Line_6_sig*)(GetFunction(EApiId_Pinboard_elements__grid__Line_6)))(aCommon1); }

	inline TAknWindowLineLayout Pinboard_elements__grid__Line_7() const		{ return (*(TPinboard_elements__grid__Line_7_sig*)(GetFunction(EApiId_Pinboard_elements__grid__Line_7)))(); }

	inline TAknWindowLineLayout find_pinb_pane() const		{ return (*(Tfind_pinb_pane_sig*)(GetFunction(EApiId_find_pinb_pane)))(); }

	inline TAknLayoutTableLimits Pinboard_elements__grid__SUB_TABLE_0_Limits() const		{ return (*(TPinboard_elements__grid__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Pinboard_elements__grid__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Pinboard_elements__grid__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TPinboard_elements__grid__SUB_TABLE_0_sig*)(GetFunction(EApiId_Pinboard_elements__grid__SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Pinboard_elements__grid__SUB_TABLE_1_Limits() const		{ return (*(TPinboard_elements__grid__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Pinboard_elements__grid__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Pinboard_elements__grid__SUB_TABLE_1(TInt aLineIndex) const		{ return (*(TPinboard_elements__grid__SUB_TABLE_1_sig*)(GetFunction(EApiId_Pinboard_elements__grid__SUB_TABLE_1)))(aLineIndex); }

	// LAF Table : Find pane elements (pinb)
	inline TAknWindowLineLayout Find_pane_elements__pinb__Line_1() const		{ return (*(TFind_pane_elements__pinb__Line_1_sig*)(GetFunction(EApiId_Find_pane_elements__pinb__Line_1)))(); }

	inline TAknWindowLineLayout Find_pane_elements__pinb__Line_2() const		{ return (*(TFind_pane_elements__pinb__Line_2_sig*)(GetFunction(EApiId_Find_pane_elements__pinb__Line_2)))(); }

	inline TAknWindowLineLayout Find_pane_elements__pinb__Line_3() const		{ return (*(TFind_pane_elements__pinb__Line_3_sig*)(GetFunction(EApiId_Find_pane_elements__pinb__Line_3)))(); }

	inline TAknWindowLineLayout Find_pane_elements__pinb__Line_4() const		{ return (*(TFind_pane_elements__pinb__Line_4_sig*)(GetFunction(EApiId_Find_pane_elements__pinb__Line_4)))(); }

	inline TAknLayoutTableLimits Find_pane_elements__pinb__Limits() const		{ return (*(TFind_pane_elements__pinb__Limits_sig*)(GetFunction(EApiId_Find_pane_elements__pinb__Limits)))(); }

	inline TAknWindowLineLayout Find_pane_elements__pinb_(TInt aLineIndex) const		{ return (*(TFind_pane_elements__pinb__sig*)(GetFunction(EApiId_Find_pane_elements__pinb_)))(aLineIndex); }

	// LAF Table : Find pane texts (pinb)
	inline TAknTextLineLayout Find_pane_texts__pinb__Line_1() const		{ return (*(TFind_pane_texts__pinb__Line_1_sig*)(GetFunction(EApiId_Find_pane_texts__pinb__Line_1)))(); }

	inline TAknTextLineLayout Find_pane_texts__pinb__Line_2() const		{ return (*(TFind_pane_texts__pinb__Line_2_sig*)(GetFunction(EApiId_Find_pane_texts__pinb__Line_2)))(); }

	inline TAknLayoutTableLimits Find_pane_texts__pinb__Limits() const		{ return (*(TFind_pane_texts__pinb__Limits_sig*)(GetFunction(EApiId_Find_pane_texts__pinb__Limits)))(); }

	inline TAknTextLineLayout Find_pane_texts__pinb_(TInt aLineIndex) const		{ return (*(TFind_pane_texts__pinb__sig*)(GetFunction(EApiId_Find_pane_texts__pinb_)))(aLineIndex); }

	// LAF Table : Pinboard elements (list)
	inline TAknWindowLineLayout Pinboard_elements__list__Line_1() const		{ return (*(TPinboard_elements__list__Line_1_sig*)(GetFunction(EApiId_Pinboard_elements__list__Line_1)))(); }

	inline TAknWindowLineLayout Pinboard_elements__list__Line_2() const		{ return (*(TPinboard_elements__list__Line_2_sig*)(GetFunction(EApiId_Pinboard_elements__list__Line_2)))(); }

	inline TAknWindowLineLayout Pinboard_elements__list__Line_3() const		{ return (*(TPinboard_elements__list__Line_3_sig*)(GetFunction(EApiId_Pinboard_elements__list__Line_3)))(); }

	inline TAknWindowLineLayout Pinboard_elements__list__Line_4(TInt aCommon1) const		{ return (*(TPinboard_elements__list__Line_4_sig*)(GetFunction(EApiId_Pinboard_elements__list__Line_4)))(aCommon1); }

	inline TAknWindowLineLayout Pinboard_elements__list__Line_5() const		{ return (*(TPinboard_elements__list__Line_5_sig*)(GetFunction(EApiId_Pinboard_elements__list__Line_5)))(); }

	inline TAknWindowLineLayout Pinboard_elements__list__Line_6(TInt aCommon1) const		{ return (*(TPinboard_elements__list__Line_6_sig*)(GetFunction(EApiId_Pinboard_elements__list__Line_6)))(aCommon1); }

	inline TAknWindowLineLayout list_pinb_pane() const		{ return (*(Tlist_pinb_pane_sig*)(GetFunction(EApiId_list_pinb_pane)))(); }

	inline TAknLayoutTableLimits Pinboard_elements__list__SUB_TABLE_0_Limits() const		{ return (*(TPinboard_elements__list__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Pinboard_elements__list__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Pinboard_elements__list__SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TPinboard_elements__list__SUB_TABLE_0_sig*)(GetFunction(EApiId_Pinboard_elements__list__SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : Speed Dial descendants
	inline TAknWindowLineLayout Speed_Dial_descendants_Line_1() const		{ return (*(TSpeed_Dial_descendants_Line_1_sig*)(GetFunction(EApiId_Speed_Dial_descendants_Line_1)))(); }

	// LAF Table : Voice Recorder elements
	inline TAknWindowLineLayout grid_vorec_pane() const		{ return (*(Tgrid_vorec_pane_sig*)(GetFunction(EApiId_grid_vorec_pane)))(); }

	inline TAknWindowLineLayout Voice_Recorder_elements_Line_2() const		{ return (*(TVoice_Recorder_elements_Line_2_sig*)(GetFunction(EApiId_Voice_Recorder_elements_Line_2)))(); }

	inline TAknWindowLineLayout Voice_Recorder_elements_Line_3() const		{ return (*(TVoice_Recorder_elements_Line_3_sig*)(GetFunction(EApiId_Voice_Recorder_elements_Line_3)))(); }

	inline TAknWindowLineLayout Voice_Recorder_elements_Line_4() const		{ return (*(TVoice_Recorder_elements_Line_4_sig*)(GetFunction(EApiId_Voice_Recorder_elements_Line_4)))(); }

	inline TAknWindowLineLayout Voice_Recorder_elements_Line_5() const		{ return (*(TVoice_Recorder_elements_Line_5_sig*)(GetFunction(EApiId_Voice_Recorder_elements_Line_5)))(); }

	inline TAknLayoutTableLimits Voice_Recorder_elements_Limits() const		{ return (*(TVoice_Recorder_elements_Limits_sig*)(GetFunction(EApiId_Voice_Recorder_elements_Limits)))(); }

	inline TAknWindowLineLayout Voice_Recorder_elements(TInt aLineIndex) const		{ return (*(TVoice_Recorder_elements_sig*)(GetFunction(EApiId_Voice_Recorder_elements)))(aLineIndex); }

	// LAF Table : Voice Recorder texts
	inline TAknTextLineLayout Voice_Recorder_texts_Line_1() const		{ return (*(TVoice_Recorder_texts_Line_1_sig*)(GetFunction(EApiId_Voice_Recorder_texts_Line_1)))(); }

	inline TAknTextLineLayout Voice_Recorder_texts_Line_2() const		{ return (*(TVoice_Recorder_texts_Line_2_sig*)(GetFunction(EApiId_Voice_Recorder_texts_Line_2)))(); }

	inline TAknTextLineLayout Voice_Recorder_texts_Line_3() const		{ return (*(TVoice_Recorder_texts_Line_3_sig*)(GetFunction(EApiId_Voice_Recorder_texts_Line_3)))(); }

	inline TAknTextLineLayout Voice_Recorder_texts_Line_4() const		{ return (*(TVoice_Recorder_texts_Line_4_sig*)(GetFunction(EApiId_Voice_Recorder_texts_Line_4)))(); }

	inline TAknTextLineLayout Voice_Recorder_texts_Line_5() const		{ return (*(TVoice_Recorder_texts_Line_5_sig*)(GetFunction(EApiId_Voice_Recorder_texts_Line_5)))(); }

	inline TAknTextLineLayout Voice_Recorder_texts_Line_6() const		{ return (*(TVoice_Recorder_texts_Line_6_sig*)(GetFunction(EApiId_Voice_Recorder_texts_Line_6)))(); }

	inline TAknLayoutTableLimits Voice_Recorder_texts_Limits() const		{ return (*(TVoice_Recorder_texts_Limits_sig*)(GetFunction(EApiId_Voice_Recorder_texts_Limits)))(); }

	inline TAknTextLineLayout Voice_Recorder_texts(TInt aLineIndex) const		{ return (*(TVoice_Recorder_texts_sig*)(GetFunction(EApiId_Voice_Recorder_texts)))(aLineIndex); }

	// LAF Table : Message writing texts
	inline TAknTextLineLayout Message_writing_texts_Line_1(TInt aIndex_B) const		{ return (*(TMessage_writing_texts_Line_1_sig*)(GetFunction(EApiId_Message_writing_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Message_writing_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Message_writing_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Message_writing_texts_Line_1)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Message_writing_texts_Line_2(TInt aIndex_B) const		{ return (*(TMessage_writing_texts_Line_2_sig*)(GetFunction(EApiId_Message_writing_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Message_writing_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Message_writing_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Message_writing_texts_Line_2)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Message_writing_texts_Line_3(TInt aIndex_B) const		{ return (*(TMessage_writing_texts_Line_3_sig*)(GetFunction(EApiId_Message_writing_texts_Line_3)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Message_writing_texts_Line_3(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Message_writing_texts_Line_3_sig*)(GetFunction(EApiId_Multiline_Message_writing_texts_Line_3)))(aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Message_writing_texts_Limits() const		{ return (*(TMessage_writing_texts_Limits_sig*)(GetFunction(EApiId_Message_writing_texts_Limits)))(); }

	inline TAknTextLineLayout Message_writing_texts(TInt aLineIndex, TInt aIndex_B) const		{ return (*(TMessage_writing_texts_sig*)(GetFunction(EApiId_Message_writing_texts)))(aLineIndex, aIndex_B); }

	// LAF Table : Smart Messages
	inline TAknTextLineLayout Smart_Messages_Line_1(TInt aIndex_B) const		{ return (*(TSmart_Messages_Line_1_sig*)(GetFunction(EApiId_Smart_Messages_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Smart_Messages_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Smart_Messages_Line_1_sig*)(GetFunction(EApiId_Multiline_Smart_Messages_Line_1)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Smart_Messages_Line_2(TInt aIndex_B) const		{ return (*(TSmart_Messages_Line_2_sig*)(GetFunction(EApiId_Smart_Messages_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Smart_Messages_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Smart_Messages_Line_2_sig*)(GetFunction(EApiId_Multiline_Smart_Messages_Line_2)))(aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Smart_Messages_Limits() const		{ return (*(TSmart_Messages_Limits_sig*)(GetFunction(EApiId_Smart_Messages_Limits)))(); }

	inline TAknTextLineLayout Smart_Messages(TInt aLineIndex, TInt aIndex_B) const		{ return (*(TSmart_Messages_sig*)(GetFunction(EApiId_Smart_Messages)))(aLineIndex, aIndex_B); }

	// LAF Table : Note writing layout elements
	inline TAknWindowLineLayout Note_writing_layout_elements_Line_1() const		{ return (*(TNote_writing_layout_elements_Line_1_sig*)(GetFunction(EApiId_Note_writing_layout_elements_Line_1)))(); }

	inline TAknWindowLineLayout Note_writing_layout_elements_Line_2() const		{ return (*(TNote_writing_layout_elements_Line_2_sig*)(GetFunction(EApiId_Note_writing_layout_elements_Line_2)))(); }

	inline TAknWindowLineLayout Note_writing_layout_elements_Line_3() const		{ return (*(TNote_writing_layout_elements_Line_3_sig*)(GetFunction(EApiId_Note_writing_layout_elements_Line_3)))(); }

	inline TAknWindowLineLayout Note_writing_layout_elements_Line_4() const		{ return (*(TNote_writing_layout_elements_Line_4_sig*)(GetFunction(EApiId_Note_writing_layout_elements_Line_4)))(); }

	inline TAknWindowLineLayout Note_writing_layout_elements_Line_5(TInt aIndex_t) const		{ return (*(TNote_writing_layout_elements_Line_5_sig*)(GetFunction(EApiId_Note_writing_layout_elements_Line_5)))(aIndex_t); }

	inline TAknLayoutTableLimits Note_writing_layout_elements_SUB_TABLE_0_Limits() const		{ return (*(TNote_writing_layout_elements_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Note_writing_layout_elements_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Note_writing_layout_elements_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TNote_writing_layout_elements_SUB_TABLE_0_sig*)(GetFunction(EApiId_Note_writing_layout_elements_SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : Note writing texts
	inline TAknTextLineLayout Note_writing_texts_Line_1(TInt aIndex_B) const		{ return (*(TNote_writing_texts_Line_1_sig*)(GetFunction(EApiId_Note_writing_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Note_writing_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Note_writing_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Note_writing_texts_Line_1)))(aNumberOfLinesShown); }

	// LAF Table : IM chat view descendant panes
	inline TAknWindowLineLayout im_reading_pane(TInt aIndex_H) const		{ return (*(Tim_reading_pane_sig*)(GetFunction(EApiId_im_reading_pane)))(aIndex_H); }

	inline TAknWindowLineLayout im_writing_pane(TInt aCommon1) const		{ return (*(Tim_writing_pane_sig*)(GetFunction(EApiId_im_writing_pane)))(aCommon1); }

	// LAF Table : IM navi pane texts
	inline TAknTextLineLayout IM_navi_pane_texts_Line_1(TInt aIndex_C, TInt aIndex_W) const		{ return (*(TIM_navi_pane_texts_Line_1_sig*)(GetFunction(EApiId_IM_navi_pane_texts_Line_1)))(aIndex_C, aIndex_W); }

	// LAF Table : IM reading pane texts
	inline TAknTextLineLayout IM_reading_pane_texts_Line_1(TInt aCommon1) const		{ return (*(TIM_reading_pane_texts_Line_1_sig*)(GetFunction(EApiId_IM_reading_pane_texts_Line_1)))(aCommon1); }

	inline TAknTextLineLayout IM_reading_pane_texts_Line_2() const		{ return (*(TIM_reading_pane_texts_Line_2_sig*)(GetFunction(EApiId_IM_reading_pane_texts_Line_2)))(); }

	inline TAknWindowLineLayout im_reading_field(TInt aIndex_t) const		{ return (*(Tim_reading_field_sig*)(GetFunction(EApiId_im_reading_field)))(aIndex_t); }

	// LAF Table : IM text elements
	inline TAknWindowLineLayout IM_text_elements_Line_1() const		{ return (*(TIM_text_elements_Line_1_sig*)(GetFunction(EApiId_IM_text_elements_Line_1)))(); }

	inline TAknWindowLineLayout IM_text_elements_Line_2() const		{ return (*(TIM_text_elements_Line_2_sig*)(GetFunction(EApiId_IM_text_elements_Line_2)))(); }

	inline TAknWindowLineLayout smiley__qgn_prop_im_smileys__ref__() const		{ return (*(Tsmiley__qgn_prop_im_smileys__ref___sig*)(GetFunction(EApiId_smiley__qgn_prop_im_smileys__ref__)))(); }

	inline TAknLayoutTableLimits IM_text_elements_Limits() const		{ return (*(TIM_text_elements_Limits_sig*)(GetFunction(EApiId_IM_text_elements_Limits)))(); }

	inline TAknWindowLineLayout IM_text_elements(TInt aLineIndex) const		{ return (*(TIM_text_elements_sig*)(GetFunction(EApiId_IM_text_elements)))(aLineIndex); }

	// LAF Table : IM reading field highlight graphics
	inline TAknWindowLineLayout IM_reading_field_highlight_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TIM_reading_field_highlight_graphics_Line_1_sig*)(GetFunction(EApiId_IM_reading_field_highlight_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout IM_reading_field_highlight_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TIM_reading_field_highlight_graphics_Line_2_sig*)(GetFunction(EApiId_IM_reading_field_highlight_graphics_Line_2)))(aParentRect); }

	inline TAknLayoutTableLimits IM_reading_field_highlight_graphics_Limits() const		{ return (*(TIM_reading_field_highlight_graphics_Limits_sig*)(GetFunction(EApiId_IM_reading_field_highlight_graphics_Limits)))(); }

	inline TAknWindowLineLayout IM_reading_field_highlight_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TIM_reading_field_highlight_graphics_sig*)(GetFunction(EApiId_IM_reading_field_highlight_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : IM writing field elements
	inline TAknWindowLineLayout IM_writing_field_elements_Line_1(TInt aIndex_H) const		{ return (*(TIM_writing_field_elements_Line_1_sig*)(GetFunction(EApiId_IM_writing_field_elements_Line_1)))(aIndex_H); }

	inline TAknWindowLineLayout IM_writing_field_elements_Line_2() const		{ return (*(TIM_writing_field_elements_Line_2_sig*)(GetFunction(EApiId_IM_writing_field_elements_Line_2)))(); }

	inline TAknWindowLineLayout IM_writing_field_elements_Line_3(TInt aIndex_H) const		{ return (*(TIM_writing_field_elements_Line_3_sig*)(GetFunction(EApiId_IM_writing_field_elements_Line_3)))(aIndex_H); }

	// LAF Table : IM writing pane texts
	inline TAknTextLineLayout IM_writing_pane_texts_Line_1(TInt aIndex_B) const		{ return (*(TIM_writing_pane_texts_Line_1_sig*)(GetFunction(EApiId_IM_writing_pane_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_IM_writing_pane_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_IM_writing_pane_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_IM_writing_pane_texts_Line_1)))(aNumberOfLinesShown); }

	// LAF Table : Media Player layout descendant pane
	inline TAknWindowLineLayout mp_bg_pane() const		{ return (*(Tmp_bg_pane_sig*)(GetFunction(EApiId_mp_bg_pane)))(); }

	// LAF Table : Empty Player view elements
	inline TAknWindowLineLayout Empty_Player_view_elements_Line_1() const		{ return (*(TEmpty_Player_view_elements_Line_1_sig*)(GetFunction(EApiId_Empty_Player_view_elements_Line_1)))(); }

	// LAF Table : Media Player Playback view navi pane elements
	inline TAknWindowLineLayout Media_Player_Playback_view_navi_pane_elements_Line_1() const		{ return (*(TMedia_Player_Playback_view_navi_pane_elements_Line_1_sig*)(GetFunction(EApiId_Media_Player_Playback_view_navi_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Media_Player_Playback_view_navi_pane_elements_Line_2() const		{ return (*(TMedia_Player_Playback_view_navi_pane_elements_Line_2_sig*)(GetFunction(EApiId_Media_Player_Playback_view_navi_pane_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Media_Player_Playback_view_navi_pane_elements_Limits() const		{ return (*(TMedia_Player_Playback_view_navi_pane_elements_Limits_sig*)(GetFunction(EApiId_Media_Player_Playback_view_navi_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Media_Player_Playback_view_navi_pane_elements(TInt aLineIndex) const		{ return (*(TMedia_Player_Playback_view_navi_pane_elements_sig*)(GetFunction(EApiId_Media_Player_Playback_view_navi_pane_elements)))(aLineIndex); }

	// LAF Table : Media Player Playback view navi pane texts
	inline TAknTextLineLayout Media_Player_Playback_view_navi_pane_texts_Line_1() const		{ return (*(TMedia_Player_Playback_view_navi_pane_texts_Line_1_sig*)(GetFunction(EApiId_Media_Player_Playback_view_navi_pane_texts_Line_1)))(); }

	// LAF Table : Media Player Playlist navi pane elements
	inline TAknWindowLineLayout Media_Player_Playlist_navi_pane_elements_Line_1() const		{ return (*(TMedia_Player_Playlist_navi_pane_elements_Line_1_sig*)(GetFunction(EApiId_Media_Player_Playlist_navi_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Media_Player_Playlist_navi_pane_elements_Line_2() const		{ return (*(TMedia_Player_Playlist_navi_pane_elements_Line_2_sig*)(GetFunction(EApiId_Media_Player_Playlist_navi_pane_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Media_Player_Playlist_navi_pane_elements_Limits() const		{ return (*(TMedia_Player_Playlist_navi_pane_elements_Limits_sig*)(GetFunction(EApiId_Media_Player_Playlist_navi_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Media_Player_Playlist_navi_pane_elements(TInt aLineIndex) const		{ return (*(TMedia_Player_Playlist_navi_pane_elements_sig*)(GetFunction(EApiId_Media_Player_Playlist_navi_pane_elements)))(aLineIndex); }

	// LAF Table : Media Player Playback view  elements
	inline TAknWindowLineLayout grid_mp_pane() const		{ return (*(Tgrid_mp_pane_sig*)(GetFunction(EApiId_grid_mp_pane)))(); }

	inline TAknWindowLineLayout Media_Player_Playback_view_elements_Line_2() const		{ return (*(TMedia_Player_Playback_view_elements_Line_2_sig*)(GetFunction(EApiId_Media_Player_Playback_view_elements_Line_2)))(); }

	inline TAknWindowLineLayout Media_Player_Playback_view_elements_Line_3() const		{ return (*(TMedia_Player_Playback_view_elements_Line_3_sig*)(GetFunction(EApiId_Media_Player_Playback_view_elements_Line_3)))(); }

	inline TAknWindowLineLayout Media_Player_Playback_view_elements_Line_4() const		{ return (*(TMedia_Player_Playback_view_elements_Line_4_sig*)(GetFunction(EApiId_Media_Player_Playback_view_elements_Line_4)))(); }

	inline TAknWindowLineLayout Media_Player_Playback_view_elements_Line_5() const		{ return (*(TMedia_Player_Playback_view_elements_Line_5_sig*)(GetFunction(EApiId_Media_Player_Playback_view_elements_Line_5)))(); }

	inline TAknWindowLineLayout Media_Player_Playback_view_elements_Line_6() const		{ return (*(TMedia_Player_Playback_view_elements_Line_6_sig*)(GetFunction(EApiId_Media_Player_Playback_view_elements_Line_6)))(); }

	// LAF Table : Media Player Playback view texts
	inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_1() const		{ return (*(TMedia_Player_Playback_view_texts_Line_1_sig*)(GetFunction(EApiId_Media_Player_Playback_view_texts_Line_1)))(); }

	inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_2() const		{ return (*(TMedia_Player_Playback_view_texts_Line_2_sig*)(GetFunction(EApiId_Media_Player_Playback_view_texts_Line_2)))(); }

	inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_3() const		{ return (*(TMedia_Player_Playback_view_texts_Line_3_sig*)(GetFunction(EApiId_Media_Player_Playback_view_texts_Line_3)))(); }

	inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_4() const		{ return (*(TMedia_Player_Playback_view_texts_Line_4_sig*)(GetFunction(EApiId_Media_Player_Playback_view_texts_Line_4)))(); }

	inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_5() const		{ return (*(TMedia_Player_Playback_view_texts_Line_5_sig*)(GetFunction(EApiId_Media_Player_Playback_view_texts_Line_5)))(); }

	inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_6() const		{ return (*(TMedia_Player_Playback_view_texts_Line_6_sig*)(GetFunction(EApiId_Media_Player_Playback_view_texts_Line_6)))(); }

	inline TAknTextLineLayout Media_Player_Playback_view_texts_Line_7() const		{ return (*(TMedia_Player_Playback_view_texts_Line_7_sig*)(GetFunction(EApiId_Media_Player_Playback_view_texts_Line_7)))(); }

	inline TAknLayoutTableLimits Media_Player_Playback_view_texts_Limits() const		{ return (*(TMedia_Player_Playback_view_texts_Limits_sig*)(GetFunction(EApiId_Media_Player_Playback_view_texts_Limits)))(); }

	inline TAknTextLineLayout Media_Player_Playback_view_texts(TInt aLineIndex) const		{ return (*(TMedia_Player_Playback_view_texts_sig*)(GetFunction(EApiId_Media_Player_Playback_view_texts)))(aLineIndex); }

	// LAF Table : SMIL presentation attachment element
	inline TAknWindowLineLayout SMIL_presentation_attachment_element_Line_1() const		{ return (*(TSMIL_presentation_attachment_element_Line_1_sig*)(GetFunction(EApiId_SMIL_presentation_attachment_element_Line_1)))(); }

	// LAF Table : SMIL presentation attachment highlight
	inline TAknWindowLineLayout SMIL_presentation_attachment_highlight_Line_1() const		{ return (*(TSMIL_presentation_attachment_highlight_Line_1_sig*)(GetFunction(EApiId_SMIL_presentation_attachment_highlight_Line_1)))(); }

	inline TAknWindowLineLayout SMIL_presentation_attachment_highlight_Line_2() const		{ return (*(TSMIL_presentation_attachment_highlight_Line_2_sig*)(GetFunction(EApiId_SMIL_presentation_attachment_highlight_Line_2)))(); }

	inline TAknLayoutTableLimits SMIL_presentation_attachment_highlight_Limits() const		{ return (*(TSMIL_presentation_attachment_highlight_Limits_sig*)(GetFunction(EApiId_SMIL_presentation_attachment_highlight_Limits)))(); }

	inline TAknWindowLineLayout SMIL_presentation_attachment_highlight(TInt aLineIndex) const		{ return (*(TSMIL_presentation_attachment_highlight_sig*)(GetFunction(EApiId_SMIL_presentation_attachment_highlight)))(aLineIndex); }

	// LAF Table : SMIL presentation elements and descendant panes
	inline TAknWindowLineLayout SMIL_presentation_elements_and_descendant_panes_Line_1() const		{ return (*(TSMIL_presentation_elements_and_descendant_panes_Line_1_sig*)(GetFunction(EApiId_SMIL_presentation_elements_and_descendant_panes_Line_1)))(); }

	inline TAknWindowLineLayout smil_status_pane() const		{ return (*(Tsmil_status_pane_sig*)(GetFunction(EApiId_smil_status_pane)))(); }

	inline TAknWindowLineLayout smil_text_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tsmil_text_pane_sig*)(GetFunction(EApiId_smil_text_pane)))(aIndex_t, aIndex_H); }

	inline TAknLayoutTableLimits SMIL_presentation_elements_and_descendant_panes_SUB_TABLE_0_Limits() const		{ return (*(TSMIL_presentation_elements_and_descendant_panes_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_SMIL_presentation_elements_and_descendant_panes_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout SMIL_presentation_elements_and_descendant_panes_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TSMIL_presentation_elements_and_descendant_panes_SUB_TABLE_0_sig*)(GetFunction(EApiId_SMIL_presentation_elements_and_descendant_panes_SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : SMIL status pane elements and descendant panes
	inline TAknWindowLineLayout smil_volume_pane() const		{ return (*(Tsmil_volume_pane_sig*)(GetFunction(EApiId_smil_volume_pane)))(); }

	inline TAknWindowLineLayout SMIL_status_pane_elements_and_descendant_panes_Line_2() const		{ return (*(TSMIL_status_pane_elements_and_descendant_panes_Line_2_sig*)(GetFunction(EApiId_SMIL_status_pane_elements_and_descendant_panes_Line_2)))(); }

	inline TAknWindowLineLayout SMIL_status_pane_elements_and_descendant_panes_Line_3() const		{ return (*(TSMIL_status_pane_elements_and_descendant_panes_Line_3_sig*)(GetFunction(EApiId_SMIL_status_pane_elements_and_descendant_panes_Line_3)))(); }

	inline TAknWindowLineLayout SMIL_status_pane_elements_and_descendant_panes_Line_4() const		{ return (*(TSMIL_status_pane_elements_and_descendant_panes_Line_4_sig*)(GetFunction(EApiId_SMIL_status_pane_elements_and_descendant_panes_Line_4)))(); }

	inline TAknLayoutTableLimits SMIL_status_pane_elements_and_descendant_panes_Limits() const		{ return (*(TSMIL_status_pane_elements_and_descendant_panes_Limits_sig*)(GetFunction(EApiId_SMIL_status_pane_elements_and_descendant_panes_Limits)))(); }

	inline TAknWindowLineLayout SMIL_status_pane_elements_and_descendant_panes(TInt aLineIndex) const		{ return (*(TSMIL_status_pane_elements_and_descendant_panes_sig*)(GetFunction(EApiId_SMIL_status_pane_elements_and_descendant_panes)))(aLineIndex); }

	// LAF Table : SMIL status pane texts
	inline TAknTextLineLayout SMIL_status_pane_texts_Line_1() const		{ return (*(TSMIL_status_pane_texts_Line_1_sig*)(GetFunction(EApiId_SMIL_status_pane_texts_Line_1)))(); }

	// LAF Table : SMIL volume pane elements
	inline TAknWindowLineLayout SMIL_volume_pane_elements_Line_1() const		{ return (*(TSMIL_volume_pane_elements_Line_1_sig*)(GetFunction(EApiId_SMIL_volume_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout SMIL_volume_pane_elements_Line_2() const		{ return (*(TSMIL_volume_pane_elements_Line_2_sig*)(GetFunction(EApiId_SMIL_volume_pane_elements_Line_2)))(); }

	inline TAknLayoutTableLimits SMIL_volume_pane_elements_Limits() const		{ return (*(TSMIL_volume_pane_elements_Limits_sig*)(GetFunction(EApiId_SMIL_volume_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout SMIL_volume_pane_elements(TInt aLineIndex) const		{ return (*(TSMIL_volume_pane_elements_sig*)(GetFunction(EApiId_SMIL_volume_pane_elements)))(aLineIndex); }

	inline TAknTextLineLayout Location_request_type_texts_Line_1(TInt aIndex_B) const		{ return (*(TLocation_request_type_texts_Line_1_sig*)(GetFunction(EApiId_Location_request_type_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Location_request_type_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Location_request_type_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Location_request_type_texts_Line_1)))(aNumberOfLinesShown); }

	inline TAknWindowLineLayout Location_requestor_pane_elements_Line_1(TInt aIndex_l) const		{ return (*(TLocation_requestor_pane_elements_Line_1_sig*)(GetFunction(EApiId_Location_requestor_pane_elements_Line_1)))(aIndex_l); }

	inline TAknTextLineLayout Location_reqestor_pane_texts_Line_1(TInt aIndex_r, TInt aIndex_W) const		{ return (*(TLocation_reqestor_pane_texts_Line_1_sig*)(GetFunction(EApiId_Location_reqestor_pane_texts_Line_1)))(aIndex_r, aIndex_W); }

	inline TAknWindowLineLayout Location_request_popup_window_grapihcs_Line_1(const TRect& aParentRect) const		{ return (*(TLocation_request_popup_window_grapihcs_Line_1_sig*)(GetFunction(EApiId_Location_request_popup_window_grapihcs_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Location_request_popup_window_grapihcs_Line_2(const TRect& aParentRect) const		{ return (*(TLocation_request_popup_window_grapihcs_Line_2_sig*)(GetFunction(EApiId_Location_request_popup_window_grapihcs_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Location_request_popup_window_grapihcs_Line_3(const TRect& aParentRect) const		{ return (*(TLocation_request_popup_window_grapihcs_Line_3_sig*)(GetFunction(EApiId_Location_request_popup_window_grapihcs_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Location_request_popup_window_grapihcs_Line_4(const TRect& aParentRect) const		{ return (*(TLocation_request_popup_window_grapihcs_Line_4_sig*)(GetFunction(EApiId_Location_request_popup_window_grapihcs_Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Location_request_popup_window_grapihcs_Line_5(const TRect& aParentRect) const		{ return (*(TLocation_request_popup_window_grapihcs_Line_5_sig*)(GetFunction(EApiId_Location_request_popup_window_grapihcs_Line_5)))(aParentRect); }

	inline TAknLayoutTableLimits Location_request_popup_window_grapihcs_Limits() const		{ return (*(TLocation_request_popup_window_grapihcs_Limits_sig*)(GetFunction(EApiId_Location_request_popup_window_grapihcs_Limits)))(); }

	inline TAknWindowLineLayout Location_request_popup_window_grapihcs(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TLocation_request_popup_window_grapihcs_sig*)(GetFunction(EApiId_Location_request_popup_window_grapihcs)))(aLineIndex, aParentRect); }

	inline TAknLayoutTableLimits Volume_strength_area_values_Limits() const		{ return (*(TVolume_strength_area_values_Limits_sig*)(GetFunction(EApiId_Volume_strength_area_values_Limits)))(); }

	inline TAknWindowLineLayout Volume_strength_area_values(TInt aLineIndex) const		{ return (*(TVolume_strength_area_values_sig*)(GetFunction(EApiId_Volume_strength_area_values)))(aLineIndex); }

	// LAF Table : SMIL text pane elements
	inline TAknWindowLineLayout SMIL_text_pane_elements_Line_1(const TRect& aParentRect) const		{ return (*(TSMIL_text_pane_elements_Line_1_sig*)(GetFunction(EApiId_SMIL_text_pane_elements_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout smil_scroll_pane(const TRect& aParentRect) const		{ return (*(Tsmil_scroll_pane_sig*)(GetFunction(EApiId_smil_scroll_pane)))(aParentRect); }

	// LAF Table : SMIL text pane texts
	inline TAknTextLineLayout SMIL_text_pane_texts_Line_1(TInt aCommon1, TInt aIndex_B) const		{ return (*(TSMIL_text_pane_texts_Line_1_sig*)(GetFunction(EApiId_SMIL_text_pane_texts_Line_1)))(aCommon1, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_SMIL_text_pane_texts_Line_1(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_SMIL_text_pane_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_SMIL_text_pane_texts_Line_1)))(aCommon1, aNumberOfLinesShown); }

	// LAF Table : SMIL scroll pane elements
	inline TAknWindowLineLayout SMIL_scroll_pane_elements_Line_1(const TRect& aParentRect) const		{ return (*(TSMIL_scroll_pane_elements_Line_1_sig*)(GetFunction(EApiId_SMIL_scroll_pane_elements_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout SMIL_scroll_pane_elements_Line_2() const		{ return (*(TSMIL_scroll_pane_elements_Line_2_sig*)(GetFunction(EApiId_SMIL_scroll_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout SMIL_scroll_pane_elements_Line_3() const		{ return (*(TSMIL_scroll_pane_elements_Line_3_sig*)(GetFunction(EApiId_SMIL_scroll_pane_elements_Line_3)))(); }

	inline TAknLayoutTableLimits SMIL_scroll_pane_elements_SUB_TABLE_0_Limits() const		{ return (*(TSMIL_scroll_pane_elements_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_SMIL_scroll_pane_elements_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout SMIL_scroll_pane_elements_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TSMIL_scroll_pane_elements_SUB_TABLE_0_sig*)(GetFunction(EApiId_SMIL_scroll_pane_elements_SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : Pop-up windows (status pane as parent)
	inline TAknWindowLineLayout popup_pbook_thumbnail_window() const		{ return (*(Tpopup_pbook_thumbnail_window_sig*)(GetFunction(EApiId_popup_pbook_thumbnail_window)))(); }

	inline TAknWindowLineLayout popup_call_status_window(TInt aIndex_l) const		{ return (*(Tpopup_call_status_window_sig*)(GetFunction(EApiId_popup_call_status_window)))(aIndex_l); }

	inline TAknWindowLineLayout popup_call_video_up_window(TInt aCommon1) const		{ return (*(Tpopup_call_video_up_window_sig*)(GetFunction(EApiId_popup_call_video_up_window)))(aCommon1); }

	inline TAknWindowLineLayout popup_cale_events_window(TInt aCommon1) const		{ return (*(Tpopup_cale_events_window_sig*)(GetFunction(EApiId_popup_cale_events_window)))(aCommon1); }

	// LAF Table : Pop-up window list pane descendants(call conf)
	inline TAknWindowLineLayout list_single_graphic_popup_conf_pane(TInt aIndex_t) const		{ return (*(Tlist_single_graphic_popup_conf_pane_sig*)(GetFunction(EApiId_list_single_graphic_popup_conf_pane)))(aIndex_t); }

	// LAF Table : List pane elements (conf single graphic)
	inline TAknWindowLineLayout List_pane_elements__conf_single_graphic__Line_1() const		{ return (*(TList_pane_elements__conf_single_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__conf_single_graphic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__conf_single_graphic__Line_2() const		{ return (*(TList_pane_elements__conf_single_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__conf_single_graphic__Line_2)))(); }

	inline TAknLayoutTableLimits List_pane_elements__conf_single_graphic__Limits() const		{ return (*(TList_pane_elements__conf_single_graphic__Limits_sig*)(GetFunction(EApiId_List_pane_elements__conf_single_graphic__Limits)))(); }

	inline TAknWindowLineLayout List_pane_elements__conf_single_graphic_(TInt aLineIndex) const		{ return (*(TList_pane_elements__conf_single_graphic__sig*)(GetFunction(EApiId_List_pane_elements__conf_single_graphic_)))(aLineIndex); }

	// LAF Table : List pane texts (conf single graphic)
	inline TAknTextLineLayout List_pane_texts__conf_single_graphic__Line_1() const		{ return (*(TList_pane_texts__conf_single_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__conf_single_graphic__Line_1)))(); }

	// LAF Table : List pane elements (menu single graphic bt)
	inline TAknWindowLineLayout List_pane_elements__menu_single_graphic_bt__Line_1() const		{ return (*(TList_pane_elements__menu_single_graphic_bt__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__menu_single_graphic_bt__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_elements__menu_single_graphic_bt__Line_2(TInt aIndex_l) const		{ return (*(TList_pane_elements__menu_single_graphic_bt__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__menu_single_graphic_bt__Line_2)))(aIndex_l); }

	// LAF Table : List pane text (menu single graphic bt)
	inline TAknTextLineLayout List_pane_text__menu_single_graphic_bt__Line_1(TInt aCommon1) const		{ return (*(TList_pane_text__menu_single_graphic_bt__Line_1_sig*)(GetFunction(EApiId_List_pane_text__menu_single_graphic_bt__Line_1)))(aCommon1); }

	// LAF Table : Highlight graphics
	inline TAknWindowLineLayout Highlight_graphics_Line_1(const TRect& aParentRect) const		{ return (*(THighlight_graphics_Line_1_sig*)(GetFunction(EApiId_Highlight_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Highlight_graphics_Line_2(const TRect& aParentRect) const		{ return (*(THighlight_graphics_Line_2_sig*)(GetFunction(EApiId_Highlight_graphics_Line_2)))(aParentRect); }

	inline TAknLayoutTableLimits Highlight_graphics_Limits() const		{ return (*(THighlight_graphics_Limits_sig*)(GetFunction(EApiId_Highlight_graphics_Limits)))(); }

	inline TAknWindowLineLayout Highlight_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(THighlight_graphics_sig*)(GetFunction(EApiId_Highlight_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Pop-up window grid pane descendants (large graphic gms)
	inline TAknWindowLineLayout cell_large_graphic_popup_pane(TInt aIndex_l, TInt aIndex_t) const		{ return (*(Tcell_large_graphic_popup_pane_sig*)(GetFunction(EApiId_cell_large_graphic_popup_pane)))(aIndex_l, aIndex_t); }

	// LAF Table : Cell pane elements (popup large graphic gms)
	inline TAknWindowLineLayout Cell_pane_elements__popup_large_graphic_gms__Line_1() const		{ return (*(TCell_pane_elements__popup_large_graphic_gms__Line_1_sig*)(GetFunction(EApiId_Cell_pane_elements__popup_large_graphic_gms__Line_1)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__popup_large_graphic_gms__Line_2() const		{ return (*(TCell_pane_elements__popup_large_graphic_gms__Line_2_sig*)(GetFunction(EApiId_Cell_pane_elements__popup_large_graphic_gms__Line_2)))(); }

	inline TAknLayoutTableLimits Cell_pane_elements__popup_large_graphic_gms__Limits() const		{ return (*(TCell_pane_elements__popup_large_graphic_gms__Limits_sig*)(GetFunction(EApiId_Cell_pane_elements__popup_large_graphic_gms__Limits)))(); }

	inline TAknWindowLineLayout Cell_pane_elements__popup_large_graphic_gms_(TInt aLineIndex) const		{ return (*(TCell_pane_elements__popup_large_graphic_gms__sig*)(GetFunction(EApiId_Cell_pane_elements__popup_large_graphic_gms_)))(aLineIndex); }

	// LAF Table : Highlight elements (grid pop-up)
	inline TAknWindowLineLayout Highlight_elements__grid_pop_up__Line_1(const TRect& aParentRect) const		{ return (*(THighlight_elements__grid_pop_up__Line_1_sig*)(GetFunction(EApiId_Highlight_elements__grid_pop_up__Line_1)))(aParentRect); }

	// LAF Table : Number entry pop-up window texts
	inline TAknTextLineLayout Number_entry_pop_up_window_texts_Line_1(TInt aCommon1) const		{ return (*(TNumber_entry_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Number_entry_pop_up_window_texts_Line_1)))(aCommon1); }

	inline TAknTextLineLayout Number_entry_pop_up_window_texts_Line_2(TInt aCommon1, TInt aIndex_B) const		{ return (*(TNumber_entry_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Number_entry_pop_up_window_texts_Line_2)))(aCommon1, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Number_entry_pop_up_window_texts_Line_2(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Number_entry_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Number_entry_pop_up_window_texts_Line_2)))(aCommon1, aNumberOfLinesShown); }

	// LAF Table : Number entry pop-up window graphics
	inline TAknWindowLineLayout Number_entry_pop_up_window_graphics_Line_1(TInt aCommon1) const		{ return (*(TNumber_entry_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Number_entry_pop_up_window_graphics_Line_1)))(aCommon1); }

	inline TAknWindowLineLayout Number_entry_pop_up_window_graphics_Line_2(TInt aCommon1) const		{ return (*(TNumber_entry_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Number_entry_pop_up_window_graphics_Line_2)))(aCommon1); }

	inline TAknWindowLineLayout Number_entry_pop_up_window_graphics_Line_3(TInt aCommon1) const		{ return (*(TNumber_entry_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Number_entry_pop_up_window_graphics_Line_3)))(aCommon1); }

	inline TAknWindowLineLayout Number_entry_pop_up_window_graphics_Line_4(TInt aCommon1) const		{ return (*(TNumber_entry_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Number_entry_pop_up_window_graphics_Line_4)))(aCommon1); }

	inline TAknWindowLineLayout Number_entry_pop_up_window_graphics_Line_5(TInt aCommon1) const		{ return (*(TNumber_entry_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Number_entry_pop_up_window_graphics_Line_5)))(aCommon1); }

	inline TAknLayoutTableLimits Number_entry_pop_up_window_graphics_SUB_TABLE_0_Limits() const		{ return (*(TNumber_entry_pop_up_window_graphics_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Number_entry_pop_up_window_graphics_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Number_entry_pop_up_window_graphics_SUB_TABLE_0(TInt aLineIndex, TInt aCommon1) const		{ return (*(TNumber_entry_pop_up_window_graphics_SUB_TABLE_0_sig*)(GetFunction(EApiId_Number_entry_pop_up_window_graphics_SUB_TABLE_0)))(aLineIndex, aCommon1); }

	// LAF Table : Phonebook memory status pop-up window descendants and elements
	inline TAknWindowLineLayout popup_heading_pane() const		{ return (*(Tpopup_heading_pane_sig*)(GetFunction(EApiId_popup_heading_pane)))(); }

	inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_descendants_and_elements_Line_2() const		{ return (*(TPhonebook_memory_status_pop_up_window_descendants_and_elements_Line_2_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_descendants_and_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Phonebook_memory_status_pop_up_window_descendants_and_elements_Limits() const		{ return (*(TPhonebook_memory_status_pop_up_window_descendants_and_elements_Limits_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_descendants_and_elements_Limits)))(); }

	inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_descendants_and_elements(TInt aLineIndex) const		{ return (*(TPhonebook_memory_status_pop_up_window_descendants_and_elements_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_descendants_and_elements)))(aLineIndex); }

	// LAF Table : Phonebook memory status pop-up window texts
	inline TAknTextLineLayout Phonebook_memory_status_pop_up_window_texts_Line_1(TInt aIndex_B) const		{ return (*(TPhonebook_memory_status_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Phonebook_memory_status_pop_up_window_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Phonebook_memory_status_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Phonebook_memory_status_pop_up_window_texts_Line_1)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Phonebook_memory_status_pop_up_window_texts_Line_2(TInt aIndex_B) const		{ return (*(TPhonebook_memory_status_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Phonebook_memory_status_pop_up_window_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Phonebook_memory_status_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Phonebook_memory_status_pop_up_window_texts_Line_2)))(aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Phonebook_memory_status_pop_up_window_texts_Limits() const		{ return (*(TPhonebook_memory_status_pop_up_window_texts_Limits_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_texts_Limits)))(); }

	inline TAknTextLineLayout Phonebook_memory_status_pop_up_window_texts(TInt aLineIndex, TInt aIndex_B) const		{ return (*(TPhonebook_memory_status_pop_up_window_texts_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_texts)))(aLineIndex, aIndex_B); }

	// LAF Table : Phonebook memory status pop-up window graphics
	inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_graphics_Line_1() const		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_graphics_Line_1)))(); }

	inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_graphics_Line_2() const		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_graphics_Line_2)))(); }

	inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_graphics_Line_3() const		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_graphics_Line_3)))(); }

	inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_graphics_Line_4() const		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_graphics_Line_4)))(); }

	inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_graphics_Line_5() const		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_graphics_Line_5)))(); }

	inline TAknLayoutTableLimits Phonebook_memory_status_pop_up_window_graphics_Limits() const		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Phonebook_memory_status_pop_up_window_graphics(TInt aLineIndex) const		{ return (*(TPhonebook_memory_status_pop_up_window_graphics_sig*)(GetFunction(EApiId_Phonebook_memory_status_pop_up_window_graphics)))(aLineIndex); }

	// LAF Table : Graphical message image selection pop-up window descendants
	inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_descendants_Line_1() const		{ return (*(TGraphical_message_image_selection_pop_up_window_descendants_Line_1_sig*)(GetFunction(EApiId_Graphical_message_image_selection_pop_up_window_descendants_Line_1)))(); }

	inline TAknWindowLineLayout grid_large_graphic_popup_pane(TInt aIndex_H) const		{ return (*(Tgrid_large_graphic_popup_pane_sig*)(GetFunction(EApiId_grid_large_graphic_popup_pane)))(aIndex_H); }

	// LAF Table : Graphical message image selection pop-up window elements
	inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_elements_Line_1(TInt aIndex_t) const		{ return (*(TGraphical_message_image_selection_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Graphical_message_image_selection_pop_up_window_elements_Line_1)))(aIndex_t); }

	inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_elements_Line_2(TInt aIndex_l, TInt aIndex_H) const		{ return (*(TGraphical_message_image_selection_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Graphical_message_image_selection_pop_up_window_elements_Line_2)))(aIndex_l, aIndex_H); }

	// LAF Table : Graphical message image selection pop-up window graphics
	inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Graphical_message_image_selection_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Graphical_message_image_selection_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Graphical_message_image_selection_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Graphical_message_image_selection_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_graphics_Line_5(const TRect& aParentRect) const		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Graphical_message_image_selection_pop_up_window_graphics_Line_5)))(aParentRect); }

	inline TAknLayoutTableLimits Graphical_message_image_selection_pop_up_window_graphics_Limits() const		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Graphical_message_image_selection_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Graphical_message_image_selection_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TGraphical_message_image_selection_pop_up_window_graphics_sig*)(GetFunction(EApiId_Graphical_message_image_selection_pop_up_window_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Browser WIM PIN Code query pop-up window elements
	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_1() const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_2(TInt aIndex_t) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_2)))(aIndex_t); }

	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_3(TInt aIndex_t) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_3)))(aIndex_t); }

	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_4(TInt aIndex_t) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_Line_4_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_4)))(aIndex_t); }

	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_5() const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_Line_5_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_5)))(); }

	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_6(TInt aIndex_t) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_Line_6_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_Line_6)))(aIndex_t); }

	inline TAknLayoutTableLimits Browser_WIM_PIN_Code_query_pop_up_window_elements_SUB_TABLE_0_Limits() const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_elements_SUB_TABLE_0(TInt aLineIndex, TInt aIndex_t) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_elements_SUB_TABLE_0_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_elements_SUB_TABLE_0)))(aLineIndex, aIndex_t); }

	// LAF Table : Browser WIM PIN Code query pop-up window texts
	inline TAknTextLineLayout Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_1() const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_1)))(); }

	inline TAknTextLineLayout Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_2(TInt aIndex_B) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_2)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_3(TInt aIndex_B) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_texts_Line_3_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_3)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_3(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_3_sig*)(GetFunction(EApiId_Multiline_Browser_WIM_PIN_Code_query_pop_up_window_texts_Line_3)))(aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Browser_WIM_PIN_Code_query_pop_up_window_texts_SUB_TABLE_0_Limits() const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_texts_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_texts_SUB_TABLE_0_Limits)))(); }

	inline TAknTextLineLayout Browser_WIM_PIN_Code_query_pop_up_window_texts_SUB_TABLE_0(TInt aLineIndex, TInt aIndex_B) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_texts_SUB_TABLE_0_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_texts_SUB_TABLE_0)))(aLineIndex, aIndex_B); }

	// LAF Table : Browser WIM PIN Code query pop-up window graphics
	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_5(const TRect& aParentRect) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics_Line_5)))(aParentRect); }

	inline TAknLayoutTableLimits Browser_WIM_PIN_Code_query_pop_up_window_graphics_Limits() const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Browser_WIM_PIN_Code_query_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TBrowser_WIM_PIN_Code_query_pop_up_window_graphics_sig*)(GetFunction(EApiId_Browser_WIM_PIN_Code_query_pop_up_window_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Browser Digital Signing query pop-up window elements
	inline TAknWindowLineLayout Browser_Digital_Signing_query_pop_up_window_elements_Line_1() const		{ return (*(TBrowser_Digital_Signing_query_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Browser_Digital_Signing_query_pop_up_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout Browser_Digital_Signing_query_pop_up_window_elements_Line_2() const		{ return (*(TBrowser_Digital_Signing_query_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Browser_Digital_Signing_query_pop_up_window_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Browser_Digital_Signing_query_pop_up_window_elements_Limits() const		{ return (*(TBrowser_Digital_Signing_query_pop_up_window_elements_Limits_sig*)(GetFunction(EApiId_Browser_Digital_Signing_query_pop_up_window_elements_Limits)))(); }

	inline TAknWindowLineLayout Browser_Digital_Signing_query_pop_up_window_elements(TInt aLineIndex) const		{ return (*(TBrowser_Digital_Signing_query_pop_up_window_elements_sig*)(GetFunction(EApiId_Browser_Digital_Signing_query_pop_up_window_elements)))(aLineIndex); }

	// LAF Table : Browser Digital Signing query pop-up window texts
	inline TAknTextLineLayout Browser_Digital_Signing_query_pop_up_window_texts_Line_1() const		{ return (*(TBrowser_Digital_Signing_query_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Browser_Digital_Signing_query_pop_up_window_texts_Line_1)))(); }

	inline TAknTextLineLayout Browser_Digital_Signing_query_pop_up_window_texts_Line_2(TInt aCommon1, TInt aIndex_B) const		{ return (*(TBrowser_Digital_Signing_query_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Browser_Digital_Signing_query_pop_up_window_texts_Line_2)))(aCommon1, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Browser_Digital_Signing_query_pop_up_window_texts_Line_2(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Browser_Digital_Signing_query_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Browser_Digital_Signing_query_pop_up_window_texts_Line_2)))(aCommon1, aNumberOfLinesShown); }

	// LAF Table : SAT Information query pop-up window elements
	inline TAknWindowLineLayout SAT_Information_query_pop_up_window_elements_Line_1() const		{ return (*(TSAT_Information_query_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_SAT_Information_query_pop_up_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout SAT_Information_query_pop_up_window_elements_Line_2() const		{ return (*(TSAT_Information_query_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_SAT_Information_query_pop_up_window_elements_Line_2)))(); }

	inline TAknLayoutTableLimits SAT_Information_query_pop_up_window_elements_Limits() const		{ return (*(TSAT_Information_query_pop_up_window_elements_Limits_sig*)(GetFunction(EApiId_SAT_Information_query_pop_up_window_elements_Limits)))(); }

	inline TAknWindowLineLayout SAT_Information_query_pop_up_window_elements(TInt aLineIndex) const		{ return (*(TSAT_Information_query_pop_up_window_elements_sig*)(GetFunction(EApiId_SAT_Information_query_pop_up_window_elements)))(aLineIndex); }

	// LAF Table : SAT Information query pop-up window texts
	inline TAknTextLineLayout SAT_Information_query_pop_up_window_texts_Line_1(TInt aCommon1, TInt aIndex_B) const		{ return (*(TSAT_Information_query_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_SAT_Information_query_pop_up_window_texts_Line_1)))(aCommon1, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_SAT_Information_query_pop_up_window_texts_Line_1(TInt aCommon1, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_SAT_Information_query_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_SAT_Information_query_pop_up_window_texts_Line_1)))(aCommon1, aNumberOfLinesShown); }

	// LAF Table : Analogue clock pop-up window elements
	inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_Line_1(const TRect& aParentRect) const		{ return (*(TAnalogue_clock_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Analogue_clock_pop_up_window_elements_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_Line_2(const TRect& aParentRect) const		{ return (*(TAnalogue_clock_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Analogue_clock_pop_up_window_elements_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_Line_3() const		{ return (*(TAnalogue_clock_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_Analogue_clock_pop_up_window_elements_Line_3)))(); }

	inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_Line_4() const		{ return (*(TAnalogue_clock_pop_up_window_elements_Line_4_sig*)(GetFunction(EApiId_Analogue_clock_pop_up_window_elements_Line_4)))(); }

	inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_Line_5() const		{ return (*(TAnalogue_clock_pop_up_window_elements_Line_5_sig*)(GetFunction(EApiId_Analogue_clock_pop_up_window_elements_Line_5)))(); }

	inline TAknLayoutTableLimits Analogue_clock_pop_up_window_elements_SUB_TABLE_0_Limits() const		{ return (*(TAnalogue_clock_pop_up_window_elements_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Analogue_clock_pop_up_window_elements_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TAnalogue_clock_pop_up_window_elements_SUB_TABLE_0_sig*)(GetFunction(EApiId_Analogue_clock_pop_up_window_elements_SUB_TABLE_0)))(aLineIndex, aParentRect); }

	inline TAknLayoutTableLimits Analogue_clock_pop_up_window_elements_SUB_TABLE_1_Limits() const		{ return (*(TAnalogue_clock_pop_up_window_elements_SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Analogue_clock_pop_up_window_elements_SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Analogue_clock_pop_up_window_elements_SUB_TABLE_1(TInt aLineIndex) const		{ return (*(TAnalogue_clock_pop_up_window_elements_SUB_TABLE_1_sig*)(GetFunction(EApiId_Analogue_clock_pop_up_window_elements_SUB_TABLE_1)))(aLineIndex); }

	// LAF Table : Analogue clock pop-up window texts
	inline TAknTextLineLayout Analogue_clock_pop_up_window_texts_Line_1() const		{ return (*(TAnalogue_clock_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Analogue_clock_pop_up_window_texts_Line_1)))(); }

	// LAF Table : Digital clock pop-up window elements
	inline TAknWindowLineLayout Digital_clock_pop_up_window_elements_Line_1() const		{ return (*(TDigital_clock_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Digital_clock_pop_up_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout Digital_clock_pop_up_window_elements_Line_2() const		{ return (*(TDigital_clock_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Digital_clock_pop_up_window_elements_Line_2)))(); }

	inline TAknWindowLineLayout Digital_clock_pop_up_window_elements_Line_3() const		{ return (*(TDigital_clock_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_Digital_clock_pop_up_window_elements_Line_3)))(); }

	inline TAknLayoutTableLimits Digital_clock_pop_up_window_elements_Limits() const		{ return (*(TDigital_clock_pop_up_window_elements_Limits_sig*)(GetFunction(EApiId_Digital_clock_pop_up_window_elements_Limits)))(); }

	inline TAknWindowLineLayout Digital_clock_pop_up_window_elements(TInt aLineIndex) const		{ return (*(TDigital_clock_pop_up_window_elements_sig*)(GetFunction(EApiId_Digital_clock_pop_up_window_elements)))(aLineIndex); }

	// LAF Table : Digital clock pop-up window texts
	inline TAknTextLineLayout Digital_clock_pop_up_window_texts_Line_1() const		{ return (*(TDigital_clock_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Digital_clock_pop_up_window_texts_Line_1)))(); }

	inline TAknTextLineLayout Digital_clock_pop_up_window_texts_Line_2() const		{ return (*(TDigital_clock_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Digital_clock_pop_up_window_texts_Line_2)))(); }

	inline TAknLayoutTableLimits Digital_clock_pop_up_window_texts_Limits() const		{ return (*(TDigital_clock_pop_up_window_texts_Limits_sig*)(GetFunction(EApiId_Digital_clock_pop_up_window_texts_Limits)))(); }

	inline TAknTextLineLayout Digital_clock_pop_up_window_texts(TInt aLineIndex) const		{ return (*(TDigital_clock_pop_up_window_texts_sig*)(GetFunction(EApiId_Digital_clock_pop_up_window_texts)))(aLineIndex); }

	// LAF Table : Thumbnail pop-up window elements
	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_1() const		{ return (*(TThumbnail_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_2() const		{ return (*(TThumbnail_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_2)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_3() const		{ return (*(TThumbnail_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_3)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_4() const		{ return (*(TThumbnail_pop_up_window_elements_Line_4_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_4)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_5() const		{ return (*(TThumbnail_pop_up_window_elements_Line_5_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_5)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_6() const		{ return (*(TThumbnail_pop_up_window_elements_Line_6_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_6)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_7() const		{ return (*(TThumbnail_pop_up_window_elements_Line_7_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_7)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_8() const		{ return (*(TThumbnail_pop_up_window_elements_Line_8_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_8)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_9() const		{ return (*(TThumbnail_pop_up_window_elements_Line_9_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_9)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_10() const		{ return (*(TThumbnail_pop_up_window_elements_Line_10_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_10)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_11() const		{ return (*(TThumbnail_pop_up_window_elements_Line_11_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_11)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_12() const		{ return (*(TThumbnail_pop_up_window_elements_Line_12_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_12)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_13() const		{ return (*(TThumbnail_pop_up_window_elements_Line_13_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_13)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_14() const		{ return (*(TThumbnail_pop_up_window_elements_Line_14_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_14)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_15() const		{ return (*(TThumbnail_pop_up_window_elements_Line_15_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_15)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_16() const		{ return (*(TThumbnail_pop_up_window_elements_Line_16_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_16)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_17() const		{ return (*(TThumbnail_pop_up_window_elements_Line_17_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_17)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements_Line_18() const		{ return (*(TThumbnail_pop_up_window_elements_Line_18_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Line_18)))(); }

	inline TAknLayoutTableLimits Thumbnail_pop_up_window_elements_Limits() const		{ return (*(TThumbnail_pop_up_window_elements_Limits_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements_Limits)))(); }

	inline TAknWindowLineLayout Thumbnail_pop_up_window_elements(TInt aLineIndex) const		{ return (*(TThumbnail_pop_up_window_elements_sig*)(GetFunction(EApiId_Thumbnail_pop_up_window_elements)))(aLineIndex); }

	// LAF Table : Call status pop-up window elements
	inline TAknWindowLineLayout Call_status_pop_up_window_elements_Line_1() const		{ return (*(TCall_status_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Call_status_pop_up_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout Call_status_pop_up_window_elements_Line_2() const		{ return (*(TCall_status_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Call_status_pop_up_window_elements_Line_2)))(); }

	inline TAknWindowLineLayout Call_status_pop_up_window_elements_Line_3() const		{ return (*(TCall_status_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_Call_status_pop_up_window_elements_Line_3)))(); }

	inline TAknWindowLineLayout Call_status_pop_up_window_elements_Line_4() const		{ return (*(TCall_status_pop_up_window_elements_Line_4_sig*)(GetFunction(EApiId_Call_status_pop_up_window_elements_Line_4)))(); }

	inline TAknLayoutTableLimits Call_status_pop_up_window_elements_Limits() const		{ return (*(TCall_status_pop_up_window_elements_Limits_sig*)(GetFunction(EApiId_Call_status_pop_up_window_elements_Limits)))(); }

	inline TAknWindowLineLayout Call_status_pop_up_window_elements(TInt aLineIndex) const		{ return (*(TCall_status_pop_up_window_elements_sig*)(GetFunction(EApiId_Call_status_pop_up_window_elements)))(aLineIndex); }

	// LAF Table : Incoming call pop-up window elements
	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_1() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_2() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_2)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_3() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_3_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_3)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_4() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_4_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_4)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_5() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_5_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_5)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_6() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_6_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_6)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_7() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_7_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_7)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_8() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_8_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_8)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_9() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_9_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_9)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_10() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_10_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_10)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_11() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_11_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_11)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_12() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_12_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_12)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_13() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_13_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_13)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_14(TInt aIndex_r) const		{ return (*(TIncoming_call_pop_up_window_elements_Line_14_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_14)))(aIndex_r); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_Line_15() const		{ return (*(TIncoming_call_pop_up_window_elements_Line_15_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_Line_15)))(); }

	inline TAknLayoutTableLimits Incoming_call_pop_up_window_elements_SUB_TABLE_0_Limits() const		{ return (*(TIncoming_call_pop_up_window_elements_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TIncoming_call_pop_up_window_elements_SUB_TABLE_0_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements_SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : Incoming call pop-up window texts
	inline TAknTextLineLayout Incoming_call_pop_up_window_texts_Line_1(TInt aCommon1, TInt aCommon2) const		{ return (*(TIncoming_call_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_texts_Line_1)))(aCommon1, aCommon2); }

	inline TAknMultiLineTextLayout Multiline_Incoming_call_pop_up_window_texts_Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Incoming_call_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Incoming_call_pop_up_window_texts_Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

	inline TAknTextLineLayout Incoming_call_pop_up_window_texts_Line_2(TInt aCommon1, TInt aCommon2) const		{ return (*(TIncoming_call_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_texts_Line_2)))(aCommon1, aCommon2); }

	inline TAknMultiLineTextLayout Multiline_Incoming_call_pop_up_window_texts_Line_2(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Incoming_call_pop_up_window_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Incoming_call_pop_up_window_texts_Line_2)))(aCommon1, aCommon2, aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Incoming_call_pop_up_window_texts_Limits() const		{ return (*(TIncoming_call_pop_up_window_texts_Limits_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_texts_Limits)))(); }

	inline TAknTextLineLayout Incoming_call_pop_up_window_texts(TInt aLineIndex, TInt aCommon1, TInt aCommon2) const		{ return (*(TIncoming_call_pop_up_window_texts_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_texts)))(aLineIndex, aCommon1, aCommon2); }

	// LAF Table : Incoming call pop-up window graphics
	inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics_Line_1(TInt aIndex_H) const		{ return (*(TIncoming_call_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics_Line_1)))(aIndex_H); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics_Line_2(TInt aIndex_H) const		{ return (*(TIncoming_call_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics_Line_2)))(aIndex_H); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics_Line_3(TInt aIndex_H) const		{ return (*(TIncoming_call_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics_Line_3)))(aIndex_H); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics_Line_4(TInt aIndex_H) const		{ return (*(TIncoming_call_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics_Line_4)))(aIndex_H); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics_Line_5(TInt aIndex_H) const		{ return (*(TIncoming_call_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics_Line_5)))(aIndex_H); }

	inline TAknLayoutTableLimits Incoming_call_pop_up_window_graphics_Limits() const		{ return (*(TIncoming_call_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics(TInt aLineIndex, TInt aIndex_H) const		{ return (*(TIncoming_call_pop_up_window_graphics_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics)))(aLineIndex, aIndex_H); }

	// LAF Table : Incoming call pop-up window elements (NE)
	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_1() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_1_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_1)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_2() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_2_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_2)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_3() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_3_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_3)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_4() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_4_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_4)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_5() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_5_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_5)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_6() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_6_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_6)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_7() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_7_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_7)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_8() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_8_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_8)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_9() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_9_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_9)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_10() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_10_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_10)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_11() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_11_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_11)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_12() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_12_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_12)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_13() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_13_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_13)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_14() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_14_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_14)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE__Line_15() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Line_15_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Line_15)))(); }

	inline TAknLayoutTableLimits Incoming_call_pop_up_window_elements__NE__Limits() const		{ return (*(TIncoming_call_pop_up_window_elements__NE__Limits_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE__Limits)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_elements__NE_(TInt aLineIndex) const		{ return (*(TIncoming_call_pop_up_window_elements__NE__sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_elements__NE_)))(aLineIndex); }

	// LAF Table : Incoming call pop-up window texts (NE)
	inline TAknTextLineLayout Incoming_call_pop_up_window_texts__NE__Line_1(TInt aCommon1, TInt aCommon2) const		{ return (*(TIncoming_call_pop_up_window_texts__NE__Line_1_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_texts__NE__Line_1)))(aCommon1, aCommon2); }

	inline TAknMultiLineTextLayout Multiline_Incoming_call_pop_up_window_texts__NE__Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Incoming_call_pop_up_window_texts__NE__Line_1_sig*)(GetFunction(EApiId_Multiline_Incoming_call_pop_up_window_texts__NE__Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

	inline TAknTextLineLayout Incoming_call_pop_up_window_texts__NE__Line_2(TInt aCommon1, TInt aCommon2) const		{ return (*(TIncoming_call_pop_up_window_texts__NE__Line_2_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_texts__NE__Line_2)))(aCommon1, aCommon2); }

	inline TAknMultiLineTextLayout Multiline_Incoming_call_pop_up_window_texts__NE__Line_2(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Incoming_call_pop_up_window_texts__NE__Line_2_sig*)(GetFunction(EApiId_Multiline_Incoming_call_pop_up_window_texts__NE__Line_2)))(aCommon1, aCommon2, aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Incoming_call_pop_up_window_texts__NE__Limits() const		{ return (*(TIncoming_call_pop_up_window_texts__NE__Limits_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_texts__NE__Limits)))(); }

	inline TAknTextLineLayout Incoming_call_pop_up_window_texts__NE_(TInt aLineIndex, TInt aCommon1, TInt aCommon2) const		{ return (*(TIncoming_call_pop_up_window_texts__NE__sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_texts__NE_)))(aLineIndex, aCommon1, aCommon2); }

	// LAF Table : Incoming call pop-up window graphics (NE)
	inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics__NE__Line_1() const		{ return (*(TIncoming_call_pop_up_window_graphics__NE__Line_1_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics__NE__Line_1)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics__NE__Line_2() const		{ return (*(TIncoming_call_pop_up_window_graphics__NE__Line_2_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics__NE__Line_2)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics__NE__Line_3() const		{ return (*(TIncoming_call_pop_up_window_graphics__NE__Line_3_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics__NE__Line_3)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics__NE__Line_4() const		{ return (*(TIncoming_call_pop_up_window_graphics__NE__Line_4_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics__NE__Line_4)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics__NE__Line_5() const		{ return (*(TIncoming_call_pop_up_window_graphics__NE__Line_5_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics__NE__Line_5)))(); }

	inline TAknLayoutTableLimits Incoming_call_pop_up_window_graphics__NE__Limits() const		{ return (*(TIncoming_call_pop_up_window_graphics__NE__Limits_sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics__NE__Limits)))(); }

	inline TAknWindowLineLayout Incoming_call_pop_up_window_graphics__NE_(TInt aLineIndex) const		{ return (*(TIncoming_call_pop_up_window_graphics__NE__sig*)(GetFunction(EApiId_Incoming_call_pop_up_window_graphics__NE_)))(aLineIndex); }

	// LAF Table : Outgoing call pop-up window elements (held)
	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_1() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_1_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_1)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_2() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_2_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_2)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_3() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_3_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_3)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_4() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_4_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_4)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_5() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_5_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_5)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_6() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_6_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_6)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_7() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_7_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_7)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_8() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_8_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_8)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_9() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_9_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_9)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_10() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_10_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_10)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_11() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_11_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_11)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_12() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_12_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_12)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_13() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_13_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_13)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_14() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_14_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_14)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held__Line_15() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Line_15_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Line_15)))(); }

	inline TAknLayoutTableLimits Outgoing_call_pop_up_window_elements__held__Limits() const		{ return (*(TOutgoing_call_pop_up_window_elements__held__Limits_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held__Limits)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held_(TInt aLineIndex) const		{ return (*(TOutgoing_call_pop_up_window_elements__held__sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held_)))(aLineIndex); }

	// LAF Table : Outgoing call pop-up window texts (held)
	inline TAknTextLineLayout Outgoing_call_pop_up_window_texts__held__Line_1(TInt aCommon1, TInt aCommon2) const		{ return (*(TOutgoing_call_pop_up_window_texts__held__Line_1_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_texts__held__Line_1)))(aCommon1, aCommon2); }

	inline TAknMultiLineTextLayout Multiline_Outgoing_call_pop_up_window_texts__held__Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Outgoing_call_pop_up_window_texts__held__Line_1_sig*)(GetFunction(EApiId_Multiline_Outgoing_call_pop_up_window_texts__held__Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

	// LAF Table : Outgoing call pop-up window graphics (held)
	inline TAknWindowLineLayout Outgoing_call_pop_up_window_graphics__held__Line_1() const		{ return (*(TOutgoing_call_pop_up_window_graphics__held__Line_1_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_graphics__held__Line_1)))(); }

	// LAF Table : Outgoing call pop-up window elements (held NE)
	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held_NE__Line_1() const		{ return (*(TOutgoing_call_pop_up_window_elements__held_NE__Line_1_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held_NE__Line_1)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held_NE__Line_2() const		{ return (*(TOutgoing_call_pop_up_window_elements__held_NE__Line_2_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held_NE__Line_2)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held_NE__Line_3() const		{ return (*(TOutgoing_call_pop_up_window_elements__held_NE__Line_3_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held_NE__Line_3)))(); }

	inline TAknLayoutTableLimits Outgoing_call_pop_up_window_elements__held_NE__Limits() const		{ return (*(TOutgoing_call_pop_up_window_elements__held_NE__Limits_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held_NE__Limits)))(); }

	inline TAknWindowLineLayout Outgoing_call_pop_up_window_elements__held_NE_(TInt aLineIndex) const		{ return (*(TOutgoing_call_pop_up_window_elements__held_NE__sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_elements__held_NE_)))(aLineIndex); }

	// LAF Table : Outgoing call pop-up window texts (held NE)
	inline TAknTextLineLayout Outgoing_call_pop_up_window_texts__held_NE__Line_1() const		{ return (*(TOutgoing_call_pop_up_window_texts__held_NE__Line_1_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_texts__held_NE__Line_1)))(); }

	// LAF Table : Outgoing call pop-up window graphics (held NE)
	inline TAknWindowLineLayout Outgoing_call_pop_up_window_graphics__held_NE__Line_1() const		{ return (*(TOutgoing_call_pop_up_window_graphics__held_NE__Line_1_sig*)(GetFunction(EApiId_Outgoing_call_pop_up_window_graphics__held_NE__Line_1)))(); }

	// LAF Table : First call pop-up window elements (one call)
	inline TAknWindowLineLayout First_call_pop_up_window_elements__one_call__Line_1() const		{ return (*(TFirst_call_pop_up_window_elements__one_call__Line_1_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__one_call__Line_1)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__one_call__Line_2() const		{ return (*(TFirst_call_pop_up_window_elements__one_call__Line_2_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__one_call__Line_2)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__one_call__Line_3() const		{ return (*(TFirst_call_pop_up_window_elements__one_call__Line_3_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__one_call__Line_3)))(); }

	inline TAknLayoutTableLimits First_call_pop_up_window_elements__one_call__Limits() const		{ return (*(TFirst_call_pop_up_window_elements__one_call__Limits_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__one_call__Limits)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__one_call_(TInt aLineIndex) const		{ return (*(TFirst_call_pop_up_window_elements__one_call__sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__one_call_)))(aLineIndex); }

	// LAF Table : First call pop-up window texts (one call)
	inline TAknTextLineLayout First_call_pop_up_window_texts__one_call__Line_1(TInt aCommon1, TInt aCommon2) const		{ return (*(TFirst_call_pop_up_window_texts__one_call__Line_1_sig*)(GetFunction(EApiId_First_call_pop_up_window_texts__one_call__Line_1)))(aCommon1, aCommon2); }

	inline TAknMultiLineTextLayout Multiline_First_call_pop_up_window_texts__one_call__Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_First_call_pop_up_window_texts__one_call__Line_1_sig*)(GetFunction(EApiId_Multiline_First_call_pop_up_window_texts__one_call__Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

	inline TAknTextLineLayout First_call_pop_up_window_texts__one_call__Line_2(TInt aCommon1) const		{ return (*(TFirst_call_pop_up_window_texts__one_call__Line_2_sig*)(GetFunction(EApiId_First_call_pop_up_window_texts__one_call__Line_2)))(aCommon1); }

	// LAF Table : First call pop-up window graphics (one call)
	inline TAknWindowLineLayout First_call_pop_up_window_graphics__one_call__Line_1() const		{ return (*(TFirst_call_pop_up_window_graphics__one_call__Line_1_sig*)(GetFunction(EApiId_First_call_pop_up_window_graphics__one_call__Line_1)))(); }

	// LAF Table : First call pop-up window elements (two calls)
	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_1() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_1_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_1)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_2() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_2_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_2)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_3() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_3_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_3)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_4() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_4_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_4)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_5() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_5_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_5)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_6() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_6_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_6)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_7() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_7_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_7)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_8() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_8_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_8)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_9() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_9_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_9)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_10() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_10_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_10)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_11() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_11_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_11)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_12() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_12_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_12)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_13() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_13_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_13)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_14() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_14_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_14)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls__Line_15() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Line_15_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Line_15)))(); }

	inline TAknLayoutTableLimits First_call_pop_up_window_elements__two_calls__Limits() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__Limits_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls__Limits)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls_(TInt aLineIndex) const		{ return (*(TFirst_call_pop_up_window_elements__two_calls__sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls_)))(aLineIndex); }

	// LAF Table : First call pop-up window texts (two calls)
	inline TAknTextLineLayout First_call_pop_up_window_texts__two_calls__Line_1(TInt aCommon1, TInt aCommon2) const		{ return (*(TFirst_call_pop_up_window_texts__two_calls__Line_1_sig*)(GetFunction(EApiId_First_call_pop_up_window_texts__two_calls__Line_1)))(aCommon1, aCommon2); }

	inline TAknMultiLineTextLayout Multiline_First_call_pop_up_window_texts__two_calls__Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_First_call_pop_up_window_texts__two_calls__Line_1_sig*)(GetFunction(EApiId_Multiline_First_call_pop_up_window_texts__two_calls__Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

	inline TAknTextLineLayout First_call_pop_up_window_texts__two_calls__Line_2(TInt aCommon1) const		{ return (*(TFirst_call_pop_up_window_texts__two_calls__Line_2_sig*)(GetFunction(EApiId_First_call_pop_up_window_texts__two_calls__Line_2)))(aCommon1); }

	// LAF Table : First call pop-up window graphics (two calls)
	inline TAknWindowLineLayout First_call_pop_up_window_graphics__two_calls__Line_1() const		{ return (*(TFirst_call_pop_up_window_graphics__two_calls__Line_1_sig*)(GetFunction(EApiId_First_call_pop_up_window_graphics__two_calls__Line_1)))(); }

	// LAF Table : First call pop-up window elements (two calls a waiting call)
	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls_a_waiting_call__Line_1() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls_a_waiting_call__Line_1_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls_a_waiting_call__Line_1)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls_a_waiting_call__Line_2() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls_a_waiting_call__Line_2_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls_a_waiting_call__Line_2)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls_a_waiting_call__Line_3() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls_a_waiting_call__Line_3_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls_a_waiting_call__Line_3)))(); }

	inline TAknLayoutTableLimits First_call_pop_up_window_elements__two_calls_a_waiting_call__Limits() const		{ return (*(TFirst_call_pop_up_window_elements__two_calls_a_waiting_call__Limits_sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls_a_waiting_call__Limits)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_elements__two_calls_a_waiting_call_(TInt aLineIndex) const		{ return (*(TFirst_call_pop_up_window_elements__two_calls_a_waiting_call__sig*)(GetFunction(EApiId_First_call_pop_up_window_elements__two_calls_a_waiting_call_)))(aLineIndex); }

	// LAF Table : First call pop-up window texts (two calls a waiting call)
	inline TAknTextLineLayout First_call_pop_up_window_texts__two_calls_a_waiting_call__Line_1() const		{ return (*(TFirst_call_pop_up_window_texts__two_calls_a_waiting_call__Line_1_sig*)(GetFunction(EApiId_First_call_pop_up_window_texts__two_calls_a_waiting_call__Line_1)))(); }

	// LAF Table : First call pop-up window graphics (two calls a waiting call)
	inline TAknWindowLineLayout First_call_pop_up_window_graphics__two_calls_a_waiting_call__Line_1() const		{ return (*(TFirst_call_pop_up_window_graphics__two_calls_a_waiting_call__Line_1_sig*)(GetFunction(EApiId_First_call_pop_up_window_graphics__two_calls_a_waiting_call__Line_1)))(); }

	// LAF Table : First call pop-up window graphics (two wait NE)
	inline TAknWindowLineLayout First_call_pop_up_window_graphics__two_wait_NE__Line_1() const		{ return (*(TFirst_call_pop_up_window_graphics__two_wait_NE__Line_1_sig*)(GetFunction(EApiId_First_call_pop_up_window_graphics__two_wait_NE__Line_1)))(); }

	// LAF Table : Waiting call pop-up window elements (held out NE)
	inline TAknWindowLineLayout Waiting_call_pop_up_window_elements__held_out_NE__Line_1() const		{ return (*(TWaiting_call_pop_up_window_elements__held_out_NE__Line_1_sig*)(GetFunction(EApiId_Waiting_call_pop_up_window_elements__held_out_NE__Line_1)))(); }

	inline TAknWindowLineLayout Waiting_call_pop_up_window_elements__held_out_NE__Line_2() const		{ return (*(TWaiting_call_pop_up_window_elements__held_out_NE__Line_2_sig*)(GetFunction(EApiId_Waiting_call_pop_up_window_elements__held_out_NE__Line_2)))(); }

	inline TAknWindowLineLayout Waiting_call_pop_up_window_elements__held_out_NE__Line_3() const		{ return (*(TWaiting_call_pop_up_window_elements__held_out_NE__Line_3_sig*)(GetFunction(EApiId_Waiting_call_pop_up_window_elements__held_out_NE__Line_3)))(); }

	inline TAknLayoutTableLimits Waiting_call_pop_up_window_elements__held_out_NE__Limits() const		{ return (*(TWaiting_call_pop_up_window_elements__held_out_NE__Limits_sig*)(GetFunction(EApiId_Waiting_call_pop_up_window_elements__held_out_NE__Limits)))(); }

	inline TAknWindowLineLayout Waiting_call_pop_up_window_elements__held_out_NE_(TInt aLineIndex) const		{ return (*(TWaiting_call_pop_up_window_elements__held_out_NE__sig*)(GetFunction(EApiId_Waiting_call_pop_up_window_elements__held_out_NE_)))(aLineIndex); }

	// LAF Table : Waiting call pop-up window texts (held out NE)
	inline TAknTextLineLayout Waiting_call_pop_up_window_texts__held_out_NE__Line_1() const		{ return (*(TWaiting_call_pop_up_window_texts__held_out_NE__Line_1_sig*)(GetFunction(EApiId_Waiting_call_pop_up_window_texts__held_out_NE__Line_1)))(); }

	// LAF Table : Waiting call pop-up window graphics (held out NE)
	inline TAknWindowLineLayout Waiting_call_pop_up_window_graphics__held_out_NE__Line_1() const		{ return (*(TWaiting_call_pop_up_window_graphics__held_out_NE__Line_1_sig*)(GetFunction(EApiId_Waiting_call_pop_up_window_graphics__held_out_NE__Line_1)))(); }

	// LAF Table : Waiting call pop-up window graphics (out)
	inline TAknWindowLineLayout Waiting_call_pop_up_window_graphics__out__Line_1() const		{ return (*(TWaiting_call_pop_up_window_graphics__out__Line_1_sig*)(GetFunction(EApiId_Waiting_call_pop_up_window_graphics__out__Line_1)))(); }

	// LAF Table : Second call pop-up window elements (two)
	inline TAknWindowLineLayout Second_call_pop_up_window_elements__two__Line_1() const		{ return (*(TSecond_call_pop_up_window_elements__two__Line_1_sig*)(GetFunction(EApiId_Second_call_pop_up_window_elements__two__Line_1)))(); }

	inline TAknWindowLineLayout Second_call_pop_up_window_elements__two__Line_2() const		{ return (*(TSecond_call_pop_up_window_elements__two__Line_2_sig*)(GetFunction(EApiId_Second_call_pop_up_window_elements__two__Line_2)))(); }

	inline TAknWindowLineLayout Second_call_pop_up_window_elements__two__Line_3() const		{ return (*(TSecond_call_pop_up_window_elements__two__Line_3_sig*)(GetFunction(EApiId_Second_call_pop_up_window_elements__two__Line_3)))(); }

	inline TAknLayoutTableLimits Second_call_pop_up_window_elements__two__Limits() const		{ return (*(TSecond_call_pop_up_window_elements__two__Limits_sig*)(GetFunction(EApiId_Second_call_pop_up_window_elements__two__Limits)))(); }

	inline TAknWindowLineLayout Second_call_pop_up_window_elements__two_(TInt aLineIndex) const		{ return (*(TSecond_call_pop_up_window_elements__two__sig*)(GetFunction(EApiId_Second_call_pop_up_window_elements__two_)))(aLineIndex); }

	// LAF Table : Second call pop-up window texts (two calls)
	inline TAknTextLineLayout Second_call_pop_up_window_texts__two_calls__Line_1(TInt aCommon1, TInt aCommon2) const		{ return (*(TSecond_call_pop_up_window_texts__two_calls__Line_1_sig*)(GetFunction(EApiId_Second_call_pop_up_window_texts__two_calls__Line_1)))(aCommon1, aCommon2); }

	inline TAknMultiLineTextLayout Multiline_Second_call_pop_up_window_texts__two_calls__Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Second_call_pop_up_window_texts__two_calls__Line_1_sig*)(GetFunction(EApiId_Multiline_Second_call_pop_up_window_texts__two_calls__Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

	inline TAknTextLineLayout Second_call_pop_up_window_texts__two_calls__Line_2(TInt aCommon1) const		{ return (*(TSecond_call_pop_up_window_texts__two_calls__Line_2_sig*)(GetFunction(EApiId_Second_call_pop_up_window_texts__two_calls__Line_2)))(aCommon1); }

	// LAF Table : Second call pop-up window graphics (two calls)
	inline TAknWindowLineLayout Second_call_pop_up_window_graphics__two_calls__Line_1() const		{ return (*(TSecond_call_pop_up_window_graphics__two_calls__Line_1_sig*)(GetFunction(EApiId_Second_call_pop_up_window_graphics__two_calls__Line_1)))(); }

	// LAF Table : Second call pop-up window elements (two calls waiting call)
	inline TAknWindowLineLayout Second_call_pop_up_window_elements__two_calls_waiting_call__Line_1() const		{ return (*(TSecond_call_pop_up_window_elements__two_calls_waiting_call__Line_1_sig*)(GetFunction(EApiId_Second_call_pop_up_window_elements__two_calls_waiting_call__Line_1)))(); }

	inline TAknWindowLineLayout Second_call_pop_up_window_elements__two_calls_waiting_call__Line_2() const		{ return (*(TSecond_call_pop_up_window_elements__two_calls_waiting_call__Line_2_sig*)(GetFunction(EApiId_Second_call_pop_up_window_elements__two_calls_waiting_call__Line_2)))(); }

	inline TAknWindowLineLayout Second_call_pop_up_window_elements__two_calls_waiting_call__Line_3() const		{ return (*(TSecond_call_pop_up_window_elements__two_calls_waiting_call__Line_3_sig*)(GetFunction(EApiId_Second_call_pop_up_window_elements__two_calls_waiting_call__Line_3)))(); }

	inline TAknLayoutTableLimits Second_call_pop_up_window_elements__two_calls_waiting_call__Limits() const		{ return (*(TSecond_call_pop_up_window_elements__two_calls_waiting_call__Limits_sig*)(GetFunction(EApiId_Second_call_pop_up_window_elements__two_calls_waiting_call__Limits)))(); }

	inline TAknWindowLineLayout Second_call_pop_up_window_elements__two_calls_waiting_call_(TInt aLineIndex) const		{ return (*(TSecond_call_pop_up_window_elements__two_calls_waiting_call__sig*)(GetFunction(EApiId_Second_call_pop_up_window_elements__two_calls_waiting_call_)))(aLineIndex); }

	// LAF Table : Second call pop-up window texts (two calls waiting call)
	inline TAknTextLineLayout Second_call_pop_up_window_texts__two_calls_waiting_call__Line_1() const		{ return (*(TSecond_call_pop_up_window_texts__two_calls_waiting_call__Line_1_sig*)(GetFunction(EApiId_Second_call_pop_up_window_texts__two_calls_waiting_call__Line_1)))(); }

	// LAF Table : Second call pop-up window graphics (two calls waiting call)
	inline TAknWindowLineLayout Second_call_pop_up_window_graphics__two_calls_waiting_call__Line_1() const		{ return (*(TSecond_call_pop_up_window_graphics__two_calls_waiting_call__Line_1_sig*)(GetFunction(EApiId_Second_call_pop_up_window_graphics__two_calls_waiting_call__Line_1)))(); }

	// LAF Table : Conference call pop-up window descendants and elements
	inline TAknWindowLineLayout Conference_call_pop_up_window_descendants_and_elements_Line_1(const TRect& aParentRect) const		{ return (*(TConference_call_pop_up_window_descendants_and_elements_Line_1_sig*)(GetFunction(EApiId_Conference_call_pop_up_window_descendants_and_elements_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout list_conf_pane(TInt aIndex_H) const		{ return (*(Tlist_conf_pane_sig*)(GetFunction(EApiId_list_conf_pane)))(aIndex_H); }

	// LAF Table : Conference call pop-up window texts
	inline TAknTextLineLayout Conference_call_pop_up_window_texts_Line_1(TInt aIndex_B) const		{ return (*(TConference_call_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Conference_call_pop_up_window_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Conference_call_pop_up_window_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Conference_call_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Conference_call_pop_up_window_texts_Line_1)))(aNumberOfLinesShown); }

	// LAF Table : Muted state elements
	inline TAknWindowLineLayout Muted_state_elements_Line_1() const		{ return (*(TMuted_state_elements_Line_1_sig*)(GetFunction(EApiId_Muted_state_elements_Line_1)))(); }

	// LAF Table : Calendar events list popup components
	inline TAknWindowLineLayout Calendar_events_list_popup_components_Line_1(TInt aIndex_t) const		{ return (*(TCalendar_events_list_popup_components_Line_1_sig*)(GetFunction(EApiId_Calendar_events_list_popup_components_Line_1)))(aIndex_t); }

	// LAF Table : Calendar events list popup texts
	inline TAknTextLineLayout Calendar_events_list_popup_texts_Line_1(TInt aIndex_B) const		{ return (*(TCalendar_events_list_popup_texts_Line_1_sig*)(GetFunction(EApiId_Calendar_events_list_popup_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Calendar_events_list_popup_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Calendar_events_list_popup_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Calendar_events_list_popup_texts_Line_1)))(aNumberOfLinesShown); }

	// LAF Table : Calendar events list popup graphics
	inline TAknWindowLineLayout Calendar_events_list_popup_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TCalendar_events_list_popup_graphics_Line_1_sig*)(GetFunction(EApiId_Calendar_events_list_popup_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Calendar_events_list_popup_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TCalendar_events_list_popup_graphics_Line_2_sig*)(GetFunction(EApiId_Calendar_events_list_popup_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Calendar_events_list_popup_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TCalendar_events_list_popup_graphics_Line_3_sig*)(GetFunction(EApiId_Calendar_events_list_popup_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Calendar_events_list_popup_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TCalendar_events_list_popup_graphics_Line_4_sig*)(GetFunction(EApiId_Calendar_events_list_popup_graphics_Line_4)))(aParentRect); }

	inline TAknLayoutTableLimits Calendar_events_list_popup_graphics_Limits() const		{ return (*(TCalendar_events_list_popup_graphics_Limits_sig*)(GetFunction(EApiId_Calendar_events_list_popup_graphics_Limits)))(); }

	inline TAknWindowLineLayout Calendar_events_list_popup_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TCalendar_events_list_popup_graphics_sig*)(GetFunction(EApiId_Calendar_events_list_popup_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Presence status popup window elements
	inline TAknWindowLineLayout cell_cams_pane(TInt aIndex_l, TInt aIndex_t) const		{ return (*(Tcell_cams_pane_sig*)(GetFunction(EApiId_cell_cams_pane)))(aIndex_l, aIndex_t); }

	inline TAknWindowLineLayout image_or_qgn_prop_dyc__ref_() const		{ return (*(Timage_or_qgn_prop_dyc__ref__sig*)(GetFunction(EApiId_image_or_qgn_prop_dyc__ref_)))(); }

	inline TAknWindowLineLayout loc_type_pane(TInt aIndex_H) const		{ return (*(Tloc_type_pane_sig*)(GetFunction(EApiId_loc_type_pane)))(aIndex_H); }

	inline TAknWindowLineLayout loc_req_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tloc_req_pane_sig*)(GetFunction(EApiId_loc_req_pane)))(aIndex_t, aIndex_H); }

	// LAF Table : Additional heading pane elements
	inline TAknWindowLineLayout Additional_heading_pane_elements_Line_1() const		{ return (*(TAdditional_heading_pane_elements_Line_1_sig*)(GetFunction(EApiId_Additional_heading_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Additional_heading_pane_elements_Line_2() const		{ return (*(TAdditional_heading_pane_elements_Line_2_sig*)(GetFunction(EApiId_Additional_heading_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Additional_heading_pane_elements_Line_3() const		{ return (*(TAdditional_heading_pane_elements_Line_3_sig*)(GetFunction(EApiId_Additional_heading_pane_elements_Line_3)))(); }

	// LAF Table : Presence status popup window texts
	inline TAknTextLineLayout Presence_status_popup_window_texts_Line_1() const		{ return (*(TPresence_status_popup_window_texts_Line_1_sig*)(GetFunction(EApiId_Presence_status_popup_window_texts_Line_1)))(); }

	inline TAknTextLineLayout Presence_status_popup_window_texts_Line_2(TInt aIndex_B) const		{ return (*(TPresence_status_popup_window_texts_Line_2_sig*)(GetFunction(EApiId_Presence_status_popup_window_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Presence_status_popup_window_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Presence_status_popup_window_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Presence_status_popup_window_texts_Line_2)))(aNumberOfLinesShown); }

	// LAF Table : Presence status window graphics
	inline TAknWindowLineLayout Presence_status_window_graphics_Line_1() const		{ return (*(TPresence_status_window_graphics_Line_1_sig*)(GetFunction(EApiId_Presence_status_window_graphics_Line_1)))(); }

	inline TAknWindowLineLayout Presence_status_window_graphics_Line_2() const		{ return (*(TPresence_status_window_graphics_Line_2_sig*)(GetFunction(EApiId_Presence_status_window_graphics_Line_2)))(); }

	inline TAknWindowLineLayout Presence_status_window_graphics_Line_3() const		{ return (*(TPresence_status_window_graphics_Line_3_sig*)(GetFunction(EApiId_Presence_status_window_graphics_Line_3)))(); }

	inline TAknWindowLineLayout Presence_status_window_graphics_Line_4() const		{ return (*(TPresence_status_window_graphics_Line_4_sig*)(GetFunction(EApiId_Presence_status_window_graphics_Line_4)))(); }

	inline TAknWindowLineLayout Presence_status_window_graphics_Line_5() const		{ return (*(TPresence_status_window_graphics_Line_5_sig*)(GetFunction(EApiId_Presence_status_window_graphics_Line_5)))(); }

	inline TAknLayoutTableLimits Presence_status_window_graphics_Limits() const		{ return (*(TPresence_status_window_graphics_Limits_sig*)(GetFunction(EApiId_Presence_status_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Presence_status_window_graphics(TInt aLineIndex) const		{ return (*(TPresence_status_window_graphics_sig*)(GetFunction(EApiId_Presence_status_window_graphics)))(aLineIndex); }

	// LAF Table : Pop-up windows (main pane as parent)
	inline TAknWindowLineLayout popup_number_entry_window() const		{ return (*(Tpopup_number_entry_window_sig*)(GetFunction(EApiId_popup_number_entry_window)))(); }

	inline TAknWindowLineLayout popup_pb_memory_status_window() const		{ return (*(Tpopup_pb_memory_status_window_sig*)(GetFunction(EApiId_popup_pb_memory_status_window)))(); }

	inline TAknWindowLineLayout popup_grid_large_graphic_window(TInt aIndex_H) const		{ return (*(Tpopup_grid_large_graphic_window_sig*)(GetFunction(EApiId_popup_grid_large_graphic_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_call_audio_in_window(TInt aCommon1) const		{ return (*(Tpopup_call_audio_in_window_sig*)(GetFunction(EApiId_popup_call_audio_in_window)))(aCommon1); }

	inline TAknWindowLineLayout popup_call_audio_out_window(TInt aCommon1) const		{ return (*(Tpopup_call_audio_out_window_sig*)(GetFunction(EApiId_popup_call_audio_out_window)))(aCommon1); }

	inline TAknWindowLineLayout popup_call_audio_first_window(TInt aIndex_r, TInt aCommon1) const		{ return (*(Tpopup_call_audio_first_window_sig*)(GetFunction(EApiId_popup_call_audio_first_window)))(aIndex_r, aCommon1); }

	inline TAknWindowLineLayout popup_call_audio_wait_window(TInt aCommon1) const		{ return (*(Tpopup_call_audio_wait_window_sig*)(GetFunction(EApiId_popup_call_audio_wait_window)))(aCommon1); }

	inline TAknWindowLineLayout popup_call_audio_second_window(TInt aIndex_r, TInt aCommon1) const		{ return (*(Tpopup_call_audio_second_window_sig*)(GetFunction(EApiId_popup_call_audio_second_window)))(aIndex_r, aCommon1); }

	inline TAknWindowLineLayout popup_call_audio_conf_window(TInt aIndex_H) const		{ return (*(Tpopup_call_audio_conf_window_sig*)(GetFunction(EApiId_popup_call_audio_conf_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_call_video_in_window() const		{ return (*(Tpopup_call_video_in_window_sig*)(GetFunction(EApiId_popup_call_video_in_window)))(); }

	inline TAknWindowLineLayout popup_call_video_first_window() const		{ return (*(Tpopup_call_video_first_window_sig*)(GetFunction(EApiId_popup_call_video_first_window)))(); }

	inline TAknWindowLineLayout popup_call_video_down_window() const		{ return (*(Tpopup_call_video_down_window_sig*)(GetFunction(EApiId_popup_call_video_down_window)))(); }

	inline TAknWindowLineLayout popup_query_wml_wim_window(TInt aIndex_H) const		{ return (*(Tpopup_query_wml_wim_window_sig*)(GetFunction(EApiId_popup_query_wml_wim_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_query_wml_sign_window(TInt aIndex_H) const		{ return (*(Tpopup_query_wml_sign_window_sig*)(GetFunction(EApiId_popup_query_wml_sign_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_query_sat_info_window(TInt aIndex_H) const		{ return (*(Tpopup_query_sat_info_window_sig*)(GetFunction(EApiId_popup_query_sat_info_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_grid_large_compo_graphic_window() const		{ return (*(Tpopup_grid_large_compo_graphic_window_sig*)(GetFunction(EApiId_popup_grid_large_compo_graphic_window)))(); }

	inline TAknWindowLineLayout popup_dyc_status_message_window() const		{ return (*(Tpopup_dyc_status_message_window_sig*)(GetFunction(EApiId_popup_dyc_status_message_window)))(); }

	// LAF Table : Thumbnail image sizes
	inline TAknWindowLineLayout VGA() const		{ return (*(TVGA_sig*)(GetFunction(EApiId_VGA)))(); }

	inline TAknWindowLineLayout VGA_turned_90() const		{ return (*(TVGA_turned_90_sig*)(GetFunction(EApiId_VGA_turned_90)))(); }

	inline TAknWindowLineLayout CIF() const		{ return (*(TCIF_sig*)(GetFunction(EApiId_CIF)))(); }

	inline TAknWindowLineLayout CIF_turned_90() const		{ return (*(TCIF_turned_90_sig*)(GetFunction(EApiId_CIF_turned_90)))(); }

	inline TAknWindowLineLayout Communicator_personal_image() const		{ return (*(TCommunicator_personal_image_sig*)(GetFunction(EApiId_Communicator_personal_image)))(); }

	inline TAknWindowLineLayout Image_aspect_ratio___0_625() const		{ return (*(TImage_aspect_ratio___0_625_sig*)(GetFunction(EApiId_Image_aspect_ratio___0_625)))(); }

	inline TAknWindowLineLayout Image_aspect_ratio___1_467() const		{ return (*(TImage_aspect_ratio___1_467_sig*)(GetFunction(EApiId_Image_aspect_ratio___1_467)))(); }

	inline TAknWindowLineLayout _0_625___image_aspect_ratio___1_467() const		{ return (*(T_0_625___image_aspect_ratio___1_467_sig*)(GetFunction(EApiId__0_625___image_aspect_ratio___1_467)))(); }

	inline TAknLayoutTableLimits Thumbnail_image_sizes_Limits() const		{ return (*(TThumbnail_image_sizes_Limits_sig*)(GetFunction(EApiId_Thumbnail_image_sizes_Limits)))(); }

	inline TAknWindowLineLayout Thumbnail_image_sizes(TInt aLineIndex) const		{ return (*(TThumbnail_image_sizes_sig*)(GetFunction(EApiId_Thumbnail_image_sizes)))(aLineIndex); }

	// LAF Table : Message writing layout elements
	inline TAknWindowLineLayout Message_writing_layout_elements_Line_1(TInt aIndex_t, TInt aIndex_H) const		{ return (*(TMessage_writing_layout_elements_Line_1_sig*)(GetFunction(EApiId_Message_writing_layout_elements_Line_1)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout Message_writing_layout_elements_Line_2(TInt aIndex_t, TInt aIndex_H) const		{ return (*(TMessage_writing_layout_elements_Line_2_sig*)(GetFunction(EApiId_Message_writing_layout_elements_Line_2)))(aIndex_t, aIndex_H); }

	inline TAknWindowLineLayout Message_writing_layout_elements_Line_3(TInt aIndex_t) const		{ return (*(TMessage_writing_layout_elements_Line_3_sig*)(GetFunction(EApiId_Message_writing_layout_elements_Line_3)))(aIndex_t); }

	inline TAknWindowLineLayout Message_writing_layout_elements_Line_4(TInt aIndex_H) const		{ return (*(TMessage_writing_layout_elements_Line_4_sig*)(GetFunction(EApiId_Message_writing_layout_elements_Line_4)))(aIndex_H); }

	inline TAknWindowLineLayout Message_writing_layout_elements_Line_5(TInt aIndex_t) const		{ return (*(TMessage_writing_layout_elements_Line_5_sig*)(GetFunction(EApiId_Message_writing_layout_elements_Line_5)))(aIndex_t); }

	inline TAknWindowLineLayout Message_writing_layout_elements_Line_6(TInt aIndex_C, TInt aIndex_t) const		{ return (*(TMessage_writing_layout_elements_Line_6_sig*)(GetFunction(EApiId_Message_writing_layout_elements_Line_6)))(aIndex_C, aIndex_t); }

	inline TAknWindowLineLayout Message_writing_layout_elements_Line_7() const		{ return (*(TMessage_writing_layout_elements_Line_7_sig*)(GetFunction(EApiId_Message_writing_layout_elements_Line_7)))(); }

	inline TAknWindowLineLayout Message_writing_layout_elements_Line_8(TInt aIndex_t, TInt aIndex_W, TInt aIndex_H) const		{ return (*(TMessage_writing_layout_elements_Line_8_sig*)(GetFunction(EApiId_Message_writing_layout_elements_Line_8)))(aIndex_t, aIndex_W, aIndex_H); }

	inline TAknWindowLineLayout CamcorderBurst_Mode_Post_Recording_cell_elements_Line_1() const		{ return (*(TCamcorderBurst_Mode_Post_Recording_cell_elements_Line_1_sig*)(GetFunction(EApiId_CamcorderBurst_Mode_Post_Recording_cell_elements_Line_1)))(); }

	inline TAknWindowLineLayout CamcorderBurst_Mode_Post_Recording_cell_elements_Line_2() const		{ return (*(TCamcorderBurst_Mode_Post_Recording_cell_elements_Line_2_sig*)(GetFunction(EApiId_CamcorderBurst_Mode_Post_Recording_cell_elements_Line_2)))(); }

	inline TAknLayoutTableLimits CamcorderBurst_Mode_Post_Recording_cell_elements_Limits() const		{ return (*(TCamcorderBurst_Mode_Post_Recording_cell_elements_Limits_sig*)(GetFunction(EApiId_CamcorderBurst_Mode_Post_Recording_cell_elements_Limits)))(); }

	inline TAknWindowLineLayout CamcorderBurst_Mode_Post_Recording_cell_elements(TInt aLineIndex) const		{ return (*(TCamcorderBurst_Mode_Post_Recording_cell_elements_sig*)(GetFunction(EApiId_CamcorderBurst_Mode_Post_Recording_cell_elements)))(aLineIndex); }

	inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_6() const		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_6_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_6)))(); }

	inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_7() const		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_7_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_7)))(); }

	inline TAknWindowLineLayout near_QCIF() const		{ return (*(Tnear_QCIF_sig*)(GetFunction(EApiId_near_QCIF)))(); }

	inline TAknTextLineLayout Media_Player_navi_pane_texts_Line_1() const		{ return (*(TMedia_Player_navi_pane_texts_Line_1_sig*)(GetFunction(EApiId_Media_Player_navi_pane_texts_Line_1)))(); }

	inline TAknWindowLineLayout Volume_strength_area_values_Line_1() const		{ return (*(TVolume_strength_area_values_Line_1_sig*)(GetFunction(EApiId_Volume_strength_area_values_Line_1)))(); }

	inline TAknWindowLineLayout Volume_strength_area_values_Line_2() const		{ return (*(TVolume_strength_area_values_Line_2_sig*)(GetFunction(EApiId_Volume_strength_area_values_Line_2)))(); }

	inline TAknWindowLineLayout Volume_strength_area_values_Line_3() const		{ return (*(TVolume_strength_area_values_Line_3_sig*)(GetFunction(EApiId_Volume_strength_area_values_Line_3)))(); }

	inline TAknWindowLineLayout Volume_strength_area_values_Line_4() const		{ return (*(TVolume_strength_area_values_Line_4_sig*)(GetFunction(EApiId_Volume_strength_area_values_Line_4)))(); }

	inline TAknWindowLineLayout Volume_strength_area_values_Line_5() const		{ return (*(TVolume_strength_area_values_Line_5_sig*)(GetFunction(EApiId_Volume_strength_area_values_Line_5)))(); }

	inline TAknWindowLineLayout Volume_strength_area_values_Line_6() const		{ return (*(TVolume_strength_area_values_Line_6_sig*)(GetFunction(EApiId_Volume_strength_area_values_Line_6)))(); }

	inline TAknWindowLineLayout Volume_strength_area_values_Line_7() const		{ return (*(TVolume_strength_area_values_Line_7_sig*)(GetFunction(EApiId_Volume_strength_area_values_Line_7)))(); }

	inline TAknWindowLineLayout Volume_strength_area_values_Line_8() const		{ return (*(TVolume_strength_area_values_Line_8_sig*)(GetFunction(EApiId_Volume_strength_area_values_Line_8)))(); }

	inline TAknWindowLineLayout blid_compass_pane() const		{ return (*(Tblid_compass_pane_sig*)(GetFunction(EApiId_blid_compass_pane)))(); }

	inline TAknWindowLineLayout BLID_compass_view_elements_Line_2() const		{ return (*(TBLID_compass_view_elements_Line_2_sig*)(GetFunction(EApiId_BLID_compass_view_elements_Line_2)))(); }

	inline TAknWindowLineLayout BLID_compass_view_elements_Line_3() const		{ return (*(TBLID_compass_view_elements_Line_3_sig*)(GetFunction(EApiId_BLID_compass_view_elements_Line_3)))(); }

	inline TAknLayoutTableLimits BLID_compass_view_elements_Limits() const		{ return (*(TBLID_compass_view_elements_Limits_sig*)(GetFunction(EApiId_BLID_compass_view_elements_Limits)))(); }

	inline TAknWindowLineLayout BLID_compass_view_elements(TInt aLineIndex) const		{ return (*(TBLID_compass_view_elements_sig*)(GetFunction(EApiId_BLID_compass_view_elements)))(aLineIndex); }

	inline TAknWindowLineLayout Accuracyvalues_Line_1() const		{ return (*(TAccuracyvalues_Line_1_sig*)(GetFunction(EApiId_Accuracyvalues_Line_1)))(); }

	inline TAknWindowLineLayout Accuracyvalues_Line_2() const		{ return (*(TAccuracyvalues_Line_2_sig*)(GetFunction(EApiId_Accuracyvalues_Line_2)))(); }

	inline TAknWindowLineLayout Accuracyvalues_Line_3() const		{ return (*(TAccuracyvalues_Line_3_sig*)(GetFunction(EApiId_Accuracyvalues_Line_3)))(); }

	inline TAknWindowLineLayout Accuracyvalues_Line_4() const		{ return (*(TAccuracyvalues_Line_4_sig*)(GetFunction(EApiId_Accuracyvalues_Line_4)))(); }

	inline TAknWindowLineLayout Accuracyvalues_Line_5() const		{ return (*(TAccuracyvalues_Line_5_sig*)(GetFunction(EApiId_Accuracyvalues_Line_5)))(); }

	inline TAknWindowLineLayout Accuracyvalues_Line_6() const		{ return (*(TAccuracyvalues_Line_6_sig*)(GetFunction(EApiId_Accuracyvalues_Line_6)))(); }

	inline TAknWindowLineLayout Accuracyvalues_Line_7() const		{ return (*(TAccuracyvalues_Line_7_sig*)(GetFunction(EApiId_Accuracyvalues_Line_7)))(); }

	inline TAknWindowLineLayout Accuracyvalues_Line_8() const		{ return (*(TAccuracyvalues_Line_8_sig*)(GetFunction(EApiId_Accuracyvalues_Line_8)))(); }

	inline TAknLayoutTableLimits Accuracyvalues_Limits() const		{ return (*(TAccuracyvalues_Limits_sig*)(GetFunction(EApiId_Accuracyvalues_Limits)))(); }

	inline TAknWindowLineLayout Accuracyvalues(TInt aLineIndex) const		{ return (*(TAccuracyvalues_sig*)(GetFunction(EApiId_Accuracyvalues)))(aLineIndex); }

	inline TAknTextLineLayout BLIDcompass_view_texts_Line_1() const		{ return (*(TBLIDcompass_view_texts_Line_1_sig*)(GetFunction(EApiId_BLIDcompass_view_texts_Line_1)))(); }

	inline TAknTextLineLayout BLIDcompass_view_texts_Line_2() const		{ return (*(TBLIDcompass_view_texts_Line_2_sig*)(GetFunction(EApiId_BLIDcompass_view_texts_Line_2)))(); }

	inline TAknTextLineLayout BLIDcompass_view_texts_Line_3() const		{ return (*(TBLIDcompass_view_texts_Line_3_sig*)(GetFunction(EApiId_BLIDcompass_view_texts_Line_3)))(); }

	inline TAknLayoutTableLimits BLIDcompass_view_texts_Limits() const		{ return (*(TBLIDcompass_view_texts_Limits_sig*)(GetFunction(EApiId_BLIDcompass_view_texts_Limits)))(); }

	inline TAknTextLineLayout BLIDcompass_view_texts(TInt aLineIndex) const		{ return (*(TBLIDcompass_view_texts_sig*)(GetFunction(EApiId_BLIDcompass_view_texts)))(aLineIndex); }

	inline TAknWindowLineLayout Compasspane_elements_Line_1() const		{ return (*(TCompasspane_elements_Line_1_sig*)(GetFunction(EApiId_Compasspane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Arrow_head__graphic() const		{ return (*(TArrow_head__graphic_sig*)(GetFunction(EApiId_Arrow_head__graphic)))(); }

	inline TAknWindowLineLayout Arrow_body__graphic() const		{ return (*(TArrow_body__graphic_sig*)(GetFunction(EApiId_Arrow_body__graphic)))(); }

	inline TAknLayoutTableLimits Compasspane_elements_Limits() const		{ return (*(TCompasspane_elements_Limits_sig*)(GetFunction(EApiId_Compasspane_elements_Limits)))(); }

	inline TAknWindowLineLayout Compasspane_elements(TInt aLineIndex) const		{ return (*(TCompasspane_elements_sig*)(GetFunction(EApiId_Compasspane_elements)))(aLineIndex); }

	inline TAknWindowLineLayout blid_direction_pane() const		{ return (*(Tblid_direction_pane_sig*)(GetFunction(EApiId_blid_direction_pane)))(); }

	inline TAknTextLineLayout BLIDdirection_elements_Line_1() const		{ return (*(TBLIDdirection_elements_Line_1_sig*)(GetFunction(EApiId_BLIDdirection_elements_Line_1)))(); }

	inline TAknWindowLineLayout Outgoingincoming_video_call_elements_Line_1() const		{ return (*(TOutgoingincoming_video_call_elements_Line_1_sig*)(GetFunction(EApiId_Outgoingincoming_video_call_elements_Line_1)))(); }

	inline TAknWindowLineLayout Outgoingincoming_video_call_elements_Line_2() const		{ return (*(TOutgoingincoming_video_call_elements_Line_2_sig*)(GetFunction(EApiId_Outgoingincoming_video_call_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Outgoingincoming_video_call_elements_Limits() const		{ return (*(TOutgoingincoming_video_call_elements_Limits_sig*)(GetFunction(EApiId_Outgoingincoming_video_call_elements_Limits)))(); }

	inline TAknWindowLineLayout Outgoingincoming_video_call_elements(TInt aLineIndex) const		{ return (*(TOutgoingincoming_video_call_elements_sig*)(GetFunction(EApiId_Outgoingincoming_video_call_elements)))(aLineIndex); }

	inline TAknWindowLineLayout Uplink_video_image__large__Line_1() const		{ return (*(TUplink_video_image__large__Line_1_sig*)(GetFunction(EApiId_Uplink_video_image__large__Line_1)))(); }

	inline TAknWindowLineLayout Uplink_video_image__large__Line_2() const		{ return (*(TUplink_video_image__large__Line_2_sig*)(GetFunction(EApiId_Uplink_video_image__large__Line_2)))(); }

	inline TAknWindowLineLayout Uplink_video_image__large__Line_3() const		{ return (*(TUplink_video_image__large__Line_3_sig*)(GetFunction(EApiId_Uplink_video_image__large__Line_3)))(); }

	inline TAknLayoutTableLimits Uplink_video_image__large__Limits() const		{ return (*(TUplink_video_image__large__Limits_sig*)(GetFunction(EApiId_Uplink_video_image__large__Limits)))(); }

	inline TAknWindowLineLayout Uplink_video_image__large_(TInt aLineIndex) const		{ return (*(TUplink_video_image__large__sig*)(GetFunction(EApiId_Uplink_video_image__large_)))(aLineIndex); }

	inline TAknWindowLineLayout Downlink_video_image_Line_1() const		{ return (*(TDownlink_video_image_Line_1_sig*)(GetFunction(EApiId_Downlink_video_image_Line_1)))(); }

	inline TAknWindowLineLayout downlink_stream() const		{ return (*(Tdownlink_stream_sig*)(GetFunction(EApiId_downlink_stream)))(); }

	inline TAknWindowLineLayout Downlink_video_image_Line_3() const		{ return (*(TDownlink_video_image_Line_3_sig*)(GetFunction(EApiId_Downlink_video_image_Line_3)))(); }

	inline TAknLayoutTableLimits Downlink_video_image_Limits() const		{ return (*(TDownlink_video_image_Limits_sig*)(GetFunction(EApiId_Downlink_video_image_Limits)))(); }

	inline TAknWindowLineLayout Downlink_video_image(TInt aLineIndex) const		{ return (*(TDownlink_video_image_sig*)(GetFunction(EApiId_Downlink_video_image)))(aLineIndex); }

	inline TAknWindowLineLayout title_pane() const		{ return (*(Ttitle_pane_sig*)(GetFunction(EApiId_title_pane)))(); }

	inline TAknWindowLineLayout uni_indicator_pane() const		{ return (*(Tuni_indicator_pane_sig*)(GetFunction(EApiId_uni_indicator_pane)))(); }

	inline TAknLayoutTableLimits Status_pane_changes_Limits() const		{ return (*(TStatus_pane_changes_Limits_sig*)(GetFunction(EApiId_Status_pane_changes_Limits)))(); }

	inline TAknWindowLineLayout Status_pane_changes(TInt aLineIndex) const		{ return (*(TStatus_pane_changes_sig*)(GetFunction(EApiId_Status_pane_changes)))(aLineIndex); }

	inline TAknTextLineLayout Title_pane_texts_Line_2(TInt aIndex_B) const		{ return (*(TTitle_pane_texts_Line_2_sig*)(GetFunction(EApiId_Title_pane_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Title_pane_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Title_pane_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Title_pane_texts_Line_2)))(aNumberOfLinesShown); }

	inline TAknWindowLineLayout Navipane_elements_and_descendant_panes_Line_1() const		{ return (*(TNavipane_elements_and_descendant_panes_Line_1_sig*)(GetFunction(EApiId_Navipane_elements_and_descendant_panes_Line_1)))(); }

	inline TAknWindowLineLayout zooming_pane() const		{ return (*(Tzooming_pane_sig*)(GetFunction(EApiId_zooming_pane)))(); }

	inline TAknLayoutTableLimits Navipane_elements_and_descendant_panes_Limits() const		{ return (*(TNavipane_elements_and_descendant_panes_Limits_sig*)(GetFunction(EApiId_Navipane_elements_and_descendant_panes_Limits)))(); }

	inline TAknWindowLineLayout Navipane_elements_and_descendant_panes(TInt aLineIndex) const		{ return (*(TNavipane_elements_and_descendant_panes_sig*)(GetFunction(EApiId_Navipane_elements_and_descendant_panes)))(aLineIndex); }

	inline TAknWindowLineLayout Zooming_pane_elements_Line_1() const		{ return (*(TZooming_pane_elements_Line_1_sig*)(GetFunction(EApiId_Zooming_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Zooming_pane_elements_Line_2() const		{ return (*(TZooming_pane_elements_Line_2_sig*)(GetFunction(EApiId_Zooming_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Zooming_pane_elements_Line_3() const		{ return (*(TZooming_pane_elements_Line_3_sig*)(GetFunction(EApiId_Zooming_pane_elements_Line_3)))(); }

	inline TAknWindowLineLayout Zooming_pane_elements_Line_4() const		{ return (*(TZooming_pane_elements_Line_4_sig*)(GetFunction(EApiId_Zooming_pane_elements_Line_4)))(); }

	inline TAknLayoutTableLimits Zooming_pane_elements_Limits() const		{ return (*(TZooming_pane_elements_Limits_sig*)(GetFunction(EApiId_Zooming_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Zooming_pane_elements(TInt aLineIndex) const		{ return (*(TZooming_pane_elements_sig*)(GetFunction(EApiId_Zooming_pane_elements)))(aLineIndex); }

	inline TAknTextLineLayout Navipanetexts_Line_1() const		{ return (*(TNavipanetexts_Line_1_sig*)(GetFunction(EApiId_Navipanetexts_Line_1)))(); }

	inline TAknTextLineLayout Navipanetexts_Line_2() const		{ return (*(TNavipanetexts_Line_2_sig*)(GetFunction(EApiId_Navipanetexts_Line_2)))(); }

	inline TAknLayoutTableLimits Navipanetexts_Limits() const		{ return (*(TNavipanetexts_Limits_sig*)(GetFunction(EApiId_Navipanetexts_Limits)))(); }

	inline TAknTextLineLayout Navipanetexts(TInt aLineIndex) const		{ return (*(TNavipanetexts_sig*)(GetFunction(EApiId_Navipanetexts)))(aLineIndex); }

	inline TAknWindowLineLayout Videocall_indicator__NEwaiting_call__Line_1() const		{ return (*(TVideocall_indicator__NEwaiting_call__Line_1_sig*)(GetFunction(EApiId_Videocall_indicator__NEwaiting_call__Line_1)))(); }

	inline TAknWindowLineLayout Videocall_indicator__NEwaiting_call__Line_2() const		{ return (*(TVideocall_indicator__NEwaiting_call__Line_2_sig*)(GetFunction(EApiId_Videocall_indicator__NEwaiting_call__Line_2)))(); }

	inline TAknLayoutTableLimits Videocall_indicator__NEwaiting_call__Limits() const		{ return (*(TVideocall_indicator__NEwaiting_call__Limits_sig*)(GetFunction(EApiId_Videocall_indicator__NEwaiting_call__Limits)))(); }

	inline TAknWindowLineLayout Videocall_indicator__NEwaiting_call_(TInt aLineIndex) const		{ return (*(TVideocall_indicator__NEwaiting_call__sig*)(GetFunction(EApiId_Videocall_indicator__NEwaiting_call_)))(aLineIndex); }

	inline TAknWindowLineLayout Callstatus_pop_up_window_elements_Line_1() const		{ return (*(TCallstatus_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_Callstatus_pop_up_window_elements_Line_1)))(); }

	inline TAknWindowLineLayout Callstatus_pop_up_window_elements_Line_2() const		{ return (*(TCallstatus_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_Callstatus_pop_up_window_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Callstatus_pop_up_window_elements_Limits() const		{ return (*(TCallstatus_pop_up_window_elements_Limits_sig*)(GetFunction(EApiId_Callstatus_pop_up_window_elements_Limits)))(); }

	inline TAknWindowLineLayout Callstatus_pop_up_window_elements(TInt aLineIndex) const		{ return (*(TCallstatus_pop_up_window_elements_sig*)(GetFunction(EApiId_Callstatus_pop_up_window_elements)))(aLineIndex); }

	inline TAknWindowLineLayout Rectangle() const		{ return (*(TRectangle_sig*)(GetFunction(EApiId_Rectangle)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_2() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_2_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_2)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_3() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_3_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_3)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_4() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_4_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_4)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_5() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_5_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_5)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_6() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_6_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_6)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_7() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_7_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_7)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_8() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_8_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_8)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_9() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_9_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_9)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_10() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_10_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_10)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_11() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_11_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_11)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_12() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_12_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_12)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_13() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_13_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_13)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_14() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_14_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_14)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_15() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_15_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_15)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_16() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_16_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_16)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_17() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_17_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_17)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area__Line_18() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Line_18_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Line_18)))(); }

	inline TAknLayoutTableLimits Colorpalette_preview_screen_element_placing__main_area__Limits() const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__Limits_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area__Limits)))(); }

	inline TAknWindowLineLayout Colorpalette_preview_screen_element_placing__main_area_(TInt aLineIndex) const		{ return (*(TColorpalette_preview_screen_element_placing__main_area__sig*)(GetFunction(EApiId_Colorpalette_preview_screen_element_placing__main_area_)))(aLineIndex); }

	inline TAknTextLineLayout Colorpalette_preview_screen_text_placing__main_area__Line_1() const		{ return (*(TColorpalette_preview_screen_text_placing__main_area__Line_1_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_text_placing__main_area__Line_1)))(); }

	inline TAknTextLineLayout Colorpalette_preview_screen_text_placing__main_area__Line_2() const		{ return (*(TColorpalette_preview_screen_text_placing__main_area__Line_2_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_text_placing__main_area__Line_2)))(); }

	inline TAknLayoutTableLimits Colorpalette_preview_screen_text_placing__main_area__Limits() const		{ return (*(TColorpalette_preview_screen_text_placing__main_area__Limits_sig*)(GetFunction(EApiId_Colorpalette_preview_screen_text_placing__main_area__Limits)))(); }

	inline TAknTextLineLayout Colorpalette_preview_screen_text_placing__main_area_(TInt aLineIndex) const		{ return (*(TColorpalette_preview_screen_text_placing__main_area__sig*)(GetFunction(EApiId_Colorpalette_preview_screen_text_placing__main_area_)))(aLineIndex); }

	inline TAknWindowLineLayout audioskin_pane() const		{ return (*(Taudioskin_pane_sig*)(GetFunction(EApiId_audioskin_pane)))(); }

	inline TAknTextLineLayout Audio_Playbackview_texts_Line_1() const		{ return (*(TAudio_Playbackview_texts_Line_1_sig*)(GetFunction(EApiId_Audio_Playbackview_texts_Line_1)))(); }

	inline TAknTextLineLayout Audio_Playbackview_texts_Line_2() const		{ return (*(TAudio_Playbackview_texts_Line_2_sig*)(GetFunction(EApiId_Audio_Playbackview_texts_Line_2)))(); }

	inline TAknTextLineLayout Audio_Playbackview_texts_Line_3() const		{ return (*(TAudio_Playbackview_texts_Line_3_sig*)(GetFunction(EApiId_Audio_Playbackview_texts_Line_3)))(); }

	inline TAknTextLineLayout Audio_Playbackview_texts_Line_4() const		{ return (*(TAudio_Playbackview_texts_Line_4_sig*)(GetFunction(EApiId_Audio_Playbackview_texts_Line_4)))(); }

	inline TAknLayoutTableLimits Audio_Playbackview_texts_Limits() const		{ return (*(TAudio_Playbackview_texts_Limits_sig*)(GetFunction(EApiId_Audio_Playbackview_texts_Limits)))(); }

	inline TAknTextLineLayout Audio_Playbackview_texts(TInt aLineIndex) const		{ return (*(TAudio_Playbackview_texts_sig*)(GetFunction(EApiId_Audio_Playbackview_texts)))(aLineIndex); }

	inline TAknWindowLineLayout Audioskin_pane_elements_Line_1() const		{ return (*(TAudioskin_pane_elements_Line_1_sig*)(GetFunction(EApiId_Audioskin_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout popup_loc_request_window(TInt aIndex_H) const		{ return (*(Tpopup_loc_request_window_sig*)(GetFunction(EApiId_popup_loc_request_window)))(aIndex_H); }

	inline TAknWindowLineLayout list_single_graphic_popup_wml_pane(TInt aIndex_t) const		{ return (*(Tlist_single_graphic_popup_wml_pane_sig*)(GetFunction(EApiId_list_single_graphic_popup_wml_pane)))(aIndex_t); }

	inline TAknLayoutTableLimits Pop_up_window_list_pane_descendants_call_conf__Limits() const		{ return (*(TPop_up_window_list_pane_descendants_call_conf__Limits_sig*)(GetFunction(EApiId_Pop_up_window_list_pane_descendants_call_conf__Limits)))(); }

	inline TAknWindowLineLayout Pop_up_window_list_pane_descendants_call_conf_(TInt aLineIndex, TInt aIndex_t) const		{ return (*(TPop_up_window_list_pane_descendants_call_conf__sig*)(GetFunction(EApiId_Pop_up_window_list_pane_descendants_call_conf_)))(aLineIndex, aIndex_t); }

	inline TAknWindowLineLayout list_wml_pane(TInt aIndex_H) const		{ return (*(Tlist_wml_pane_sig*)(GetFunction(EApiId_list_wml_pane)))(aIndex_H); }

	inline TAknWindowLineLayout Browser_address_field_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TBrowser_address_field_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Browser_address_field_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Browser_address_field_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TBrowser_address_field_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Browser_address_field_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Browser_address_field_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TBrowser_address_field_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Browser_address_field_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Browser_address_field_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TBrowser_address_field_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Browser_address_field_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknLayoutTableLimits Browser_address_field_pop_up_window_graphics_Limits() const		{ return (*(TBrowser_address_field_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Browser_address_field_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Browser_address_field_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TBrowser_address_field_pop_up_window_graphics_sig*)(GetFunction(EApiId_Browser_address_field_pop_up_window_graphics)))(aLineIndex, aParentRect); }

	inline TAknTextLineLayout First_call_pop_up_window_texts__one_call__Line_3() const		{ return (*(TFirst_call_pop_up_window_texts__one_call__Line_3_sig*)(GetFunction(EApiId_First_call_pop_up_window_texts__one_call__Line_3)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_graphics__one_call__Line_2() const		{ return (*(TFirst_call_pop_up_window_graphics__one_call__Line_2_sig*)(GetFunction(EApiId_First_call_pop_up_window_graphics__one_call__Line_2)))(); }

	inline TAknLayoutTableLimits First_call_pop_up_window_graphics__one_call__Limits() const		{ return (*(TFirst_call_pop_up_window_graphics__one_call__Limits_sig*)(GetFunction(EApiId_First_call_pop_up_window_graphics__one_call__Limits)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_graphics__one_call_(TInt aLineIndex) const		{ return (*(TFirst_call_pop_up_window_graphics__one_call__sig*)(GetFunction(EApiId_First_call_pop_up_window_graphics__one_call_)))(aLineIndex); }

	inline TAknTextLineLayout First_call_pop_up_window_texts__two_calls__Line_3() const		{ return (*(TFirst_call_pop_up_window_texts__two_calls__Line_3_sig*)(GetFunction(EApiId_First_call_pop_up_window_texts__two_calls__Line_3)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_graphics__two_calls__Line_2() const		{ return (*(TFirst_call_pop_up_window_graphics__two_calls__Line_2_sig*)(GetFunction(EApiId_First_call_pop_up_window_graphics__two_calls__Line_2)))(); }

	inline TAknLayoutTableLimits First_call_pop_up_window_graphics__two_calls__Limits() const		{ return (*(TFirst_call_pop_up_window_graphics__two_calls__Limits_sig*)(GetFunction(EApiId_First_call_pop_up_window_graphics__two_calls__Limits)))(); }

	inline TAknWindowLineLayout First_call_pop_up_window_graphics__two_calls_(TInt aLineIndex) const		{ return (*(TFirst_call_pop_up_window_graphics__two_calls__sig*)(GetFunction(EApiId_First_call_pop_up_window_graphics__two_calls_)))(aLineIndex); }

	inline TAknWindowLineLayout Call_type_pane_split_Line_1() const		{ return (*(TCall_type_pane_split_Line_1_sig*)(GetFunction(EApiId_Call_type_pane_split_Line_1)))(); }

	inline TAknWindowLineLayout Call_type_pane_split_Line_2() const		{ return (*(TCall_type_pane_split_Line_2_sig*)(GetFunction(EApiId_Call_type_pane_split_Line_2)))(); }

	inline TAknWindowLineLayout popup_wml_address_window(TInt aIndex_b, TInt aIndex_H) const		{ return (*(Tpopup_wml_address_window_sig*)(GetFunction(EApiId_popup_wml_address_window)))(aIndex_b, aIndex_H); }

	inline TAknWindowLineLayout List_pane_elements__browser_single_graphic__Line_1(TInt aIndex_C) const		{ return (*(TList_pane_elements__browser_single_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_elements__browser_single_graphic__Line_1)))(aIndex_C); }

	inline TAknWindowLineLayout List_pane_elements__browser_single_graphic__Line_2() const		{ return (*(TList_pane_elements__browser_single_graphic__Line_2_sig*)(GetFunction(EApiId_List_pane_elements__browser_single_graphic__Line_2)))(); }

	inline TAknTextLineLayout List_pane_texts__browser_single_graphic__Line_1(TInt aIndex_C) const		{ return (*(TList_pane_texts__browser_single_graphic__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__browser_single_graphic__Line_1)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_8() const		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_8_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_8)))(); }

	inline TAknWindowLineLayout Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_9() const		{ return (*(TCamcorder_Still_Image_Viewfinder_descendants_and_elements_Line_9_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Viewfinder_descendants_and_elements_Line_9)))(); }

	inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_7(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_7_sig*)(GetFunction(EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_7)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Video_Viewfinder_descendants_and_elements_Line_8(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Viewfinder_descendants_and_elements_Line_8_sig*)(GetFunction(EApiId_Camcorder_Video_Viewfinder_descendants_and_elements_Line_8)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_7(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_7_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_7)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_8(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_8_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_8)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Video_Recording_descendants_and_elements_Line_9(TInt aIndex_C) const		{ return (*(TCamcorder_Video_Recording_descendants_and_elements_Line_9_sig*)(GetFunction(EApiId_Camcorder_Video_Recording_descendants_and_elements_Line_9)))(aIndex_C); }

	inline TAknTextLineLayout Camcorder_viewfinder_texts_Line_1(TInt aIndex_C) const		{ return (*(TCamcorder_viewfinder_texts_Line_1_sig*)(GetFunction(EApiId_Camcorder_viewfinder_texts_Line_1)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Still_Image_Burst_Mode_Post_recording_elements_Line_1(TInt aIndex_t) const		{ return (*(TCamcorder_Still_Image_Burst_Mode_Post_recording_elements_Line_1_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Burst_Mode_Post_recording_elements_Line_1)))(aIndex_t); }

	inline TAknWindowLineLayout Camcorder_Still_Image_Burst_Mode_Post_recording_elements_Line_2(TInt aIndex_l) const		{ return (*(TCamcorder_Still_Image_Burst_Mode_Post_recording_elements_Line_2_sig*)(GetFunction(EApiId_Camcorder_Still_Image_Burst_Mode_Post_recording_elements_Line_2)))(aIndex_l); }

	inline TAknWindowLineLayout grid_cams_pane() const		{ return (*(Tgrid_cams_pane_sig*)(GetFunction(EApiId_grid_cams_pane)))(); }

	inline TAknTextLineLayout Camcorder_Burst_Mode_texts_Line_1() const		{ return (*(TCamcorder_Burst_Mode_texts_Line_1_sig*)(GetFunction(EApiId_Camcorder_Burst_Mode_texts_Line_1)))(); }

	inline TAknWindowLineLayout Camcorder_Brightness_Contrast_descendants_and_elements_Line_1() const		{ return (*(TCamcorder_Brightness_Contrast_descendants_and_elements_Line_1_sig*)(GetFunction(EApiId_Camcorder_Brightness_Contrast_descendants_and_elements_Line_1)))(); }

	inline TAknWindowLineLayout navi_slider_pane() const		{ return (*(Tnavi_slider_pane_sig*)(GetFunction(EApiId_navi_slider_pane)))(); }

	inline TAknLayoutTableLimits Camcorder_Brightness_Contrast_descendants_and_elements_Limits() const		{ return (*(TCamcorder_Brightness_Contrast_descendants_and_elements_Limits_sig*)(GetFunction(EApiId_Camcorder_Brightness_Contrast_descendants_and_elements_Limits)))(); }

	inline TAknWindowLineLayout Camcorder_Brightness_Contrast_descendants_and_elements(TInt aLineIndex) const		{ return (*(TCamcorder_Brightness_Contrast_descendants_and_elements_sig*)(GetFunction(EApiId_Camcorder_Brightness_Contrast_descendants_and_elements)))(aLineIndex); }

	inline TAknWindowLineLayout Navi_Slider_pane_elements_Line_1() const		{ return (*(TNavi_Slider_pane_elements_Line_1_sig*)(GetFunction(EApiId_Navi_Slider_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Navi_Slider_pane_elements_Line_2() const		{ return (*(TNavi_Slider_pane_elements_Line_2_sig*)(GetFunction(EApiId_Navi_Slider_pane_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Navi_Slider_pane_elements_Limits() const		{ return (*(TNavi_Slider_pane_elements_Limits_sig*)(GetFunction(EApiId_Navi_Slider_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Navi_Slider_pane_elements(TInt aLineIndex) const		{ return (*(TNavi_Slider_pane_elements_sig*)(GetFunction(EApiId_Navi_Slider_pane_elements)))(aLineIndex); }

	inline TAknWindowLineLayout Camcorder_Manual_Exposure_descendants_and_elements_Line_1() const		{ return (*(TCamcorder_Manual_Exposure_descendants_and_elements_Line_1_sig*)(GetFunction(EApiId_Camcorder_Manual_Exposure_descendants_and_elements_Line_1)))(); }

	inline TAknWindowLineLayout Zooming_steps_sizes_Line_1() const		{ return (*(TZooming_steps_sizes_Line_1_sig*)(GetFunction(EApiId_Zooming_steps_sizes_Line_1)))(); }

	inline TAknWindowLineLayout Zooming_steps_sizes_Line_2() const		{ return (*(TZooming_steps_sizes_Line_2_sig*)(GetFunction(EApiId_Zooming_steps_sizes_Line_2)))(); }

	inline TAknWindowLineLayout Zooming_steps_sizes_Line_3() const		{ return (*(TZooming_steps_sizes_Line_3_sig*)(GetFunction(EApiId_Zooming_steps_sizes_Line_3)))(); }

	inline TAknWindowLineLayout Zooming_steps_sizes_Line_4() const		{ return (*(TZooming_steps_sizes_Line_4_sig*)(GetFunction(EApiId_Zooming_steps_sizes_Line_4)))(); }

	inline TAknWindowLineLayout Zooming_steps_sizes_Line_5() const		{ return (*(TZooming_steps_sizes_Line_5_sig*)(GetFunction(EApiId_Zooming_steps_sizes_Line_5)))(); }

	inline TAknWindowLineLayout Zooming_steps_sizes_Line_6() const		{ return (*(TZooming_steps_sizes_Line_6_sig*)(GetFunction(EApiId_Zooming_steps_sizes_Line_6)))(); }

	inline TAknWindowLineLayout Zooming_steps_sizes_Line_7() const		{ return (*(TZooming_steps_sizes_Line_7_sig*)(GetFunction(EApiId_Zooming_steps_sizes_Line_7)))(); }

	inline TAknWindowLineLayout Zooming_steps_sizes_Line_8() const		{ return (*(TZooming_steps_sizes_Line_8_sig*)(GetFunction(EApiId_Zooming_steps_sizes_Line_8)))(); }

	inline TAknWindowLineLayout Zooming_steps_sizes_Line_9() const		{ return (*(TZooming_steps_sizes_Line_9_sig*)(GetFunction(EApiId_Zooming_steps_sizes_Line_9)))(); }

	inline TAknWindowLineLayout Zooming_steps_sizes_Line_10() const		{ return (*(TZooming_steps_sizes_Line_10_sig*)(GetFunction(EApiId_Zooming_steps_sizes_Line_10)))(); }

	inline TAknWindowLineLayout Zooming_steps_sizes_Line_11() const		{ return (*(TZooming_steps_sizes_Line_11_sig*)(GetFunction(EApiId_Zooming_steps_sizes_Line_11)))(); }

	inline TAknWindowLineLayout Uplink_video_image__small__Line_1() const		{ return (*(TUplink_video_image__small__Line_1_sig*)(GetFunction(EApiId_Uplink_video_image__small__Line_1)))(); }

	inline TAknWindowLineLayout Uplink_video_image__small__Line_2() const		{ return (*(TUplink_video_image__small__Line_2_sig*)(GetFunction(EApiId_Uplink_video_image__small__Line_2)))(); }

	inline TAknWindowLineLayout Uplink_video_image__small__Line_3() const		{ return (*(TUplink_video_image__small__Line_3_sig*)(GetFunction(EApiId_Uplink_video_image__small__Line_3)))(); }

	inline TAknLayoutTableLimits Uplink_video_image__small__Limits() const		{ return (*(TUplink_video_image__small__Limits_sig*)(GetFunction(EApiId_Uplink_video_image__small__Limits)))(); }

	inline TAknWindowLineLayout Uplink_video_image__small_(TInt aLineIndex) const		{ return (*(TUplink_video_image__small__sig*)(GetFunction(EApiId_Uplink_video_image__small_)))(aLineIndex); }

	inline TAknWindowLineLayout Downlink_video_image_Line_4() const		{ return (*(TDownlink_video_image_Line_4_sig*)(GetFunction(EApiId_Downlink_video_image_Line_4)))(); }

	inline TAknWindowLineLayout downlink_stream_area() const		{ return (*(Tdownlink_stream_area_sig*)(GetFunction(EApiId_downlink_stream_area)))(); }

	inline TAknWindowLineLayout MIDP_text_elements_Line_1(TInt aIndex_t) const		{ return (*(TMIDP_text_elements_Line_1_sig*)(GetFunction(EApiId_MIDP_text_elements_Line_1)))(aIndex_t); }

	inline TAknWindowLineLayout MIDP_text_elements_Line_2() const		{ return (*(TMIDP_text_elements_Line_2_sig*)(GetFunction(EApiId_MIDP_text_elements_Line_2)))(); }

	inline TAknTextLineLayout MIDP_texts_Line_1(TInt aIndex_B) const		{ return (*(TMIDP_texts_Line_1_sig*)(GetFunction(EApiId_MIDP_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_MIDP_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_MIDP_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_MIDP_texts_Line_1)))(aNumberOfLinesShown); }

	// LAF Table : Camcorder Zooming factor pane elements v2
	inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_v2_Line_1(TInt aIndex_C) const		{ return (*(TCamcorder_Zooming_factor_pane_elements_v2_Line_1_sig*)(GetFunction(EApiId_Camcorder_Zooming_factor_pane_elements_v2_Line_1)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_v2_Line_2(TInt aIndex_C) const		{ return (*(TCamcorder_Zooming_factor_pane_elements_v2_Line_2_sig*)(GetFunction(EApiId_Camcorder_Zooming_factor_pane_elements_v2_Line_2)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_v2_Line_3(TInt aIndex_C) const		{ return (*(TCamcorder_Zooming_factor_pane_elements_v2_Line_3_sig*)(GetFunction(EApiId_Camcorder_Zooming_factor_pane_elements_v2_Line_3)))(aIndex_C); }

	inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_v2_Line_4(TInt aIndex_C) const		{ return (*(TCamcorder_Zooming_factor_pane_elements_v2_Line_4_sig*)(GetFunction(EApiId_Camcorder_Zooming_factor_pane_elements_v2_Line_4)))(aIndex_C); }

	inline TAknLayoutTableLimits Camcorder_Zooming_factor_pane_elements_v2_Limits() const		{ return (*(TCamcorder_Zooming_factor_pane_elements_v2_Limits_sig*)(GetFunction(EApiId_Camcorder_Zooming_factor_pane_elements_v2_Limits)))(); }

	inline TAknWindowLineLayout Camcorder_Zooming_factor_pane_elements_v2(TInt aLineIndex, TInt aIndex_C) const		{ return (*(TCamcorder_Zooming_factor_pane_elements_v2_sig*)(GetFunction(EApiId_Camcorder_Zooming_factor_pane_elements_v2)))(aLineIndex, aIndex_C); }

	// FM Radio layouts
	inline TAknWindowLineLayout cell_radio_pane(TInt aIndex_t) const		{ return (*(Tcell_radio_pane_sig*)(GetFunction(EApiId_cell_radio_pane)))(aIndex_t); }

	inline TAknWindowLineLayout FM_Radio_cell_elements_Line_1() const		{ return (*(TFM_Radio_cell_elements_Line_1_sig*)(GetFunction(EApiId_FM_Radio_cell_elements_Line_1)))(); }

	inline TAknWindowLineLayout grid_radio_pane() const		{ return (*(Tgrid_radio_pane_sig*)(GetFunction(EApiId_grid_radio_pane)))(); }

	inline TAknWindowLineLayout FM_Radio_elements_Line_2() const		{ return (*(TFM_Radio_elements_Line_2_sig*)(GetFunction(EApiId_FM_Radio_elements_Line_2)))(); }

	inline TAknWindowLineLayout FM_Radio_elements_Line_3() const		{ return (*(TFM_Radio_elements_Line_3_sig*)(GetFunction(EApiId_FM_Radio_elements_Line_3)))(); }

	inline TAknWindowLineLayout FM_Radio_elements_Line_4() const		{ return (*(TFM_Radio_elements_Line_4_sig*)(GetFunction(EApiId_FM_Radio_elements_Line_4)))(); }

	inline TAknWindowLineLayout FM_Radio_elements_Line_5() const		{ return (*(TFM_Radio_elements_Line_5_sig*)(GetFunction(EApiId_FM_Radio_elements_Line_5)))(); }

	inline TAknLayoutTableLimits FM_Radio_elements_Limits() const		{ return (*(TFM_Radio_elements_Limits_sig*)(GetFunction(EApiId_FM_Radio_elements_Limits)))(); }

	inline TAknWindowLineLayout FM_Radio_elements(TInt aLineIndex) const		{ return (*(TFM_Radio_elements_sig*)(GetFunction(EApiId_FM_Radio_elements)))(aLineIndex); }

	inline TAknTextLineLayout FM_Radio_texts_Line_1() const		{ return (*(TFM_Radio_texts_Line_1_sig*)(GetFunction(EApiId_FM_Radio_texts_Line_1)))(); }

	inline TAknTextLineLayout FM_Radio_texts_Line_2() const		{ return (*(TFM_Radio_texts_Line_2_sig*)(GetFunction(EApiId_FM_Radio_texts_Line_2)))(); }

	inline TAknTextLineLayout FM_Radio_texts_Line_3() const		{ return (*(TFM_Radio_texts_Line_3_sig*)(GetFunction(EApiId_FM_Radio_texts_Line_3)))(); }

	inline TAknTextLineLayout FM_Radio_texts_Line_4() const		{ return (*(TFM_Radio_texts_Line_4_sig*)(GetFunction(EApiId_FM_Radio_texts_Line_4)))(); }

	inline TAknTextLineLayout FM_Radio_texts_Line_5() const		{ return (*(TFM_Radio_texts_Line_5_sig*)(GetFunction(EApiId_FM_Radio_texts_Line_5)))(); }

	inline TAknLayoutTableLimits FM_Radio_texts_Limits() const		{ return (*(TFM_Radio_texts_Limits_sig*)(GetFunction(EApiId_FM_Radio_texts_Limits)))(); }

	inline TAknTextLineLayout FM_Radio_texts(TInt aLineIndex) const		{ return (*(TFM_Radio_texts_sig*)(GetFunction(EApiId_FM_Radio_texts)))(aLineIndex); }

	inline TAknWindowLineLayout aid_cams_cif_uncrop_pane() const		{ return (*(Taid_cams_cif_uncrop_pane_sig*)(GetFunction(EApiId_aid_cams_cif_uncrop_pane)))(); }

	inline TAknWindowLineLayout video_down_subqcif_pane() const		{ return (*(Tvideo_down_subqcif_pane_sig*)(GetFunction(EApiId_video_down_subqcif_pane)))(); }

private:
	CInstance();
	};

} // end of namespace AppLayout
#endif // APPLAYOUT_CDL
