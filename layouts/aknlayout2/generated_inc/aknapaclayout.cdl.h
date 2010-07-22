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

#ifndef AKNAPACLAYOUT_CDL
#define AKNAPACLAYOUT_CDL

#include <CdlEngine.h>
#include <aknapaclayout.cdl.common.h>

namespace AknApacLayout
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


// CDL API functions, as defined in aknapaclayout.cdl

// LAF Table : Find pane elements
inline TAknWindowLineLayout Find_pane_elements_Line_6()		{ return (*(TFind_pane_elements_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements_Line_6)))(); }

// LAF Table : Pop-up windows (main pane as parent)
inline TAknWindowLineLayout popup_fep_china_window(TInt aIsShownWithPopupWindows)		{ return (*(Tpopup_fep_china_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_fep_china_window)))(aIsShownWithPopupWindows); }

inline TAknWindowLineLayout popup_fep_china_pinyin_window(TInt aIndex_H)		{ return (*(Tpopup_fep_china_pinyin_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_fep_china_pinyin_window)))(aIndex_H); }

// LAF Table : Cursor graphics (16)
inline TAknWindowLineLayout Cursor_graphics__16__Line_1()		{ return (*(TCursor_graphics__16__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cursor_graphics__16__Line_1)))(); }

// LAF Table : Cut copy and paste highlight graphics (16)
inline TAknWindowLineLayout Cut_copy_and_paste_highlight_graphics__16__Line_1()		{ return (*(TCut_copy_and_paste_highlight_graphics__16__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cut_copy_and_paste_highlight_graphics__16__Line_1)))(); }

// LAF Table : Time and date entry graphics (16)
inline TAknWindowLineLayout Time_and_date_entry_graphics__16__Line_1()		{ return (*(TTime_and_date_entry_graphics__16__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Time_and_date_entry_graphics__16__Line_1)))(); }

// LAF Table : Pop up window grid pane descendants (APAC character)
inline TAknWindowLineLayout cell_apac_character_popup_pane(TInt aCommon1)		{ return (*(Tcell_apac_character_popup_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_apac_character_popup_pane)))(aCommon1); }

// LAF Table : Cell pane texts (pop-up APAC character)
inline TAknTextLineLayout Cell_pane_texts__pop_up_APAC_character__Line_1()		{ return (*(TCell_pane_texts__pop_up_APAC_character__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Cell_pane_texts__pop_up_APAC_character__Line_1)))(); }

// LAF Table : APAC character selection pop-up window descendants
inline TAknWindowLineLayout APAC_character_selection_pop_up_window_descendants_Line_1(TInt aIndex_t)		{ return (*(TAPAC_character_selection_pop_up_window_descendants_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_APAC_character_selection_pop_up_window_descendants_Line_1)))(aIndex_t); }

inline TAknWindowLineLayout grid_apac_character_popup_pane(TInt aIndex_t, TInt aIndex_H)		{ return (*(Tgrid_apac_character_popup_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_apac_character_popup_pane)))(aIndex_t, aIndex_H); }

// LAF Table : APAC character selection pop-up window elements
inline TAknWindowLineLayout APAC_character_selection_pop_up_window_elements_Line_1(TInt aIndex_t)		{ return (*(TAPAC_character_selection_pop_up_window_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_APAC_character_selection_pop_up_window_elements_Line_1)))(aIndex_t); }

inline TAknWindowLineLayout APAC_character_selection_pop_up_window_elements_Line_2(TInt aIndex_l, TInt aIndex_H)		{ return (*(TAPAC_character_selection_pop_up_window_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_APAC_character_selection_pop_up_window_elements_Line_2)))(aIndex_l, aIndex_H); }

// LAF Table : APAC character selection pop-up window graphics
inline TAknWindowLineLayout APAC_character_selection_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TAPAC_character_selection_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_APAC_character_selection_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout APAC_character_selection_pop_up_window_graphics_Line_2(const TRect& aParentRect, TInt aIndex_t)		{ return (*(TAPAC_character_selection_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_APAC_character_selection_pop_up_window_graphics_Line_2)))(aParentRect, aIndex_t); }

inline TAknWindowLineLayout APAC_character_selection_pop_up_window_graphics_Line_3(const TRect& aParentRect, TInt aIndex_t)		{ return (*(TAPAC_character_selection_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_APAC_character_selection_pop_up_window_graphics_Line_3)))(aParentRect, aIndex_t); }

inline TAknWindowLineLayout APAC_character_selection_pop_up_window_graphics_Line_4(const TRect& aParentRect, TInt aIndex_t)		{ return (*(TAPAC_character_selection_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_APAC_character_selection_pop_up_window_graphics_Line_4)))(aParentRect, aIndex_t); }

inline TAknWindowLineLayout APAC_character_selection_pop_up_window_graphics_Line_5(const TRect& aParentRect, TInt aIndex_t)		{ return (*(TAPAC_character_selection_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_APAC_character_selection_pop_up_window_graphics_Line_5)))(aParentRect, aIndex_t); }

inline TAknLayoutTableLimits APAC_character_selection_pop_up_window_graphics_SUB_TABLE_0_Limits()		{ return (*(TAPAC_character_selection_pop_up_window_graphics_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_APAC_character_selection_pop_up_window_graphics_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout APAC_character_selection_pop_up_window_graphics_SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect, TInt aIndex_t)		{ return (*(TAPAC_character_selection_pop_up_window_graphics_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_APAC_character_selection_pop_up_window_graphics_SUB_TABLE_0)))(aLineIndex, aParentRect, aIndex_t); }

// LAF Table : Chinese FEP pop-up window elements and descendants panes
inline TAknWindowLineLayout Chinese_FEP_pop_up_window_elements_and_descendants_panes_Line_1(TInt aPaneLayout)		{ return (*(TChinese_FEP_pop_up_window_elements_and_descendants_panes_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_pop_up_window_elements_and_descendants_panes_Line_1)))(aPaneLayout); }

inline TAknWindowLineLayout fep_china_entry_pane(TInt aPaneLayout)		{ return (*(Tfep_china_entry_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_fep_china_entry_pane)))(aPaneLayout); }

inline TAknWindowLineLayout fep_china_candidate_pane(TInt aPaneLayout)		{ return (*(Tfep_china_candidate_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_fep_china_candidate_pane)))(aPaneLayout); }

// LAF Table : Chinese FEP entry pane texts
inline TAknTextLineLayout Chinese_FEP_entry_pane_texts_Line_1(TInt aIndex_C, TInt aPaneLayout)		{ return (*(TChinese_FEP_entry_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_entry_pane_texts_Line_1)))(aIndex_C, aPaneLayout); }

// LAF Table : Chinese FEP candidate pane elements
inline TAknWindowLineLayout Chinese_FEP_candidate_pane_elements_Line_1(TInt aLeftRight)		{ return (*(TChinese_FEP_candidate_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_candidate_pane_elements_Line_1)))(aLeftRight); }

inline TAknWindowLineLayout Chinese_FEP_candidate_pane_elements_Line_2()		{ return (*(TChinese_FEP_candidate_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_candidate_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Chinese_FEP_candidate_pane_elements_Line_3()		{ return (*(TChinese_FEP_candidate_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_candidate_pane_elements_Line_3)))(); }

inline TAknWindowLineLayout fep_china_highlight_pane(TInt aIndex_l)		{ return (*(Tfep_china_highlight_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_fep_china_highlight_pane)))(aIndex_l); }

inline TAknLayoutTableLimits Chinese_FEP_candidate_pane_elements_SUB_TABLE_0_Limits()		{ return (*(TChinese_FEP_candidate_pane_elements_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_candidate_pane_elements_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Chinese_FEP_candidate_pane_elements_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TChinese_FEP_candidate_pane_elements_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_candidate_pane_elements_SUB_TABLE_0)))(aLineIndex); }

// LAF Table : Chinese FEP candidate pane texts
inline TAknTextLineLayout Chinese_FEP_candidate_pane_texts_Line_1(TInt aIndex_C, TInt aCommon1)		{ return (*(TChinese_FEP_candidate_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_candidate_pane_texts_Line_1)))(aIndex_C, aCommon1); }

inline TAknTextLineLayout Chinese_FEP_candidate_pane_texts_Line_2(TInt aCommon1)		{ return (*(TChinese_FEP_candidate_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_candidate_pane_texts_Line_2)))(aCommon1); }

// LAF Table : Chinese FEP pop up window graphics
inline TAknWindowLineLayout Chinese_FEP_pop_up_window_graphics_Line_1(const TRect& aParentRect, TInt aIsShownWithPopupWindows)		{ return (*(TChinese_FEP_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_pop_up_window_graphics_Line_1)))(aParentRect, aIsShownWithPopupWindows); }

