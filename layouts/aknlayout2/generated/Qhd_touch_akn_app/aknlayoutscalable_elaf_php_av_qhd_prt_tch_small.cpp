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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001aae9 };

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
0x7db8,	// (0x000228a1) Screen

0x7dcc,	// (0x000228b5) application_window_ParamLimits

0x7dcc,	// (0x000228b5) application_window

0x7de6,	// (0x000228cf) screen_g1

0x5aaa,	// (0x00020593) area_bottom_pane_ParamLimits

0x5aaa,	// (0x00020593) area_bottom_pane

0x5b6a,	// (0x00020653) area_top_pane_ParamLimits

0x5b6a,	// (0x00020653) area_top_pane

0x5bfe,	// (0x000206e7) main_pane_ParamLimits

0x5bfe,	// (0x000206e7) main_pane

0x7df0,	// (0x000228d9) misc_graphics

0x97ce,	// (0x000242b7) battery_pane_ParamLimits

0x97ce,	// (0x000242b7) battery_pane

0xa4ae,	// (0x00024f97) bg_status_flat_pane_g8

0xa4b6,	// (0x00024f9f) bg_status_flat_pane_g9

0x9890,	// (0x00024379) context_pane_ParamLimits

0x9890,	// (0x00024379) context_pane

0x99a6,	// (0x0002448f) navi_pane_ParamLimits

0x99a6,	// (0x0002448f) navi_pane

0x9a2a,	// (0x00024513) signal_pane_ParamLimits

0x9a2a,	// (0x00024513) signal_pane

0x0008,

0xf86d,	// (0x0002a356) bg_status_flat_pane_g

0x9a97,	// (0x00024580) status_pane_g1_ParamLimits

0x9a97,	// (0x00024580) status_pane_g1

0x9aab,	// (0x00024594) status_pane_g2_ParamLimits

0x9aab,	// (0x00024594) status_pane_g2

0x9ab7,	// (0x000245a0) status_pane_g3_ParamLimits

0x9ab7,	// (0x000245a0) status_pane_g3

0x0004,

0xf79b,	// (0x0002a284) status_pane_g_ParamLimits

0xf79b,	// (0x0002a284) status_pane_g

0x9aeb,	// (0x000245d4) title_pane_ParamLimits

0x9aeb,	// (0x000245d4) title_pane

0x9b28,	// (0x00024611) uni_indicator_pane_ParamLimits

0x9b28,	// (0x00024611) uni_indicator_pane

0x96fe,	// (0x000241e7) bg_list_pane_ParamLimits

0x96fe,	// (0x000241e7) bg_list_pane

0x5094,	// (0x0001fb7d) find_pane

0x971e,	// (0x00024207) listscroll_app_pane_ParamLimits

0x971e,	// (0x00024207) listscroll_app_pane

0x972a,	// (0x00024213) listscroll_form_pane

0x509c,	// (0x0001fb85) listscroll_gen_pane_ParamLimits

0x509c,	// (0x0001fb85) listscroll_gen_pane

0x64d3,	// (0x00020fbc) listscroll_set_pane

0x8946,	// (0x0002342f) main_idle_act_pane

0x93fa,	// (0x00023ee3) main_idle_trad_pane

0x93fa,	// (0x00023ee3) main_list_empty_pane

0x971e,	// (0x00024207) main_midp_pane

0x9744,	// (0x0002422d) main_pane_g1_ParamLimits

0x9744,	// (0x0002422d) main_pane_g1

0x64db,	// (0x00020fc4) popup_ai_message_window_ParamLimits

0x64db,	// (0x00020fc4) popup_ai_message_window

0x6581,	// (0x0002106a) popup_fep_china_uni_window_ParamLimits

0x6581,	// (0x0002106a) popup_fep_china_uni_window

0x65dd,	// (0x000210c6) popup_fep_japan_candidate_window_ParamLimits

0x65dd,	// (0x000210c6) popup_fep_japan_candidate_window

0x65fd,	// (0x000210e6) popup_fep_japan_predictive_window_ParamLimits

0x65fd,	// (0x000210e6) popup_fep_japan_predictive_window

0x662d,	// (0x00021116) popup_find_window

0x663a,	// (0x00021123) popup_grid_graphic_window_ParamLimits

0x663a,	// (0x00021123) popup_grid_graphic_window

0x6664,	// (0x0002114d) popup_large_graphic_colour_window

0x668a,	// (0x00021173) popup_menu_window_ParamLimits

0x668a,	// (0x00021173) popup_menu_window

0x6842,	// (0x0002132b) popup_note_image_window

0x682e,	// (0x00021317) popup_note_wait_window_ParamLimits

0x682e,	// (0x00021317) popup_note_wait_window

0x682e,	// (0x00021317) popup_note_window_ParamLimits

0x682e,	// (0x00021317) popup_note_window

0x6898,	// (0x00021381) popup_query_code_window_ParamLimits

0x6898,	// (0x00021381) popup_query_code_window

0x68ac,	// (0x00021395) popup_query_data_code_window_ParamLimits

0x68ac,	// (0x00021395) popup_query_data_code_window

0x68c9,	// (0x000213b2) popup_query_data_window_ParamLimits

0x68c9,	// (0x000213b2) popup_query_data_window

0x68e5,	// (0x000213ce) popup_query_sat_info_window_ParamLimits

0x68e5,	// (0x000213ce) popup_query_sat_info_window

0x691e,	// (0x00021407) popup_snote_single_graphic_window_ParamLimits

0x691e,	// (0x00021407) popup_snote_single_graphic_window

0x691e,	// (0x00021407) popup_snote_single_text_window_ParamLimits

0x691e,	// (0x00021407) popup_snote_single_text_window

0x6933,	// (0x0002141c) popup_sub_window_general

0x6a63,	// (0x0002154c) popup_window_general_ParamLimits

0x6a63,	// (0x0002154c) popup_window_general

0x9752,	// (0x0002423b) power_save_pane

0x6365,	// (0x00020e4e) control_pane_g1_ParamLimits

0x6365,	// (0x00020e4e) control_pane_g1

0x638c,	// (0x00020e75) control_pane_g2_ParamLimits

0x638c,	// (0x00020e75) control_pane_g2

0x96c1,	// (0x000241aa) control_pane_g3_ParamLimits

0x96c1,	// (0x000241aa) control_pane_g3

0x0007,

0xf783,	// (0x0002a26c) control_pane_g_ParamLimits

0xf783,	// (0x0002a26c) control_pane_g

0x63d6,	// (0x00020ebf) control_pane_t1_ParamLimits

0x63d6,	// (0x00020ebf) control_pane_t1

0x642a,	// (0x00020f13) control_pane_t2_ParamLimits

0x642a,	// (0x00020f13) control_pane_t2

0x0002,

0xf794,	// (0x0002a27d) control_pane_t_ParamLimits

0xf794,	// (0x0002a27d) control_pane_t

0x95e6,	// (0x000240cf) navi_navi_volume_pane_cp1

0x95ee,	// (0x000240d7) status_small_icon_pane

0x95f6,	// (0x000240df) status_small_pane_g1_ParamLimits

0x95f6,	// (0x000240df) status_small_pane_g1

0x962a,	// (0x00024113) status_small_pane_g2_ParamLimits

0x962a,	// (0x00024113) status_small_pane_g2

0x9636,	// (0x0002411f) status_small_pane_g3_ParamLimits

0x9636,	// (0x0002411f) status_small_pane_g3

0x9642,	// (0x0002412b) status_small_pane_g4_ParamLimits

0x9642,	// (0x0002412b) status_small_pane_g4

0x964e,	// (0x00024137) status_small_pane_g5_ParamLimits

0x964e,	// (0x00024137) status_small_pane_g5

0x965c,	// (0x00024145) status_small_pane_g6_ParamLimits

0x965c,	// (0x00024145) status_small_pane_g6

0x0007,

0xf772,	// (0x0002a25b) status_small_pane_g_ParamLimits

0xf772,	// (0x0002a25b) status_small_pane_g

0x968b,	// (0x00024174) status_small_pane_t1

0x96ad,	// (0x00024196) status_small_wait_pane_ParamLimits

0x96ad,	// (0x00024196) status_small_wait_pane

0x8e6c,	// (0x00023955) aid_levels_signal_ParamLimits

0x8e6c,	// (0x00023955) aid_levels_signal

0x8e7e,	// (0x00023967) signal_pane_g1_ParamLimits

0x8e7e,	// (0x00023967) signal_pane_g1

0x8e93,	// (0x0002397c) signal_pane_g2_ParamLimits

0x8e93,	// (0x0002397c) signal_pane_g2

0x0003,

0xf703,	// (0x0002a1ec) signal_pane_g_ParamLimits

0xf703,	// (0x0002a1ec) signal_pane_g

0x8ece,	// (0x000239b7) context_pane_g1

0x7dfa,	// (0x000228e3) title_pane_g1

0x7e30,	// (0x00022919) title_pane_t1

0x7e98,	// (0x00022981) title_pane_t2

0x7ebe,	// (0x000229a7) title_pane_t3

0x0002,

0xf557,	// (0x0002a040) title_pane_t

0x9b40,	// (0x00024629) aid_levels_battery_ParamLimits

0x9b40,	// (0x00024629) aid_levels_battery

0x9b54,	// (0x0002463d) battery_pane_g1_ParamLimits

0x9b54,	// (0x0002463d) battery_pane_g1

0x9b6a,	// (0x00024653) battery_pane_g2_ParamLimits

0x9b6a,	// (0x00024653) battery_pane_g2

0x0001,

0xf7a6,	// (0x0002a28f) battery_pane_g_ParamLimits

0xf7a6,	// (0x0002a28f) battery_pane_g

0xade4,	// (0x000258cd) uni_indicator_pane_g1

0xadf7,	// (0x000258e0) uni_indicator_pane_g2

0xae09,	// (0x000258f2) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0002a3fe) uni_indicator_pane_g

0x926c,	// (0x00023d55) navi_icon_pane_ParamLimits

0x926c,	// (0x00023d55) navi_icon_pane

0x91aa,	// (0x00023c93) navi_midp_pane

0x9288,	// (0x00023d71) navi_navi_pane

0x9292,	// (0x00023d7b) navi_text_pane_ParamLimits

0x9292,	// (0x00023d7b) navi_text_pane

0x7de6,	// (0x000228cf) status_small_wait_pane_g1

0x8313,	// (0x00022dfc) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0002a3f9) status_small_wait_pane_g

0xab09,	// (0x000255f2) navi_navi_icon_text_pane

0xab11,	// (0x000255fa) navi_navi_pane_g1_ParamLimits

0xab11,	// (0x000255fa) navi_navi_pane_g1

0xab23,	// (0x0002560c) navi_navi_pane_g2_ParamLimits

0xab23,	// (0x0002560c) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x0002a3c7) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x0002a3c7) navi_navi_pane_g

0xab35,	// (0x0002561e) navi_navi_tabs_pane

0xab3e,	// (0x00025627) navi_navi_text_pane

0xab09,	// (0x000255f2) navi_navi_volume_pane

0xaae5,	// (0x000255ce) navi_text_pane_t1

0xaad9,	// (0x000255c2) navi_icon_pane_g1

0xaa2c,	// (0x00025515) navi_navi_text_pane_t1

0x6ced,	// (0x000217d6) navi_navi_volume_pane_g1

0x6cf5,	// (0x000217de) volume_small_pane

0xa992,	// (0x0002547b) navi_navi_icon_text_pane_g1

0xa99a,	// (0x00025483) navi_navi_icon_text_pane_t1

0x9288,	// (0x00023d71) navi_tabs_2_long_pane

0x9288,	// (0x00023d71) navi_tabs_2_pane

0x9288,	// (0x00023d71) navi_tabs_3_long_pane

0x9288,	// (0x00023d71) navi_tabs_3_pane

0x9288,	// (0x00023d71) navi_tabs_4_pane

0x6ccd,	// (0x000217b6) tabs_2_active_pane_ParamLimits

0x6ccd,	// (0x000217b6) tabs_2_active_pane

0x6cdd,	// (0x000217c6) tabs_2_passive_pane_ParamLimits

0x6cdd,	// (0x000217c6) tabs_2_passive_pane

0x6c9b,	// (0x00021784) tabs_3_active_pane_ParamLimits

0x6c9b,	// (0x00021784) tabs_3_active_pane

0x6cab,	// (0x00021794) tabs_3_passive_pane_ParamLimits

0x6cab,	// (0x00021794) tabs_3_passive_pane

0x6cbc,	// (0x000217a5) tabs_3_passive_pane_cp_ParamLimits

0x6cbc,	// (0x000217a5) tabs_3_passive_pane_cp

0x6c57,	// (0x00021740) tabs_4_active_pane_ParamLimits

0x6c57,	// (0x00021740) tabs_4_active_pane

0x6c68,	// (0x00021751) tabs_4_passive_pane_ParamLimits

0x6c68,	// (0x00021751) tabs_4_passive_pane

0x6c79,	// (0x00021762) tabs_4_passive_pane_cp_ParamLimits

0x6c79,	// (0x00021762) tabs_4_passive_pane_cp

0x6c8a,	// (0x00021773) tabs_4_passive_pane_cp2_ParamLimits

0x6c8a,	// (0x00021773) tabs_4_passive_pane_cp2

0x6c33,	// (0x0002171c) tabs_2_long_active_pane_ParamLimits

0x6c33,	// (0x0002171c) tabs_2_long_active_pane

0x6c45,	// (0x0002172e) tabs_2_long_passive_pane_ParamLimits

0x6c45,	// (0x0002172e) tabs_2_long_passive_pane

0x6bf4,	// (0x000216dd) tabs_3_long_active_pane_ParamLimits

0x6bf4,	// (0x000216dd) tabs_3_long_active_pane

0x6c07,	// (0x000216f0) tabs_3_long_passive_pane_ParamLimits

0x6c07,	// (0x000216f0) tabs_3_long_passive_pane

0x6c20,	// (0x00021709) tabs_3_long_passive_pane_cp_ParamLimits

0x6c20,	// (0x00021709) tabs_3_long_passive_pane_cp

0x6b9a,	// (0x00021683) volume_small_pane_g1

0x6ba3,	// (0x0002168c) volume_small_pane_g2

0x6bac,	// (0x00021695) volume_small_pane_g3

0x6bb5,	// (0x0002169e) volume_small_pane_g4

0x6bbe,	// (0x000216a7) volume_small_pane_g5

0x6bc7,	// (0x000216b0) volume_small_pane_g6

0x6bd0,	// (0x000216b9) volume_small_pane_g7

0x6bd9,	// (0x000216c2) volume_small_pane_g8

0x6be2,	// (0x000216cb) volume_small_pane_g9

0x6beb,	// (0x000216d4) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0002a393) volume_small_pane_g

0x7ed0,	// (0x000229b9) bg_active_tab_pane_cp2_ParamLimits

0x7ed0,	// (0x000229b9) bg_active_tab_pane_cp2

0x7ede,	// (0x000229c7) tabs_3_active_pane_g1

0x7ee6,	// (0x000229cf) tabs_3_active_pane_t1

0x7ed0,	// (0x000229b9) bg_passive_tab_pane_cp2_ParamLimits

0x7ed0,	// (0x000229b9) bg_passive_tab_pane_cp2

0x7ede,	// (0x000229c7) tabs_3_passive_pane_g1

0x7ee6,	// (0x000229cf) tabs_3_passive_pane_t1

0x7ed0,	// (0x000229b9) bg_active_tab_pane_cp3_ParamLimits

0x7ed0,	// (0x000229b9) bg_active_tab_pane_cp3

0x7ef8,	// (0x000229e1) tabs_4_active_pane_g1

0x7f00,	// (0x000229e9) tabs_4_active_pane_t1

0x7ed0,	// (0x000229b9) bg_passive_tab_pane_cp3_ParamLimits

0x7ed0,	// (0x000229b9) bg_passive_tab_pane_cp3

0x7ef8,	// (0x000229e1) tabs_4_1_passive_pane_g1

0x7f00,	// (0x000229e9) tabs_4_1_passive_pane_t1

0x971e,	// (0x00024207) list_highlight_pane_cp2

0xb04c,	// (0x00025b35) list_set_pane_ParamLimits

0xb04c,	// (0x00025b35) list_set_pane

0xb0f2,	// (0x00025bdb) main_pane_set_t1_ParamLimits

0xb0f2,	// (0x00025bdb) main_pane_set_t1

0xb112,	// (0x00025bfb) main_pane_set_t2_ParamLimits

0xb112,	// (0x00025bfb) main_pane_set_t2

0xb126,	// (0x00025c0f) main_pane_set_t3_ParamLimits

0xb126,	// (0x00025c0f) main_pane_set_t3

0xb138,	// (0x00025c21) main_pane_set_t4_ParamLimits

0xb138,	// (0x00025c21) main_pane_set_t4

0x0003,

0xf97a,	// (0x0002a463) main_pane_set_t_ParamLimits

0xf97a,	// (0x0002a463) main_pane_set_t

0xb14a,	// (0x00025c33) setting_code_pane

0xb156,	// (0x00025c3f) setting_slider_graphic_pane

0xb156,	// (0x00025c3f) setting_slider_pane

0xb156,	// (0x00025c3f) setting_text_pane

0xb156,	// (0x00025c3f) setting_volume_pane

0x5e4d,	// (0x00020936) volume_set_pane

0x7ed0,	// (0x000229b9) bg_set_opt_pane_cp

0x5e55,	// (0x0002093e) setting_slider_pane_t1

0x5e6e,	// (0x00020957) setting_slider_pane_t2

0x5e88,	// (0x00020971) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002a047) setting_slider_pane_t

0x5ea0,	// (0x00020989) slider_set_pane

0x7df0,	// (0x000228d9) bg_set_opt_pane_cp2

0x7f12,	// (0x000229fb) setting_slider_graphic_pane_g1

0x5eb6,	// (0x0002099f) setting_slider_graphic_pane_t1

0x5ec6,	// (0x000209af) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002a04e) setting_slider_graphic_pane_t

0x5ed6,	// (0x000209bf) slider_set_pane_cp

0x7df0,	// (0x000228d9) input_focus_pane_cp1

0xb00b,	// (0x00025af4) list_set_text_pane

0x7de6,	// (0x000228cf) setting_text_pane_g1

0x7df0,	// (0x000228d9) input_focus_pane_cp2

0x7de6,	// (0x000228cf) setting_code_pane_g1

0x7f1b,	// (0x00022a04) setting_code_pane_t1

0x48e7,	// (0x0001f3d0) set_text_pane_t1_ParamLimits

0x48e7,	// (0x0001f3d0) set_text_pane_t1

0x87bd,	// (0x000232a6) set_opt_bg_pane_g1

0x87c5,	// (0x000232ae) set_opt_bg_pane_g2

0xafe5,	// (0x00025ace) set_opt_bg_pane_g3

0x87d5,	// (0x000232be) set_opt_bg_pane_g4

0x87dd,	// (0x000232c6) set_opt_bg_pane_g5

0x87e5,	// (0x000232ce) set_opt_bg_pane_g6

0xafef,	// (0x00025ad8) set_opt_bg_pane_g7

0xaff7,	// (0x00025ae0) set_opt_bg_pane_g8

0xb001,	// (0x00025aea) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x0002a450) set_opt_bg_pane_g

0xafd8,	// (0x00025ac1) slider_set_pane_g1

0x6d62,	// (0x0002184b) slider_set_pane_g2

0x0006,

0xf958,	// (0x0002a441) slider_set_pane_g

0x6cfe,	// (0x000217e7) volume_set_pane_g1

0x6d06,	// (0x000217ef) volume_set_pane_g2

0x6d0e,	// (0x000217f7) volume_set_pane_g3

0x6d16,	// (0x000217ff) volume_set_pane_g4

0x6d1e,	// (0x00021807) volume_set_pane_g5

0x6d26,	// (0x0002180f) volume_set_pane_g6

0x6d2e,	// (0x00021817) volume_set_pane_g7

0x6d36,	// (0x0002181f) volume_set_pane_g8

0x6d3e,	// (0x00021827) volume_set_pane_g9

0x6d46,	// (0x0002182f) volume_set_pane_g10

0x0009,

0xf930,	// (0x0002a419) volume_set_pane_g

0x7f29,	// (0x00022a12) indicator_pane_ParamLimits

0x7f29,	// (0x00022a12) indicator_pane

0x7f35,	// (0x00022a1e) main_idle_pane_g2_ParamLimits

0x7f35,	// (0x00022a1e) main_idle_pane_g2

0x7f5d,	// (0x00022a46) main_pane_idle_g1_ParamLimits

0x7f5d,	// (0x00022a46) main_pane_idle_g1

0x7f6a,	// (0x00022a53) popup_clock_digital_analogue_window_ParamLimits

0x7f6a,	// (0x00022a53) popup_clock_digital_analogue_window

0x7f81,	// (0x00022a6a) soft_indicator_pane_ParamLimits

0x7f81,	// (0x00022a6a) soft_indicator_pane

0x7f8d,	// (0x00022a76) wallpaper_pane_ParamLimits

0x7f8d,	// (0x00022a76) wallpaper_pane

0x7de6,	// (0x000228cf) wallpaper_pane_g1

0x7fa1,	// (0x00022a8a) indicator_pane_g1_ParamLimits

0x7fa1,	// (0x00022a8a) indicator_pane_g1

0xb40f,	// (0x00025ef8) navi_navi_icon_text_pane_srt_g1

0x7fbc,	// (0x00022aa5) soft_indicator_pane_t1

0x7fd6,	// (0x00022abf) aid_ps_area_pane

0x7fe7,	// (0x00022ad0) aid_ps_clock_pane

0x7ff5,	// (0x00022ade) aid_ps_indicator_pane

0x8001,	// (0x00022aea) indicator_ps_pane_ParamLimits

0x8001,	// (0x00022aea) indicator_ps_pane

0x8010,	// (0x00022af9) power_save_pane_g1_ParamLimits

0x8010,	// (0x00022af9) power_save_pane_g1

0x801c,	// (0x00022b05) power_save_pane_g2_ParamLimits

0x801c,	// (0x00022b05) power_save_pane_g2

0x5a5e,	// (0x00020547) aid_navinavi_width_pane

0x7fd6,	// (0x00022abf) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002a053) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002a053) power_save_pane_g

0x802a,	// (0x00022b13) power_save_pane_t1_ParamLimits

0x802a,	// (0x00022b13) power_save_pane_t1

0x7fe7,	// (0x00022ad0) aid_ps_clock_pane_ParamLimits

0x7ff5,	// (0x00022ade) aid_ps_indicator_pane_ParamLimits

0x803c,	// (0x00022b25) power_save_pane_t4_ParamLimits

0x803c,	// (0x00022b25) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002a058) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002a058) power_save_pane_t

0x8066,	// (0x00022b4f) power_save_t3_ParamLimits

0x8066,	// (0x00022b4f) power_save_t3

0x8051,	// (0x00022b3a) power_save_t2_ParamLimits

0x8051,	// (0x00022b3a) power_save_t2

0x807b,	// (0x00022b64) indicator_ps_pane_g1

0x8084,	// (0x00022b6d) ai_gene_pane_ParamLimits

0x8084,	// (0x00022b6d) ai_gene_pane

0x8090,	// (0x00022b79) ai_links_pane_ParamLimits

0x8090,	// (0x00022b79) ai_links_pane

0x809c,	// (0x00022b85) indicator_pane_cp1_ParamLimits

0x809c,	// (0x00022b85) indicator_pane_cp1

0x80a8,	// (0x00022b91) main_pane_idle_g1_cp_ParamLimits

0x80a8,	// (0x00022b91) main_pane_idle_g1_cp

0x80b4,	// (0x00022b9d) popup_ai_links_title_window

0x80bd,	// (0x00022ba6) soft_indicator_pane_cp1_ParamLimits

0x80bd,	// (0x00022ba6) soft_indicator_pane_cp1

0xadd2,	// (0x000258bb) ai_links_pane_g1

0xaddb,	// (0x000258c4) grid_ai_links_pane

0xadb5,	// (0x0002589e) ai_gene_pane_1

0xadc0,	// (0x000258a9) ai_gene_pane_2

0xadc9,	// (0x000258b2) list_highlight_pane_cp4

0xad99,	// (0x00025882) cell_ai_link_pane_ParamLimits

0xad99,	// (0x00025882) cell_ai_link_pane

0xad91,	// (0x0002587a) cell_ai_link_pane_g1

0x8313,	// (0x00022dfc) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x0002a3f4) cell_ai_link_pane_g

0x7df0,	// (0x000228d9) grid_highlight_cp2

0x7df0,	// (0x000228d9) bg_popup_sub_pane_cp1

0x80d7,	// (0x00022bc0) popup_ai_links_title_window_t1

0xacdf,	// (0x000257c8) ai_gene_pane_1_g1_ParamLimits

0xacdf,	// (0x000257c8) ai_gene_pane_1_g1

0xaceb,	// (0x000257d4) ai_gene_pane_1_g2_ParamLimits

0xaceb,	// (0x000257d4) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x0002a3ea) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x0002a3ea) ai_gene_pane_1_g

0xacf8,	// (0x000257e1) ai_gene_pane_1_t1_ParamLimits

0xacf8,	// (0x000257e1) ai_gene_pane_1_t1

0xad2c,	// (0x00025815) grid_ai_soft_ind_pane

0xacca,	// (0x000257b3) ai_gene_pane_2_t1_ParamLimits

0xacca,	// (0x000257b3) ai_gene_pane_2_t1

0x80e6,	// (0x00022bcf) main_pane_empty_t1_ParamLimits

0x80e6,	// (0x00022bcf) main_pane_empty_t1

0x80fe,	// (0x00022be7) main_pane_empty_t2_ParamLimits

0x80fe,	// (0x00022be7) main_pane_empty_t2

0x8113,	// (0x00022bfc) main_pane_empty_t3_ParamLimits

0x8113,	// (0x00022bfc) main_pane_empty_t3

0x8125,	// (0x00022c0e) main_pane_empty_t4_ParamLimits

0x8125,	// (0x00022c0e) main_pane_empty_t4

0x8137,	// (0x00022c20) main_pane_empty_t5_ParamLimits

0x8137,	// (0x00022c20) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002a05d) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002a05d) main_pane_empty_t

0x880e,	// (0x000232f7) bg_popup_window_pane_ParamLimits

0x880e,	// (0x000232f7) bg_popup_window_pane

0xaa3a,	// (0x00025523) find_popup_pane_cp2_ParamLimits

0xaa3a,	// (0x00025523) find_popup_pane_cp2

0xaa46,	// (0x0002552f) heading_pane_ParamLimits

0xaa46,	// (0x0002552f) heading_pane

0x7df0,	// (0x000228d9) bg_popup_sub_pane

0xa9b4,	// (0x0002549d) bg_popup_window_pane_g1_ParamLimits

0xa9b4,	// (0x0002549d) bg_popup_window_pane_g1

0xa9c0,	// (0x000254a9) bg_popup_window_pane_g2_ParamLimits

0xa9c0,	// (0x000254a9) bg_popup_window_pane_g2

0xa9cc,	// (0x000254b5) bg_popup_window_pane_g3_ParamLimits

0xa9cc,	// (0x000254b5) bg_popup_window_pane_g3

0xa9d8,	// (0x000254c1) bg_popup_window_pane_g4_ParamLimits

0xa9d8,	// (0x000254c1) bg_popup_window_pane_g4

0xa9e4,	// (0x000254cd) bg_popup_window_pane_g5_ParamLimits

0xa9e4,	// (0x000254cd) bg_popup_window_pane_g5

0xa9f0,	// (0x000254d9) bg_popup_window_pane_g6_ParamLimits

0xa9f0,	// (0x000254d9) bg_popup_window_pane_g6

0xa9fc,	// (0x000254e5) bg_popup_window_pane_g7_ParamLimits

0xa9fc,	// (0x000254e5) bg_popup_window_pane_g7

0xaa08,	// (0x000254f1) bg_popup_window_pane_g8_ParamLimits

0xaa08,	// (0x000254f1) bg_popup_window_pane_g8

0xaa14,	// (0x000254fd) bg_popup_window_pane_g9_ParamLimits

0xaa14,	// (0x000254fd) bg_popup_window_pane_g9

0xaa20,	// (0x00025509) bg_popup_window_pane_g10_ParamLimits

0xaa20,	// (0x00025509) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0002a3b2) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0002a3b2) bg_popup_window_pane_g

0xa949,	// (0x00025432) bg_popup_heading_pane_ParamLimits

0xa949,	// (0x00025432) bg_popup_heading_pane

0x6dea,	// (0x000218d3) tabs_4_passive_pane_cp_srt_ParamLimits

0x6dea,	// (0x000218d3) tabs_4_passive_pane_cp_srt

0x6dfc,	// (0x000218e5) tabs_4_passive_pane_srt_ParamLimits

0xa95d,	// (0x00025446) heading_pane_g2

0x6dfc,	// (0x000218e5) tabs_4_passive_pane_srt

0x971e,	// (0x00024207) bg_passive_tab_pane_cp3_srt_ParamLimits

0x971e,	// (0x00024207) bg_passive_tab_pane_cp3_srt

0xa965,	// (0x0002544e) heading_pane_t1_ParamLimits

0xa965,	// (0x0002544e) heading_pane_t1

0xa97c,	// (0x00025465) heading_pane_t2_ParamLimits

0xa97c,	// (0x00025465) heading_pane_t2

0x0001,

0xf8c4,	// (0x0002a3ad) heading_pane_t_ParamLimits

0xf8c4,	// (0x0002a3ad) heading_pane_t

0xa476,	// (0x00024f5f) bg_popup_heading_pane_g1

0xa525,	// (0x0002500e) bg_popup_heading_pane_g2

0xa52f,	// (0x00025018) bg_popup_heading_pane_g3

0xa539,	// (0x00025022) bg_popup_heading_pane_g4

0xa543,	// (0x0002502c) bg_popup_heading_pane_g5

0xa54d,	// (0x00025036) bg_popup_heading_pane_g6

0xa555,	// (0x0002503e) bg_popup_heading_pane_g7

0xa55d,	// (0x00025046) bg_popup_heading_pane_g8

0xa567,	// (0x00025050) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0002a369) bg_popup_heading_pane_g

0x9c42,	// (0x0002472b) bg_popup_sub_pane_g1

0x9c4a,	// (0x00024733) bg_popup_sub_pane_g2

0x9c52,	// (0x0002473b) bg_popup_sub_pane_g3

0x9c5a,	// (0x00024743) bg_popup_sub_pane_g4

0x9c62,	// (0x0002474b) bg_popup_sub_pane_g5

0x9c6a,	// (0x00024753) bg_popup_sub_pane_g6

0x9c72,	// (0x0002475b) bg_popup_sub_pane_g7

0x9c7a,	// (0x00024763) bg_popup_sub_pane_g8

0x9c82,	// (0x0002476b) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x0002a343) bg_popup_sub_pane_g

0x814b,	// (0x00022c34) bg_popup_window_pane_cp5_ParamLimits

0x814b,	// (0x00022c34) bg_popup_window_pane_cp5

0x8167,	// (0x00022c50) popup_note_window_g1_ParamLimits

0x8167,	// (0x00022c50) popup_note_window_g1

0x8173,	// (0x00022c5c) popup_note_window_t1_ParamLimits

0x8173,	// (0x00022c5c) popup_note_window_t1

0x8189,	// (0x00022c72) popup_note_window_t2_ParamLimits

0x8189,	// (0x00022c72) popup_note_window_t2

0x819f,	// (0x00022c88) popup_note_window_t3_ParamLimits

0x819f,	// (0x00022c88) popup_note_window_t3

0x81b5,	// (0x00022c9e) popup_note_window_t4_ParamLimits

0x81b5,	// (0x00022c9e) popup_note_window_t4

0x81dd,	// (0x00022cc6) popup_note_window_t5_ParamLimits

0x81dd,	// (0x00022cc6) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002a068) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002a068) popup_note_window_t

0x8227,	// (0x00022d10) bg_popup_window_pane_cp6_ParamLimits

0x8227,	// (0x00022d10) bg_popup_window_pane_cp6

0xa3f2,	// (0x00024edb) popup_note_image_window_g1_ParamLimits

0xa3f2,	// (0x00024edb) popup_note_image_window_g1

0xa3fe,	// (0x00024ee7) popup_note_image_window_g2_ParamLimits

0xa3fe,	// (0x00024ee7) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0002a337) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0002a337) popup_note_image_window_g

0xa417,	// (0x00024f00) popup_note_image_window_t1_ParamLimits

0xa417,	// (0x00024f00) popup_note_image_window_t1

0xa430,	// (0x00024f19) popup_note_image_window_t2_ParamLimits

0xa430,	// (0x00024f19) popup_note_image_window_t2

0xa449,	// (0x00024f32) popup_note_image_window_t3_ParamLimits

0xa449,	// (0x00024f32) popup_note_image_window_t3

0x0002,

0xf853,	// (0x0002a33c) popup_note_image_window_t_ParamLimits

0xf853,	// (0x0002a33c) popup_note_image_window_t

0xa2b3,	// (0x00024d9c) bg_popup_window_pane_cp7_ParamLimits

0xa2b3,	// (0x00024d9c) bg_popup_window_pane_cp7

0xa2e3,	// (0x00024dcc) popup_note_wait_window_g1_ParamLimits

0xa2e3,	// (0x00024dcc) popup_note_wait_window_g1

0xa2ef,	// (0x00024dd8) popup_note_wait_window_g2_ParamLimits

0xa2ef,	// (0x00024dd8) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0002a325) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0002a325) popup_note_wait_window_g

0xa307,	// (0x00024df0) popup_note_wait_window_t1_ParamLimits

0xa307,	// (0x00024df0) popup_note_wait_window_t1

0xa32e,	// (0x00024e17) popup_note_wait_window_t2_ParamLimits

0xa32e,	// (0x00024e17) popup_note_wait_window_t2

0xa34b,	// (0x00024e34) popup_note_wait_window_t3_ParamLimits

0xa34b,	// (0x00024e34) popup_note_wait_window_t3

0xa35e,	// (0x00024e47) popup_note_wait_window_t4_ParamLimits

0xa35e,	// (0x00024e47) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x0002a32c) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x0002a32c) popup_note_wait_window_t

0xa383,	// (0x00024e6c) wait_bar_pane_ParamLimits

0xa383,	// (0x00024e6c) wait_bar_pane

0x7df0,	// (0x000228d9) wait_anim_pane

0x7df0,	// (0x000228d9) wait_border_pane

0x7de6,	// (0x000228cf) wait_anim_pane_g1

0x7de6,	// (0x000228cf) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0002a1e7) wait_anim_pane_g

0xa257,	// (0x00024d40) wait_border_pane_g1

0xa262,	// (0x00024d4b) wait_border_pane_g2

0xa26b,	// (0x00024d54) wait_border_pane_g3

0x0002,

0xf835,	// (0x0002a31e) wait_border_pane_g

0xa0c2,	// (0x00024bab) bg_popup_window_pane_cp16_ParamLimits

0xa0c2,	// (0x00024bab) bg_popup_window_pane_cp16

0xa1c2,	// (0x00024cab) indicator_popup_pane_cp4_ParamLimits

0xa1c2,	// (0x00024cab) indicator_popup_pane_cp4

0xa1d6,	// (0x00024cbf) popup_query_data_window_t1_ParamLimits

0xa1d6,	// (0x00024cbf) popup_query_data_window_t1

0xa1e8,	// (0x00024cd1) popup_query_data_window_t2_ParamLimits

0xa1e8,	// (0x00024cd1) popup_query_data_window_t2

0xa201,	// (0x00024cea) popup_query_data_window_t3_ParamLimits

0xa201,	// (0x00024cea) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0002a317) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0002a317) popup_query_data_window_t

0xa21b,	// (0x00024d04) query_popup_data_pane_ParamLimits

0xa21b,	// (0x00024d04) query_popup_data_pane

0xa22f,	// (0x00024d18) query_popup_data_pane_cp1_ParamLimits

0xa22f,	// (0x00024d18) query_popup_data_pane_cp1

0xa0c2,	// (0x00024bab) bg_popup_window_pane_cp10_ParamLimits

0xa0c2,	// (0x00024bab) bg_popup_window_pane_cp10

0xa0f4,	// (0x00024bdd) indicator_popup_pane_ParamLimits

0xa0f4,	// (0x00024bdd) indicator_popup_pane

0xa116,	// (0x00024bff) popup_query_code_window_t1_ParamLimits

0xa116,	// (0x00024bff) popup_query_code_window_t1

0xa130,	// (0x00024c19) popup_query_code_window_t2_ParamLimits

0xa130,	// (0x00024c19) popup_query_code_window_t2

0xa179,	// (0x00024c62) popup_query_code_window_t3_ParamLimits

0xa179,	// (0x00024c62) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0002a310) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0002a310) popup_query_code_window_t

0xa1a8,	// (0x00024c91) query_popup_pane_ParamLimits

0xa1a8,	// (0x00024c91) query_popup_pane

0x8227,	// (0x00022d10) bg_popup_window_pane_cp15_ParamLimits

0x8227,	// (0x00022d10) bg_popup_window_pane_cp15

0x8245,	// (0x00022d2e) indicator_popup_pane_cp1_ParamLimits

0x8245,	// (0x00022d2e) indicator_popup_pane_cp1

0x8258,	// (0x00022d41) indicator_popup_pane_cp2_ParamLimits

0x8258,	// (0x00022d41) indicator_popup_pane_cp2

0x826b,	// (0x00022d54) popup_query_data_code_window_g1_ParamLimits

0x826b,	// (0x00022d54) popup_query_data_code_window_g1

0x827e,	// (0x00022d67) popup_query_data_code_window_t1_ParamLimits

0x827e,	// (0x00022d67) popup_query_data_code_window_t1

0x8290,	// (0x00022d79) popup_query_data_code_window_t2_ParamLimits

0x8290,	// (0x00022d79) popup_query_data_code_window_t2

0x82a2,	// (0x00022d8b) popup_query_data_code_window_t3_ParamLimits

0x82a2,	// (0x00022d8b) popup_query_data_code_window_t3

0x82b8,	// (0x00022da1) popup_query_data_code_window_t4_ParamLimits

0x82b8,	// (0x00022da1) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002a073) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002a073) popup_query_data_code_window_t

0x6acd,	// (0x000215b6) list_single_midp_graphic_pane_g3

0x82d0,	// (0x00022db9) query_popup_data_pane_cp2_ParamLimits

0x82e3,	// (0x00022dcc) query_popup_pane_cp2_ParamLimits

0x82e3,	// (0x00022dcc) query_popup_pane_cp2

0x7df0,	// (0x000228d9) bg_popup_window_pane_cp11

0xa0ae,	// (0x00024b97) heading_pane_cp5

0x83ce,	// (0x00022eb7) listscroll_popup_info_pane

0x7df0,	// (0x000228d9) input_focus_pane_cp3

0x82f6,	// (0x00022ddf) query_popup_pane_t1

0x8304,	// (0x00022ded) list_popup_info_pane_ParamLimits

0x8304,	// (0x00022ded) list_popup_info_pane

0x8313,	// (0x00022dfc) listscroll_popup_info_pane_g1

0x831b,	// (0x00022e04) scroll_pane_cp7

0x8325,	// (0x00022e0e) popup_info_list_pane_t1_ParamLimits

0x8325,	// (0x00022e0e) popup_info_list_pane_t1

0x833f,	// (0x00022e28) popup_info_list_pane_t2_ParamLimits

0x833f,	// (0x00022e28) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002a07c) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002a07c) popup_info_list_pane_t

0x7df0,	// (0x000228d9) bg_popup_window_pane_cp12

0xb429,	// (0x00025f12) find_popup_pane

0x7ed0,	// (0x000229b9) bg_popup_window_pane_cp3

0x8359,	// (0x00022e42) heading_pane_cp3

0x8365,	// (0x00022e4e) listscroll_popup_graphic_pane

0x7df0,	// (0x000228d9) bg_popup_window_pane_cp4

0x83c4,	// (0x00022ead) heading_pane_cp4

0x83ce,	// (0x00022eb7) listscroll_popup_colour_pane

0x83d6,	// (0x00022ebf) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x83d6,	// (0x00022ebf) cell_large_graphic_colour_none_popup_pane

0x83ea,	// (0x00022ed3) grid_large_graphic_colour_popup_pane_ParamLimits

0x83ea,	// (0x00022ed3) grid_large_graphic_colour_popup_pane

0x8416,	// (0x00022eff) listscroll_popup_colour_pane_g1_ParamLimits

0x8416,	// (0x00022eff) listscroll_popup_colour_pane_g1

0x842d,	// (0x00022f16) listscroll_popup_colour_pane_g2_ParamLimits

0x842d,	// (0x00022f16) listscroll_popup_colour_pane_g2

0x8444,	// (0x00022f2d) listscroll_popup_colour_pane_g3_ParamLimits

0x8444,	// (0x00022f2d) listscroll_popup_colour_pane_g3

0x8454,	// (0x00022f3d) listscroll_popup_colour_pane_g4_ParamLimits

0x8454,	// (0x00022f3d) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002a081) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002a081) listscroll_popup_colour_pane_g

0x8468,	// (0x00022f51) scroll_pane_cp6_ParamLimits

0x8468,	// (0x00022f51) scroll_pane_cp6

0x847a,	// (0x00022f63) cell_large_graphic_colour_popup_pane_ParamLimits

0x847a,	// (0x00022f63) cell_large_graphic_colour_popup_pane

0x8499,	// (0x00022f82) cell_large_graphic_colour_none_popup_pane_t1

0x7df0,	// (0x000228d9) grid_highlight_pane_cp5

0x84a8,	// (0x00022f91) cell_large_graphic_colour_popup_pane_g1

0x84b0,	// (0x00022f99) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002a08a) cell_large_graphic_colour_popup_pane_g

0x84b8,	// (0x00022fa1) cell_large_graphic_colour_popup_pane_g2_copy1

0x84c1,	// (0x00022faa) grid_highlight_pane_cp4

0x84c9,	// (0x00022fb2) bg_popup_window_pane_cp8_ParamLimits

0x84c9,	// (0x00022fb2) bg_popup_window_pane_cp8

0x84e4,	// (0x00022fcd) popup_snote_single_text_window_g1_ParamLimits

0x84e4,	// (0x00022fcd) popup_snote_single_text_window_g1

0x84f6,	// (0x00022fdf) popup_snote_single_text_window_t1_ParamLimits

0x84f6,	// (0x00022fdf) popup_snote_single_text_window_t1

0x8509,	// (0x00022ff2) popup_snote_single_text_window_t2_ParamLimits

0x8509,	// (0x00022ff2) popup_snote_single_text_window_t2

0x851c,	// (0x00023005) popup_snote_single_text_window_t3_ParamLimits

0x851c,	// (0x00023005) popup_snote_single_text_window_t3

0x8555,	// (0x0002303e) popup_snote_single_text_window_t4_ParamLimits

0x8555,	// (0x0002303e) popup_snote_single_text_window_t4

0x8589,	// (0x00023072) popup_snote_single_text_window_t5_ParamLimits

0x8589,	// (0x00023072) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002a08f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002a08f) popup_snote_single_text_window_t

0x85b8,	// (0x000230a1) bg_popup_window_pane_cp9_ParamLimits

0x85b8,	// (0x000230a1) bg_popup_window_pane_cp9

0x84e4,	// (0x00022fcd) popup_snote_single_graphic_window_g1_ParamLimits

0x84e4,	// (0x00022fcd) popup_snote_single_graphic_window_g1

0x85c6,	// (0x000230af) popup_snote_single_graphic_window_g2_ParamLimits

0x85c6,	// (0x000230af) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002a09a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002a09a) popup_snote_single_graphic_window_g

0x85d2,	// (0x000230bb) popup_snote_single_graphic_window_t1_ParamLimits

0x85d2,	// (0x000230bb) popup_snote_single_graphic_window_t1

0x85e5,	// (0x000230ce) popup_snote_single_graphic_window_t2_ParamLimits

0x85e5,	// (0x000230ce) popup_snote_single_graphic_window_t2

0x85f8,	// (0x000230e1) popup_snote_single_graphic_window_t3_ParamLimits

0x85f8,	// (0x000230e1) popup_snote_single_graphic_window_t3

0x8631,	// (0x0002311a) popup_snote_single_graphic_window_t4_ParamLimits

0x8631,	// (0x0002311a) popup_snote_single_graphic_window_t4

0x8665,	// (0x0002314e) popup_snote_single_graphic_window_t5_ParamLimits

0x8665,	// (0x0002314e) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002a09f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002a09f) popup_snote_single_graphic_window_t

0xb36b,	// (0x00025e54) grid_graphic_popup_pane_ParamLimits

0xb36b,	// (0x00025e54) grid_graphic_popup_pane

0xb395,	// (0x00025e7e) listscroll_popup_graphic_pane_g1_ParamLimits

0xb395,	// (0x00025e7e) listscroll_popup_graphic_pane_g1

0xb3a9,	// (0x00025e92) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3a9,	// (0x00025e92) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0002a48d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0002a48d) listscroll_popup_graphic_pane_g

0xb3bd,	// (0x00025ea6) scroll_pane_cp5

0xb30a,	// (0x00025df3) cell_graphic_popup_pane_ParamLimits

0xb30a,	// (0x00025df3) cell_graphic_popup_pane

0xb2eb,	// (0x00025dd4) cell_graphic_popup_pane_g1

0xb2f3,	// (0x00025ddc) cell_graphic_popup_pane_g2

0x84b8,	// (0x00022fa1) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0002a486) cell_graphic_popup_pane_g

0xb2fc,	// (0x00025de5) cell_graphic_popup_pane_t2

0x84c1,	// (0x00022faa) grid_highlight_pane_cp3

0x86a6,	// (0x0002318f) list_gen_pane_ParamLimits

0x86a6,	// (0x0002318f) list_gen_pane

0x86d8,	// (0x000231c1) scroll_pane

0xb243,	// (0x00025d2c) bg_list_pane_g1_ParamLimits

0xb243,	// (0x00025d2c) bg_list_pane_g1

0xb260,	// (0x00025d49) bg_list_pane_g2_ParamLimits

0xb260,	// (0x00025d49) bg_list_pane_g2

0xb275,	// (0x00025d5e) bg_list_pane_g3_ParamLimits

0xb275,	// (0x00025d5e) bg_list_pane_g3

0xb289,	// (0x00025d72) bg_list_pane_g4_ParamLimits

0xb289,	// (0x00025d72) bg_list_pane_g4

0xb29d,	// (0x00025d86) bg_list_pane_g5_ParamLimits

0xb29d,	// (0x00025d86) bg_list_pane_g5

0x0004,

0xf992,	// (0x0002a47b) bg_list_pane_g_ParamLimits

0xf992,	// (0x0002a47b) bg_list_pane_g

0x5283,	// (0x0001fd6c) list_double2_graphic_large_graphic_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_double2_graphic_large_graphic_pane

0x5283,	// (0x0001fd6c) list_double2_graphic_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_double2_graphic_pane

0x5283,	// (0x0001fd6c) list_double2_large_graphic_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_double2_large_graphic_pane

0x5283,	// (0x0001fd6c) list_double2_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_double2_pane

0x5283,	// (0x0001fd6c) list_double_graphic_heading_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_double_graphic_heading_pane

0x5283,	// (0x0001fd6c) list_double_graphic_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_double_graphic_pane

0x5283,	// (0x0001fd6c) list_double_heading_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_double_heading_pane

0x5283,	// (0x0001fd6c) list_double_large_graphic_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_double_large_graphic_pane

0x5283,	// (0x0001fd6c) list_double_number_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_double_number_pane

0x5283,	// (0x0001fd6c) list_double_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_double_pane

0x5283,	// (0x0001fd6c) list_double_time_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_double_time_pane

0x5283,	// (0x0001fd6c) list_setting_number_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_setting_number_pane

0x5283,	// (0x0001fd6c) list_setting_pane_ParamLimits

0x5283,	// (0x0001fd6c) list_setting_pane

0x52be,	// (0x0001fda7) list_single_2graphic_pane_ParamLimits

0x52be,	// (0x0001fda7) list_single_2graphic_pane

0x52be,	// (0x0001fda7) list_single_graphic_heading_pane_ParamLimits

0x52be,	// (0x0001fda7) list_single_graphic_heading_pane

0x52be,	// (0x0001fda7) list_single_graphic_pane_ParamLimits

0x52be,	// (0x0001fda7) list_single_graphic_pane

0x52be,	// (0x0001fda7) list_single_heading_pane_ParamLimits

0x52be,	// (0x0001fda7) list_single_heading_pane

0x52fe,	// (0x0001fde7) list_single_large_graphic_pane_ParamLimits

0x52fe,	// (0x0001fde7) list_single_large_graphic_pane

0x52be,	// (0x0001fda7) list_single_number_heading_pane_ParamLimits

0x52be,	// (0x0001fda7) list_single_number_heading_pane

0x52be,	// (0x0001fda7) list_single_number_pane_ParamLimits

0x52be,	// (0x0001fda7) list_single_number_pane

0x52be,	// (0x0001fda7) list_single_pane_ParamLimits

0x52be,	// (0x0001fda7) list_single_pane

0x7df0,	// (0x000228d9) list_highlight_pane_cp1

0x490e,	// (0x0001f3f7) list_single_pane_g1_ParamLimits

0x490e,	// (0x0001f3f7) list_single_pane_g1

0x491a,	// (0x0001f403) list_single_pane_g2_ParamLimits

0x491a,	// (0x0001f403) list_single_pane_g2

0x0001,

0xf5c3,	// (0x0002a0ac) list_single_pane_g_ParamLimits

0xf5c3,	// (0x0002a0ac) list_single_pane_g

0x526d,	// (0x0001fd56) list_single_pane_t1_ParamLimits

0x526d,	// (0x0001fd56) list_single_pane_t1

0x490e,	// (0x0001f3f7) list_single_number_pane_g1_ParamLimits

0x490e,	// (0x0001f3f7) list_single_number_pane_g1

0x491a,	// (0x0001f403) list_single_number_pane_g2_ParamLimits

0x491a,	// (0x0001f403) list_single_number_pane_g2

0x0001,

0xf5c3,	// (0x0002a0ac) list_single_number_pane_g_ParamLimits

0xf5c3,	// (0x0002a0ac) list_single_number_pane_g

0x5217,	// (0x0001fd00) list_single_number_pane_t1_ParamLimits

0x5217,	// (0x0001fd00) list_single_number_pane_t1

0x522d,	// (0x0001fd16) list_single_number_pane_t2_ParamLimits

0x522d,	// (0x0001fd16) list_single_number_pane_t2

0x0001,

0xf953,	// (0x0002a43c) list_single_number_pane_t_ParamLimits

0xf953,	// (0x0002a43c) list_single_number_pane_t

0x4902,	// (0x0001f3eb) list_single_graphic_pane_g1_ParamLimits

0x4902,	// (0x0001f3eb) list_single_graphic_pane_g1

0x490e,	// (0x0001f3f7) list_single_graphic_pane_g2_ParamLimits

0x490e,	// (0x0001f3f7) list_single_graphic_pane_g2

0x491a,	// (0x0001f403) list_single_graphic_pane_g3_ParamLimits

0x491a,	// (0x0001f403) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002a0aa) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002a0aa) list_single_graphic_pane_g

0x4926,	// (0x0001f40f) list_single_graphic_pane_t1_ParamLimits

0x4926,	// (0x0001f40f) list_single_graphic_pane_t1

0x490e,	// (0x0001f3f7) list_single_heading_pane_g1_ParamLimits

0x490e,	// (0x0001f3f7) list_single_heading_pane_g1

0x491a,	// (0x0001f403) list_single_heading_pane_g2_ParamLimits

0x491a,	// (0x0001f403) list_single_heading_pane_g2

0x0001,

0xf5c3,	// (0x0002a0ac) list_single_heading_pane_g_ParamLimits

0xf5c3,	// (0x0002a0ac) list_single_heading_pane_g

0x493c,	// (0x0001f425) list_single_heading_pane_t1_ParamLimits

0x493c,	// (0x0001f425) list_single_heading_pane_t1

0x4952,	// (0x0001f43b) list_single_heading_pane_t2_ParamLimits

0x4952,	// (0x0001f43b) list_single_heading_pane_t2

0x0001,

0xf5c8,	// (0x0002a0b1) list_single_heading_pane_t_ParamLimits

0xf5c8,	// (0x0002a0b1) list_single_heading_pane_t

0x490e,	// (0x0001f3f7) list_single_number_heading_pane_g1_ParamLimits

0x490e,	// (0x0001f3f7) list_single_number_heading_pane_g1

0x491a,	// (0x0001f403) list_single_number_heading_pane_g2_ParamLimits

0x491a,	// (0x0001f403) list_single_number_heading_pane_g2

0x0001,

0xf5c3,	// (0x0002a0ac) list_single_number_heading_pane_g_ParamLimits

0xf5c3,	// (0x0002a0ac) list_single_number_heading_pane_g

0x493c,	// (0x0001f425) list_single_number_heading_pane_t1_ParamLimits

0x493c,	// (0x0001f425) list_single_number_heading_pane_t1

0x4964,	// (0x0001f44d) list_single_number_heading_pane_t2_ParamLimits

0x4964,	// (0x0001f44d) list_single_number_heading_pane_t2

0x4976,	// (0x0001f45f) list_single_number_heading_pane_t3_ParamLimits

0x4976,	// (0x0001f45f) list_single_number_heading_pane_t3

0x0002,

0xf5cd,	// (0x0002a0b6) list_single_number_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002a0b6) list_single_number_heading_pane_t

0x4988,	// (0x0001f471) list_single_graphic_heading_pane_g1_ParamLimits

0x4988,	// (0x0001f471) list_single_graphic_heading_pane_g1

0x4994,	// (0x0001f47d) list_single_graphic_heading_pane_g4_ParamLimits

0x4994,	// (0x0001f47d) list_single_graphic_heading_pane_g4

0x491a,	// (0x0001f403) list_single_graphic_heading_pane_g5_ParamLimits

0x491a,	// (0x0001f403) list_single_graphic_heading_pane_g5

0x0002,

0xf5d4,	// (0x0002a0bd) list_single_graphic_heading_pane_g_ParamLimits

0xf5d4,	// (0x0002a0bd) list_single_graphic_heading_pane_g

0x493c,	// (0x0001f425) list_single_graphic_heading_pane_t1_ParamLimits

0x493c,	// (0x0001f425) list_single_graphic_heading_pane_t1

0x49a5,	// (0x0001f48e) list_single_graphic_heading_pane_t2_ParamLimits

0x49a5,	// (0x0001f48e) list_single_graphic_heading_pane_t2

0x0001,

0xf5db,	// (0x0002a0c4) list_single_graphic_heading_pane_t_ParamLimits

0xf5db,	// (0x0002a0c4) list_single_graphic_heading_pane_t

0x49b7,	// (0x0001f4a0) list_single_large_graphic_pane_g1_ParamLimits

0x49b7,	// (0x0001f4a0) list_single_large_graphic_pane_g1

0x49c3,	// (0x0001f4ac) list_single_large_graphic_pane_g2_ParamLimits

0x49c3,	// (0x0001f4ac) list_single_large_graphic_pane_g2

0x49cf,	// (0x0001f4b8) list_single_large_graphic_pane_g3_ParamLimits

0x49cf,	// (0x0001f4b8) list_single_large_graphic_pane_g3

0x0002,

0xf5e0,	// (0x0002a0c9) list_single_large_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0002a0c9) list_single_large_graphic_pane_g

0xa262,	// (0x00024d4b) wait_border_pane_g2_copy1

0x49db,	// (0x0001f4c4) list_single_large_graphic_pane_g4_cp2

0x49e3,	// (0x0001f4cc) list_single_large_graphic_pane_t1_ParamLimits

0x49e3,	// (0x0001f4cc) list_single_large_graphic_pane_t1

0x49f9,	// (0x0001f4e2) list_double_pane_g1_ParamLimits

0x49f9,	// (0x0001f4e2) list_double_pane_g1

0x4a05,	// (0x0001f4ee) list_double_pane_g2_ParamLimits

0x4a05,	// (0x0001f4ee) list_double_pane_g2

0x0001,

0xf5e7,	// (0x0002a0d0) list_double_pane_g_ParamLimits

0xf5e7,	// (0x0002a0d0) list_double_pane_g

0x4a11,	// (0x0001f4fa) list_double_pane_t1_ParamLimits

0x4a11,	// (0x0001f4fa) list_double_pane_t1

0x4a27,	// (0x0001f510) list_double_pane_t2_ParamLimits

0x4a27,	// (0x0001f510) list_double_pane_t2

0x0001,

0xf5ec,	// (0x0002a0d5) list_double_pane_t_ParamLimits

0xf5ec,	// (0x0002a0d5) list_double_pane_t

0x4a39,	// (0x0001f522) list_double2_pane_g1_ParamLimits

0x4a39,	// (0x0001f522) list_double2_pane_g1

0x4a4a,	// (0x0001f533) list_double2_pane_g2_ParamLimits

0x4a4a,	// (0x0001f533) list_double2_pane_g2

0x0001,

0xf5f1,	// (0x0002a0da) list_double2_pane_g_ParamLimits

0xf5f1,	// (0x0002a0da) list_double2_pane_g

0x4a56,	// (0x0001f53f) list_double2_pane_t1_ParamLimits

0x4a56,	// (0x0001f53f) list_double2_pane_t1

0x4a6c,	// (0x0001f555) list_double2_pane_t2_ParamLimits

0x4a6c,	// (0x0001f555) list_double2_pane_t2

0x0001,

0xf5f6,	// (0x0002a0df) list_double2_pane_t_ParamLimits

0xf5f6,	// (0x0002a0df) list_double2_pane_t

0x49f9,	// (0x0001f4e2) list_double_number_pane_g1_ParamLimits

0x49f9,	// (0x0001f4e2) list_double_number_pane_g1

0x4a05,	// (0x0001f4ee) list_double_number_pane_g2_ParamLimits

0x4a05,	// (0x0001f4ee) list_double_number_pane_g2

0x0001,

0xf5e7,	// (0x0002a0d0) list_double_number_pane_g_ParamLimits

0xf5e7,	// (0x0002a0d0) list_double_number_pane_g

0x4a7e,	// (0x0001f567) list_double_number_pane_t1_ParamLimits

0x4a7e,	// (0x0001f567) list_double_number_pane_t1

0x4a90,	// (0x0001f579) list_double_number_pane_t2_ParamLimits

0x4a90,	// (0x0001f579) list_double_number_pane_t2

0x4aa6,	// (0x0001f58f) list_double_number_pane_t3_ParamLimits

0x4aa6,	// (0x0001f58f) list_double_number_pane_t3

0x0002,

0xf5fb,	// (0x0002a0e4) list_double_number_pane_t_ParamLimits

0xf5fb,	// (0x0002a0e4) list_double_number_pane_t

0x4ab8,	// (0x0001f5a1) list_double_graphic_pane_g1_ParamLimits

0x4ab8,	// (0x0001f5a1) list_double_graphic_pane_g1

0x4ac4,	// (0x0001f5ad) list_double_graphic_pane_g2_ParamLimits

0x4ac4,	// (0x0001f5ad) list_double_graphic_pane_g2

0x4ad3,	// (0x0001f5bc) list_double_graphic_pane_g3_ParamLimits

0x4ad3,	// (0x0001f5bc) list_double_graphic_pane_g3

0x0003,

0xf602,	// (0x0002a0eb) list_double_graphic_pane_g_ParamLimits

0xf602,	// (0x0002a0eb) list_double_graphic_pane_g

0x4aeb,	// (0x0001f5d4) list_double_graphic_pane_t1_ParamLimits

0x4aeb,	// (0x0001f5d4) list_double_graphic_pane_t1

0x4b01,	// (0x0001f5ea) list_double_graphic_pane_t2_ParamLimits

0x4b01,	// (0x0001f5ea) list_double_graphic_pane_t2

0x0001,

0xf60b,	// (0x0002a0f4) list_double_graphic_pane_t_ParamLimits

0xf60b,	// (0x0002a0f4) list_double_graphic_pane_t

0x4b13,	// (0x0001f5fc) list_double2_graphic_pane_g1_ParamLimits

0x4b13,	// (0x0001f5fc) list_double2_graphic_pane_g1

0x4b1f,	// (0x0001f608) list_double2_graphic_pane_g2_ParamLimits

0x4b1f,	// (0x0001f608) list_double2_graphic_pane_g2

0x4a4a,	// (0x0001f533) list_double2_graphic_pane_g3_ParamLimits

0x4a4a,	// (0x0001f533) list_double2_graphic_pane_g3

0x0002,

0xf610,	// (0x0002a0f9) list_double2_graphic_pane_g_ParamLimits

0xf610,	// (0x0002a0f9) list_double2_graphic_pane_g

0x4b2b,	// (0x0001f614) list_double2_graphic_pane_t1_ParamLimits

0x4b2b,	// (0x0001f614) list_double2_graphic_pane_t1

0x4b41,	// (0x0001f62a) list_double2_graphic_pane_t2_ParamLimits

0x4b41,	// (0x0001f62a) list_double2_graphic_pane_t2

0x0001,

0xf617,	// (0x0002a100) list_double2_graphic_pane_t_ParamLimits

0xf617,	// (0x0002a100) list_double2_graphic_pane_t

0x4b53,	// (0x0001f63c) list_double_large_graphic_pane_g1_ParamLimits

0x4b53,	// (0x0001f63c) list_double_large_graphic_pane_g1

0x4b66,	// (0x0001f64f) list_double_large_graphic_pane_g2_ParamLimits

0x4b66,	// (0x0001f64f) list_double_large_graphic_pane_g2

0x4a05,	// (0x0001f4ee) list_double_large_graphic_pane_g3_ParamLimits

0x4a05,	// (0x0001f4ee) list_double_large_graphic_pane_g3

0x4b77,	// (0x0001f660) list_double_large_graphic_pane_g4_ParamLimits

0x4b77,	// (0x0001f660) list_double_large_graphic_pane_g4

0x0004,

0xf61c,	// (0x0002a105) list_double_large_graphic_pane_g_ParamLimits

0xf61c,	// (0x0002a105) list_double_large_graphic_pane_g

0x4b9e,	// (0x0001f687) list_double_large_graphic_pane_t1_ParamLimits

0x4b9e,	// (0x0001f687) list_double_large_graphic_pane_t1

0x4bb7,	// (0x0001f6a0) list_double_large_graphic_pane_t2_ParamLimits

0x4bb7,	// (0x0001f6a0) list_double_large_graphic_pane_t2

0x0001,

0xf627,	// (0x0002a110) list_double_large_graphic_pane_t_ParamLimits

0xf627,	// (0x0002a110) list_double_large_graphic_pane_t

0x4bc9,	// (0x0001f6b2) list_double2_large_graphic_pane_g1_ParamLimits

0x4bc9,	// (0x0001f6b2) list_double2_large_graphic_pane_g1

0x4a39,	// (0x0001f522) list_double2_large_graphic_pane_g2_ParamLimits

0x4a39,	// (0x0001f522) list_double2_large_graphic_pane_g2

0x4a4a,	// (0x0001f533) list_double2_large_graphic_pane_g3_ParamLimits

0x4a4a,	// (0x0001f533) list_double2_large_graphic_pane_g3

0x0002,

0xf62c,	// (0x0002a115) list_double2_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0002a115) list_double2_large_graphic_pane_g

0x4bd5,	// (0x0001f6be) list_double2_large_graphic_pane_t1_ParamLimits

0x4bd5,	// (0x0001f6be) list_double2_large_graphic_pane_t1

0x4beb,	// (0x0001f6d4) list_double2_large_graphic_pane_t2_ParamLimits

0x4beb,	// (0x0001f6d4) list_double2_large_graphic_pane_t2

0x0001,

0xf633,	// (0x0002a11c) list_double2_large_graphic_pane_t_ParamLimits

0xf633,	// (0x0002a11c) list_double2_large_graphic_pane_t

0x4bfd,	// (0x0001f6e6) list_double_heading_pane_g1_ParamLimits

0x4bfd,	// (0x0001f6e6) list_double_heading_pane_g1

0x4c0e,	// (0x0001f6f7) list_double_heading_pane_g2_ParamLimits

0x4c0e,	// (0x0001f6f7) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0002a121) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0002a121) list_double_heading_pane_g

0x4c1a,	// (0x0001f703) list_double_heading_pane_t1_ParamLimits

0x4c1a,	// (0x0001f703) list_double_heading_pane_t1

0x4a6c,	// (0x0001f555) list_double_heading_pane_t2_ParamLimits

0x4a6c,	// (0x0001f555) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0002a126) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0002a126) list_double_heading_pane_t

0x4c30,	// (0x0001f719) list_double_graphic_heading_pane_g1_ParamLimits

0x4c30,	// (0x0001f719) list_double_graphic_heading_pane_g1

0x4bfd,	// (0x0001f6e6) list_double_graphic_heading_pane_g2_ParamLimits

0x4bfd,	// (0x0001f6e6) list_double_graphic_heading_pane_g2

0x4c0e,	// (0x0001f6f7) list_double_graphic_heading_pane_g3_ParamLimits

0x4c0e,	// (0x0001f6f7) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0002a12b) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0002a12b) list_double_graphic_heading_pane_g

0x4c3c,	// (0x0001f725) list_double_graphic_heading_pane_t1_ParamLimits

0x4c3c,	// (0x0001f725) list_double_graphic_heading_pane_t1

0x4b41,	// (0x0001f62a) list_double_graphic_heading_pane_t2_ParamLimits

0x4b41,	// (0x0001f62a) list_double_graphic_heading_pane_t2

0x0001,

0xf649,	// (0x0002a132) list_double_graphic_heading_pane_t_ParamLimits

0xf649,	// (0x0002a132) list_double_graphic_heading_pane_t

0x4b66,	// (0x0001f64f) list_double_time_pane_g1_ParamLimits

0x4b66,	// (0x0001f64f) list_double_time_pane_g1

0x4a05,	// (0x0001f4ee) list_double_time_pane_g2_ParamLimits

0x4a05,	// (0x0001f4ee) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x0002a137) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x0002a137) list_double_time_pane_g

0x4c52,	// (0x0001f73b) list_double_time_pane_t1_ParamLimits

0x4c52,	// (0x0001f73b) list_double_time_pane_t1

0x4c68,	// (0x0001f751) list_double_time_pane_t2_ParamLimits

0x4c68,	// (0x0001f751) list_double_time_pane_t2

0x4c7a,	// (0x0001f763) list_double_time_pane_t3_ParamLimits

0x4c7a,	// (0x0001f763) list_double_time_pane_t3

0x4c8c,	// (0x0001f775) list_double_time_pane_t4_ParamLimits

0x4c8c,	// (0x0001f775) list_double_time_pane_t4

0x0003,

0xf653,	// (0x0002a13c) list_double_time_pane_t_ParamLimits

0xf653,	// (0x0002a13c) list_double_time_pane_t

0x4b1f,	// (0x0001f608) list_setting_pane_g1_ParamLimits

0x4b1f,	// (0x0001f608) list_setting_pane_g1

0x4a4a,	// (0x0001f533) list_setting_pane_g2_ParamLimits

0x4a4a,	// (0x0001f533) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0002a145) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0002a145) list_setting_pane_g

0x4c9e,	// (0x0001f787) list_setting_pane_t1_ParamLimits

0x4c9e,	// (0x0001f787) list_setting_pane_t1

0x4cb8,	// (0x0001f7a1) list_setting_pane_t2_ParamLimits

0x4cb8,	// (0x0001f7a1) list_setting_pane_t2

0x0002,

0xf661,	// (0x0002a14a) list_setting_pane_t_ParamLimits

0xf661,	// (0x0002a14a) list_setting_pane_t

0x4cf7,	// (0x0001f7e0) set_value_pane_cp_ParamLimits

0x4cf7,	// (0x0001f7e0) set_value_pane_cp

0x4d03,	// (0x0001f7ec) list_setting_number_pane_g1_ParamLimits

0x4d03,	// (0x0001f7ec) list_setting_number_pane_g1

0x4d0f,	// (0x0001f7f8) list_setting_number_pane_g2_ParamLimits

0x4d0f,	// (0x0001f7f8) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x0002a151) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x0002a151) list_setting_number_pane_g

0x4d1b,	// (0x0001f804) list_setting_number_pane_t1_ParamLimits

0x4d1b,	// (0x0001f804) list_setting_number_pane_t1

0x4d34,	// (0x0001f81d) list_setting_number_pane_t2_ParamLimits

0x4d34,	// (0x0001f81d) list_setting_number_pane_t2

0x4d4e,	// (0x0001f837) list_setting_number_pane_t3_ParamLimits

0x4d4e,	// (0x0001f837) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0002a156) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0002a156) list_setting_number_pane_t

0x4cf7,	// (0x0001f7e0) set_value_pane_ParamLimits

0x4cf7,	// (0x0001f7e0) set_value_pane

0x870c,	// (0x000231f5) bg_set_opt_pane_ParamLimits

0x870c,	// (0x000231f5) bg_set_opt_pane

0x4d91,	// (0x0001f87a) set_value_pane_t1

0x872d,	// (0x00023216) slider_set_pane_cp3

0x8736,	// (0x0002321f) volume_small_pane_cp

0x873f,	// (0x00023228) list_form_gen_pane

0x8748,	// (0x00023231) scroll_pane_cp8

0x4da7,	// (0x0001f890) form_field_data_pane_ParamLimits

0x4da7,	// (0x0001f890) form_field_data_pane

0x4dc7,	// (0x0001f8b0) form_field_data_wide_pane_ParamLimits

0x4dc7,	// (0x0001f8b0) form_field_data_wide_pane

0x4de8,	// (0x0001f8d1) form_field_popup_pane_ParamLimits

0x4de8,	// (0x0001f8d1) form_field_popup_pane

0x4e08,	// (0x0001f8f1) form_field_popup_wide_pane_ParamLimits

0x4e08,	// (0x0001f8f1) form_field_popup_wide_pane

0x4e25,	// (0x0001f90e) form_field_slider_pane_ParamLimits

0x4e25,	// (0x0001f90e) form_field_slider_pane

0x4e38,	// (0x0001f921) form_field_slider_wide_pane_ParamLimits

0x4e38,	// (0x0001f921) form_field_slider_wide_pane

0x8759,	// (0x00023242) data_form_pane

0x4e55,	// (0x0001f93e) form_field_data_pane_t1

0x8765,	// (0x0002324e) input_focus_pane

0x4e6d,	// (0x0001f956) data_form_wide_pane

0x4e8a,	// (0x0001f973) form_field_data_wide_pane_t1

0x84d6,	// (0x00022fbf) input_focus_pane_cp6

0x4eac,	// (0x0001f995) form_field_popup_pane_t1

0x8765,	// (0x0002324e) input_focus_pane_cp7

0x8793,	// (0x0002327c) list_form_pane

0x4ecc,	// (0x0001f9b5) form_field_popup_wide_pane_t1

0x8765,	// (0x0002324e) input_focus_pane_cp8

0x879f,	// (0x00023288) list_form_wide_pane

0x4ee9,	// (0x0001f9d2) form_field_slider_pane_t1_ParamLimits

0x4ee9,	// (0x0001f9d2) form_field_slider_pane_t1

0x4eff,	// (0x0001f9e8) form_field_slider_pane_t2_ParamLimits

0x4eff,	// (0x0001f9e8) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0002a166) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0002a166) form_field_slider_pane_t

0x814b,	// (0x00022c34) input_focus_pane_cp9_ParamLimits

0x814b,	// (0x00022c34) input_focus_pane_cp9

0x4f14,	// (0x0001f9fd) slider_cont_pane_ParamLimits

0x4f14,	// (0x0001f9fd) slider_cont_pane

0x87ab,	// (0x00023294) form_field_slider_wide_pane_t1_ParamLimits

0x87ab,	// (0x00023294) form_field_slider_wide_pane_t1

0x4f28,	// (0x0001fa11) form_field_slider_wide_pane_t2_ParamLimits

0x4f28,	// (0x0001fa11) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0002a16b) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0002a16b) form_field_slider_wide_pane_t

0x814b,	// (0x00022c34) input_focus_pane_cp10_ParamLimits

0x814b,	// (0x00022c34) input_focus_pane_cp10

0x4f3a,	// (0x0001fa23) slider_cont_pane_cp1_ParamLimits

0x4f3a,	// (0x0001fa23) slider_cont_pane_cp1

0x4f4e,	// (0x0001fa37) slider_form_pane_cp

0x87bd,	// (0x000232a6) input_focus_pane_g1

0x87c5,	// (0x000232ae) input_focus_pane_g2

0x87cd,	// (0x000232b6) input_focus_pane_g3

0x87d5,	// (0x000232be) input_focus_pane_g4

0x87dd,	// (0x000232c6) input_focus_pane_g5

0x87e5,	// (0x000232ce) input_focus_pane_g6

0x87ed,	// (0x000232d6) input_focus_pane_g7

0x87f5,	// (0x000232de) input_focus_pane_g8

0x87fd,	// (0x000232e6) input_focus_pane_g9

0x7de6,	// (0x000228cf) input_focus_pane_g10

0x0009,

0xf687,	// (0x0002a170) input_focus_pane_g

0xa26b,	// (0x00024d54) wait_border_pane_g3_copy1

0x4f56,	// (0x0001fa3f) data_form_pane_t1

0x7de6,	// (0x000228cf) wait_anim_pane_g1_copy1

0x523f,	// (0x0001fd28) data_form_wide_pane_t1

0x4f71,	// (0x0001fa5a) list_form_graphic_pane_cp_ParamLimits

0x4f71,	// (0x0001fa5a) list_form_graphic_pane_cp

0xb180,	// (0x00025c69) slider_form_pane_g1

0xb189,	// (0x00025c72) slider_form_pane_g2

0x0006,

0xf983,	// (0x0002a46c) slider_form_pane_g

0x4f8a,	// (0x0001fa73) list_form_graphic_pane_ParamLimits

0x4f8a,	// (0x0001fa73) list_form_graphic_pane

0x4fa6,	// (0x0001fa8f) list_form_graphic_pane_g1

0x4fae,	// (0x0001fa97) list_form_graphic_pane_t1_ParamLimits

0x4fae,	// (0x0001fa97) list_form_graphic_pane_t1

0x7ed0,	// (0x000229b9) list_highlight_pane_cp5_ParamLimits

0x7ed0,	// (0x000229b9) list_highlight_pane_cp5

0x4fc3,	// (0x0001faac) find_pane_g1

0x8805,	// (0x000232ee) input_find_pane

0x4fcc,	// (0x0001fab5) input_find_pane_g1_ParamLimits

0x4fcc,	// (0x0001fab5) input_find_pane_g1

0x4fd8,	// (0x0001fac1) input_find_pane_t1_ParamLimits

0x4fd8,	// (0x0001fac1) input_find_pane_t1

0x4fed,	// (0x0001fad6) input_find_pane_t2_ParamLimits

0x4fed,	// (0x0001fad6) input_find_pane_t2

0x0001,

0xf69c,	// (0x0002a185) input_find_pane_t_ParamLimits

0xf69c,	// (0x0002a185) input_find_pane_t

0x880e,	// (0x000232f7) input_focus_pane_cp5_ParamLimits

0x880e,	// (0x000232f7) input_focus_pane_cp5

0x8828,	// (0x00023311) bg_popup_window_pane_cp2_ParamLimits

0x8828,	// (0x00023311) bg_popup_window_pane_cp2

0x8835,	// (0x0002331e) listscroll_menu_pane_ParamLimits

0x8835,	// (0x0002331e) listscroll_menu_pane

0x8841,	// (0x0002332a) popup_submenu_window_ParamLimits

0x8841,	// (0x0002332a) popup_submenu_window

0x886d,	// (0x00023356) find_popup_pane_g1

0x8875,	// (0x0002335e) input_popup_find_pane_cp

0x880e,	// (0x000232f7) input_focus_pane_cp4_ParamLimits

0x880e,	// (0x000232f7) input_focus_pane_cp4

0x888b,	// (0x00023374) input_popup_find_pane_t1_ParamLimits

0x888b,	// (0x00023374) input_popup_find_pane_t1

0x7df0,	// (0x000228d9) bg_popup_sub_pane_cp

0x88b9,	// (0x000233a2) listscroll_popup_sub_pane

0x88c1,	// (0x000233aa) list_submenu_pane_ParamLimits

0x88c1,	// (0x000233aa) list_submenu_pane

0x88d2,	// (0x000233bb) scroll_pane_cp4

0x88da,	// (0x000233c3) list_single_popup_submenu_pane_ParamLimits

0x88da,	// (0x000233c3) list_single_popup_submenu_pane

0x88ee,	// (0x000233d7) list_single_popup_submenu_pane_g1

0x88f6,	// (0x000233df) list_single_popup_submenu_pane_t1_ParamLimits

0x88f6,	// (0x000233df) list_single_popup_submenu_pane_t1

0x7ed0,	// (0x000229b9) bg_active_tab_pane_cp1_ParamLimits

0x7ed0,	// (0x000229b9) bg_active_tab_pane_cp1

0x890b,	// (0x000233f4) tabs_2_active_pane_g1

0x8913,	// (0x000233fc) tabs_2_active_pane_t1

0x7ed0,	// (0x000229b9) bg_passive_tab_pane_cp1_ParamLimits

0x7ed0,	// (0x000229b9) bg_passive_tab_pane_cp1

0x890b,	// (0x000233f4) tabs_2_passive_pane_g1

0x8913,	// (0x000233fc) tabs_2_passive_pane_t1

0x8925,	// (0x0002340e) bg_active_tab_pane_cp4

0x8933,	// (0x0002341c) tabs_2_long_active_pane_t1

0x8946,	// (0x0002342f) bg_passive_tab_pane_cp4

0x6ad5,	// (0x000215be) list_single_midp_graphic_pane_g4_ParamLimits

0x8925,	// (0x0002340e) bg_active_tab_pane_cp5

0x8952,	// (0x0002343b) tabs_3_long_active_pane_t1

0x8946,	// (0x0002342f) bg_passive_tab_pane_cp5

0x6ad5,	// (0x000215be) list_single_midp_graphic_pane_g4

0x7ed0,	// (0x000229b9) bg_popup_window_pane_cp13_ParamLimits

0x7ed0,	// (0x000229b9) bg_popup_window_pane_cp13

0x896d,	// (0x00023456) listscroll_popup_fast_pane_ParamLimits

0x896d,	// (0x00023456) listscroll_popup_fast_pane

0x897c,	// (0x00023465) grid_popup_fast_pane_ParamLimits

0x897c,	// (0x00023465) grid_popup_fast_pane

0x898e,	// (0x00023477) scroll_pane_cp9_ParamLimits

0x898e,	// (0x00023477) scroll_pane_cp9

0xca7f,	// (0x00027568) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xca7f,	// (0x00027568) list_single_graphic_hl_pane_t1_cp2

0x89b2,	// (0x0002349b) input_focus_pane_cp20_ParamLimits

0x89b2,	// (0x0002349b) input_focus_pane_cp20

0x89c0,	// (0x000234a9) query_popup_data_pane_t1_ParamLimits

0x89c0,	// (0x000234a9) query_popup_data_pane_t1

0x89d3,	// (0x000234bc) query_popup_data_pane_t2_ParamLimits

0x89d3,	// (0x000234bc) query_popup_data_pane_t2

0x8a19,	// (0x00023502) query_popup_data_pane_t3_ParamLimits

0x8a19,	// (0x00023502) query_popup_data_pane_t3

0x8a5a,	// (0x00023543) query_popup_data_pane_t4_ParamLimits

0x8a5a,	// (0x00023543) query_popup_data_pane_t4

0x8a96,	// (0x0002357f) query_popup_data_pane_t5_ParamLimits

0x8a96,	// (0x0002357f) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0002a18a) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0002a18a) query_popup_data_pane_t

0x87bd,	// (0x000232a6) bg_set_opt_pane_g1

0x87c5,	// (0x000232ae) bg_set_opt_pane_g2

0x87cd,	// (0x000232b6) bg_set_opt_pane_g3

0x87d5,	// (0x000232be) bg_set_opt_pane_g4

0x87dd,	// (0x000232c6) bg_set_opt_pane_g5

0x87e5,	// (0x000232ce) bg_set_opt_pane_g6

0x87ed,	// (0x000232d6) bg_set_opt_pane_g7

0x87f5,	// (0x000232de) bg_set_opt_pane_g8

0x87fd,	// (0x000232e6) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0002a195) bg_set_opt_pane_g

0x617b,	// (0x00020c64) control_top_pane_stacon_ParamLimits

0x617b,	// (0x00020c64) control_top_pane_stacon

0x61ce,	// (0x00020cb7) signal_pane_stacon_ParamLimits

0x61ce,	// (0x00020cb7) signal_pane_stacon

0x9088,	// (0x00023b71) stacon_top_pane_g1_ParamLimits

0x9088,	// (0x00023b71) stacon_top_pane_g1

0x61f3,	// (0x00020cdc) title_pane_stacon_ParamLimits

0x61f3,	// (0x00020cdc) title_pane_stacon

0x621d,	// (0x00020d06) uni_indicator_pane_stacon_ParamLimits

0x621d,	// (0x00020d06) uni_indicator_pane_stacon

0x6232,	// (0x00020d1b) battery_pane_stacon_ParamLimits

0x6232,	// (0x00020d1b) battery_pane_stacon

0x6276,	// (0x00020d5f) control_bottom_pane_stacon_ParamLimits

0x6276,	// (0x00020d5f) control_bottom_pane_stacon

0x6299,	// (0x00020d82) navi_pane_stacon_ParamLimits

0x6299,	// (0x00020d82) navi_pane_stacon

0x90aa,	// (0x00023b93) stacon_bottom_pane_g1_ParamLimits

0x90aa,	// (0x00023b93) stacon_bottom_pane_g1

0x5ede,	// (0x000209c7) aid_levels_signal_lsc_ParamLimits

0x5ede,	// (0x000209c7) aid_levels_signal_lsc

0x5ef4,	// (0x000209dd) signal_pane_stacon_g1_ParamLimits

0x5ef4,	// (0x000209dd) signal_pane_stacon_g1

0x5f08,	// (0x000209f1) signal_pane_stacon_g2_ParamLimits

0x5f08,	// (0x000209f1) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0002a1a8) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002a1a8) signal_pane_stacon_g

0x5f3d,	// (0x00020a26) title_pane_stacon_t1_ParamLimits

0x5f3d,	// (0x00020a26) title_pane_stacon_t1

0x8ada,	// (0x000235c3) uni_indicator_pane_stacon_g1

0x8ae4,	// (0x000235cd) uni_indicator_pane_stacon_g2

0x8aee,	// (0x000235d7) uni_indicator_pane_stacon_g3

0x8af8,	// (0x000235e1) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0002a1b4) uni_indicator_pane_stacon_g

0x5f62,	// (0x00020a4b) control_top_pane_stacon_g1

0x5f6a,	// (0x00020a53) control_top_pane_stacon_t1_ParamLimits

0x5f6a,	// (0x00020a53) control_top_pane_stacon_t1

0x5fa1,	// (0x00020a8a) aid_levels_battery_lsc_ParamLimits

0x5fa1,	// (0x00020a8a) aid_levels_battery_lsc

0x5fb8,	// (0x00020aa1) battery_pane_stacon_g1_ParamLimits

0x5fb8,	// (0x00020aa1) battery_pane_stacon_g1

0x5fcb,	// (0x00020ab4) battery_pane_stacon_g2_ParamLimits

0x5fcb,	// (0x00020ab4) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0002a1bd) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0002a1bd) battery_pane_stacon_g

0x6009,	// (0x00020af2) navi_icon_pane_stacon

0x601d,	// (0x00020b06) navi_navi_pane_stacon

0x6009,	// (0x00020af2) navi_text_pane_stacon

0x5f62,	// (0x00020a4b) control_bottom_pane_stacon_g1

0x6031,	// (0x00020b1a) control_bottom_pane_stacon_t1_ParamLimits

0x6031,	// (0x00020b1a) control_bottom_pane_stacon_t1

0x8b1c,	// (0x00023605) grid_app_pane_ParamLimits

0x8b1c,	// (0x00023605) grid_app_pane

0x8b3e,	// (0x00023627) scroll_pane_cp15_ParamLimits

0x8b3e,	// (0x00023627) scroll_pane_cp15

0x8b51,	// (0x0002363a) cell_app_pane_ParamLimits

0x8b51,	// (0x0002363a) cell_app_pane

0x8b79,	// (0x00023662) cell_app_pane_g1_ParamLimits

0x8b79,	// (0x00023662) cell_app_pane_g1

0x8b9d,	// (0x00023686) cell_app_pane_g2_ParamLimits

0x8b9d,	// (0x00023686) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0002a1c2) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0002a1c2) cell_app_pane_g

0x8ba9,	// (0x00023692) cell_app_pane_t1_ParamLimits

0x8ba9,	// (0x00023692) cell_app_pane_t1

0x8bc0,	// (0x000236a9) grid_highlight_pane_ParamLimits

0x8bc0,	// (0x000236a9) grid_highlight_pane

0x87bd,	// (0x000232a6) cell_highlight_pane_g1

0x87c5,	// (0x000232ae) cell_highlight_pane_g2

0x87cd,	// (0x000232b6) cell_highlight_pane_g3

0x87d5,	// (0x000232be) cell_highlight_pane_g4

0x87dd,	// (0x000232c6) cell_highlight_pane_g5

0x87e5,	// (0x000232ce) cell_highlight_pane_g6

0x87ed,	// (0x000232d6) cell_highlight_pane_g7

0x87f5,	// (0x000232de) cell_highlight_pane_g8

0x87fd,	// (0x000232e6) cell_highlight_pane_g9

0x7de6,	// (0x000228cf) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0002a170) cell_highlight_pane_g

0x8bd1,	// (0x000236ba) bg_scroll_pane

0x607b,	// (0x00020b64) scroll_handle_pane

0x8c18,	// (0x00023701) scroll_bg_pane_g1

0x8c2d,	// (0x00023716) scroll_bg_pane_g2

0x8c45,	// (0x0002372e) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0002a1c7) scroll_bg_pane_g

0x8c5a,	// (0x00023743) scroll_handle_focus_pane_ParamLimits

0x8c5a,	// (0x00023743) scroll_handle_focus_pane

0x8c18,	// (0x00023701) scroll_handle_pane_g1

0x8c67,	// (0x00023750) scroll_handle_pane_g2

0x8c45,	// (0x0002372e) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0002a1ce) scroll_handle_pane_g

0x880e,	// (0x000232f7) bg_popup_sub_pane_cp21_ParamLimits

0x880e,	// (0x000232f7) bg_popup_sub_pane_cp21

0x8c7b,	// (0x00023764) popup_fep_japan_predictive_window_t1_ParamLimits

0x8c7b,	// (0x00023764) popup_fep_japan_predictive_window_t1

0x8c95,	// (0x0002377e) popup_fep_japan_predictive_window_t2_ParamLimits

0x8c95,	// (0x0002377e) popup_fep_japan_predictive_window_t2

0x8cc8,	// (0x000237b1) popup_fep_japan_predictive_window_t3_ParamLimits

0x8cc8,	// (0x000237b1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0002a1d5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0002a1d5) popup_fep_japan_predictive_window_t

0x7df0,	// (0x000228d9) bg_popup_sub_pane_cp23

0x8cff,	// (0x000237e8) listscroll_japin_cand_pane

0x8d07,	// (0x000237f0) popup_fep_japan_candidate_window_t1

0x8d15,	// (0x000237fe) candidate_pane_ParamLimits

0x8d15,	// (0x000237fe) candidate_pane

0x8d27,	// (0x00023810) scroll_pane_cp30

0x8d2f,	// (0x00023818) list_single_popup_jap_candidate_pane_ParamLimits

0x8d2f,	// (0x00023818) list_single_popup_jap_candidate_pane

0x7df0,	// (0x000228d9) list_highlight_pane_cp30

0x8d44,	// (0x0002382d) list_single_popup_jap_candidate_pane_t1

0x8d53,	// (0x0002383c) level_1_signal

0x8d65,	// (0x0002384e) level_2_signal

0x8d78,	// (0x00023861) level_3_signal

0x8d8b,	// (0x00023874) level_4_signal

0x8d9e,	// (0x00023887) level_5_signal

0x8db1,	// (0x0002389a) level_6_signal

0x8dc4,	// (0x000238ad) level_7_signal

0x8d53,	// (0x0002383c) level_1_battery

0x8d65,	// (0x0002384e) level_2_battery

0x8d78,	// (0x00023861) level_3_battery

0x8d8b,	// (0x00023874) level_4_battery

0x8d9e,	// (0x00023887) level_5_battery

0x8db1,	// (0x0002389a) level_6_battery

0x8dc4,	// (0x000238ad) level_7_battery

0x8def,	// (0x000238d8) list_menu_pane_ParamLimits

0x8def,	// (0x000238d8) list_menu_pane

0x8e05,	// (0x000238ee) scroll_pane_cp25_ParamLimits

0x8e05,	// (0x000238ee) scroll_pane_cp25

0x8e1e,	// (0x00023907) list_double2_graphic_pane_cp2_ParamLimits

0x8e1e,	// (0x00023907) list_double2_graphic_pane_cp2

0x8e1e,	// (0x00023907) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e1e,	// (0x00023907) list_double2_large_graphic_pane_cp2

0x8e1e,	// (0x00023907) list_double2_pane_cp2_ParamLimits

0x8e1e,	// (0x00023907) list_double2_pane_cp2

0x8e1e,	// (0x00023907) list_double_graphic_pane_cp2_ParamLimits

0x8e1e,	// (0x00023907) list_double_graphic_pane_cp2

0x8e1e,	// (0x00023907) list_double_large_graphic_pane_cp2_ParamLimits

0x8e1e,	// (0x00023907) list_double_large_graphic_pane_cp2

0x8e1e,	// (0x00023907) list_double_number_pane_cp2_ParamLimits

0x8e1e,	// (0x00023907) list_double_number_pane_cp2

0x8e1e,	// (0x00023907) list_double_pane_cp2_ParamLimits

0x8e1e,	// (0x00023907) list_double_pane_cp2

0x8e42,	// (0x0002392b) list_single_2graphic_pane_cp2_ParamLimits

0x8e42,	// (0x0002392b) list_single_2graphic_pane_cp2

0x8e42,	// (0x0002392b) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e42,	// (0x0002392b) list_single_graphic_heading_pane_cp2

0x8e42,	// (0x0002392b) list_single_graphic_pane_cp2_ParamLimits

0x8e42,	// (0x0002392b) list_single_graphic_pane_cp2

0x8e42,	// (0x0002392b) list_single_heading_pane_cp2_ParamLimits

0x8e42,	// (0x0002392b) list_single_heading_pane_cp2

0x8e5b,	// (0x00023944) list_single_large_graphic_pane_cp2_ParamLimits

0x8e5b,	// (0x00023944) list_single_large_graphic_pane_cp2

0x8e42,	// (0x0002392b) list_single_number_heading_pane_cp2_ParamLimits

0x8e42,	// (0x0002392b) list_single_number_heading_pane_cp2

0x8e42,	// (0x0002392b) list_single_number_pane_cp2_ParamLimits

0x8e42,	// (0x0002392b) list_single_number_pane_cp2

0x8e42,	// (0x0002392b) list_single_pane_cp2_ParamLimits

0x8e42,	// (0x0002392b) list_single_pane_cp2

0x8ed7,	// (0x000239c0) bg_popup_sub_pane_cp22

0x612d,	// (0x00020c16) popup_side_volume_key_window_g1

0x6157,	// (0x00020c40) popup_side_volume_key_window_t1

0x6173,	// (0x00020c5c) volume_small_pane_cp1

0x814b,	// (0x00022c34) bg_popup_sub_pane_cp24_ParamLimits

0x814b,	// (0x00022c34) bg_popup_sub_pane_cp24

0x8eed,	// (0x000239d6) fep_china_uni_candidate_pane_ParamLimits

0x8eed,	// (0x000239d6) fep_china_uni_candidate_pane

0x8f01,	// (0x000239ea) fep_china_uni_entry_pane

0x8f11,	// (0x000239fa) popup_fep_china_uni_window_g1

0x8f2d,	// (0x00023a16) fep_china_uni_entry_pane_g1

0x8f35,	// (0x00023a1e) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0002a206) fep_china_uni_entry_pane_g

0x8f3d,	// (0x00023a26) fep_entry_item_pane

0x8f47,	// (0x00023a30) fep_candidate_item_pane

0x8f4f,	// (0x00023a38) fep_china_uni_candidate_pane_g1

0x8f57,	// (0x00023a40) fep_china_uni_candidate_pane_g2

0x8f5f,	// (0x00023a48) fep_china_uni_candidate_pane_g3

0x8f67,	// (0x00023a50) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0002a20b) fep_china_uni_candidate_pane_g

0x7de6,	// (0x000228cf) fep_entry_item_pane_g1

0x8f6f,	// (0x00023a58) fep_entry_item_pane_t1_ParamLimits

0x8f6f,	// (0x00023a58) fep_entry_item_pane_t1

0x8f85,	// (0x00023a6e) fep_candidate_item_pane_t1_ParamLimits

0x8f85,	// (0x00023a6e) fep_candidate_item_pane_t1

0x8f9a,	// (0x00023a83) fep_candidate_item_pane_t2_ParamLimits

0x8f9a,	// (0x00023a83) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0002a214) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0002a214) fep_candidate_item_pane_t

0x7ed0,	// (0x000229b9) list_highlight_pane_cp31_ParamLimits

0x7ed0,	// (0x000229b9) list_highlight_pane_cp31

0x8fac,	// (0x00023a95) level_1_signal_lsc

0x8fb5,	// (0x00023a9e) level_2_signal_lsc

0x8fbe,	// (0x00023aa7) level_3_signal_lsc

0x8fc7,	// (0x00023ab0) level_4_signal_lsc

0x8fd0,	// (0x00023ab9) level_5_signal_lsc

0x8fd9,	// (0x00023ac2) level_6_signal_lsc

0x8fe2,	// (0x00023acb) level_7_signal_lsc

0x8fe2,	// (0x00023acb) level_1_battery_lsc

0x8feb,	// (0x00023ad4) level_2_battery_lsc

0x8ff4,	// (0x00023add) level_3_battery_lsc

0x8ffd,	// (0x00023ae6) level_4_battery_lsc

0x9006,	// (0x00023aef) level_5_battery_lsc

0x900f,	// (0x00023af8) level_6_battery_lsc

0x8fac,	// (0x00023a95) level_7_battery_lsc

0x9018,	// (0x00023b01) scroll_handle_focus_pane_g1

0x9021,	// (0x00023b0a) scroll_handle_focus_pane_g2

0x902a,	// (0x00023b13) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0002a219) scroll_handle_focus_pane_g

0x5002,	// (0x0001faeb) list_single_2graphic_pane_g1_ParamLimits

0x5002,	// (0x0001faeb) list_single_2graphic_pane_g1

0x4994,	// (0x0001f47d) list_single_2graphic_pane_g2_ParamLimits

0x4994,	// (0x0001f47d) list_single_2graphic_pane_g2

0x491a,	// (0x0001f403) list_single_2graphic_pane_g3_ParamLimits

0x491a,	// (0x0001f403) list_single_2graphic_pane_g3

0x500e,	// (0x0001faf7) list_single_2graphic_pane_g4_ParamLimits

0x500e,	// (0x0001faf7) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0002a220) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0002a220) list_single_2graphic_pane_g

0x501a,	// (0x0001fb03) list_single_2graphic_pane_t1_ParamLimits

0x501a,	// (0x0001fb03) list_single_2graphic_pane_t1

0x5048,	// (0x0001fb31) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5048,	// (0x0001fb31) list_double2_graphic_large_graphic_pane_g1

0x4a39,	// (0x0001f522) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4a39,	// (0x0001f522) list_double2_graphic_large_graphic_pane_g2

0x4a4a,	// (0x0001f533) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4a4a,	// (0x0001f533) list_double2_graphic_large_graphic_pane_g3

0x5058,	// (0x0001fb41) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5058,	// (0x0001fb41) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0002a229) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0002a229) list_double2_graphic_large_graphic_pane_g

0x5064,	// (0x0001fb4d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5064,	// (0x0001fb4d) list_double2_graphic_large_graphic_pane_t1

0x507a,	// (0x0001fb63) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x507a,	// (0x0001fb63) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0002a232) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0002a232) list_double2_graphic_large_graphic_pane_t

0x9172,	// (0x00023c5b) popup_fast_swap_window_ParamLimits

0x9172,	// (0x00023c5b) popup_fast_swap_window

0x918e,	// (0x00023c77) popup_side_volume_key_window

0x91aa,	// (0x00023c93) stacon_top_pane

0x91b4,	// (0x00023c9d) status_pane_ParamLimits

0x91b4,	// (0x00023c9d) status_pane

0x91c2,	// (0x00023cab) status_small_pane

0x7df0,	// (0x000228d9) control_pane

0x7df0,	// (0x000228d9) stacon_bottom_pane

0x8748,	// (0x00023231) scroll_pane_cp121

0x873f,	// (0x00023228) set_content_pane

0x9033,	// (0x00023b1c) bg_active_tab_pane_g1_cp1

0x903c,	// (0x00023b25) bg_active_tab_pane_g2_cp1

0x9045,	// (0x00023b2e) bg_active_tab_pane_g3_cp1

0x9033,	// (0x00023b1c) bg_passive_tab_pane_g1_cp1

0x903c,	// (0x00023b25) bg_passive_tab_pane_g2_cp1

0x9045,	// (0x00023b2e) bg_passive_tab_pane_g3_cp1

0x904e,	// (0x00023b37) bg_active_tab_pane_g1_cp2

0x903c,	// (0x00023b25) bg_active_tab_pane_g2_cp2

0x9057,	// (0x00023b40) bg_active_tab_pane_g3_cp2

0x904e,	// (0x00023b37) bg_passive_tab_pane_g1_cp2

0x903c,	// (0x00023b25) bg_passive_tab_pane_g2_cp2

0x9057,	// (0x00023b40) bg_passive_tab_pane_g3_cp2

0x9060,	// (0x00023b49) bg_active_tab_pane_g1_cp3

0x903c,	// (0x00023b25) bg_active_tab_pane_g2_cp3

0x9069,	// (0x00023b52) bg_active_tab_pane_g3_cp3

0x9060,	// (0x00023b49) bg_passive_tab_pane_g1_cp3

0x903c,	// (0x00023b25) bg_passive_tab_pane_g2_cp3

0x9069,	// (0x00023b52) bg_passive_tab_pane_g3_cp3

0x9072,	// (0x00023b5b) bg_active_tab_pane_g1_cp4

0x903c,	// (0x00023b25) bg_active_tab_pane_g2_cp4

0x907d,	// (0x00023b66) bg_active_tab_pane_g3_cp4

0x9072,	// (0x00023b5b) bg_passive_tab_pane_g1_cp4

0x903c,	// (0x00023b25) bg_passive_tab_pane_g2_cp4

0x907d,	// (0x00023b66) bg_passive_tab_pane_g3_cp4

0x90c6,	// (0x00023baf) bg_active_tab_pane_g1_cp5

0x903c,	// (0x00023b25) bg_active_tab_pane_g2_cp5

0x90cf,	// (0x00023bb8) bg_active_tab_pane_g3_cp5

0x90c6,	// (0x00023baf) bg_passive_tab_pane_g1_cp5

0x903c,	// (0x00023b25) bg_passive_tab_pane_g2_cp5

0x90cf,	// (0x00023bb8) bg_passive_tab_pane_g3_cp5

0x90d8,	// (0x00023bc1) list_set_graphic_pane_ParamLimits

0x90d8,	// (0x00023bc1) list_set_graphic_pane

0x7df0,	// (0x000228d9) bg_set_opt_pane_cp4

0x90f5,	// (0x00023bde) list_set_graphic_pane_g1_ParamLimits

0x90f5,	// (0x00023bde) list_set_graphic_pane_g1

0x9101,	// (0x00023bea) list_set_graphic_pane_g2_ParamLimits

0x9101,	// (0x00023bea) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0002a237) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0002a237) list_set_graphic_pane_g

0x0009,

0xfabc,	// (0x0002a5a5) volume_small_pane_cp_g

0x9125,	// (0x00023c0e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9125,	// (0x00023c0e) list_double2_large_graphic_pane_g1_cp2

0x9131,	// (0x00023c1a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9131,	// (0x00023c1a) list_double2_large_graphic_pane_g2_cp2

0x9142,	// (0x00023c2b) list_double2_large_graphic_pane_g3_cp2

0x914a,	// (0x00023c33) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x914a,	// (0x00023c33) list_double2_large_graphic_pane_t1_cp2

0x9160,	// (0x00023c49) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9160,	// (0x00023c49) list_double2_large_graphic_pane_t2_cp2

0xad3e,	// (0x00025827) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad3e,	// (0x00025827) list_double_large_graphic_pane_g1_cp2

0xad4f,	// (0x00025838) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad4f,	// (0x00025838) list_double_large_graphic_pane_g2_cp2

0x92db,	// (0x00023dc4) list_double_large_graphic_pane_g3_cp2

0xad60,	// (0x00025849) list_double_large_graphic_pane_g4_cp

0xad68,	// (0x00025851) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad68,	// (0x00025851) list_double_large_graphic_pane_t1_cp2

0xad7f,	// (0x00025868) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad7f,	// (0x00025868) list_double_large_graphic_pane_t2_cp2

0x91cd,	// (0x00023cb6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x91cd,	// (0x00023cb6) list_double2_graphic_pane_g1_cp2

0x91db,	// (0x00023cc4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x91db,	// (0x00023cc4) list_double2_graphic_pane_g2_cp2

0x91ec,	// (0x00023cd5) list_double2_graphic_pane_g3_cp2

0x91f6,	// (0x00023cdf) list_double2_graphic_pane_t1_cp2_ParamLimits

0x91f6,	// (0x00023cdf) list_double2_graphic_pane_t1_cp2

0x920c,	// (0x00023cf5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x920c,	// (0x00023cf5) list_double2_graphic_pane_t2_cp2

0x921e,	// (0x00023d07) list_single_number_heading_pane_g1_cp2_ParamLimits

0x921e,	// (0x00023d07) list_single_number_heading_pane_g1_cp2

0x922a,	// (0x00023d13) list_single_number_heading_pane_g2_cp2

0x9232,	// (0x00023d1b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9232,	// (0x00023d1b) list_single_number_heading_pane_t1_cp2

0x9248,	// (0x00023d31) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9248,	// (0x00023d31) list_single_number_heading_pane_t2_cp2

0x925a,	// (0x00023d43) list_single_number_heading_pane_t3_cp2_ParamLimits

0x925a,	// (0x00023d43) list_single_number_heading_pane_t3_cp2

0x921e,	// (0x00023d07) list_single_heading_pane_g1_cp2_ParamLimits

0x921e,	// (0x00023d07) list_single_heading_pane_g1_cp2

0x922a,	// (0x00023d13) list_single_heading_pane_g2_cp2

0x9232,	// (0x00023d1b) list_single_heading_pane_t1_cp2_ParamLimits

0x9232,	// (0x00023d1b) list_single_heading_pane_t1_cp2

0xab46,	// (0x0002562f) list_single_heading_pane_t2_cp2_ParamLimits

0xab46,	// (0x0002562f) list_single_heading_pane_t2_cp2

0xaa8e,	// (0x00025577) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa8e,	// (0x00025577) list_double_graphic_pane_g1_cp2

0xaa9a,	// (0x00025583) list_double_graphic_pane_g2_cp2_ParamLimits

0xaa9a,	// (0x00025583) list_double_graphic_pane_g2_cp2

0xaaa9,	// (0x00025592) list_double_graphic_pane_g3_cp2

0xaab1,	// (0x0002559a) list_double_graphic_pane_t1_cp2_ParamLimits

0xaab1,	// (0x0002559a) list_double_graphic_pane_t1_cp2

0xaac7,	// (0x000255b0) list_double_graphic_pane_t2_cp2_ParamLimits

0xaac7,	// (0x000255b0) list_double_graphic_pane_t2_cp2

0x92cf,	// (0x00023db8) list_double_number_pane_g1_cp2_ParamLimits

0x92cf,	// (0x00023db8) list_double_number_pane_g1_cp2

0x92db,	// (0x00023dc4) list_double_number_pane_g2_cp2

0xaa52,	// (0x0002553b) list_double_number_pane_t1_cp2_ParamLimits

0xaa52,	// (0x0002553b) list_double_number_pane_t1_cp2

0xaa66,	// (0x0002554f) list_double_number_pane_t2_cp2_ParamLimits

0xaa66,	// (0x0002554f) list_double_number_pane_t2_cp2

0xaa7c,	// (0x00025565) list_double_number_pane_t3_cp2_ParamLimits

0xaa7c,	// (0x00025565) list_double_number_pane_t3_cp2

0xa93b,	// (0x00025424) list_single_graphic_pane_g1_cp2_ParamLimits

0xa93b,	// (0x00025424) list_single_graphic_pane_g1_cp2

0x9333,	// (0x00023e1c) list_single_graphic_pane_g2_cp2_ParamLimits

0x9333,	// (0x00023e1c) list_single_graphic_pane_g2_cp2

0x933f,	// (0x00023e28) list_single_graphic_pane_g3_cp2

0xa911,	// (0x000253fa) list_single_graphic_pane_t1_cp2_ParamLimits

0xa911,	// (0x000253fa) list_single_graphic_pane_t1_cp2

0x9333,	// (0x00023e1c) list_single_number_pane_g1_cp2_ParamLimits

0x9333,	// (0x00023e1c) list_single_number_pane_g1_cp2

0x933f,	// (0x00023e28) list_single_number_pane_g2_cp2

0xa911,	// (0x000253fa) list_single_number_pane_t1_cp2_ParamLimits

0xa911,	// (0x000253fa) list_single_number_pane_t1_cp2

0xa927,	// (0x00025410) list_single_number_pane_t2_cp2_ParamLimits

0xa927,	// (0x00025410) list_single_number_pane_t2_cp2

0x9131,	// (0x00023c1a) list_double2_pane_g1_cp2_ParamLimits

0x9131,	// (0x00023c1a) list_double2_pane_g1_cp2

0x9142,	// (0x00023c2b) list_double2_pane_g2_cp2

0x92a7,	// (0x00023d90) list_double2_pane_t1_cp2_ParamLimits

0x92a7,	// (0x00023d90) list_double2_pane_t1_cp2

0x92bd,	// (0x00023da6) list_double2_pane_t2_cp2_ParamLimits

0x92bd,	// (0x00023da6) list_double2_pane_t2_cp2

0x92cf,	// (0x00023db8) list_double_pane_g1_cp2_ParamLimits

0x92cf,	// (0x00023db8) list_double_pane_g1_cp2

0x92db,	// (0x00023dc4) list_double_pane_g2_cp2

0x92e3,	// (0x00023dcc) list_double_pane_t1_cp2_ParamLimits

0x92e3,	// (0x00023dcc) list_double_pane_t1_cp2

0x92f9,	// (0x00023de2) list_double_pane_t2_cp2_ParamLimits

0x92f9,	// (0x00023de2) list_double_pane_t2_cp2

0x9323,	// (0x00023e0c) list_single_pane_cp2_g3

0x9333,	// (0x00023e1c) list_single_pane_g1_cp2_ParamLimits

0x9333,	// (0x00023e1c) list_single_pane_g1_cp2

0x933f,	// (0x00023e28) list_single_pane_g2_cp2

0x9347,	// (0x00023e30) list_single_pane_t1_cp2_ParamLimits

0x9347,	// (0x00023e30) list_single_pane_t1_cp2

0x935f,	// (0x00023e48) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x935f,	// (0x00023e48) list_single_large_graphic_pane_g1_cp2

0x936b,	// (0x00023e54) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x936b,	// (0x00023e54) list_single_large_graphic_pane_g2_cp2

0x9377,	// (0x00023e60) list_single_large_graphic_pane_g3_cp2

0x937f,	// (0x00023e68) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x937f,	// (0x00023e68) list_single_large_graphic_pane_g4_cp1

0x9399,	// (0x00023e82) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9399,	// (0x00023e82) list_single_large_graphic_pane_t1_cp2

0xa8dd,	// (0x000253c6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa8dd,	// (0x000253c6) list_single_graphic_heading_pane_g1_cp2

0xa8aa,	// (0x00025393) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8aa,	// (0x00025393) list_single_graphic_heading_pane_g4_cp2

0x933f,	// (0x00023e28) list_single_graphic_heading_pane_g5_cp2

0xa8e9,	// (0x000253d2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa8e9,	// (0x000253d2) list_single_graphic_heading_pane_t1_cp2

0xa8ff,	// (0x000253e8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa8ff,	// (0x000253e8) list_single_graphic_heading_pane_t2_cp2

0xa89e,	// (0x00025387) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa89e,	// (0x00025387) list_single_2graphic_pane_g1_cp2

0xa8aa,	// (0x00025393) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8aa,	// (0x00025393) list_single_2graphic_pane_g2_cp2

0x933f,	// (0x00023e28) list_single_2graphic_pane_g3_cp2

0xa8bb,	// (0x000253a4) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa8bb,	// (0x000253a4) list_single_2graphic_pane_g4_cp2

0xa8c7,	// (0x000253b0) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa8c7,	// (0x000253b0) list_single_2graphic_pane_t1_cp2

0x7de6,	// (0x000228cf) list_highlight_pane_g10_cp1

0xa476,	// (0x00024f5f) list_highlight_pane_g1_cp1

0xa47e,	// (0x00024f67) list_highlight_pane_g2_cp1

0xa486,	// (0x00024f6f) list_highlight_pane_g3_cp1

0xa48e,	// (0x00024f77) list_highlight_pane_g4_cp1

0xa496,	// (0x00024f7f) list_highlight_pane_g5_cp1

0xa49e,	// (0x00024f87) list_highlight_pane_g6_cp1

0xa4a6,	// (0x00024f8f) list_highlight_pane_g7_cp1

0xa4ae,	// (0x00024f97) list_highlight_pane_g8_cp1

0xa4b6,	// (0x00024f9f) list_highlight_pane_g9_cp1

0xa396,	// (0x00024e7f) form_field_slider_pane_t3

0xa3a4,	// (0x00024e8d) form_field_slider_pane_t4

0xa3b2,	// (0x00024e9b) slider_form_pane_ParamLimits

0xa3b2,	// (0x00024e9b) slider_form_pane

0x7df0,	// (0x000228d9) control_abbreviations

0x7df0,	// (0x000228d9) control_conventions

0x7df0,	// (0x000228d9) control_definitions

0x7df0,	// (0x000228d9) format_table_attribute

0xab90,	// (0x00025679) bg_popup_preview_window_pane_g9

0x7df0,	// (0x000228d9) format_table_data2

0x7df0,	// (0x000228d9) format_table_data3

0x7df0,	// (0x000228d9) format_table_data_example

0x0008,

0x7df0,	// (0x000228d9) intro_purpose

0xf8e3,	// (0x0002a3cc) bg_popup_preview_window_pane_g

0x7df0,	// (0x000228d9) texts_category

0x7df0,	// (0x000228d9) texts_graphics

0x93af,	// (0x00023e98) text_digital

0x93be,	// (0x00023ea7) text_primary

0x93cd,	// (0x00023eb6) text_primary_small

0x93dc,	// (0x00023ec5) text_secondary

0x93eb,	// (0x00023ed4) text_title

0xb2bf,	// (0x00025da8) bg_passive_tab_pane_g1_cp3_srt

0x903c,	// (0x00023b25) bg_passive_tab_pane_g2_cp3_srt

0xb2c8,	// (0x00025db1) bg_passive_tab_pane_g3_cp3_srt

0x7ed0,	// (0x000229b9) bg_active_tab_pane_cp3_srt_ParamLimits

0x7ed0,	// (0x000229b9) bg_active_tab_pane_cp3_srt

0xb2d1,	// (0x00025dba) tabs_4_active_pane_srt_g1

0xb2d9,	// (0x00025dc2) tabs_4_active_pane_srt_t1_ParamLimits

0xb2d9,	// (0x00025dc2) tabs_4_active_pane_srt_t1

0xb2bf,	// (0x00025da8) bg_active_tab_pane_g1_cp3_copy1

0x903c,	// (0x00023b25) bg_active_tab_pane_g2_cp3_copy1

0xb2c8,	// (0x00025db1) bg_active_tab_pane_g3_cp3_copy1

0x7ed0,	// (0x000229b9) tabs_2_long_active_pane_srt_ParamLimits

0x7ed0,	// (0x000229b9) tabs_2_long_active_pane_srt

0x7ed0,	// (0x000229b9) tabs_2_long_passive_pane_srt_ParamLimits

0x7ed0,	// (0x000229b9) tabs_2_long_passive_pane_srt

0x8946,	// (0x0002342f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8946,	// (0x0002342f) bg_passive_tab_pane_cp4_srt

0xafb3,	// (0x00025a9c) bg_passive_tab_pane_g1_cp4_srt

0x903c,	// (0x00023b25) bg_passive_tab_pane_g2_cp4_srt

0xafbc,	// (0x00025aa5) bg_passive_tab_pane_g3_cp4_srt

0x8925,	// (0x0002340e) bg_active_tab_pane_cp4_srt_ParamLimits

0x8925,	// (0x0002340e) bg_active_tab_pane_cp4_srt

0xafc5,	// (0x00025aae) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafc5,	// (0x00025aae) tabs_2_long_active_pane_srt_t1

0xafb3,	// (0x00025a9c) bg_active_tab_pane_g1_cp4_srt

0x903c,	// (0x00023b25) bg_active_tab_pane_g2_cp4_srt

0xafbc,	// (0x00025aa5) bg_active_tab_pane_g3_cp4_srt

0x814b,	// (0x00022c34) tabs_3_long_active_pane_srt_ParamLimits

0x814b,	// (0x00022c34) tabs_3_long_active_pane_srt

0x814b,	// (0x00022c34) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x814b,	// (0x00022c34) tabs_3_long_passive_pane_cp_srt

0x814b,	// (0x00022c34) tabs_3_long_passive_pane_srt_ParamLimits

0x814b,	// (0x00022c34) tabs_3_long_passive_pane_srt

0x8946,	// (0x0002342f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8946,	// (0x0002342f) bg_passive_tab_pane_cp5_srt

0x90c6,	// (0x00023baf) bg_passive_tab_pane_g1_cp5_srt

0x903c,	// (0x00023b25) bg_passive_tab_pane_g2_cp5_srt

0x90cf,	// (0x00023bb8) bg_passive_tab_pane_g3_cp5_srt

0x8925,	// (0x0002340e) bg_active_tab_pane_cp5_srt_ParamLimits

0x8925,	// (0x0002340e) bg_active_tab_pane_cp5_srt

0xafa1,	// (0x00025a8a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafa1,	// (0x00025a8a) tabs_3_long_active_pane_srt_t1

0x90c6,	// (0x00023baf) bg_active_tab_pane_g1_cp5_srt

0x903c,	// (0x00023b25) bg_active_tab_pane_g2_cp5_srt

0x90cf,	// (0x00023bb8) bg_active_tab_pane_g3_cp5_srt

0xaf93,	// (0x00025a7c) navi_text_pane_srt_t1

0xaf8b,	// (0x00025a74) navi_icon_pane_srt_g1

0x95c0,	// (0x000240a9) midp_editing_number_pane_srt

0x93fa,	// (0x00023ee3) midp_ticker_pane_srt

0x95c8,	// (0x000240b1) midp_ticker_pane_srt_g1

0x95d0,	// (0x000240b9) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0002a256) midp_ticker_pane_srt_g

0x95d8,	// (0x000240c1) midp_ticker_pane_srt_t1

0xaf7c,	// (0x00025a65) midp_editing_number_pane_t1_copy1

0x9402,	// (0x00023eeb) listscroll_midp_pane

0x9402,	// (0x00023eeb) midp_form_pane

0x9472,	// (0x00023f5b) midp_info_popup_window_ParamLimits

0x9472,	// (0x00023f5b) midp_info_popup_window

0x880e,	// (0x000232f7) bg_popup_sub_pane_cp50_ParamLimits

0x880e,	// (0x000232f7) bg_popup_sub_pane_cp50

0xa0a2,	// (0x00024b8b) listscroll_midp_info_pane_ParamLimits

0xa0a2,	// (0x00024b8b) listscroll_midp_info_pane

0xa082,	// (0x00024b6b) listscroll_form_midp_pane_ParamLimits

0xa082,	// (0x00024b6b) listscroll_form_midp_pane

0xa08e,	// (0x00024b77) scroll_bar_cp050

0xa062,	// (0x00024b4b) list_midp_pane

0xbd0f,	// (0x000267f8) signal_pane_g2_cp

0x9f9c,	// (0x00024a85) listscroll_midp_info_pane_t1_ParamLimits

0x9f9c,	// (0x00024a85) listscroll_midp_info_pane_t1

0x9fb4,	// (0x00024a9d) listscroll_midp_info_pane_t2_ParamLimits

0x9fb4,	// (0x00024a9d) listscroll_midp_info_pane_t2

0x9ff2,	// (0x00024adb) listscroll_midp_info_pane_t3_ParamLimits

0x9ff2,	// (0x00024adb) listscroll_midp_info_pane_t3

0xa02c,	// (0x00024b15) listscroll_midp_info_pane_t4_ParamLimits

0xa02c,	// (0x00024b15) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0002a307) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0002a307) listscroll_midp_info_pane_t

0x88d2,	// (0x000233bb) scroll_pane_cp21

0x9f3a,	// (0x00024a23) form_midp_field_choice_group_pane

0x9f43,	// (0x00024a2c) form_midp_field_text_pane

0x9f82,	// (0x00024a6b) form_midp_field_time_pane

0x9f8a,	// (0x00024a73) form_midp_gauge_slider_pane

0x9f93,	// (0x00024a7c) form_midp_gauge_wait_pane

0x7df0,	// (0x000228d9) form_midp_image_pane

0x51e5,	// (0x0001fcce) list_single_midp_pane_ParamLimits

0x51e5,	// (0x0001fcce) list_single_midp_pane

0x9ee6,	// (0x000249cf) form_midp_field_text_pane_t1

0x9cb6,	// (0x0002479f) input_focus_pane_cp050

0x9f1d,	// (0x00024a06) list_midp_form_text_pane

0x9eb5,	// (0x0002499e) form_midp_field_choice_group_pane_t1

0x9ec3,	// (0x000249ac) input_focus_pane_cp051

0x9ed7,	// (0x000249c0) list_midp_choice_pane

0x7df0,	// (0x000228d9) status_idle_pane

0x9e99,	// (0x00024982) form_midp_field_time_pane_t1

0x7de6,	// (0x000228cf) wait_anim_pane_g2_copy1

0x9ea7,	// (0x00024990) form_midp_field_time_pane_t2

0x0001,

0x9520,	// (0x00024009) aid_navinavi_width_2_pane

0xf819,	// (0x0002a302) form_midp_field_time_pane_t

0x7df0,	// (0x000228d9) input_focus_pane_cp052

0x7df0,	// (0x000228d9) bg_input_focus_pane_cp040

0x9e59,	// (0x00024942) form_midp_gauge_slider_pane_t1

0x9e67,	// (0x00024950) form_midp_gauge_slider_pane_t2

0x9e75,	// (0x0002495e) form_midp_gauge_slider_pane_t3

0x9e83,	// (0x0002496c) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0002a2f9) form_midp_gauge_slider_pane_t

0x9e91,	// (0x0002497a) form_midp_slider_pane

0x7ed0,	// (0x000229b9) bg_input_focus_pane_cp041_ParamLimits

0x7ed0,	// (0x000229b9) bg_input_focus_pane_cp041

0x9e26,	// (0x0002490f) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e26,	// (0x0002490f) form_midp_gauge_wait_pane_t1

0x9e38,	// (0x00024921) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e38,	// (0x00024921) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x0002a2f4) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x0002a2f4) form_midp_gauge_wait_pane_t

0x9e4a,	// (0x00024933) form_midp_wait_pane_ParamLimits

0x9e4a,	// (0x00024933) form_midp_wait_pane

0x9df0,	// (0x000248d9) form_midp_image_pane_g1

0x9df9,	// (0x000248e2) form_midp_image_pane_t1

0x9e08,	// (0x000248f1) form_midp_image_pane_t2

0x9e17,	// (0x00024900) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0002a2ed) form_midp_image_pane_t

0x9de7,	// (0x000248d0) list_single_midp_pane_g1

0x51d6,	// (0x0001fcbf) list_single_midp_pane_t1

0x9dbf,	// (0x000248a8) list_midp_form_item_pane_ParamLimits

0x9dbf,	// (0x000248a8) list_midp_form_item_pane

0x94c8,	// (0x00023fb1) list_midp_form_item_pane_t1

0x94d7,	// (0x00023fc0) midp_ticker_pane_g1

0x94e3,	// (0x00023fcc) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0002a23c) midp_ticker_pane_g

0x94ef,	// (0x00023fd8) midp_ticker_pane_t1

0xb1cd,	// (0x00025cb6) midp_editing_number_pane_t1

0xb1ab,	// (0x00025c94) midp_editing_number_pane

0xb1ba,	// (0x00025ca3) midp_ticker_pane

0xaf6c,	// (0x00025a55) ai_message_heading_pane

0x7df0,	// (0x000228d9) bg_popup_window_pane_cp14

0xaf74,	// (0x00025a5d) listscroll_ai_message_pane

0xaef6,	// (0x000259df) ai_message_heading_pane_g1_ParamLimits

0xaef6,	// (0x000259df) ai_message_heading_pane_g1

0xaf02,	// (0x000259eb) ai_message_heading_pane_g2_ParamLimits

0xaf02,	// (0x000259eb) ai_message_heading_pane_g2

0xaf0e,	// (0x000259f7) ai_message_heading_pane_g3_ParamLimits

0xaf0e,	// (0x000259f7) ai_message_heading_pane_g3

0xaf1a,	// (0x00025a03) ai_message_heading_pane_g4_ParamLimits

0xaf1a,	// (0x00025a03) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x0002a42e) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x0002a42e) ai_message_heading_pane_g

0xaf26,	// (0x00025a0f) ai_message_heading_pane_t1_ParamLimits

0xaf26,	// (0x00025a0f) ai_message_heading_pane_t1

0xaf40,	// (0x00025a29) ai_message_heading_pane_t2_ParamLimits

0xaf40,	// (0x00025a29) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0002a437) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0002a437) ai_message_heading_pane_t

0xaf52,	// (0x00025a3b) bg_popup_heading_pane_cp1_ParamLimits

0xaf52,	// (0x00025a3b) bg_popup_heading_pane_cp1

0xaee4,	// (0x000259cd) list_ai_message_pane_ParamLimits

0xaee4,	// (0x000259cd) list_ai_message_pane

0x88d2,	// (0x000233bb) scroll_pane_cp10

0xae80,	// (0x00025969) list_ai_message_pane_g1

0xae88,	// (0x00025971) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0002a40b) list_ai_message_pane_g

0xae90,	// (0x00025979) list_ai_message_pane_t1_ParamLimits

0xae90,	// (0x00025979) list_ai_message_pane_t1

0xaea5,	// (0x0002598e) list_ai_message_pane_t2_ParamLimits

0xaea5,	// (0x0002598e) list_ai_message_pane_t2

0xaeba,	// (0x000259a3) list_ai_message_pane_t3_ParamLimits

0xaeba,	// (0x000259a3) list_ai_message_pane_t3

0xaecf,	// (0x000259b8) list_ai_message_pane_t4_ParamLimits

0xaecf,	// (0x000259b8) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0002a410) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0002a410) list_ai_message_pane_t

0xae6b,	// (0x00025954) cell_ai_soft_ind_pane_ParamLimits

0xae6b,	// (0x00025954) cell_ai_soft_ind_pane

0x9501,	// (0x00023fea) cell_ai_soft_ind_pane_g1_ParamLimits

0x9501,	// (0x00023fea) cell_ai_soft_ind_pane_g1

0x7df0,	// (0x000228d9) grid_highlight_cp1

0x950e,	// (0x00023ff7) text_secondary_cp56_ParamLimits

0x950e,	// (0x00023ff7) text_secondary_cp56

0xae40,	// (0x00025929) example_general_pane_ParamLimits

0xae40,	// (0x00025929) example_general_pane

0xae4c,	// (0x00025935) example_parent_pane_g1_ParamLimits

0xae4c,	// (0x00025935) example_parent_pane_g1

0xae58,	// (0x00025941) example_parent_pane_t1_ParamLimits

0xae58,	// (0x00025941) example_parent_pane_t1

0x6850,	// (0x00021339) popup_preview_text_window_ParamLimits

0x6850,	// (0x00021339) popup_preview_text_window

0x932b,	// (0x00023e14) list_single_pane_cp2_g4

0x8227,	// (0x00022d10) bg_popup_preview_window_pane_ParamLimits

0x8227,	// (0x00022d10) bg_popup_preview_window_pane

0xab98,	// (0x00025681) popup_preview_text_window_t1_ParamLimits

0xab98,	// (0x00025681) popup_preview_text_window_t1

0xabb6,	// (0x0002569f) popup_preview_text_window_t2_ParamLimits

0xabb6,	// (0x0002569f) popup_preview_text_window_t2

0xabff,	// (0x000256e8) popup_preview_text_window_t3_ParamLimits

0xabff,	// (0x000256e8) popup_preview_text_window_t3

0xac44,	// (0x0002572d) popup_preview_text_window_t4_ParamLimits

0xac44,	// (0x0002572d) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0002a3df) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0002a3df) popup_preview_text_window_t

0xacc2,	// (0x000257ab) scroll_pane_cp11

0x9c42,	// (0x0002472b) bg_popup_preview_window_pane_g1

0xab58,	// (0x00025641) bg_popup_preview_window_pane_g2

0xab60,	// (0x00025649) bg_popup_preview_window_pane_g3

0xab68,	// (0x00025651) bg_popup_preview_window_pane_g4

0xab70,	// (0x00025659) bg_popup_preview_window_pane_g5

0xab78,	// (0x00025661) bg_popup_preview_window_pane_g6

0xab80,	// (0x00025669) bg_popup_preview_window_pane_g7

0xab88,	// (0x00025671) bg_popup_preview_window_pane_g8

0x5a6a,	// (0x00020553) aid_popup_width_pane

0x682e,	// (0x00021317) popup_midp_note_alarm_window_ParamLimits

0x682e,	// (0x00021317) popup_midp_note_alarm_window

0x8759,	// (0x00023242) data_form_pane_ParamLimits

0x4e4b,	// (0x0001f934) form_field_data_pane_g1

0x4e55,	// (0x0001f93e) form_field_data_pane_t1_ParamLimits

0x8765,	// (0x0002324e) input_focus_pane_ParamLimits

0x4e6d,	// (0x0001f956) data_form_wide_pane_ParamLimits

0x4e7e,	// (0x0001f967) form_field_data_wide_pane_g1

0x4e8a,	// (0x0001f973) form_field_data_wide_pane_t1_ParamLimits

0x84d6,	// (0x00022fbf) input_focus_pane_cp6_ParamLimits

0x887f,	// (0x00023368) input_popup_find_pane_g1_ParamLimits

0x887f,	// (0x00023368) input_popup_find_pane_g1

0x5fdc,	// (0x00020ac5) aid_navi_side_left_pane

0x5ff1,	// (0x00020ada) aid_navi_side_right_pane

0xa571,	// (0x0002505a) bg_popup_window_pane_cp30_ParamLimits

0xa571,	// (0x0002505a) bg_popup_window_pane_cp30

0xa5eb,	// (0x000250d4) popup_midp_note_alarm_window_g1_ParamLimits

0xa5eb,	// (0x000250d4) popup_midp_note_alarm_window_g1

0xa61b,	// (0x00025104) popup_midp_note_alarm_window_t1_ParamLimits

0xa61b,	// (0x00025104) popup_midp_note_alarm_window_t1

0xa6bc,	// (0x000251a5) popup_midp_note_alarm_window_t2_ParamLimits

0xa6bc,	// (0x000251a5) popup_midp_note_alarm_window_t2

0xa76a,	// (0x00025253) popup_midp_note_alarm_window_t3_ParamLimits

0xa76a,	// (0x00025253) popup_midp_note_alarm_window_t3

0xa79c,	// (0x00025285) popup_midp_note_alarm_window_t4_ParamLimits

0xa79c,	// (0x00025285) popup_midp_note_alarm_window_t4

0xa7c2,	// (0x000252ab) popup_midp_note_alarm_window_t5_ParamLimits

0xa7c2,	// (0x000252ab) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x0002a37c) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x0002a37c) popup_midp_note_alarm_window_t

0xa86e,	// (0x00025357) wait_bar_pane_cp1_ParamLimits

0xa86e,	// (0x00025357) wait_bar_pane_cp1

0x7df0,	// (0x000228d9) wait_anim_pane_copy1

0x7df0,	// (0x000228d9) wait_border_pane_copy1

0xa257,	// (0x00024d40) wait_border_pane_g1_copy1

0x4ea4,	// (0x0001f98d) form_field_popup_pane_g1

0x4eac,	// (0x0001f995) form_field_popup_pane_t1_ParamLimits

0x8765,	// (0x0002324e) input_focus_pane_cp7_ParamLimits

0x8793,	// (0x0002327c) list_form_pane_ParamLimits

0x4ec4,	// (0x0001f9ad) form_field_popup_wide_pane_g1

0x4ecc,	// (0x0001f9b5) form_field_popup_wide_pane_t1_ParamLimits

0x8765,	// (0x0002324e) input_focus_pane_cp8_ParamLimits

0x879f,	// (0x00023288) list_form_wide_pane_ParamLimits

0xb353,	// (0x00025e3c) aid_size_cell_graphic_pane

0x4f56,	// (0x0001fa3f) data_form_pane_t1_ParamLimits

0x523f,	// (0x0001fd28) data_form_wide_pane_t1_ParamLimits

0x980f,	// (0x000242f8) bg_status_flat_pane

0x7e30,	// (0x00022919) title_pane_t1_ParamLimits

0x7e98,	// (0x00022981) title_pane_t2_ParamLimits

0x7ebe,	// (0x000229a7) title_pane_t3_ParamLimits

0xf557,	// (0x0002a040) title_pane_t_ParamLimits

0x8d53,	// (0x0002383c) level_1_signal_ParamLimits

0x8d65,	// (0x0002384e) level_2_signal_ParamLimits

0x8d78,	// (0x00023861) level_3_signal_ParamLimits

0x8d8b,	// (0x00023874) level_4_signal_ParamLimits

0x8d9e,	// (0x00023887) level_5_signal_ParamLimits

0x8db1,	// (0x0002389a) level_6_signal_ParamLimits

0x8dc4,	// (0x000238ad) level_7_signal_ParamLimits

0x8d53,	// (0x0002383c) level_1_battery_ParamLimits

0x8d65,	// (0x0002384e) level_2_battery_ParamLimits

0x8d78,	// (0x00023861) level_3_battery_ParamLimits

0x8d8b,	// (0x00023874) level_4_battery_ParamLimits

0x8d9e,	// (0x00023887) level_5_battery_ParamLimits

0x8db1,	// (0x0002389a) level_6_battery_ParamLimits

0x8dc4,	// (0x000238ad) level_7_battery_ParamLimits

0xa476,	// (0x00024f5f) bg_status_flat_pane_g1

0xa47e,	// (0x00024f67) bg_status_flat_pane_g2

0xa486,	// (0x00024f6f) bg_status_flat_pane_g3

0xa48e,	// (0x00024f77) bg_status_flat_pane_g4

0xa496,	// (0x00024f7f) bg_status_flat_pane_g5

0xa49e,	// (0x00024f87) bg_status_flat_pane_g6

0xa4a6,	// (0x00024f8f) bg_status_flat_pane_g7

0x7ee6,	// (0x000229cf) tabs_3_active_pane_t1_ParamLimits

0x7ee6,	// (0x000229cf) tabs_3_passive_pane_t1_ParamLimits

0x7f00,	// (0x000229e9) tabs_4_active_pane_t1_ParamLimits

0x7f00,	// (0x000229e9) tabs_4_1_passive_pane_t1_ParamLimits

0x8913,	// (0x000233fc) tabs_2_active_pane_t1_ParamLimits

0x8913,	// (0x000233fc) tabs_2_passive_pane_t1_ParamLimits

0x8925,	// (0x0002340e) bg_active_tab_pane_cp4_ParamLimits

0x8933,	// (0x0002341c) tabs_2_long_active_pane_t1_ParamLimits

0x8946,	// (0x0002342f) bg_passive_tab_pane_cp4_ParamLimits

0x1710,	// (0x0001c1f9) list_single_midp_graphic_pane_t1_ParamLimits

0x8925,	// (0x0002340e) bg_active_tab_pane_cp5_ParamLimits

0x8952,	// (0x0002343b) tabs_3_long_active_pane_t1_ParamLimits

0x8946,	// (0x0002342f) bg_passive_tab_pane_cp5_ParamLimits

0x1710,	// (0x0001c1f9) list_single_midp_graphic_pane_t1

0x980f,	// (0x000242f8) bg_status_flat_pane_ParamLimits

0x98d2,	// (0x000243bb) indicator_pane_cp2_ParamLimits

0x98d2,	// (0x000243bb) indicator_pane_cp2

0x99fd,	// (0x000244e6) navi_pane_srt_ParamLimits

0x99fd,	// (0x000244e6) navi_pane_srt

0x9a21,	// (0x0002450a) popup_clock_digital_analogue_window_cp1

0x7fad,	// (0x00022a96) indicator_pane_t1

0x93fa,	// (0x00023ee3) copy_highlight_pane

0x93fa,	// (0x00023ee3) cursor_graphics_pane

0x93fa,	// (0x00023ee3) graphic_within_text_pane

0x93fa,	// (0x00023ee3) link_highlight_pane

0xac85,	// (0x0002576e) popup_preview_text_window_t5_ParamLimits

0xac85,	// (0x0002576e) popup_preview_text_window_t5

0x9528,	// (0x00024011) cursor_digital_pane

0x9528,	// (0x00024011) cursor_primary_pane

0x9539,	// (0x00024022) cursor_primary_small_pane

0x9541,	// (0x0002402a) cursor_secondary_pane

0x9549,	// (0x00024032) cursor_title_pane

0x9528,	// (0x00024011) link_highlight_digital_pane

0x9530,	// (0x00024019) link_highlight_primary_pane

0x9539,	// (0x00024022) link_highlight_primary_small_pane

0x9541,	// (0x0002402a) link_highlight_secondary_pane

0x9549,	// (0x00024032) link_highlight_title_pane

0x9528,	// (0x00024011) copy_highlight_digital_pane

0x9528,	// (0x00024011) copy_highlight_primary_pane

0x9539,	// (0x00024022) copy_highlight_primary_small_pane

0x9541,	// (0x0002402a) copy_highlight_secondary_pane

0x9549,	// (0x00024032) copy_highlight_title_pane

0x9541,	// (0x0002402a) graphic_text_digital_pane

0xa514,	// (0x00024ffd) graphic_text_primary_pane

0xa51d,	// (0x00025006) graphic_text_primary_small_pane

0x9539,	// (0x00024022) graphic_text_secondary_pane

0x9528,	// (0x00024011) graphic_text_title_pane

0x9551,	// (0x0002403a) cursor_primary_pane_g1

0xa506,	// (0x00024fef) cursor_text_primary_t1

0xa4ee,	// (0x00024fd7) cursor_primary_small_pane_g1

0xa4f8,	// (0x00024fe1) cursor_text_primary_small_t1

0xa4d6,	// (0x00024fbf) cursor_primary_small_pane_g1_copy1

0xa4e0,	// (0x00024fc9) cursor_text_primary_small_t1_copy1

0xa4be,	// (0x00024fa7) cursor_text_title_t1

0xa4cc,	// (0x00024fb5) cursor_title_pane_g1

0x9551,	// (0x0002403a) cursor_digital_pane_g1

0x955b,	// (0x00024044) cursor_text_digital_t1

0x9580,	// (0x00024069) link_highlight_primary_pane_g1

0xa467,	// (0x00024f50) link_highlight_primary_pane_t1

0x9569,	// (0x00024052) link_highlight_primary_small_pane_g1

0x9571,	// (0x0002405a) link_highlight_primary_small_pane_t1

0x9580,	// (0x00024069) link_highlight_secondary_pane_g1

0x9588,	// (0x00024071) link_highlight_secondary_pane_t1

0xa3db,	// (0x00024ec4) link_highlight_title_pane_g1

0xa3e3,	// (0x00024ecc) link_highlight_title_pane_t1

0xa3c4,	// (0x00024ead) link_highlight_digital_pane_g1

0xa3cc,	// (0x00024eb5) link_highlight_digital_pane_t1

0xa29c,	// (0x00024d85) copy_highlight_primary_pane_g1

0xa2a4,	// (0x00024d8d) copy_highlight_primary_pane_t1

0xa276,	// (0x00024d5f) copy_highlight_primary_small_pane_g1

0xa28d,	// (0x00024d76) copy_highlight_primary_small_pane_t1

0x9597,	// (0x00024080) copy_highlight_secondary_pane_g1

0x959f,	// (0x00024088) copy_highlight_secondary_pane_t1

0xa276,	// (0x00024d5f) copy_highlight_title_pane_g1

0xa27e,	// (0x00024d67) copy_highlight_title_pane_t1

0xa29c,	// (0x00024d85) copy_highlight_digital_pane_g1

0xb521,	// (0x0002600a) copy_highlight_digital_pane_t1

0xb475,	// (0x00025f5e) graphic_text_primary_pane_g1

0xb505,	// (0x00025fee) graphic_text_primary_pane_t1

0xb513,	// (0x00025ffc) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x0002a4ab) graphic_text_primary_pane_t

0xb4e1,	// (0x00025fca) graphic_text_primary_small_pane_g1

0xb4e9,	// (0x00025fd2) graphic_text_primary_small_pane_t1

0xb4f7,	// (0x00025fe0) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x0002a4a6) graphic_text_primary_small_pane_t

0xb4bd,	// (0x00025fa6) graphic_text_secondary_pane_g1

0xb4c5,	// (0x00025fae) graphic_text_secondary_pane_t1

0xb4d3,	// (0x00025fbc) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x0002a4a1) graphic_text_secondary_pane_t

0xb499,	// (0x00025f82) graphic_text_title_pane_g1

0xb4a1,	// (0x00025f8a) graphic_text_title_pane_t1

0xb4af,	// (0x00025f98) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x0002a49c) graphic_text_title_pane_t

0xb475,	// (0x00025f5e) graphic_text_digital_pane_g1

0xb47d,	// (0x00025f66) graphic_text_digital_pane_t1

0xb48b,	// (0x00025f74) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x0002a497) graphic_text_digital_pane_t

0x7ed0,	// (0x000229b9) navi_icon_pane_srt_ParamLimits

0x7ed0,	// (0x000229b9) navi_icon_pane_srt

0x7df0,	// (0x000228d9) navi_midp_pane_srt

0x7df0,	// (0x000228d9) navi_navi_pane_srt

0x7ed0,	// (0x000229b9) navi_text_pane_srt_ParamLimits

0x7ed0,	// (0x000229b9) navi_text_pane_srt

0xb440,	// (0x00025f29) navi_navi_icon_text_pane_srt

0xb448,	// (0x00025f31) navi_navi_pane_srt_g1_ParamLimits

0xb448,	// (0x00025f31) navi_navi_pane_srt_g1

0xb45a,	// (0x00025f43) navi_navi_pane_srt_g2_ParamLimits

0xb45a,	// (0x00025f43) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x0002a492) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x0002a492) navi_navi_pane_srt_g

0xb46c,	// (0x00025f55) navi_navi_tabs_pane_srt

0xb440,	// (0x00025f29) navi_navi_text_pane_srt

0xb440,	// (0x00025f29) navi_navi_volume_pane_srt

0xb431,	// (0x00025f1a) navi_navi_text_pane_srt_t1

0x6e61,	// (0x0002194a) navi_navi_volume_pane_srt_g1

0x6e69,	// (0x00021952) volume_small_pane_srt_ParamLimits

0x6e69,	// (0x00021952) volume_small_pane_srt

0x62bc,	// (0x00020da5) volume_small_pane_srt_g1_ParamLimits

0x62bc,	// (0x00020da5) volume_small_pane_srt_g1

0x62cc,	// (0x00020db5) volume_small_pane_srt_g2_ParamLimits

0x62cc,	// (0x00020db5) volume_small_pane_srt_g2

0x62dd,	// (0x00020dc6) volume_small_pane_srt_g3_ParamLimits

0x62dd,	// (0x00020dc6) volume_small_pane_srt_g3

0x62ee,	// (0x00020dd7) volume_small_pane_srt_g4_ParamLimits

0x62ee,	// (0x00020dd7) volume_small_pane_srt_g4

0x62ff,	// (0x00020de8) volume_small_pane_srt_g5_ParamLimits

0x62ff,	// (0x00020de8) volume_small_pane_srt_g5

0x6310,	// (0x00020df9) volume_small_pane_srt_g6_ParamLimits

0x6310,	// (0x00020df9) volume_small_pane_srt_g6

0x6321,	// (0x00020e0a) volume_small_pane_srt_g7_ParamLimits

0x6321,	// (0x00020e0a) volume_small_pane_srt_g7

0x6332,	// (0x00020e1b) volume_small_pane_srt_g8_ParamLimits

0x6332,	// (0x00020e1b) volume_small_pane_srt_g8

0x6343,	// (0x00020e2c) volume_small_pane_srt_g9_ParamLimits

0x6343,	// (0x00020e2c) volume_small_pane_srt_g9

0x6354,	// (0x00020e3d) volume_small_pane_srt_g10_ParamLimits

0x6354,	// (0x00020e3d) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0002a241) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0002a241) volume_small_pane_srt_g

0x82d0,	// (0x00022db9) query_popup_data_pane_cp2

0xb417,	// (0x00025f00) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb417,	// (0x00025f00) navi_navi_icon_text_pane_srt_t1

0xa514,	// (0x00024ffd) navi_tabs_2_long_pane_srt

0xa514,	// (0x00024ffd) navi_tabs_2_pane_srt

0xa514,	// (0x00024ffd) navi_tabs_3_long_pane_srt

0xa514,	// (0x00024ffd) navi_tabs_3_pane_srt

0xa514,	// (0x00024ffd) navi_tabs_4_pane_srt

0x6e41,	// (0x0002192a) tabs_2_active_pane_srt_ParamLimits

0x6e41,	// (0x0002192a) tabs_2_active_pane_srt

0x6e51,	// (0x0002193a) tabs_2_passive_pane_srt_ParamLimits

0x6e51,	// (0x0002193a) tabs_2_passive_pane_srt

0x971e,	// (0x00024207) bg_passive_tab_pane_cp1_srt_ParamLimits

0x971e,	// (0x00024207) bg_passive_tab_pane_cp1_srt

0xb3e3,	// (0x00025ecc) bg_passive_tab_pane_g1_cp1_srt

0x903c,	// (0x00023b25) bg_passive_tab_pane_g2_cp1_srt

0xb3ec,	// (0x00025ed5) bg_passive_tab_pane_g3_cp1_srt

0x7ed0,	// (0x000229b9) bg_active_tab_pane_cp1_srt_ParamLimits

0x7ed0,	// (0x000229b9) bg_active_tab_pane_cp1_srt

0xb3f5,	// (0x00025ede) tabs_2_active_pane_srt_g1

0xb3fd,	// (0x00025ee6) tabs_2_active_pane_srt_t1_ParamLimits

0xb3fd,	// (0x00025ee6) tabs_2_active_pane_srt_t1

0xb3e3,	// (0x00025ecc) bg_active_tab_pane_g1_cp1_srt

0x903c,	// (0x00023b25) bg_active_tab_pane_g2_cp1_srt

0xb3ec,	// (0x00025ed5) bg_active_tab_pane_g3_cp1_srt

0x6e0e,	// (0x000218f7) tabs_3_active_pane_srt_ParamLimits

0x6e0e,	// (0x000218f7) tabs_3_active_pane_srt

0x6e1f,	// (0x00021908) tabs_3_passive_pane_cp_srt_ParamLimits

0x6e1f,	// (0x00021908) tabs_3_passive_pane_cp_srt

0x6e30,	// (0x00021919) tabs_3_passive_pane_srt_ParamLimits

0x6e30,	// (0x00021919) tabs_3_passive_pane_srt

0x971e,	// (0x00024207) bg_passive_tab_pane_cp2_srt_ParamLimits

0x971e,	// (0x00024207) bg_passive_tab_pane_cp2_srt

0x95ae,	// (0x00024097) bg_passive_tab_pane_g1_cp2_srt

0x903c,	// (0x00023b25) bg_passive_tab_pane_g2_cp2_srt

0x95b7,	// (0x000240a0) bg_passive_tab_pane_g3_cp2_srt

0x7ed0,	// (0x000229b9) bg_active_tab_pane_cp2_srt_ParamLimits

0x7ed0,	// (0x000229b9) bg_active_tab_pane_cp2_srt

0xb3c9,	// (0x00025eb2) tabs_3_active_pane_srt_g1

0xb3d1,	// (0x00025eba) tabs_3_active_pane_srt_t1_ParamLimits

0xb3d1,	// (0x00025eba) tabs_3_active_pane_srt_t1

0x95ae,	// (0x00024097) bg_active_tab_pane_g1_cp2_srt

0x903c,	// (0x00023b25) bg_active_tab_pane_g2_cp2_srt

0x95b7,	// (0x000240a0) bg_active_tab_pane_g3_cp2_srt

0x6dc6,	// (0x000218af) tabs_4_active_pane_srt_ParamLimits

0x6dc6,	// (0x000218af) tabs_4_active_pane_srt

0x6dd8,	// (0x000218c1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6dd8,	// (0x000218c1) tabs_4_passive_pane_cp2_srt

0x64c3,	// (0x00020fac) aid_size_cell_toolbar

0x8946,	// (0x0002342f) main_idle_act_pane_ParamLimits

0x6664,	// (0x0002114d) popup_large_graphic_colour_window_ParamLimits

0x69cb,	// (0x000214b4) popup_toolbar_window_ParamLimits

0x69cb,	// (0x000214b4) popup_toolbar_window

0xb1dc,	// (0x00025cc5) list_single_graphic_2heading_pane_ParamLimits

0xb1dc,	// (0x00025cc5) list_single_graphic_2heading_pane

0x8b02,	// (0x000235eb) aid_size_cell_apps_grid_lsc_pane

0x8b14,	// (0x000235fd) aid_size_cell_apps_grid_prt_pane

0x971e,	// (0x00024207) bg_wml_button_pane_cp1_ParamLimits

0x971e,	// (0x00024207) bg_wml_button_pane_cp1

0x9ee6,	// (0x000249cf) form_midp_field_text_pane_t1_ParamLimits

0x9cb6,	// (0x0002479f) input_focus_pane_cp050_ParamLimits

0x9f1d,	// (0x00024a06) list_midp_form_text_pane_ParamLimits

0x9ec3,	// (0x000249ac) input_focus_pane_cp051_ParamLimits

0x9ed7,	// (0x000249c0) list_midp_choice_pane_ParamLimits

0x9d6f,	// (0x00024858) list_single_2graphic_pane_cp3_ParamLimits

0x9d6f,	// (0x00024858) list_single_2graphic_pane_cp3

0x9d90,	// (0x00024879) list_single_midp_graphic_pane_ParamLimits

0x9d90,	// (0x00024879) list_single_midp_graphic_pane

0x50b8,	// (0x0001fba1) list_single_graphic_2heading_pane_g1_ParamLimits

0x50b8,	// (0x0001fba1) list_single_graphic_2heading_pane_g1

0x50c4,	// (0x0001fbad) list_single_graphic_2heading_pane_g4_ParamLimits

0x50c4,	// (0x0001fbad) list_single_graphic_2heading_pane_g4

0x50d0,	// (0x0001fbb9) list_single_graphic_2heading_pane_g5_ParamLimits

0x50d0,	// (0x0001fbb9) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0002a294) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0002a294) list_single_graphic_2heading_pane_g

0x50dc,	// (0x0001fbc5) list_single_graphic_2heading_pane_t1_ParamLimits

0x50dc,	// (0x0001fbc5) list_single_graphic_2heading_pane_t1

0x50f0,	// (0x0001fbd9) list_single_graphic_2heading_pane_t2_ParamLimits

0x50f0,	// (0x0001fbd9) list_single_graphic_2heading_pane_t2

0x510a,	// (0x0001fbf3) list_single_graphic_2heading_pane_t3_ParamLimits

0x510a,	// (0x0001fbf3) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0002a29b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0002a29b) list_single_graphic_2heading_pane_t

0x9b80,	// (0x00024669) bg_popup_sub_pane_cp2

0x9baa,	// (0x00024693) grid_toobar_pane

0x6a78,	// (0x00021561) cell_toolbar_pane_ParamLimits

0x6a78,	// (0x00021561) cell_toolbar_pane

0x9be6,	// (0x000246cf) cell_toolbar_pane_g1_ParamLimits

0x9be6,	// (0x000246cf) cell_toolbar_pane_g1

0x9bfa,	// (0x000246e3) cell_toolbar_pane_g2_ParamLimits

0x9bfa,	// (0x000246e3) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x0002a2a2) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x0002a2a2) cell_toolbar_pane_g

0x9c1c,	// (0x00024705) grid_highlight_pane_cp2_ParamLimits

0x9c1c,	// (0x00024705) grid_highlight_pane_cp2

0x9c36,	// (0x0002471f) toolbar_button_pane

0x9c42,	// (0x0002472b) toolbar_button_pane_g1

0x9c4a,	// (0x00024733) toolbar_button_pane_g2

0x9c52,	// (0x0002473b) toolbar_button_pane_g3

0x9c5a,	// (0x00024743) toolbar_button_pane_g4

0x9c62,	// (0x0002474b) toolbar_button_pane_g5

0x9c6a,	// (0x00024753) toolbar_button_pane_g6

0x9c72,	// (0x0002475b) toolbar_button_pane_g7

0x9c7a,	// (0x00024763) toolbar_button_pane_g8

0x9c82,	// (0x0002476b) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x0002a2a7) toolbar_button_pane_g

0x6ab0,	// (0x00021599) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6ab0,	// (0x00021599) list_single_2graphic_pane_g1_cp3

0x6abc,	// (0x000215a5) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6abc,	// (0x000215a5) list_single_2graphic_pane_g2_cp3

0x6acd,	// (0x000215b6) list_single_2graphic_pane_g3_cp3

0x6ad5,	// (0x000215be) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6ad5,	// (0x000215be) list_single_2graphic_pane_g4_cp3

0x6ae1,	// (0x000215ca) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6ae1,	// (0x000215ca) list_single_2graphic_pane_t1_cp3

0x9f2e,	// (0x00024a17) list_single_midp_graphic_pane_g2_ParamLimits

0x9f2e,	// (0x00024a17) list_single_midp_graphic_pane_g2

0x64cb,	// (0x00020fb4) aid_zoom_text_primary

0x508c,	// (0x0001fb75) aid_zoom_text_secondary

0x9668,	// (0x00024151) status_small_pane_g7_ParamLimits

0x9668,	// (0x00024151) status_small_pane_g7

0x968b,	// (0x00024174) status_small_pane_t1_ParamLimits

0x7e07,	// (0x000228f0) title_pane_g2

0x0003,

0xf54e,	// (0x0002a037) title_pane_g

0x8374,	// (0x00022e5d) aid_size_cell_colour_1_pane_ParamLimits

0x8374,	// (0x00022e5d) aid_size_cell_colour_1_pane

0x8388,	// (0x00022e71) aid_size_cell_colour_2_pane_ParamLimits

0x8388,	// (0x00022e71) aid_size_cell_colour_2_pane

0x839c,	// (0x00022e85) aid_size_cell_colour_3_pane_ParamLimits

0x839c,	// (0x00022e85) aid_size_cell_colour_3_pane

0x83b0,	// (0x00022e99) aid_size_cell_colour_4_pane_ParamLimits

0x83b0,	// (0x00022e99) aid_size_cell_colour_4_pane

0x5f19,	// (0x00020a02) title_pane_stacon_g1_ParamLimits

0x5f19,	// (0x00020a02) title_pane_stacon_g1

0xa2fb,	// (0x00024de4) popup_note_wait_window_g3_ParamLimits

0xa2fb,	// (0x00024de4) popup_note_wait_window_g3

0xa371,	// (0x00024e5a) popup_note_wait_window_t5_ParamLimits

0xa371,	// (0x00024e5a) popup_note_wait_window_t5

0x7df0,	// (0x000228d9) main_feb_china_hwr_fs_writing_pane

0x6547,	// (0x00021030) popup_feb_china_hwr_fs_window_ParamLimits

0x6547,	// (0x00021030) popup_feb_china_hwr_fs_window

0x6afd,	// (0x000215e6) aid_size_cell_hwr_fs_ParamLimits

0x6afd,	// (0x000215e6) aid_size_cell_hwr_fs

0x9cb6,	// (0x0002479f) bg_popup_sub_pane_cp3_ParamLimits

0x9cb6,	// (0x0002479f) bg_popup_sub_pane_cp3

0x6b12,	// (0x000215fb) grid_hwr_fs_pane_ParamLimits

0x6b12,	// (0x000215fb) grid_hwr_fs_pane

0x6b2a,	// (0x00021613) linegrid_hwr_fs_pane_ParamLimits

0x6b2a,	// (0x00021613) linegrid_hwr_fs_pane

0x6b3a,	// (0x00021623) cell_hwr_fs_pane_ParamLimits

0x6b3a,	// (0x00021623) cell_hwr_fs_pane

0x9cc2,	// (0x000247ab) linegrid_hwr_fs_pane_g1_ParamLimits

0x9cc2,	// (0x000247ab) linegrid_hwr_fs_pane_g1

0x9cce,	// (0x000247b7) linegrid_hwr_fs_pane_g2_ParamLimits

0x9cce,	// (0x000247b7) linegrid_hwr_fs_pane_g2

0x9ce0,	// (0x000247c9) linegrid_hwr_fs_pane_g3_ParamLimits

0x9ce0,	// (0x000247c9) linegrid_hwr_fs_pane_g3

0x6b5c,	// (0x00021645) linegrid_hwr_fs_pane_g4_ParamLimits

0x6b5c,	// (0x00021645) linegrid_hwr_fs_pane_g4

0x6b76,	// (0x0002165f) linegrid_hwr_fs_pane_g5_ParamLimits

0x6b76,	// (0x0002165f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0002a2d2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0002a2d2) linegrid_hwr_fs_pane_g

0x9cec,	// (0x000247d5) cell_hwr_fs_pane_g1_ParamLimits

0x9cec,	// (0x000247d5) cell_hwr_fs_pane_g1

0x9ab7,	// (0x000245a0) cell_hwr_fs_pane_g2_ParamLimits

0x9ab7,	// (0x000245a0) cell_hwr_fs_pane_g2

0x9d02,	// (0x000247eb) cell_hwr_fs_pane_g3_ParamLimits

0x9d02,	// (0x000247eb) cell_hwr_fs_pane_g3

0x9d0f,	// (0x000247f8) cell_hwr_fs_pane_g4_ParamLimits

0x9d0f,	// (0x000247f8) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0002a2dd) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002a2dd) cell_hwr_fs_pane_g

0x6b8c,	// (0x00021675) cell_hwr_fs_pane_t1

0x7df0,	// (0x000228d9) grid_highlight_pane_cp6

0x7df0,	// (0x000228d9) main_idle_act2_pane

0x88b9,	// (0x000233a2) aid_inside_area_popup_secondary

0xa9a8,	// (0x00025491) aid_inside_area_window_primary_ParamLimits

0xa9a8,	// (0x00025491) aid_inside_area_window_primary

0xb530,	// (0x00026019) ai2_news_ticker_pane

0xb538,	// (0x00026021) aid_size_cell_ai1_link_ParamLimits

0xb538,	// (0x00026021) aid_size_cell_ai1_link

0xb552,	// (0x0002603b) popup_ai2_data_window_ParamLimits

0xb552,	// (0x0002603b) popup_ai2_data_window

0xb568,	// (0x00026051) popup_ai2_link_window_ParamLimits

0xb568,	// (0x00026051) popup_ai2_link_window

0x9cb6,	// (0x0002479f) bg_popup_sub_pane_cp4_ParamLimits

0x9cb6,	// (0x0002479f) bg_popup_sub_pane_cp4

0xb57c,	// (0x00026065) grid_ai2_link_pane_ParamLimits

0xb57c,	// (0x00026065) grid_ai2_link_pane

0xb593,	// (0x0002607c) popup_ai2_link_window_g1_ParamLimits

0xb593,	// (0x0002607c) popup_ai2_link_window_g1

0xb59f,	// (0x00026088) popup_ai2_link_window_g2_ParamLimits

0xb59f,	// (0x00026088) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x0002a4b0) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x0002a4b0) popup_ai2_link_window_g

0xb5ae,	// (0x00026097) ai2_mp_button_pane

0xb5b6,	// (0x0002609f) ai2_mp_volume_pane

0x9ec3,	// (0x000249ac) bg_popup_sub_pane_cp5_ParamLimits

0x9ec3,	// (0x000249ac) bg_popup_sub_pane_cp5

0xb5be,	// (0x000260a7) heading_ai2_gene_pane_ParamLimits

0xb5be,	// (0x000260a7) heading_ai2_gene_pane

0xb5ca,	// (0x000260b3) list_ai2_gene_pane_ParamLimits

0xb5ca,	// (0x000260b3) list_ai2_gene_pane

0xb612,	// (0x000260fb) cell_ai2_link_pane_ParamLimits

0xb612,	// (0x000260fb) cell_ai2_link_pane

0xb628,	// (0x00026111) cell_ai2_link_pane_g1

0x7df0,	// (0x000228d9) grid_highlight_pane_cp7

0x6e7e,	// (0x00021967) ai2_mp_volume_pane_g1

0xb6f8,	// (0x000261e1) ai2_mp_volume_pane_g2

0xb66d,	// (0x00026156) list_ai2_gene_pane_t1

0xb700,	// (0x000261e9) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x0002a4c9) ai2_mp_volume_pane_g

0x6e86,	// (0x0002196f) volume_small_pane_cp3

0xb708,	// (0x000261f1) aid_size_cell_ai2_button

0xb710,	// (0x000261f9) grid_ai2_button_pane

0xb719,	// (0x00026202) cell_ai2_button_pane_ParamLimits

0xb719,	// (0x00026202) cell_ai2_button_pane

0x7de6,	// (0x000228cf) cell_ai2_button_pane_g1

0x7df0,	// (0x000228d9) grid_highlight_pane_cp8

0xb6b8,	// (0x000261a1) ai2_gene_pane_t1_ParamLimits

0xb6b8,	// (0x000261a1) ai2_gene_pane_t1

0x64b9,	// (0x00020fa2) aid_height_parent_landscape

0xb013,	// (0x00025afc) aid_height_set_list

0xb024,	// (0x00025b0d) aid_size_parent

0xb353,	// (0x00025e3c) aid_size_cell_graphic_pane_ParamLimits

0xb5da,	// (0x000260c3) popup_ai2_data_window_g1_ParamLimits

0xb5da,	// (0x000260c3) popup_ai2_data_window_g1

0xb5e6,	// (0x000260cf) ai2_news_ticker_pane_g1

0xb5ee,	// (0x000260d7) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x0002a4b5) ai2_news_ticker_pane_g

0xb5f6,	// (0x000260df) ai2_news_ticker_pane_t1

0xb604,	// (0x000260ed) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x0002a4ba) ai2_news_ticker_pane_t

0xb631,	// (0x0002611a) heading_ai2_gene_pane_g1

0xb639,	// (0x00026122) heading_ai2_gene_pane_t1_ParamLimits

0xb639,	// (0x00026122) heading_ai2_gene_pane_t1

0xb64e,	// (0x00026137) list_highlight_pane_cp6

0xb656,	// (0x0002613f) ai2_gene_pane_ParamLimits

0xb656,	// (0x0002613f) ai2_gene_pane

0xb67b,	// (0x00026164) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x0002a4bf) list_ai2_gene_pane_t

0xb689,	// (0x00026172) list_highlight_pane_cp8_ParamLimits

0xb689,	// (0x00026172) list_highlight_pane_cp8

0xb69a,	// (0x00026183) ai2_gene_pane_g1_ParamLimits

0xb69a,	// (0x00026183) ai2_gene_pane_g1

0xb6ac,	// (0x00026195) ai2_gene_pane_g2_ParamLimits

0xb6ac,	// (0x00026195) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x0002a4c4) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x0002a4c4) ai2_gene_pane_g

0x86fb,	// (0x000231e4) scroll_pane_cp12

0x6476,	// (0x00020f5f) control_pane_t3_ParamLimits

0x6476,	// (0x00020f5f) control_pane_t3

0x967c,	// (0x00024165) status_small_pane_g8_ParamLimits

0x967c,	// (0x00024165) status_small_pane_g8

0x662d,	// (0x00021116) popup_find_window_ParamLimits

0x6842,	// (0x0002132b) popup_note_image_window_ParamLimits

0x50b8,	// (0x0001fba1) list_double2_graphic_pane_vc_g1_ParamLimits

0x50b8,	// (0x0001fba1) list_double2_graphic_pane_vc_g1

0x50c4,	// (0x0001fbad) list_double2_graphic_pane_vc_g2_ParamLimits

0x50c4,	// (0x0001fbad) list_double2_graphic_pane_vc_g2

0x50d0,	// (0x0001fbb9) list_double2_graphic_pane_vc_g3_ParamLimits

0x50d0,	// (0x0001fbb9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7ab,	// (0x0002a294) list_double2_graphic_pane_vc_g_ParamLimits

0xf7ab,	// (0x0002a294) list_double2_graphic_pane_vc_g

0x5122,	// (0x0001fc0b) list_double2_graphic_pane_vc_t1_ParamLimits

0x5122,	// (0x0001fc0b) list_double2_graphic_pane_vc_t1

0x50c4,	// (0x0001fbad) list_single_heading_pane_vc_g1_ParamLimits

0x50c4,	// (0x0001fbad) list_single_heading_pane_vc_g1

0x50d0,	// (0x0001fbb9) list_single_heading_pane_vc_g2_ParamLimits

0x50d0,	// (0x0001fbb9) list_single_heading_pane_vc_g2

0x0001,

0xf7d3,	// (0x0002a2bc) list_single_heading_pane_vc_g_ParamLimits

0xf7d3,	// (0x0002a2bc) list_single_heading_pane_vc_g

0x5138,	// (0x0001fc21) list_single_heading_pane_vc_t1_ParamLimits

0x5138,	// (0x0001fc21) list_single_heading_pane_vc_t1

0x514e,	// (0x0001fc37) list_single_heading_pane_vc_t2_ParamLimits

0x514e,	// (0x0001fc37) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0002a2c1) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0002a2c1) list_single_heading_pane_vc_t

0x5160,	// (0x0001fc49) list_setting_number_pane_vc_g1_ParamLimits

0x5160,	// (0x0001fc49) list_setting_number_pane_vc_g1

0x516c,	// (0x0001fc55) list_setting_number_pane_vc_g2_ParamLimits

0x516c,	// (0x0001fc55) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002a2c6) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002a2c6) list_setting_number_pane_vc_g

0x5178,	// (0x0001fc61) list_setting_number_pane_vc_t1_ParamLimits

0x5178,	// (0x0001fc61) list_setting_number_pane_vc_t1

0x518c,	// (0x0001fc75) list_setting_number_pane_vc_t2_ParamLimits

0x518c,	// (0x0001fc75) list_setting_number_pane_vc_t2

0x51a8,	// (0x0001fc91) list_setting_number_pane_vc_t3_ParamLimits

0x51a8,	// (0x0001fc91) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002a2cb) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002a2cb) list_setting_number_pane_vc_t

0x51c6,	// (0x0001fcaf) set_value_pane_vc_ParamLimits

0x51c6,	// (0x0001fcaf) set_value_pane_vc

0xb1dc,	// (0x00025cc5) list_double2_graphic_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_double2_graphic_pane_vc

0xb1dc,	// (0x00025cc5) list_double2_large_graphic_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_double2_large_graphic_pane_vc

0xb1dc,	// (0x00025cc5) list_double2_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_double2_pane_vc

0xb1dc,	// (0x00025cc5) list_double_graphic_heading_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_double_graphic_heading_pane_vc

0xb1dc,	// (0x00025cc5) list_double_graphic_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_double_graphic_pane_vc

0xb1dc,	// (0x00025cc5) list_double_heading_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_double_heading_pane_vc

0xb1ee,	// (0x00025cd7) list_double_large_graphic_pane_vc_ParamLimits

0xb1ee,	// (0x00025cd7) list_double_large_graphic_pane_vc

0xb1dc,	// (0x00025cc5) list_double_number_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_double_number_pane_vc

0xb1dc,	// (0x00025cc5) list_double_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_double_pane_vc

0xb1dc,	// (0x00025cc5) list_double_time_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_double_time_pane_vc

0xb1dc,	// (0x00025cc5) list_setting_number_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_setting_number_pane_vc

0xb1dc,	// (0x00025cc5) list_setting_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_setting_pane_vc

0xb1dc,	// (0x00025cc5) list_single_graphic_heading_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_single_graphic_heading_pane_vc

0xb1dc,	// (0x00025cc5) list_single_heading_pane_vc_ParamLimits

0xb1dc,	// (0x00025cc5) list_single_heading_pane_vc

0x529f,	// (0x0001fd88) list_single_number_heading_pane_vc_ParamLimits

0x529f,	// (0x0001fd88) list_single_number_heading_pane_vc

0x50b8,	// (0x0001fba1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x50b8,	// (0x0001fba1) list_double_graphic_heading_pane_vc_g1

0x50c4,	// (0x0001fbad) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x50c4,	// (0x0001fbad) list_double_graphic_heading_pane_vc_g2

0x50d0,	// (0x0001fbb9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x50d0,	// (0x0001fbb9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7ab,	// (0x0002a294) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0002a294) list_double_graphic_heading_pane_vc_g

0x5320,	// (0x0001fe09) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5320,	// (0x0001fe09) list_double_graphic_heading_pane_vc_t1

0x533c,	// (0x0001fe25) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x533c,	// (0x0001fe25) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e7,	// (0x0002a4d0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e7,	// (0x0002a4d0) list_double_graphic_heading_pane_vc_t

0x5160,	// (0x0001fc49) list_setting_pane_vc_g1_ParamLimits

0x5160,	// (0x0001fc49) list_setting_pane_vc_g1

0x516c,	// (0x0001fc55) list_setting_pane_vc_g2_ParamLimits

0x516c,	// (0x0001fc55) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002a2c6) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002a2c6) list_setting_pane_vc_g

0x535a,	// (0x0001fe43) list_setting_pane_vc_t1_ParamLimits

0x535a,	// (0x0001fe43) list_setting_pane_vc_t1

0x5376,	// (0x0001fe5f) list_setting_pane_vc_t2_ParamLimits

0x5376,	// (0x0001fe5f) list_setting_pane_vc_t2

0x0001,

0xfa15,	// (0x0002a4fe) list_setting_pane_vc_t_ParamLimits

0xfa15,	// (0x0002a4fe) list_setting_pane_vc_t

0x51c6,	// (0x0001fcaf) set_value_pane_cp_vc_ParamLimits

0x51c6,	// (0x0001fcaf) set_value_pane_cp_vc

0x50c4,	// (0x0001fbad) list_single_number_heading_pane_vc_g1_ParamLimits

0x50c4,	// (0x0001fbad) list_single_number_heading_pane_vc_g1

0x50d0,	// (0x0001fbb9) list_single_number_heading_pane_vc_g2_ParamLimits

0x50d0,	// (0x0001fbb9) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d3,	// (0x0002a2bc) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d3,	// (0x0002a2bc) list_single_number_heading_pane_vc_g

0x5392,	// (0x0001fe7b) list_single_number_heading_pane_vc_t1_ParamLimits

0x5392,	// (0x0001fe7b) list_single_number_heading_pane_vc_t1

0x53a8,	// (0x0001fe91) list_single_number_heading_pane_vc_t2_ParamLimits

0x53a8,	// (0x0001fe91) list_single_number_heading_pane_vc_t2

0x53ba,	// (0x0001fea3) list_single_number_heading_pane_vc_t3_ParamLimits

0x53ba,	// (0x0001fea3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1a,	// (0x0002a503) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002a503) list_single_number_heading_pane_vc_t

0x50b8,	// (0x0001fba1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x50b8,	// (0x0001fba1) list_single_graphic_heading_pane_vc_g1

0x50c4,	// (0x0001fbad) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x50c4,	// (0x0001fbad) list_single_graphic_heading_pane_vc_g4

0x50d0,	// (0x0001fbb9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x50d0,	// (0x0001fbb9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7ab,	// (0x0002a294) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0002a294) list_single_graphic_heading_pane_vc_g

0x53cc,	// (0x0001feb5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x53cc,	// (0x0001feb5) list_single_graphic_heading_pane_vc_t1

0x53e2,	// (0x0001fecb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x53e2,	// (0x0001fecb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa21,	// (0x0002a50a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0002a50a) list_single_graphic_heading_pane_vc_t

0x50c4,	// (0x0001fbad) list_double2_pane_vc_g1_ParamLimits

0x50c4,	// (0x0001fbad) list_double2_pane_vc_g1

0x50d0,	// (0x0001fbb9) list_double2_pane_vc_g2_ParamLimits

0x50d0,	// (0x0001fbb9) list_double2_pane_vc_g2

0x0001,

0xf7d3,	// (0x0002a2bc) list_double2_pane_vc_g_ParamLimits

0xf7d3,	// (0x0002a2bc) list_double2_pane_vc_g

0x53f4,	// (0x0001fedd) list_double2_pane_vc_t1_ParamLimits

0x53f4,	// (0x0001fedd) list_double2_pane_vc_t1

0x540a,	// (0x0001fef3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x540a,	// (0x0001fef3) list_double2_large_graphic_pane_vc_g1

0x50c4,	// (0x0001fbad) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x50c4,	// (0x0001fbad) list_double2_large_graphic_pane_vc_g2

0x50d0,	// (0x0001fbb9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x50d0,	// (0x0001fbb9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa26,	// (0x0002a50f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa26,	// (0x0002a50f) list_double2_large_graphic_pane_vc_g

0x5416,	// (0x0001feff) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5416,	// (0x0001feff) list_double2_large_graphic_pane_vc_t1

0x542c,	// (0x0001ff15) list_double_time_pane_vc_g1_ParamLimits

0x542c,	// (0x0001ff15) list_double_time_pane_vc_g1

0x5438,	// (0x0001ff21) list_double_time_pane_vc_g2_ParamLimits

0x5438,	// (0x0001ff21) list_double_time_pane_vc_g2

0x0001,

0xfa2d,	// (0x0002a516) list_double_time_pane_vc_g_ParamLimits

0xfa2d,	// (0x0002a516) list_double_time_pane_vc_g

0x5444,	// (0x0001ff2d) list_double_time_pane_vc_t1_ParamLimits

0x5444,	// (0x0001ff2d) list_double_time_pane_vc_t1

0x5468,	// (0x0001ff51) list_double_time_pane_vc_t2_ParamLimits

0x5468,	// (0x0001ff51) list_double_time_pane_vc_t2

0x54b7,	// (0x0001ffa0) list_double_time_pane_vc_t3_ParamLimits

0x54b7,	// (0x0001ffa0) list_double_time_pane_vc_t3

0x54c9,	// (0x0001ffb2) list_double_time_pane_vc_t4_ParamLimits

0x54c9,	// (0x0001ffb2) list_double_time_pane_vc_t4

0x0003,

0xfa32,	// (0x0002a51b) list_double_time_pane_vc_t_ParamLimits

0xfa32,	// (0x0002a51b) list_double_time_pane_vc_t

0x50c4,	// (0x0001fbad) list_double_pane_vc_g1_ParamLimits

0x50c4,	// (0x0001fbad) list_double_pane_vc_g1

0x50d0,	// (0x0001fbb9) list_double_pane_vc_g2_ParamLimits

0x50d0,	// (0x0001fbb9) list_double_pane_vc_g2

0x0001,

0xf7d3,	// (0x0002a2bc) list_double_pane_vc_g_ParamLimits

0xf7d3,	// (0x0002a2bc) list_double_pane_vc_g

0x54dd,	// (0x0001ffc6) list_double_pane_vc_t1_ParamLimits

0x54dd,	// (0x0001ffc6) list_double_pane_vc_t1

0x54f1,	// (0x0001ffda) list_double_pane_vc_t2_ParamLimits

0x54f1,	// (0x0001ffda) list_double_pane_vc_t2

0x0001,

0xfa3b,	// (0x0002a524) list_double_pane_vc_t_ParamLimits

0xfa3b,	// (0x0002a524) list_double_pane_vc_t

0x50c4,	// (0x0001fbad) list_double_number_pane_vc_g1_ParamLimits

0x50c4,	// (0x0001fbad) list_double_number_pane_vc_g1

0x50d0,	// (0x0001fbb9) list_double_number_pane_vc_g2_ParamLimits

0x50d0,	// (0x0001fbb9) list_double_number_pane_vc_g2

0x0001,

0xf7d3,	// (0x0002a2bc) list_double_number_pane_vc_g_ParamLimits

0xf7d3,	// (0x0002a2bc) list_double_number_pane_vc_g

0x5509,	// (0x0001fff2) list_double_number_pane_vc_t1_ParamLimits

0x5509,	// (0x0001fff2) list_double_number_pane_vc_t1

0x551b,	// (0x00020004) list_double_number_pane_vc_t2_ParamLimits

0x551b,	// (0x00020004) list_double_number_pane_vc_t2

0x552f,	// (0x00020018) list_double_number_pane_vc_t3_ParamLimits

0x552f,	// (0x00020018) list_double_number_pane_vc_t3

0x0002,

0xfa40,	// (0x0002a529) list_double_number_pane_vc_t_ParamLimits

0xfa40,	// (0x0002a529) list_double_number_pane_vc_t

0x5547,	// (0x00020030) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5547,	// (0x00020030) list_double_large_graphic_pane_vc_g1

0x5569,	// (0x00020052) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5569,	// (0x00020052) list_double_large_graphic_pane_vc_g2

0x557d,	// (0x00020066) list_double_large_graphic_pane_vc_g3_ParamLimits

0x557d,	// (0x00020066) list_double_large_graphic_pane_vc_g3

0x558c,	// (0x00020075) list_double_large_graphic_pane_vc_g4_ParamLimits

0x558c,	// (0x00020075) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa47,	// (0x0002a530) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0002a530) list_double_large_graphic_pane_vc_g

0x5598,	// (0x00020081) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5598,	// (0x00020081) list_double_large_graphic_pane_vc_t1

0x55b4,	// (0x0002009d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x55b4,	// (0x0002009d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0002a539) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0002a539) list_double_large_graphic_pane_vc_t

0x50c4,	// (0x0001fbad) list_double_heading_pane_vc_g1_ParamLimits

0x50c4,	// (0x0001fbad) list_double_heading_pane_vc_g1

0x50d0,	// (0x0001fbb9) list_double_heading_pane_vc_g2_ParamLimits

0x50d0,	// (0x0001fbb9) list_double_heading_pane_vc_g2

0x0001,

0xf7d3,	// (0x0002a2bc) list_double_heading_pane_vc_g_ParamLimits

0xf7d3,	// (0x0002a2bc) list_double_heading_pane_vc_g

0x55d6,	// (0x000200bf) list_double_heading_pane_vc_t1_ParamLimits

0x55d6,	// (0x000200bf) list_double_heading_pane_vc_t1

0x55ea,	// (0x000200d3) list_double_heading_pane_vc_t2_ParamLimits

0x55ea,	// (0x000200d3) list_double_heading_pane_vc_t2

0x0001,

0xfa55,	// (0x0002a53e) list_double_heading_pane_vc_t_ParamLimits

0xfa55,	// (0x0002a53e) list_double_heading_pane_vc_t

0x5602,	// (0x000200eb) list_double_graphic_pane_vc_g1_ParamLimits

0x5602,	// (0x000200eb) list_double_graphic_pane_vc_g1

0x560e,	// (0x000200f7) list_double_graphic_pane_vc_g2_ParamLimits

0x560e,	// (0x000200f7) list_double_graphic_pane_vc_g2

0x50c4,	// (0x0001fbad) list_double_graphic_pane_vc_g3_ParamLimits

0x50c4,	// (0x0001fbad) list_double_graphic_pane_vc_g3

0x0003,

0xfa5a,	// (0x0002a543) list_double_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x0002a543) list_double_graphic_pane_vc_g

0x562b,	// (0x00020114) list_double_graphic_pane_vc_t1_ParamLimits

0x562b,	// (0x00020114) list_double_graphic_pane_vc_t1

0x5655,	// (0x0002013e) list_double_graphic_pane_vc_t2_ParamLimits

0x5655,	// (0x0002013e) list_double_graphic_pane_vc_t2

0x0001,

0xfa63,	// (0x0002a54c) list_double_graphic_pane_vc_t_ParamLimits

0xfa63,	// (0x0002a54c) list_double_graphic_pane_vc_t

0x5a76,	// (0x0002055f) aid_size_cell_fastswap

0x5a7e,	// (0x00020567) aid_size_cell_touch_ParamLimits

0x5a7e,	// (0x00020567) aid_size_cell_touch

0x5cd9,	// (0x000207c2) popup_fast_swap_wide_window_ParamLimits

0x5cd9,	// (0x000207c2) popup_fast_swap_wide_window

0x5ded,	// (0x000208d6) touch_pane_ParamLimits

0x5ded,	// (0x000208d6) touch_pane

0x8751,	// (0x0002323a) button_value_adjust_pane_cp2

0x4d9f,	// (0x0001f888) button_value_adjust_pane_cp4

0x4dbf,	// (0x0001f8a8) form_field_data_pane_cp2

0x4dde,	// (0x0001f8c7) form_field_data_wide_pane_cp2

0x8bd1,	// (0x000236ba) bg_scroll_pane_ParamLimits

0x607b,	// (0x00020b64) scroll_handle_pane_ParamLimits

0x608f,	// (0x00020b78) scroll_sc2_down_pane_ParamLimits

0x608f,	// (0x00020b78) scroll_sc2_down_pane

0x8c02,	// (0x000236eb) scroll_sc2_up_pane_ParamLimits

0x8c02,	// (0x000236eb) scroll_sc2_up_pane

0xbde4,	// (0x000268cd) grid_wheel_folder_pane_g1_ParamLimits

0xbde4,	// (0x000268cd) grid_wheel_folder_pane_g1

0x6254,	// (0x00020d3d) clock_nsta_pane_cp2_ParamLimits

0x6254,	// (0x00020d3d) clock_nsta_pane_cp2

0x9402,	// (0x00023eeb) listscroll_midp_pane_ParamLimits

0x940e,	// (0x00023ef7) midp_canvas_pane

0x96f6,	// (0x000241df) nsta_clock_indic_pane

0x972a,	// (0x00024213) listscroll_form_pane_vc

0x9732,	// (0x0002421b) listscroll_set_pane_vc_ParamLimits

0x9732,	// (0x0002421b) listscroll_set_pane_vc

0x982b,	// (0x00024314) clock_nsta_pane

0x98a0,	// (0x00024389) indicator_nsta_pane

0x9b80,	// (0x00024669) bg_popup_sub_pane_cp2_ParamLimits

0x9b94,	// (0x0002467d) find_pane_cp2_ParamLimits

0x9b94,	// (0x0002467d) find_pane_cp2

0x9baa,	// (0x00024693) grid_toobar_pane_ParamLimits

0x9c8a,	// (0x00024773) list_form_gen_pane_vc_ParamLimits

0x9c8a,	// (0x00024773) list_form_gen_pane_vc

0x9ca0,	// (0x00024789) scroll_pane_cp8_vc_ParamLimits

0x9ca0,	// (0x00024789) scroll_pane_cp8_vc

0x9d1c,	// (0x00024805) data_form_wide_pane_vc_ParamLimits

0x9d1c,	// (0x00024805) data_form_wide_pane_vc

0x9d28,	// (0x00024811) form_field_data_wide_pane_vc_g1

0x9d30,	// (0x00024819) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d30,	// (0x00024819) form_field_data_wide_pane_vc_t1

0x8765,	// (0x0002324e) input_focus_pane_cp6_vc_ParamLimits

0x8765,	// (0x0002324e) input_focus_pane_cp6_vc

0xa062,	// (0x00024b4b) list_midp_pane_ParamLimits

0xa06e,	// (0x00024b57) scroll_pane_cp16_ParamLimits

0xa06e,	// (0x00024b57) scroll_pane_cp16

0xa0d0,	// (0x00024bb9) button_value_adjust_pane_ParamLimits

0xa0d0,	// (0x00024bb9) button_value_adjust_pane

0xb036,	// (0x00025b1f) button_value_adjust_pane_cp6_ParamLimits

0xb036,	// (0x00025b1f) button_value_adjust_pane_cp6

0xb160,	// (0x00025c49) settings_code_pane_cp_ParamLimits

0xb160,	// (0x00025c49) settings_code_pane_cp

0x7de6,	// (0x000228cf) cell_touch_pane_g1

0x7de6,	// (0x000228cf) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0002a1e7) cell_touch_pane_g

0xb72b,	// (0x00026214) cell_touch_pane_cp_ParamLimits

0xb72b,	// (0x00026214) cell_touch_pane_cp

0xb73b,	// (0x00026224) cell_touch_pane_ParamLimits

0xb73b,	// (0x00026224) cell_touch_pane

0x7de6,	// (0x000228cf) scroll_sc2_down_pane_g1

0x7de6,	// (0x000228cf) scroll_sc2_up_pane_g1

0x7df0,	// (0x000228d9) bg_set_opt_pane_cp4_vc

0xb74d,	// (0x00026236) list_set_graphic_pane_vc_g1_ParamLimits

0xb74d,	// (0x00026236) list_set_graphic_pane_vc_g1

0xb759,	// (0x00026242) list_set_graphic_pane_vc_g2_ParamLimits

0xb759,	// (0x00026242) list_set_graphic_pane_vc_g2

0x0001,

0xf9ec,	// (0x0002a4d5) list_set_graphic_pane_vc_g_ParamLimits

0xf9ec,	// (0x0002a4d5) list_set_graphic_pane_vc_g

0xb765,	// (0x0002624e) text_primary_small_cp13_vc_ParamLimits

0xb765,	// (0x0002624e) text_primary_small_cp13_vc

0xb77d,	// (0x00026266) list_set_graphic_pane_vc_ParamLimits

0xb77d,	// (0x00026266) list_set_graphic_pane_vc

0x7df0,	// (0x000228d9) input_focus_pane_cp2_vc

0x7de6,	// (0x000228cf) setting_code_pane_vc_g1

0x7f1b,	// (0x00022a04) setting_code_pane_vc_t1

0xb78f,	// (0x00026278) set_text_pane_vc_t1_ParamLimits

0xb78f,	// (0x00026278) set_text_pane_vc_t1

0x7df0,	// (0x000228d9) input_focus_pane_cp1_vc

0xb7ab,	// (0x00026294) list_set_text_pane_vc

0x7de6,	// (0x000228cf) setting_text_pane_vc_g1

0x7df0,	// (0x000228d9) bg_set_opt_pane_cp2_vc

0x7f12,	// (0x000229fb) setting_slider_graphic_pane_vc_g1

0xb7b5,	// (0x0002629e) setting_slider_graphic_pane_vc_t1

0xb7c5,	// (0x000262ae) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f1,	// (0x0002a4da) setting_slider_graphic_pane_vc_t

0xb7d5,	// (0x000262be) slider_set_pane_cp_vc

0xb7dd,	// (0x000262c6) slider_set_pane_vc_g1

0xb7e6,	// (0x000262cf) slider_set_pane_vc_g2

0x0006,

0xf9f6,	// (0x0002a4df) slider_set_pane_vc_g

0x87bd,	// (0x000232a6) set_opt_bg_pane_g1_copy1

0x87c5,	// (0x000232ae) set_opt_bg_pane_g2_copy1

0xb812,	// (0x000262fb) set_opt_bg_pane_g3_copy1

0x87d5,	// (0x000232be) set_opt_bg_pane_g4_copy1

0x87dd,	// (0x000232c6) set_opt_bg_pane_g5_copy1

0x87e5,	// (0x000232ce) set_opt_bg_pane_g6_copy1

0xb81c,	// (0x00026305) set_opt_bg_pane_g7_copy1

0xb824,	// (0x0002630d) set_opt_bg_pane_g8_copy1

0xb82e,	// (0x00026317) set_opt_bg_pane_g9_copy1

0x7df0,	// (0x000228d9) bg_set_opt_pane_cp_vc

0xb838,	// (0x00026321) setting_slider_pane_vc_t1

0xb847,	// (0x00026330) setting_slider_pane_vc_t2

0xb857,	// (0x00026340) setting_slider_pane_vc_t3

0x0002,

0xfa05,	// (0x0002a4ee) setting_slider_pane_vc_t

0xb867,	// (0x00026350) slider_set_pane_vc

0x6b9a,	// (0x00021683) volume_set_pane_vc_g1

0x6ba3,	// (0x0002168c) volume_set_pane_vc_g2

0x6bac,	// (0x00021695) volume_set_pane_vc_g3

0x6bb5,	// (0x0002169e) volume_set_pane_vc_g4

0x6bbe,	// (0x000216a7) volume_set_pane_vc_g5

0x6bc7,	// (0x000216b0) volume_set_pane_vc_g6

0x6bd0,	// (0x000216b9) volume_set_pane_vc_g7

0x6bd9,	// (0x000216c2) volume_set_pane_vc_g8

0x6be2,	// (0x000216cb) volume_set_pane_vc_g9

0x6beb,	// (0x000216d4) volume_set_pane_vc_g10

0x0009,

0xf8aa,	// (0x0002a393) volume_set_pane_vc_g

0xb86f,	// (0x00026358) volume_set_pane_vc

0xb877,	// (0x00026360) button_value_adjust_pane_cp1_vc

0xb881,	// (0x0002636a) list_highlight_pane_cp2_vc

0xb88a,	// (0x00026373) list_set_pane_vc_ParamLimits

0xb88a,	// (0x00026373) list_set_pane_vc

0xb8e8,	// (0x000263d1) main_pane_set_vc_t1_ParamLimits

0xb8e8,	// (0x000263d1) main_pane_set_vc_t1

0xb8fd,	// (0x000263e6) main_pane_set_vc_t2_ParamLimits

0xb8fd,	// (0x000263e6) main_pane_set_vc_t2

0xb90f,	// (0x000263f8) main_pane_set_vc_t3_ParamLimits

0xb90f,	// (0x000263f8) main_pane_set_vc_t3

0xb923,	// (0x0002640c) main_pane_set_vc_t4_ParamLimits

0xb923,	// (0x0002640c) main_pane_set_vc_t4

0x0003,

0xfa0c,	// (0x0002a4f5) main_pane_set_vc_t_ParamLimits

0xfa0c,	// (0x0002a4f5) main_pane_set_vc_t

0xb937,	// (0x00026420) setting_code_pane_vc_ParamLimits

0xb937,	// (0x00026420) setting_code_pane_vc

0xb948,	// (0x00026431) setting_slider_graphic_pane_vc

0xb948,	// (0x00026431) setting_slider_pane_vc

0xb948,	// (0x00026431) setting_text_pane_vc

0xb948,	// (0x00026431) setting_volume_pane_vc

0xb952,	// (0x0002643b) scroll_pane_cp121_vc

0x873f,	// (0x00023228) set_content_pane_vc

0xb95a,	// (0x00026443) button_value_adjust_pane_g1

0xb963,	// (0x0002644c) button_value_adjust_pane_g2

0x0001,

0xfa68,	// (0x0002a551) button_value_adjust_pane_g

0xb96c,	// (0x00026455) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb96c,	// (0x00026455) form_field_slider_wide_pane_vc_t1

0xb980,	// (0x00026469) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb980,	// (0x00026469) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6d,	// (0x0002a556) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002a556) form_field_slider_wide_pane_vc_t

0x814b,	// (0x00022c34) input_focus_pane_cp10_vc_ParamLimits

0x814b,	// (0x00022c34) input_focus_pane_cp10_vc

0xb9ae,	// (0x00026497) slider_cont_pane_cp1_vc_ParamLimits

0xb9ae,	// (0x00026497) slider_cont_pane_cp1_vc

0xb9c0,	// (0x000264a9) slider_form_pane_g1_cp2

0xb7e6,	// (0x000262cf) slider_form_pane_g2_cp2

0xb9ed,	// (0x000264d6) form_field_slider_pane_vc_t3

0xb9fb,	// (0x000264e4) form_field_slider_pane_vc_t4

0xba09,	// (0x000264f2) slider_form_pane_vc_ParamLimits

0xba09,	// (0x000264f2) slider_form_pane_vc

0xba16,	// (0x000264ff) form_field_slider_pane_vc_t1_ParamLimits

0xba16,	// (0x000264ff) form_field_slider_pane_vc_t1

0xb980,	// (0x00026469) form_field_slider_pane_vc_t2_ParamLimits

0xb980,	// (0x00026469) form_field_slider_pane_vc_t2

0x0001,

0xfa7f,	// (0x0002a568) form_field_slider_pane_vc_t_ParamLimits

0xfa7f,	// (0x0002a568) form_field_slider_pane_vc_t

0x814b,	// (0x00022c34) input_focus_pane_cp9_vc_ParamLimits

0x814b,	// (0x00022c34) input_focus_pane_cp9_vc

0xba32,	// (0x0002651b) slider_cont_pane_vc_ParamLimits

0xba32,	// (0x0002651b) slider_cont_pane_vc

0xba46,	// (0x0002652f) list_form_graphic_pane_cp_vc_ParamLimits

0xba46,	// (0x0002652f) list_form_graphic_pane_cp_vc

0x9d28,	// (0x00024811) form_field_popup_wide_pane_vc_g1

0xba5b,	// (0x00026544) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba5b,	// (0x00026544) form_field_popup_wide_pane_vc_t1

0x8765,	// (0x0002324e) input_focus_pane_cp8_vc_ParamLimits

0x8765,	// (0x0002324e) input_focus_pane_cp8_vc

0xbaac,	// (0x00026595) list_form_wide_pane_vc_ParamLimits

0xbaac,	// (0x00026595) list_form_wide_pane_vc

0xbab8,	// (0x000265a1) list_form_graphic_pane_vc_g1

0xbac0,	// (0x000265a9) list_form_graphic_pane_vc_t1_ParamLimits

0xbac0,	// (0x000265a9) list_form_graphic_pane_vc_t1

0x7ed0,	// (0x000229b9) list_highlight_pane_cp5_vc_ParamLimits

0x7ed0,	// (0x000229b9) list_highlight_pane_cp5_vc

0xbadc,	// (0x000265c5) list_form_graphic_pane_vc_ParamLimits

0xbadc,	// (0x000265c5) list_form_graphic_pane_vc

0x9d28,	// (0x00024811) form_field_popup_pane_vc_g1

0xbaf2,	// (0x000265db) form_field_popup_pane_vc_t1_ParamLimits

0xbaf2,	// (0x000265db) form_field_popup_pane_vc_t1

0x8765,	// (0x0002324e) input_focus_pane_cp7_vc_ParamLimits

0x8765,	// (0x0002324e) input_focus_pane_cp7_vc

0xbb09,	// (0x000265f2) list_form_pane_vc_ParamLimits

0xbb09,	// (0x000265f2) list_form_pane_vc

0xbb15,	// (0x000265fe) data_form_pane_vc_t1_ParamLimits

0xbb15,	// (0x000265fe) data_form_pane_vc_t1

0x87bd,	// (0x000232a6) input_focus_pane_vc_g1

0x87c5,	// (0x000232ae) input_focus_pane_vc_g2

0x87cd,	// (0x000232b6) input_focus_pane_vc_g3

0x87d5,	// (0x000232be) input_focus_pane_vc_g4

0x87dd,	// (0x000232c6) input_focus_pane_vc_g5

0x87e5,	// (0x000232ce) input_focus_pane_vc_g6

0x87ed,	// (0x000232d6) input_focus_pane_vc_g7

0x87f5,	// (0x000232de) input_focus_pane_vc_g8

0x87fd,	// (0x000232e6) input_focus_pane_vc_g9

0x7de6,	// (0x000228cf) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0002a170) input_focus_pane_vc_g

0x9d1c,	// (0x00024805) data_form_pane_vc_ParamLimits

0x9d1c,	// (0x00024805) data_form_pane_vc

0x9d28,	// (0x00024811) form_field_data_pane_vc_g1

0xbb30,	// (0x00026619) form_field_data_pane_vc_t1_ParamLimits

0xbb30,	// (0x00026619) form_field_data_pane_vc_t1

0x8765,	// (0x0002324e) input_focus_pane_vc_ParamLimits

0x8765,	// (0x0002324e) input_focus_pane_vc

0xbb4a,	// (0x00026633) button_value_adjust_pane_cp3_vc

0xbb52,	// (0x0002663b) button_value_adjust_pane_cp5_vc

0xbb5a,	// (0x00026643) form_field_data_pane_vc_ParamLimits

0xbb5a,	// (0x00026643) form_field_data_pane_vc

0xbb71,	// (0x0002665a) form_field_data_pane_vc_cp2

0xbb79,	// (0x00026662) form_field_data_wide_pane_vc_ParamLimits

0xbb79,	// (0x00026662) form_field_data_wide_pane_vc

0xbb8f,	// (0x00026678) form_field_data_wide_pane_vc_cp2

0xbb97,	// (0x00026680) form_field_popup_pane_vc_ParamLimits

0xbb97,	// (0x00026680) form_field_popup_pane_vc

0xbbae,	// (0x00026697) form_field_popup_wide_pane_vc_ParamLimits

0xbbae,	// (0x00026697) form_field_popup_wide_pane_vc

0xbbc4,	// (0x000266ad) form_field_slider_pane_vc_ParamLimits

0xbbc4,	// (0x000266ad) form_field_slider_pane_vc

0xbbd7,	// (0x000266c0) form_field_slider_wide_pane_vc_ParamLimits

0xbbd7,	// (0x000266c0) form_field_slider_wide_pane_vc

0xbbea,	// (0x000266d3) grid_touch_1_pane_ParamLimits

0xbbea,	// (0x000266d3) grid_touch_1_pane

0xbbf6,	// (0x000266df) grid_touch_2_pane_ParamLimits

0xbbf6,	// (0x000266df) grid_touch_2_pane

0x96c1,	// (0x000241aa) touch_pane_g1_ParamLimits

0x96c1,	// (0x000241aa) touch_pane_g1

0xbc0e,	// (0x000266f7) cell_app_pane_cp_wide_ParamLimits

0xbc0e,	// (0x000266f7) cell_app_pane_cp_wide

0xbc1f,	// (0x00026708) grid_popup_fast_wide_pane_ParamLimits

0xbc1f,	// (0x00026708) grid_popup_fast_wide_pane

0xbc33,	// (0x0002671c) scroll_pane_cp19_ParamLimits

0xbc33,	// (0x0002671c) scroll_pane_cp19

0x7df0,	// (0x000228d9) bg_popup_window_pane_cp20

0xbc47,	// (0x00026730) listscroll_popup_fast_wide_pane

0x7ed0,	// (0x000229b9) grid_indicator_nsta_pane

0xbc4f,	// (0x00026738) clock_nsta_pane_g1

0xbc58,	// (0x00026741) clock_nsta_pane_t1

0xbc74,	// (0x0002675d) cell_indicator_nsta_pane_ParamLimits

0xbc74,	// (0x0002675d) cell_indicator_nsta_pane

0xbca5,	// (0x0002678e) cell_indicator_nsta_pane_g1

0xbcb3,	// (0x0002679c) cell_indicator_nsta_pane_g2

0x0001,

0xfa90,	// (0x0002a579) cell_indicator_nsta_pane_g

0xbcc0,	// (0x000267a9) clock_nsta_pane_cp

0xbcc9,	// (0x000267b2) indicator_nsta_pane_cp

0xbcd1,	// (0x000267ba) nsta_clock_indic_pane_g1

0x7f99,	// (0x00022a82) grid_indicator_pane

0x8cf7,	// (0x000237e0) scroll_pane_cp29

0x61a3,	// (0x00020c8c) indicator_nsta_pane_cp2_ParamLimits

0x61a3,	// (0x00020c8c) indicator_nsta_pane_cp2

0x7ed0,	// (0x000229b9) main_apps_wheel_pane

0x9f43,	// (0x00024a2c) form_midp_field_text_pane_ParamLimits

0xa08e,	// (0x00024b77) scroll_bar_cp050_ParamLimits

0xbd21,	// (0x0002680a) cell_indicator_pane_ParamLimits

0xbd21,	// (0x0002680a) cell_indicator_pane

0xbd38,	// (0x00026821) cell_indicator_pane_g1

0xbd42,	// (0x0002682b) grid_wheel_folder_pane_ParamLimits

0xbd42,	// (0x0002682b) grid_wheel_folder_pane

0xbd58,	// (0x00026841) list_wheel_apps_pane_ParamLimits

0xbd58,	// (0x00026841) list_wheel_apps_pane

0xbd69,	// (0x00026852) main_apps_wheel_pane_g1_ParamLimits

0xbd69,	// (0x00026852) main_apps_wheel_pane_g1

0xbd7d,	// (0x00026866) main_apps_wheel_pane_g2_ParamLimits

0xbd7d,	// (0x00026866) main_apps_wheel_pane_g2

0x0001,

0xfaac,	// (0x0002a595) main_apps_wheel_pane_g_ParamLimits

0xfaac,	// (0x0002a595) main_apps_wheel_pane_g

0xbd95,	// (0x0002687e) main_apps_wheel_pane_t1_ParamLimits

0xbd95,	// (0x0002687e) main_apps_wheel_pane_t1

0xbdb8,	// (0x000268a1) list_wheel_apps_pane_g1

0xbdc0,	// (0x000268a9) list_wheel_apps_pane_g2

0xbdc8,	// (0x000268b1) list_wheel_apps_pane_g3

0xbdd0,	// (0x000268b9) list_wheel_apps_pane_g4

0xbdda,	// (0x000268c3) list_wheel_apps_pane_g5

0x0004,

0xfab1,	// (0x0002a59a) list_wheel_apps_pane_g

0x927a,	// (0x00023d63) navi_icon_text_pane

0x975a,	// (0x00024243) aid_fill_nsta

0xbdfd,	// (0x000268e6) navi_icon_text_pane_g1

0xbe09,	// (0x000268f2) navi_icon_text_pane_t1

0x910d,	// (0x00023bf6) list_set_graphic_pane_t1_ParamLimits

0x910d,	// (0x00023bf6) list_set_graphic_pane_t1

0xa7f1,	// (0x000252da) popup_midp_note_alarm_window_t6_ParamLimits

0xa7f1,	// (0x000252da) popup_midp_note_alarm_window_t6

0xa803,	// (0x000252ec) popup_midp_note_alarm_window_t7_ParamLimits

0xa803,	// (0x000252ec) popup_midp_note_alarm_window_t7

0xa815,	// (0x000252fe) popup_midp_note_alarm_window_t8_ParamLimits

0xa815,	// (0x000252fe) popup_midp_note_alarm_window_t8

0xa827,	// (0x00025310) popup_midp_note_alarm_window_t9_ParamLimits

0xa827,	// (0x00025310) popup_midp_note_alarm_window_t9

0xa839,	// (0x00025322) popup_midp_note_alarm_window_t10_ParamLimits

0xa839,	// (0x00025322) popup_midp_note_alarm_window_t10

0xa84b,	// (0x00025334) popup_midp_note_alarm_window_t11_ParamLimits

0xa84b,	// (0x00025334) popup_midp_note_alarm_window_t11

0xa85d,	// (0x00025346) scroll_pane_cp17_ParamLimits

0xa85d,	// (0x00025346) scroll_pane_cp17

0x6b9a,	// (0x00021683) volume_small_pane_cp_g1

0x6e8f,	// (0x00021978) volume_small_pane_cp_g2

0x6e98,	// (0x00021981) volume_small_pane_cp_g3

0x6ea1,	// (0x0002198a) volume_small_pane_cp_g4

0x6eaa,	// (0x00021993) volume_small_pane_cp_g5

0x6eb3,	// (0x0002199c) volume_small_pane_cp_g6

0x6ebc,	// (0x000219a5) volume_small_pane_cp_g7

0x6ec5,	// (0x000219ae) volume_small_pane_cp_g8

0x6ece,	// (0x000219b7) volume_small_pane_cp_g9

0x6ed7,	// (0x000219c0) volume_small_pane_cp_g10

0x94d7,	// (0x00023fc0) midp_ticker_pane_g1_ParamLimits

0x94e3,	// (0x00023fcc) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0002a23c) midp_ticker_pane_g_ParamLimits

0x94ef,	// (0x00023fd8) midp_ticker_pane_t1_ParamLimits

0x9770,	// (0x00024259) aid_fill_nsta_2

0xa07a,	// (0x00024b63) list_form2_midp_pane

0xb1ab,	// (0x00025c94) midp_editing_number_pane_ParamLimits

0xb1ba,	// (0x00025ca3) midp_ticker_pane_ParamLimits

0xbe1b,	// (0x00026904) form2_midp_field_pane

0xbe3f,	// (0x00026928) scroll_pane_cp51

0xbe5f,	// (0x00026948) form2_midp_button_pane_ParamLimits

0xbe5f,	// (0x00026948) form2_midp_button_pane

0xbe71,	// (0x0002695a) form2_midp_content_pane_ParamLimits

0xbe71,	// (0x0002695a) form2_midp_content_pane

0xbe8b,	// (0x00026974) form2_midp_field_choice_group_pane

0xbe93,	// (0x0002697c) form2_midp_field_pane_g1

0xbe9b,	// (0x00026984) form2_midp_field_pane_g2

0xbea3,	// (0x0002698c) form2_midp_field_pane_g3

0xbeab,	// (0x00026994) form2_midp_field_pane_g4

0x0003,

0xfad6,	// (0x0002a5bf) form2_midp_field_pane_g

0xbeb3,	// (0x0002699c) form2_midp_gauge_slider_pane

0xbebb,	// (0x000269a4) form2_midp_gauge_wait_pane

0xbec3,	// (0x000269ac) form2_midp_image_pane_ParamLimits

0xbec3,	// (0x000269ac) form2_midp_image_pane

0xbede,	// (0x000269c7) form2_midp_label_pane_ParamLimits

0xbede,	// (0x000269c7) form2_midp_label_pane

0xbef7,	// (0x000269e0) form2_midp_label_pane_cp_ParamLimits

0xbef7,	// (0x000269e0) form2_midp_label_pane_cp

0xbf18,	// (0x00026a01) form2_midp_string_pane_ParamLimits

0xbf18,	// (0x00026a01) form2_midp_string_pane

0x567f,	// (0x00020168) form2_midp_text_pane_ParamLimits

0x567f,	// (0x00020168) form2_midp_text_pane

0xbf2a,	// (0x00026a13) form2_midp_time_pane

0xbf3a,	// (0x00026a23) input_focus_pane_cp51_ParamLimits

0xbf3a,	// (0x00026a23) input_focus_pane_cp51

0xbf52,	// (0x00026a3b) form2_midp_label_pane_t1_ParamLimits

0xbf52,	// (0x00026a3b) form2_midp_label_pane_t1

0x569a,	// (0x00020183) form2_mdip_text_pane_t1_ParamLimits

0x569a,	// (0x00020183) form2_mdip_text_pane_t1

0x56b8,	// (0x000201a1) form2_midp_time_pane_t1

0xbf9b,	// (0x00026a84) form2_midp_gauge_slider_pane_t1

0xbfad,	// (0x00026a96) form2_midp_gauge_slider_pane_t2

0xbfbf,	// (0x00026aa8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadf,	// (0x0002a5c8) form2_midp_gauge_slider_pane_t

0xbfd1,	// (0x00026aba) form2_midp_slider_pane

0xbfdd,	// (0x00026ac6) form2_midp_gauge_wait_pane_t1

0xbfeb,	// (0x00026ad4) form2_midp_wait_pane_ParamLimits

0xbfeb,	// (0x00026ad4) form2_midp_wait_pane

0xc016,	// (0x00026aff) list_single_2graphic_pane_cp4_ParamLimits

0xc016,	// (0x00026aff) list_single_2graphic_pane_cp4

0x9d90,	// (0x00024879) list_single_midp_graphic_pane_cp_ParamLimits

0x9d90,	// (0x00024879) list_single_midp_graphic_pane_cp

0x7df0,	// (0x000228d9) list_highlight_pane_cp20

0xc03a,	// (0x00026b23) list_single_2graphic_pane_g1_cp4

0xc042,	// (0x00026b2b) list_single_2graphic_pane_g2_cp4

0xc04a,	// (0x00026b33) list_single_2graphic_pane_t1_cp4

0x7ed0,	// (0x000229b9) list_highlight_pane_cp21

0xc059,	// (0x00026b42) list_single_midp_graphic_pane_g4_cp

0xc068,	// (0x00026b51) list_single_midp_graphic_pane_t1_cp

0xc07d,	// (0x00026b66) form2_mdip_string_pane_t1_ParamLimits

0xc07d,	// (0x00026b66) form2_mdip_string_pane_t1

0x7df0,	// (0x000228d9) bg_wml_button_pane_cp2

0x7de6,	// (0x000228cf) form2_midp_image_pane_g1

0x4b89,	// (0x0001f672) list_double_large_graphic_pane_g5_ParamLimits

0x4b89,	// (0x0001f672) list_double_large_graphic_pane_g5

0x9402,	// (0x00023eeb) midp_form_pane_ParamLimits

0x7ed0,	// (0x000229b9) main_apps_wheel_pane_ParamLimits

0x6868,	// (0x00021351) popup_preview_window_ParamLimits

0x6868,	// (0x00021351) popup_preview_window

0x6a23,	// (0x0002150c) popup_touch_info_window_ParamLimits

0x6a23,	// (0x0002150c) popup_touch_info_window

0x6a41,	// (0x0002152a) popup_touch_menu_window_ParamLimits

0x6a41,	// (0x0002152a) popup_touch_menu_window

0x7ddc,	// (0x000228c5) bg_popup_sub_pane_cp6

0xc176,	// (0x00026c5f) list_touch_menu_pane

0xc17e,	// (0x00026c67) list_single_touch_menu_pane_ParamLimits

0xc17e,	// (0x00026c67) list_single_touch_menu_pane

0xc194,	// (0x00026c7d) list_single_touch_menu_pane_t1

0x7ed0,	// (0x000229b9) bg_popup_sub_pane_cp7_ParamLimits

0x7ed0,	// (0x000229b9) bg_popup_sub_pane_cp7

0xc1a2,	// (0x00026c8b) heading_sub_pane

0xc1aa,	// (0x00026c93) list_touch_info_pane_ParamLimits

0xc1aa,	// (0x00026c93) list_touch_info_pane

0xc1b9,	// (0x00026ca2) list_single_touch_info_pane_ParamLimits

0xc1b9,	// (0x00026ca2) list_single_touch_info_pane

0xc1cb,	// (0x00026cb4) list_single_touch_info_pane_t1

0xc1d9,	// (0x00026cc2) list_single_touch_info_pane_t2

0x0001,

0xfaed,	// (0x0002a5d6) list_single_touch_info_pane_t

0x93fa,	// (0x00023ee3) bg_popup_heading_pane_cp

0xc1e7,	// (0x00026cd0) heading_sub_pane_t1

0x9cb6,	// (0x0002479f) bg_popup_preview_window_pane_cp_ParamLimits

0x9cb6,	// (0x0002479f) bg_popup_preview_window_pane_cp

0xc1a2,	// (0x00026c8b) heading_preview_pane

0xc1aa,	// (0x00026c93) list_preview_pane_ParamLimits

0xc1aa,	// (0x00026c93) list_preview_pane

0xc1f5,	// (0x00026cde) popup_preview_window_g1

0xc1b9,	// (0x00026ca2) list_single_preview_pane_ParamLimits

0xc1b9,	// (0x00026ca2) list_single_preview_pane

0xc1fd,	// (0x00026ce6) list_single_preview_pane_g1

0xc205,	// (0x00026cee) list_single_preview_pane_t1

0xc1cb,	// (0x00026cb4) list_single_preview_pane_t2

0x0001,

0xfaf2,	// (0x0002a5db) list_single_preview_pane_t

0xc213,	// (0x00026cfc) bg_popup_heading_pane_cp2_ParamLimits

0xc213,	// (0x00026cfc) bg_popup_heading_pane_cp2

0xc229,	// (0x00026d12) heading_preview_pane_g1

0xc231,	// (0x00026d1a) heading_preview_pane_t1_ParamLimits

0xc231,	// (0x00026d1a) heading_preview_pane_t1

0x7fbc,	// (0x00022aa5) soft_indicator_pane_t1_ParamLimits

0x86d8,	// (0x000231c1) scroll_pane_ParamLimits

0x8bf0,	// (0x000236d9) scroll_sc2_left_pane

0x8bf9,	// (0x000236e2) scroll_sc2_right_pane

0x8c18,	// (0x00023701) scroll_bg_pane_g1_ParamLimits

0x8c2d,	// (0x00023716) scroll_bg_pane_g2_ParamLimits

0x8c45,	// (0x0002372e) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0002a1c7) scroll_bg_pane_g_ParamLimits

0x8c18,	// (0x00023701) scroll_handle_pane_g1_ParamLimits

0x8c67,	// (0x00023750) scroll_handle_pane_g2_ParamLimits

0x8c45,	// (0x0002372e) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0002a1ce) scroll_handle_pane_g_ParamLimits

0x64e9,	// (0x00020fd2) popup_choice_list_window_ParamLimits

0x64e9,	// (0x00020fd2) popup_choice_list_window

0x9b8c,	// (0x00024675) choice_list_pane

0x9c0e,	// (0x000246f7) cell_toolbar_pane_t1

0x9c36,	// (0x0002471f) toolbar_button_pane_ParamLimits

0xad17,	// (0x00025800) ai_gene_pane_1_t2_ParamLimits

0xad17,	// (0x00025800) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0002a3ef) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0002a3ef) ai_gene_pane_1_t

0xc24e,	// (0x00026d37) scroll_sc2_left_pane_g1

0xc24e,	// (0x00026d37) scroll_sc2_right_pane_g1

0x971e,	// (0x00024207) bg_popup_sub_pane_cp10

0xc258,	// (0x00026d41) list_choice_list_pane

0xc271,	// (0x00026d5a) list_single_choice_list_pane_ParamLimits

0xc271,	// (0x00026d5a) list_single_choice_list_pane

0xc284,	// (0x00026d6d) list_single_choice_list_pane_g1

0x88f6,	// (0x000233df) list_single_choice_list_pane_t1_ParamLimits

0x88f6,	// (0x000233df) list_single_choice_list_pane_t1

0xc28c,	// (0x00026d75) choice_list_pane_g1

0xc294,	// (0x00026d7d) choice_list_pane_t1

0x7ddc,	// (0x000228c5) input_focus_pane_cp11

0x8acd,	// (0x000235b6) title_pane_stacon_g2_ParamLimits

0x8acd,	// (0x000235b6) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0002a1ad) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002a1ad) title_pane_stacon_g

0x93fa,	// (0x00023ee3) cursor_press_pane

0x6595,	// (0x0002107e) popup_fep_hwr_window_ParamLimits

0x6595,	// (0x0002107e) popup_fep_hwr_window

0x660f,	// (0x000210f8) popup_fep_vkb_window_ParamLimits

0x660f,	// (0x000210f8) popup_fep_vkb_window

0xc2a2,	// (0x00026d8b) cursor_press_pane_g1

0x0002,

0xfb1b,	// (0x0002a604) fep_vkb_side_pane_g_ParamLimits

0x6f19,	// (0x00021a02) fep_hwr_candidate_pane_ParamLimits

0x6f19,	// (0x00021a02) fep_hwr_candidate_pane

0x6f43,	// (0x00021a2c) fep_hwr_side_pane_ParamLimits

0x6f43,	// (0x00021a2c) fep_hwr_side_pane

0x6f63,	// (0x00021a4c) fep_hwr_top_pane_ParamLimits

0x6f63,	// (0x00021a4c) fep_hwr_top_pane

0x6f7b,	// (0x00021a64) fep_hwr_write_pane_ParamLimits

0x6f7b,	// (0x00021a64) fep_hwr_write_pane

0xfb1b,	// (0x0002a604) fep_vkb_side_pane_g

0xc2aa,	// (0x00026d93) fep_hwr_top_pane_g1

0xc2bc,	// (0x00026da5) fep_hwr_top_pane_g2

0x6fa7,	// (0x00021a90) fep_hwr_top_pane_g3

0x0002,

0xfaf7,	// (0x0002a5e0) fep_hwr_top_pane_g

0x6fbc,	// (0x00021aa5) fep_hwr_top_text_pane

0x8de7,	// (0x000238d0) fep_hwr_top_text_pane_g1

0xc2f2,	// (0x00026ddb) fep_hwr_top_text_pane_t1

0x70b2,	// (0x00021b9b) fep_hwr_candidate_pane_g1

0xc545,	// (0x0002702e) fep_vkb_keypad_pane_g3_ParamLimits

0xc545,	// (0x0002702e) fep_vkb_keypad_pane_g3

0xc56d,	// (0x00027056) fep_vkb_keypad_pane_g4_ParamLimits

0xc56d,	// (0x00027056) fep_vkb_keypad_pane_g4

0xc5dc,	// (0x000270c5) fep_vkb_bottom_pane_g2_ParamLimits

0xc5dc,	// (0x000270c5) fep_vkb_bottom_pane_g2

0x0001,

0xfb22,	// (0x0002a60b) fep_vkb_bottom_pane_g_ParamLimits

0xfb22,	// (0x0002a60b) fep_vkb_bottom_pane_g

0xc24e,	// (0x00026d37) cell_vkb_side_pane_g2

0x0001,

0xfb2c,	// (0x0002a615) cell_vkb_side_pane_g

0xc667,	// (0x00027150) cell_vkb_side_pane_t1

0xc675,	// (0x0002715e) cell_vkb_side_pane_t1_copy1

0xc24e,	// (0x00026d37) bg_fep_vkb_candidate_pane_g2

0xc7a1,	// (0x0002728a) cell_vkb_candidate_pane_ParamLimits

0xc300,	// (0x00026de9) aid_size_cell_vkb_ParamLimits

0xc300,	// (0x00026de9) aid_size_cell_vkb

0xc7a1,	// (0x0002728a) cell_vkb_candidate_pane

0x70cc,	// (0x00021bb5) bg_popup_fep_shadow_pane_g1

0xc38e,	// (0x00026e77) fep_vkb_bottom_pane_ParamLimits

0xc38e,	// (0x00026e77) fep_vkb_bottom_pane

0xc3c4,	// (0x00026ead) fep_vkb_candidate_pane_ParamLimits

0xc3c4,	// (0x00026ead) fep_vkb_candidate_pane

0xc3e0,	// (0x00026ec9) fep_vkb_keypad_pane_ParamLimits

0xc3e0,	// (0x00026ec9) fep_vkb_keypad_pane

0xc426,	// (0x00026f0f) fep_vkb_side_pane_ParamLimits

0xc426,	// (0x00026f0f) fep_vkb_side_pane

0xc462,	// (0x00026f4b) fep_vkb_top_pane_ParamLimits

0xc462,	// (0x00026f4b) fep_vkb_top_pane

0xc49e,	// (0x00026f87) fep_vkb_top_pane_g1_ParamLimits

0xc49e,	// (0x00026f87) fep_vkb_top_pane_g1

0xc4ad,	// (0x00026f96) fep_vkb_top_pane_g2_ParamLimits

0xc4ad,	// (0x00026f96) fep_vkb_top_pane_g2

0xc4bc,	// (0x00026fa5) fep_vkb_top_pane_g3_ParamLimits

0xc4bc,	// (0x00026fa5) fep_vkb_top_pane_g3

0x0003,

0xfb12,	// (0x0002a5fb) fep_vkb_top_pane_g_ParamLimits

0xfb12,	// (0x0002a5fb) fep_vkb_top_pane_g

0xc4da,	// (0x00026fc3) fep_vkb_top_text_pane_ParamLimits

0xc4da,	// (0x00026fc3) fep_vkb_top_text_pane

0xc4eb,	// (0x00026fd4) fep_vkb_side_pane_g1_ParamLimits

0xc4eb,	// (0x00026fd4) fep_vkb_side_pane_g1

0xc534,	// (0x0002701d) grid_vkb_side_pane_ParamLimits

0xc534,	// (0x0002701d) grid_vkb_side_pane

0x70d4,	// (0x00021bbd) bg_popup_fep_shadow_pane_g2

0x70dd,	// (0x00021bc6) bg_popup_fep_shadow_pane_g3

0x70e5,	// (0x00021bce) bg_popup_fep_shadow_pane_g4

0x70ee,	// (0x00021bd7) bg_popup_fep_shadow_pane_g5

0x70f8,	// (0x00021be1) bg_popup_fep_shadow_pane_g6

0x7100,	// (0x00021be9) bg_popup_fep_shadow_pane_g7

0x87dd,	// (0x000232c6) bg_popup_fep_shadow_pane_g8

0xc58b,	// (0x00027074) grid_vkb_keypad_number_pane_ParamLimits

0xc58b,	// (0x00027074) grid_vkb_keypad_number_pane

0xc59b,	// (0x00027084) grid_vkb_keypad_pane_ParamLimits

0xc59b,	// (0x00027084) grid_vkb_keypad_pane

0xc5c1,	// (0x000270aa) fep_vkb_bottom_pane_g1_ParamLimits

0xc5c1,	// (0x000270aa) fep_vkb_bottom_pane_g1

0xc5ea,	// (0x000270d3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5ea,	// (0x000270d3) grid_vkb_keypad_bottom_left_pane

0xc5ff,	// (0x000270e8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc5ff,	// (0x000270e8) grid_vkb_keypad_bottom_right_pane

0xc614,	// (0x000270fd) fep_vkb_top_text_pane_g1

0xc62f,	// (0x00027118) fep_vkb_top_text_pane_t1

0xc644,	// (0x0002712d) cell_vkb_side_pane_ParamLimits

0xc644,	// (0x0002712d) cell_vkb_side_pane

0xc24e,	// (0x00026d37) cell_vkb_side_pane_g1

0xc683,	// (0x0002716c) cell_vkb_keypad_pane_ParamLimits

0xc683,	// (0x0002716c) cell_vkb_keypad_pane

0xc6f8,	// (0x000271e1) cell_vkb_keypad_pane_g1

0x0008,

0xfb3f,	// (0x0002a628) bg_popup_fep_shadow_pane_g

0xc24e,	// (0x00026d37) cell_hwr_side_pane_g1

0xc24e,	// (0x00026d37) cell_hwr_side_pane_g2

0xc702,	// (0x000271eb) cell_vkb_keypad_pane_t1

0xc710,	// (0x000271f9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc710,	// (0x000271f9) cell_vkb_keypad_bottom_left_pane

0xc72d,	// (0x00027216) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc72d,	// (0x00027216) cell_vkb_keypad_bottom_right_pane

0xc24e,	// (0x00026d37) cell_vkb_keypad_bottom_left_pane_g1

0xc24e,	// (0x00026d37) cell_vkb_keypad_bottom_right_pane_g1

0xc766,	// (0x0002724f) cell_vkb_keypad_number_pane_ParamLimits

0xc766,	// (0x0002724f) cell_vkb_keypad_number_pane

0xc785,	// (0x0002726e) cell_vkb_keypad_number_pane_g1

0xc78f,	// (0x00027278) cell_vkb_keypad_number_pane_g2

0xc798,	// (0x00027281) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb31,	// (0x0002a61a) cell_vkb_keypad_number_pane_g

0xc702,	// (0x000271eb) cell_vkb_keypad_number_pane_t1

0xc7bc,	// (0x000272a5) fep_vkb_candidate_pane_g1

0x0001,

0xfb2c,	// (0x0002a615) cell_hwr_side_pane_g

0xc7d5,	// (0x000272be) cell_hwr_side_pane_t1

0x7112,	// (0x00021bfb) cell_hwr_side_pane_t1_copy1

0xc4cc,	// (0x00026fb5) cell_hwr_candidate_pane_g1

0x7120,	// (0x00021c09) cell_hwr_candidate_pane_t1

0xc24e,	// (0x00026d37) cell_vkb_candidate_pane_g2

0xc85b,	// (0x00027344) cell_vkb_candidate_pane_t1

0x6ee0,	// (0x000219c9) bg_popup_fep_shadow_pane_ParamLimits

0x6ee0,	// (0x000219c9) bg_popup_fep_shadow_pane

0x1f02,	// (0x0001c9eb) bg_fep_hwr_top_pane_g4

0xc2ce,	// (0x00026db7) bg_hwr_side_pane_g1_ParamLimits

0xc2ce,	// (0x00026db7) bg_hwr_side_pane_g1

0x6ff8,	// (0x00021ae1) cell_hwr_side_pane_ParamLimits

0x6ff8,	// (0x00021ae1) cell_hwr_side_pane

0x7033,	// (0x00021b1c) fep_hwr_write_pane_g1_ParamLimits

0x7033,	// (0x00021b1c) fep_hwr_write_pane_g1

0x7040,	// (0x00021b29) fep_hwr_write_pane_g2_ParamLimits

0x7040,	// (0x00021b29) fep_hwr_write_pane_g2

0x704d,	// (0x00021b36) fep_hwr_write_pane_g3_ParamLimits

0x704d,	// (0x00021b36) fep_hwr_write_pane_g3

0x705b,	// (0x00021b44) fep_hwr_write_pane_g4_ParamLimits

0x705b,	// (0x00021b44) fep_hwr_write_pane_g4

0x0005,

0xfafe,	// (0x0002a5e7) fep_hwr_write_pane_g_ParamLimits

0xfafe,	// (0x0002a5e7) fep_hwr_write_pane_g

0x1f02,	// (0x0001c9eb) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1f02,	// (0x0001c9eb) bg_fep_hwr_candidate_pane_g2

0x7070,	// (0x00021b59) cell_hwr_candidate_pane_ParamLimits

0x7070,	// (0x00021b59) cell_hwr_candidate_pane

0x70b2,	// (0x00021b9b) fep_hwr_candidate_pane_g1_ParamLimits

0xc32e,	// (0x00026e17) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc32e,	// (0x00026e17) bg_popup_fep_shadow_pane_cp2

0xc4cc,	// (0x00026fb5) fep_vkb_top_pane_g4_ParamLimits

0xc4cc,	// (0x00026fb5) fep_vkb_top_pane_g4

0xc512,	// (0x00026ffb) fep_vkb_side_pane_g2_ParamLimits

0xc512,	// (0x00026ffb) fep_vkb_side_pane_g2

0x4ccc,	// (0x0001f7b5) list_setting_pane_t4_ParamLimits

0x4ccc,	// (0x0001f7b5) list_setting_pane_t4

0x4d66,	// (0x0001f84f) list_setting_number_pane_t5_ParamLimits

0x4d66,	// (0x0001f84f) list_setting_number_pane_t5

0x8e2e,	// (0x00023917) list_double_heading_pane_cp2_ParamLimits

0x8e2e,	// (0x00023917) list_double_heading_pane_cp2

0x8773,	// (0x0002325c) list_double_heading_pane_g1_cp2_ParamLimits

0x8773,	// (0x0002325c) list_double_heading_pane_g1_cp2

0x877f,	// (0x00023268) list_double_heading_pane_g2_cp2_ParamLimits

0x877f,	// (0x00023268) list_double_heading_pane_g2_cp2

0xc869,	// (0x00027352) list_double_heading_pane_t1_cp2_ParamLimits

0xc869,	// (0x00027352) list_double_heading_pane_t1_cp2

0xc87f,	// (0x00027368) list_double_heading_pane_t2_cp2_ParamLimits

0xc87f,	// (0x00027368) list_double_heading_pane_t2_cp2

0x7dc4,	// (0x000228ad) aid_value_unit2

0x5d33,	// (0x0002081c) popup_preview_fixed_window

0x8159,	// (0x00022c42) bg_popup_preview_window_pane_cp02

0xc891,	// (0x0002737a) list_preview_fixed_pane

0xc8d7,	// (0x000273c0) list_empty_pane_fp_ParamLimits

0xc8d7,	// (0x000273c0) list_empty_pane_fp

0xc8d7,	// (0x000273c0) list_single_cale_day_pane_fp_ParamLimits

0xc8d7,	// (0x000273c0) list_single_cale_day_pane_fp

0xc8d7,	// (0x000273c0) list_single_graphic_heading_pane_fp_ParamLimits

0xc8d7,	// (0x000273c0) list_single_graphic_heading_pane_fp

0xc8d7,	// (0x000273c0) list_single_graphic_pane_fp_ParamLimits

0xc8d7,	// (0x000273c0) list_single_graphic_pane_fp

0xc8d7,	// (0x000273c0) list_single_heading_pane_fp_ParamLimits

0xc8d7,	// (0x000273c0) list_single_heading_pane_fp

0xc8d7,	// (0x000273c0) list_single_pane_fp_ParamLimits

0xc8d7,	// (0x000273c0) list_single_pane_fp

0xc8ec,	// (0x000273d5) list_single_pane_fp_g1_ParamLimits

0xc8ec,	// (0x000273d5) list_single_pane_fp_g1

0x56cb,	// (0x000201b4) list_single_pane_fp_g2_ParamLimits

0x56cb,	// (0x000201b4) list_single_pane_fp_g2

0x56d7,	// (0x000201c0) list_single_pane_fp_g3_ParamLimits

0x56d7,	// (0x000201c0) list_single_pane_fp_g3

0xc8f8,	// (0x000273e1) list_single_pane_fp_g4_ParamLimits

0xc8f8,	// (0x000273e1) list_single_pane_fp_g4

0x0003,

0xfb60,	// (0x0002a649) list_single_pane_fp_g_ParamLimits

0xfb60,	// (0x0002a649) list_single_pane_fp_g

0x56eb,	// (0x000201d4) list_single_pane_fp_t1_ParamLimits

0x56eb,	// (0x000201d4) list_single_pane_fp_t1

0x5702,	// (0x000201eb) list_single_graphic_pane_fp_g1_ParamLimits

0x5702,	// (0x000201eb) list_single_graphic_pane_fp_g1

0xc8ec,	// (0x000273d5) list_single_graphic_pane_fp_g2_ParamLimits

0xc8ec,	// (0x000273d5) list_single_graphic_pane_fp_g2

0x56cb,	// (0x000201b4) list_single_graphic_pane_fp_g3_ParamLimits

0x56cb,	// (0x000201b4) list_single_graphic_pane_fp_g3

0x56d7,	// (0x000201c0) list_single_graphic_pane_fp_g4_ParamLimits

0x56d7,	// (0x000201c0) list_single_graphic_pane_fp_g4

0xc8f8,	// (0x000273e1) list_single_graphic_pane_fp_g5_ParamLimits

0xc8f8,	// (0x000273e1) list_single_graphic_pane_fp_g5

0x0004,

0xfb69,	// (0x0002a652) list_single_graphic_pane_fp_g_ParamLimits

0xfb69,	// (0x0002a652) list_single_graphic_pane_fp_g

0x570e,	// (0x000201f7) list_single_graphic_pane_fp_t1_ParamLimits

0x570e,	// (0x000201f7) list_single_graphic_pane_fp_t1

0x5702,	// (0x000201eb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5702,	// (0x000201eb) list_single_graphic_heading_pane_fp_g1

0xc8ec,	// (0x000273d5) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8ec,	// (0x000273d5) list_single_graphic_heading_pane_fp_g2

0x56cb,	// (0x000201b4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x56cb,	// (0x000201b4) list_single_graphic_heading_pane_fp_g3

0x56d7,	// (0x000201c0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x56d7,	// (0x000201c0) list_single_graphic_heading_pane_fp_g4

0xc8f8,	// (0x000273e1) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8f8,	// (0x000273e1) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0002a652) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0002a652) list_single_graphic_heading_pane_fp_g

0x5724,	// (0x0002020d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5724,	// (0x0002020d) list_single_graphic_heading_pane_fp_t1

0x573a,	// (0x00020223) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x573a,	// (0x00020223) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb74,	// (0x0002a65d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb74,	// (0x0002a65d) list_single_graphic_heading_pane_fp_t

0x574c,	// (0x00020235) list_single_cale_day_pane_fp_g1_ParamLimits

0x574c,	// (0x00020235) list_single_cale_day_pane_fp_g1

0xc904,	// (0x000273ed) list_single_cale_day_pane_fp_g2_ParamLimits

0xc904,	// (0x000273ed) list_single_cale_day_pane_fp_g2

0x5784,	// (0x0002026d) list_single_cale_day_pane_fp_g3_ParamLimits

0x5784,	// (0x0002026d) list_single_cale_day_pane_fp_g3

0x57ac,	// (0x00020295) list_single_cale_day_pane_fp_g4_ParamLimits

0x57ac,	// (0x00020295) list_single_cale_day_pane_fp_g4

0x57d0,	// (0x000202b9) list_single_cale_day_pane_fp_g5_ParamLimits

0x57d0,	// (0x000202b9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb79,	// (0x0002a662) list_single_cale_day_pane_fp_g_ParamLimits

0xfb79,	// (0x0002a662) list_single_cale_day_pane_fp_g

0x57f4,	// (0x000202dd) list_single_cale_day_pane_fp_t1_ParamLimits

0x57f4,	// (0x000202dd) list_single_cale_day_pane_fp_t1

0x581a,	// (0x00020303) list_single_cale_day_pane_fp_t2_ParamLimits

0x581a,	// (0x00020303) list_single_cale_day_pane_fp_t2

0x5833,	// (0x0002031c) list_single_cale_day_pane_fp_t3_ParamLimits

0x5833,	// (0x0002031c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb84,	// (0x0002a66d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb84,	// (0x0002a66d) list_single_cale_day_pane_fp_t

0xc8ec,	// (0x000273d5) list_empty_pane_fp_g1_ParamLimits

0xc8ec,	// (0x000273d5) list_empty_pane_fp_g1

0x584c,	// (0x00020335) list_empty_pane_fp_t1

0x585a,	// (0x00020343) list_empty_pane_fp_t2

0x0001,

0xfb8b,	// (0x0002a674) list_empty_pane_fp_t

0xc8ec,	// (0x000273d5) list_single_heading_pane_fp_g1_ParamLimits

0xc8ec,	// (0x000273d5) list_single_heading_pane_fp_g1

0x56cb,	// (0x000201b4) list_single_heading_pane_fp_g2_ParamLimits

0x56cb,	// (0x000201b4) list_single_heading_pane_fp_g2

0x56d7,	// (0x000201c0) list_single_heading_pane_fp_g3_ParamLimits

0x56d7,	// (0x000201c0) list_single_heading_pane_fp_g3

0x0002,

0xfb90,	// (0x0002a679) list_single_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x0002a679) list_single_heading_pane_fp_g

0x5868,	// (0x00020351) list_single_heading_pane_fp_t1_ParamLimits

0x5868,	// (0x00020351) list_single_heading_pane_fp_t1

0x587a,	// (0x00020363) list_single_heading_pane_fp_t2_ParamLimits

0x587a,	// (0x00020363) list_single_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0002a680) list_single_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0002a680) list_single_heading_pane_fp_t

0x8964,	// (0x0002344d) aid_size_cell_fast

0x80c9,	// (0x00022bb2) soft_indicator_pane_cp1_t1

0x89a1,	// (0x0002348a) cell_app_pane_cp2_ParamLimits

0x89a1,	// (0x0002348a) cell_app_pane_cp2

0x6f02,	// (0x000219eb) fep_hwr_candidate_drop_down_list_pane

0x1f10,	// (0x0001c9f9) fep_hwr_candidate_pane_g3_ParamLimits

0x1f10,	// (0x0001c9f9) fep_hwr_candidate_pane_g3

0x1f1d,	// (0x0001ca06) fep_hwr_candidate_pane_g4_ParamLimits

0x1f1d,	// (0x0001ca06) fep_hwr_candidate_pane_g4

0x0002,

0xfb0b,	// (0x0002a5f4) fep_hwr_candidate_pane_g_ParamLimits

0xfb0b,	// (0x0002a5f4) fep_hwr_candidate_pane_g

0xc3b3,	// (0x00026e9c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3b3,	// (0x00026e9c) fep_vkb_candidate_drop_down_list_pane

0xc7c4,	// (0x000272ad) fep_vkb_candidate_pane_g3

0xc7cc,	// (0x000272b5) fep_vkb_candidate_pane_g4

0x0002,

0xfb38,	// (0x0002a621) fep_vkb_candidate_pane_g

0xc4cc,	// (0x00026fb5) cell_hwr_candidate_pane_g1_ParamLimits

0xc7e3,	// (0x000272cc) cell_hwr_candidate_pane_g3_ParamLimits

0xc7e3,	// (0x000272cc) cell_hwr_candidate_pane_g3

0xc804,	// (0x000272ed) cell_hwr_candidate_pane_g4_ParamLimits

0xc804,	// (0x000272ed) cell_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x0002a63b) cell_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x0002a63b) cell_hwr_candidate_pane_g

0xc825,	// (0x0002730e) cell_vkb_candidate_pane_g3_ParamLimits

0xc825,	// (0x0002730e) cell_vkb_candidate_pane_g3

0xc840,	// (0x00027329) cell_vkb_candidate_pane_g4_ParamLimits

0xc840,	// (0x00027329) cell_vkb_candidate_pane_g4

0xc910,	// (0x000273f9) cell_app_pane_cp2_g1_ParamLimits

0xc910,	// (0x000273f9) cell_app_pane_cp2_g1

0xc92e,	// (0x00027417) cell_app_pane_cp2_g2_ParamLimits

0xc92e,	// (0x00027417) cell_app_pane_cp2_g2

0x0001,

0xfb9c,	// (0x0002a685) cell_app_pane_cp2_g_ParamLimits

0xfb9c,	// (0x0002a685) cell_app_pane_cp2_g

0xc93a,	// (0x00027423) cell_app_pane_cp2_t1_ParamLimits

0xc93a,	// (0x00027423) cell_app_pane_cp2_t1

0x8765,	// (0x0002324e) grid_highlight_pane_cp1_ParamLimits

0x8765,	// (0x0002324e) grid_highlight_pane_cp1

0x713e,	// (0x00021c27) cell_hwr_candidate_pane_cp1_ParamLimits

0x713e,	// (0x00021c27) cell_hwr_candidate_pane_cp1

0xc4cc,	// (0x00026fb5) fep_hwr_candidate_drop_down_list_pane_g1

0xc94c,	// (0x00027435) fep_hwr_candidate_drop_down_list_pane_g2

0xc959,	// (0x00027442) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x0002a68a) fep_hwr_candidate_drop_down_list_pane_g

0x715d,	// (0x00021c46) fep_hwr_candidate_drop_down_list_scroll_pane

0x7166,	// (0x00021c4f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7166,	// (0x00021c4f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7173,	// (0x00021c5c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7173,	// (0x00021c5c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7180,	// (0x00021c69) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7180,	// (0x00021c69) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc825,	// (0x0002730e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc825,	// (0x0002730e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc840,	// (0x00027329) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc840,	// (0x00027329) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x718d,	// (0x00021c76) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x718d,	// (0x00021c76) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x71a8,	// (0x00021c91) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71a8,	// (0x00021c91) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x71c3,	// (0x00021cac) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x71c3,	// (0x00021cac) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x0002a691) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x0002a691) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc966,	// (0x0002744f) cell_vkb_candidate_pane_cp1_ParamLimits

0xc966,	// (0x0002744f) cell_vkb_candidate_pane_cp1

0xc4cc,	// (0x00026fb5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4cc,	// (0x00026fb5) fep_vkb_candidate_drop_down_list_pane_g1

0xc94c,	// (0x00027435) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc94c,	// (0x00027435) fep_vkb_candidate_drop_down_list_pane_g2

0xc959,	// (0x00027442) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc959,	// (0x00027442) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x0002a68a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba1,	// (0x0002a68a) fep_vkb_candidate_drop_down_list_pane_g

0xc986,	// (0x0002746f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc986,	// (0x0002746f) fep_vkb_candidate_drop_down_list_scroll_pane

0xc993,	// (0x0002747c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc993,	// (0x0002747c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9a0,	// (0x00027489) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9a0,	// (0x00027489) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9ac,	// (0x00027495) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9ac,	// (0x00027495) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7e3,	// (0x000272cc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7e3,	// (0x000272cc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc804,	// (0x000272ed) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc804,	// (0x000272ed) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9b8,	// (0x000274a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9b8,	// (0x000274a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc9d9,	// (0x000274c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc9d9,	// (0x000274c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc9fa,	// (0x000274e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc9fa,	// (0x000274e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0002a6a2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0002a6a2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7dfa,	// (0x000228e3) title_pane_g1_ParamLimits

0x7e07,	// (0x000228f0) title_pane_g2_ParamLimits

0xf54e,	// (0x0002a037) title_pane_g_ParamLimits

0x8dd7,	// (0x000238c0) aid_call2_pane

0x8ddf,	// (0x000238c8) aid_call_pane

0x8de7,	// (0x000238d0) popup_clock_analogue_window_g1

0x8de7,	// (0x000238d0) popup_clock_analogue_window_g2

0x60a4,	// (0x00020b8d) popup_clock_analogue_window_g3

0x60ad,	// (0x00020b96) popup_clock_analogue_window_g4

0x7de6,	// (0x000228cf) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0002a1dc) popup_clock_analogue_window_g

0x60b5,	// (0x00020b9e) popup_clock_analogue_window_t1

0x60c3,	// (0x00020bac) clock_digital_number_pane_ParamLimits

0x60c3,	// (0x00020bac) clock_digital_number_pane

0x60cf,	// (0x00020bb8) clock_digital_number_pane_cp02_ParamLimits

0x60cf,	// (0x00020bb8) clock_digital_number_pane_cp02

0x60db,	// (0x00020bc4) clock_digital_number_pane_cp03_ParamLimits

0x60db,	// (0x00020bc4) clock_digital_number_pane_cp03

0x60e7,	// (0x00020bd0) clock_digital_number_pane_cp04_ParamLimits

0x60e7,	// (0x00020bd0) clock_digital_number_pane_cp04

0x60f3,	// (0x00020bdc) clock_digital_separator_pane_ParamLimits

0x60f3,	// (0x00020bdc) clock_digital_separator_pane

0x60ff,	// (0x00020be8) popup_clock_digital_window_t1_ParamLimits

0x60ff,	// (0x00020be8) popup_clock_digital_window_t1

0x7de6,	// (0x000228cf) clock_digital_number_pane_g1

0x7de6,	// (0x000228cf) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0002a1e7) clock_digital_number_pane_g

0x7de6,	// (0x000228cf) clock_digital_separator_pane_g1

0x7de6,	// (0x000228cf) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0002a1e7) clock_digital_separator_pane_g

0x975a,	// (0x00024243) aid_fill_nsta_ParamLimits

0x98a0,	// (0x00024389) indicator_nsta_pane_ParamLimits

0x9a19,	// (0x00024502) popup_clock_analogue_window

0x9a19,	// (0x00024502) popup_clock_digital_window

0x7ed0,	// (0x000229b9) grid_indicator_nsta_pane_ParamLimits

0xbc66,	// (0x0002674f) clock_nsta_pane_t2

0x0001,

0xfa8b,	// (0x0002a574) clock_nsta_pane_t

0x6068,	// (0x00020b51) aid_size_max_handle

0x6072,	// (0x00020b5b) aid_size_min_handle

0x93fa,	// (0x00023ee3) editor_scroll_pane

0xca15,	// (0x000274fe) ex_editor_pane

0x88d2,	// (0x000233bb) scroll_pane_cp13

0x8704,	// (0x000231ed) scroll_pane_cp14

0x8e16,	// (0x000238ff) scroll_pane_cp36

0x8e42,	// (0x0002392b) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e42,	// (0x0002392b) list_single_graphic_hl_pane_cp2

0xb20c,	// (0x00025cf5) list_single_graphic_hl_pane_ParamLimits

0xb20c,	// (0x00025cf5) list_single_graphic_hl_pane

0x5890,	// (0x00020379) aid_size_min_hl_cp1

0xca1d,	// (0x00027506) list_highlight_pane_cp34_ParamLimits

0xca1d,	// (0x00027506) list_highlight_pane_cp34

0xca2e,	// (0x00027517) list_single_graphic_hl_pane_g1_ParamLimits

0xca2e,	// (0x00027517) list_single_graphic_hl_pane_g1

0x5899,	// (0x00020382) list_single_graphic_hl_pane_g2_ParamLimits

0x5899,	// (0x00020382) list_single_graphic_hl_pane_g2

0x5899,	// (0x00020382) list_single_graphic_hl_pane_g3_ParamLimits

0x5899,	// (0x00020382) list_single_graphic_hl_pane_g3

0x58a5,	// (0x0002038e) list_single_graphic_hl_pane_g4_ParamLimits

0x58a5,	// (0x0002038e) list_single_graphic_hl_pane_g4

0x58b1,	// (0x0002039a) list_single_graphic_hl_pane_g5_ParamLimits

0x58b1,	// (0x0002039a) list_single_graphic_hl_pane_g5

0x0004,

0xfbca,	// (0x0002a6b3) list_single_graphic_hl_pane_g_ParamLimits

0xfbca,	// (0x0002a6b3) list_single_graphic_hl_pane_g

0x58c5,	// (0x000203ae) list_single_graphic_hl_pane_t1_ParamLimits

0x58c5,	// (0x000203ae) list_single_graphic_hl_pane_t1

0xca3b,	// (0x00027524) aid_size_min_hl_cp2

0xca44,	// (0x0002752d) list_highlight_pane_cp34_cp2_ParamLimits

0xca44,	// (0x0002752d) list_highlight_pane_cp34_cp2

0xca2e,	// (0x00027517) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca2e,	// (0x00027517) list_single_graphic_hl_pane_g1_cp2

0xca51,	// (0x0002753a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca51,	// (0x0002753a) list_single_graphic_hl_pane_g2_cp2

0xca5d,	// (0x00027546) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca5d,	// (0x00027546) list_single_graphic_hl_pane_g3_cp2

0xba89,	// (0x00026572) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xba89,	// (0x00026572) list_single_graphic_hl_pane_g4_cp2

0xca6b,	// (0x00027554) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xca6b,	// (0x00027554) list_single_graphic_hl_pane_g5_cp2

0x63b3,	// (0x00020e9c) control_pane_g4_ParamLimits

0x63b3,	// (0x00020e9c) control_pane_g4

0x971e,	// (0x00024207) bg_popup_sub_pane_cp10_ParamLimits

0xc258,	// (0x00026d41) list_choice_list_pane_ParamLimits

0xc267,	// (0x00026d50) scroll_pane_cp23

0x8159,	// (0x00022c42) bg_popup_preview_window_pane_cp02_ParamLimits

0xc891,	// (0x0002737a) list_preview_fixed_pane_ParamLimits

0xc8a7,	// (0x00027390) list_preview_fixed_pane_cp_ParamLimits

0xc8a7,	// (0x00027390) list_preview_fixed_pane_cp

0xc8b3,	// (0x0002739c) popup_preview_fixed_window_g1_ParamLimits

0xc8b3,	// (0x0002739c) popup_preview_fixed_window_g1

0xc8bf,	// (0x000273a8) popup_preview_fixed_window_g2_ParamLimits

0xc8bf,	// (0x000273a8) popup_preview_fixed_window_g2

0x0002,

0xfb59,	// (0x0002a642) popup_preview_fixed_window_g_ParamLimits

0xfb59,	// (0x0002a642) popup_preview_fixed_window_g

0x5fdc,	// (0x00020ac5) aid_navi_side_left_pane_ParamLimits

0x5ff1,	// (0x00020ada) aid_navi_side_right_pane_ParamLimits

0x6009,	// (0x00020af2) navi_icon_pane_stacon_ParamLimits

0x601d,	// (0x00020b06) navi_navi_pane_stacon_ParamLimits

0x6009,	// (0x00020af2) navi_text_pane_stacon_ParamLimits

0x7ddc,	// (0x000228c5) main_text_info_pane

0xca95,	// (0x0002757e) listscroll_text_info_pane

0xca9d,	// (0x00027586) list_text_info_pane_ParamLimits

0xca9d,	// (0x00027586) list_text_info_pane

0xcaac,	// (0x00027595) scroll_pane_cp24_ParamLimits

0xcaac,	// (0x00027595) scroll_pane_cp24

0xcaca,	// (0x000275b3) list_text_info_pane_t1_ParamLimits

0xcaca,	// (0x000275b3) list_text_info_pane_t1

0x6507,	// (0x00020ff0) popup_fast_swap2_window_ParamLimits

0x6507,	// (0x00020ff0) popup_fast_swap2_window

0xcafb,	// (0x000275e4) aid_size_cell_fast2

0x7ddc,	// (0x000228c5) bg_popup_window_pane_cp17

0xa0ae,	// (0x00024b97) heading_pane_cp2

0x83ce,	// (0x00022eb7) listscroll_fast2_pane

0xcb05,	// (0x000275ee) grid_fast2_pane

0xcb0f,	// (0x000275f8) listscroll_fast2_pane_g1

0xcb17,	// (0x00027600) listscroll_fast2_pane_g2

0x0001,

0xfbd5,	// (0x0002a6be) listscroll_fast2_pane_g

0x88d2,	// (0x000233bb) scroll_pane_cp26

0xcb21,	// (0x0002760a) cell_fast2_pane_ParamLimits

0xcb21,	// (0x0002760a) cell_fast2_pane

0xcb36,	// (0x0002761f) cell_fast2_pane_g1

0xcb3f,	// (0x00027628) cell_fast2_pane_g2

0xcb48,	// (0x00027631) cell_fast2_pane_g3

0x0002,

0xfbda,	// (0x0002a6c3) cell_fast2_pane_g

0x84c1,	// (0x00022faa) grid_highlight_pane_cp9

0x84d6,	// (0x00022fbf) main_eswt_pane_ParamLimits

0x84d6,	// (0x00022fbf) main_eswt_pane

0xcac1,	// (0x000275aa) list_single_text_info_pane

0xcb50,	// (0x00027639) eswt_ctrl_button_pane

0xcb50,	// (0x00027639) eswt_ctrl_canvas_pane

0xcb58,	// (0x00027641) eswt_ctrl_combo_pane

0xcb50,	// (0x00027639) eswt_ctrl_default_pane

0xcb50,	// (0x00027639) eswt_ctrl_label_pane

0xcb60,	// (0x00027649) eswt_ctrl_wait_pane

0xcb68,	// (0x00027651) eswt_shell_pane

0x7ddc,	// (0x000228c5) listscroll_eswt_app_pane

0xcb88,	// (0x00027671) popup_eswt_tasktip_window_ParamLimits

0xcb88,	// (0x00027671) popup_eswt_tasktip_window

0x9cb6,	// (0x0002479f) bg_popup_window_pane_cp18

0xcb99,	// (0x00027682) eswt_control_pane_g1_ParamLimits

0xcb99,	// (0x00027682) eswt_control_pane_g1

0xcba6,	// (0x0002768f) eswt_control_pane_g2_ParamLimits

0xcba6,	// (0x0002768f) eswt_control_pane_g2

0xcbb3,	// (0x0002769c) eswt_control_pane_g3_ParamLimits

0xcbb3,	// (0x0002769c) eswt_control_pane_g3

0xcbc0,	// (0x000276a9) eswt_control_pane_g4_ParamLimits

0xcbc0,	// (0x000276a9) eswt_control_pane_g4

0x0003,

0xfbe1,	// (0x0002a6ca) eswt_control_pane_g_ParamLimits

0xfbe1,	// (0x0002a6ca) eswt_control_pane_g

0x8765,	// (0x0002324e) bg_button_pane_ParamLimits

0x8765,	// (0x0002324e) bg_button_pane

0x84d6,	// (0x00022fbf) common_borders_pane_copy2_ParamLimits

0x84d6,	// (0x00022fbf) common_borders_pane_copy2

0xcbcd,	// (0x000276b6) control_button_pane_g1_ParamLimits

0xcbcd,	// (0x000276b6) control_button_pane_g1

0xcbd9,	// (0x000276c2) control_button_pane_g2_ParamLimits

0xcbd9,	// (0x000276c2) control_button_pane_g2

0xcbe5,	// (0x000276ce) control_button_pane_g3_ParamLimits

0xcbe5,	// (0x000276ce) control_button_pane_g3

0x0002,

0xfbea,	// (0x0002a6d3) control_button_pane_g_ParamLimits

0xfbea,	// (0x0002a6d3) control_button_pane_g

0xcbf9,	// (0x000276e2) control_button_pane_t1

0xcc07,	// (0x000276f0) control_button_pane_t2

0x0001,

0xfbf1,	// (0x0002a6da) control_button_pane_t

0x9c42,	// (0x0002472b) bg_button_pane_g1

0x9c4a,	// (0x00024733) bg_button_pane_g2

0x9c52,	// (0x0002473b) bg_button_pane_g3

0x9c5a,	// (0x00024743) bg_button_pane_g4

0x9c62,	// (0x0002474b) bg_button_pane_g5

0x9c6a,	// (0x00024753) bg_button_pane_g6

0x9c72,	// (0x0002475b) bg_button_pane_g7

0x9c7a,	// (0x00024763) bg_button_pane_g8

0x9c82,	// (0x0002476b) bg_button_pane_g9

0x0008,

0xf85a,	// (0x0002a343) bg_button_pane_g

0xc213,	// (0x00026cfc) common_borders_pane_ParamLimits

0xc213,	// (0x00026cfc) common_borders_pane

0xcb99,	// (0x00027682) eswt_control_pane_g1_copy1_ParamLimits

0xcb99,	// (0x00027682) eswt_control_pane_g1_copy1

0xcba6,	// (0x0002768f) eswt_control_pane_g2_copy1_ParamLimits

0xcba6,	// (0x0002768f) eswt_control_pane_g2_copy1

0xcbb3,	// (0x0002769c) eswt_control_pane_g3_copy1_ParamLimits

0xcbb3,	// (0x0002769c) eswt_control_pane_g3_copy1

0xcbc0,	// (0x000276a9) eswt_control_pane_g4_copy1_ParamLimits

0xcbc0,	// (0x000276a9) eswt_control_pane_g4_copy1

0xc24e,	// (0x00026d37) bg_eswt_ctrl_canvas_pane_g1

0xc213,	// (0x00026cfc) common_borders_pane_cp2_ParamLimits

0xc213,	// (0x00026cfc) common_borders_pane_cp2

0xc213,	// (0x00026cfc) common_borders_pane_cp3_ParamLimits

0xc213,	// (0x00026cfc) common_borders_pane_cp3

0xcc15,	// (0x000276fe) separator_horizontal_pane

0xcc1d,	// (0x00027706) separator_vertical_pane

0xcb99,	// (0x00027682) eswt_control_pane_g1_copy2_ParamLimits

0xcb99,	// (0x00027682) eswt_control_pane_g1_copy2

0xcba6,	// (0x0002768f) eswt_control_pane_g2_copy2_ParamLimits

0xcba6,	// (0x0002768f) eswt_control_pane_g2_copy2

0xcbb3,	// (0x0002769c) eswt_control_pane_g3_copy2_ParamLimits

0xcbb3,	// (0x0002769c) eswt_control_pane_g3_copy2

0xcbc0,	// (0x000276a9) eswt_control_pane_g4_copy2_ParamLimits

0xcbc0,	// (0x000276a9) eswt_control_pane_g4_copy2

0x7ddc,	// (0x000228c5) common_borders_pane_cp4

0xcc26,	// (0x0002770f) separator_horizontal_pane_g1

0xcc2f,	// (0x00027718) separator_horizontal_pane_g2

0xcc38,	// (0x00027721) separator_horizontal_pane_g3

0x0002,

0xfbf6,	// (0x0002a6df) separator_horizontal_pane_g

0xcb99,	// (0x00027682) eswt_control_pane_g1_copy3_ParamLimits

0xcb99,	// (0x00027682) eswt_control_pane_g1_copy3

0xcba6,	// (0x0002768f) eswt_control_pane_g2_copy3_ParamLimits

0xcba6,	// (0x0002768f) eswt_control_pane_g2_copy3

0xcbb3,	// (0x0002769c) eswt_control_pane_g3_copy3_ParamLimits

0xcbb3,	// (0x0002769c) eswt_control_pane_g3_copy3

0xcbc0,	// (0x000276a9) eswt_control_pane_g4_copy3_ParamLimits

0xcbc0,	// (0x000276a9) eswt_control_pane_g4_copy3

0x7ddc,	// (0x000228c5) common_borders_pane_cp5

0xcc41,	// (0x0002772a) separator_vertical_pane_g1

0xcc4a,	// (0x00027733) separator_vertical_pane_g2

0xcc53,	// (0x0002773c) separator_vertical_pane_g3

0x0002,

0xfbfd,	// (0x0002a6e6) separator_vertical_pane_g

0xcb99,	// (0x00027682) eswt_control_pane_g1_copy4_ParamLimits

0xcb99,	// (0x00027682) eswt_control_pane_g1_copy4

0xcba6,	// (0x0002768f) eswt_control_pane_g2_copy4_ParamLimits

0xcba6,	// (0x0002768f) eswt_control_pane_g2_copy4

0xcbb3,	// (0x0002769c) eswt_control_pane_g3_copy4_ParamLimits

0xcbb3,	// (0x0002769c) eswt_control_pane_g3_copy4

0xcbc0,	// (0x000276a9) eswt_control_pane_g4_copy4_ParamLimits

0xcbc0,	// (0x000276a9) eswt_control_pane_g4_copy4

0xcc5c,	// (0x00027745) eswt_ctrl_combo_button_pane

0xcc64,	// (0x0002774d) eswt_ctrl_input_pane

0xcc6c,	// (0x00027755) popup_choice_list_window_cp70

0xcc74,	// (0x0002775d) eswt_ctrl_input_pane_t1

0x7ddc,	// (0x000228c5) input_focus_pane_cp70

0xc213,	// (0x00026cfc) bg_button_pane_cp70_ParamLimits

0xc213,	// (0x00026cfc) bg_button_pane_cp70

0xcc82,	// (0x0002776b) eswt_ctrl_combo_button_pane_g1

0xcc8a,	// (0x00027773) wait_bar_pane_cp70

0x9cb6,	// (0x0002479f) bg_popup_window_pane_cp70_ParamLimits

0x9cb6,	// (0x0002479f) bg_popup_window_pane_cp70

0xcc92,	// (0x0002777b) popup_eswt_tasktip_window_t1

0xcca8,	// (0x00027791) wait_bar_pane_cp71_ParamLimits

0xcca8,	// (0x00027791) wait_bar_pane_cp71

0xccb4,	// (0x0002779d) grid_eswt_app_pane

0x8bf9,	// (0x000236e2) scroll_pane_cp70

0xccbd,	// (0x000277a6) cell_eswt_app_pane_ParamLimits

0xccbd,	// (0x000277a6) cell_eswt_app_pane

0xcced,	// (0x000277d6) cell_eswt_app_pane_g1_ParamLimits

0xcced,	// (0x000277d6) cell_eswt_app_pane_g1

0xcd1c,	// (0x00027805) cell_eswt_app_pane_g2_ParamLimits

0xcd1c,	// (0x00027805) cell_eswt_app_pane_g2

0x0001,

0xfc04,	// (0x0002a6ed) cell_eswt_app_pane_g_ParamLimits

0xfc04,	// (0x0002a6ed) cell_eswt_app_pane_g

0xcd45,	// (0x0002782e) cell_eswt_app_pane_t1_ParamLimits

0xcd45,	// (0x0002782e) cell_eswt_app_pane_t1

0xcd77,	// (0x00027860) grid_highlight_pane_cp70_ParamLimits

0xcd77,	// (0x00027860) grid_highlight_pane_cp70

0x92cf,	// (0x00023db8) set_content_pane_g1

0x96a5,	// (0x0002418e) status_small_volume_pane

0x71de,	// (0x00021cc7) status_small_volume_pane_g1

0x71e6,	// (0x00021ccf) volume_small2_pane

0x71ef,	// (0x00021cd8) volume_small2_pane_g1

0x71f8,	// (0x00021ce1) volume_small2_pane_g2

0x7201,	// (0x00021cea) volume_small2_pane_g3

0x720a,	// (0x00021cf3) volume_small2_pane_g4

0x7213,	// (0x00021cfc) volume_small2_pane_g5

0x721c,	// (0x00021d05) volume_small2_pane_g6

0x7225,	// (0x00021d0e) volume_small2_pane_g7

0x722e,	// (0x00021d17) volume_small2_pane_g8

0x7237,	// (0x00021d20) volume_small2_pane_g9

0x7240,	// (0x00021d29) volume_small2_pane_g10

0x0009,

0xfc09,	// (0x0002a6f2) volume_small2_pane_g

0xc614,	// (0x000270fd) fep_vkb_top_text_pane_g1_ParamLimits

0xc62f,	// (0x00027118) fep_vkb_top_text_pane_t1_ParamLimits

0xc8cb,	// (0x000273b4) popup_preview_fixed_window_g3_ParamLimits

0xc8cb,	// (0x000273b4) popup_preview_fixed_window_g3

0x69b6,	// (0x0002149f) popup_toolbar_trans_pane

0xb013,	// (0x00025afc) aid_height_set_list_ParamLimits

0xb024,	// (0x00025b0d) aid_size_parent_ParamLimits

0x971e,	// (0x00024207) list_highlight_pane_cp2_ParamLimits

0x92cf,	// (0x00023db8) set_content_pane_g1_ParamLimits

0xb228,	// (0x00025d11) list_single_image_pane_ParamLimits

0xb228,	// (0x00025d11) list_single_image_pane

0xcd83,	// (0x0002786c) aid_size_cell_image_ParamLimits

0xcd83,	// (0x0002786c) aid_size_cell_image

0xcd90,	// (0x00027879) grid_single_image_pane_ParamLimits

0xcd90,	// (0x00027879) grid_single_image_pane

0x9f2e,	// (0x00024a17) list_single_image_pane_g1_ParamLimits

0x9f2e,	// (0x00024a17) list_single_image_pane_g1

0xcd9c,	// (0x00027885) list_single_image_pane_g2_ParamLimits

0xcd9c,	// (0x00027885) list_single_image_pane_g2

0x0001,

0xfc1e,	// (0x0002a707) list_single_image_pane_g_ParamLimits

0xfc1e,	// (0x0002a707) list_single_image_pane_g

0xcdb0,	// (0x00027899) list_single_image_pane_t1_ParamLimits

0xcdb0,	// (0x00027899) list_single_image_pane_t1

0xcdc6,	// (0x000278af) cell_image_list_pane_ParamLimits

0xcdc6,	// (0x000278af) cell_image_list_pane

0xcdda,	// (0x000278c3) cell_image_list_pane_g1

0xcde3,	// (0x000278cc) cell_image_list_pane_g2

0x0001,

0xfc23,	// (0x0002a70c) cell_image_list_pane_g

0xcdec,	// (0x000278d5) aid_size_cell_tb_trans_pane

0x8765,	// (0x0002324e) bg_tb_trans_pane

0xcdfe,	// (0x000278e7) grid_tb_trans_pane

0x9c42,	// (0x0002472b) bg_tb_trans_pane_g1

0x9c4a,	// (0x00024733) bg_tb_trans_pane_g2

0x9c52,	// (0x0002473b) bg_tb_trans_pane_g3

0x9c5a,	// (0x00024743) bg_tb_trans_pane_g4

0x9c62,	// (0x0002474b) bg_tb_trans_pane_g5

0x9c7a,	// (0x00024763) bg_tb_trans_pane_g6

0x9c82,	// (0x0002476b) bg_tb_trans_pane_g7

0x9c6a,	// (0x00024753) bg_tb_trans_pane_g8

0x9c72,	// (0x0002475b) bg_tb_trans_pane_g9

0x0008,

0xfc28,	// (0x0002a711) bg_tb_trans_pane_g

0xce12,	// (0x000278fb) cell_toolbar_trans_pane_ParamLimits

0xce12,	// (0x000278fb) cell_toolbar_trans_pane

0xc24e,	// (0x00026d37) cell_toolbar_trans_pane_g1

0xbe23,	// (0x0002690c) list_form2_midp_pane_t1

0xbe31,	// (0x0002691a) list_form2_midp_pane_t2

0x0001,

0xfad1,	// (0x0002a5ba) list_form2_midp_pane_t

0xbe3f,	// (0x00026928) scroll_pane_cp51_ParamLimits

0xbffb,	// (0x00026ae4) form2_midp_wait_pane_g1

0xc004,	// (0x00026aed) form2_midp_wait_pane_g2

0xc00d,	// (0x00026af6) form2_midp_wait_pane_g3

0x0002,

0xfae6,	// (0x0002a5cf) form2_midp_wait_pane_g

0x7ed0,	// (0x000229b9) list_highlight_pane_cp21_ParamLimits

0xc059,	// (0x00026b42) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc068,	// (0x00026b51) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x529f,	// (0x0001fd88) list_single_2graphic_im_pane_ParamLimits

0x529f,	// (0x0001fd88) list_single_2graphic_im_pane

0xce38,	// (0x00027921) list_single_2graphic_im_pane_g1_ParamLimits

0xce38,	// (0x00027921) list_single_2graphic_im_pane_g1

0xce49,	// (0x00027932) list_single_2graphic_im_pane_g2_ParamLimits

0xce49,	// (0x00027932) list_single_2graphic_im_pane_g2

0xce55,	// (0x0002793e) list_single_2graphic_im_pane_g3_ParamLimits

0xce55,	// (0x0002793e) list_single_2graphic_im_pane_g3

0x0003,

0xfc3b,	// (0x0002a724) list_single_2graphic_im_pane_g_ParamLimits

0xfc3b,	// (0x0002a724) list_single_2graphic_im_pane_g

0xce75,	// (0x0002795e) list_single_2graphic_im_pane_t1_ParamLimits

0xce75,	// (0x0002795e) list_single_2graphic_im_pane_t1

0xc8d7,	// (0x000273c0) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8d7,	// (0x000273c0) list_single_graphic_2heading_pane_fp

0x5702,	// (0x000201eb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5702,	// (0x000201eb) list_single_graphic_2heading_pane_fp_g1

0xc8ec,	// (0x000273d5) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8ec,	// (0x000273d5) list_single_graphic_2heading_pane_fp_g2

0x56cb,	// (0x000201b4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x56cb,	// (0x000201b4) list_single_graphic_2heading_pane_fp_g3

0x56d7,	// (0x000201c0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x56d7,	// (0x000201c0) list_single_graphic_2heading_pane_fp_g4

0xc8f8,	// (0x000273e1) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8f8,	// (0x000273e1) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0002a652) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0002a652) list_single_graphic_2heading_pane_fp_g

0x58db,	// (0x000203c4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x58db,	// (0x000203c4) list_single_graphic_2heading_pane_fp_t1

0x573a,	// (0x00020223) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x573a,	// (0x00020223) list_single_graphic_2heading_pane_fp_t2

0x58f1,	// (0x000203da) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x58f1,	// (0x000203da) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc44,	// (0x0002a72d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc44,	// (0x0002a72d) list_single_graphic_2heading_pane_fp_t

0xc2da,	// (0x00026dc3) fep_hwr_write_pane_g5_ParamLimits

0xc2da,	// (0x00026dc3) fep_hwr_write_pane_g5

0xc2e6,	// (0x00026dcf) fep_hwr_write_pane_g6_ParamLimits

0xc2e6,	// (0x00026dcf) fep_hwr_write_pane_g6

0xcb68,	// (0x00027651) eswt_shell_pane_ParamLimits

0x9cb6,	// (0x0002479f) bg_popup_window_pane_cp18_ParamLimits

0xaf6c,	// (0x00025a55) heading_pane_cp70

0xcc92,	// (0x0002777b) popup_eswt_tasktip_window_t1_ParamLimits

0x97af,	// (0x00024298) aid_touch_tab_arrow_left

0x97be,	// (0x000242a7) aid_touch_tab_arrow_right

0x7e18,	// (0x00022901) title_pane_g3_ParamLimits

0x7e18,	// (0x00022901) title_pane_g3

0x8724,	// (0x0002320d) set_value_pane_g1

0x69b6,	// (0x0002149f) popup_toolbar_trans_pane_ParamLimits

0xcdec,	// (0x000278d5) aid_size_cell_tb_trans_pane_ParamLimits

0x8765,	// (0x0002324e) bg_tb_trans_pane_ParamLimits

0xcdfe,	// (0x000278e7) grid_tb_trans_pane_ParamLimits

0x8159,	// (0x00022c42) cont_note_pane_ParamLimits

0x8159,	// (0x00022c42) cont_note_pane

0x84d6,	// (0x00022fbf) cont_snote2_single_text_pane_ParamLimits

0x84d6,	// (0x00022fbf) cont_snote2_single_text_pane

0x84d6,	// (0x00022fbf) cont_snote2_single_graphic_pane_ParamLimits

0x84d6,	// (0x00022fbf) cont_snote2_single_graphic_pane

0xa2d5,	// (0x00024dbe) cont_note_wait_pane_ParamLimits

0xa2d5,	// (0x00024dbe) cont_note_wait_pane

0xa2d5,	// (0x00024dbe) cont_note_image_pane_ParamLimits

0xa2d5,	// (0x00024dbe) cont_note_image_pane

0xcea6,	// (0x0002798f) popup_note2_window_g1_ParamLimits

0xcea6,	// (0x0002798f) popup_note2_window_g1

0xced7,	// (0x000279c0) popup_note2_window_t1_ParamLimits

0xced7,	// (0x000279c0) popup_note2_window_t1

0xcf1c,	// (0x00027a05) popup_note2_window_t2_ParamLimits

0xcf1c,	// (0x00027a05) popup_note2_window_t2

0xcf61,	// (0x00027a4a) popup_note2_window_t3_ParamLimits

0xcf61,	// (0x00027a4a) popup_note2_window_t3

0xcfa6,	// (0x00027a8f) popup_note2_window_t4_ParamLimits

0xcfa6,	// (0x00027a8f) popup_note2_window_t4

0x81dd,	// (0x00022cc6) popup_note2_window_t5_ParamLimits

0x81dd,	// (0x00022cc6) popup_note2_window_t5

0x0004,

0xfc50,	// (0x0002a739) popup_note2_window_t_ParamLimits

0xfc50,	// (0x0002a739) popup_note2_window_t

0xcfd5,	// (0x00027abe) popup_note2_image_window_g1_ParamLimits

0xcfd5,	// (0x00027abe) popup_note2_image_window_g1

0xcfe1,	// (0x00027aca) popup_note2_image_window_g2_ParamLimits

0xcfe1,	// (0x00027aca) popup_note2_image_window_g2

0x0001,

0xfc5b,	// (0x0002a744) popup_note2_image_window_g_ParamLimits

0xfc5b,	// (0x0002a744) popup_note2_image_window_g

0xcff3,	// (0x00027adc) popup_note2_image_window_t1_ParamLimits

0xcff3,	// (0x00027adc) popup_note2_image_window_t1

0xd00b,	// (0x00027af4) popup_note2_image_window_t2_ParamLimits

0xd00b,	// (0x00027af4) popup_note2_image_window_t2

0xd023,	// (0x00027b0c) popup_note2_image_window_t3_ParamLimits

0xd023,	// (0x00027b0c) popup_note2_image_window_t3

0x0002,

0xfc60,	// (0x0002a749) popup_note2_image_window_t_ParamLimits

0xfc60,	// (0x0002a749) popup_note2_image_window_t

0xa2e3,	// (0x00024dcc) popup_note2_wait_window_g1_ParamLimits

0xa2e3,	// (0x00024dcc) popup_note2_wait_window_g1

0xd03f,	// (0x00027b28) popup_note2_wait_window_g2_ParamLimits

0xd03f,	// (0x00027b28) popup_note2_wait_window_g2

0xa2fb,	// (0x00024de4) popup_note2_wait_window_g3_ParamLimits

0xa2fb,	// (0x00024de4) popup_note2_wait_window_g3

0x0002,

0xfc67,	// (0x0002a750) popup_note2_wait_window_g_ParamLimits

0xfc67,	// (0x0002a750) popup_note2_wait_window_g

0xd04b,	// (0x00027b34) popup_note2_wait_window_t1_ParamLimits

0xd04b,	// (0x00027b34) popup_note2_wait_window_t1

0xd069,	// (0x00027b52) popup_note2_wait_window_t2_ParamLimits

0xd069,	// (0x00027b52) popup_note2_wait_window_t2

0xd087,	// (0x00027b70) popup_note2_wait_window_t3_ParamLimits

0xd087,	// (0x00027b70) popup_note2_wait_window_t3

0xd099,	// (0x00027b82) popup_note2_wait_window_t4_ParamLimits

0xd099,	// (0x00027b82) popup_note2_wait_window_t4

0x0003,

0xfc6e,	// (0x0002a757) popup_note2_wait_window_t_ParamLimits

0xfc6e,	// (0x0002a757) popup_note2_wait_window_t

0xd0ab,	// (0x00027b94) wait_bar2_pane_ParamLimits

0xd0ab,	// (0x00027b94) wait_bar2_pane

0xd0c3,	// (0x00027bac) popup_snote2_single_text_window_g1_ParamLimits

0xd0c3,	// (0x00027bac) popup_snote2_single_text_window_g1

0xd0eb,	// (0x00027bd4) popup_snote2_single_text_window_t1_ParamLimits

0xd0eb,	// (0x00027bd4) popup_snote2_single_text_window_t1

0xd137,	// (0x00027c20) popup_snote2_single_text_window_t2_ParamLimits

0xd137,	// (0x00027c20) popup_snote2_single_text_window_t2

0xd183,	// (0x00027c6c) popup_snote2_single_text_window_t3_ParamLimits

0xd183,	// (0x00027c6c) popup_snote2_single_text_window_t3

0xd1c4,	// (0x00027cad) popup_snote2_single_text_window_t4_ParamLimits

0xd1c4,	// (0x00027cad) popup_snote2_single_text_window_t4

0xd1fa,	// (0x00027ce3) popup_snote2_single_text_window_t5_ParamLimits

0xd1fa,	// (0x00027ce3) popup_snote2_single_text_window_t5

0x0004,

0xfc77,	// (0x0002a760) popup_snote2_single_text_window_t_ParamLimits

0xfc77,	// (0x0002a760) popup_snote2_single_text_window_t

0xd225,	// (0x00027d0e) popup_snote2_single_graphic_window_g1_ParamLimits

0xd225,	// (0x00027d0e) popup_snote2_single_graphic_window_g1

0xd24d,	// (0x00027d36) popup_snote2_single_graphic_window_g2_ParamLimits

0xd24d,	// (0x00027d36) popup_snote2_single_graphic_window_g2

0x0001,

0xfc82,	// (0x0002a76b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc82,	// (0x0002a76b) popup_snote2_single_graphic_window_g

0xd275,	// (0x00027d5e) popup_snote2_single_graphic_window_t1_ParamLimits

0xd275,	// (0x00027d5e) popup_snote2_single_graphic_window_t1

0xd2c1,	// (0x00027daa) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2c1,	// (0x00027daa) popup_snote2_single_graphic_window_t2

0xd183,	// (0x00027c6c) popup_snote2_single_graphic_window_t3_ParamLimits

0xd183,	// (0x00027c6c) popup_snote2_single_graphic_window_t3

0xd1c4,	// (0x00027cad) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1c4,	// (0x00027cad) popup_snote2_single_graphic_window_t4

0xd1fa,	// (0x00027ce3) popup_snote2_single_graphic_window_t5_ParamLimits

0xd1fa,	// (0x00027ce3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc87,	// (0x0002a770) popup_snote2_single_graphic_window_t_ParamLimits

0xfc87,	// (0x0002a770) popup_snote2_single_graphic_window_t

0xbd00,	// (0x000267e9) clock_nsta_pane_cp2_t1

0xbd00,	// (0x000267e9) clock_nsta_pane_cp2_t2

0x0001,

0xfaa7,	// (0x0002a590) clock_nsta_pane_cp2_t

0x4e7e,	// (0x0001f967) form_field_data_wide_pane_g1_ParamLimits

0x8773,	// (0x0002325c) form_field_data_wide_pane_g2_ParamLimits

0x8773,	// (0x0002325c) form_field_data_wide_pane_g2

0x877f,	// (0x00023268) form_field_data_wide_pane_g3_ParamLimits

0x877f,	// (0x00023268) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0002a15f) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0002a15f) form_field_data_wide_pane_g

0xbc02,	// (0x000266eb) grid_touch_3_pane_ParamLimits

0xbc02,	// (0x000266eb) grid_touch_3_pane

0xd30d,	// (0x00027df6) cell_touch_3_pane_ParamLimits

0xd30d,	// (0x00027df6) cell_touch_3_pane

0xc24e,	// (0x00026d37) cell_touch_3_pane_g1

0xc24e,	// (0x00026d37) cell_touch_3_pane_g2

0x0001,

0xfb2c,	// (0x0002a615) cell_touch_3_pane_g

0x8235,	// (0x00022d1e) cont_query_data_pane

0x823d,	// (0x00022d26) cont_query_data_pane_cp1

0xd33b,	// (0x00027e24) button_value_adjust_pane_cp7

0xd343,	// (0x00027e2c) query_popup_pane_cp3

0x8ed7,	// (0x000239c0) bg_popup_sub_pane_cp22_ParamLimits

0x611e,	// (0x00020c07) navi_navi_volume_pane_cp2

0x6139,	// (0x00020c22) popup_side_volume_key_window_g2

0x6148,	// (0x00020c31) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0002a1f5) popup_side_volume_key_window_g

0x6165,	// (0x00020c4e) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0002a1fc) popup_side_volume_key_window_t

0x918e,	// (0x00023c77) popup_side_volume_key_window_ParamLimits

0x4adf,	// (0x0001f5c8) list_double_graphic_pane_g4_ParamLimits

0x4adf,	// (0x0001f5c8) list_double_graphic_pane_g4

0x52de,	// (0x0001fdc7) list_single_2heading_msg_pane_ParamLimits

0x52de,	// (0x0001fdc7) list_single_2heading_msg_pane

0x5911,	// (0x000203fa) list_single_2heading_msg_pane_g1_ParamLimits

0x5911,	// (0x000203fa) list_single_2heading_msg_pane_g1

0x490e,	// (0x0001f3f7) list_single_2heading_msg_pane_g2_ParamLimits

0x490e,	// (0x0001f3f7) list_single_2heading_msg_pane_g2

0x591d,	// (0x00020406) list_single_2heading_msg_pane_g3_ParamLimits

0x591d,	// (0x00020406) list_single_2heading_msg_pane_g3

0x5929,	// (0x00020412) list_single_2heading_msg_pane_g4_ParamLimits

0x5929,	// (0x00020412) list_single_2heading_msg_pane_g4

0x0003,

0xfc92,	// (0x0002a77b) list_single_2heading_msg_pane_g_ParamLimits

0xfc92,	// (0x0002a77b) list_single_2heading_msg_pane_g

0x5941,	// (0x0002042a) list_single_2heading_msg_pane_t1_ParamLimits

0x5941,	// (0x0002042a) list_single_2heading_msg_pane_t1

0x5969,	// (0x00020452) list_single_2heading_msg_pane_t2_ParamLimits

0x5969,	// (0x00020452) list_single_2heading_msg_pane_t2

0x599d,	// (0x00020486) list_single_2heading_msg_pane_t3_ParamLimits

0x599d,	// (0x00020486) list_single_2heading_msg_pane_t3

0x59d6,	// (0x000204bf) list_single_2heading_msg_pane_t4_ParamLimits

0x59d6,	// (0x000204bf) list_single_2heading_msg_pane_t4

0x0003,

0xfc9b,	// (0x0002a784) list_single_2heading_msg_pane_t_ParamLimits

0xfc9b,	// (0x0002a784) list_single_2heading_msg_pane_t

0x7e24,	// (0x0002290d) title_pane_g4_ParamLimits

0x7e24,	// (0x0002290d) title_pane_g4

0x5f2d,	// (0x00020a16) title_pane_stacon_g3_ParamLimits

0x5f2d,	// (0x00020a16) title_pane_stacon_g3

0xce69,	// (0x00027952) list_single_2graphic_im_pane_g4_ParamLimits

0xce69,	// (0x00027952) list_single_2graphic_im_pane_g4

0xad34,	// (0x0002581d) popup_side_volume_key_window_cp

0xb544,	// (0x0002602d) main_idle_act2_pane_t1

0x6aa8,	// (0x00021591) toolbar_button_pane_g10

0x86ce,	// (0x000231b7) popup_toolbar_window_cp1

0xbcf1,	// (0x000267da) clock_nsta_pane_cp_t1

0xbcf1,	// (0x000267da) clock_nsta_pane_cp_t2

0x0001,

0xfaa2,	// (0x0002a58b) clock_nsta_pane_cp_t

0x611e,	// (0x00020c07) navi_navi_volume_pane_cp2_ParamLimits

0x612d,	// (0x00020c16) popup_side_volume_key_window_g1_ParamLimits

0x6139,	// (0x00020c22) popup_side_volume_key_window_g2_ParamLimits

0x6148,	// (0x00020c31) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0002a1f5) popup_side_volume_key_window_g_ParamLimits

0x6eee,	// (0x000219d7) fep_hwr_aid_pane

0x1f02,	// (0x0001c9eb) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2aa,	// (0x00026d93) fep_hwr_top_pane_g1_ParamLimits

0xc2bc,	// (0x00026da5) fep_hwr_top_pane_g2_ParamLimits

0x6fa7,	// (0x00021a90) fep_hwr_top_pane_g3_ParamLimits

0xfaf7,	// (0x0002a5e0) fep_hwr_top_pane_g_ParamLimits

0x6fbc,	// (0x00021aa5) fep_hwr_top_text_pane_ParamLimits

0xaaf7,	// (0x000255e0) aid_touch_tab_arrow_arrow_2

0xab00,	// (0x000255e9) aid_touch_tab_arrow_left_2

0x6f02,	// (0x000219eb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f39,	// (0x00021a22) fep_hwr_prediction_pane

0xc41c,	// (0x00026f05) fep_vkb_prediction_pane

0xc520,	// (0x00027009) fep_vkb_side_pane_g3_ParamLimits

0xc520,	// (0x00027009) fep_vkb_side_pane_g3

0xc4cc,	// (0x00026fb5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc94c,	// (0x00027435) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc959,	// (0x00027442) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba1,	// (0x0002a68a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd368,	// (0x00027e51) fep_hwr_prediction_pane_g1

0x7249,	// (0x00021d32) fep_hwr_prediction_pane_g2

0x7251,	// (0x00021d3a) fep_hwr_prediction_pane_g3

0x7259,	// (0x00021d42) fep_hwr_prediction_pane_g4

0x0003,

0xfca4,	// (0x0002a78d) fep_hwr_prediction_pane_g

0xd368,	// (0x00027e51) fep_vkb_prediction_pane_g1

0xd372,	// (0x00027e5b) fep_vkb_prediction_pane_g2

0xd37a,	// (0x00027e63) fep_vkb_prediction_pane_g3

0xd382,	// (0x00027e6b) fep_vkb_prediction_pane_g4

0x0003,

0xfcad,	// (0x0002a796) fep_vkb_prediction_pane_g

0x6d6e,	// (0x00021857) slider_set_pane_g3

0x6d82,	// (0x0002186b) slider_set_pane_g4

0x6d9a,	// (0x00021883) slider_set_pane_g5

0x6d6e,	// (0x00021857) slider_set_pane_g6

0x6db0,	// (0x00021899) slider_set_pane_g7

0xb189,	// (0x00025c72) slider_form_pane_g3

0xb192,	// (0x00025c7b) slider_form_pane_g4

0xb19a,	// (0x00025c83) slider_form_pane_g5

0xb189,	// (0x00025c72) slider_form_pane_g6

0xb1a2,	// (0x00025c8b) slider_form_pane_g7

0xb7ee,	// (0x000262d7) slider_set_pane_vc_g3

0xb7f7,	// (0x000262e0) slider_set_pane_vc_g4

0xb800,	// (0x000262e9) slider_set_pane_vc_g5

0xb7ee,	// (0x000262d7) slider_set_pane_vc_g6

0xb809,	// (0x000262f2) slider_set_pane_vc_g7

0xb9c9,	// (0x000264b2) slider_form_pane_vc_g1

0xb9d2,	// (0x000264bb) slider_form_pane_vc_g2

0xb9db,	// (0x000264c4) slider_form_pane_vc_g3

0xb9c9,	// (0x000264b2) slider_form_pane_vc_g4

0xb9e4,	// (0x000264cd) slider_form_pane_vc_g5

0x0004,

0xfa74,	// (0x0002a55d) slider_form_pane_vc_g

0x7ddc,	// (0x000228c5) main_idle_act3_pane

0xd38a,	// (0x00027e73) ai3_links_pane

0xd393,	// (0x00027e7c) popup_ai3_data_window_ParamLimits

0xd393,	// (0x00027e7c) popup_ai3_data_window

0x7ddc,	// (0x000228c5) grid_ai3_links_pane

0xd3ad,	// (0x00027e96) cell_ai3_links_pane_ParamLimits

0xd3ad,	// (0x00027e96) cell_ai3_links_pane

0xd3c5,	// (0x00027eae) bg_popup_sub_pane_cp11

0xd3d2,	// (0x00027ebb) cell_ai3_links_pane_g1

0x7ddc,	// (0x000228c5) bg_popup_sub_pane_cp12

0xd3f7,	// (0x00027ee0) heading_ai3_data_pane

0xd3ff,	// (0x00027ee8) list_ai3_gene_pane

0xd40b,	// (0x00027ef4) popup_ai3_data_window_g1

0xd413,	// (0x00027efc) heading_ai3_data_pane_g1

0xd41b,	// (0x00027f04) heading_ai3_data_pane_t1

0xd429,	// (0x00027f12) list_double_ai3_gene_pane_ParamLimits

0xd429,	// (0x00027f12) list_double_ai3_gene_pane

0xd436,	// (0x00027f1f) list_single_ai3_gene_pane_ParamLimits

0xd436,	// (0x00027f1f) list_single_ai3_gene_pane

0xc213,	// (0x00026cfc) list_highlight_pane_cp7_ParamLimits

0xc213,	// (0x00026cfc) list_highlight_pane_cp7

0xd443,	// (0x00027f2c) list_single_a13_gene_pane_t1_ParamLimits

0xd443,	// (0x00027f2c) list_single_a13_gene_pane_t1

0xd45a,	// (0x00027f43) list_single_ai3_gene_pane_g1

0xd463,	// (0x00027f4c) list_single_ai3_gene_pane_g2

0x0001,

0xfcb6,	// (0x0002a79f) list_single_ai3_gene_pane_g

0xd46b,	// (0x00027f54) list_double_ai3_gene_pane_g1_ParamLimits

0xd46b,	// (0x00027f54) list_double_ai3_gene_pane_g1

0xd477,	// (0x00027f60) list_double_ai3_gene_pane_t1_ParamLimits

0xd477,	// (0x00027f60) list_double_ai3_gene_pane_t1

0xd493,	// (0x00027f7c) list_double_ai3_gene_pane_t2_ParamLimits

0xd493,	// (0x00027f7c) list_double_ai3_gene_pane_t2

0xd4a9,	// (0x00027f92) list_double_ai3_gene_pane_t3_ParamLimits

0xd4a9,	// (0x00027f92) list_double_ai3_gene_pane_t3

0x0002,

0xfcbb,	// (0x0002a7a4) list_double_ai3_gene_pane_t_ParamLimits

0xfcbb,	// (0x0002a7a4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5907,	// (0x000203f0) aid_size_min_col_2

0xd354,	// (0x00027e3d) aid_size_min_msg_ParamLimits

0xd354,	// (0x00027e3d) aid_size_min_msg

0xc620,	// (0x00027109) fep_vkb_top_text_pane_g2_ParamLimits

0xc620,	// (0x00027109) fep_vkb_top_text_pane_g2

0x0001,

0xfb27,	// (0x0002a610) fep_vkb_top_text_pane_g_ParamLimits

0xfb27,	// (0x0002a610) fep_vkb_top_text_pane_g

0x7ddc,	// (0x000228c5) main_hc_apps_shell_pane

0xd4c6,	// (0x00027faf) grid_hc_apps_pane_ParamLimits

0xd4c6,	// (0x00027faf) grid_hc_apps_pane

0xd4d5,	// (0x00027fbe) list_hc_apps_pane

0xd4dd,	// (0x00027fc6) scroll_pane_cp37_ParamLimits

0xd4dd,	// (0x00027fc6) scroll_pane_cp37

0xd4e9,	// (0x00027fd2) cell_hc_apps_pane_ParamLimits

0xd4e9,	// (0x00027fd2) cell_hc_apps_pane

0xd597,	// (0x00028080) cell_hc_apps_pane_g1_ParamLimits

0xd597,	// (0x00028080) cell_hc_apps_pane_g1

0xd5c8,	// (0x000280b1) cell_hc_apps_pane_g2_ParamLimits

0xd5c8,	// (0x000280b1) cell_hc_apps_pane_g2

0xd5e4,	// (0x000280cd) cell_hc_apps_pane_g3_ParamLimits

0xd5e4,	// (0x000280cd) cell_hc_apps_pane_g3

0x0002,

0xfcc2,	// (0x0002a7ab) cell_hc_apps_pane_g_ParamLimits

0xfcc2,	// (0x0002a7ab) cell_hc_apps_pane_g

0xd606,	// (0x000280ef) cell_hc_apps_pane_t1_ParamLimits

0xd606,	// (0x000280ef) cell_hc_apps_pane_t1

0x8159,	// (0x00022c42) grid_highlight_pane_cp10_ParamLimits

0x8159,	// (0x00022c42) grid_highlight_pane_cp10

0xd646,	// (0x0002812f) list_single_hc_apps_pane_ParamLimits

0xd646,	// (0x0002812f) list_single_hc_apps_pane

0xd6a2,	// (0x0002818b) list_single_hc_apps_pane_g1

0x59fb,	// (0x000204e4) list_single_hc_apps_pane_g2

0x0001,

0xfcc9,	// (0x0002a7b2) list_single_hc_apps_pane_g

0x5a14,	// (0x000204fd) list_single_hc_apps_pane_g2_copy1

0x5a30,	// (0x00020519) list_single_hc_apps_pane_t1

0x7ed0,	// (0x000229b9) bg_set_opt_pane_cp_ParamLimits

0x5e55,	// (0x0002093e) setting_slider_pane_t1_ParamLimits

0x5e6e,	// (0x00020957) setting_slider_pane_t2_ParamLimits

0x5e88,	// (0x00020971) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002a047) setting_slider_pane_t_ParamLimits

0x5ea0,	// (0x00020989) slider_set_pane_ParamLimits

0x63c7,	// (0x00020eb0) control_pane_g5_ParamLimits

0x63c7,	// (0x00020eb0) control_pane_g5

0xafd8,	// (0x00025ac1) slider_set_pane_g1_ParamLimits

0x6d62,	// (0x0002184b) slider_set_pane_g2_ParamLimits

0x6d6e,	// (0x00021857) slider_set_pane_g3_ParamLimits

0x6d82,	// (0x0002186b) slider_set_pane_g4_ParamLimits

0x6d9a,	// (0x00021883) slider_set_pane_g5_ParamLimits

0x6d6e,	// (0x00021857) slider_set_pane_g6_ParamLimits

0x6db0,	// (0x00021899) slider_set_pane_g7_ParamLimits

0xf958,	// (0x0002a441) slider_set_pane_g_ParamLimits

0x927a,	// (0x00023d63) navi_icon_text_pane_ParamLimits

0x9770,	// (0x00024259) aid_fill_nsta_2_ParamLimits

0x97af,	// (0x00024298) aid_touch_tab_arrow_left_ParamLimits

0x97be,	// (0x000242a7) aid_touch_tab_arrow_right_ParamLimits

0x982b,	// (0x00024314) clock_nsta_pane_ParamLimits

0xaad9,	// (0x000255c2) navi_icon_pane_g1_ParamLimits

0xaae5,	// (0x000255ce) navi_text_pane_t1_ParamLimits

0xbdfd,	// (0x000268e6) navi_icon_text_pane_g1_ParamLimits

0xbe09,	// (0x000268f2) navi_icon_text_pane_t1_ParamLimits

0xd6a2,	// (0x0002818b) list_single_hc_apps_pane_g1_ParamLimits

0x59fb,	// (0x000204e4) list_single_hc_apps_pane_g2_ParamLimits

0xfcc9,	// (0x0002a7b2) list_single_hc_apps_pane_g_ParamLimits

0x5a14,	// (0x000204fd) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5a30,	// (0x00020519) list_single_hc_apps_pane_t1_ParamLimits

0x5d5f,	// (0x00020848) popup_toolbar2_fixed_window_ParamLimits

0x5d5f,	// (0x00020848) popup_toolbar2_fixed_window

0x69ac,	// (0x00021495) popup_toolbar2_float_window

0x7ddc,	// (0x000228c5) bg_popup_sub_pane_cp27

0xd6bb,	// (0x000281a4) grid_toolbar2_float_pane

0x7ddc,	// (0x000228c5) bg_popup_sub_pane_cp26

0xd6bb,	// (0x000281a4) grid_toolbar2_fixed_pane

0xd6c3,	// (0x000281ac) cell_toolbar2_fixed_pane_ParamLimits

0xd6c3,	// (0x000281ac) cell_toolbar2_fixed_pane

0xd6d3,	// (0x000281bc) cell_toolbar2_fixed_pane_g1

0xd6dc,	// (0x000281c5) toolbar2_fixed_button_pane

0x9c42,	// (0x0002472b) toolbar2_fixed_button_pane_g1

0x9c4a,	// (0x00024733) toolbar2_fixed_button_pane_g2

0x9c52,	// (0x0002473b) toolbar2_fixed_button_pane_g3

0x9c5a,	// (0x00024743) toolbar2_fixed_button_pane_g4

0x9c62,	// (0x0002474b) toolbar2_fixed_button_pane_g5

0x9c6a,	// (0x00024753) toolbar2_fixed_button_pane_g6

0x9c72,	// (0x0002475b) toolbar2_fixed_button_pane_g7

0x9c7a,	// (0x00024763) toolbar2_fixed_button_pane_g8

0x9c82,	// (0x0002476b) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x0002a343) toolbar2_fixed_button_pane_g

0xd6e4,	// (0x000281cd) cell_toolbar2_float_pane_ParamLimits

0xd6e4,	// (0x000281cd) cell_toolbar2_float_pane

0xd6f5,	// (0x000281de) cell_toolbar2_float_pane_g1

0xd6dc,	// (0x000281c5) toolbar2_fixed_button_pane_cp

0xc37c,	// (0x00026e65) fep_vkb_accented_list_pane_ParamLimits

0xc37c,	// (0x00026e65) fep_vkb_accented_list_pane

0x710a,	// (0x00021bf3) bg_popup_fep_shadow_pane_g9

0x93fa,	// (0x00023ee3) bg_popup_fep_shadow_pane_cp3

0x88b9,	// (0x000233a2) list_accented_list_pane

0xd6fe,	// (0x000281e7) list_single_accented_list_pane_ParamLimits

0xd6fe,	// (0x000281e7) list_single_accented_list_pane

0x93fa,	// (0x00023ee3) list_highlight_pane_cp10

0xd70f,	// (0x000281f8) list_single_accented_list_pane_t1

0x68fc,	// (0x000213e5) popup_slider_window_ParamLimits

0x68fc,	// (0x000213e5) popup_slider_window

0xd34b,	// (0x00027e34) aid_indentation_list_msg

0xd7d3,	// (0x000282bc) bg_popup_window_pane_cp19

0xd83b,	// (0x00028324) popup_slider_window_g1

0xd857,	// (0x00028340) popup_slider_window_g2

0xd873,	// (0x0002835c) popup_slider_window_g3

0x0005,

0xfcce,	// (0x0002a7b7) popup_slider_window_g

0xd8d9,	// (0x000283c2) popup_slider_window_t1

0xd94d,	// (0x00028436) small_volume_slider_vertical_pane

0xc24e,	// (0x00026d37) small_volume_slider_vertical_pane_g1

0xc24e,	// (0x00026d37) small_volume_slider_vertical_pane_g2

0xd969,	// (0x00028452) small_volume_slider_vertical_pane_g3

0x0002,

0xfce0,	// (0x0002a7c9) small_volume_slider_vertical_pane_g

0x5b21,	// (0x0002060a) area_side_right_pane_ParamLimits

0x5b21,	// (0x0002060a) area_side_right_pane

0x7261,	// (0x00021d4a) aid_size_side_button_ParamLimits

0x7261,	// (0x00021d4a) aid_size_side_button

0x7275,	// (0x00021d5e) grid_sctrl_middle_pane_ParamLimits

0x7275,	// (0x00021d5e) grid_sctrl_middle_pane

0x7294,	// (0x00021d7d) sctrl_sk_bottom_pane

0x72a5,	// (0x00021d8e) sctrl_sk_top_pane

0x72b7,	// (0x00021da0) aid_touch_sctrl_top

0x8159,	// (0x00022c42) bg_sctrl_sk_pane_ParamLimits

0x8159,	// (0x00022c42) bg_sctrl_sk_pane

0x72c4,	// (0x00021dad) sctrl_sk_top_pane_g1

0x72d1,	// (0x00021dba) sctrl_sk_top_pane_t1

0x72b7,	// (0x00021da0) aid_touch_sctrl_bottom

0x8159,	// (0x00022c42) bg_sctrl_sk_pane_cp_ParamLimits

0x8159,	// (0x00022c42) bg_sctrl_sk_pane_cp

0x72ec,	// (0x00021dd5) sctrl_sk_bottom_pane_g1

0x72d1,	// (0x00021dba) sctrl_sk_bottom_pane_t1

0x72f5,	// (0x00021dde) cell_sctrl_middle_pane_ParamLimits

0x72f5,	// (0x00021dde) cell_sctrl_middle_pane

0x7310,	// (0x00021df9) aid_touch_sctrl_middle_ParamLimits

0x7310,	// (0x00021df9) aid_touch_sctrl_middle

0x8765,	// (0x0002324e) bg_sctrl_middle_pane_ParamLimits

0x8765,	// (0x0002324e) bg_sctrl_middle_pane

0xc4cc,	// (0x00026fb5) cell_sctrl_middle_pane_g1_ParamLimits

0xc4cc,	// (0x00026fb5) cell_sctrl_middle_pane_g1

0x7322,	// (0x00021e0b) cell_sctrl_middle_pane_g2_ParamLimits

0x7322,	// (0x00021e0b) cell_sctrl_middle_pane_g2

0x0001,

0xfcec,	// (0x0002a7d5) cell_sctrl_middle_pane_g_ParamLimits

0xfcec,	// (0x0002a7d5) cell_sctrl_middle_pane_g

0x9c42,	// (0x0002472b) bg_sctrl_middle_pane_g1

0x9c4a,	// (0x00024733) bg_sctrl_middle_pane_g2

0x9c52,	// (0x0002473b) bg_sctrl_middle_pane_g3

0x9c5a,	// (0x00024743) bg_sctrl_middle_pane_g4

0x9c62,	// (0x0002474b) bg_sctrl_middle_pane_g5

0x9c6a,	// (0x00024753) bg_sctrl_middle_pane_g6

0x9c72,	// (0x0002475b) bg_sctrl_middle_pane_g7

0x9c7a,	// (0x00024763) bg_sctrl_middle_pane_g8

0x0007,

0xfcf1,	// (0x0002a7da) bg_sctrl_middle_pane_g

0x9c82,	// (0x0002476b) bg_sctrl_middle_pane_g8_copy1

0x9c42,	// (0x0002472b) bg_sctrl_sk_pane_g1

0x9c4a,	// (0x00024733) bg_sctrl_sk_pane_g2

0x9c52,	// (0x0002473b) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x0002a343) bg_sctrl_sk_pane_g

0x8694,	// (0x0002317d) aid_size_touch_scroll_bar

0x9c5a,	// (0x00024743) bg_sctrl_sk_pane_g4

0x9c62,	// (0x0002474b) bg_sctrl_sk_pane_g5

0x9c6a,	// (0x00024753) bg_sctrl_sk_pane_g6

0x9c72,	// (0x0002475b) bg_sctrl_sk_pane_g7

0x9c7a,	// (0x00024763) bg_sctrl_sk_pane_g8

0x9c82,	// (0x0002476b) bg_sctrl_sk_pane_g9

0x6565,	// (0x0002104e) popup_fep_china_hwr2_fs_candidate_window

0x656f,	// (0x00021058) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x656f,	// (0x00021058) popup_fep_china_hwr2_fs_control_window

0xc4cc,	// (0x00026fb5) sctrl_sk_top_pane_g2

0x0001,

0xfce7,	// (0x0002a7d0) sctrl_sk_top_pane_g

0xd972,	// (0x0002845b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd972,	// (0x0002845b) aid_fep_china_hwr2_fs_cell

0xd984,	// (0x0002846d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd984,	// (0x0002846d) bg_popup_fep_shadow_pane_cp4

0xd99b,	// (0x00028484) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd99b,	// (0x00028484) bg_popup_fep_shadow_pane_cp5

0xd9ad,	// (0x00028496) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9ad,	// (0x00028496) popup_fep_china_hwr2_fs_control_bar_grid

0xd9bd,	// (0x000284a6) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9c5,	// (0x000284ae) aid_fep_china_hwr2_fs_candi_cell

0x7ddc,	// (0x000228c5) bg_popup_fep_shadow_pane_cp6

0xd9cf,	// (0x000284b8) popup_fep_china_hwr2_fs_candidate_grid

0xd9d9,	// (0x000284c2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9d9,	// (0x000284c2) cell_fep_china_hwr2_fs_funtion_grid

0xc24e,	// (0x00026d37) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd9f1,	// (0x000284da) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd9f1,	// (0x000284da) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd9ff,	// (0x000284e8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd9ff,	// (0x000284e8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd02,	// (0x0002a7eb) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd02,	// (0x0002a7eb) cell_fep_china_hwr2_fs_funtion_grid_g

0xda15,	// (0x000284fe) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda15,	// (0x000284fe) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda2a,	// (0x00028513) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda2a,	// (0x00028513) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd07,	// (0x0002a7f0) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd07,	// (0x0002a7f0) cell_fep_china_hwr2_fs_funtion_grid_t

0xda46,	// (0x0002852f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda4e,	// (0x00028537) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda56,	// (0x0002853f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0c,	// (0x0002a7f5) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda5e,	// (0x00028547) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda5e,	// (0x00028547) cell_fep_china_hwr2_fs_candidate_grid

0xda77,	// (0x00028560) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda7f,	// (0x00028568) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc24e,	// (0x00026d37) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc24e,	// (0x00026d37) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2c,	// (0x0002a615) cell_fep_china_hwr2_fs_candidate_grid_g

0xda87,	// (0x00028570) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9838,	// (0x00024321) clock_nsta_pane_cp_24_ParamLimits

0x9838,	// (0x00024321) clock_nsta_pane_cp_24

0x98b6,	// (0x0002439f) indicator_nsta_pane_cp_24_ParamLimits

0x98b6,	// (0x0002439f) indicator_nsta_pane_cp_24

0xa955,	// (0x0002543e) heading_pane_g1

0x0001,

0xf8bf,	// (0x0002a3a8) heading_pane_g

0xb38d,	// (0x00025e76) grid_sct_catagory_button_pane

0xb3bd,	// (0x00025ea6) scroll_pane_cp5_ParamLimits

0xbe4b,	// (0x00026934) button_value_adjust_pane_cp5_ParamLimits

0xbe4b,	// (0x00026934) button_value_adjust_pane_cp5

0xbf2a,	// (0x00026a13) form2_midp_time_pane_ParamLimits

0xda95,	// (0x0002857e) cell_sct_catagory_button_pane_ParamLimits

0xda95,	// (0x0002857e) cell_sct_catagory_button_pane

0xc213,	// (0x00026cfc) bg_button_pane_cp01_ParamLimits

0xc213,	// (0x00026cfc) bg_button_pane_cp01

0xc24e,	// (0x00026d37) cell_sct_catagory_button_pane_g1

0x693b,	// (0x00021424) popup_tb_extension_window

0xdaa7,	// (0x00028590) aid_size_cell_ext_ParamLimits

0xdaa7,	// (0x00028590) aid_size_cell_ext

0x8159,	// (0x00022c42) bg_tb_trans_pane_cp1_ParamLimits

0x8159,	// (0x00022c42) bg_tb_trans_pane_cp1

0xdac7,	// (0x000285b0) grid_tb_ext_pane_ParamLimits

0xdac7,	// (0x000285b0) grid_tb_ext_pane

0xdaf5,	// (0x000285de) cell_tb_ext_pane_ParamLimits

0xdaf5,	// (0x000285de) cell_tb_ext_pane

0xdb0c,	// (0x000285f5) cell_tb_ext_pane_g1_ParamLimits

0xdb0c,	// (0x000285f5) cell_tb_ext_pane_g1

0xdb29,	// (0x00028612) cell_tb_ext_pane_t1

0x8159,	// (0x00022c42) list_highlight_pane_cp11_ParamLimits

0x8159,	// (0x00022c42) list_highlight_pane_cp11

0x5d7e,	// (0x00020867) popup_uni_indicator_window_ParamLimits

0x5d7e,	// (0x00020867) popup_uni_indicator_window

0x8765,	// (0x0002324e) bg_popup_sub_pane_cp14

0xdb44,	// (0x0002862d) list_uniindi_pane

0xdb50,	// (0x00028639) uniindi_top_pane

0x8159,	// (0x00022c42) bg_uniindi_top_pane

0xdb6f,	// (0x00028658) uniindi_top_pane_g1

0xdb85,	// (0x0002866e) uniindi_top_pane_g2

0x0003,

0xfd13,	// (0x0002a7fc) uniindi_top_pane_g

0xdbaf,	// (0x00028698) uniindi_top_pane_t1

0xdbd9,	// (0x000286c2) list_single_uniindi_pane_ParamLimits

0xdbd9,	// (0x000286c2) list_single_uniindi_pane

0xc24e,	// (0x00026d37) bg_uniindi_top_pane_g1

0xdbec,	// (0x000286d5) list_single_uniindi_pane_g1

0xdbff,	// (0x000286e8) list_single_uniindi_pane_t1

0x7ddc,	// (0x000228c5) control_bg_pane

0xdc24,	// (0x0002870d) bg_sctrl_sk_pane_cp1

0xdc2d,	// (0x00028716) bg_sctrl_sk_pane_cp2

0xdc36,	// (0x0002871f) control_bg_pane_g1

0xdc3f,	// (0x00028728) control_bg_pane_g2

0x0001,

0xfd1c,	// (0x0002a805) control_bg_pane_g

0xbca5,	// (0x0002678e) cell_indicator_nsta_pane_g1_ParamLimits

0xbcb3,	// (0x0002679c) cell_indicator_nsta_pane_g2_ParamLimits

0xfa90,	// (0x0002a579) cell_indicator_nsta_pane_g_ParamLimits

0x56b8,	// (0x000201a1) form2_midp_time_pane_t1_ParamLimits

0x84d6,	// (0x00022fbf) main_idle_act4_pane_ParamLimits

0x84d6,	// (0x00022fbf) main_idle_act4_pane

0x693b,	// (0x00021424) popup_tb_extension_window_ParamLimits

0xdae5,	// (0x000285ce) tb_ext_find_pane_ParamLimits

0xdae5,	// (0x000285ce) tb_ext_find_pane

0xdc48,	// (0x00028731) ai_gene_pane_1_cp1

0x9541,	// (0x0002402a) ai_gene_pane_2_cp1

0xdc50,	// (0x00028739) list_single_idle_plugin_calendar_pane

0xdc59,	// (0x00028742) list_single_idle_plugin_notification_pane

0xdc62,	// (0x0002874b) list_single_idle_plugin_player_pane

0xdc6b,	// (0x00028754) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc6b,	// (0x00028754) list_single_idle_plugin_shortcut_pane

0xdc8d,	// (0x00028776) main_idle_act4_pane_t1

0xdc9f,	// (0x00028788) main_idle_act4_pane_t2

0x0001,

0xfd21,	// (0x0002a80a) main_idle_act4_pane_t

0xdcb1,	// (0x0002879a) middle_sk_idle_act4_pane_ParamLimits

0xdcb1,	// (0x0002879a) middle_sk_idle_act4_pane

0xdcc7,	// (0x000287b0) popup_clock_digital_analogue_window_cp2

0xdce1,	// (0x000287ca) shortcut_wheel_idle_act4_pane_ParamLimits

0xdce1,	// (0x000287ca) shortcut_wheel_idle_act4_pane

0xc24e,	// (0x00026d37) shortcut_wheel_idle_act4_pane_g1

0xc24e,	// (0x00026d37) shortcut_wheel_idle_act4_pane_g2

0xc24e,	// (0x00026d37) shortcut_wheel_idle_act4_pane_g3

0xc24e,	// (0x00026d37) shortcut_wheel_idle_act4_pane_g4

0xc24e,	// (0x00026d37) shortcut_wheel_idle_act4_pane_g5

0xdcf5,	// (0x000287de) shortcut_wheel_idle_act4_pane_g6

0xdcfd,	// (0x000287e6) shortcut_wheel_idle_act4_pane_g7

0xdd05,	// (0x000287ee) shortcut_wheel_idle_act4_pane_g8

0xdd0d,	// (0x000287f6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd26,	// (0x0002a80f) shortcut_wheel_idle_act4_pane_g

0xc4cc,	// (0x00026fb5) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4cc,	// (0x00026fb5) middle_sk_idle_act4_pane_g1

0xdd71,	// (0x0002885a) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd71,	// (0x0002885a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd44,	// (0x0002a82d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd44,	// (0x0002a82d) middle_sk_idle_act4_pane_g

0xdd7d,	// (0x00028866) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd7d,	// (0x00028866) middle_sk_idle_act4_pane_t1

0xdd9a,	// (0x00028883) grid_ai_shortcut_pane_ParamLimits

0xdd9a,	// (0x00028883) grid_ai_shortcut_pane

0xddb3,	// (0x0002889c) list_highlight_pane_cp16_ParamLimits

0xddb3,	// (0x0002889c) list_highlight_pane_cp16

0xddc0,	// (0x000288a9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddc0,	// (0x000288a9) list_single_idle_plugin_shortcut_pane_g1

0xddcc,	// (0x000288b5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddcc,	// (0x000288b5) list_single_idle_plugin_shortcut_pane_g2

0xdde4,	// (0x000288cd) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdde4,	// (0x000288cd) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x0025,	// (0x0001ab0e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x0025,	// (0x0001ab0e) list_single_idle_plugin_shortcut_pane_g

0xddf7,	// (0x000288e0) cell_ai_shortcut_pane_ParamLimits

0xddf7,	// (0x000288e0) cell_ai_shortcut_pane

0xde1b,	// (0x00028904) cell_ai_shortcut_pane_g1_ParamLimits

0xde1b,	// (0x00028904) cell_ai_shortcut_pane_g1

0xdc48,	// (0x00028731) ai_gene_pane_1_cp2

0xde3d,	// (0x00028926) ai_gene_pane_2_cp2

0xde45,	// (0x0002892e) list_highlight_pane_cp15

0xde4e,	// (0x00028937) list_single_idle_plugin_calendar_pane_g1

0xde45,	// (0x0002892e) list_highlight_pane_cp17

0xde56,	// (0x0002893f) list_single_idle_plugin_calendar_pane_g1_copy1

0xde5e,	// (0x00028947) list_single_idle_plugin_player_pane_g1

0xb5e6,	// (0x000260cf) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd49,	// (0x0002a832) list_single_idle_plugin_player_pane_g

0xde66,	// (0x0002894f) list_single_idle_plugin_player_pane_t1

0xde74,	// (0x0002895d) list_single_idle_plugin_player_pane_t2

0xde82,	// (0x0002896b) list_single_idle_plugin_player_pane_t3

0xde90,	// (0x00028979) list_single_idle_plugin_player_pane_t4

0x0003,

0x0031,	// (0x0001ab1a) list_single_idle_plugin_player_pane_t

0xde9e,	// (0x00028987) wait_bar_pane_cp15

0xdea6,	// (0x0002898f) grid_ai_notification_pane

0xb5e6,	// (0x000260cf) list_single_idle_plugin_notification_pane_g1

0xdeaf,	// (0x00028998) cell_ai_notification_pane_ParamLimits

0xdeaf,	// (0x00028998) cell_ai_notification_pane

0xdebc,	// (0x000289a5) cell_ai_notification_pane_g1

0xdec4,	// (0x000289ad) cell_ai_notification_pane_t1

0xded2,	// (0x000289bb) tb_ext_find_button_pane

0xdeda,	// (0x000289c3) tb_ext_find_pane_g1

0xdee2,	// (0x000289cb) tb_ext_find_pane_t1

0x8de7,	// (0x000238d0) tb_ext_find_button_pane_g1

0xdef0,	// (0x000289d9) tb_ext_find_button_pane_g2

0x0001,

0xfd4e,	// (0x0002a837) tb_ext_find_button_pane_g

0xdc8d,	// (0x00028776) main_idle_act4_pane_t1_ParamLimits

0xdc9f,	// (0x00028788) main_idle_act4_pane_t2_ParamLimits

0xfd21,	// (0x0002a80a) main_idle_act4_pane_t_ParamLimits

0xdcc7,	// (0x000287b0) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdcd5,	// (0x000287be) sat_plugin_idle_act4_pane_ParamLimits

0xdcd5,	// (0x000287be) sat_plugin_idle_act4_pane

0xdef9,	// (0x000289e2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdef9,	// (0x000289e2) sat_plugin_idle_act4_pane_t1

0xdf0c,	// (0x000289f5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf0c,	// (0x000289f5) sat_plugin_idle_act4_pane_t2

0xdf1f,	// (0x00028a08) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf1f,	// (0x00028a08) sat_plugin_idle_act4_pane_t3

0xdf32,	// (0x00028a1b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf32,	// (0x00028a1b) sat_plugin_idle_act4_pane_t4

0x0003,

0x003f,	// (0x0001ab28) sat_plugin_idle_act4_pane_t_ParamLimits

0x003f,	// (0x0001ab28) sat_plugin_idle_act4_pane_t

0x5cb9,	// (0x000207a2) popup_battery_window_ParamLimits

0x5cb9,	// (0x000207a2) popup_battery_window

0x8159,	// (0x00022c42) bg_popup_sub_pane_cp25_ParamLimits

0x8159,	// (0x00022c42) bg_popup_sub_pane_cp25

0xdf45,	// (0x00028a2e) popup_battery_window_g1_ParamLimits

0xdf45,	// (0x00028a2e) popup_battery_window_g1

0xdf51,	// (0x00028a3a) popup_battery_window_t1_ParamLimits

0xdf51,	// (0x00028a3a) popup_battery_window_t1

0xdf63,	// (0x00028a4c) popup_battery_window_t2_ParamLimits

0xdf63,	// (0x00028a4c) popup_battery_window_t2

0x0001,

0x0048,	// (0x0001ab31) popup_battery_window_t_ParamLimits

0x0048,	// (0x0001ab31) popup_battery_window_t

0x940e,	// (0x00023ef7) midp_canvas_pane_ParamLimits

0x9485,	// (0x00023f6e) midp_keypad_pane_ParamLimits

0x9485,	// (0x00023f6e) midp_keypad_pane

0x971e,	// (0x00024207) main_midp_pane_ParamLimits

0xbd0f,	// (0x000267f8) signal_pane_g2_cp_ParamLimits

0xdf80,	// (0x00028a69) aid_size_cell_midp_keypad_ParamLimits

0xdf80,	// (0x00028a69) aid_size_cell_midp_keypad

0xdf9a,	// (0x00028a83) midp_keyp_game_grid_pane_ParamLimits

0xdf9a,	// (0x00028a83) midp_keyp_game_grid_pane

0xdfba,	// (0x00028aa3) midp_keyp_rocker_pane_ParamLimits

0xdfba,	// (0x00028aa3) midp_keyp_rocker_pane

0xdff3,	// (0x00028adc) midp_keyp_sk_left_pane_ParamLimits

0xdff3,	// (0x00028adc) midp_keyp_sk_left_pane

0xe04d,	// (0x00028b36) midp_keyp_sk_right_pane_ParamLimits

0xe04d,	// (0x00028b36) midp_keyp_sk_right_pane

0x7ddc,	// (0x000228c5) bg_button_pane_cp03

0xe0a7,	// (0x00028b90) midp_keyp_sk_left_pane_g1

0x7ddc,	// (0x000228c5) bg_button_pane_cp04

0xe0a7,	// (0x00028b90) midp_keyp_sk_right_pane_g1

0xc24e,	// (0x00026d37) midp_keyp_rocker_pane_g1

0xe0b0,	// (0x00028b99) keyp_game_cell_pane_ParamLimits

0xe0b0,	// (0x00028b99) keyp_game_cell_pane

0x7ddc,	// (0x000228c5) bg_button_pane_cp02

0xe0c3,	// (0x00028bac) keyp_game_cell_pane_g1

0x5cfd,	// (0x000207e6) popup_fep_vkb2_window_ParamLimits

0x5cfd,	// (0x000207e6) popup_fep_vkb2_window

0x7340,	// (0x00021e29) aid_size_cell_vkb2_ParamLimits

0x7340,	// (0x00021e29) aid_size_cell_vkb2

0x7394,	// (0x00021e7d) popup_fep_vkb2_window_g1_ParamLimits

0x7394,	// (0x00021e7d) popup_fep_vkb2_window_g1

0x73dc,	// (0x00021ec5) vkb2_area_bottom_pane_ParamLimits

0x73dc,	// (0x00021ec5) vkb2_area_bottom_pane

0x7428,	// (0x00021f11) vkb2_area_keypad_pane_ParamLimits

0x7428,	// (0x00021f11) vkb2_area_keypad_pane

0x746a,	// (0x00021f53) vkb2_area_top_pane_ParamLimits

0x746a,	// (0x00021f53) vkb2_area_top_pane

0x74e4,	// (0x00021fcd) vkb2_top_entry_pane_ParamLimits

0x74e4,	// (0x00021fcd) vkb2_top_entry_pane

0x750e,	// (0x00021ff7) vkb2_top_grid_left_pane_ParamLimits

0x750e,	// (0x00021ff7) vkb2_top_grid_left_pane

0x752c,	// (0x00022015) vkb2_top_grid_right_pane_ParamLimits

0x752c,	// (0x00022015) vkb2_top_grid_right_pane

0x754a,	// (0x00022033) vkb2_cell_keypad_pane_ParamLimits

0x754a,	// (0x00022033) vkb2_cell_keypad_pane

0x761b,	// (0x00022104) vkb2_area_bottom_grid_pane_ParamLimits

0x761b,	// (0x00022104) vkb2_area_bottom_grid_pane

0x7641,	// (0x0002212a) vkb2_area_bottom_pane_g1_ParamLimits

0x7641,	// (0x0002212a) vkb2_area_bottom_pane_g1

0x7665,	// (0x0002214e) vkb2_area_bottom_pane_g2_ParamLimits

0x7665,	// (0x0002214e) vkb2_area_bottom_pane_g2

0x7693,	// (0x0002217c) vkb2_area_bottom_pane_g3_ParamLimits

0x7693,	// (0x0002217c) vkb2_area_bottom_pane_g3

0x0002,

0xfd53,	// (0x0002a83c) vkb2_area_bottom_pane_g_ParamLimits

0xfd53,	// (0x0002a83c) vkb2_area_bottom_pane_g

0x76f4,	// (0x000221dd) vkb2_top_cell_left_pane_ParamLimits

0x76f4,	// (0x000221dd) vkb2_top_cell_left_pane

0xe0d4,	// (0x00028bbd) vkb2_top_entry_pane_g1_ParamLimits

0xe0d4,	// (0x00028bbd) vkb2_top_entry_pane_g1

0xe0e2,	// (0x00028bcb) vkb2_top_entry_pane_t1_ParamLimits

0xe0e2,	// (0x00028bcb) vkb2_top_entry_pane_t1

0xe114,	// (0x00028bfd) vkb2_top_entry_pane_t2_ParamLimits

0xe114,	// (0x00028bfd) vkb2_top_entry_pane_t2

0xe146,	// (0x00028c2f) vkb2_top_entry_pane_t3_ParamLimits

0xe146,	// (0x00028c2f) vkb2_top_entry_pane_t3

0x0002,

0x0054,	// (0x0001ab3d) vkb2_top_entry_pane_t_ParamLimits

0x0054,	// (0x0001ab3d) vkb2_top_entry_pane_t

0x7741,	// (0x0002222a) vkb2_top_grid_right_pane_g1_ParamLimits

0x7741,	// (0x0002222a) vkb2_top_grid_right_pane_g1

0x7757,	// (0x00022240) vkb2_top_grid_right_pane_g2_ParamLimits

0x7757,	// (0x00022240) vkb2_top_grid_right_pane_g2

0x776f,	// (0x00022258) vkb2_top_grid_right_pane_g3_ParamLimits

0x776f,	// (0x00022258) vkb2_top_grid_right_pane_g3

0x7787,	// (0x00022270) vkb2_top_grid_right_pane_g4_ParamLimits

0x7787,	// (0x00022270) vkb2_top_grid_right_pane_g4

0x0003,

0xfd5a,	// (0x0002a843) vkb2_top_grid_right_pane_g_ParamLimits

0xfd5a,	// (0x0002a843) vkb2_top_grid_right_pane_g

0x779d,	// (0x00022286) vkb2_top_cell_left_pane_g1

0x77b4,	// (0x0002229d) vkb2_cell_keypad_pane_g1_ParamLimits

0x77b4,	// (0x0002229d) vkb2_cell_keypad_pane_g1

0xe16a,	// (0x00028c53) vkb2_cell_keypad_pane_t1_ParamLimits

0xe16a,	// (0x00028c53) vkb2_cell_keypad_pane_t1

0x77c2,	// (0x000222ab) vkb2_cell_bottom_grid_pane_ParamLimits

0x77c2,	// (0x000222ab) vkb2_cell_bottom_grid_pane

0x77fb,	// (0x000222e4) vkb2_cell_bottom_grid_pane_g1

0xdd15,	// (0x000287fe) aid_call2_pane_cp02

0xdd1d,	// (0x00028806) aid_call_pane_cp02

0xdd25,	// (0x0002880e) clock_digital_number_pane_cp10

0xdd2d,	// (0x00028816) clock_digital_number_pane_cp11

0xdd35,	// (0x0002881e) clock_digital_number_pane_cp12

0xdd3d,	// (0x00028826) clock_digital_number_pane_cp13

0xdd45,	// (0x0002882e) clock_digital_separator_pane_cp10

0x8de7,	// (0x000238d0) popup_clock_digital_analogue_window_cp2_g1

0x8de7,	// (0x000238d0) popup_clock_digital_analogue_window_cp2_g2

0xdd4d,	// (0x00028836) popup_clock_digital_analogue_window_cp2_g3

0x8de7,	// (0x000238d0) popup_clock_digital_analogue_window_cp2_g4

0xdd4d,	// (0x00028836) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd39,	// (0x0002a822) popup_clock_digital_analogue_window_cp2_g

0xdd55,	// (0x0002883e) popup_clock_digital_analogue_window_cp2_t1

0xdd63,	// (0x0002884c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x001b,	// (0x0001ab04) popup_clock_digital_analogue_window_cp2_t

0xc24e,	// (0x00026d37) clock_digital_number_pane_cp10_g1

0xc24e,	// (0x00026d37) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0002a615) clock_digital_number_pane_cp10_g

0xc24e,	// (0x00026d37) clock_digital_separator_pane_cp10_g1

0xc24e,	// (0x00026d37) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0002a615) clock_digital_separator_pane_cp10_g

0xdb91,	// (0x0002867a) uniindi_top_pane_g3

0xdba2,	// (0x0002868b) uniindi_top_pane_g4

0x75d5,	// (0x000220be) vkb2_row_keypad_pane_ParamLimits

0x75d5,	// (0x000220be) vkb2_row_keypad_pane

0x7817,	// (0x00022300) vkb2_cell_t_keypad_pane_ParamLimits

0x7817,	// (0x00022300) vkb2_cell_t_keypad_pane

0x7827,	// (0x00022310) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7827,	// (0x00022310) vkb2_cell_t_keypad_pane_cp08

0x783a,	// (0x00022323) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x783a,	// (0x00022323) vkb2_cell_t_keypad_pane_cp09

0x784e,	// (0x00022337) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x784e,	// (0x00022337) vkb2_cell_t_keypad_pane_cp01

0x785f,	// (0x00022348) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x785f,	// (0x00022348) vkb2_cell_t_keypad_pane_cp02

0x7870,	// (0x00022359) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7870,	// (0x00022359) vkb2_cell_t_keypad_pane_cp03

0x7881,	// (0x0002236a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7881,	// (0x0002236a) vkb2_cell_t_keypad_pane_cp04

0x7892,	// (0x0002237b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7892,	// (0x0002237b) vkb2_cell_t_keypad_pane_cp05

0x78a3,	// (0x0002238c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x78a3,	// (0x0002238c) vkb2_cell_t_keypad_pane_cp06

0x78b4,	// (0x0002239d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x78b4,	// (0x0002239d) vkb2_cell_t_keypad_pane_cp07

0x78c5,	// (0x000223ae) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x78c5,	// (0x000223ae) vkb2_cell_t_keypad_pane_cp10

0xc4cc,	// (0x00026fb5) vkb2_cell_t_keypad_pane_g1

0xe181,	// (0x00028c6a) vkb2_cell_t_keypad_pane_t1

0x7ddc,	// (0x000228c5) popup_grid_graphic2_window

0xe193,	// (0x00028c7c) aid_size_cell_graphic2_ParamLimits

0xe193,	// (0x00028c7c) aid_size_cell_graphic2

0xe1cb,	// (0x00028cb4) bg_popup_window_pane_cp21_ParamLimits

0xe1cb,	// (0x00028cb4) bg_popup_window_pane_cp21

0xe1d9,	// (0x00028cc2) graphic2_pages_pane_ParamLimits

0xe1d9,	// (0x00028cc2) graphic2_pages_pane

0xe21f,	// (0x00028d08) grid_graphic2_control_pane_ParamLimits

0xe21f,	// (0x00028d08) grid_graphic2_control_pane

0xe25d,	// (0x00028d46) grid_graphic2_pane_ParamLimits

0xe25d,	// (0x00028d46) grid_graphic2_pane

0xe2d1,	// (0x00028dba) cell_graphic2_pane

0x7ddc,	// (0x000228c5) main_comp_mode_pane

0xd3ff,	// (0x00027ee8) list_ai3_gene_pane_ParamLimits

0xd7d3,	// (0x000282bc) bg_popup_window_pane_cp19_ParamLimits

0xd7df,	// (0x000282c8) bg_touch_area_indi_pane_ParamLimits

0xd7df,	// (0x000282c8) bg_touch_area_indi_pane

0xd7f5,	// (0x000282de) bg_touch_area_indi_pane_cp01_ParamLimits

0xd7f5,	// (0x000282de) bg_touch_area_indi_pane_cp01

0xd80b,	// (0x000282f4) bg_touch_area_indi_pane_cp02_ParamLimits

0xd80b,	// (0x000282f4) bg_touch_area_indi_pane_cp02

0xd821,	// (0x0002830a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd821,	// (0x0002830a) bg_touch_area_indi_pane_cp03

0xd83b,	// (0x00028324) popup_slider_window_g1_ParamLimits

0xd857,	// (0x00028340) popup_slider_window_g2_ParamLimits

0xd873,	// (0x0002835c) popup_slider_window_g3_ParamLimits

0xfcce,	// (0x0002a7b7) popup_slider_window_g_ParamLimits

0xd8d9,	// (0x000283c2) popup_slider_window_t1_ParamLimits

0xd94d,	// (0x00028436) small_volume_slider_vertical_pane_ParamLimits

0xe2d1,	// (0x00028dba) cell_graphic2_pane_ParamLimits

0xe320,	// (0x00028e09) bg_button_pane_cp10_ParamLimits

0xe320,	// (0x00028e09) bg_button_pane_cp10

0xe333,	// (0x00028e1c) bg_button_pane_cp11_ParamLimits

0xe333,	// (0x00028e1c) bg_button_pane_cp11

0xe346,	// (0x00028e2f) graphic2_pages_pane_g1_ParamLimits

0xe346,	// (0x00028e2f) graphic2_pages_pane_g1

0xe361,	// (0x00028e4a) graphic2_pages_pane_g2_ParamLimits

0xe361,	// (0x00028e4a) graphic2_pages_pane_g2

0x0001,

0xfd68,	// (0x0002a851) graphic2_pages_pane_g_ParamLimits

0xfd68,	// (0x0002a851) graphic2_pages_pane_g

0xe379,	// (0x00028e62) graphic2_pages_pane_t1_ParamLimits

0xe379,	// (0x00028e62) graphic2_pages_pane_t1

0xe391,	// (0x00028e7a) cell_graphic2_control_pane_ParamLimits

0xe391,	// (0x00028e7a) cell_graphic2_control_pane

0xe3af,	// (0x00028e98) cell_graphic2_pane_g1_ParamLimits

0xe3af,	// (0x00028e98) cell_graphic2_pane_g1

0xe3bc,	// (0x00028ea5) cell_graphic2_pane_g2_ParamLimits

0xe3bc,	// (0x00028ea5) cell_graphic2_pane_g2

0xe3c9,	// (0x00028eb2) cell_graphic2_pane_g3_ParamLimits

0xe3c9,	// (0x00028eb2) cell_graphic2_pane_g3

0xe3d6,	// (0x00028ebf) cell_graphic2_pane_g4_ParamLimits

0xe3d6,	// (0x00028ebf) cell_graphic2_pane_g4

0xe3e3,	// (0x00028ecc) cell_graphic2_pane_g5_ParamLimits

0xe3e3,	// (0x00028ecc) cell_graphic2_pane_g5

0x0004,

0xfd6d,	// (0x0002a856) cell_graphic2_pane_g_ParamLimits

0xfd6d,	// (0x0002a856) cell_graphic2_pane_g

0xe3fe,	// (0x00028ee7) cell_graphic2_pane_t1_ParamLimits

0xe3fe,	// (0x00028ee7) cell_graphic2_pane_t1

0x9cb6,	// (0x0002479f) grid_highlight_pane_cp11_ParamLimits

0x9cb6,	// (0x0002479f) grid_highlight_pane_cp11

0x8159,	// (0x00022c42) bg_button_pane_cp05

0xe435,	// (0x00028f1e) cell_graphic2_control_pane_g1

0xc24e,	// (0x00026d37) bg_touch_area_indi_pane_g1

0xe45d,	// (0x00028f46) aid_cmod_rocker_key_size

0xe467,	// (0x00028f50) aid_cmode_itu_key_size

0xe471,	// (0x00028f5a) main_cmode_video_pane

0xe47b,	// (0x00028f64) main_comp_mode_itu_pane

0xe487,	// (0x00028f70) main_comp_mode_rocker_pane

0xe493,	// (0x00028f7c) cell_cmode_rocker_pane_ParamLimits

0xe493,	// (0x00028f7c) cell_cmode_rocker_pane

0xe4a5,	// (0x00028f8e) cell_cmode_itu_pane_ParamLimits

0xe4a5,	// (0x00028f8e) cell_cmode_itu_pane

0x8765,	// (0x0002324e) bg_button_pane_cp06_ParamLimits

0x8765,	// (0x0002324e) bg_button_pane_cp06

0xc4cc,	// (0x00026fb5) cell_cmode_rocker_pane_g1_ParamLimits

0xc4cc,	// (0x00026fb5) cell_cmode_rocker_pane_g1

0xd9f1,	// (0x000284da) cell_cmode_rocker_pane_g2_ParamLimits

0xd9f1,	// (0x000284da) cell_cmode_rocker_pane_g2

0x0001,

0xfd7d,	// (0x0002a866) cell_cmode_rocker_pane_g_ParamLimits

0xfd7d,	// (0x0002a866) cell_cmode_rocker_pane_g

0x7ddc,	// (0x000228c5) bg_button_pane_cp07

0xe4ba,	// (0x00028fa3) cell_cmode_itu_pane_g1

0xe4c3,	// (0x00028fac) cell_cmode_itu_pane_t1

0xe4d1,	// (0x00028fba) cell_cmode_itu_pane_t2

0x0001,

0xfd82,	// (0x0002a86b) cell_cmode_itu_pane_t

0xdc14,	// (0x000286fd) aid_touch_ctrl_left

0xdc1c,	// (0x00028705) aid_touch_ctrl_right

0x7ddc,	// (0x000228c5) compa_mode_pane

0xe4df,	// (0x00028fc8) aid_cmod_rocker_key_size_cp

0xe4e9,	// (0x00028fd2) aid_cmode_itu_key_size_cp

0xe4f3,	// (0x00028fdc) compa_mode_pane_g1

0xe4fb,	// (0x00028fe4) compa_mode_pane_g2

0xe503,	// (0x00028fec) compa_mode_pane_g3

0x0002,

0xfd87,	// (0x0002a870) compa_mode_pane_g

0xe50b,	// (0x00028ff4) main_comp_mode_itu_pane_cp

0xe513,	// (0x00028ffc) main_comp_mode_rocker_pane_cp

0xe51b,	// (0x00029004) cell_cmode_itu_pane_cp_ParamLimits

0xe51b,	// (0x00029004) cell_cmode_itu_pane_cp

0xe530,	// (0x00029019) cell_cmode_rocker_pane_cp_ParamLimits

0xe530,	// (0x00029019) cell_cmode_rocker_pane_cp

0x8765,	// (0x0002324e) bg_button_pane_cp06_cp_ParamLimits

0x8765,	// (0x0002324e) bg_button_pane_cp06_cp

0xc4cc,	// (0x00026fb5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4cc,	// (0x00026fb5) cell_cmode_rocker_pane_g1_cp

0xc24e,	// (0x00026d37) cell_cmode_rocker_pane_g2_cp

0x7ddc,	// (0x000228c5) bg_button_pane_cp07_cp

0xb189,	// (0x00025c72) cell_cmode_itu_pane_g1_cp

0xe542,	// (0x0002902b) cell_cmode_itu_pane_t1_cp

0xe542,	// (0x0002902b) cell_cmode_itu_pane_t2_cp

0xb176,	// (0x00025c5f) settings_code_pane_cp2

0x7ed0,	// (0x000229b9) bg_popup_window_pane_cp3_ParamLimits

0x8359,	// (0x00022e42) heading_pane_cp3_ParamLimits

0x8365,	// (0x00022e4e) listscroll_popup_graphic_pane_ParamLimits

0x6eee,	// (0x000219d7) fep_hwr_aid_pane_ParamLimits

0x72b7,	// (0x00021da0) aid_touch_sctrl_top_ParamLimits

0x72c4,	// (0x00021dad) sctrl_sk_top_pane_g1_ParamLimits

0xc4cc,	// (0x00026fb5) sctrl_sk_top_pane_g2_ParamLimits

0xfce7,	// (0x0002a7d0) sctrl_sk_top_pane_g_ParamLimits

0x72d1,	// (0x00021dba) sctrl_sk_top_pane_t1_ParamLimits

0x72b7,	// (0x00021da0) aid_touch_sctrl_bottom_ParamLimits

0x72d1,	// (0x00021dba) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb5d,	// (0x00028646) aid_area_touch_clock

0x74ac,	// (0x00021f95) aid_vkb2_area_top_pane_cell_ParamLimits

0x74ac,	// (0x00021f95) aid_vkb2_area_top_pane_cell

0x75f7,	// (0x000220e0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x75f7,	// (0x000220e0) aid_vkb2_area_bottom_pane_cell

0xe0cc,	// (0x00028bb5) popup_char_count_window

0xe550,	// (0x00029039) popup_char_count_window_g1

0xe559,	// (0x00029042) popup_char_count_window_g2

0xe562,	// (0x0002904b) popup_char_count_window_g3

0x0002,

0xfd8e,	// (0x0002a877) popup_char_count_window_g

0xe56b,	// (0x00029054) popup_char_count_window_t1

0x7372,	// (0x00021e5b) popup_fep_char_preview_window_ParamLimits

0x7372,	// (0x00021e5b) popup_fep_char_preview_window

0x74ca,	// (0x00021fb3) vkb2_top_candi_pane_ParamLimits

0x74ca,	// (0x00021fb3) vkb2_top_candi_pane

0xe579,	// (0x00029062) cell_vkb2_top_candi_pane_ParamLimits

0xe579,	// (0x00029062) cell_vkb2_top_candi_pane

0xa2d5,	// (0x00024dbe) bg_popup_fep_char_preview_window_ParamLimits

0xa2d5,	// (0x00024dbe) bg_popup_fep_char_preview_window

0x78da,	// (0x000223c3) popup_fep_char_preview_window_t1_ParamLimits

0x78da,	// (0x000223c3) popup_fep_char_preview_window_t1

0xe5c6,	// (0x000290af) bg_popup_fep_char_preview_window_g1

0xe5ce,	// (0x000290b7) bg_popup_fep_char_preview_window_g2

0xe5d6,	// (0x000290bf) bg_popup_fep_char_preview_window_g3

0xe5de,	// (0x000290c7) bg_popup_fep_char_preview_window_g4

0xe5e6,	// (0x000290cf) bg_popup_fep_char_preview_window_g5

0x7914,	// (0x000223fd) bg_popup_fep_char_preview_window_g6

0xe5ee,	// (0x000290d7) bg_popup_fep_char_preview_window_g7

0xe5f6,	// (0x000290df) bg_popup_fep_char_preview_window_g8

0xe5fe,	// (0x000290e7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd95,	// (0x0002a87e) bg_popup_fep_char_preview_window_g

0xc4cc,	// (0x00026fb5) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc4cc,	// (0x00026fb5) cell_vkb2_top_candi_pane_g1

0xc7e3,	// (0x000272cc) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc7e3,	// (0x000272cc) cell_vkb2_top_candi_pane_g2

0xc804,	// (0x000272ed) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc804,	// (0x000272ed) cell_vkb2_top_candi_pane_g3

0x791c,	// (0x00022405) cell_vkb2_top_candi_pane_g4_ParamLimits

0x791c,	// (0x00022405) cell_vkb2_top_candi_pane_g4

0xe606,	// (0x000290ef) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe606,	// (0x000290ef) cell_vkb2_top_candi_pane_g5

0xd9f1,	// (0x000284da) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd9f1,	// (0x000284da) cell_vkb2_top_candi_pane_g6

0x0005,

0xfda8,	// (0x0002a891) cell_vkb2_top_candi_pane_g_ParamLimits

0xfda8,	// (0x0002a891) cell_vkb2_top_candi_pane_g

0x793d,	// (0x00022426) cell_vkb2_top_candi_pane_t1

0x6d4e,	// (0x00021837) aid_size_touch_slider_mark_ParamLimits

0x6d4e,	// (0x00021837) aid_size_touch_slider_mark

0xe20f,	// (0x00028cf8) grid_graphic2_catg_pane_ParamLimits

0xe20f,	// (0x00028cf8) grid_graphic2_catg_pane

0xe2ad,	// (0x00028d96) popup_grid_graphic2_window_t1_ParamLimits

0xe2ad,	// (0x00028d96) popup_grid_graphic2_window_t1

0xe2bf,	// (0x00028da8) popup_grid_graphic2_window_t2_ParamLimits

0xe2bf,	// (0x00028da8) popup_grid_graphic2_window_t2

0x0001,

0xfd63,	// (0x0002a84c) popup_grid_graphic2_window_t_ParamLimits

0xfd63,	// (0x0002a84c) popup_grid_graphic2_window_t

0x8159,	// (0x00022c42) bg_button_pane_cp05_ParamLimits

0xe435,	// (0x00028f1e) cell_graphic2_control_pane_g1_ParamLimits

0xe627,	// (0x00029110) cell_graphic2_catg_pane_ParamLimits

0xe627,	// (0x00029110) cell_graphic2_catg_pane

0x7ddc,	// (0x000228c5) bg_button_pane_cp12

0xe639,	// (0x00029122) cell_graphic2_catg_pane_g1

0xdb29,	// (0x00028612) cell_tb_ext_pane_t1_ParamLimits

0x7714,	// (0x000221fd) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7714,	// (0x000221fd) vkb2_top_cell_right_narrow_pane

0x772c,	// (0x00022215) vkb2_top_cell_right_wide_pane_ParamLimits

0x772c,	// (0x00022215) vkb2_top_cell_right_wide_pane

0x6ee0,	// (0x000219c9) bg_vkb2_func_pane_ParamLimits

0x6ee0,	// (0x000219c9) bg_vkb2_func_pane

0x779d,	// (0x00022286) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ee0,	// (0x000219c9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ee0,	// (0x000219c9) bg_vkb2_fuc_pane_cp03

0x77fb,	// (0x000222e4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c4a,	// (0x00024733) bg_vkb2_func_pane_g1

0x9c52,	// (0x0002473b) bg_vkb2_func_pane_g2

0x9c62,	// (0x0002474b) bg_vkb2_func_pane_g3

0x9c5a,	// (0x00024743) bg_vkb2_func_pane_g4

0x9c6a,	// (0x00024753) bg_vkb2_func_pane_g5

0x9c72,	// (0x0002475b) bg_vkb2_func_pane_g6

0x9c7a,	// (0x00024763) bg_vkb2_func_pane_g7

0x9c82,	// (0x0002476b) bg_vkb2_func_pane_g8

0x9c42,	// (0x0002472b) bg_vkb2_func_pane_g9

0x0008,

0xfdb5,	// (0x0002a89e) bg_vkb2_func_pane_g

0x6ee0,	// (0x000219c9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ee0,	// (0x000219c9) bg_vkb2_fuc_pane_cp01

0x779d,	// (0x00022286) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x779d,	// (0x00022286) vkb2_top_cell_right_wide_pane_g1

0x6ee0,	// (0x000219c9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ee0,	// (0x000219c9) bg_vkb2_fuc_pane_cp02

0x77fb,	// (0x000222e4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x77fb,	// (0x000222e4) vkb2_top_cell_right_narrow_pane_g1

0xd74d,	// (0x00028236) aid_touch_area_decrease_ParamLimits

0xd74d,	// (0x00028236) aid_touch_area_decrease

0xd771,	// (0x0002825a) aid_touch_area_increase_ParamLimits

0xd771,	// (0x0002825a) aid_touch_area_increase

0xd789,	// (0x00028272) aid_touch_area_mute_ParamLimits

0xd789,	// (0x00028272) aid_touch_area_mute

0xd7a5,	// (0x0002828e) aid_touch_area_slider_ParamLimits

0xd7a5,	// (0x0002828e) aid_touch_area_slider

0xd88f,	// (0x00028378) popup_slider_window_g4_ParamLimits

0xd88f,	// (0x00028378) popup_slider_window_g4

0xd8a7,	// (0x00028390) popup_slider_window_g5_ParamLimits

0xd8a7,	// (0x00028390) popup_slider_window_g5

0xd8c9,	// (0x000283b2) popup_slider_window_g6_ParamLimits

0xd8c9,	// (0x000283b2) popup_slider_window_g6

0xd907,	// (0x000283f0) popup_slider_window_t2_ParamLimits

0xd907,	// (0x000283f0) popup_slider_window_t2

0x0001,

0xfcdb,	// (0x0002a7c4) popup_slider_window_t_ParamLimits

0xfcdb,	// (0x0002a7c4) popup_slider_window_t

0xd91f,	// (0x00028408) slider_pane_ParamLimits

0xd91f,	// (0x00028408) slider_pane

0xe642,	// (0x0002912b) slider_pane_g1_ParamLimits

0xe642,	// (0x0002912b) slider_pane_g1

0xe656,	// (0x0002913f) slider_pane_g2_ParamLimits

0xe656,	// (0x0002913f) slider_pane_g2

0xe66c,	// (0x00029155) slider_pane_g3_ParamLimits

0xe66c,	// (0x00029155) slider_pane_g3

0x0003,

0x00c9,	// (0x0001abb2) slider_pane_g_ParamLimits

0x00c9,	// (0x0001abb2) slider_pane_g

0x6997,	// (0x00021480) popup_tb_float_extension_window_ParamLimits

0x6997,	// (0x00021480) popup_tb_float_extension_window

0xe698,	// (0x00029181) aid_size_cell_tb_float_ext

0x7ddc,	// (0x000228c5) bg_popup_sub_window_cp28

0xe6a4,	// (0x0002918d) grid_tb_float_ext_pane

0xe6ae,	// (0x00029197) cell_tb_float_ext_pane_ParamLimits

0xe6ae,	// (0x00029197) cell_tb_float_ext_pane

0xe6c8,	// (0x000291b1) cell_tb_float_ext_pane_g1

0xe6d1,	// (0x000291ba) grid_highlight_pane_cp12

0x7021,	// (0x00021b0a) cell_last_hwr_side_pane_ParamLimits

0x7021,	// (0x00021b0a) cell_last_hwr_side_pane

0xc24e,	// (0x00026d37) cell_last_hwr_side_pane_g1

0xe6da,	// (0x000291c3) cell_last_hwr_side_pane_g2

0x0001,

0xfdc8,	// (0x0002a8b1) cell_last_hwr_side_pane_g

0x76c3,	// (0x000221ac) vkb2_area_bottom_space_btn_pane_ParamLimits

0x76c3,	// (0x000221ac) vkb2_area_bottom_space_btn_pane

0xc4cc,	// (0x00026fb5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe181,	// (0x00028c6a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x793d,	// (0x00022426) cell_vkb2_top_candi_pane_t1_ParamLimits

0x795c,	// (0x00022445) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x795c,	// (0x00022445) vkb2_area_bottom_space_btn_pane_g1

0x7996,	// (0x0002247f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7996,	// (0x0002247f) vkb2_area_bottom_space_btn_pane_g2

0x79cc,	// (0x000224b5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x79cc,	// (0x000224b5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdcd,	// (0x0002a8b6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdcd,	// (0x0002a8b6) vkb2_area_bottom_space_btn_pane_g

0x6f95,	// (0x00021a7e) cel_fep_hwr_func_pane_ParamLimits

0x6f95,	// (0x00021a7e) cel_fep_hwr_func_pane

0x6fd1,	// (0x00021aba) cell_hwr_side_button_pane_ParamLimits

0x6fd1,	// (0x00021aba) cell_hwr_side_button_pane

0xdb5d,	// (0x00028646) aid_area_touch_clock_ParamLimits

0x8159,	// (0x00022c42) bg_uniindi_top_pane_ParamLimits

0xdb6f,	// (0x00028658) uniindi_top_pane_g1_ParamLimits

0xdb85,	// (0x0002866e) uniindi_top_pane_g2_ParamLimits

0xdb91,	// (0x0002867a) uniindi_top_pane_g3_ParamLimits

0xdba2,	// (0x0002868b) uniindi_top_pane_g4_ParamLimits

0xfd13,	// (0x0002a7fc) uniindi_top_pane_g_ParamLimits

0xdbaf,	// (0x00028698) uniindi_top_pane_t1_ParamLimits

0x8159,	// (0x00022c42) bg_vkb2_func_pane_cp01_ParamLimits

0x8159,	// (0x00022c42) bg_vkb2_func_pane_cp01

0xe6e3,	// (0x000291cc) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6e3,	// (0x000291cc) cel_fep_hwr_func_pane_g1

0x8159,	// (0x00022c42) bg_vkb2_func_pane_cp02_ParamLimits

0x8159,	// (0x00022c42) bg_vkb2_func_pane_cp02

0xe6e3,	// (0x000291cc) cell_hwr_side_button_pane_g1_ParamLimits

0xe6e3,	// (0x000291cc) cell_hwr_side_button_pane_g1

0x9ac3,	// (0x000245ac) status_pane_g4_ParamLimits

0x9ac3,	// (0x000245ac) status_pane_g4

0x9add,	// (0x000245c6) status_pane_t1

0xbf93,	// (0x00026a7c) form2_midp_gauge_slider_cont_pane

0xbf9b,	// (0x00026a84) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfad,	// (0x00026a96) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfbf,	// (0x00026aa8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadf,	// (0x0002a5c8) form2_midp_gauge_slider_pane_t_ParamLimits

0xbfd1,	// (0x00026aba) form2_midp_slider_pane_ParamLimits

0x7332,	// (0x00021e1b) aid_size_cell_func_vkb2_ParamLimits

0x7332,	// (0x00021e1b) aid_size_cell_func_vkb2

0xe684,	// (0x0002916d) slider_pane_g4_ParamLimits

0xe684,	// (0x0002916d) slider_pane_g4

0x7a16,	// (0x000224ff) form2_midp_gauge_slider_pane_t2_cp01

0x7a24,	// (0x0002250d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a24,	// (0x0002250d) form2_midp_gauge_slider_pane_t3_cp01

0x7a41,	// (0x0002252a) form2_midp_slider_pane_cp01

0x7ddc,	// (0x000228c5) navi_smil_pane

0xe71c,	// (0x00029205) navi_smil_pane_g1

0xe724,	// (0x0002920d) navi_smil_pane_t1

0xe6f1,	// (0x000291da) form2_midp_slider_pane_g1

0xe6fa,	// (0x000291e3) form2_midp_slider_pane_g2

0xe702,	// (0x000291eb) form2_midp_slider_pane_g3

0xe6f1,	// (0x000291da) form2_midp_slider_pane_g4

0xe70a,	// (0x000291f3) form2_midp_slider_pane_g5

0x0004,

0x00e0,	// (0x0001abc9) form2_midp_slider_pane_g

0x7a06,	// (0x000224ef) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a06,	// (0x000224ef) vkb2_area_bottom_space_btn_pane_g4

0x98f2,	// (0x000243db) lc0_navi_pane_ParamLimits

0x98f2,	// (0x000243db) lc0_navi_pane

0x9968,	// (0x00024451) lc0_stat_indi_pane_ParamLimits

0x9968,	// (0x00024451) lc0_stat_indi_pane

0x997f,	// (0x00024468) ls0_title_pane_ParamLimits

0x997f,	// (0x00024468) ls0_title_pane

0x8765,	// (0x0002324e) bg_popup_sub_pane_cp14_ParamLimits

0xdb44,	// (0x0002862d) list_uniindi_pane_ParamLimits

0xdb50,	// (0x00028639) uniindi_top_pane_ParamLimits

0xdbec,	// (0x000286d5) list_single_uniindi_pane_g1_ParamLimits

0xdbff,	// (0x000286e8) list_single_uniindi_pane_t1_ParamLimits

0x7a4a,	// (0x00022533) lc0_stat_clock_pane_ParamLimits

0x7a4a,	// (0x00022533) lc0_stat_clock_pane

0xe732,	// (0x0002921b) lc0_stat_indi_pane_g1_ParamLimits

0xe732,	// (0x0002921b) lc0_stat_indi_pane_g1

0xe73f,	// (0x00029228) lc0_stat_indi_pane_g2_ParamLimits

0xe73f,	// (0x00029228) lc0_stat_indi_pane_g2

0x0001,

0x00eb,	// (0x0001abd4) lc0_stat_indi_pane_g_ParamLimits

0x00eb,	// (0x0001abd4) lc0_stat_indi_pane_g

0x7a57,	// (0x00022540) lc0_uni_indicator_pane_ParamLimits

0x7a57,	// (0x00022540) lc0_uni_indicator_pane

0xe74c,	// (0x00029235) ls0_title_pane_g1_ParamLimits

0xe74c,	// (0x00029235) ls0_title_pane_g1

0xe760,	// (0x00029249) ls0_title_pane_t1_ParamLimits

0xe760,	// (0x00029249) ls0_title_pane_t1

0x7a64,	// (0x0002254d) lc0_uni_indicator_pane_g1_ParamLimits

0x7a64,	// (0x0002254d) lc0_uni_indicator_pane_g1

0xe796,	// (0x0002927f) lc0_stat_clock_pane_t1

0x7ddc,	// (0x000228c5) main_ai5_pane

0xe7a4,	// (0x0002928d) ai5_sk_pane_ParamLimits

0xe7a4,	// (0x0002928d) ai5_sk_pane

0xe7b1,	// (0x0002929a) cell_ai5_widget_pane_ParamLimits

0xe7b1,	// (0x0002929a) cell_ai5_widget_pane

0xe86c,	// (0x00029355) aid_size_cell_widget_grid

0xe882,	// (0x0002936b) bg_ai5_widget_pane_ParamLimits

0xe882,	// (0x0002936b) bg_ai5_widget_pane

0xe8fa,	// (0x000293e3) cell_ai5_widget_pane_g2

0xe90e,	// (0x000293f7) cell_ai5_widget_pane_g3

0xe928,	// (0x00029411) cell_ai5_widget_pane_g4

0xe938,	// (0x00029421) cell_ai5_widget_pane_g5

0xe948,	// (0x00029431) cell_ai5_widget_pane_g6

0xe954,	// (0x0002943d) cell_ai5_widget_pane_g7

0xe99c,	// (0x00029485) cell_ai5_widget_pane_t1_ParamLimits

0xe99c,	// (0x00029485) cell_ai5_widget_pane_t1

0xe9b9,	// (0x000294a2) cell_ai5_widget_pane_t2_ParamLimits

0xe9b9,	// (0x000294a2) cell_ai5_widget_pane_t2

0xe9d1,	// (0x000294ba) cell_ai5_widget_pane_t3_ParamLimits

0xe9d1,	// (0x000294ba) cell_ai5_widget_pane_t3

0xe9e9,	// (0x000294d2) cell_ai5_widget_pane_t4_ParamLimits

0xe9e9,	// (0x000294d2) cell_ai5_widget_pane_t4

0xea0f,	// (0x000294f8) cell_ai5_widget_pane_t5_ParamLimits

0xea0f,	// (0x000294f8) cell_ai5_widget_pane_t5

0xea2f,	// (0x00029518) cell_ai5_widget_pane_t6_ParamLimits

0xea2f,	// (0x00029518) cell_ai5_widget_pane_t6

0xea41,	// (0x0002952a) cell_ai5_widget_pane_t7_ParamLimits

0xea41,	// (0x0002952a) cell_ai5_widget_pane_t7

0xea5a,	// (0x00029543) cell_ai5_widget_pane_t8_ParamLimits

0xea5a,	// (0x00029543) cell_ai5_widget_pane_t8

0x0009,

0x0105,	// (0x0001abee) cell_ai5_widget_pane_t_ParamLimits

0x0105,	// (0x0001abee) cell_ai5_widget_pane_t

0xeab9,	// (0x000295a2) grid_ai5_widget_pane

0x8765,	// (0x0002324e) highlight_cell_ai5_widget_pane_ParamLimits

0x8765,	// (0x0002324e) highlight_cell_ai5_widget_pane

0xead0,	// (0x000295b9) ai5_sk_left_pane

0xeada,	// (0x000295c3) ai5_sk_middle_pane

0xeae4,	// (0x000295cd) ai5_sk_right_pane

0xeaee,	// (0x000295d7) bg_ai5_widget_pane_g1_ParamLimits

0xeaee,	// (0x000295d7) bg_ai5_widget_pane_g1

0xeafa,	// (0x000295e3) bg_ai5_widget_pane_g2_ParamLimits

0xeafa,	// (0x000295e3) bg_ai5_widget_pane_g2

0xeb06,	// (0x000295ef) bg_ai5_widget_pane_g3_ParamLimits

0xeb06,	// (0x000295ef) bg_ai5_widget_pane_g3

0xeb12,	// (0x000295fb) bg_ai5_widget_pane_g4_ParamLimits

0xeb12,	// (0x000295fb) bg_ai5_widget_pane_g4

0xeb1e,	// (0x00029607) bg_ai5_widget_pane_g5_ParamLimits

0xeb1e,	// (0x00029607) bg_ai5_widget_pane_g5

0xeb2a,	// (0x00029613) bg_ai5_widget_pane_g6_ParamLimits

0xeb2a,	// (0x00029613) bg_ai5_widget_pane_g6

0xeb36,	// (0x0002961f) bg_ai5_widget_pane_g7_ParamLimits

0xeb36,	// (0x0002961f) bg_ai5_widget_pane_g7

0xeb42,	// (0x0002962b) bg_ai5_widget_pane_g8_ParamLimits

0xeb42,	// (0x0002962b) bg_ai5_widget_pane_g8

0xeb4e,	// (0x00029637) bg_ai5_widget_pane_g9_ParamLimits

0xeb4e,	// (0x00029637) bg_ai5_widget_pane_g9

0x0008,

0x011a,	// (0x0001ac03) bg_ai5_widget_pane_g_ParamLimits

0x011a,	// (0x0001ac03) bg_ai5_widget_pane_g

0xeb80,	// (0x00029669) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb80,	// (0x00029669) cell_shortcut_ai5_widget_pane

0x93fa,	// (0x00023ee3) bg_cell_shortcut_ai5_widget_pane

0xeb91,	// (0x0002967a) cell_grid_ai5_widget_pane_g1

0x93fa,	// (0x00023ee3) highlight_cell_shortcut_ai5_widget_pane

0x9c52,	// (0x0002473b) ai5_sk_left_pane_g1

0xeb9a,	// (0x00029683) ai5_sk_left_pane_g2

0xeba2,	// (0x0002968b) ai5_sk_left_pane_g3

0xebaa,	// (0x00029693) ai5_sk_left_pane_g4

0x0003,

0xfdd6,	// (0x0002a8bf) ai5_sk_left_pane_g

0xebb2,	// (0x0002969b) ai5_sk_left_pane_t1

0x9c4a,	// (0x00024733) ai5_sk_right_pane_g1

0xebc0,	// (0x000296a9) ai5_sk_right_pane_g2

0xebc8,	// (0x000296b1) ai5_sk_right_pane_g3

0xebd0,	// (0x000296b9) ai5_sk_right_pane_g4

0x0003,

0xfddf,	// (0x0002a8c8) ai5_sk_right_pane_g

0xebd8,	// (0x000296c1) ai5_sk_right_pane_t1

0x9c4a,	// (0x00024733) ai5_sk_middle_pane_g1

0x9c52,	// (0x0002473b) ai5_sk_middle_pane_g2

0x9c6a,	// (0x00024753) ai5_sk_middle_pane_g3

0xebc8,	// (0x000296b1) ai5_sk_middle_pane_g4

0xeba2,	// (0x0002968b) ai5_sk_middle_pane_g5

0xebe6,	// (0x000296cf) ai5_sk_middle_pane_g6

0xebee,	// (0x000296d7) ai5_sk_middle_pane_g7

0x0006,

0xfde8,	// (0x0002a8d1) ai5_sk_middle_pane_g

0x977e,	// (0x00024267) aid_touch_area_size_lc0_ParamLimits

0x977e,	// (0x00024267) aid_touch_area_size_lc0

0x7120,	// (0x00021c09) cell_hwr_candidate_pane_t1_ParamLimits

0x979a,	// (0x00024283) aid_touch_navi_pane

0x9a6d,	// (0x00024556) status_dt_navi_pane_ParamLimits

0x9a6d,	// (0x00024556) status_dt_navi_pane

0x9a7a,	// (0x00024563) status_dt_sta_pane_ParamLimits

0x9a7a,	// (0x00024563) status_dt_sta_pane

0xebf6,	// (0x000296df) dt_sta_controll_pane

0xec03,	// (0x000296ec) dt_sta_indi_pane

0xec14,	// (0x000296fd) dt_sta_title_pane

0x8159,	// (0x00022c42) bg_dt_sta_indi_pane_ParamLimits

0x8159,	// (0x00022c42) bg_dt_sta_indi_pane

0xec27,	// (0x00029710) dt_sta_battery_pane

0xec2f,	// (0x00029718) dt_sta_indi_pane_g1

0xec38,	// (0x00029721) dt_sta_indi_pane_g2

0xec41,	// (0x0002972a) dt_sta_indi_pane_g3

0x0002,

0x014e,	// (0x0001ac37) dt_sta_indi_pane_g

0xec4a,	// (0x00029733) dt_sta_signal_pane

0x8765,	// (0x0002324e) bg_dt_sta_title_pane_ParamLimits

0x8765,	// (0x0002324e) bg_dt_sta_title_pane

0xec53,	// (0x0002973c) dt_sta_title_pane_g1

0xec5b,	// (0x00029744) dt_sta_title_pane_t1_ParamLimits

0xec5b,	// (0x00029744) dt_sta_title_pane_t1

0x7ddc,	// (0x000228c5) bg_dt_sta_control_pane

0xec70,	// (0x00029759) dt_sta_controll_pane_g1

0xec79,	// (0x00029762) bg_dt_sta_title_pane_g1

0xec82,	// (0x0002976b) bg_dt_sta_title_pane_g2

0xec8b,	// (0x00029774) bg_dt_sta_title_pane_g3

0x0002,

0x0155,	// (0x0001ac3e) bg_dt_sta_title_pane_g

0xc24e,	// (0x00026d37) bg_dt_sta_indi_pane_g1

0xec94,	// (0x0002977d) dt_sta_signal_pane_g1

0xec9c,	// (0x00029785) dt_sta_signal_pane_g2

0x0001,

0x015c,	// (0x0001ac45) dt_sta_signal_pane_g

0xeca4,	// (0x0002978d) dt_sta_battery_pane_g1

0xecad,	// (0x00029796) dt_sta_battery_pane_t1

0xc24e,	// (0x00026d37) bg_dt_sta_control_pane_g1

0x8ef9,	// (0x000239e2) fep_china_uni_eep_pane

0x8f01,	// (0x000239ea) fep_china_uni_entry_pane_ParamLimits

0x8f11,	// (0x000239fa) popup_fep_china_uni_window_g1_ParamLimits

0x8f21,	// (0x00023a0a) popup_fep_china_uni_window_g2_ParamLimits

0x8f21,	// (0x00023a0a) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0002a201) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0002a201) popup_fep_china_uni_window_g

0xecbc,	// (0x000297a5) fep_china_uni_eep_pane_g1

0xecc4,	// (0x000297ad) fep_china_uni_eep_pane_t1

0xe713,	// (0x000291fc) aid_touch_area_size_smil_player

0x98ea,	// (0x000243d3) lc0_clock_pane

0x9ad1,	// (0x000245ba) status_pane_g5_ParamLimits

0x9ad1,	// (0x000245ba) status_pane_g5

0x665c,	// (0x00021145) popup_keymap_window

0x9a8f,	// (0x00024578) status_icon_pane

0xe90e,	// (0x000293f7) cell_ai5_widget_pane_g3_ParamLimits

0xe928,	// (0x00029411) cell_ai5_widget_pane_g4_ParamLimits

0xe938,	// (0x00029421) cell_ai5_widget_pane_g5_ParamLimits

0xe960,	// (0x00029449) cell_ai5_widget_pane_g8_ParamLimits

0xe960,	// (0x00029449) cell_ai5_widget_pane_g8

0xe974,	// (0x0002945d) cell_ai5_widget_pane_g9_ParamLimits

0xe974,	// (0x0002945d) cell_ai5_widget_pane_g9

0xe988,	// (0x00029471) cell_ai5_widget_pane_g10_ParamLimits

0xe988,	// (0x00029471) cell_ai5_widget_pane_g10

0xecd3,	// (0x000297bc) status_icon_pane_g1

0x7ddc,	// (0x000228c5) bg_popup_sub_pane_cp13

0xecdb,	// (0x000297c4) popup_keymap_window_t1

0x96cf,	// (0x000241b8) control_pane_g6_ParamLimits

0x96cf,	// (0x000241b8) control_pane_g6

0x96dc,	// (0x000241c5) control_pane_g7_ParamLimits

0x96dc,	// (0x000241c5) control_pane_g7

0x96e9,	// (0x000241d2) control_pane_g8_ParamLimits

0x96e9,	// (0x000241d2) control_pane_g8

0xebf6,	// (0x000296df) dt_sta_controll_pane_ParamLimits

0xec03,	// (0x000296ec) dt_sta_indi_pane_ParamLimits

0xec14,	// (0x000296fd) dt_sta_title_pane_ParamLimits

0x869d,	// (0x00023186) aid_size_touch_scroll_bar_cale

0x5ccd,	// (0x000207b6) popup_discreet_window_ParamLimits

0x5ccd,	// (0x000207b6) popup_discreet_window

0x5d55,	// (0x0002083e) popup_sk_window

0xa2d5,	// (0x00024dbe) bg_popup_sub_pane_cp28_ParamLimits

0xa2d5,	// (0x00024dbe) bg_popup_sub_pane_cp28

0xece9,	// (0x000297d2) popup_discreet_window_g1_ParamLimits

0xece9,	// (0x000297d2) popup_discreet_window_g1

0xed09,	// (0x000297f2) popup_discreet_window_t1_ParamLimits

0xed09,	// (0x000297f2) popup_discreet_window_t1

0xed27,	// (0x00029810) popup_discreet_window_t2_ParamLimits

0xed27,	// (0x00029810) popup_discreet_window_t2

0x0002,

0x0161,	// (0x0001ac4a) popup_discreet_window_t_ParamLimits

0x0161,	// (0x0001ac4a) popup_discreet_window_t

0x7a78,	// (0x00022561) popup_sk_window_g1

0x7a82,	// (0x0002256b) popup_sk_window_g2

0x0001,

0xfdf7,	// (0x0002a8e0) popup_sk_window_g

0x7a8a,	// (0x00022573) popup_sk_window_t1

0x7a98,	// (0x00022581) popup_sk_window_t1_copy1

0xe8fa,	// (0x000293e3) cell_ai5_widget_pane_g2_ParamLimits

0xea6c,	// (0x00029555) cell_ai5_widget_pane_t9_ParamLimits

0xea6c,	// (0x00029555) cell_ai5_widget_pane_t9

0x7ddc,	// (0x000228c5) main_fep_fshwr2_pane

0x7aa6,	// (0x0002258f) aid_fshwr2_btn_pane

0x7ab2,	// (0x0002259b) aid_fshwr2_syb_pane

0x7abe,	// (0x000225a7) aid_fshwr2_txt_pane

0x7aca,	// (0x000225b3) fshwr2_func_candi_pane

0x7adf,	// (0x000225c8) fshwr2_hwr_syb_pane

0x7aef,	// (0x000225d8) fshwr2_icf_pane

0x7ddc,	// (0x000228c5) fshwr2_icf_bg_pane

0x7b18,	// (0x00022601) fshwr2_icf_pane_t1_ParamLimits

0x7b18,	// (0x00022601) fshwr2_icf_pane_t1

0x8de7,	// (0x000238d0) fshwr2_func_candi_pane_g1

0xed79,	// (0x00029862) fshwr2_func_candi_row_pane_ParamLimits

0xed79,	// (0x00029862) fshwr2_func_candi_row_pane

0x7b30,	// (0x00022619) cell_fshwr2_syb_pane_ParamLimits

0x7b30,	// (0x00022619) cell_fshwr2_syb_pane

0xc4cc,	// (0x00026fb5) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc4cc,	// (0x00026fb5) fshwr2_hwr_syb_pane_g1

0x7ddc,	// (0x000228c5) bg_popup_call_pane_cp01

0x7b46,	// (0x0002262f) fshwr2_func_candi_cell_pane_ParamLimits

0x7b46,	// (0x0002262f) fshwr2_func_candi_cell_pane

0xed89,	// (0x00029872) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed89,	// (0x00029872) fshwr2_func_candi_cell_bg_pane

0x7b91,	// (0x0002267a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7b91,	// (0x0002267a) fshwr2_func_candi_cell_pane_g1

0x7bb9,	// (0x000226a2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7bb9,	// (0x000226a2) fshwr2_func_candi_cell_pane_t1

0x7ddc,	// (0x000228c5) bg_button_pane_cp08

0xed95,	// (0x0002987e) cell_fshwr2_syb_bg_pane

0x7bcc,	// (0x000226b5) cell_fshwr2_syb_bg_pane_g1

0x7bd4,	// (0x000226bd) cell_fshwr2_syb_bg_pane_t1

0x8765,	// (0x0002324e) main_tmo_pane

0xade4,	// (0x000258cd) uni_indicator_pane_g1_ParamLimits

0xadf7,	// (0x000258e0) uni_indicator_pane_g2_ParamLimits

0xae09,	// (0x000258f2) uni_indicator_pane_g3_ParamLimits

0xae18,	// (0x00025901) uni_indicator_pane_g4_ParamLimits

0xae18,	// (0x00025901) uni_indicator_pane_g4

0xae2c,	// (0x00025915) uni_indicator_pane_g5_ParamLimits

0xae2c,	// (0x00025915) uni_indicator_pane_g5

0xae2c,	// (0x00025915) uni_indicator_pane_g6_ParamLimits

0xae2c,	// (0x00025915) uni_indicator_pane_g6

0xf915,	// (0x0002a3fe) uni_indicator_pane_g_ParamLimits

0xd729,	// (0x00028212) popup_tmo_note_window_ParamLimits

0xd729,	// (0x00028212) popup_tmo_note_window

0x8765,	// (0x0002324e) fshwr2_bg_pane

0x7baa,	// (0x00022693) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7baa,	// (0x00022693) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfdfc,	// (0x0002a8e5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfdfc,	// (0x0002a8e5) fshwr2_func_candi_cell_pane_g

0xc24e,	// (0x00026d37) bg_popup_window_pane_cp01

0x7be3,	// (0x000226cc) bg_popup_window_pane_g1_cp01

0xed9d,	// (0x00029886) bg_popup_window_pane_cp22_ParamLimits

0xed9d,	// (0x00029886) bg_popup_window_pane_cp22

0xedab,	// (0x00029894) listscroll_tmo_link_pane_ParamLimits

0xedab,	// (0x00029894) listscroll_tmo_link_pane

0xedeb,	// (0x000298d4) popup_tmo_note_window_g1_ParamLimits

0xedeb,	// (0x000298d4) popup_tmo_note_window_g1

0xedf8,	// (0x000298e1) tmo_note_info_pane_ParamLimits

0xedf8,	// (0x000298e1) tmo_note_info_pane

0xee12,	// (0x000298fb) list_tmo_note_info_pane_g1_ParamLimits

0xee12,	// (0x000298fb) list_tmo_note_info_pane_g1

0xee29,	// (0x00029912) list_tmo_note_info_pane_g2_ParamLimits

0xee29,	// (0x00029912) list_tmo_note_info_pane_g2

0x0001,

0x0172,	// (0x0001ac5b) list_tmo_note_info_pane_g_ParamLimits

0x0172,	// (0x0001ac5b) list_tmo_note_info_pane_g

0xee45,	// (0x0002992e) list_tmo_note_info_text_pane_ParamLimits

0xee45,	// (0x0002992e) list_tmo_note_info_text_pane

0xeec6,	// (0x000299af) list_tmo_link_pane

0xeed3,	// (0x000299bc) scroll_pane_cp20

0xeee0,	// (0x000299c9) list_single_tmo_link_pane_ParamLimits

0xeee0,	// (0x000299c9) list_single_tmo_link_pane

0xeef0,	// (0x000299d9) list_single_tmo_link_pane_t1

0xeefe,	// (0x000299e7) list_tmo_note_info_text_pane_t1_ParamLimits

0xeefe,	// (0x000299e7) list_tmo_note_info_text_pane_t1

0x881c,	// (0x00023305) aid_size_touch_scroll_bar_cp01_ParamLimits

0x881c,	// (0x00023305) aid_size_touch_scroll_bar_cp01

0x4ee1,	// (0x0001f9ca) aid_size_touch_slider_marker

0x5d3d,	// (0x00020826) popup_settings_window_ParamLimits

0x5d3d,	// (0x00020826) popup_settings_window

0x50b0,	// (0x0001fb99) popup_candi_list_indi_window

0x979a,	// (0x00024283) aid_touch_navi_pane_ParamLimits

0x728b,	// (0x00021d74) rs_clock_indi_pane

0x7294,	// (0x00021d7d) sctrl_sk_bottom_pane_ParamLimits

0x72a5,	// (0x00021d8e) sctrl_sk_top_pane_ParamLimits

0x738c,	// (0x00021e75) popup_fep_tooltip_window

0xe86c,	// (0x00029355) aid_size_cell_widget_grid_ParamLimits

0xe8e5,	// (0x000293ce) cell_ai5_widget_pane_g1_ParamLimits

0xe8e5,	// (0x000293ce) cell_ai5_widget_pane_g1

0xe948,	// (0x00029431) cell_ai5_widget_pane_g6_ParamLimits

0xe954,	// (0x0002943d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x00f0,	// (0x0001abd9) cell_ai5_widget_pane_g_ParamLimits

0x00f0,	// (0x0001abd9) cell_ai5_widget_pane_g

0xea9b,	// (0x00029584) cell_ai5_widget_pane_t10_ParamLimits

0xea9b,	// (0x00029584) cell_ai5_widget_pane_t10

0xeab9,	// (0x000295a2) grid_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x00029643) cell_contacts_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x00029643) cell_contacts_ai5_widget_pane

0xed3c,	// (0x00029825) popup_discreet_window_t3_ParamLimits

0xed3c,	// (0x00029825) popup_discreet_window_t3

0x7b04,	// (0x000225ed) popup_fshwr2_char_preview_window_ParamLimits

0x7b04,	// (0x000225ed) popup_fshwr2_char_preview_window

0xee63,	// (0x0002994c) tmo_note_info_pane_t1

0xee78,	// (0x00029961) tmo_note_info_pane_t2

0xee8d,	// (0x00029976) tmo_note_info_pane_t3

0xeea2,	// (0x0002998b) tmo_note_info_pane_t4

0xeeb4,	// (0x0002999d) tmo_note_info_pane_t5

0x0004,

0x0177,	// (0x0001ac60) tmo_note_info_pane_t

0xeec6,	// (0x000299af) list_tmo_link_pane_ParamLimits

0xeed3,	// (0x000299bc) scroll_pane_cp20_ParamLimits

0x7ddc,	// (0x000228c5) bg_popup_fep_char_preview_window_cp01

0xef17,	// (0x00029a00) popup_fshwr2_char_preview_window_t1

0xef25,	// (0x00029a0e) popup_candi_list_indi_window_g1

0xef2e,	// (0x00029a17) bg_cell_contacts_ai5_widget_pane

0xef3a,	// (0x00029a23) cell_contacts_ai5_widget_pane_g1

0xc92e,	// (0x00027417) cell_contacts_ai5_widget_pane_g2

0xef4f,	// (0x00029a38) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe01,	// (0x0002a8ea) cell_contacts_ai5_widget_pane_g

0xef5b,	// (0x00029a44) cell_contacts_ai5_widget_pane_t1

0x8765,	// (0x0002324e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd2,	// (0x00029abb) settings_container_pane

0x93fa,	// (0x00023ee3) listscroll_set_pane_copy1

0xb952,	// (0x0002643b) scroll_pane_cp121_copy1

0xa07a,	// (0x00024b63) set_content_pane_copy1

0xefde,	// (0x00029ac7) aid_height_set_list_copy1_ParamLimits

0xefde,	// (0x00029ac7) aid_height_set_list_copy1

0xb024,	// (0x00025b0d) aid_size_parent_copy1_ParamLimits

0xb024,	// (0x00025b0d) aid_size_parent_copy1

0xefea,	// (0x00029ad3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefea,	// (0x00029ad3) button_value_adjust_pane_cp6_copy1

0x971e,	// (0x00024207) list_highlight_pane_cp2_copy1_ParamLimits

0x971e,	// (0x00024207) list_highlight_pane_cp2_copy1

0xeffe,	// (0x00029ae7) list_set_pane_copy1_ParamLimits

0xeffe,	// (0x00029ae7) list_set_pane_copy1

0xef6d,	// (0x00029a56) main_pane_set_t1_copy1_ParamLimits

0xef6d,	// (0x00029a56) main_pane_set_t1_copy1

0xefa7,	// (0x00029a90) main_pane_set_t2_copy1_ParamLimits

0xefa7,	// (0x00029a90) main_pane_set_t2_copy1

0xf0ab,	// (0x00029b94) main_pane_set_t3_copy1

0xf0b9,	// (0x00029ba2) main_pane_set_t4_copy1

0xefc6,	// (0x00029aaf) set_content_pane_g1_copy1_ParamLimits

0xefc6,	// (0x00029aaf) set_content_pane_g1_copy1

0xf0c7,	// (0x00029bb0) setting_code_pane_copy1

0xf0cf,	// (0x00029bb8) setting_slider_graphic_pane_copy1

0xf0cf,	// (0x00029bb8) setting_slider_pane_copy1

0xf0cf,	// (0x00029bb8) setting_text_pane_copy1

0xf0cf,	// (0x00029bb8) setting_volume_pane_copy1

0xf0c7,	// (0x00029bb0) settings_code_pane_cp2_copy1

0xf0d7,	// (0x00029bc0) settings_code_pane_cp_copy1_ParamLimits

0xf0d7,	// (0x00029bc0) settings_code_pane_cp_copy1

0x7bec,	// (0x000226d5) volume_set_pane_copy1

0xf0eb,	// (0x00029bd4) volume_set_pane_g10_copy1

0xf0f3,	// (0x00029bdc) volume_set_pane_g1_copy1

0xf0fb,	// (0x00029be4) volume_set_pane_g2_copy1

0xf103,	// (0x00029bec) volume_set_pane_g3_copy1

0xf10b,	// (0x00029bf4) volume_set_pane_g4_copy1

0xf113,	// (0x00029bfc) volume_set_pane_g5_copy1

0xf11b,	// (0x00029c04) volume_set_pane_g6_copy1

0xf123,	// (0x00029c0c) volume_set_pane_g7_copy1

0xf12b,	// (0x00029c14) volume_set_pane_g8_copy1

0xf133,	// (0x00029c1c) volume_set_pane_g9_copy1

0x7ed0,	// (0x000229b9) bg_set_opt_pane_cp_copy1_ParamLimits

0x7ed0,	// (0x000229b9) bg_set_opt_pane_cp_copy1

0x7bf4,	// (0x000226dd) setting_slider_pane_t1_copy1_ParamLimits

0x7bf4,	// (0x000226dd) setting_slider_pane_t1_copy1

0x7c12,	// (0x000226fb) setting_slider_pane_t2_copy1_ParamLimits

0x7c12,	// (0x000226fb) setting_slider_pane_t2_copy1

0x7c2c,	// (0x00022715) setting_slider_pane_t3_copy1_ParamLimits

0x7c2c,	// (0x00022715) setting_slider_pane_t3_copy1

0x7c44,	// (0x0002272d) slider_set_pane_copy1_ParamLimits

0x7c44,	// (0x0002272d) slider_set_pane_copy1

0x87bd,	// (0x000232a6) set_opt_bg_pane_g1_copy2

0x87c5,	// (0x000232ae) set_opt_bg_pane_g2_copy2

0xf13b,	// (0x00029c24) set_opt_bg_pane_g3_copy2

0x87d5,	// (0x000232be) set_opt_bg_pane_g4_copy2

0x87dd,	// (0x000232c6) set_opt_bg_pane_g5_copy2

0x87e5,	// (0x000232ce) set_opt_bg_pane_g6_copy2

0xf145,	// (0x00029c2e) set_opt_bg_pane_g7_copy2

0xf14d,	// (0x00029c36) set_opt_bg_pane_g8_copy2

0xf157,	// (0x00029c40) set_opt_bg_pane_g9_copy2

0x7c5a,	// (0x00022743) aid_size_touch_slider_mark_copy1_ParamLimits

0x7c5a,	// (0x00022743) aid_size_touch_slider_mark_copy1

0xf161,	// (0x00029c4a) slider_set_pane_g1_copy1

0x7c6e,	// (0x00022757) slider_set_pane_g2_copy1

0x6d6e,	// (0x00021857) slider_set_pane_g3_copy1_ParamLimits

0x6d6e,	// (0x00021857) slider_set_pane_g3_copy1

0x6d82,	// (0x0002186b) slider_set_pane_g4_copy1_ParamLimits

0x6d82,	// (0x0002186b) slider_set_pane_g4_copy1

0x6d9a,	// (0x00021883) slider_set_pane_g5_copy1_ParamLimits

0x6d9a,	// (0x00021883) slider_set_pane_g5_copy1

0x6d6e,	// (0x00021857) slider_set_pane_g6_copy1_ParamLimits

0x6d6e,	// (0x00021857) slider_set_pane_g6_copy1

0x7c76,	// (0x0002275f) slider_set_pane_g7_copy1_ParamLimits

0x7c76,	// (0x0002275f) slider_set_pane_g7_copy1

0x7df0,	// (0x000228d9) bg_set_opt_pane_cp2_copy1

0xf16a,	// (0x00029c53) setting_slider_graphic_pane_g1_copy1

0xf173,	// (0x00029c5c) setting_slider_graphic_pane_t1_copy1

0xf183,	// (0x00029c6c) setting_slider_graphic_pane_t2_copy1

0xf193,	// (0x00029c7c) slider_set_pane_cp_copy1

0xf1a3,	// (0x00029c8c) input_focus_pane_cp1_copy1

0xf1ac,	// (0x00029c95) list_set_text_pane_copy1

0xf1b4,	// (0x00029c9d) setting_text_pane_g1_copy1

0x48e7,	// (0x0001f3d0) set_text_pane_t1_copy1

0xf1a3,	// (0x00029c8c) input_focus_pane_cp2_copy1

0xf1b4,	// (0x00029c9d) setting_code_pane_g1_copy1

0xf1bd,	// (0x00029ca6) setting_code_pane_t1_copy1

0xf1cb,	// (0x00029cb4) list_set_graphic_pane_copy1

0x7df0,	// (0x000228d9) bg_set_opt_pane_cp4_copy1

0x90f5,	// (0x00023bde) list_set_graphic_pane_g1_copy1_ParamLimits

0x90f5,	// (0x00023bde) list_set_graphic_pane_g1_copy1

0xf1de,	// (0x00029cc7) list_set_graphic_pane_g2_copy1

0x910d,	// (0x00023bf6) list_set_graphic_pane_t1_copy1_ParamLimits

0x910d,	// (0x00023bf6) list_set_graphic_pane_t1_copy1

0xc24e,	// (0x00026d37) rs_clock_indi_pane_g1

0xf1e6,	// (0x00029ccf) rs_clock_indi_pane_t1

0xf1f4,	// (0x00029cdd) rs_indi_pane

0xf1fc,	// (0x00029ce5) rs_indi_pane_g1

0xf205,	// (0x00029cee) rs_indi_pane_g2

0xf20e,	// (0x00029cf7) rs_indi_pane_g3

0x0002,

0x0189,	// (0x0001ac72) rs_indi_pane_g

0x93fa,	// (0x00023ee3) bg_popup_preview_window_pane_cp03

0xf217,	// (0x00029d00) popup_fep_tooltip_window_t1

0xceca,	// (0x000279b3) popup_note2_window_g2_ParamLimits

0xceca,	// (0x000279b3) popup_note2_window_g2

0x0001,

0xfc4b,	// (0x0002a734) popup_note2_window_g_ParamLimits

0xfc4b,	// (0x0002a734) popup_note2_window_g

0xd3c5,	// (0x00027eae) bg_popup_sub_pane_cp11_ParamLimits

0xd3d2,	// (0x00027ebb) cell_ai3_links_pane_g1_ParamLimits

0xd3e9,	// (0x00027ed2) cell_ai3_links_pane_t1

0x48e7,	// (0x0001f3d0) set_text_pane_t1_copy1_ParamLimits

0x930b,	// (0x00023df4) cell_graphic_popup_pane_cp2_ParamLimits

0x930b,	// (0x00023df4) cell_graphic_popup_pane_cp2

0xf225,	// (0x00029d0e) cell_graphic_popup_pane_g1_cp2

0x84b0,	// (0x00022f99) cell_graphic_popup_pane_g2_cp2

0xf22d,	// (0x00029d16) cell_graphic_popup_pane_g3_cp2

0xf235,	// (0x00029d1e) cell_graphic_popup_pane_t2_cp2

0x84c1,	// (0x00022faa) grid_highlight_pane_cp3_cp2

0x8b02,	// (0x000235eb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8765,	// (0x0002324e) main_tmo_pane_ParamLimits

0xd71d,	// (0x00028206) popup_tmo_big_image_note_window

0xe8d4,	// (0x000293bd) cell_ai5_widget_list_pane

0xe8dc,	// (0x000293c5) cell_ai5_widget_lrg_icon_pane

0xee63,	// (0x0002994c) tmo_note_info_pane_t1_ParamLimits

0xee78,	// (0x00029961) tmo_note_info_pane_t2_ParamLimits

0xee8d,	// (0x00029976) tmo_note_info_pane_t3_ParamLimits

0xeea2,	// (0x0002998b) tmo_note_info_pane_t4_ParamLimits

0xeeb4,	// (0x0002999d) tmo_note_info_pane_t5_ParamLimits

0x0177,	// (0x0001ac60) tmo_note_info_pane_t_ParamLimits

0xefd2,	// (0x00029abb) settings_container_pane_ParamLimits

0xf19b,	// (0x00029c84) indicator_popup_pane_cp5

0xf19b,	// (0x00029c84) indicator_popup_pane_cp6

0xf1cb,	// (0x00029cb4) list_set_graphic_pane_copy1_ParamLimits

0x7ddc,	// (0x000228c5) bg_popup_window_pane_cp23

0xf243,	// (0x00029d2c) popup_tmo_big_image_note_window_g1

0xf24d,	// (0x00029d36) popup_tmo_big_image_note_window_t1

0xf25d,	// (0x00029d46) popup_tmo_big_image_note_window_t2

0xf26d,	// (0x00029d56) popup_tmo_big_image_note_window_t3

0x0002,

0x0190,	// (0x0001ac79) popup_tmo_big_image_note_window_t

0xc24e,	// (0x00026d37) cell_ai5_widget_lrg_icon_pane_g1

0xf27d,	// (0x00029d66) cell_ai5_widget_lrg_icon_pane_t1

0xf28b,	// (0x00029d74) cell_ai5_widget_list_row_pane_ParamLimits

0xf28b,	// (0x00029d74) cell_ai5_widget_list_row_pane

0xf2a2,	// (0x00029d8b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a2,	// (0x00029d8b) cell_ai5_widget_list_row_pane_g1

0xf2af,	// (0x00029d98) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2af,	// (0x00029d98) cell_ai5_widget_list_row_pane_t1

0xf2e0,	// (0x00029dc9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2e0,	// (0x00029dc9) cell_ai5_widget_list_row_pane_t2

0x0002,

0x0197,	// (0x0001ac80) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0197,	// (0x0001ac80) cell_ai5_widget_list_row_pane_t

0x7ddc,	// (0x000228c5) main_fep_vtchi_ss_pane

0xf328,	// (0x00029e11) popup_fep_char_pre_window

0xf330,	// (0x00029e19) popup_fep_ituss_window

0xf351,	// (0x00029e3a) popup_fep_vkbss_window

0xf37b,	// (0x00029e64) grid_vkbss_keypad_pane_ParamLimits

0xf37b,	// (0x00029e64) grid_vkbss_keypad_pane

0xf38b,	// (0x00029e74) ituss_keypad_pane

0x7c98,	// (0x00022781) aid_vkbss_key_offset_ParamLimits

0x7c98,	// (0x00022781) aid_vkbss_key_offset

0x7ca4,	// (0x0002278d) cell_vkbss_key_pane_ParamLimits

0x7ca4,	// (0x0002278d) cell_vkbss_key_pane

0xf39a,	// (0x00029e83) bg_cell_vkbss_key_g1_ParamLimits

0xf39a,	// (0x00029e83) bg_cell_vkbss_key_g1

0xf3a6,	// (0x00029e8f) cell_vkbss_key_3p_pane_ParamLimits

0xf3a6,	// (0x00029e8f) cell_vkbss_key_3p_pane

0xf3ba,	// (0x00029ea3) cell_vkbss_key_g1_ParamLimits

0xf3ba,	// (0x00029ea3) cell_vkbss_key_g1

0xf3ce,	// (0x00029eb7) cell_vkbss_key_t1_ParamLimits

0xf3ce,	// (0x00029eb7) cell_vkbss_key_t1

0x7cba,	// (0x000227a3) cell_ituss_key_pane_ParamLimits

0x7cba,	// (0x000227a3) cell_ituss_key_pane

0xf3f9,	// (0x00029ee2) bg_cell_ituss_key_g1_ParamLimits

0xf3f9,	// (0x00029ee2) bg_cell_ituss_key_g1

0xf405,	// (0x00029eee) cell_ituss_key_pane_g1_ParamLimits

0xf405,	// (0x00029eee) cell_ituss_key_pane_g1

0x7ccb,	// (0x000227b4) cell_ituss_key_pane_g2_ParamLimits

0x7ccb,	// (0x000227b4) cell_ituss_key_pane_g2

0x0002,

0xfe08,	// (0x0002a8f1) cell_ituss_key_pane_g_ParamLimits

0xfe08,	// (0x0002a8f1) cell_ituss_key_pane_g

0x7cf7,	// (0x000227e0) cell_ituss_key_t1_ParamLimits

0x7cf7,	// (0x000227e0) cell_ituss_key_t1

0x7d31,	// (0x0002281a) cell_ituss_key_t2_ParamLimits

0x7d31,	// (0x0002281a) cell_ituss_key_t2

0x7d62,	// (0x0002284b) cell_ituss_key_t3_ParamLimits

0x7d62,	// (0x0002284b) cell_ituss_key_t3

0x7d31,	// (0x0002281a) cell_ituss_key_t4_ParamLimits

0x7d31,	// (0x0002281a) cell_ituss_key_t4

0x0004,

0xfe0f,	// (0x0002a8f8) cell_ituss_key_t_ParamLimits

0xfe0f,	// (0x0002a8f8) cell_ituss_key_t

0xf431,	// (0x00029f1a) cell_vkbss_key_3p_pane_g1

0xf439,	// (0x00029f22) cell_vkbss_key_3p_pane_g2

0xf441,	// (0x00029f2a) cell_vkbss_key_3p_pane_g3

0x0002,

0x01b0,	// (0x0001ac99) cell_vkbss_key_3p_pane_g

0x93fa,	// (0x00023ee3) bg_popup_fep_char_preview_window_cp02

0xf449,	// (0x00029f32) popup_fep_char_pre_window_t1

0xe859,	// (0x00029342) main_ai5_sk_pane

0xef2e,	// (0x00029a17) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef3a,	// (0x00029a23) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc92e,	// (0x00027417) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4f,	// (0x00029a38) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe01,	// (0x0002a8ea) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5b,	// (0x00029a44) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8765,	// (0x0002324e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf457,	// (0x00029f40) main_ai5_sk_pane_g1

0xa10e,	// (0x00024bf7) popup_query_code_window_g1

0xf346,	// (0x00029e2f) popup_fep_vkb_icf_pane

0xf365,	// (0x00029e4e) popup_fep_vtchi_icf_pane

0xf460,	// (0x00029f49) bg_icf_pane

0xf46c,	// (0x00029f55) list_vkb_icf_pane

0xf47b,	// (0x00029f64) bg_icf_pane_cp01

0xf48e,	// (0x00029f77) vtchi_icf_list_pane

0xf49e,	// (0x00029f87) list_vkb_icf_pane_t1_ParamLimits

0xf49e,	// (0x00029f87) list_vkb_icf_pane_t1

0xf4b4,	// (0x00029f9d) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x00029f9d) vtchi_icf_list_pane_t1

0xf330,	// (0x00029e19) popup_fep_ituss_window_ParamLimits

0xf365,	// (0x00029e4e) popup_fep_vtchi_icf_pane_ParamLimits

0xf38b,	// (0x00029e74) ituss_keypad_pane_ParamLimits

0x7c8c,	// (0x00022775) ituss_sks_pane

0xf460,	// (0x00029f49) bg_icf_pane_ParamLimits

0xf308,	// (0x00029df1) icf_edit_indi_pane_ParamLimits

0xf308,	// (0x00029df1) icf_edit_indi_pane

0xf46c,	// (0x00029f55) list_vkb_icf_pane_ParamLimits

0xf47b,	// (0x00029f64) bg_icf_pane_cp01_ParamLimits

0xf31b,	// (0x00029e04) icf_edit_indi_pane_cp01_ParamLimits

0xf31b,	// (0x00029e04) icf_edit_indi_pane_cp01

0xf496,	// (0x00029f7f) vtchi_query_pane

0xe6e3,	// (0x000291cc) icf_edit_indi_pane_g1_ParamLimits

0xe6e3,	// (0x000291cc) icf_edit_indi_pane_g1

0xf525,	// (0x0002a00e) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0002a00e) icf_edit_indi_pane_g2

0x0001,

0x01c8,	// (0x0001acb1) icf_edit_indi_pane_g_ParamLimits

0x01c8,	// (0x0001acb1) icf_edit_indi_pane_g

0xf537,	// (0x0002a020) icf_edit_indi_pane_t1

0xf4ce,	// (0x00029fb7) bg_input_focus_pane_cp042

0x8694,	// (0x0002317d) vtchi_button_pane

0xf4d7,	// (0x00029fc0) vtchi_query_pane_t1

0xf4e5,	// (0x00029fce) vtchi_query_pane_t2

0xf4f3,	// (0x00029fdc) vtchi_query_pane_t3

0x0002,

0x01b7,	// (0x0001aca0) vtchi_query_pane_t

0x7ddc,	// (0x000228c5) bg_button_pane_cp13

0xf501,	// (0x00029fea) vtchi_button_pane_g1

0x7da5,	// (0x0002288e) ituss_sks_pane_g1

0x7db0,	// (0x00022899) ituss_sks_pane_g2

0x0001,

0xfe1a,	// (0x0002a903) ituss_sks_pane_g

0xf509,	// (0x00029ff2) ituss_sks_pane_t1

0xf517,	// (0x0002a000) ituss_sks_pane_t2

0x0001,

0x01c3,	// (0x0001acac) ituss_sks_pane_t

0xbcd9,	// (0x000267c2) indicator_nsta_pane_cp_g1

0xbce1,	// (0x000267ca) indicator_nsta_pane_cp_g2

0xbce9,	// (0x000267d2) indicator_nsta_pane_cp_g3

0xbcd9,	// (0x000267c2) indicator_nsta_pane_cp_g4

0xbce1,	// (0x000267ca) indicator_nsta_pane_cp_g5

0xbce9,	// (0x000267d2) indicator_nsta_pane_cp_g6

0x0005,

0xfa95,	// (0x0002a57e) indicator_nsta_pane_cp_g

0xe422,	// (0x00028f0b) cell_graphic2_pane_t2_ParamLimits

0xe422,	// (0x00028f0b) cell_graphic2_pane_t2

0x0001,

0xfd78,	// (0x0002a861) cell_graphic2_pane_t_ParamLimits

0xfd78,	// (0x0002a861) cell_graphic2_pane_t

0xe44f,	// (0x00028f38) cell_graphic2_control_pane_t1

0x8ea8,	// (0x00023991) signal_pane_g3_ParamLimits

0x8ea8,	// (0x00023991) signal_pane_g3

0x8eba,	// (0x000239a3) signal_pane_g4_ParamLimits

0x8eba,	// (0x000239a3) signal_pane_g4

0xf2f2,	// (0x00029ddb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2f2,	// (0x00029ddb) cell_ai5_widget_list_row_pane_t3

0xf41f,	// (0x00029f08) cell_ituss_key_pane_t1_ParamLimits

0xf41f,	// (0x00029f08) cell_ituss_key_pane_t1

0x9d47,	// (0x00024830) form_field_data_wide_pane_vc_t2_ParamLimits

0x9d47,	// (0x00024830) form_field_data_wide_pane_vc_t2

0x9d5b,	// (0x00024844) form_field_data_wide_pane_vc_t3_ParamLimits

0x9d5b,	// (0x00024844) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x0002a2e6) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x0002a2e6) form_field_data_wide_pane_vc_t

0xb994,	// (0x0002647d) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb994,	// (0x0002647d) form_field_slider_wide_pane_vc_t3

0xba72,	// (0x0002655b) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba72,	// (0x0002655b) form_field_popup_wide_pane_vc_t2

0xba95,	// (0x0002657e) form_field_popup_wide_pane_vc_t3_ParamLimits

0xba95,	// (0x0002657e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa84,	// (0x0002a56d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0002a56d) form_field_popup_wide_pane_vc_t

0x7aa6,	// (0x0002258f) aid_fshwr2_btn_pane_ParamLimits

0x7ab2,	// (0x0002259b) aid_fshwr2_syb_pane_ParamLimits

0x7abe,	// (0x000225a7) aid_fshwr2_txt_pane_ParamLimits

0x8765,	// (0x0002324e) fshwr2_bg_pane_ParamLimits

0x7aca,	// (0x000225b3) fshwr2_func_candi_pane_ParamLimits

0x7adf,	// (0x000225c8) fshwr2_hwr_syb_pane_ParamLimits

0x7aef,	// (0x000225d8) fshwr2_icf_pane_ParamLimits

0x561f,	// (0x00020108) list_double_graphic_pane_vc_g4_ParamLimits

0x561f,	// (0x00020108) list_double_graphic_pane_vc_g4

0x7ceb,	// (0x000227d4) cell_ituss_key_pane_g3_ParamLimits

0x7ceb,	// (0x000227d4) cell_ituss_key_pane_g3

0x7d93,	// (0x0002287c) cell_ituss_key_t5_ParamLimits

0x7d93,	// (0x0002287c) cell_ituss_key_t5

0xf351,	// (0x00029e3a) popup_fep_vkbss_window_ParamLimits

0xe863,	// (0x0002934c) aid_cell_ai5_quarter

0xf537,	// (0x0002a020) icf_edit_indi_pane_t1_ParamLimits

0x8201,	// (0x00022cea) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8201,	// (0x00022cea) aid_tch_indicator_popup_pane_cp2

0x8214,	// (0x00022cfd) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8214,	// (0x00022cfd) aid_tch_query_popup_data_pane_cp2

0xa0b6,	// (0x00024b9f) aid_tch_query_popup_pane_ParamLimits

0xa0b6,	// (0x00024b9f) aid_tch_query_popup_pane

0xa0b6,	// (0x00024b9f) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa0b6,	// (0x00024b9f) aid_tch_query_popup_data_pane_cp1
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
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
