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

// This customisation implements the interface defined in AknLayoutScalable_Avkon.cdl

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0004cdf0 };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknTextComponentLayout TextLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknWindowComponentLayout WindowLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::WindowLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknWindowComponentLayout WindowLineCVR(TInt aCol, TInt aVariety, TInt aRow) { return AknLayoutScalableDecode::WindowLineCVR(&KImplData, aCol, aVariety, aRow); }
TAknWindowComponentLayout WindowLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::WindowLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknTextComponentLayout TextLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineCRV(TInt aCol, TInt aRow, TInt aVariety) { return AknLayoutScalableDecode::WindowLineCRV(&KImplData, aCol, aRow, aVariety); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknTextComponentLayout TextTableLRVC(TInt aLineIndex, TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextTableLRVC(&KImplData, aLineIndex, aRow, aVariety, aCol); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize] =
	{
0x72f1,	// (0x000540e1) Screen

0x72fd,	// (0x000540ed) application_window_ParamLimits

0x72fd,	// (0x000540ed) application_window

0x244c,	// (0x0004f23c) screen_g1

0x4a81,	// (0x00051871) area_bottom_pane_ParamLimits

0x4a81,	// (0x00051871) area_bottom_pane

0x4b41,	// (0x00051931) area_top_pane_ParamLimits

0x4b41,	// (0x00051931) area_top_pane

0x4bdf,	// (0x000519cf) main_pane_ParamLimits

0x4bdf,	// (0x000519cf) main_pane

0x2456,	// (0x0004f246) misc_graphics

0x9569,	// (0x00056359) battery_pane_ParamLimits

0x9569,	// (0x00056359) battery_pane

0xa27c,	// (0x0005706c) bg_status_flat_pane_g8

0xa284,	// (0x00057074) bg_status_flat_pane_g9

0x9631,	// (0x00056421) context_pane_ParamLimits

0x9631,	// (0x00056421) context_pane

0x9755,	// (0x00056545) navi_pane_ParamLimits

0x9755,	// (0x00056545) navi_pane

0x97e4,	// (0x000565d4) signal_pane_ParamLimits

0x97e4,	// (0x000565d4) signal_pane

0x0008,

0xf88f,	// (0x0005c67f) bg_status_flat_pane_g

0x9851,	// (0x00056641) status_pane_g1_ParamLimits

0x9851,	// (0x00056641) status_pane_g1

0x9865,	// (0x00056655) status_pane_g2_ParamLimits

0x9865,	// (0x00056655) status_pane_g2

0x9871,	// (0x00056661) status_pane_g3_ParamLimits

0x9871,	// (0x00056661) status_pane_g3

0x0004,

0xf7bd,	// (0x0005c5ad) status_pane_g_ParamLimits

0xf7bd,	// (0x0005c5ad) status_pane_g

0x98a5,	// (0x00056695) title_pane_ParamLimits

0x98a5,	// (0x00056695) title_pane

0x98e2,	// (0x000566d2) uni_indicator_pane_ParamLimits

0x98e2,	// (0x000566d2) uni_indicator_pane

0x8e52,	// (0x00055c42) bg_list_pane_ParamLimits

0x8e52,	// (0x00055c42) bg_list_pane

0x8e72,	// (0x00055c62) find_pane

0x8e7a,	// (0x00055c6a) listscroll_app_pane_ParamLimits

0x8e7a,	// (0x00055c6a) listscroll_app_pane

0x8e86,	// (0x00055c76) listscroll_form_pane

0x8e8e,	// (0x00055c7e) listscroll_gen_pane_ParamLimits

0x8e8e,	// (0x00055c7e) listscroll_gen_pane

0x8e86,	// (0x00055c76) listscroll_set_pane

0x7f0a,	// (0x00054cfa) main_idle_act_pane

0x8b36,	// (0x00055926) main_idle_trad_pane

0x8b36,	// (0x00055926) main_list_empty_pane

0x8eb4,	// (0x00055ca4) main_midp_pane

0x8ec0,	// (0x00055cb0) main_pane_g1_ParamLimits

0x8ec0,	// (0x00055cb0) main_pane_g1

0x8ece,	// (0x00055cbe) popup_ai_message_window_ParamLimits

0x8ece,	// (0x00055cbe) popup_ai_message_window

0x8f8a,	// (0x00055d7a) popup_fep_china_uni_window_ParamLimits

0x8f8a,	// (0x00055d7a) popup_fep_china_uni_window

0x8fea,	// (0x00055dda) popup_fep_japan_candidate_window_ParamLimits

0x8fea,	// (0x00055dda) popup_fep_japan_candidate_window

0x9014,	// (0x00055e04) popup_fep_japan_predictive_window_ParamLimits

0x9014,	// (0x00055e04) popup_fep_japan_predictive_window

0x904a,	// (0x00055e3a) popup_find_window

0x9057,	// (0x00055e47) popup_grid_graphic_window_ParamLimits

0x9057,	// (0x00055e47) popup_grid_graphic_window

0x9085,	// (0x00055e75) popup_large_graphic_colour_window

0x90ab,	// (0x00055e9b) popup_menu_window_ParamLimits

0x90ab,	// (0x00055e9b) popup_menu_window

0x9275,	// (0x00056065) popup_note_image_window

0x925f,	// (0x0005604f) popup_note_wait_window_ParamLimits

0x925f,	// (0x0005604f) popup_note_wait_window

0x925f,	// (0x0005604f) popup_note_window_ParamLimits

0x925f,	// (0x0005604f) popup_note_window

0x92db,	// (0x000560cb) popup_query_code_window_ParamLimits

0x92db,	// (0x000560cb) popup_query_code_window

0x92f1,	// (0x000560e1) popup_query_data_code_window_ParamLimits

0x92f1,	// (0x000560e1) popup_query_data_code_window

0x9314,	// (0x00056104) popup_query_data_window_ParamLimits

0x9314,	// (0x00056104) popup_query_data_window

0x9336,	// (0x00056126) popup_query_sat_info_window_ParamLimits

0x9336,	// (0x00056126) popup_query_sat_info_window

0x9375,	// (0x00056165) popup_snote_single_graphic_window_ParamLimits

0x9375,	// (0x00056165) popup_snote_single_graphic_window

0x9375,	// (0x00056165) popup_snote_single_text_window_ParamLimits

0x9375,	// (0x00056165) popup_snote_single_text_window

0x938c,	// (0x0005617c) popup_sub_window_general

0x94d2,	// (0x000562c2) popup_window_general_ParamLimits

0x94d2,	// (0x000562c2) popup_window_general

0x94eb,	// (0x000562db) power_save_pane

0x5ab4,	// (0x000528a4) control_pane_g1_ParamLimits

0x5ab4,	// (0x000528a4) control_pane_g1

0x5add,	// (0x000528cd) control_pane_g2_ParamLimits

0x5add,	// (0x000528cd) control_pane_g2

0x8e03,	// (0x00055bf3) control_pane_g3_ParamLimits

0x8e03,	// (0x00055bf3) control_pane_g3

0x0007,

0xf7a5,	// (0x0005c595) control_pane_g_ParamLimits

0xf7a5,	// (0x0005c595) control_pane_g

0x5b28,	// (0x00052918) control_pane_t1_ParamLimits

0x5b28,	// (0x00052918) control_pane_t1

0x5b7a,	// (0x0005296a) control_pane_t2_ParamLimits

0x5b7a,	// (0x0005296a) control_pane_t2

0x0002,

0xf7b6,	// (0x0005c5a6) control_pane_t_ParamLimits

0xf7b6,	// (0x0005c5a6) control_pane_t

0x8d24,	// (0x00055b14) navi_navi_volume_pane_cp1

0x8d2d,	// (0x00055b1d) status_small_icon_pane

0x8d35,	// (0x00055b25) status_small_pane_g1_ParamLimits

0x8d35,	// (0x00055b25) status_small_pane_g1

0x8d69,	// (0x00055b59) status_small_pane_g2_ParamLimits

0x8d69,	// (0x00055b59) status_small_pane_g2

0x8d75,	// (0x00055b65) status_small_pane_g3_ParamLimits

0x8d75,	// (0x00055b65) status_small_pane_g3

0x8d81,	// (0x00055b71) status_small_pane_g4_ParamLimits

0x8d81,	// (0x00055b71) status_small_pane_g4

0x8d8d,	// (0x00055b7d) status_small_pane_g5_ParamLimits

0x8d8d,	// (0x00055b7d) status_small_pane_g5

0x8d9c,	// (0x00055b8c) status_small_pane_g6_ParamLimits

0x8d9c,	// (0x00055b8c) status_small_pane_g6

0x0007,

0xf794,	// (0x0005c584) status_small_pane_g_ParamLimits

0xf794,	// (0x0005c584) status_small_pane_g

0x8dcc,	// (0x00055bbc) status_small_pane_t1

0x8def,	// (0x00055bdf) status_small_wait_pane_ParamLimits

0x8def,	// (0x00055bdf) status_small_wait_pane

0x85cd,	// (0x000553bd) aid_levels_signal_ParamLimits

0x85cd,	// (0x000553bd) aid_levels_signal

0x85df,	// (0x000553cf) signal_pane_g1_ParamLimits

0x85df,	// (0x000553cf) signal_pane_g1

0x85f4,	// (0x000553e4) signal_pane_g2_ParamLimits

0x85f4,	// (0x000553e4) signal_pane_g2

0x0001,

0xf729,	// (0x0005c519) signal_pane_g_ParamLimits

0xf729,	// (0x0005c519) signal_pane_g

0x8609,	// (0x000553f9) context_pane_g1

0x730d,	// (0x000540fd) title_pane_g1

0x7343,	// (0x00054133) title_pane_t1

0x73ab,	// (0x0005419b) title_pane_t2

0x73d1,	// (0x000541c1) title_pane_t3

0x0002,

0xf573,	// (0x0005c363) title_pane_t

0x98fa,	// (0x000566ea) aid_levels_battery_ParamLimits

0x98fa,	// (0x000566ea) aid_levels_battery

0x990e,	// (0x000566fe) battery_pane_g1_ParamLimits

0x990e,	// (0x000566fe) battery_pane_g1

0x9924,	// (0x00056714) battery_pane_g2_ParamLimits

0x9924,	// (0x00056714) battery_pane_g2

0x0001,

0xf7c8,	// (0x0005c5b8) battery_pane_g_ParamLimits

0xf7c8,	// (0x0005c5b8) battery_pane_g

0xabcc,	// (0x000579bc) uni_indicator_pane_g1

0xabe1,	// (0x000579d1) uni_indicator_pane_g2

0xabf7,	// (0x000579e7) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0005c727) uni_indicator_pane_g

0x89a4,	// (0x00055794) navi_icon_pane_ParamLimits

0x89a4,	// (0x00055794) navi_icon_pane

0x88eb,	// (0x000556db) navi_midp_pane

0x89c0,	// (0x000557b0) navi_navi_pane

0x89ca,	// (0x000557ba) navi_text_pane_ParamLimits

0x89ca,	// (0x000557ba) navi_text_pane

0x244c,	// (0x0004f23c) status_small_wait_pane_g1

0x7815,	// (0x00054605) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0005c722) status_small_wait_pane_g

0xa8df,	// (0x000576cf) navi_navi_icon_text_pane

0xa8e7,	// (0x000576d7) navi_navi_pane_g1_ParamLimits

0xa8e7,	// (0x000576d7) navi_navi_pane_g1

0xa8f9,	// (0x000576e9) navi_navi_pane_g2_ParamLimits

0xa8f9,	// (0x000576e9) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0005c6f0) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0005c6f0) navi_navi_pane_g

0xa90b,	// (0x000576fb) navi_navi_tabs_pane

0xa914,	// (0x00057704) navi_navi_text_pane

0xa8df,	// (0x000576cf) navi_navi_volume_pane

0xa8b8,	// (0x000576a8) navi_text_pane_t1

0xa8a9,	// (0x00057699) navi_icon_pane_g1

0xa7fc,	// (0x000575ec) navi_navi_text_pane_t1

0x5f43,	// (0x00052d33) navi_navi_volume_pane_g1

0x5f4b,	// (0x00052d3b) volume_small_pane

0xa762,	// (0x00057552) navi_navi_icon_text_pane_g1

0xa76a,	// (0x0005755a) navi_navi_icon_text_pane_t1

0x89c0,	// (0x000557b0) navi_tabs_2_long_pane

0x89c0,	// (0x000557b0) navi_tabs_2_pane

0x89c0,	// (0x000557b0) navi_tabs_3_long_pane

0x89c0,	// (0x000557b0) navi_tabs_3_pane

0x89c0,	// (0x000557b0) navi_tabs_4_pane

0x5f23,	// (0x00052d13) tabs_2_active_pane_ParamLimits

0x5f23,	// (0x00052d13) tabs_2_active_pane

0x5f33,	// (0x00052d23) tabs_2_passive_pane_ParamLimits

0x5f33,	// (0x00052d23) tabs_2_passive_pane

0x5ef1,	// (0x00052ce1) tabs_3_active_pane_ParamLimits

0x5ef1,	// (0x00052ce1) tabs_3_active_pane

0x5f01,	// (0x00052cf1) tabs_3_passive_pane_ParamLimits

0x5f01,	// (0x00052cf1) tabs_3_passive_pane

0x5f12,	// (0x00052d02) tabs_3_passive_pane_cp_ParamLimits

0x5f12,	// (0x00052d02) tabs_3_passive_pane_cp

0x5ea5,	// (0x00052c95) tabs_4_active_pane_ParamLimits

0x5ea5,	// (0x00052c95) tabs_4_active_pane

0x5eb8,	// (0x00052ca8) tabs_4_passive_pane_ParamLimits

0x5eb8,	// (0x00052ca8) tabs_4_passive_pane

0x5ec9,	// (0x00052cb9) tabs_4_passive_pane_cp_ParamLimits

0x5ec9,	// (0x00052cb9) tabs_4_passive_pane_cp

0x5eda,	// (0x00052cca) tabs_4_passive_pane_cp2_ParamLimits

0x5eda,	// (0x00052cca) tabs_4_passive_pane_cp2

0x5e81,	// (0x00052c71) tabs_2_long_active_pane_ParamLimits

0x5e81,	// (0x00052c71) tabs_2_long_active_pane

0x5e93,	// (0x00052c83) tabs_2_long_passive_pane_ParamLimits

0x5e93,	// (0x00052c83) tabs_2_long_passive_pane

0x5e42,	// (0x00052c32) tabs_3_long_active_pane_ParamLimits

0x5e42,	// (0x00052c32) tabs_3_long_active_pane

0x5e55,	// (0x00052c45) tabs_3_long_passive_pane_ParamLimits

0x5e55,	// (0x00052c45) tabs_3_long_passive_pane

0x5e6e,	// (0x00052c5e) tabs_3_long_passive_pane_cp_ParamLimits

0x5e6e,	// (0x00052c5e) tabs_3_long_passive_pane_cp

0x5de8,	// (0x00052bd8) volume_small_pane_g1

0x5df1,	// (0x00052be1) volume_small_pane_g2

0x5dfa,	// (0x00052bea) volume_small_pane_g3

0x5e03,	// (0x00052bf3) volume_small_pane_g4

0x5e0c,	// (0x00052bfc) volume_small_pane_g5

0x5e15,	// (0x00052c05) volume_small_pane_g6

0x5e1e,	// (0x00052c0e) volume_small_pane_g7

0x5e27,	// (0x00052c17) volume_small_pane_g8

0x5e30,	// (0x00052c20) volume_small_pane_g9

0x5e39,	// (0x00052c29) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0005c6bc) volume_small_pane_g

0x73e3,	// (0x000541d3) bg_active_tab_pane_cp2_ParamLimits

0x73e3,	// (0x000541d3) bg_active_tab_pane_cp2

0x73f1,	// (0x000541e1) tabs_3_active_pane_g1

0x73f9,	// (0x000541e9) tabs_3_active_pane_t1

0x73e3,	// (0x000541d3) bg_passive_tab_pane_cp2_ParamLimits

0x73e3,	// (0x000541d3) bg_passive_tab_pane_cp2

0x73f1,	// (0x000541e1) tabs_3_passive_pane_g1

0x73f9,	// (0x000541e9) tabs_3_passive_pane_t1

0x73e3,	// (0x000541d3) bg_active_tab_pane_cp3_ParamLimits

0x73e3,	// (0x000541d3) bg_active_tab_pane_cp3

0x740b,	// (0x000541fb) tabs_4_active_pane_g1

0x7413,	// (0x00054203) tabs_4_active_pane_t1

0x73e3,	// (0x000541d3) bg_passive_tab_pane_cp3_ParamLimits

0x73e3,	// (0x000541d3) bg_passive_tab_pane_cp3

0x740b,	// (0x000541fb) tabs_4_1_passive_pane_g1

0x7413,	// (0x00054203) tabs_4_1_passive_pane_t1

0x8eb4,	// (0x00055ca4) list_highlight_pane_cp2

0xae5b,	// (0x00057c4b) list_set_pane_ParamLimits

0xae5b,	// (0x00057c4b) list_set_pane

0xaf23,	// (0x00057d13) main_pane_set_t1_ParamLimits

0xaf23,	// (0x00057d13) main_pane_set_t1

0xaf43,	// (0x00057d33) main_pane_set_t2_ParamLimits

0xaf43,	// (0x00057d33) main_pane_set_t2

0xaf57,	// (0x00057d47) main_pane_set_t3_ParamLimits

0xaf57,	// (0x00057d47) main_pane_set_t3

0xaf6b,	// (0x00057d5b) main_pane_set_t4_ParamLimits

0xaf6b,	// (0x00057d5b) main_pane_set_t4

0x0003,

0xf99c,	// (0x0005c78c) main_pane_set_t_ParamLimits

0xf99c,	// (0x0005c78c) main_pane_set_t

0xaf8b,	// (0x00057d7b) setting_code_pane

0xaf95,	// (0x00057d85) setting_slider_graphic_pane

0xaf95,	// (0x00057d85) setting_slider_pane

0xaf95,	// (0x00057d85) setting_text_pane

0xaf95,	// (0x00057d85) setting_volume_pane

0x4e36,	// (0x00051c26) volume_set_pane

0x73e3,	// (0x000541d3) bg_set_opt_pane_cp

0x4e40,	// (0x00051c30) setting_slider_pane_t1

0x4e56,	// (0x00051c46) setting_slider_pane_t2

0x4e70,	// (0x00051c60) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0005c36a) setting_slider_pane_t

0x4e88,	// (0x00051c78) slider_set_pane

0x2456,	// (0x0004f246) bg_set_opt_pane_cp2

0x7425,	// (0x00054215) setting_slider_graphic_pane_g1

0x4e9e,	// (0x00051c8e) setting_slider_graphic_pane_t1

0x4eae,	// (0x00051c9e) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0005c371) setting_slider_graphic_pane_t

0x4ebe,	// (0x00051cae) slider_set_pane_cp

0x2456,	// (0x0004f246) input_focus_pane_cp1

0xae1c,	// (0x00057c0c) list_set_text_pane

0x244c,	// (0x0004f23c) setting_text_pane_g1

0x2456,	// (0x0004f246) input_focus_pane_cp2

0x244c,	// (0x0004f23c) setting_code_pane_g1

0x742e,	// (0x0005421e) setting_code_pane_t1

0x3fe8,	// (0x00050dd8) set_text_pane_t1_ParamLimits

0x3fe8,	// (0x00050dd8) set_text_pane_t1

0x7d71,	// (0x00054b61) set_opt_bg_pane_g1

0x7d79,	// (0x00054b69) set_opt_bg_pane_g2

0xadf4,	// (0x00057be4) set_opt_bg_pane_g3

0x7d89,	// (0x00054b79) set_opt_bg_pane_g4

0x7d91,	// (0x00054b81) set_opt_bg_pane_g5

0x7d99,	// (0x00054b89) set_opt_bg_pane_g6

0xadfe,	// (0x00057bee) set_opt_bg_pane_g7

0xae08,	// (0x00057bf8) set_opt_bg_pane_g8

0xae12,	// (0x00057c02) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0005c779) set_opt_bg_pane_g

0xade7,	// (0x00057bd7) slider_set_pane_g1

0x5ff4,	// (0x00052de4) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0005c76a) slider_set_pane_g

0x5f54,	// (0x00052d44) volume_set_pane_g1

0x5f5e,	// (0x00052d4e) volume_set_pane_g2

0x5f68,	// (0x00052d58) volume_set_pane_g3

0x5f72,	// (0x00052d62) volume_set_pane_g4

0x5f7c,	// (0x00052d6c) volume_set_pane_g5

0x5f86,	// (0x00052d76) volume_set_pane_g6

0x5f90,	// (0x00052d80) volume_set_pane_g7

0x5f9a,	// (0x00052d8a) volume_set_pane_g8

0x5fa4,	// (0x00052d94) volume_set_pane_g9

0x5fae,	// (0x00052d9e) volume_set_pane_g10

0x0009,

0xf952,	// (0x0005c742) volume_set_pane_g

0x743c,	// (0x0005422c) indicator_pane_ParamLimits

0x743c,	// (0x0005422c) indicator_pane

0x7448,	// (0x00054238) main_idle_pane_g2_ParamLimits

0x7448,	// (0x00054238) main_idle_pane_g2

0x7470,	// (0x00054260) main_pane_idle_g1_ParamLimits

0x7470,	// (0x00054260) main_pane_idle_g1

0x747e,	// (0x0005426e) popup_clock_digital_analogue_window_ParamLimits

0x747e,	// (0x0005426e) popup_clock_digital_analogue_window

0x7495,	// (0x00054285) soft_indicator_pane_ParamLimits

0x7495,	// (0x00054285) soft_indicator_pane

0x74a3,	// (0x00054293) wallpaper_pane_ParamLimits

0x74a3,	// (0x00054293) wallpaper_pane

0x244c,	// (0x0004f23c) wallpaper_pane_g1

0x74b7,	// (0x000542a7) indicator_pane_g1_ParamLimits

0x74b7,	// (0x000542a7) indicator_pane_g1

0xb259,	// (0x00058049) navi_navi_icon_text_pane_srt_g1

0x74d2,	// (0x000542c2) soft_indicator_pane_t1

0x74ec,	// (0x000542dc) aid_ps_area_pane

0x74fd,	// (0x000542ed) aid_ps_clock_pane

0x750b,	// (0x000542fb) aid_ps_indicator_pane

0x7517,	// (0x00054307) indicator_ps_pane_ParamLimits

0x7517,	// (0x00054307) indicator_ps_pane

0x7526,	// (0x00054316) power_save_pane_g1_ParamLimits

0x7526,	// (0x00054316) power_save_pane_g1

0x7532,	// (0x00054322) power_save_pane_g2_ParamLimits

0x7532,	// (0x00054322) power_save_pane_g2

0x4a35,	// (0x00051825) aid_navinavi_width_pane

0x74ec,	// (0x000542dc) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0005c376) power_save_pane_g_ParamLimits

0xf586,	// (0x0005c376) power_save_pane_g

0x7540,	// (0x00054330) power_save_pane_t1_ParamLimits

0x7540,	// (0x00054330) power_save_pane_t1

0x74fd,	// (0x000542ed) aid_ps_clock_pane_ParamLimits

0x750b,	// (0x000542fb) aid_ps_indicator_pane_ParamLimits

0x7552,	// (0x00054342) power_save_pane_t4_ParamLimits

0x7552,	// (0x00054342) power_save_pane_t4

0x0001,

0xf58b,	// (0x0005c37b) power_save_pane_t_ParamLimits

0xf58b,	// (0x0005c37b) power_save_pane_t

0x757c,	// (0x0005436c) power_save_t3_ParamLimits

0x757c,	// (0x0005436c) power_save_t3

0x7567,	// (0x00054357) power_save_t2_ParamLimits

0x7567,	// (0x00054357) power_save_t2

0x7591,	// (0x00054381) indicator_ps_pane_g1

0x759a,	// (0x0005438a) ai_gene_pane_ParamLimits

0x759a,	// (0x0005438a) ai_gene_pane

0x75a6,	// (0x00054396) ai_links_pane_ParamLimits

0x75a6,	// (0x00054396) ai_links_pane

0x75b2,	// (0x000543a2) indicator_pane_cp1_ParamLimits

0x75b2,	// (0x000543a2) indicator_pane_cp1

0x75be,	// (0x000543ae) main_pane_idle_g1_cp_ParamLimits

0x75be,	// (0x000543ae) main_pane_idle_g1_cp

0x75ca,	// (0x000543ba) popup_ai_links_title_window

0x75d3,	// (0x000543c3) soft_indicator_pane_cp1_ParamLimits

0x75d3,	// (0x000543c3) soft_indicator_pane_cp1

0xabba,	// (0x000579aa) ai_links_pane_g1

0xabc3,	// (0x000579b3) grid_ai_links_pane

0xab9f,	// (0x0005798f) ai_gene_pane_1

0xaba8,	// (0x00057998) ai_gene_pane_2

0xabb1,	// (0x000579a1) list_highlight_pane_cp4

0xab7f,	// (0x0005796f) cell_ai_link_pane_ParamLimits

0xab7f,	// (0x0005796f) cell_ai_link_pane

0xab77,	// (0x00057967) cell_ai_link_pane_g1

0x7815,	// (0x00054605) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0005c71d) cell_ai_link_pane_g

0x2456,	// (0x0004f246) grid_highlight_cp2

0x2456,	// (0x0004f246) bg_popup_sub_pane_cp1

0x75ed,	// (0x000543dd) popup_ai_links_title_window_t1

0xaac3,	// (0x000578b3) ai_gene_pane_1_g1_ParamLimits

0xaac3,	// (0x000578b3) ai_gene_pane_1_g1

0xaacf,	// (0x000578bf) ai_gene_pane_1_g2_ParamLimits

0xaacf,	// (0x000578bf) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0005c713) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0005c713) ai_gene_pane_1_g

0xaadc,	// (0x000578cc) ai_gene_pane_1_t1_ParamLimits

0xaadc,	// (0x000578cc) ai_gene_pane_1_t1

0xab10,	// (0x00057900) grid_ai_soft_ind_pane

0xaaae,	// (0x0005789e) ai_gene_pane_2_t1_ParamLimits

0xaaae,	// (0x0005789e) ai_gene_pane_2_t1

0x75fc,	// (0x000543ec) main_pane_empty_t1_ParamLimits

0x75fc,	// (0x000543ec) main_pane_empty_t1

0x7614,	// (0x00054404) main_pane_empty_t2_ParamLimits

0x7614,	// (0x00054404) main_pane_empty_t2

0x7629,	// (0x00054419) main_pane_empty_t3_ParamLimits

0x7629,	// (0x00054419) main_pane_empty_t3

0x763b,	// (0x0005442b) main_pane_empty_t4_ParamLimits

0x763b,	// (0x0005442b) main_pane_empty_t4

0x764d,	// (0x0005443d) main_pane_empty_t5_ParamLimits

0x764d,	// (0x0005443d) main_pane_empty_t5

0x0004,

0xf590,	// (0x0005c380) main_pane_empty_t_ParamLimits

0xf590,	// (0x0005c380) main_pane_empty_t

0x7dcb,	// (0x00054bbb) bg_popup_window_pane_ParamLimits

0x7dcb,	// (0x00054bbb) bg_popup_window_pane

0xa80a,	// (0x000575fa) find_popup_pane_cp2_ParamLimits

0xa80a,	// (0x000575fa) find_popup_pane_cp2

0xa816,	// (0x00057606) heading_pane_ParamLimits

0xa816,	// (0x00057606) heading_pane

0x2456,	// (0x0004f246) bg_popup_sub_pane

0xa784,	// (0x00057574) bg_popup_window_pane_g1_ParamLimits

0xa784,	// (0x00057574) bg_popup_window_pane_g1

0xa790,	// (0x00057580) bg_popup_window_pane_g2_ParamLimits

0xa790,	// (0x00057580) bg_popup_window_pane_g2

0xa79c,	// (0x0005758c) bg_popup_window_pane_g3_ParamLimits

0xa79c,	// (0x0005758c) bg_popup_window_pane_g3

0xa7a8,	// (0x00057598) bg_popup_window_pane_g4_ParamLimits

0xa7a8,	// (0x00057598) bg_popup_window_pane_g4

0xa7b4,	// (0x000575a4) bg_popup_window_pane_g5_ParamLimits

0xa7b4,	// (0x000575a4) bg_popup_window_pane_g5

0xa7c0,	// (0x000575b0) bg_popup_window_pane_g6_ParamLimits

0xa7c0,	// (0x000575b0) bg_popup_window_pane_g6

0xa7cc,	// (0x000575bc) bg_popup_window_pane_g7_ParamLimits

0xa7cc,	// (0x000575bc) bg_popup_window_pane_g7

0xa7d8,	// (0x000575c8) bg_popup_window_pane_g8_ParamLimits

0xa7d8,	// (0x000575c8) bg_popup_window_pane_g8

0xa7e4,	// (0x000575d4) bg_popup_window_pane_g9_ParamLimits

0xa7e4,	// (0x000575d4) bg_popup_window_pane_g9

0xa7f0,	// (0x000575e0) bg_popup_window_pane_g10_ParamLimits

0xa7f0,	// (0x000575e0) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0005c6db) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0005c6db) bg_popup_window_pane_g

0xa719,	// (0x00057509) bg_popup_heading_pane_ParamLimits

0xa719,	// (0x00057509) bg_popup_heading_pane

0x60c8,	// (0x00052eb8) tabs_4_passive_pane_cp_srt_ParamLimits

0x60c8,	// (0x00052eb8) tabs_4_passive_pane_cp_srt

0x60da,	// (0x00052eca) tabs_4_passive_pane_srt_ParamLimits

0xa72d,	// (0x0005751d) heading_pane_g2

0x60da,	// (0x00052eca) tabs_4_passive_pane_srt

0x8eb4,	// (0x00055ca4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8eb4,	// (0x00055ca4) bg_passive_tab_pane_cp3_srt

0xa735,	// (0x00057525) heading_pane_t1_ParamLimits

0xa735,	// (0x00057525) heading_pane_t1

0xa74c,	// (0x0005753c) heading_pane_t2_ParamLimits

0xa74c,	// (0x0005753c) heading_pane_t2

0x0001,

0xf8e6,	// (0x0005c6d6) heading_pane_t_ParamLimits

0xf8e6,	// (0x0005c6d6) heading_pane_t

0xa244,	// (0x00057034) bg_popup_heading_pane_g1

0xa2f3,	// (0x000570e3) bg_popup_heading_pane_g2

0xa2fd,	// (0x000570ed) bg_popup_heading_pane_g3

0xa307,	// (0x000570f7) bg_popup_heading_pane_g4

0xa311,	// (0x00057101) bg_popup_heading_pane_g5

0xa31b,	// (0x0005710b) bg_popup_heading_pane_g6

0xa323,	// (0x00057113) bg_popup_heading_pane_g7

0xa32b,	// (0x0005711b) bg_popup_heading_pane_g8

0xa335,	// (0x00057125) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0005c692) bg_popup_heading_pane_g

0x99fc,	// (0x000567ec) bg_popup_sub_pane_g1

0x9a0c,	// (0x000567fc) bg_popup_sub_pane_g2

0x9a04,	// (0x000567f4) bg_popup_sub_pane_g3

0x9a1c,	// (0x0005680c) bg_popup_sub_pane_g4

0x9a14,	// (0x00056804) bg_popup_sub_pane_g5

0x9a24,	// (0x00056814) bg_popup_sub_pane_g6

0x9a2c,	// (0x0005681c) bg_popup_sub_pane_g7

0x9a3c,	// (0x0005682c) bg_popup_sub_pane_g8

0x9a34,	// (0x00056824) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0005c66c) bg_popup_sub_pane_g

0x765f,	// (0x0005444f) bg_popup_window_pane_cp5_ParamLimits

0x765f,	// (0x0005444f) bg_popup_window_pane_cp5

0x767b,	// (0x0005446b) popup_note_window_g1_ParamLimits

0x767b,	// (0x0005446b) popup_note_window_g1

0x7687,	// (0x00054477) popup_note_window_t1_ParamLimits

0x7687,	// (0x00054477) popup_note_window_t1

0x769d,	// (0x0005448d) popup_note_window_t2_ParamLimits

0x769d,	// (0x0005448d) popup_note_window_t2

0x76b3,	// (0x000544a3) popup_note_window_t3_ParamLimits

0x76b3,	// (0x000544a3) popup_note_window_t3

0x76c9,	// (0x000544b9) popup_note_window_t4_ParamLimits

0x76c9,	// (0x000544b9) popup_note_window_t4

0x76f1,	// (0x000544e1) popup_note_window_t5_ParamLimits

0x76f1,	// (0x000544e1) popup_note_window_t5

0x0004,

0xf59b,	// (0x0005c38b) popup_note_window_t_ParamLimits

0xf59b,	// (0x0005c38b) popup_note_window_t

0x7715,	// (0x00054505) bg_popup_window_pane_cp6_ParamLimits

0x7715,	// (0x00054505) bg_popup_window_pane_cp6

0xa1c0,	// (0x00056fb0) popup_note_image_window_g1_ParamLimits

0xa1c0,	// (0x00056fb0) popup_note_image_window_g1

0xa1cc,	// (0x00056fbc) popup_note_image_window_g2_ParamLimits

0xa1cc,	// (0x00056fbc) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0005c660) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0005c660) popup_note_image_window_g

0xa1e5,	// (0x00056fd5) popup_note_image_window_t1_ParamLimits

0xa1e5,	// (0x00056fd5) popup_note_image_window_t1

0xa1fe,	// (0x00056fee) popup_note_image_window_t2_ParamLimits

0xa1fe,	// (0x00056fee) popup_note_image_window_t2

0xa217,	// (0x00057007) popup_note_image_window_t3_ParamLimits

0xa217,	// (0x00057007) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0005c665) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0005c665) popup_note_image_window_t

0xa080,	// (0x00056e70) bg_popup_window_pane_cp7_ParamLimits

0xa080,	// (0x00056e70) bg_popup_window_pane_cp7

0xa0b0,	// (0x00056ea0) popup_note_wait_window_g1_ParamLimits

0xa0b0,	// (0x00056ea0) popup_note_wait_window_g1

0xa0bc,	// (0x00056eac) popup_note_wait_window_g2_ParamLimits

0xa0bc,	// (0x00056eac) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0005c64e) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0005c64e) popup_note_wait_window_g

0xa0d4,	// (0x00056ec4) popup_note_wait_window_t1_ParamLimits

0xa0d4,	// (0x00056ec4) popup_note_wait_window_t1

0xa0fb,	// (0x00056eeb) popup_note_wait_window_t2_ParamLimits

0xa0fb,	// (0x00056eeb) popup_note_wait_window_t2

0xa119,	// (0x00056f09) popup_note_wait_window_t3_ParamLimits

0xa119,	// (0x00056f09) popup_note_wait_window_t3

0xa12c,	// (0x00056f1c) popup_note_wait_window_t4_ParamLimits

0xa12c,	// (0x00056f1c) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0005c655) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0005c655) popup_note_wait_window_t

0xa151,	// (0x00056f41) wait_bar_pane_ParamLimits

0xa151,	// (0x00056f41) wait_bar_pane

0x2456,	// (0x0004f246) wait_anim_pane

0x2456,	// (0x0004f246) wait_border_pane

0x244c,	// (0x0004f23c) wait_anim_pane_g1

0x244c,	// (0x0004f23c) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0005c514) wait_anim_pane_g

0xa024,	// (0x00056e14) wait_border_pane_g1

0xa02f,	// (0x00056e1f) wait_border_pane_g2

0xa038,	// (0x00056e28) wait_border_pane_g3

0x0002,

0xf857,	// (0x0005c647) wait_border_pane_g

0x9e8e,	// (0x00056c7e) bg_popup_window_pane_cp16_ParamLimits

0x9e8e,	// (0x00056c7e) bg_popup_window_pane_cp16

0x9f8e,	// (0x00056d7e) indicator_popup_pane_cp4_ParamLimits

0x9f8e,	// (0x00056d7e) indicator_popup_pane_cp4

0x9fa2,	// (0x00056d92) popup_query_data_window_t1_ParamLimits

0x9fa2,	// (0x00056d92) popup_query_data_window_t1

0x9fb4,	// (0x00056da4) popup_query_data_window_t2_ParamLimits

0x9fb4,	// (0x00056da4) popup_query_data_window_t2

0x9fcd,	// (0x00056dbd) popup_query_data_window_t3_ParamLimits

0x9fcd,	// (0x00056dbd) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0005c640) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0005c640) popup_query_data_window_t

0x9fe7,	// (0x00056dd7) query_popup_data_pane_ParamLimits

0x9fe7,	// (0x00056dd7) query_popup_data_pane

0x9ffb,	// (0x00056deb) query_popup_data_pane_cp1_ParamLimits

0x9ffb,	// (0x00056deb) query_popup_data_pane_cp1

0x9e8e,	// (0x00056c7e) bg_popup_window_pane_cp10_ParamLimits

0x9e8e,	// (0x00056c7e) bg_popup_window_pane_cp10

0x9ec0,	// (0x00056cb0) indicator_popup_pane_ParamLimits

0x9ec0,	// (0x00056cb0) indicator_popup_pane

0x9ee2,	// (0x00056cd2) popup_query_code_window_t1_ParamLimits

0x9ee2,	// (0x00056cd2) popup_query_code_window_t1

0x9efc,	// (0x00056cec) popup_query_code_window_t2_ParamLimits

0x9efc,	// (0x00056cec) popup_query_code_window_t2

0x9f45,	// (0x00056d35) popup_query_code_window_t3_ParamLimits

0x9f45,	// (0x00056d35) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0005c639) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0005c639) popup_query_code_window_t

0x9f74,	// (0x00056d64) query_popup_pane_ParamLimits

0x9f74,	// (0x00056d64) query_popup_pane

0x7715,	// (0x00054505) bg_popup_window_pane_cp15_ParamLimits

0x7715,	// (0x00054505) bg_popup_window_pane_cp15

0x7735,	// (0x00054525) indicator_popup_pane_cp1_ParamLimits

0x7735,	// (0x00054525) indicator_popup_pane_cp1

0x7748,	// (0x00054538) indicator_popup_pane_cp2_ParamLimits

0x7748,	// (0x00054538) indicator_popup_pane_cp2

0x7763,	// (0x00054553) popup_query_data_code_window_g1_ParamLimits

0x7763,	// (0x00054553) popup_query_data_code_window_g1

0x7776,	// (0x00054566) popup_query_data_code_window_t1_ParamLimits

0x7776,	// (0x00054566) popup_query_data_code_window_t1

0x7788,	// (0x00054578) popup_query_data_code_window_t2_ParamLimits

0x7788,	// (0x00054578) popup_query_data_code_window_t2

0x779a,	// (0x0005458a) popup_query_data_code_window_t3_ParamLimits

0x779a,	// (0x0005458a) popup_query_data_code_window_t3

0x77b0,	// (0x000545a0) popup_query_data_code_window_t4_ParamLimits

0x77b0,	// (0x000545a0) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0005c396) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0005c396) popup_query_data_code_window_t

0x5c9c,	// (0x00052a8c) list_single_midp_graphic_pane_g3

0x77ca,	// (0x000545ba) query_popup_data_pane_cp2_ParamLimits

0x77dd,	// (0x000545cd) query_popup_pane_cp2_ParamLimits

0x77dd,	// (0x000545cd) query_popup_pane_cp2

0x2456,	// (0x0004f246) bg_popup_window_pane_cp11

0x9e86,	// (0x00056c76) heading_pane_cp5

0x78cd,	// (0x000546bd) listscroll_popup_info_pane

0x2456,	// (0x0004f246) input_focus_pane_cp3

0x77f8,	// (0x000545e8) query_popup_pane_t1

0x7806,	// (0x000545f6) list_popup_info_pane_ParamLimits

0x7806,	// (0x000545f6) list_popup_info_pane

0x7815,	// (0x00054605) listscroll_popup_info_pane_g1

0x781d,	// (0x0005460d) scroll_pane_cp7

0x7827,	// (0x00054617) popup_info_list_pane_t1_ParamLimits

0x7827,	// (0x00054617) popup_info_list_pane_t1

0x7841,	// (0x00054631) popup_info_list_pane_t2_ParamLimits

0x7841,	// (0x00054631) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0005c39f) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0005c39f) popup_info_list_pane_t

0x2456,	// (0x0004f246) bg_popup_window_pane_cp12

0xb273,	// (0x00058063) find_popup_pane

0x73e3,	// (0x000541d3) bg_popup_window_pane_cp3

0x785b,	// (0x0005464b) heading_pane_cp3

0x7867,	// (0x00054657) listscroll_popup_graphic_pane

0x2456,	// (0x0004f246) bg_popup_window_pane_cp4

0x78c3,	// (0x000546b3) heading_pane_cp4

0x78cd,	// (0x000546bd) listscroll_popup_colour_pane

0x78d5,	// (0x000546c5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x78d5,	// (0x000546c5) cell_large_graphic_colour_none_popup_pane

0x78e9,	// (0x000546d9) grid_large_graphic_colour_popup_pane_ParamLimits

0x78e9,	// (0x000546d9) grid_large_graphic_colour_popup_pane

0x7915,	// (0x00054705) listscroll_popup_colour_pane_g1_ParamLimits

0x7915,	// (0x00054705) listscroll_popup_colour_pane_g1

0x792c,	// (0x0005471c) listscroll_popup_colour_pane_g2_ParamLimits

0x792c,	// (0x0005471c) listscroll_popup_colour_pane_g2

0x7943,	// (0x00054733) listscroll_popup_colour_pane_g3_ParamLimits

0x7943,	// (0x00054733) listscroll_popup_colour_pane_g3

0x7953,	// (0x00054743) listscroll_popup_colour_pane_g4_ParamLimits

0x7953,	// (0x00054743) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0005c3a4) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0005c3a4) listscroll_popup_colour_pane_g

0x7967,	// (0x00054757) scroll_pane_cp6_ParamLimits

0x7967,	// (0x00054757) scroll_pane_cp6

0x7979,	// (0x00054769) cell_large_graphic_colour_popup_pane_ParamLimits

0x7979,	// (0x00054769) cell_large_graphic_colour_popup_pane

0x799e,	// (0x0005478e) cell_large_graphic_colour_none_popup_pane_t1

0x2456,	// (0x0004f246) grid_highlight_pane_cp5

0x79ad,	// (0x0005479d) cell_large_graphic_colour_popup_pane_g1

0x79b5,	// (0x000547a5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0005c3ad) cell_large_graphic_colour_popup_pane_g

0x79bd,	// (0x000547ad) cell_large_graphic_colour_popup_pane_g2_copy1

0x79c6,	// (0x000547b6) grid_highlight_pane_cp4

0x79ce,	// (0x000547be) bg_popup_window_pane_cp8_ParamLimits

0x79ce,	// (0x000547be) bg_popup_window_pane_cp8

0x79e9,	// (0x000547d9) popup_snote_single_text_window_g1_ParamLimits

0x79e9,	// (0x000547d9) popup_snote_single_text_window_g1

0x79fb,	// (0x000547eb) popup_snote_single_text_window_t1_ParamLimits

0x79fb,	// (0x000547eb) popup_snote_single_text_window_t1

0x7a0e,	// (0x000547fe) popup_snote_single_text_window_t2_ParamLimits

0x7a0e,	// (0x000547fe) popup_snote_single_text_window_t2

0x7a21,	// (0x00054811) popup_snote_single_text_window_t3_ParamLimits

0x7a21,	// (0x00054811) popup_snote_single_text_window_t3

0x7a5a,	// (0x0005484a) popup_snote_single_text_window_t4_ParamLimits

0x7a5a,	// (0x0005484a) popup_snote_single_text_window_t4

0x7a8e,	// (0x0005487e) popup_snote_single_text_window_t5_ParamLimits

0x7a8e,	// (0x0005487e) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0005c3b2) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0005c3b2) popup_snote_single_text_window_t

0x7abd,	// (0x000548ad) bg_popup_window_pane_cp9_ParamLimits

0x7abd,	// (0x000548ad) bg_popup_window_pane_cp9

0x79e9,	// (0x000547d9) popup_snote_single_graphic_window_g1_ParamLimits

0x79e9,	// (0x000547d9) popup_snote_single_graphic_window_g1

0x7acb,	// (0x000548bb) popup_snote_single_graphic_window_g2_ParamLimits

0x7acb,	// (0x000548bb) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0005c3bd) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0005c3bd) popup_snote_single_graphic_window_g

0x7ad7,	// (0x000548c7) popup_snote_single_graphic_window_t1_ParamLimits

0x7ad7,	// (0x000548c7) popup_snote_single_graphic_window_t1

0x7aea,	// (0x000548da) popup_snote_single_graphic_window_t2_ParamLimits

0x7aea,	// (0x000548da) popup_snote_single_graphic_window_t2

0x7afd,	// (0x000548ed) popup_snote_single_graphic_window_t3_ParamLimits

0x7afd,	// (0x000548ed) popup_snote_single_graphic_window_t3

0x7b36,	// (0x00054926) popup_snote_single_graphic_window_t4_ParamLimits

0x7b36,	// (0x00054926) popup_snote_single_graphic_window_t4

0x7b6a,	// (0x0005495a) popup_snote_single_graphic_window_t5_ParamLimits

0x7b6a,	// (0x0005495a) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0005c3c2) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0005c3c2) popup_snote_single_graphic_window_t

0xb1b1,	// (0x00057fa1) grid_graphic_popup_pane_ParamLimits

0xb1b1,	// (0x00057fa1) grid_graphic_popup_pane

0xb1df,	// (0x00057fcf) listscroll_popup_graphic_pane_g1_ParamLimits

0xb1df,	// (0x00057fcf) listscroll_popup_graphic_pane_g1

0xb1f3,	// (0x00057fe3) listscroll_popup_graphic_pane_g2_ParamLimits

0xb1f3,	// (0x00057fe3) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0005c7b6) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0005c7b6) listscroll_popup_graphic_pane_g

0xb207,	// (0x00057ff7) scroll_pane_cp5

0xb159,	// (0x00057f49) cell_graphic_popup_pane_ParamLimits

0xb159,	// (0x00057f49) cell_graphic_popup_pane

0xb13a,	// (0x00057f2a) cell_graphic_popup_pane_g1

0xb142,	// (0x00057f32) cell_graphic_popup_pane_g2

0x79bd,	// (0x000547ad) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0005c7af) cell_graphic_popup_pane_g

0xb14b,	// (0x00057f3b) cell_graphic_popup_pane_t2

0x79c6,	// (0x000547b6) grid_highlight_pane_cp3

0x7bab,	// (0x0005499b) list_gen_pane_ParamLimits

0x7bab,	// (0x0005499b) list_gen_pane

0x7bdd,	// (0x000549cd) scroll_pane

0xb09c,	// (0x00057e8c) bg_list_pane_g1_ParamLimits

0xb09c,	// (0x00057e8c) bg_list_pane_g1

0xb0b7,	// (0x00057ea7) bg_list_pane_g2_ParamLimits

0xb0b7,	// (0x00057ea7) bg_list_pane_g2

0xb0ca,	// (0x00057eba) bg_list_pane_g3_ParamLimits

0xb0ca,	// (0x00057eba) bg_list_pane_g3

0xb0dc,	// (0x00057ecc) bg_list_pane_g4_ParamLimits

0xb0dc,	// (0x00057ecc) bg_list_pane_g4

0xb0ee,	// (0x00057ede) bg_list_pane_g5_ParamLimits

0xb0ee,	// (0x00057ede) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0005c7a4) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0005c7a4) bg_list_pane_g

0xb019,	// (0x00057e09) list_double2_graphic_large_graphic_pane_ParamLimits

0xb019,	// (0x00057e09) list_double2_graphic_large_graphic_pane

0xb019,	// (0x00057e09) list_double2_graphic_pane_ParamLimits

0xb019,	// (0x00057e09) list_double2_graphic_pane

0xb019,	// (0x00057e09) list_double2_large_graphic_pane_ParamLimits

0xb019,	// (0x00057e09) list_double2_large_graphic_pane

0xb019,	// (0x00057e09) list_double2_pane_ParamLimits

0xb019,	// (0x00057e09) list_double2_pane

0xb019,	// (0x00057e09) list_double_graphic_heading_pane_ParamLimits

0xb019,	// (0x00057e09) list_double_graphic_heading_pane

0xb019,	// (0x00057e09) list_double_graphic_pane_ParamLimits

0xb019,	// (0x00057e09) list_double_graphic_pane

0xb019,	// (0x00057e09) list_double_heading_pane_ParamLimits

0xb019,	// (0x00057e09) list_double_heading_pane

0xb019,	// (0x00057e09) list_double_large_graphic_pane_ParamLimits

0xb019,	// (0x00057e09) list_double_large_graphic_pane

0xb019,	// (0x00057e09) list_double_number_pane_ParamLimits

0xb019,	// (0x00057e09) list_double_number_pane

0xb019,	// (0x00057e09) list_double_pane_ParamLimits

0xb019,	// (0x00057e09) list_double_pane

0xb019,	// (0x00057e09) list_double_time_pane_ParamLimits

0xb019,	// (0x00057e09) list_double_time_pane

0xb019,	// (0x00057e09) list_setting_number_pane_ParamLimits

0xb019,	// (0x00057e09) list_setting_number_pane

0xb019,	// (0x00057e09) list_setting_pane_ParamLimits

0xb019,	// (0x00057e09) list_setting_pane

0xb058,	// (0x00057e48) list_single_2graphic_pane_ParamLimits

0xb058,	// (0x00057e48) list_single_2graphic_pane

0xb058,	// (0x00057e48) list_single_graphic_heading_pane_ParamLimits

0xb058,	// (0x00057e48) list_single_graphic_heading_pane

0xb058,	// (0x00057e48) list_single_graphic_pane_ParamLimits

0xb058,	// (0x00057e48) list_single_graphic_pane

0xb058,	// (0x00057e48) list_single_heading_pane_ParamLimits

0xb058,	// (0x00057e48) list_single_heading_pane

0x7fa3,	// (0x00054d93) list_single_large_graphic_pane_ParamLimits

0x7fa3,	// (0x00054d93) list_single_large_graphic_pane

0xb058,	// (0x00057e48) list_single_number_heading_pane_ParamLimits

0xb058,	// (0x00057e48) list_single_number_heading_pane

0xb058,	// (0x00057e48) list_single_number_pane_ParamLimits

0xb058,	// (0x00057e48) list_single_number_pane

0xb058,	// (0x00057e48) list_single_pane_ParamLimits

0xb058,	// (0x00057e48) list_single_pane

0x2456,	// (0x0004f246) list_highlight_pane_cp1

0x8f68,	// (0x00055d58) list_single_pane_g1_ParamLimits

0x8f68,	// (0x00055d58) list_single_pane_g1

0x7c11,	// (0x00054a01) list_single_pane_g2_ParamLimits

0x7c11,	// (0x00054a01) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0005c3de) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0005c3de) list_single_pane_g

0x608e,	// (0x00052e7e) list_single_pane_t1_ParamLimits

0x608e,	// (0x00052e7e) list_single_pane_t1

0x8f68,	// (0x00055d58) list_single_number_pane_g1_ParamLimits

0x8f68,	// (0x00055d58) list_single_number_pane_g1

0x7c11,	// (0x00054a01) list_single_number_pane_g2_ParamLimits

0x7c11,	// (0x00054a01) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0005c3de) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0005c3de) list_single_number_pane_g

0x5fb8,	// (0x00052da8) list_single_number_pane_t1_ParamLimits

0x5fb8,	// (0x00052da8) list_single_number_pane_t1

0x5fce,	// (0x00052dbe) list_single_number_pane_t2_ParamLimits

0x5fce,	// (0x00052dbe) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0005c765) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0005c765) list_single_number_pane_t

0x4ec6,	// (0x00051cb6) list_single_graphic_pane_g1_ParamLimits

0x4ec6,	// (0x00051cb6) list_single_graphic_pane_g1

0x8f68,	// (0x00055d58) list_single_graphic_pane_g2_ParamLimits

0x8f68,	// (0x00055d58) list_single_graphic_pane_g2

0x7c11,	// (0x00054a01) list_single_graphic_pane_g3_ParamLimits

0x7c11,	// (0x00054a01) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0005c3cd) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0005c3cd) list_single_graphic_pane_g

0x4001,	// (0x00050df1) list_single_graphic_pane_t1_ParamLimits

0x4001,	// (0x00050df1) list_single_graphic_pane_t1

0x4ed2,	// (0x00051cc2) list_single_heading_pane_g1_ParamLimits

0x4ed2,	// (0x00051cc2) list_single_heading_pane_g1

0x7c11,	// (0x00054a01) list_single_heading_pane_g2_ParamLimits

0x7c11,	// (0x00054a01) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0005c3d4) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005c3d4) list_single_heading_pane_g

0x4ee5,	// (0x00051cd5) list_single_heading_pane_t1_ParamLimits

0x4ee5,	// (0x00051cd5) list_single_heading_pane_t1

0x7c1d,	// (0x00054a0d) list_single_heading_pane_t2_ParamLimits

0x7c1d,	// (0x00054a0d) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0005c3d9) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0005c3d9) list_single_heading_pane_t

0x8f68,	// (0x00055d58) list_single_number_heading_pane_g1_ParamLimits

0x8f68,	// (0x00055d58) list_single_number_heading_pane_g1

0x7c11,	// (0x00054a01) list_single_number_heading_pane_g2_ParamLimits

0x7c11,	// (0x00054a01) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0005c3de) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0005c3de) list_single_number_heading_pane_g

0x4efb,	// (0x00051ceb) list_single_number_heading_pane_t1_ParamLimits

0x4efb,	// (0x00051ceb) list_single_number_heading_pane_t1

0x4f11,	// (0x00051d01) list_single_number_heading_pane_t2_ParamLimits

0x4f11,	// (0x00051d01) list_single_number_heading_pane_t2

0x4f23,	// (0x00051d13) list_single_number_heading_pane_t3_ParamLimits

0x4f23,	// (0x00051d13) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0005c3e3) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0005c3e3) list_single_number_heading_pane_t

0x4f35,	// (0x00051d25) list_single_graphic_heading_pane_g1_ParamLimits

0x4f35,	// (0x00051d25) list_single_graphic_heading_pane_g1

0x7c2f,	// (0x00054a1f) list_single_graphic_heading_pane_g4_ParamLimits

0x7c2f,	// (0x00054a1f) list_single_graphic_heading_pane_g4

0x7c11,	// (0x00054a01) list_single_graphic_heading_pane_g5_ParamLimits

0x7c11,	// (0x00054a01) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0005c3ea) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0005c3ea) list_single_graphic_heading_pane_g

0x4efb,	// (0x00051ceb) list_single_graphic_heading_pane_t1_ParamLimits

0x4efb,	// (0x00051ceb) list_single_graphic_heading_pane_t1

0x4f4d,	// (0x00051d3d) list_single_graphic_heading_pane_t2_ParamLimits

0x4f4d,	// (0x00051d3d) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0005c3f1) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0005c3f1) list_single_graphic_heading_pane_t

0x7c40,	// (0x00054a30) list_single_large_graphic_pane_g1_ParamLimits

0x7c40,	// (0x00054a30) list_single_large_graphic_pane_g1

0x7c4c,	// (0x00054a3c) list_single_large_graphic_pane_g2_ParamLimits

0x7c4c,	// (0x00054a3c) list_single_large_graphic_pane_g2

0x7c58,	// (0x00054a48) list_single_large_graphic_pane_g3_ParamLimits

0x7c58,	// (0x00054a48) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0005c3f6) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0005c3f6) list_single_large_graphic_pane_g

0xa02f,	// (0x00056e1f) wait_border_pane_g2_copy1

0x7c64,	// (0x00054a54) list_single_large_graphic_pane_g4_cp2

0x4f65,	// (0x00051d55) list_single_large_graphic_pane_t1_ParamLimits

0x4f65,	// (0x00051d55) list_single_large_graphic_pane_t1

0x7c6c,	// (0x00054a5c) list_double_pane_g1_ParamLimits

0x7c6c,	// (0x00054a5c) list_double_pane_g1

0x7c78,	// (0x00054a68) list_double_pane_g2_ParamLimits

0x7c78,	// (0x00054a68) list_double_pane_g2

0x0001,

0xf60d,	// (0x0005c3fd) list_double_pane_g_ParamLimits

0xf60d,	// (0x0005c3fd) list_double_pane_g

0x4f7b,	// (0x00051d6b) list_double_pane_t1_ParamLimits

0x4f7b,	// (0x00051d6b) list_double_pane_t1

0x4f91,	// (0x00051d81) list_double_pane_t2_ParamLimits

0x4f91,	// (0x00051d81) list_double_pane_t2

0x0001,

0xf612,	// (0x0005c402) list_double_pane_t_ParamLimits

0xf612,	// (0x0005c402) list_double_pane_t

0x4fa3,	// (0x00051d93) list_double2_pane_g1_ParamLimits

0x4fa3,	// (0x00051d93) list_double2_pane_g1

0x4fb4,	// (0x00051da4) list_double2_pane_g2_ParamLimits

0x4fb4,	// (0x00051da4) list_double2_pane_g2

0x0001,

0xf617,	// (0x0005c407) list_double2_pane_g_ParamLimits

0xf617,	// (0x0005c407) list_double2_pane_g

0x4fc0,	// (0x00051db0) list_double2_pane_t1_ParamLimits

0x4fc0,	// (0x00051db0) list_double2_pane_t1

0x4fd6,	// (0x00051dc6) list_double2_pane_t2_ParamLimits

0x4fd6,	// (0x00051dc6) list_double2_pane_t2

0x0001,

0xf61c,	// (0x0005c40c) list_double2_pane_t_ParamLimits

0xf61c,	// (0x0005c40c) list_double2_pane_t

0x7c6c,	// (0x00054a5c) list_double_number_pane_g1_ParamLimits

0x7c6c,	// (0x00054a5c) list_double_number_pane_g1

0x7c78,	// (0x00054a68) list_double_number_pane_g2_ParamLimits

0x7c78,	// (0x00054a68) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x0005c3fd) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x0005c3fd) list_double_number_pane_g

0x4fe8,	// (0x00051dd8) list_double_number_pane_t1_ParamLimits

0x4fe8,	// (0x00051dd8) list_double_number_pane_t1

0x4ffa,	// (0x00051dea) list_double_number_pane_t2_ParamLimits

0x4ffa,	// (0x00051dea) list_double_number_pane_t2

0x5010,	// (0x00051e00) list_double_number_pane_t3_ParamLimits

0x5010,	// (0x00051e00) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0005c411) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0005c411) list_double_number_pane_t

0x5022,	// (0x00051e12) list_double_graphic_pane_g1_ParamLimits

0x5022,	// (0x00051e12) list_double_graphic_pane_g1

0x502e,	// (0x00051e1e) list_double_graphic_pane_g2_ParamLimits

0x502e,	// (0x00051e1e) list_double_graphic_pane_g2

0x503d,	// (0x00051e2d) list_double_graphic_pane_g3_ParamLimits

0x503d,	// (0x00051e2d) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x0005c418) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x0005c418) list_double_graphic_pane_g

0x5055,	// (0x00051e45) list_double_graphic_pane_t1_ParamLimits

0x5055,	// (0x00051e45) list_double_graphic_pane_t1

0x506b,	// (0x00051e5b) list_double_graphic_pane_t2_ParamLimits

0x506b,	// (0x00051e5b) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0005c421) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0005c421) list_double_graphic_pane_t

0x507d,	// (0x00051e6d) list_double2_graphic_pane_g1_ParamLimits

0x507d,	// (0x00051e6d) list_double2_graphic_pane_g1

0x7c84,	// (0x00054a74) list_double2_graphic_pane_g2_ParamLimits

0x7c84,	// (0x00054a74) list_double2_graphic_pane_g2

0x5089,	// (0x00051e79) list_double2_graphic_pane_g3_ParamLimits

0x5089,	// (0x00051e79) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0005c426) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0005c426) list_double2_graphic_pane_g

0x5095,	// (0x00051e85) list_double2_graphic_pane_t1_ParamLimits

0x5095,	// (0x00051e85) list_double2_graphic_pane_t1

0x50ab,	// (0x00051e9b) list_double2_graphic_pane_t2_ParamLimits

0x50ab,	// (0x00051e9b) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005c42d) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005c42d) list_double2_graphic_pane_t

0x50bd,	// (0x00051ead) list_double_large_graphic_pane_g1_ParamLimits

0x50bd,	// (0x00051ead) list_double_large_graphic_pane_g1

0x50e8,	// (0x00051ed8) list_double_large_graphic_pane_g2_ParamLimits

0x50e8,	// (0x00051ed8) list_double_large_graphic_pane_g2

0x7c78,	// (0x00054a68) list_double_large_graphic_pane_g3_ParamLimits

0x7c78,	// (0x00054a68) list_double_large_graphic_pane_g3

0x50fe,	// (0x00051eee) list_double_large_graphic_pane_g4_ParamLimits

0x50fe,	// (0x00051eee) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0005c432) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0005c432) list_double_large_graphic_pane_g

0x5111,	// (0x00051f01) list_double_large_graphic_pane_t1_ParamLimits

0x5111,	// (0x00051f01) list_double_large_graphic_pane_t1

0x512a,	// (0x00051f1a) list_double_large_graphic_pane_t2_ParamLimits

0x512a,	// (0x00051f1a) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x0005c43d) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x0005c43d) list_double_large_graphic_pane_t

0x7ca5,	// (0x00054a95) list_double2_large_graphic_pane_g1_ParamLimits

0x7ca5,	// (0x00054a95) list_double2_large_graphic_pane_g1

0x513c,	// (0x00051f2c) list_double2_large_graphic_pane_g2_ParamLimits

0x513c,	// (0x00051f2c) list_double2_large_graphic_pane_g2

0x5089,	// (0x00051e79) list_double2_large_graphic_pane_g3_ParamLimits

0x5089,	// (0x00051e79) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0005c442) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0005c442) list_double2_large_graphic_pane_g

0x514d,	// (0x00051f3d) list_double2_large_graphic_pane_t1_ParamLimits

0x514d,	// (0x00051f3d) list_double2_large_graphic_pane_t1

0x5163,	// (0x00051f53) list_double2_large_graphic_pane_t2_ParamLimits

0x5163,	// (0x00051f53) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x0005c449) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x0005c449) list_double2_large_graphic_pane_t

0x5175,	// (0x00051f65) list_double_heading_pane_g1_ParamLimits

0x5175,	// (0x00051f65) list_double_heading_pane_g1

0x5186,	// (0x00051f76) list_double_heading_pane_g2_ParamLimits

0x5186,	// (0x00051f76) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0005c44e) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0005c44e) list_double_heading_pane_g

0x5192,	// (0x00051f82) list_double_heading_pane_t1_ParamLimits

0x5192,	// (0x00051f82) list_double_heading_pane_t1

0x51a8,	// (0x00051f98) list_double_heading_pane_t2_ParamLimits

0x51a8,	// (0x00051f98) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0005c453) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0005c453) list_double_heading_pane_t

0x51ba,	// (0x00051faa) list_double_graphic_heading_pane_g1_ParamLimits

0x51ba,	// (0x00051faa) list_double_graphic_heading_pane_g1

0x5175,	// (0x00051f65) list_double_graphic_heading_pane_g2_ParamLimits

0x5175,	// (0x00051f65) list_double_graphic_heading_pane_g2

0x5186,	// (0x00051f76) list_double_graphic_heading_pane_g3_ParamLimits

0x5186,	// (0x00051f76) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x0005c458) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x0005c458) list_double_graphic_heading_pane_g

0x51c6,	// (0x00051fb6) list_double_graphic_heading_pane_t1_ParamLimits

0x51c6,	// (0x00051fb6) list_double_graphic_heading_pane_t1

0x51dc,	// (0x00051fcc) list_double_graphic_heading_pane_t2_ParamLimits

0x51dc,	// (0x00051fcc) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0005c45f) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0005c45f) list_double_graphic_heading_pane_t

0x51ee,	// (0x00051fde) list_double_time_pane_g1_ParamLimits

0x51ee,	// (0x00051fde) list_double_time_pane_g1

0x51ff,	// (0x00051fef) list_double_time_pane_g2_ParamLimits

0x51ff,	// (0x00051fef) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0005c464) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0005c464) list_double_time_pane_g

0x520b,	// (0x00051ffb) list_double_time_pane_t1_ParamLimits

0x520b,	// (0x00051ffb) list_double_time_pane_t1

0x5221,	// (0x00052011) list_double_time_pane_t2_ParamLimits

0x5221,	// (0x00052011) list_double_time_pane_t2

0x5233,	// (0x00052023) list_double_time_pane_t3_ParamLimits

0x5233,	// (0x00052023) list_double_time_pane_t3

0x5245,	// (0x00052035) list_double_time_pane_t4_ParamLimits

0x5245,	// (0x00052035) list_double_time_pane_t4

0x0003,

0xf679,	// (0x0005c469) list_double_time_pane_t_ParamLimits

0xf679,	// (0x0005c469) list_double_time_pane_t

0x5257,	// (0x00052047) list_setting_pane_g1_ParamLimits

0x5257,	// (0x00052047) list_setting_pane_g1

0x5263,	// (0x00052053) list_setting_pane_g2_ParamLimits

0x5263,	// (0x00052053) list_setting_pane_g2

0x0001,

0xf682,	// (0x0005c472) list_setting_pane_g_ParamLimits

0xf682,	// (0x0005c472) list_setting_pane_g

0x526f,	// (0x0005205f) list_setting_pane_t1_ParamLimits

0x526f,	// (0x0005205f) list_setting_pane_t1

0x5289,	// (0x00052079) list_setting_pane_t2_ParamLimits

0x5289,	// (0x00052079) list_setting_pane_t2

0x0002,

0xf687,	// (0x0005c477) list_setting_pane_t_ParamLimits

0xf687,	// (0x0005c477) list_setting_pane_t

0x52c8,	// (0x000520b8) set_value_pane_cp_ParamLimits

0x52c8,	// (0x000520b8) set_value_pane_cp

0x52d6,	// (0x000520c6) list_setting_number_pane_g1_ParamLimits

0x52d6,	// (0x000520c6) list_setting_number_pane_g1

0x52e2,	// (0x000520d2) list_setting_number_pane_g2_ParamLimits

0x52e2,	// (0x000520d2) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0005c47e) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0005c47e) list_setting_number_pane_g

0x52ee,	// (0x000520de) list_setting_number_pane_t1_ParamLimits

0x52ee,	// (0x000520de) list_setting_number_pane_t1

0x5307,	// (0x000520f7) list_setting_number_pane_t2_ParamLimits

0x5307,	// (0x000520f7) list_setting_number_pane_t2

0x5321,	// (0x00052111) list_setting_number_pane_t3_ParamLimits

0x5321,	// (0x00052111) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0005c483) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0005c483) list_setting_number_pane_t

0x52c8,	// (0x000520b8) set_value_pane_ParamLimits

0x52c8,	// (0x000520b8) set_value_pane

0x7cb1,	// (0x00054aa1) bg_set_opt_pane_ParamLimits

0x7cb1,	// (0x00054aa1) bg_set_opt_pane

0x5364,	// (0x00052154) set_value_pane_t1

0x7cd2,	// (0x00054ac2) slider_set_pane_cp3

0x7cdb,	// (0x00054acb) volume_small_pane_cp

0x7ce4,	// (0x00054ad4) list_form_gen_pane

0x7ced,	// (0x00054add) scroll_pane_cp8

0x537a,	// (0x0005216a) form_field_data_pane_ParamLimits

0x537a,	// (0x0005216a) form_field_data_pane

0x53a2,	// (0x00052192) form_field_data_wide_pane_ParamLimits

0x53a2,	// (0x00052192) form_field_data_wide_pane

0x53c9,	// (0x000521b9) form_field_popup_pane_ParamLimits

0x53c9,	// (0x000521b9) form_field_popup_pane

0x53eb,	// (0x000521db) form_field_popup_wide_pane_ParamLimits

0x53eb,	// (0x000521db) form_field_popup_wide_pane

0x540c,	// (0x000521fc) form_field_slider_pane_ParamLimits

0x540c,	// (0x000521fc) form_field_slider_pane

0x541f,	// (0x0005220f) form_field_slider_wide_pane_ParamLimits

0x541f,	// (0x0005220f) form_field_slider_wide_pane

0x7cfe,	// (0x00054aee) data_form_pane

0x543c,	// (0x0005222c) form_field_data_pane_t1

0x7d0a,	// (0x00054afa) input_focus_pane

0x7d18,	// (0x00054b08) data_form_wide_pane

0x5462,	// (0x00052252) form_field_data_wide_pane_t1

0x79db,	// (0x000547cb) input_focus_pane_cp6

0x5484,	// (0x00052274) form_field_popup_pane_t1

0x7d0a,	// (0x00054afa) input_focus_pane_cp7

0x7d44,	// (0x00054b34) list_form_pane

0x54a6,	// (0x00052296) form_field_popup_wide_pane_t1

0x7d0a,	// (0x00054afa) input_focus_pane_cp8

0x7d50,	// (0x00054b40) list_form_wide_pane

0x54c3,	// (0x000522b3) form_field_slider_pane_t1_ParamLimits

0x54c3,	// (0x000522b3) form_field_slider_pane_t1

0x54db,	// (0x000522cb) form_field_slider_pane_t2_ParamLimits

0x54db,	// (0x000522cb) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0005c493) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0005c493) form_field_slider_pane_t

0x765f,	// (0x0005444f) input_focus_pane_cp9_ParamLimits

0x765f,	// (0x0005444f) input_focus_pane_cp9

0x54f0,	// (0x000522e0) slider_cont_pane_ParamLimits

0x54f0,	// (0x000522e0) slider_cont_pane

0x7d5f,	// (0x00054b4f) form_field_slider_wide_pane_t1_ParamLimits

0x7d5f,	// (0x00054b4f) form_field_slider_wide_pane_t1

0x5504,	// (0x000522f4) form_field_slider_wide_pane_t2_ParamLimits

0x5504,	// (0x000522f4) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x0005c498) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x0005c498) form_field_slider_wide_pane_t

0x765f,	// (0x0005444f) input_focus_pane_cp10_ParamLimits

0x765f,	// (0x0005444f) input_focus_pane_cp10

0x5516,	// (0x00052306) slider_cont_pane_cp1_ParamLimits

0x5516,	// (0x00052306) slider_cont_pane_cp1

0x552a,	// (0x0005231a) slider_form_pane_cp

0x7d71,	// (0x00054b61) input_focus_pane_g1

0x7d79,	// (0x00054b69) input_focus_pane_g2

0x7d81,	// (0x00054b71) input_focus_pane_g3

0x7d89,	// (0x00054b79) input_focus_pane_g4

0x7d91,	// (0x00054b81) input_focus_pane_g5

0x7d99,	// (0x00054b89) input_focus_pane_g6

0x7da1,	// (0x00054b91) input_focus_pane_g7

0x7da9,	// (0x00054b99) input_focus_pane_g8

0x7db1,	// (0x00054ba1) input_focus_pane_g9

0x244c,	// (0x0004f23c) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0005c49d) input_focus_pane_g

0xa038,	// (0x00056e28) wait_border_pane_g3_copy1

0x5532,	// (0x00052322) data_form_pane_t1

0x244c,	// (0x0004f23c) wait_anim_pane_g1_copy1

0x6058,	// (0x00052e48) data_form_wide_pane_t1

0x5551,	// (0x00052341) list_form_graphic_pane_cp_ParamLimits

0x5551,	// (0x00052341) list_form_graphic_pane_cp

0xafbd,	// (0x00057dad) slider_form_pane_g1

0xafc6,	// (0x00057db6) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0005c795) slider_form_pane_g

0x5551,	// (0x00052341) list_form_graphic_pane_ParamLimits

0x5551,	// (0x00052341) list_form_graphic_pane

0x5563,	// (0x00052353) list_form_graphic_pane_g1

0x556b,	// (0x0005235b) list_form_graphic_pane_t1_ParamLimits

0x556b,	// (0x0005235b) list_form_graphic_pane_t1

0x73e3,	// (0x000541d3) list_highlight_pane_cp5_ParamLimits

0x73e3,	// (0x000541d3) list_highlight_pane_cp5

0x7db9,	// (0x00054ba9) find_pane_g1

0x7dc2,	// (0x00054bb2) input_find_pane

0x5580,	// (0x00052370) input_find_pane_g1_ParamLimits

0x5580,	// (0x00052370) input_find_pane_g1

0x558c,	// (0x0005237c) input_find_pane_t1_ParamLimits

0x558c,	// (0x0005237c) input_find_pane_t1

0x55a1,	// (0x00052391) input_find_pane_t2_ParamLimits

0x55a1,	// (0x00052391) input_find_pane_t2

0x0001,

0xf6c2,	// (0x0005c4b2) input_find_pane_t_ParamLimits

0xf6c2,	// (0x0005c4b2) input_find_pane_t

0x7dcb,	// (0x00054bbb) input_focus_pane_cp5_ParamLimits

0x7dcb,	// (0x00054bbb) input_focus_pane_cp5

0x7de5,	// (0x00054bd5) bg_popup_window_pane_cp2_ParamLimits

0x7de5,	// (0x00054bd5) bg_popup_window_pane_cp2

0x7df2,	// (0x00054be2) listscroll_menu_pane_ParamLimits

0x7df2,	// (0x00054be2) listscroll_menu_pane

0x7dfe,	// (0x00054bee) popup_submenu_window_ParamLimits

0x7dfe,	// (0x00054bee) popup_submenu_window

0x7e2e,	// (0x00054c1e) find_popup_pane_g1

0x7e36,	// (0x00054c26) input_popup_find_pane_cp

0x7dcb,	// (0x00054bbb) input_focus_pane_cp4_ParamLimits

0x7dcb,	// (0x00054bbb) input_focus_pane_cp4

0x7e4e,	// (0x00054c3e) input_popup_find_pane_t1_ParamLimits

0x7e4e,	// (0x00054c3e) input_popup_find_pane_t1

0x2456,	// (0x0004f246) bg_popup_sub_pane_cp

0x7e7c,	// (0x00054c6c) listscroll_popup_sub_pane

0x7e84,	// (0x00054c74) list_submenu_pane_ParamLimits

0x7e84,	// (0x00054c74) list_submenu_pane

0x7e95,	// (0x00054c85) scroll_pane_cp4

0x7e9d,	// (0x00054c8d) list_single_popup_submenu_pane_ParamLimits

0x7e9d,	// (0x00054c8d) list_single_popup_submenu_pane

0x7eb2,	// (0x00054ca2) list_single_popup_submenu_pane_g1

0x7eba,	// (0x00054caa) list_single_popup_submenu_pane_t1_ParamLimits

0x7eba,	// (0x00054caa) list_single_popup_submenu_pane_t1

0x73e3,	// (0x000541d3) bg_active_tab_pane_cp1_ParamLimits

0x73e3,	// (0x000541d3) bg_active_tab_pane_cp1

0x7ecf,	// (0x00054cbf) tabs_2_active_pane_g1

0x7ed7,	// (0x00054cc7) tabs_2_active_pane_t1

0x73e3,	// (0x000541d3) bg_passive_tab_pane_cp1_ParamLimits

0x73e3,	// (0x000541d3) bg_passive_tab_pane_cp1

0x7ecf,	// (0x00054cbf) tabs_2_passive_pane_g1

0x7ed7,	// (0x00054cc7) tabs_2_passive_pane_t1

0x7ee9,	// (0x00054cd9) bg_active_tab_pane_cp4

0x7ef7,	// (0x00054ce7) tabs_2_long_active_pane_t1

0x7f0a,	// (0x00054cfa) bg_passive_tab_pane_cp4

0x5ca4,	// (0x00052a94) list_single_midp_graphic_pane_g4_ParamLimits

0x7ee9,	// (0x00054cd9) bg_active_tab_pane_cp5

0x7f16,	// (0x00054d06) tabs_3_long_active_pane_t1

0x7f0a,	// (0x00054cfa) bg_passive_tab_pane_cp5

0x5ca4,	// (0x00052a94) list_single_midp_graphic_pane_g4

0x73e3,	// (0x000541d3) bg_popup_window_pane_cp13_ParamLimits

0x73e3,	// (0x000541d3) bg_popup_window_pane_cp13

0x7f31,	// (0x00054d21) listscroll_popup_fast_pane_ParamLimits

0x7f31,	// (0x00054d21) listscroll_popup_fast_pane

0x7f40,	// (0x00054d30) grid_popup_fast_pane_ParamLimits

0x7f40,	// (0x00054d30) grid_popup_fast_pane

0x7f52,	// (0x00054d42) scroll_pane_cp9_ParamLimits

0x7f52,	// (0x00054d42) scroll_pane_cp9

0xc921,	// (0x00059711) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc921,	// (0x00059711) list_single_graphic_hl_pane_t1_cp2

0x813b,	// (0x00054f2b) input_focus_pane_cp20_ParamLimits

0x813b,	// (0x00054f2b) input_focus_pane_cp20

0x8149,	// (0x00054f39) query_popup_data_pane_t1_ParamLimits

0x8149,	// (0x00054f39) query_popup_data_pane_t1

0x815c,	// (0x00054f4c) query_popup_data_pane_t2_ParamLimits

0x815c,	// (0x00054f4c) query_popup_data_pane_t2

0x81a2,	// (0x00054f92) query_popup_data_pane_t3_ParamLimits

0x81a2,	// (0x00054f92) query_popup_data_pane_t3

0x81e3,	// (0x00054fd3) query_popup_data_pane_t4_ParamLimits

0x81e3,	// (0x00054fd3) query_popup_data_pane_t4

0x821f,	// (0x0005500f) query_popup_data_pane_t5_ParamLimits

0x821f,	// (0x0005500f) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x0005c4b7) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x0005c4b7) query_popup_data_pane_t

0x7d71,	// (0x00054b61) bg_set_opt_pane_g1

0x7d79,	// (0x00054b69) bg_set_opt_pane_g2

0x7d81,	// (0x00054b71) bg_set_opt_pane_g3

0x7d89,	// (0x00054b79) bg_set_opt_pane_g4

0x7d91,	// (0x00054b81) bg_set_opt_pane_g5

0x7d99,	// (0x00054b89) bg_set_opt_pane_g6

0x7da1,	// (0x00054b91) bg_set_opt_pane_g7

0x7da9,	// (0x00054b99) bg_set_opt_pane_g8

0x7db1,	// (0x00054ba1) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x0005c4c2) bg_set_opt_pane_g

0x58c7,	// (0x000526b7) control_top_pane_stacon_ParamLimits

0x58c7,	// (0x000526b7) control_top_pane_stacon

0x591a,	// (0x0005270a) signal_pane_stacon_ParamLimits

0x591a,	// (0x0005270a) signal_pane_stacon

0x87cb,	// (0x000555bb) stacon_top_pane_g1_ParamLimits

0x87cb,	// (0x000555bb) stacon_top_pane_g1

0x593f,	// (0x0005272f) title_pane_stacon_ParamLimits

0x593f,	// (0x0005272f) title_pane_stacon

0x5969,	// (0x00052759) uni_indicator_pane_stacon_ParamLimits

0x5969,	// (0x00052759) uni_indicator_pane_stacon

0x5981,	// (0x00052771) battery_pane_stacon_ParamLimits

0x5981,	// (0x00052771) battery_pane_stacon

0x59c5,	// (0x000527b5) control_bottom_pane_stacon_ParamLimits

0x59c5,	// (0x000527b5) control_bottom_pane_stacon

0x59e8,	// (0x000527d8) navi_pane_stacon_ParamLimits

0x59e8,	// (0x000527d8) navi_pane_stacon

0x87ed,	// (0x000555dd) stacon_bottom_pane_g1_ParamLimits

0x87ed,	// (0x000555dd) stacon_bottom_pane_g1

0x55b6,	// (0x000523a6) aid_levels_signal_lsc_ParamLimits

0x55b6,	// (0x000523a6) aid_levels_signal_lsc

0x55cd,	// (0x000523bd) signal_pane_stacon_g1_ParamLimits

0x55cd,	// (0x000523bd) signal_pane_stacon_g1

0x55e1,	// (0x000523d1) signal_pane_stacon_g2_ParamLimits

0x55e1,	// (0x000523d1) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0005c4d5) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0005c4d5) signal_pane_stacon_g

0x5616,	// (0x00052406) title_pane_stacon_t1_ParamLimits

0x5616,	// (0x00052406) title_pane_stacon_t1

0x8263,	// (0x00055053) uni_indicator_pane_stacon_g1

0x826d,	// (0x0005505d) uni_indicator_pane_stacon_g2

0x8277,	// (0x00055067) uni_indicator_pane_stacon_g3

0x8281,	// (0x00055071) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0005c4e1) uni_indicator_pane_stacon_g

0x563b,	// (0x0005242b) control_top_pane_stacon_g1

0x5643,	// (0x00052433) control_top_pane_stacon_t1_ParamLimits

0x5643,	// (0x00052433) control_top_pane_stacon_t1

0x567a,	// (0x0005246a) aid_levels_battery_lsc_ParamLimits

0x567a,	// (0x0005246a) aid_levels_battery_lsc

0x5692,	// (0x00052482) battery_pane_stacon_g1_ParamLimits

0x5692,	// (0x00052482) battery_pane_stacon_g1

0x56a5,	// (0x00052495) battery_pane_stacon_g2_ParamLimits

0x56a5,	// (0x00052495) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x0005c4ea) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x0005c4ea) battery_pane_stacon_g

0x56e3,	// (0x000524d3) navi_icon_pane_stacon

0x56f7,	// (0x000524e7) navi_navi_pane_stacon

0x56e3,	// (0x000524d3) navi_text_pane_stacon

0x563b,	// (0x0005242b) control_bottom_pane_stacon_g1

0x570d,	// (0x000524fd) control_bottom_pane_stacon_t1_ParamLimits

0x570d,	// (0x000524fd) control_bottom_pane_stacon_t1

0x82a5,	// (0x00055095) grid_app_pane_ParamLimits

0x82a5,	// (0x00055095) grid_app_pane

0x82c9,	// (0x000550b9) scroll_pane_cp15_ParamLimits

0x82c9,	// (0x000550b9) scroll_pane_cp15

0x82de,	// (0x000550ce) cell_app_pane_ParamLimits

0x82de,	// (0x000550ce) cell_app_pane

0x830a,	// (0x000550fa) cell_app_pane_g1_ParamLimits

0x830a,	// (0x000550fa) cell_app_pane_g1

0x832e,	// (0x0005511e) cell_app_pane_g2_ParamLimits

0x832e,	// (0x0005511e) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x0005c4ef) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x0005c4ef) cell_app_pane_g

0x833a,	// (0x0005512a) cell_app_pane_t1_ParamLimits

0x833a,	// (0x0005512a) cell_app_pane_t1

0x834c,	// (0x0005513c) grid_highlight_pane_ParamLimits

0x834c,	// (0x0005513c) grid_highlight_pane

0x7d71,	// (0x00054b61) cell_highlight_pane_g1

0x7d79,	// (0x00054b69) cell_highlight_pane_g2

0x7d81,	// (0x00054b71) cell_highlight_pane_g3

0x7d89,	// (0x00054b79) cell_highlight_pane_g4

0x7d91,	// (0x00054b81) cell_highlight_pane_g5

0x7d99,	// (0x00054b89) cell_highlight_pane_g6

0x7da1,	// (0x00054b91) cell_highlight_pane_g7

0x7da9,	// (0x00054b99) cell_highlight_pane_g8

0x7db1,	// (0x00054ba1) cell_highlight_pane_g9

0x244c,	// (0x0004f23c) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0005c49d) cell_highlight_pane_g

0x835d,	// (0x0005514d) bg_scroll_pane

0x5757,	// (0x00052547) scroll_handle_pane

0x83a4,	// (0x00055194) scroll_bg_pane_g1

0x83b9,	// (0x000551a9) scroll_bg_pane_g2

0x83d1,	// (0x000551c1) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0005c4f4) scroll_bg_pane_g

0x83e6,	// (0x000551d6) scroll_handle_focus_pane_ParamLimits

0x83e6,	// (0x000551d6) scroll_handle_focus_pane

0x83a4,	// (0x00055194) scroll_handle_pane_g1

0x83f3,	// (0x000551e3) scroll_handle_pane_g2

0x83d1,	// (0x000551c1) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x0005c4fb) scroll_handle_pane_g

0x7dcb,	// (0x00054bbb) bg_popup_sub_pane_cp21_ParamLimits

0x7dcb,	// (0x00054bbb) bg_popup_sub_pane_cp21

0x8407,	// (0x000551f7) popup_fep_japan_predictive_window_t1_ParamLimits

0x8407,	// (0x000551f7) popup_fep_japan_predictive_window_t1

0x841e,	// (0x0005520e) popup_fep_japan_predictive_window_t2_ParamLimits

0x841e,	// (0x0005520e) popup_fep_japan_predictive_window_t2

0x8451,	// (0x00055241) popup_fep_japan_predictive_window_t3_ParamLimits

0x8451,	// (0x00055241) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0005c502) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0005c502) popup_fep_japan_predictive_window_t

0x2456,	// (0x0004f246) bg_popup_sub_pane_cp23

0x8488,	// (0x00055278) listscroll_japin_cand_pane

0x8490,	// (0x00055280) popup_fep_japan_candidate_window_t1

0x849e,	// (0x0005528e) candidate_pane_ParamLimits

0x849e,	// (0x0005528e) candidate_pane

0x84b0,	// (0x000552a0) scroll_pane_cp30

0x84ba,	// (0x000552aa) list_single_popup_jap_candidate_pane_ParamLimits

0x84ba,	// (0x000552aa) list_single_popup_jap_candidate_pane

0x2456,	// (0x0004f246) list_highlight_pane_cp30

0x84ce,	// (0x000552be) list_single_popup_jap_candidate_pane_t1

0x84dd,	// (0x000552cd) level_1_signal

0x84ea,	// (0x000552da) level_2_signal

0x84f7,	// (0x000552e7) level_3_signal

0x8504,	// (0x000552f4) level_4_signal

0x8511,	// (0x00055301) level_5_signal

0x851e,	// (0x0005530e) level_6_signal

0x852b,	// (0x0005531b) level_7_signal

0x84dd,	// (0x000552cd) level_1_battery

0x84ea,	// (0x000552da) level_2_battery

0x84f7,	// (0x000552e7) level_3_battery

0x8504,	// (0x000552f4) level_4_battery

0x8511,	// (0x00055301) level_5_battery

0x851e,	// (0x0005530e) level_6_battery

0x852b,	// (0x0005531b) level_7_battery

0x8550,	// (0x00055340) list_menu_pane_ParamLimits

0x8550,	// (0x00055340) list_menu_pane

0x8561,	// (0x00055351) scroll_pane_cp25_ParamLimits

0x8561,	// (0x00055351) scroll_pane_cp25

0x857a,	// (0x0005536a) list_double2_graphic_pane_cp2_ParamLimits

0x857a,	// (0x0005536a) list_double2_graphic_pane_cp2

0x857a,	// (0x0005536a) list_double2_large_graphic_pane_cp2_ParamLimits

0x857a,	// (0x0005536a) list_double2_large_graphic_pane_cp2

0x857a,	// (0x0005536a) list_double2_pane_cp2_ParamLimits

0x857a,	// (0x0005536a) list_double2_pane_cp2

0x857a,	// (0x0005536a) list_double_graphic_pane_cp2_ParamLimits

0x857a,	// (0x0005536a) list_double_graphic_pane_cp2

0x857a,	// (0x0005536a) list_double_large_graphic_pane_cp2_ParamLimits

0x857a,	// (0x0005536a) list_double_large_graphic_pane_cp2

0x857a,	// (0x0005536a) list_double_number_pane_cp2_ParamLimits

0x857a,	// (0x0005536a) list_double_number_pane_cp2

0x857a,	// (0x0005536a) list_double_pane_cp2_ParamLimits

0x857a,	// (0x0005536a) list_double_pane_cp2

0x85a0,	// (0x00055390) list_single_2graphic_pane_cp2_ParamLimits

0x85a0,	// (0x00055390) list_single_2graphic_pane_cp2

0x85a0,	// (0x00055390) list_single_graphic_heading_pane_cp2_ParamLimits

0x85a0,	// (0x00055390) list_single_graphic_heading_pane_cp2

0x85a0,	// (0x00055390) list_single_graphic_pane_cp2_ParamLimits

0x85a0,	// (0x00055390) list_single_graphic_pane_cp2

0x85a0,	// (0x00055390) list_single_heading_pane_cp2_ParamLimits

0x85a0,	// (0x00055390) list_single_heading_pane_cp2

0x85bd,	// (0x000553ad) list_single_large_graphic_pane_cp2_ParamLimits

0x85bd,	// (0x000553ad) list_single_large_graphic_pane_cp2

0x85a0,	// (0x00055390) list_single_number_heading_pane_cp2_ParamLimits

0x85a0,	// (0x00055390) list_single_number_heading_pane_cp2

0x85a0,	// (0x00055390) list_single_number_pane_cp2_ParamLimits

0x85a0,	// (0x00055390) list_single_number_pane_cp2

0x85a0,	// (0x00055390) list_single_pane_cp2_ParamLimits

0x85a0,	// (0x00055390) list_single_pane_cp2

0x8612,	// (0x00055402) bg_popup_sub_pane_cp22

0x5809,	// (0x000525f9) popup_side_volume_key_window_g1

0x5833,	// (0x00052623) popup_side_volume_key_window_t1

0x5851,	// (0x00052641) volume_small_pane_cp1

0x765f,	// (0x0005444f) bg_popup_sub_pane_cp24_ParamLimits

0x765f,	// (0x0005444f) bg_popup_sub_pane_cp24

0x8628,	// (0x00055418) fep_china_uni_candidate_pane_ParamLimits

0x8628,	// (0x00055418) fep_china_uni_candidate_pane

0x863c,	// (0x0005542c) fep_china_uni_entry_pane

0x864c,	// (0x0005543c) popup_fep_china_uni_window_g1

0x8668,	// (0x00055458) fep_china_uni_entry_pane_g1

0x8672,	// (0x00055462) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0005c52f) fep_china_uni_entry_pane_g

0x867c,	// (0x0005546c) fep_entry_item_pane

0x8686,	// (0x00055476) fep_candidate_item_pane

0x868e,	// (0x0005547e) fep_china_uni_candidate_pane_g1

0x8698,	// (0x00055488) fep_china_uni_candidate_pane_g2

0x86a0,	// (0x00055490) fep_china_uni_candidate_pane_g3

0x86a8,	// (0x00055498) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0005c534) fep_china_uni_candidate_pane_g

0x244c,	// (0x0004f23c) fep_entry_item_pane_g1

0x86b2,	// (0x000554a2) fep_entry_item_pane_t1_ParamLimits

0x86b2,	// (0x000554a2) fep_entry_item_pane_t1

0x86c8,	// (0x000554b8) fep_candidate_item_pane_t1_ParamLimits

0x86c8,	// (0x000554b8) fep_candidate_item_pane_t1

0x86dd,	// (0x000554cd) fep_candidate_item_pane_t2_ParamLimits

0x86dd,	// (0x000554cd) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0005c53d) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0005c53d) fep_candidate_item_pane_t

0x73e3,	// (0x000541d3) list_highlight_pane_cp31_ParamLimits

0x73e3,	// (0x000541d3) list_highlight_pane_cp31

0x86ef,	// (0x000554df) level_1_signal_lsc

0x86f8,	// (0x000554e8) level_2_signal_lsc

0x8701,	// (0x000554f1) level_3_signal_lsc

0x870a,	// (0x000554fa) level_4_signal_lsc

0x8713,	// (0x00055503) level_5_signal_lsc

0x871c,	// (0x0005550c) level_6_signal_lsc

0x8725,	// (0x00055515) level_7_signal_lsc

0x8725,	// (0x00055515) level_1_battery_lsc

0x872e,	// (0x0005551e) level_2_battery_lsc

0x8737,	// (0x00055527) level_3_battery_lsc

0x8740,	// (0x00055530) level_4_battery_lsc

0x8749,	// (0x00055539) level_5_battery_lsc

0x8752,	// (0x00055542) level_6_battery_lsc

0x86ef,	// (0x000554df) level_7_battery_lsc

0x875b,	// (0x0005554b) scroll_handle_focus_pane_g1

0x8764,	// (0x00055554) scroll_handle_focus_pane_g2

0x876d,	// (0x0005555d) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0005c542) scroll_handle_focus_pane_g

0x5859,	// (0x00052649) list_single_2graphic_pane_g1_ParamLimits

0x5859,	// (0x00052649) list_single_2graphic_pane_g1

0x7c2f,	// (0x00054a1f) list_single_2graphic_pane_g2_ParamLimits

0x7c2f,	// (0x00054a1f) list_single_2graphic_pane_g2

0x7c11,	// (0x00054a01) list_single_2graphic_pane_g3_ParamLimits

0x7c11,	// (0x00054a01) list_single_2graphic_pane_g3

0x7f65,	// (0x00054d55) list_single_2graphic_pane_g4_ParamLimits

0x7f65,	// (0x00054d55) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0005c549) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0005c549) list_single_2graphic_pane_g

0x5865,	// (0x00052655) list_single_2graphic_pane_t1_ParamLimits

0x5865,	// (0x00052655) list_single_2graphic_pane_t1

0x7f71,	// (0x00054d61) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7f71,	// (0x00054d61) list_double2_graphic_large_graphic_pane_g1

0x513c,	// (0x00051f2c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x513c,	// (0x00051f2c) list_double2_graphic_large_graphic_pane_g2

0x5089,	// (0x00051e79) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5089,	// (0x00051e79) list_double2_graphic_large_graphic_pane_g3

0x5893,	// (0x00052683) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5893,	// (0x00052683) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0005c552) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0005c552) list_double2_graphic_large_graphic_pane_g

0x589f,	// (0x0005268f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x589f,	// (0x0005268f) list_double2_graphic_large_graphic_pane_t1

0x58b5,	// (0x000526a5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x58b5,	// (0x000526a5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0005c55b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0005c55b) list_double2_graphic_large_graphic_pane_t

0x88af,	// (0x0005569f) popup_fast_swap_window_ParamLimits

0x88af,	// (0x0005569f) popup_fast_swap_window

0x88cd,	// (0x000556bd) popup_side_volume_key_window

0x88eb,	// (0x000556db) stacon_top_pane

0x88f5,	// (0x000556e5) status_pane_ParamLimits

0x88f5,	// (0x000556e5) status_pane

0x88eb,	// (0x000556db) status_small_pane

0x2456,	// (0x0004f246) control_pane

0x2456,	// (0x0004f246) stacon_bottom_pane

0x7ced,	// (0x00054add) scroll_pane_cp121

0x7ce4,	// (0x00054ad4) set_content_pane

0x8776,	// (0x00055566) bg_active_tab_pane_g1_cp1

0x877f,	// (0x0005556f) bg_active_tab_pane_g2_cp1

0x8788,	// (0x00055578) bg_active_tab_pane_g3_cp1

0x8776,	// (0x00055566) bg_passive_tab_pane_g1_cp1

0x877f,	// (0x0005556f) bg_passive_tab_pane_g2_cp1

0x8788,	// (0x00055578) bg_passive_tab_pane_g3_cp1

0x8791,	// (0x00055581) bg_active_tab_pane_g1_cp2

0x877f,	// (0x0005556f) bg_active_tab_pane_g2_cp2

0x879a,	// (0x0005558a) bg_active_tab_pane_g3_cp2

0x8791,	// (0x00055581) bg_passive_tab_pane_g1_cp2

0x877f,	// (0x0005556f) bg_passive_tab_pane_g2_cp2

0x879a,	// (0x0005558a) bg_passive_tab_pane_g3_cp2

0x87a3,	// (0x00055593) bg_active_tab_pane_g1_cp3

0x877f,	// (0x0005556f) bg_active_tab_pane_g2_cp3

0x87ac,	// (0x0005559c) bg_active_tab_pane_g3_cp3

0x87a3,	// (0x00055593) bg_passive_tab_pane_g1_cp3

0x877f,	// (0x0005556f) bg_passive_tab_pane_g2_cp3

0x87ac,	// (0x0005559c) bg_passive_tab_pane_g3_cp3

0x87b5,	// (0x000555a5) bg_active_tab_pane_g1_cp4

0x877f,	// (0x0005556f) bg_active_tab_pane_g2_cp4

0x87c0,	// (0x000555b0) bg_active_tab_pane_g3_cp4

0x87b5,	// (0x000555a5) bg_passive_tab_pane_g1_cp4

0x877f,	// (0x0005556f) bg_passive_tab_pane_g2_cp4

0x87c0,	// (0x000555b0) bg_passive_tab_pane_g3_cp4

0x8809,	// (0x000555f9) bg_active_tab_pane_g1_cp5

0x877f,	// (0x0005556f) bg_active_tab_pane_g2_cp5

0x8812,	// (0x00055602) bg_active_tab_pane_g3_cp5

0x8809,	// (0x000555f9) bg_passive_tab_pane_g1_cp5

0x877f,	// (0x0005556f) bg_passive_tab_pane_g2_cp5

0x8812,	// (0x00055602) bg_passive_tab_pane_g3_cp5

0x881b,	// (0x0005560b) list_set_graphic_pane_ParamLimits

0x881b,	// (0x0005560b) list_set_graphic_pane

0x2456,	// (0x0004f246) bg_set_opt_pane_cp4

0x8830,	// (0x00055620) list_set_graphic_pane_g1_ParamLimits

0x8830,	// (0x00055620) list_set_graphic_pane_g1

0x883c,	// (0x0005562c) list_set_graphic_pane_g2_ParamLimits

0x883c,	// (0x0005562c) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0005c560) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0005c560) list_set_graphic_pane_g

0x0009,

0xfadf,	// (0x0005c8cf) volume_small_pane_cp_g

0x8860,	// (0x00055650) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8860,	// (0x00055650) list_double2_large_graphic_pane_g1_cp2

0x886e,	// (0x0005565e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x886e,	// (0x0005565e) list_double2_large_graphic_pane_g2_cp2

0x887f,	// (0x0005566f) list_double2_large_graphic_pane_g3_cp2

0x8887,	// (0x00055677) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8887,	// (0x00055677) list_double2_large_graphic_pane_t1_cp2

0x889d,	// (0x0005568d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x889d,	// (0x0005568d) list_double2_large_graphic_pane_t2_cp2

0xab22,	// (0x00057912) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab22,	// (0x00057912) list_double_large_graphic_pane_g1_cp2

0xab35,	// (0x00057925) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab35,	// (0x00057925) list_double_large_graphic_pane_g2_cp2

0x8a13,	// (0x00055803) list_double_large_graphic_pane_g3_cp2

0xab46,	// (0x00057936) list_double_large_graphic_pane_g4_cp

0xab4e,	// (0x0005793e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab4e,	// (0x0005793e) list_double_large_graphic_pane_t1_cp2

0xab65,	// (0x00057955) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab65,	// (0x00057955) list_double_large_graphic_pane_t2_cp2

0x8903,	// (0x000556f3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8903,	// (0x000556f3) list_double2_graphic_pane_g1_cp2

0x8911,	// (0x00055701) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8911,	// (0x00055701) list_double2_graphic_pane_g2_cp2

0x8922,	// (0x00055712) list_double2_graphic_pane_g3_cp2

0x892c,	// (0x0005571c) list_double2_graphic_pane_t1_cp2_ParamLimits

0x892c,	// (0x0005571c) list_double2_graphic_pane_t1_cp2

0x8942,	// (0x00055732) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8942,	// (0x00055732) list_double2_graphic_pane_t2_cp2

0x8954,	// (0x00055744) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8954,	// (0x00055744) list_single_number_heading_pane_g1_cp2

0x8960,	// (0x00055750) list_single_number_heading_pane_g2_cp2

0x8968,	// (0x00055758) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8968,	// (0x00055758) list_single_number_heading_pane_t1_cp2

0x897e,	// (0x0005576e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x897e,	// (0x0005576e) list_single_number_heading_pane_t2_cp2

0x8992,	// (0x00055782) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8992,	// (0x00055782) list_single_number_heading_pane_t3_cp2

0x8954,	// (0x00055744) list_single_heading_pane_g1_cp2_ParamLimits

0x8954,	// (0x00055744) list_single_heading_pane_g1_cp2

0x8960,	// (0x00055750) list_single_heading_pane_g2_cp2

0x8968,	// (0x00055758) list_single_heading_pane_t1_cp2_ParamLimits

0x8968,	// (0x00055758) list_single_heading_pane_t1_cp2

0xa91c,	// (0x0005770c) list_single_heading_pane_t2_cp2_ParamLimits

0xa91c,	// (0x0005770c) list_single_heading_pane_t2_cp2

0xa85e,	// (0x0005764e) list_double_graphic_pane_g1_cp2_ParamLimits

0xa85e,	// (0x0005764e) list_double_graphic_pane_g1_cp2

0xa86a,	// (0x0005765a) list_double_graphic_pane_g2_cp2_ParamLimits

0xa86a,	// (0x0005765a) list_double_graphic_pane_g2_cp2

0xa879,	// (0x00057669) list_double_graphic_pane_g3_cp2

0xa881,	// (0x00057671) list_double_graphic_pane_t1_cp2_ParamLimits

0xa881,	// (0x00057671) list_double_graphic_pane_t1_cp2

0xa897,	// (0x00057687) list_double_graphic_pane_t2_cp2_ParamLimits

0xa897,	// (0x00057687) list_double_graphic_pane_t2_cp2

0x8a07,	// (0x000557f7) list_double_number_pane_g1_cp2_ParamLimits

0x8a07,	// (0x000557f7) list_double_number_pane_g1_cp2

0x8a13,	// (0x00055803) list_double_number_pane_g2_cp2

0xa822,	// (0x00057612) list_double_number_pane_t1_cp2_ParamLimits

0xa822,	// (0x00057612) list_double_number_pane_t1_cp2

0xa836,	// (0x00057626) list_double_number_pane_t2_cp2_ParamLimits

0xa836,	// (0x00057626) list_double_number_pane_t2_cp2

0xa84c,	// (0x0005763c) list_double_number_pane_t3_cp2_ParamLimits

0xa84c,	// (0x0005763c) list_double_number_pane_t3_cp2

0xa70b,	// (0x000574fb) list_single_graphic_pane_g1_cp2_ParamLimits

0xa70b,	// (0x000574fb) list_single_graphic_pane_g1_cp2

0x8a6d,	// (0x0005585d) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a6d,	// (0x0005585d) list_single_graphic_pane_g2_cp2

0x8a79,	// (0x00055869) list_single_graphic_pane_g3_cp2

0xa6e1,	// (0x000574d1) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6e1,	// (0x000574d1) list_single_graphic_pane_t1_cp2

0x8a6d,	// (0x0005585d) list_single_number_pane_g1_cp2_ParamLimits

0x8a6d,	// (0x0005585d) list_single_number_pane_g1_cp2

0x8a79,	// (0x00055869) list_single_number_pane_g2_cp2

0xa6e1,	// (0x000574d1) list_single_number_pane_t1_cp2_ParamLimits

0xa6e1,	// (0x000574d1) list_single_number_pane_t1_cp2

0xa6f7,	// (0x000574e7) list_single_number_pane_t2_cp2_ParamLimits

0xa6f7,	// (0x000574e7) list_single_number_pane_t2_cp2

0x886e,	// (0x0005565e) list_double2_pane_g1_cp2_ParamLimits

0x886e,	// (0x0005565e) list_double2_pane_g1_cp2

0x887f,	// (0x0005566f) list_double2_pane_g2_cp2

0x89df,	// (0x000557cf) list_double2_pane_t1_cp2_ParamLimits

0x89df,	// (0x000557cf) list_double2_pane_t1_cp2

0x89f5,	// (0x000557e5) list_double2_pane_t2_cp2_ParamLimits

0x89f5,	// (0x000557e5) list_double2_pane_t2_cp2

0x8a07,	// (0x000557f7) list_double_pane_g1_cp2_ParamLimits

0x8a07,	// (0x000557f7) list_double_pane_g1_cp2

0x8a13,	// (0x00055803) list_double_pane_g2_cp2

0x8a1b,	// (0x0005580b) list_double_pane_t1_cp2_ParamLimits

0x8a1b,	// (0x0005580b) list_double_pane_t1_cp2

0x8a31,	// (0x00055821) list_double_pane_t2_cp2_ParamLimits

0x8a31,	// (0x00055821) list_double_pane_t2_cp2

0x8a5d,	// (0x0005584d) list_single_pane_cp2_g3

0x8a6d,	// (0x0005585d) list_single_pane_g1_cp2_ParamLimits

0x8a6d,	// (0x0005585d) list_single_pane_g1_cp2

0x8a79,	// (0x00055869) list_single_pane_g2_cp2

0x8a81,	// (0x00055871) list_single_pane_t1_cp2_ParamLimits

0x8a81,	// (0x00055871) list_single_pane_t1_cp2

0x8a99,	// (0x00055889) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a99,	// (0x00055889) list_single_large_graphic_pane_g1_cp2

0x8aa7,	// (0x00055897) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8aa7,	// (0x00055897) list_single_large_graphic_pane_g2_cp2

0x8ab3,	// (0x000558a3) list_single_large_graphic_pane_g3_cp2

0x8abb,	// (0x000558ab) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8abb,	// (0x000558ab) list_single_large_graphic_pane_g4_cp1

0x8ad5,	// (0x000558c5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8ad5,	// (0x000558c5) list_single_large_graphic_pane_t1_cp2

0xa6ab,	// (0x0005749b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6ab,	// (0x0005749b) list_single_graphic_heading_pane_g1_cp2

0xa678,	// (0x00057468) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa678,	// (0x00057468) list_single_graphic_heading_pane_g4_cp2

0x8a79,	// (0x00055869) list_single_graphic_heading_pane_g5_cp2

0xa6b7,	// (0x000574a7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6b7,	// (0x000574a7) list_single_graphic_heading_pane_t1_cp2

0xa6cd,	// (0x000574bd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6cd,	// (0x000574bd) list_single_graphic_heading_pane_t2_cp2

0xa66c,	// (0x0005745c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa66c,	// (0x0005745c) list_single_2graphic_pane_g1_cp2

0xa678,	// (0x00057468) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa678,	// (0x00057468) list_single_2graphic_pane_g2_cp2

0x8a79,	// (0x00055869) list_single_2graphic_pane_g3_cp2

0xa689,	// (0x00057479) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa689,	// (0x00057479) list_single_2graphic_pane_g4_cp2

0xa695,	// (0x00057485) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa695,	// (0x00057485) list_single_2graphic_pane_t1_cp2

0x244c,	// (0x0004f23c) list_highlight_pane_g10_cp1

0xa244,	// (0x00057034) list_highlight_pane_g1_cp1

0xa24c,	// (0x0005703c) list_highlight_pane_g2_cp1

0xa254,	// (0x00057044) list_highlight_pane_g3_cp1

0xa25c,	// (0x0005704c) list_highlight_pane_g4_cp1

0xa264,	// (0x00057054) list_highlight_pane_g5_cp1

0xa26c,	// (0x0005705c) list_highlight_pane_g6_cp1

0xa274,	// (0x00057064) list_highlight_pane_g7_cp1

0xa27c,	// (0x0005706c) list_highlight_pane_g8_cp1

0xa284,	// (0x00057074) list_highlight_pane_g9_cp1

0xa164,	// (0x00056f54) form_field_slider_pane_t3

0xa172,	// (0x00056f62) form_field_slider_pane_t4

0xa180,	// (0x00056f70) slider_form_pane_ParamLimits

0xa180,	// (0x00056f70) slider_form_pane

0x2456,	// (0x0004f246) control_abbreviations

0x2456,	// (0x0004f246) control_conventions

0x2456,	// (0x0004f246) control_definitions

0x2456,	// (0x0004f246) format_table_attribute

0xa972,	// (0x00057762) bg_popup_preview_window_pane_g9

0x2456,	// (0x0004f246) format_table_data2

0x2456,	// (0x0004f246) format_table_data3

0x2456,	// (0x0004f246) format_table_data_example

0x0008,

0x2456,	// (0x0004f246) intro_purpose

0xf905,	// (0x0005c6f5) bg_popup_preview_window_pane_g

0x2456,	// (0x0004f246) texts_category

0x2456,	// (0x0004f246) texts_graphics

0x8aeb,	// (0x000558db) text_digital

0x8afa,	// (0x000558ea) text_primary

0x8b09,	// (0x000558f9) text_primary_small

0x8b18,	// (0x00055908) text_secondary

0x8b27,	// (0x00055917) text_title

0xb10e,	// (0x00057efe) bg_passive_tab_pane_g1_cp3_srt

0x877f,	// (0x0005556f) bg_passive_tab_pane_g2_cp3_srt

0xb117,	// (0x00057f07) bg_passive_tab_pane_g3_cp3_srt

0x73e3,	// (0x000541d3) bg_active_tab_pane_cp3_srt_ParamLimits

0x73e3,	// (0x000541d3) bg_active_tab_pane_cp3_srt

0xb120,	// (0x00057f10) tabs_4_active_pane_srt_g1

0xb128,	// (0x00057f18) tabs_4_active_pane_srt_t1_ParamLimits

0xb128,	// (0x00057f18) tabs_4_active_pane_srt_t1

0xb10e,	// (0x00057efe) bg_active_tab_pane_g1_cp3_copy1

0x877f,	// (0x0005556f) bg_active_tab_pane_g2_cp3_copy1

0xb117,	// (0x00057f07) bg_active_tab_pane_g3_cp3_copy1

0x73e3,	// (0x000541d3) tabs_2_long_active_pane_srt_ParamLimits

0x73e3,	// (0x000541d3) tabs_2_long_active_pane_srt

0x73e3,	// (0x000541d3) tabs_2_long_passive_pane_srt_ParamLimits

0x73e3,	// (0x000541d3) tabs_2_long_passive_pane_srt

0x7f0a,	// (0x00054cfa) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7f0a,	// (0x00054cfa) bg_passive_tab_pane_cp4_srt

0xadc2,	// (0x00057bb2) bg_passive_tab_pane_g1_cp4_srt

0x877f,	// (0x0005556f) bg_passive_tab_pane_g2_cp4_srt

0xadcb,	// (0x00057bbb) bg_passive_tab_pane_g3_cp4_srt

0x7ee9,	// (0x00054cd9) bg_active_tab_pane_cp4_srt_ParamLimits

0x7ee9,	// (0x00054cd9) bg_active_tab_pane_cp4_srt

0xadd4,	// (0x00057bc4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xadd4,	// (0x00057bc4) tabs_2_long_active_pane_srt_t1

0xadc2,	// (0x00057bb2) bg_active_tab_pane_g1_cp4_srt

0x877f,	// (0x0005556f) bg_active_tab_pane_g2_cp4_srt

0xadcb,	// (0x00057bbb) bg_active_tab_pane_g3_cp4_srt

0x765f,	// (0x0005444f) tabs_3_long_active_pane_srt_ParamLimits

0x765f,	// (0x0005444f) tabs_3_long_active_pane_srt

0x765f,	// (0x0005444f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x765f,	// (0x0005444f) tabs_3_long_passive_pane_cp_srt

0x765f,	// (0x0005444f) tabs_3_long_passive_pane_srt_ParamLimits

0x765f,	// (0x0005444f) tabs_3_long_passive_pane_srt

0x7f0a,	// (0x00054cfa) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7f0a,	// (0x00054cfa) bg_passive_tab_pane_cp5_srt

0x8809,	// (0x000555f9) bg_passive_tab_pane_g1_cp5_srt

0x877f,	// (0x0005556f) bg_passive_tab_pane_g2_cp5_srt

0x8812,	// (0x00055602) bg_passive_tab_pane_g3_cp5_srt

0x7ee9,	// (0x00054cd9) bg_active_tab_pane_cp5_srt_ParamLimits

0x7ee9,	// (0x00054cd9) bg_active_tab_pane_cp5_srt

0xadb0,	// (0x00057ba0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xadb0,	// (0x00057ba0) tabs_3_long_active_pane_srt_t1

0x8809,	// (0x000555f9) bg_active_tab_pane_g1_cp5_srt

0x877f,	// (0x0005556f) bg_active_tab_pane_g2_cp5_srt

0x8812,	// (0x00055602) bg_active_tab_pane_g3_cp5_srt

0xada2,	// (0x00057b92) navi_text_pane_srt_t1

0xad9a,	// (0x00057b8a) navi_icon_pane_srt_g1

0x8cfe,	// (0x00055aee) midp_editing_number_pane_srt

0x8b36,	// (0x00055926) midp_ticker_pane_srt

0x8d06,	// (0x00055af6) midp_ticker_pane_srt_g1

0x8d0e,	// (0x00055afe) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0005c57f) midp_ticker_pane_srt_g

0x8d16,	// (0x00055b06) midp_ticker_pane_srt_t1

0xad8b,	// (0x00057b7b) midp_editing_number_pane_t1_copy1

0x8b3e,	// (0x0005592e) listscroll_midp_pane

0x8b3e,	// (0x0005592e) midp_form_pane

0x8bac,	// (0x0005599c) midp_info_popup_window_ParamLimits

0x8bac,	// (0x0005599c) midp_info_popup_window

0x7dcb,	// (0x00054bbb) bg_popup_sub_pane_cp50_ParamLimits

0x7dcb,	// (0x00054bbb) bg_popup_sub_pane_cp50

0x9e7a,	// (0x00056c6a) listscroll_midp_info_pane_ParamLimits

0x9e7a,	// (0x00056c6a) listscroll_midp_info_pane

0x9e62,	// (0x00056c52) listscroll_form_midp_pane_ParamLimits

0x9e62,	// (0x00056c52) listscroll_form_midp_pane

0x9e6e,	// (0x00056c5e) scroll_bar_cp050

0x9e42,	// (0x00056c32) list_midp_pane

0xbb98,	// (0x00058988) signal_pane_g2_cp

0x9d7c,	// (0x00056b6c) listscroll_midp_info_pane_t1_ParamLimits

0x9d7c,	// (0x00056b6c) listscroll_midp_info_pane_t1

0x9d94,	// (0x00056b84) listscroll_midp_info_pane_t2_ParamLimits

0x9d94,	// (0x00056b84) listscroll_midp_info_pane_t2

0x9dd2,	// (0x00056bc2) listscroll_midp_info_pane_t3_ParamLimits

0x9dd2,	// (0x00056bc2) listscroll_midp_info_pane_t3

0x9e0c,	// (0x00056bfc) listscroll_midp_info_pane_t4_ParamLimits

0x9e0c,	// (0x00056bfc) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0005c630) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0005c630) listscroll_midp_info_pane_t

0x7e95,	// (0x00054c85) scroll_pane_cp21

0x9d16,	// (0x00056b06) form_midp_field_choice_group_pane

0x9d1f,	// (0x00056b0f) form_midp_field_text_pane

0x9d62,	// (0x00056b52) form_midp_field_time_pane

0x9d6a,	// (0x00056b5a) form_midp_gauge_slider_pane

0x9d73,	// (0x00056b63) form_midp_gauge_wait_pane

0x2456,	// (0x0004f246) form_midp_image_pane

0x5dc9,	// (0x00052bb9) list_single_midp_pane_ParamLimits

0x5dc9,	// (0x00052bb9) list_single_midp_pane

0x9cda,	// (0x00056aca) form_midp_field_text_pane_t1

0x9aee,	// (0x000568de) input_focus_pane_cp050

0x9d05,	// (0x00056af5) list_midp_form_text_pane

0x9ca9,	// (0x00056a99) form_midp_field_choice_group_pane_t1

0x9cb7,	// (0x00056aa7) input_focus_pane_cp051

0x9ccb,	// (0x00056abb) list_midp_choice_pane

0x2456,	// (0x0004f246) status_idle_pane

0x9c8d,	// (0x00056a7d) form_midp_field_time_pane_t1

0x244c,	// (0x0004f23c) wait_anim_pane_g2_copy1

0x9c9b,	// (0x00056a8b) form_midp_field_time_pane_t2

0x0001,

0x8c5c,	// (0x00055a4c) aid_navinavi_width_2_pane

0xf83b,	// (0x0005c62b) form_midp_field_time_pane_t

0x2456,	// (0x0004f246) input_focus_pane_cp052

0x2456,	// (0x0004f246) bg_input_focus_pane_cp040

0x9c4d,	// (0x00056a3d) form_midp_gauge_slider_pane_t1

0x9c5b,	// (0x00056a4b) form_midp_gauge_slider_pane_t2

0x9c69,	// (0x00056a59) form_midp_gauge_slider_pane_t3

0x9c77,	// (0x00056a67) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0005c622) form_midp_gauge_slider_pane_t

0x9c85,	// (0x00056a75) form_midp_slider_pane

0x73e3,	// (0x000541d3) bg_input_focus_pane_cp041_ParamLimits

0x73e3,	// (0x000541d3) bg_input_focus_pane_cp041

0x9c1a,	// (0x00056a0a) form_midp_gauge_wait_pane_t1_ParamLimits

0x9c1a,	// (0x00056a0a) form_midp_gauge_wait_pane_t1

0x9c2c,	// (0x00056a1c) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c2c,	// (0x00056a1c) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0005c61d) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0005c61d) form_midp_gauge_wait_pane_t

0x9c3e,	// (0x00056a2e) form_midp_wait_pane_ParamLimits

0x9c3e,	// (0x00056a2e) form_midp_wait_pane

0x9be2,	// (0x000569d2) form_midp_image_pane_g1

0x9beb,	// (0x000569db) form_midp_image_pane_t1

0x9bfa,	// (0x000569ea) form_midp_image_pane_t2

0x9c09,	// (0x000569f9) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0005c616) form_midp_image_pane_t

0x9bd9,	// (0x000569c9) list_single_midp_pane_g1

0x5dba,	// (0x00052baa) list_single_midp_pane_t1

0x9bbf,	// (0x000569af) list_midp_form_item_pane_ParamLimits

0x9bbf,	// (0x000569af) list_midp_form_item_pane

0x8c04,	// (0x000559f4) list_midp_form_item_pane_t1

0x8c13,	// (0x00055a03) midp_ticker_pane_g1

0x8c1f,	// (0x00055a0f) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0005c565) midp_ticker_pane_g

0x8c2b,	// (0x00055a1b) midp_ticker_pane_t1

0xb00a,	// (0x00057dfa) midp_editing_number_pane_t1

0xafe8,	// (0x00057dd8) midp_editing_number_pane

0xaff7,	// (0x00057de7) midp_ticker_pane

0xad7b,	// (0x00057b6b) ai_message_heading_pane

0x2456,	// (0x0004f246) bg_popup_window_pane_cp14

0xad83,	// (0x00057b73) listscroll_ai_message_pane

0xad01,	// (0x00057af1) ai_message_heading_pane_g1_ParamLimits

0xad01,	// (0x00057af1) ai_message_heading_pane_g1

0xad0d,	// (0x00057afd) ai_message_heading_pane_g2_ParamLimits

0xad0d,	// (0x00057afd) ai_message_heading_pane_g2

0xad1b,	// (0x00057b0b) ai_message_heading_pane_g3_ParamLimits

0xad1b,	// (0x00057b0b) ai_message_heading_pane_g3

0xad27,	// (0x00057b17) ai_message_heading_pane_g4_ParamLimits

0xad27,	// (0x00057b17) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0005c757) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0005c757) ai_message_heading_pane_g

0xad33,	// (0x00057b23) ai_message_heading_pane_t1_ParamLimits

0xad33,	// (0x00057b23) ai_message_heading_pane_t1

0xad4d,	// (0x00057b3d) ai_message_heading_pane_t2_ParamLimits

0xad4d,	// (0x00057b3d) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0005c760) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0005c760) ai_message_heading_pane_t

0xad61,	// (0x00057b51) bg_popup_heading_pane_cp1_ParamLimits

0xad61,	// (0x00057b51) bg_popup_heading_pane_cp1

0xacef,	// (0x00057adf) list_ai_message_pane_ParamLimits

0xacef,	// (0x00057adf) list_ai_message_pane

0x7e95,	// (0x00054c85) scroll_pane_cp10

0xac8b,	// (0x00057a7b) list_ai_message_pane_g1

0xac93,	// (0x00057a83) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0005c734) list_ai_message_pane_g

0xac9b,	// (0x00057a8b) list_ai_message_pane_t1_ParamLimits

0xac9b,	// (0x00057a8b) list_ai_message_pane_t1

0xacb0,	// (0x00057aa0) list_ai_message_pane_t2_ParamLimits

0xacb0,	// (0x00057aa0) list_ai_message_pane_t2

0xacc5,	// (0x00057ab5) list_ai_message_pane_t3_ParamLimits

0xacc5,	// (0x00057ab5) list_ai_message_pane_t3

0xacda,	// (0x00057aca) list_ai_message_pane_t4_ParamLimits

0xacda,	// (0x00057aca) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0005c739) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0005c739) list_ai_message_pane_t

0xac74,	// (0x00057a64) cell_ai_soft_ind_pane_ParamLimits

0xac74,	// (0x00057a64) cell_ai_soft_ind_pane

0x8c3d,	// (0x00055a2d) cell_ai_soft_ind_pane_g1_ParamLimits

0x8c3d,	// (0x00055a2d) cell_ai_soft_ind_pane_g1

0x2456,	// (0x0004f246) grid_highlight_cp1

0x8c4a,	// (0x00055a3a) text_secondary_cp56_ParamLimits

0x8c4a,	// (0x00055a3a) text_secondary_cp56

0xac49,	// (0x00057a39) example_general_pane_ParamLimits

0xac49,	// (0x00057a39) example_general_pane

0xac55,	// (0x00057a45) example_parent_pane_g1_ParamLimits

0xac55,	// (0x00057a45) example_parent_pane_g1

0xac61,	// (0x00057a51) example_parent_pane_t1_ParamLimits

0xac61,	// (0x00057a51) example_parent_pane_t1

0x9283,	// (0x00056073) popup_preview_text_window_ParamLimits

0x9283,	// (0x00056073) popup_preview_text_window

0x8a65,	// (0x00055855) list_single_pane_cp2_g4

0x7715,	// (0x00054505) bg_popup_preview_window_pane_ParamLimits

0x7715,	// (0x00054505) bg_popup_preview_window_pane

0xa97c,	// (0x0005776c) popup_preview_text_window_t1_ParamLimits

0xa97c,	// (0x0005776c) popup_preview_text_window_t1

0xa99a,	// (0x0005778a) popup_preview_text_window_t2_ParamLimits

0xa99a,	// (0x0005778a) popup_preview_text_window_t2

0xa9e3,	// (0x000577d3) popup_preview_text_window_t3_ParamLimits

0xa9e3,	// (0x000577d3) popup_preview_text_window_t3

0xaa28,	// (0x00057818) popup_preview_text_window_t4_ParamLimits

0xaa28,	// (0x00057818) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0005c708) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0005c708) popup_preview_text_window_t

0xaaa6,	// (0x00057896) scroll_pane_cp11

0x99fc,	// (0x000567ec) bg_popup_preview_window_pane_g1

0xa930,	// (0x00057720) bg_popup_preview_window_pane_g2

0xa93a,	// (0x0005772a) bg_popup_preview_window_pane_g3

0xa944,	// (0x00057734) bg_popup_preview_window_pane_g4

0xa94e,	// (0x0005773e) bg_popup_preview_window_pane_g5

0xa958,	// (0x00057748) bg_popup_preview_window_pane_g6

0xa960,	// (0x00057750) bg_popup_preview_window_pane_g7

0xa968,	// (0x00057758) bg_popup_preview_window_pane_g8

0x4a41,	// (0x00051831) aid_popup_width_pane

0x925f,	// (0x0005604f) popup_midp_note_alarm_window_ParamLimits

0x925f,	// (0x0005604f) popup_midp_note_alarm_window

0x7cfe,	// (0x00054aee) data_form_pane_ParamLimits

0x5432,	// (0x00052222) form_field_data_pane_g1

0x543c,	// (0x0005222c) form_field_data_pane_t1_ParamLimits

0x7d0a,	// (0x00054afa) input_focus_pane_ParamLimits

0x7d18,	// (0x00054b08) data_form_wide_pane_ParamLimits

0x5456,	// (0x00052246) form_field_data_wide_pane_g1

0x5462,	// (0x00052252) form_field_data_wide_pane_t1_ParamLimits

0x79db,	// (0x000547cb) input_focus_pane_cp6_ParamLimits

0x7e40,	// (0x00054c30) input_popup_find_pane_g1_ParamLimits

0x7e40,	// (0x00054c30) input_popup_find_pane_g1

0x56b6,	// (0x000524a6) aid_navi_side_left_pane

0x56cb,	// (0x000524bb) aid_navi_side_right_pane

0xa33f,	// (0x0005712f) bg_popup_window_pane_cp30_ParamLimits

0xa33f,	// (0x0005712f) bg_popup_window_pane_cp30

0xa3b9,	// (0x000571a9) popup_midp_note_alarm_window_g1_ParamLimits

0xa3b9,	// (0x000571a9) popup_midp_note_alarm_window_g1

0xa3e9,	// (0x000571d9) popup_midp_note_alarm_window_t1_ParamLimits

0xa3e9,	// (0x000571d9) popup_midp_note_alarm_window_t1

0xa48a,	// (0x0005727a) popup_midp_note_alarm_window_t2_ParamLimits

0xa48a,	// (0x0005727a) popup_midp_note_alarm_window_t2

0xa538,	// (0x00057328) popup_midp_note_alarm_window_t3_ParamLimits

0xa538,	// (0x00057328) popup_midp_note_alarm_window_t3

0xa56a,	// (0x0005735a) popup_midp_note_alarm_window_t4_ParamLimits

0xa56a,	// (0x0005735a) popup_midp_note_alarm_window_t4

0xa590,	// (0x00057380) popup_midp_note_alarm_window_t5_ParamLimits

0xa590,	// (0x00057380) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0005c6a5) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0005c6a5) popup_midp_note_alarm_window_t

0xa63c,	// (0x0005742c) wait_bar_pane_cp1_ParamLimits

0xa63c,	// (0x0005742c) wait_bar_pane_cp1

0x2456,	// (0x0004f246) wait_anim_pane_copy1

0x2456,	// (0x0004f246) wait_border_pane_copy1

0xa024,	// (0x00056e14) wait_border_pane_g1_copy1

0x547c,	// (0x0005226c) form_field_popup_pane_g1

0x5484,	// (0x00052274) form_field_popup_pane_t1_ParamLimits

0x7d0a,	// (0x00054afa) input_focus_pane_cp7_ParamLimits

0x7d44,	// (0x00054b34) list_form_pane_ParamLimits

0x549e,	// (0x0005228e) form_field_popup_wide_pane_g1

0x54a6,	// (0x00052296) form_field_popup_wide_pane_t1_ParamLimits

0x7d0a,	// (0x00054afa) input_focus_pane_cp8_ParamLimits

0x7d50,	// (0x00054b40) list_form_wide_pane_ParamLimits

0xb19b,	// (0x00057f8b) aid_size_cell_graphic_pane

0x5532,	// (0x00052322) data_form_pane_t1_ParamLimits

0x6058,	// (0x00052e48) data_form_wide_pane_t1_ParamLimits

0x95aa,	// (0x0005639a) bg_status_flat_pane

0x7343,	// (0x00054133) title_pane_t1_ParamLimits

0x73ab,	// (0x0005419b) title_pane_t2_ParamLimits

0x73d1,	// (0x000541c1) title_pane_t3_ParamLimits

0xf573,	// (0x0005c363) title_pane_t_ParamLimits

0x84dd,	// (0x000552cd) level_1_signal_ParamLimits

0x84ea,	// (0x000552da) level_2_signal_ParamLimits

0x84f7,	// (0x000552e7) level_3_signal_ParamLimits

0x8504,	// (0x000552f4) level_4_signal_ParamLimits

0x8511,	// (0x00055301) level_5_signal_ParamLimits

0x851e,	// (0x0005530e) level_6_signal_ParamLimits

0x852b,	// (0x0005531b) level_7_signal_ParamLimits

0x84dd,	// (0x000552cd) level_1_battery_ParamLimits

0x84ea,	// (0x000552da) level_2_battery_ParamLimits

0x84f7,	// (0x000552e7) level_3_battery_ParamLimits

0x8504,	// (0x000552f4) level_4_battery_ParamLimits

0x8511,	// (0x00055301) level_5_battery_ParamLimits

0x851e,	// (0x0005530e) level_6_battery_ParamLimits

0x852b,	// (0x0005531b) level_7_battery_ParamLimits

0xa244,	// (0x00057034) bg_status_flat_pane_g1

0xa24c,	// (0x0005703c) bg_status_flat_pane_g2

0xa254,	// (0x00057044) bg_status_flat_pane_g3

0xa25c,	// (0x0005704c) bg_status_flat_pane_g4

0xa264,	// (0x00057054) bg_status_flat_pane_g5

0xa26c,	// (0x0005705c) bg_status_flat_pane_g6

0xa274,	// (0x00057064) bg_status_flat_pane_g7

0x73f9,	// (0x000541e9) tabs_3_active_pane_t1_ParamLimits

0x73f9,	// (0x000541e9) tabs_3_passive_pane_t1_ParamLimits

0x7413,	// (0x00054203) tabs_4_active_pane_t1_ParamLimits

0x7413,	// (0x00054203) tabs_4_1_passive_pane_t1_ParamLimits

0x7ed7,	// (0x00054cc7) tabs_2_active_pane_t1_ParamLimits

0x7ed7,	// (0x00054cc7) tabs_2_passive_pane_t1_ParamLimits

0x7ee9,	// (0x00054cd9) bg_active_tab_pane_cp4_ParamLimits

0x7ef7,	// (0x00054ce7) tabs_2_long_active_pane_t1_ParamLimits

0x7f0a,	// (0x00054cfa) bg_passive_tab_pane_cp4_ParamLimits

0x5d01,	// (0x00052af1) list_single_midp_graphic_pane_t1_ParamLimits

0x7ee9,	// (0x00054cd9) bg_active_tab_pane_cp5_ParamLimits

0x7f16,	// (0x00054d06) tabs_3_long_active_pane_t1_ParamLimits

0x7f0a,	// (0x00054cfa) bg_passive_tab_pane_cp5_ParamLimits

0x5d01,	// (0x00052af1) list_single_midp_graphic_pane_t1

0x95aa,	// (0x0005639a) bg_status_flat_pane_ParamLimits

0x9675,	// (0x00056465) indicator_pane_cp2_ParamLimits

0x9675,	// (0x00056465) indicator_pane_cp2

0x97b7,	// (0x000565a7) navi_pane_srt_ParamLimits

0x97b7,	// (0x000565a7) navi_pane_srt

0x97db,	// (0x000565cb) popup_clock_digital_analogue_window_cp1

0x74c3,	// (0x000542b3) indicator_pane_t1

0x8b36,	// (0x00055926) copy_highlight_pane

0x8b36,	// (0x00055926) cursor_graphics_pane

0x8b36,	// (0x00055926) graphic_within_text_pane

0x8b36,	// (0x00055926) link_highlight_pane

0xaa69,	// (0x00057859) popup_preview_text_window_t5_ParamLimits

0xaa69,	// (0x00057859) popup_preview_text_window_t5

0x8c66,	// (0x00055a56) cursor_digital_pane

0x8c66,	// (0x00055a56) cursor_primary_pane

0x8c77,	// (0x00055a67) cursor_primary_small_pane

0x8c7f,	// (0x00055a6f) cursor_secondary_pane

0x8c87,	// (0x00055a77) cursor_title_pane

0x8c66,	// (0x00055a56) link_highlight_digital_pane

0x8c6e,	// (0x00055a5e) link_highlight_primary_pane

0x8c77,	// (0x00055a67) link_highlight_primary_small_pane

0x8c7f,	// (0x00055a6f) link_highlight_secondary_pane

0x8c87,	// (0x00055a77) link_highlight_title_pane

0x8c66,	// (0x00055a56) copy_highlight_digital_pane

0x8c66,	// (0x00055a56) copy_highlight_primary_pane

0x8c77,	// (0x00055a67) copy_highlight_primary_small_pane

0x8c7f,	// (0x00055a6f) copy_highlight_secondary_pane

0x8c87,	// (0x00055a77) copy_highlight_title_pane

0x8c7f,	// (0x00055a6f) graphic_text_digital_pane

0xa2e2,	// (0x000570d2) graphic_text_primary_pane

0xa2eb,	// (0x000570db) graphic_text_primary_small_pane

0x8c77,	// (0x00055a67) graphic_text_secondary_pane

0x8c66,	// (0x00055a56) graphic_text_title_pane

0x8c8f,	// (0x00055a7f) cursor_primary_pane_g1

0xa2d4,	// (0x000570c4) cursor_text_primary_t1

0xa2bc,	// (0x000570ac) cursor_primary_small_pane_g1

0xa2c6,	// (0x000570b6) cursor_text_primary_small_t1

0xa2a4,	// (0x00057094) cursor_primary_small_pane_g1_copy1

0xa2ae,	// (0x0005709e) cursor_text_primary_small_t1_copy1

0xa28c,	// (0x0005707c) cursor_text_title_t1

0xa29a,	// (0x0005708a) cursor_title_pane_g1

0x8c8f,	// (0x00055a7f) cursor_digital_pane_g1

0x8c99,	// (0x00055a89) cursor_text_digital_t1

0x8ca7,	// (0x00055a97) link_highlight_primary_pane_g1

0xa235,	// (0x00057025) link_highlight_primary_pane_t1

0x8ca7,	// (0x00055a97) link_highlight_primary_small_pane_g1

0x8caf,	// (0x00055a9f) link_highlight_primary_small_pane_t1

0x8cbe,	// (0x00055aae) link_highlight_secondary_pane_g1

0x8cc6,	// (0x00055ab6) link_highlight_secondary_pane_t1

0xa1a9,	// (0x00056f99) link_highlight_title_pane_g1

0xa1b1,	// (0x00056fa1) link_highlight_title_pane_t1

0xa192,	// (0x00056f82) link_highlight_digital_pane_g1

0xa19a,	// (0x00056f8a) link_highlight_digital_pane_t1

0xa05a,	// (0x00056e4a) copy_highlight_primary_pane_g1

0xa071,	// (0x00056e61) copy_highlight_primary_pane_t1

0xa05a,	// (0x00056e4a) copy_highlight_primary_small_pane_g1

0xa062,	// (0x00056e52) copy_highlight_primary_small_pane_t1

0x8cd5,	// (0x00055ac5) copy_highlight_secondary_pane_g1

0x8cdd,	// (0x00055acd) copy_highlight_secondary_pane_t1

0xa043,	// (0x00056e33) copy_highlight_title_pane_g1

0xa04b,	// (0x00056e3b) copy_highlight_title_pane_t1

0xa05a,	// (0x00056e4a) copy_highlight_digital_pane_g1

0xb36b,	// (0x0005815b) copy_highlight_digital_pane_t1

0xb2bf,	// (0x000580af) graphic_text_primary_pane_g1

0xb34f,	// (0x0005813f) graphic_text_primary_pane_t1

0xb35d,	// (0x0005814d) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0005c7d4) graphic_text_primary_pane_t

0xb32b,	// (0x0005811b) graphic_text_primary_small_pane_g1

0xb333,	// (0x00058123) graphic_text_primary_small_pane_t1

0xb341,	// (0x00058131) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0005c7cf) graphic_text_primary_small_pane_t

0xb307,	// (0x000580f7) graphic_text_secondary_pane_g1

0xb30f,	// (0x000580ff) graphic_text_secondary_pane_t1

0xb31d,	// (0x0005810d) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0005c7ca) graphic_text_secondary_pane_t

0xb2e3,	// (0x000580d3) graphic_text_title_pane_g1

0xb2eb,	// (0x000580db) graphic_text_title_pane_t1

0xb2f9,	// (0x000580e9) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0005c7c5) graphic_text_title_pane_t

0xb2bf,	// (0x000580af) graphic_text_digital_pane_g1

0xb2c7,	// (0x000580b7) graphic_text_digital_pane_t1

0xb2d5,	// (0x000580c5) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0005c7c0) graphic_text_digital_pane_t

0x73e3,	// (0x000541d3) navi_icon_pane_srt_ParamLimits

0x73e3,	// (0x000541d3) navi_icon_pane_srt

0x2456,	// (0x0004f246) navi_midp_pane_srt

0x2456,	// (0x0004f246) navi_navi_pane_srt

0x73e3,	// (0x000541d3) navi_text_pane_srt_ParamLimits

0x73e3,	// (0x000541d3) navi_text_pane_srt

0xb28a,	// (0x0005807a) navi_navi_icon_text_pane_srt

0xb292,	// (0x00058082) navi_navi_pane_srt_g1_ParamLimits

0xb292,	// (0x00058082) navi_navi_pane_srt_g1

0xb2a4,	// (0x00058094) navi_navi_pane_srt_g2_ParamLimits

0xb2a4,	// (0x00058094) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0005c7bb) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0005c7bb) navi_navi_pane_srt_g

0xb2b6,	// (0x000580a6) navi_navi_tabs_pane_srt

0xb28a,	// (0x0005807a) navi_navi_text_pane_srt

0xb28a,	// (0x0005807a) navi_navi_volume_pane_srt

0xb27b,	// (0x0005806b) navi_navi_text_pane_srt_t1

0x613f,	// (0x00052f2f) navi_navi_volume_pane_srt_g1

0x6147,	// (0x00052f37) volume_small_pane_srt_ParamLimits

0x6147,	// (0x00052f37) volume_small_pane_srt

0x5a0b,	// (0x000527fb) volume_small_pane_srt_g1_ParamLimits

0x5a0b,	// (0x000527fb) volume_small_pane_srt_g1

0x5a1b,	// (0x0005280b) volume_small_pane_srt_g2_ParamLimits

0x5a1b,	// (0x0005280b) volume_small_pane_srt_g2

0x5a2c,	// (0x0005281c) volume_small_pane_srt_g3_ParamLimits

0x5a2c,	// (0x0005281c) volume_small_pane_srt_g3

0x5a3d,	// (0x0005282d) volume_small_pane_srt_g4_ParamLimits

0x5a3d,	// (0x0005282d) volume_small_pane_srt_g4

0x5a4e,	// (0x0005283e) volume_small_pane_srt_g5_ParamLimits

0x5a4e,	// (0x0005283e) volume_small_pane_srt_g5

0x5a5f,	// (0x0005284f) volume_small_pane_srt_g6_ParamLimits

0x5a5f,	// (0x0005284f) volume_small_pane_srt_g6

0x5a70,	// (0x00052860) volume_small_pane_srt_g7_ParamLimits

0x5a70,	// (0x00052860) volume_small_pane_srt_g7

0x5a81,	// (0x00052871) volume_small_pane_srt_g8_ParamLimits

0x5a81,	// (0x00052871) volume_small_pane_srt_g8

0x5a92,	// (0x00052882) volume_small_pane_srt_g9_ParamLimits

0x5a92,	// (0x00052882) volume_small_pane_srt_g9

0x5aa3,	// (0x00052893) volume_small_pane_srt_g10_ParamLimits

0x5aa3,	// (0x00052893) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0005c56a) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0005c56a) volume_small_pane_srt_g

0x77ca,	// (0x000545ba) query_popup_data_pane_cp2

0xb261,	// (0x00058051) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb261,	// (0x00058051) navi_navi_icon_text_pane_srt_t1

0xa2e2,	// (0x000570d2) navi_tabs_2_long_pane_srt

0xa2e2,	// (0x000570d2) navi_tabs_2_pane_srt

0xa2e2,	// (0x000570d2) navi_tabs_3_long_pane_srt

0xa2e2,	// (0x000570d2) navi_tabs_3_pane_srt

0xa2e2,	// (0x000570d2) navi_tabs_4_pane_srt

0x611f,	// (0x00052f0f) tabs_2_active_pane_srt_ParamLimits

0x611f,	// (0x00052f0f) tabs_2_active_pane_srt

0x612f,	// (0x00052f1f) tabs_2_passive_pane_srt_ParamLimits

0x612f,	// (0x00052f1f) tabs_2_passive_pane_srt

0x8eb4,	// (0x00055ca4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8eb4,	// (0x00055ca4) bg_passive_tab_pane_cp1_srt

0xb22d,	// (0x0005801d) bg_passive_tab_pane_g1_cp1_srt

0x877f,	// (0x0005556f) bg_passive_tab_pane_g2_cp1_srt

0xb236,	// (0x00058026) bg_passive_tab_pane_g3_cp1_srt

0x73e3,	// (0x000541d3) bg_active_tab_pane_cp1_srt_ParamLimits

0x73e3,	// (0x000541d3) bg_active_tab_pane_cp1_srt

0xb23f,	// (0x0005802f) tabs_2_active_pane_srt_g1

0xb247,	// (0x00058037) tabs_2_active_pane_srt_t1_ParamLimits

0xb247,	// (0x00058037) tabs_2_active_pane_srt_t1

0xb22d,	// (0x0005801d) bg_active_tab_pane_g1_cp1_srt

0x877f,	// (0x0005556f) bg_active_tab_pane_g2_cp1_srt

0xb236,	// (0x00058026) bg_active_tab_pane_g3_cp1_srt

0x60ec,	// (0x00052edc) tabs_3_active_pane_srt_ParamLimits

0x60ec,	// (0x00052edc) tabs_3_active_pane_srt

0x60fd,	// (0x00052eed) tabs_3_passive_pane_cp_srt_ParamLimits

0x60fd,	// (0x00052eed) tabs_3_passive_pane_cp_srt

0x610e,	// (0x00052efe) tabs_3_passive_pane_srt_ParamLimits

0x610e,	// (0x00052efe) tabs_3_passive_pane_srt

0x8eb4,	// (0x00055ca4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8eb4,	// (0x00055ca4) bg_passive_tab_pane_cp2_srt

0x8cec,	// (0x00055adc) bg_passive_tab_pane_g1_cp2_srt

0x877f,	// (0x0005556f) bg_passive_tab_pane_g2_cp2_srt

0x8cf5,	// (0x00055ae5) bg_passive_tab_pane_g3_cp2_srt

0x73e3,	// (0x000541d3) bg_active_tab_pane_cp2_srt_ParamLimits

0x73e3,	// (0x000541d3) bg_active_tab_pane_cp2_srt

0xb213,	// (0x00058003) tabs_3_active_pane_srt_g1

0xb21b,	// (0x0005800b) tabs_3_active_pane_srt_t1_ParamLimits

0xb21b,	// (0x0005800b) tabs_3_active_pane_srt_t1

0x8cec,	// (0x00055adc) bg_active_tab_pane_g1_cp2_srt

0x877f,	// (0x0005556f) bg_active_tab_pane_g2_cp2_srt

0x8cf5,	// (0x00055ae5) bg_active_tab_pane_g3_cp2_srt

0x60a4,	// (0x00052e94) tabs_4_active_pane_srt_ParamLimits

0x60a4,	// (0x00052e94) tabs_4_active_pane_srt

0x60b6,	// (0x00052ea6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x60b6,	// (0x00052ea6) tabs_4_passive_pane_cp2_srt

0x8e4a,	// (0x00055c3a) aid_size_cell_toolbar

0x7f0a,	// (0x00054cfa) main_idle_act_pane_ParamLimits

0x9085,	// (0x00055e75) popup_large_graphic_colour_window_ParamLimits

0x942c,	// (0x0005621c) popup_toolbar_window_ParamLimits

0x942c,	// (0x0005621c) popup_toolbar_window

0xb02d,	// (0x00057e1d) list_single_graphic_2heading_pane_ParamLimits

0xb02d,	// (0x00057e1d) list_single_graphic_2heading_pane

0x828b,	// (0x0005507b) aid_size_cell_apps_grid_lsc_pane

0x829d,	// (0x0005508d) aid_size_cell_apps_grid_prt_pane

0x8eb4,	// (0x00055ca4) bg_wml_button_pane_cp1_ParamLimits

0x8eb4,	// (0x00055ca4) bg_wml_button_pane_cp1

0x9cda,	// (0x00056aca) form_midp_field_text_pane_t1_ParamLimits

0x9aee,	// (0x000568de) input_focus_pane_cp050_ParamLimits

0x9d05,	// (0x00056af5) list_midp_form_text_pane_ParamLimits

0x9cb7,	// (0x00056aa7) input_focus_pane_cp051_ParamLimits

0x9ccb,	// (0x00056abb) list_midp_choice_pane_ParamLimits

0x9b7f,	// (0x0005696f) list_single_2graphic_pane_cp3_ParamLimits

0x9b7f,	// (0x0005696f) list_single_2graphic_pane_cp3

0x9b98,	// (0x00056988) list_single_midp_graphic_pane_ParamLimits

0x9b98,	// (0x00056988) list_single_midp_graphic_pane

0x49c9,	// (0x000517b9) list_single_graphic_2heading_pane_g1_ParamLimits

0x49c9,	// (0x000517b9) list_single_graphic_2heading_pane_g1

0x49d5,	// (0x000517c5) list_single_graphic_2heading_pane_g4_ParamLimits

0x49d5,	// (0x000517c5) list_single_graphic_2heading_pane_g4

0x49e1,	// (0x000517d1) list_single_graphic_2heading_pane_g5_ParamLimits

0x49e1,	// (0x000517d1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0005c5bd) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0005c5bd) list_single_graphic_2heading_pane_g

0x49ed,	// (0x000517dd) list_single_graphic_2heading_pane_t1_ParamLimits

0x49ed,	// (0x000517dd) list_single_graphic_2heading_pane_t1

0x4a01,	// (0x000517f1) list_single_graphic_2heading_pane_t2_ParamLimits

0x4a01,	// (0x000517f1) list_single_graphic_2heading_pane_t2

0x4a1d,	// (0x0005180d) list_single_graphic_2heading_pane_t3_ParamLimits

0x4a1d,	// (0x0005180d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0005c5c4) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0005c5c4) list_single_graphic_2heading_pane_t

0x993a,	// (0x0005672a) bg_popup_sub_pane_cp2

0x9964,	// (0x00056754) grid_toobar_pane

0x5c25,	// (0x00052a15) cell_toolbar_pane_ParamLimits

0x5c25,	// (0x00052a15) cell_toolbar_pane

0x99a0,	// (0x00056790) cell_toolbar_pane_g1_ParamLimits

0x99a0,	// (0x00056790) cell_toolbar_pane_g1

0x99b4,	// (0x000567a4) cell_toolbar_pane_g2_ParamLimits

0x99b4,	// (0x000567a4) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0005c5d2) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0005c5d2) cell_toolbar_pane_g

0x99d6,	// (0x000567c6) grid_highlight_pane_cp2_ParamLimits

0x99d6,	// (0x000567c6) grid_highlight_pane_cp2

0x99f0,	// (0x000567e0) toolbar_button_pane

0x99fc,	// (0x000567ec) toolbar_button_pane_g1

0x9a04,	// (0x000567f4) toolbar_button_pane_g2

0x9a0c,	// (0x000567fc) toolbar_button_pane_g3

0x9a14,	// (0x00056804) toolbar_button_pane_g4

0x9a1c,	// (0x0005680c) toolbar_button_pane_g5

0x9a24,	// (0x00056814) toolbar_button_pane_g6

0x9a2c,	// (0x0005681c) toolbar_button_pane_g7

0x9a34,	// (0x00056824) toolbar_button_pane_g8

0x9a3c,	// (0x0005682c) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0005c5d7) toolbar_button_pane_g

0x5c7f,	// (0x00052a6f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5c7f,	// (0x00052a6f) list_single_2graphic_pane_g1_cp3

0x5c8b,	// (0x00052a7b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5c8b,	// (0x00052a7b) list_single_2graphic_pane_g2_cp3

0x5c9c,	// (0x00052a8c) list_single_2graphic_pane_g3_cp3

0x5ca4,	// (0x00052a94) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5ca4,	// (0x00052a94) list_single_2graphic_pane_g4_cp3

0x5cb0,	// (0x00052aa0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5cb0,	// (0x00052aa0) list_single_2graphic_pane_t1_cp3

0x5cf5,	// (0x00052ae5) list_single_midp_graphic_pane_g2_ParamLimits

0x5cf5,	// (0x00052ae5) list_single_midp_graphic_pane_g2

0x5c0d,	// (0x000529fd) aid_zoom_text_primary

0x5c15,	// (0x00052a05) aid_zoom_text_secondary

0x8da9,	// (0x00055b99) status_small_pane_g7_ParamLimits

0x8da9,	// (0x00055b99) status_small_pane_g7

0x8dcc,	// (0x00055bbc) status_small_pane_t1_ParamLimits

0x731a,	// (0x0005410a) title_pane_g2

0x0003,

0xf56a,	// (0x0005c35a) title_pane_g

0x7873,	// (0x00054663) aid_size_cell_colour_1_pane_ParamLimits

0x7873,	// (0x00054663) aid_size_cell_colour_1_pane

0x7887,	// (0x00054677) aid_size_cell_colour_2_pane_ParamLimits

0x7887,	// (0x00054677) aid_size_cell_colour_2_pane

0x789b,	// (0x0005468b) aid_size_cell_colour_3_pane_ParamLimits

0x789b,	// (0x0005468b) aid_size_cell_colour_3_pane

0x78af,	// (0x0005469f) aid_size_cell_colour_4_pane_ParamLimits

0x78af,	// (0x0005469f) aid_size_cell_colour_4_pane

0x55f2,	// (0x000523e2) title_pane_stacon_g1_ParamLimits

0x55f2,	// (0x000523e2) title_pane_stacon_g1

0xa0c8,	// (0x00056eb8) popup_note_wait_window_g3_ParamLimits

0xa0c8,	// (0x00056eb8) popup_note_wait_window_g3

0xa13f,	// (0x00056f2f) popup_note_wait_window_t5_ParamLimits

0xa13f,	// (0x00056f2f) popup_note_wait_window_t5

0x2456,	// (0x0004f246) main_feb_china_hwr_fs_writing_pane

0x8f40,	// (0x00055d30) popup_feb_china_hwr_fs_window_ParamLimits

0x8f40,	// (0x00055d30) popup_feb_china_hwr_fs_window

0x5d17,	// (0x00052b07) aid_size_cell_hwr_fs_ParamLimits

0x5d17,	// (0x00052b07) aid_size_cell_hwr_fs

0x9aee,	// (0x000568de) bg_popup_sub_pane_cp3_ParamLimits

0x9aee,	// (0x000568de) bg_popup_sub_pane_cp3

0x5d2c,	// (0x00052b1c) grid_hwr_fs_pane_ParamLimits

0x5d2c,	// (0x00052b1c) grid_hwr_fs_pane

0x5d44,	// (0x00052b34) linegrid_hwr_fs_pane_ParamLimits

0x5d44,	// (0x00052b34) linegrid_hwr_fs_pane

0x5d54,	// (0x00052b44) cell_hwr_fs_pane_ParamLimits

0x5d54,	// (0x00052b44) cell_hwr_fs_pane

0x9afa,	// (0x000568ea) linegrid_hwr_fs_pane_g1_ParamLimits

0x9afa,	// (0x000568ea) linegrid_hwr_fs_pane_g1

0x9b06,	// (0x000568f6) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b06,	// (0x000568f6) linegrid_hwr_fs_pane_g2

0x9b18,	// (0x00056908) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b18,	// (0x00056908) linegrid_hwr_fs_pane_g3

0x5d78,	// (0x00052b68) linegrid_hwr_fs_pane_g4_ParamLimits

0x5d78,	// (0x00052b68) linegrid_hwr_fs_pane_g4

0x5d96,	// (0x00052b86) linegrid_hwr_fs_pane_g5_ParamLimits

0x5d96,	// (0x00052b86) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0005c602) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0005c602) linegrid_hwr_fs_pane_g

0x9b24,	// (0x00056914) cell_hwr_fs_pane_g1_ParamLimits

0x9b24,	// (0x00056914) cell_hwr_fs_pane_g1

0x9871,	// (0x00056661) cell_hwr_fs_pane_g2_ParamLimits

0x9871,	// (0x00056661) cell_hwr_fs_pane_g2

0x9b3a,	// (0x0005692a) cell_hwr_fs_pane_g3_ParamLimits

0x9b3a,	// (0x0005692a) cell_hwr_fs_pane_g3

0x9b47,	// (0x00056937) cell_hwr_fs_pane_g4_ParamLimits

0x9b47,	// (0x00056937) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0005c60d) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0005c60d) cell_hwr_fs_pane_g

0x5dac,	// (0x00052b9c) cell_hwr_fs_pane_t1

0x2456,	// (0x0004f246) grid_highlight_pane_cp6

0x2456,	// (0x0004f246) main_idle_act2_pane

0x7e7c,	// (0x00054c6c) aid_inside_area_popup_secondary

0xa778,	// (0x00057568) aid_inside_area_window_primary_ParamLimits

0xa778,	// (0x00057568) aid_inside_area_window_primary

0xb37a,	// (0x0005816a) ai2_news_ticker_pane

0xb382,	// (0x00058172) aid_size_cell_ai1_link_ParamLimits

0xb382,	// (0x00058172) aid_size_cell_ai1_link

0xb39c,	// (0x0005818c) popup_ai2_data_window_ParamLimits

0xb39c,	// (0x0005818c) popup_ai2_data_window

0xb3ba,	// (0x000581aa) popup_ai2_link_window_ParamLimits

0xb3ba,	// (0x000581aa) popup_ai2_link_window

0x9aee,	// (0x000568de) bg_popup_sub_pane_cp4_ParamLimits

0x9aee,	// (0x000568de) bg_popup_sub_pane_cp4

0xb3d0,	// (0x000581c0) grid_ai2_link_pane_ParamLimits

0xb3d0,	// (0x000581c0) grid_ai2_link_pane

0xb3e7,	// (0x000581d7) popup_ai2_link_window_g1_ParamLimits

0xb3e7,	// (0x000581d7) popup_ai2_link_window_g1

0xb3f3,	// (0x000581e3) popup_ai2_link_window_g2_ParamLimits

0xb3f3,	// (0x000581e3) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0005c7d9) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0005c7d9) popup_ai2_link_window_g

0xb404,	// (0x000581f4) ai2_mp_button_pane

0xb40c,	// (0x000581fc) ai2_mp_volume_pane

0x9cb7,	// (0x00056aa7) bg_popup_sub_pane_cp5_ParamLimits

0x9cb7,	// (0x00056aa7) bg_popup_sub_pane_cp5

0xb414,	// (0x00058204) heading_ai2_gene_pane_ParamLimits

0xb414,	// (0x00058204) heading_ai2_gene_pane

0xb420,	// (0x00058210) list_ai2_gene_pane_ParamLimits

0xb420,	// (0x00058210) list_ai2_gene_pane

0xb468,	// (0x00058258) cell_ai2_link_pane_ParamLimits

0xb468,	// (0x00058258) cell_ai2_link_pane

0xb47e,	// (0x0005826e) cell_ai2_link_pane_g1

0x2456,	// (0x0004f246) grid_highlight_pane_cp7

0x615c,	// (0x00052f4c) ai2_mp_volume_pane_g1

0xb551,	// (0x00058341) ai2_mp_volume_pane_g2

0xb4c6,	// (0x000582b6) list_ai2_gene_pane_t1

0xb559,	// (0x00058349) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0005c7f2) ai2_mp_volume_pane_g

0x6164,	// (0x00052f54) volume_small_pane_cp3

0xb561,	// (0x00058351) aid_size_cell_ai2_button

0xb569,	// (0x00058359) grid_ai2_button_pane

0xb572,	// (0x00058362) cell_ai2_button_pane_ParamLimits

0xb572,	// (0x00058362) cell_ai2_button_pane

0x244c,	// (0x0004f23c) cell_ai2_button_pane_g1

0x2456,	// (0x0004f246) grid_highlight_pane_cp8

0xb511,	// (0x00058301) ai2_gene_pane_t1_ParamLimits

0xb511,	// (0x00058301) ai2_gene_pane_t1

0x8e40,	// (0x00055c30) aid_height_parent_landscape

0xae24,	// (0x00057c14) aid_height_set_list

0xae35,	// (0x00057c25) aid_size_parent

0xb19b,	// (0x00057f8b) aid_size_cell_graphic_pane_ParamLimits

0xb430,	// (0x00058220) popup_ai2_data_window_g1_ParamLimits

0xb430,	// (0x00058220) popup_ai2_data_window_g1

0xb43c,	// (0x0005822c) ai2_news_ticker_pane_g1

0xb444,	// (0x00058234) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0005c7de) ai2_news_ticker_pane_g

0xb44c,	// (0x0005823c) ai2_news_ticker_pane_t1

0xb45a,	// (0x0005824a) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0005c7e3) ai2_news_ticker_pane_t

0xb487,	// (0x00058277) heading_ai2_gene_pane_g1

0xb48f,	// (0x0005827f) heading_ai2_gene_pane_t1_ParamLimits

0xb48f,	// (0x0005827f) heading_ai2_gene_pane_t1

0xb4a4,	// (0x00058294) list_highlight_pane_cp6

0xb4ac,	// (0x0005829c) ai2_gene_pane_ParamLimits

0xb4ac,	// (0x0005829c) ai2_gene_pane

0xb4d4,	// (0x000582c4) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0005c7e8) list_ai2_gene_pane_t

0xb4e2,	// (0x000582d2) list_highlight_pane_cp8_ParamLimits

0xb4e2,	// (0x000582d2) list_highlight_pane_cp8

0xb4f3,	// (0x000582e3) ai2_gene_pane_g1_ParamLimits

0xb4f3,	// (0x000582e3) ai2_gene_pane_g1

0xb505,	// (0x000582f5) ai2_gene_pane_g2_ParamLimits

0xb505,	// (0x000582f5) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0005c7ed) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0005c7ed) ai2_gene_pane_g

0x7c00,	// (0x000549f0) scroll_pane_cp12

0x5bcc,	// (0x000529bc) control_pane_t3_ParamLimits

0x5bcc,	// (0x000529bc) control_pane_t3

0x8dbd,	// (0x00055bad) status_small_pane_g8_ParamLimits

0x8dbd,	// (0x00055bad) status_small_pane_g8

0x904a,	// (0x00055e3a) popup_find_window_ParamLimits

0x9275,	// (0x00056065) popup_note_image_window_ParamLimits

0x5c55,	// (0x00052a45) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c55,	// (0x00052a45) list_double2_graphic_pane_vc_g1

0x8aa7,	// (0x00055897) list_double2_graphic_pane_vc_g2_ParamLimits

0x8aa7,	// (0x00055897) list_double2_graphic_pane_vc_g2

0x7f83,	// (0x00054d73) list_double2_graphic_pane_vc_g3_ParamLimits

0x7f83,	// (0x00054d73) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0005c5cb) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0005c5cb) list_double2_graphic_pane_vc_g

0x5c61,	// (0x00052a51) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c61,	// (0x00052a51) list_double2_graphic_pane_vc_t1

0x8aa7,	// (0x00055897) list_single_heading_pane_vc_g1_ParamLimits

0x8aa7,	// (0x00055897) list_single_heading_pane_vc_g1

0x7f83,	// (0x00054d73) list_single_heading_pane_vc_g2_ParamLimits

0x7f83,	// (0x00054d73) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005c5ec) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005c5ec) list_single_heading_pane_vc_g

0x5ccb,	// (0x00052abb) list_single_heading_pane_vc_t1_ParamLimits

0x5ccb,	// (0x00052abb) list_single_heading_pane_vc_t1

0x5ce1,	// (0x00052ad1) list_single_heading_pane_vc_t2_ParamLimits

0x5ce1,	// (0x00052ad1) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0005c5f1) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0005c5f1) list_single_heading_pane_vc_t

0x9a44,	// (0x00056834) list_setting_number_pane_vc_g1_ParamLimits

0x9a44,	// (0x00056834) list_setting_number_pane_vc_g1

0x9a50,	// (0x00056840) list_setting_number_pane_vc_g2_ParamLimits

0x9a50,	// (0x00056840) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0005c5f6) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0005c5f6) list_setting_number_pane_vc_g

0x9a5c,	// (0x0005684c) list_setting_number_pane_vc_t1_ParamLimits

0x9a5c,	// (0x0005684c) list_setting_number_pane_vc_t1

0x9a70,	// (0x00056860) list_setting_number_pane_vc_t2_ParamLimits

0x9a70,	// (0x00056860) list_setting_number_pane_vc_t2

0x9a8c,	// (0x0005687c) list_setting_number_pane_vc_t3_ParamLimits

0x9a8c,	// (0x0005687c) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0005c5fb) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0005c5fb) list_setting_number_pane_vc_t

0x9ab4,	// (0x000568a4) set_value_pane_vc_ParamLimits

0x9ab4,	// (0x000568a4) set_value_pane_vc

0xb02d,	// (0x00057e1d) list_double2_graphic_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_double2_graphic_pane_vc

0xb02d,	// (0x00057e1d) list_double2_large_graphic_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_double2_large_graphic_pane_vc

0xb02d,	// (0x00057e1d) list_double2_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_double2_pane_vc

0xb02d,	// (0x00057e1d) list_double_graphic_heading_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_double_graphic_heading_pane_vc

0xb02d,	// (0x00057e1d) list_double_graphic_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_double_graphic_pane_vc

0xb02d,	// (0x00057e1d) list_double_heading_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_double_heading_pane_vc

0xb02d,	// (0x00057e1d) list_double_large_graphic_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_double_large_graphic_pane_vc

0xb02d,	// (0x00057e1d) list_double_number_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_double_number_pane_vc

0xb02d,	// (0x00057e1d) list_double_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_double_pane_vc

0xb02d,	// (0x00057e1d) list_double_time_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_double_time_pane_vc

0xb02d,	// (0x00057e1d) list_setting_number_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_setting_number_pane_vc

0xb02d,	// (0x00057e1d) list_setting_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_setting_pane_vc

0xb02d,	// (0x00057e1d) list_single_graphic_heading_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_single_graphic_heading_pane_vc

0xb02d,	// (0x00057e1d) list_single_heading_pane_vc_ParamLimits

0xb02d,	// (0x00057e1d) list_single_heading_pane_vc

0xb041,	// (0x00057e31) list_single_number_heading_pane_vc_ParamLimits

0xb041,	// (0x00057e31) list_single_number_heading_pane_vc

0x5c55,	// (0x00052a45) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5c55,	// (0x00052a45) list_double_graphic_heading_pane_vc_g1

0x7fbb,	// (0x00054dab) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7fbb,	// (0x00054dab) list_double_graphic_heading_pane_vc_g2

0x7fc7,	// (0x00054db7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7fc7,	// (0x00054db7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa09,	// (0x0005c7f9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa09,	// (0x0005c7f9) list_double_graphic_heading_pane_vc_g

0x616d,	// (0x00052f5d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x616d,	// (0x00052f5d) list_double_graphic_heading_pane_vc_t1

0x5ccb,	// (0x00052abb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5ccb,	// (0x00052abb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa10,	// (0x0005c800) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa10,	// (0x0005c800) list_double_graphic_heading_pane_vc_t

0x9a44,	// (0x00056834) list_setting_pane_vc_g1_ParamLimits

0x9a44,	// (0x00056834) list_setting_pane_vc_g1

0x9a50,	// (0x00056840) list_setting_pane_vc_g2_ParamLimits

0x9a50,	// (0x00056840) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0005c5f6) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0005c5f6) list_setting_pane_vc_g

0xb7ae,	// (0x0005859e) list_setting_pane_vc_t1_ParamLimits

0xb7ae,	// (0x0005859e) list_setting_pane_vc_t1

0xb7c2,	// (0x000585b2) list_setting_pane_vc_t2_ParamLimits

0xb7c2,	// (0x000585b2) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x0005c82e) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x0005c82e) list_setting_pane_vc_t

0x9ab4,	// (0x000568a4) set_value_pane_cp_vc_ParamLimits

0x9ab4,	// (0x000568a4) set_value_pane_cp_vc

0x8aa7,	// (0x00055897) list_single_number_heading_pane_vc_g1_ParamLimits

0x8aa7,	// (0x00055897) list_single_number_heading_pane_vc_g1

0x7f83,	// (0x00054d73) list_single_number_heading_pane_vc_g2_ParamLimits

0x7f83,	// (0x00054d73) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005c5ec) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005c5ec) list_single_number_heading_pane_vc_g

0x5ccb,	// (0x00052abb) list_single_number_heading_pane_vc_t1_ParamLimits

0x5ccb,	// (0x00052abb) list_single_number_heading_pane_vc_t1

0x6181,	// (0x00052f71) list_single_number_heading_pane_vc_t2_ParamLimits

0x6181,	// (0x00052f71) list_single_number_heading_pane_vc_t2

0x6195,	// (0x00052f85) list_single_number_heading_pane_vc_t3_ParamLimits

0x6195,	// (0x00052f85) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x0005c833) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0005c833) list_single_number_heading_pane_vc_t

0x5c55,	// (0x00052a45) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5c55,	// (0x00052a45) list_single_graphic_heading_pane_vc_g1

0x8aa7,	// (0x00055897) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8aa7,	// (0x00055897) list_single_graphic_heading_pane_vc_g4

0x7f83,	// (0x00054d73) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7f83,	// (0x00054d73) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0005c5cb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0005c5cb) list_single_graphic_heading_pane_vc_g

0x5ccb,	// (0x00052abb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5ccb,	// (0x00052abb) list_single_graphic_heading_pane_vc_t1

0x61a7,	// (0x00052f97) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x61a7,	// (0x00052f97) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x0005c83a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x0005c83a) list_single_graphic_heading_pane_vc_t

0x8aa7,	// (0x00055897) list_double2_pane_vc_g1_ParamLimits

0x8aa7,	// (0x00055897) list_double2_pane_vc_g1

0x7f83,	// (0x00054d73) list_double2_pane_vc_g2_ParamLimits

0x7f83,	// (0x00054d73) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005c5ec) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005c5ec) list_double2_pane_vc_g

0x61bb,	// (0x00052fab) list_double2_pane_vc_t1_ParamLimits

0x61bb,	// (0x00052fab) list_double2_pane_vc_t1

0x7fd3,	// (0x00054dc3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7fd3,	// (0x00054dc3) list_double2_large_graphic_pane_vc_g1

0x8aa7,	// (0x00055897) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8aa7,	// (0x00055897) list_double2_large_graphic_pane_vc_g2

0x7f83,	// (0x00054d73) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7f83,	// (0x00054d73) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4f,	// (0x0005c83f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x0005c83f) list_double2_large_graphic_pane_vc_g

0x61d1,	// (0x00052fc1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x61d1,	// (0x00052fc1) list_double2_large_graphic_pane_vc_t1

0x7fdf,	// (0x00054dcf) list_double_time_pane_vc_g1_ParamLimits

0x7fdf,	// (0x00054dcf) list_double_time_pane_vc_g1

0x7feb,	// (0x00054ddb) list_double_time_pane_vc_g2_ParamLimits

0x7feb,	// (0x00054ddb) list_double_time_pane_vc_g2

0x0001,

0xfa56,	// (0x0005c846) list_double_time_pane_vc_g_ParamLimits

0xfa56,	// (0x0005c846) list_double_time_pane_vc_g

0x61e7,	// (0x00052fd7) list_double_time_pane_vc_t1_ParamLimits

0x61e7,	// (0x00052fd7) list_double_time_pane_vc_t1

0x6200,	// (0x00052ff0) list_double_time_pane_vc_t2_ParamLimits

0x6200,	// (0x00052ff0) list_double_time_pane_vc_t2

0x6240,	// (0x00053030) list_double_time_pane_vc_t3_ParamLimits

0x6240,	// (0x00053030) list_double_time_pane_vc_t3

0x6258,	// (0x00053048) list_double_time_pane_vc_t4_ParamLimits

0x6258,	// (0x00053048) list_double_time_pane_vc_t4

0x0003,

0xfa5b,	// (0x0005c84b) list_double_time_pane_vc_t_ParamLimits

0xfa5b,	// (0x0005c84b) list_double_time_pane_vc_t

0x8aa7,	// (0x00055897) list_double_pane_vc_g1_ParamLimits

0x8aa7,	// (0x00055897) list_double_pane_vc_g1

0x7f83,	// (0x00054d73) list_double_pane_vc_g2_ParamLimits

0x7f83,	// (0x00054d73) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005c5ec) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005c5ec) list_double_pane_vc_g

0x626c,	// (0x0005305c) list_double_pane_vc_t1_ParamLimits

0x626c,	// (0x0005305c) list_double_pane_vc_t1

0x627e,	// (0x0005306e) list_double_pane_vc_t2_ParamLimits

0x627e,	// (0x0005306e) list_double_pane_vc_t2

0x0001,

0xfa64,	// (0x0005c854) list_double_pane_vc_t_ParamLimits

0xfa64,	// (0x0005c854) list_double_pane_vc_t

0x8aa7,	// (0x00055897) list_double_number_pane_vc_g1_ParamLimits

0x8aa7,	// (0x00055897) list_double_number_pane_vc_g1

0x7f83,	// (0x00054d73) list_double_number_pane_vc_g2_ParamLimits

0x7f83,	// (0x00054d73) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005c5ec) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005c5ec) list_double_number_pane_vc_g

0x6296,	// (0x00053086) list_double_number_pane_vc_t1_ParamLimits

0x6296,	// (0x00053086) list_double_number_pane_vc_t1

0x62aa,	// (0x0005309a) list_double_number_pane_vc_t2_ParamLimits

0x62aa,	// (0x0005309a) list_double_number_pane_vc_t2

0x627e,	// (0x0005306e) list_double_number_pane_vc_t3_ParamLimits

0x627e,	// (0x0005306e) list_double_number_pane_vc_t3

0x0002,

0xfa69,	// (0x0005c859) list_double_number_pane_vc_t_ParamLimits

0xfa69,	// (0x0005c859) list_double_number_pane_vc_t

0x7ff7,	// (0x00054de7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7ff7,	// (0x00054de7) list_double_large_graphic_pane_vc_g1

0x8003,	// (0x00054df3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x8003,	// (0x00054df3) list_double_large_graphic_pane_vc_g2

0x7f83,	// (0x00054d73) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7f83,	// (0x00054d73) list_double_large_graphic_pane_vc_g3

0x62bc,	// (0x000530ac) list_double_large_graphic_pane_vc_g4_ParamLimits

0x62bc,	// (0x000530ac) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa70,	// (0x0005c860) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x0005c860) list_double_large_graphic_pane_vc_g

0x62c8,	// (0x000530b8) list_double_large_graphic_pane_vc_t1_ParamLimits

0x62c8,	// (0x000530b8) list_double_large_graphic_pane_vc_t1

0x62da,	// (0x000530ca) list_double_large_graphic_pane_vc_t2_ParamLimits

0x62da,	// (0x000530ca) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa79,	// (0x0005c869) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa79,	// (0x0005c869) list_double_large_graphic_pane_vc_t

0x7fbb,	// (0x00054dab) list_double_heading_pane_vc_g1_ParamLimits

0x7fbb,	// (0x00054dab) list_double_heading_pane_vc_g1

0x7fc7,	// (0x00054db7) list_double_heading_pane_vc_g2_ParamLimits

0x7fc7,	// (0x00054db7) list_double_heading_pane_vc_g2

0x0001,

0xfa7e,	// (0x0005c86e) list_double_heading_pane_vc_g_ParamLimits

0xfa7e,	// (0x0005c86e) list_double_heading_pane_vc_g

0x62f3,	// (0x000530e3) list_double_heading_pane_vc_t1_ParamLimits

0x62f3,	// (0x000530e3) list_double_heading_pane_vc_t1

0x5ccb,	// (0x00052abb) list_double_heading_pane_vc_t2_ParamLimits

0x5ccb,	// (0x00052abb) list_double_heading_pane_vc_t2

0x0001,

0xfa83,	// (0x0005c873) list_double_heading_pane_vc_t_ParamLimits

0xfa83,	// (0x0005c873) list_double_heading_pane_vc_t

0x5c55,	// (0x00052a45) list_double_graphic_pane_vc_g1_ParamLimits

0x5c55,	// (0x00052a45) list_double_graphic_pane_vc_g1

0x8012,	// (0x00054e02) list_double_graphic_pane_vc_g2_ParamLimits

0x8012,	// (0x00054e02) list_double_graphic_pane_vc_g2

0x8021,	// (0x00054e11) list_double_graphic_pane_vc_g3_ParamLimits

0x8021,	// (0x00054e11) list_double_graphic_pane_vc_g3

0x0002,

0xfa88,	// (0x0005c878) list_double_graphic_pane_vc_g_ParamLimits

0xfa88,	// (0x0005c878) list_double_graphic_pane_vc_g

0x6307,	// (0x000530f7) list_double_graphic_pane_vc_t1_ParamLimits

0x6307,	// (0x000530f7) list_double_graphic_pane_vc_t1

0x627e,	// (0x0005306e) list_double_graphic_pane_vc_t2_ParamLimits

0x627e,	// (0x0005306e) list_double_graphic_pane_vc_t2

0x0001,

0xfa8f,	// (0x0005c87f) list_double_graphic_pane_vc_t_ParamLimits

0xfa8f,	// (0x0005c87f) list_double_graphic_pane_vc_t

0x4a4d,	// (0x0005183d) aid_size_cell_fastswap

0x4a55,	// (0x00051845) aid_size_cell_touch_ParamLimits

0x4a55,	// (0x00051845) aid_size_cell_touch

0x4cc0,	// (0x00051ab0) popup_fast_swap_wide_window_ParamLimits

0x4cc0,	// (0x00051ab0) popup_fast_swap_wide_window

0x4dd6,	// (0x00051bc6) touch_pane_ParamLimits

0x4dd6,	// (0x00051bc6) touch_pane

0x7cf6,	// (0x00054ae6) button_value_adjust_pane_cp2

0x5372,	// (0x00052162) button_value_adjust_pane_cp4

0x539a,	// (0x0005218a) form_field_data_pane_cp2

0x53bf,	// (0x000521af) form_field_data_wide_pane_cp2

0x835d,	// (0x0005514d) bg_scroll_pane_ParamLimits

0x5757,	// (0x00052547) scroll_handle_pane_ParamLimits

0x576b,	// (0x0005255b) scroll_sc2_down_pane_ParamLimits

0x576b,	// (0x0005255b) scroll_sc2_down_pane

0x838e,	// (0x0005517e) scroll_sc2_up_pane_ParamLimits

0x838e,	// (0x0005517e) scroll_sc2_up_pane

0xbc80,	// (0x00058a70) grid_wheel_folder_pane_g1_ParamLimits

0xbc80,	// (0x00058a70) grid_wheel_folder_pane_g1

0x59a3,	// (0x00052793) clock_nsta_pane_cp2_ParamLimits

0x59a3,	// (0x00052793) clock_nsta_pane_cp2

0x8b3e,	// (0x0005592e) listscroll_midp_pane_ParamLimits

0x8b4a,	// (0x0005593a) midp_canvas_pane

0x8e38,	// (0x00055c28) nsta_clock_indic_pane

0x8e86,	// (0x00055c76) listscroll_form_pane_vc

0x8ea2,	// (0x00055c92) listscroll_set_pane_vc_ParamLimits

0x8ea2,	// (0x00055c92) listscroll_set_pane_vc

0x95c6,	// (0x000563b6) clock_nsta_pane

0x9643,	// (0x00056433) indicator_nsta_pane

0x993a,	// (0x0005672a) bg_popup_sub_pane_cp2_ParamLimits

0x994e,	// (0x0005673e) find_pane_cp2_ParamLimits

0x994e,	// (0x0005673e) find_pane_cp2

0x9964,	// (0x00056754) grid_toobar_pane_ParamLimits

0x9ac2,	// (0x000568b2) list_form_gen_pane_vc_ParamLimits

0x9ac2,	// (0x000568b2) list_form_gen_pane_vc

0x9ad8,	// (0x000568c8) scroll_pane_cp8_vc_ParamLimits

0x9ad8,	// (0x000568c8) scroll_pane_cp8_vc

0x9b54,	// (0x00056944) data_form_wide_pane_vc_ParamLimits

0x9b54,	// (0x00056944) data_form_wide_pane_vc

0x9b60,	// (0x00056950) form_field_data_wide_pane_vc_g1

0x9b68,	// (0x00056958) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b68,	// (0x00056958) form_field_data_wide_pane_vc_t1

0x7d0a,	// (0x00054afa) input_focus_pane_cp6_vc_ParamLimits

0x7d0a,	// (0x00054afa) input_focus_pane_cp6_vc

0x9e42,	// (0x00056c32) list_midp_pane_ParamLimits

0x9e4e,	// (0x00056c3e) scroll_pane_cp16_ParamLimits

0x9e4e,	// (0x00056c3e) scroll_pane_cp16

0x9e9c,	// (0x00056c8c) button_value_adjust_pane_ParamLimits

0x9e9c,	// (0x00056c8c) button_value_adjust_pane

0xae47,	// (0x00057c37) button_value_adjust_pane_cp6_ParamLimits

0xae47,	// (0x00057c37) button_value_adjust_pane_cp6

0xafa1,	// (0x00057d91) settings_code_pane_cp_ParamLimits

0xafa1,	// (0x00057d91) settings_code_pane_cp

0x244c,	// (0x0004f23c) cell_touch_pane_g1

0x244c,	// (0x0004f23c) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0005c514) cell_touch_pane_g

0xb584,	// (0x00058374) cell_touch_pane_cp_ParamLimits

0xb584,	// (0x00058374) cell_touch_pane_cp

0xb594,	// (0x00058384) cell_touch_pane_ParamLimits

0xb594,	// (0x00058384) cell_touch_pane

0x244c,	// (0x0004f23c) scroll_sc2_down_pane_g1

0x244c,	// (0x0004f23c) scroll_sc2_up_pane_g1

0x2456,	// (0x0004f246) bg_set_opt_pane_cp4_vc

0xb5a5,	// (0x00058395) list_set_graphic_pane_vc_g1_ParamLimits

0xb5a5,	// (0x00058395) list_set_graphic_pane_vc_g1

0xb5b1,	// (0x000583a1) list_set_graphic_pane_vc_g2_ParamLimits

0xb5b1,	// (0x000583a1) list_set_graphic_pane_vc_g2

0x0001,

0xfa15,	// (0x0005c805) list_set_graphic_pane_vc_g_ParamLimits

0xfa15,	// (0x0005c805) list_set_graphic_pane_vc_g

0xb5bd,	// (0x000583ad) text_primary_small_cp13_vc_ParamLimits

0xb5bd,	// (0x000583ad) text_primary_small_cp13_vc

0xb5d5,	// (0x000583c5) list_set_graphic_pane_vc_ParamLimits

0xb5d5,	// (0x000583c5) list_set_graphic_pane_vc

0x2456,	// (0x0004f246) input_focus_pane_cp2_vc

0x244c,	// (0x0004f23c) setting_code_pane_vc_g1

0xb5e9,	// (0x000583d9) setting_code_pane_vc_t1

0xb5f7,	// (0x000583e7) set_text_pane_vc_t1_ParamLimits

0xb5f7,	// (0x000583e7) set_text_pane_vc_t1

0x2456,	// (0x0004f246) input_focus_pane_cp1_vc

0xb615,	// (0x00058405) list_set_text_pane_vc

0x244c,	// (0x0004f23c) setting_text_pane_vc_g1

0x2456,	// (0x0004f246) bg_set_opt_pane_cp2_vc

0xb61f,	// (0x0005840f) setting_slider_graphic_pane_vc_g1

0xb627,	// (0x00058417) setting_slider_graphic_pane_vc_t1

0xb635,	// (0x00058425) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa1a,	// (0x0005c80a) setting_slider_graphic_pane_vc_t

0xb643,	// (0x00058433) slider_set_pane_cp_vc

0xb64b,	// (0x0005843b) slider_set_pane_vc_g1

0xb654,	// (0x00058444) slider_set_pane_vc_g2

0x0006,

0xfa1f,	// (0x0005c80f) slider_set_pane_vc_g

0x7d71,	// (0x00054b61) set_opt_bg_pane_g1_copy1

0x7d79,	// (0x00054b69) set_opt_bg_pane_g2_copy1

0xb680,	// (0x00058470) set_opt_bg_pane_g3_copy1

0x7d89,	// (0x00054b79) set_opt_bg_pane_g4_copy1

0x7d91,	// (0x00054b81) set_opt_bg_pane_g5_copy1

0x7d99,	// (0x00054b89) set_opt_bg_pane_g6_copy1

0xb68a,	// (0x0005847a) set_opt_bg_pane_g7_copy1

0xb694,	// (0x00058484) set_opt_bg_pane_g8_copy1

0xb69e,	// (0x0005848e) set_opt_bg_pane_g9_copy1

0x2456,	// (0x0004f246) bg_set_opt_pane_cp_vc

0xb6a8,	// (0x00058498) setting_slider_pane_vc_t1

0xb627,	// (0x00058417) setting_slider_pane_vc_t2

0xb635,	// (0x00058425) setting_slider_pane_vc_t3

0x0002,

0xfa2e,	// (0x0005c81e) setting_slider_pane_vc_t

0xb643,	// (0x00058433) slider_set_pane_vc

0x5de8,	// (0x00052bd8) volume_set_pane_vc_g1

0x5df1,	// (0x00052be1) volume_set_pane_vc_g2

0x5dfa,	// (0x00052bea) volume_set_pane_vc_g3

0x5e03,	// (0x00052bf3) volume_set_pane_vc_g4

0x5e0c,	// (0x00052bfc) volume_set_pane_vc_g5

0x5e15,	// (0x00052c05) volume_set_pane_vc_g6

0x5e1e,	// (0x00052c0e) volume_set_pane_vc_g7

0x5e27,	// (0x00052c17) volume_set_pane_vc_g8

0x5e30,	// (0x00052c20) volume_set_pane_vc_g9

0x5e39,	// (0x00052c29) volume_set_pane_vc_g10

0x0009,

0xf8cc,	// (0x0005c6bc) volume_set_pane_vc_g

0xb6b7,	// (0x000584a7) volume_set_pane_vc

0xb6bf,	// (0x000584af) button_value_adjust_pane_cp1_vc

0xb6c9,	// (0x000584b9) list_highlight_pane_cp2_vc

0xb6d2,	// (0x000584c2) list_set_pane_vc_ParamLimits

0xb6d2,	// (0x000584c2) list_set_pane_vc

0xb73c,	// (0x0005852c) main_pane_set_vc_t1_ParamLimits

0xb73c,	// (0x0005852c) main_pane_set_vc_t1

0xb751,	// (0x00058541) main_pane_set_vc_t2_ParamLimits

0xb751,	// (0x00058541) main_pane_set_vc_t2

0xb763,	// (0x00058553) main_pane_set_vc_t3_ParamLimits

0xb763,	// (0x00058553) main_pane_set_vc_t3

0xb777,	// (0x00058567) main_pane_set_vc_t4_ParamLimits

0xb777,	// (0x00058567) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x0005c825) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x0005c825) main_pane_set_vc_t

0xb78b,	// (0x0005857b) setting_code_pane_vc_ParamLimits

0xb78b,	// (0x0005857b) setting_code_pane_vc

0xb79c,	// (0x0005858c) setting_slider_graphic_pane_vc

0xb79c,	// (0x0005858c) setting_slider_pane_vc

0xb79c,	// (0x0005858c) setting_text_pane_vc

0xb79c,	// (0x0005858c) setting_volume_pane_vc

0xb7a6,	// (0x00058596) scroll_pane_cp121_vc

0x7ce4,	// (0x00054ad4) set_content_pane_vc

0xb7e4,	// (0x000585d4) button_value_adjust_pane_g1

0xb7ed,	// (0x000585dd) button_value_adjust_pane_g2

0x0001,

0xfa94,	// (0x0005c884) button_value_adjust_pane_g

0xb7f6,	// (0x000585e6) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb7f6,	// (0x000585e6) form_field_slider_wide_pane_vc_t1

0xb80a,	// (0x000585fa) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb80a,	// (0x000585fa) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa99,	// (0x0005c889) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0005c889) form_field_slider_wide_pane_vc_t

0x765f,	// (0x0005444f) input_focus_pane_cp10_vc_ParamLimits

0x765f,	// (0x0005444f) input_focus_pane_cp10_vc

0xb81c,	// (0x0005860c) slider_cont_pane_cp1_vc_ParamLimits

0xb81c,	// (0x0005860c) slider_cont_pane_cp1_vc

0xb64b,	// (0x0005843b) slider_form_pane_g1_cp2

0xb654,	// (0x00058444) slider_form_pane_g2_cp2

0xb835,	// (0x00058625) form_field_slider_pane_vc_t3

0xb843,	// (0x00058633) form_field_slider_pane_vc_t4

0xb851,	// (0x00058641) slider_form_pane_vc_ParamLimits

0xb851,	// (0x00058641) slider_form_pane_vc

0xb85e,	// (0x0005864e) form_field_slider_pane_vc_t1_ParamLimits

0xb85e,	// (0x0005864e) form_field_slider_pane_vc_t1

0xb80a,	// (0x000585fa) form_field_slider_pane_vc_t2_ParamLimits

0xb80a,	// (0x000585fa) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x0005c899) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x0005c899) form_field_slider_pane_vc_t

0x765f,	// (0x0005444f) input_focus_pane_cp9_vc_ParamLimits

0x765f,	// (0x0005444f) input_focus_pane_cp9_vc

0xb87a,	// (0x0005866a) slider_cont_pane_vc_ParamLimits

0xb87a,	// (0x0005866a) slider_cont_pane_vc

0xb88c,	// (0x0005867c) list_form_graphic_pane_cp_vc_ParamLimits

0xb88c,	// (0x0005867c) list_form_graphic_pane_cp_vc

0x9b60,	// (0x00056950) form_field_popup_wide_pane_vc_g1

0xb8a1,	// (0x00058691) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb8a1,	// (0x00058691) form_field_popup_wide_pane_vc_t1

0x7d0a,	// (0x00054afa) input_focus_pane_cp8_vc_ParamLimits

0x7d0a,	// (0x00054afa) input_focus_pane_cp8_vc

0xb8b8,	// (0x000586a8) list_form_wide_pane_vc_ParamLimits

0xb8b8,	// (0x000586a8) list_form_wide_pane_vc

0xb8c4,	// (0x000586b4) list_form_graphic_pane_vc_g1

0xb8cc,	// (0x000586bc) list_form_graphic_pane_vc_t1_ParamLimits

0xb8cc,	// (0x000586bc) list_form_graphic_pane_vc_t1

0x73e3,	// (0x000541d3) list_highlight_pane_cp5_vc_ParamLimits

0x73e3,	// (0x000541d3) list_highlight_pane_cp5_vc

0xb8e8,	// (0x000586d8) list_form_graphic_pane_vc_ParamLimits

0xb8e8,	// (0x000586d8) list_form_graphic_pane_vc

0x9b60,	// (0x00056950) form_field_popup_pane_vc_g1

0xb8fe,	// (0x000586ee) form_field_popup_pane_vc_t1_ParamLimits

0xb8fe,	// (0x000586ee) form_field_popup_pane_vc_t1

0x7d0a,	// (0x00054afa) input_focus_pane_cp7_vc_ParamLimits

0x7d0a,	// (0x00054afa) input_focus_pane_cp7_vc

0xb915,	// (0x00058705) list_form_pane_vc_ParamLimits

0xb915,	// (0x00058705) list_form_pane_vc

0xb921,	// (0x00058711) data_form_pane_vc_t1_ParamLimits

0xb921,	// (0x00058711) data_form_pane_vc_t1

0x7d71,	// (0x00054b61) input_focus_pane_vc_g1

0x7d79,	// (0x00054b69) input_focus_pane_vc_g2

0x7d81,	// (0x00054b71) input_focus_pane_vc_g3

0x7d89,	// (0x00054b79) input_focus_pane_vc_g4

0x7d91,	// (0x00054b81) input_focus_pane_vc_g5

0x7d99,	// (0x00054b89) input_focus_pane_vc_g6

0x7da1,	// (0x00054b91) input_focus_pane_vc_g7

0x7da9,	// (0x00054b99) input_focus_pane_vc_g8

0x7db1,	// (0x00054ba1) input_focus_pane_vc_g9

0x244c,	// (0x0004f23c) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0005c49d) input_focus_pane_vc_g

0x9b54,	// (0x00056944) data_form_pane_vc_ParamLimits

0x9b54,	// (0x00056944) data_form_pane_vc

0x9b60,	// (0x00056950) form_field_data_pane_vc_g1

0xb93e,	// (0x0005872e) form_field_data_pane_vc_t1_ParamLimits

0xb93e,	// (0x0005872e) form_field_data_pane_vc_t1

0x7d0a,	// (0x00054afa) input_focus_pane_vc_ParamLimits

0x7d0a,	// (0x00054afa) input_focus_pane_vc

0xb958,	// (0x00058748) button_value_adjust_pane_cp3_vc

0xb960,	// (0x00058750) button_value_adjust_pane_cp5_vc

0xb968,	// (0x00058758) form_field_data_pane_vc_ParamLimits

0xb968,	// (0x00058758) form_field_data_pane_vc

0xb983,	// (0x00058773) form_field_data_pane_vc_cp2

0xb98b,	// (0x0005877b) form_field_data_wide_pane_vc_ParamLimits

0xb98b,	// (0x0005877b) form_field_data_wide_pane_vc

0xb9a5,	// (0x00058795) form_field_data_wide_pane_vc_cp2

0xb9ad,	// (0x0005879d) form_field_popup_pane_vc_ParamLimits

0xb9ad,	// (0x0005879d) form_field_popup_pane_vc

0xb9c8,	// (0x000587b8) form_field_popup_wide_pane_vc_ParamLimits

0xb9c8,	// (0x000587b8) form_field_popup_wide_pane_vc

0xb9e2,	// (0x000587d2) form_field_slider_pane_vc_ParamLimits

0xb9e2,	// (0x000587d2) form_field_slider_pane_vc

0xb9f5,	// (0x000587e5) form_field_slider_wide_pane_vc_ParamLimits

0xb9f5,	// (0x000587e5) form_field_slider_wide_pane_vc

0xba4a,	// (0x0005883a) grid_touch_1_pane_ParamLimits

0xba4a,	// (0x0005883a) grid_touch_1_pane

0xba56,	// (0x00058846) grid_touch_2_pane_ParamLimits

0xba56,	// (0x00058846) grid_touch_2_pane

0x8e03,	// (0x00055bf3) touch_pane_g1_ParamLimits

0x8e03,	// (0x00055bf3) touch_pane_g1

0xba70,	// (0x00058860) cell_app_pane_cp_wide_ParamLimits

0xba70,	// (0x00058860) cell_app_pane_cp_wide

0xba81,	// (0x00058871) grid_popup_fast_wide_pane_ParamLimits

0xba81,	// (0x00058871) grid_popup_fast_wide_pane

0xba95,	// (0x00058885) scroll_pane_cp19_ParamLimits

0xba95,	// (0x00058885) scroll_pane_cp19

0x2456,	// (0x0004f246) bg_popup_window_pane_cp20

0xbaa9,	// (0x00058899) listscroll_popup_fast_wide_pane

0x73e3,	// (0x000541d3) grid_indicator_nsta_pane

0xbab1,	// (0x000588a1) clock_nsta_pane_g1

0xbaba,	// (0x000588aa) clock_nsta_pane_t1

0xbad6,	// (0x000588c6) cell_indicator_nsta_pane_ParamLimits

0xbad6,	// (0x000588c6) cell_indicator_nsta_pane

0xbb0e,	// (0x000588fe) cell_indicator_nsta_pane_g1

0xbb1c,	// (0x0005890c) cell_indicator_nsta_pane_g2

0x0001,

0xfab3,	// (0x0005c8a3) cell_indicator_nsta_pane_g

0xbb31,	// (0x00058921) clock_nsta_pane_cp

0xbb39,	// (0x00058929) indicator_nsta_pane_cp

0xbb41,	// (0x00058931) nsta_clock_indic_pane_g1

0x74af,	// (0x0005429f) grid_indicator_pane

0x8480,	// (0x00055270) scroll_pane_cp29

0x58ef,	// (0x000526df) indicator_nsta_pane_cp2_ParamLimits

0x58ef,	// (0x000526df) indicator_nsta_pane_cp2

0x73e3,	// (0x000541d3) main_apps_wheel_pane

0x9d1f,	// (0x00056b0f) form_midp_field_text_pane_ParamLimits

0x9e6e,	// (0x00056c5e) scroll_bar_cp050_ParamLimits

0xbbaa,	// (0x0005899a) cell_indicator_pane_ParamLimits

0xbbaa,	// (0x0005899a) cell_indicator_pane

0xbbc2,	// (0x000589b2) cell_indicator_pane_g1

0xbbcc,	// (0x000589bc) grid_wheel_folder_pane_ParamLimits

0xbbcc,	// (0x000589bc) grid_wheel_folder_pane

0xbbe0,	// (0x000589d0) list_wheel_apps_pane_ParamLimits

0xbbe0,	// (0x000589d0) list_wheel_apps_pane

0xbbf3,	// (0x000589e3) main_apps_wheel_pane_g1_ParamLimits

0xbbf3,	// (0x000589e3) main_apps_wheel_pane_g1

0xbc0f,	// (0x000589ff) main_apps_wheel_pane_g2_ParamLimits

0xbc0f,	// (0x000589ff) main_apps_wheel_pane_g2

0x0001,

0xfacf,	// (0x0005c8bf) main_apps_wheel_pane_g_ParamLimits

0xfacf,	// (0x0005c8bf) main_apps_wheel_pane_g

0xbc2b,	// (0x00058a1b) main_apps_wheel_pane_t1_ParamLimits

0xbc2b,	// (0x00058a1b) main_apps_wheel_pane_t1

0xbc54,	// (0x00058a44) list_wheel_apps_pane_g1

0xbc5c,	// (0x00058a4c) list_wheel_apps_pane_g2

0xbc64,	// (0x00058a54) list_wheel_apps_pane_g3

0xbc6c,	// (0x00058a5c) list_wheel_apps_pane_g4

0xbc76,	// (0x00058a66) list_wheel_apps_pane_g5

0x0004,

0xfad4,	// (0x0005c8c4) list_wheel_apps_pane_g

0x89b2,	// (0x000557a2) navi_icon_text_pane

0x94f3,	// (0x000562e3) aid_fill_nsta

0xbc97,	// (0x00058a87) navi_icon_text_pane_g1

0xbca6,	// (0x00058a96) navi_icon_text_pane_t1

0x8848,	// (0x00055638) list_set_graphic_pane_t1_ParamLimits

0x8848,	// (0x00055638) list_set_graphic_pane_t1

0xa5bf,	// (0x000573af) popup_midp_note_alarm_window_t6_ParamLimits

0xa5bf,	// (0x000573af) popup_midp_note_alarm_window_t6

0xa5d1,	// (0x000573c1) popup_midp_note_alarm_window_t7_ParamLimits

0xa5d1,	// (0x000573c1) popup_midp_note_alarm_window_t7

0xa5e3,	// (0x000573d3) popup_midp_note_alarm_window_t8_ParamLimits

0xa5e3,	// (0x000573d3) popup_midp_note_alarm_window_t8

0xa5f5,	// (0x000573e5) popup_midp_note_alarm_window_t9_ParamLimits

0xa5f5,	// (0x000573e5) popup_midp_note_alarm_window_t9

0xa607,	// (0x000573f7) popup_midp_note_alarm_window_t10_ParamLimits

0xa607,	// (0x000573f7) popup_midp_note_alarm_window_t10

0xa619,	// (0x00057409) popup_midp_note_alarm_window_t11_ParamLimits

0xa619,	// (0x00057409) popup_midp_note_alarm_window_t11

0xa62b,	// (0x0005741b) scroll_pane_cp17_ParamLimits

0xa62b,	// (0x0005741b) scroll_pane_cp17

0x5de8,	// (0x00052bd8) volume_small_pane_cp_g1

0x6319,	// (0x00053109) volume_small_pane_cp_g2

0x6322,	// (0x00053112) volume_small_pane_cp_g3

0x632b,	// (0x0005311b) volume_small_pane_cp_g4

0x6334,	// (0x00053124) volume_small_pane_cp_g5

0x633d,	// (0x0005312d) volume_small_pane_cp_g6

0x6346,	// (0x00053136) volume_small_pane_cp_g7

0x634f,	// (0x0005313f) volume_small_pane_cp_g8

0x6358,	// (0x00053148) volume_small_pane_cp_g9

0x6361,	// (0x00053151) volume_small_pane_cp_g10

0x8c13,	// (0x00055a03) midp_ticker_pane_g1_ParamLimits

0x8c1f,	// (0x00055a0f) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0005c565) midp_ticker_pane_g_ParamLimits

0x8c2b,	// (0x00055a1b) midp_ticker_pane_t1_ParamLimits

0x9509,	// (0x000562f9) aid_fill_nsta_2

0x9e5a,	// (0x00056c4a) list_form2_midp_pane

0xafe8,	// (0x00057dd8) midp_editing_number_pane_ParamLimits

0xaff7,	// (0x00057de7) midp_ticker_pane_ParamLimits

0xbcbb,	// (0x00058aab) form2_midp_field_pane

0xbcdf,	// (0x00058acf) scroll_pane_cp51

0xbcff,	// (0x00058aef) form2_midp_button_pane_ParamLimits

0xbcff,	// (0x00058aef) form2_midp_button_pane

0xbd11,	// (0x00058b01) form2_midp_content_pane_ParamLimits

0xbd11,	// (0x00058b01) form2_midp_content_pane

0xbd2b,	// (0x00058b1b) form2_midp_field_choice_group_pane

0xbd33,	// (0x00058b23) form2_midp_field_pane_g1

0xbd3b,	// (0x00058b2b) form2_midp_field_pane_g2

0xbd43,	// (0x00058b33) form2_midp_field_pane_g3

0xbd4b,	// (0x00058b3b) form2_midp_field_pane_g4

0x0003,

0xfaf9,	// (0x0005c8e9) form2_midp_field_pane_g

0xbd53,	// (0x00058b43) form2_midp_gauge_slider_pane

0xbd5b,	// (0x00058b4b) form2_midp_gauge_wait_pane

0xbd63,	// (0x00058b53) form2_midp_image_pane_ParamLimits

0xbd63,	// (0x00058b53) form2_midp_image_pane

0xbd7e,	// (0x00058b6e) form2_midp_label_pane_ParamLimits

0xbd7e,	// (0x00058b6e) form2_midp_label_pane

0xbd9d,	// (0x00058b8d) form2_midp_label_pane_cp_ParamLimits

0xbd9d,	// (0x00058b8d) form2_midp_label_pane_cp

0xbdbe,	// (0x00058bae) form2_midp_string_pane_ParamLimits

0xbdbe,	// (0x00058bae) form2_midp_string_pane

0x636a,	// (0x0005315a) form2_midp_text_pane_ParamLimits

0x636a,	// (0x0005315a) form2_midp_text_pane

0xbdd0,	// (0x00058bc0) form2_midp_time_pane

0xbde0,	// (0x00058bd0) input_focus_pane_cp51_ParamLimits

0xbde0,	// (0x00058bd0) input_focus_pane_cp51

0xbdf8,	// (0x00058be8) form2_midp_label_pane_t1_ParamLimits

0xbdf8,	// (0x00058be8) form2_midp_label_pane_t1

0x638d,	// (0x0005317d) form2_mdip_text_pane_t1_ParamLimits

0x638d,	// (0x0005317d) form2_mdip_text_pane_t1

0x63ac,	// (0x0005319c) form2_midp_time_pane_t1

0xbe46,	// (0x00058c36) form2_midp_gauge_slider_pane_t1

0xbe58,	// (0x00058c48) form2_midp_gauge_slider_pane_t2

0xbe6a,	// (0x00058c5a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb02,	// (0x0005c8f2) form2_midp_gauge_slider_pane_t

0xbe7c,	// (0x00058c6c) form2_midp_slider_pane

0xbe88,	// (0x00058c78) form2_midp_gauge_wait_pane_t1

0xbe96,	// (0x00058c86) form2_midp_wait_pane_ParamLimits

0xbe96,	// (0x00058c86) form2_midp_wait_pane

0x9b7f,	// (0x0005696f) list_single_2graphic_pane_cp4_ParamLimits

0x9b7f,	// (0x0005696f) list_single_2graphic_pane_cp4

0xbec1,	// (0x00058cb1) list_single_midp_graphic_pane_cp_ParamLimits

0xbec1,	// (0x00058cb1) list_single_midp_graphic_pane_cp

0x2456,	// (0x0004f246) list_highlight_pane_cp20

0xbee5,	// (0x00058cd5) list_single_2graphic_pane_g1_cp4

0xb487,	// (0x00058277) list_single_2graphic_pane_g2_cp4

0xbeed,	// (0x00058cdd) list_single_2graphic_pane_t1_cp4

0x73e3,	// (0x000541d3) list_highlight_pane_cp21

0xbefc,	// (0x00058cec) list_single_midp_graphic_pane_g4_cp

0xbf0b,	// (0x00058cfb) list_single_midp_graphic_pane_t1_cp

0xbf20,	// (0x00058d10) form2_mdip_string_pane_t1_ParamLimits

0xbf20,	// (0x00058d10) form2_mdip_string_pane_t1

0x2456,	// (0x0004f246) bg_wml_button_pane_cp2

0x244c,	// (0x0004f23c) form2_midp_image_pane_g1

0x7c90,	// (0x00054a80) list_double_large_graphic_pane_g5_ParamLimits

0x7c90,	// (0x00054a80) list_double_large_graphic_pane_g5

0x8b3e,	// (0x0005592e) midp_form_pane_ParamLimits

0x73e3,	// (0x000541d3) main_apps_wheel_pane_ParamLimits

0x929d,	// (0x0005608d) popup_preview_window_ParamLimits

0x929d,	// (0x0005608d) popup_preview_window

0x9484,	// (0x00056274) popup_touch_info_window_ParamLimits

0x9484,	// (0x00056274) popup_touch_info_window

0x94a6,	// (0x00056296) popup_touch_menu_window_ParamLimits

0x94a6,	// (0x00056296) popup_touch_menu_window

0x2442,	// (0x0004f232) bg_popup_sub_pane_cp6

0xbfc5,	// (0x00058db5) list_touch_menu_pane

0xbfcd,	// (0x00058dbd) list_single_touch_menu_pane_ParamLimits

0xbfcd,	// (0x00058dbd) list_single_touch_menu_pane

0xbfe8,	// (0x00058dd8) list_single_touch_menu_pane_t1

0x73e3,	// (0x000541d3) bg_popup_sub_pane_cp7_ParamLimits

0x73e3,	// (0x000541d3) bg_popup_sub_pane_cp7

0xbff6,	// (0x00058de6) heading_sub_pane

0xbffe,	// (0x00058dee) list_touch_info_pane_ParamLimits

0xbffe,	// (0x00058dee) list_touch_info_pane

0xc00d,	// (0x00058dfd) list_single_touch_info_pane_ParamLimits

0xc00d,	// (0x00058dfd) list_single_touch_info_pane

0xc01f,	// (0x00058e0f) list_single_touch_info_pane_t1

0xc02d,	// (0x00058e1d) list_single_touch_info_pane_t2

0x0001,

0xfb10,	// (0x0005c900) list_single_touch_info_pane_t

0x8b36,	// (0x00055926) bg_popup_heading_pane_cp

0xc03b,	// (0x00058e2b) heading_sub_pane_t1

0x9aee,	// (0x000568de) bg_popup_preview_window_pane_cp_ParamLimits

0x9aee,	// (0x000568de) bg_popup_preview_window_pane_cp

0xbff6,	// (0x00058de6) heading_preview_pane

0xbffe,	// (0x00058dee) list_preview_pane_ParamLimits

0xbffe,	// (0x00058dee) list_preview_pane

0xc049,	// (0x00058e39) popup_preview_window_g1

0xc00d,	// (0x00058dfd) list_single_preview_pane_ParamLimits

0xc00d,	// (0x00058dfd) list_single_preview_pane

0xc051,	// (0x00058e41) list_single_preview_pane_g1

0xc059,	// (0x00058e49) list_single_preview_pane_t1

0xc01f,	// (0x00058e0f) list_single_preview_pane_t2

0x0001,

0xfb15,	// (0x0005c905) list_single_preview_pane_t

0xc067,	// (0x00058e57) bg_popup_heading_pane_cp2_ParamLimits

0xc067,	// (0x00058e57) bg_popup_heading_pane_cp2

0xc07d,	// (0x00058e6d) heading_preview_pane_g1

0xc085,	// (0x00058e75) heading_preview_pane_t1_ParamLimits

0xc085,	// (0x00058e75) heading_preview_pane_t1

0x74d2,	// (0x000542c2) soft_indicator_pane_t1_ParamLimits

0x7bdd,	// (0x000549cd) scroll_pane_ParamLimits

0x837c,	// (0x0005516c) scroll_sc2_left_pane

0x8385,	// (0x00055175) scroll_sc2_right_pane

0x83a4,	// (0x00055194) scroll_bg_pane_g1_ParamLimits

0x83b9,	// (0x000551a9) scroll_bg_pane_g2_ParamLimits

0x83d1,	// (0x000551c1) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0005c4f4) scroll_bg_pane_g_ParamLimits

0x83a4,	// (0x00055194) scroll_handle_pane_g1_ParamLimits

0x83f3,	// (0x000551e3) scroll_handle_pane_g2_ParamLimits

0x83d1,	// (0x000551c1) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x0005c4fb) scroll_handle_pane_g_ParamLimits

0x8edc,	// (0x00055ccc) popup_choice_list_window_ParamLimits

0x8edc,	// (0x00055ccc) popup_choice_list_window

0x9946,	// (0x00056736) choice_list_pane

0x99c8,	// (0x000567b8) cell_toolbar_pane_t1

0x99f0,	// (0x000567e0) toolbar_button_pane_ParamLimits

0xaafb,	// (0x000578eb) ai_gene_pane_1_t2_ParamLimits

0xaafb,	// (0x000578eb) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0005c718) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0005c718) ai_gene_pane_1_t

0xc0a2,	// (0x00058e92) scroll_sc2_left_pane_g1

0xc0a2,	// (0x00058e92) scroll_sc2_right_pane_g1

0x8eb4,	// (0x00055ca4) bg_popup_sub_pane_cp10

0xc0ac,	// (0x00058e9c) list_choice_list_pane

0xc0c3,	// (0x00058eb3) list_single_choice_list_pane_ParamLimits

0xc0c3,	// (0x00058eb3) list_single_choice_list_pane

0xc0d7,	// (0x00058ec7) list_single_choice_list_pane_g1

0xc0df,	// (0x00058ecf) list_single_choice_list_pane_t1_ParamLimits

0xc0df,	// (0x00058ecf) list_single_choice_list_pane_t1

0xc0f4,	// (0x00058ee4) choice_list_pane_g1

0xc0fc,	// (0x00058eec) choice_list_pane_t1

0x2442,	// (0x0004f232) input_focus_pane_cp11

0x8256,	// (0x00055046) title_pane_stacon_g2_ParamLimits

0x8256,	// (0x00055046) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x0005c4da) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x0005c4da) title_pane_stacon_g

0x8b36,	// (0x00055926) cursor_press_pane

0x8f9e,	// (0x00055d8e) popup_fep_hwr_window_ParamLimits

0x8f9e,	// (0x00055d8e) popup_fep_hwr_window

0x9028,	// (0x00055e18) popup_fep_vkb_window_ParamLimits

0x9028,	// (0x00055e18) popup_fep_vkb_window

0xc10a,	// (0x00058efa) cursor_press_pane_g1

0x0002,

0xfb3e,	// (0x0005c92e) fep_vkb_side_pane_g_ParamLimits

0x63f8,	// (0x000531e8) fep_hwr_candidate_pane_ParamLimits

0x63f8,	// (0x000531e8) fep_hwr_candidate_pane

0x6422,	// (0x00053212) fep_hwr_side_pane_ParamLimits

0x6422,	// (0x00053212) fep_hwr_side_pane

0x6444,	// (0x00053234) fep_hwr_top_pane_ParamLimits

0x6444,	// (0x00053234) fep_hwr_top_pane

0x645c,	// (0x0005324c) fep_hwr_write_pane_ParamLimits

0x645c,	// (0x0005324c) fep_hwr_write_pane

0xfb3e,	// (0x0005c92e) fep_vkb_side_pane_g

0xc112,	// (0x00058f02) fep_hwr_top_pane_g1

0xc124,	// (0x00058f14) fep_hwr_top_pane_g2

0x6496,	// (0x00053286) fep_hwr_top_pane_g3

0x0002,

0xfb1a,	// (0x0005c90a) fep_hwr_top_pane_g

0x64ab,	// (0x0005329b) fep_hwr_top_text_pane

0x8548,	// (0x00055338) fep_hwr_top_text_pane_g1

0xc15a,	// (0x00058f4a) fep_hwr_top_text_pane_t1

0x65b5,	// (0x000533a5) fep_hwr_candidate_pane_g1

0xc3a5,	// (0x00059195) fep_vkb_keypad_pane_g3_ParamLimits

0xc3a5,	// (0x00059195) fep_vkb_keypad_pane_g3

0xc3d1,	// (0x000591c1) fep_vkb_keypad_pane_g4_ParamLimits

0xc3d1,	// (0x000591c1) fep_vkb_keypad_pane_g4

0xc448,	// (0x00059238) fep_vkb_bottom_pane_g2_ParamLimits

0xc448,	// (0x00059238) fep_vkb_bottom_pane_g2

0x0001,

0xfb45,	// (0x0005c935) fep_vkb_bottom_pane_g_ParamLimits

0xfb45,	// (0x0005c935) fep_vkb_bottom_pane_g

0xc0a2,	// (0x00058e92) cell_vkb_side_pane_g2

0x0001,

0xfb4f,	// (0x0005c93f) cell_vkb_side_pane_g

0xc4d3,	// (0x000592c3) cell_vkb_side_pane_t1

0xc4e1,	// (0x000592d1) cell_vkb_side_pane_t1_copy1

0xc0a2,	// (0x00058e92) bg_fep_vkb_candidate_pane_g2

0xc625,	// (0x00059415) cell_vkb_candidate_pane_ParamLimits

0xc168,	// (0x00058f58) aid_size_cell_vkb_ParamLimits

0xc168,	// (0x00058f58) aid_size_cell_vkb

0xc625,	// (0x00059415) cell_vkb_candidate_pane

0x65dc,	// (0x000533cc) bg_popup_fep_shadow_pane_g1

0xc1fa,	// (0x00058fea) fep_vkb_bottom_pane_ParamLimits

0xc1fa,	// (0x00058fea) fep_vkb_bottom_pane

0xc237,	// (0x00059027) fep_vkb_candidate_pane_ParamLimits

0xc237,	// (0x00059027) fep_vkb_candidate_pane

0xc253,	// (0x00059043) fep_vkb_keypad_pane_ParamLimits

0xc253,	// (0x00059043) fep_vkb_keypad_pane

0xc286,	// (0x00059076) fep_vkb_side_pane_ParamLimits

0xc286,	// (0x00059076) fep_vkb_side_pane

0xc2c2,	// (0x000590b2) fep_vkb_top_pane_ParamLimits

0xc2c2,	// (0x000590b2) fep_vkb_top_pane

0xc2fe,	// (0x000590ee) fep_vkb_top_pane_g1_ParamLimits

0xc2fe,	// (0x000590ee) fep_vkb_top_pane_g1

0xc30d,	// (0x000590fd) fep_vkb_top_pane_g2_ParamLimits

0xc30d,	// (0x000590fd) fep_vkb_top_pane_g2

0xc31c,	// (0x0005910c) fep_vkb_top_pane_g3_ParamLimits

0xc31c,	// (0x0005910c) fep_vkb_top_pane_g3

0x0003,

0xfb35,	// (0x0005c925) fep_vkb_top_pane_g_ParamLimits

0xfb35,	// (0x0005c925) fep_vkb_top_pane_g

0xc33a,	// (0x0005912a) fep_vkb_top_text_pane_ParamLimits

0xc33a,	// (0x0005912a) fep_vkb_top_text_pane

0xc34b,	// (0x0005913b) fep_vkb_side_pane_g1_ParamLimits

0xc34b,	// (0x0005913b) fep_vkb_side_pane_g1

0xc394,	// (0x00059184) grid_vkb_side_pane_ParamLimits

0xc394,	// (0x00059184) grid_vkb_side_pane

0x65e4,	// (0x000533d4) bg_popup_fep_shadow_pane_g2

0x65ed,	// (0x000533dd) bg_popup_fep_shadow_pane_g3

0x65f5,	// (0x000533e5) bg_popup_fep_shadow_pane_g4

0x65fe,	// (0x000533ee) bg_popup_fep_shadow_pane_g5

0x6608,	// (0x000533f8) bg_popup_fep_shadow_pane_g6

0x6610,	// (0x00053400) bg_popup_fep_shadow_pane_g7

0x7d89,	// (0x00054b79) bg_popup_fep_shadow_pane_g8

0xc3f3,	// (0x000591e3) grid_vkb_keypad_number_pane_ParamLimits

0xc3f3,	// (0x000591e3) grid_vkb_keypad_number_pane

0xc407,	// (0x000591f7) grid_vkb_keypad_pane_ParamLimits

0xc407,	// (0x000591f7) grid_vkb_keypad_pane

0xc42d,	// (0x0005921d) fep_vkb_bottom_pane_g1_ParamLimits

0xc42d,	// (0x0005921d) fep_vkb_bottom_pane_g1

0xc456,	// (0x00059246) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc456,	// (0x00059246) grid_vkb_keypad_bottom_left_pane

0xc46b,	// (0x0005925b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc46b,	// (0x0005925b) grid_vkb_keypad_bottom_right_pane

0xc480,	// (0x00059270) fep_vkb_top_text_pane_g1

0xc49b,	// (0x0005928b) fep_vkb_top_text_pane_t1

0xc4b0,	// (0x000592a0) cell_vkb_side_pane_ParamLimits

0xc4b0,	// (0x000592a0) cell_vkb_side_pane

0xc0a2,	// (0x00058e92) cell_vkb_side_pane_g1

0xc4ef,	// (0x000592df) cell_vkb_keypad_pane_ParamLimits

0xc4ef,	// (0x000592df) cell_vkb_keypad_pane

0xc57c,	// (0x0005936c) cell_vkb_keypad_pane_g1

0x0008,

0xfb62,	// (0x0005c952) bg_popup_fep_shadow_pane_g

0x6622,	// (0x00053412) cell_hwr_side_pane_g1

0x6622,	// (0x00053412) cell_hwr_side_pane_g2

0xc586,	// (0x00059376) cell_vkb_keypad_pane_t1

0xc594,	// (0x00059384) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc594,	// (0x00059384) cell_vkb_keypad_bottom_left_pane

0xc5b1,	// (0x000593a1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc5b1,	// (0x000593a1) cell_vkb_keypad_bottom_right_pane

0xc0a2,	// (0x00058e92) cell_vkb_keypad_bottom_left_pane_g1

0xc0a2,	// (0x00058e92) cell_vkb_keypad_bottom_right_pane_g1

0xc5ea,	// (0x000593da) cell_vkb_keypad_number_pane_ParamLimits

0xc5ea,	// (0x000593da) cell_vkb_keypad_number_pane

0xc609,	// (0x000593f9) cell_vkb_keypad_number_pane_g1

0xc613,	// (0x00059403) cell_vkb_keypad_number_pane_g2

0xc61c,	// (0x0005940c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb54,	// (0x0005c944) cell_vkb_keypad_number_pane_g

0xc586,	// (0x00059376) cell_vkb_keypad_number_pane_t1

0xc646,	// (0x00059436) fep_vkb_candidate_pane_g1

0x0001,

0xfb75,	// (0x0005c965) cell_hwr_side_pane_g

0xc65f,	// (0x0005944f) cell_hwr_side_pane_t1

0x662c,	// (0x0005341c) cell_hwr_side_pane_t1_copy1

0x663a,	// (0x0005342a) cell_hwr_candidate_pane_g1

0x6669,	// (0x00053459) cell_hwr_candidate_pane_t1

0xc0a2,	// (0x00058e92) cell_vkb_candidate_pane_g2

0xc6a3,	// (0x00059493) cell_vkb_candidate_pane_t1

0x63bf,	// (0x000531af) bg_popup_fep_shadow_pane_ParamLimits

0x63bf,	// (0x000531af) bg_popup_fep_shadow_pane

0x6476,	// (0x00053266) bg_fep_hwr_top_pane_g4

0xc136,	// (0x00058f26) bg_hwr_side_pane_g1_ParamLimits

0xc136,	// (0x00058f26) bg_hwr_side_pane_g1

0x64e9,	// (0x000532d9) cell_hwr_side_pane_ParamLimits

0x64e9,	// (0x000532d9) cell_hwr_side_pane

0x6526,	// (0x00053316) fep_hwr_write_pane_g1_ParamLimits

0x6526,	// (0x00053316) fep_hwr_write_pane_g1

0x6533,	// (0x00053323) fep_hwr_write_pane_g2_ParamLimits

0x6533,	// (0x00053323) fep_hwr_write_pane_g2

0x6540,	// (0x00053330) fep_hwr_write_pane_g3_ParamLimits

0x6540,	// (0x00053330) fep_hwr_write_pane_g3

0x654e,	// (0x0005333e) fep_hwr_write_pane_g4_ParamLimits

0x654e,	// (0x0005333e) fep_hwr_write_pane_g4

0x0005,

0xfb21,	// (0x0005c911) fep_hwr_write_pane_g_ParamLimits

0xfb21,	// (0x0005c911) fep_hwr_write_pane_g

0x6476,	// (0x00053266) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6476,	// (0x00053266) bg_fep_hwr_candidate_pane_g2

0x6563,	// (0x00053353) cell_hwr_candidate_pane_ParamLimits

0x6563,	// (0x00053353) cell_hwr_candidate_pane

0x65b5,	// (0x000533a5) fep_hwr_candidate_pane_g1_ParamLimits

0xc196,	// (0x00058f86) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc196,	// (0x00058f86) bg_popup_fep_shadow_pane_cp2

0xc32c,	// (0x0005911c) fep_vkb_top_pane_g4_ParamLimits

0xc32c,	// (0x0005911c) fep_vkb_top_pane_g4

0xc372,	// (0x00059162) fep_vkb_side_pane_g2_ParamLimits

0xc372,	// (0x00059162) fep_vkb_side_pane_g2

0x529d,	// (0x0005208d) list_setting_pane_t4_ParamLimits

0x529d,	// (0x0005208d) list_setting_pane_t4

0x5339,	// (0x00052129) list_setting_number_pane_t5_ParamLimits

0x5339,	// (0x00052129) list_setting_number_pane_t5

0x858a,	// (0x0005537a) list_double_heading_pane_cp2_ParamLimits

0x858a,	// (0x0005537a) list_double_heading_pane_cp2

0x7d24,	// (0x00054b14) list_double_heading_pane_g1_cp2_ParamLimits

0x7d24,	// (0x00054b14) list_double_heading_pane_g1_cp2

0x7d30,	// (0x00054b20) list_double_heading_pane_g2_cp2_ParamLimits

0x7d30,	// (0x00054b20) list_double_heading_pane_g2_cp2

0xc6b1,	// (0x000594a1) list_double_heading_pane_t1_cp2_ParamLimits

0xc6b1,	// (0x000594a1) list_double_heading_pane_t1_cp2

0xc6c7,	// (0x000594b7) list_double_heading_pane_t2_cp2_ParamLimits

0xc6c7,	// (0x000594b7) list_double_heading_pane_t2_cp2

0x243a,	// (0x0004f22a) aid_value_unit2

0x4d1e,	// (0x00051b0e) popup_preview_fixed_window

0x766d,	// (0x0005445d) bg_popup_preview_window_pane_cp02

0xc6d9,	// (0x000594c9) list_preview_fixed_pane

0xc71f,	// (0x0005950f) list_empty_pane_fp_ParamLimits

0xc71f,	// (0x0005950f) list_empty_pane_fp

0xc71f,	// (0x0005950f) list_single_cale_day_pane_fp_ParamLimits

0xc71f,	// (0x0005950f) list_single_cale_day_pane_fp

0xc71f,	// (0x0005950f) list_single_graphic_heading_pane_fp_ParamLimits

0xc71f,	// (0x0005950f) list_single_graphic_heading_pane_fp

0xc71f,	// (0x0005950f) list_single_graphic_pane_fp_ParamLimits

0xc71f,	// (0x0005950f) list_single_graphic_pane_fp

0xc71f,	// (0x0005950f) list_single_heading_pane_fp_ParamLimits

0xc71f,	// (0x0005950f) list_single_heading_pane_fp

0xc71f,	// (0x0005950f) list_single_pane_fp_ParamLimits

0xc71f,	// (0x0005950f) list_single_pane_fp

0xc738,	// (0x00059528) list_single_pane_fp_g1_ParamLimits

0xc738,	// (0x00059528) list_single_pane_fp_g1

0x7c84,	// (0x00054a74) list_single_pane_fp_g2_ParamLimits

0x7c84,	// (0x00054a74) list_single_pane_fp_g2

0x802d,	// (0x00054e1d) list_single_pane_fp_g3_ParamLimits

0x802d,	// (0x00054e1d) list_single_pane_fp_g3

0xc744,	// (0x00059534) list_single_pane_fp_g4_ParamLimits

0xc744,	// (0x00059534) list_single_pane_fp_g4

0x0003,

0xfb88,	// (0x0005c978) list_single_pane_fp_g_ParamLimits

0xfb88,	// (0x0005c978) list_single_pane_fp_g

0x6687,	// (0x00053477) list_single_pane_fp_t1_ParamLimits

0x6687,	// (0x00053477) list_single_pane_fp_t1

0x669e,	// (0x0005348e) list_single_graphic_pane_fp_g1_ParamLimits

0x669e,	// (0x0005348e) list_single_graphic_pane_fp_g1

0xc738,	// (0x00059528) list_single_graphic_pane_fp_g2_ParamLimits

0xc738,	// (0x00059528) list_single_graphic_pane_fp_g2

0x7c84,	// (0x00054a74) list_single_graphic_pane_fp_g3_ParamLimits

0x7c84,	// (0x00054a74) list_single_graphic_pane_fp_g3

0x802d,	// (0x00054e1d) list_single_graphic_pane_fp_g4_ParamLimits

0x802d,	// (0x00054e1d) list_single_graphic_pane_fp_g4

0xc744,	// (0x00059534) list_single_graphic_pane_fp_g5_ParamLimits

0xc744,	// (0x00059534) list_single_graphic_pane_fp_g5

0x0004,

0xfb91,	// (0x0005c981) list_single_graphic_pane_fp_g_ParamLimits

0xfb91,	// (0x0005c981) list_single_graphic_pane_fp_g

0x66aa,	// (0x0005349a) list_single_graphic_pane_fp_t1_ParamLimits

0x66aa,	// (0x0005349a) list_single_graphic_pane_fp_t1

0x669e,	// (0x0005348e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x669e,	// (0x0005348e) list_single_graphic_heading_pane_fp_g1

0xc738,	// (0x00059528) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc738,	// (0x00059528) list_single_graphic_heading_pane_fp_g2

0x7c84,	// (0x00054a74) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7c84,	// (0x00054a74) list_single_graphic_heading_pane_fp_g3

0x802d,	// (0x00054e1d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x802d,	// (0x00054e1d) list_single_graphic_heading_pane_fp_g4

0xc744,	// (0x00059534) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc744,	// (0x00059534) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb91,	// (0x0005c981) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb91,	// (0x0005c981) list_single_graphic_heading_pane_fp_g

0x66c0,	// (0x000534b0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x66c0,	// (0x000534b0) list_single_graphic_heading_pane_fp_t1

0x66d6,	// (0x000534c6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x66d6,	// (0x000534c6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0005c98c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0005c98c) list_single_graphic_heading_pane_fp_t

0x66e8,	// (0x000534d8) list_single_cale_day_pane_fp_g1_ParamLimits

0x66e8,	// (0x000534d8) list_single_cale_day_pane_fp_g1

0xc750,	// (0x00059540) list_single_cale_day_pane_fp_g2_ParamLimits

0xc750,	// (0x00059540) list_single_cale_day_pane_fp_g2

0x8041,	// (0x00054e31) list_single_cale_day_pane_fp_g3_ParamLimits

0x8041,	// (0x00054e31) list_single_cale_day_pane_fp_g3

0x8069,	// (0x00054e59) list_single_cale_day_pane_fp_g4_ParamLimits

0x8069,	// (0x00054e59) list_single_cale_day_pane_fp_g4

0x808d,	// (0x00054e7d) list_single_cale_day_pane_fp_g5_ParamLimits

0x808d,	// (0x00054e7d) list_single_cale_day_pane_fp_g5

0x0004,

0xfba1,	// (0x0005c991) list_single_cale_day_pane_fp_g_ParamLimits

0xfba1,	// (0x0005c991) list_single_cale_day_pane_fp_g

0x6720,	// (0x00053510) list_single_cale_day_pane_fp_t1_ParamLimits

0x6720,	// (0x00053510) list_single_cale_day_pane_fp_t1

0x6746,	// (0x00053536) list_single_cale_day_pane_fp_t2_ParamLimits

0x6746,	// (0x00053536) list_single_cale_day_pane_fp_t2

0x675f,	// (0x0005354f) list_single_cale_day_pane_fp_t3_ParamLimits

0x675f,	// (0x0005354f) list_single_cale_day_pane_fp_t3

0x0002,

0xfbac,	// (0x0005c99c) list_single_cale_day_pane_fp_t_ParamLimits

0xfbac,	// (0x0005c99c) list_single_cale_day_pane_fp_t

0xc738,	// (0x00059528) list_empty_pane_fp_g1_ParamLimits

0xc738,	// (0x00059528) list_empty_pane_fp_g1

0x6778,	// (0x00053568) list_empty_pane_fp_t1

0x6786,	// (0x00053576) list_empty_pane_fp_t2

0x0001,

0xfbb3,	// (0x0005c9a3) list_empty_pane_fp_t

0xc738,	// (0x00059528) list_single_heading_pane_fp_g1_ParamLimits

0xc738,	// (0x00059528) list_single_heading_pane_fp_g1

0x7c84,	// (0x00054a74) list_single_heading_pane_fp_g2_ParamLimits

0x7c84,	// (0x00054a74) list_single_heading_pane_fp_g2

0x802d,	// (0x00054e1d) list_single_heading_pane_fp_g3_ParamLimits

0x802d,	// (0x00054e1d) list_single_heading_pane_fp_g3

0x0002,

0xfbb8,	// (0x0005c9a8) list_single_heading_pane_fp_g_ParamLimits

0xfbb8,	// (0x0005c9a8) list_single_heading_pane_fp_g

0x6794,	// (0x00053584) list_single_heading_pane_fp_t1_ParamLimits

0x6794,	// (0x00053584) list_single_heading_pane_fp_t1

0x67a6,	// (0x00053596) list_single_heading_pane_fp_t2_ParamLimits

0x67a6,	// (0x00053596) list_single_heading_pane_fp_t2

0x0001,

0xfbbf,	// (0x0005c9af) list_single_heading_pane_fp_t_ParamLimits

0xfbbf,	// (0x0005c9af) list_single_heading_pane_fp_t

0x7f28,	// (0x00054d18) aid_size_cell_fast

0x75df,	// (0x000543cf) soft_indicator_pane_cp1_t1

0x812a,	// (0x00054f1a) cell_app_pane_cp2_ParamLimits

0x812a,	// (0x00054f1a) cell_app_pane_cp2

0x63e1,	// (0x000531d1) fep_hwr_candidate_drop_down_list_pane

0x65cf,	// (0x000533bf) fep_hwr_candidate_pane_g3_ParamLimits

0x65cf,	// (0x000533bf) fep_hwr_candidate_pane_g3

0x34b7,	// (0x000502a7) fep_hwr_candidate_pane_g4_ParamLimits

0x34b7,	// (0x000502a7) fep_hwr_candidate_pane_g4

0x0002,

0xfb2e,	// (0x0005c91e) fep_hwr_candidate_pane_g_ParamLimits

0xfb2e,	// (0x0005c91e) fep_hwr_candidate_pane_g

0xc226,	// (0x00059016) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc226,	// (0x00059016) fep_vkb_candidate_drop_down_list_pane

0xc64e,	// (0x0005943e) fep_vkb_candidate_pane_g3

0xc656,	// (0x00059446) fep_vkb_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0005c94b) fep_vkb_candidate_pane_g

0x663a,	// (0x0005342a) cell_hwr_candidate_pane_g1_ParamLimits

0x6648,	// (0x00053438) cell_hwr_candidate_pane_g3_ParamLimits

0x6648,	// (0x00053438) cell_hwr_candidate_pane_g3

0xd6ea,	// (0x0005a4da) cell_hwr_candidate_pane_g4_ParamLimits

0xd6ea,	// (0x0005a4da) cell_hwr_candidate_pane_g4

0x0002,

0xfb7a,	// (0x0005c96a) cell_hwr_candidate_pane_g_ParamLimits

0xfb7a,	// (0x0005c96a) cell_hwr_candidate_pane_g

0xc66d,	// (0x0005945d) cell_vkb_candidate_pane_g3_ParamLimits

0xc66d,	// (0x0005945d) cell_vkb_candidate_pane_g3

0xc688,	// (0x00059478) cell_vkb_candidate_pane_g4_ParamLimits

0xc688,	// (0x00059478) cell_vkb_candidate_pane_g4

0xc75c,	// (0x0005954c) cell_app_pane_cp2_g1_ParamLimits

0xc75c,	// (0x0005954c) cell_app_pane_cp2_g1

0xc77a,	// (0x0005956a) cell_app_pane_cp2_g2_ParamLimits

0xc77a,	// (0x0005956a) cell_app_pane_cp2_g2

0x0001,

0xfbc4,	// (0x0005c9b4) cell_app_pane_cp2_g_ParamLimits

0xfbc4,	// (0x0005c9b4) cell_app_pane_cp2_g

0xc786,	// (0x00059576) cell_app_pane_cp2_t1_ParamLimits

0xc786,	// (0x00059576) cell_app_pane_cp2_t1

0x7d0a,	// (0x00054afa) grid_highlight_pane_cp1_ParamLimits

0x7d0a,	// (0x00054afa) grid_highlight_pane_cp1

0x67bc,	// (0x000535ac) cell_hwr_candidate_pane_cp1_ParamLimits

0x67bc,	// (0x000535ac) cell_hwr_candidate_pane_cp1

0x663a,	// (0x0005342a) fep_hwr_candidate_drop_down_list_pane_g1

0x67e0,	// (0x000535d0) fep_hwr_candidate_drop_down_list_pane_g2

0x67ed,	// (0x000535dd) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc9,	// (0x0005c9b9) fep_hwr_candidate_drop_down_list_pane_g

0x67fa,	// (0x000535ea) fep_hwr_candidate_drop_down_list_scroll_pane

0x6803,	// (0x000535f3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6803,	// (0x000535f3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6810,	// (0x00053600) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6810,	// (0x00053600) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x681d,	// (0x0005360d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x681d,	// (0x0005360d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x682a,	// (0x0005361a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x682a,	// (0x0005361a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6845,	// (0x00053635) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6845,	// (0x00053635) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6860,	// (0x00053650) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6860,	// (0x00053650) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x687b,	// (0x0005366b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x687b,	// (0x0005366b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6896,	// (0x00053686) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6896,	// (0x00053686) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0005c9c0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0005c9c0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc798,	// (0x00059588) cell_vkb_candidate_pane_cp1_ParamLimits

0xc798,	// (0x00059588) cell_vkb_candidate_pane_cp1

0xc32c,	// (0x0005911c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc32c,	// (0x0005911c) fep_vkb_candidate_drop_down_list_pane_g1

0xc7be,	// (0x000595ae) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7be,	// (0x000595ae) fep_vkb_candidate_drop_down_list_pane_g2

0xc7cb,	// (0x000595bb) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7cb,	// (0x000595bb) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe1,	// (0x0005c9d1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe1,	// (0x0005c9d1) fep_vkb_candidate_drop_down_list_pane_g

0xc7d8,	// (0x000595c8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7d8,	// (0x000595c8) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7e5,	// (0x000595d5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7e5,	// (0x000595d5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7f2,	// (0x000595e2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7f2,	// (0x000595e2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7fe,	// (0x000595ee) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7fe,	// (0x000595ee) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc80a,	// (0x000595fa) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc80a,	// (0x000595fa) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc82b,	// (0x0005961b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc82b,	// (0x0005961b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc84c,	// (0x0005963c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc84c,	// (0x0005963c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc86d,	// (0x0005965d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc86d,	// (0x0005965d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc89c,	// (0x0005968c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc89c,	// (0x0005968c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x0005c9d8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x0005c9d8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x730d,	// (0x000540fd) title_pane_g1_ParamLimits

0x731a,	// (0x0005410a) title_pane_g2_ParamLimits

0xf56a,	// (0x0005c35a) title_pane_g_ParamLimits

0x8538,	// (0x00055328) aid_call2_pane

0x8540,	// (0x00055330) aid_call_pane

0x8548,	// (0x00055338) popup_clock_analogue_window_g1

0x8548,	// (0x00055338) popup_clock_analogue_window_g2

0x5780,	// (0x00052570) popup_clock_analogue_window_g3

0x5789,	// (0x00052579) popup_clock_analogue_window_g4

0x244c,	// (0x0004f23c) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x0005c509) popup_clock_analogue_window_g

0x5791,	// (0x00052581) popup_clock_analogue_window_t1

0x579f,	// (0x0005258f) clock_digital_number_pane_ParamLimits

0x579f,	// (0x0005258f) clock_digital_number_pane

0x57ab,	// (0x0005259b) clock_digital_number_pane_cp02_ParamLimits

0x57ab,	// (0x0005259b) clock_digital_number_pane_cp02

0x57b7,	// (0x000525a7) clock_digital_number_pane_cp03_ParamLimits

0x57b7,	// (0x000525a7) clock_digital_number_pane_cp03

0x57c3,	// (0x000525b3) clock_digital_number_pane_cp04_ParamLimits

0x57c3,	// (0x000525b3) clock_digital_number_pane_cp04

0x57cf,	// (0x000525bf) clock_digital_separator_pane_ParamLimits

0x57cf,	// (0x000525bf) clock_digital_separator_pane

0x57db,	// (0x000525cb) popup_clock_digital_window_t1_ParamLimits

0x57db,	// (0x000525cb) popup_clock_digital_window_t1

0x244c,	// (0x0004f23c) clock_digital_number_pane_g1

0x244c,	// (0x0004f23c) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0005c514) clock_digital_number_pane_g

0x244c,	// (0x0004f23c) clock_digital_separator_pane_g1

0x244c,	// (0x0004f23c) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0005c514) clock_digital_separator_pane_g

0x94f3,	// (0x000562e3) aid_fill_nsta_ParamLimits

0x9643,	// (0x00056433) indicator_nsta_pane_ParamLimits

0x97d3,	// (0x000565c3) popup_clock_analogue_window

0x97d3,	// (0x000565c3) popup_clock_digital_window

0x73e3,	// (0x000541d3) grid_indicator_nsta_pane_ParamLimits

0xbac8,	// (0x000588b8) clock_nsta_pane_t2

0x0001,

0xfaae,	// (0x0005c89e) clock_nsta_pane_t

0x5744,	// (0x00052534) aid_size_max_handle

0x574e,	// (0x0005253e) aid_size_min_handle

0x8b36,	// (0x00055926) editor_scroll_pane

0xc8b7,	// (0x000596a7) ex_editor_pane

0x7e95,	// (0x00054c85) scroll_pane_cp13

0x7c09,	// (0x000549f9) scroll_pane_cp14

0x8572,	// (0x00055362) scroll_pane_cp36

0x85a0,	// (0x00055390) list_single_graphic_hl_pane_cp2_ParamLimits

0x85a0,	// (0x00055390) list_single_graphic_hl_pane_cp2

0x7f8f,	// (0x00054d7f) list_single_graphic_hl_pane_ParamLimits

0x7f8f,	// (0x00054d7f) list_single_graphic_hl_pane

0x68b1,	// (0x000536a1) aid_size_min_hl_cp1

0xc8bf,	// (0x000596af) list_highlight_pane_cp34_ParamLimits

0xc8bf,	// (0x000596af) list_highlight_pane_cp34

0xc8d0,	// (0x000596c0) list_single_graphic_hl_pane_g1_ParamLimits

0xc8d0,	// (0x000596c0) list_single_graphic_hl_pane_g1

0x68ba,	// (0x000536aa) list_single_graphic_hl_pane_g2_ParamLimits

0x68ba,	// (0x000536aa) list_single_graphic_hl_pane_g2

0x68ba,	// (0x000536aa) list_single_graphic_hl_pane_g3_ParamLimits

0x68ba,	// (0x000536aa) list_single_graphic_hl_pane_g3

0x7fbb,	// (0x00054dab) list_single_graphic_hl_pane_g4_ParamLimits

0x7fbb,	// (0x00054dab) list_single_graphic_hl_pane_g4

0x80b1,	// (0x00054ea1) list_single_graphic_hl_pane_g5_ParamLimits

0x80b1,	// (0x00054ea1) list_single_graphic_hl_pane_g5

0x0004,

0xfbf9,	// (0x0005c9e9) list_single_graphic_hl_pane_g_ParamLimits

0xfbf9,	// (0x0005c9e9) list_single_graphic_hl_pane_g

0x68c6,	// (0x000536b6) list_single_graphic_hl_pane_t1_ParamLimits

0x68c6,	// (0x000536b6) list_single_graphic_hl_pane_t1

0xc8dd,	// (0x000596cd) aid_size_min_hl_cp2

0xc8e6,	// (0x000596d6) list_highlight_pane_cp34_cp2_ParamLimits

0xc8e6,	// (0x000596d6) list_highlight_pane_cp34_cp2

0xc8d0,	// (0x000596c0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8d0,	// (0x000596c0) list_single_graphic_hl_pane_g1_cp2

0xc8f3,	// (0x000596e3) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8f3,	// (0x000596e3) list_single_graphic_hl_pane_g2_cp2

0xc8ff,	// (0x000596ef) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8ff,	// (0x000596ef) list_single_graphic_hl_pane_g3_cp2

0x8f68,	// (0x00055d58) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8f68,	// (0x00055d58) list_single_graphic_hl_pane_g4_cp2

0xc90d,	// (0x000596fd) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc90d,	// (0x000596fd) list_single_graphic_hl_pane_g5_cp2

0x5b02,	// (0x000528f2) control_pane_g4_ParamLimits

0x5b02,	// (0x000528f2) control_pane_g4

0x8eb4,	// (0x00055ca4) bg_popup_sub_pane_cp10_ParamLimits

0xc0ac,	// (0x00058e9c) list_choice_list_pane_ParamLimits

0xc0bb,	// (0x00058eab) scroll_pane_cp23

0x766d,	// (0x0005445d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6d9,	// (0x000594c9) list_preview_fixed_pane_ParamLimits

0xc6ef,	// (0x000594df) list_preview_fixed_pane_cp_ParamLimits

0xc6ef,	// (0x000594df) list_preview_fixed_pane_cp

0xc6fb,	// (0x000594eb) popup_preview_fixed_window_g1_ParamLimits

0xc6fb,	// (0x000594eb) popup_preview_fixed_window_g1

0xc707,	// (0x000594f7) popup_preview_fixed_window_g2_ParamLimits

0xc707,	// (0x000594f7) popup_preview_fixed_window_g2

0x0002,

0xfb81,	// (0x0005c971) popup_preview_fixed_window_g_ParamLimits

0xfb81,	// (0x0005c971) popup_preview_fixed_window_g

0x56b6,	// (0x000524a6) aid_navi_side_left_pane_ParamLimits

0x56cb,	// (0x000524bb) aid_navi_side_right_pane_ParamLimits

0x56e3,	// (0x000524d3) navi_icon_pane_stacon_ParamLimits

0x56f7,	// (0x000524e7) navi_navi_pane_stacon_ParamLimits

0x56e3,	// (0x000524d3) navi_text_pane_stacon_ParamLimits

0x2442,	// (0x0004f232) main_text_info_pane

0xc937,	// (0x00059727) listscroll_text_info_pane

0xc93f,	// (0x0005972f) list_text_info_pane_ParamLimits

0xc93f,	// (0x0005972f) list_text_info_pane

0xc94e,	// (0x0005973e) scroll_pane_cp24_ParamLimits

0xc94e,	// (0x0005973e) scroll_pane_cp24

0xc96c,	// (0x0005975c) list_text_info_pane_t1_ParamLimits

0xc96c,	// (0x0005975c) list_text_info_pane_t1

0x8efa,	// (0x00055cea) popup_fast_swap2_window_ParamLimits

0x8efa,	// (0x00055cea) popup_fast_swap2_window

0xc991,	// (0x00059781) aid_size_cell_fast2

0x2442,	// (0x0004f232) bg_popup_window_pane_cp17

0x9e86,	// (0x00056c76) heading_pane_cp2

0x78cd,	// (0x000546bd) listscroll_fast2_pane

0xc99b,	// (0x0005978b) grid_fast2_pane

0xc9a5,	// (0x00059795) listscroll_fast2_pane_g1

0xc9af,	// (0x0005979f) listscroll_fast2_pane_g2

0x0001,

0xfc04,	// (0x0005c9f4) listscroll_fast2_pane_g

0x7e95,	// (0x00054c85) scroll_pane_cp26

0xc9b9,	// (0x000597a9) cell_fast2_pane_ParamLimits

0xc9b9,	// (0x000597a9) cell_fast2_pane

0xc9d0,	// (0x000597c0) cell_fast2_pane_g1

0xc9d9,	// (0x000597c9) cell_fast2_pane_g2

0xc9e2,	// (0x000597d2) cell_fast2_pane_g3

0x0002,

0xfc09,	// (0x0005c9f9) cell_fast2_pane_g

0x79c6,	// (0x000547b6) grid_highlight_pane_cp9

0x79db,	// (0x000547cb) main_eswt_pane_ParamLimits

0x79db,	// (0x000547cb) main_eswt_pane

0xc963,	// (0x00059753) list_single_text_info_pane

0xc9ea,	// (0x000597da) eswt_ctrl_button_pane

0xc9ea,	// (0x000597da) eswt_ctrl_canvas_pane

0xc9f2,	// (0x000597e2) eswt_ctrl_combo_pane

0xc9ea,	// (0x000597da) eswt_ctrl_default_pane

0xc9ea,	// (0x000597da) eswt_ctrl_label_pane

0xc9fa,	// (0x000597ea) eswt_ctrl_wait_pane

0xca02,	// (0x000597f2) eswt_shell_pane

0x2442,	// (0x0004f232) listscroll_eswt_app_pane

0xca22,	// (0x00059812) popup_eswt_tasktip_window_ParamLimits

0xca22,	// (0x00059812) popup_eswt_tasktip_window

0x9aee,	// (0x000568de) bg_popup_window_pane_cp18

0xca33,	// (0x00059823) eswt_control_pane_g1_ParamLimits

0xca33,	// (0x00059823) eswt_control_pane_g1

0xca40,	// (0x00059830) eswt_control_pane_g2_ParamLimits

0xca40,	// (0x00059830) eswt_control_pane_g2

0xca4d,	// (0x0005983d) eswt_control_pane_g3_ParamLimits

0xca4d,	// (0x0005983d) eswt_control_pane_g3

0xca5a,	// (0x0005984a) eswt_control_pane_g4_ParamLimits

0xca5a,	// (0x0005984a) eswt_control_pane_g4

0x0003,

0xfc10,	// (0x0005ca00) eswt_control_pane_g_ParamLimits

0xfc10,	// (0x0005ca00) eswt_control_pane_g

0x7d0a,	// (0x00054afa) bg_button_pane_ParamLimits

0x7d0a,	// (0x00054afa) bg_button_pane

0x79db,	// (0x000547cb) common_borders_pane_copy2_ParamLimits

0x79db,	// (0x000547cb) common_borders_pane_copy2

0xca67,	// (0x00059857) control_button_pane_g1_ParamLimits

0xca67,	// (0x00059857) control_button_pane_g1

0xca73,	// (0x00059863) control_button_pane_g2_ParamLimits

0xca73,	// (0x00059863) control_button_pane_g2

0xca7f,	// (0x0005986f) control_button_pane_g3_ParamLimits

0xca7f,	// (0x0005986f) control_button_pane_g3

0x0002,

0xfc19,	// (0x0005ca09) control_button_pane_g_ParamLimits

0xfc19,	// (0x0005ca09) control_button_pane_g

0xca93,	// (0x00059883) control_button_pane_t1

0xcaa1,	// (0x00059891) control_button_pane_t2

0x0001,

0xfc20,	// (0x0005ca10) control_button_pane_t

0x99fc,	// (0x000567ec) bg_button_pane_g1

0x9a0c,	// (0x000567fc) bg_button_pane_g2

0x9a04,	// (0x000567f4) bg_button_pane_g3

0x9a1c,	// (0x0005680c) bg_button_pane_g4

0x9a14,	// (0x00056804) bg_button_pane_g5

0x9a24,	// (0x00056814) bg_button_pane_g6

0x9a2c,	// (0x0005681c) bg_button_pane_g7

0x9a3c,	// (0x0005682c) bg_button_pane_g8

0x9a34,	// (0x00056824) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0005c66c) bg_button_pane_g

0xc067,	// (0x00058e57) common_borders_pane_ParamLimits

0xc067,	// (0x00058e57) common_borders_pane

0xca33,	// (0x00059823) eswt_control_pane_g1_copy1_ParamLimits

0xca33,	// (0x00059823) eswt_control_pane_g1_copy1

0xca40,	// (0x00059830) eswt_control_pane_g2_copy1_ParamLimits

0xca40,	// (0x00059830) eswt_control_pane_g2_copy1

0xca4d,	// (0x0005983d) eswt_control_pane_g3_copy1_ParamLimits

0xca4d,	// (0x0005983d) eswt_control_pane_g3_copy1

0xca5a,	// (0x0005984a) eswt_control_pane_g4_copy1_ParamLimits

0xca5a,	// (0x0005984a) eswt_control_pane_g4_copy1

0xc0a2,	// (0x00058e92) bg_eswt_ctrl_canvas_pane_g1

0xc067,	// (0x00058e57) common_borders_pane_cp2_ParamLimits

0xc067,	// (0x00058e57) common_borders_pane_cp2

0xc067,	// (0x00058e57) common_borders_pane_cp3_ParamLimits

0xc067,	// (0x00058e57) common_borders_pane_cp3

0xcaaf,	// (0x0005989f) separator_horizontal_pane

0xcab7,	// (0x000598a7) separator_vertical_pane

0xca33,	// (0x00059823) eswt_control_pane_g1_copy2_ParamLimits

0xca33,	// (0x00059823) eswt_control_pane_g1_copy2

0xca40,	// (0x00059830) eswt_control_pane_g2_copy2_ParamLimits

0xca40,	// (0x00059830) eswt_control_pane_g2_copy2

0xca4d,	// (0x0005983d) eswt_control_pane_g3_copy2_ParamLimits

0xca4d,	// (0x0005983d) eswt_control_pane_g3_copy2

0xca5a,	// (0x0005984a) eswt_control_pane_g4_copy2_ParamLimits

0xca5a,	// (0x0005984a) eswt_control_pane_g4_copy2

0x2442,	// (0x0004f232) common_borders_pane_cp4

0xcac0,	// (0x000598b0) separator_horizontal_pane_g1

0xcac9,	// (0x000598b9) separator_horizontal_pane_g2

0xcad2,	// (0x000598c2) separator_horizontal_pane_g3

0x0002,

0xfc25,	// (0x0005ca15) separator_horizontal_pane_g

0xca33,	// (0x00059823) eswt_control_pane_g1_copy3_ParamLimits

0xca33,	// (0x00059823) eswt_control_pane_g1_copy3

0xca40,	// (0x00059830) eswt_control_pane_g2_copy3_ParamLimits

0xca40,	// (0x00059830) eswt_control_pane_g2_copy3

0xca4d,	// (0x0005983d) eswt_control_pane_g3_copy3_ParamLimits

0xca4d,	// (0x0005983d) eswt_control_pane_g3_copy3

0xca5a,	// (0x0005984a) eswt_control_pane_g4_copy3_ParamLimits

0xca5a,	// (0x0005984a) eswt_control_pane_g4_copy3

0x2442,	// (0x0004f232) common_borders_pane_cp5

0xcadb,	// (0x000598cb) separator_vertical_pane_g1

0xcae4,	// (0x000598d4) separator_vertical_pane_g2

0xcaed,	// (0x000598dd) separator_vertical_pane_g3

0x0002,

0xfc2c,	// (0x0005ca1c) separator_vertical_pane_g

0xca33,	// (0x00059823) eswt_control_pane_g1_copy4_ParamLimits

0xca33,	// (0x00059823) eswt_control_pane_g1_copy4

0xca40,	// (0x00059830) eswt_control_pane_g2_copy4_ParamLimits

0xca40,	// (0x00059830) eswt_control_pane_g2_copy4

0xca4d,	// (0x0005983d) eswt_control_pane_g3_copy4_ParamLimits

0xca4d,	// (0x0005983d) eswt_control_pane_g3_copy4

0xca5a,	// (0x0005984a) eswt_control_pane_g4_copy4_ParamLimits

0xca5a,	// (0x0005984a) eswt_control_pane_g4_copy4

0xcaf6,	// (0x000598e6) eswt_ctrl_combo_button_pane

0xcafe,	// (0x000598ee) eswt_ctrl_input_pane

0xcb06,	// (0x000598f6) popup_choice_list_window_cp70

0xcb0e,	// (0x000598fe) eswt_ctrl_input_pane_t1

0x2442,	// (0x0004f232) input_focus_pane_cp70

0xc067,	// (0x00058e57) bg_button_pane_cp70_ParamLimits

0xc067,	// (0x00058e57) bg_button_pane_cp70

0xcb1c,	// (0x0005990c) eswt_ctrl_combo_button_pane_g1

0xcb24,	// (0x00059914) wait_bar_pane_cp70

0x9aee,	// (0x000568de) bg_popup_window_pane_cp70_ParamLimits

0x9aee,	// (0x000568de) bg_popup_window_pane_cp70

0xcb2c,	// (0x0005991c) popup_eswt_tasktip_window_t1

0xcb42,	// (0x00059932) wait_bar_pane_cp71_ParamLimits

0xcb42,	// (0x00059932) wait_bar_pane_cp71

0xcb4e,	// (0x0005993e) grid_eswt_app_pane

0x837c,	// (0x0005516c) scroll_pane_cp70

0xcb57,	// (0x00059947) cell_eswt_app_pane_ParamLimits

0xcb57,	// (0x00059947) cell_eswt_app_pane

0xcb89,	// (0x00059979) cell_eswt_app_pane_g1_ParamLimits

0xcb89,	// (0x00059979) cell_eswt_app_pane_g1

0xcbb8,	// (0x000599a8) cell_eswt_app_pane_g2_ParamLimits

0xcbb8,	// (0x000599a8) cell_eswt_app_pane_g2

0x0001,

0xfc33,	// (0x0005ca23) cell_eswt_app_pane_g_ParamLimits

0xfc33,	// (0x0005ca23) cell_eswt_app_pane_g

0xcbe1,	// (0x000599d1) cell_eswt_app_pane_t1_ParamLimits

0xcbe1,	// (0x000599d1) cell_eswt_app_pane_t1

0xcc13,	// (0x00059a03) grid_highlight_pane_cp70_ParamLimits

0xcc13,	// (0x00059a03) grid_highlight_pane_cp70

0xaf7f,	// (0x00057d6f) set_content_pane_g1

0x8de6,	// (0x00055bd6) status_small_volume_pane

0x68dc,	// (0x000536cc) status_small_volume_pane_g1

0x68e4,	// (0x000536d4) volume_small2_pane

0x68ed,	// (0x000536dd) volume_small2_pane_g1

0x68f6,	// (0x000536e6) volume_small2_pane_g2

0x68ff,	// (0x000536ef) volume_small2_pane_g3

0x6908,	// (0x000536f8) volume_small2_pane_g4

0x6911,	// (0x00053701) volume_small2_pane_g5

0x691a,	// (0x0005370a) volume_small2_pane_g6

0x6923,	// (0x00053713) volume_small2_pane_g7

0x692c,	// (0x0005371c) volume_small2_pane_g8

0x6935,	// (0x00053725) volume_small2_pane_g9

0x693e,	// (0x0005372e) volume_small2_pane_g10

0x0009,

0xfc38,	// (0x0005ca28) volume_small2_pane_g

0xc480,	// (0x00059270) fep_vkb_top_text_pane_g1_ParamLimits

0xc49b,	// (0x0005928b) fep_vkb_top_text_pane_t1_ParamLimits

0xc713,	// (0x00059503) popup_preview_fixed_window_g3_ParamLimits

0xc713,	// (0x00059503) popup_preview_fixed_window_g3

0x9417,	// (0x00056207) popup_toolbar_trans_pane

0xae24,	// (0x00057c14) aid_height_set_list_ParamLimits

0xae35,	// (0x00057c25) aid_size_parent_ParamLimits

0x8eb4,	// (0x00055ca4) list_highlight_pane_cp2_ParamLimits

0xaf7f,	// (0x00057d6f) set_content_pane_g1_ParamLimits

0xb088,	// (0x00057e78) list_single_image_pane_ParamLimits

0xb088,	// (0x00057e78) list_single_image_pane

0xcc1f,	// (0x00059a0f) aid_size_cell_image_ParamLimits

0xcc1f,	// (0x00059a0f) aid_size_cell_image

0xcc2c,	// (0x00059a1c) grid_single_image_pane_ParamLimits

0xcc2c,	// (0x00059a1c) grid_single_image_pane

0x7d24,	// (0x00054b14) list_single_image_pane_g1_ParamLimits

0x7d24,	// (0x00054b14) list_single_image_pane_g1

0x7d30,	// (0x00054b20) list_single_image_pane_g2_ParamLimits

0x7d30,	// (0x00054b20) list_single_image_pane_g2

0x0001,

0xfc4d,	// (0x0005ca3d) list_single_image_pane_g_ParamLimits

0xfc4d,	// (0x0005ca3d) list_single_image_pane_g

0xcc3a,	// (0x00059a2a) list_single_image_pane_t1_ParamLimits

0xcc3a,	// (0x00059a2a) list_single_image_pane_t1

0xcc50,	// (0x00059a40) cell_image_list_pane_ParamLimits

0xcc50,	// (0x00059a40) cell_image_list_pane

0xcc66,	// (0x00059a56) cell_image_list_pane_g1

0xcc6f,	// (0x00059a5f) cell_image_list_pane_g2

0x0001,

0xfc52,	// (0x0005ca42) cell_image_list_pane_g

0xcc78,	// (0x00059a68) aid_size_cell_tb_trans_pane

0x7d0a,	// (0x00054afa) bg_tb_trans_pane

0xcc8a,	// (0x00059a7a) grid_tb_trans_pane

0x99fc,	// (0x000567ec) bg_tb_trans_pane_g1

0x9a0c,	// (0x000567fc) bg_tb_trans_pane_g2

0x9a04,	// (0x000567f4) bg_tb_trans_pane_g3

0x9a1c,	// (0x0005680c) bg_tb_trans_pane_g4

0x9a14,	// (0x00056804) bg_tb_trans_pane_g5

0x9a3c,	// (0x0005682c) bg_tb_trans_pane_g6

0x9a34,	// (0x00056824) bg_tb_trans_pane_g7

0x9a24,	// (0x00056814) bg_tb_trans_pane_g8

0x9a2c,	// (0x0005681c) bg_tb_trans_pane_g9

0x0008,

0xfc57,	// (0x0005ca47) bg_tb_trans_pane_g

0xcc9e,	// (0x00059a8e) cell_toolbar_trans_pane_ParamLimits

0xcc9e,	// (0x00059a8e) cell_toolbar_trans_pane

0xc0a2,	// (0x00058e92) cell_toolbar_trans_pane_g1

0xbcc3,	// (0x00058ab3) list_form2_midp_pane_t1

0xbcd1,	// (0x00058ac1) list_form2_midp_pane_t2

0x0001,

0xfaf4,	// (0x0005c8e4) list_form2_midp_pane_t

0xbcdf,	// (0x00058acf) scroll_pane_cp51_ParamLimits

0xbea6,	// (0x00058c96) form2_midp_wait_pane_g1

0xbeaf,	// (0x00058c9f) form2_midp_wait_pane_g2

0xbeb8,	// (0x00058ca8) form2_midp_wait_pane_g3

0x0002,

0xfb09,	// (0x0005c8f9) form2_midp_wait_pane_g

0x73e3,	// (0x000541d3) list_highlight_pane_cp21_ParamLimits

0xbefc,	// (0x00058cec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf0b,	// (0x00058cfb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb041,	// (0x00057e31) list_single_2graphic_im_pane_ParamLimits

0xb041,	// (0x00057e31) list_single_2graphic_im_pane

0xccc4,	// (0x00059ab4) list_single_2graphic_im_pane_g1_ParamLimits

0xccc4,	// (0x00059ab4) list_single_2graphic_im_pane_g1

0xccd5,	// (0x00059ac5) list_single_2graphic_im_pane_g2_ParamLimits

0xccd5,	// (0x00059ac5) list_single_2graphic_im_pane_g2

0xcce1,	// (0x00059ad1) list_single_2graphic_im_pane_g3_ParamLimits

0xcce1,	// (0x00059ad1) list_single_2graphic_im_pane_g3

0x0003,

0xfc6a,	// (0x0005ca5a) list_single_2graphic_im_pane_g_ParamLimits

0xfc6a,	// (0x0005ca5a) list_single_2graphic_im_pane_g

0xcd01,	// (0x00059af1) list_single_2graphic_im_pane_t1_ParamLimits

0xcd01,	// (0x00059af1) list_single_2graphic_im_pane_t1

0xc71f,	// (0x0005950f) list_single_graphic_2heading_pane_fp_ParamLimits

0xc71f,	// (0x0005950f) list_single_graphic_2heading_pane_fp

0x669e,	// (0x0005348e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x669e,	// (0x0005348e) list_single_graphic_2heading_pane_fp_g1

0xc738,	// (0x00059528) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc738,	// (0x00059528) list_single_graphic_2heading_pane_fp_g2

0x7c84,	// (0x00054a74) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7c84,	// (0x00054a74) list_single_graphic_2heading_pane_fp_g3

0x802d,	// (0x00054e1d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x802d,	// (0x00054e1d) list_single_graphic_2heading_pane_fp_g4

0xc744,	// (0x00059534) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc744,	// (0x00059534) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb91,	// (0x0005c981) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb91,	// (0x0005c981) list_single_graphic_2heading_pane_fp_g

0x6947,	// (0x00053737) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6947,	// (0x00053737) list_single_graphic_2heading_pane_fp_t1

0x66d6,	// (0x000534c6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x66d6,	// (0x000534c6) list_single_graphic_2heading_pane_fp_t2

0x695d,	// (0x0005374d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x695d,	// (0x0005374d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc73,	// (0x0005ca63) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc73,	// (0x0005ca63) list_single_graphic_2heading_pane_fp_t

0xc142,	// (0x00058f32) fep_hwr_write_pane_g5_ParamLimits

0xc142,	// (0x00058f32) fep_hwr_write_pane_g5

0xc14e,	// (0x00058f3e) fep_hwr_write_pane_g6_ParamLimits

0xc14e,	// (0x00058f3e) fep_hwr_write_pane_g6

0xca02,	// (0x000597f2) eswt_shell_pane_ParamLimits

0x9aee,	// (0x000568de) bg_popup_window_pane_cp18_ParamLimits

0xad7b,	// (0x00057b6b) heading_pane_cp70

0xcb2c,	// (0x0005991c) popup_eswt_tasktip_window_t1_ParamLimits

0x954a,	// (0x0005633a) aid_touch_tab_arrow_left

0x9559,	// (0x00056349) aid_touch_tab_arrow_right

0x732b,	// (0x0005411b) title_pane_g3_ParamLimits

0x732b,	// (0x0005411b) title_pane_g3

0x7cc9,	// (0x00054ab9) set_value_pane_g1

0x9417,	// (0x00056207) popup_toolbar_trans_pane_ParamLimits

0xcc78,	// (0x00059a68) aid_size_cell_tb_trans_pane_ParamLimits

0x7d0a,	// (0x00054afa) bg_tb_trans_pane_ParamLimits

0xcc8a,	// (0x00059a7a) grid_tb_trans_pane_ParamLimits

0x766d,	// (0x0005445d) cont_note_pane_ParamLimits

0x766d,	// (0x0005445d) cont_note_pane

0x79db,	// (0x000547cb) cont_snote2_single_text_pane_ParamLimits

0x79db,	// (0x000547cb) cont_snote2_single_text_pane

0x79db,	// (0x000547cb) cont_snote2_single_graphic_pane_ParamLimits

0x79db,	// (0x000547cb) cont_snote2_single_graphic_pane

0xa0a2,	// (0x00056e92) cont_note_wait_pane_ParamLimits

0xa0a2,	// (0x00056e92) cont_note_wait_pane

0xa0a2,	// (0x00056e92) cont_note_image_pane_ParamLimits

0xa0a2,	// (0x00056e92) cont_note_image_pane

0xcd32,	// (0x00059b22) popup_note2_window_g1_ParamLimits

0xcd32,	// (0x00059b22) popup_note2_window_g1

0xcd63,	// (0x00059b53) popup_note2_window_t1_ParamLimits

0xcd63,	// (0x00059b53) popup_note2_window_t1

0xcda8,	// (0x00059b98) popup_note2_window_t2_ParamLimits

0xcda8,	// (0x00059b98) popup_note2_window_t2

0xcded,	// (0x00059bdd) popup_note2_window_t3_ParamLimits

0xcded,	// (0x00059bdd) popup_note2_window_t3

0xce32,	// (0x00059c22) popup_note2_window_t4_ParamLimits

0xce32,	// (0x00059c22) popup_note2_window_t4

0x76f1,	// (0x000544e1) popup_note2_window_t5_ParamLimits

0x76f1,	// (0x000544e1) popup_note2_window_t5

0x0004,

0xfc7f,	// (0x0005ca6f) popup_note2_window_t_ParamLimits

0xfc7f,	// (0x0005ca6f) popup_note2_window_t

0xce61,	// (0x00059c51) popup_note2_image_window_g1_ParamLimits

0xce61,	// (0x00059c51) popup_note2_image_window_g1

0xce6d,	// (0x00059c5d) popup_note2_image_window_g2_ParamLimits

0xce6d,	// (0x00059c5d) popup_note2_image_window_g2

0x0001,

0xfc8a,	// (0x0005ca7a) popup_note2_image_window_g_ParamLimits

0xfc8a,	// (0x0005ca7a) popup_note2_image_window_g

0xce7f,	// (0x00059c6f) popup_note2_image_window_t1_ParamLimits

0xce7f,	// (0x00059c6f) popup_note2_image_window_t1

0xce97,	// (0x00059c87) popup_note2_image_window_t2_ParamLimits

0xce97,	// (0x00059c87) popup_note2_image_window_t2

0xceaf,	// (0x00059c9f) popup_note2_image_window_t3_ParamLimits

0xceaf,	// (0x00059c9f) popup_note2_image_window_t3

0x0002,

0xfc8f,	// (0x0005ca7f) popup_note2_image_window_t_ParamLimits

0xfc8f,	// (0x0005ca7f) popup_note2_image_window_t

0xa0b0,	// (0x00056ea0) popup_note2_wait_window_g1_ParamLimits

0xa0b0,	// (0x00056ea0) popup_note2_wait_window_g1

0xcecb,	// (0x00059cbb) popup_note2_wait_window_g2_ParamLimits

0xcecb,	// (0x00059cbb) popup_note2_wait_window_g2

0xa0c8,	// (0x00056eb8) popup_note2_wait_window_g3_ParamLimits

0xa0c8,	// (0x00056eb8) popup_note2_wait_window_g3

0x0002,

0xfc96,	// (0x0005ca86) popup_note2_wait_window_g_ParamLimits

0xfc96,	// (0x0005ca86) popup_note2_wait_window_g

0xced7,	// (0x00059cc7) popup_note2_wait_window_t1_ParamLimits

0xced7,	// (0x00059cc7) popup_note2_wait_window_t1

0xcef5,	// (0x00059ce5) popup_note2_wait_window_t2_ParamLimits

0xcef5,	// (0x00059ce5) popup_note2_wait_window_t2

0xcf13,	// (0x00059d03) popup_note2_wait_window_t3_ParamLimits

0xcf13,	// (0x00059d03) popup_note2_wait_window_t3

0xcf25,	// (0x00059d15) popup_note2_wait_window_t4_ParamLimits

0xcf25,	// (0x00059d15) popup_note2_wait_window_t4

0x0003,

0xfc9d,	// (0x0005ca8d) popup_note2_wait_window_t_ParamLimits

0xfc9d,	// (0x0005ca8d) popup_note2_wait_window_t

0xcf37,	// (0x00059d27) wait_bar2_pane_ParamLimits

0xcf37,	// (0x00059d27) wait_bar2_pane

0xcf4f,	// (0x00059d3f) popup_snote2_single_text_window_g1_ParamLimits

0xcf4f,	// (0x00059d3f) popup_snote2_single_text_window_g1

0xcf77,	// (0x00059d67) popup_snote2_single_text_window_t1_ParamLimits

0xcf77,	// (0x00059d67) popup_snote2_single_text_window_t1

0xcfc3,	// (0x00059db3) popup_snote2_single_text_window_t2_ParamLimits

0xcfc3,	// (0x00059db3) popup_snote2_single_text_window_t2

0xd00f,	// (0x00059dff) popup_snote2_single_text_window_t3_ParamLimits

0xd00f,	// (0x00059dff) popup_snote2_single_text_window_t3

0xd050,	// (0x00059e40) popup_snote2_single_text_window_t4_ParamLimits

0xd050,	// (0x00059e40) popup_snote2_single_text_window_t4

0xd086,	// (0x00059e76) popup_snote2_single_text_window_t5_ParamLimits

0xd086,	// (0x00059e76) popup_snote2_single_text_window_t5

0x0004,

0xfca6,	// (0x0005ca96) popup_snote2_single_text_window_t_ParamLimits

0xfca6,	// (0x0005ca96) popup_snote2_single_text_window_t

0xd0b1,	// (0x00059ea1) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0b1,	// (0x00059ea1) popup_snote2_single_graphic_window_g1

0xd0d9,	// (0x00059ec9) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0d9,	// (0x00059ec9) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb1,	// (0x0005caa1) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb1,	// (0x0005caa1) popup_snote2_single_graphic_window_g

0xd101,	// (0x00059ef1) popup_snote2_single_graphic_window_t1_ParamLimits

0xd101,	// (0x00059ef1) popup_snote2_single_graphic_window_t1

0xd14d,	// (0x00059f3d) popup_snote2_single_graphic_window_t2_ParamLimits

0xd14d,	// (0x00059f3d) popup_snote2_single_graphic_window_t2

0xd00f,	// (0x00059dff) popup_snote2_single_graphic_window_t3_ParamLimits

0xd00f,	// (0x00059dff) popup_snote2_single_graphic_window_t3

0xd050,	// (0x00059e40) popup_snote2_single_graphic_window_t4_ParamLimits

0xd050,	// (0x00059e40) popup_snote2_single_graphic_window_t4

0xd086,	// (0x00059e76) popup_snote2_single_graphic_window_t5_ParamLimits

0xd086,	// (0x00059e76) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb6,	// (0x0005caa6) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb6,	// (0x0005caa6) popup_snote2_single_graphic_window_t

0xbb89,	// (0x00058979) clock_nsta_pane_cp2_t1

0xbb89,	// (0x00058979) clock_nsta_pane_cp2_t2

0x0001,

0xfaca,	// (0x0005c8ba) clock_nsta_pane_cp2_t

0x5456,	// (0x00052246) form_field_data_wide_pane_g1_ParamLimits

0x7d24,	// (0x00054b14) form_field_data_wide_pane_g2_ParamLimits

0x7d24,	// (0x00054b14) form_field_data_wide_pane_g2

0x7d30,	// (0x00054b20) form_field_data_wide_pane_g3_ParamLimits

0x7d30,	// (0x00054b20) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0005c48c) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0005c48c) form_field_data_wide_pane_g

0xba64,	// (0x00058854) grid_touch_3_pane_ParamLimits

0xba64,	// (0x00058854) grid_touch_3_pane

0xd199,	// (0x00059f89) cell_touch_3_pane_ParamLimits

0xd199,	// (0x00059f89) cell_touch_3_pane

0xc0a2,	// (0x00058e92) cell_touch_3_pane_g1

0xc0a2,	// (0x00058e92) cell_touch_3_pane_g2

0x0001,

0xfb4f,	// (0x0005c93f) cell_touch_3_pane_g

0x7723,	// (0x00054513) cont_query_data_pane

0x772b,	// (0x0005451b) cont_query_data_pane_cp1

0xd1cc,	// (0x00059fbc) button_value_adjust_pane_cp7

0xd1d4,	// (0x00059fc4) query_popup_pane_cp3

0x8612,	// (0x00055402) bg_popup_sub_pane_cp22_ParamLimits

0x57fa,	// (0x000525ea) navi_navi_volume_pane_cp2

0x5815,	// (0x00052605) popup_side_volume_key_window_g2

0x5824,	// (0x00052614) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0005c51e) popup_side_volume_key_window_g

0x5841,	// (0x00052631) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0005c525) popup_side_volume_key_window_t

0x88cd,	// (0x000556bd) popup_side_volume_key_window_ParamLimits

0x5049,	// (0x00051e39) list_double_graphic_pane_g4_ParamLimits

0x5049,	// (0x00051e39) list_double_graphic_pane_g4

0xb070,	// (0x00057e60) list_single_2heading_msg_pane_ParamLimits

0xb070,	// (0x00057e60) list_single_2heading_msg_pane

0x80c5,	// (0x00054eb5) list_single_2heading_msg_pane_g1_ParamLimits

0x80c5,	// (0x00054eb5) list_single_2heading_msg_pane_g1

0x8f68,	// (0x00055d58) list_single_2heading_msg_pane_g2_ParamLimits

0x8f68,	// (0x00055d58) list_single_2heading_msg_pane_g2

0x80d1,	// (0x00054ec1) list_single_2heading_msg_pane_g3_ParamLimits

0x80d1,	// (0x00054ec1) list_single_2heading_msg_pane_g3

0x80dd,	// (0x00054ecd) list_single_2heading_msg_pane_g4_ParamLimits

0x80dd,	// (0x00054ecd) list_single_2heading_msg_pane_g4

0x0003,

0xfcc1,	// (0x0005cab1) list_single_2heading_msg_pane_g_ParamLimits

0xfcc1,	// (0x0005cab1) list_single_2heading_msg_pane_g

0x697d,	// (0x0005376d) list_single_2heading_msg_pane_t1_ParamLimits

0x697d,	// (0x0005376d) list_single_2heading_msg_pane_t1

0x69a5,	// (0x00053795) list_single_2heading_msg_pane_t2_ParamLimits

0x69a5,	// (0x00053795) list_single_2heading_msg_pane_t2

0x69d4,	// (0x000537c4) list_single_2heading_msg_pane_t3_ParamLimits

0x69d4,	// (0x000537c4) list_single_2heading_msg_pane_t3

0x6a0d,	// (0x000537fd) list_single_2heading_msg_pane_t4_ParamLimits

0x6a0d,	// (0x000537fd) list_single_2heading_msg_pane_t4

0x0003,

0xfcca,	// (0x0005caba) list_single_2heading_msg_pane_t_ParamLimits

0xfcca,	// (0x0005caba) list_single_2heading_msg_pane_t

0x7337,	// (0x00054127) title_pane_g4_ParamLimits

0x7337,	// (0x00054127) title_pane_g4

0x5606,	// (0x000523f6) title_pane_stacon_g3_ParamLimits

0x5606,	// (0x000523f6) title_pane_stacon_g3

0xccf5,	// (0x00059ae5) list_single_2graphic_im_pane_g4_ParamLimits

0xccf5,	// (0x00059ae5) list_single_2graphic_im_pane_g4

0xab18,	// (0x00057908) popup_side_volume_key_window_cp

0xb38e,	// (0x0005817e) main_idle_act2_pane_t1

0x5c77,	// (0x00052a67) toolbar_button_pane_g10

0x7bd3,	// (0x000549c3) popup_toolbar_window_cp1

0xbb7a,	// (0x0005896a) clock_nsta_pane_cp_t1

0xbb7a,	// (0x0005896a) clock_nsta_pane_cp_t2

0x0001,

0xfac5,	// (0x0005c8b5) clock_nsta_pane_cp_t

0x57fa,	// (0x000525ea) navi_navi_volume_pane_cp2_ParamLimits

0x5809,	// (0x000525f9) popup_side_volume_key_window_g1_ParamLimits

0x5815,	// (0x00052605) popup_side_volume_key_window_g2_ParamLimits

0x5824,	// (0x00052614) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0005c51e) popup_side_volume_key_window_g_ParamLimits

0x63cd,	// (0x000531bd) fep_hwr_aid_pane

0x6476,	// (0x00053266) bg_fep_hwr_top_pane_g4_ParamLimits

0xc112,	// (0x00058f02) fep_hwr_top_pane_g1_ParamLimits

0xc124,	// (0x00058f14) fep_hwr_top_pane_g2_ParamLimits

0x6496,	// (0x00053286) fep_hwr_top_pane_g3_ParamLimits

0xfb1a,	// (0x0005c90a) fep_hwr_top_pane_g_ParamLimits

0x64ab,	// (0x0005329b) fep_hwr_top_text_pane_ParamLimits

0xa8cd,	// (0x000576bd) aid_touch_tab_arrow_arrow_2

0xa8d6,	// (0x000576c6) aid_touch_tab_arrow_left_2

0x63e1,	// (0x000531d1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6418,	// (0x00053208) fep_hwr_prediction_pane

0xc27a,	// (0x0005906a) fep_vkb_prediction_pane

0xc380,	// (0x00059170) fep_vkb_side_pane_g3_ParamLimits

0xc380,	// (0x00059170) fep_vkb_side_pane_g3

0x663a,	// (0x0005342a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x67e0,	// (0x000535d0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x67ed,	// (0x000535dd) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc9,	// (0x0005c9b9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6a32,	// (0x00053822) fep_hwr_prediction_pane_g1

0x6a3c,	// (0x0005382c) fep_hwr_prediction_pane_g2

0x6a44,	// (0x00053834) fep_hwr_prediction_pane_g3

0x6a4c,	// (0x0005383c) fep_hwr_prediction_pane_g4

0x0003,

0xfcd3,	// (0x0005cac3) fep_hwr_prediction_pane_g

0xd1fb,	// (0x00059feb) fep_vkb_prediction_pane_g1

0xd205,	// (0x00059ff5) fep_vkb_prediction_pane_g2

0xd20d,	// (0x00059ffd) fep_vkb_prediction_pane_g3

0xd215,	// (0x0005a005) fep_vkb_prediction_pane_g4

0x0003,

0xfcdc,	// (0x0005cacc) fep_vkb_prediction_pane_g

0x6000,	// (0x00052df0) slider_set_pane_g3

0x6014,	// (0x00052e04) slider_set_pane_g4

0x602c,	// (0x00052e1c) slider_set_pane_g5

0x6000,	// (0x00052df0) slider_set_pane_g6

0x6042,	// (0x00052e32) slider_set_pane_g7

0xafc6,	// (0x00057db6) slider_form_pane_g3

0xafcf,	// (0x00057dbf) slider_form_pane_g4

0xafd7,	// (0x00057dc7) slider_form_pane_g5

0xafc6,	// (0x00057db6) slider_form_pane_g6

0xafdf,	// (0x00057dcf) slider_form_pane_g7

0xb65c,	// (0x0005844c) slider_set_pane_vc_g3

0xb665,	// (0x00058455) slider_set_pane_vc_g4

0xb66e,	// (0x0005845e) slider_set_pane_vc_g5

0xb65c,	// (0x0005844c) slider_set_pane_vc_g6

0xb677,	// (0x00058467) slider_set_pane_vc_g7

0xb65c,	// (0x0005844c) slider_form_pane_vc_g1

0xb665,	// (0x00058455) slider_form_pane_vc_g2

0xb66e,	// (0x0005845e) slider_form_pane_vc_g3

0xb65c,	// (0x0005844c) slider_form_pane_vc_g4

0xb82c,	// (0x0005861c) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x0005c88e) slider_form_pane_vc_g

0x2442,	// (0x0004f232) main_idle_act3_pane

0xd21d,	// (0x0005a00d) ai3_links_pane

0xd226,	// (0x0005a016) popup_ai3_data_window_ParamLimits

0xd226,	// (0x0005a016) popup_ai3_data_window

0x2442,	// (0x0004f232) grid_ai3_links_pane

0xd244,	// (0x0005a034) cell_ai3_links_pane_ParamLimits

0xd244,	// (0x0005a034) cell_ai3_links_pane

0xd25e,	// (0x0005a04e) bg_popup_sub_pane_cp11

0xd26b,	// (0x0005a05b) cell_ai3_links_pane_g1

0x2442,	// (0x0004f232) bg_popup_sub_pane_cp12

0xd290,	// (0x0005a080) heading_ai3_data_pane

0xd298,	// (0x0005a088) list_ai3_gene_pane

0xd2a4,	// (0x0005a094) popup_ai3_data_window_g1

0xd2ac,	// (0x0005a09c) heading_ai3_data_pane_g1

0xd2b4,	// (0x0005a0a4) heading_ai3_data_pane_t1

0xd2c2,	// (0x0005a0b2) list_double_ai3_gene_pane_ParamLimits

0xd2c2,	// (0x0005a0b2) list_double_ai3_gene_pane

0xd2cf,	// (0x0005a0bf) list_single_ai3_gene_pane_ParamLimits

0xd2cf,	// (0x0005a0bf) list_single_ai3_gene_pane

0xc067,	// (0x00058e57) list_highlight_pane_cp7_ParamLimits

0xc067,	// (0x00058e57) list_highlight_pane_cp7

0xd2dc,	// (0x0005a0cc) list_single_a13_gene_pane_t1_ParamLimits

0xd2dc,	// (0x0005a0cc) list_single_a13_gene_pane_t1

0xd2f3,	// (0x0005a0e3) list_single_ai3_gene_pane_g1

0xd2fc,	// (0x0005a0ec) list_single_ai3_gene_pane_g2

0x0001,

0xfce5,	// (0x0005cad5) list_single_ai3_gene_pane_g

0xd304,	// (0x0005a0f4) list_double_ai3_gene_pane_g1_ParamLimits

0xd304,	// (0x0005a0f4) list_double_ai3_gene_pane_g1

0xd310,	// (0x0005a100) list_double_ai3_gene_pane_t1_ParamLimits

0xd310,	// (0x0005a100) list_double_ai3_gene_pane_t1

0xd32c,	// (0x0005a11c) list_double_ai3_gene_pane_t2_ParamLimits

0xd32c,	// (0x0005a11c) list_double_ai3_gene_pane_t2

0xd341,	// (0x0005a131) list_double_ai3_gene_pane_t3_ParamLimits

0xd341,	// (0x0005a131) list_double_ai3_gene_pane_t3

0x0002,

0xfcea,	// (0x0005cada) list_double_ai3_gene_pane_t_ParamLimits

0xfcea,	// (0x0005cada) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6973,	// (0x00053763) aid_size_min_col_2

0xd1e5,	// (0x00059fd5) aid_size_min_msg_ParamLimits

0xd1e5,	// (0x00059fd5) aid_size_min_msg

0xc48c,	// (0x0005927c) fep_vkb_top_text_pane_g2_ParamLimits

0xc48c,	// (0x0005927c) fep_vkb_top_text_pane_g2

0x0001,

0xfb4a,	// (0x0005c93a) fep_vkb_top_text_pane_g_ParamLimits

0xfb4a,	// (0x0005c93a) fep_vkb_top_text_pane_g

0x2442,	// (0x0004f232) main_hc_apps_shell_pane

0xd35e,	// (0x0005a14e) grid_hc_apps_pane_ParamLimits

0xd35e,	// (0x0005a14e) grid_hc_apps_pane

0xd36d,	// (0x0005a15d) list_hc_apps_pane

0xd375,	// (0x0005a165) scroll_pane_cp37_ParamLimits

0xd375,	// (0x0005a165) scroll_pane_cp37

0xd381,	// (0x0005a171) cell_hc_apps_pane_ParamLimits

0xd381,	// (0x0005a171) cell_hc_apps_pane

0xd439,	// (0x0005a229) cell_hc_apps_pane_g1_ParamLimits

0xd439,	// (0x0005a229) cell_hc_apps_pane_g1

0xd46a,	// (0x0005a25a) cell_hc_apps_pane_g2_ParamLimits

0xd46a,	// (0x0005a25a) cell_hc_apps_pane_g2

0xd486,	// (0x0005a276) cell_hc_apps_pane_g3_ParamLimits

0xd486,	// (0x0005a276) cell_hc_apps_pane_g3

0x0002,

0xfcf1,	// (0x0005cae1) cell_hc_apps_pane_g_ParamLimits

0xfcf1,	// (0x0005cae1) cell_hc_apps_pane_g

0xd4a8,	// (0x0005a298) cell_hc_apps_pane_t1_ParamLimits

0xd4a8,	// (0x0005a298) cell_hc_apps_pane_t1

0x766d,	// (0x0005445d) grid_highlight_pane_cp10_ParamLimits

0x766d,	// (0x0005445d) grid_highlight_pane_cp10

0xd4e8,	// (0x0005a2d8) list_single_hc_apps_pane_ParamLimits

0xd4e8,	// (0x0005a2d8) list_single_hc_apps_pane

0xd527,	// (0x0005a317) list_single_hc_apps_pane_g1

0x80f5,	// (0x00054ee5) list_single_hc_apps_pane_g2

0x0001,

0xfcf8,	// (0x0005cae8) list_single_hc_apps_pane_g

0x810e,	// (0x00054efe) list_single_hc_apps_pane_g2_copy1

0x6a54,	// (0x00053844) list_single_hc_apps_pane_t1

0x73e3,	// (0x000541d3) bg_set_opt_pane_cp_ParamLimits

0x4e40,	// (0x00051c30) setting_slider_pane_t1_ParamLimits

0x4e56,	// (0x00051c46) setting_slider_pane_t2_ParamLimits

0x4e70,	// (0x00051c60) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0005c36a) setting_slider_pane_t_ParamLimits

0x4e88,	// (0x00051c78) slider_set_pane_ParamLimits

0x5b19,	// (0x00052909) control_pane_g5_ParamLimits

0x5b19,	// (0x00052909) control_pane_g5

0xade7,	// (0x00057bd7) slider_set_pane_g1_ParamLimits

0x5ff4,	// (0x00052de4) slider_set_pane_g2_ParamLimits

0x6000,	// (0x00052df0) slider_set_pane_g3_ParamLimits

0x6014,	// (0x00052e04) slider_set_pane_g4_ParamLimits

0x602c,	// (0x00052e1c) slider_set_pane_g5_ParamLimits

0x6000,	// (0x00052df0) slider_set_pane_g6_ParamLimits

0x6042,	// (0x00052e32) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0005c76a) slider_set_pane_g_ParamLimits

0x89b2,	// (0x000557a2) navi_icon_text_pane_ParamLimits

0x9509,	// (0x000562f9) aid_fill_nsta_2_ParamLimits

0x954a,	// (0x0005633a) aid_touch_tab_arrow_left_ParamLimits

0x9559,	// (0x00056349) aid_touch_tab_arrow_right_ParamLimits

0x95c6,	// (0x000563b6) clock_nsta_pane_ParamLimits

0xa8a9,	// (0x00057699) navi_icon_pane_g1_ParamLimits

0xa8b8,	// (0x000576a8) navi_text_pane_t1_ParamLimits

0xbc97,	// (0x00058a87) navi_icon_text_pane_g1_ParamLimits

0xbca6,	// (0x00058a96) navi_icon_text_pane_t1_ParamLimits

0xd527,	// (0x0005a317) list_single_hc_apps_pane_g1_ParamLimits

0x80f5,	// (0x00054ee5) list_single_hc_apps_pane_g2_ParamLimits

0xfcf8,	// (0x0005cae8) list_single_hc_apps_pane_g_ParamLimits

0x810e,	// (0x00054efe) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6a54,	// (0x00053844) list_single_hc_apps_pane_t1_ParamLimits

0x4d4a,	// (0x00051b3a) popup_toolbar2_fixed_window_ParamLimits

0x4d4a,	// (0x00051b3a) popup_toolbar2_fixed_window

0x940d,	// (0x000561fd) popup_toolbar2_float_window

0x2442,	// (0x0004f232) bg_popup_sub_pane_cp27

0xd540,	// (0x0005a330) grid_toolbar2_float_pane

0x2442,	// (0x0004f232) bg_popup_sub_pane_cp26

0xd540,	// (0x0005a330) grid_toolbar2_fixed_pane

0xd548,	// (0x0005a338) cell_toolbar2_fixed_pane_ParamLimits

0xd548,	// (0x0005a338) cell_toolbar2_fixed_pane

0xd558,	// (0x0005a348) cell_toolbar2_fixed_pane_g1

0xd561,	// (0x0005a351) toolbar2_fixed_button_pane

0x99fc,	// (0x000567ec) toolbar2_fixed_button_pane_g1

0x9a0c,	// (0x000567fc) toolbar2_fixed_button_pane_g2

0x9a04,	// (0x000567f4) toolbar2_fixed_button_pane_g3

0x9a1c,	// (0x0005680c) toolbar2_fixed_button_pane_g4

0x9a14,	// (0x00056804) toolbar2_fixed_button_pane_g5

0x9a24,	// (0x00056814) toolbar2_fixed_button_pane_g6

0x9a2c,	// (0x0005681c) toolbar2_fixed_button_pane_g7

0x9a3c,	// (0x0005682c) toolbar2_fixed_button_pane_g8

0x9a34,	// (0x00056824) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0005c66c) toolbar2_fixed_button_pane_g

0xd569,	// (0x0005a359) cell_toolbar2_float_pane_ParamLimits

0xd569,	// (0x0005a359) cell_toolbar2_float_pane

0xd57a,	// (0x0005a36a) cell_toolbar2_float_pane_g1

0xd561,	// (0x0005a351) toolbar2_fixed_button_pane_cp

0xc1e8,	// (0x00058fd8) fep_vkb_accented_list_pane_ParamLimits

0xc1e8,	// (0x00058fd8) fep_vkb_accented_list_pane

0x661a,	// (0x0005340a) bg_popup_fep_shadow_pane_g9

0x8b36,	// (0x00055926) bg_popup_fep_shadow_pane_cp3

0x7e7c,	// (0x00054c6c) list_accented_list_pane

0xd583,	// (0x0005a373) list_single_accented_list_pane_ParamLimits

0xd583,	// (0x0005a373) list_single_accented_list_pane

0x8b36,	// (0x00055926) list_highlight_pane_cp10

0xd594,	// (0x0005a384) list_single_accented_list_pane_t1

0x9353,	// (0x00056143) popup_slider_window_ParamLimits

0x9353,	// (0x00056143) popup_slider_window

0xd1dc,	// (0x00059fcc) aid_indentation_list_msg

0xd660,	// (0x0005a450) bg_popup_window_pane_cp19

0xd6ce,	// (0x0005a4be) popup_slider_window_g1

0xd70b,	// (0x0005a4fb) popup_slider_window_g2

0xd727,	// (0x0005a517) popup_slider_window_g3

0x0005,

0xfcfd,	// (0x0005caed) popup_slider_window_g

0xd783,	// (0x0005a573) popup_slider_window_t1

0xd7f7,	// (0x0005a5e7) small_volume_slider_vertical_pane

0xc0a2,	// (0x00058e92) small_volume_slider_vertical_pane_g1

0xc0a2,	// (0x00058e92) small_volume_slider_vertical_pane_g2

0xd813,	// (0x0005a603) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0f,	// (0x0005caff) small_volume_slider_vertical_pane_g

0x4af8,	// (0x000518e8) area_side_right_pane_ParamLimits

0x4af8,	// (0x000518e8) area_side_right_pane

0x6a82,	// (0x00053872) aid_size_side_button_ParamLimits

0x6a82,	// (0x00053872) aid_size_side_button

0x6a96,	// (0x00053886) grid_sctrl_middle_pane_ParamLimits

0x6a96,	// (0x00053886) grid_sctrl_middle_pane

0x6ab6,	// (0x000538a6) sctrl_sk_bottom_pane

0x6ac7,	// (0x000538b7) sctrl_sk_top_pane

0x6ad9,	// (0x000538c9) aid_touch_sctrl_top

0x6ae6,	// (0x000538d6) bg_sctrl_sk_pane_ParamLimits

0x6ae6,	// (0x000538d6) bg_sctrl_sk_pane

0x6af4,	// (0x000538e4) sctrl_sk_top_pane_g1

0x6b01,	// (0x000538f1) sctrl_sk_top_pane_t1

0x6ad9,	// (0x000538c9) aid_touch_sctrl_bottom

0x6ae6,	// (0x000538d6) bg_sctrl_sk_pane_cp_ParamLimits

0x6ae6,	// (0x000538d6) bg_sctrl_sk_pane_cp

0x6b1c,	// (0x0005390c) sctrl_sk_bottom_pane_g1

0x6b01,	// (0x000538f1) sctrl_sk_bottom_pane_t1

0x6b25,	// (0x00053915) cell_sctrl_middle_pane_ParamLimits

0x6b25,	// (0x00053915) cell_sctrl_middle_pane

0x6b42,	// (0x00053932) aid_touch_sctrl_middle_ParamLimits

0x6b42,	// (0x00053932) aid_touch_sctrl_middle

0x6b54,	// (0x00053944) bg_sctrl_middle_pane_ParamLimits

0x6b54,	// (0x00053944) bg_sctrl_middle_pane

0x663a,	// (0x0005342a) cell_sctrl_middle_pane_g1_ParamLimits

0x663a,	// (0x0005342a) cell_sctrl_middle_pane_g1

0x6b62,	// (0x00053952) cell_sctrl_middle_pane_g2_ParamLimits

0x6b62,	// (0x00053952) cell_sctrl_middle_pane_g2

0x0001,

0xfd1b,	// (0x0005cb0b) cell_sctrl_middle_pane_g_ParamLimits

0xfd1b,	// (0x0005cb0b) cell_sctrl_middle_pane_g

0x99fc,	// (0x000567ec) bg_sctrl_middle_pane_g1

0x9a04,	// (0x000567f4) bg_sctrl_middle_pane_g2

0x9a0c,	// (0x000567fc) bg_sctrl_middle_pane_g3

0x9a14,	// (0x00056804) bg_sctrl_middle_pane_g4

0x9a1c,	// (0x0005680c) bg_sctrl_middle_pane_g5

0x9a24,	// (0x00056814) bg_sctrl_middle_pane_g6

0x9a2c,	// (0x0005681c) bg_sctrl_middle_pane_g7

0x9a34,	// (0x00056824) bg_sctrl_middle_pane_g8

0x0007,

0xfd20,	// (0x0005cb10) bg_sctrl_middle_pane_g

0x9a3c,	// (0x0005682c) bg_sctrl_middle_pane_g8_copy1

0x99fc,	// (0x000567ec) bg_sctrl_sk_pane_g1

0x9a0c,	// (0x000567fc) bg_sctrl_sk_pane_g2

0x9a04,	// (0x000567f4) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0005c66c) bg_sctrl_sk_pane_g

0x7b99,	// (0x00054989) aid_size_touch_scroll_bar

0x9a1c,	// (0x0005680c) bg_sctrl_sk_pane_g4

0x9a14,	// (0x00056804) bg_sctrl_sk_pane_g5

0x9a24,	// (0x00056814) bg_sctrl_sk_pane_g6

0x9a2c,	// (0x0005681c) bg_sctrl_sk_pane_g7

0x9a3c,	// (0x0005682c) bg_sctrl_sk_pane_g8

0x9a34,	// (0x00056824) bg_sctrl_sk_pane_g9

0x8f5e,	// (0x00055d4e) popup_fep_china_hwr2_fs_candidate_window

0x8f74,	// (0x00055d64) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8f74,	// (0x00055d64) popup_fep_china_hwr2_fs_control_window

0x663a,	// (0x0005342a) sctrl_sk_top_pane_g2

0x0001,

0xfd16,	// (0x0005cb06) sctrl_sk_top_pane_g

0xd81c,	// (0x0005a60c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd81c,	// (0x0005a60c) aid_fep_china_hwr2_fs_cell

0xd82f,	// (0x0005a61f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd82f,	// (0x0005a61f) bg_popup_fep_shadow_pane_cp4

0xd848,	// (0x0005a638) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd848,	// (0x0005a638) bg_popup_fep_shadow_pane_cp5

0xd85a,	// (0x0005a64a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd85a,	// (0x0005a64a) popup_fep_china_hwr2_fs_control_bar_grid

0xd86a,	// (0x0005a65a) popup_fep_china_hwr2_fs_control_funtion_grid

0xd872,	// (0x0005a662) aid_fep_china_hwr2_fs_candi_cell

0x2442,	// (0x0004f232) bg_popup_fep_shadow_pane_cp6

0xd87c,	// (0x0005a66c) popup_fep_china_hwr2_fs_candidate_grid

0xd886,	// (0x0005a676) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd886,	// (0x0005a676) cell_fep_china_hwr2_fs_funtion_grid

0xc0a2,	// (0x00058e92) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd89e,	// (0x0005a68e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd89e,	// (0x0005a68e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8ac,	// (0x0005a69c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8ac,	// (0x0005a69c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd31,	// (0x0005cb21) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd31,	// (0x0005cb21) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8c2,	// (0x0005a6b2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8c2,	// (0x0005a6b2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8d7,	// (0x0005a6c7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8d7,	// (0x0005a6c7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd36,	// (0x0005cb26) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd36,	// (0x0005cb26) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8f3,	// (0x0005a6e3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8fb,	// (0x0005a6eb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd903,	// (0x0005a6f3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3b,	// (0x0005cb2b) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd90b,	// (0x0005a6fb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd90b,	// (0x0005a6fb) cell_fep_china_hwr2_fs_candidate_grid

0xd92a,	// (0x0005a71a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd932,	// (0x0005a722) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc0a2,	// (0x00058e92) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc0a2,	// (0x00058e92) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4f,	// (0x0005c93f) cell_fep_china_hwr2_fs_candidate_grid_g

0xd93a,	// (0x0005a72a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95d9,	// (0x000563c9) clock_nsta_pane_cp_24_ParamLimits

0x95d9,	// (0x000563c9) clock_nsta_pane_cp_24

0x9659,	// (0x00056449) indicator_nsta_pane_cp_24_ParamLimits

0x9659,	// (0x00056449) indicator_nsta_pane_cp_24

0xa725,	// (0x00057515) heading_pane_g1

0x0001,

0xf8e1,	// (0x0005c6d1) heading_pane_g

0xb1d5,	// (0x00057fc5) grid_sct_catagory_button_pane

0xb207,	// (0x00057ff7) scroll_pane_cp5_ParamLimits

0xbceb,	// (0x00058adb) button_value_adjust_pane_cp5_ParamLimits

0xbceb,	// (0x00058adb) button_value_adjust_pane_cp5

0xbdd0,	// (0x00058bc0) form2_midp_time_pane_ParamLimits

0xd948,	// (0x0005a738) cell_sct_catagory_button_pane_ParamLimits

0xd948,	// (0x0005a738) cell_sct_catagory_button_pane

0xc067,	// (0x00058e57) bg_button_pane_cp01_ParamLimits

0xc067,	// (0x00058e57) bg_button_pane_cp01

0xc0a2,	// (0x00058e92) cell_sct_catagory_button_pane_g1

0x9394,	// (0x00056184) popup_tb_extension_window

0xd95a,	// (0x0005a74a) aid_size_cell_ext_ParamLimits

0xd95a,	// (0x0005a74a) aid_size_cell_ext

0x766d,	// (0x0005445d) bg_tb_trans_pane_cp1_ParamLimits

0x766d,	// (0x0005445d) bg_tb_trans_pane_cp1

0xd97a,	// (0x0005a76a) grid_tb_ext_pane_ParamLimits

0xd97a,	// (0x0005a76a) grid_tb_ext_pane

0xd9aa,	// (0x0005a79a) cell_tb_ext_pane_ParamLimits

0xd9aa,	// (0x0005a79a) cell_tb_ext_pane

0xd9c1,	// (0x0005a7b1) cell_tb_ext_pane_g1_ParamLimits

0xd9c1,	// (0x0005a7b1) cell_tb_ext_pane_g1

0xd9de,	// (0x0005a7ce) cell_tb_ext_pane_t1

0x766d,	// (0x0005445d) list_highlight_pane_cp11_ParamLimits

0x766d,	// (0x0005445d) list_highlight_pane_cp11

0x4d69,	// (0x00051b59) popup_uni_indicator_window_ParamLimits

0x4d69,	// (0x00051b59) popup_uni_indicator_window

0x7d0a,	// (0x00054afa) bg_popup_sub_pane_cp14

0xd9f9,	// (0x0005a7e9) list_uniindi_pane

0xda05,	// (0x0005a7f5) uniindi_top_pane

0x766d,	// (0x0005445d) bg_uniindi_top_pane

0xda26,	// (0x0005a816) uniindi_top_pane_g1

0xda3c,	// (0x0005a82c) uniindi_top_pane_g2

0x0003,

0xfd42,	// (0x0005cb32) uniindi_top_pane_g

0xda66,	// (0x0005a856) uniindi_top_pane_t1

0xda92,	// (0x0005a882) list_single_uniindi_pane_ParamLimits

0xda92,	// (0x0005a882) list_single_uniindi_pane

0xc0a2,	// (0x00058e92) bg_uniindi_top_pane_g1

0xdaa4,	// (0x0005a894) list_single_uniindi_pane_g1

0xdab7,	// (0x0005a8a7) list_single_uniindi_pane_t1

0x4bd5,	// (0x000519c5) control_bg_pane

0xdadc,	// (0x0005a8cc) bg_sctrl_sk_pane_cp1

0xdae5,	// (0x0005a8d5) bg_sctrl_sk_pane_cp2

0xdaee,	// (0x0005a8de) control_bg_pane_g1

0xdaf7,	// (0x0005a8e7) control_bg_pane_g2

0x0001,

0xfd4b,	// (0x0005cb3b) control_bg_pane_g

0xbb0e,	// (0x000588fe) cell_indicator_nsta_pane_g1_ParamLimits

0xbb1c,	// (0x0005890c) cell_indicator_nsta_pane_g2_ParamLimits

0xfab3,	// (0x0005c8a3) cell_indicator_nsta_pane_g_ParamLimits

0x63ac,	// (0x0005319c) form2_midp_time_pane_t1_ParamLimits

0x79db,	// (0x000547cb) main_idle_act4_pane_ParamLimits

0x79db,	// (0x000547cb) main_idle_act4_pane

0x9394,	// (0x00056184) popup_tb_extension_window_ParamLimits

0xd99c,	// (0x0005a78c) tb_ext_find_pane_ParamLimits

0xd99c,	// (0x0005a78c) tb_ext_find_pane

0xdb00,	// (0x0005a8f0) ai_gene_pane_1_cp1

0x8c7f,	// (0x00055a6f) ai_gene_pane_2_cp1

0xdb08,	// (0x0005a8f8) list_single_idle_plugin_calendar_pane

0xdb11,	// (0x0005a901) list_single_idle_plugin_notification_pane

0xdb1a,	// (0x0005a90a) list_single_idle_plugin_player_pane

0xdb23,	// (0x0005a913) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb23,	// (0x0005a913) list_single_idle_plugin_shortcut_pane

0xdb45,	// (0x0005a935) main_idle_act4_pane_t1

0xdb57,	// (0x0005a947) main_idle_act4_pane_t2

0x0001,

0xfd50,	// (0x0005cb40) main_idle_act4_pane_t

0xdb69,	// (0x0005a959) middle_sk_idle_act4_pane_ParamLimits

0xdb69,	// (0x0005a959) middle_sk_idle_act4_pane

0xdb7f,	// (0x0005a96f) popup_clock_digital_analogue_window_cp2

0xdb99,	// (0x0005a989) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb99,	// (0x0005a989) shortcut_wheel_idle_act4_pane

0xc0a2,	// (0x00058e92) shortcut_wheel_idle_act4_pane_g1

0xc0a2,	// (0x00058e92) shortcut_wheel_idle_act4_pane_g2

0xc0a2,	// (0x00058e92) shortcut_wheel_idle_act4_pane_g3

0xc0a2,	// (0x00058e92) shortcut_wheel_idle_act4_pane_g4

0xc0a2,	// (0x00058e92) shortcut_wheel_idle_act4_pane_g5

0xdbad,	// (0x0005a99d) shortcut_wheel_idle_act4_pane_g6

0xdbb5,	// (0x0005a9a5) shortcut_wheel_idle_act4_pane_g7

0xdbbd,	// (0x0005a9ad) shortcut_wheel_idle_act4_pane_g8

0xdbc5,	// (0x0005a9b5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd55,	// (0x0005cb45) shortcut_wheel_idle_act4_pane_g

0xc32c,	// (0x0005911c) middle_sk_idle_act4_pane_g1_ParamLimits

0xc32c,	// (0x0005911c) middle_sk_idle_act4_pane_g1

0xdc29,	// (0x0005aa19) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc29,	// (0x0005aa19) middle_sk_idle_act4_pane_g2

0x0001,

0xfd78,	// (0x0005cb68) middle_sk_idle_act4_pane_g_ParamLimits

0xfd78,	// (0x0005cb68) middle_sk_idle_act4_pane_g

0xdc35,	// (0x0005aa25) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc35,	// (0x0005aa25) middle_sk_idle_act4_pane_t1

0xdc52,	// (0x0005aa42) grid_ai_shortcut_pane_ParamLimits

0xdc52,	// (0x0005aa42) grid_ai_shortcut_pane

0xdc6b,	// (0x0005aa5b) list_highlight_pane_cp16_ParamLimits

0xdc6b,	// (0x0005aa5b) list_highlight_pane_cp16

0xdc78,	// (0x0005aa68) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc78,	// (0x0005aa68) list_single_idle_plugin_shortcut_pane_g1

0xdc84,	// (0x0005aa74) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc84,	// (0x0005aa74) list_single_idle_plugin_shortcut_pane_g2

0xdc9e,	// (0x0005aa8e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc9e,	// (0x0005aa8e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7d,	// (0x0005cb6d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7d,	// (0x0005cb6d) list_single_idle_plugin_shortcut_pane_g

0xdcb1,	// (0x0005aaa1) cell_ai_shortcut_pane_ParamLimits

0xdcb1,	// (0x0005aaa1) cell_ai_shortcut_pane

0xdcd4,	// (0x0005aac4) cell_ai_shortcut_pane_g1_ParamLimits

0xdcd4,	// (0x0005aac4) cell_ai_shortcut_pane_g1

0xdb00,	// (0x0005a8f0) ai_gene_pane_1_cp2

0xdcf6,	// (0x0005aae6) ai_gene_pane_2_cp2

0xdcfe,	// (0x0005aaee) list_highlight_pane_cp15

0xdd07,	// (0x0005aaf7) list_single_idle_plugin_calendar_pane_g1

0xdcfe,	// (0x0005aaee) list_highlight_pane_cp17

0xdd0f,	// (0x0005aaff) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd17,	// (0x0005ab07) list_single_idle_plugin_player_pane_g1

0xb43c,	// (0x0005822c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd84,	// (0x0005cb74) list_single_idle_plugin_player_pane_g

0xdd1f,	// (0x0005ab0f) list_single_idle_plugin_player_pane_t1

0xdd2d,	// (0x0005ab1d) list_single_idle_plugin_player_pane_t2

0xdd3b,	// (0x0005ab2b) list_single_idle_plugin_player_pane_t3

0xdd49,	// (0x0005ab39) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd89,	// (0x0005cb79) list_single_idle_plugin_player_pane_t

0xdd57,	// (0x0005ab47) wait_bar_pane_cp15

0xdd5f,	// (0x0005ab4f) grid_ai_notification_pane

0xb43c,	// (0x0005822c) list_single_idle_plugin_notification_pane_g1

0xdd68,	// (0x0005ab58) cell_ai_notification_pane_ParamLimits

0xdd68,	// (0x0005ab58) cell_ai_notification_pane

0xdd75,	// (0x0005ab65) cell_ai_notification_pane_g1

0xdd7d,	// (0x0005ab6d) cell_ai_notification_pane_t1

0xdd8b,	// (0x0005ab7b) tb_ext_find_button_pane

0xdd93,	// (0x0005ab83) tb_ext_find_pane_g1

0xdd9b,	// (0x0005ab8b) tb_ext_find_pane_t1

0x8548,	// (0x00055338) tb_ext_find_button_pane_g1

0xdda9,	// (0x0005ab99) tb_ext_find_button_pane_g2

0x0001,

0xfd92,	// (0x0005cb82) tb_ext_find_button_pane_g

0xdb45,	// (0x0005a935) main_idle_act4_pane_t1_ParamLimits

0xdb57,	// (0x0005a947) main_idle_act4_pane_t2_ParamLimits

0xfd50,	// (0x0005cb40) main_idle_act4_pane_t_ParamLimits

0xdb7f,	// (0x0005a96f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb8d,	// (0x0005a97d) sat_plugin_idle_act4_pane_ParamLimits

0xdb8d,	// (0x0005a97d) sat_plugin_idle_act4_pane

0xddb2,	// (0x0005aba2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddb2,	// (0x0005aba2) sat_plugin_idle_act4_pane_t1

0xddc5,	// (0x0005abb5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddc5,	// (0x0005abb5) sat_plugin_idle_act4_pane_t2

0xddd8,	// (0x0005abc8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddd8,	// (0x0005abc8) sat_plugin_idle_act4_pane_t3

0xddeb,	// (0x0005abdb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddeb,	// (0x0005abdb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd97,	// (0x0005cb87) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd97,	// (0x0005cb87) sat_plugin_idle_act4_pane_t

0x4c9a,	// (0x00051a8a) popup_battery_window_ParamLimits

0x4c9a,	// (0x00051a8a) popup_battery_window

0x766d,	// (0x0005445d) bg_popup_sub_pane_cp25_ParamLimits

0x766d,	// (0x0005445d) bg_popup_sub_pane_cp25

0xddfe,	// (0x0005abee) popup_battery_window_g1_ParamLimits

0xddfe,	// (0x0005abee) popup_battery_window_g1

0xde0a,	// (0x0005abfa) popup_battery_window_t1_ParamLimits

0xde0a,	// (0x0005abfa) popup_battery_window_t1

0xde1c,	// (0x0005ac0c) popup_battery_window_t2_ParamLimits

0xde1c,	// (0x0005ac0c) popup_battery_window_t2

0x0001,

0xfda0,	// (0x0005cb90) popup_battery_window_t_ParamLimits

0xfda0,	// (0x0005cb90) popup_battery_window_t

0x8b4a,	// (0x0005593a) midp_canvas_pane_ParamLimits

0x8bc1,	// (0x000559b1) midp_keypad_pane_ParamLimits

0x8bc1,	// (0x000559b1) midp_keypad_pane

0x8eb4,	// (0x00055ca4) main_midp_pane_ParamLimits

0xbb98,	// (0x00058988) signal_pane_g2_cp_ParamLimits

0xde39,	// (0x0005ac29) aid_size_cell_midp_keypad_ParamLimits

0xde39,	// (0x0005ac29) aid_size_cell_midp_keypad

0xde53,	// (0x0005ac43) midp_keyp_game_grid_pane_ParamLimits

0xde53,	// (0x0005ac43) midp_keyp_game_grid_pane

0xde73,	// (0x0005ac63) midp_keyp_rocker_pane_ParamLimits

0xde73,	// (0x0005ac63) midp_keyp_rocker_pane

0xdea2,	// (0x0005ac92) midp_keyp_sk_left_pane_ParamLimits

0xdea2,	// (0x0005ac92) midp_keyp_sk_left_pane

0xdefc,	// (0x0005acec) midp_keyp_sk_right_pane_ParamLimits

0xdefc,	// (0x0005acec) midp_keyp_sk_right_pane

0x2442,	// (0x0004f232) bg_button_pane_cp03

0xdf56,	// (0x0005ad46) midp_keyp_sk_left_pane_g1

0x2442,	// (0x0004f232) bg_button_pane_cp04

0xdf56,	// (0x0005ad46) midp_keyp_sk_right_pane_g1

0xc0a2,	// (0x00058e92) midp_keyp_rocker_pane_g1

0xdf5f,	// (0x0005ad4f) keyp_game_cell_pane_ParamLimits

0xdf5f,	// (0x0005ad4f) keyp_game_cell_pane

0x2442,	// (0x0004f232) bg_button_pane_cp02

0xdf72,	// (0x0005ad62) keyp_game_cell_pane_g1

0x4ce4,	// (0x00051ad4) popup_fep_vkb2_window_ParamLimits

0x4ce4,	// (0x00051ad4) popup_fep_vkb2_window

0x6b84,	// (0x00053974) aid_size_cell_vkb2_ParamLimits

0x6b84,	// (0x00053974) aid_size_cell_vkb2

0x6bd0,	// (0x000539c0) popup_fep_vkb2_window_g1_ParamLimits

0x6bd0,	// (0x000539c0) popup_fep_vkb2_window_g1

0x6c18,	// (0x00053a08) vkb2_area_bottom_pane_ParamLimits

0x6c18,	// (0x00053a08) vkb2_area_bottom_pane

0x6c6c,	// (0x00053a5c) vkb2_area_keypad_pane_ParamLimits

0x6c6c,	// (0x00053a5c) vkb2_area_keypad_pane

0x6cb2,	// (0x00053aa2) vkb2_area_top_pane_ParamLimits

0x6cb2,	// (0x00053aa2) vkb2_area_top_pane

0x6d2c,	// (0x00053b1c) vkb2_top_entry_pane_ParamLimits

0x6d2c,	// (0x00053b1c) vkb2_top_entry_pane

0x6d56,	// (0x00053b46) vkb2_top_grid_left_pane_ParamLimits

0x6d56,	// (0x00053b46) vkb2_top_grid_left_pane

0x6d74,	// (0x00053b64) vkb2_top_grid_right_pane_ParamLimits

0x6d74,	// (0x00053b64) vkb2_top_grid_right_pane

0x6d92,	// (0x00053b82) vkb2_cell_keypad_pane_ParamLimits

0x6d92,	// (0x00053b82) vkb2_cell_keypad_pane

0x6e48,	// (0x00053c38) vkb2_area_bottom_grid_pane_ParamLimits

0x6e48,	// (0x00053c38) vkb2_area_bottom_grid_pane

0x6e6e,	// (0x00053c5e) vkb2_area_bottom_pane_g1_ParamLimits

0x6e6e,	// (0x00053c5e) vkb2_area_bottom_pane_g1

0x6e92,	// (0x00053c82) vkb2_area_bottom_pane_g2_ParamLimits

0x6e92,	// (0x00053c82) vkb2_area_bottom_pane_g2

0x6ec0,	// (0x00053cb0) vkb2_area_bottom_pane_g3_ParamLimits

0x6ec0,	// (0x00053cb0) vkb2_area_bottom_pane_g3

0x0002,

0xfda5,	// (0x0005cb95) vkb2_area_bottom_pane_g_ParamLimits

0xfda5,	// (0x0005cb95) vkb2_area_bottom_pane_g

0x6f21,	// (0x00053d11) vkb2_top_cell_left_pane_ParamLimits

0x6f21,	// (0x00053d11) vkb2_top_cell_left_pane

0xdf83,	// (0x0005ad73) vkb2_top_entry_pane_g1_ParamLimits

0xdf83,	// (0x0005ad73) vkb2_top_entry_pane_g1

0xdf91,	// (0x0005ad81) vkb2_top_entry_pane_t1_ParamLimits

0xdf91,	// (0x0005ad81) vkb2_top_entry_pane_t1

0xdfa9,	// (0x0005ad99) vkb2_top_entry_pane_t2_ParamLimits

0xdfa9,	// (0x0005ad99) vkb2_top_entry_pane_t2

0xdfc1,	// (0x0005adb1) vkb2_top_entry_pane_t3_ParamLimits

0xdfc1,	// (0x0005adb1) vkb2_top_entry_pane_t3

0x0002,

0xfdac,	// (0x0005cb9c) vkb2_top_entry_pane_t_ParamLimits

0xfdac,	// (0x0005cb9c) vkb2_top_entry_pane_t

0x6f6e,	// (0x00053d5e) vkb2_top_grid_right_pane_g1_ParamLimits

0x6f6e,	// (0x00053d5e) vkb2_top_grid_right_pane_g1

0x6f84,	// (0x00053d74) vkb2_top_grid_right_pane_g2_ParamLimits

0x6f84,	// (0x00053d74) vkb2_top_grid_right_pane_g2

0x6f9c,	// (0x00053d8c) vkb2_top_grid_right_pane_g3_ParamLimits

0x6f9c,	// (0x00053d8c) vkb2_top_grid_right_pane_g3

0x6fb4,	// (0x00053da4) vkb2_top_grid_right_pane_g4_ParamLimits

0x6fb4,	// (0x00053da4) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb3,	// (0x0005cba3) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb3,	// (0x0005cba3) vkb2_top_grid_right_pane_g

0x6fca,	// (0x00053dba) vkb2_top_cell_left_pane_g1

0x6fe1,	// (0x00053dd1) vkb2_cell_keypad_pane_g1_ParamLimits

0x6fe1,	// (0x00053dd1) vkb2_cell_keypad_pane_g1

0xdfd7,	// (0x0005adc7) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfd7,	// (0x0005adc7) vkb2_cell_keypad_pane_t1

0x7005,	// (0x00053df5) vkb2_cell_bottom_grid_pane_ParamLimits

0x7005,	// (0x00053df5) vkb2_cell_bottom_grid_pane

0x703e,	// (0x00053e2e) vkb2_cell_bottom_grid_pane_g1

0xdbcd,	// (0x0005a9bd) aid_call2_pane_cp02

0xdbd5,	// (0x0005a9c5) aid_call_pane_cp02

0xdbdd,	// (0x0005a9cd) clock_digital_number_pane_cp10

0xdbe5,	// (0x0005a9d5) clock_digital_number_pane_cp11

0xdbed,	// (0x0005a9dd) clock_digital_number_pane_cp12

0xdbf5,	// (0x0005a9e5) clock_digital_number_pane_cp13

0xdbfd,	// (0x0005a9ed) clock_digital_separator_pane_cp10

0x8548,	// (0x00055338) popup_clock_digital_analogue_window_cp2_g1

0x8548,	// (0x00055338) popup_clock_digital_analogue_window_cp2_g2

0xdc05,	// (0x0005a9f5) popup_clock_digital_analogue_window_cp2_g3

0x8548,	// (0x00055338) popup_clock_digital_analogue_window_cp2_g4

0xdc05,	// (0x0005a9f5) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd68,	// (0x0005cb58) popup_clock_digital_analogue_window_cp2_g

0xdc0d,	// (0x0005a9fd) popup_clock_digital_analogue_window_cp2_t1

0xdc1b,	// (0x0005aa0b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd73,	// (0x0005cb63) popup_clock_digital_analogue_window_cp2_t

0xc0a2,	// (0x00058e92) clock_digital_number_pane_cp10_g1

0xc0a2,	// (0x00058e92) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0005c93f) clock_digital_number_pane_cp10_g

0xc0a2,	// (0x00058e92) clock_digital_separator_pane_cp10_g1

0xc0a2,	// (0x00058e92) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0005c93f) clock_digital_separator_pane_cp10_g

0xda48,	// (0x0005a838) uniindi_top_pane_g3

0xda59,	// (0x0005a849) uniindi_top_pane_g4

0x6e02,	// (0x00053bf2) vkb2_row_keypad_pane_ParamLimits

0x6e02,	// (0x00053bf2) vkb2_row_keypad_pane

0x705a,	// (0x00053e4a) vkb2_cell_t_keypad_pane_ParamLimits

0x705a,	// (0x00053e4a) vkb2_cell_t_keypad_pane

0x706a,	// (0x00053e5a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x706a,	// (0x00053e5a) vkb2_cell_t_keypad_pane_cp08

0x707f,	// (0x00053e6f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x707f,	// (0x00053e6f) vkb2_cell_t_keypad_pane_cp09

0x7093,	// (0x00053e83) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7093,	// (0x00053e83) vkb2_cell_t_keypad_pane_cp01

0x70a4,	// (0x00053e94) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x70a4,	// (0x00053e94) vkb2_cell_t_keypad_pane_cp02

0x70b5,	// (0x00053ea5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x70b5,	// (0x00053ea5) vkb2_cell_t_keypad_pane_cp03

0x70c6,	// (0x00053eb6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x70c6,	// (0x00053eb6) vkb2_cell_t_keypad_pane_cp04

0x70d7,	// (0x00053ec7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x70d7,	// (0x00053ec7) vkb2_cell_t_keypad_pane_cp05

0x70e8,	// (0x00053ed8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x70e8,	// (0x00053ed8) vkb2_cell_t_keypad_pane_cp06

0x70fb,	// (0x00053eeb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x70fb,	// (0x00053eeb) vkb2_cell_t_keypad_pane_cp07

0x7110,	// (0x00053f00) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7110,	// (0x00053f00) vkb2_cell_t_keypad_pane_cp10

0x663a,	// (0x0005342a) vkb2_cell_t_keypad_pane_g1

0xdfee,	// (0x0005adde) vkb2_cell_t_keypad_pane_t1

0x4bd5,	// (0x000519c5) popup_grid_graphic2_window

0xe000,	// (0x0005adf0) aid_size_cell_graphic2_ParamLimits

0xe000,	// (0x0005adf0) aid_size_cell_graphic2

0xc88e,	// (0x0005967e) bg_popup_window_pane_cp21_ParamLimits

0xc88e,	// (0x0005967e) bg_popup_window_pane_cp21

0xe02c,	// (0x0005ae1c) graphic2_pages_pane_ParamLimits

0xe02c,	// (0x0005ae1c) graphic2_pages_pane

0xe072,	// (0x0005ae62) grid_graphic2_control_pane_ParamLimits

0xe072,	// (0x0005ae62) grid_graphic2_control_pane

0xe0a0,	// (0x0005ae90) grid_graphic2_pane_ParamLimits

0xe0a0,	// (0x0005ae90) grid_graphic2_pane

0xe102,	// (0x0005aef2) cell_graphic2_pane

0x2442,	// (0x0004f232) main_comp_mode_pane

0xd298,	// (0x0005a088) list_ai3_gene_pane_ParamLimits

0xd660,	// (0x0005a450) bg_popup_window_pane_cp19_ParamLimits

0xd66c,	// (0x0005a45c) bg_touch_area_indi_pane_ParamLimits

0xd66c,	// (0x0005a45c) bg_touch_area_indi_pane

0xd682,	// (0x0005a472) bg_touch_area_indi_pane_cp01_ParamLimits

0xd682,	// (0x0005a472) bg_touch_area_indi_pane_cp01

0xd69a,	// (0x0005a48a) bg_touch_area_indi_pane_cp02_ParamLimits

0xd69a,	// (0x0005a48a) bg_touch_area_indi_pane_cp02

0xd6b4,	// (0x0005a4a4) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6b4,	// (0x0005a4a4) bg_touch_area_indi_pane_cp03

0xd6ce,	// (0x0005a4be) popup_slider_window_g1_ParamLimits

0xd70b,	// (0x0005a4fb) popup_slider_window_g2_ParamLimits

0xd727,	// (0x0005a517) popup_slider_window_g3_ParamLimits

0xfcfd,	// (0x0005caed) popup_slider_window_g_ParamLimits

0xd783,	// (0x0005a573) popup_slider_window_t1_ParamLimits

0xd7f7,	// (0x0005a5e7) small_volume_slider_vertical_pane_ParamLimits

0xe102,	// (0x0005aef2) cell_graphic2_pane_ParamLimits

0xe157,	// (0x0005af47) bg_button_pane_cp10_ParamLimits

0xe157,	// (0x0005af47) bg_button_pane_cp10

0xe16c,	// (0x0005af5c) bg_button_pane_cp11_ParamLimits

0xe16c,	// (0x0005af5c) bg_button_pane_cp11

0xe181,	// (0x0005af71) graphic2_pages_pane_g1_ParamLimits

0xe181,	// (0x0005af71) graphic2_pages_pane_g1

0xe19c,	// (0x0005af8c) graphic2_pages_pane_g2_ParamLimits

0xe19c,	// (0x0005af8c) graphic2_pages_pane_g2

0x0001,

0xfdc1,	// (0x0005cbb1) graphic2_pages_pane_g_ParamLimits

0xfdc1,	// (0x0005cbb1) graphic2_pages_pane_g

0xe1b4,	// (0x0005afa4) graphic2_pages_pane_t1_ParamLimits

0xe1b4,	// (0x0005afa4) graphic2_pages_pane_t1

0xe1ca,	// (0x0005afba) cell_graphic2_control_pane_ParamLimits

0xe1ca,	// (0x0005afba) cell_graphic2_control_pane

0xe1e4,	// (0x0005afd4) cell_graphic2_pane_g1_ParamLimits

0xe1e4,	// (0x0005afd4) cell_graphic2_pane_g1

0xe1f1,	// (0x0005afe1) cell_graphic2_pane_g2_ParamLimits

0xe1f1,	// (0x0005afe1) cell_graphic2_pane_g2

0xe1fe,	// (0x0005afee) cell_graphic2_pane_g3_ParamLimits

0xe1fe,	// (0x0005afee) cell_graphic2_pane_g3

0xe20b,	// (0x0005affb) cell_graphic2_pane_g4_ParamLimits

0xe20b,	// (0x0005affb) cell_graphic2_pane_g4

0xe218,	// (0x0005b008) cell_graphic2_pane_g5_ParamLimits

0xe218,	// (0x0005b008) cell_graphic2_pane_g5

0x0004,

0xfdc6,	// (0x0005cbb6) cell_graphic2_pane_g_ParamLimits

0xfdc6,	// (0x0005cbb6) cell_graphic2_pane_g

0xe233,	// (0x0005b023) cell_graphic2_pane_t1_ParamLimits

0xe233,	// (0x0005b023) cell_graphic2_pane_t1

0x9aee,	// (0x000568de) grid_highlight_pane_cp11_ParamLimits

0x9aee,	// (0x000568de) grid_highlight_pane_cp11

0x7d0a,	// (0x00054afa) bg_button_pane_cp05

0xe25c,	// (0x0005b04c) cell_graphic2_control_pane_g1

0xc0a2,	// (0x00058e92) bg_touch_area_indi_pane_g1

0xe269,	// (0x0005b059) aid_cmod_rocker_key_size

0xe273,	// (0x0005b063) aid_cmode_itu_key_size

0xe27d,	// (0x0005b06d) main_cmode_video_pane

0xe287,	// (0x0005b077) main_comp_mode_itu_pane

0xe293,	// (0x0005b083) main_comp_mode_rocker_pane

0xe29f,	// (0x0005b08f) cell_cmode_rocker_pane_ParamLimits

0xe29f,	// (0x0005b08f) cell_cmode_rocker_pane

0xe2b3,	// (0x0005b0a3) cell_cmode_itu_pane_ParamLimits

0xe2b3,	// (0x0005b0a3) cell_cmode_itu_pane

0x7d0a,	// (0x00054afa) bg_button_pane_cp06_ParamLimits

0x7d0a,	// (0x00054afa) bg_button_pane_cp06

0xc32c,	// (0x0005911c) cell_cmode_rocker_pane_g1_ParamLimits

0xc32c,	// (0x0005911c) cell_cmode_rocker_pane_g1

0xd89e,	// (0x0005a68e) cell_cmode_rocker_pane_g2_ParamLimits

0xd89e,	// (0x0005a68e) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x0005cbc6) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x0005cbc6) cell_cmode_rocker_pane_g

0x2442,	// (0x0004f232) bg_button_pane_cp07

0xe2ca,	// (0x0005b0ba) cell_cmode_itu_pane_g1

0xe2d3,	// (0x0005b0c3) cell_cmode_itu_pane_t1

0xe2e1,	// (0x0005b0d1) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x0005cbcb) cell_cmode_itu_pane_t

0xdacc,	// (0x0005a8bc) aid_touch_ctrl_left

0xdad4,	// (0x0005a8c4) aid_touch_ctrl_right

0x2442,	// (0x0004f232) compa_mode_pane

0xe2ef,	// (0x0005b0df) aid_cmod_rocker_key_size_cp

0xe2f9,	// (0x0005b0e9) aid_cmode_itu_key_size_cp

0xe303,	// (0x0005b0f3) compa_mode_pane_g1

0xe30b,	// (0x0005b0fb) compa_mode_pane_g2

0xe313,	// (0x0005b103) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x0005cbd0) compa_mode_pane_g

0xe31b,	// (0x0005b10b) main_comp_mode_itu_pane_cp

0xe323,	// (0x0005b113) main_comp_mode_rocker_pane_cp

0xe32b,	// (0x0005b11b) cell_cmode_itu_pane_cp_ParamLimits

0xe32b,	// (0x0005b11b) cell_cmode_itu_pane_cp

0xe340,	// (0x0005b130) cell_cmode_rocker_pane_cp_ParamLimits

0xe340,	// (0x0005b130) cell_cmode_rocker_pane_cp

0x7d0a,	// (0x00054afa) bg_button_pane_cp06_cp_ParamLimits

0x7d0a,	// (0x00054afa) bg_button_pane_cp06_cp

0xc32c,	// (0x0005911c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc32c,	// (0x0005911c) cell_cmode_rocker_pane_g1_cp

0xc0a2,	// (0x00058e92) cell_cmode_rocker_pane_g2_cp

0x2442,	// (0x0004f232) bg_button_pane_cp07_cp

0xe352,	// (0x0005b142) cell_cmode_itu_pane_g1_cp

0xe35b,	// (0x0005b14b) cell_cmode_itu_pane_t1_cp

0xe35b,	// (0x0005b14b) cell_cmode_itu_pane_t2_cp

0xafb5,	// (0x00057da5) settings_code_pane_cp2

0x73e3,	// (0x000541d3) bg_popup_window_pane_cp3_ParamLimits

0x785b,	// (0x0005464b) heading_pane_cp3_ParamLimits

0x7867,	// (0x00054657) listscroll_popup_graphic_pane_ParamLimits

0x63cd,	// (0x000531bd) fep_hwr_aid_pane_ParamLimits

0x6ad9,	// (0x000538c9) aid_touch_sctrl_top_ParamLimits

0x6af4,	// (0x000538e4) sctrl_sk_top_pane_g1_ParamLimits

0x663a,	// (0x0005342a) sctrl_sk_top_pane_g2_ParamLimits

0xfd16,	// (0x0005cb06) sctrl_sk_top_pane_g_ParamLimits

0x6b01,	// (0x000538f1) sctrl_sk_top_pane_t1_ParamLimits

0x6ad9,	// (0x000538c9) aid_touch_sctrl_bottom_ParamLimits

0x6b01,	// (0x000538f1) sctrl_sk_bottom_pane_t1_ParamLimits

0xda12,	// (0x0005a802) aid_area_touch_clock

0x6cf4,	// (0x00053ae4) aid_vkb2_area_top_pane_cell_ParamLimits

0x6cf4,	// (0x00053ae4) aid_vkb2_area_top_pane_cell

0x6e24,	// (0x00053c14) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6e24,	// (0x00053c14) aid_vkb2_area_bottom_pane_cell

0xdf7b,	// (0x0005ad6b) popup_char_count_window

0xe369,	// (0x0005b159) popup_char_count_window_g1

0xe372,	// (0x0005b162) popup_char_count_window_g2

0xe37b,	// (0x0005b16b) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x0005cbd7) popup_char_count_window_g

0xe384,	// (0x0005b174) popup_char_count_window_t1

0x6bae,	// (0x0005399e) popup_fep_char_preview_window_ParamLimits

0x6bae,	// (0x0005399e) popup_fep_char_preview_window

0x6d12,	// (0x00053b02) vkb2_top_candi_pane_ParamLimits

0x6d12,	// (0x00053b02) vkb2_top_candi_pane

0xe392,	// (0x0005b182) cell_vkb2_top_candi_pane_ParamLimits

0xe392,	// (0x0005b182) cell_vkb2_top_candi_pane

0x7125,	// (0x00053f15) bg_popup_fep_char_preview_window_ParamLimits

0x7125,	// (0x00053f15) bg_popup_fep_char_preview_window

0x7133,	// (0x00053f23) popup_fep_char_preview_window_t1_ParamLimits

0x7133,	// (0x00053f23) popup_fep_char_preview_window_t1

0xe3e3,	// (0x0005b1d3) bg_popup_fep_char_preview_window_g1

0xe3eb,	// (0x0005b1db) bg_popup_fep_char_preview_window_g2

0xe3f3,	// (0x0005b1e3) bg_popup_fep_char_preview_window_g3

0xe3fb,	// (0x0005b1eb) bg_popup_fep_char_preview_window_g4

0xe403,	// (0x0005b1f3) bg_popup_fep_char_preview_window_g5

0x716d,	// (0x00053f5d) bg_popup_fep_char_preview_window_g6

0xe40b,	// (0x0005b1fb) bg_popup_fep_char_preview_window_g7

0xe413,	// (0x0005b203) bg_popup_fep_char_preview_window_g8

0xe41b,	// (0x0005b20b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x0005cbde) bg_popup_fep_char_preview_window_g

0x663a,	// (0x0005342a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x663a,	// (0x0005342a) cell_vkb2_top_candi_pane_g1

0x6648,	// (0x00053438) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6648,	// (0x00053438) cell_vkb2_top_candi_pane_g2

0xd6ea,	// (0x0005a4da) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd6ea,	// (0x0005a4da) cell_vkb2_top_candi_pane_g3

0x7175,	// (0x00053f65) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7175,	// (0x00053f65) cell_vkb2_top_candi_pane_g4

0xc82b,	// (0x0005961b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc82b,	// (0x0005961b) cell_vkb2_top_candi_pane_g5

0x7196,	// (0x00053f86) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7196,	// (0x00053f86) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x0005cbf1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x0005cbf1) cell_vkb2_top_candi_pane_g

0x71a4,	// (0x00053f94) cell_vkb2_top_candi_pane_t1

0x5fe0,	// (0x00052dd0) aid_size_touch_slider_mark_ParamLimits

0x5fe0,	// (0x00052dd0) aid_size_touch_slider_mark

0xe062,	// (0x0005ae52) grid_graphic2_catg_pane_ParamLimits

0xe062,	// (0x0005ae52) grid_graphic2_catg_pane

0xe0dc,	// (0x0005aecc) popup_grid_graphic2_window_t1_ParamLimits

0xe0dc,	// (0x0005aecc) popup_grid_graphic2_window_t1

0xe0ee,	// (0x0005aede) popup_grid_graphic2_window_t2_ParamLimits

0xe0ee,	// (0x0005aede) popup_grid_graphic2_window_t2

0x0001,

0xfdbc,	// (0x0005cbac) popup_grid_graphic2_window_t_ParamLimits

0xfdbc,	// (0x0005cbac) popup_grid_graphic2_window_t

0x7d0a,	// (0x00054afa) bg_button_pane_cp05_ParamLimits

0xe25c,	// (0x0005b04c) cell_graphic2_control_pane_g1_ParamLimits

0xe423,	// (0x0005b213) cell_graphic2_catg_pane_ParamLimits

0xe423,	// (0x0005b213) cell_graphic2_catg_pane

0x2442,	// (0x0004f232) bg_button_pane_cp12

0xe435,	// (0x0005b225) cell_graphic2_catg_pane_g1

0xd9de,	// (0x0005a7ce) cell_tb_ext_pane_t1_ParamLimits

0x6f41,	// (0x00053d31) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6f41,	// (0x00053d31) vkb2_top_cell_right_narrow_pane

0x6f59,	// (0x00053d49) vkb2_top_cell_right_wide_pane_ParamLimits

0x6f59,	// (0x00053d49) vkb2_top_cell_right_wide_pane

0x63bf,	// (0x000531af) bg_vkb2_func_pane_ParamLimits

0x63bf,	// (0x000531af) bg_vkb2_func_pane

0x6fca,	// (0x00053dba) vkb2_top_cell_left_pane_g1_ParamLimits

0x63bf,	// (0x000531af) bg_vkb2_fuc_pane_cp03_ParamLimits

0x63bf,	// (0x000531af) bg_vkb2_fuc_pane_cp03

0x703e,	// (0x00053e2e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a04,	// (0x000567f4) bg_vkb2_func_pane_g1

0x9a0c,	// (0x000567fc) bg_vkb2_func_pane_g2

0x9a1c,	// (0x0005680c) bg_vkb2_func_pane_g3

0x9a14,	// (0x00056804) bg_vkb2_func_pane_g4

0x9a24,	// (0x00056814) bg_vkb2_func_pane_g5

0x9a2c,	// (0x0005681c) bg_vkb2_func_pane_g6

0x9a34,	// (0x00056824) bg_vkb2_func_pane_g7

0x9a3c,	// (0x0005682c) bg_vkb2_func_pane_g8

0x99fc,	// (0x000567ec) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x0005cbfe) bg_vkb2_func_pane_g

0x63bf,	// (0x000531af) bg_vkb2_fuc_pane_cp01_ParamLimits

0x63bf,	// (0x000531af) bg_vkb2_fuc_pane_cp01

0x6fca,	// (0x00053dba) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6fca,	// (0x00053dba) vkb2_top_cell_right_wide_pane_g1

0x63bf,	// (0x000531af) bg_vkb2_fuc_pane_cp02_ParamLimits

0x63bf,	// (0x000531af) bg_vkb2_fuc_pane_cp02

0x703e,	// (0x00053e2e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x703e,	// (0x00053e2e) vkb2_top_cell_right_narrow_pane_g1

0xd5de,	// (0x0005a3ce) aid_touch_area_decrease_ParamLimits

0xd5de,	// (0x0005a3ce) aid_touch_area_decrease

0xd602,	// (0x0005a3f2) aid_touch_area_increase_ParamLimits

0xd602,	// (0x0005a3f2) aid_touch_area_increase

0xd60e,	// (0x0005a3fe) aid_touch_area_mute_ParamLimits

0xd60e,	// (0x0005a3fe) aid_touch_area_mute

0xd632,	// (0x0005a422) aid_touch_area_slider_ParamLimits

0xd632,	// (0x0005a422) aid_touch_area_slider

0xd743,	// (0x0005a533) popup_slider_window_g4_ParamLimits

0xd743,	// (0x0005a533) popup_slider_window_g4

0xd74f,	// (0x0005a53f) popup_slider_window_g5_ParamLimits

0xd74f,	// (0x0005a53f) popup_slider_window_g5

0xd771,	// (0x0005a561) popup_slider_window_g6_ParamLimits

0xd771,	// (0x0005a561) popup_slider_window_g6

0xd7b1,	// (0x0005a5a1) popup_slider_window_t2_ParamLimits

0xd7b1,	// (0x0005a5a1) popup_slider_window_t2

0x0001,

0xfd0a,	// (0x0005cafa) popup_slider_window_t_ParamLimits

0xfd0a,	// (0x0005cafa) popup_slider_window_t

0xd7c9,	// (0x0005a5b9) slider_pane_ParamLimits

0xd7c9,	// (0x0005a5b9) slider_pane

0xe43e,	// (0x0005b22e) slider_pane_g1_ParamLimits

0xe43e,	// (0x0005b22e) slider_pane_g1

0xe452,	// (0x0005b242) slider_pane_g2_ParamLimits

0xe452,	// (0x0005b242) slider_pane_g2

0xe468,	// (0x0005b258) slider_pane_g3_ParamLimits

0xe468,	// (0x0005b258) slider_pane_g3

0x0003,

0xfe21,	// (0x0005cc11) slider_pane_g_ParamLimits

0xfe21,	// (0x0005cc11) slider_pane_g

0x93f6,	// (0x000561e6) popup_tb_float_extension_window_ParamLimits

0x93f6,	// (0x000561e6) popup_tb_float_extension_window

0xe494,	// (0x0005b284) aid_size_cell_tb_float_ext

0x2442,	// (0x0004f232) bg_popup_sub_window_cp28

0xe4a0,	// (0x0005b290) grid_tb_float_ext_pane

0xe4ac,	// (0x0005b29c) cell_tb_float_ext_pane_ParamLimits

0xe4ac,	// (0x0005b29c) cell_tb_float_ext_pane

0xe4c8,	// (0x0005b2b8) cell_tb_float_ext_pane_g1

0xe4d1,	// (0x0005b2c1) grid_highlight_pane_cp12

0x6514,	// (0x00053304) cell_last_hwr_side_pane_ParamLimits

0x6514,	// (0x00053304) cell_last_hwr_side_pane

0xc0a2,	// (0x00058e92) cell_last_hwr_side_pane_g1

0xe4da,	// (0x0005b2ca) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x0005cc1a) cell_last_hwr_side_pane_g

0x6ef0,	// (0x00053ce0) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6ef0,	// (0x00053ce0) vkb2_area_bottom_space_btn_pane

0x663a,	// (0x0005342a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfee,	// (0x0005adde) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x71a4,	// (0x00053f94) cell_vkb2_top_candi_pane_t1_ParamLimits

0x71c2,	// (0x00053fb2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x71c2,	// (0x00053fb2) vkb2_area_bottom_space_btn_pane_g1

0x71fc,	// (0x00053fec) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x71fc,	// (0x00053fec) vkb2_area_bottom_space_btn_pane_g2

0x7232,	// (0x00054022) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7232,	// (0x00054022) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x0005cc1f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x0005cc1f) vkb2_area_bottom_space_btn_pane_g

0x6484,	// (0x00053274) cel_fep_hwr_func_pane_ParamLimits

0x6484,	// (0x00053274) cel_fep_hwr_func_pane

0x64c0,	// (0x000532b0) cell_hwr_side_button_pane_ParamLimits

0x64c0,	// (0x000532b0) cell_hwr_side_button_pane

0xda12,	// (0x0005a802) aid_area_touch_clock_ParamLimits

0x766d,	// (0x0005445d) bg_uniindi_top_pane_ParamLimits

0xda26,	// (0x0005a816) uniindi_top_pane_g1_ParamLimits

0xda3c,	// (0x0005a82c) uniindi_top_pane_g2_ParamLimits

0xda48,	// (0x0005a838) uniindi_top_pane_g3_ParamLimits

0xda59,	// (0x0005a849) uniindi_top_pane_g4_ParamLimits

0xfd42,	// (0x0005cb32) uniindi_top_pane_g_ParamLimits

0xda66,	// (0x0005a856) uniindi_top_pane_t1_ParamLimits

0x766d,	// (0x0005445d) bg_vkb2_func_pane_cp01_ParamLimits

0x766d,	// (0x0005445d) bg_vkb2_func_pane_cp01

0xe4e3,	// (0x0005b2d3) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e3,	// (0x0005b2d3) cel_fep_hwr_func_pane_g1

0x766d,	// (0x0005445d) bg_vkb2_func_pane_cp02_ParamLimits

0x766d,	// (0x0005445d) bg_vkb2_func_pane_cp02

0xe4e3,	// (0x0005b2d3) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e3,	// (0x0005b2d3) cell_hwr_side_button_pane_g1

0x987d,	// (0x0005666d) status_pane_g4_ParamLimits

0x987d,	// (0x0005666d) status_pane_g4

0x9897,	// (0x00056687) status_pane_t1

0xbe3e,	// (0x00058c2e) form2_midp_gauge_slider_cont_pane

0xbe46,	// (0x00058c36) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe58,	// (0x00058c48) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe6a,	// (0x00058c5a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb02,	// (0x0005c8f2) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe7c,	// (0x00058c6c) form2_midp_slider_pane_ParamLimits

0x6b76,	// (0x00053966) aid_size_cell_func_vkb2_ParamLimits

0x6b76,	// (0x00053966) aid_size_cell_func_vkb2

0xe480,	// (0x0005b270) slider_pane_g4_ParamLimits

0xe480,	// (0x0005b270) slider_pane_g4

0x727c,	// (0x0005406c) form2_midp_gauge_slider_pane_t2_cp01

0x728a,	// (0x0005407a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x728a,	// (0x0005407a) form2_midp_gauge_slider_pane_t3_cp01

0x72a7,	// (0x00054097) form2_midp_slider_pane_cp01

0x2442,	// (0x0004f232) navi_smil_pane

0xe51c,	// (0x0005b30c) navi_smil_pane_g1

0xe524,	// (0x0005b314) navi_smil_pane_t1

0xe4f1,	// (0x0005b2e1) form2_midp_slider_pane_g1

0xe4fa,	// (0x0005b2ea) form2_midp_slider_pane_g2

0xe502,	// (0x0005b2f2) form2_midp_slider_pane_g3

0xe4f1,	// (0x0005b2e1) form2_midp_slider_pane_g4

0xe50a,	// (0x0005b2fa) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x0005cc28) form2_midp_slider_pane_g

0x726c,	// (0x0005405c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x726c,	// (0x0005405c) vkb2_area_bottom_space_btn_pane_g4

0x9695,	// (0x00056485) lc0_navi_pane_ParamLimits

0x9695,	// (0x00056485) lc0_navi_pane

0x9711,	// (0x00056501) lc0_stat_indi_pane_ParamLimits

0x9711,	// (0x00056501) lc0_stat_indi_pane

0x9728,	// (0x00056518) ls0_title_pane_ParamLimits

0x9728,	// (0x00056518) ls0_title_pane

0x7d0a,	// (0x00054afa) bg_popup_sub_pane_cp14_ParamLimits

0xd9f9,	// (0x0005a7e9) list_uniindi_pane_ParamLimits

0xda05,	// (0x0005a7f5) uniindi_top_pane_ParamLimits

0xdaa4,	// (0x0005a894) list_single_uniindi_pane_g1_ParamLimits

0xdab7,	// (0x0005a8a7) list_single_uniindi_pane_t1_ParamLimits

0x72b0,	// (0x000540a0) lc0_stat_clock_pane_ParamLimits

0x72b0,	// (0x000540a0) lc0_stat_clock_pane

0xe532,	// (0x0005b322) lc0_stat_indi_pane_g1_ParamLimits

0xe532,	// (0x0005b322) lc0_stat_indi_pane_g1

0xe53f,	// (0x0005b32f) lc0_stat_indi_pane_g2_ParamLimits

0xe53f,	// (0x0005b32f) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x0005cc33) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x0005cc33) lc0_stat_indi_pane_g

0x72bd,	// (0x000540ad) lc0_uni_indicator_pane_ParamLimits

0x72bd,	// (0x000540ad) lc0_uni_indicator_pane

0xe54c,	// (0x0005b33c) ls0_title_pane_g1_ParamLimits

0xe54c,	// (0x0005b33c) ls0_title_pane_g1

0xe560,	// (0x0005b350) ls0_title_pane_t1_ParamLimits

0xe560,	// (0x0005b350) ls0_title_pane_t1

0x72ca,	// (0x000540ba) lc0_uni_indicator_pane_g1_ParamLimits

0x72ca,	// (0x000540ba) lc0_uni_indicator_pane_g1

0xe596,	// (0x0005b386) lc0_stat_clock_pane_t1

0x2442,	// (0x0004f232) main_ai5_pane

0xe5a4,	// (0x0005b394) ai5_sk_pane_ParamLimits

0xe5a4,	// (0x0005b394) ai5_sk_pane

0xe5b1,	// (0x0005b3a1) cell_ai5_widget_pane_ParamLimits

0xe5b1,	// (0x0005b3a1) cell_ai5_widget_pane

0xe627,	// (0x0005b417) aid_size_cell_widget_grid

0xe63b,	// (0x0005b42b) bg_ai5_widget_pane_ParamLimits

0xe63b,	// (0x0005b42b) bg_ai5_widget_pane

0xe663,	// (0x0005b453) cell_ai5_widget_pane_g2

0xe673,	// (0x0005b463) cell_ai5_widget_pane_g3

0xe692,	// (0x0005b482) cell_ai5_widget_pane_g4

0xe69e,	// (0x0005b48e) cell_ai5_widget_pane_g5

0xe6aa,	// (0x0005b49a) cell_ai5_widget_pane_g6

0xe6b8,	// (0x0005b4a8) cell_ai5_widget_pane_g7

0xe700,	// (0x0005b4f0) cell_ai5_widget_pane_t1_ParamLimits

0xe700,	// (0x0005b4f0) cell_ai5_widget_pane_t1

0xe71d,	// (0x0005b50d) cell_ai5_widget_pane_t2_ParamLimits

0xe71d,	// (0x0005b50d) cell_ai5_widget_pane_t2

0xe735,	// (0x0005b525) cell_ai5_widget_pane_t3_ParamLimits

0xe735,	// (0x0005b525) cell_ai5_widget_pane_t3

0xe74d,	// (0x0005b53d) cell_ai5_widget_pane_t4_ParamLimits

0xe74d,	// (0x0005b53d) cell_ai5_widget_pane_t4

0xe767,	// (0x0005b557) cell_ai5_widget_pane_t5_ParamLimits

0xe767,	// (0x0005b557) cell_ai5_widget_pane_t5

0xe786,	// (0x0005b576) cell_ai5_widget_pane_t6_ParamLimits

0xe786,	// (0x0005b576) cell_ai5_widget_pane_t6

0xe798,	// (0x0005b588) cell_ai5_widget_pane_t7_ParamLimits

0xe798,	// (0x0005b588) cell_ai5_widget_pane_t7

0xe7b1,	// (0x0005b5a1) cell_ai5_widget_pane_t8_ParamLimits

0xe7b1,	// (0x0005b5a1) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x0005cc4d) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x0005cc4d) cell_ai5_widget_pane_t

0xe7fd,	// (0x0005b5ed) grid_ai5_widget_pane

0x7d0a,	// (0x00054afa) highlight_cell_ai5_widget_pane_ParamLimits

0x7d0a,	// (0x00054afa) highlight_cell_ai5_widget_pane

0xe814,	// (0x0005b604) ai5_sk_left_pane

0xe81e,	// (0x0005b60e) ai5_sk_middle_pane

0xe828,	// (0x0005b618) ai5_sk_right_pane

0xe832,	// (0x0005b622) bg_ai5_widget_pane_g1_ParamLimits

0xe832,	// (0x0005b622) bg_ai5_widget_pane_g1

0xe83e,	// (0x0005b62e) bg_ai5_widget_pane_g2_ParamLimits

0xe83e,	// (0x0005b62e) bg_ai5_widget_pane_g2

0xe84a,	// (0x0005b63a) bg_ai5_widget_pane_g3_ParamLimits

0xe84a,	// (0x0005b63a) bg_ai5_widget_pane_g3

0xe856,	// (0x0005b646) bg_ai5_widget_pane_g4_ParamLimits

0xe856,	// (0x0005b646) bg_ai5_widget_pane_g4

0xe862,	// (0x0005b652) bg_ai5_widget_pane_g5_ParamLimits

0xe862,	// (0x0005b652) bg_ai5_widget_pane_g5

0xe86e,	// (0x0005b65e) bg_ai5_widget_pane_g6_ParamLimits

0xe86e,	// (0x0005b65e) bg_ai5_widget_pane_g6

0xe87a,	// (0x0005b66a) bg_ai5_widget_pane_g7_ParamLimits

0xe87a,	// (0x0005b66a) bg_ai5_widget_pane_g7

0xe886,	// (0x0005b676) bg_ai5_widget_pane_g8_ParamLimits

0xe886,	// (0x0005b676) bg_ai5_widget_pane_g8

0xe892,	// (0x0005b682) bg_ai5_widget_pane_g9_ParamLimits

0xe892,	// (0x0005b682) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x0005cc62) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x0005cc62) bg_ai5_widget_pane_g

0xe8b9,	// (0x0005b6a9) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8b9,	// (0x0005b6a9) cell_shortcut_ai5_widget_pane

0x74af,	// (0x0005429f) bg_cell_shortcut_ai5_widget_pane

0xe8cb,	// (0x0005b6bb) cell_grid_ai5_widget_pane_g1

0xe8d4,	// (0x0005b6c4) highlight_cell_shortcut_ai5_widget_pane

0x9a04,	// (0x000567f4) ai5_sk_left_pane_g1

0xe8dc,	// (0x0005b6cc) ai5_sk_left_pane_g2

0xe8e4,	// (0x0005b6d4) ai5_sk_left_pane_g3

0xe8ec,	// (0x0005b6dc) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x0005cc75) ai5_sk_left_pane_g

0xe8f4,	// (0x0005b6e4) ai5_sk_left_pane_t1

0x9a0c,	// (0x000567fc) ai5_sk_right_pane_g1

0xe902,	// (0x0005b6f2) ai5_sk_right_pane_g2

0xe90a,	// (0x0005b6fa) ai5_sk_right_pane_g3

0xe912,	// (0x0005b702) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x0005cc7e) ai5_sk_right_pane_g

0xe91a,	// (0x0005b70a) ai5_sk_right_pane_t1

0x9a0c,	// (0x000567fc) ai5_sk_middle_pane_g1

0x9a04,	// (0x000567f4) ai5_sk_middle_pane_g2

0x9a24,	// (0x00056814) ai5_sk_middle_pane_g3

0xe90a,	// (0x0005b6fa) ai5_sk_middle_pane_g4

0xe8e4,	// (0x0005b6d4) ai5_sk_middle_pane_g5

0xe928,	// (0x0005b718) ai5_sk_middle_pane_g6

0xe930,	// (0x0005b720) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x0005cc87) ai5_sk_middle_pane_g

0x9517,	// (0x00056307) aid_touch_area_size_lc0_ParamLimits

0x9517,	// (0x00056307) aid_touch_area_size_lc0

0x6669,	// (0x00053459) cell_hwr_candidate_pane_t1_ParamLimits

0x9535,	// (0x00056325) aid_touch_navi_pane

0x9827,	// (0x00056617) status_dt_navi_pane_ParamLimits

0x9827,	// (0x00056617) status_dt_navi_pane

0x9834,	// (0x00056624) status_dt_sta_pane_ParamLimits

0x9834,	// (0x00056624) status_dt_sta_pane

0xe938,	// (0x0005b728) dt_sta_controll_pane

0xe945,	// (0x0005b735) dt_sta_indi_pane

0xe956,	// (0x0005b746) dt_sta_title_pane

0x766d,	// (0x0005445d) bg_dt_sta_indi_pane_ParamLimits

0x766d,	// (0x0005445d) bg_dt_sta_indi_pane

0xe969,	// (0x0005b759) dt_sta_battery_pane

0xe971,	// (0x0005b761) dt_sta_indi_pane_g1

0xe97a,	// (0x0005b76a) dt_sta_indi_pane_g2

0xe983,	// (0x0005b773) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x0005cc96) dt_sta_indi_pane_g

0xe98c,	// (0x0005b77c) dt_sta_signal_pane

0x7d0a,	// (0x00054afa) bg_dt_sta_title_pane_ParamLimits

0x7d0a,	// (0x00054afa) bg_dt_sta_title_pane

0xe995,	// (0x0005b785) dt_sta_title_pane_g1

0xe99d,	// (0x0005b78d) dt_sta_title_pane_t1_ParamLimits

0xe99d,	// (0x0005b78d) dt_sta_title_pane_t1

0x2442,	// (0x0004f232) bg_dt_sta_control_pane

0xe9b2,	// (0x0005b7a2) dt_sta_controll_pane_g1

0xe9bb,	// (0x0005b7ab) bg_dt_sta_title_pane_g1

0xe9c4,	// (0x0005b7b4) bg_dt_sta_title_pane_g2

0xe9cd,	// (0x0005b7bd) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x0005cc9d) bg_dt_sta_title_pane_g

0xc0a2,	// (0x00058e92) bg_dt_sta_indi_pane_g1

0xe9d6,	// (0x0005b7c6) dt_sta_signal_pane_g1

0xe9de,	// (0x0005b7ce) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x0005cca4) dt_sta_signal_pane_g

0xe9e6,	// (0x0005b7d6) dt_sta_battery_pane_g1

0xe9ef,	// (0x0005b7df) dt_sta_battery_pane_t1

0xc0a2,	// (0x00058e92) bg_dt_sta_control_pane_g1

0x8634,	// (0x00055424) fep_china_uni_eep_pane

0x863c,	// (0x0005542c) fep_china_uni_entry_pane_ParamLimits

0x864c,	// (0x0005543c) popup_fep_china_uni_window_g1_ParamLimits

0x865c,	// (0x0005544c) popup_fep_china_uni_window_g2_ParamLimits

0x865c,	// (0x0005544c) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0005c52a) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0005c52a) popup_fep_china_uni_window_g

0xe9fe,	// (0x0005b7ee) fep_china_uni_eep_pane_g1

0xea06,	// (0x0005b7f6) fep_china_uni_eep_pane_t1

0xe513,	// (0x0005b303) aid_touch_area_size_smil_player

0x968d,	// (0x0005647d) lc0_clock_pane

0x988b,	// (0x0005667b) status_pane_g5_ParamLimits

0x988b,	// (0x0005667b) status_pane_g5

0x907b,	// (0x00055e6b) popup_keymap_window

0x9849,	// (0x00056639) status_icon_pane

0xe673,	// (0x0005b463) cell_ai5_widget_pane_g3_ParamLimits

0xe692,	// (0x0005b482) cell_ai5_widget_pane_g4_ParamLimits

0xe69e,	// (0x0005b48e) cell_ai5_widget_pane_g5_ParamLimits

0xe6c4,	// (0x0005b4b4) cell_ai5_widget_pane_g8_ParamLimits

0xe6c4,	// (0x0005b4b4) cell_ai5_widget_pane_g8

0xe6d8,	// (0x0005b4c8) cell_ai5_widget_pane_g9_ParamLimits

0xe6d8,	// (0x0005b4c8) cell_ai5_widget_pane_g9

0xe6ec,	// (0x0005b4dc) cell_ai5_widget_pane_g10_ParamLimits

0xe6ec,	// (0x0005b4dc) cell_ai5_widget_pane_g10

0xea15,	// (0x0005b805) status_icon_pane_g1

0x2442,	// (0x0004f232) bg_popup_sub_pane_cp13

0xea1d,	// (0x0005b80d) popup_keymap_window_t1

0x8e11,	// (0x00055c01) control_pane_g6_ParamLimits

0x8e11,	// (0x00055c01) control_pane_g6

0x8e1e,	// (0x00055c0e) control_pane_g7_ParamLimits

0x8e1e,	// (0x00055c0e) control_pane_g7

0x8e2b,	// (0x00055c1b) control_pane_g8_ParamLimits

0x8e2b,	// (0x00055c1b) control_pane_g8

0xe938,	// (0x0005b728) dt_sta_controll_pane_ParamLimits

0xe945,	// (0x0005b735) dt_sta_indi_pane_ParamLimits

0xe956,	// (0x0005b746) dt_sta_title_pane_ParamLimits

0x7ba2,	// (0x00054992) aid_size_touch_scroll_bar_cale

0x4cb2,	// (0x00051aa2) popup_discreet_window_ParamLimits

0x4cb2,	// (0x00051aa2) popup_discreet_window

0x4d40,	// (0x00051b30) popup_sk_window

0xa0a2,	// (0x00056e92) bg_popup_sub_pane_cp28_ParamLimits

0xa0a2,	// (0x00056e92) bg_popup_sub_pane_cp28

0xea2b,	// (0x0005b81b) popup_discreet_window_g1_ParamLimits

0xea2b,	// (0x0005b81b) popup_discreet_window_g1

0xea4b,	// (0x0005b83b) popup_discreet_window_t1_ParamLimits

0xea4b,	// (0x0005b83b) popup_discreet_window_t1

0xea69,	// (0x0005b859) popup_discreet_window_t2_ParamLimits

0xea69,	// (0x0005b859) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x0005cca9) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x0005cca9) popup_discreet_window_t

0x72dd,	// (0x000540cd) popup_sk_window_g1

0x72e7,	// (0x000540d7) popup_sk_window_g2

0x0001,

0xfec0,	// (0x0005ccb0) popup_sk_window_g

0xeabb,	// (0x0005b8ab) popup_sk_window_t1

0xeac9,	// (0x0005b8b9) popup_sk_window_t1_copy1

0xe663,	// (0x0005b453) cell_ai5_widget_pane_g2_ParamLimits

0xe7c3,	// (0x0005b5b3) cell_ai5_widget_pane_t9_ParamLimits

0xe7c3,	// (0x0005b5b3) cell_ai5_widget_pane_t9

0x2442,	// (0x0004f232) main_fep_fshwr2_pane

0xead7,	// (0x0005b8c7) aid_fshwr2_btn_pane

0xeadf,	// (0x0005b8cf) aid_fshwr2_syb_pane

0xeae7,	// (0x0005b8d7) aid_fshwr2_txt_pane

0xeaef,	// (0x0005b8df) fshwr2_func_candi_pane

0xeaf9,	// (0x0005b8e9) fshwr2_hwr_syb_pane

0xeb03,	// (0x0005b8f3) fshwr2_icf_pane

0x2442,	// (0x0004f232) fshwr2_icf_bg_pane

0xeb25,	// (0x0005b915) fshwr2_icf_pane_t1_ParamLimits

0xeb25,	// (0x0005b915) fshwr2_icf_pane_t1

0xc0a2,	// (0x00058e92) fshwr2_func_candi_pane_g1

0xeb3c,	// (0x0005b92c) fshwr2_func_candi_row_pane_ParamLimits

0xeb3c,	// (0x0005b92c) fshwr2_func_candi_row_pane

0xeb4d,	// (0x0005b93d) cell_fshwr2_syb_pane_ParamLimits

0xeb4d,	// (0x0005b93d) cell_fshwr2_syb_pane

0xc32c,	// (0x0005911c) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc32c,	// (0x0005911c) fshwr2_hwr_syb_pane_g1

0x2442,	// (0x0004f232) bg_popup_call_pane_cp01

0xeb67,	// (0x0005b957) fshwr2_func_candi_cell_pane_ParamLimits

0xeb67,	// (0x0005b957) fshwr2_func_candi_cell_pane

0xeb99,	// (0x0005b989) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb99,	// (0x0005b989) fshwr2_func_candi_cell_bg_pane

0xebb3,	// (0x0005b9a3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebb3,	// (0x0005b9a3) fshwr2_func_candi_cell_pane_g1

0xebd3,	// (0x0005b9c3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebd3,	// (0x0005b9c3) fshwr2_func_candi_cell_pane_t1

0x2442,	// (0x0004f232) bg_button_pane_cp08

0x8b36,	// (0x00055926) cell_fshwr2_syb_bg_pane

0xebe6,	// (0x0005b9d6) cell_fshwr2_syb_bg_pane_g1

0xebee,	// (0x0005b9de) cell_fshwr2_syb_bg_pane_t1

0x7d0a,	// (0x00054afa) main_tmo_pane

0xabcc,	// (0x000579bc) uni_indicator_pane_g1_ParamLimits

0xabe1,	// (0x000579d1) uni_indicator_pane_g2_ParamLimits

0xabf7,	// (0x000579e7) uni_indicator_pane_g3_ParamLimits

0xac0d,	// (0x000579fd) uni_indicator_pane_g4_ParamLimits

0xac0d,	// (0x000579fd) uni_indicator_pane_g4

0xac21,	// (0x00057a11) uni_indicator_pane_g5_ParamLimits

0xac21,	// (0x00057a11) uni_indicator_pane_g5

0xac35,	// (0x00057a25) uni_indicator_pane_g6_ParamLimits

0xac35,	// (0x00057a25) uni_indicator_pane_g6

0xf937,	// (0x0005c727) uni_indicator_pane_g_ParamLimits

0xd5ae,	// (0x0005a39e) popup_tmo_note_window_ParamLimits

0xd5ae,	// (0x0005a39e) popup_tmo_note_window

0x2442,	// (0x0004f232) fshwr2_bg_pane

0xebc4,	// (0x0005b9b4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc4,	// (0x0005b9b4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x0005ccb5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x0005ccb5) fshwr2_func_candi_cell_pane_g

0xc0a2,	// (0x00058e92) bg_popup_window_pane_cp01

0xebfd,	// (0x0005b9ed) bg_popup_window_pane_g1_cp01

0xec06,	// (0x0005b9f6) bg_popup_window_pane_cp22_ParamLimits

0xec06,	// (0x0005b9f6) bg_popup_window_pane_cp22

0xec14,	// (0x0005ba04) listscroll_tmo_link_pane_ParamLimits

0xec14,	// (0x0005ba04) listscroll_tmo_link_pane

0xec54,	// (0x0005ba44) popup_tmo_note_window_g1_ParamLimits

0xec54,	// (0x0005ba44) popup_tmo_note_window_g1

0xec61,	// (0x0005ba51) tmo_note_info_pane_ParamLimits

0xec61,	// (0x0005ba51) tmo_note_info_pane

0xec7b,	// (0x0005ba6b) list_tmo_note_info_pane_g1_ParamLimits

0xec7b,	// (0x0005ba6b) list_tmo_note_info_pane_g1

0xec92,	// (0x0005ba82) list_tmo_note_info_pane_g2_ParamLimits

0xec92,	// (0x0005ba82) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x0005ccba) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x0005ccba) list_tmo_note_info_pane_g

0xecae,	// (0x0005ba9e) list_tmo_note_info_text_pane_ParamLimits

0xecae,	// (0x0005ba9e) list_tmo_note_info_text_pane

0xed33,	// (0x0005bb23) list_tmo_link_pane

0xed40,	// (0x0005bb30) scroll_pane_cp20

0xed4d,	// (0x0005bb3d) list_single_tmo_link_pane_ParamLimits

0xed4d,	// (0x0005bb3d) list_single_tmo_link_pane

0xed5d,	// (0x0005bb4d) list_single_tmo_link_pane_t1

0xed6b,	// (0x0005bb5b) list_tmo_note_info_text_pane_t1_ParamLimits

0xed6b,	// (0x0005bb5b) list_tmo_note_info_text_pane_t1

0x7dd9,	// (0x00054bc9) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7dd9,	// (0x00054bc9) aid_size_touch_scroll_bar_cp01

0x54bb,	// (0x000522ab) aid_size_touch_slider_marker

0x4d28,	// (0x00051b18) popup_settings_window_ParamLimits

0x4d28,	// (0x00051b18) popup_settings_window

0x5c1d,	// (0x00052a0d) popup_candi_list_indi_window

0x9535,	// (0x00056325) aid_touch_navi_pane_ParamLimits

0x6aad,	// (0x0005389d) rs_clock_indi_pane

0x6ab6,	// (0x000538a6) sctrl_sk_bottom_pane_ParamLimits

0x6ac7,	// (0x000538b7) sctrl_sk_top_pane_ParamLimits

0x6bc8,	// (0x000539b8) popup_fep_tooltip_window

0xe627,	// (0x0005b417) aid_size_cell_widget_grid_ParamLimits

0xe657,	// (0x0005b447) cell_ai5_widget_pane_g1_ParamLimits

0xe657,	// (0x0005b447) cell_ai5_widget_pane_g1

0xe6aa,	// (0x0005b49a) cell_ai5_widget_pane_g6_ParamLimits

0xe6b8,	// (0x0005b4a8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x0005cc38) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0005cc38) cell_ai5_widget_pane_g

0xe7e7,	// (0x0005b5d7) cell_ai5_widget_pane_t10_ParamLimits

0xe7e7,	// (0x0005b5d7) cell_ai5_widget_pane_t10

0xe7fd,	// (0x0005b5ed) grid_ai5_widget_pane_ParamLimits

0xe89e,	// (0x0005b68e) cell_contacts_ai5_widget_pane_ParamLimits

0xe89e,	// (0x0005b68e) cell_contacts_ai5_widget_pane

0xea7e,	// (0x0005b86e) popup_discreet_window_t3_ParamLimits

0xea7e,	// (0x0005b86e) popup_discreet_window_t3

0xeb0d,	// (0x0005b8fd) popup_fshwr2_char_preview_window_ParamLimits

0xeb0d,	// (0x0005b8fd) popup_fshwr2_char_preview_window

0xeccc,	// (0x0005babc) tmo_note_info_pane_t1

0xece1,	// (0x0005bad1) tmo_note_info_pane_t2

0xecfa,	// (0x0005baea) tmo_note_info_pane_t3

0xed0f,	// (0x0005baff) tmo_note_info_pane_t4

0xed21,	// (0x0005bb11) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x0005ccbf) tmo_note_info_pane_t

0xed33,	// (0x0005bb23) list_tmo_link_pane_ParamLimits

0xed40,	// (0x0005bb30) scroll_pane_cp20_ParamLimits

0x2442,	// (0x0004f232) bg_popup_fep_char_preview_window_cp01

0xed84,	// (0x0005bb74) popup_fshwr2_char_preview_window_t1

0xed92,	// (0x0005bb82) popup_candi_list_indi_window_g1

0xed9b,	// (0x0005bb8b) bg_cell_contacts_ai5_widget_pane

0xeda7,	// (0x0005bb97) cell_contacts_ai5_widget_pane_g1

0xedbb,	// (0x0005bbab) cell_contacts_ai5_widget_pane_g2

0xedca,	// (0x0005bbba) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x0005ccca) cell_contacts_ai5_widget_pane_g

0xeddd,	// (0x0005bbcd) cell_contacts_ai5_widget_pane_t1

0x7d0a,	// (0x00054afa) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee57,	// (0x0005bc47) settings_container_pane

0x8b36,	// (0x00055926) listscroll_set_pane_copy1

0xb7a6,	// (0x00058596) scroll_pane_cp121_copy1

0xee63,	// (0x0005bc53) set_content_pane_copy1

0xee6b,	// (0x0005bc5b) aid_height_set_list_copy1_ParamLimits

0xee6b,	// (0x0005bc5b) aid_height_set_list_copy1

0xae35,	// (0x00057c25) aid_size_parent_copy1_ParamLimits

0xae35,	// (0x00057c25) aid_size_parent_copy1

0xee77,	// (0x0005bc67) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee77,	// (0x0005bc67) button_value_adjust_pane_cp6_copy1

0x8eb4,	// (0x00055ca4) list_highlight_pane_cp2_copy1_ParamLimits

0x8eb4,	// (0x00055ca4) list_highlight_pane_cp2_copy1

0xee8b,	// (0x0005bc7b) list_set_pane_copy1_ParamLimits

0xee8b,	// (0x0005bc7b) list_set_pane_copy1

0xedf2,	// (0x0005bbe2) main_pane_set_t1_copy1_ParamLimits

0xedf2,	// (0x0005bbe2) main_pane_set_t1_copy1

0xee2c,	// (0x0005bc1c) main_pane_set_t2_copy1_ParamLimits

0xee2c,	// (0x0005bc1c) main_pane_set_t2_copy1

0xef52,	// (0x0005bd42) main_pane_set_t3_copy1

0xef60,	// (0x0005bd50) main_pane_set_t4_copy1

0xee4b,	// (0x0005bc3b) set_content_pane_g1_copy1_ParamLimits

0xee4b,	// (0x0005bc3b) set_content_pane_g1_copy1

0xef6e,	// (0x0005bd5e) setting_code_pane_copy1

0xef78,	// (0x0005bd68) setting_slider_graphic_pane_copy1

0xef78,	// (0x0005bd68) setting_slider_pane_copy1

0xef78,	// (0x0005bd68) setting_text_pane_copy1

0xef82,	// (0x0005bd72) setting_volume_pane_copy1

0xef8b,	// (0x0005bd7b) settings_code_pane_cp2_copy1

0xef93,	// (0x0005bd83) settings_code_pane_cp_copy1_ParamLimits

0xef93,	// (0x0005bd83) settings_code_pane_cp_copy1

0xefa7,	// (0x0005bd97) volume_set_pane_copy1

0xefb3,	// (0x0005bda3) volume_set_pane_g10_copy1

0xefbf,	// (0x0005bdaf) volume_set_pane_g1_copy1

0xefc9,	// (0x0005bdb9) volume_set_pane_g2_copy1

0xefd3,	// (0x0005bdc3) volume_set_pane_g3_copy1

0xefdd,	// (0x0005bdcd) volume_set_pane_g4_copy1

0xefe7,	// (0x0005bdd7) volume_set_pane_g5_copy1

0xeff1,	// (0x0005bde1) volume_set_pane_g6_copy1

0xeffb,	// (0x0005bdeb) volume_set_pane_g7_copy1

0xf005,	// (0x0005bdf5) volume_set_pane_g8_copy1

0xf00f,	// (0x0005bdff) volume_set_pane_g9_copy1

0x73e3,	// (0x000541d3) bg_set_opt_pane_cp_copy1_ParamLimits

0x73e3,	// (0x000541d3) bg_set_opt_pane_cp_copy1

0xf019,	// (0x0005be09) setting_slider_pane_t1_copy1_ParamLimits

0xf019,	// (0x0005be09) setting_slider_pane_t1_copy1

0xf037,	// (0x0005be27) setting_slider_pane_t2_copy1_ParamLimits

0xf037,	// (0x0005be27) setting_slider_pane_t2_copy1

0xf051,	// (0x0005be41) setting_slider_pane_t3_copy1_ParamLimits

0xf051,	// (0x0005be41) setting_slider_pane_t3_copy1

0xf069,	// (0x0005be59) slider_set_pane_copy1_ParamLimits

0xf069,	// (0x0005be59) slider_set_pane_copy1

0x7d71,	// (0x00054b61) set_opt_bg_pane_g1_copy2

0x7d79,	// (0x00054b69) set_opt_bg_pane_g2_copy2

0xf07f,	// (0x0005be6f) set_opt_bg_pane_g3_copy2

0x7d89,	// (0x00054b79) set_opt_bg_pane_g4_copy2

0x7d91,	// (0x00054b81) set_opt_bg_pane_g5_copy2

0x7d99,	// (0x00054b89) set_opt_bg_pane_g6_copy2

0xf089,	// (0x0005be79) set_opt_bg_pane_g7_copy2

0xf093,	// (0x0005be83) set_opt_bg_pane_g8_copy2

0xf09d,	// (0x0005be8d) set_opt_bg_pane_g9_copy2

0xf0a7,	// (0x0005be97) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0a7,	// (0x0005be97) aid_size_touch_slider_mark_copy1

0xf0bb,	// (0x0005beab) slider_set_pane_g1_copy1

0xf0c4,	// (0x0005beb4) slider_set_pane_g2_copy1

0xba08,	// (0x000587f8) slider_set_pane_g3_copy1_ParamLimits

0xba08,	// (0x000587f8) slider_set_pane_g3_copy1

0xba1c,	// (0x0005880c) slider_set_pane_g4_copy1_ParamLimits

0xba1c,	// (0x0005880c) slider_set_pane_g4_copy1

0xba34,	// (0x00058824) slider_set_pane_g5_copy1_ParamLimits

0xba34,	// (0x00058824) slider_set_pane_g5_copy1

0xba08,	// (0x000587f8) slider_set_pane_g6_copy1_ParamLimits

0xba08,	// (0x000587f8) slider_set_pane_g6_copy1

0xf0cc,	// (0x0005bebc) slider_set_pane_g7_copy1_ParamLimits

0xf0cc,	// (0x0005bebc) slider_set_pane_g7_copy1

0x2456,	// (0x0004f246) bg_set_opt_pane_cp2_copy1

0xf0e2,	// (0x0005bed2) setting_slider_graphic_pane_g1_copy1

0xf0eb,	// (0x0005bedb) setting_slider_graphic_pane_t1_copy1

0xf0fb,	// (0x0005beeb) setting_slider_graphic_pane_t2_copy1

0xf10b,	// (0x0005befb) slider_set_pane_cp_copy1

0xf11b,	// (0x0005bf0b) input_focus_pane_cp1_copy1

0xf124,	// (0x0005bf14) list_set_text_pane_copy1

0xf12c,	// (0x0005bf1c) setting_text_pane_g1_copy1

0x3fe8,	// (0x00050dd8) set_text_pane_t1_copy1

0xf11b,	// (0x0005bf0b) input_focus_pane_cp2_copy1

0xf12c,	// (0x0005bf1c) setting_code_pane_g1_copy1

0xf135,	// (0x0005bf25) setting_code_pane_t1_copy1

0xf143,	// (0x0005bf33) list_set_graphic_pane_copy1

0x2456,	// (0x0004f246) bg_set_opt_pane_cp4_copy1

0x8830,	// (0x00055620) list_set_graphic_pane_g1_copy1_ParamLimits

0x8830,	// (0x00055620) list_set_graphic_pane_g1_copy1

0xf155,	// (0x0005bf45) list_set_graphic_pane_g2_copy1

0x8848,	// (0x00055638) list_set_graphic_pane_t1_copy1_ParamLimits

0x8848,	// (0x00055638) list_set_graphic_pane_t1_copy1

0xc0a2,	// (0x00058e92) rs_clock_indi_pane_g1

0xf15d,	// (0x0005bf4d) rs_clock_indi_pane_t1

0xf16b,	// (0x0005bf5b) rs_indi_pane

0xf173,	// (0x0005bf63) rs_indi_pane_g1

0xf17c,	// (0x0005bf6c) rs_indi_pane_g2

0xf185,	// (0x0005bf75) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x0005ccd1) rs_indi_pane_g

0x8b36,	// (0x00055926) bg_popup_preview_window_pane_cp03

0xf18e,	// (0x0005bf7e) popup_fep_tooltip_window_t1

0xcd56,	// (0x00059b46) popup_note2_window_g2_ParamLimits

0xcd56,	// (0x00059b46) popup_note2_window_g2

0x0001,

0xfc7a,	// (0x0005ca6a) popup_note2_window_g_ParamLimits

0xfc7a,	// (0x0005ca6a) popup_note2_window_g

0xd25e,	// (0x0005a04e) bg_popup_sub_pane_cp11_ParamLimits

0xd26b,	// (0x0005a05b) cell_ai3_links_pane_g1_ParamLimits

0xd282,	// (0x0005a072) cell_ai3_links_pane_t1

0x3fe8,	// (0x00050dd8) set_text_pane_t1_copy1_ParamLimits

0x8a43,	// (0x00055833) cell_graphic_popup_pane_cp2_ParamLimits

0x8a43,	// (0x00055833) cell_graphic_popup_pane_cp2

0xf19c,	// (0x0005bf8c) cell_graphic_popup_pane_g1_cp2

0x79b5,	// (0x000547a5) cell_graphic_popup_pane_g2_cp2

0xf1a4,	// (0x0005bf94) cell_graphic_popup_pane_g3_cp2

0xf1ac,	// (0x0005bf9c) cell_graphic_popup_pane_t2_cp2

0x79c6,	// (0x000547b6) grid_highlight_pane_cp3_cp2

0x828b,	// (0x0005507b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7d0a,	// (0x00054afa) main_tmo_pane_ParamLimits

0xd5a2,	// (0x0005a392) popup_tmo_big_image_note_window

0xe647,	// (0x0005b437) cell_ai5_widget_list_pane

0xe64f,	// (0x0005b43f) cell_ai5_widget_lrg_icon_pane

0xeccc,	// (0x0005babc) tmo_note_info_pane_t1_ParamLimits

0xece1,	// (0x0005bad1) tmo_note_info_pane_t2_ParamLimits

0xecfa,	// (0x0005baea) tmo_note_info_pane_t3_ParamLimits

0xed0f,	// (0x0005baff) tmo_note_info_pane_t4_ParamLimits

0xed21,	// (0x0005bb11) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x0005ccbf) tmo_note_info_pane_t_ParamLimits

0xee57,	// (0x0005bc47) settings_container_pane_ParamLimits

0xf113,	// (0x0005bf03) indicator_popup_pane_cp5

0xf113,	// (0x0005bf03) indicator_popup_pane_cp6

0xf143,	// (0x0005bf33) list_set_graphic_pane_copy1_ParamLimits

0x2442,	// (0x0004f232) bg_popup_window_pane_cp23

0xf1ba,	// (0x0005bfaa) popup_tmo_big_image_note_window_g1

0xf1c6,	// (0x0005bfb6) popup_tmo_big_image_note_window_t1

0xf1d6,	// (0x0005bfc6) popup_tmo_big_image_note_window_t2

0xf1e6,	// (0x0005bfd6) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x0005ccd8) popup_tmo_big_image_note_window_t

0xf1f6,	// (0x0005bfe6) cell_ai5_widget_lrg_icon_pane_g1

0xf1fe,	// (0x0005bfee) cell_ai5_widget_lrg_icon_pane_t1

0xf20c,	// (0x0005bffc) cell_ai5_widget_list_row_pane_ParamLimits

0xf20c,	// (0x0005bffc) cell_ai5_widget_list_row_pane

0xf225,	// (0x0005c015) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf225,	// (0x0005c015) cell_ai5_widget_list_row_pane_g1

0xf232,	// (0x0005c022) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf232,	// (0x0005c022) cell_ai5_widget_list_row_pane_t1

0xf24a,	// (0x0005c03a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf24a,	// (0x0005c03a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeef,	// (0x0005ccdf) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x0005ccdf) cell_ai5_widget_list_row_pane_t

0x4bd5,	// (0x000519c5) main_fep_vtchi_ss_pane

0xf25c,	// (0x0005c04c) popup_fep_char_pre_window

0xf264,	// (0x0005c054) popup_fep_ituss_window

0xf285,	// (0x0005c075) popup_fep_vkbss_window

0xf2a6,	// (0x0005c096) grid_vkbss_keypad_pane_ParamLimits

0xf2a6,	// (0x0005c096) grid_vkbss_keypad_pane

0xf2b6,	// (0x0005c0a6) ituss_keypad_pane

0xf2cf,	// (0x0005c0bf) aid_vkbss_key_offset_ParamLimits

0xf2cf,	// (0x0005c0bf) aid_vkbss_key_offset

0xf2db,	// (0x0005c0cb) cell_vkbss_key_pane_ParamLimits

0xf2db,	// (0x0005c0cb) cell_vkbss_key_pane

0xf2f1,	// (0x0005c0e1) bg_cell_vkbss_key_g1_ParamLimits

0xf2f1,	// (0x0005c0e1) bg_cell_vkbss_key_g1

0xf2fd,	// (0x0005c0ed) cell_vkbss_key_3p_pane_ParamLimits

0xf2fd,	// (0x0005c0ed) cell_vkbss_key_3p_pane

0xf317,	// (0x0005c107) cell_vkbss_key_g1_ParamLimits

0xf317,	// (0x0005c107) cell_vkbss_key_g1

0xf331,	// (0x0005c121) cell_vkbss_key_t1_ParamLimits

0xf331,	// (0x0005c121) cell_vkbss_key_t1

0xf35c,	// (0x0005c14c) cell_ituss_key_pane_ParamLimits

0xf35c,	// (0x0005c14c) cell_ituss_key_pane

0xf36c,	// (0x0005c15c) bg_cell_ituss_key_g1_ParamLimits

0xf36c,	// (0x0005c15c) bg_cell_ituss_key_g1

0xf378,	// (0x0005c168) cell_ituss_key_pane_g1_ParamLimits

0xf378,	// (0x0005c168) cell_ituss_key_pane_g1

0xf384,	// (0x0005c174) cell_ituss_key_pane_g2_ParamLimits

0xf384,	// (0x0005c174) cell_ituss_key_pane_g2

0x0001,

0xfef4,	// (0x0005cce4) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x0005cce4) cell_ituss_key_pane_g

0xf3a0,	// (0x0005c190) cell_ituss_key_t1_ParamLimits

0xf3a0,	// (0x0005c190) cell_ituss_key_t1

0xf3ce,	// (0x0005c1be) cell_ituss_key_t2_ParamLimits

0xf3ce,	// (0x0005c1be) cell_ituss_key_t2

0xf3ff,	// (0x0005c1ef) cell_ituss_key_t3_ParamLimits

0xf3ff,	// (0x0005c1ef) cell_ituss_key_t3

0xf430,	// (0x0005c220) cell_ituss_key_t4_ParamLimits

0xf430,	// (0x0005c220) cell_ituss_key_t4

0x0003,

0xfef9,	// (0x0005cce9) cell_ituss_key_t_ParamLimits

0xfef9,	// (0x0005cce9) cell_ituss_key_t

0xf461,	// (0x0005c251) cell_vkbss_key_3p_pane_g1

0xf469,	// (0x0005c259) cell_vkbss_key_3p_pane_g2

0xf471,	// (0x0005c261) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x0005ccf2) cell_vkbss_key_3p_pane_g

0x2442,	// (0x0004f232) bg_popup_fep_char_preview_window_cp02

0xf479,	// (0x0005c269) popup_fep_char_pre_window_t1

0xe61d,	// (0x0005b40d) main_ai5_sk_pane

0xed9b,	// (0x0005bb8b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda7,	// (0x0005bb97) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedbb,	// (0x0005bbab) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedca,	// (0x0005bbba) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x0005ccca) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeddd,	// (0x0005bbcd) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7d0a,	// (0x00054afa) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf488,	// (0x0005c278) main_ai5_sk_pane_g1

0x9eda,	// (0x00056cca) popup_query_code_window_g1

0xf27a,	// (0x0005c06a) popup_fep_vkb_icf_pane

0xf290,	// (0x0005c080) popup_fep_vtchi_icf_pane

0x7d0a,	// (0x00054afa) bg_icf_pane

0xf4a0,	// (0x0005c290) list_vkb_icf_pane

0x7d0a,	// (0x00054afa) bg_icf_pane_cp01

0xd561,	// (0x0005a351) vtchi_icf_list_pane

0xf4c0,	// (0x0005c2b0) list_vkb_icf_pane_t1_ParamLimits

0xf4c0,	// (0x0005c2b0) list_vkb_icf_pane_t1

0xf4d7,	// (0x0005c2c7) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x0005c2c7) vtchi_icf_list_pane_t1

0xf264,	// (0x0005c054) popup_fep_ituss_window_ParamLimits

0xf290,	// (0x0005c080) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b6,	// (0x0005c0a6) ituss_keypad_pane_ParamLimits

0xf2c6,	// (0x0005c0b6) ituss_sks_pane

0x7d0a,	// (0x00054afa) bg_icf_pane_ParamLimits

0xf491,	// (0x0005c281) icf_edit_indi_pane_ParamLimits

0xf491,	// (0x0005c281) icf_edit_indi_pane

0xf4a0,	// (0x0005c290) list_vkb_icf_pane_ParamLimits

0x7d0a,	// (0x00054afa) bg_icf_pane_cp01_ParamLimits

0xf4ac,	// (0x0005c29c) icf_edit_indi_pane_cp01_ParamLimits

0xf4ac,	// (0x0005c29c) icf_edit_indi_pane_cp01

0xf4b8,	// (0x0005c2a8) vtchi_query_pane

0xc32c,	// (0x0005911c) icf_edit_indi_pane_g1_ParamLimits

0xc32c,	// (0x0005911c) icf_edit_indi_pane_g1

0xf4f0,	// (0x0005c2e0) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x0005c2e0) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0005ccf9) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0005ccf9) icf_edit_indi_pane_g

0xf4fc,	// (0x0005c2ec) icf_edit_indi_pane_t1

0xf50a,	// (0x0005c2fa) bg_input_focus_pane_cp042

0x7b99,	// (0x00054989) vtchi_button_pane

0xf513,	// (0x0005c303) vtchi_query_pane_t1

0xf521,	// (0x0005c311) vtchi_query_pane_t2

0xf52f,	// (0x0005c31f) vtchi_query_pane_t3

0x0002,

0xff0e,	// (0x0005ccfe) vtchi_query_pane_t

0x2442,	// (0x0004f232) bg_button_pane_cp13

0xf53d,	// (0x0005c32d) vtchi_button_pane_g1

0xdaee,	// (0x0005a8de) ituss_sks_pane_g1

0xf545,	// (0x0005c335) ituss_sks_pane_g2

0x0001,

0xff15,	// (0x0005cd05) ituss_sks_pane_g

0xf54e,	// (0x0005c33e) ituss_sks_pane_t1

0xf55c,	// (0x0005c34c) ituss_sks_pane_t2

0x0001,

0xff1a,	// (0x0005cd0a) ituss_sks_pane_t

0xbb49,	// (0x00058939) indicator_nsta_pane_cp_g1

0xbb52,	// (0x00058942) indicator_nsta_pane_cp_g2

0xbb5a,	// (0x0005894a) indicator_nsta_pane_cp_g3

0xbb62,	// (0x00058952) indicator_nsta_pane_cp_g4

0xbb6a,	// (0x0005895a) indicator_nsta_pane_cp_g5

0xbb72,	// (0x00058962) indicator_nsta_pane_cp_g6

0x0005,

0xfab8,	// (0x0005c8a8) indicator_nsta_pane_cp_g

0xe249,	// (0x0005b039) cell_graphic2_pane_t2_ParamLimits

0xe249,	// (0x0005b039) cell_graphic2_pane_t2

0x0001,

0xfdd1,	// (0x0005cbc1) cell_graphic2_pane_t_ParamLimits

0xfdd1,	// (0x0005cbc1) cell_graphic2_pane_t
};


const AknLayoutScalable_Avkon::SCdlImpl KCdlImpl = 
	{
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineRVC,
	&WindowLineVCR,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowLineVCR,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&WindowLineVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineCVR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&GetComponentTypeById,
	&GetParamLimitsById,
	&GetWindowComponentById,
	&GetTextComponentById,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