inline TAknWindowLineLayout Chinese_FEP_pop_up_window_graphics_Line_2(const TRect& aParentRect, TInt aIsShownWithPopupWindows)		{ return (*(TChinese_FEP_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_pop_up_window_graphics_Line_2)))(aParentRect, aIsShownWithPopupWindows); }

inline TAknWindowLineLayout Chinese_FEP_pop_up_window_graphics_Line_3(const TRect& aParentRect, TInt aIsShownWithPopupWindows)		{ return (*(TChinese_FEP_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_pop_up_window_graphics_Line_3)))(aParentRect, aIsShownWithPopupWindows); }

inline TAknWindowLineLayout Chinese_FEP_pop_up_window_graphics_Line_4(const TRect& aParentRect, TInt aIsShownWithPopupWindows)		{ return (*(TChinese_FEP_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_pop_up_window_graphics_Line_4)))(aParentRect, aIsShownWithPopupWindows); }

inline TAknWindowLineLayout Chinese_FEP_pop_up_window_graphics_Line_5(const TRect& aParentRect, TInt aIsShownWithPopupWindows)		{ return (*(TChinese_FEP_pop_up_window_graphics_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_pop_up_window_graphics_Line_5)))(aParentRect, aIsShownWithPopupWindows); }

inline TAknLayoutTableLimits Chinese_FEP_pop_up_window_graphics_Limits()		{ return (*(TChinese_FEP_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Chinese_FEP_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect, TInt aIsShownWithPopupWindows)		{ return (*(TChinese_FEP_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_pop_up_window_graphics)))(aLineIndex, aParentRect, aIsShownWithPopupWindows); }

// LAF Table : Chinese FEP highlight elements
inline TAknWindowLineLayout Chinese_FEP_highlight_elements_Line_1()		{ return (*(TChinese_FEP_highlight_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_highlight_elements_Line_1)))(); }

inline TAknWindowLineLayout Chinese_FEP_highlight_elements_Line_2()		{ return (*(TChinese_FEP_highlight_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_highlight_elements_Line_2)))(); }

inline TAknWindowLineLayout Chinese_FEP_highlight_elements_Line_3()		{ return (*(TChinese_FEP_highlight_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_highlight_elements_Line_3)))(); }

inline TAknLayoutTableLimits Chinese_FEP_highlight_elements_Limits()		{ return (*(TChinese_FEP_highlight_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_highlight_elements_Limits)))(); }

inline TAknWindowLineLayout Chinese_FEP_highlight_elements(TInt aLineIndex)		{ return (*(TChinese_FEP_highlight_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_highlight_elements)))(aLineIndex); }

// LAF Table : Chinese FEP highlight texts
inline TAknTextLineLayout Chinese_FEP_highlight_texts_Line_1(TInt aIndex_C)		{ return (*(TChinese_FEP_highlight_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_highlight_texts_Line_1)))(aIndex_C); }

// LAF Table : Unselected string highlight
inline TAknWindowLineLayout Unselected_string_highlight_Line_1(TInt aPaneLayout)		{ return (*(TUnselected_string_highlight_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Unselected_string_highlight_Line_1)))(aPaneLayout); }

// LAF Table : Pinyin T9 candidate pop up window descendants panes
inline TAknWindowLineLayout list_single_fep_china_pinyin_pane(TInt aIndex_t)		{ return (*(Tlist_single_fep_china_pinyin_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_fep_china_pinyin_pane)))(aIndex_t); }

// LAF Table : List pane texts (fep china)
inline TAknTextLineLayout List_pane_texts__fep_china__Line_1(TInt aIndex_C)		{ return (*(TList_pane_texts__fep_china__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_texts__fep_china__Line_1)))(aIndex_C); }

// LAF Table : Pinyin T9 candidate pop up window graphics
inline TAknWindowLineLayout Pinyin_T9_candidate_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TPinyin_T9_candidate_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinyin_T9_candidate_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Pinyin_T9_candidate_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TPinyin_T9_candidate_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinyin_T9_candidate_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Pinyin_T9_candidate_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TPinyin_T9_candidate_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinyin_T9_candidate_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Pinyin_T9_candidate_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TPinyin_T9_candidate_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinyin_T9_candidate_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknLayoutTableLimits Pinyin_T9_candidate_pop_up_window_graphics_Limits()		{ return (*(TPinyin_T9_candidate_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinyin_T9_candidate_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Pinyin_T9_candidate_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TPinyin_T9_candidate_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinyin_T9_candidate_pop_up_window_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Pinyin T9 candidate highlight
inline TAknWindowLineLayout Pinyin_T9_candidate_highlight_Line_1(const TRect& aParentRect)		{ return (*(TPinyin_T9_candidate_highlight_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Pinyin_T9_candidate_highlight_Line_1)))(aParentRect); }

// From LAF Table : Pop-up windows (main pane as parent)
inline TAknWindowLineLayout popup_grid_apac_character_window(TInt aIndex_H)		{ return (*(Tpopup_grid_apac_character_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_grid_apac_character_window)))(aIndex_H); }

inline TAknWindowLineLayout popup_fep_japan_predictive_window(TInt aIndex_l, TInt aIndex_H)		{ return (*(Tpopup_fep_japan_predictive_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_fep_japan_predictive_window)))(aIndex_l, aIndex_H); }

inline TAknWindowLineLayout popup_fep_japan_candidate_window(TInt aIndex_l, TInt aIndex_W, TInt aIndex_H)		{ return (*(Tpopup_fep_japan_candidate_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_fep_japan_candidate_window)))(aIndex_l, aIndex_W, aIndex_H); }

// LAF Table : Candidateselection descendant panes
inline TAknWindowLineLayout candidate_pane(TInt aIndex_W, TInt aIndex_H)		{ return (*(Tcandidate_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_candidate_pane)))(aIndex_W, aIndex_H); }

// LAF Table : APAC specific list pane placing
inline TAknWindowLineLayout list_single_popup_jap_candidate_pane(TInt aIndex_t, TInt aIndex_W)		{ return (*(Tlist_single_popup_jap_candidate_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_single_popup_jap_candidate_pane)))(aIndex_t, aIndex_W); }

// LAF Table : Listpane text (single japan fep)
inline TAknTextLineLayout List_pane_text__single_japan_fep__Line_1(TInt aIndex_W)		{ return (*(TList_pane_text__single_japan_fep__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_text__single_japan_fep__Line_1)))(aIndex_W); }

// LAF Table : Predictive candidate selection list texts
inline TAknTextLineLayout Predictive_candidate_selection_list_texts_Line_1(TInt aIndex_C, TInt aIndex_B)		{ return (*(TPredictive_candidate_selection_list_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_candidate_selection_list_texts_Line_1)))(aIndex_C, aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Predictive_candidate_selection_list_texts_Line_1(TInt aIndex_C, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Predictive_candidate_selection_list_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Predictive_candidate_selection_list_texts_Line_1)))(aIndex_C, aNumberOfLinesShown); }

// LAF Table : Predictive candidate selection highlight
inline TAknWindowLineLayout Predictive_candidate_selection_highlight_Line_1()		{ return (*(TPredictive_candidate_selection_highlight_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_candidate_selection_highlight_Line_1)))(); }

// LAF Table : Predictive candidate selection popup window graphics
inline TAknWindowLineLayout Predictive_candidate_selection_popup_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TPredictive_candidate_selection_popup_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_candidate_selection_popup_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Predictive_candidate_selection_popup_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TPredictive_candidate_selection_popup_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_candidate_selection_popup_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Predictive_candidate_selection_popup_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TPredictive_candidate_selection_popup_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_candidate_selection_popup_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Predictive_candidate_selection_popup_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TPredictive_candidate_selection_popup_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_candidate_selection_popup_window_graphics_Line_4)))(aParentRect); }

inline TAknLayoutTableLimits Predictive_candidate_selection_popup_window_graphics_Limits()		{ return (*(TPredictive_candidate_selection_popup_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_candidate_selection_popup_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Predictive_candidate_selection_popup_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TPredictive_candidate_selection_popup_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Predictive_candidate_selection_popup_window_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Candidate selection list texts
inline TAknTextLineLayout Candidate_selection_list_texts_Line_1()		{ return (*(TCandidate_selection_list_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_list_texts_Line_1)))(); }

// LAF Table : Candidate selection pop-up window graphics
inline TAknWindowLineLayout Candidate_selection_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TCandidate_selection_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Candidate_selection_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TCandidate_selection_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Candidate_selection_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TCandidate_selection_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Candidate_selection_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TCandidate_selection_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknLayoutTableLimits Candidate_selection_pop_up_window_graphics_Limits()		{ return (*(TCandidate_selection_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Candidate_selection_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TCandidate_selection_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_pop_up_window_graphics)))(aLineIndex, aParentRect); }

// LAF Table : Chinese FEP Zi popup window elements and descendants panes
inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_elements_and_descendants_panes_Line_1()		{ return (*(TChinese_FEP_Zi_popup_window_elements_and_descendants_panes_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_elements_and_descendants_panes_Line_1)))(); }

inline TAknWindowLineLayout fep_china_zi_entry_pane(TInt aIndex_W)		{ return (*(Tfep_china_zi_entry_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_fep_china_zi_entry_pane)))(aIndex_W); }

inline TAknWindowLineLayout fep_china_zi_candidate_pane(TInt aIndex_t)		{ return (*(Tfep_china_zi_candidate_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_fep_china_zi_candidate_pane)))(aIndex_t); }

// LAF Table : Chinese FEP Zi entry pane elements
inline TAknWindowLineLayout Chinese_FEP_Zi_entry_pane_elements_Line_1()		{ return (*(TChinese_FEP_Zi_entry_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_entry_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Chinese_FEP_Zi_entry_pane_elements_Line_2()		{ return (*(TChinese_FEP_Zi_entry_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_entry_pane_elements_Line_2)))(); }

inline TAknLayoutTableLimits Chinese_FEP_Zi_entry_pane_elements_Limits()		{ return (*(TChinese_FEP_Zi_entry_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_entry_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Chinese_FEP_Zi_entry_pane_elements(TInt aLineIndex)		{ return (*(TChinese_FEP_Zi_entry_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_entry_pane_elements)))(aLineIndex); }

// LAF Table : Chinese FEP Zi entry pane texts
inline TAknTextLineLayout Chinese_FEP_Zi_entry_pane_texts_Line_1(TInt aIndex_C)		{ return (*(TChinese_FEP_Zi_entry_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_entry_pane_texts_Line_1)))(aIndex_C); }

// LAF Table : Chinese FEP Zi candidate pane elements
inline TAknWindowLineLayout Chinese_FEP_Zi_candidate_pane_elements_Line_1()		{ return (*(TChinese_FEP_Zi_candidate_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_candidate_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Chinese_FEP_Zi_candidate_pane_elements_Line_2()		{ return (*(TChinese_FEP_Zi_candidate_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_candidate_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Chinese_FEP_Zi_candidate_pane_elements_Line_3()		{ return (*(TChinese_FEP_Zi_candidate_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_candidate_pane_elements_Line_3)))(); }

inline TAknWindowLineLayout Chinese_FEP_Zi_candidate_pane_elements_Line_4()		{ return (*(TChinese_FEP_Zi_candidate_pane_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_candidate_pane_elements_Line_4)))(); }

inline TAknWindowLineLayout fep_china_zi_highlight_pane()		{ return (*(Tfep_china_zi_highlight_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_fep_china_zi_highlight_pane)))(); }

inline TAknLayoutTableLimits Chinese_FEP_Zi_candidate_pane_elements_Limits()		{ return (*(TChinese_FEP_Zi_candidate_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_candidate_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Chinese_FEP_Zi_candidate_pane_elements(TInt aLineIndex)		{ return (*(TChinese_FEP_Zi_candidate_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_candidate_pane_elements)))(aLineIndex); }

// LAF Table : Chinese FEP Zi candidate pane texts
inline TAknTextLineLayout Chinese_FEP_Zi_candidate_pane_texts_Line_1()		{ return (*(TChinese_FEP_Zi_candidate_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_candidate_pane_texts_Line_1)))(); }

inline TAknTextLineLayout Chinese_FEP_Zi_candidate_pane_texts_Line_2()		{ return (*(TChinese_FEP_Zi_candidate_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_candidate_pane_texts_Line_2)))(); }

inline TAknTextLineLayout Chinese_FEP_Zi_candidate_pane_texts_Line_3()		{ return (*(TChinese_FEP_Zi_candidate_pane_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_candidate_pane_texts_Line_3)))(); }

inline TAknLayoutTableLimits Chinese_FEP_Zi_candidate_pane_texts_Limits()		{ return (*(TChinese_FEP_Zi_candidate_pane_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_candidate_pane_texts_Limits)))(); }

inline TAknTextLineLayout Chinese_FEP_Zi_candidate_pane_texts(TInt aLineIndex)		{ return (*(TChinese_FEP_Zi_candidate_pane_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_candidate_pane_texts)))(aLineIndex); }

// LAF Table : Chinese FEP Zi popup window graphics (part 1)
inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__Line_1()		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__Line_1)))(); }

inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__Line_2(TInt aIndex_t)		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__Line_2)))(aIndex_t); }

inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__Line_3(TInt aIndex_t)		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__Line_3)))(aIndex_t); }

inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__Line_4()		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__Line_4)))(); }

inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__Line_5()		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__Line_5)))(); }

inline TAknLayoutTableLimits Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0_Limits()		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0(TInt aLineIndex, TInt aIndex_t)		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0)))(aLineIndex, aIndex_t); }

inline TAknLayoutTableLimits Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1_Limits()		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1_Limits)))(); }

inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1(TInt aLineIndex)		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1)))(aLineIndex); }

// LAF Table : Chinese FEP Zi popup window graphics (part 2)
inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_2__Line_1(TInt aIndex_t)		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2__Line_1)))(aIndex_t); }

inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_2__Line_2(TInt aIndex_t)		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2__Line_2)))(aIndex_t); }

inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_2__Line_3(TInt aIndex_t)		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2__Line_3)))(aIndex_t); }

inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_2__Line_4(TInt aIndex_t)		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2__Line_4)))(aIndex_t); }

inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_2__Line_5(TInt aIndex_t)		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2__Line_5)))(aIndex_t); }

inline TAknLayoutTableLimits Chinese_FEP_Zi_popup_window_graphics__part_2__Limits()		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2__Limits)))(); }

inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_2_(TInt aLineIndex, TInt aIndex_t)		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2_)))(aLineIndex, aIndex_t); }

// LAF Table : Input highlight elements
inline TAknWindowLineLayout Input_highlight_elements_Line_1()		{ return (*(TInput_highlight_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_highlight_elements_Line_1)))(); }

// LAF Table : Candidate selection
inline TAknWindowLineLayout Candidate_selection_Line_1(const TRect& aParentRect)		{ return (*(TCandidate_selection_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Candidate_selection_Line_2(const TRect& aParentRect)		{ return (*(TCandidate_selection_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_Line_2)))(aParentRect); }

inline TAknLayoutTableLimits Candidate_selection_Limits()		{ return (*(TCandidate_selection_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_Limits)))(); }

inline TAknWindowLineLayout Candidate_selection(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TCandidate_selection_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection)))(aLineIndex, aParentRect); }

// From LAF Table : Pop-up windows (main pane as parent)
inline TAknWindowLineLayout popup_fep_china_zi_window(TInt aCommon1)		{ return (*(Tpopup_fep_china_zi_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_fep_china_zi_window)))(aCommon1); }

// LAF Table : Find pop-up window elements
inline TAknWindowLineLayout Find_pop_up_window_elements_Line_5()		{ return (*(TFind_pop_up_window_elements_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pop_up_window_elements_Line_5)))(); }

inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_Line_1()		{ return (*(TChinese_universal_FEP_pop_up_window_elements_and_descendants_panes_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_Line_1)))(); }

inline TAknWindowLineLayout fep_china_uni_entry_pane()		{ return (*(Tfep_china_uni_entry_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_fep_china_uni_entry_pane)))(); }

inline TAknWindowLineLayout fep_china_uni_candidate_pane(TInt aIndex_t)		{ return (*(Tfep_china_uni_candidate_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_fep_china_uni_candidate_pane)))(aIndex_t); }

inline TAknLayoutTableLimits Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0_Limits()		{ return (*(TChinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0_Limits)))(); }

inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TChinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0)))(aLineIndex); }

inline TAknWindowLineLayout Chinese_universal_FEP_entry_pane_elements_Line_1()		{ return (*(TChinese_universal_FEP_entry_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_entry_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Chinese_universal_FEP_entry_pane_elements_Line_2()		{ return (*(TChinese_universal_FEP_entry_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_entry_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout fep_entry_item_pane()		{ return (*(Tfep_entry_item_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_fep_entry_item_pane)))(); }

inline TAknLayoutTableLimits Chinese_universal_FEP_entry_pane_elements_Limits()		{ return (*(TChinese_universal_FEP_entry_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_entry_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Chinese_universal_FEP_entry_pane_elements(TInt aLineIndex)		{ return (*(TChinese_universal_FEP_entry_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_entry_pane_elements)))(aLineIndex); }

inline TAknTextLineLayout Chinese_universal_FEP_entry_pane_texts_Line_1(TInt aIndex_C)		{ return (*(TChinese_universal_FEP_entry_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_entry_pane_texts_Line_1)))(aIndex_C); }

inline TAknWindowLineLayout Chinese_universal_FEPcandidate_pane_elements_Line_1()		{ return (*(TChinese_universal_FEPcandidate_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEPcandidate_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Chinese_universal_FEPcandidate_pane_elements_Line_2()		{ return (*(TChinese_universal_FEPcandidate_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEPcandidate_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Chinese_universal_FEPcandidate_pane_elements_Line_3()		{ return (*(TChinese_universal_FEPcandidate_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEPcandidate_pane_elements_Line_3)))(); }

inline TAknWindowLineLayout Chinese_universal_FEPcandidate_pane_elements_Line_4()		{ return (*(TChinese_universal_FEPcandidate_pane_elements_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEPcandidate_pane_elements_Line_4)))(); }

inline TAknWindowLineLayout fep_candidate_item_pane()		{ return (*(Tfep_candidate_item_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_fep_candidate_item_pane)))(); }

inline TAknLayoutTableLimits Chinese_universal_FEPcandidate_pane_elements_Limits()		{ return (*(TChinese_universal_FEPcandidate_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEPcandidate_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Chinese_universal_FEPcandidate_pane_elements(TInt aLineIndex)		{ return (*(TChinese_universal_FEPcandidate_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEPcandidate_pane_elements)))(aLineIndex); }

inline TAknTextLineLayout Chinese_universal_FEP_candidate_pane_texts_Line_1()		{ return (*(TChinese_universal_FEP_candidate_pane_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_candidate_pane_texts_Line_1)))(); }

inline TAknTextLineLayout Chinese_universal_FEP_candidate_pane_texts_Line_2()		{ return (*(TChinese_universal_FEP_candidate_pane_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_candidate_pane_texts_Line_2)))(); }

inline TAknTextLineLayout Chinese_universal_FEP_candidate_pane_texts_Line_3()		{ return (*(TChinese_universal_FEP_candidate_pane_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_candidate_pane_texts_Line_3)))(); }

inline TAknLayoutTableLimits Chinese_universal_FEP_candidate_pane_texts_Limits()		{ return (*(TChinese_universal_FEP_candidate_pane_texts_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_candidate_pane_texts_Limits)))(); }

inline TAknTextLineLayout Chinese_universal_FEP_candidate_pane_texts(TInt aLineIndex)		{ return (*(TChinese_universal_FEP_candidate_pane_texts_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_candidate_pane_texts)))(aLineIndex); }

inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_graphics_Line_1(const TRect& aParentRect)		{ return (*(TChinese_universal_FEP_pop_up_window_graphics_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_pop_up_window_graphics_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_graphics_Line_2(const TRect& aParentRect)		{ return (*(TChinese_universal_FEP_pop_up_window_graphics_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_pop_up_window_graphics_Line_2)))(aParentRect); }

inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_graphics_Line_3(const TRect& aParentRect)		{ return (*(TChinese_universal_FEP_pop_up_window_graphics_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_pop_up_window_graphics_Line_3)))(aParentRect); }

inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_graphics_Line_4(const TRect& aParentRect)		{ return (*(TChinese_universal_FEP_pop_up_window_graphics_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_pop_up_window_graphics_Line_4)))(aParentRect); }

inline TAknLayoutTableLimits Chinese_universal_FEP_pop_up_window_graphics_Limits()		{ return (*(TChinese_universal_FEP_pop_up_window_graphics_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_pop_up_window_graphics_Limits)))(); }

inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TChinese_universal_FEP_pop_up_window_graphics_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_universal_FEP_pop_up_window_graphics)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout Input_highlight_Line_1(const TRect& aParentRect)		{ return (*(TInput_highlight_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Input_highlight_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Candidate_selection_highlight_Line_1(const TRect& aParentRect)		{ return (*(TCandidate_selection_highlight_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_highlight_Line_1)))(aParentRect); }

inline TAknWindowLineLayout Candidate_selection_highlight_Line_2(const TRect& aParentRect)		{ return (*(TCandidate_selection_highlight_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_highlight_Line_2)))(aParentRect); }

inline TAknLayoutTableLimits Candidate_selection_highlight_Limits()		{ return (*(TCandidate_selection_highlight_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_highlight_Limits)))(); }

inline TAknWindowLineLayout Candidate_selection_highlight(TInt aLineIndex, const TRect& aParentRect)		{ return (*(TCandidate_selection_highlight_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Candidate_selection_highlight)))(aLineIndex, aParentRect); }

inline TAknWindowLineLayout popup_fep_china_uni_window(TInt aIndex_l, TInt aIndex_H)		{ return (*(Tpopup_fep_china_uni_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_fep_china_uni_window)))(aIndex_l, aIndex_H); }



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

// CDL API functions, as defined in aknapaclayout.cdl

	// LAF Table : Find pane elements
	inline TAknWindowLineLayout Find_pane_elements_Line_6() const		{ return (*(TFind_pane_elements_Line_6_sig*)(GetFunction(EApiId_Find_pane_elements_Line_6)))(); }

	// LAF Table : Pop-up windows (main pane as parent)
	inline TAknWindowLineLayout popup_fep_china_window(TInt aIsShownWithPopupWindows) const		{ return (*(Tpopup_fep_china_window_sig*)(GetFunction(EApiId_popup_fep_china_window)))(aIsShownWithPopupWindows); }

	inline TAknWindowLineLayout popup_fep_china_pinyin_window(TInt aIndex_H) const		{ return (*(Tpopup_fep_china_pinyin_window_sig*)(GetFunction(EApiId_popup_fep_china_pinyin_window)))(aIndex_H); }

	// LAF Table : Cursor graphics (16)
	inline TAknWindowLineLayout Cursor_graphics__16__Line_1() const		{ return (*(TCursor_graphics__16__Line_1_sig*)(GetFunction(EApiId_Cursor_graphics__16__Line_1)))(); }

	// LAF Table : Cut copy and paste highlight graphics (16)
	inline TAknWindowLineLayout Cut_copy_and_paste_highlight_graphics__16__Line_1() const		{ return (*(TCut_copy_and_paste_highlight_graphics__16__Line_1_sig*)(GetFunction(EApiId_Cut_copy_and_paste_highlight_graphics__16__Line_1)))(); }

	// LAF Table : Time and date entry graphics (16)
	inline TAknWindowLineLayout Time_and_date_entry_graphics__16__Line_1() const		{ return (*(TTime_and_date_entry_graphics__16__Line_1_sig*)(GetFunction(EApiId_Time_and_date_entry_graphics__16__Line_1)))(); }

	// LAF Table : Pop up window grid pane descendants (APAC character)
	inline TAknWindowLineLayout cell_apac_character_popup_pane(TInt aCommon1) const		{ return (*(Tcell_apac_character_popup_pane_sig*)(GetFunction(EApiId_cell_apac_character_popup_pane)))(aCommon1); }

	// LAF Table : Cell pane texts (pop-up APAC character)
	inline TAknTextLineLayout Cell_pane_texts__pop_up_APAC_character__Line_1() const		{ return (*(TCell_pane_texts__pop_up_APAC_character__Line_1_sig*)(GetFunction(EApiId_Cell_pane_texts__pop_up_APAC_character__Line_1)))(); }

	// LAF Table : APAC character selection pop-up window descendants
	inline TAknWindowLineLayout APAC_character_selection_pop_up_window_descendants_Line_1(TInt aIndex_t) const		{ return (*(TAPAC_character_selection_pop_up_window_descendants_Line_1_sig*)(GetFunction(EApiId_APAC_character_selection_pop_up_window_descendants_Line_1)))(aIndex_t); }

	inline TAknWindowLineLayout grid_apac_character_popup_pane(TInt aIndex_t, TInt aIndex_H) const		{ return (*(Tgrid_apac_character_popup_pane_sig*)(GetFunction(EApiId_grid_apac_character_popup_pane)))(aIndex_t, aIndex_H); }

	// LAF Table : APAC character selection pop-up window elements
	inline TAknWindowLineLayout APAC_character_selection_pop_up_window_elements_Line_1(TInt aIndex_t) const		{ return (*(TAPAC_character_selection_pop_up_window_elements_Line_1_sig*)(GetFunction(EApiId_APAC_character_selection_pop_up_window_elements_Line_1)))(aIndex_t); }

	inline TAknWindowLineLayout APAC_character_selection_pop_up_window_elements_Line_2(TInt aIndex_l, TInt aIndex_H) const		{ return (*(TAPAC_character_selection_pop_up_window_elements_Line_2_sig*)(GetFunction(EApiId_APAC_character_selection_pop_up_window_elements_Line_2)))(aIndex_l, aIndex_H); }

	// LAF Table : APAC character selection pop-up window graphics
	inline TAknWindowLineLayout APAC_character_selection_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TAPAC_character_selection_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_APAC_character_selection_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout APAC_character_selection_pop_up_window_graphics_Line_2(const TRect& aParentRect, TInt aIndex_t) const		{ return (*(TAPAC_character_selection_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_APAC_character_selection_pop_up_window_graphics_Line_2)))(aParentRect, aIndex_t); }

	inline TAknWindowLineLayout APAC_character_selection_pop_up_window_graphics_Line_3(const TRect& aParentRect, TInt aIndex_t) const		{ return (*(TAPAC_character_selection_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_APAC_character_selection_pop_up_window_graphics_Line_3)))(aParentRect, aIndex_t); }

	inline TAknWindowLineLayout APAC_character_selection_pop_up_window_graphics_Line_4(const TRect& aParentRect, TInt aIndex_t) const		{ return (*(TAPAC_character_selection_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_APAC_character_selection_pop_up_window_graphics_Line_4)))(aParentRect, aIndex_t); }

	inline TAknWindowLineLayout APAC_character_selection_pop_up_window_graphics_Line_5(const TRect& aParentRect, TInt aIndex_t) const		{ return (*(TAPAC_character_selection_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_APAC_character_selection_pop_up_window_graphics_Line_5)))(aParentRect, aIndex_t); }

	inline TAknLayoutTableLimits APAC_character_selection_pop_up_window_graphics_SUB_TABLE_0_Limits() const		{ return (*(TAPAC_character_selection_pop_up_window_graphics_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_APAC_character_selection_pop_up_window_graphics_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout APAC_character_selection_pop_up_window_graphics_SUB_TABLE_0(TInt aLineIndex, const TRect& aParentRect, TInt aIndex_t) const		{ return (*(TAPAC_character_selection_pop_up_window_graphics_SUB_TABLE_0_sig*)(GetFunction(EApiId_APAC_character_selection_pop_up_window_graphics_SUB_TABLE_0)))(aLineIndex, aParentRect, aIndex_t); }

	// LAF Table : Chinese FEP pop-up window elements and descendants panes
	inline TAknWindowLineLayout Chinese_FEP_pop_up_window_elements_and_descendants_panes_Line_1(TInt aPaneLayout) const		{ return (*(TChinese_FEP_pop_up_window_elements_and_descendants_panes_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_pop_up_window_elements_and_descendants_panes_Line_1)))(aPaneLayout); }

	inline TAknWindowLineLayout fep_china_entry_pane(TInt aPaneLayout) const		{ return (*(Tfep_china_entry_pane_sig*)(GetFunction(EApiId_fep_china_entry_pane)))(aPaneLayout); }

	inline TAknWindowLineLayout fep_china_candidate_pane(TInt aPaneLayout) const		{ return (*(Tfep_china_candidate_pane_sig*)(GetFunction(EApiId_fep_china_candidate_pane)))(aPaneLayout); }

	// LAF Table : Chinese FEP entry pane texts
	inline TAknTextLineLayout Chinese_FEP_entry_pane_texts_Line_1(TInt aIndex_C, TInt aPaneLayout) const		{ return (*(TChinese_FEP_entry_pane_texts_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_entry_pane_texts_Line_1)))(aIndex_C, aPaneLayout); }

	// LAF Table : Chinese FEP candidate pane elements
	inline TAknWindowLineLayout Chinese_FEP_candidate_pane_elements_Line_1(TInt aLeftRight) const		{ return (*(TChinese_FEP_candidate_pane_elements_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_candidate_pane_elements_Line_1)))(aLeftRight); }

	inline TAknWindowLineLayout Chinese_FEP_candidate_pane_elements_Line_2() const		{ return (*(TChinese_FEP_candidate_pane_elements_Line_2_sig*)(GetFunction(EApiId_Chinese_FEP_candidate_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Chinese_FEP_candidate_pane_elements_Line_3() const		{ return (*(TChinese_FEP_candidate_pane_elements_Line_3_sig*)(GetFunction(EApiId_Chinese_FEP_candidate_pane_elements_Line_3)))(); }

	inline TAknWindowLineLayout fep_china_highlight_pane(TInt aIndex_l) const		{ return (*(Tfep_china_highlight_pane_sig*)(GetFunction(EApiId_fep_china_highlight_pane)))(aIndex_l); }

	inline TAknLayoutTableLimits Chinese_FEP_candidate_pane_elements_SUB_TABLE_0_Limits() const		{ return (*(TChinese_FEP_candidate_pane_elements_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Chinese_FEP_candidate_pane_elements_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Chinese_FEP_candidate_pane_elements_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TChinese_FEP_candidate_pane_elements_SUB_TABLE_0_sig*)(GetFunction(EApiId_Chinese_FEP_candidate_pane_elements_SUB_TABLE_0)))(aLineIndex); }

	// LAF Table : Chinese FEP candidate pane texts
	inline TAknTextLineLayout Chinese_FEP_candidate_pane_texts_Line_1(TInt aIndex_C, TInt aCommon1) const		{ return (*(TChinese_FEP_candidate_pane_texts_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_candidate_pane_texts_Line_1)))(aIndex_C, aCommon1); }

	inline TAknTextLineLayout Chinese_FEP_candidate_pane_texts_Line_2(TInt aCommon1) const		{ return (*(TChinese_FEP_candidate_pane_texts_Line_2_sig*)(GetFunction(EApiId_Chinese_FEP_candidate_pane_texts_Line_2)))(aCommon1); }

	// LAF Table : Chinese FEP pop up window graphics
	inline TAknWindowLineLayout Chinese_FEP_pop_up_window_graphics_Line_1(const TRect& aParentRect, TInt aIsShownWithPopupWindows) const		{ return (*(TChinese_FEP_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_pop_up_window_graphics_Line_1)))(aParentRect, aIsShownWithPopupWindows); }

	inline TAknWindowLineLayout Chinese_FEP_pop_up_window_graphics_Line_2(const TRect& aParentRect, TInt aIsShownWithPopupWindows) const		{ return (*(TChinese_FEP_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Chinese_FEP_pop_up_window_graphics_Line_2)))(aParentRect, aIsShownWithPopupWindows); }

	inline TAknWindowLineLayout Chinese_FEP_pop_up_window_graphics_Line_3(const TRect& aParentRect, TInt aIsShownWithPopupWindows) const		{ return (*(TChinese_FEP_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Chinese_FEP_pop_up_window_graphics_Line_3)))(aParentRect, aIsShownWithPopupWindows); }

	inline TAknWindowLineLayout Chinese_FEP_pop_up_window_graphics_Line_4(const TRect& aParentRect, TInt aIsShownWithPopupWindows) const		{ return (*(TChinese_FEP_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Chinese_FEP_pop_up_window_graphics_Line_4)))(aParentRect, aIsShownWithPopupWindows); }

	inline TAknWindowLineLayout Chinese_FEP_pop_up_window_graphics_Line_5(const TRect& aParentRect, TInt aIsShownWithPopupWindows) const		{ return (*(TChinese_FEP_pop_up_window_graphics_Line_5_sig*)(GetFunction(EApiId_Chinese_FEP_pop_up_window_graphics_Line_5)))(aParentRect, aIsShownWithPopupWindows); }

	inline TAknLayoutTableLimits Chinese_FEP_pop_up_window_graphics_Limits() const		{ return (*(TChinese_FEP_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Chinese_FEP_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Chinese_FEP_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect, TInt aIsShownWithPopupWindows) const		{ return (*(TChinese_FEP_pop_up_window_graphics_sig*)(GetFunction(EApiId_Chinese_FEP_pop_up_window_graphics)))(aLineIndex, aParentRect, aIsShownWithPopupWindows); }

	// LAF Table : Chinese FEP highlight elements
	inline TAknWindowLineLayout Chinese_FEP_highlight_elements_Line_1() const		{ return (*(TChinese_FEP_highlight_elements_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_highlight_elements_Line_1)))(); }

	inline TAknWindowLineLayout Chinese_FEP_highlight_elements_Line_2() const		{ return (*(TChinese_FEP_highlight_elements_Line_2_sig*)(GetFunction(EApiId_Chinese_FEP_highlight_elements_Line_2)))(); }

	inline TAknWindowLineLayout Chinese_FEP_highlight_elements_Line_3() const		{ return (*(TChinese_FEP_highlight_elements_Line_3_sig*)(GetFunction(EApiId_Chinese_FEP_highlight_elements_Line_3)))(); }

	inline TAknLayoutTableLimits Chinese_FEP_highlight_elements_Limits() const		{ return (*(TChinese_FEP_highlight_elements_Limits_sig*)(GetFunction(EApiId_Chinese_FEP_highlight_elements_Limits)))(); }

	inline TAknWindowLineLayout Chinese_FEP_highlight_elements(TInt aLineIndex) const		{ return (*(TChinese_FEP_highlight_elements_sig*)(GetFunction(EApiId_Chinese_FEP_highlight_elements)))(aLineIndex); }

	// LAF Table : Chinese FEP highlight texts
	inline TAknTextLineLayout Chinese_FEP_highlight_texts_Line_1(TInt aIndex_C) const		{ return (*(TChinese_FEP_highlight_texts_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_highlight_texts_Line_1)))(aIndex_C); }

	// LAF Table : Unselected string highlight
	inline TAknWindowLineLayout Unselected_string_highlight_Line_1(TInt aPaneLayout) const		{ return (*(TUnselected_string_highlight_Line_1_sig*)(GetFunction(EApiId_Unselected_string_highlight_Line_1)))(aPaneLayout); }

	// LAF Table : Pinyin T9 candidate pop up window descendants panes
	inline TAknWindowLineLayout list_single_fep_china_pinyin_pane(TInt aIndex_t) const		{ return (*(Tlist_single_fep_china_pinyin_pane_sig*)(GetFunction(EApiId_list_single_fep_china_pinyin_pane)))(aIndex_t); }

	// LAF Table : List pane texts (fep china)
	inline TAknTextLineLayout List_pane_texts__fep_china__Line_1(TInt aIndex_C) const		{ return (*(TList_pane_texts__fep_china__Line_1_sig*)(GetFunction(EApiId_List_pane_texts__fep_china__Line_1)))(aIndex_C); }

	// LAF Table : Pinyin T9 candidate pop up window graphics
	inline TAknWindowLineLayout Pinyin_T9_candidate_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TPinyin_T9_candidate_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Pinyin_T9_candidate_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Pinyin_T9_candidate_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TPinyin_T9_candidate_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Pinyin_T9_candidate_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Pinyin_T9_candidate_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TPinyin_T9_candidate_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Pinyin_T9_candidate_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Pinyin_T9_candidate_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TPinyin_T9_candidate_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Pinyin_T9_candidate_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknLayoutTableLimits Pinyin_T9_candidate_pop_up_window_graphics_Limits() const		{ return (*(TPinyin_T9_candidate_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Pinyin_T9_candidate_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Pinyin_T9_candidate_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TPinyin_T9_candidate_pop_up_window_graphics_sig*)(GetFunction(EApiId_Pinyin_T9_candidate_pop_up_window_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Pinyin T9 candidate highlight
	inline TAknWindowLineLayout Pinyin_T9_candidate_highlight_Line_1(const TRect& aParentRect) const		{ return (*(TPinyin_T9_candidate_highlight_Line_1_sig*)(GetFunction(EApiId_Pinyin_T9_candidate_highlight_Line_1)))(aParentRect); }

	// From LAF Table : Pop-up windows (main pane as parent)
	inline TAknWindowLineLayout popup_grid_apac_character_window(TInt aIndex_H) const		{ return (*(Tpopup_grid_apac_character_window_sig*)(GetFunction(EApiId_popup_grid_apac_character_window)))(aIndex_H); }

	inline TAknWindowLineLayout popup_fep_japan_predictive_window(TInt aIndex_l, TInt aIndex_H) const		{ return (*(Tpopup_fep_japan_predictive_window_sig*)(GetFunction(EApiId_popup_fep_japan_predictive_window)))(aIndex_l, aIndex_H); }

	inline TAknWindowLineLayout popup_fep_japan_candidate_window(TInt aIndex_l, TInt aIndex_W, TInt aIndex_H) const		{ return (*(Tpopup_fep_japan_candidate_window_sig*)(GetFunction(EApiId_popup_fep_japan_candidate_window)))(aIndex_l, aIndex_W, aIndex_H); }

	// LAF Table : Candidateselection descendant panes
	inline TAknWindowLineLayout candidate_pane(TInt aIndex_W, TInt aIndex_H) const		{ return (*(Tcandidate_pane_sig*)(GetFunction(EApiId_candidate_pane)))(aIndex_W, aIndex_H); }

	// LAF Table : APAC specific list pane placing
	inline TAknWindowLineLayout list_single_popup_jap_candidate_pane(TInt aIndex_t, TInt aIndex_W) const		{ return (*(Tlist_single_popup_jap_candidate_pane_sig*)(GetFunction(EApiId_list_single_popup_jap_candidate_pane)))(aIndex_t, aIndex_W); }

	// LAF Table : Listpane text (single japan fep)
	inline TAknTextLineLayout List_pane_text__single_japan_fep__Line_1(TInt aIndex_W) const		{ return (*(TList_pane_text__single_japan_fep__Line_1_sig*)(GetFunction(EApiId_List_pane_text__single_japan_fep__Line_1)))(aIndex_W); }

	// LAF Table : Predictive candidate selection list texts
	inline TAknTextLineLayout Predictive_candidate_selection_list_texts_Line_1(TInt aIndex_C, TInt aIndex_B) const		{ return (*(TPredictive_candidate_selection_list_texts_Line_1_sig*)(GetFunction(EApiId_Predictive_candidate_selection_list_texts_Line_1)))(aIndex_C, aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Predictive_candidate_selection_list_texts_Line_1(TInt aIndex_C, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Predictive_candidate_selection_list_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Predictive_candidate_selection_list_texts_Line_1)))(aIndex_C, aNumberOfLinesShown); }

	// LAF Table : Predictive candidate selection highlight
	inline TAknWindowLineLayout Predictive_candidate_selection_highlight_Line_1() const		{ return (*(TPredictive_candidate_selection_highlight_Line_1_sig*)(GetFunction(EApiId_Predictive_candidate_selection_highlight_Line_1)))(); }

	// LAF Table : Predictive candidate selection popup window graphics
	inline TAknWindowLineLayout Predictive_candidate_selection_popup_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TPredictive_candidate_selection_popup_window_graphics_Line_1_sig*)(GetFunction(EApiId_Predictive_candidate_selection_popup_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Predictive_candidate_selection_popup_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TPredictive_candidate_selection_popup_window_graphics_Line_2_sig*)(GetFunction(EApiId_Predictive_candidate_selection_popup_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Predictive_candidate_selection_popup_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TPredictive_candidate_selection_popup_window_graphics_Line_3_sig*)(GetFunction(EApiId_Predictive_candidate_selection_popup_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Predictive_candidate_selection_popup_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TPredictive_candidate_selection_popup_window_graphics_Line_4_sig*)(GetFunction(EApiId_Predictive_candidate_selection_popup_window_graphics_Line_4)))(aParentRect); }

	inline TAknLayoutTableLimits Predictive_candidate_selection_popup_window_graphics_Limits() const		{ return (*(TPredictive_candidate_selection_popup_window_graphics_Limits_sig*)(GetFunction(EApiId_Predictive_candidate_selection_popup_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Predictive_candidate_selection_popup_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TPredictive_candidate_selection_popup_window_graphics_sig*)(GetFunction(EApiId_Predictive_candidate_selection_popup_window_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Candidate selection list texts
	inline TAknTextLineLayout Candidate_selection_list_texts_Line_1() const		{ return (*(TCandidate_selection_list_texts_Line_1_sig*)(GetFunction(EApiId_Candidate_selection_list_texts_Line_1)))(); }

	// LAF Table : Candidate selection pop-up window graphics
	inline TAknWindowLineLayout Candidate_selection_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TCandidate_selection_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Candidate_selection_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Candidate_selection_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TCandidate_selection_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Candidate_selection_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Candidate_selection_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TCandidate_selection_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Candidate_selection_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Candidate_selection_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TCandidate_selection_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Candidate_selection_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknLayoutTableLimits Candidate_selection_pop_up_window_graphics_Limits() const		{ return (*(TCandidate_selection_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Candidate_selection_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Candidate_selection_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TCandidate_selection_pop_up_window_graphics_sig*)(GetFunction(EApiId_Candidate_selection_pop_up_window_graphics)))(aLineIndex, aParentRect); }

	// LAF Table : Chinese FEP Zi popup window elements and descendants panes
	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_elements_and_descendants_panes_Line_1() const		{ return (*(TChinese_FEP_Zi_popup_window_elements_and_descendants_panes_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_elements_and_descendants_panes_Line_1)))(); }

	inline TAknWindowLineLayout fep_china_zi_entry_pane(TInt aIndex_W) const		{ return (*(Tfep_china_zi_entry_pane_sig*)(GetFunction(EApiId_fep_china_zi_entry_pane)))(aIndex_W); }

	inline TAknWindowLineLayout fep_china_zi_candidate_pane(TInt aIndex_t) const		{ return (*(Tfep_china_zi_candidate_pane_sig*)(GetFunction(EApiId_fep_china_zi_candidate_pane)))(aIndex_t); }

	// LAF Table : Chinese FEP Zi entry pane elements
	inline TAknWindowLineLayout Chinese_FEP_Zi_entry_pane_elements_Line_1() const		{ return (*(TChinese_FEP_Zi_entry_pane_elements_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_entry_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_entry_pane_elements_Line_2() const		{ return (*(TChinese_FEP_Zi_entry_pane_elements_Line_2_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_entry_pane_elements_Line_2)))(); }

	inline TAknLayoutTableLimits Chinese_FEP_Zi_entry_pane_elements_Limits() const		{ return (*(TChinese_FEP_Zi_entry_pane_elements_Limits_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_entry_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_entry_pane_elements(TInt aLineIndex) const		{ return (*(TChinese_FEP_Zi_entry_pane_elements_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_entry_pane_elements)))(aLineIndex); }

	// LAF Table : Chinese FEP Zi entry pane texts
	inline TAknTextLineLayout Chinese_FEP_Zi_entry_pane_texts_Line_1(TInt aIndex_C) const		{ return (*(TChinese_FEP_Zi_entry_pane_texts_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_entry_pane_texts_Line_1)))(aIndex_C); }

	// LAF Table : Chinese FEP Zi candidate pane elements
	inline TAknWindowLineLayout Chinese_FEP_Zi_candidate_pane_elements_Line_1() const		{ return (*(TChinese_FEP_Zi_candidate_pane_elements_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_candidate_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_candidate_pane_elements_Line_2() const		{ return (*(TChinese_FEP_Zi_candidate_pane_elements_Line_2_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_candidate_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_candidate_pane_elements_Line_3() const		{ return (*(TChinese_FEP_Zi_candidate_pane_elements_Line_3_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_candidate_pane_elements_Line_3)))(); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_candidate_pane_elements_Line_4() const		{ return (*(TChinese_FEP_Zi_candidate_pane_elements_Line_4_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_candidate_pane_elements_Line_4)))(); }

	inline TAknWindowLineLayout fep_china_zi_highlight_pane() const		{ return (*(Tfep_china_zi_highlight_pane_sig*)(GetFunction(EApiId_fep_china_zi_highlight_pane)))(); }

	inline TAknLayoutTableLimits Chinese_FEP_Zi_candidate_pane_elements_Limits() const		{ return (*(TChinese_FEP_Zi_candidate_pane_elements_Limits_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_candidate_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_candidate_pane_elements(TInt aLineIndex) const		{ return (*(TChinese_FEP_Zi_candidate_pane_elements_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_candidate_pane_elements)))(aLineIndex); }

	// LAF Table : Chinese FEP Zi candidate pane texts
	inline TAknTextLineLayout Chinese_FEP_Zi_candidate_pane_texts_Line_1() const		{ return (*(TChinese_FEP_Zi_candidate_pane_texts_Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_candidate_pane_texts_Line_1)))(); }

	inline TAknTextLineLayout Chinese_FEP_Zi_candidate_pane_texts_Line_2() const		{ return (*(TChinese_FEP_Zi_candidate_pane_texts_Line_2_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_candidate_pane_texts_Line_2)))(); }

	inline TAknTextLineLayout Chinese_FEP_Zi_candidate_pane_texts_Line_3() const		{ return (*(TChinese_FEP_Zi_candidate_pane_texts_Line_3_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_candidate_pane_texts_Line_3)))(); }

	inline TAknLayoutTableLimits Chinese_FEP_Zi_candidate_pane_texts_Limits() const		{ return (*(TChinese_FEP_Zi_candidate_pane_texts_Limits_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_candidate_pane_texts_Limits)))(); }

	inline TAknTextLineLayout Chinese_FEP_Zi_candidate_pane_texts(TInt aLineIndex) const		{ return (*(TChinese_FEP_Zi_candidate_pane_texts_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_candidate_pane_texts)))(aLineIndex); }

	// LAF Table : Chinese FEP Zi popup window graphics (part 1)
	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__Line_1() const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__Line_1)))(); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__Line_2(TInt aIndex_t) const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__Line_2_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__Line_2)))(aIndex_t); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__Line_3(TInt aIndex_t) const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__Line_3_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__Line_3)))(aIndex_t); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__Line_4() const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__Line_4_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__Line_4)))(); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__Line_5() const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__Line_5_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__Line_5)))(); }

	inline TAknLayoutTableLimits Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0_Limits() const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0(TInt aLineIndex, TInt aIndex_t) const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_0)))(aLineIndex, aIndex_t); }

	inline TAknLayoutTableLimits Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1_Limits() const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1_Limits)))(); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1(TInt aLineIndex) const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_1__SUB_TABLE_1)))(aLineIndex); }

	// LAF Table : Chinese FEP Zi popup window graphics (part 2)
	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_2__Line_1(TInt aIndex_t) const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__Line_1_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2__Line_1)))(aIndex_t); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_2__Line_2(TInt aIndex_t) const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__Line_2_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2__Line_2)))(aIndex_t); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_2__Line_3(TInt aIndex_t) const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__Line_3_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2__Line_3)))(aIndex_t); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_2__Line_4(TInt aIndex_t) const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__Line_4_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2__Line_4)))(aIndex_t); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_2__Line_5(TInt aIndex_t) const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__Line_5_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2__Line_5)))(aIndex_t); }

	inline TAknLayoutTableLimits Chinese_FEP_Zi_popup_window_graphics__part_2__Limits() const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__Limits_sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2__Limits)))(); }

	inline TAknWindowLineLayout Chinese_FEP_Zi_popup_window_graphics__part_2_(TInt aLineIndex, TInt aIndex_t) const		{ return (*(TChinese_FEP_Zi_popup_window_graphics__part_2__sig*)(GetFunction(EApiId_Chinese_FEP_Zi_popup_window_graphics__part_2_)))(aLineIndex, aIndex_t); }

	// LAF Table : Input highlight elements
	inline TAknWindowLineLayout Input_highlight_elements_Line_1() const		{ return (*(TInput_highlight_elements_Line_1_sig*)(GetFunction(EApiId_Input_highlight_elements_Line_1)))(); }

	// LAF Table : Candidate selection
	inline TAknWindowLineLayout Candidate_selection_Line_1(const TRect& aParentRect) const		{ return (*(TCandidate_selection_Line_1_sig*)(GetFunction(EApiId_Candidate_selection_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Candidate_selection_Line_2(const TRect& aParentRect) const		{ return (*(TCandidate_selection_Line_2_sig*)(GetFunction(EApiId_Candidate_selection_Line_2)))(aParentRect); }

	inline TAknLayoutTableLimits Candidate_selection_Limits() const		{ return (*(TCandidate_selection_Limits_sig*)(GetFunction(EApiId_Candidate_selection_Limits)))(); }

	inline TAknWindowLineLayout Candidate_selection(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TCandidate_selection_sig*)(GetFunction(EApiId_Candidate_selection)))(aLineIndex, aParentRect); }

	// From LAF Table : Pop-up windows (main pane as parent)
	inline TAknWindowLineLayout popup_fep_china_zi_window(TInt aCommon1) const		{ return (*(Tpopup_fep_china_zi_window_sig*)(GetFunction(EApiId_popup_fep_china_zi_window)))(aCommon1); }

	// LAF Table : Find pop-up window elements
	inline TAknWindowLineLayout Find_pop_up_window_elements_Line_5() const		{ return (*(TFind_pop_up_window_elements_Line_5_sig*)(GetFunction(EApiId_Find_pop_up_window_elements_Line_5)))(); }

	inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_Line_1() const		{ return (*(TChinese_universal_FEP_pop_up_window_elements_and_descendants_panes_Line_1_sig*)(GetFunction(EApiId_Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_Line_1)))(); }

	inline TAknWindowLineLayout fep_china_uni_entry_pane() const		{ return (*(Tfep_china_uni_entry_pane_sig*)(GetFunction(EApiId_fep_china_uni_entry_pane)))(); }

	inline TAknWindowLineLayout fep_china_uni_candidate_pane(TInt aIndex_t) const		{ return (*(Tfep_china_uni_candidate_pane_sig*)(GetFunction(EApiId_fep_china_uni_candidate_pane)))(aIndex_t); }

	inline TAknLayoutTableLimits Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0_Limits() const		{ return (*(TChinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0_Limits)))(); }

	inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TChinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0_sig*)(GetFunction(EApiId_Chinese_universal_FEP_pop_up_window_elements_and_descendants_panes_SUB_TABLE_0)))(aLineIndex); }

	inline TAknWindowLineLayout Chinese_universal_FEP_entry_pane_elements_Line_1() const		{ return (*(TChinese_universal_FEP_entry_pane_elements_Line_1_sig*)(GetFunction(EApiId_Chinese_universal_FEP_entry_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Chinese_universal_FEP_entry_pane_elements_Line_2() const		{ return (*(TChinese_universal_FEP_entry_pane_elements_Line_2_sig*)(GetFunction(EApiId_Chinese_universal_FEP_entry_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout fep_entry_item_pane() const		{ return (*(Tfep_entry_item_pane_sig*)(GetFunction(EApiId_fep_entry_item_pane)))(); }

	inline TAknLayoutTableLimits Chinese_universal_FEP_entry_pane_elements_Limits() const		{ return (*(TChinese_universal_FEP_entry_pane_elements_Limits_sig*)(GetFunction(EApiId_Chinese_universal_FEP_entry_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Chinese_universal_FEP_entry_pane_elements(TInt aLineIndex) const		{ return (*(TChinese_universal_FEP_entry_pane_elements_sig*)(GetFunction(EApiId_Chinese_universal_FEP_entry_pane_elements)))(aLineIndex); }

	inline TAknTextLineLayout Chinese_universal_FEP_entry_pane_texts_Line_1(TInt aIndex_C) const		{ return (*(TChinese_universal_FEP_entry_pane_texts_Line_1_sig*)(GetFunction(EApiId_Chinese_universal_FEP_entry_pane_texts_Line_1)))(aIndex_C); }

	inline TAknWindowLineLayout Chinese_universal_FEPcandidate_pane_elements_Line_1() const		{ return (*(TChinese_universal_FEPcandidate_pane_elements_Line_1_sig*)(GetFunction(EApiId_Chinese_universal_FEPcandidate_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Chinese_universal_FEPcandidate_pane_elements_Line_2() const		{ return (*(TChinese_universal_FEPcandidate_pane_elements_Line_2_sig*)(GetFunction(EApiId_Chinese_universal_FEPcandidate_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Chinese_universal_FEPcandidate_pane_elements_Line_3() const		{ return (*(TChinese_universal_FEPcandidate_pane_elements_Line_3_sig*)(GetFunction(EApiId_Chinese_universal_FEPcandidate_pane_elements_Line_3)))(); }

	inline TAknWindowLineLayout Chinese_universal_FEPcandidate_pane_elements_Line_4() const		{ return (*(TChinese_universal_FEPcandidate_pane_elements_Line_4_sig*)(GetFunction(EApiId_Chinese_universal_FEPcandidate_pane_elements_Line_4)))(); }

	inline TAknWindowLineLayout fep_candidate_item_pane() const		{ return (*(Tfep_candidate_item_pane_sig*)(GetFunction(EApiId_fep_candidate_item_pane)))(); }

	inline TAknLayoutTableLimits Chinese_universal_FEPcandidate_pane_elements_Limits() const		{ return (*(TChinese_universal_FEPcandidate_pane_elements_Limits_sig*)(GetFunction(EApiId_Chinese_universal_FEPcandidate_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Chinese_universal_FEPcandidate_pane_elements(TInt aLineIndex) const		{ return (*(TChinese_universal_FEPcandidate_pane_elements_sig*)(GetFunction(EApiId_Chinese_universal_FEPcandidate_pane_elements)))(aLineIndex); }

	inline TAknTextLineLayout Chinese_universal_FEP_candidate_pane_texts_Line_1() const		{ return (*(TChinese_universal_FEP_candidate_pane_texts_Line_1_sig*)(GetFunction(EApiId_Chinese_universal_FEP_candidate_pane_texts_Line_1)))(); }

	inline TAknTextLineLayout Chinese_universal_FEP_candidate_pane_texts_Line_2() const		{ return (*(TChinese_universal_FEP_candidate_pane_texts_Line_2_sig*)(GetFunction(EApiId_Chinese_universal_FEP_candidate_pane_texts_Line_2)))(); }

	inline TAknTextLineLayout Chinese_universal_FEP_candidate_pane_texts_Line_3() const		{ return (*(TChinese_universal_FEP_candidate_pane_texts_Line_3_sig*)(GetFunction(EApiId_Chinese_universal_FEP_candidate_pane_texts_Line_3)))(); }

	inline TAknLayoutTableLimits Chinese_universal_FEP_candidate_pane_texts_Limits() const		{ return (*(TChinese_universal_FEP_candidate_pane_texts_Limits_sig*)(GetFunction(EApiId_Chinese_universal_FEP_candidate_pane_texts_Limits)))(); }

	inline TAknTextLineLayout Chinese_universal_FEP_candidate_pane_texts(TInt aLineIndex) const		{ return (*(TChinese_universal_FEP_candidate_pane_texts_sig*)(GetFunction(EApiId_Chinese_universal_FEP_candidate_pane_texts)))(aLineIndex); }

	inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_graphics_Line_1(const TRect& aParentRect) const		{ return (*(TChinese_universal_FEP_pop_up_window_graphics_Line_1_sig*)(GetFunction(EApiId_Chinese_universal_FEP_pop_up_window_graphics_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_graphics_Line_2(const TRect& aParentRect) const		{ return (*(TChinese_universal_FEP_pop_up_window_graphics_Line_2_sig*)(GetFunction(EApiId_Chinese_universal_FEP_pop_up_window_graphics_Line_2)))(aParentRect); }

	inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_graphics_Line_3(const TRect& aParentRect) const		{ return (*(TChinese_universal_FEP_pop_up_window_graphics_Line_3_sig*)(GetFunction(EApiId_Chinese_universal_FEP_pop_up_window_graphics_Line_3)))(aParentRect); }

	inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_graphics_Line_4(const TRect& aParentRect) const		{ return (*(TChinese_universal_FEP_pop_up_window_graphics_Line_4_sig*)(GetFunction(EApiId_Chinese_universal_FEP_pop_up_window_graphics_Line_4)))(aParentRect); }

	inline TAknLayoutTableLimits Chinese_universal_FEP_pop_up_window_graphics_Limits() const		{ return (*(TChinese_universal_FEP_pop_up_window_graphics_Limits_sig*)(GetFunction(EApiId_Chinese_universal_FEP_pop_up_window_graphics_Limits)))(); }

	inline TAknWindowLineLayout Chinese_universal_FEP_pop_up_window_graphics(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TChinese_universal_FEP_pop_up_window_graphics_sig*)(GetFunction(EApiId_Chinese_universal_FEP_pop_up_window_graphics)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout Input_highlight_Line_1(const TRect& aParentRect) const		{ return (*(TInput_highlight_Line_1_sig*)(GetFunction(EApiId_Input_highlight_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Candidate_selection_highlight_Line_1(const TRect& aParentRect) const		{ return (*(TCandidate_selection_highlight_Line_1_sig*)(GetFunction(EApiId_Candidate_selection_highlight_Line_1)))(aParentRect); }

	inline TAknWindowLineLayout Candidate_selection_highlight_Line_2(const TRect& aParentRect) const		{ return (*(TCandidate_selection_highlight_Line_2_sig*)(GetFunction(EApiId_Candidate_selection_highlight_Line_2)))(aParentRect); }

	inline TAknLayoutTableLimits Candidate_selection_highlight_Limits() const		{ return (*(TCandidate_selection_highlight_Limits_sig*)(GetFunction(EApiId_Candidate_selection_highlight_Limits)))(); }

	inline TAknWindowLineLayout Candidate_selection_highlight(TInt aLineIndex, const TRect& aParentRect) const		{ return (*(TCandidate_selection_highlight_sig*)(GetFunction(EApiId_Candidate_selection_highlight)))(aLineIndex, aParentRect); }

	inline TAknWindowLineLayout popup_fep_china_uni_window(TInt aIndex_l, TInt aIndex_H) const		{ return (*(Tpopup_fep_china_uni_window_sig*)(GetFunction(EApiId_popup_fep_china_uni_window)))(aIndex_l, aIndex_H); }

private:
	CInstance();
	};

} // end of namespace AknApacLayout
#endif // AKNAPACLAYOUT_CDL
