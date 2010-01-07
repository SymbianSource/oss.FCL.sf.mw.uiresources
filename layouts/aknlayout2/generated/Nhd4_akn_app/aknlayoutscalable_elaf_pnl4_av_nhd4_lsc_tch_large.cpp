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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002e437 };

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
0x01fc,	// (0x0002e633) Screen

0x0208,	// (0x0002e63f) application_window_ParamLimits

0x0208,	// (0x0002e63f) application_window

0x339a,	// (0x000317d1) screen_g1

0xeb74,	// (0x0003cfab) area_bottom_pane_ParamLimits

0xeb74,	// (0x0003cfab) area_bottom_pane

0x7cc3,	// (0x000360fa) area_top_pane_ParamLimits

0x7cc3,	// (0x000360fa) area_top_pane

0x7d57,	// (0x0003618e) main_pane_ParamLimits

0x7d57,	// (0x0003618e) main_pane

0x33a4,	// (0x000317db) misc_graphics

0x15a4,	// (0x0002f9db) battery_pane_ParamLimits

0x15a4,	// (0x0002f9db) battery_pane

0x511b,	// (0x00033552) bg_status_flat_pane_g8

0x5123,	// (0x0003355a) bg_status_flat_pane_g9

0x4881,	// (0x00032cb8) context_pane_ParamLimits

0x4881,	// (0x00032cb8) context_pane

0x170f,	// (0x0002fb46) navi_pane_ParamLimits

0x170f,	// (0x0002fb46) navi_pane

0x1786,	// (0x0002fbbd) signal_pane_ParamLimits

0x1786,	// (0x0002fbbd) signal_pane

0x0008,

0xf8b2,	// (0x0003dce9) bg_status_flat_pane_g

0x1816,	// (0x0002fc4d) status_pane_g1_ParamLimits

0x1816,	// (0x0002fc4d) status_pane_g1

0x182c,	// (0x0002fc63) status_pane_g2_ParamLimits

0x182c,	// (0x0002fc63) status_pane_g2

0x48e6,	// (0x00032d1d) status_pane_g3_ParamLimits

0x48e6,	// (0x00032d1d) status_pane_g3

0x0004,

0xf7e5,	// (0x0003dc1c) status_pane_g_ParamLimits

0xf7e5,	// (0x0003dc1c) status_pane_g

0x1838,	// (0x0002fc6f) title_pane_ParamLimits

0x1838,	// (0x0002fc6f) title_pane

0x1899,	// (0x0002fcd0) uni_indicator_pane_ParamLimits

0x1899,	// (0x0002fcd0) uni_indicator_pane

0x46ac,	// (0x00032ae3) bg_list_pane_ParamLimits

0x46ac,	// (0x00032ae3) bg_list_pane

0xeec9,	// (0x0003d300) find_pane

0x0e92,	// (0x0002f2c9) listscroll_app_pane_ParamLimits

0x0e92,	// (0x0002f2c9) listscroll_app_pane

0x46cc,	// (0x00032b03) listscroll_form_pane

0xeed1,	// (0x0003d308) listscroll_gen_pane_ParamLimits

0xeed1,	// (0x0003d308) listscroll_gen_pane

0x46cc,	// (0x00032b03) listscroll_set_pane

0x5948,	// (0x00033d7f) main_idle_act_pane

0x4492,	// (0x000328c9) main_idle_trad_pane

0x4492,	// (0x000328c9) main_list_empty_pane

0x3ba7,	// (0x00031fde) main_midp_pane

0x46e6,	// (0x00032b1d) main_pane_g1_ParamLimits

0x46e6,	// (0x00032b1d) main_pane_g1

0x0e9e,	// (0x0002f2d5) popup_ai_message_window_ParamLimits

0x0e9e,	// (0x0002f2d5) popup_ai_message_window

0x0f2f,	// (0x0002f366) popup_fep_china_uni_window_ParamLimits

0x0f2f,	// (0x0002f366) popup_fep_china_uni_window

0x4726,	// (0x00032b5d) popup_fep_japan_candidate_window_ParamLimits

0x4726,	// (0x00032b5d) popup_fep_japan_candidate_window

0x4744,	// (0x00032b7b) popup_fep_japan_predictive_window_ParamLimits

0x4744,	// (0x00032b7b) popup_fep_japan_predictive_window

0x0f89,	// (0x0002f3c0) popup_find_window

0x0fa6,	// (0x0002f3dd) popup_grid_graphic_window_ParamLimits

0x0fa6,	// (0x0002f3dd) popup_grid_graphic_window

0x4774,	// (0x00032bab) popup_large_graphic_colour_window

0x1038,	// (0x0002f46f) popup_menu_window_ParamLimits

0x1038,	// (0x0002f46f) popup_menu_window

0x1204,	// (0x0002f63b) popup_note_image_window

0x11ca,	// (0x0002f601) popup_note_wait_window_ParamLimits

0x11ca,	// (0x0002f601) popup_note_wait_window

0x121c,	// (0x0002f653) popup_note_window_ParamLimits

0x121c,	// (0x0002f653) popup_note_window

0x12c2,	// (0x0002f6f9) popup_query_code_window_ParamLimits

0x12c2,	// (0x0002f6f9) popup_query_code_window

0x479a,	// (0x00032bd1) popup_query_data_code_window_ParamLimits

0x479a,	// (0x00032bd1) popup_query_data_code_window

0x12fc,	// (0x0002f733) popup_query_data_window_ParamLimits

0x12fc,	// (0x0002f733) popup_query_data_window

0x1372,	// (0x0002f7a9) popup_query_sat_info_window_ParamLimits

0x1372,	// (0x0002f7a9) popup_query_sat_info_window

0x1409,	// (0x0002f840) popup_snote_single_graphic_window_ParamLimits

0x1409,	// (0x0002f840) popup_snote_single_graphic_window

0x1409,	// (0x0002f840) popup_snote_single_text_window_ParamLimits

0x1409,	// (0x0002f840) popup_snote_single_text_window

0x47b1,	// (0x00032be8) popup_sub_window_general

0x47f7,	// (0x00032c2e) popup_window_general_ParamLimits

0x47f7,	// (0x00032c2e) popup_window_general

0x480c,	// (0x00032c43) power_save_pane

0xed89,	// (0x0003d1c0) control_pane_g1_ParamLimits

0xed89,	// (0x0003d1c0) control_pane_g1

0x8a12,	// (0x00036e49) control_pane_g2_ParamLimits

0x8a12,	// (0x00036e49) control_pane_g2

0x4686,	// (0x00032abd) control_pane_g3_ParamLimits

0x4686,	// (0x00032abd) control_pane_g3

0x0007,

0xf7cd,	// (0x0003dc04) control_pane_g_ParamLimits

0xf7cd,	// (0x0003dc04) control_pane_g

0xedca,	// (0x0003d201) control_pane_t1_ParamLimits

0xedca,	// (0x0003d201) control_pane_t1

0xee28,	// (0x0003d25f) control_pane_t2_ParamLimits

0xee28,	// (0x0003d25f) control_pane_t2

0x0002,

0xf7de,	// (0x0003dc15) control_pane_t_ParamLimits

0xf7de,	// (0x0003dc15) control_pane_t

0x45a7,	// (0x000329de) navi_navi_volume_pane_cp1

0x45b0,	// (0x000329e7) status_small_icon_pane

0x45b8,	// (0x000329ef) status_small_pane_g1_ParamLimits

0x45b8,	// (0x000329ef) status_small_pane_g1

0x45ec,	// (0x00032a23) status_small_pane_g2_ParamLimits

0x45ec,	// (0x00032a23) status_small_pane_g2

0x45f8,	// (0x00032a2f) status_small_pane_g3_ParamLimits

0x45f8,	// (0x00032a2f) status_small_pane_g3

0x4604,	// (0x00032a3b) status_small_pane_g4_ParamLimits

0x4604,	// (0x00032a3b) status_small_pane_g4

0x4610,	// (0x00032a47) status_small_pane_g5_ParamLimits

0x4610,	// (0x00032a47) status_small_pane_g5

0x461f,	// (0x00032a56) status_small_pane_g6_ParamLimits

0x461f,	// (0x00032a56) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0003dbf3) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0003dbf3) status_small_pane_g

0x464f,	// (0x00032a86) status_small_pane_t1

0x4672,	// (0x00032aa9) status_small_wait_pane_ParamLimits

0x4672,	// (0x00032aa9) status_small_wait_pane

0x0d02,	// (0x0002f139) aid_levels_signal_ParamLimits

0x0d02,	// (0x0002f139) aid_levels_signal

0x0d1a,	// (0x0002f151) signal_pane_g1_ParamLimits

0x0d1a,	// (0x0002f151) signal_pane_g1

0x0d35,	// (0x0002f16c) signal_pane_g2_ParamLimits

0x0d35,	// (0x0002f16c) signal_pane_g2

0x0001,

0xf751,	// (0x0003db88) signal_pane_g_ParamLimits

0xf751,	// (0x0003db88) signal_pane_g

0x3fd6,	// (0x0003240d) context_pane_g1

0x0218,	// (0x0002e64f) title_pane_g1

0x024d,	// (0x0002e684) title_pane_t1

0x33ba,	// (0x000317f1) title_pane_t2

0x33e0,	// (0x00031817) title_pane_t3

0x0002,

0xf59b,	// (0x0003d9d2) title_pane_t

0x18c1,	// (0x0002fcf8) aid_levels_battery_ParamLimits

0x18c1,	// (0x0002fcf8) aid_levels_battery

0x18dd,	// (0x0002fd14) battery_pane_g1_ParamLimits

0x18dd,	// (0x0002fd14) battery_pane_g1

0x18fa,	// (0x0002fd31) battery_pane_g2_ParamLimits

0x18fa,	// (0x0002fd31) battery_pane_g2

0x0001,

0xf7f0,	// (0x0003dc27) battery_pane_g_ParamLimits

0xf7f0,	// (0x0003dc27) battery_pane_g

0x1b3f,	// (0x0002ff76) uni_indicator_pane_g1

0x1b54,	// (0x0002ff8b) uni_indicator_pane_g2

0x1b69,	// (0x0002ffa0) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0003dd91) uni_indicator_pane_g

0x4302,	// (0x00032739) navi_icon_pane_ParamLimits

0x4302,	// (0x00032739) navi_icon_pane

0x4249,	// (0x00032680) navi_midp_pane

0x431e,	// (0x00032755) navi_navi_pane

0x4328,	// (0x0003275f) navi_text_pane_ParamLimits

0x4328,	// (0x0003275f) navi_text_pane

0x339a,	// (0x000317d1) status_small_wait_pane_g1

0x36c4,	// (0x00031afb) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0003dd8c) status_small_wait_pane_g

0x1ade,	// (0x0002ff15) navi_navi_icon_text_pane

0x1af8,	// (0x0002ff2f) navi_navi_pane_g1_ParamLimits

0x1af8,	// (0x0002ff2f) navi_navi_pane_g1

0x1ae6,	// (0x0002ff1d) navi_navi_pane_g2_ParamLimits

0x1ae6,	// (0x0002ff1d) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0003dd5a) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0003dd5a) navi_navi_pane_g

0x569e,	// (0x00033ad5) navi_navi_tabs_pane

0x1b0a,	// (0x0002ff41) navi_navi_text_pane

0x1ade,	// (0x0002ff15) navi_navi_volume_pane

0x1acc,	// (0x0002ff03) navi_text_pane_t1

0x1ac0,	// (0x0002fef7) navi_icon_pane_g1

0x55df,	// (0x00033a16) navi_navi_text_pane_t1

0xf093,	// (0x0003d4ca) navi_navi_volume_pane_g1

0xf09b,	// (0x0003d4d2) volume_small_pane

0x1a1c,	// (0x0002fe53) navi_navi_icon_text_pane_g1

0x1a24,	// (0x0002fe5b) navi_navi_icon_text_pane_t1

0x431e,	// (0x00032755) navi_tabs_2_long_pane

0x431e,	// (0x00032755) navi_tabs_2_pane

0x431e,	// (0x00032755) navi_tabs_3_long_pane

0x431e,	// (0x00032755) navi_tabs_3_pane

0x431e,	// (0x00032755) navi_tabs_4_pane

0xf073,	// (0x0003d4aa) tabs_2_active_pane_ParamLimits

0xf073,	// (0x0003d4aa) tabs_2_active_pane

0xf083,	// (0x0003d4ba) tabs_2_passive_pane_ParamLimits

0xf083,	// (0x0003d4ba) tabs_2_passive_pane

0xf041,	// (0x0003d478) tabs_3_active_pane_ParamLimits

0xf041,	// (0x0003d478) tabs_3_active_pane

0xf051,	// (0x0003d488) tabs_3_passive_pane_ParamLimits

0xf051,	// (0x0003d488) tabs_3_passive_pane

0xf062,	// (0x0003d499) tabs_3_passive_pane_cp_ParamLimits

0xf062,	// (0x0003d499) tabs_3_passive_pane_cp

0xeffd,	// (0x0003d434) tabs_4_active_pane_ParamLimits

0xeffd,	// (0x0003d434) tabs_4_active_pane

0xf00e,	// (0x0003d445) tabs_4_passive_pane_ParamLimits

0xf00e,	// (0x0003d445) tabs_4_passive_pane

0xf01f,	// (0x0003d456) tabs_4_passive_pane_cp_ParamLimits

0xf01f,	// (0x0003d456) tabs_4_passive_pane_cp

0xf030,	// (0x0003d467) tabs_4_passive_pane_cp2_ParamLimits

0xf030,	// (0x0003d467) tabs_4_passive_pane_cp2

0xefdd,	// (0x0003d414) tabs_2_long_active_pane_ParamLimits

0xefdd,	// (0x0003d414) tabs_2_long_active_pane

0xefed,	// (0x0003d424) tabs_2_long_passive_pane_ParamLimits

0xefed,	// (0x0003d424) tabs_2_long_passive_pane

0xefa8,	// (0x0003d3df) tabs_3_long_active_pane_ParamLimits

0xefa8,	// (0x0003d3df) tabs_3_long_active_pane

0xefb9,	// (0x0003d3f0) tabs_3_long_passive_pane_ParamLimits

0xefb9,	// (0x0003d3f0) tabs_3_long_passive_pane

0xefcc,	// (0x0003d403) tabs_3_long_passive_pane_cp_ParamLimits

0xefcc,	// (0x0003d403) tabs_3_long_passive_pane_cp

0x8c86,	// (0x000370bd) volume_small_pane_g1

0xef57,	// (0x0003d38e) volume_small_pane_g2

0xef60,	// (0x0003d397) volume_small_pane_g3

0xef69,	// (0x0003d3a0) volume_small_pane_g4

0xef72,	// (0x0003d3a9) volume_small_pane_g5

0xef7b,	// (0x0003d3b2) volume_small_pane_g6

0xef84,	// (0x0003d3bb) volume_small_pane_g7

0xef8d,	// (0x0003d3c4) volume_small_pane_g8

0xef96,	// (0x0003d3cd) volume_small_pane_g9

0xef9f,	// (0x0003d3d6) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0003dd26) volume_small_pane_g

0x33f2,	// (0x00031829) bg_active_tab_pane_cp2_ParamLimits

0x33f2,	// (0x00031829) bg_active_tab_pane_cp2

0x02d9,	// (0x0002e710) tabs_3_active_pane_g1

0x02e1,	// (0x0002e718) tabs_3_active_pane_t1

0x33f2,	// (0x00031829) bg_passive_tab_pane_cp2_ParamLimits

0x33f2,	// (0x00031829) bg_passive_tab_pane_cp2

0x02d9,	// (0x0002e710) tabs_3_passive_pane_g1

0x02e1,	// (0x0002e718) tabs_3_passive_pane_t1

0x33f2,	// (0x00031829) bg_active_tab_pane_cp3_ParamLimits

0x33f2,	// (0x00031829) bg_active_tab_pane_cp3

0x02f3,	// (0x0002e72a) tabs_4_active_pane_g1

0x02fb,	// (0x0002e732) tabs_4_active_pane_t1

0x33f2,	// (0x00031829) bg_passive_tab_pane_cp3_ParamLimits

0x33f2,	// (0x00031829) bg_passive_tab_pane_cp3

0x02f3,	// (0x0002e72a) tabs_4_1_passive_pane_g1

0x02fb,	// (0x0002e732) tabs_4_1_passive_pane_t1

0x3ba7,	// (0x00031fde) list_highlight_pane_cp2

0x1bf6,	// (0x0003002d) list_set_pane_ParamLimits

0x1bf6,	// (0x0003002d) list_set_pane

0x1c90,	// (0x000300c7) main_pane_set_t1_ParamLimits

0x1c90,	// (0x000300c7) main_pane_set_t1

0x1cb0,	// (0x000300e7) main_pane_set_t2_ParamLimits

0x1cb0,	// (0x000300e7) main_pane_set_t2

0x1cc4,	// (0x000300fb) main_pane_set_t3_ParamLimits

0x1cc4,	// (0x000300fb) main_pane_set_t3

0x1cd6,	// (0x0003010d) main_pane_set_t4_ParamLimits

0x1cd6,	// (0x0003010d) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0003ddf6) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0003ddf6) main_pane_set_t

0x1ce8,	// (0x0003011f) setting_code_pane

0x1cf0,	// (0x00030127) setting_slider_graphic_pane

0x1cf0,	// (0x00030127) setting_slider_pane

0x1cf0,	// (0x00030127) setting_text_pane

0x1cf0,	// (0x00030127) setting_volume_pane

0x804e,	// (0x00036485) volume_set_pane

0x3400,	// (0x00031837) bg_set_opt_pane_cp

0x8056,	// (0x0003648d) setting_slider_pane_t1

0x806f,	// (0x000364a6) setting_slider_pane_t2

0x8088,	// (0x000364bf) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003d9d9) setting_slider_pane_t

0x809f,	// (0x000364d6) slider_set_pane

0x33a4,	// (0x000317db) bg_set_opt_pane_cp2

0x3417,	// (0x0003184e) setting_slider_graphic_pane_g1

0x80b5,	// (0x000364ec) setting_slider_graphic_pane_t1

0x80c4,	// (0x000364fb) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003d9e0) setting_slider_graphic_pane_t

0x80d3,	// (0x0003650a) slider_set_pane_cp

0x33a4,	// (0x000317db) input_focus_pane_cp1

0x5b05,	// (0x00033f3c) list_set_text_pane

0x339a,	// (0x000317d1) setting_text_pane_g1

0x33a4,	// (0x000317db) input_focus_pane_cp2

0x339a,	// (0x000317d1) setting_code_pane_g1

0x3420,	// (0x00031857) setting_code_pane_t1

0x6d77,	// (0x000351ae) set_text_pane_t1_ParamLimits

0x6d77,	// (0x000351ae) set_text_pane_t1

0x3ab7,	// (0x00031eee) set_opt_bg_pane_g1

0x3abf,	// (0x00031ef6) set_opt_bg_pane_g2

0x5ae5,	// (0x00033f1c) set_opt_bg_pane_g3

0x3acf,	// (0x00031f06) set_opt_bg_pane_g4

0x3ad7,	// (0x00031f0e) set_opt_bg_pane_g5

0x3adf,	// (0x00031f16) set_opt_bg_pane_g6

0x5aed,	// (0x00033f24) set_opt_bg_pane_g7

0x5af5,	// (0x00033f2c) set_opt_bg_pane_g8

0x5afd,	// (0x00033f34) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0003dde3) set_opt_bg_pane_g

0x5ad8,	// (0x00033f0f) slider_set_pane_g1

0x8e54,	// (0x0003728b) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0003ddd4) slider_set_pane_g

0x8df0,	// (0x00037227) volume_set_pane_g1

0x8df8,	// (0x0003722f) volume_set_pane_g2

0x8e00,	// (0x00037237) volume_set_pane_g3

0x8e08,	// (0x0003723f) volume_set_pane_g4

0x8e10,	// (0x00037247) volume_set_pane_g5

0x8e18,	// (0x0003724f) volume_set_pane_g6

0x8e20,	// (0x00037257) volume_set_pane_g7

0x8e28,	// (0x0003725f) volume_set_pane_g8

0x8e30,	// (0x00037267) volume_set_pane_g9

0x8e38,	// (0x0003726f) volume_set_pane_g10

0x0009,

0xf975,	// (0x0003ddac) volume_set_pane_g

0x030d,	// (0x0002e744) indicator_pane_ParamLimits

0x030d,	// (0x0002e744) indicator_pane

0x0335,	// (0x0002e76c) main_idle_pane_g2_ParamLimits

0x0335,	// (0x0002e76c) main_idle_pane_g2

0x036d,	// (0x0002e7a4) main_pane_idle_g1_ParamLimits

0x036d,	// (0x0002e7a4) main_pane_idle_g1

0x342e,	// (0x00031865) popup_clock_digital_analogue_window_ParamLimits

0x342e,	// (0x00031865) popup_clock_digital_analogue_window

0x0394,	// (0x0002e7cb) soft_indicator_pane_ParamLimits

0x0394,	// (0x0002e7cb) soft_indicator_pane

0x03ae,	// (0x0002e7e5) wallpaper_pane_ParamLimits

0x03ae,	// (0x0002e7e5) wallpaper_pane

0x339a,	// (0x000317d1) wallpaper_pane_g1

0x03c0,	// (0x0002e7f7) indicator_pane_g1_ParamLimits

0x03c0,	// (0x0002e7f7) indicator_pane_g1

0x5c4c,	// (0x00034083) navi_navi_icon_text_pane_srt_g1

0x345c,	// (0x00031893) soft_indicator_pane_t1

0x3476,	// (0x000318ad) aid_ps_area_pane

0x03d9,	// (0x0002e810) aid_ps_clock_pane

0x3487,	// (0x000318be) aid_ps_indicator_pane

0x3493,	// (0x000318ca) indicator_ps_pane_ParamLimits

0x3493,	// (0x000318ca) indicator_ps_pane

0x34a2,	// (0x000318d9) power_save_pane_g1_ParamLimits

0x34a2,	// (0x000318d9) power_save_pane_g1

0x34ae,	// (0x000318e5) power_save_pane_g2_ParamLimits

0x34ae,	// (0x000318e5) power_save_pane_g2

0x7bb7,	// (0x00035fee) aid_navinavi_width_pane

0x3476,	// (0x000318ad) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003d9e5) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003d9e5) power_save_pane_g

0x34bc,	// (0x000318f3) power_save_pane_t1_ParamLimits

0x34bc,	// (0x000318f3) power_save_pane_t1

0x03d9,	// (0x0002e810) aid_ps_clock_pane_ParamLimits

0x3487,	// (0x000318be) aid_ps_indicator_pane_ParamLimits

0x34ce,	// (0x00031905) power_save_pane_t4_ParamLimits

0x34ce,	// (0x00031905) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003d9ea) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003d9ea) power_save_pane_t

0x34f8,	// (0x0003192f) power_save_t3_ParamLimits

0x34f8,	// (0x0003192f) power_save_t3

0x34e3,	// (0x0003191a) power_save_t2_ParamLimits

0x34e3,	// (0x0003191a) power_save_t2

0x350d,	// (0x00031944) indicator_ps_pane_g1

0x0a09,	// (0x0002ee40) ai_gene_pane_ParamLimits

0x0a09,	// (0x0002ee40) ai_gene_pane

0x0a20,	// (0x0002ee57) ai_links_pane_ParamLimits

0x0a20,	// (0x0002ee57) ai_links_pane

0x0a38,	// (0x0002ee6f) indicator_pane_cp1_ParamLimits

0x0a38,	// (0x0002ee6f) indicator_pane_cp1

0x0a47,	// (0x0002ee7e) main_pane_idle_g1_cp_ParamLimits

0x0a47,	// (0x0002ee7e) main_pane_idle_g1_cp

0x3516,	// (0x0003194d) popup_ai_links_title_window

0x0a5f,	// (0x0002ee96) soft_indicator_pane_cp1_ParamLimits

0x0a5f,	// (0x0002ee96) soft_indicator_pane_cp1

0x590e,	// (0x00033d45) ai_links_pane_g1

0x5917,	// (0x00033d4e) grid_ai_links_pane

0x1b36,	// (0x0002ff6d) ai_gene_pane_1

0x58fc,	// (0x00033d33) ai_gene_pane_2

0x5905,	// (0x00033d3c) list_highlight_pane_cp4

0x1b12,	// (0x0002ff49) cell_ai_link_pane_ParamLimits

0x1b12,	// (0x0002ff49) cell_ai_link_pane

0x58f4,	// (0x00033d2b) cell_ai_link_pane_g1

0x36c4,	// (0x00031afb) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0003dd87) cell_ai_link_pane_g

0x33a4,	// (0x000317db) grid_highlight_cp2

0x33a4,	// (0x000317db) bg_popup_sub_pane_cp1

0x352d,	// (0x00031964) popup_ai_links_title_window_t1

0x5842,	// (0x00033c79) ai_gene_pane_1_g1_ParamLimits

0x5842,	// (0x00033c79) ai_gene_pane_1_g1

0x584e,	// (0x00033c85) ai_gene_pane_1_g2_ParamLimits

0x584e,	// (0x00033c85) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0003dd7d) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0003dd7d) ai_gene_pane_1_g

0x585b,	// (0x00033c92) ai_gene_pane_1_t1_ParamLimits

0x585b,	// (0x00033c92) ai_gene_pane_1_t1

0x588f,	// (0x00033cc6) grid_ai_soft_ind_pane

0x582d,	// (0x00033c64) ai_gene_pane_2_t1_ParamLimits

0x582d,	// (0x00033c64) ai_gene_pane_2_t1

0x0a73,	// (0x0002eeaa) main_pane_empty_t1_ParamLimits

0x0a73,	// (0x0002eeaa) main_pane_empty_t1

0x0a8b,	// (0x0002eec2) main_pane_empty_t2_ParamLimits

0x0a8b,	// (0x0002eec2) main_pane_empty_t2

0x0aa0,	// (0x0002eed7) main_pane_empty_t3_ParamLimits

0x0aa0,	// (0x0002eed7) main_pane_empty_t3

0x0ab2,	// (0x0002eee9) main_pane_empty_t4_ParamLimits

0x0ab2,	// (0x0002eee9) main_pane_empty_t4

0x0ac4,	// (0x0002eefb) main_pane_empty_t5_ParamLimits

0x0ac4,	// (0x0002eefb) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003d9ef) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003d9ef) main_pane_empty_t

0x3b08,	// (0x00031f3f) bg_popup_window_pane_ParamLimits

0x3b08,	// (0x00031f3f) bg_popup_window_pane

0x55ed,	// (0x00033a24) find_popup_pane_cp2_ParamLimits

0x55ed,	// (0x00033a24) find_popup_pane_cp2

0x55f9,	// (0x00033a30) heading_pane_ParamLimits

0x55f9,	// (0x00033a30) heading_pane

0x33a4,	// (0x000317db) bg_popup_sub_pane

0x1a41,	// (0x0002fe78) bg_popup_window_pane_g1_ParamLimits

0x1a41,	// (0x0002fe78) bg_popup_window_pane_g1

0x1a50,	// (0x0002fe87) bg_popup_window_pane_g2_ParamLimits

0x1a50,	// (0x0002fe87) bg_popup_window_pane_g2

0x1a5c,	// (0x0002fe93) bg_popup_window_pane_g3_ParamLimits

0x1a5c,	// (0x0002fe93) bg_popup_window_pane_g3

0x1a68,	// (0x0002fe9f) bg_popup_window_pane_g4_ParamLimits

0x1a68,	// (0x0002fe9f) bg_popup_window_pane_g4

0x1a77,	// (0x0002feae) bg_popup_window_pane_g5_ParamLimits

0x1a77,	// (0x0002feae) bg_popup_window_pane_g5

0x1a87,	// (0x0002febe) bg_popup_window_pane_g6_ParamLimits

0x1a87,	// (0x0002febe) bg_popup_window_pane_g6

0x1a93,	// (0x0002feca) bg_popup_window_pane_g7_ParamLimits

0x1a93,	// (0x0002feca) bg_popup_window_pane_g7

0x1aa2,	// (0x0002fed9) bg_popup_window_pane_g8_ParamLimits

0x1aa2,	// (0x0002fed9) bg_popup_window_pane_g8

0x1ab1,	// (0x0002fee8) bg_popup_window_pane_g9_ParamLimits

0x1ab1,	// (0x0002fee8) bg_popup_window_pane_g9

0x55d3,	// (0x00033a0a) bg_popup_window_pane_g10_ParamLimits

0x55d3,	// (0x00033a0a) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0003dd45) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0003dd45) bg_popup_window_pane_g

0x558a,	// (0x000339c1) bg_popup_heading_pane_ParamLimits

0x558a,	// (0x000339c1) bg_popup_heading_pane

0x8f92,	// (0x000373c9) tabs_4_passive_pane_cp_srt_ParamLimits

0x8f92,	// (0x000373c9) tabs_4_passive_pane_cp_srt

0x8fa4,	// (0x000373db) tabs_4_passive_pane_srt_ParamLimits

0x559e,	// (0x000339d5) heading_pane_g2

0x8fa4,	// (0x000373db) tabs_4_passive_pane_srt

0x4aca,	// (0x00032f01) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4aca,	// (0x00032f01) bg_passive_tab_pane_cp3_srt

0x55a6,	// (0x000339dd) heading_pane_t1_ParamLimits

0x55a6,	// (0x000339dd) heading_pane_t1

0x55bd,	// (0x000339f4) heading_pane_t2_ParamLimits

0x55bd,	// (0x000339f4) heading_pane_t2

0x0001,

0xf909,	// (0x0003dd40) heading_pane_t_ParamLimits

0xf909,	// (0x0003dd40) heading_pane_t

0x50e3,	// (0x0003351a) bg_popup_heading_pane_g1

0x5174,	// (0x000335ab) bg_popup_heading_pane_g2

0x517e,	// (0x000335b5) bg_popup_heading_pane_g3

0x5188,	// (0x000335bf) bg_popup_heading_pane_g4

0x5192,	// (0x000335c9) bg_popup_heading_pane_g5

0x519c,	// (0x000335d3) bg_popup_heading_pane_g6

0x51a4,	// (0x000335db) bg_popup_heading_pane_g7

0x51ac,	// (0x000335e3) bg_popup_heading_pane_g8

0x51b6,	// (0x000335ed) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0003dcfc) bg_popup_heading_pane_g

0x49da,	// (0x00032e11) bg_popup_sub_pane_g1

0x49ea,	// (0x00032e21) bg_popup_sub_pane_g2

0x49e2,	// (0x00032e19) bg_popup_sub_pane_g3

0x49fa,	// (0x00032e31) bg_popup_sub_pane_g4

0x49f2,	// (0x00032e29) bg_popup_sub_pane_g5

0x4a02,	// (0x00032e39) bg_popup_sub_pane_g6

0x4a0a,	// (0x00032e41) bg_popup_sub_pane_g7

0x4a1a,	// (0x00032e51) bg_popup_sub_pane_g8

0x4a12,	// (0x00032e49) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0003dcd6) bg_popup_sub_pane_g

0x33f2,	// (0x00031829) bg_popup_window_pane_cp5_ParamLimits

0x33f2,	// (0x00031829) bg_popup_window_pane_cp5

0x354a,	// (0x00031981) popup_note_window_g1_ParamLimits

0x354a,	// (0x00031981) popup_note_window_g1

0x3556,	// (0x0003198d) popup_note_window_t1_ParamLimits

0x3556,	// (0x0003198d) popup_note_window_t1

0x3568,	// (0x0003199f) popup_note_window_t2_ParamLimits

0x3568,	// (0x0003199f) popup_note_window_t2

0x357a,	// (0x000319b1) popup_note_window_t3_ParamLimits

0x357a,	// (0x000319b1) popup_note_window_t3

0x358c,	// (0x000319c3) popup_note_window_t4_ParamLimits

0x358c,	// (0x000319c3) popup_note_window_t4

0x35b4,	// (0x000319eb) popup_note_window_t5_ParamLimits

0x35b4,	// (0x000319eb) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003d9fa) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003d9fa) popup_note_window_t

0x35d8,	// (0x00031a0f) bg_popup_window_pane_cp6_ParamLimits

0x35d8,	// (0x00031a0f) bg_popup_window_pane_cp6

0x5057,	// (0x0003348e) popup_note_image_window_g1_ParamLimits

0x5057,	// (0x0003348e) popup_note_image_window_g1

0x5063,	// (0x0003349a) popup_note_image_window_g2_ParamLimits

0x5063,	// (0x0003349a) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0003dcca) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0003dcca) popup_note_image_window_g

0x507c,	// (0x000334b3) popup_note_image_window_t1_ParamLimits

0x507c,	// (0x000334b3) popup_note_image_window_t1

0x5095,	// (0x000334cc) popup_note_image_window_t2_ParamLimits

0x5095,	// (0x000334cc) popup_note_image_window_t2

0x50ae,	// (0x000334e5) popup_note_image_window_t3_ParamLimits

0x50ae,	// (0x000334e5) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0003dccf) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0003dccf) popup_note_image_window_t

0x4f34,	// (0x0003336b) bg_popup_window_pane_cp7_ParamLimits

0x4f34,	// (0x0003336b) bg_popup_window_pane_cp7

0x4f64,	// (0x0003339b) popup_note_wait_window_g1_ParamLimits

0x4f64,	// (0x0003339b) popup_note_wait_window_g1

0x4f70,	// (0x000333a7) popup_note_wait_window_g2_ParamLimits

0x4f70,	// (0x000333a7) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0003dcb8) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0003dcb8) popup_note_wait_window_g

0x4f88,	// (0x000333bf) popup_note_wait_window_t1_ParamLimits

0x4f88,	// (0x000333bf) popup_note_wait_window_t1

0x4faf,	// (0x000333e6) popup_note_wait_window_t2_ParamLimits

0x4faf,	// (0x000333e6) popup_note_wait_window_t2

0x4fcc,	// (0x00033403) popup_note_wait_window_t3_ParamLimits

0x4fcc,	// (0x00033403) popup_note_wait_window_t3

0x4fdf,	// (0x00033416) popup_note_wait_window_t4_ParamLimits

0x4fdf,	// (0x00033416) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0003dcbf) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0003dcbf) popup_note_wait_window_t

0x5004,	// (0x0003343b) wait_bar_pane_ParamLimits

0x5004,	// (0x0003343b) wait_bar_pane

0x33a4,	// (0x000317db) wait_anim_pane

0x33a4,	// (0x000317db) wait_border_pane

0x339a,	// (0x000317d1) wait_anim_pane_g1

0x339a,	// (0x000317d1) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0003db83) wait_anim_pane_g

0x4ed8,	// (0x0003330f) wait_border_pane_g1

0x4ee3,	// (0x0003331a) wait_border_pane_g2

0x4eec,	// (0x00033323) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0003dcb1) wait_border_pane_g

0x4e3a,	// (0x00033271) bg_popup_window_pane_cp16_ParamLimits

0x4e3a,	// (0x00033271) bg_popup_window_pane_cp16

0x4e48,	// (0x0003327f) indicator_popup_pane_cp4_ParamLimits

0x4e48,	// (0x0003327f) indicator_popup_pane_cp4

0x4e5c,	// (0x00033293) popup_query_data_window_t1_ParamLimits

0x4e5c,	// (0x00033293) popup_query_data_window_t1

0x4e6e,	// (0x000332a5) popup_query_data_window_t2_ParamLimits

0x4e6e,	// (0x000332a5) popup_query_data_window_t2

0x4e87,	// (0x000332be) popup_query_data_window_t3_ParamLimits

0x4e87,	// (0x000332be) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0003dcaa) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0003dcaa) popup_query_data_window_t

0x4ea1,	// (0x000332d8) query_popup_data_pane_ParamLimits

0x4ea1,	// (0x000332d8) query_popup_data_pane

0x4eb5,	// (0x000332ec) query_popup_data_pane_cp1_ParamLimits

0x4eb5,	// (0x000332ec) query_popup_data_pane_cp1

0x35d8,	// (0x00031a0f) bg_popup_window_pane_cp10_ParamLimits

0x35d8,	// (0x00031a0f) bg_popup_window_pane_cp10

0x4d9d,	// (0x000331d4) indicator_popup_pane_ParamLimits

0x4d9d,	// (0x000331d4) indicator_popup_pane

0x362f,	// (0x00031a66) popup_query_code_window_t1_ParamLimits

0x362f,	// (0x00031a66) popup_query_code_window_t1

0x4db5,	// (0x000331ec) popup_query_code_window_t2_ParamLimits

0x4db5,	// (0x000331ec) popup_query_code_window_t2

0x4df3,	// (0x0003322a) popup_query_code_window_t3_ParamLimits

0x4df3,	// (0x0003322a) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0003dca3) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0003dca3) popup_query_code_window_t

0x4e22,	// (0x00033259) query_popup_pane_ParamLimits

0x4e22,	// (0x00033259) query_popup_pane

0x35d8,	// (0x00031a0f) bg_popup_window_pane_cp15_ParamLimits

0x35d8,	// (0x00031a0f) bg_popup_window_pane_cp15

0x35f6,	// (0x00031a2d) indicator_popup_pane_cp1_ParamLimits

0x35f6,	// (0x00031a2d) indicator_popup_pane_cp1

0x3609,	// (0x00031a40) indicator_popup_pane_cp2_ParamLimits

0x3609,	// (0x00031a40) indicator_popup_pane_cp2

0x361c,	// (0x00031a53) popup_query_data_code_window_g1_ParamLimits

0x361c,	// (0x00031a53) popup_query_data_code_window_g1

0x362f,	// (0x00031a66) popup_query_data_code_window_t1_ParamLimits

0x362f,	// (0x00031a66) popup_query_data_code_window_t1

0x3641,	// (0x00031a78) popup_query_data_code_window_t2_ParamLimits

0x3641,	// (0x00031a78) popup_query_data_code_window_t2

0x3653,	// (0x00031a8a) popup_query_data_code_window_t3_ParamLimits

0x3653,	// (0x00031a8a) popup_query_data_code_window_t3

0x3669,	// (0x00031aa0) popup_query_data_code_window_t4_ParamLimits

0x3669,	// (0x00031aa0) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003da05) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003da05) popup_query_data_code_window_t

0x42be,	// (0x000326f5) list_single_midp_graphic_pane_g3

0x3681,	// (0x00031ab8) query_popup_data_pane_cp2_ParamLimits

0x3694,	// (0x00031acb) query_popup_pane_cp2_ParamLimits

0x3694,	// (0x00031acb) query_popup_pane_cp2

0x33a4,	// (0x000317db) bg_popup_window_pane_cp11

0x4d71,	// (0x000331a8) heading_pane_cp5

0x3722,	// (0x00031b59) listscroll_popup_info_pane

0x33a4,	// (0x000317db) input_focus_pane_cp3

0x36a7,	// (0x00031ade) query_popup_pane_t1

0x36b5,	// (0x00031aec) list_popup_info_pane_ParamLimits

0x36b5,	// (0x00031aec) list_popup_info_pane

0x36c4,	// (0x00031afb) listscroll_popup_info_pane_g1

0x36cc,	// (0x00031b03) scroll_pane_cp7

0x36d6,	// (0x00031b0d) popup_info_list_pane_t1_ParamLimits

0x36d6,	// (0x00031b0d) popup_info_list_pane_t1

0x36f0,	// (0x00031b27) popup_info_list_pane_t2_ParamLimits

0x36f0,	// (0x00031b27) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003da0e) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003da0e) popup_info_list_pane_t

0x33a4,	// (0x000317db) bg_popup_window_pane_cp12

0x5c66,	// (0x0003409d) find_popup_pane

0x3400,	// (0x00031837) bg_popup_window_pane_cp3

0x370a,	// (0x00031b41) heading_pane_cp3

0x3716,	// (0x00031b4d) listscroll_popup_graphic_pane

0x33a4,	// (0x000317db) bg_popup_window_pane_cp4

0x0b26,	// (0x0002ef5d) heading_pane_cp4

0x3722,	// (0x00031b59) listscroll_popup_colour_pane

0x372a,	// (0x00031b61) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x372a,	// (0x00031b61) cell_large_graphic_colour_none_popup_pane

0x0b2e,	// (0x0002ef65) grid_large_graphic_colour_popup_pane_ParamLimits

0x0b2e,	// (0x0002ef65) grid_large_graphic_colour_popup_pane

0x373e,	// (0x00031b75) listscroll_popup_colour_pane_g1_ParamLimits

0x373e,	// (0x00031b75) listscroll_popup_colour_pane_g1

0x3755,	// (0x00031b8c) listscroll_popup_colour_pane_g2_ParamLimits

0x3755,	// (0x00031b8c) listscroll_popup_colour_pane_g2

0x376c,	// (0x00031ba3) listscroll_popup_colour_pane_g3_ParamLimits

0x376c,	// (0x00031ba3) listscroll_popup_colour_pane_g3

0x0b52,	// (0x0002ef89) listscroll_popup_colour_pane_g4_ParamLimits

0x0b52,	// (0x0002ef89) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003da13) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003da13) listscroll_popup_colour_pane_g

0x377c,	// (0x00031bb3) scroll_pane_cp6_ParamLimits

0x377c,	// (0x00031bb3) scroll_pane_cp6

0x0b61,	// (0x0002ef98) cell_large_graphic_colour_popup_pane_ParamLimits

0x0b61,	// (0x0002ef98) cell_large_graphic_colour_popup_pane

0x378e,	// (0x00031bc5) cell_large_graphic_colour_none_popup_pane_t1

0x33a4,	// (0x000317db) grid_highlight_pane_cp5

0x379d,	// (0x00031bd4) cell_large_graphic_colour_popup_pane_g1

0x37a5,	// (0x00031bdc) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003da1c) cell_large_graphic_colour_popup_pane_g

0x37ad,	// (0x00031be4) cell_large_graphic_colour_popup_pane_g2_copy1

0x37b6,	// (0x00031bed) grid_highlight_pane_cp4

0x37be,	// (0x00031bf5) bg_popup_window_pane_cp8_ParamLimits

0x37be,	// (0x00031bf5) bg_popup_window_pane_cp8

0x37d9,	// (0x00031c10) popup_snote_single_text_window_g1_ParamLimits

0x37d9,	// (0x00031c10) popup_snote_single_text_window_g1

0x37eb,	// (0x00031c22) popup_snote_single_text_window_t1_ParamLimits

0x37eb,	// (0x00031c22) popup_snote_single_text_window_t1

0x37fe,	// (0x00031c35) popup_snote_single_text_window_t2_ParamLimits

0x37fe,	// (0x00031c35) popup_snote_single_text_window_t2

0x3811,	// (0x00031c48) popup_snote_single_text_window_t3_ParamLimits

0x3811,	// (0x00031c48) popup_snote_single_text_window_t3

0x384a,	// (0x00031c81) popup_snote_single_text_window_t4_ParamLimits

0x384a,	// (0x00031c81) popup_snote_single_text_window_t4

0x387e,	// (0x00031cb5) popup_snote_single_text_window_t5_ParamLimits

0x387e,	// (0x00031cb5) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003da21) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003da21) popup_snote_single_text_window_t

0x38ad,	// (0x00031ce4) bg_popup_window_pane_cp9_ParamLimits

0x38ad,	// (0x00031ce4) bg_popup_window_pane_cp9

0x37d9,	// (0x00031c10) popup_snote_single_graphic_window_g1_ParamLimits

0x37d9,	// (0x00031c10) popup_snote_single_graphic_window_g1

0x38bb,	// (0x00031cf2) popup_snote_single_graphic_window_g2_ParamLimits

0x38bb,	// (0x00031cf2) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003da2c) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003da2c) popup_snote_single_graphic_window_g

0x38c7,	// (0x00031cfe) popup_snote_single_graphic_window_t1_ParamLimits

0x38c7,	// (0x00031cfe) popup_snote_single_graphic_window_t1

0x38da,	// (0x00031d11) popup_snote_single_graphic_window_t2_ParamLimits

0x38da,	// (0x00031d11) popup_snote_single_graphic_window_t2

0x38ed,	// (0x00031d24) popup_snote_single_graphic_window_t3_ParamLimits

0x38ed,	// (0x00031d24) popup_snote_single_graphic_window_t3

0x3926,	// (0x00031d5d) popup_snote_single_graphic_window_t4_ParamLimits

0x3926,	// (0x00031d5d) popup_snote_single_graphic_window_t4

0x395a,	// (0x00031d91) popup_snote_single_graphic_window_t5_ParamLimits

0x395a,	// (0x00031d91) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003da31) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003da31) popup_snote_single_graphic_window_t

0x5bea,	// (0x00034021) grid_graphic_popup_pane_ParamLimits

0x5bea,	// (0x00034021) grid_graphic_popup_pane

0x5c16,	// (0x0003404d) listscroll_popup_graphic_pane_g1_ParamLimits

0x5c16,	// (0x0003404d) listscroll_popup_graphic_pane_g1

0x1e01,	// (0x00030238) listscroll_popup_graphic_pane_g2_ParamLimits

0x1e01,	// (0x00030238) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0003de20) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0003de20) listscroll_popup_graphic_pane_g

0x595a,	// (0x00033d91) scroll_pane_cp5

0x1dc4,	// (0x000301fb) cell_graphic_popup_pane_ParamLimits

0x1dc4,	// (0x000301fb) cell_graphic_popup_pane

0x5bb5,	// (0x00033fec) cell_graphic_popup_pane_g1

0x5bbd,	// (0x00033ff4) cell_graphic_popup_pane_g2

0x37ad,	// (0x00031be4) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0003de19) cell_graphic_popup_pane_g

0x5bc6,	// (0x00033ffd) cell_graphic_popup_pane_t2

0x37b6,	// (0x00031bed) grid_highlight_pane_cp3

0x399b,	// (0x00031dd2) list_gen_pane_ParamLimits

0x399b,	// (0x00031dd2) list_gen_pane

0x39c3,	// (0x00031dfa) scroll_pane

0x1d7f,	// (0x000301b6) bg_list_pane_g1_ParamLimits

0x1d7f,	// (0x000301b6) bg_list_pane_g1

0x5b64,	// (0x00033f9b) bg_list_pane_g2_ParamLimits

0x5b64,	// (0x00033f9b) bg_list_pane_g2

0x5b77,	// (0x00033fae) bg_list_pane_g3_ParamLimits

0x5b77,	// (0x00033fae) bg_list_pane_g3

0x5b89,	// (0x00033fc0) bg_list_pane_g4_ParamLimits

0x5b89,	// (0x00033fc0) bg_list_pane_g4

0x1d9a,	// (0x000301d1) bg_list_pane_g5_ParamLimits

0x1d9a,	// (0x000301d1) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0003de0e) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0003de0e) bg_list_pane_g

0x1d32,	// (0x00030169) list_double2_graphic_large_graphic_pane_ParamLimits

0x1d32,	// (0x00030169) list_double2_graphic_large_graphic_pane

0x1d32,	// (0x00030169) list_double2_graphic_pane_ParamLimits

0x1d32,	// (0x00030169) list_double2_graphic_pane

0x1d32,	// (0x00030169) list_double2_large_graphic_pane_ParamLimits

0x1d32,	// (0x00030169) list_double2_large_graphic_pane

0x1d32,	// (0x00030169) list_double2_pane_ParamLimits

0x1d32,	// (0x00030169) list_double2_pane

0x1d32,	// (0x00030169) list_double_graphic_heading_pane_ParamLimits

0x1d32,	// (0x00030169) list_double_graphic_heading_pane

0x1d32,	// (0x00030169) list_double_graphic_pane_ParamLimits

0x1d32,	// (0x00030169) list_double_graphic_pane

0x1d32,	// (0x00030169) list_double_heading_pane_ParamLimits

0x1d32,	// (0x00030169) list_double_heading_pane

0x1d32,	// (0x00030169) list_double_large_graphic_pane_ParamLimits

0x1d32,	// (0x00030169) list_double_large_graphic_pane

0x1d32,	// (0x00030169) list_double_number_pane_ParamLimits

0x1d32,	// (0x00030169) list_double_number_pane

0x1d32,	// (0x00030169) list_double_pane_ParamLimits

0x1d32,	// (0x00030169) list_double_pane

0x1d32,	// (0x00030169) list_double_time_pane_ParamLimits

0x1d32,	// (0x00030169) list_double_time_pane

0x1d32,	// (0x00030169) list_setting_number_pane_ParamLimits

0x1d32,	// (0x00030169) list_setting_number_pane

0x1d32,	// (0x00030169) list_setting_pane_ParamLimits

0x1d32,	// (0x00030169) list_setting_pane

0x1d45,	// (0x0003017c) list_single_2graphic_pane_ParamLimits

0x1d45,	// (0x0003017c) list_single_2graphic_pane

0x1d45,	// (0x0003017c) list_single_graphic_heading_pane_ParamLimits

0x1d45,	// (0x0003017c) list_single_graphic_heading_pane

0x1d45,	// (0x0003017c) list_single_graphic_pane_ParamLimits

0x1d45,	// (0x0003017c) list_single_graphic_pane

0x1d45,	// (0x0003017c) list_single_heading_pane_ParamLimits

0x1d45,	// (0x0003017c) list_single_heading_pane

0x1d45,	// (0x0003017c) list_single_large_graphic_pane_ParamLimits

0x1d45,	// (0x0003017c) list_single_large_graphic_pane

0x1d45,	// (0x0003017c) list_single_number_heading_pane_ParamLimits

0x1d45,	// (0x0003017c) list_single_number_heading_pane

0x1d45,	// (0x0003017c) list_single_number_pane_ParamLimits

0x1d45,	// (0x0003017c) list_single_number_pane

0x1d45,	// (0x0003017c) list_single_pane_ParamLimits

0x1d45,	// (0x0003017c) list_single_pane

0x33a4,	// (0x000317db) list_highlight_pane_cp1

0x82c3,	// (0x000366fa) list_single_pane_g1_ParamLimits

0x82c3,	// (0x000366fa) list_single_pane_g1

0x82cf,	// (0x00036706) list_single_pane_g2_ParamLimits

0x82cf,	// (0x00036706) list_single_pane_g2

0x0001,

0xf616,	// (0x0003da4d) list_single_pane_g_ParamLimits

0xf616,	// (0x0003da4d) list_single_pane_g

0x76d7,	// (0x00035b0e) list_single_pane_t1_ParamLimits

0x76d7,	// (0x00035b0e) list_single_pane_t1

0x82c3,	// (0x000366fa) list_single_number_pane_g1_ParamLimits

0x82c3,	// (0x000366fa) list_single_number_pane_g1

0x82cf,	// (0x00036706) list_single_number_pane_g2_ParamLimits

0x82cf,	// (0x00036706) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0003da4d) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0003da4d) list_single_number_pane_g

0x7556,	// (0x0003598d) list_single_number_pane_t1_ParamLimits

0x7556,	// (0x0003598d) list_single_number_pane_t1

0xe9d9,	// (0x0003ce10) list_single_number_pane_t2_ParamLimits

0xe9d9,	// (0x0003ce10) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0003ddcf) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0003ddcf) list_single_number_pane_t

0xe44b,	// (0x0003c882) list_single_graphic_pane_g1_ParamLimits

0xe44b,	// (0x0003c882) list_single_graphic_pane_g1

0x82c3,	// (0x000366fa) list_single_graphic_pane_g2_ParamLimits

0x82c3,	// (0x000366fa) list_single_graphic_pane_g2

0x82cf,	// (0x00036706) list_single_graphic_pane_g3_ParamLimits

0x82cf,	// (0x00036706) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003da3c) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003da3c) list_single_graphic_pane_g

0xe457,	// (0x0003c88e) list_single_graphic_pane_t1_ParamLimits

0xe457,	// (0x0003c88e) list_single_graphic_pane_t1

0xe46d,	// (0x0003c8a4) list_single_heading_pane_g1_ParamLimits

0xe46d,	// (0x0003c8a4) list_single_heading_pane_g1

0x82cf,	// (0x00036706) list_single_heading_pane_g2_ParamLimits

0x82cf,	// (0x00036706) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003da43) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003da43) list_single_heading_pane_g

0xe480,	// (0x0003c8b7) list_single_heading_pane_t1_ParamLimits

0xe480,	// (0x0003c8b7) list_single_heading_pane_t1

0xe496,	// (0x0003c8cd) list_single_heading_pane_t2_ParamLimits

0xe496,	// (0x0003c8cd) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003da48) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003da48) list_single_heading_pane_t

0x82c3,	// (0x000366fa) list_single_number_heading_pane_g1_ParamLimits

0x82c3,	// (0x000366fa) list_single_number_heading_pane_g1

0x82cf,	// (0x00036706) list_single_number_heading_pane_g2_ParamLimits

0x82cf,	// (0x00036706) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0003da4d) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0003da4d) list_single_number_heading_pane_g

0x76ed,	// (0x00035b24) list_single_number_heading_pane_t1_ParamLimits

0x76ed,	// (0x00035b24) list_single_number_heading_pane_t1

0xe4a8,	// (0x0003c8df) list_single_number_heading_pane_t2_ParamLimits

0xe4a8,	// (0x0003c8df) list_single_number_heading_pane_t2

0x76b1,	// (0x00035ae8) list_single_number_heading_pane_t3_ParamLimits

0x76b1,	// (0x00035ae8) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0003da52) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0003da52) list_single_number_heading_pane_t

0xe4ba,	// (0x0003c8f1) list_single_graphic_heading_pane_g1_ParamLimits

0xe4ba,	// (0x0003c8f1) list_single_graphic_heading_pane_g1

0xeced,	// (0x0003d124) list_single_graphic_heading_pane_g4_ParamLimits

0xeced,	// (0x0003d124) list_single_graphic_heading_pane_g4

0x82cf,	// (0x00036706) list_single_graphic_heading_pane_g5_ParamLimits

0x82cf,	// (0x00036706) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0003da59) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003da59) list_single_graphic_heading_pane_g

0x76ed,	// (0x00035b24) list_single_graphic_heading_pane_t1_ParamLimits

0x76ed,	// (0x00035b24) list_single_graphic_heading_pane_t1

0xe4ce,	// (0x0003c905) list_single_graphic_heading_pane_t2_ParamLimits

0xe4ce,	// (0x0003c905) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003da60) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003da60) list_single_graphic_heading_pane_t

0x9088,	// (0x000374bf) list_single_large_graphic_pane_g1_ParamLimits

0x9088,	// (0x000374bf) list_single_large_graphic_pane_g1

0x82c3,	// (0x000366fa) list_single_large_graphic_pane_g2_ParamLimits

0x82c3,	// (0x000366fa) list_single_large_graphic_pane_g2

0x82cf,	// (0x00036706) list_single_large_graphic_pane_g3_ParamLimits

0x82cf,	// (0x00036706) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0003da65) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0003da65) list_single_large_graphic_pane_g

0x4ee3,	// (0x0003331a) wait_border_pane_g2_copy1

0xecfe,	// (0x0003d135) list_single_large_graphic_pane_g4_cp2

0x76ed,	// (0x00035b24) list_single_large_graphic_pane_t1_ParamLimits

0x76ed,	// (0x00035b24) list_single_large_graphic_pane_t1

0x8316,	// (0x0003674d) list_double_pane_g1_ParamLimits

0x8316,	// (0x0003674d) list_double_pane_g1

0x8322,	// (0x00036759) list_double_pane_g2_ParamLimits

0x8322,	// (0x00036759) list_double_pane_g2

0x0001,

0xf635,	// (0x0003da6c) list_double_pane_g_ParamLimits

0xf635,	// (0x0003da6c) list_double_pane_g

0xe4e6,	// (0x0003c91d) list_double_pane_t1_ParamLimits

0xe4e6,	// (0x0003c91d) list_double_pane_t1

0xe4fc,	// (0x0003c933) list_double_pane_t2_ParamLimits

0xe4fc,	// (0x0003c933) list_double_pane_t2

0x0001,

0xf63a,	// (0x0003da71) list_double_pane_t_ParamLimits

0xf63a,	// (0x0003da71) list_double_pane_t

0xe50e,	// (0x0003c945) list_double2_pane_g1_ParamLimits

0xe50e,	// (0x0003c945) list_double2_pane_g1

0x70f6,	// (0x0003552d) list_double2_pane_g2_ParamLimits

0x70f6,	// (0x0003552d) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0003da76) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0003da76) list_double2_pane_g

0xe51f,	// (0x0003c956) list_double2_pane_t1_ParamLimits

0xe51f,	// (0x0003c956) list_double2_pane_t1

0xe535,	// (0x0003c96c) list_double2_pane_t2_ParamLimits

0xe535,	// (0x0003c96c) list_double2_pane_t2

0x0001,

0xf644,	// (0x0003da7b) list_double2_pane_t_ParamLimits

0xf644,	// (0x0003da7b) list_double2_pane_t

0x8316,	// (0x0003674d) list_double_number_pane_g1_ParamLimits

0x8316,	// (0x0003674d) list_double_number_pane_g1

0x8322,	// (0x00036759) list_double_number_pane_g2_ParamLimits

0x8322,	// (0x00036759) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0003da6c) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0003da6c) list_double_number_pane_g

0xe547,	// (0x0003c97e) list_double_number_pane_t1_ParamLimits

0xe547,	// (0x0003c97e) list_double_number_pane_t1

0x6f69,	// (0x000353a0) list_double_number_pane_t2_ParamLimits

0x6f69,	// (0x000353a0) list_double_number_pane_t2

0xe559,	// (0x0003c990) list_double_number_pane_t3_ParamLimits

0xe559,	// (0x0003c990) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0003da80) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0003da80) list_double_number_pane_t

0x6f5d,	// (0x00035394) list_double_graphic_pane_g1_ParamLimits

0x6f5d,	// (0x00035394) list_double_graphic_pane_g1

0xed06,	// (0x0003d13d) list_double_graphic_pane_g2_ParamLimits

0xed06,	// (0x0003d13d) list_double_graphic_pane_g2

0xed15,	// (0x0003d14c) list_double_graphic_pane_g3_ParamLimits

0xed15,	// (0x0003d14c) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0003da87) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0003da87) list_double_graphic_pane_g

0xe56b,	// (0x0003c9a2) list_double_graphic_pane_t1_ParamLimits

0xe56b,	// (0x0003c9a2) list_double_graphic_pane_t1

0xe581,	// (0x0003c9b8) list_double_graphic_pane_t2_ParamLimits

0xe581,	// (0x0003c9b8) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0003da90) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0003da90) list_double_graphic_pane_t

0xe593,	// (0x0003c9ca) list_double2_graphic_pane_g1_ParamLimits

0xe593,	// (0x0003c9ca) list_double2_graphic_pane_g1

0x3a6a,	// (0x00031ea1) list_double2_graphic_pane_g2_ParamLimits

0x3a6a,	// (0x00031ea1) list_double2_graphic_pane_g2

0xed2d,	// (0x0003d164) list_double2_graphic_pane_g3_ParamLimits

0xed2d,	// (0x0003d164) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0003da95) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0003da95) list_double2_graphic_pane_g

0xe59f,	// (0x0003c9d6) list_double2_graphic_pane_t1_ParamLimits

0xe59f,	// (0x0003c9d6) list_double2_graphic_pane_t1

0xe5b5,	// (0x0003c9ec) list_double2_graphic_pane_t2_ParamLimits

0xe5b5,	// (0x0003c9ec) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0003da9c) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0003da9c) list_double2_graphic_pane_t

0xe5c7,	// (0x0003c9fe) list_double_large_graphic_pane_g1_ParamLimits

0xe5c7,	// (0x0003c9fe) list_double_large_graphic_pane_g1

0xe5e6,	// (0x0003ca1d) list_double_large_graphic_pane_g2_ParamLimits

0xe5e6,	// (0x0003ca1d) list_double_large_graphic_pane_g2

0x8322,	// (0x00036759) list_double_large_graphic_pane_g3_ParamLimits

0x8322,	// (0x00036759) list_double_large_graphic_pane_g3

0xe5fc,	// (0x0003ca33) list_double_large_graphic_pane_g4_ParamLimits

0xe5fc,	// (0x0003ca33) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0003daa1) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0003daa1) list_double_large_graphic_pane_g

0xe60f,	// (0x0003ca46) list_double_large_graphic_pane_t1_ParamLimits

0xe60f,	// (0x0003ca46) list_double_large_graphic_pane_t1

0xe628,	// (0x0003ca5f) list_double_large_graphic_pane_t2_ParamLimits

0xe628,	// (0x0003ca5f) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0003daac) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0003daac) list_double_large_graphic_pane_t

0xed39,	// (0x0003d170) list_double2_large_graphic_pane_g1_ParamLimits

0xed39,	// (0x0003d170) list_double2_large_graphic_pane_g1

0xed45,	// (0x0003d17c) list_double2_large_graphic_pane_g2_ParamLimits

0xed45,	// (0x0003d17c) list_double2_large_graphic_pane_g2

0xed2d,	// (0x0003d164) list_double2_large_graphic_pane_g3_ParamLimits

0xed2d,	// (0x0003d164) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0003dab1) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0003dab1) list_double2_large_graphic_pane_g

0xe63a,	// (0x0003ca71) list_double2_large_graphic_pane_t1_ParamLimits

0xe63a,	// (0x0003ca71) list_double2_large_graphic_pane_t1

0xe650,	// (0x0003ca87) list_double2_large_graphic_pane_t2_ParamLimits

0xe650,	// (0x0003ca87) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0003dab8) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0003dab8) list_double2_large_graphic_pane_t

0xe662,	// (0x0003ca99) list_double_heading_pane_g1_ParamLimits

0xe662,	// (0x0003ca99) list_double_heading_pane_g1

0xe673,	// (0x0003caaa) list_double_heading_pane_g2_ParamLimits

0xe673,	// (0x0003caaa) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0003dabd) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0003dabd) list_double_heading_pane_g

0xe67f,	// (0x0003cab6) list_double_heading_pane_t1_ParamLimits

0xe67f,	// (0x0003cab6) list_double_heading_pane_t1

0xe535,	// (0x0003c96c) list_double_heading_pane_t2_ParamLimits

0xe535,	// (0x0003c96c) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0003dac2) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0003dac2) list_double_heading_pane_t

0x6f1d,	// (0x00035354) list_double_graphic_heading_pane_g1_ParamLimits

0x6f1d,	// (0x00035354) list_double_graphic_heading_pane_g1

0xe662,	// (0x0003ca99) list_double_graphic_heading_pane_g2_ParamLimits

0xe662,	// (0x0003ca99) list_double_graphic_heading_pane_g2

0xe673,	// (0x0003caaa) list_double_graphic_heading_pane_g3_ParamLimits

0xe673,	// (0x0003caaa) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0003dac7) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0003dac7) list_double_graphic_heading_pane_g

0xe695,	// (0x0003cacc) list_double_graphic_heading_pane_t1_ParamLimits

0xe695,	// (0x0003cacc) list_double_graphic_heading_pane_t1

0xe5b5,	// (0x0003c9ec) list_double_graphic_heading_pane_t2_ParamLimits

0xe5b5,	// (0x0003c9ec) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0003dace) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0003dace) list_double_graphic_heading_pane_t

0xe6ab,	// (0x0003cae2) list_double_time_pane_g1_ParamLimits

0xe6ab,	// (0x0003cae2) list_double_time_pane_g1

0x6eaf,	// (0x000352e6) list_double_time_pane_g2_ParamLimits

0x6eaf,	// (0x000352e6) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0003dad3) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0003dad3) list_double_time_pane_g

0xe6bc,	// (0x0003caf3) list_double_time_pane_t1_ParamLimits

0xe6bc,	// (0x0003caf3) list_double_time_pane_t1

0xe6d2,	// (0x0003cb09) list_double_time_pane_t2_ParamLimits

0xe6d2,	// (0x0003cb09) list_double_time_pane_t2

0xe6e4,	// (0x0003cb1b) list_double_time_pane_t3_ParamLimits

0xe6e4,	// (0x0003cb1b) list_double_time_pane_t3

0xe6f6,	// (0x0003cb2d) list_double_time_pane_t4_ParamLimits

0xe6f6,	// (0x0003cb2d) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0003dad8) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0003dad8) list_double_time_pane_t

0x70ea,	// (0x00035521) list_setting_pane_g1_ParamLimits

0x70ea,	// (0x00035521) list_setting_pane_g1

0x70f6,	// (0x0003552d) list_setting_pane_g2_ParamLimits

0x70f6,	// (0x0003552d) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0003dae1) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0003dae1) list_setting_pane_g

0xe708,	// (0x0003cb3f) list_setting_pane_t1_ParamLimits

0xe708,	// (0x0003cb3f) list_setting_pane_t1

0xe722,	// (0x0003cb59) list_setting_pane_t2_ParamLimits

0xe722,	// (0x0003cb59) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0003dae6) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0003dae6) list_setting_pane_t

0xe75f,	// (0x0003cb96) set_value_pane_cp_ParamLimits

0xe75f,	// (0x0003cb96) set_value_pane_cp

0x7165,	// (0x0003559c) list_setting_number_pane_g1_ParamLimits

0x7165,	// (0x0003559c) list_setting_number_pane_g1

0x7171,	// (0x000355a8) list_setting_number_pane_g2_ParamLimits

0x7171,	// (0x000355a8) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0003daed) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0003daed) list_setting_number_pane_g

0xe76b,	// (0x0003cba2) list_setting_number_pane_t1_ParamLimits

0xe76b,	// (0x0003cba2) list_setting_number_pane_t1

0xe784,	// (0x0003cbbb) list_setting_number_pane_t2_ParamLimits

0xe784,	// (0x0003cbbb) list_setting_number_pane_t2

0xe79e,	// (0x0003cbd5) list_setting_number_pane_t3_ParamLimits

0xe79e,	// (0x0003cbd5) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0003daf2) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0003daf2) list_setting_number_pane_t

0xe75f,	// (0x0003cb96) set_value_pane_ParamLimits

0xe75f,	// (0x0003cb96) set_value_pane

0x39f7,	// (0x00031e2e) bg_set_opt_pane_ParamLimits

0x39f7,	// (0x00031e2e) bg_set_opt_pane

0x71f3,	// (0x0003562a) set_value_pane_t1

0x3a18,	// (0x00031e4f) slider_set_pane_cp3

0x3a21,	// (0x00031e58) volume_small_pane_cp

0x3a2a,	// (0x00031e61) list_form_gen_pane

0x3a33,	// (0x00031e6a) scroll_pane_cp8

0xe7e1,	// (0x0003cc18) form_field_data_pane_ParamLimits

0xe7e1,	// (0x0003cc18) form_field_data_pane

0xe7f8,	// (0x0003cc2f) form_field_data_wide_pane_ParamLimits

0xe7f8,	// (0x0003cc2f) form_field_data_wide_pane

0xe818,	// (0x0003cc4f) form_field_popup_pane_ParamLimits

0xe818,	// (0x0003cc4f) form_field_popup_pane

0xe830,	// (0x0003cc67) form_field_popup_wide_pane_ParamLimits

0xe830,	// (0x0003cc67) form_field_popup_wide_pane

0x7285,	// (0x000356bc) form_field_slider_pane_ParamLimits

0x7285,	// (0x000356bc) form_field_slider_pane

0x7298,	// (0x000356cf) form_field_slider_wide_pane_ParamLimits

0x7298,	// (0x000356cf) form_field_slider_wide_pane

0x3a44,	// (0x00031e7b) data_form_pane

0xe857,	// (0x0003cc8e) form_field_data_pane_t1

0x3a50,	// (0x00031e87) input_focus_pane

0x3a5e,	// (0x00031e95) data_form_wide_pane

0x72db,	// (0x00035712) form_field_data_wide_pane_t1

0x37cb,	// (0x00031c02) input_focus_pane_cp6

0xe871,	// (0x0003cca8) form_field_popup_pane_t1

0x3a50,	// (0x00031e87) input_focus_pane_cp7

0x3a8a,	// (0x00031ec1) list_form_pane

0x731f,	// (0x00035756) form_field_popup_wide_pane_t1

0x3a50,	// (0x00031e87) input_focus_pane_cp8

0x3a96,	// (0x00031ecd) list_form_wide_pane

0xe893,	// (0x0003ccca) form_field_slider_pane_t1_ParamLimits

0xe893,	// (0x0003ccca) form_field_slider_pane_t1

0xe8ab,	// (0x0003cce2) form_field_slider_pane_t2_ParamLimits

0xe8ab,	// (0x0003cce2) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0003db02) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0003db02) form_field_slider_pane_t

0x33f2,	// (0x00031829) input_focus_pane_cp9_ParamLimits

0x33f2,	// (0x00031829) input_focus_pane_cp9

0xe8c0,	// (0x0003ccf7) slider_cont_pane_ParamLimits

0xe8c0,	// (0x0003ccf7) slider_cont_pane

0x3aa5,	// (0x00031edc) form_field_slider_wide_pane_t1_ParamLimits

0x3aa5,	// (0x00031edc) form_field_slider_wide_pane_t1

0x737d,	// (0x000357b4) form_field_slider_wide_pane_t2_ParamLimits

0x737d,	// (0x000357b4) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0003db07) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0003db07) form_field_slider_wide_pane_t

0x33f2,	// (0x00031829) input_focus_pane_cp10_ParamLimits

0x33f2,	// (0x00031829) input_focus_pane_cp10

0xe8d4,	// (0x0003cd0b) slider_cont_pane_cp1_ParamLimits

0xe8d4,	// (0x0003cd0b) slider_cont_pane_cp1

0xe8e8,	// (0x0003cd1f) slider_form_pane_cp

0x3ab7,	// (0x00031eee) input_focus_pane_g1

0x3abf,	// (0x00031ef6) input_focus_pane_g2

0x3ac7,	// (0x00031efe) input_focus_pane_g3

0x3acf,	// (0x00031f06) input_focus_pane_g4

0x3ad7,	// (0x00031f0e) input_focus_pane_g5

0x3adf,	// (0x00031f16) input_focus_pane_g6

0x3ae7,	// (0x00031f1e) input_focus_pane_g7

0x3aef,	// (0x00031f26) input_focus_pane_g8

0x3af7,	// (0x00031f2e) input_focus_pane_g9

0x339a,	// (0x000317d1) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0003db0c) input_focus_pane_g

0x4eec,	// (0x00033323) wait_border_pane_g3_copy1

0xe8f0,	// (0x0003cd27) data_form_pane_t1

0x339a,	// (0x000317d1) wait_anim_pane_g1_copy1

0xe9eb,	// (0x0003ce22) data_form_wide_pane_t1

0xe90a,	// (0x0003cd41) list_form_graphic_pane_cp_ParamLimits

0xe90a,	// (0x0003cd41) list_form_graphic_pane_cp

0x5b0d,	// (0x00033f44) slider_form_pane_g1

0x5b16,	// (0x00033f4d) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0003ddff) slider_form_pane_g

0xe90a,	// (0x0003cd41) list_form_graphic_pane_ParamLimits

0xe90a,	// (0x0003cd41) list_form_graphic_pane

0x73f7,	// (0x0003582e) list_form_graphic_pane_g1

0x73ff,	// (0x00035836) list_form_graphic_pane_t1_ParamLimits

0x73ff,	// (0x00035836) list_form_graphic_pane_t1

0x3400,	// (0x00031837) list_highlight_pane_cp5_ParamLimits

0x3400,	// (0x00031837) list_highlight_pane_cp5

0xe91d,	// (0x0003cd54) find_pane_g1

0x3aff,	// (0x00031f36) input_find_pane

0xe926,	// (0x0003cd5d) input_find_pane_g1_ParamLimits

0xe926,	// (0x0003cd5d) input_find_pane_g1

0xe932,	// (0x0003cd69) input_find_pane_t1_ParamLimits

0xe932,	// (0x0003cd69) input_find_pane_t1

0xe947,	// (0x0003cd7e) input_find_pane_t2_ParamLimits

0xe947,	// (0x0003cd7e) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0003db21) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0003db21) input_find_pane_t

0x3b08,	// (0x00031f3f) input_focus_pane_cp5_ParamLimits

0x3b08,	// (0x00031f3f) input_focus_pane_cp5

0x0b96,	// (0x0002efcd) bg_popup_window_pane_cp2_ParamLimits

0x0b96,	// (0x0002efcd) bg_popup_window_pane_cp2

0x0ba3,	// (0x0002efda) listscroll_menu_pane_ParamLimits

0x0ba3,	// (0x0002efda) listscroll_menu_pane

0x0baf,	// (0x0002efe6) popup_submenu_window_ParamLimits

0x0baf,	// (0x0002efe6) popup_submenu_window

0x3b16,	// (0x00031f4d) find_popup_pane_g1

0x3b1e,	// (0x00031f55) input_popup_find_pane_cp

0x3b08,	// (0x00031f3f) input_focus_pane_cp4_ParamLimits

0x3b08,	// (0x00031f3f) input_focus_pane_cp4

0x3b28,	// (0x00031f5f) input_popup_find_pane_t1_ParamLimits

0x3b28,	// (0x00031f5f) input_popup_find_pane_t1

0x33a4,	// (0x000317db) bg_popup_sub_pane_cp

0x3b56,	// (0x00031f8d) listscroll_popup_sub_pane

0x3b5e,	// (0x00031f95) list_submenu_pane_ParamLimits

0x3b5e,	// (0x00031f95) list_submenu_pane

0x3b6f,	// (0x00031fa6) scroll_pane_cp4

0x3b77,	// (0x00031fae) list_single_popup_submenu_pane_ParamLimits

0x3b77,	// (0x00031fae) list_single_popup_submenu_pane

0x3b8a,	// (0x00031fc1) list_single_popup_submenu_pane_g1

0x3b92,	// (0x00031fc9) list_single_popup_submenu_pane_t1_ParamLimits

0x3b92,	// (0x00031fc9) list_single_popup_submenu_pane_t1

0x33f2,	// (0x00031829) bg_active_tab_pane_cp1_ParamLimits

0x33f2,	// (0x00031829) bg_active_tab_pane_cp1

0x0be1,	// (0x0002f018) tabs_2_active_pane_g1

0x0be9,	// (0x0002f020) tabs_2_active_pane_t1

0x33f2,	// (0x00031829) bg_passive_tab_pane_cp1_ParamLimits

0x33f2,	// (0x00031829) bg_passive_tab_pane_cp1

0x0be1,	// (0x0002f018) tabs_2_passive_pane_g1

0x0be9,	// (0x0002f020) tabs_2_passive_pane_t1

0x3400,	// (0x00031837) bg_active_tab_pane_cp4

0x0bfb,	// (0x0002f032) tabs_2_long_active_pane_t1

0x3ba7,	// (0x00031fde) bg_passive_tab_pane_cp4

0x8bad,	// (0x00036fe4) list_single_midp_graphic_pane_g4_ParamLimits

0x3400,	// (0x00031837) bg_active_tab_pane_cp5

0x0c0e,	// (0x0002f045) tabs_3_long_active_pane_t1

0x3ba7,	// (0x00031fde) bg_passive_tab_pane_cp5

0x8bad,	// (0x00036fe4) list_single_midp_graphic_pane_g4

0x3400,	// (0x00031837) bg_popup_window_pane_cp13_ParamLimits

0x3400,	// (0x00031837) bg_popup_window_pane_cp13

0x3bbc,	// (0x00031ff3) listscroll_popup_fast_pane_ParamLimits

0x3bbc,	// (0x00031ff3) listscroll_popup_fast_pane

0x3bcb,	// (0x00032002) grid_popup_fast_pane_ParamLimits

0x3bcb,	// (0x00032002) grid_popup_fast_pane

0x3bdd,	// (0x00032014) scroll_pane_cp9_ParamLimits

0x3bdd,	// (0x00032014) scroll_pane_cp9

0xb7bd,	// (0x00039bf4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xb7bd,	// (0x00039bf4) list_single_graphic_hl_pane_t1_cp2

0x3c01,	// (0x00032038) input_focus_pane_cp20_ParamLimits

0x3c01,	// (0x00032038) input_focus_pane_cp20

0x3c0f,	// (0x00032046) query_popup_data_pane_t1_ParamLimits

0x3c0f,	// (0x00032046) query_popup_data_pane_t1

0x3c22,	// (0x00032059) query_popup_data_pane_t2_ParamLimits

0x3c22,	// (0x00032059) query_popup_data_pane_t2

0x3c68,	// (0x0003209f) query_popup_data_pane_t3_ParamLimits

0x3c68,	// (0x0003209f) query_popup_data_pane_t3

0x3ca9,	// (0x000320e0) query_popup_data_pane_t4_ParamLimits

0x3ca9,	// (0x000320e0) query_popup_data_pane_t4

0x3ce5,	// (0x0003211c) query_popup_data_pane_t5_ParamLimits

0x3ce5,	// (0x0003211c) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0003db26) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0003db26) query_popup_data_pane_t

0x3ab7,	// (0x00031eee) bg_set_opt_pane_g1

0x3abf,	// (0x00031ef6) bg_set_opt_pane_g2

0x3ac7,	// (0x00031efe) bg_set_opt_pane_g3

0x3acf,	// (0x00031f06) bg_set_opt_pane_g4

0x3ad7,	// (0x00031f0e) bg_set_opt_pane_g5

0x3adf,	// (0x00031f16) bg_set_opt_pane_g6

0x3ae7,	// (0x00031f1e) bg_set_opt_pane_g7

0x3aef,	// (0x00031f26) bg_set_opt_pane_g8

0x3af7,	// (0x00031f2e) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0003db31) bg_set_opt_pane_g

0x87ff,	// (0x00036c36) control_top_pane_stacon_ParamLimits

0x87ff,	// (0x00036c36) control_top_pane_stacon

0x8852,	// (0x00036c89) signal_pane_stacon_ParamLimits

0x8852,	// (0x00036c89) signal_pane_stacon

0x4144,	// (0x0003257b) stacon_top_pane_g1_ParamLimits

0x4144,	// (0x0003257b) stacon_top_pane_g1

0x8877,	// (0x00036cae) title_pane_stacon_ParamLimits

0x8877,	// (0x00036cae) title_pane_stacon

0x88a1,	// (0x00036cd8) uni_indicator_pane_stacon_ParamLimits

0x88a1,	// (0x00036cd8) uni_indicator_pane_stacon

0x88b6,	// (0x00036ced) battery_pane_stacon_ParamLimits

0x88b6,	// (0x00036ced) battery_pane_stacon

0x88fa,	// (0x00036d31) control_bottom_pane_stacon_ParamLimits

0x88fa,	// (0x00036d31) control_bottom_pane_stacon

0x891d,	// (0x00036d54) navi_pane_stacon_ParamLimits

0x891d,	// (0x00036d54) navi_pane_stacon

0x4166,	// (0x0003259d) stacon_bottom_pane_g1_ParamLimits

0x4166,	// (0x0003259d) stacon_bottom_pane_g1

0x840e,	// (0x00036845) aid_levels_signal_lsc_ParamLimits

0x840e,	// (0x00036845) aid_levels_signal_lsc

0x8425,	// (0x0003685c) signal_pane_stacon_g1_ParamLimits

0x8425,	// (0x0003685c) signal_pane_stacon_g1

0x8439,	// (0x00036870) signal_pane_stacon_g2_ParamLimits

0x8439,	// (0x00036870) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0003db44) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003db44) signal_pane_stacon_g

0x846e,	// (0x000368a5) title_pane_stacon_t1_ParamLimits

0x846e,	// (0x000368a5) title_pane_stacon_t1

0x3d29,	// (0x00032160) uni_indicator_pane_stacon_g1

0x3d47,	// (0x0003217e) uni_indicator_pane_stacon_g2

0x3d33,	// (0x0003216a) uni_indicator_pane_stacon_g3

0x3d3d,	// (0x00032174) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0003db50) uni_indicator_pane_stacon_g

0x8493,	// (0x000368ca) control_top_pane_stacon_g1

0x849b,	// (0x000368d2) control_top_pane_stacon_t1_ParamLimits

0x849b,	// (0x000368d2) control_top_pane_stacon_t1

0x84d2,	// (0x00036909) aid_levels_battery_lsc_ParamLimits

0x84d2,	// (0x00036909) aid_levels_battery_lsc

0x84ea,	// (0x00036921) battery_pane_stacon_g1_ParamLimits

0x84ea,	// (0x00036921) battery_pane_stacon_g1

0x84fd,	// (0x00036934) battery_pane_stacon_g2_ParamLimits

0x84fd,	// (0x00036934) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0003db59) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0003db59) battery_pane_stacon_g

0x853b,	// (0x00036972) navi_icon_pane_stacon

0x854f,	// (0x00036986) navi_navi_pane_stacon

0x853b,	// (0x00036972) navi_text_pane_stacon

0x8493,	// (0x000368ca) control_bottom_pane_stacon_g1

0x8563,	// (0x0003699a) control_bottom_pane_stacon_t1_ParamLimits

0x8563,	// (0x0003699a) control_bottom_pane_stacon_t1

0x0c20,	// (0x0002f057) grid_app_pane_ParamLimits

0x0c20,	// (0x0002f057) grid_app_pane

0x0c56,	// (0x0002f08d) scroll_pane_cp15_ParamLimits

0x0c56,	// (0x0002f08d) scroll_pane_cp15

0x0c73,	// (0x0002f0aa) cell_app_pane_ParamLimits

0x0c73,	// (0x0002f0aa) cell_app_pane

0x0cba,	// (0x0002f0f1) cell_app_pane_g1_ParamLimits

0x0cba,	// (0x0002f0f1) cell_app_pane_g1

0x3d6b,	// (0x000321a2) cell_app_pane_g2_ParamLimits

0x3d6b,	// (0x000321a2) cell_app_pane_g2

0x0001,

0xf727,	// (0x0003db5e) cell_app_pane_g_ParamLimits

0xf727,	// (0x0003db5e) cell_app_pane_g

0x3d77,	// (0x000321ae) cell_app_pane_t1_ParamLimits

0x3d77,	// (0x000321ae) cell_app_pane_t1

0x3d89,	// (0x000321c0) grid_highlight_pane_ParamLimits

0x3d89,	// (0x000321c0) grid_highlight_pane

0x3ab7,	// (0x00031eee) cell_highlight_pane_g1

0x3abf,	// (0x00031ef6) cell_highlight_pane_g2

0x3ac7,	// (0x00031efe) cell_highlight_pane_g3

0x3acf,	// (0x00031f06) cell_highlight_pane_g4

0x3ad7,	// (0x00031f0e) cell_highlight_pane_g5

0x3adf,	// (0x00031f16) cell_highlight_pane_g6

0x3ae7,	// (0x00031f1e) cell_highlight_pane_g7

0x3aef,	// (0x00031f26) cell_highlight_pane_g8

0x3af7,	// (0x00031f2e) cell_highlight_pane_g9

0x339a,	// (0x000317d1) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0003db0c) cell_highlight_pane_g

0x3d9a,	// (0x000321d1) bg_scroll_pane

0x8632,	// (0x00036a69) scroll_handle_pane

0x3de1,	// (0x00032218) scroll_bg_pane_g1

0x3df6,	// (0x0003222d) scroll_bg_pane_g2

0x3e0e,	// (0x00032245) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0003db63) scroll_bg_pane_g

0x3e23,	// (0x0003225a) scroll_handle_focus_pane_ParamLimits

0x3e23,	// (0x0003225a) scroll_handle_focus_pane

0x3de1,	// (0x00032218) scroll_handle_pane_g1

0x3e30,	// (0x00032267) scroll_handle_pane_g2

0x3e0e,	// (0x00032245) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0003db6a) scroll_handle_pane_g

0x3b08,	// (0x00031f3f) bg_popup_sub_pane_cp21_ParamLimits

0x3b08,	// (0x00031f3f) bg_popup_sub_pane_cp21

0x3e44,	// (0x0003227b) popup_fep_japan_predictive_window_t1_ParamLimits

0x3e44,	// (0x0003227b) popup_fep_japan_predictive_window_t1

0x3e5b,	// (0x00032292) popup_fep_japan_predictive_window_t2_ParamLimits

0x3e5b,	// (0x00032292) popup_fep_japan_predictive_window_t2

0x3e8e,	// (0x000322c5) popup_fep_japan_predictive_window_t3_ParamLimits

0x3e8e,	// (0x000322c5) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0003db71) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0003db71) popup_fep_japan_predictive_window_t

0x33a4,	// (0x000317db) bg_popup_sub_pane_cp23

0x3ec5,	// (0x000322fc) listscroll_japin_cand_pane

0x3ecd,	// (0x00032304) popup_fep_japan_candidate_window_t1

0x3edb,	// (0x00032312) candidate_pane_ParamLimits

0x3edb,	// (0x00032312) candidate_pane

0x3eed,	// (0x00032324) scroll_pane_cp30

0x3ef5,	// (0x0003232c) list_single_popup_jap_candidate_pane_ParamLimits

0x3ef5,	// (0x0003232c) list_single_popup_jap_candidate_pane

0x33a4,	// (0x000317db) list_highlight_pane_cp30

0x3f09,	// (0x00032340) list_single_popup_jap_candidate_pane_t1

0x3f18,	// (0x0003234f) level_1_signal

0x3f25,	// (0x0003235c) level_2_signal

0x3f32,	// (0x00032369) level_3_signal

0x3f3f,	// (0x00032376) level_4_signal

0x3f4c,	// (0x00032383) level_5_signal

0x3f59,	// (0x00032390) level_6_signal

0x3f66,	// (0x0003239d) level_7_signal

0x3f18,	// (0x0003234f) level_1_battery

0x3f25,	// (0x0003235c) level_2_battery

0x3f32,	// (0x00032369) level_3_battery

0x3f3f,	// (0x00032376) level_4_battery

0x3f4c,	// (0x00032383) level_5_battery

0x3f59,	// (0x00032390) level_6_battery

0x3f66,	// (0x0003239d) level_7_battery

0x3f8b,	// (0x000323c2) list_menu_pane_ParamLimits

0x3f8b,	// (0x000323c2) list_menu_pane

0x3f9c,	// (0x000323d3) scroll_pane_cp25_ParamLimits

0x3f9c,	// (0x000323d3) scroll_pane_cp25

0x3fb5,	// (0x000323ec) list_double2_graphic_pane_cp2_ParamLimits

0x3fb5,	// (0x000323ec) list_double2_graphic_pane_cp2

0x3fb5,	// (0x000323ec) list_double2_large_graphic_pane_cp2_ParamLimits

0x3fb5,	// (0x000323ec) list_double2_large_graphic_pane_cp2

0x3fb5,	// (0x000323ec) list_double2_pane_cp2_ParamLimits

0x3fb5,	// (0x000323ec) list_double2_pane_cp2

0x3fb5,	// (0x000323ec) list_double_graphic_pane_cp2_ParamLimits

0x3fb5,	// (0x000323ec) list_double_graphic_pane_cp2

0x3fb5,	// (0x000323ec) list_double_large_graphic_pane_cp2_ParamLimits

0x3fb5,	// (0x000323ec) list_double_large_graphic_pane_cp2

0x3fb5,	// (0x000323ec) list_double_number_pane_cp2_ParamLimits

0x3fb5,	// (0x000323ec) list_double_number_pane_cp2

0x3fb5,	// (0x000323ec) list_double_pane_cp2_ParamLimits

0x3fb5,	// (0x000323ec) list_double_pane_cp2

0x0cef,	// (0x0002f126) list_single_2graphic_pane_cp2_ParamLimits

0x0cef,	// (0x0002f126) list_single_2graphic_pane_cp2

0x0cef,	// (0x0002f126) list_single_graphic_heading_pane_cp2_ParamLimits

0x0cef,	// (0x0002f126) list_single_graphic_heading_pane_cp2

0x0cef,	// (0x0002f126) list_single_graphic_pane_cp2_ParamLimits

0x0cef,	// (0x0002f126) list_single_graphic_pane_cp2

0x0cef,	// (0x0002f126) list_single_heading_pane_cp2_ParamLimits

0x0cef,	// (0x0002f126) list_single_heading_pane_cp2

0x3fc5,	// (0x000323fc) list_single_large_graphic_pane_cp2_ParamLimits

0x3fc5,	// (0x000323fc) list_single_large_graphic_pane_cp2

0x0cef,	// (0x0002f126) list_single_number_heading_pane_cp2_ParamLimits

0x0cef,	// (0x0002f126) list_single_number_heading_pane_cp2

0x0cef,	// (0x0002f126) list_single_number_pane_cp2_ParamLimits

0x0cef,	// (0x0002f126) list_single_number_pane_cp2

0x0cef,	// (0x0002f126) list_single_pane_cp2_ParamLimits

0x0cef,	// (0x0002f126) list_single_pane_cp2

0x3fdf,	// (0x00032416) bg_popup_sub_pane_cp22

0x8749,	// (0x00036b80) popup_side_volume_key_window_g1

0x8773,	// (0x00036baa) popup_side_volume_key_window_t1

0x878f,	// (0x00036bc6) volume_small_pane_cp1

0x33f2,	// (0x00031829) bg_popup_sub_pane_cp24_ParamLimits

0x33f2,	// (0x00031829) bg_popup_sub_pane_cp24

0x3ff5,	// (0x0003242c) fep_china_uni_candidate_pane_ParamLimits

0x3ff5,	// (0x0003242c) fep_china_uni_candidate_pane

0x4009,	// (0x00032440) fep_china_uni_entry_pane

0x4019,	// (0x00032450) popup_fep_china_uni_window_g1

0x4035,	// (0x0003246c) fep_china_uni_entry_pane_g1

0x403d,	// (0x00032474) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0003db9e) fep_china_uni_entry_pane_g

0x4045,	// (0x0003247c) fep_entry_item_pane

0x404f,	// (0x00032486) fep_candidate_item_pane

0x4057,	// (0x0003248e) fep_china_uni_candidate_pane_g1

0x405f,	// (0x00032496) fep_china_uni_candidate_pane_g2

0x4067,	// (0x0003249e) fep_china_uni_candidate_pane_g3

0x406f,	// (0x000324a6) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0003dba3) fep_china_uni_candidate_pane_g

0x339a,	// (0x000317d1) fep_entry_item_pane_g1

0x4077,	// (0x000324ae) fep_entry_item_pane_t1_ParamLimits

0x4077,	// (0x000324ae) fep_entry_item_pane_t1

0x408d,	// (0x000324c4) fep_candidate_item_pane_t1_ParamLimits

0x408d,	// (0x000324c4) fep_candidate_item_pane_t1

0x40a2,	// (0x000324d9) fep_candidate_item_pane_t2_ParamLimits

0x40a2,	// (0x000324d9) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0003dbac) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0003dbac) fep_candidate_item_pane_t

0x3400,	// (0x00031837) list_highlight_pane_cp31_ParamLimits

0x3400,	// (0x00031837) list_highlight_pane_cp31

0x40b4,	// (0x000324eb) level_1_signal_lsc

0x40bd,	// (0x000324f4) level_2_signal_lsc

0x40c6,	// (0x000324fd) level_3_signal_lsc

0x40cf,	// (0x00032506) level_4_signal_lsc

0x40d8,	// (0x0003250f) level_5_signal_lsc

0x40e1,	// (0x00032518) level_6_signal_lsc

0x40ea,	// (0x00032521) level_7_signal_lsc

0x40ea,	// (0x00032521) level_1_battery_lsc

0x40f3,	// (0x0003252a) level_2_battery_lsc

0x40fc,	// (0x00032533) level_3_battery_lsc

0x4105,	// (0x0003253c) level_4_battery_lsc

0x410e,	// (0x00032545) level_5_battery_lsc

0x4117,	// (0x0003254e) level_6_battery_lsc

0x40b4,	// (0x000324eb) level_7_battery_lsc

0x4120,	// (0x00032557) scroll_handle_focus_pane_g1

0x4129,	// (0x00032560) scroll_handle_focus_pane_g2

0x4132,	// (0x00032569) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0003dbb1) scroll_handle_focus_pane_g

0xe95c,	// (0x0003cd93) list_single_2graphic_pane_g1_ParamLimits

0xe95c,	// (0x0003cd93) list_single_2graphic_pane_g1

0xeced,	// (0x0003d124) list_single_2graphic_pane_g2_ParamLimits

0xeced,	// (0x0003d124) list_single_2graphic_pane_g2

0x82cf,	// (0x00036706) list_single_2graphic_pane_g3_ParamLimits

0x82cf,	// (0x00036706) list_single_2graphic_pane_g3

0xed5f,	// (0x0003d196) list_single_2graphic_pane_g4_ParamLimits

0xed5f,	// (0x0003d196) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0003dbb8) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0003dbb8) list_single_2graphic_pane_g

0xe968,	// (0x0003cd9f) list_single_2graphic_pane_t1_ParamLimits

0xe968,	// (0x0003cd9f) list_single_2graphic_pane_t1

0xed6b,	// (0x0003d1a2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xed6b,	// (0x0003d1a2) list_double2_graphic_large_graphic_pane_g1

0xed45,	// (0x0003d17c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xed45,	// (0x0003d17c) list_double2_graphic_large_graphic_pane_g2

0xed2d,	// (0x0003d164) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xed2d,	// (0x0003d164) list_double2_graphic_large_graphic_pane_g3

0xed7d,	// (0x0003d1b4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xed7d,	// (0x0003d1b4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0003dbc1) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0003dbc1) list_double2_graphic_large_graphic_pane_g

0xe996,	// (0x0003cdcd) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe996,	// (0x0003cdcd) list_double2_graphic_large_graphic_pane_t1

0xe9ac,	// (0x0003cde3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe9ac,	// (0x0003cde3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0003dbca) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0003dbca) list_double2_graphic_large_graphic_pane_t

0x4213,	// (0x0003264a) popup_fast_swap_window_ParamLimits

0x4213,	// (0x0003264a) popup_fast_swap_window

0x422f,	// (0x00032666) popup_side_volume_key_window

0x4249,	// (0x00032680) stacon_top_pane

0x4253,	// (0x0003268a) status_pane_ParamLimits

0x4253,	// (0x0003268a) status_pane

0x4249,	// (0x00032680) status_small_pane

0x33a4,	// (0x000317db) control_pane

0x33a4,	// (0x000317db) stacon_bottom_pane

0x3a33,	// (0x00031e6a) scroll_pane_cp121

0x3a2a,	// (0x00031e61) set_content_pane

0x0d5a,	// (0x0002f191) bg_active_tab_pane_g1_cp1

0x413b,	// (0x00032572) bg_active_tab_pane_g2_cp1

0x0d51,	// (0x0002f188) bg_active_tab_pane_g3_cp1

0x0d5a,	// (0x0002f191) bg_passive_tab_pane_g1_cp1

0x413b,	// (0x00032572) bg_passive_tab_pane_g2_cp1

0x0d51,	// (0x0002f188) bg_passive_tab_pane_g3_cp1

0x0d6c,	// (0x0002f1a3) bg_active_tab_pane_g1_cp2

0x413b,	// (0x00032572) bg_active_tab_pane_g2_cp2

0x0d63,	// (0x0002f19a) bg_active_tab_pane_g3_cp2

0x0d6c,	// (0x0002f1a3) bg_passive_tab_pane_g1_cp2

0x413b,	// (0x00032572) bg_passive_tab_pane_g2_cp2

0x0d63,	// (0x0002f19a) bg_passive_tab_pane_g3_cp2

0x0d7e,	// (0x0002f1b5) bg_active_tab_pane_g1_cp3

0x413b,	// (0x00032572) bg_active_tab_pane_g2_cp3

0x0d75,	// (0x0002f1ac) bg_active_tab_pane_g3_cp3

0x0d7e,	// (0x0002f1b5) bg_passive_tab_pane_g1_cp3

0x413b,	// (0x00032572) bg_passive_tab_pane_g2_cp3

0x0d75,	// (0x0002f1ac) bg_passive_tab_pane_g3_cp3

0x0d90,	// (0x0002f1c7) bg_active_tab_pane_g1_cp4

0x413b,	// (0x00032572) bg_active_tab_pane_g2_cp4

0x0d87,	// (0x0002f1be) bg_active_tab_pane_g3_cp4

0x0d90,	// (0x0002f1c7) bg_passive_tab_pane_g1_cp4

0x413b,	// (0x00032572) bg_passive_tab_pane_g2_cp4

0x0d87,	// (0x0002f1be) bg_passive_tab_pane_g3_cp4

0x418b,	// (0x000325c2) bg_active_tab_pane_g1_cp5

0x413b,	// (0x00032572) bg_active_tab_pane_g2_cp5

0x4182,	// (0x000325b9) bg_active_tab_pane_g3_cp5

0x418b,	// (0x000325c2) bg_passive_tab_pane_g1_cp5

0x413b,	// (0x00032572) bg_passive_tab_pane_g2_cp5

0x4182,	// (0x000325b9) bg_passive_tab_pane_g3_cp5

0xd874,	// (0x0003bcab) list_set_graphic_pane_ParamLimits

0xd874,	// (0x0003bcab) list_set_graphic_pane

0x33a4,	// (0x000317db) bg_set_opt_pane_cp4

0x4194,	// (0x000325cb) list_set_graphic_pane_g1_ParamLimits

0x4194,	// (0x000325cb) list_set_graphic_pane_g1

0x41a0,	// (0x000325d7) list_set_graphic_pane_g2_ParamLimits

0x41a0,	// (0x000325d7) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0003dbcf) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0003dbcf) list_set_graphic_pane_g

0x0009,

0xfaf7,	// (0x0003df2e) volume_small_pane_cp_g

0x41c4,	// (0x000325fb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x41c4,	// (0x000325fb) list_double2_large_graphic_pane_g1_cp2

0x41d2,	// (0x00032609) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x41d2,	// (0x00032609) list_double2_large_graphic_pane_g2_cp2

0x41e3,	// (0x0003261a) list_double2_large_graphic_pane_g3_cp2

0x41eb,	// (0x00032622) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x41eb,	// (0x00032622) list_double2_large_graphic_pane_t1_cp2

0x4201,	// (0x00032638) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4201,	// (0x00032638) list_double2_large_graphic_pane_t2_cp2

0x589f,	// (0x00033cd6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x589f,	// (0x00033cd6) list_double_large_graphic_pane_g1_cp2

0x58b2,	// (0x00033ce9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x58b2,	// (0x00033ce9) list_double_large_graphic_pane_g2_cp2

0x4371,	// (0x000327a8) list_double_large_graphic_pane_g3_cp2

0x58c3,	// (0x00033cfa) list_double_large_graphic_pane_g4_cp

0x58cb,	// (0x00033d02) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x58cb,	// (0x00033d02) list_double_large_graphic_pane_t1_cp2

0x58e2,	// (0x00033d19) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x58e2,	// (0x00033d19) list_double_large_graphic_pane_t2_cp2

0x4261,	// (0x00032698) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4261,	// (0x00032698) list_double2_graphic_pane_g1_cp2

0x426f,	// (0x000326a6) list_double2_graphic_pane_g2_cp2_ParamLimits

0x426f,	// (0x000326a6) list_double2_graphic_pane_g2_cp2

0x4280,	// (0x000326b7) list_double2_graphic_pane_g3_cp2

0x428a,	// (0x000326c1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x428a,	// (0x000326c1) list_double2_graphic_pane_t1_cp2

0x42a0,	// (0x000326d7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x42a0,	// (0x000326d7) list_double2_graphic_pane_t2_cp2

0x42b2,	// (0x000326e9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x42b2,	// (0x000326e9) list_single_number_heading_pane_g1_cp2

0x42be,	// (0x000326f5) list_single_number_heading_pane_g2_cp2

0x42c6,	// (0x000326fd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x42c6,	// (0x000326fd) list_single_number_heading_pane_t1_cp2

0x42dc,	// (0x00032713) list_single_number_heading_pane_t2_cp2_ParamLimits

0x42dc,	// (0x00032713) list_single_number_heading_pane_t2_cp2

0x42f0,	// (0x00032727) list_single_number_heading_pane_t3_cp2_ParamLimits

0x42f0,	// (0x00032727) list_single_number_heading_pane_t3_cp2

0x42b2,	// (0x000326e9) list_single_heading_pane_g1_cp2_ParamLimits

0x42b2,	// (0x000326e9) list_single_heading_pane_g1_cp2

0x42be,	// (0x000326f5) list_single_heading_pane_g2_cp2

0x42c6,	// (0x000326fd) list_single_heading_pane_t1_cp2_ParamLimits

0x42c6,	// (0x000326fd) list_single_heading_pane_t1_cp2

0x56a7,	// (0x00033ade) list_single_heading_pane_t2_cp2_ParamLimits

0x56a7,	// (0x00033ade) list_single_heading_pane_t2_cp2

0x5641,	// (0x00033a78) list_double_graphic_pane_g1_cp2_ParamLimits

0x5641,	// (0x00033a78) list_double_graphic_pane_g1_cp2

0x564d,	// (0x00033a84) list_double_graphic_pane_g2_cp2_ParamLimits

0x564d,	// (0x00033a84) list_double_graphic_pane_g2_cp2

0x565c,	// (0x00033a93) list_double_graphic_pane_g3_cp2

0x5664,	// (0x00033a9b) list_double_graphic_pane_t1_cp2_ParamLimits

0x5664,	// (0x00033a9b) list_double_graphic_pane_t1_cp2

0x567a,	// (0x00033ab1) list_double_graphic_pane_t2_cp2_ParamLimits

0x567a,	// (0x00033ab1) list_double_graphic_pane_t2_cp2

0x4365,	// (0x0003279c) list_double_number_pane_g1_cp2_ParamLimits

0x4365,	// (0x0003279c) list_double_number_pane_g1_cp2

0x4371,	// (0x000327a8) list_double_number_pane_g2_cp2

0x5605,	// (0x00033a3c) list_double_number_pane_t1_cp2_ParamLimits

0x5605,	// (0x00033a3c) list_double_number_pane_t1_cp2

0x5619,	// (0x00033a50) list_double_number_pane_t2_cp2_ParamLimits

0x5619,	// (0x00033a50) list_double_number_pane_t2_cp2

0x562f,	// (0x00033a66) list_double_number_pane_t3_cp2_ParamLimits

0x562f,	// (0x00033a66) list_double_number_pane_t3_cp2

0x557c,	// (0x000339b3) list_single_graphic_pane_g1_cp2_ParamLimits

0x557c,	// (0x000339b3) list_single_graphic_pane_g1_cp2

0x43c9,	// (0x00032800) list_single_graphic_pane_g2_cp2_ParamLimits

0x43c9,	// (0x00032800) list_single_graphic_pane_g2_cp2

0x43d5,	// (0x0003280c) list_single_graphic_pane_g3_cp2

0x5552,	// (0x00033989) list_single_graphic_pane_t1_cp2_ParamLimits

0x5552,	// (0x00033989) list_single_graphic_pane_t1_cp2

0x43c9,	// (0x00032800) list_single_number_pane_g1_cp2_ParamLimits

0x43c9,	// (0x00032800) list_single_number_pane_g1_cp2

0x43d5,	// (0x0003280c) list_single_number_pane_g2_cp2

0x5552,	// (0x00033989) list_single_number_pane_t1_cp2_ParamLimits

0x5552,	// (0x00033989) list_single_number_pane_t1_cp2

0x5568,	// (0x0003399f) list_single_number_pane_t2_cp2_ParamLimits

0x5568,	// (0x0003399f) list_single_number_pane_t2_cp2

0x41d2,	// (0x00032609) list_double2_pane_g1_cp2_ParamLimits

0x41d2,	// (0x00032609) list_double2_pane_g1_cp2

0x41e3,	// (0x0003261a) list_double2_pane_g2_cp2

0x433d,	// (0x00032774) list_double2_pane_t1_cp2_ParamLimits

0x433d,	// (0x00032774) list_double2_pane_t1_cp2

0x4353,	// (0x0003278a) list_double2_pane_t2_cp2_ParamLimits

0x4353,	// (0x0003278a) list_double2_pane_t2_cp2

0x4365,	// (0x0003279c) list_double_pane_g1_cp2_ParamLimits

0x4365,	// (0x0003279c) list_double_pane_g1_cp2

0x4371,	// (0x000327a8) list_double_pane_g2_cp2

0x4379,	// (0x000327b0) list_double_pane_t1_cp2_ParamLimits

0x4379,	// (0x000327b0) list_double_pane_t1_cp2

0x438f,	// (0x000327c6) list_double_pane_t2_cp2_ParamLimits

0x438f,	// (0x000327c6) list_double_pane_t2_cp2

0x43b9,	// (0x000327f0) list_single_pane_cp2_g3

0x43c9,	// (0x00032800) list_single_pane_g1_cp2_ParamLimits

0x43c9,	// (0x00032800) list_single_pane_g1_cp2

0x43d5,	// (0x0003280c) list_single_pane_g2_cp2

0x43dd,	// (0x00032814) list_single_pane_t1_cp2_ParamLimits

0x43dd,	// (0x00032814) list_single_pane_t1_cp2

0x43f5,	// (0x0003282c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x43f5,	// (0x0003282c) list_single_large_graphic_pane_g1_cp2

0x4403,	// (0x0003283a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4403,	// (0x0003283a) list_single_large_graphic_pane_g2_cp2

0x440f,	// (0x00032846) list_single_large_graphic_pane_g3_cp2

0x4417,	// (0x0003284e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4417,	// (0x0003284e) list_single_large_graphic_pane_g4_cp1

0x4431,	// (0x00032868) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4431,	// (0x00032868) list_single_large_graphic_pane_t1_cp2

0x551c,	// (0x00033953) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x551c,	// (0x00033953) list_single_graphic_heading_pane_g1_cp2

0x54e9,	// (0x00033920) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x54e9,	// (0x00033920) list_single_graphic_heading_pane_g4_cp2

0x43d5,	// (0x0003280c) list_single_graphic_heading_pane_g5_cp2

0x5528,	// (0x0003395f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5528,	// (0x0003395f) list_single_graphic_heading_pane_t1_cp2

0x553e,	// (0x00033975) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x553e,	// (0x00033975) list_single_graphic_heading_pane_t2_cp2

0x54dd,	// (0x00033914) list_single_2graphic_pane_g1_cp2_ParamLimits

0x54dd,	// (0x00033914) list_single_2graphic_pane_g1_cp2

0x54e9,	// (0x00033920) list_single_2graphic_pane_g2_cp2_ParamLimits

0x54e9,	// (0x00033920) list_single_2graphic_pane_g2_cp2

0x43d5,	// (0x0003280c) list_single_2graphic_pane_g3_cp2

0x54fa,	// (0x00033931) list_single_2graphic_pane_g4_cp2_ParamLimits

0x54fa,	// (0x00033931) list_single_2graphic_pane_g4_cp2

0x5506,	// (0x0003393d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5506,	// (0x0003393d) list_single_2graphic_pane_t1_cp2

0x339a,	// (0x000317d1) list_highlight_pane_g10_cp1

0x50e3,	// (0x0003351a) list_highlight_pane_g1_cp1

0x50eb,	// (0x00033522) list_highlight_pane_g2_cp1

0x50f3,	// (0x0003352a) list_highlight_pane_g3_cp1

0x50fb,	// (0x00033532) list_highlight_pane_g4_cp1

0x5103,	// (0x0003353a) list_highlight_pane_g5_cp1

0x510b,	// (0x00033542) list_highlight_pane_g6_cp1

0x5113,	// (0x0003354a) list_highlight_pane_g7_cp1

0x511b,	// (0x00033552) list_highlight_pane_g8_cp1

0x5123,	// (0x0003355a) list_highlight_pane_g9_cp1

0x19de,	// (0x0002fe15) form_field_slider_pane_t3

0x19ee,	// (0x0002fe25) form_field_slider_pane_t4

0x5017,	// (0x0003344e) slider_form_pane_ParamLimits

0x5017,	// (0x0003344e) slider_form_pane

0x33a4,	// (0x000317db) control_abbreviations

0x33a4,	// (0x000317db) control_conventions

0x33a4,	// (0x000317db) control_definitions

0x33a4,	// (0x000317db) format_table_attribute

0x56f3,	// (0x00033b2a) bg_popup_preview_window_pane_g9

0x33a4,	// (0x000317db) format_table_data2

0x33a4,	// (0x000317db) format_table_data3

0x33a4,	// (0x000317db) format_table_data_example

0x0008,

0x33a4,	// (0x000317db) intro_purpose

0xf928,	// (0x0003dd5f) bg_popup_preview_window_pane_g

0x33a4,	// (0x000317db) texts_category

0x33a4,	// (0x000317db) texts_graphics

0x4447,	// (0x0003287e) text_digital

0x4456,	// (0x0003288d) text_primary

0x4465,	// (0x0003289c) text_primary_small

0x4474,	// (0x000328ab) text_secondary

0x4483,	// (0x000328ba) text_title

0x5ba4,	// (0x00033fdb) bg_passive_tab_pane_g1_cp3_srt

0x413b,	// (0x00032572) bg_passive_tab_pane_g2_cp3_srt

0x5b9b,	// (0x00033fd2) bg_passive_tab_pane_g3_cp3_srt

0x33f2,	// (0x00031829) bg_active_tab_pane_cp3_srt_ParamLimits

0x33f2,	// (0x00031829) bg_active_tab_pane_cp3_srt

0x5bad,	// (0x00033fe4) tabs_4_active_pane_srt_g1

0x1dae,	// (0x000301e5) tabs_4_active_pane_srt_t1_ParamLimits

0x1dae,	// (0x000301e5) tabs_4_active_pane_srt_t1

0x5ba4,	// (0x00033fdb) bg_active_tab_pane_g1_cp3_copy1

0x413b,	// (0x00032572) bg_active_tab_pane_g2_cp3_copy1

0x5b9b,	// (0x00033fd2) bg_active_tab_pane_g3_cp3_copy1

0x3400,	// (0x00031837) tabs_2_long_active_pane_srt_ParamLimits

0x3400,	// (0x00031837) tabs_2_long_active_pane_srt

0x3400,	// (0x00031837) tabs_2_long_passive_pane_srt_ParamLimits

0x3400,	// (0x00031837) tabs_2_long_passive_pane_srt

0x3ba7,	// (0x00031fde) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3ba7,	// (0x00031fde) bg_passive_tab_pane_cp4_srt

0x5acf,	// (0x00033f06) bg_passive_tab_pane_g1_cp4_srt

0x413b,	// (0x00032572) bg_passive_tab_pane_g2_cp4_srt

0x5ac6,	// (0x00033efd) bg_passive_tab_pane_g3_cp4_srt

0x3400,	// (0x00031837) bg_active_tab_pane_cp4_srt_ParamLimits

0x3400,	// (0x00031837) bg_active_tab_pane_cp4_srt

0x1bba,	// (0x0002fff1) tabs_2_long_active_pane_srt_t1_ParamLimits

0x1bba,	// (0x0002fff1) tabs_2_long_active_pane_srt_t1

0x5acf,	// (0x00033f06) bg_active_tab_pane_g1_cp4_srt

0x413b,	// (0x00032572) bg_active_tab_pane_g2_cp4_srt

0x5ac6,	// (0x00033efd) bg_active_tab_pane_g3_cp4_srt

0x33f2,	// (0x00031829) tabs_3_long_active_pane_srt_ParamLimits

0x33f2,	// (0x00031829) tabs_3_long_active_pane_srt

0x33f2,	// (0x00031829) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x33f2,	// (0x00031829) tabs_3_long_passive_pane_cp_srt

0x33f2,	// (0x00031829) tabs_3_long_passive_pane_srt_ParamLimits

0x33f2,	// (0x00031829) tabs_3_long_passive_pane_srt

0x3ba7,	// (0x00031fde) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3ba7,	// (0x00031fde) bg_passive_tab_pane_cp5_srt

0x418b,	// (0x000325c2) bg_passive_tab_pane_g1_cp5_srt

0x413b,	// (0x00032572) bg_passive_tab_pane_g2_cp5_srt

0x4182,	// (0x000325b9) bg_passive_tab_pane_g3_cp5_srt

0x3400,	// (0x00031837) bg_active_tab_pane_cp5_srt_ParamLimits

0x3400,	// (0x00031837) bg_active_tab_pane_cp5_srt

0x1ba4,	// (0x0002ffdb) tabs_3_long_active_pane_srt_t1_ParamLimits

0x1ba4,	// (0x0002ffdb) tabs_3_long_active_pane_srt_t1

0x418b,	// (0x000325c2) bg_active_tab_pane_g1_cp5_srt

0x413b,	// (0x00032572) bg_active_tab_pane_g2_cp5_srt

0x4182,	// (0x000325b9) bg_active_tab_pane_g3_cp5_srt

0x5ab8,	// (0x00033eef) navi_text_pane_srt_t1

0x5ab0,	// (0x00033ee7) navi_icon_pane_srt_g1

0x4581,	// (0x000329b8) midp_editing_number_pane_srt

0x4492,	// (0x000328c9) midp_ticker_pane_srt

0x4589,	// (0x000329c0) midp_ticker_pane_srt_g1

0x4591,	// (0x000329c8) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0003dbee) midp_ticker_pane_srt_g

0x4599,	// (0x000329d0) midp_ticker_pane_srt_t1

0x5aa1,	// (0x00033ed8) midp_editing_number_pane_t1_copy1

0x0d99,	// (0x0002f1d0) listscroll_midp_pane

0x0d99,	// (0x0002f1d0) midp_form_pane

0x449a,	// (0x000328d1) midp_info_popup_window_ParamLimits

0x449a,	// (0x000328d1) midp_info_popup_window

0x3b08,	// (0x00031f3f) bg_popup_sub_pane_cp50_ParamLimits

0x3b08,	// (0x00031f3f) bg_popup_sub_pane_cp50

0x4d65,	// (0x0003319c) listscroll_midp_info_pane_ParamLimits

0x4d65,	// (0x0003319c) listscroll_midp_info_pane

0x4d4d,	// (0x00033184) listscroll_form_midp_pane_ParamLimits

0x4d4d,	// (0x00033184) listscroll_form_midp_pane

0x4d59,	// (0x00033190) scroll_bar_cp050

0x19d2,	// (0x0002fe09) list_midp_pane

0x643d,	// (0x00034874) signal_pane_g2_cp

0x4c7f,	// (0x000330b6) listscroll_midp_info_pane_t1_ParamLimits

0x4c7f,	// (0x000330b6) listscroll_midp_info_pane_t1

0x4c97,	// (0x000330ce) listscroll_midp_info_pane_t2_ParamLimits

0x4c97,	// (0x000330ce) listscroll_midp_info_pane_t2

0x4cd5,	// (0x0003310c) listscroll_midp_info_pane_t3_ParamLimits

0x4cd5,	// (0x0003310c) listscroll_midp_info_pane_t3

0x4d0f,	// (0x00033146) listscroll_midp_info_pane_t4_ParamLimits

0x4d0f,	// (0x00033146) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0003dc9a) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0003dc9a) listscroll_midp_info_pane_t

0x3b6f,	// (0x00031fa6) scroll_pane_cp21

0x4c23,	// (0x0003305a) form_midp_field_choice_group_pane

0x4c2c,	// (0x00033063) form_midp_field_text_pane

0x4c65,	// (0x0003309c) form_midp_field_time_pane

0x4c6d,	// (0x000330a4) form_midp_gauge_slider_pane

0x4c76,	// (0x000330ad) form_midp_gauge_wait_pane

0x33a4,	// (0x000317db) form_midp_image_pane

0xe9be,	// (0x0003cdf5) list_single_midp_pane_ParamLimits

0xe9be,	// (0x0003cdf5) list_single_midp_pane

0x19ae,	// (0x0002fde5) form_midp_field_text_pane_t1

0x4aca,	// (0x00032f01) input_focus_pane_cp050

0x4c12,	// (0x00033049) list_midp_form_text_pane

0x4be1,	// (0x00033018) form_midp_field_choice_group_pane_t1

0x4bef,	// (0x00033026) input_focus_pane_cp051

0x4c03,	// (0x0003303a) list_midp_choice_pane

0x33a4,	// (0x000317db) status_idle_pane

0x4bc5,	// (0x00032ffc) form_midp_field_time_pane_t1

0x339a,	// (0x000317d1) wait_anim_pane_g2_copy1

0x4bd3,	// (0x0003300a) form_midp_field_time_pane_t2

0x0001,

0x44f3,	// (0x0003292a) aid_navinavi_width_2_pane

0xf85e,	// (0x0003dc95) form_midp_field_time_pane_t

0x33a4,	// (0x000317db) input_focus_pane_cp052

0x33a4,	// (0x000317db) bg_input_focus_pane_cp040

0x4ba1,	// (0x00032fd8) form_midp_gauge_slider_pane_t1

0x4baf,	// (0x00032fe6) form_midp_gauge_slider_pane_t2

0x1992,	// (0x0002fdc9) form_midp_gauge_slider_pane_t3

0x19a0,	// (0x0002fdd7) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0003dc8c) form_midp_gauge_slider_pane_t

0x4bbd,	// (0x00032ff4) form_midp_slider_pane

0x3400,	// (0x00031837) bg_input_focus_pane_cp041_ParamLimits

0x3400,	// (0x00031837) bg_input_focus_pane_cp041

0x4b6e,	// (0x00032fa5) form_midp_gauge_wait_pane_t1_ParamLimits

0x4b6e,	// (0x00032fa5) form_midp_gauge_wait_pane_t1

0x4b80,	// (0x00032fb7) form_midp_gauge_wait_pane_t2_ParamLimits

0x4b80,	// (0x00032fb7) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0003dc87) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0003dc87) form_midp_gauge_wait_pane_t

0x4b92,	// (0x00032fc9) form_midp_wait_pane_ParamLimits

0x4b92,	// (0x00032fc9) form_midp_wait_pane

0x4b38,	// (0x00032f6f) form_midp_image_pane_g1

0x4b41,	// (0x00032f78) form_midp_image_pane_t1

0x4b50,	// (0x00032f87) form_midp_image_pane_t2

0x4b5f,	// (0x00032f96) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0003dc80) form_midp_image_pane_t

0x4b2f,	// (0x00032f66) list_single_midp_pane_g1

0x7596,	// (0x000359cd) list_single_midp_pane_t1

0x197b,	// (0x0002fdb2) list_midp_form_item_pane_ParamLimits

0x197b,	// (0x0002fdb2) list_midp_form_item_pane

0x44ad,	// (0x000328e4) list_midp_form_item_pane_t1

0x44bc,	// (0x000328f3) midp_ticker_pane_g1

0x44c8,	// (0x000328ff) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0003dbd4) midp_ticker_pane_g

0x0e45,	// (0x0002f27c) midp_ticker_pane_t1

0x1d23,	// (0x0003015a) midp_editing_number_pane_t1

0x5b2f,	// (0x00033f66) midp_editing_number_pane

0x5b3e,	// (0x00033f75) midp_ticker_pane

0x5a91,	// (0x00033ec8) ai_message_heading_pane

0x33a4,	// (0x000317db) bg_popup_window_pane_cp14

0x5a99,	// (0x00033ed0) listscroll_ai_message_pane

0x5a1b,	// (0x00033e52) ai_message_heading_pane_g1_ParamLimits

0x5a1b,	// (0x00033e52) ai_message_heading_pane_g1

0x5a27,	// (0x00033e5e) ai_message_heading_pane_g2_ParamLimits

0x5a27,	// (0x00033e5e) ai_message_heading_pane_g2

0x5a33,	// (0x00033e6a) ai_message_heading_pane_g3_ParamLimits

0x5a33,	// (0x00033e6a) ai_message_heading_pane_g3

0x5a3f,	// (0x00033e76) ai_message_heading_pane_g4_ParamLimits

0x5a3f,	// (0x00033e76) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0003ddc1) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0003ddc1) ai_message_heading_pane_g

0x5a4b,	// (0x00033e82) ai_message_heading_pane_t1_ParamLimits

0x5a4b,	// (0x00033e82) ai_message_heading_pane_t1

0x5a65,	// (0x00033e9c) ai_message_heading_pane_t2_ParamLimits

0x5a65,	// (0x00033e9c) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0003ddca) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0003ddca) ai_message_heading_pane_t

0x5a77,	// (0x00033eae) bg_popup_heading_pane_cp1_ParamLimits

0x5a77,	// (0x00033eae) bg_popup_heading_pane_cp1

0x5a09,	// (0x00033e40) list_ai_message_pane_ParamLimits

0x5a09,	// (0x00033e40) list_ai_message_pane

0x3b6f,	// (0x00031fa6) scroll_pane_cp10

0x59a5,	// (0x00033ddc) list_ai_message_pane_g1

0x59ad,	// (0x00033de4) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0003dd9e) list_ai_message_pane_g

0x59b5,	// (0x00033dec) list_ai_message_pane_t1_ParamLimits

0x59b5,	// (0x00033dec) list_ai_message_pane_t1

0x59ca,	// (0x00033e01) list_ai_message_pane_t2_ParamLimits

0x59ca,	// (0x00033e01) list_ai_message_pane_t2

0x59df,	// (0x00033e16) list_ai_message_pane_t3_ParamLimits

0x59df,	// (0x00033e16) list_ai_message_pane_t3

0x59f4,	// (0x00033e2b) list_ai_message_pane_t4_ParamLimits

0x59f4,	// (0x00033e2b) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0003dda3) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0003dda3) list_ai_message_pane_t

0x1b7f,	// (0x0002ffb6) cell_ai_soft_ind_pane_ParamLimits

0x1b7f,	// (0x0002ffb6) cell_ai_soft_ind_pane

0x44d4,	// (0x0003290b) cell_ai_soft_ind_pane_g1_ParamLimits

0x44d4,	// (0x0003290b) cell_ai_soft_ind_pane_g1

0x33a4,	// (0x000317db) grid_highlight_cp1

0x44e1,	// (0x00032918) text_secondary_cp56_ParamLimits

0x44e1,	// (0x00032918) text_secondary_cp56

0x597a,	// (0x00033db1) example_general_pane_ParamLimits

0x597a,	// (0x00033db1) example_general_pane

0x5986,	// (0x00033dbd) example_parent_pane_g1_ParamLimits

0x5986,	// (0x00033dbd) example_parent_pane_g1

0x5992,	// (0x00033dc9) example_parent_pane_t1_ParamLimits

0x5992,	// (0x00033dc9) example_parent_pane_t1

0x124e,	// (0x0002f685) popup_preview_text_window_ParamLimits

0x124e,	// (0x0002f685) popup_preview_text_window

0x43c1,	// (0x000327f8) list_single_pane_cp2_g4

0x35d8,	// (0x00031a0f) bg_popup_preview_window_pane_ParamLimits

0x35d8,	// (0x00031a0f) bg_popup_preview_window_pane

0x56fb,	// (0x00033b32) popup_preview_text_window_t1_ParamLimits

0x56fb,	// (0x00033b32) popup_preview_text_window_t1

0x5719,	// (0x00033b50) popup_preview_text_window_t2_ParamLimits

0x5719,	// (0x00033b50) popup_preview_text_window_t2

0x5762,	// (0x00033b99) popup_preview_text_window_t3_ParamLimits

0x5762,	// (0x00033b99) popup_preview_text_window_t3

0x57a7,	// (0x00033bde) popup_preview_text_window_t4_ParamLimits

0x57a7,	// (0x00033bde) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0003dd72) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0003dd72) popup_preview_text_window_t

0x5825,	// (0x00033c5c) scroll_pane_cp11

0x49da,	// (0x00032e11) bg_popup_preview_window_pane_g1

0x56bb,	// (0x00033af2) bg_popup_preview_window_pane_g2

0x56c3,	// (0x00033afa) bg_popup_preview_window_pane_g3

0x56cb,	// (0x00033b02) bg_popup_preview_window_pane_g4

0x56d3,	// (0x00033b0a) bg_popup_preview_window_pane_g5

0x56db,	// (0x00033b12) bg_popup_preview_window_pane_g6

0x56e3,	// (0x00033b1a) bg_popup_preview_window_pane_g7

0x56eb,	// (0x00033b22) bg_popup_preview_window_pane_g8

0x7bc3,	// (0x00035ffa) aid_popup_width_pane

0x11ca,	// (0x0002f601) popup_midp_note_alarm_window_ParamLimits

0x11ca,	// (0x0002f601) popup_midp_note_alarm_window

0x3a44,	// (0x00031e7b) data_form_pane_ParamLimits

0xe84d,	// (0x0003cc84) form_field_data_pane_g1

0xe857,	// (0x0003cc8e) form_field_data_pane_t1_ParamLimits

0x3a50,	// (0x00031e87) input_focus_pane_ParamLimits

0x3a5e,	// (0x00031e95) data_form_wide_pane_ParamLimits

0x72cf,	// (0x00035706) form_field_data_wide_pane_g1

0x72db,	// (0x00035712) form_field_data_wide_pane_t1_ParamLimits

0x37cb,	// (0x00031c02) input_focus_pane_cp6_ParamLimits

0x0bd3,	// (0x0002f00a) input_popup_find_pane_g1_ParamLimits

0x0bd3,	// (0x0002f00a) input_popup_find_pane_g1

0x850e,	// (0x00036945) aid_navi_side_left_pane

0x8523,	// (0x0003695a) aid_navi_side_right_pane

0x51c0,	// (0x000335f7) bg_popup_window_pane_cp30_ParamLimits

0x51c0,	// (0x000335f7) bg_popup_window_pane_cp30

0x523a,	// (0x00033671) popup_midp_note_alarm_window_g1_ParamLimits

0x523a,	// (0x00033671) popup_midp_note_alarm_window_g1

0x526a,	// (0x000336a1) popup_midp_note_alarm_window_t1_ParamLimits

0x526a,	// (0x000336a1) popup_midp_note_alarm_window_t1

0x530b,	// (0x00033742) popup_midp_note_alarm_window_t2_ParamLimits

0x530b,	// (0x00033742) popup_midp_note_alarm_window_t2

0x53b9,	// (0x000337f0) popup_midp_note_alarm_window_t3_ParamLimits

0x53b9,	// (0x000337f0) popup_midp_note_alarm_window_t3

0x53e1,	// (0x00033818) popup_midp_note_alarm_window_t4_ParamLimits

0x53e1,	// (0x00033818) popup_midp_note_alarm_window_t4

0x5401,	// (0x00033838) popup_midp_note_alarm_window_t5_ParamLimits

0x5401,	// (0x00033838) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0003dd0f) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0003dd0f) popup_midp_note_alarm_window_t

0x54ad,	// (0x000338e4) wait_bar_pane_cp1_ParamLimits

0x54ad,	// (0x000338e4) wait_bar_pane_cp1

0x33a4,	// (0x000317db) wait_anim_pane_copy1

0x33a4,	// (0x000317db) wait_border_pane_copy1

0x4ed8,	// (0x0003330f) wait_border_pane_g1_copy1

0x72f5,	// (0x0003572c) form_field_popup_pane_g1

0xe871,	// (0x0003cca8) form_field_popup_pane_t1_ParamLimits

0x3a50,	// (0x00031e87) input_focus_pane_cp7_ParamLimits

0x3a8a,	// (0x00031ec1) list_form_pane_ParamLimits

0x7317,	// (0x0003574e) form_field_popup_wide_pane_g1

0x731f,	// (0x00035756) form_field_popup_wide_pane_t1_ParamLimits

0x3a50,	// (0x00031e87) input_focus_pane_cp8_ParamLimits

0x3a96,	// (0x00031ecd) list_form_wide_pane_ParamLimits

0x5bd4,	// (0x0003400b) aid_size_cell_graphic_pane

0xe8f0,	// (0x0003cd27) data_form_pane_t1_ParamLimits

0xe9eb,	// (0x0003ce22) data_form_wide_pane_t1_ParamLimits

0x1603,	// (0x0002fa3a) bg_status_flat_pane

0x024d,	// (0x0002e684) title_pane_t1_ParamLimits

0x33ba,	// (0x000317f1) title_pane_t2_ParamLimits

0x33e0,	// (0x00031817) title_pane_t3_ParamLimits

0xf59b,	// (0x0003d9d2) title_pane_t_ParamLimits

0x3f18,	// (0x0003234f) level_1_signal_ParamLimits

0x3f25,	// (0x0003235c) level_2_signal_ParamLimits

0x3f32,	// (0x00032369) level_3_signal_ParamLimits

0x3f3f,	// (0x00032376) level_4_signal_ParamLimits

0x3f4c,	// (0x00032383) level_5_signal_ParamLimits

0x3f59,	// (0x00032390) level_6_signal_ParamLimits

0x3f66,	// (0x0003239d) level_7_signal_ParamLimits

0x3f18,	// (0x0003234f) level_1_battery_ParamLimits

0x3f25,	// (0x0003235c) level_2_battery_ParamLimits

0x3f32,	// (0x00032369) level_3_battery_ParamLimits

0x3f3f,	// (0x00032376) level_4_battery_ParamLimits

0x3f4c,	// (0x00032383) level_5_battery_ParamLimits

0x3f59,	// (0x00032390) level_6_battery_ParamLimits

0x3f66,	// (0x0003239d) level_7_battery_ParamLimits

0x50e3,	// (0x0003351a) bg_status_flat_pane_g1

0x50eb,	// (0x00033522) bg_status_flat_pane_g2

0x50f3,	// (0x0003352a) bg_status_flat_pane_g3

0x50fb,	// (0x00033532) bg_status_flat_pane_g4

0x5103,	// (0x0003353a) bg_status_flat_pane_g5

0x510b,	// (0x00033542) bg_status_flat_pane_g6

0x5113,	// (0x0003354a) bg_status_flat_pane_g7

0x02e1,	// (0x0002e718) tabs_3_active_pane_t1_ParamLimits

0x02e1,	// (0x0002e718) tabs_3_passive_pane_t1_ParamLimits

0x02fb,	// (0x0002e732) tabs_4_active_pane_t1_ParamLimits

0x02fb,	// (0x0002e732) tabs_4_1_passive_pane_t1_ParamLimits

0x0be9,	// (0x0002f020) tabs_2_active_pane_t1_ParamLimits

0x0be9,	// (0x0002f020) tabs_2_passive_pane_t1_ParamLimits

0x3400,	// (0x00031837) bg_active_tab_pane_cp4_ParamLimits

0x0bfb,	// (0x0002f032) tabs_2_long_active_pane_t1_ParamLimits

0x3ba7,	// (0x00031fde) bg_passive_tab_pane_cp4_ParamLimits

0x8bd3,	// (0x0003700a) list_single_midp_graphic_pane_t1_ParamLimits

0x3400,	// (0x00031837) bg_active_tab_pane_cp5_ParamLimits

0x0c0e,	// (0x0002f045) tabs_3_long_active_pane_t1_ParamLimits

0x3ba7,	// (0x00031fde) bg_passive_tab_pane_cp5_ParamLimits

0x8bd3,	// (0x0003700a) list_single_midp_graphic_pane_t1

0x1603,	// (0x0002fa3a) bg_status_flat_pane_ParamLimits

0x48ad,	// (0x00032ce4) indicator_pane_cp2_ParamLimits

0x48ad,	// (0x00032ce4) indicator_pane_cp2

0x177a,	// (0x0002fbb1) navi_pane_srt_ParamLimits

0x177a,	// (0x0002fbb1) navi_pane_srt

0x48d5,	// (0x00032d0c) popup_clock_digital_analogue_window_cp1

0x344d,	// (0x00031884) indicator_pane_t1

0x4492,	// (0x000328c9) copy_highlight_pane

0x4492,	// (0x000328c9) cursor_graphics_pane

0x4492,	// (0x000328c9) graphic_within_text_pane

0x4492,	// (0x000328c9) link_highlight_pane

0x57e8,	// (0x00033c1f) popup_preview_text_window_t5_ParamLimits

0x57e8,	// (0x00033c1f) popup_preview_text_window_t5

0x44fb,	// (0x00032932) cursor_digital_pane

0x44fb,	// (0x00032932) cursor_primary_pane

0x450c,	// (0x00032943) cursor_primary_small_pane

0x4514,	// (0x0003294b) cursor_secondary_pane

0x451c,	// (0x00032953) cursor_title_pane

0x44fb,	// (0x00032932) link_highlight_digital_pane

0x4503,	// (0x0003293a) link_highlight_primary_pane

0x450c,	// (0x00032943) link_highlight_primary_small_pane

0x4514,	// (0x0003294b) link_highlight_secondary_pane

0x451c,	// (0x00032953) link_highlight_title_pane

0x44fb,	// (0x00032932) copy_highlight_digital_pane

0x44fb,	// (0x00032932) copy_highlight_primary_pane

0x450c,	// (0x00032943) copy_highlight_primary_small_pane

0x4514,	// (0x0003294b) copy_highlight_secondary_pane

0x451c,	// (0x00032953) copy_highlight_title_pane

0x4514,	// (0x0003294b) graphic_text_digital_pane

0x5163,	// (0x0003359a) graphic_text_primary_pane

0x516c,	// (0x000335a3) graphic_text_primary_small_pane

0x450c,	// (0x00032943) graphic_text_secondary_pane

0x44fb,	// (0x00032932) graphic_text_title_pane

0x0e57,	// (0x0002f28e) cursor_primary_pane_g1

0x5155,	// (0x0003358c) cursor_text_primary_t1

0x1a12,	// (0x0002fe49) cursor_primary_small_pane_g1

0x5147,	// (0x0003357e) cursor_text_primary_small_t1

0x1a08,	// (0x0002fe3f) cursor_primary_small_pane_g1_copy1

0x5139,	// (0x00033570) cursor_text_primary_small_t1_copy1

0x512b,	// (0x00033562) cursor_text_title_t1

0x19fe,	// (0x0002fe35) cursor_title_pane_g1

0x0e57,	// (0x0002f28e) cursor_digital_pane_g1

0x4524,	// (0x0003295b) cursor_text_digital_t1

0x50cc,	// (0x00033503) link_highlight_primary_pane_g1

0x50d4,	// (0x0003350b) link_highlight_primary_pane_t1

0x4532,	// (0x00032969) link_highlight_primary_small_pane_g1

0x453a,	// (0x00032971) link_highlight_primary_small_pane_t1

0x4532,	// (0x00032969) link_highlight_secondary_pane_g1

0x4549,	// (0x00032980) link_highlight_secondary_pane_t1

0x5040,	// (0x00033477) link_highlight_title_pane_g1

0x5048,	// (0x0003347f) link_highlight_title_pane_t1

0x5029,	// (0x00033460) link_highlight_digital_pane_g1

0x5031,	// (0x00033468) link_highlight_digital_pane_t1

0x4f1d,	// (0x00033354) copy_highlight_primary_pane_g1

0x4f25,	// (0x0003335c) copy_highlight_primary_pane_t1

0x4ef7,	// (0x0003332e) copy_highlight_primary_small_pane_g1

0x4f0e,	// (0x00033345) copy_highlight_primary_small_pane_t1

0x4558,	// (0x0003298f) copy_highlight_secondary_pane_g1

0x4560,	// (0x00032997) copy_highlight_secondary_pane_t1

0x4ef7,	// (0x0003332e) copy_highlight_title_pane_g1

0x4eff,	// (0x00033336) copy_highlight_title_pane_t1

0x4f1d,	// (0x00033354) copy_highlight_digital_pane_g1

0x5d5e,	// (0x00034195) copy_highlight_digital_pane_t1

0x5cb2,	// (0x000340e9) graphic_text_primary_pane_g1

0x5d42,	// (0x00034179) graphic_text_primary_pane_t1

0x5d50,	// (0x00034187) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0003de3e) graphic_text_primary_pane_t

0x5d1e,	// (0x00034155) graphic_text_primary_small_pane_g1

0x5d26,	// (0x0003415d) graphic_text_primary_small_pane_t1

0x5d34,	// (0x0003416b) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0003de39) graphic_text_primary_small_pane_t

0x5cfa,	// (0x00034131) graphic_text_secondary_pane_g1

0x5d02,	// (0x00034139) graphic_text_secondary_pane_t1

0x5d10,	// (0x00034147) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0003de34) graphic_text_secondary_pane_t

0x5cd6,	// (0x0003410d) graphic_text_title_pane_g1

0x5cde,	// (0x00034115) graphic_text_title_pane_t1

0x5cec,	// (0x00034123) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0003de2f) graphic_text_title_pane_t

0x5cb2,	// (0x000340e9) graphic_text_digital_pane_g1

0x5cba,	// (0x000340f1) graphic_text_digital_pane_t1

0x5cc8,	// (0x000340ff) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0003de2a) graphic_text_digital_pane_t

0x3400,	// (0x00031837) navi_icon_pane_srt_ParamLimits

0x3400,	// (0x00031837) navi_icon_pane_srt

0x33a4,	// (0x000317db) navi_midp_pane_srt

0x33a4,	// (0x000317db) navi_navi_pane_srt

0x3400,	// (0x00031837) navi_text_pane_srt_ParamLimits

0x3400,	// (0x00031837) navi_text_pane_srt

0x5c7d,	// (0x000340b4) navi_navi_icon_text_pane_srt

0x5c85,	// (0x000340bc) navi_navi_pane_srt_g1_ParamLimits

0x5c85,	// (0x000340bc) navi_navi_pane_srt_g1

0x5c97,	// (0x000340ce) navi_navi_pane_srt_g2_ParamLimits

0x5c97,	// (0x000340ce) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0003de25) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0003de25) navi_navi_pane_srt_g

0x5ca9,	// (0x000340e0) navi_navi_tabs_pane_srt

0x5c7d,	// (0x000340b4) navi_navi_text_pane_srt

0x5c7d,	// (0x000340b4) navi_navi_volume_pane_srt

0x5c6e,	// (0x000340a5) navi_navi_text_pane_srt_t1

0x9009,	// (0x00037440) navi_navi_volume_pane_srt_g1

0x9011,	// (0x00037448) volume_small_pane_srt_ParamLimits

0x9011,	// (0x00037448) volume_small_pane_srt

0x8940,	// (0x00036d77) volume_small_pane_srt_g1_ParamLimits

0x8940,	// (0x00036d77) volume_small_pane_srt_g1

0x8950,	// (0x00036d87) volume_small_pane_srt_g2_ParamLimits

0x8950,	// (0x00036d87) volume_small_pane_srt_g2

0x8961,	// (0x00036d98) volume_small_pane_srt_g3_ParamLimits

0x8961,	// (0x00036d98) volume_small_pane_srt_g3

0x8972,	// (0x00036da9) volume_small_pane_srt_g4_ParamLimits

0x8972,	// (0x00036da9) volume_small_pane_srt_g4

0x8983,	// (0x00036dba) volume_small_pane_srt_g5_ParamLimits

0x8983,	// (0x00036dba) volume_small_pane_srt_g5

0x8994,	// (0x00036dcb) volume_small_pane_srt_g6_ParamLimits

0x8994,	// (0x00036dcb) volume_small_pane_srt_g6

0x89a5,	// (0x00036ddc) volume_small_pane_srt_g7_ParamLimits

0x89a5,	// (0x00036ddc) volume_small_pane_srt_g7

0x89b6,	// (0x00036ded) volume_small_pane_srt_g8_ParamLimits

0x89b6,	// (0x00036ded) volume_small_pane_srt_g8

0x89c7,	// (0x00036dfe) volume_small_pane_srt_g9_ParamLimits

0x89c7,	// (0x00036dfe) volume_small_pane_srt_g9

0x89d8,	// (0x00036e0f) volume_small_pane_srt_g10_ParamLimits

0x89d8,	// (0x00036e0f) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0003dbd9) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0003dbd9) volume_small_pane_srt_g

0x3681,	// (0x00031ab8) query_popup_data_pane_cp2

0x5c54,	// (0x0003408b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5c54,	// (0x0003408b) navi_navi_icon_text_pane_srt_t1

0x5163,	// (0x0003359a) navi_tabs_2_long_pane_srt

0x5163,	// (0x0003359a) navi_tabs_2_pane_srt

0x5163,	// (0x0003359a) navi_tabs_3_long_pane_srt

0x5163,	// (0x0003359a) navi_tabs_3_pane_srt

0x5163,	// (0x0003359a) navi_tabs_4_pane_srt

0x8fe9,	// (0x00037420) tabs_2_active_pane_srt_ParamLimits

0x8fe9,	// (0x00037420) tabs_2_active_pane_srt

0x8ff9,	// (0x00037430) tabs_2_passive_pane_srt_ParamLimits

0x8ff9,	// (0x00037430) tabs_2_passive_pane_srt

0x4aca,	// (0x00032f01) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4aca,	// (0x00032f01) bg_passive_tab_pane_cp1_srt

0x5c3b,	// (0x00034072) bg_passive_tab_pane_g1_cp1_srt

0x413b,	// (0x00032572) bg_passive_tab_pane_g2_cp1_srt

0x5c32,	// (0x00034069) bg_passive_tab_pane_g3_cp1_srt

0x33f2,	// (0x00031829) bg_active_tab_pane_cp1_srt_ParamLimits

0x33f2,	// (0x00031829) bg_active_tab_pane_cp1_srt

0x5c44,	// (0x0003407b) tabs_2_active_pane_srt_g1

0x1e2b,	// (0x00030262) tabs_2_active_pane_srt_t1_ParamLimits

0x1e2b,	// (0x00030262) tabs_2_active_pane_srt_t1

0x5c3b,	// (0x00034072) bg_active_tab_pane_g1_cp1_srt

0x413b,	// (0x00032572) bg_active_tab_pane_g2_cp1_srt

0x5c32,	// (0x00034069) bg_active_tab_pane_g3_cp1_srt

0x8fb6,	// (0x000373ed) tabs_3_active_pane_srt_ParamLimits

0x8fb6,	// (0x000373ed) tabs_3_active_pane_srt

0x8fc7,	// (0x000373fe) tabs_3_passive_pane_cp_srt_ParamLimits

0x8fc7,	// (0x000373fe) tabs_3_passive_pane_cp_srt

0x8fd8,	// (0x0003740f) tabs_3_passive_pane_srt_ParamLimits

0x8fd8,	// (0x0003740f) tabs_3_passive_pane_srt

0x4aca,	// (0x00032f01) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4aca,	// (0x00032f01) bg_passive_tab_pane_cp2_srt

0x4578,	// (0x000329af) bg_passive_tab_pane_g1_cp2_srt

0x413b,	// (0x00032572) bg_passive_tab_pane_g2_cp2_srt

0x456f,	// (0x000329a6) bg_passive_tab_pane_g3_cp2_srt

0x33f2,	// (0x00031829) bg_active_tab_pane_cp2_srt_ParamLimits

0x33f2,	// (0x00031829) bg_active_tab_pane_cp2_srt

0x5c2a,	// (0x00034061) tabs_3_active_pane_srt_g1

0x1e15,	// (0x0003024c) tabs_3_active_pane_srt_t1_ParamLimits

0x1e15,	// (0x0003024c) tabs_3_active_pane_srt_t1

0x4578,	// (0x000329af) bg_active_tab_pane_g1_cp2_srt

0x413b,	// (0x00032572) bg_active_tab_pane_g2_cp2_srt

0x456f,	// (0x000329a6) bg_active_tab_pane_g3_cp2_srt

0x8f6e,	// (0x000373a5) tabs_4_active_pane_srt_ParamLimits

0x8f6e,	// (0x000373a5) tabs_4_active_pane_srt

0x8f80,	// (0x000373b7) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8f80,	// (0x000373b7) tabs_4_passive_pane_cp2_srt

0x469c,	// (0x00032ad3) aid_size_cell_toolbar

0x5948,	// (0x00033d7f) main_idle_act_pane_ParamLimits

0x4774,	// (0x00032bab) popup_large_graphic_colour_window_ParamLimits

0x14ce,	// (0x0002f905) popup_toolbar_window_ParamLimits

0x14ce,	// (0x0002f905) popup_toolbar_window

0x5b51,	// (0x00033f88) list_single_graphic_2heading_pane_ParamLimits

0x5b51,	// (0x00033f88) list_single_graphic_2heading_pane

0x3d51,	// (0x00032188) aid_size_cell_apps_grid_lsc_pane

0x3d63,	// (0x0003219a) aid_size_cell_apps_grid_prt_pane

0x3ba7,	// (0x00031fde) bg_wml_button_pane_cp1_ParamLimits

0x3ba7,	// (0x00031fde) bg_wml_button_pane_cp1

0x19ae,	// (0x0002fde5) form_midp_field_text_pane_t1_ParamLimits

0x4aca,	// (0x00032f01) input_focus_pane_cp050_ParamLimits

0x4c12,	// (0x00033049) list_midp_form_text_pane_ParamLimits

0x4bef,	// (0x00033026) input_focus_pane_cp051_ParamLimits

0x4c03,	// (0x0003303a) list_midp_choice_pane_ParamLimits

0x1943,	// (0x0002fd7a) list_single_2graphic_pane_cp3_ParamLimits

0x1943,	// (0x0002fd7a) list_single_2graphic_pane_cp3

0x1959,	// (0x0002fd90) list_single_midp_graphic_pane_ParamLimits

0x1959,	// (0x0002fd90) list_single_midp_graphic_pane

0x74de,	// (0x00035915) list_single_graphic_2heading_pane_g1_ParamLimits

0x74de,	// (0x00035915) list_single_graphic_2heading_pane_g1

0x74ea,	// (0x00035921) list_single_graphic_2heading_pane_g4_ParamLimits

0x74ea,	// (0x00035921) list_single_graphic_2heading_pane_g4

0x74f6,	// (0x0003592d) list_single_graphic_2heading_pane_g5_ParamLimits

0x74f6,	// (0x0003592d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0003dc2c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0003dc2c) list_single_graphic_2heading_pane_g

0x7502,	// (0x00035939) list_single_graphic_2heading_pane_t1_ParamLimits

0x7502,	// (0x00035939) list_single_graphic_2heading_pane_t1

0x7516,	// (0x0003594d) list_single_graphic_2heading_pane_t2_ParamLimits

0x7516,	// (0x0003594d) list_single_graphic_2heading_pane_t2

0x7532,	// (0x00035969) list_single_graphic_2heading_pane_t3_ParamLimits

0x7532,	// (0x00035969) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0003dc33) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0003dc33) list_single_graphic_2heading_pane_t

0x4918,	// (0x00032d4f) bg_popup_sub_pane_cp2

0x4942,	// (0x00032d79) grid_toobar_pane

0x8b58,	// (0x00036f8f) cell_toolbar_pane_ParamLimits

0x8b58,	// (0x00036f8f) cell_toolbar_pane

0x497e,	// (0x00032db5) cell_toolbar_pane_g1_ParamLimits

0x497e,	// (0x00032db5) cell_toolbar_pane_g1

0x4992,	// (0x00032dc9) cell_toolbar_pane_g2_ParamLimits

0x4992,	// (0x00032dc9) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0003dc41) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0003dc41) cell_toolbar_pane_g

0x49b4,	// (0x00032deb) grid_highlight_pane_cp2_ParamLimits

0x49b4,	// (0x00032deb) grid_highlight_pane_cp2

0x49ce,	// (0x00032e05) toolbar_button_pane

0x49da,	// (0x00032e11) toolbar_button_pane_g1

0x49ea,	// (0x00032e21) toolbar_button_pane_g2

0x49e2,	// (0x00032e19) toolbar_button_pane_g3

0x49fa,	// (0x00032e31) toolbar_button_pane_g4

0x49f2,	// (0x00032e29) toolbar_button_pane_g5

0x4a02,	// (0x00032e39) toolbar_button_pane_g6

0x4a0a,	// (0x00032e41) toolbar_button_pane_g7

0x4a1a,	// (0x00032e51) toolbar_button_pane_g8

0x4a12,	// (0x00032e49) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0003dc46) toolbar_button_pane_g

0x8b90,	// (0x00036fc7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8b90,	// (0x00036fc7) list_single_2graphic_pane_g1_cp3

0xeee5,	// (0x0003d31c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xeee5,	// (0x0003d31c) list_single_2graphic_pane_g2_cp3

0x42be,	// (0x000326f5) list_single_2graphic_pane_g3_cp3

0x8bad,	// (0x00036fe4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8bad,	// (0x00036fe4) list_single_2graphic_pane_g4_cp3

0x8bb9,	// (0x00036ff0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8bb9,	// (0x00036ff0) list_single_2graphic_pane_t1_cp3

0x42b2,	// (0x000326e9) list_single_midp_graphic_pane_g2_ParamLimits

0x42b2,	// (0x000326e9) list_single_midp_graphic_pane_g2

0x74c6,	// (0x000358fd) aid_zoom_text_primary

0x74ce,	// (0x00035905) aid_zoom_text_secondary

0x462c,	// (0x00032a63) status_small_pane_g7_ParamLimits

0x462c,	// (0x00032a63) status_small_pane_g7

0x464f,	// (0x00032a86) status_small_pane_t1_ParamLimits

0x0229,	// (0x0002e660) title_pane_g2

0x0003,

0xf592,	// (0x0003d9c9) title_pane_g

0x0ad6,	// (0x0002ef0d) aid_size_cell_colour_1_pane_ParamLimits

0x0ad6,	// (0x0002ef0d) aid_size_cell_colour_1_pane

0x0aea,	// (0x0002ef21) aid_size_cell_colour_2_pane_ParamLimits

0x0aea,	// (0x0002ef21) aid_size_cell_colour_2_pane

0x0afe,	// (0x0002ef35) aid_size_cell_colour_3_pane_ParamLimits

0x0afe,	// (0x0002ef35) aid_size_cell_colour_3_pane

0x0b12,	// (0x0002ef49) aid_size_cell_colour_4_pane_ParamLimits

0x0b12,	// (0x0002ef49) aid_size_cell_colour_4_pane

0x844a,	// (0x00036881) title_pane_stacon_g1_ParamLimits

0x844a,	// (0x00036881) title_pane_stacon_g1

0x4f7c,	// (0x000333b3) popup_note_wait_window_g3_ParamLimits

0x4f7c,	// (0x000333b3) popup_note_wait_window_g3

0x4ff2,	// (0x00033429) popup_note_wait_window_t5_ParamLimits

0x4ff2,	// (0x00033429) popup_note_wait_window_t5

0x33a4,	// (0x000317db) main_feb_china_hwr_fs_writing_pane

0x0ef6,	// (0x0002f32d) popup_feb_china_hwr_fs_window_ParamLimits

0x0ef6,	// (0x0002f32d) popup_feb_china_hwr_fs_window

0xeef6,	// (0x0003d32d) aid_size_cell_hwr_fs_ParamLimits

0xeef6,	// (0x0003d32d) aid_size_cell_hwr_fs

0x4aca,	// (0x00032f01) bg_popup_sub_pane_cp3_ParamLimits

0x4aca,	// (0x00032f01) bg_popup_sub_pane_cp3

0xef0b,	// (0x0003d342) grid_hwr_fs_pane_ParamLimits

0xef0b,	// (0x0003d342) grid_hwr_fs_pane

0x8c16,	// (0x0003704d) linegrid_hwr_fs_pane_ParamLimits

0x8c16,	// (0x0003704d) linegrid_hwr_fs_pane

0xef23,	// (0x0003d35a) cell_hwr_fs_pane_ParamLimits

0xef23,	// (0x0003d35a) cell_hwr_fs_pane

0x4ad6,	// (0x00032f0d) linegrid_hwr_fs_pane_g1_ParamLimits

0x4ad6,	// (0x00032f0d) linegrid_hwr_fs_pane_g1

0x1917,	// (0x0002fd4e) linegrid_hwr_fs_pane_g2_ParamLimits

0x1917,	// (0x0002fd4e) linegrid_hwr_fs_pane_g2

0x4ae2,	// (0x00032f19) linegrid_hwr_fs_pane_g3_ParamLimits

0x4ae2,	// (0x00032f19) linegrid_hwr_fs_pane_g3

0x8c48,	// (0x0003707f) linegrid_hwr_fs_pane_g4_ParamLimits

0x8c48,	// (0x0003707f) linegrid_hwr_fs_pane_g4

0x8c62,	// (0x00037099) linegrid_hwr_fs_pane_g5_ParamLimits

0x8c62,	// (0x00037099) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0003dc6c) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0003dc6c) linegrid_hwr_fs_pane_g

0x4aee,	// (0x00032f25) cell_hwr_fs_pane_g1_ParamLimits

0x4aee,	// (0x00032f25) cell_hwr_fs_pane_g1

0x48e6,	// (0x00032d1d) cell_hwr_fs_pane_g2_ParamLimits

0x48e6,	// (0x00032d1d) cell_hwr_fs_pane_g2

0x1929,	// (0x0002fd60) cell_hwr_fs_pane_g3_ParamLimits

0x1929,	// (0x0002fd60) cell_hwr_fs_pane_g3

0x1936,	// (0x0002fd6d) cell_hwr_fs_pane_g4_ParamLimits

0x1936,	// (0x0002fd6d) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0003dc77) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0003dc77) cell_hwr_fs_pane_g

0xef49,	// (0x0003d380) cell_hwr_fs_pane_t1

0x33a4,	// (0x000317db) grid_highlight_pane_cp6

0x33a4,	// (0x000317db) main_idle_act2_pane

0x3b56,	// (0x00031f8d) aid_inside_area_popup_secondary

0x1a32,	// (0x0002fe69) aid_inside_area_window_primary_ParamLimits

0x1a32,	// (0x0002fe69) aid_inside_area_window_primary

0x5d6d,	// (0x000341a4) ai2_news_ticker_pane

0x5d75,	// (0x000341ac) aid_size_cell_ai1_link_ParamLimits

0x5d75,	// (0x000341ac) aid_size_cell_ai1_link

0x5d8f,	// (0x000341c6) popup_ai2_data_window_ParamLimits

0x5d8f,	// (0x000341c6) popup_ai2_data_window

0x5da3,	// (0x000341da) popup_ai2_link_window_ParamLimits

0x5da3,	// (0x000341da) popup_ai2_link_window

0x4aca,	// (0x00032f01) bg_popup_sub_pane_cp4_ParamLimits

0x4aca,	// (0x00032f01) bg_popup_sub_pane_cp4

0x5db7,	// (0x000341ee) grid_ai2_link_pane_ParamLimits

0x5db7,	// (0x000341ee) grid_ai2_link_pane

0x5dce,	// (0x00034205) popup_ai2_link_window_g1_ParamLimits

0x5dce,	// (0x00034205) popup_ai2_link_window_g1

0x5dda,	// (0x00034211) popup_ai2_link_window_g2_ParamLimits

0x5dda,	// (0x00034211) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0003de43) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0003de43) popup_ai2_link_window_g

0x5de9,	// (0x00034220) ai2_mp_button_pane

0x5df1,	// (0x00034228) ai2_mp_volume_pane

0x4bef,	// (0x00033026) bg_popup_sub_pane_cp5_ParamLimits

0x4bef,	// (0x00033026) bg_popup_sub_pane_cp5

0x5df9,	// (0x00034230) heading_ai2_gene_pane_ParamLimits

0x5df9,	// (0x00034230) heading_ai2_gene_pane

0x5e05,	// (0x0003423c) list_ai2_gene_pane_ParamLimits

0x5e05,	// (0x0003423c) list_ai2_gene_pane

0x5e4d,	// (0x00034284) cell_ai2_link_pane_ParamLimits

0x5e4d,	// (0x00034284) cell_ai2_link_pane

0x5e63,	// (0x0003429a) cell_ai2_link_pane_g1

0x33a4,	// (0x000317db) grid_highlight_pane_cp7

0x9026,	// (0x0003745d) ai2_mp_volume_pane_g1

0x5f34,	// (0x0003436b) ai2_mp_volume_pane_g2

0x5ea9,	// (0x000342e0) list_ai2_gene_pane_t1

0x5f3c,	// (0x00034373) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0003de5c) ai2_mp_volume_pane_g

0x902e,	// (0x00037465) volume_small_pane_cp3

0x5f44,	// (0x0003437b) aid_size_cell_ai2_button

0x5f4c,	// (0x00034383) grid_ai2_button_pane

0x5f55,	// (0x0003438c) cell_ai2_button_pane_ParamLimits

0x5f55,	// (0x0003438c) cell_ai2_button_pane

0x339a,	// (0x000317d1) cell_ai2_button_pane_g1

0x33a4,	// (0x000317db) grid_highlight_pane_cp8

0x5ef4,	// (0x0003432b) ai2_gene_pane_t1_ParamLimits

0x5ef4,	// (0x0003432b) ai2_gene_pane_t1

0x0e88,	// (0x0002f2bf) aid_height_parent_landscape

0x1bd1,	// (0x00030008) aid_height_set_list

0x5948,	// (0x00033d7f) aid_size_parent

0x5bd4,	// (0x0003400b) aid_size_cell_graphic_pane_ParamLimits

0x5e15,	// (0x0003424c) popup_ai2_data_window_g1_ParamLimits

0x5e15,	// (0x0003424c) popup_ai2_data_window_g1

0x5e21,	// (0x00034258) ai2_news_ticker_pane_g1

0x5e29,	// (0x00034260) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0003de48) ai2_news_ticker_pane_g

0x5e31,	// (0x00034268) ai2_news_ticker_pane_t1

0x5e3f,	// (0x00034276) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0003de4d) ai2_news_ticker_pane_t

0x5e6c,	// (0x000342a3) heading_ai2_gene_pane_g1

0x5e74,	// (0x000342ab) heading_ai2_gene_pane_t1_ParamLimits

0x5e74,	// (0x000342ab) heading_ai2_gene_pane_t1

0x5e89,	// (0x000342c0) list_highlight_pane_cp6

0x5e91,	// (0x000342c8) ai2_gene_pane_ParamLimits

0x5e91,	// (0x000342c8) ai2_gene_pane

0x5eb7,	// (0x000342ee) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0003de52) list_ai2_gene_pane_t

0x5ec5,	// (0x000342fc) list_highlight_pane_cp8_ParamLimits

0x5ec5,	// (0x000342fc) list_highlight_pane_cp8

0x5ed6,	// (0x0003430d) ai2_gene_pane_g1_ParamLimits

0x5ed6,	// (0x0003430d) ai2_gene_pane_g1

0x5ee8,	// (0x0003431f) ai2_gene_pane_g2_ParamLimits

0x5ee8,	// (0x0003431f) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0003de57) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0003de57) ai2_gene_pane_g

0x39e6,	// (0x00031e1d) scroll_pane_cp12

0xee86,	// (0x0003d2bd) control_pane_t3_ParamLimits

0xee86,	// (0x0003d2bd) control_pane_t3

0x4640,	// (0x00032a77) status_small_pane_g8_ParamLimits

0x4640,	// (0x00032a77) status_small_pane_g8

0x0f89,	// (0x0002f3c0) popup_find_window_ParamLimits

0x1204,	// (0x0002f63b) popup_note_image_window_ParamLimits

0x754a,	// (0x00035981) list_double2_graphic_pane_vc_g1_ParamLimits

0x754a,	// (0x00035981) list_double2_graphic_pane_vc_g1

0x82c3,	// (0x000366fa) list_double2_graphic_pane_vc_g2_ParamLimits

0x82c3,	// (0x000366fa) list_double2_graphic_pane_vc_g2

0x82cf,	// (0x00036706) list_double2_graphic_pane_vc_g3_ParamLimits

0x82cf,	// (0x00036706) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0003dc3a) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0003dc3a) list_double2_graphic_pane_vc_g

0x7556,	// (0x0003598d) list_double2_graphic_pane_vc_t1_ParamLimits

0x7556,	// (0x0003598d) list_double2_graphic_pane_vc_t1

0x82c3,	// (0x000366fa) list_single_heading_pane_vc_g1_ParamLimits

0x82c3,	// (0x000366fa) list_single_heading_pane_vc_g1

0x82cf,	// (0x00036706) list_single_heading_pane_vc_g2_ParamLimits

0x82cf,	// (0x00036706) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003da4d) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003da4d) list_single_heading_pane_vc_g

0x756c,	// (0x000359a3) list_single_heading_pane_vc_t1_ParamLimits

0x756c,	// (0x000359a3) list_single_heading_pane_vc_t1

0x7582,	// (0x000359b9) list_single_heading_pane_vc_t2_ParamLimits

0x7582,	// (0x000359b9) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0003dc5b) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0003dc5b) list_single_heading_pane_vc_t

0x4a22,	// (0x00032e59) list_setting_number_pane_vc_g1_ParamLimits

0x4a22,	// (0x00032e59) list_setting_number_pane_vc_g1

0x4a2e,	// (0x00032e65) list_setting_number_pane_vc_g2_ParamLimits

0x4a2e,	// (0x00032e65) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0003dc60) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0003dc60) list_setting_number_pane_vc_g

0x4a3a,	// (0x00032e71) list_setting_number_pane_vc_t1_ParamLimits

0x4a3a,	// (0x00032e71) list_setting_number_pane_vc_t1

0x4a4e,	// (0x00032e85) list_setting_number_pane_vc_t2_ParamLimits

0x4a4e,	// (0x00032e85) list_setting_number_pane_vc_t2

0x4a6a,	// (0x00032ea1) list_setting_number_pane_vc_t3_ParamLimits

0x4a6a,	// (0x00032ea1) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0003dc65) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0003dc65) list_setting_number_pane_vc_t

0x4a92,	// (0x00032ec9) set_value_pane_vc_ParamLimits

0x4a92,	// (0x00032ec9) set_value_pane_vc

0x5b51,	// (0x00033f88) list_double2_graphic_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_double2_graphic_pane_vc

0x5b51,	// (0x00033f88) list_double2_large_graphic_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_double2_large_graphic_pane_vc

0x5b51,	// (0x00033f88) list_double2_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_double2_pane_vc

0x5b51,	// (0x00033f88) list_double_graphic_heading_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_double_graphic_heading_pane_vc

0x5b51,	// (0x00033f88) list_double_graphic_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_double_graphic_pane_vc

0x5b51,	// (0x00033f88) list_double_heading_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_double_heading_pane_vc

0x5b51,	// (0x00033f88) list_double_large_graphic_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_double_large_graphic_pane_vc

0x5b51,	// (0x00033f88) list_double_number_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_double_number_pane_vc

0x5b51,	// (0x00033f88) list_double_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_double_pane_vc

0x5b51,	// (0x00033f88) list_double_time_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_double_time_pane_vc

0x5b51,	// (0x00033f88) list_setting_number_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_setting_number_pane_vc

0x5b51,	// (0x00033f88) list_setting_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_setting_pane_vc

0x5b51,	// (0x00033f88) list_single_graphic_heading_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_single_graphic_heading_pane_vc

0x5b51,	// (0x00033f88) list_single_heading_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_single_heading_pane_vc

0x5b51,	// (0x00033f88) list_single_number_heading_pane_vc_ParamLimits

0x5b51,	// (0x00033f88) list_single_number_heading_pane_vc

0x754a,	// (0x00035981) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x754a,	// (0x00035981) list_double_graphic_heading_pane_vc_g1

0x82c3,	// (0x000366fa) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x82c3,	// (0x000366fa) list_double_graphic_heading_pane_vc_g2

0x82cf,	// (0x00036706) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x82cf,	// (0x00036706) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0003dc3a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003dc3a) list_double_graphic_heading_pane_vc_g

0x7689,	// (0x00035ac0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7689,	// (0x00035ac0) list_double_graphic_heading_pane_vc_t1

0x756c,	// (0x000359a3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x756c,	// (0x000359a3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa2c,	// (0x0003de63) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x0003de63) list_double_graphic_heading_pane_vc_t

0x4a22,	// (0x00032e59) list_setting_pane_vc_g1_ParamLimits

0x4a22,	// (0x00032e59) list_setting_pane_vc_g1

0x4a2e,	// (0x00032e65) list_setting_pane_vc_g2_ParamLimits

0x4a2e,	// (0x00032e65) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0003dc60) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0003dc60) list_setting_pane_vc_g

0x614b,	// (0x00034582) list_setting_pane_vc_t1_ParamLimits

0x614b,	// (0x00034582) list_setting_pane_vc_t1

0x615f,	// (0x00034596) list_setting_pane_vc_t2_ParamLimits

0x615f,	// (0x00034596) list_setting_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003dea6) list_setting_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003dea6) list_setting_pane_vc_t

0x4a92,	// (0x00032ec9) set_value_pane_cp_vc_ParamLimits

0x4a92,	// (0x00032ec9) set_value_pane_cp_vc

0x82c3,	// (0x000366fa) list_single_number_heading_pane_vc_g1_ParamLimits

0x82c3,	// (0x000366fa) list_single_number_heading_pane_vc_g1

0x82cf,	// (0x00036706) list_single_number_heading_pane_vc_g2_ParamLimits

0x82cf,	// (0x00036706) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003da4d) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003da4d) list_single_number_heading_pane_vc_g

0x756c,	// (0x000359a3) list_single_number_heading_pane_vc_t1_ParamLimits

0x756c,	// (0x000359a3) list_single_number_heading_pane_vc_t1

0x769d,	// (0x00035ad4) list_single_number_heading_pane_vc_t2_ParamLimits

0x769d,	// (0x00035ad4) list_single_number_heading_pane_vc_t2

0x76b1,	// (0x00035ae8) list_single_number_heading_pane_vc_t3_ParamLimits

0x76b1,	// (0x00035ae8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa74,	// (0x0003deab) list_single_number_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x0003deab) list_single_number_heading_pane_vc_t

0x754a,	// (0x00035981) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x754a,	// (0x00035981) list_single_graphic_heading_pane_vc_g1

0x82c3,	// (0x000366fa) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x82c3,	// (0x000366fa) list_single_graphic_heading_pane_vc_g4

0x82cf,	// (0x00036706) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x82cf,	// (0x00036706) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0003dc3a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003dc3a) list_single_graphic_heading_pane_vc_g

0x756c,	// (0x000359a3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x756c,	// (0x000359a3) list_single_graphic_heading_pane_vc_t1

0x76c3,	// (0x00035afa) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x76c3,	// (0x00035afa) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0003deb2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0003deb2) list_single_graphic_heading_pane_vc_t

0x82c3,	// (0x000366fa) list_double2_pane_vc_g1_ParamLimits

0x82c3,	// (0x000366fa) list_double2_pane_vc_g1

0x82cf,	// (0x00036706) list_double2_pane_vc_g2_ParamLimits

0x82cf,	// (0x00036706) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x0003da4d) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x0003da4d) list_double2_pane_vc_g

0x76d7,	// (0x00035b0e) list_double2_pane_vc_t1_ParamLimits

0x76d7,	// (0x00035b0e) list_double2_pane_vc_t1

0x9088,	// (0x000374bf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9088,	// (0x000374bf) list_double2_large_graphic_pane_vc_g1

0x82c3,	// (0x000366fa) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x82c3,	// (0x000366fa) list_double2_large_graphic_pane_vc_g2

0x82cf,	// (0x00036706) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x82cf,	// (0x00036706) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0003da65) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0003da65) list_double2_large_graphic_pane_vc_g

0x76ed,	// (0x00035b24) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x76ed,	// (0x00035b24) list_double2_large_graphic_pane_vc_t1

0x9094,	// (0x000374cb) list_double_time_pane_vc_g1_ParamLimits

0x9094,	// (0x000374cb) list_double_time_pane_vc_g1

0x90a0,	// (0x000374d7) list_double_time_pane_vc_g2_ParamLimits

0x90a0,	// (0x000374d7) list_double_time_pane_vc_g2

0x0001,

0xfa80,	// (0x0003deb7) list_double_time_pane_vc_g_ParamLimits

0xfa80,	// (0x0003deb7) list_double_time_pane_vc_g

0x7703,	// (0x00035b3a) list_double_time_pane_vc_t1_ParamLimits

0x7703,	// (0x00035b3a) list_double_time_pane_vc_t1

0x771c,	// (0x00035b53) list_double_time_pane_vc_t2_ParamLimits

0x771c,	// (0x00035b53) list_double_time_pane_vc_t2

0x775c,	// (0x00035b93) list_double_time_pane_vc_t3_ParamLimits

0x775c,	// (0x00035b93) list_double_time_pane_vc_t3

0x7774,	// (0x00035bab) list_double_time_pane_vc_t4_ParamLimits

0x7774,	// (0x00035bab) list_double_time_pane_vc_t4

0x0003,

0xfa85,	// (0x0003debc) list_double_time_pane_vc_t_ParamLimits

0xfa85,	// (0x0003debc) list_double_time_pane_vc_t

0x82c3,	// (0x000366fa) list_double_pane_vc_g1_ParamLimits

0x82c3,	// (0x000366fa) list_double_pane_vc_g1

0x82cf,	// (0x00036706) list_double_pane_vc_g2_ParamLimits

0x82cf,	// (0x00036706) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x0003da4d) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x0003da4d) list_double_pane_vc_g

0x7788,	// (0x00035bbf) list_double_pane_vc_t1_ParamLimits

0x7788,	// (0x00035bbf) list_double_pane_vc_t1

0x779a,	// (0x00035bd1) list_double_pane_vc_t2_ParamLimits

0x779a,	// (0x00035bd1) list_double_pane_vc_t2

0x0001,

0xfa8e,	// (0x0003dec5) list_double_pane_vc_t_ParamLimits

0xfa8e,	// (0x0003dec5) list_double_pane_vc_t

0x82c3,	// (0x000366fa) list_double_number_pane_vc_g1_ParamLimits

0x82c3,	// (0x000366fa) list_double_number_pane_vc_g1

0x82cf,	// (0x00036706) list_double_number_pane_vc_g2_ParamLimits

0x82cf,	// (0x00036706) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x0003da4d) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x0003da4d) list_double_number_pane_vc_g

0x77b2,	// (0x00035be9) list_double_number_pane_vc_t1_ParamLimits

0x77b2,	// (0x00035be9) list_double_number_pane_vc_t1

0x77c6,	// (0x00035bfd) list_double_number_pane_vc_t2_ParamLimits

0x77c6,	// (0x00035bfd) list_double_number_pane_vc_t2

0x779a,	// (0x00035bd1) list_double_number_pane_vc_t3_ParamLimits

0x779a,	// (0x00035bd1) list_double_number_pane_vc_t3

0x0002,

0xfa93,	// (0x0003deca) list_double_number_pane_vc_t_ParamLimits

0xfa93,	// (0x0003deca) list_double_number_pane_vc_t

0x90ac,	// (0x000374e3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x90ac,	// (0x000374e3) list_double_large_graphic_pane_vc_g1

0x90b8,	// (0x000374ef) list_double_large_graphic_pane_vc_g2_ParamLimits

0x90b8,	// (0x000374ef) list_double_large_graphic_pane_vc_g2

0x82cf,	// (0x00036706) list_double_large_graphic_pane_vc_g3_ParamLimits

0x82cf,	// (0x00036706) list_double_large_graphic_pane_vc_g3

0x77d8,	// (0x00035c0f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x77d8,	// (0x00035c0f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa9a,	// (0x0003ded1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa9a,	// (0x0003ded1) list_double_large_graphic_pane_vc_g

0x77e4,	// (0x00035c1b) list_double_large_graphic_pane_vc_t1_ParamLimits

0x77e4,	// (0x00035c1b) list_double_large_graphic_pane_vc_t1

0x77f6,	// (0x00035c2d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x77f6,	// (0x00035c2d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa3,	// (0x0003deda) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa3,	// (0x0003deda) list_double_large_graphic_pane_vc_t

0x82c3,	// (0x000366fa) list_double_heading_pane_vc_g1_ParamLimits

0x82c3,	// (0x000366fa) list_double_heading_pane_vc_g1

0x82cf,	// (0x00036706) list_double_heading_pane_vc_g2_ParamLimits

0x82cf,	// (0x00036706) list_double_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003da4d) list_double_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003da4d) list_double_heading_pane_vc_g

0x780f,	// (0x00035c46) list_double_heading_pane_vc_t1_ParamLimits

0x780f,	// (0x00035c46) list_double_heading_pane_vc_t1

0x756c,	// (0x000359a3) list_double_heading_pane_vc_t2_ParamLimits

0x756c,	// (0x000359a3) list_double_heading_pane_vc_t2

0x0001,

0xfaa8,	// (0x0003dedf) list_double_heading_pane_vc_t_ParamLimits

0xfaa8,	// (0x0003dedf) list_double_heading_pane_vc_t

0x754a,	// (0x00035981) list_double_graphic_pane_vc_g1_ParamLimits

0x754a,	// (0x00035981) list_double_graphic_pane_vc_g1

0x90c7,	// (0x000374fe) list_double_graphic_pane_vc_g2_ParamLimits

0x90c7,	// (0x000374fe) list_double_graphic_pane_vc_g2

0x90d6,	// (0x0003750d) list_double_graphic_pane_vc_g3_ParamLimits

0x90d6,	// (0x0003750d) list_double_graphic_pane_vc_g3

0x0002,

0xfaad,	// (0x0003dee4) list_double_graphic_pane_vc_g_ParamLimits

0xfaad,	// (0x0003dee4) list_double_graphic_pane_vc_g

0x7823,	// (0x00035c5a) list_double_graphic_pane_vc_t1_ParamLimits

0x7823,	// (0x00035c5a) list_double_graphic_pane_vc_t1

0x779a,	// (0x00035bd1) list_double_graphic_pane_vc_t2_ParamLimits

0x779a,	// (0x00035bd1) list_double_graphic_pane_vc_t2

0x0001,

0xfab4,	// (0x0003deeb) list_double_graphic_pane_vc_t_ParamLimits

0xfab4,	// (0x0003deeb) list_double_graphic_pane_vc_t

0x7bcf,	// (0x00036006) aid_size_cell_fastswap

0xeb4c,	// (0x0003cf83) aid_size_cell_touch_ParamLimits

0xeb4c,	// (0x0003cf83) aid_size_cell_touch

0x7e32,	// (0x00036269) popup_fast_swap_wide_window_ParamLimits

0x7e32,	// (0x00036269) popup_fast_swap_wide_window

0xec97,	// (0x0003d0ce) touch_pane_ParamLimits

0xec97,	// (0x0003d0ce) touch_pane

0x3a3c,	// (0x00031e73) button_value_adjust_pane_cp2

0x7201,	// (0x00035638) button_value_adjust_pane_cp4

0x7221,	// (0x00035658) form_field_data_pane_cp2

0xe80e,	// (0x0003cc45) form_field_data_wide_pane_cp2

0x3d9a,	// (0x000321d1) bg_scroll_pane_ParamLimits

0x8632,	// (0x00036a69) scroll_handle_pane_ParamLimits

0x8646,	// (0x00036a7d) scroll_sc2_down_pane_ParamLimits

0x8646,	// (0x00036a7d) scroll_sc2_down_pane

0x3dcb,	// (0x00032202) scroll_sc2_up_pane_ParamLimits

0x3dcb,	// (0x00032202) scroll_sc2_up_pane

0x1f62,	// (0x00030399) grid_wheel_folder_pane_g1_ParamLimits

0x1f62,	// (0x00030399) grid_wheel_folder_pane_g1

0x88d8,	// (0x00036d0f) clock_nsta_pane_cp2_ParamLimits

0x88d8,	// (0x00036d0f) clock_nsta_pane_cp2

0x0d99,	// (0x0002f1d0) listscroll_midp_pane_ParamLimits

0x0daa,	// (0x0002f1e1) midp_canvas_pane

0x4694,	// (0x00032acb) nsta_clock_indic_pane

0x46cc,	// (0x00032b03) listscroll_form_pane_vc

0x46d4,	// (0x00032b0b) listscroll_set_pane_vc_ParamLimits

0x46d4,	// (0x00032b0b) listscroll_set_pane_vc

0x162b,	// (0x0002fa62) clock_nsta_pane

0x1655,	// (0x0002fa8c) indicator_nsta_pane

0x4918,	// (0x00032d4f) bg_popup_sub_pane_cp2_ParamLimits

0x492c,	// (0x00032d63) find_pane_cp2_ParamLimits

0x492c,	// (0x00032d63) find_pane_cp2

0x4942,	// (0x00032d79) grid_toobar_pane_ParamLimits

0x4a9e,	// (0x00032ed5) list_form_gen_pane_vc_ParamLimits

0x4a9e,	// (0x00032ed5) list_form_gen_pane_vc

0x4ab4,	// (0x00032eeb) scroll_pane_cp8_vc_ParamLimits

0x4ab4,	// (0x00032eeb) scroll_pane_cp8_vc

0x4b04,	// (0x00032f3b) data_form_wide_pane_vc_ParamLimits

0x4b04,	// (0x00032f3b) data_form_wide_pane_vc

0x4b10,	// (0x00032f47) form_field_data_wide_pane_vc_g1

0x4b18,	// (0x00032f4f) form_field_data_wide_pane_vc_t1_ParamLimits

0x4b18,	// (0x00032f4f) form_field_data_wide_pane_vc_t1

0x3a50,	// (0x00031e87) input_focus_pane_cp6_vc_ParamLimits

0x3a50,	// (0x00031e87) input_focus_pane_cp6_vc

0x19d2,	// (0x0002fe09) list_midp_pane_ParamLimits

0x595a,	// (0x00033d91) scroll_pane_cp16_ParamLimits

0x595a,	// (0x00033d91) scroll_pane_cp16

0x4d79,	// (0x000331b0) button_value_adjust_pane_ParamLimits

0x4d79,	// (0x000331b0) button_value_adjust_pane

0x1be2,	// (0x00030019) button_value_adjust_pane_cp6_ParamLimits

0x1be2,	// (0x00030019) button_value_adjust_pane_cp6

0x1cf8,	// (0x0003012f) settings_code_pane_cp_ParamLimits

0x1cf8,	// (0x0003012f) settings_code_pane_cp

0x339a,	// (0x000317d1) cell_touch_pane_g1

0x339a,	// (0x000317d1) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0003db83) cell_touch_pane_g

0x1e41,	// (0x00030278) cell_touch_pane_cp_ParamLimits

0x1e41,	// (0x00030278) cell_touch_pane_cp

0x1e5d,	// (0x00030294) cell_touch_pane_ParamLimits

0x1e5d,	// (0x00030294) cell_touch_pane

0x339a,	// (0x000317d1) scroll_sc2_down_pane_g1

0x339a,	// (0x000317d1) scroll_sc2_up_pane_g1

0x33a4,	// (0x000317db) bg_set_opt_pane_cp4_vc

0x5f67,	// (0x0003439e) list_set_graphic_pane_vc_g1_ParamLimits

0x5f67,	// (0x0003439e) list_set_graphic_pane_vc_g1

0x5f73,	// (0x000343aa) list_set_graphic_pane_vc_g2_ParamLimits

0x5f73,	// (0x000343aa) list_set_graphic_pane_vc_g2

0x0001,

0xfa31,	// (0x0003de68) list_set_graphic_pane_vc_g_ParamLimits

0xfa31,	// (0x0003de68) list_set_graphic_pane_vc_g

0x5f7f,	// (0x000343b6) text_primary_small_cp13_vc_ParamLimits

0x5f7f,	// (0x000343b6) text_primary_small_cp13_vc

0x5f97,	// (0x000343ce) list_set_graphic_pane_vc_ParamLimits

0x5f97,	// (0x000343ce) list_set_graphic_pane_vc

0x33a4,	// (0x000317db) input_focus_pane_cp2_vc

0x339a,	// (0x000317d1) setting_code_pane_vc_g1

0x5fab,	// (0x000343e2) setting_code_pane_vc_t1

0x5fb9,	// (0x000343f0) set_text_pane_vc_t1_ParamLimits

0x5fb9,	// (0x000343f0) set_text_pane_vc_t1

0x33a4,	// (0x000317db) input_focus_pane_cp1_vc

0x5fd8,	// (0x0003440f) list_set_text_pane_vc

0x339a,	// (0x000317d1) setting_text_pane_vc_g1

0x33a4,	// (0x000317db) bg_set_opt_pane_cp2_vc

0x5fe2,	// (0x00034419) setting_slider_graphic_pane_vc_g1

0x5fea,	// (0x00034421) setting_slider_graphic_pane_vc_t1

0x5ff8,	// (0x0003442f) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa36,	// (0x0003de6d) setting_slider_graphic_pane_vc_t

0x6006,	// (0x0003443d) slider_set_pane_cp_vc

0x600e,	// (0x00034445) slider_set_pane_vc_g1

0x6017,	// (0x0003444e) slider_set_pane_vc_g2

0x0006,

0xfa3b,	// (0x0003de72) slider_set_pane_vc_g

0x3ab7,	// (0x00031eee) set_opt_bg_pane_g1_copy1

0x3abf,	// (0x00031ef6) set_opt_bg_pane_g2_copy1

0x6043,	// (0x0003447a) set_opt_bg_pane_g3_copy1

0x3acf,	// (0x00031f06) set_opt_bg_pane_g4_copy1

0x3ad7,	// (0x00031f0e) set_opt_bg_pane_g5_copy1

0x3adf,	// (0x00031f16) set_opt_bg_pane_g6_copy1

0x604b,	// (0x00034482) set_opt_bg_pane_g7_copy1

0x6055,	// (0x0003448c) set_opt_bg_pane_g8_copy1

0x605d,	// (0x00034494) set_opt_bg_pane_g9_copy1

0x33a4,	// (0x000317db) bg_set_opt_pane_cp_vc

0x6065,	// (0x0003449c) setting_slider_pane_vc_t1

0x5fea,	// (0x00034421) setting_slider_pane_vc_t2

0x5ff8,	// (0x0003442f) setting_slider_pane_vc_t3

0x0002,

0xfa4a,	// (0x0003de81) setting_slider_pane_vc_t

0x6006,	// (0x0003443d) slider_set_pane_vc

0x8c86,	// (0x000370bd) volume_set_pane_vc_g1

0x9037,	// (0x0003746e) volume_set_pane_vc_g2

0x9040,	// (0x00037477) volume_set_pane_vc_g3

0x9049,	// (0x00037480) volume_set_pane_vc_g4

0x9052,	// (0x00037489) volume_set_pane_vc_g5

0x905b,	// (0x00037492) volume_set_pane_vc_g6

0x9064,	// (0x0003749b) volume_set_pane_vc_g7

0x906d,	// (0x000374a4) volume_set_pane_vc_g8

0x9076,	// (0x000374ad) volume_set_pane_vc_g9

0x907f,	// (0x000374b6) volume_set_pane_vc_g10

0x0009,

0xfa51,	// (0x0003de88) volume_set_pane_vc_g

0x6074,	// (0x000344ab) volume_set_pane_vc

0x607c,	// (0x000344b3) button_value_adjust_pane_cp1_vc

0x6086,	// (0x000344bd) list_highlight_pane_cp2_vc

0x608f,	// (0x000344c6) list_set_pane_vc_ParamLimits

0x608f,	// (0x000344c6) list_set_pane_vc

0x60e1,	// (0x00034518) main_pane_set_vc_t1_ParamLimits

0x60e1,	// (0x00034518) main_pane_set_vc_t1

0x60f6,	// (0x0003452d) main_pane_set_vc_t2_ParamLimits

0x60f6,	// (0x0003452d) main_pane_set_vc_t2

0x6108,	// (0x0003453f) main_pane_set_vc_t3_ParamLimits

0x6108,	// (0x0003453f) main_pane_set_vc_t3

0x611a,	// (0x00034551) main_pane_set_vc_t4_ParamLimits

0x611a,	// (0x00034551) main_pane_set_vc_t4

0x0003,

0xfa66,	// (0x0003de9d) main_pane_set_vc_t_ParamLimits

0xfa66,	// (0x0003de9d) main_pane_set_vc_t

0x612c,	// (0x00034563) setting_code_pane_vc_ParamLimits

0x612c,	// (0x00034563) setting_code_pane_vc

0x613b,	// (0x00034572) setting_slider_graphic_pane_vc

0x613b,	// (0x00034572) setting_slider_pane_vc

0x613b,	// (0x00034572) setting_text_pane_vc

0x613b,	// (0x00034572) setting_volume_pane_vc

0x6143,	// (0x0003457a) scroll_pane_cp121_vc

0x3a2a,	// (0x00031e61) set_content_pane_vc

0x6181,	// (0x000345b8) button_value_adjust_pane_g1

0x618a,	// (0x000345c1) button_value_adjust_pane_g2

0x0001,

0xfab9,	// (0x0003def0) button_value_adjust_pane_g

0x6193,	// (0x000345ca) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6193,	// (0x000345ca) form_field_slider_wide_pane_vc_t1

0x61a7,	// (0x000345de) form_field_slider_wide_pane_vc_t2_ParamLimits

0x61a7,	// (0x000345de) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabe,	// (0x0003def5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabe,	// (0x0003def5) form_field_slider_wide_pane_vc_t

0x33f2,	// (0x00031829) input_focus_pane_cp10_vc_ParamLimits

0x33f2,	// (0x00031829) input_focus_pane_cp10_vc

0x61b9,	// (0x000345f0) slider_cont_pane_cp1_vc_ParamLimits

0x61b9,	// (0x000345f0) slider_cont_pane_cp1_vc

0x600e,	// (0x00034445) slider_form_pane_g1_cp2

0x6017,	// (0x0003444e) slider_form_pane_g2_cp2

0x61d2,	// (0x00034609) form_field_slider_pane_vc_t3

0x61e0,	// (0x00034617) form_field_slider_pane_vc_t4

0x61ee,	// (0x00034625) slider_form_pane_vc_ParamLimits

0x61ee,	// (0x00034625) slider_form_pane_vc

0x61fb,	// (0x00034632) form_field_slider_pane_vc_t1_ParamLimits

0x61fb,	// (0x00034632) form_field_slider_pane_vc_t1

0x61a7,	// (0x000345de) form_field_slider_pane_vc_t2_ParamLimits

0x61a7,	// (0x000345de) form_field_slider_pane_vc_t2

0x0001,

0xface,	// (0x0003df05) form_field_slider_pane_vc_t_ParamLimits

0xface,	// (0x0003df05) form_field_slider_pane_vc_t

0x33f2,	// (0x00031829) input_focus_pane_cp9_vc_ParamLimits

0x33f2,	// (0x00031829) input_focus_pane_cp9_vc

0x6217,	// (0x0003464e) slider_cont_pane_vc_ParamLimits

0x6217,	// (0x0003464e) slider_cont_pane_vc

0x6229,	// (0x00034660) list_form_graphic_pane_cp_vc_ParamLimits

0x6229,	// (0x00034660) list_form_graphic_pane_cp_vc

0x4b10,	// (0x00032f47) form_field_popup_wide_pane_vc_g1

0x623e,	// (0x00034675) form_field_popup_wide_pane_vc_t1_ParamLimits

0x623e,	// (0x00034675) form_field_popup_wide_pane_vc_t1

0x3a50,	// (0x00031e87) input_focus_pane_cp8_vc_ParamLimits

0x3a50,	// (0x00031e87) input_focus_pane_cp8_vc

0x6255,	// (0x0003468c) list_form_wide_pane_vc_ParamLimits

0x6255,	// (0x0003468c) list_form_wide_pane_vc

0x6261,	// (0x00034698) list_form_graphic_pane_vc_g1

0x6269,	// (0x000346a0) list_form_graphic_pane_vc_t1_ParamLimits

0x6269,	// (0x000346a0) list_form_graphic_pane_vc_t1

0x3400,	// (0x00031837) list_highlight_pane_cp5_vc_ParamLimits

0x3400,	// (0x00031837) list_highlight_pane_cp5_vc

0x6285,	// (0x000346bc) list_form_graphic_pane_vc_ParamLimits

0x6285,	// (0x000346bc) list_form_graphic_pane_vc

0x4b10,	// (0x00032f47) form_field_popup_pane_vc_g1

0x629b,	// (0x000346d2) form_field_popup_pane_vc_t1_ParamLimits

0x629b,	// (0x000346d2) form_field_popup_pane_vc_t1

0x3a50,	// (0x00031e87) input_focus_pane_cp7_vc_ParamLimits

0x3a50,	// (0x00031e87) input_focus_pane_cp7_vc

0x62b2,	// (0x000346e9) list_form_pane_vc_ParamLimits

0x62b2,	// (0x000346e9) list_form_pane_vc

0x62be,	// (0x000346f5) data_form_pane_vc_t1_ParamLimits

0x62be,	// (0x000346f5) data_form_pane_vc_t1

0x3ab7,	// (0x00031eee) input_focus_pane_vc_g1

0x3abf,	// (0x00031ef6) input_focus_pane_vc_g2

0x3ac7,	// (0x00031efe) input_focus_pane_vc_g3

0x3acf,	// (0x00031f06) input_focus_pane_vc_g4

0x3ad7,	// (0x00031f0e) input_focus_pane_vc_g5

0x3adf,	// (0x00031f16) input_focus_pane_vc_g6

0x3ae7,	// (0x00031f1e) input_focus_pane_vc_g7

0x3aef,	// (0x00031f26) input_focus_pane_vc_g8

0x3af7,	// (0x00031f2e) input_focus_pane_vc_g9

0x339a,	// (0x000317d1) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0003db0c) input_focus_pane_vc_g

0x4b04,	// (0x00032f3b) data_form_pane_vc_ParamLimits

0x4b04,	// (0x00032f3b) data_form_pane_vc

0x4b10,	// (0x00032f47) form_field_data_pane_vc_g1

0x62d9,	// (0x00034710) form_field_data_pane_vc_t1_ParamLimits

0x62d9,	// (0x00034710) form_field_data_pane_vc_t1

0x3a50,	// (0x00031e87) input_focus_pane_vc_ParamLimits

0x3a50,	// (0x00031e87) input_focus_pane_vc

0x62f3,	// (0x0003472a) button_value_adjust_pane_cp3_vc

0x62fb,	// (0x00034732) button_value_adjust_pane_cp5_vc

0x6303,	// (0x0003473a) form_field_data_pane_vc_ParamLimits

0x6303,	// (0x0003473a) form_field_data_pane_vc

0x631a,	// (0x00034751) form_field_data_pane_vc_cp2

0x6322,	// (0x00034759) form_field_data_wide_pane_vc_ParamLimits

0x6322,	// (0x00034759) form_field_data_wide_pane_vc

0x6338,	// (0x0003476f) form_field_data_wide_pane_vc_cp2

0x6340,	// (0x00034777) form_field_popup_pane_vc_ParamLimits

0x6340,	// (0x00034777) form_field_popup_pane_vc

0x6357,	// (0x0003478e) form_field_popup_wide_pane_vc_ParamLimits

0x6357,	// (0x0003478e) form_field_popup_wide_pane_vc

0x636d,	// (0x000347a4) form_field_slider_pane_vc_ParamLimits

0x636d,	// (0x000347a4) form_field_slider_pane_vc

0x6380,	// (0x000347b7) form_field_slider_wide_pane_vc_ParamLimits

0x6380,	// (0x000347b7) form_field_slider_wide_pane_vc

0x1e7b,	// (0x000302b2) grid_touch_1_pane_ParamLimits

0x1e7b,	// (0x000302b2) grid_touch_1_pane

0x1e8f,	// (0x000302c6) grid_touch_2_pane_ParamLimits

0x1e8f,	// (0x000302c6) grid_touch_2_pane

0x63b8,	// (0x000347ef) touch_pane_g1_ParamLimits

0x63b8,	// (0x000347ef) touch_pane_g1

0x6393,	// (0x000347ca) cell_app_pane_cp_wide_ParamLimits

0x6393,	// (0x000347ca) cell_app_pane_cp_wide

0x63a4,	// (0x000347db) grid_popup_fast_wide_pane_ParamLimits

0x63a4,	// (0x000347db) grid_popup_fast_wide_pane

0x63c6,	// (0x000347fd) scroll_pane_cp19_ParamLimits

0x63c6,	// (0x000347fd) scroll_pane_cp19

0x33a4,	// (0x000317db) bg_popup_window_pane_cp20

0x63da,	// (0x00034811) listscroll_popup_fast_wide_pane

0x46f4,	// (0x00032b2b) grid_indicator_nsta_pane

0x63e2,	// (0x00034819) clock_nsta_pane_g1

0x63eb,	// (0x00034822) clock_nsta_pane_t1

0x1eb9,	// (0x000302f0) cell_indicator_nsta_pane_ParamLimits

0x1eb9,	// (0x000302f0) cell_indicator_nsta_pane

0x63b8,	// (0x000347ef) cell_indicator_nsta_pane_g1

0x1ed6,	// (0x0003030d) cell_indicator_nsta_pane_g2

0x0001,

0xfad8,	// (0x0003df0f) cell_indicator_nsta_pane_g

0x6407,	// (0x0003483e) clock_nsta_pane_cp

0x640f,	// (0x00034846) indicator_nsta_pane_cp

0x6417,	// (0x0003484e) nsta_clock_indic_pane_g1

0x3445,	// (0x0003187c) grid_indicator_pane

0x3ebd,	// (0x000322f4) scroll_pane_cp29

0x8827,	// (0x00036c5e) indicator_nsta_pane_cp2_ParamLimits

0x8827,	// (0x00036c5e) indicator_nsta_pane_cp2

0x3400,	// (0x00031837) main_apps_wheel_pane

0x4c2c,	// (0x00033063) form_midp_field_text_pane_ParamLimits

0x4d59,	// (0x00033190) scroll_bar_cp050_ParamLimits

0x644f,	// (0x00034886) cell_indicator_pane_ParamLimits

0x644f,	// (0x00034886) cell_indicator_pane

0x646c,	// (0x000348a3) cell_indicator_pane_g1

0x1eec,	// (0x00030323) grid_wheel_folder_pane_ParamLimits

0x1eec,	// (0x00030323) grid_wheel_folder_pane

0x1efa,	// (0x00030331) list_wheel_apps_pane_ParamLimits

0x1efa,	// (0x00030331) list_wheel_apps_pane

0x1f08,	// (0x0003033f) main_apps_wheel_pane_g1_ParamLimits

0x1f08,	// (0x0003033f) main_apps_wheel_pane_g1

0x1f14,	// (0x0003034b) main_apps_wheel_pane_g2_ParamLimits

0x1f14,	// (0x0003034b) main_apps_wheel_pane_g2

0x0001,

0xfae7,	// (0x0003df1e) main_apps_wheel_pane_g_ParamLimits

0xfae7,	// (0x0003df1e) main_apps_wheel_pane_g

0x1f22,	// (0x00030359) main_apps_wheel_pane_t1_ParamLimits

0x1f22,	// (0x00030359) main_apps_wheel_pane_t1

0x1f36,	// (0x0003036d) list_wheel_apps_pane_g1

0x1f3e,	// (0x00030375) list_wheel_apps_pane_g2

0x1f46,	// (0x0003037d) list_wheel_apps_pane_g3

0x1f4e,	// (0x00030385) list_wheel_apps_pane_g4

0x1f58,	// (0x0003038f) list_wheel_apps_pane_g5

0x0004,

0xfaec,	// (0x0003df23) list_wheel_apps_pane_g

0x4310,	// (0x00032747) navi_icon_text_pane

0x1526,	// (0x0002f95d) aid_fill_nsta

0x1f6f,	// (0x000303a6) navi_icon_text_pane_g1

0x1f7b,	// (0x000303b2) navi_icon_text_pane_t1

0x41ac,	// (0x000325e3) list_set_graphic_pane_t1_ParamLimits

0x41ac,	// (0x000325e3) list_set_graphic_pane_t1

0x5430,	// (0x00033867) popup_midp_note_alarm_window_t6_ParamLimits

0x5430,	// (0x00033867) popup_midp_note_alarm_window_t6

0x5442,	// (0x00033879) popup_midp_note_alarm_window_t7_ParamLimits

0x5442,	// (0x00033879) popup_midp_note_alarm_window_t7

0x5454,	// (0x0003388b) popup_midp_note_alarm_window_t8_ParamLimits

0x5454,	// (0x0003388b) popup_midp_note_alarm_window_t8

0x5466,	// (0x0003389d) popup_midp_note_alarm_window_t9_ParamLimits

0x5466,	// (0x0003389d) popup_midp_note_alarm_window_t9

0x5478,	// (0x000338af) popup_midp_note_alarm_window_t10_ParamLimits

0x5478,	// (0x000338af) popup_midp_note_alarm_window_t10

0x548a,	// (0x000338c1) popup_midp_note_alarm_window_t11_ParamLimits

0x548a,	// (0x000338c1) popup_midp_note_alarm_window_t11

0x549c,	// (0x000338d3) scroll_pane_cp17_ParamLimits

0x549c,	// (0x000338d3) scroll_pane_cp17

0x8c86,	// (0x000370bd) volume_small_pane_cp_g1

0x90e2,	// (0x00037519) volume_small_pane_cp_g2

0x90eb,	// (0x00037522) volume_small_pane_cp_g3

0x90f4,	// (0x0003752b) volume_small_pane_cp_g4

0x90fd,	// (0x00037534) volume_small_pane_cp_g5

0x9106,	// (0x0003753d) volume_small_pane_cp_g6

0x910f,	// (0x00037546) volume_small_pane_cp_g7

0x9118,	// (0x0003754f) volume_small_pane_cp_g8

0x9121,	// (0x00037558) volume_small_pane_cp_g9

0x912a,	// (0x00037561) volume_small_pane_cp_g10

0x44bc,	// (0x000328f3) midp_ticker_pane_g1_ParamLimits

0x44c8,	// (0x000328ff) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0003dbd4) midp_ticker_pane_g_ParamLimits

0x0e45,	// (0x0002f27c) midp_ticker_pane_t1_ParamLimits

0x1546,	// (0x0002f97d) aid_fill_nsta_2

0x4d45,	// (0x0003317c) list_form2_midp_pane

0x5b2f,	// (0x00033f66) midp_editing_number_pane_ParamLimits

0x5b3e,	// (0x00033f75) midp_ticker_pane_ParamLimits

0x6476,	// (0x000348ad) form2_midp_field_pane

0x647e,	// (0x000348b5) scroll_pane_cp51

0x649e,	// (0x000348d5) form2_midp_button_pane_ParamLimits

0x649e,	// (0x000348d5) form2_midp_button_pane

0x64b0,	// (0x000348e7) form2_midp_content_pane_ParamLimits

0x64b0,	// (0x000348e7) form2_midp_content_pane

0x64ca,	// (0x00034901) form2_midp_field_choice_group_pane

0x64d2,	// (0x00034909) form2_midp_field_pane_g1

0x64da,	// (0x00034911) form2_midp_field_pane_g2

0x64e2,	// (0x00034919) form2_midp_field_pane_g3

0x64ea,	// (0x00034921) form2_midp_field_pane_g4

0x0003,

0xfb11,	// (0x0003df48) form2_midp_field_pane_g

0x64f2,	// (0x00034929) form2_midp_gauge_slider_pane

0x64fa,	// (0x00034931) form2_midp_gauge_wait_pane

0x6502,	// (0x00034939) form2_midp_image_pane_ParamLimits

0x6502,	// (0x00034939) form2_midp_image_pane

0x651d,	// (0x00034954) form2_midp_label_pane_ParamLimits

0x651d,	// (0x00034954) form2_midp_label_pane

0x1fa9,	// (0x000303e0) form2_midp_label_pane_cp_ParamLimits

0x1fa9,	// (0x000303e0) form2_midp_label_pane_cp

0x6536,	// (0x0003496d) form2_midp_string_pane_ParamLimits

0x6536,	// (0x0003496d) form2_midp_string_pane

0x7835,	// (0x00035c6c) form2_midp_text_pane_ParamLimits

0x7835,	// (0x00035c6c) form2_midp_text_pane

0x6548,	// (0x0003497f) form2_midp_time_pane

0x6558,	// (0x0003498f) input_focus_pane_cp51_ParamLimits

0x6558,	// (0x0003498f) input_focus_pane_cp51

0x6570,	// (0x000349a7) form2_midp_label_pane_t1_ParamLimits

0x6570,	// (0x000349a7) form2_midp_label_pane_t1

0x7850,	// (0x00035c87) form2_mdip_text_pane_t1_ParamLimits

0x7850,	// (0x00035c87) form2_mdip_text_pane_t1

0x786c,	// (0x00035ca3) form2_midp_time_pane_t1

0x65b8,	// (0x000349ef) form2_midp_gauge_slider_pane_t1

0x1fca,	// (0x00030401) form2_midp_gauge_slider_pane_t2

0x1fdc,	// (0x00030413) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1a,	// (0x0003df51) form2_midp_gauge_slider_pane_t

0x65ca,	// (0x00034a01) form2_midp_slider_pane

0x65d6,	// (0x00034a0d) form2_midp_gauge_wait_pane_t1

0x65e4,	// (0x00034a1b) form2_midp_wait_pane_ParamLimits

0x65e4,	// (0x00034a1b) form2_midp_wait_pane

0x1fee,	// (0x00030425) list_single_2graphic_pane_cp4_ParamLimits

0x1fee,	// (0x00030425) list_single_2graphic_pane_cp4

0x1959,	// (0x0002fd90) list_single_midp_graphic_pane_cp_ParamLimits

0x1959,	// (0x0002fd90) list_single_midp_graphic_pane_cp

0x33a4,	// (0x000317db) list_highlight_pane_cp20

0x660f,	// (0x00034a46) list_single_2graphic_pane_g1_cp4

0x5e6c,	// (0x000342a3) list_single_2graphic_pane_g2_cp4

0x6617,	// (0x00034a4e) list_single_2graphic_pane_t1_cp4

0x3400,	// (0x00031837) list_highlight_pane_cp21

0x6626,	// (0x00034a5d) list_single_midp_graphic_pane_g4_cp

0x6635,	// (0x00034a6c) list_single_midp_graphic_pane_t1_cp

0x2005,	// (0x0003043c) form2_mdip_string_pane_t1_ParamLimits

0x2005,	// (0x0003043c) form2_mdip_string_pane_t1

0x33a4,	// (0x000317db) bg_wml_button_pane_cp2

0x339a,	// (0x000317d1) form2_midp_image_pane_g1

0x832e,	// (0x00036765) list_double_large_graphic_pane_g5_ParamLimits

0x832e,	// (0x00036765) list_double_large_graphic_pane_g5

0x0d99,	// (0x0002f1d0) midp_form_pane_ParamLimits

0x3400,	// (0x00031837) main_apps_wheel_pane_ParamLimits

0x1282,	// (0x0002f6b9) popup_preview_window_ParamLimits

0x1282,	// (0x0002f6b9) popup_preview_window

0x47b9,	// (0x00032bf0) popup_touch_info_window_ParamLimits

0x47b9,	// (0x00032bf0) popup_touch_info_window

0x47d7,	// (0x00032c0e) popup_touch_menu_window_ParamLimits

0x47d7,	// (0x00032c0e) popup_touch_menu_window

0x3390,	// (0x000317c7) bg_popup_sub_pane_cp6

0xae82,	// (0x000392b9) list_touch_menu_pane

0xae8a,	// (0x000392c1) list_single_touch_menu_pane_ParamLimits

0xae8a,	// (0x000392c1) list_single_touch_menu_pane

0xae9f,	// (0x000392d6) list_single_touch_menu_pane_t1

0x3400,	// (0x00031837) bg_popup_sub_pane_cp7_ParamLimits

0x3400,	// (0x00031837) bg_popup_sub_pane_cp7

0xaead,	// (0x000392e4) heading_sub_pane

0xaeb5,	// (0x000392ec) list_touch_info_pane_ParamLimits

0xaeb5,	// (0x000392ec) list_touch_info_pane

0xaec4,	// (0x000392fb) list_single_touch_info_pane_ParamLimits

0xaec4,	// (0x000392fb) list_single_touch_info_pane

0xaed6,	// (0x0003930d) list_single_touch_info_pane_t1

0xaee4,	// (0x0003931b) list_single_touch_info_pane_t2

0x0001,

0xfb28,	// (0x0003df5f) list_single_touch_info_pane_t

0x4492,	// (0x000328c9) bg_popup_heading_pane_cp

0xaef2,	// (0x00039329) heading_sub_pane_t1

0x4aca,	// (0x00032f01) bg_popup_preview_window_pane_cp_ParamLimits

0x4aca,	// (0x00032f01) bg_popup_preview_window_pane_cp

0xaead,	// (0x000392e4) heading_preview_pane

0xaeb5,	// (0x000392ec) list_preview_pane_ParamLimits

0xaeb5,	// (0x000392ec) list_preview_pane

0xaf00,	// (0x00039337) popup_preview_window_g1

0xaec4,	// (0x000392fb) list_single_preview_pane_ParamLimits

0xaec4,	// (0x000392fb) list_single_preview_pane

0xaf08,	// (0x0003933f) list_single_preview_pane_g1

0xaf10,	// (0x00039347) list_single_preview_pane_t1

0xaed6,	// (0x0003930d) list_single_preview_pane_t2

0x0001,

0xfb2d,	// (0x0003df64) list_single_preview_pane_t

0xaf1e,	// (0x00039355) bg_popup_heading_pane_cp2_ParamLimits

0xaf1e,	// (0x00039355) bg_popup_heading_pane_cp2

0xaf34,	// (0x0003936b) heading_preview_pane_g1

0xaf3c,	// (0x00039373) heading_preview_pane_t1_ParamLimits

0xaf3c,	// (0x00039373) heading_preview_pane_t1

0x345c,	// (0x00031893) soft_indicator_pane_t1_ParamLimits

0x39c3,	// (0x00031dfa) scroll_pane_ParamLimits

0x3dc2,	// (0x000321f9) scroll_sc2_left_pane

0x3db9,	// (0x000321f0) scroll_sc2_right_pane

0x3de1,	// (0x00032218) scroll_bg_pane_g1_ParamLimits

0x3df6,	// (0x0003222d) scroll_bg_pane_g2_ParamLimits

0x3e0e,	// (0x00032245) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0003db63) scroll_bg_pane_g_ParamLimits

0x3de1,	// (0x00032218) scroll_handle_pane_g1_ParamLimits

0x3e30,	// (0x00032267) scroll_handle_pane_g2_ParamLimits

0x3e0e,	// (0x00032245) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0003db6a) scroll_handle_pane_g_ParamLimits

0x4702,	// (0x00032b39) popup_choice_list_window_ParamLimits

0x4702,	// (0x00032b39) popup_choice_list_window

0x4924,	// (0x00032d5b) choice_list_pane

0x49a6,	// (0x00032ddd) cell_toolbar_pane_t1

0x49ce,	// (0x00032e05) toolbar_button_pane_ParamLimits

0x587a,	// (0x00033cb1) ai_gene_pane_1_t2_ParamLimits

0x587a,	// (0x00033cb1) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0003dd82) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0003dd82) ai_gene_pane_1_t

0xaf59,	// (0x00039390) scroll_sc2_left_pane_g1

0xaf59,	// (0x00039390) scroll_sc2_right_pane_g1

0x3ba7,	// (0x00031fde) bg_popup_sub_pane_cp10

0xaf63,	// (0x0003939a) list_choice_list_pane

0xaf7a,	// (0x000393b1) list_single_choice_list_pane_ParamLimits

0xaf7a,	// (0x000393b1) list_single_choice_list_pane

0xaf8e,	// (0x000393c5) list_single_choice_list_pane_g1

0xaf96,	// (0x000393cd) list_single_choice_list_pane_t1_ParamLimits

0xaf96,	// (0x000393cd) list_single_choice_list_pane_t1

0xafab,	// (0x000393e2) choice_list_pane_g1

0xafb3,	// (0x000393ea) choice_list_pane_t1

0x3390,	// (0x000317c7) input_focus_pane_cp11

0x3d1c,	// (0x00032153) title_pane_stacon_g2_ParamLimits

0x3d1c,	// (0x00032153) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0003db49) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0003db49) title_pane_stacon_g

0x4492,	// (0x000328c9) cursor_press_pane

0x0f41,	// (0x0002f378) popup_fep_hwr_window_ParamLimits

0x0f41,	// (0x0002f378) popup_fep_hwr_window

0x4756,	// (0x00032b8d) popup_fep_vkb_window_ParamLimits

0x4756,	// (0x00032b8d) popup_fep_vkb_window

0xafc1,	// (0x000393f8) cursor_press_pane_g1

0x0002,

0xfb56,	// (0x0003df8d) fep_vkb_side_pane_g_ParamLimits

0x915e,	// (0x00037595) fep_hwr_candidate_pane_ParamLimits

0x915e,	// (0x00037595) fep_hwr_candidate_pane

0x9188,	// (0x000375bf) fep_hwr_side_pane_ParamLimits

0x9188,	// (0x000375bf) fep_hwr_side_pane

0x91a8,	// (0x000375df) fep_hwr_top_pane_ParamLimits

0x91a8,	// (0x000375df) fep_hwr_top_pane

0x91c0,	// (0x000375f7) fep_hwr_write_pane_ParamLimits

0x91c0,	// (0x000375f7) fep_hwr_write_pane

0xfb56,	// (0x0003df8d) fep_vkb_side_pane_g

0xafc9,	// (0x00039400) fep_hwr_top_pane_g1

0xafdb,	// (0x00039412) fep_hwr_top_pane_g2

0x91ec,	// (0x00037623) fep_hwr_top_pane_g3

0x0002,

0xfb32,	// (0x0003df69) fep_hwr_top_pane_g

0x9201,	// (0x00037638) fep_hwr_top_text_pane

0x3f83,	// (0x000323ba) fep_hwr_top_text_pane_g1

0xb011,	// (0x00039448) fep_hwr_top_text_pane_t1

0x92f7,	// (0x0003772e) fep_hwr_candidate_pane_g1

0xb26b,	// (0x000396a2) fep_vkb_keypad_pane_g3_ParamLimits

0xb26b,	// (0x000396a2) fep_vkb_keypad_pane_g3

0xb293,	// (0x000396ca) fep_vkb_keypad_pane_g4_ParamLimits

0xb293,	// (0x000396ca) fep_vkb_keypad_pane_g4

0xb302,	// (0x00039739) fep_vkb_bottom_pane_g2_ParamLimits

0xb302,	// (0x00039739) fep_vkb_bottom_pane_g2

0x0001,

0xfb5d,	// (0x0003df94) fep_vkb_bottom_pane_g_ParamLimits

0xfb5d,	// (0x0003df94) fep_vkb_bottom_pane_g

0xaf59,	// (0x00039390) cell_vkb_side_pane_g2

0x0001,

0xfb67,	// (0x0003df9e) cell_vkb_side_pane_g

0xb38d,	// (0x000397c4) cell_vkb_side_pane_t1

0xb39b,	// (0x000397d2) cell_vkb_side_pane_t1_copy1

0xaf59,	// (0x00039390) bg_fep_vkb_candidate_pane_g2

0xb4cd,	// (0x00039904) cell_vkb_candidate_pane_ParamLimits

0xb01f,	// (0x00039456) aid_size_cell_vkb_ParamLimits

0xb01f,	// (0x00039456) aid_size_cell_vkb

0xb4cd,	// (0x00039904) cell_vkb_candidate_pane

0x9311,	// (0x00037748) bg_popup_fep_shadow_pane_g1

0xb0ad,	// (0x000394e4) fep_vkb_bottom_pane_ParamLimits

0xb0ad,	// (0x000394e4) fep_vkb_bottom_pane

0xb0ea,	// (0x00039521) fep_vkb_candidate_pane_ParamLimits

0xb0ea,	// (0x00039521) fep_vkb_candidate_pane

0xb106,	// (0x0003953d) fep_vkb_keypad_pane_ParamLimits

0xb106,	// (0x0003953d) fep_vkb_keypad_pane

0xb14c,	// (0x00039583) fep_vkb_side_pane_ParamLimits

0xb14c,	// (0x00039583) fep_vkb_side_pane

0xb188,	// (0x000395bf) fep_vkb_top_pane_ParamLimits

0xb188,	// (0x000395bf) fep_vkb_top_pane

0xb1c4,	// (0x000395fb) fep_vkb_top_pane_g1_ParamLimits

0xb1c4,	// (0x000395fb) fep_vkb_top_pane_g1

0xb1d3,	// (0x0003960a) fep_vkb_top_pane_g2_ParamLimits

0xb1d3,	// (0x0003960a) fep_vkb_top_pane_g2

0xb1e2,	// (0x00039619) fep_vkb_top_pane_g3_ParamLimits

0xb1e2,	// (0x00039619) fep_vkb_top_pane_g3

0x0003,

0xfb4d,	// (0x0003df84) fep_vkb_top_pane_g_ParamLimits

0xfb4d,	// (0x0003df84) fep_vkb_top_pane_g

0xb200,	// (0x00039637) fep_vkb_top_text_pane_ParamLimits

0xb200,	// (0x00039637) fep_vkb_top_text_pane

0x209d,	// (0x000304d4) fep_vkb_side_pane_g1_ParamLimits

0x209d,	// (0x000304d4) fep_vkb_side_pane_g1

0xb25a,	// (0x00039691) grid_vkb_side_pane_ParamLimits

0xb25a,	// (0x00039691) grid_vkb_side_pane

0x9319,	// (0x00037750) bg_popup_fep_shadow_pane_g2

0x9322,	// (0x00037759) bg_popup_fep_shadow_pane_g3

0x932a,	// (0x00037761) bg_popup_fep_shadow_pane_g4

0x9333,	// (0x0003776a) bg_popup_fep_shadow_pane_g5

0x933d,	// (0x00037774) bg_popup_fep_shadow_pane_g6

0x9345,	// (0x0003777c) bg_popup_fep_shadow_pane_g7

0x3ad7,	// (0x00031f0e) bg_popup_fep_shadow_pane_g8

0xb2b1,	// (0x000396e8) grid_vkb_keypad_number_pane_ParamLimits

0xb2b1,	// (0x000396e8) grid_vkb_keypad_number_pane

0xb2c1,	// (0x000396f8) grid_vkb_keypad_pane_ParamLimits

0xb2c1,	// (0x000396f8) grid_vkb_keypad_pane

0xb2e7,	// (0x0003971e) fep_vkb_bottom_pane_g1_ParamLimits

0xb2e7,	// (0x0003971e) fep_vkb_bottom_pane_g1

0xb310,	// (0x00039747) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb310,	// (0x00039747) grid_vkb_keypad_bottom_left_pane

0xb325,	// (0x0003975c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb325,	// (0x0003975c) grid_vkb_keypad_bottom_right_pane

0xb33a,	// (0x00039771) fep_vkb_top_text_pane_g1

0x20e4,	// (0x0003051b) fep_vkb_top_text_pane_t1

0x20f6,	// (0x0003052d) cell_vkb_side_pane_ParamLimits

0x20f6,	// (0x0003052d) cell_vkb_side_pane

0xaf59,	// (0x00039390) cell_vkb_side_pane_g1

0xb3a9,	// (0x000397e0) cell_vkb_keypad_pane_ParamLimits

0xb3a9,	// (0x000397e0) cell_vkb_keypad_pane

0xb424,	// (0x0003985b) cell_vkb_keypad_pane_g1

0x0008,

0xfb7a,	// (0x0003dfb1) bg_popup_fep_shadow_pane_g

0xaf59,	// (0x00039390) cell_hwr_side_pane_g1

0xaf59,	// (0x00039390) cell_hwr_side_pane_g2

0xb42e,	// (0x00039865) cell_vkb_keypad_pane_t1

0x210c,	// (0x00030543) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x210c,	// (0x00030543) cell_vkb_keypad_bottom_left_pane

0x2121,	// (0x00030558) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x2121,	// (0x00030558) cell_vkb_keypad_bottom_right_pane

0xaf59,	// (0x00039390) cell_vkb_keypad_bottom_left_pane_g1

0xaf59,	// (0x00039390) cell_vkb_keypad_bottom_right_pane_g1

0xb492,	// (0x000398c9) cell_vkb_keypad_number_pane_ParamLimits

0xb492,	// (0x000398c9) cell_vkb_keypad_number_pane

0xb4b1,	// (0x000398e8) cell_vkb_keypad_number_pane_g1

0xb4bb,	// (0x000398f2) cell_vkb_keypad_number_pane_g2

0xb4c4,	// (0x000398fb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6c,	// (0x0003dfa3) cell_vkb_keypad_number_pane_g

0xb42e,	// (0x00039865) cell_vkb_keypad_number_pane_t1

0xb4ea,	// (0x00039921) fep_vkb_candidate_pane_g1

0x0001,

0xfb67,	// (0x0003df9e) cell_hwr_side_pane_g

0xb511,	// (0x00039948) cell_hwr_side_pane_t1

0x9357,	// (0x0003778e) cell_hwr_side_pane_t1_copy1

0xb1f2,	// (0x00039629) cell_hwr_candidate_pane_g1

0x9365,	// (0x0003779c) cell_hwr_candidate_pane_t1

0xaf59,	// (0x00039390) cell_vkb_candidate_pane_g2

0xb597,	// (0x000399ce) cell_vkb_candidate_pane_t1

0xb503,	// (0x0003993a) bg_popup_fep_shadow_pane_ParamLimits

0xb503,	// (0x0003993a) bg_popup_fep_shadow_pane

0xf584,	// (0x0003d9bb) bg_fep_hwr_top_pane_g4

0xafed,	// (0x00039424) bg_hwr_side_pane_g1_ParamLimits

0xafed,	// (0x00039424) bg_hwr_side_pane_g1

0xf0d0,	// (0x0003d507) cell_hwr_side_pane_ParamLimits

0xf0d0,	// (0x0003d507) cell_hwr_side_pane

0x9278,	// (0x000376af) fep_hwr_write_pane_g1_ParamLimits

0x9278,	// (0x000376af) fep_hwr_write_pane_g1

0x9285,	// (0x000376bc) fep_hwr_write_pane_g2_ParamLimits

0x9285,	// (0x000376bc) fep_hwr_write_pane_g2

0x9292,	// (0x000376c9) fep_hwr_write_pane_g3_ParamLimits

0x9292,	// (0x000376c9) fep_hwr_write_pane_g3

0xf0f0,	// (0x0003d527) fep_hwr_write_pane_g4_ParamLimits

0xf0f0,	// (0x0003d527) fep_hwr_write_pane_g4

0x0005,

0xfb39,	// (0x0003df70) fep_hwr_write_pane_g_ParamLimits

0xfb39,	// (0x0003df70) fep_hwr_write_pane_g

0xf584,	// (0x0003d9bb) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xf584,	// (0x0003d9bb) bg_fep_hwr_candidate_pane_g2

0x92b5,	// (0x000376ec) cell_hwr_candidate_pane_ParamLimits

0x92b5,	// (0x000376ec) cell_hwr_candidate_pane

0x92f7,	// (0x0003772e) fep_hwr_candidate_pane_g1_ParamLimits

0xb04d,	// (0x00039484) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb04d,	// (0x00039484) bg_popup_fep_shadow_pane_cp2

0xb1f2,	// (0x00039629) fep_vkb_top_pane_g4_ParamLimits

0xb1f2,	// (0x00039629) fep_vkb_top_pane_g4

0xb238,	// (0x0003966f) fep_vkb_side_pane_g2_ParamLimits

0xb238,	// (0x0003966f) fep_vkb_side_pane_g2

0xe734,	// (0x0003cb6b) list_setting_pane_t4_ParamLimits

0xe734,	// (0x0003cb6b) list_setting_pane_t4

0xe7b6,	// (0x0003cbed) list_setting_number_pane_t5_ParamLimits

0xe7b6,	// (0x0003cbed) list_setting_number_pane_t5

0x0cde,	// (0x0002f115) list_double_heading_pane_cp2_ParamLimits

0x0cde,	// (0x0002f115) list_double_heading_pane_cp2

0x3a6a,	// (0x00031ea1) list_double_heading_pane_g1_cp2_ParamLimits

0x3a6a,	// (0x00031ea1) list_double_heading_pane_g1_cp2

0x3a76,	// (0x00031ead) list_double_heading_pane_g2_cp2_ParamLimits

0x3a76,	// (0x00031ead) list_double_heading_pane_g2_cp2

0xb5a5,	// (0x000399dc) list_double_heading_pane_t1_cp2_ParamLimits

0xb5a5,	// (0x000399dc) list_double_heading_pane_t1_cp2

0xb5bb,	// (0x000399f2) list_double_heading_pane_t2_cp2_ParamLimits

0xb5bb,	// (0x000399f2) list_double_heading_pane_t2_cp2

0x3388,	// (0x000317bf) aid_value_unit2

0x7e7e,	// (0x000362b5) popup_preview_fixed_window

0x353c,	// (0x00031973) bg_popup_preview_window_pane_cp02

0xb5cd,	// (0x00039a04) list_preview_fixed_pane

0xb613,	// (0x00039a4a) list_empty_pane_fp_ParamLimits

0xb613,	// (0x00039a4a) list_empty_pane_fp

0xb613,	// (0x00039a4a) list_single_cale_day_pane_fp_ParamLimits

0xb613,	// (0x00039a4a) list_single_cale_day_pane_fp

0xb613,	// (0x00039a4a) list_single_graphic_heading_pane_fp_ParamLimits

0xb613,	// (0x00039a4a) list_single_graphic_heading_pane_fp

0xb613,	// (0x00039a4a) list_single_graphic_pane_fp_ParamLimits

0xb613,	// (0x00039a4a) list_single_graphic_pane_fp

0xb613,	// (0x00039a4a) list_single_heading_pane_fp_ParamLimits

0xb613,	// (0x00039a4a) list_single_heading_pane_fp

0xb613,	// (0x00039a4a) list_single_pane_fp_ParamLimits

0xb613,	// (0x00039a4a) list_single_pane_fp

0xb62a,	// (0x00039a61) list_single_pane_fp_g1_ParamLimits

0xb62a,	// (0x00039a61) list_single_pane_fp_g1

0x8316,	// (0x0003674d) list_single_pane_fp_g2_ParamLimits

0x8316,	// (0x0003674d) list_single_pane_fp_g2

0x787f,	// (0x00035cb6) list_single_pane_fp_g3_ParamLimits

0x787f,	// (0x00035cb6) list_single_pane_fp_g3

0xb636,	// (0x00039a6d) list_single_pane_fp_g4_ParamLimits

0xb636,	// (0x00039a6d) list_single_pane_fp_g4

0x0003,

0xfb9b,	// (0x0003dfd2) list_single_pane_fp_g_ParamLimits

0xfb9b,	// (0x0003dfd2) list_single_pane_fp_g

0x7893,	// (0x00035cca) list_single_pane_fp_t1_ParamLimits

0x7893,	// (0x00035cca) list_single_pane_fp_t1

0x78aa,	// (0x00035ce1) list_single_graphic_pane_fp_g1_ParamLimits

0x78aa,	// (0x00035ce1) list_single_graphic_pane_fp_g1

0xb62a,	// (0x00039a61) list_single_graphic_pane_fp_g2_ParamLimits

0xb62a,	// (0x00039a61) list_single_graphic_pane_fp_g2

0x8316,	// (0x0003674d) list_single_graphic_pane_fp_g3_ParamLimits

0x8316,	// (0x0003674d) list_single_graphic_pane_fp_g3

0x787f,	// (0x00035cb6) list_single_graphic_pane_fp_g4_ParamLimits

0x787f,	// (0x00035cb6) list_single_graphic_pane_fp_g4

0xb636,	// (0x00039a6d) list_single_graphic_pane_fp_g5_ParamLimits

0xb636,	// (0x00039a6d) list_single_graphic_pane_fp_g5

0x0004,

0xfba4,	// (0x0003dfdb) list_single_graphic_pane_fp_g_ParamLimits

0xfba4,	// (0x0003dfdb) list_single_graphic_pane_fp_g

0x78b6,	// (0x00035ced) list_single_graphic_pane_fp_t1_ParamLimits

0x78b6,	// (0x00035ced) list_single_graphic_pane_fp_t1

0x78aa,	// (0x00035ce1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x78aa,	// (0x00035ce1) list_single_graphic_heading_pane_fp_g1

0xb62a,	// (0x00039a61) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb62a,	// (0x00039a61) list_single_graphic_heading_pane_fp_g2

0x8316,	// (0x0003674d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8316,	// (0x0003674d) list_single_graphic_heading_pane_fp_g3

0x787f,	// (0x00035cb6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x787f,	// (0x00035cb6) list_single_graphic_heading_pane_fp_g4

0xb636,	// (0x00039a6d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb636,	// (0x00039a6d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba4,	// (0x0003dfdb) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0003dfdb) list_single_graphic_heading_pane_fp_g

0x78cc,	// (0x00035d03) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x78cc,	// (0x00035d03) list_single_graphic_heading_pane_fp_t1

0x78e2,	// (0x00035d19) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x78e2,	// (0x00035d19) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0003dfe6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0003dfe6) list_single_graphic_heading_pane_fp_t

0x78f4,	// (0x00035d2b) list_single_cale_day_pane_fp_g1_ParamLimits

0x78f4,	// (0x00035d2b) list_single_cale_day_pane_fp_g1

0xb642,	// (0x00039a79) list_single_cale_day_pane_fp_g2_ParamLimits

0xb642,	// (0x00039a79) list_single_cale_day_pane_fp_g2

0x792c,	// (0x00035d63) list_single_cale_day_pane_fp_g3_ParamLimits

0x792c,	// (0x00035d63) list_single_cale_day_pane_fp_g3

0x7954,	// (0x00035d8b) list_single_cale_day_pane_fp_g4_ParamLimits

0x7954,	// (0x00035d8b) list_single_cale_day_pane_fp_g4

0x7978,	// (0x00035daf) list_single_cale_day_pane_fp_g5_ParamLimits

0x7978,	// (0x00035daf) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb4,	// (0x0003dfeb) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb4,	// (0x0003dfeb) list_single_cale_day_pane_fp_g

0x799c,	// (0x00035dd3) list_single_cale_day_pane_fp_t1_ParamLimits

0x799c,	// (0x00035dd3) list_single_cale_day_pane_fp_t1

0x79c2,	// (0x00035df9) list_single_cale_day_pane_fp_t2_ParamLimits

0x79c2,	// (0x00035df9) list_single_cale_day_pane_fp_t2

0x79db,	// (0x00035e12) list_single_cale_day_pane_fp_t3_ParamLimits

0x79db,	// (0x00035e12) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbf,	// (0x0003dff6) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbf,	// (0x0003dff6) list_single_cale_day_pane_fp_t

0xb62a,	// (0x00039a61) list_empty_pane_fp_g1_ParamLimits

0xb62a,	// (0x00039a61) list_empty_pane_fp_g1

0x79f4,	// (0x00035e2b) list_empty_pane_fp_t1

0x7a02,	// (0x00035e39) list_empty_pane_fp_t2

0x0001,

0xfbc6,	// (0x0003dffd) list_empty_pane_fp_t

0xb62a,	// (0x00039a61) list_single_heading_pane_fp_g1_ParamLimits

0xb62a,	// (0x00039a61) list_single_heading_pane_fp_g1

0x8316,	// (0x0003674d) list_single_heading_pane_fp_g2_ParamLimits

0x8316,	// (0x0003674d) list_single_heading_pane_fp_g2

0x787f,	// (0x00035cb6) list_single_heading_pane_fp_g3_ParamLimits

0x787f,	// (0x00035cb6) list_single_heading_pane_fp_g3

0x0002,

0xfbcb,	// (0x0003e002) list_single_heading_pane_fp_g_ParamLimits

0xfbcb,	// (0x0003e002) list_single_heading_pane_fp_g

0x7a10,	// (0x00035e47) list_single_heading_pane_fp_t1_ParamLimits

0x7a10,	// (0x00035e47) list_single_heading_pane_fp_t1

0x7a22,	// (0x00035e59) list_single_heading_pane_fp_t2_ParamLimits

0x7a22,	// (0x00035e59) list_single_heading_pane_fp_t2

0x0001,

0xfbd2,	// (0x0003e009) list_single_heading_pane_fp_t_ParamLimits

0xfbd2,	// (0x0003e009) list_single_heading_pane_fp_t

0x3bb3,	// (0x00031fea) aid_size_cell_fast

0x351f,	// (0x00031956) soft_indicator_pane_cp1_t1

0x3bf0,	// (0x00032027) cell_app_pane_cp2_ParamLimits

0x3bf0,	// (0x00032027) cell_app_pane_cp2

0x9147,	// (0x0003757e) fep_hwr_candidate_drop_down_list_pane

0x016e,	// (0x0002e5a5) fep_hwr_candidate_pane_g3_ParamLimits

0x016e,	// (0x0002e5a5) fep_hwr_candidate_pane_g3

0x017b,	// (0x0002e5b2) fep_hwr_candidate_pane_g4_ParamLimits

0x017b,	// (0x0002e5b2) fep_hwr_candidate_pane_g4

0x0002,

0xfb46,	// (0x0003df7d) fep_hwr_candidate_pane_g_ParamLimits

0xfb46,	// (0x0003df7d) fep_hwr_candidate_pane_g

0xb0d9,	// (0x00039510) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb0d9,	// (0x00039510) fep_vkb_candidate_drop_down_list_pane

0xb4f2,	// (0x00039929) fep_vkb_candidate_pane_g3

0xb4fa,	// (0x00039931) fep_vkb_candidate_pane_g4

0x0002,

0xfb73,	// (0x0003dfaa) fep_vkb_candidate_pane_g

0xb1f2,	// (0x00039629) cell_hwr_candidate_pane_g1_ParamLimits

0xb51f,	// (0x00039956) cell_hwr_candidate_pane_g3_ParamLimits

0xb51f,	// (0x00039956) cell_hwr_candidate_pane_g3

0xb540,	// (0x00039977) cell_hwr_candidate_pane_g4_ParamLimits

0xb540,	// (0x00039977) cell_hwr_candidate_pane_g4

0x0002,

0xfb8d,	// (0x0003dfc4) cell_hwr_candidate_pane_g_ParamLimits

0xfb8d,	// (0x0003dfc4) cell_hwr_candidate_pane_g

0xb561,	// (0x00039998) cell_vkb_candidate_pane_g3_ParamLimits

0xb561,	// (0x00039998) cell_vkb_candidate_pane_g3

0xb57c,	// (0x000399b3) cell_vkb_candidate_pane_g4_ParamLimits

0xb57c,	// (0x000399b3) cell_vkb_candidate_pane_g4

0xb64e,	// (0x00039a85) cell_app_pane_cp2_g1_ParamLimits

0xb64e,	// (0x00039a85) cell_app_pane_cp2_g1

0xb66c,	// (0x00039aa3) cell_app_pane_cp2_g2_ParamLimits

0xb66c,	// (0x00039aa3) cell_app_pane_cp2_g2

0x0001,

0xfbd7,	// (0x0003e00e) cell_app_pane_cp2_g_ParamLimits

0xfbd7,	// (0x0003e00e) cell_app_pane_cp2_g

0xb678,	// (0x00039aaf) cell_app_pane_cp2_t1_ParamLimits

0xb678,	// (0x00039aaf) cell_app_pane_cp2_t1

0x3a50,	// (0x00031e87) grid_highlight_pane_cp1_ParamLimits

0x3a50,	// (0x00031e87) grid_highlight_pane_cp1

0x9383,	// (0x000377ba) cell_hwr_candidate_pane_cp1_ParamLimits

0x9383,	// (0x000377ba) cell_hwr_candidate_pane_cp1

0xb1f2,	// (0x00039629) fep_hwr_candidate_drop_down_list_pane_g1

0xb68a,	// (0x00039ac1) fep_hwr_candidate_drop_down_list_pane_g2

0xb697,	// (0x00039ace) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbdc,	// (0x0003e013) fep_hwr_candidate_drop_down_list_pane_g

0x93a2,	// (0x000377d9) fep_hwr_candidate_drop_down_list_scroll_pane

0x93ab,	// (0x000377e2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x93ab,	// (0x000377e2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x93b8,	// (0x000377ef) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x93b8,	// (0x000377ef) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x93c5,	// (0x000377fc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x93c5,	// (0x000377fc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xb561,	// (0x00039998) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb561,	// (0x00039998) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xb57c,	// (0x000399b3) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb57c,	// (0x000399b3) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x93d2,	// (0x00037809) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x93d2,	// (0x00037809) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x93ed,	// (0x00037824) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x93ed,	// (0x00037824) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xb6a4,	// (0x00039adb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb6a4,	// (0x00039adb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x0003e01a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x0003e01a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb6bf,	// (0x00039af6) cell_vkb_candidate_pane_cp1_ParamLimits

0xb6bf,	// (0x00039af6) cell_vkb_candidate_pane_cp1

0xb1f2,	// (0x00039629) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb1f2,	// (0x00039629) fep_vkb_candidate_drop_down_list_pane_g1

0xb68a,	// (0x00039ac1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb68a,	// (0x00039ac1) fep_vkb_candidate_drop_down_list_pane_g2

0xb697,	// (0x00039ace) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb697,	// (0x00039ace) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdc,	// (0x0003e013) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdc,	// (0x0003e013) fep_vkb_candidate_drop_down_list_pane_g

0xb6df,	// (0x00039b16) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb6df,	// (0x00039b16) fep_vkb_candidate_drop_down_list_scroll_pane

0xb6ec,	// (0x00039b23) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb6ec,	// (0x00039b23) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb6f9,	// (0x00039b30) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb6f9,	// (0x00039b30) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb705,	// (0x00039b3c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb705,	// (0x00039b3c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb51f,	// (0x00039956) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb51f,	// (0x00039956) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb540,	// (0x00039977) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb540,	// (0x00039977) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb711,	// (0x00039b48) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb711,	// (0x00039b48) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xb732,	// (0x00039b69) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb732,	// (0x00039b69) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xb6a4,	// (0x00039adb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb6a4,	// (0x00039adb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf4,	// (0x0003e02b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf4,	// (0x0003e02b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x0218,	// (0x0002e64f) title_pane_g1_ParamLimits

0x0229,	// (0x0002e660) title_pane_g2_ParamLimits

0xf592,	// (0x0003d9c9) title_pane_g_ParamLimits

0x3f7b,	// (0x000323b2) aid_call2_pane

0x3f73,	// (0x000323aa) aid_call_pane

0x3f83,	// (0x000323ba) popup_clock_analogue_window_g1

0x3f83,	// (0x000323ba) popup_clock_analogue_window_g2

0x865b,	// (0x00036a92) popup_clock_analogue_window_g3

0x8664,	// (0x00036a9b) popup_clock_analogue_window_g4

0x339a,	// (0x000317d1) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0003db78) popup_clock_analogue_window_g

0x866c,	// (0x00036aa3) popup_clock_analogue_window_t1

0x86a3,	// (0x00036ada) clock_digital_number_pane_ParamLimits

0x86a3,	// (0x00036ada) clock_digital_number_pane

0x86af,	// (0x00036ae6) clock_digital_number_pane_cp02_ParamLimits

0x86af,	// (0x00036ae6) clock_digital_number_pane_cp02

0x86bb,	// (0x00036af2) clock_digital_number_pane_cp03_ParamLimits

0x86bb,	// (0x00036af2) clock_digital_number_pane_cp03

0x86c7,	// (0x00036afe) clock_digital_number_pane_cp04_ParamLimits

0x86c7,	// (0x00036afe) clock_digital_number_pane_cp04

0x86d3,	// (0x00036b0a) clock_digital_separator_pane_ParamLimits

0x86d3,	// (0x00036b0a) clock_digital_separator_pane

0x86df,	// (0x00036b16) popup_clock_digital_window_t1_ParamLimits

0x86df,	// (0x00036b16) popup_clock_digital_window_t1

0x339a,	// (0x000317d1) clock_digital_number_pane_g1

0x339a,	// (0x000317d1) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0003db83) clock_digital_number_pane_g

0x339a,	// (0x000317d1) clock_digital_separator_pane_g1

0x339a,	// (0x000317d1) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0003db83) clock_digital_separator_pane_g

0x1526,	// (0x0002f95d) aid_fill_nsta_ParamLimits

0x1655,	// (0x0002fa8c) indicator_nsta_pane_ParamLimits

0x48cd,	// (0x00032d04) popup_clock_analogue_window

0x48cd,	// (0x00032d04) popup_clock_digital_window

0x46f4,	// (0x00032b2b) grid_indicator_nsta_pane_ParamLimits

0x63f9,	// (0x00034830) clock_nsta_pane_t2

0x0001,

0xfad3,	// (0x0003df0a) clock_nsta_pane_t

0x861f,	// (0x00036a56) aid_size_max_handle

0xed56,	// (0x0003d18d) aid_size_min_handle

0x4492,	// (0x000328c9) editor_scroll_pane

0xb753,	// (0x00039b8a) ex_editor_pane

0x3b6f,	// (0x00031fa6) scroll_pane_cp13

0x39ef,	// (0x00031e26) scroll_pane_cp14

0x3fad,	// (0x000323e4) scroll_pane_cp36

0x0cef,	// (0x0002f126) list_single_graphic_hl_pane_cp2_ParamLimits

0x0cef,	// (0x0002f126) list_single_graphic_hl_pane_cp2

0x1d59,	// (0x00030190) list_single_graphic_hl_pane_ParamLimits

0x1d59,	// (0x00030190) list_single_graphic_hl_pane

0x7a38,	// (0x00035e6f) aid_size_min_hl_cp1

0xb75b,	// (0x00039b92) list_highlight_pane_cp34_ParamLimits

0xb75b,	// (0x00039b92) list_highlight_pane_cp34

0xb76c,	// (0x00039ba3) list_single_graphic_hl_pane_g1_ParamLimits

0xb76c,	// (0x00039ba3) list_single_graphic_hl_pane_g1

0xea29,	// (0x0003ce60) list_single_graphic_hl_pane_g2_ParamLimits

0xea29,	// (0x0003ce60) list_single_graphic_hl_pane_g2

0xea29,	// (0x0003ce60) list_single_graphic_hl_pane_g3_ParamLimits

0xea29,	// (0x0003ce60) list_single_graphic_hl_pane_g3

0x947f,	// (0x000378b6) list_single_graphic_hl_pane_g4_ParamLimits

0x947f,	// (0x000378b6) list_single_graphic_hl_pane_g4

0xf105,	// (0x0003d53c) list_single_graphic_hl_pane_g5_ParamLimits

0xf105,	// (0x0003d53c) list_single_graphic_hl_pane_g5

0x0004,

0xfc05,	// (0x0003e03c) list_single_graphic_hl_pane_g_ParamLimits

0xfc05,	// (0x0003e03c) list_single_graphic_hl_pane_g

0xea35,	// (0x0003ce6c) list_single_graphic_hl_pane_t1_ParamLimits

0xea35,	// (0x0003ce6c) list_single_graphic_hl_pane_t1

0xb779,	// (0x00039bb0) aid_size_min_hl_cp2

0xb782,	// (0x00039bb9) list_highlight_pane_cp34_cp2_ParamLimits

0xb782,	// (0x00039bb9) list_highlight_pane_cp34_cp2

0xb76c,	// (0x00039ba3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xb76c,	// (0x00039ba3) list_single_graphic_hl_pane_g1_cp2

0xb78f,	// (0x00039bc6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xb78f,	// (0x00039bc6) list_single_graphic_hl_pane_g2_cp2

0xb79b,	// (0x00039bd2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb79b,	// (0x00039bd2) list_single_graphic_hl_pane_g3_cp2

0x43c9,	// (0x00032800) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x43c9,	// (0x00032800) list_single_graphic_hl_pane_g4_cp2

0xb7a9,	// (0x00039be0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xb7a9,	// (0x00039be0) list_single_graphic_hl_pane_g5_cp2

0xedb2,	// (0x0003d1e9) control_pane_g4_ParamLimits

0xedb2,	// (0x0003d1e9) control_pane_g4

0x3ba7,	// (0x00031fde) bg_popup_sub_pane_cp10_ParamLimits

0xaf63,	// (0x0003939a) list_choice_list_pane_ParamLimits

0xaf72,	// (0x000393a9) scroll_pane_cp23

0x353c,	// (0x00031973) bg_popup_preview_window_pane_cp02_ParamLimits

0xb5cd,	// (0x00039a04) list_preview_fixed_pane_ParamLimits

0xb5e3,	// (0x00039a1a) list_preview_fixed_pane_cp_ParamLimits

0xb5e3,	// (0x00039a1a) list_preview_fixed_pane_cp

0xb5ef,	// (0x00039a26) popup_preview_fixed_window_g1_ParamLimits

0xb5ef,	// (0x00039a26) popup_preview_fixed_window_g1

0xb5fb,	// (0x00039a32) popup_preview_fixed_window_g2_ParamLimits

0xb5fb,	// (0x00039a32) popup_preview_fixed_window_g2

0x0002,

0xfb94,	// (0x0003dfcb) popup_preview_fixed_window_g_ParamLimits

0xfb94,	// (0x0003dfcb) popup_preview_fixed_window_g

0x850e,	// (0x00036945) aid_navi_side_left_pane_ParamLimits

0x8523,	// (0x0003695a) aid_navi_side_right_pane_ParamLimits

0x853b,	// (0x00036972) navi_icon_pane_stacon_ParamLimits

0x854f,	// (0x00036986) navi_navi_pane_stacon_ParamLimits

0x853b,	// (0x00036972) navi_text_pane_stacon_ParamLimits

0x3390,	// (0x000317c7) main_text_info_pane

0xb7d3,	// (0x00039c0a) listscroll_text_info_pane

0xb7db,	// (0x00039c12) list_text_info_pane_ParamLimits

0xb7db,	// (0x00039c12) list_text_info_pane

0xb7ea,	// (0x00039c21) scroll_pane_cp24_ParamLimits

0xb7ea,	// (0x00039c21) scroll_pane_cp24

0x213c,	// (0x00030573) list_text_info_pane_t1_ParamLimits

0x213c,	// (0x00030573) list_text_info_pane_t1

0x0eb6,	// (0x0002f2ed) popup_fast_swap2_window_ParamLimits

0x0eb6,	// (0x0002f2ed) popup_fast_swap2_window

0xb841,	// (0x00039c78) aid_size_cell_fast2

0x3390,	// (0x000317c7) bg_popup_window_pane_cp17

0x4d71,	// (0x000331a8) heading_pane_cp2

0x3722,	// (0x00031b59) listscroll_fast2_pane

0xb84b,	// (0x00039c82) grid_fast2_pane

0xb855,	// (0x00039c8c) listscroll_fast2_pane_g1

0xb85d,	// (0x00039c94) listscroll_fast2_pane_g2

0x0001,

0xfc10,	// (0x0003e047) listscroll_fast2_pane_g

0x3b6f,	// (0x00031fa6) scroll_pane_cp26

0xb867,	// (0x00039c9e) cell_fast2_pane_ParamLimits

0xb867,	// (0x00039c9e) cell_fast2_pane

0xb87c,	// (0x00039cb3) cell_fast2_pane_g1

0xb885,	// (0x00039cbc) cell_fast2_pane_g2

0xb88e,	// (0x00039cc5) cell_fast2_pane_g3

0x0002,

0xfc15,	// (0x0003e04c) cell_fast2_pane_g

0x37b6,	// (0x00031bed) grid_highlight_pane_cp9

0x37cb,	// (0x00031c02) main_eswt_pane_ParamLimits

0x37cb,	// (0x00031c02) main_eswt_pane

0xb7ff,	// (0x00039c36) list_single_text_info_pane

0xb896,	// (0x00039ccd) eswt_ctrl_button_pane

0xb896,	// (0x00039ccd) eswt_ctrl_canvas_pane

0xb89e,	// (0x00039cd5) eswt_ctrl_combo_pane

0xb896,	// (0x00039ccd) eswt_ctrl_default_pane

0xb896,	// (0x00039ccd) eswt_ctrl_label_pane

0xb8a6,	// (0x00039cdd) eswt_ctrl_wait_pane

0xb8ae,	// (0x00039ce5) eswt_shell_pane

0x3390,	// (0x000317c7) listscroll_eswt_app_pane

0xb8ce,	// (0x00039d05) popup_eswt_tasktip_window_ParamLimits

0xb8ce,	// (0x00039d05) popup_eswt_tasktip_window

0x4aca,	// (0x00032f01) bg_popup_window_pane_cp18

0xb8df,	// (0x00039d16) eswt_control_pane_g1_ParamLimits

0xb8df,	// (0x00039d16) eswt_control_pane_g1

0xb8ec,	// (0x00039d23) eswt_control_pane_g2_ParamLimits

0xb8ec,	// (0x00039d23) eswt_control_pane_g2

0xb8f9,	// (0x00039d30) eswt_control_pane_g3_ParamLimits

0xb8f9,	// (0x00039d30) eswt_control_pane_g3

0xb906,	// (0x00039d3d) eswt_control_pane_g4_ParamLimits

0xb906,	// (0x00039d3d) eswt_control_pane_g4

0x0003,

0xfc1c,	// (0x0003e053) eswt_control_pane_g_ParamLimits

0xfc1c,	// (0x0003e053) eswt_control_pane_g

0x3a50,	// (0x00031e87) bg_button_pane_ParamLimits

0x3a50,	// (0x00031e87) bg_button_pane

0x37cb,	// (0x00031c02) common_borders_pane_copy2_ParamLimits

0x37cb,	// (0x00031c02) common_borders_pane_copy2

0xb913,	// (0x00039d4a) control_button_pane_g1_ParamLimits

0xb913,	// (0x00039d4a) control_button_pane_g1

0xb91f,	// (0x00039d56) control_button_pane_g2_ParamLimits

0xb91f,	// (0x00039d56) control_button_pane_g2

0xb92b,	// (0x00039d62) control_button_pane_g3_ParamLimits

0xb92b,	// (0x00039d62) control_button_pane_g3

0x0002,

0xfc25,	// (0x0003e05c) control_button_pane_g_ParamLimits

0xfc25,	// (0x0003e05c) control_button_pane_g

0xb93f,	// (0x00039d76) control_button_pane_t1

0xb94d,	// (0x00039d84) control_button_pane_t2

0x0001,

0xfc2c,	// (0x0003e063) control_button_pane_t

0x49da,	// (0x00032e11) bg_button_pane_g1

0x49ea,	// (0x00032e21) bg_button_pane_g2

0x49e2,	// (0x00032e19) bg_button_pane_g3

0x49fa,	// (0x00032e31) bg_button_pane_g4

0x49f2,	// (0x00032e29) bg_button_pane_g5

0x4a02,	// (0x00032e39) bg_button_pane_g6

0x4a0a,	// (0x00032e41) bg_button_pane_g7

0x4a1a,	// (0x00032e51) bg_button_pane_g8

0x4a12,	// (0x00032e49) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0003dcd6) bg_button_pane_g

0xaf1e,	// (0x00039355) common_borders_pane_ParamLimits

0xaf1e,	// (0x00039355) common_borders_pane

0xb8df,	// (0x00039d16) eswt_control_pane_g1_copy1_ParamLimits

0xb8df,	// (0x00039d16) eswt_control_pane_g1_copy1

0xb8ec,	// (0x00039d23) eswt_control_pane_g2_copy1_ParamLimits

0xb8ec,	// (0x00039d23) eswt_control_pane_g2_copy1

0xb8f9,	// (0x00039d30) eswt_control_pane_g3_copy1_ParamLimits

0xb8f9,	// (0x00039d30) eswt_control_pane_g3_copy1

0xb906,	// (0x00039d3d) eswt_control_pane_g4_copy1_ParamLimits

0xb906,	// (0x00039d3d) eswt_control_pane_g4_copy1

0xaf59,	// (0x00039390) bg_eswt_ctrl_canvas_pane_g1

0xaf1e,	// (0x00039355) common_borders_pane_cp2_ParamLimits

0xaf1e,	// (0x00039355) common_borders_pane_cp2

0xaf1e,	// (0x00039355) common_borders_pane_cp3_ParamLimits

0xaf1e,	// (0x00039355) common_borders_pane_cp3

0xb95b,	// (0x00039d92) separator_horizontal_pane

0xb963,	// (0x00039d9a) separator_vertical_pane

0xb8df,	// (0x00039d16) eswt_control_pane_g1_copy2_ParamLimits

0xb8df,	// (0x00039d16) eswt_control_pane_g1_copy2

0xb8ec,	// (0x00039d23) eswt_control_pane_g2_copy2_ParamLimits

0xb8ec,	// (0x00039d23) eswt_control_pane_g2_copy2

0xb8f9,	// (0x00039d30) eswt_control_pane_g3_copy2_ParamLimits

0xb8f9,	// (0x00039d30) eswt_control_pane_g3_copy2

0xb906,	// (0x00039d3d) eswt_control_pane_g4_copy2_ParamLimits

0xb906,	// (0x00039d3d) eswt_control_pane_g4_copy2

0x3390,	// (0x000317c7) common_borders_pane_cp4

0xb96c,	// (0x00039da3) separator_horizontal_pane_g1

0xb975,	// (0x00039dac) separator_horizontal_pane_g2

0xb97e,	// (0x00039db5) separator_horizontal_pane_g3

0x0002,

0xfc31,	// (0x0003e068) separator_horizontal_pane_g

0xb8df,	// (0x00039d16) eswt_control_pane_g1_copy3_ParamLimits

0xb8df,	// (0x00039d16) eswt_control_pane_g1_copy3

0xb8ec,	// (0x00039d23) eswt_control_pane_g2_copy3_ParamLimits

0xb8ec,	// (0x00039d23) eswt_control_pane_g2_copy3

0xb8f9,	// (0x00039d30) eswt_control_pane_g3_copy3_ParamLimits

0xb8f9,	// (0x00039d30) eswt_control_pane_g3_copy3

0xb906,	// (0x00039d3d) eswt_control_pane_g4_copy3_ParamLimits

0xb906,	// (0x00039d3d) eswt_control_pane_g4_copy3

0x3390,	// (0x000317c7) common_borders_pane_cp5

0xb987,	// (0x00039dbe) separator_vertical_pane_g1

0xb990,	// (0x00039dc7) separator_vertical_pane_g2

0xb999,	// (0x00039dd0) separator_vertical_pane_g3

0x0002,

0xfc38,	// (0x0003e06f) separator_vertical_pane_g

0xb8df,	// (0x00039d16) eswt_control_pane_g1_copy4_ParamLimits

0xb8df,	// (0x00039d16) eswt_control_pane_g1_copy4

0xb8ec,	// (0x00039d23) eswt_control_pane_g2_copy4_ParamLimits

0xb8ec,	// (0x00039d23) eswt_control_pane_g2_copy4

0xb8f9,	// (0x00039d30) eswt_control_pane_g3_copy4_ParamLimits

0xb8f9,	// (0x00039d30) eswt_control_pane_g3_copy4

0xb906,	// (0x00039d3d) eswt_control_pane_g4_copy4_ParamLimits

0xb906,	// (0x00039d3d) eswt_control_pane_g4_copy4

0x215a,	// (0x00030591) eswt_ctrl_combo_button_pane

0x2162,	// (0x00030599) eswt_ctrl_input_pane

0x216a,	// (0x000305a1) popup_choice_list_window_cp70

0x2172,	// (0x000305a9) eswt_ctrl_input_pane_t1

0x3390,	// (0x000317c7) input_focus_pane_cp70

0xaf1e,	// (0x00039355) bg_button_pane_cp70_ParamLimits

0xaf1e,	// (0x00039355) bg_button_pane_cp70

0x2180,	// (0x000305b7) eswt_ctrl_combo_button_pane_g1

0xb9d0,	// (0x00039e07) wait_bar_pane_cp70

0x4aca,	// (0x00032f01) bg_popup_window_pane_cp70_ParamLimits

0x4aca,	// (0x00032f01) bg_popup_window_pane_cp70

0xb9d8,	// (0x00039e0f) popup_eswt_tasktip_window_t1

0xb9ee,	// (0x00039e25) wait_bar_pane_cp71_ParamLimits

0xb9ee,	// (0x00039e25) wait_bar_pane_cp71

0xb9fa,	// (0x00039e31) grid_eswt_app_pane

0x3db9,	// (0x000321f0) scroll_pane_cp70

0x2188,	// (0x000305bf) cell_eswt_app_pane_ParamLimits

0x2188,	// (0x000305bf) cell_eswt_app_pane

0x21b2,	// (0x000305e9) cell_eswt_app_pane_g1_ParamLimits

0x21b2,	// (0x000305e9) cell_eswt_app_pane_g1

0x21e1,	// (0x00030618) cell_eswt_app_pane_g2_ParamLimits

0x21e1,	// (0x00030618) cell_eswt_app_pane_g2

0x0001,

0xfc3f,	// (0x0003e076) cell_eswt_app_pane_g_ParamLimits

0xfc3f,	// (0x0003e076) cell_eswt_app_pane_g

0x220a,	// (0x00030641) cell_eswt_app_pane_t1_ParamLimits

0x220a,	// (0x00030641) cell_eswt_app_pane_t1

0xbac1,	// (0x00039ef8) grid_highlight_pane_cp70_ParamLimits

0xbac1,	// (0x00039ef8) grid_highlight_pane_cp70

0x4365,	// (0x0003279c) set_content_pane_g1

0x4669,	// (0x00032aa0) status_small_volume_pane

0x9408,	// (0x0003783f) status_small_volume_pane_g1

0x9410,	// (0x00037847) volume_small2_pane

0x9419,	// (0x00037850) volume_small2_pane_g1

0x9422,	// (0x00037859) volume_small2_pane_g2

0x942b,	// (0x00037862) volume_small2_pane_g3

0x9434,	// (0x0003786b) volume_small2_pane_g4

0x943d,	// (0x00037874) volume_small2_pane_g5

0x9446,	// (0x0003787d) volume_small2_pane_g6

0x944f,	// (0x00037886) volume_small2_pane_g7

0x9458,	// (0x0003788f) volume_small2_pane_g8

0x9461,	// (0x00037898) volume_small2_pane_g9

0x946a,	// (0x000378a1) volume_small2_pane_g10

0x0009,

0xfc44,	// (0x0003e07b) volume_small2_pane_g

0xb33a,	// (0x00039771) fep_vkb_top_text_pane_g1_ParamLimits

0x20e4,	// (0x0003051b) fep_vkb_top_text_pane_t1_ParamLimits

0xb607,	// (0x00039a3e) popup_preview_fixed_window_g3_ParamLimits

0xb607,	// (0x00039a3e) popup_preview_fixed_window_g3

0x14b9,	// (0x0002f8f0) popup_toolbar_trans_pane

0x1bd1,	// (0x00030008) aid_height_set_list_ParamLimits

0x5948,	// (0x00033d7f) aid_size_parent_ParamLimits

0x3ba7,	// (0x00031fde) list_highlight_pane_cp2_ParamLimits

0x4365,	// (0x0003279c) set_content_pane_g1_ParamLimits

0xea17,	// (0x0003ce4e) list_single_image_pane_ParamLimits

0xea17,	// (0x0003ce4e) list_single_image_pane

0x223c,	// (0x00030673) aid_size_cell_image_ParamLimits

0x223c,	// (0x00030673) aid_size_cell_image

0x2249,	// (0x00030680) grid_single_image_pane_ParamLimits

0x2249,	// (0x00030680) grid_single_image_pane

0x3a6a,	// (0x00031ea1) list_single_image_pane_g1_ParamLimits

0x3a6a,	// (0x00031ea1) list_single_image_pane_g1

0x3a76,	// (0x00031ead) list_single_image_pane_g2_ParamLimits

0x3a76,	// (0x00031ead) list_single_image_pane_g2

0x0001,

0xfc59,	// (0x0003e090) list_single_image_pane_g_ParamLimits

0xfc59,	// (0x0003e090) list_single_image_pane_g

0xbae6,	// (0x00039f1d) list_single_image_pane_t1_ParamLimits

0xbae6,	// (0x00039f1d) list_single_image_pane_t1

0x2255,	// (0x0003068c) cell_image_list_pane_ParamLimits

0x2255,	// (0x0003068c) cell_image_list_pane

0x2269,	// (0x000306a0) cell_image_list_pane_g1

0x2272,	// (0x000306a9) cell_image_list_pane_g2

0x0001,

0xfc5e,	// (0x0003e095) cell_image_list_pane_g

0xbb22,	// (0x00039f59) aid_size_cell_tb_trans_pane

0x3a50,	// (0x00031e87) bg_tb_trans_pane

0xbb34,	// (0x00039f6b) grid_tb_trans_pane

0x49da,	// (0x00032e11) bg_tb_trans_pane_g1

0x49ea,	// (0x00032e21) bg_tb_trans_pane_g2

0x49e2,	// (0x00032e19) bg_tb_trans_pane_g3

0x49fa,	// (0x00032e31) bg_tb_trans_pane_g4

0x49f2,	// (0x00032e29) bg_tb_trans_pane_g5

0x4a1a,	// (0x00032e51) bg_tb_trans_pane_g6

0x4a12,	// (0x00032e49) bg_tb_trans_pane_g7

0x4a02,	// (0x00032e39) bg_tb_trans_pane_g8

0x4a0a,	// (0x00032e41) bg_tb_trans_pane_g9

0x0008,

0xfc63,	// (0x0003e09a) bg_tb_trans_pane_g

0xbb48,	// (0x00039f7f) cell_toolbar_trans_pane_ParamLimits

0xbb48,	// (0x00039f7f) cell_toolbar_trans_pane

0xaf59,	// (0x00039390) cell_toolbar_trans_pane_g1

0x1f8d,	// (0x000303c4) list_form2_midp_pane_t1

0x1f9b,	// (0x000303d2) list_form2_midp_pane_t2

0x0001,

0xfb0c,	// (0x0003df43) list_form2_midp_pane_t

0x647e,	// (0x000348b5) scroll_pane_cp51_ParamLimits

0x65f4,	// (0x00034a2b) form2_midp_wait_pane_g1

0x65fd,	// (0x00034a34) form2_midp_wait_pane_g2

0x6606,	// (0x00034a3d) form2_midp_wait_pane_g3

0x0002,

0xfb21,	// (0x0003df58) form2_midp_wait_pane_g

0x3400,	// (0x00031837) list_highlight_pane_cp21_ParamLimits

0x6626,	// (0x00034a5d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6635,	// (0x00034a6c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5b51,	// (0x00033f88) list_single_2graphic_im_pane_ParamLimits

0x5b51,	// (0x00033f88) list_single_2graphic_im_pane

0x227b,	// (0x000306b2) list_single_2graphic_im_pane_g1_ParamLimits

0x227b,	// (0x000306b2) list_single_2graphic_im_pane_g1

0x228c,	// (0x000306c3) list_single_2graphic_im_pane_g2_ParamLimits

0x228c,	// (0x000306c3) list_single_2graphic_im_pane_g2

0x2298,	// (0x000306cf) list_single_2graphic_im_pane_g3_ParamLimits

0x2298,	// (0x000306cf) list_single_2graphic_im_pane_g3

0x0003,

0xfc76,	// (0x0003e0ad) list_single_2graphic_im_pane_g_ParamLimits

0xfc76,	// (0x0003e0ad) list_single_2graphic_im_pane_g

0x22ac,	// (0x000306e3) list_single_2graphic_im_pane_t1_ParamLimits

0x22ac,	// (0x000306e3) list_single_2graphic_im_pane_t1

0xb613,	// (0x00039a4a) list_single_graphic_2heading_pane_fp_ParamLimits

0xb613,	// (0x00039a4a) list_single_graphic_2heading_pane_fp

0x78aa,	// (0x00035ce1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x78aa,	// (0x00035ce1) list_single_graphic_2heading_pane_fp_g1

0xb62a,	// (0x00039a61) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb62a,	// (0x00039a61) list_single_graphic_2heading_pane_fp_g2

0x8316,	// (0x0003674d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8316,	// (0x0003674d) list_single_graphic_2heading_pane_fp_g3

0x787f,	// (0x00035cb6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x787f,	// (0x00035cb6) list_single_graphic_2heading_pane_fp_g4

0xb636,	// (0x00039a6d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb636,	// (0x00039a6d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba4,	// (0x0003dfdb) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0003dfdb) list_single_graphic_2heading_pane_fp_g

0x7a61,	// (0x00035e98) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7a61,	// (0x00035e98) list_single_graphic_2heading_pane_fp_t1

0x78e2,	// (0x00035d19) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x78e2,	// (0x00035d19) list_single_graphic_2heading_pane_fp_t2

0x7a77,	// (0x00035eae) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7a77,	// (0x00035eae) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7f,	// (0x0003e0b6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7f,	// (0x0003e0b6) list_single_graphic_2heading_pane_fp_t

0xaff9,	// (0x00039430) fep_hwr_write_pane_g5_ParamLimits

0xaff9,	// (0x00039430) fep_hwr_write_pane_g5

0xb005,	// (0x0003943c) fep_hwr_write_pane_g6_ParamLimits

0xb005,	// (0x0003943c) fep_hwr_write_pane_g6

0xb8ae,	// (0x00039ce5) eswt_shell_pane_ParamLimits

0x4aca,	// (0x00032f01) bg_popup_window_pane_cp18_ParamLimits

0x5a91,	// (0x00033ec8) heading_pane_cp70

0xb9d8,	// (0x00039e0f) popup_eswt_tasktip_window_t1_ParamLimits

0x157a,	// (0x0002f9b1) aid_touch_tab_arrow_left

0x1590,	// (0x0002f9c7) aid_touch_tab_arrow_right

0x0241,	// (0x0002e678) title_pane_g3_ParamLimits

0x0241,	// (0x0002e678) title_pane_g3

0x3a0f,	// (0x00031e46) set_value_pane_g1

0x14b9,	// (0x0002f8f0) popup_toolbar_trans_pane_ParamLimits

0xbb22,	// (0x00039f59) aid_size_cell_tb_trans_pane_ParamLimits

0x3a50,	// (0x00031e87) bg_tb_trans_pane_ParamLimits

0xbb34,	// (0x00039f6b) grid_tb_trans_pane_ParamLimits

0x353c,	// (0x00031973) cont_note_pane_ParamLimits

0x353c,	// (0x00031973) cont_note_pane

0x37cb,	// (0x00031c02) cont_snote2_single_text_pane_ParamLimits

0x37cb,	// (0x00031c02) cont_snote2_single_text_pane

0x37cb,	// (0x00031c02) cont_snote2_single_graphic_pane_ParamLimits

0x37cb,	// (0x00031c02) cont_snote2_single_graphic_pane

0x4f56,	// (0x0003338d) cont_note_wait_pane_ParamLimits

0x4f56,	// (0x0003338d) cont_note_wait_pane

0x4f56,	// (0x0003338d) cont_note_image_pane_ParamLimits

0x4f56,	// (0x0003338d) cont_note_image_pane

0xbbdc,	// (0x0003a013) popup_note2_window_g1_ParamLimits

0xbbdc,	// (0x0003a013) popup_note2_window_g1

0xbc0d,	// (0x0003a044) popup_note2_window_t1_ParamLimits

0xbc0d,	// (0x0003a044) popup_note2_window_t1

0xbc52,	// (0x0003a089) popup_note2_window_t2_ParamLimits

0xbc52,	// (0x0003a089) popup_note2_window_t2

0xbc97,	// (0x0003a0ce) popup_note2_window_t3_ParamLimits

0xbc97,	// (0x0003a0ce) popup_note2_window_t3

0xbcdc,	// (0x0003a113) popup_note2_window_t4_ParamLimits

0xbcdc,	// (0x0003a113) popup_note2_window_t4

0x35b4,	// (0x000319eb) popup_note2_window_t5_ParamLimits

0x35b4,	// (0x000319eb) popup_note2_window_t5

0x0004,

0xfc8b,	// (0x0003e0c2) popup_note2_window_t_ParamLimits

0xfc8b,	// (0x0003e0c2) popup_note2_window_t

0xbd0b,	// (0x0003a142) popup_note2_image_window_g1_ParamLimits

0xbd0b,	// (0x0003a142) popup_note2_image_window_g1

0xbd17,	// (0x0003a14e) popup_note2_image_window_g2_ParamLimits

0xbd17,	// (0x0003a14e) popup_note2_image_window_g2

0x0001,

0xfc96,	// (0x0003e0cd) popup_note2_image_window_g_ParamLimits

0xfc96,	// (0x0003e0cd) popup_note2_image_window_g

0xbd29,	// (0x0003a160) popup_note2_image_window_t1_ParamLimits

0xbd29,	// (0x0003a160) popup_note2_image_window_t1

0xbd41,	// (0x0003a178) popup_note2_image_window_t2_ParamLimits

0xbd41,	// (0x0003a178) popup_note2_image_window_t2

0xbd59,	// (0x0003a190) popup_note2_image_window_t3_ParamLimits

0xbd59,	// (0x0003a190) popup_note2_image_window_t3

0x0002,

0xfc9b,	// (0x0003e0d2) popup_note2_image_window_t_ParamLimits

0xfc9b,	// (0x0003e0d2) popup_note2_image_window_t

0x4f64,	// (0x0003339b) popup_note2_wait_window_g1_ParamLimits

0x4f64,	// (0x0003339b) popup_note2_wait_window_g1

0x4f70,	// (0x000333a7) popup_note2_wait_window_g2_ParamLimits

0x4f70,	// (0x000333a7) popup_note2_wait_window_g2

0x4f7c,	// (0x000333b3) popup_note2_wait_window_g3_ParamLimits

0x4f7c,	// (0x000333b3) popup_note2_wait_window_g3

0x0002,

0xf881,	// (0x0003dcb8) popup_note2_wait_window_g_ParamLimits

0xf881,	// (0x0003dcb8) popup_note2_wait_window_g

0xbd75,	// (0x0003a1ac) popup_note2_wait_window_t1_ParamLimits

0xbd75,	// (0x0003a1ac) popup_note2_wait_window_t1

0xbd93,	// (0x0003a1ca) popup_note2_wait_window_t2_ParamLimits

0xbd93,	// (0x0003a1ca) popup_note2_wait_window_t2

0xbdb1,	// (0x0003a1e8) popup_note2_wait_window_t3_ParamLimits

0xbdb1,	// (0x0003a1e8) popup_note2_wait_window_t3

0xbdc3,	// (0x0003a1fa) popup_note2_wait_window_t4_ParamLimits

0xbdc3,	// (0x0003a1fa) popup_note2_wait_window_t4

0x0003,

0xfca2,	// (0x0003e0d9) popup_note2_wait_window_t_ParamLimits

0xfca2,	// (0x0003e0d9) popup_note2_wait_window_t

0xbdd5,	// (0x0003a20c) wait_bar2_pane_ParamLimits

0xbdd5,	// (0x0003a20c) wait_bar2_pane

0xbded,	// (0x0003a224) popup_snote2_single_text_window_g1_ParamLimits

0xbded,	// (0x0003a224) popup_snote2_single_text_window_g1

0xbe15,	// (0x0003a24c) popup_snote2_single_text_window_t1_ParamLimits

0xbe15,	// (0x0003a24c) popup_snote2_single_text_window_t1

0xbe61,	// (0x0003a298) popup_snote2_single_text_window_t2_ParamLimits

0xbe61,	// (0x0003a298) popup_snote2_single_text_window_t2

0xbead,	// (0x0003a2e4) popup_snote2_single_text_window_t3_ParamLimits

0xbead,	// (0x0003a2e4) popup_snote2_single_text_window_t3

0xbeee,	// (0x0003a325) popup_snote2_single_text_window_t4_ParamLimits

0xbeee,	// (0x0003a325) popup_snote2_single_text_window_t4

0xbf24,	// (0x0003a35b) popup_snote2_single_text_window_t5_ParamLimits

0xbf24,	// (0x0003a35b) popup_snote2_single_text_window_t5

0x0004,

0xfcab,	// (0x0003e0e2) popup_snote2_single_text_window_t_ParamLimits

0xfcab,	// (0x0003e0e2) popup_snote2_single_text_window_t

0xbf4f,	// (0x0003a386) popup_snote2_single_graphic_window_g1_ParamLimits

0xbf4f,	// (0x0003a386) popup_snote2_single_graphic_window_g1

0xbf77,	// (0x0003a3ae) popup_snote2_single_graphic_window_g2_ParamLimits

0xbf77,	// (0x0003a3ae) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb6,	// (0x0003e0ed) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb6,	// (0x0003e0ed) popup_snote2_single_graphic_window_g

0xbf9f,	// (0x0003a3d6) popup_snote2_single_graphic_window_t1_ParamLimits

0xbf9f,	// (0x0003a3d6) popup_snote2_single_graphic_window_t1

0xbfeb,	// (0x0003a422) popup_snote2_single_graphic_window_t2_ParamLimits

0xbfeb,	// (0x0003a422) popup_snote2_single_graphic_window_t2

0xbead,	// (0x0003a2e4) popup_snote2_single_graphic_window_t3_ParamLimits

0xbead,	// (0x0003a2e4) popup_snote2_single_graphic_window_t3

0xbeee,	// (0x0003a325) popup_snote2_single_graphic_window_t4_ParamLimits

0xbeee,	// (0x0003a325) popup_snote2_single_graphic_window_t4

0xbf24,	// (0x0003a35b) popup_snote2_single_graphic_window_t5_ParamLimits

0xbf24,	// (0x0003a35b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbb,	// (0x0003e0f2) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbb,	// (0x0003e0f2) popup_snote2_single_graphic_window_t

0x642e,	// (0x00034865) clock_nsta_pane_cp2_t1

0x642e,	// (0x00034865) clock_nsta_pane_cp2_t2

0x0001,

0xfae2,	// (0x0003df19) clock_nsta_pane_cp2_t

0x72cf,	// (0x00035706) form_field_data_wide_pane_g1_ParamLimits

0x3a6a,	// (0x00031ea1) form_field_data_wide_pane_g2_ParamLimits

0x3a6a,	// (0x00031ea1) form_field_data_wide_pane_g2

0x3a76,	// (0x00031ead) form_field_data_wide_pane_g3_ParamLimits

0x3a76,	// (0x00031ead) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0003dafb) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0003dafb) form_field_data_wide_pane_g

0x1ea3,	// (0x000302da) grid_touch_3_pane_ParamLimits

0x1ea3,	// (0x000302da) grid_touch_3_pane

0x22dd,	// (0x00030714) cell_touch_3_pane_ParamLimits

0x22dd,	// (0x00030714) cell_touch_3_pane

0xaf59,	// (0x00039390) cell_touch_3_pane_g1

0xaf59,	// (0x00039390) cell_touch_3_pane_g2

0x0001,

0xfb67,	// (0x0003df9e) cell_touch_3_pane_g

0x35e6,	// (0x00031a1d) cont_query_data_pane

0x35ee,	// (0x00031a25) cont_query_data_pane_cp1

0xc066,	// (0x0003a49d) button_value_adjust_pane_cp7

0xc06e,	// (0x0003a4a5) query_popup_pane_cp3

0x3fdf,	// (0x00032416) bg_popup_sub_pane_cp22_ParamLimits

0x873a,	// (0x00036b71) navi_navi_volume_pane_cp2

0x8755,	// (0x00036b8c) popup_side_volume_key_window_g2

0x8764,	// (0x00036b9b) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0003db8d) popup_side_volume_key_window_g

0x8781,	// (0x00036bb8) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0003db94) popup_side_volume_key_window_t

0x422f,	// (0x00032666) popup_side_volume_key_window_ParamLimits

0xed21,	// (0x0003d158) list_double_graphic_pane_g4_ParamLimits

0xed21,	// (0x0003d158) list_double_graphic_pane_g4

0xf0a4,	// (0x0003d4db) list_single_2heading_msg_pane_ParamLimits

0xf0a4,	// (0x0003d4db) list_single_2heading_msg_pane

0xf119,	// (0x0003d550) list_single_2heading_msg_pane_g1_ParamLimits

0xf119,	// (0x0003d550) list_single_2heading_msg_pane_g1

0xf125,	// (0x0003d55c) list_single_2heading_msg_pane_g2_ParamLimits

0xf125,	// (0x0003d55c) list_single_2heading_msg_pane_g2

0xf138,	// (0x0003d56f) list_single_2heading_msg_pane_g3_ParamLimits

0xf138,	// (0x0003d56f) list_single_2heading_msg_pane_g3

0xf144,	// (0x0003d57b) list_single_2heading_msg_pane_g4_ParamLimits

0xf144,	// (0x0003d57b) list_single_2heading_msg_pane_g4

0x0003,

0xfcc6,	// (0x0003e0fd) list_single_2heading_msg_pane_g_ParamLimits

0xfcc6,	// (0x0003e0fd) list_single_2heading_msg_pane_g

0xea4b,	// (0x0003ce82) list_single_2heading_msg_pane_t1_ParamLimits

0xea4b,	// (0x0003ce82) list_single_2heading_msg_pane_t1

0xea73,	// (0x0003ceaa) list_single_2heading_msg_pane_t2_ParamLimits

0xea73,	// (0x0003ceaa) list_single_2heading_msg_pane_t2

0xeade,	// (0x0003cf15) list_single_2heading_msg_pane_t3_ParamLimits

0xeade,	// (0x0003cf15) list_single_2heading_msg_pane_t3

0x7b2c,	// (0x00035f63) list_single_2heading_msg_pane_t4_ParamLimits

0x7b2c,	// (0x00035f63) list_single_2heading_msg_pane_t4

0x0003,

0xfccf,	// (0x0003e106) list_single_2heading_msg_pane_t_ParamLimits

0xfccf,	// (0x0003e106) list_single_2heading_msg_pane_t

0x33ae,	// (0x000317e5) title_pane_g4_ParamLimits

0x33ae,	// (0x000317e5) title_pane_g4

0x845e,	// (0x00036895) title_pane_stacon_g3_ParamLimits

0x845e,	// (0x00036895) title_pane_stacon_g3

0xbb9f,	// (0x00039fd6) list_single_2graphic_im_pane_g4_ParamLimits

0xbb9f,	// (0x00039fd6) list_single_2graphic_im_pane_g4

0x5897,	// (0x00033cce) popup_side_volume_key_window_cp

0x5d81,	// (0x000341b8) main_idle_act2_pane_t1

0x8b88,	// (0x00036fbf) toolbar_button_pane_g10

0x0b80,	// (0x0002efb7) popup_toolbar_window_cp1

0x641f,	// (0x00034856) clock_nsta_pane_cp_t1

0x641f,	// (0x00034856) clock_nsta_pane_cp_t2

0x0001,

0xfadd,	// (0x0003df14) clock_nsta_pane_cp_t

0x873a,	// (0x00036b71) navi_navi_volume_pane_cp2_ParamLimits

0x8749,	// (0x00036b80) popup_side_volume_key_window_g1_ParamLimits

0x8755,	// (0x00036b8c) popup_side_volume_key_window_g2_ParamLimits

0x8764,	// (0x00036b9b) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0003db8d) popup_side_volume_key_window_g_ParamLimits

0x9133,	// (0x0003756a) fep_hwr_aid_pane

0xf584,	// (0x0003d9bb) bg_fep_hwr_top_pane_g4_ParamLimits

0xafc9,	// (0x00039400) fep_hwr_top_pane_g1_ParamLimits

0xafdb,	// (0x00039412) fep_hwr_top_pane_g2_ParamLimits

0x91ec,	// (0x00037623) fep_hwr_top_pane_g3_ParamLimits

0xfb32,	// (0x0003df69) fep_hwr_top_pane_g_ParamLimits

0x9201,	// (0x00037638) fep_hwr_top_text_pane_ParamLimits

0x5695,	// (0x00033acc) aid_touch_tab_arrow_arrow_2

0x568c,	// (0x00033ac3) aid_touch_tab_arrow_left_2

0x9147,	// (0x0003757e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x917e,	// (0x000375b5) fep_hwr_prediction_pane

0xb142,	// (0x00039579) fep_vkb_prediction_pane

0x20c4,	// (0x000304fb) fep_vkb_side_pane_g3_ParamLimits

0x20c4,	// (0x000304fb) fep_vkb_side_pane_g3

0xb1f2,	// (0x00039629) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xb68a,	// (0x00039ac1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xb697,	// (0x00039ace) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbdc,	// (0x0003e013) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc093,	// (0x0003a4ca) fep_hwr_prediction_pane_g1

0x94af,	// (0x000378e6) fep_hwr_prediction_pane_g2

0x94b7,	// (0x000378ee) fep_hwr_prediction_pane_g3

0x94bf,	// (0x000378f6) fep_hwr_prediction_pane_g4

0x0003,

0xfcd8,	// (0x0003e10f) fep_hwr_prediction_pane_g

0xc093,	// (0x0003a4ca) fep_vkb_prediction_pane_g1

0xc09d,	// (0x0003a4d4) fep_vkb_prediction_pane_g2

0xc0a5,	// (0x0003a4dc) fep_vkb_prediction_pane_g3

0xc0ad,	// (0x0003a4e4) fep_vkb_prediction_pane_g4

0x0003,

0xfce1,	// (0x0003e118) fep_vkb_prediction_pane_g

0x8e60,	// (0x00037297) slider_set_pane_g3

0x8e74,	// (0x000372ab) slider_set_pane_g4

0x8e8c,	// (0x000372c3) slider_set_pane_g5

0x8e60,	// (0x00037297) slider_set_pane_g6

0x8ea2,	// (0x000372d9) slider_set_pane_g7

0x5b16,	// (0x00033f4d) slider_form_pane_g3

0x5b1f,	// (0x00033f56) slider_form_pane_g4

0x5b27,	// (0x00033f5e) slider_form_pane_g5

0x5b16,	// (0x00033f4d) slider_form_pane_g6

0x1d18,	// (0x0003014f) slider_form_pane_g7

0x601f,	// (0x00034456) slider_set_pane_vc_g3

0x6028,	// (0x0003445f) slider_set_pane_vc_g4

0x6031,	// (0x00034468) slider_set_pane_vc_g5

0x601f,	// (0x00034456) slider_set_pane_vc_g6

0x603a,	// (0x00034471) slider_set_pane_vc_g7

0x601f,	// (0x00034456) slider_form_pane_vc_g1

0x6028,	// (0x0003445f) slider_form_pane_vc_g2

0x6031,	// (0x00034468) slider_form_pane_vc_g3

0x601f,	// (0x00034456) slider_form_pane_vc_g4

0x61c9,	// (0x00034600) slider_form_pane_vc_g5

0x0004,

0xfac3,	// (0x0003defa) slider_form_pane_vc_g

0x3390,	// (0x000317c7) main_idle_act3_pane

0xc0b5,	// (0x0003a4ec) ai3_links_pane

0x2326,	// (0x0003075d) popup_ai3_data_window_ParamLimits

0x2326,	// (0x0003075d) popup_ai3_data_window

0x3390,	// (0x000317c7) grid_ai3_links_pane

0x233e,	// (0x00030775) cell_ai3_links_pane_ParamLimits

0x233e,	// (0x00030775) cell_ai3_links_pane

0xc0ee,	// (0x0003a525) bg_popup_sub_pane_cp11

0xc0fb,	// (0x0003a532) cell_ai3_links_pane_g1

0x3390,	// (0x000317c7) bg_popup_sub_pane_cp12

0xc120,	// (0x0003a557) heading_ai3_data_pane

0xc128,	// (0x0003a55f) list_ai3_gene_pane

0xc134,	// (0x0003a56b) popup_ai3_data_window_g1

0xc13c,	// (0x0003a573) heading_ai3_data_pane_g1

0xc144,	// (0x0003a57b) heading_ai3_data_pane_t1

0xc152,	// (0x0003a589) list_double_ai3_gene_pane_ParamLimits

0xc152,	// (0x0003a589) list_double_ai3_gene_pane

0xc15f,	// (0x0003a596) list_single_ai3_gene_pane_ParamLimits

0xc15f,	// (0x0003a596) list_single_ai3_gene_pane

0xaf1e,	// (0x00039355) list_highlight_pane_cp7_ParamLimits

0xaf1e,	// (0x00039355) list_highlight_pane_cp7

0xc16c,	// (0x0003a5a3) list_single_a13_gene_pane_t1_ParamLimits

0xc16c,	// (0x0003a5a3) list_single_a13_gene_pane_t1

0xc183,	// (0x0003a5ba) list_single_ai3_gene_pane_g1

0xc18c,	// (0x0003a5c3) list_single_ai3_gene_pane_g2

0x0001,

0xfcea,	// (0x0003e121) list_single_ai3_gene_pane_g

0xc194,	// (0x0003a5cb) list_double_ai3_gene_pane_g1_ParamLimits

0xc194,	// (0x0003a5cb) list_double_ai3_gene_pane_g1

0xc1a0,	// (0x0003a5d7) list_double_ai3_gene_pane_t1_ParamLimits

0xc1a0,	// (0x0003a5d7) list_double_ai3_gene_pane_t1

0xc1bc,	// (0x0003a5f3) list_double_ai3_gene_pane_t2_ParamLimits

0xc1bc,	// (0x0003a5f3) list_double_ai3_gene_pane_t2

0xc1d1,	// (0x0003a608) list_double_ai3_gene_pane_t3_ParamLimits

0xc1d1,	// (0x0003a608) list_double_ai3_gene_pane_t3

0x0002,

0xfcef,	// (0x0003e126) list_double_ai3_gene_pane_t_ParamLimits

0xfcef,	// (0x0003e126) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7a8d,	// (0x00035ec4) aid_size_min_col_2

0x2310,	// (0x00030747) aid_size_min_msg_ParamLimits

0x2310,	// (0x00030747) aid_size_min_msg

0x20d8,	// (0x0003050f) fep_vkb_top_text_pane_g2_ParamLimits

0x20d8,	// (0x0003050f) fep_vkb_top_text_pane_g2

0x0001,

0xfb62,	// (0x0003df99) fep_vkb_top_text_pane_g_ParamLimits

0xfb62,	// (0x0003df99) fep_vkb_top_text_pane_g

0x3390,	// (0x000317c7) main_hc_apps_shell_pane

0xc1ee,	// (0x0003a625) grid_hc_apps_pane_ParamLimits

0xc1ee,	// (0x0003a625) grid_hc_apps_pane

0xc1fd,	// (0x0003a634) list_hc_apps_pane

0xc205,	// (0x0003a63c) scroll_pane_cp37_ParamLimits

0xc205,	// (0x0003a63c) scroll_pane_cp37

0x2358,	// (0x0003078f) cell_hc_apps_pane_ParamLimits

0x2358,	// (0x0003078f) cell_hc_apps_pane

0x2418,	// (0x0003084f) cell_hc_apps_pane_g1_ParamLimits

0x2418,	// (0x0003084f) cell_hc_apps_pane_g1

0xc313,	// (0x0003a74a) cell_hc_apps_pane_g2_ParamLimits

0xc313,	// (0x0003a74a) cell_hc_apps_pane_g2

0xc32f,	// (0x0003a766) cell_hc_apps_pane_g3_ParamLimits

0xc32f,	// (0x0003a766) cell_hc_apps_pane_g3

0x0002,

0xfcf6,	// (0x0003e12d) cell_hc_apps_pane_g_ParamLimits

0xfcf6,	// (0x0003e12d) cell_hc_apps_pane_g

0x2445,	// (0x0003087c) cell_hc_apps_pane_t1_ParamLimits

0x2445,	// (0x0003087c) cell_hc_apps_pane_t1

0x353c,	// (0x00031973) grid_highlight_pane_cp10_ParamLimits

0x353c,	// (0x00031973) grid_highlight_pane_cp10

0x2483,	// (0x000308ba) list_single_hc_apps_pane_ParamLimits

0x2483,	// (0x000308ba) list_single_hc_apps_pane

0xc404,	// (0x0003a83b) list_single_hc_apps_pane_g1

0x94c7,	// (0x000378fe) list_single_hc_apps_pane_g2

0x0001,

0xfcfd,	// (0x0003e134) list_single_hc_apps_pane_g

0x94e0,	// (0x00037917) list_single_hc_apps_pane_g2_copy1

0x7b51,	// (0x00035f88) list_single_hc_apps_pane_t1

0x3400,	// (0x00031837) bg_set_opt_pane_cp_ParamLimits

0x8056,	// (0x0003648d) setting_slider_pane_t1_ParamLimits

0x806f,	// (0x000364a6) setting_slider_pane_t2_ParamLimits

0x8088,	// (0x000364bf) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003d9d9) setting_slider_pane_t_ParamLimits

0x809f,	// (0x000364d6) slider_set_pane_ParamLimits

0x8a4a,	// (0x00036e81) control_pane_g5_ParamLimits

0x8a4a,	// (0x00036e81) control_pane_g5

0x5ad8,	// (0x00033f0f) slider_set_pane_g1_ParamLimits

0x8e54,	// (0x0003728b) slider_set_pane_g2_ParamLimits

0x8e60,	// (0x00037297) slider_set_pane_g3_ParamLimits

0x8e74,	// (0x000372ab) slider_set_pane_g4_ParamLimits

0x8e8c,	// (0x000372c3) slider_set_pane_g5_ParamLimits

0x8e60,	// (0x00037297) slider_set_pane_g6_ParamLimits

0x8ea2,	// (0x000372d9) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0003ddd4) slider_set_pane_g_ParamLimits

0x4310,	// (0x00032747) navi_icon_text_pane_ParamLimits

0x1546,	// (0x0002f97d) aid_fill_nsta_2_ParamLimits

0x157a,	// (0x0002f9b1) aid_touch_tab_arrow_left_ParamLimits

0x1590,	// (0x0002f9c7) aid_touch_tab_arrow_right_ParamLimits

0x162b,	// (0x0002fa62) clock_nsta_pane_ParamLimits

0x1ac0,	// (0x0002fef7) navi_icon_pane_g1_ParamLimits

0x1acc,	// (0x0002ff03) navi_text_pane_t1_ParamLimits

0x1f6f,	// (0x000303a6) navi_icon_text_pane_g1_ParamLimits

0x1f7b,	// (0x000303b2) navi_icon_text_pane_t1_ParamLimits

0xc404,	// (0x0003a83b) list_single_hc_apps_pane_g1_ParamLimits

0x94c7,	// (0x000378fe) list_single_hc_apps_pane_g2_ParamLimits

0xfcfd,	// (0x0003e134) list_single_hc_apps_pane_g_ParamLimits

0x94e0,	// (0x00037917) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7b51,	// (0x00035f88) list_single_hc_apps_pane_t1_ParamLimits

0xec82,	// (0x0003d0b9) popup_toolbar2_fixed_window_ParamLimits

0xec82,	// (0x0003d0b9) popup_toolbar2_fixed_window

0x14af,	// (0x0002f8e6) popup_toolbar2_float_window

0x3390,	// (0x000317c7) bg_popup_sub_pane_cp27

0xc41d,	// (0x0003a854) grid_toolbar2_float_pane

0x3390,	// (0x000317c7) bg_popup_sub_pane_cp26

0xc41d,	// (0x0003a854) grid_toolbar2_fixed_pane

0x24b6,	// (0x000308ed) cell_toolbar2_fixed_pane_ParamLimits

0x24b6,	// (0x000308ed) cell_toolbar2_fixed_pane

0x24d1,	// (0x00030908) cell_toolbar2_fixed_pane_g1

0xc43f,	// (0x0003a876) toolbar2_fixed_button_pane

0x49da,	// (0x00032e11) toolbar2_fixed_button_pane_g1

0x49ea,	// (0x00032e21) toolbar2_fixed_button_pane_g2

0x49e2,	// (0x00032e19) toolbar2_fixed_button_pane_g3

0x49fa,	// (0x00032e31) toolbar2_fixed_button_pane_g4

0x49f2,	// (0x00032e29) toolbar2_fixed_button_pane_g5

0x4a02,	// (0x00032e39) toolbar2_fixed_button_pane_g6

0x4a0a,	// (0x00032e41) toolbar2_fixed_button_pane_g7

0x4a1a,	// (0x00032e51) toolbar2_fixed_button_pane_g8

0x4a12,	// (0x00032e49) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0003dcd6) toolbar2_fixed_button_pane_g

0xc447,	// (0x0003a87e) cell_toolbar2_float_pane_ParamLimits

0xc447,	// (0x0003a87e) cell_toolbar2_float_pane

0xc458,	// (0x0003a88f) cell_toolbar2_float_pane_g1

0xc43f,	// (0x0003a876) toolbar2_fixed_button_pane_cp

0x208b,	// (0x000304c2) fep_vkb_accented_list_pane_ParamLimits

0x208b,	// (0x000304c2) fep_vkb_accented_list_pane

0x934f,	// (0x00037786) bg_popup_fep_shadow_pane_g9

0x4492,	// (0x000328c9) bg_popup_fep_shadow_pane_cp3

0x3b56,	// (0x00031f8d) list_accented_list_pane

0xc461,	// (0x0003a898) list_single_accented_list_pane_ParamLimits

0xc461,	// (0x0003a898) list_single_accented_list_pane

0x4492,	// (0x000328c9) list_highlight_pane_cp10

0xc472,	// (0x0003a8a9) list_single_accented_list_pane_t1

0x13d9,	// (0x0002f810) popup_slider_window_ParamLimits

0x13d9,	// (0x0002f810) popup_slider_window

0xc076,	// (0x0003a4ad) aid_indentation_list_msg

0x25ca,	// (0x00030a01) bg_popup_window_pane_cp19

0xc596,	// (0x0003a9cd) popup_slider_window_g1

0xc5b2,	// (0x0003a9e9) popup_slider_window_g2

0xc5ce,	// (0x0003aa05) popup_slider_window_g3

0x0005,

0xfd02,	// (0x0003e139) popup_slider_window_g

0xc62a,	// (0x0003aa61) popup_slider_window_t1

0xc69e,	// (0x0003aad5) small_volume_slider_vertical_pane

0xaf59,	// (0x00039390) small_volume_slider_vertical_pane_g1

0xaf59,	// (0x00039390) small_volume_slider_vertical_pane_g2

0xc6ba,	// (0x0003aaf1) small_volume_slider_vertical_pane_g3

0x0002,

0xfd14,	// (0x0003e14b) small_volume_slider_vertical_pane_g

0xebf0,	// (0x0003d027) area_side_right_pane_ParamLimits

0xebf0,	// (0x0003d027) area_side_right_pane

0xf15c,	// (0x0003d593) aid_size_side_button_ParamLimits

0xf15c,	// (0x0003d593) aid_size_side_button

0xf175,	// (0x0003d5ac) grid_sctrl_middle_pane_ParamLimits

0xf175,	// (0x0003d5ac) grid_sctrl_middle_pane

0x9530,	// (0x00037967) sctrl_sk_bottom_pane

0x9541,	// (0x00037978) sctrl_sk_top_pane

0x9553,	// (0x0003798a) aid_touch_sctrl_top

0x353c,	// (0x00031973) bg_sctrl_sk_pane_ParamLimits

0x353c,	// (0x00031973) bg_sctrl_sk_pane

0x9560,	// (0x00037997) sctrl_sk_top_pane_g1

0x956d,	// (0x000379a4) sctrl_sk_top_pane_t1

0x9553,	// (0x0003798a) aid_touch_sctrl_bottom

0x353c,	// (0x00031973) bg_sctrl_sk_pane_cp_ParamLimits

0x353c,	// (0x00031973) bg_sctrl_sk_pane_cp

0x9588,	// (0x000379bf) sctrl_sk_bottom_pane_g1

0x956d,	// (0x000379a4) sctrl_sk_bottom_pane_t1

0xf18f,	// (0x0003d5c6) cell_sctrl_middle_pane_ParamLimits

0xf18f,	// (0x0003d5c6) cell_sctrl_middle_pane

0xf1a0,	// (0x0003d5d7) aid_touch_sctrl_middle_ParamLimits

0xf1a0,	// (0x0003d5d7) aid_touch_sctrl_middle

0xf1ad,	// (0x0003d5e4) bg_sctrl_middle_pane_ParamLimits

0xf1ad,	// (0x0003d5e4) bg_sctrl_middle_pane

0xc742,	// (0x0003ab79) cell_sctrl_middle_pane_g1_ParamLimits

0xc742,	// (0x0003ab79) cell_sctrl_middle_pane_g1

0xf1bb,	// (0x0003d5f2) cell_sctrl_middle_pane_g2_ParamLimits

0xf1bb,	// (0x0003d5f2) cell_sctrl_middle_pane_g2

0x0001,

0xfd20,	// (0x0003e157) cell_sctrl_middle_pane_g_ParamLimits

0xfd20,	// (0x0003e157) cell_sctrl_middle_pane_g

0x49da,	// (0x00032e11) bg_sctrl_middle_pane_g1

0x49ea,	// (0x00032e21) bg_sctrl_middle_pane_g2

0x49e2,	// (0x00032e19) bg_sctrl_middle_pane_g3

0x49fa,	// (0x00032e31) bg_sctrl_middle_pane_g4

0x49f2,	// (0x00032e29) bg_sctrl_middle_pane_g5

0x4a02,	// (0x00032e39) bg_sctrl_middle_pane_g6

0x4a0a,	// (0x00032e41) bg_sctrl_middle_pane_g7

0x4a1a,	// (0x00032e51) bg_sctrl_middle_pane_g8

0x0007,

0xfd25,	// (0x0003e15c) bg_sctrl_middle_pane_g

0x4a12,	// (0x00032e49) bg_sctrl_middle_pane_g8_copy1

0x49da,	// (0x00032e11) bg_sctrl_sk_pane_g1

0x49ea,	// (0x00032e21) bg_sctrl_sk_pane_g2

0x49e2,	// (0x00032e19) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0003dcd6) bg_sctrl_sk_pane_g

0x3989,	// (0x00031dc0) aid_size_touch_scroll_bar

0x49fa,	// (0x00032e31) bg_sctrl_sk_pane_g4

0x49f2,	// (0x00032e29) bg_sctrl_sk_pane_g5

0x4a02,	// (0x00032e39) bg_sctrl_sk_pane_g6

0x4a0a,	// (0x00032e41) bg_sctrl_sk_pane_g7

0x4a1a,	// (0x00032e51) bg_sctrl_sk_pane_g8

0x4a12,	// (0x00032e49) bg_sctrl_sk_pane_g9

0x471c,	// (0x00032b53) popup_fep_china_hwr2_fs_candidate_window

0x0f13,	// (0x0002f34a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x0f13,	// (0x0002f34a) popup_fep_china_hwr2_fs_control_window

0xb1f2,	// (0x00039629) sctrl_sk_top_pane_g2

0x0001,

0xfd1b,	// (0x0003e152) sctrl_sk_top_pane_g

0x2682,	// (0x00030ab9) aid_fep_china_hwr2_fs_cell_ParamLimits

0x2682,	// (0x00030ab9) aid_fep_china_hwr2_fs_cell

0x2696,	// (0x00030acd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x2696,	// (0x00030acd) bg_popup_fep_shadow_pane_cp4

0x26ad,	// (0x00030ae4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x26ad,	// (0x00030ae4) bg_popup_fep_shadow_pane_cp5

0x26bf,	// (0x00030af6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x26bf,	// (0x00030af6) popup_fep_china_hwr2_fs_control_bar_grid

0x26d3,	// (0x00030b0a) popup_fep_china_hwr2_fs_control_funtion_grid

0xc716,	// (0x0003ab4d) aid_fep_china_hwr2_fs_candi_cell

0x3390,	// (0x000317c7) bg_popup_fep_shadow_pane_cp6

0xc720,	// (0x0003ab57) popup_fep_china_hwr2_fs_candidate_grid

0x26db,	// (0x00030b12) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x26db,	// (0x00030b12) cell_fep_china_hwr2_fs_funtion_grid

0xaf59,	// (0x00039390) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xc742,	// (0x0003ab79) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xc742,	// (0x0003ab79) cell_fep_china_hwr2_fs_funtion_grid_g1

0xc750,	// (0x0003ab87) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xc750,	// (0x0003ab87) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd36,	// (0x0003e16d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd36,	// (0x0003e16d) cell_fep_china_hwr2_fs_funtion_grid_g

0x26f3,	// (0x00030b2a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x26f3,	// (0x00030b2a) cell_fep_china_hwr2_fs_funtion_grid_t1

0x2708,	// (0x00030b3f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x2708,	// (0x00030b3f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3b,	// (0x0003e172) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3b,	// (0x0003e172) cell_fep_china_hwr2_fs_funtion_grid_t

0xc797,	// (0x0003abce) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xc79f,	// (0x0003abd6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xc7a7,	// (0x0003abde) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd40,	// (0x0003e177) popup_fep_china_hwr2_fs_control_bar_grid_g

0xc7af,	// (0x0003abe6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xc7af,	// (0x0003abe6) cell_fep_china_hwr2_fs_candidate_grid

0xc7c8,	// (0x0003abff) popup_fep_china_hwr2_fs_candidate_grid_g20

0xc7d0,	// (0x0003ac07) popup_fep_china_hwr2_fs_candidate_grid_g21

0xaf59,	// (0x00039390) cell_fep_china_hwr2_fs_candidate_grid_g1

0xaf59,	// (0x00039390) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb67,	// (0x0003df9e) cell_fep_china_hwr2_fs_candidate_grid_g

0xc7d8,	// (0x0003ac0f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4829,	// (0x00032c60) clock_nsta_pane_cp_24_ParamLimits

0x4829,	// (0x00032c60) clock_nsta_pane_cp_24

0x4891,	// (0x00032cc8) indicator_nsta_pane_cp_24_ParamLimits

0x4891,	// (0x00032cc8) indicator_nsta_pane_cp_24

0x5596,	// (0x000339cd) heading_pane_g1

0x0001,

0xf904,	// (0x0003dd3b) heading_pane_g

0x5c0c,	// (0x00034043) grid_sct_catagory_button_pane

0x595a,	// (0x00033d91) scroll_pane_cp5_ParamLimits

0x648a,	// (0x000348c1) button_value_adjust_pane_cp5_ParamLimits

0x648a,	// (0x000348c1) button_value_adjust_pane_cp5

0x6548,	// (0x0003497f) form2_midp_time_pane_ParamLimits

0xc7e6,	// (0x0003ac1d) cell_sct_catagory_button_pane_ParamLimits

0xc7e6,	// (0x0003ac1d) cell_sct_catagory_button_pane

0xaf1e,	// (0x00039355) bg_button_pane_cp01_ParamLimits

0xaf1e,	// (0x00039355) bg_button_pane_cp01

0xaf59,	// (0x00039390) cell_sct_catagory_button_pane_g1

0x1452,	// (0x0002f889) popup_tb_extension_window

0x2724,	// (0x00030b5b) aid_size_cell_ext_ParamLimits

0x2724,	// (0x00030b5b) aid_size_cell_ext

0x37cb,	// (0x00031c02) bg_tb_trans_pane_cp1_ParamLimits

0x37cb,	// (0x00031c02) bg_tb_trans_pane_cp1

0x274a,	// (0x00030b81) grid_tb_ext_pane_ParamLimits

0x274a,	// (0x00030b81) grid_tb_ext_pane

0x278a,	// (0x00030bc1) cell_tb_ext_pane_ParamLimits

0x278a,	// (0x00030bc1) cell_tb_ext_pane

0x27b2,	// (0x00030be9) cell_tb_ext_pane_g1_ParamLimits

0x27b2,	// (0x00030be9) cell_tb_ext_pane_g1

0xc87e,	// (0x0003acb5) cell_tb_ext_pane_t1

0x353c,	// (0x00031973) list_highlight_pane_cp11_ParamLimits

0x353c,	// (0x00031973) list_highlight_pane_cp11

0x7ec9,	// (0x00036300) popup_uni_indicator_window_ParamLimits

0x7ec9,	// (0x00036300) popup_uni_indicator_window

0x3a50,	// (0x00031e87) bg_popup_sub_pane_cp14

0xc899,	// (0x0003acd0) list_uniindi_pane

0xc8a5,	// (0x0003acdc) uniindi_top_pane

0x353c,	// (0x00031973) bg_uniindi_top_pane

0xc8c4,	// (0x0003acfb) uniindi_top_pane_g1

0xc8da,	// (0x0003ad11) uniindi_top_pane_g2

0x0003,

0xfd47,	// (0x0003e17e) uniindi_top_pane_g

0xc904,	// (0x0003ad3b) uniindi_top_pane_t1

0xc92e,	// (0x0003ad65) list_single_uniindi_pane_ParamLimits

0xc92e,	// (0x0003ad65) list_single_uniindi_pane

0xaf59,	// (0x00039390) bg_uniindi_top_pane_g1

0xc940,	// (0x0003ad77) list_single_uniindi_pane_g1

0xc953,	// (0x0003ad8a) list_single_uniindi_pane_t1

0x3390,	// (0x000317c7) control_bg_pane

0xc978,	// (0x0003adaf) bg_sctrl_sk_pane_cp1

0xc981,	// (0x0003adb8) bg_sctrl_sk_pane_cp2

0xc98a,	// (0x0003adc1) control_bg_pane_g1

0xc993,	// (0x0003adca) control_bg_pane_g2

0x0001,

0xfd50,	// (0x0003e187) control_bg_pane_g

0x63b8,	// (0x000347ef) cell_indicator_nsta_pane_g1_ParamLimits

0x1ed6,	// (0x0003030d) cell_indicator_nsta_pane_g2_ParamLimits

0xfad8,	// (0x0003df0f) cell_indicator_nsta_pane_g_ParamLimits

0x786c,	// (0x00035ca3) form2_midp_time_pane_t1_ParamLimits

0xb503,	// (0x0003993a) main_idle_act4_pane_ParamLimits

0xb503,	// (0x0003993a) main_idle_act4_pane

0x1452,	// (0x0002f889) popup_tb_extension_window_ParamLimits

0x2771,	// (0x00030ba8) tb_ext_find_pane_ParamLimits

0x2771,	// (0x00030ba8) tb_ext_find_pane

0xc99c,	// (0x0003add3) ai_gene_pane_1_cp1

0x4514,	// (0x0003294b) ai_gene_pane_2_cp1

0xc9a4,	// (0x0003addb) list_single_idle_plugin_calendar_pane

0xc9ad,	// (0x0003ade4) list_single_idle_plugin_notification_pane

0xc9b6,	// (0x0003aded) list_single_idle_plugin_player_pane

0x27cf,	// (0x00030c06) list_single_idle_plugin_shortcut_pane_ParamLimits

0x27cf,	// (0x00030c06) list_single_idle_plugin_shortcut_pane

0x27f7,	// (0x00030c2e) main_idle_act4_pane_t1

0x280d,	// (0x00030c44) main_idle_act4_pane_t2

0x0001,

0xfd55,	// (0x0003e18c) main_idle_act4_pane_t

0x2825,	// (0x00030c5c) middle_sk_idle_act4_pane_ParamLimits

0x2825,	// (0x00030c5c) middle_sk_idle_act4_pane

0x2841,	// (0x00030c78) popup_clock_digital_analogue_window_cp2

0x2868,	// (0x00030c9f) shortcut_wheel_idle_act4_pane_ParamLimits

0x2868,	// (0x00030c9f) shortcut_wheel_idle_act4_pane

0xaf59,	// (0x00039390) shortcut_wheel_idle_act4_pane_g1

0xaf59,	// (0x00039390) shortcut_wheel_idle_act4_pane_g2

0xaf59,	// (0x00039390) shortcut_wheel_idle_act4_pane_g3

0xaf59,	// (0x00039390) shortcut_wheel_idle_act4_pane_g4

0xaf59,	// (0x00039390) shortcut_wheel_idle_act4_pane_g5

0xca49,	// (0x0003ae80) shortcut_wheel_idle_act4_pane_g6

0xca51,	// (0x0003ae88) shortcut_wheel_idle_act4_pane_g7

0xca59,	// (0x0003ae90) shortcut_wheel_idle_act4_pane_g8

0xca61,	// (0x0003ae98) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5a,	// (0x0003e191) shortcut_wheel_idle_act4_pane_g

0xf584,	// (0x0003d9bb) middle_sk_idle_act4_pane_g1_ParamLimits

0xf584,	// (0x0003d9bb) middle_sk_idle_act4_pane_g1

0x28e5,	// (0x00030d1c) middle_sk_idle_act4_pane_g2_ParamLimits

0x28e5,	// (0x00030d1c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7d,	// (0x0003e1b4) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7d,	// (0x0003e1b4) middle_sk_idle_act4_pane_g

0x28fd,	// (0x00030d34) middle_sk_idle_act4_pane_t1_ParamLimits

0x28fd,	// (0x00030d34) middle_sk_idle_act4_pane_t1

0x292c,	// (0x00030d63) grid_ai_shortcut_pane_ParamLimits

0x292c,	// (0x00030d63) grid_ai_shortcut_pane

0x2949,	// (0x00030d80) list_highlight_pane_cp16_ParamLimits

0x2949,	// (0x00030d80) list_highlight_pane_cp16

0x2956,	// (0x00030d8d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x2956,	// (0x00030d8d) list_single_idle_plugin_shortcut_pane_g1

0x2962,	// (0x00030d99) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x2962,	// (0x00030d99) list_single_idle_plugin_shortcut_pane_g2

0x297e,	// (0x00030db5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x297e,	// (0x00030db5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd82,	// (0x0003e1b9) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd82,	// (0x0003e1b9) list_single_idle_plugin_shortcut_pane_g

0x2993,	// (0x00030dca) cell_ai_shortcut_pane_ParamLimits

0x2993,	// (0x00030dca) cell_ai_shortcut_pane

0x29a9,	// (0x00030de0) cell_ai_shortcut_pane_g1_ParamLimits

0x29a9,	// (0x00030de0) cell_ai_shortcut_pane_g1

0xc99c,	// (0x0003add3) ai_gene_pane_1_cp2

0xcb8e,	// (0x0003afc5) ai_gene_pane_2_cp2

0xcb96,	// (0x0003afcd) list_highlight_pane_cp15

0xcb9f,	// (0x0003afd6) list_single_idle_plugin_calendar_pane_g1

0xcb96,	// (0x0003afcd) list_highlight_pane_cp17

0xcba7,	// (0x0003afde) list_single_idle_plugin_calendar_pane_g1_copy1

0xcbaf,	// (0x0003afe6) list_single_idle_plugin_player_pane_g1

0x5e21,	// (0x00034258) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd89,	// (0x0003e1c0) list_single_idle_plugin_player_pane_g

0xcbb7,	// (0x0003afee) list_single_idle_plugin_player_pane_t1

0xcbc5,	// (0x0003affc) list_single_idle_plugin_player_pane_t2

0xcbd3,	// (0x0003b00a) list_single_idle_plugin_player_pane_t3

0xcbe1,	// (0x0003b018) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8e,	// (0x0003e1c5) list_single_idle_plugin_player_pane_t

0xcbef,	// (0x0003b026) wait_bar_pane_cp15

0xcbf7,	// (0x0003b02e) grid_ai_notification_pane

0x5e21,	// (0x00034258) list_single_idle_plugin_notification_pane_g1

0x29cb,	// (0x00030e02) cell_ai_notification_pane_ParamLimits

0x29cb,	// (0x00030e02) cell_ai_notification_pane

0xcc0d,	// (0x0003b044) cell_ai_notification_pane_g1

0xcc15,	// (0x0003b04c) cell_ai_notification_pane_t1

0x29d8,	// (0x00030e0f) tb_ext_find_button_pane

0x29e0,	// (0x00030e17) tb_ext_find_pane_g1

0x29e8,	// (0x00030e1f) tb_ext_find_pane_t1

0x3f83,	// (0x000323ba) tb_ext_find_button_pane_g1

0xcc41,	// (0x0003b078) tb_ext_find_button_pane_g2

0x0001,

0xfd97,	// (0x0003e1ce) tb_ext_find_button_pane_g

0x27f7,	// (0x00030c2e) main_idle_act4_pane_t1_ParamLimits

0x280d,	// (0x00030c44) main_idle_act4_pane_t2_ParamLimits

0xfd55,	// (0x0003e18c) main_idle_act4_pane_t_ParamLimits

0x2841,	// (0x00030c78) popup_clock_digital_analogue_window_cp2_ParamLimits

0x2858,	// (0x00030c8f) sat_plugin_idle_act4_pane_ParamLimits

0x2858,	// (0x00030c8f) sat_plugin_idle_act4_pane

0x29f6,	// (0x00030e2d) sat_plugin_idle_act4_pane_t1_ParamLimits

0x29f6,	// (0x00030e2d) sat_plugin_idle_act4_pane_t1

0x2a0e,	// (0x00030e45) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2a0e,	// (0x00030e45) sat_plugin_idle_act4_pane_t2

0x2a26,	// (0x00030e5d) sat_plugin_idle_act4_pane_t3_ParamLimits

0x2a26,	// (0x00030e5d) sat_plugin_idle_act4_pane_t3

0x2a3e,	// (0x00030e75) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2a3e,	// (0x00030e75) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9c,	// (0x0003e1d3) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9c,	// (0x0003e1d3) sat_plugin_idle_act4_pane_t

0x7e12,	// (0x00036249) popup_battery_window_ParamLimits

0x7e12,	// (0x00036249) popup_battery_window

0x353c,	// (0x00031973) bg_popup_sub_pane_cp25_ParamLimits

0x353c,	// (0x00031973) bg_popup_sub_pane_cp25

0xcc96,	// (0x0003b0cd) popup_battery_window_g1_ParamLimits

0xcc96,	// (0x0003b0cd) popup_battery_window_g1

0xcca2,	// (0x0003b0d9) popup_battery_window_t1_ParamLimits

0xcca2,	// (0x0003b0d9) popup_battery_window_t1

0xccb4,	// (0x0003b0eb) popup_battery_window_t2_ParamLimits

0xccb4,	// (0x0003b0eb) popup_battery_window_t2

0x0001,

0xfda5,	// (0x0003e1dc) popup_battery_window_t_ParamLimits

0xfda5,	// (0x0003e1dc) popup_battery_window_t

0x0daa,	// (0x0002f1e1) midp_canvas_pane_ParamLimits

0x0e07,	// (0x0002f23e) midp_keypad_pane_ParamLimits

0x0e07,	// (0x0002f23e) midp_keypad_pane

0x3ba7,	// (0x00031fde) main_midp_pane_ParamLimits

0x643d,	// (0x00034874) signal_pane_g2_cp_ParamLimits

0x2a56,	// (0x00030e8d) aid_size_cell_midp_keypad_ParamLimits

0x2a56,	// (0x00030e8d) aid_size_cell_midp_keypad

0x2a74,	// (0x00030eab) midp_keyp_game_grid_pane_ParamLimits

0x2a74,	// (0x00030eab) midp_keyp_game_grid_pane

0x2a9b,	// (0x00030ed2) midp_keyp_rocker_pane_ParamLimits

0x2a9b,	// (0x00030ed2) midp_keyp_rocker_pane

0x2af4,	// (0x00030f2b) midp_keyp_sk_left_pane_ParamLimits

0x2af4,	// (0x00030f2b) midp_keyp_sk_left_pane

0x2b48,	// (0x00030f7f) midp_keyp_sk_right_pane_ParamLimits

0x2b48,	// (0x00030f7f) midp_keyp_sk_right_pane

0x3390,	// (0x000317c7) bg_button_pane_cp03

0x2b9c,	// (0x00030fd3) midp_keyp_sk_left_pane_g1

0x3390,	// (0x000317c7) bg_button_pane_cp04

0x2b9c,	// (0x00030fd3) midp_keyp_sk_right_pane_g1

0xaf59,	// (0x00039390) midp_keyp_rocker_pane_g1

0x2ba5,	// (0x00030fdc) keyp_game_cell_pane_ParamLimits

0x2ba5,	// (0x00030fdc) keyp_game_cell_pane

0x3390,	// (0x000317c7) bg_button_pane_cp02

0x2bc9,	// (0x00031000) keyp_game_cell_pane_g1

0xec32,	// (0x0003d069) popup_fep_vkb2_window_ParamLimits

0xec32,	// (0x0003d069) popup_fep_vkb2_window

0xf1c7,	// (0x0003d5fe) aid_size_cell_vkb2_ParamLimits

0xf1c7,	// (0x0003d5fe) aid_size_cell_vkb2

0xf1fd,	// (0x0003d634) popup_fep_vkb2_window_g1_ParamLimits

0xf1fd,	// (0x0003d634) popup_fep_vkb2_window_g1

0xf244,	// (0x0003d67b) vkb2_area_bottom_pane_ParamLimits

0xf244,	// (0x0003d67b) vkb2_area_bottom_pane

0xf298,	// (0x0003d6cf) vkb2_area_keypad_pane_ParamLimits

0xf298,	// (0x0003d6cf) vkb2_area_keypad_pane

0xf2e0,	// (0x0003d717) vkb2_area_top_pane_ParamLimits

0xf2e0,	// (0x0003d717) vkb2_area_top_pane

0xf366,	// (0x0003d79d) vkb2_top_entry_pane_ParamLimits

0xf366,	// (0x0003d79d) vkb2_top_entry_pane

0xf393,	// (0x0003d7ca) vkb2_top_grid_left_pane_ParamLimits

0xf393,	// (0x0003d7ca) vkb2_top_grid_left_pane

0xf3b3,	// (0x0003d7ea) vkb2_top_grid_right_pane_ParamLimits

0xf3b3,	// (0x0003d7ea) vkb2_top_grid_right_pane

0x97e2,	// (0x00037c19) vkb2_cell_keypad_pane_ParamLimits

0x97e2,	// (0x00037c19) vkb2_cell_keypad_pane

0xf3f9,	// (0x0003d830) vkb2_area_bottom_grid_pane_ParamLimits

0xf3f9,	// (0x0003d830) vkb2_area_bottom_grid_pane

0xf423,	// (0x0003d85a) vkb2_area_bottom_pane_g1_ParamLimits

0xf423,	// (0x0003d85a) vkb2_area_bottom_pane_g1

0xf449,	// (0x0003d880) vkb2_area_bottom_pane_g2_ParamLimits

0xf449,	// (0x0003d880) vkb2_area_bottom_pane_g2

0xf47a,	// (0x0003d8b1) vkb2_area_bottom_pane_g3_ParamLimits

0xf47a,	// (0x0003d8b1) vkb2_area_bottom_pane_g3

0x0002,

0xfdaa,	// (0x0003e1e1) vkb2_area_bottom_pane_g_ParamLimits

0xfdaa,	// (0x0003e1e1) vkb2_area_bottom_pane_g

0x998c,	// (0x00037dc3) vkb2_top_cell_left_pane_ParamLimits

0x998c,	// (0x00037dc3) vkb2_top_cell_left_pane

0x2bd2,	// (0x00031009) vkb2_top_entry_pane_g1_ParamLimits

0x2bd2,	// (0x00031009) vkb2_top_entry_pane_g1

0x2be0,	// (0x00031017) vkb2_top_entry_pane_t1_ParamLimits

0x2be0,	// (0x00031017) vkb2_top_entry_pane_t1

0xce25,	// (0x0003b25c) vkb2_top_entry_pane_t2_ParamLimits

0xce25,	// (0x0003b25c) vkb2_top_entry_pane_t2

0xce57,	// (0x0003b28e) vkb2_top_entry_pane_t3_ParamLimits

0xce57,	// (0x0003b28e) vkb2_top_entry_pane_t3

0x0002,

0xfdb1,	// (0x0003e1e8) vkb2_top_entry_pane_t_ParamLimits

0xfdb1,	// (0x0003e1e8) vkb2_top_entry_pane_t

0xf4e4,	// (0x0003d91b) vkb2_top_grid_right_pane_g1_ParamLimits

0xf4e4,	// (0x0003d91b) vkb2_top_grid_right_pane_g1

0x99ef,	// (0x00037e26) vkb2_top_grid_right_pane_g2_ParamLimits

0x99ef,	// (0x00037e26) vkb2_top_grid_right_pane_g2

0x9a07,	// (0x00037e3e) vkb2_top_grid_right_pane_g3_ParamLimits

0x9a07,	// (0x00037e3e) vkb2_top_grid_right_pane_g3

0xf4fa,	// (0x0003d931) vkb2_top_grid_right_pane_g4_ParamLimits

0xf4fa,	// (0x0003d931) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb8,	// (0x0003e1ef) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb8,	// (0x0003e1ef) vkb2_top_grid_right_pane_g

0x9a35,	// (0x00037e6c) vkb2_top_cell_left_pane_g1

0x9a4c,	// (0x00037e83) vkb2_cell_keypad_pane_g1_ParamLimits

0x9a4c,	// (0x00037e83) vkb2_cell_keypad_pane_g1

0xce7b,	// (0x0003b2b2) vkb2_cell_keypad_pane_t1_ParamLimits

0xce7b,	// (0x0003b2b2) vkb2_cell_keypad_pane_t1

0x9a5a,	// (0x00037e91) vkb2_cell_bottom_grid_pane_ParamLimits

0x9a5a,	// (0x00037e91) vkb2_cell_bottom_grid_pane

0x9a93,	// (0x00037eca) vkb2_cell_bottom_grid_pane_g1

0x2889,	// (0x00030cc0) aid_call2_pane_cp02

0x2891,	// (0x00030cc8) aid_call_pane_cp02

0x2899,	// (0x00030cd0) clock_digital_number_pane_cp10

0x28a1,	// (0x00030cd8) clock_digital_number_pane_cp11

0x28a9,	// (0x00030ce0) clock_digital_number_pane_cp12

0x28b1,	// (0x00030ce8) clock_digital_number_pane_cp13

0x28b9,	// (0x00030cf0) clock_digital_separator_pane_cp10

0x3f83,	// (0x000323ba) popup_clock_digital_analogue_window_cp2_g1

0x3f83,	// (0x000323ba) popup_clock_digital_analogue_window_cp2_g2

0x28c1,	// (0x00030cf8) popup_clock_digital_analogue_window_cp2_g3

0x3f83,	// (0x000323ba) popup_clock_digital_analogue_window_cp2_g4

0x28c1,	// (0x00030cf8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6d,	// (0x0003e1a4) popup_clock_digital_analogue_window_cp2_g

0x28c9,	// (0x00030d00) popup_clock_digital_analogue_window_cp2_t1

0x28d7,	// (0x00030d0e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd78,	// (0x0003e1af) popup_clock_digital_analogue_window_cp2_t

0xaf59,	// (0x00039390) clock_digital_number_pane_cp10_g1

0xaf59,	// (0x00039390) clock_digital_number_pane_cp10_g2

0x0001,

0xfb67,	// (0x0003df9e) clock_digital_number_pane_cp10_g

0xaf59,	// (0x00039390) clock_digital_separator_pane_cp10_g1

0xaf59,	// (0x00039390) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb67,	// (0x0003df9e) clock_digital_separator_pane_cp10_g

0xc8e6,	// (0x0003ad1d) uniindi_top_pane_g3

0xc8f7,	// (0x0003ad2e) uniindi_top_pane_g4

0x986d,	// (0x00037ca4) vkb2_row_keypad_pane_ParamLimits

0x986d,	// (0x00037ca4) vkb2_row_keypad_pane

0x9ab3,	// (0x00037eea) vkb2_cell_t_keypad_pane_ParamLimits

0x9ab3,	// (0x00037eea) vkb2_cell_t_keypad_pane

0x9ac3,	// (0x00037efa) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9ac3,	// (0x00037efa) vkb2_cell_t_keypad_pane_cp08

0x9ad6,	// (0x00037f0d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9ad6,	// (0x00037f0d) vkb2_cell_t_keypad_pane_cp09

0x9aea,	// (0x00037f21) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9aea,	// (0x00037f21) vkb2_cell_t_keypad_pane_cp01

0x9afb,	// (0x00037f32) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9afb,	// (0x00037f32) vkb2_cell_t_keypad_pane_cp02

0x9b0c,	// (0x00037f43) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9b0c,	// (0x00037f43) vkb2_cell_t_keypad_pane_cp03

0x9b1d,	// (0x00037f54) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9b1d,	// (0x00037f54) vkb2_cell_t_keypad_pane_cp04

0x9b2e,	// (0x00037f65) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9b2e,	// (0x00037f65) vkb2_cell_t_keypad_pane_cp05

0x9b3f,	// (0x00037f76) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9b3f,	// (0x00037f76) vkb2_cell_t_keypad_pane_cp06

0x9b50,	// (0x00037f87) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9b50,	// (0x00037f87) vkb2_cell_t_keypad_pane_cp07

0x9b61,	// (0x00037f98) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9b61,	// (0x00037f98) vkb2_cell_t_keypad_pane_cp10

0xb1f2,	// (0x00039629) vkb2_cell_t_keypad_pane_g1

0xce92,	// (0x0003b2c9) vkb2_cell_t_keypad_pane_t1

0x3390,	// (0x000317c7) popup_grid_graphic2_window

0x2c19,	// (0x00031050) aid_size_cell_graphic2_ParamLimits

0x2c19,	// (0x00031050) aid_size_cell_graphic2

0x4f56,	// (0x0003338d) bg_popup_window_pane_cp21_ParamLimits

0x4f56,	// (0x0003338d) bg_popup_window_pane_cp21

0x2c4b,	// (0x00031082) graphic2_pages_pane_ParamLimits

0x2c4b,	// (0x00031082) graphic2_pages_pane

0x2ca1,	// (0x000310d8) grid_graphic2_control_pane_ParamLimits

0x2ca1,	// (0x000310d8) grid_graphic2_control_pane

0x2cd5,	// (0x0003110c) grid_graphic2_pane_ParamLimits

0x2cd5,	// (0x0003110c) grid_graphic2_pane

0x2d48,	// (0x0003117f) cell_graphic2_pane

0x3390,	// (0x000317c7) main_comp_mode_pane

0xc128,	// (0x0003a55f) list_ai3_gene_pane_ParamLimits

0x25ca,	// (0x00030a01) bg_popup_window_pane_cp19_ParamLimits

0xc538,	// (0x0003a96f) bg_touch_area_indi_pane_ParamLimits

0xc538,	// (0x0003a96f) bg_touch_area_indi_pane

0xc54e,	// (0x0003a985) bg_touch_area_indi_pane_cp01_ParamLimits

0xc54e,	// (0x0003a985) bg_touch_area_indi_pane_cp01

0xc564,	// (0x0003a99b) bg_touch_area_indi_pane_cp02_ParamLimits

0xc564,	// (0x0003a99b) bg_touch_area_indi_pane_cp02

0xc57c,	// (0x0003a9b3) bg_touch_area_indi_pane_cp03_ParamLimits

0xc57c,	// (0x0003a9b3) bg_touch_area_indi_pane_cp03

0xc596,	// (0x0003a9cd) popup_slider_window_g1_ParamLimits

0xc5b2,	// (0x0003a9e9) popup_slider_window_g2_ParamLimits

0xc5ce,	// (0x0003aa05) popup_slider_window_g3_ParamLimits

0xfd02,	// (0x0003e139) popup_slider_window_g_ParamLimits

0xc62a,	// (0x0003aa61) popup_slider_window_t1_ParamLimits

0xc69e,	// (0x0003aad5) small_volume_slider_vertical_pane_ParamLimits

0x2d48,	// (0x0003117f) cell_graphic2_pane_ParamLimits

0x2da3,	// (0x000311da) bg_button_pane_cp10_ParamLimits

0x2da3,	// (0x000311da) bg_button_pane_cp10

0x2db6,	// (0x000311ed) bg_button_pane_cp11_ParamLimits

0x2db6,	// (0x000311ed) bg_button_pane_cp11

0x2dc9,	// (0x00031200) graphic2_pages_pane_g1_ParamLimits

0x2dc9,	// (0x00031200) graphic2_pages_pane_g1

0x2de4,	// (0x0003121b) graphic2_pages_pane_g2_ParamLimits

0x2de4,	// (0x0003121b) graphic2_pages_pane_g2

0x0001,

0xfdc6,	// (0x0003e1fd) graphic2_pages_pane_g_ParamLimits

0xfdc6,	// (0x0003e1fd) graphic2_pages_pane_g

0x2dfc,	// (0x00031233) graphic2_pages_pane_t1_ParamLimits

0x2dfc,	// (0x00031233) graphic2_pages_pane_t1

0x2e21,	// (0x00031258) cell_graphic2_control_pane_ParamLimits

0x2e21,	// (0x00031258) cell_graphic2_control_pane

0x2e3b,	// (0x00031272) cell_graphic2_pane_g1_ParamLimits

0x2e3b,	// (0x00031272) cell_graphic2_pane_g1

0x016e,	// (0x0002e5a5) cell_graphic2_pane_g2_ParamLimits

0x016e,	// (0x0002e5a5) cell_graphic2_pane_g2

0x2e14,	// (0x0003124b) cell_graphic2_pane_g3_ParamLimits

0x2e14,	// (0x0003124b) cell_graphic2_pane_g3

0x017b,	// (0x0002e5b2) cell_graphic2_pane_g4_ParamLimits

0x017b,	// (0x0002e5b2) cell_graphic2_pane_g4

0x2e48,	// (0x0003127f) cell_graphic2_pane_g5_ParamLimits

0x2e48,	// (0x0003127f) cell_graphic2_pane_g5

0x0004,

0xfdcb,	// (0x0003e202) cell_graphic2_pane_g_ParamLimits

0xfdcb,	// (0x0003e202) cell_graphic2_pane_g

0x2e68,	// (0x0003129f) cell_graphic2_pane_t1_ParamLimits

0x2e68,	// (0x0003129f) cell_graphic2_pane_t1

0x558a,	// (0x000339c1) grid_highlight_pane_cp11_ParamLimits

0x558a,	// (0x000339c1) grid_highlight_pane_cp11

0x3a50,	// (0x00031e87) bg_button_pane_cp05

0x2e7f,	// (0x000312b6) cell_graphic2_control_pane_g1

0xaf59,	// (0x00039390) bg_touch_area_indi_pane_g1

0xcea4,	// (0x0003b2db) aid_cmod_rocker_key_size

0xceae,	// (0x0003b2e5) aid_cmode_itu_key_size

0xceb8,	// (0x0003b2ef) main_cmode_video_pane

0xcec2,	// (0x0003b2f9) main_comp_mode_itu_pane

0xcece,	// (0x0003b305) main_comp_mode_rocker_pane

0xceda,	// (0x0003b311) cell_cmode_rocker_pane_ParamLimits

0xceda,	// (0x0003b311) cell_cmode_rocker_pane

0xceec,	// (0x0003b323) cell_cmode_itu_pane_ParamLimits

0xceec,	// (0x0003b323) cell_cmode_itu_pane

0x3a50,	// (0x00031e87) bg_button_pane_cp06_ParamLimits

0x3a50,	// (0x00031e87) bg_button_pane_cp06

0xb1f2,	// (0x00039629) cell_cmode_rocker_pane_g1_ParamLimits

0xb1f2,	// (0x00039629) cell_cmode_rocker_pane_g1

0xc742,	// (0x0003ab79) cell_cmode_rocker_pane_g2_ParamLimits

0xc742,	// (0x0003ab79) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x0003e20d) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x0003e20d) cell_cmode_rocker_pane_g

0x3390,	// (0x000317c7) bg_button_pane_cp07

0xcf01,	// (0x0003b338) cell_cmode_itu_pane_g1

0xcf0a,	// (0x0003b341) cell_cmode_itu_pane_t1

0xcf18,	// (0x0003b34f) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x0003e212) cell_cmode_itu_pane_t

0xc968,	// (0x0003ad9f) aid_touch_ctrl_left

0xc970,	// (0x0003ada7) aid_touch_ctrl_right

0x3390,	// (0x000317c7) compa_mode_pane

0x2e8c,	// (0x000312c3) aid_cmod_rocker_key_size_cp

0x2e96,	// (0x000312cd) aid_cmode_itu_key_size_cp

0xcf26,	// (0x0003b35d) compa_mode_pane_g1

0xcf2e,	// (0x0003b365) compa_mode_pane_g2

0xcf36,	// (0x0003b36d) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x0003e217) compa_mode_pane_g

0x2ea0,	// (0x000312d7) main_comp_mode_itu_pane_cp

0x2ea8,	// (0x000312df) main_comp_mode_rocker_pane_cp

0x2eb0,	// (0x000312e7) cell_cmode_itu_pane_cp_ParamLimits

0x2eb0,	// (0x000312e7) cell_cmode_itu_pane_cp

0x2ec5,	// (0x000312fc) cell_cmode_rocker_pane_cp_ParamLimits

0x2ec5,	// (0x000312fc) cell_cmode_rocker_pane_cp

0x3a50,	// (0x00031e87) bg_button_pane_cp06_cp_ParamLimits

0x3a50,	// (0x00031e87) bg_button_pane_cp06_cp

0xb1f2,	// (0x00039629) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb1f2,	// (0x00039629) cell_cmode_rocker_pane_g1_cp

0xaf59,	// (0x00039390) cell_cmode_rocker_pane_g2_cp

0x3390,	// (0x000317c7) bg_button_pane_cp07_cp

0x2ed7,	// (0x0003130e) cell_cmode_itu_pane_g1_cp

0x2ee0,	// (0x00031317) cell_cmode_itu_pane_t1_cp

0x2ee0,	// (0x00031317) cell_cmode_itu_pane_t2_cp

0x1d0e,	// (0x00030145) settings_code_pane_cp2

0x3400,	// (0x00031837) bg_popup_window_pane_cp3_ParamLimits

0x370a,	// (0x00031b41) heading_pane_cp3_ParamLimits

0x3716,	// (0x00031b4d) listscroll_popup_graphic_pane_ParamLimits

0x9133,	// (0x0003756a) fep_hwr_aid_pane_ParamLimits

0x9553,	// (0x0003798a) aid_touch_sctrl_top_ParamLimits

0x9560,	// (0x00037997) sctrl_sk_top_pane_g1_ParamLimits

0xb1f2,	// (0x00039629) sctrl_sk_top_pane_g2_ParamLimits

0xfd1b,	// (0x0003e152) sctrl_sk_top_pane_g_ParamLimits

0x956d,	// (0x000379a4) sctrl_sk_top_pane_t1_ParamLimits

0x9553,	// (0x0003798a) aid_touch_sctrl_bottom_ParamLimits

0x956d,	// (0x000379a4) sctrl_sk_bottom_pane_t1_ParamLimits

0xc8b2,	// (0x0003ace9) aid_area_touch_clock

0xf328,	// (0x0003d75f) aid_vkb2_area_top_pane_cell_ParamLimits

0xf328,	// (0x0003d75f) aid_vkb2_area_top_pane_cell

0xf3d3,	// (0x0003d80a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xf3d3,	// (0x0003d80a) aid_vkb2_area_bottom_pane_cell

0xce1d,	// (0x0003b254) popup_char_count_window

0xcf3e,	// (0x0003b375) popup_char_count_window_g1

0xcf47,	// (0x0003b37e) popup_char_count_window_g2

0xcf50,	// (0x0003b387) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x0003e21e) popup_char_count_window_g

0xcf59,	// (0x0003b390) popup_char_count_window_t1

0x9612,	// (0x00037a49) popup_fep_char_preview_window_ParamLimits

0x9612,	// (0x00037a49) popup_fep_char_preview_window

0xf348,	// (0x0003d77f) vkb2_top_candi_pane_ParamLimits

0xf348,	// (0x0003d77f) vkb2_top_candi_pane

0x2eee,	// (0x00031325) cell_vkb2_top_candi_pane_ParamLimits

0x2eee,	// (0x00031325) cell_vkb2_top_candi_pane

0x4f56,	// (0x0003338d) bg_popup_fep_char_preview_window_ParamLimits

0x4f56,	// (0x0003338d) bg_popup_fep_char_preview_window

0x9b76,	// (0x00037fad) popup_fep_char_preview_window_t1_ParamLimits

0x9b76,	// (0x00037fad) popup_fep_char_preview_window_t1

0xcf67,	// (0x0003b39e) bg_popup_fep_char_preview_window_g1

0xcf6f,	// (0x0003b3a6) bg_popup_fep_char_preview_window_g2

0xcf77,	// (0x0003b3ae) bg_popup_fep_char_preview_window_g3

0xcf7f,	// (0x0003b3b6) bg_popup_fep_char_preview_window_g4

0xcf87,	// (0x0003b3be) bg_popup_fep_char_preview_window_g5

0x9bb0,	// (0x00037fe7) bg_popup_fep_char_preview_window_g6

0xcf8f,	// (0x0003b3c6) bg_popup_fep_char_preview_window_g7

0xcf97,	// (0x0003b3ce) bg_popup_fep_char_preview_window_g8

0xcf9f,	// (0x0003b3d6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x0003e225) bg_popup_fep_char_preview_window_g

0xb1f2,	// (0x00039629) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb1f2,	// (0x00039629) cell_vkb2_top_candi_pane_g1

0xb51f,	// (0x00039956) cell_vkb2_top_candi_pane_g2_ParamLimits

0xb51f,	// (0x00039956) cell_vkb2_top_candi_pane_g2

0xb540,	// (0x00039977) cell_vkb2_top_candi_pane_g3_ParamLimits

0xb540,	// (0x00039977) cell_vkb2_top_candi_pane_g3

0x9bb8,	// (0x00037fef) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9bb8,	// (0x00037fef) cell_vkb2_top_candi_pane_g4

0xc2c1,	// (0x0003a6f8) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc2c1,	// (0x0003a6f8) cell_vkb2_top_candi_pane_g5

0xc742,	// (0x0003ab79) cell_vkb2_top_candi_pane_g6_ParamLimits

0xc742,	// (0x0003ab79) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x0003e238) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x0003e238) cell_vkb2_top_candi_pane_g

0x9bd9,	// (0x00038010) cell_vkb2_top_candi_pane_t1

0x8e40,	// (0x00037277) aid_size_touch_slider_mark_ParamLimits

0x8e40,	// (0x00037277) aid_size_touch_slider_mark

0x2c87,	// (0x000310be) grid_graphic2_catg_pane_ParamLimits

0x2c87,	// (0x000310be) grid_graphic2_catg_pane

0x2d1b,	// (0x00031152) popup_grid_graphic2_window_t1_ParamLimits

0x2d1b,	// (0x00031152) popup_grid_graphic2_window_t1

0x2d31,	// (0x00031168) popup_grid_graphic2_window_t2_ParamLimits

0x2d31,	// (0x00031168) popup_grid_graphic2_window_t2

0x0001,

0xfdc1,	// (0x0003e1f8) popup_grid_graphic2_window_t_ParamLimits

0xfdc1,	// (0x0003e1f8) popup_grid_graphic2_window_t

0x3a50,	// (0x00031e87) bg_button_pane_cp05_ParamLimits

0x2e7f,	// (0x000312b6) cell_graphic2_control_pane_g1_ParamLimits

0x2f54,	// (0x0003138b) cell_graphic2_catg_pane_ParamLimits

0x2f54,	// (0x0003138b) cell_graphic2_catg_pane

0x3390,	// (0x000317c7) bg_button_pane_cp12

0x2f66,	// (0x0003139d) cell_graphic2_catg_pane_g1

0xc87e,	// (0x0003acb5) cell_tb_ext_pane_t1_ParamLimits

0x99ac,	// (0x00037de3) vkb2_top_cell_right_narrow_pane_ParamLimits

0x99ac,	// (0x00037de3) vkb2_top_cell_right_narrow_pane

0x99c4,	// (0x00037dfb) vkb2_top_cell_right_wide_pane_ParamLimits

0x99c4,	// (0x00037dfb) vkb2_top_cell_right_wide_pane

0xb503,	// (0x0003993a) bg_vkb2_func_pane_ParamLimits

0xb503,	// (0x0003993a) bg_vkb2_func_pane

0x9a35,	// (0x00037e6c) vkb2_top_cell_left_pane_g1_ParamLimits

0xb503,	// (0x0003993a) bg_vkb2_fuc_pane_cp03_ParamLimits

0xb503,	// (0x0003993a) bg_vkb2_fuc_pane_cp03

0x9a93,	// (0x00037eca) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x49ea,	// (0x00032e21) bg_vkb2_func_pane_g1

0x49e2,	// (0x00032e19) bg_vkb2_func_pane_g2

0x49f2,	// (0x00032e29) bg_vkb2_func_pane_g3

0x49fa,	// (0x00032e31) bg_vkb2_func_pane_g4

0x4a02,	// (0x00032e39) bg_vkb2_func_pane_g5

0x4a0a,	// (0x00032e41) bg_vkb2_func_pane_g6

0x4a1a,	// (0x00032e51) bg_vkb2_func_pane_g7

0x4a12,	// (0x00032e49) bg_vkb2_func_pane_g8

0x49da,	// (0x00032e11) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x0003e245) bg_vkb2_func_pane_g

0xb503,	// (0x0003993a) bg_vkb2_fuc_pane_cp01_ParamLimits

0xb503,	// (0x0003993a) bg_vkb2_fuc_pane_cp01

0x9a35,	// (0x00037e6c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9a35,	// (0x00037e6c) vkb2_top_cell_right_wide_pane_g1

0xb503,	// (0x0003993a) bg_vkb2_fuc_pane_cp02_ParamLimits

0xb503,	// (0x0003993a) bg_vkb2_fuc_pane_cp02

0x9a93,	// (0x00037eca) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9a93,	// (0x00037eca) vkb2_top_cell_right_narrow_pane_g1

0x2504,	// (0x0003093b) aid_touch_area_decrease_ParamLimits

0x2504,	// (0x0003093b) aid_touch_area_decrease

0x253e,	// (0x00030975) aid_touch_area_increase_ParamLimits

0x253e,	// (0x00030975) aid_touch_area_increase

0x2566,	// (0x0003099d) aid_touch_area_mute_ParamLimits

0x2566,	// (0x0003099d) aid_touch_area_mute

0x2596,	// (0x000309cd) aid_touch_area_slider_ParamLimits

0x2596,	// (0x000309cd) aid_touch_area_slider

0x25d6,	// (0x00030a0d) popup_slider_window_g4_ParamLimits

0x25d6,	// (0x00030a0d) popup_slider_window_g4

0x25fe,	// (0x00030a35) popup_slider_window_g5_ParamLimits

0x25fe,	// (0x00030a35) popup_slider_window_g5

0x2632,	// (0x00030a69) popup_slider_window_g6_ParamLimits

0x2632,	// (0x00030a69) popup_slider_window_g6

0xc658,	// (0x0003aa8f) popup_slider_window_t2_ParamLimits

0xc658,	// (0x0003aa8f) popup_slider_window_t2

0x0001,

0xfd0f,	// (0x0003e146) popup_slider_window_t_ParamLimits

0xfd0f,	// (0x0003e146) popup_slider_window_t

0x264e,	// (0x00030a85) slider_pane_ParamLimits

0x264e,	// (0x00030a85) slider_pane

0xcfa7,	// (0x0003b3de) slider_pane_g1_ParamLimits

0xcfa7,	// (0x0003b3de) slider_pane_g1

0xcfbb,	// (0x0003b3f2) slider_pane_g2_ParamLimits

0xcfbb,	// (0x0003b3f2) slider_pane_g2

0xcfd1,	// (0x0003b408) slider_pane_g3_ParamLimits

0xcfd1,	// (0x0003b408) slider_pane_g3

0x0003,

0xfe21,	// (0x0003e258) slider_pane_g_ParamLimits

0xfe21,	// (0x0003e258) slider_pane_g

0x149a,	// (0x0002f8d1) popup_tb_float_extension_window_ParamLimits

0x149a,	// (0x0002f8d1) popup_tb_float_extension_window

0xcffd,	// (0x0003b434) aid_size_cell_tb_float_ext

0x3390,	// (0x000317c7) bg_popup_sub_window_cp28

0xd009,	// (0x0003b440) grid_tb_float_ext_pane

0xd013,	// (0x0003b44a) cell_tb_float_ext_pane_ParamLimits

0xd013,	// (0x0003b44a) cell_tb_float_ext_pane

0xd02d,	// (0x0003b464) cell_tb_float_ext_pane_g1

0xd036,	// (0x0003b46d) grid_highlight_pane_cp12

0xf0e3,	// (0x0003d51a) cell_last_hwr_side_pane_ParamLimits

0xf0e3,	// (0x0003d51a) cell_last_hwr_side_pane

0xaf59,	// (0x00039390) cell_last_hwr_side_pane_g1

0xd03f,	// (0x0003b476) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x0003e261) cell_last_hwr_side_pane_g

0xf4af,	// (0x0003d8e6) vkb2_area_bottom_space_btn_pane_ParamLimits

0xf4af,	// (0x0003d8e6) vkb2_area_bottom_space_btn_pane

0xb1f2,	// (0x00039629) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xce92,	// (0x0003b2c9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9bd9,	// (0x00038010) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9bf8,	// (0x0003802f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9bf8,	// (0x0003802f) vkb2_area_bottom_space_btn_pane_g1

0x9c32,	// (0x00038069) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9c32,	// (0x00038069) vkb2_area_bottom_space_btn_pane_g2

0x9c68,	// (0x0003809f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9c68,	// (0x0003809f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x0003e266) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x0003e266) vkb2_area_bottom_space_btn_pane_g

0x91da,	// (0x00037611) cel_fep_hwr_func_pane_ParamLimits

0x91da,	// (0x00037611) cel_fep_hwr_func_pane

0xf0b8,	// (0x0003d4ef) cell_hwr_side_button_pane_ParamLimits

0xf0b8,	// (0x0003d4ef) cell_hwr_side_button_pane

0xc8b2,	// (0x0003ace9) aid_area_touch_clock_ParamLimits

0x353c,	// (0x00031973) bg_uniindi_top_pane_ParamLimits

0xc8c4,	// (0x0003acfb) uniindi_top_pane_g1_ParamLimits

0xc8da,	// (0x0003ad11) uniindi_top_pane_g2_ParamLimits

0xc8e6,	// (0x0003ad1d) uniindi_top_pane_g3_ParamLimits

0xc8f7,	// (0x0003ad2e) uniindi_top_pane_g4_ParamLimits

0xfd47,	// (0x0003e17e) uniindi_top_pane_g_ParamLimits

0xc904,	// (0x0003ad3b) uniindi_top_pane_t1_ParamLimits

0x353c,	// (0x00031973) bg_vkb2_func_pane_cp01_ParamLimits

0x353c,	// (0x00031973) bg_vkb2_func_pane_cp01

0xd048,	// (0x0003b47f) cel_fep_hwr_func_pane_g1_ParamLimits

0xd048,	// (0x0003b47f) cel_fep_hwr_func_pane_g1

0x353c,	// (0x00031973) bg_vkb2_func_pane_cp02_ParamLimits

0x353c,	// (0x00031973) bg_vkb2_func_pane_cp02

0xd048,	// (0x0003b47f) cell_hwr_side_button_pane_g1_ParamLimits

0xd048,	// (0x0003b47f) cell_hwr_side_button_pane_g1

0x48f2,	// (0x00032d29) status_pane_g4_ParamLimits

0x48f2,	// (0x00032d29) status_pane_g4

0x490a,	// (0x00032d41) status_pane_t1

0x65b0,	// (0x000349e7) form2_midp_gauge_slider_cont_pane

0x65b8,	// (0x000349ef) form2_midp_gauge_slider_pane_t1_ParamLimits

0x1fca,	// (0x00030401) form2_midp_gauge_slider_pane_t2_ParamLimits

0x1fdc,	// (0x00030413) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1a,	// (0x0003df51) form2_midp_gauge_slider_pane_t_ParamLimits

0x65ca,	// (0x00034a01) form2_midp_slider_pane_ParamLimits

0x95d2,	// (0x00037a09) aid_size_cell_func_vkb2_ParamLimits

0x95d2,	// (0x00037a09) aid_size_cell_func_vkb2

0xcfe9,	// (0x0003b420) slider_pane_g4_ParamLimits

0xcfe9,	// (0x0003b420) slider_pane_g4

0xf510,	// (0x0003d947) form2_midp_gauge_slider_pane_t2_cp01

0xf51e,	// (0x0003d955) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf51e,	// (0x0003d955) form2_midp_gauge_slider_pane_t3_cp01

0x9cdd,	// (0x00038114) form2_midp_slider_pane_cp01

0x3390,	// (0x000317c7) navi_smil_pane

0xd078,	// (0x0003b4af) navi_smil_pane_g1

0xd080,	// (0x0003b4b7) navi_smil_pane_t1

0xd056,	// (0x0003b48d) form2_midp_slider_pane_g1

0xd05f,	// (0x0003b496) form2_midp_slider_pane_g2

0xd067,	// (0x0003b49e) form2_midp_slider_pane_g3

0xd056,	// (0x0003b48d) form2_midp_slider_pane_g4

0x2f6f,	// (0x000313a6) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x0003e26f) form2_midp_slider_pane_g

0x9ca2,	// (0x000380d9) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9ca2,	// (0x000380d9) vkb2_area_bottom_space_btn_pane_g4

0x1676,	// (0x0002faad) lc0_navi_pane_ParamLimits

0x1676,	// (0x0002faad) lc0_navi_pane

0x16e0,	// (0x0002fb17) lc0_stat_indi_pane_ParamLimits

0x16e0,	// (0x0002fb17) lc0_stat_indi_pane

0x16f5,	// (0x0002fb2c) ls0_title_pane_ParamLimits

0x16f5,	// (0x0002fb2c) ls0_title_pane

0x3a50,	// (0x00031e87) bg_popup_sub_pane_cp14_ParamLimits

0xc899,	// (0x0003acd0) list_uniindi_pane_ParamLimits

0xc8a5,	// (0x0003acdc) uniindi_top_pane_ParamLimits

0xc940,	// (0x0003ad77) list_single_uniindi_pane_g1_ParamLimits

0xc953,	// (0x0003ad8a) list_single_uniindi_pane_t1_ParamLimits

0xf53b,	// (0x0003d972) lc0_stat_clock_pane_ParamLimits

0xf53b,	// (0x0003d972) lc0_stat_clock_pane

0x2f85,	// (0x000313bc) lc0_stat_indi_pane_g1_ParamLimits

0x2f85,	// (0x000313bc) lc0_stat_indi_pane_g1

0x2f78,	// (0x000313af) lc0_stat_indi_pane_g2_ParamLimits

0x2f78,	// (0x000313af) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x0003e27a) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x0003e27a) lc0_stat_indi_pane_g

0xf548,	// (0x0003d97f) lc0_uni_indicator_pane_ParamLimits

0xf548,	// (0x0003d97f) lc0_uni_indicator_pane

0x2f92,	// (0x000313c9) ls0_title_pane_g1_ParamLimits

0x2f92,	// (0x000313c9) ls0_title_pane_g1

0x2fa6,	// (0x000313dd) ls0_title_pane_t1_ParamLimits

0x2fa6,	// (0x000313dd) ls0_title_pane_t1

0xf555,	// (0x0003d98c) lc0_uni_indicator_pane_g1_ParamLimits

0xf555,	// (0x0003d98c) lc0_uni_indicator_pane_g1

0xd08e,	// (0x0003b4c5) lc0_stat_clock_pane_t1

0x3390,	// (0x000317c7) main_ai5_pane

0xd09c,	// (0x0003b4d3) ai5_sk_pane_ParamLimits

0xd09c,	// (0x0003b4d3) ai5_sk_pane

0x2fd4,	// (0x0003140b) cell_ai5_widget_pane_ParamLimits

0x2fd4,	// (0x0003140b) cell_ai5_widget_pane

0xd0a9,	// (0x0003b4e0) aid_size_cell_widget_grid

0xd0bd,	// (0x0003b4f4) bg_ai5_widget_pane_ParamLimits

0xd0bd,	// (0x0003b4f4) bg_ai5_widget_pane

0x305d,	// (0x00031494) cell_ai5_widget_pane_g2

0x306d,	// (0x000314a4) cell_ai5_widget_pane_g3

0x3081,	// (0x000314b8) cell_ai5_widget_pane_g4

0x308d,	// (0x000314c4) cell_ai5_widget_pane_g5

0x3099,	// (0x000314d0) cell_ai5_widget_pane_g6

0x30a5,	// (0x000314dc) cell_ai5_widget_pane_g7

0x30ed,	// (0x00031524) cell_ai5_widget_pane_t1_ParamLimits

0x30ed,	// (0x00031524) cell_ai5_widget_pane_t1

0x310a,	// (0x00031541) cell_ai5_widget_pane_t2_ParamLimits

0x310a,	// (0x00031541) cell_ai5_widget_pane_t2

0x3122,	// (0x00031559) cell_ai5_widget_pane_t3_ParamLimits

0x3122,	// (0x00031559) cell_ai5_widget_pane_t3

0x313a,	// (0x00031571) cell_ai5_widget_pane_t4_ParamLimits

0x313a,	// (0x00031571) cell_ai5_widget_pane_t4

0x3154,	// (0x0003158b) cell_ai5_widget_pane_t5_ParamLimits

0x3154,	// (0x0003158b) cell_ai5_widget_pane_t5

0xd0c9,	// (0x0003b500) cell_ai5_widget_pane_t6_ParamLimits

0xd0c9,	// (0x0003b500) cell_ai5_widget_pane_t6

0xd0db,	// (0x0003b512) cell_ai5_widget_pane_t7_ParamLimits

0xd0db,	// (0x0003b512) cell_ai5_widget_pane_t7

0x3173,	// (0x000315aa) cell_ai5_widget_pane_t8_ParamLimits

0x3173,	// (0x000315aa) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x0003e294) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x0003e294) cell_ai5_widget_pane_t

0x31bb,	// (0x000315f2) grid_ai5_widget_pane

0x3a50,	// (0x00031e87) highlight_cell_ai5_widget_pane_ParamLimits

0x3a50,	// (0x00031e87) highlight_cell_ai5_widget_pane

0x31d1,	// (0x00031608) ai5_sk_left_pane

0x31db,	// (0x00031612) ai5_sk_middle_pane

0x31e5,	// (0x0003161c) ai5_sk_right_pane

0xd0f4,	// (0x0003b52b) bg_ai5_widget_pane_g1_ParamLimits

0xd0f4,	// (0x0003b52b) bg_ai5_widget_pane_g1

0xd100,	// (0x0003b537) bg_ai5_widget_pane_g2_ParamLimits

0xd100,	// (0x0003b537) bg_ai5_widget_pane_g2

0xd10c,	// (0x0003b543) bg_ai5_widget_pane_g3_ParamLimits

0xd10c,	// (0x0003b543) bg_ai5_widget_pane_g3

0xd118,	// (0x0003b54f) bg_ai5_widget_pane_g4_ParamLimits

0xd118,	// (0x0003b54f) bg_ai5_widget_pane_g4

0xd124,	// (0x0003b55b) bg_ai5_widget_pane_g5_ParamLimits

0xd124,	// (0x0003b55b) bg_ai5_widget_pane_g5

0xd130,	// (0x0003b567) bg_ai5_widget_pane_g6_ParamLimits

0xd130,	// (0x0003b567) bg_ai5_widget_pane_g6

0xd13c,	// (0x0003b573) bg_ai5_widget_pane_g7_ParamLimits

0xd13c,	// (0x0003b573) bg_ai5_widget_pane_g7

0xd148,	// (0x0003b57f) bg_ai5_widget_pane_g8_ParamLimits

0xd148,	// (0x0003b57f) bg_ai5_widget_pane_g8

0xd154,	// (0x0003b58b) bg_ai5_widget_pane_g9_ParamLimits

0xd154,	// (0x0003b58b) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x0003e2a9) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x0003e2a9) bg_ai5_widget_pane_g

0xd187,	// (0x0003b5be) cell_shortcut_ai5_widget_pane_ParamLimits

0xd187,	// (0x0003b5be) cell_shortcut_ai5_widget_pane

0x3445,	// (0x0003187c) bg_cell_shortcut_ai5_widget_pane

0xd198,	// (0x0003b5cf) cell_grid_ai5_widget_pane_g1

0xd1a1,	// (0x0003b5d8) highlight_cell_shortcut_ai5_widget_pane

0x49e2,	// (0x00032e19) ai5_sk_left_pane_g1

0xd1a9,	// (0x0003b5e0) ai5_sk_left_pane_g2

0xd1b1,	// (0x0003b5e8) ai5_sk_left_pane_g3

0xd1b9,	// (0x0003b5f0) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x0003e2bc) ai5_sk_left_pane_g

0xd1c1,	// (0x0003b5f8) ai5_sk_left_pane_t1

0x49ea,	// (0x00032e21) ai5_sk_right_pane_g1

0xd1cf,	// (0x0003b606) ai5_sk_right_pane_g2

0xd1d7,	// (0x0003b60e) ai5_sk_right_pane_g3

0xd1df,	// (0x0003b616) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x0003e2c5) ai5_sk_right_pane_g

0xd1e7,	// (0x0003b61e) ai5_sk_right_pane_t1

0x49ea,	// (0x00032e21) ai5_sk_middle_pane_g1

0x49e2,	// (0x00032e19) ai5_sk_middle_pane_g2

0x4a02,	// (0x00032e39) ai5_sk_middle_pane_g3

0xd1d7,	// (0x0003b60e) ai5_sk_middle_pane_g4

0xd1b1,	// (0x0003b5e8) ai5_sk_middle_pane_g5

0xd1f5,	// (0x0003b62c) ai5_sk_middle_pane_g6

0x31ef,	// (0x00031626) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x0003e2ce) ai5_sk_middle_pane_g

0x1562,	// (0x0002f999) aid_touch_area_size_lc0_ParamLimits

0x1562,	// (0x0002f999) aid_touch_area_size_lc0

0x9365,	// (0x0003779c) cell_hwr_candidate_pane_t1_ParamLimits

0x4814,	// (0x00032c4b) aid_touch_navi_pane

0x17e7,	// (0x0002fc1e) status_dt_navi_pane_ParamLimits

0x17e7,	// (0x0002fc1e) status_dt_navi_pane

0x17ff,	// (0x0002fc36) status_dt_sta_pane_ParamLimits

0x17ff,	// (0x0002fc36) status_dt_sta_pane

0x31f7,	// (0x0003162e) dt_sta_controll_pane

0x3204,	// (0x0003163b) dt_sta_indi_pane

0x3211,	// (0x00031648) dt_sta_title_pane

0x353c,	// (0x00031973) bg_dt_sta_indi_pane_ParamLimits

0x353c,	// (0x00031973) bg_dt_sta_indi_pane

0x3223,	// (0x0003165a) dt_sta_battery_pane

0x322b,	// (0x00031662) dt_sta_indi_pane_g1

0xd1fd,	// (0x0003b634) dt_sta_indi_pane_g2

0xd206,	// (0x0003b63d) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x0003e2dd) dt_sta_indi_pane_g

0xd20f,	// (0x0003b646) dt_sta_signal_pane

0x3a50,	// (0x00031e87) bg_dt_sta_title_pane_ParamLimits

0x3a50,	// (0x00031e87) bg_dt_sta_title_pane

0x565c,	// (0x00033a93) dt_sta_title_pane_g1

0x3234,	// (0x0003166b) dt_sta_title_pane_t1_ParamLimits

0x3234,	// (0x0003166b) dt_sta_title_pane_t1

0x3390,	// (0x000317c7) bg_dt_sta_control_pane

0x3249,	// (0x00031680) dt_sta_controll_pane_g1

0xd218,	// (0x0003b64f) bg_dt_sta_title_pane_g1

0xd221,	// (0x0003b658) bg_dt_sta_title_pane_g2

0xd22a,	// (0x0003b661) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x0003e2e4) bg_dt_sta_title_pane_g

0xaf59,	// (0x00039390) bg_dt_sta_indi_pane_g1

0xd233,	// (0x0003b66a) dt_sta_signal_pane_g1

0xd23b,	// (0x0003b672) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x0003e2eb) dt_sta_signal_pane_g

0xd243,	// (0x0003b67a) dt_sta_battery_pane_g1

0xd24c,	// (0x0003b683) dt_sta_battery_pane_t1

0xaf59,	// (0x00039390) bg_dt_sta_control_pane_g1

0x4001,	// (0x00032438) fep_china_uni_eep_pane

0x4009,	// (0x00032440) fep_china_uni_entry_pane_ParamLimits

0x4019,	// (0x00032450) popup_fep_china_uni_window_g1_ParamLimits

0x4029,	// (0x00032460) popup_fep_china_uni_window_g2_ParamLimits

0x4029,	// (0x00032460) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0003db99) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0003db99) popup_fep_china_uni_window_g

0xd25b,	// (0x0003b692) fep_china_uni_eep_pane_g1

0xd263,	// (0x0003b69a) fep_china_uni_eep_pane_t1

0xd06f,	// (0x0003b4a6) aid_touch_area_size_smil_player

0x48c5,	// (0x00032cfc) lc0_clock_pane

0x48fe,	// (0x00032d35) status_pane_g5_ParamLimits

0x48fe,	// (0x00032d35) status_pane_g5

0x102e,	// (0x0002f465) popup_keymap_window

0x48de,	// (0x00032d15) status_icon_pane

0x306d,	// (0x000314a4) cell_ai5_widget_pane_g3_ParamLimits

0x3081,	// (0x000314b8) cell_ai5_widget_pane_g4_ParamLimits

0x308d,	// (0x000314c4) cell_ai5_widget_pane_g5_ParamLimits

0x30b1,	// (0x000314e8) cell_ai5_widget_pane_g8_ParamLimits

0x30b1,	// (0x000314e8) cell_ai5_widget_pane_g8

0x30c5,	// (0x000314fc) cell_ai5_widget_pane_g9_ParamLimits

0x30c5,	// (0x000314fc) cell_ai5_widget_pane_g9

0x30d9,	// (0x00031510) cell_ai5_widget_pane_g10_ParamLimits

0x30d9,	// (0x00031510) cell_ai5_widget_pane_g10

0xd272,	// (0x0003b6a9) status_icon_pane_g1

0x3390,	// (0x000317c7) bg_popup_sub_pane_cp13

0xd27a,	// (0x0003b6b1) popup_keymap_window_t1

0x0e7b,	// (0x0002f2b2) control_pane_g6_ParamLimits

0x0e7b,	// (0x0002f2b2) control_pane_g6

0x0e6e,	// (0x0002f2a5) control_pane_g7_ParamLimits

0x0e6e,	// (0x0002f2a5) control_pane_g7

0x0e61,	// (0x0002f298) control_pane_g8_ParamLimits

0x0e61,	// (0x0002f298) control_pane_g8

0x31f7,	// (0x0003162e) dt_sta_controll_pane_ParamLimits

0x3204,	// (0x0003163b) dt_sta_indi_pane_ParamLimits

0x3211,	// (0x00031648) dt_sta_title_pane_ParamLimits

0x3992,	// (0x00031dc9) aid_size_touch_scroll_bar_cale

0x7e26,	// (0x0003625d) popup_discreet_window_ParamLimits

0x7e26,	// (0x0003625d) popup_discreet_window

0xec78,	// (0x0003d0af) popup_sk_window

0x4f56,	// (0x0003338d) bg_popup_sub_pane_cp28_ParamLimits

0x4f56,	// (0x0003338d) bg_popup_sub_pane_cp28

0xd288,	// (0x0003b6bf) popup_discreet_window_g1_ParamLimits

0xd288,	// (0x0003b6bf) popup_discreet_window_g1

0xd2a8,	// (0x0003b6df) popup_discreet_window_t1_ParamLimits

0xd2a8,	// (0x0003b6df) popup_discreet_window_t1

0xd2c6,	// (0x0003b6fd) popup_discreet_window_t2_ParamLimits

0xd2c6,	// (0x0003b6fd) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x0003e2f0) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x0003e2f0) popup_discreet_window_t

0x9d16,	// (0x0003814d) popup_sk_window_g1

0x9d20,	// (0x00038157) popup_sk_window_g2

0x0001,

0xfec0,	// (0x0003e2f7) popup_sk_window_g

0xd318,	// (0x0003b74f) popup_sk_window_t1

0xd326,	// (0x0003b75d) popup_sk_window_t1_copy1

0x305d,	// (0x00031494) cell_ai5_widget_pane_g2_ParamLimits

0x3185,	// (0x000315bc) cell_ai5_widget_pane_t9_ParamLimits

0x3185,	// (0x000315bc) cell_ai5_widget_pane_t9

0x3390,	// (0x000317c7) main_fep_fshwr2_pane

0x3252,	// (0x00031689) aid_fshwr2_btn_pane

0x325a,	// (0x00031691) aid_fshwr2_syb_pane

0x3262,	// (0x00031699) aid_fshwr2_txt_pane

0x326a,	// (0x000316a1) fshwr2_func_candi_pane

0x3274,	// (0x000316ab) fshwr2_hwr_syb_pane

0x3282,	// (0x000316b9) fshwr2_icf_pane

0x3390,	// (0x000317c7) fshwr2_icf_bg_pane

0x328c,	// (0x000316c3) fshwr2_icf_pane_t1_ParamLimits

0x328c,	// (0x000316c3) fshwr2_icf_pane_t1

0xaf59,	// (0x00039390) fshwr2_func_candi_pane_g1

0xd348,	// (0x0003b77f) fshwr2_func_candi_row_pane_ParamLimits

0xd348,	// (0x0003b77f) fshwr2_func_candi_row_pane

0x32a6,	// (0x000316dd) cell_fshwr2_syb_pane_ParamLimits

0x32a6,	// (0x000316dd) cell_fshwr2_syb_pane

0xb1f2,	// (0x00039629) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb1f2,	// (0x00039629) fshwr2_hwr_syb_pane_g1

0x3390,	// (0x000317c7) bg_popup_call_pane_cp01

0xd359,	// (0x0003b790) fshwr2_func_candi_cell_pane_ParamLimits

0xd359,	// (0x0003b790) fshwr2_func_candi_cell_pane

0xd38a,	// (0x0003b7c1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xd38a,	// (0x0003b7c1) fshwr2_func_candi_cell_bg_pane

0xd3a4,	// (0x0003b7db) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd3a4,	// (0x0003b7db) fshwr2_func_candi_cell_pane_g1

0xd3c4,	// (0x0003b7fb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd3c4,	// (0x0003b7fb) fshwr2_func_candi_cell_pane_t1

0x3390,	// (0x000317c7) bg_button_pane_cp08

0x4492,	// (0x000328c9) cell_fshwr2_syb_bg_pane

0x32c0,	// (0x000316f7) cell_fshwr2_syb_bg_pane_g1

0xd3d7,	// (0x0003b80e) cell_fshwr2_syb_bg_pane_t1

0x3a50,	// (0x00031e87) main_tmo_pane

0x1b3f,	// (0x0002ff76) uni_indicator_pane_g1_ParamLimits

0x1b54,	// (0x0002ff8b) uni_indicator_pane_g2_ParamLimits

0x1b69,	// (0x0002ffa0) uni_indicator_pane_g3_ParamLimits

0x5920,	// (0x00033d57) uni_indicator_pane_g4_ParamLimits

0x5920,	// (0x00033d57) uni_indicator_pane_g4

0x5934,	// (0x00033d6b) uni_indicator_pane_g5_ParamLimits

0x5934,	// (0x00033d6b) uni_indicator_pane_g5

0x5966,	// (0x00033d9d) uni_indicator_pane_g6_ParamLimits

0x5966,	// (0x00033d9d) uni_indicator_pane_g6

0xf95a,	// (0x0003dd91) uni_indicator_pane_g_ParamLimits

0x24e6,	// (0x0003091d) popup_tmo_note_window_ParamLimits

0x24e6,	// (0x0003091d) popup_tmo_note_window

0x3390,	// (0x000317c7) fshwr2_bg_pane

0xd3b5,	// (0x0003b7ec) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd3b5,	// (0x0003b7ec) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x0003e2fc) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x0003e2fc) fshwr2_func_candi_cell_pane_g

0xaf59,	// (0x00039390) bg_popup_window_pane_cp01

0xd3e6,	// (0x0003b81d) bg_popup_window_pane_g1_cp01

0xd3ef,	// (0x0003b826) bg_popup_window_pane_cp22_ParamLimits

0xd3ef,	// (0x0003b826) bg_popup_window_pane_cp22

0xd3fd,	// (0x0003b834) listscroll_tmo_link_pane_ParamLimits

0xd3fd,	// (0x0003b834) listscroll_tmo_link_pane

0xd43d,	// (0x0003b874) popup_tmo_note_window_g1_ParamLimits

0xd43d,	// (0x0003b874) popup_tmo_note_window_g1

0xd44a,	// (0x0003b881) tmo_note_info_pane_ParamLimits

0xd44a,	// (0x0003b881) tmo_note_info_pane

0x32c8,	// (0x000316ff) list_tmo_note_info_pane_g1_ParamLimits

0x32c8,	// (0x000316ff) list_tmo_note_info_pane_g1

0xd464,	// (0x0003b89b) list_tmo_note_info_pane_g2_ParamLimits

0xd464,	// (0x0003b89b) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x0003e301) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x0003e301) list_tmo_note_info_pane_g

0xd480,	// (0x0003b8b7) list_tmo_note_info_text_pane_ParamLimits

0xd480,	// (0x0003b8b7) list_tmo_note_info_text_pane

0xd4c2,	// (0x0003b8f9) list_tmo_link_pane

0xd4cf,	// (0x0003b906) scroll_pane_cp20

0xd4dc,	// (0x0003b913) list_single_tmo_link_pane_ParamLimits

0xd4dc,	// (0x0003b913) list_single_tmo_link_pane

0xd4ec,	// (0x0003b923) list_single_tmo_link_pane_t1

0xd4fa,	// (0x0003b931) list_tmo_note_info_text_pane_t1_ParamLimits

0xd4fa,	// (0x0003b931) list_tmo_note_info_text_pane_t1

0x0b8a,	// (0x0002efc1) aid_size_touch_scroll_bar_cp01_ParamLimits

0x0b8a,	// (0x0002efc1) aid_size_touch_scroll_bar_cp01

0xe88b,	// (0x0003ccc2) aid_size_touch_slider_marker

0xec68,	// (0x0003d09f) popup_settings_window_ParamLimits

0xec68,	// (0x0003d09f) popup_settings_window

0x74d6,	// (0x0003590d) popup_candi_list_indi_window

0x4814,	// (0x00032c4b) aid_touch_navi_pane_ParamLimits

0x9527,	// (0x0003795e) rs_clock_indi_pane

0x9530,	// (0x00037967) sctrl_sk_bottom_pane_ParamLimits

0x9541,	// (0x00037978) sctrl_sk_top_pane_ParamLimits

0x962c,	// (0x00037a63) popup_fep_tooltip_window

0xd0a9,	// (0x0003b4e0) aid_size_cell_widget_grid_ParamLimits

0x3051,	// (0x00031488) cell_ai5_widget_pane_g1_ParamLimits

0x3051,	// (0x00031488) cell_ai5_widget_pane_g1

0x3099,	// (0x000314d0) cell_ai5_widget_pane_g6_ParamLimits

0x30a5,	// (0x000314dc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x0003e27f) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0003e27f) cell_ai5_widget_pane_g

0x31a9,	// (0x000315e0) cell_ai5_widget_pane_t10_ParamLimits

0x31a9,	// (0x000315e0) cell_ai5_widget_pane_t10

0x31bb,	// (0x000315f2) grid_ai5_widget_pane_ParamLimits

0xd160,	// (0x0003b597) cell_contacts_ai5_widget_pane_ParamLimits

0xd160,	// (0x0003b597) cell_contacts_ai5_widget_pane

0xd2db,	// (0x0003b712) popup_discreet_window_t3_ParamLimits

0xd2db,	// (0x0003b712) popup_discreet_window_t3

0xd334,	// (0x0003b76b) popup_fshwr2_char_preview_window_ParamLimits

0xd334,	// (0x0003b76b) popup_fshwr2_char_preview_window

0x32df,	// (0x00031716) tmo_note_info_pane_t1

0x32f4,	// (0x0003172b) tmo_note_info_pane_t2

0x330d,	// (0x00031744) tmo_note_info_pane_t3

0xd49e,	// (0x0003b8d5) tmo_note_info_pane_t4

0xd4b0,	// (0x0003b8e7) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x0003e306) tmo_note_info_pane_t

0xd4c2,	// (0x0003b8f9) list_tmo_link_pane_ParamLimits

0xd4cf,	// (0x0003b906) scroll_pane_cp20_ParamLimits

0x3390,	// (0x000317c7) bg_popup_fep_char_preview_window_cp01

0xd513,	// (0x0003b94a) popup_fshwr2_char_preview_window_t1

0xd521,	// (0x0003b958) popup_candi_list_indi_window_g1

0xd52a,	// (0x0003b961) bg_cell_contacts_ai5_widget_pane

0xd536,	// (0x0003b96d) cell_contacts_ai5_widget_pane_g1

0xd54a,	// (0x0003b981) cell_contacts_ai5_widget_pane_g2

0xd559,	// (0x0003b990) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x0003e311) cell_contacts_ai5_widget_pane_g

0xd56c,	// (0x0003b9a3) cell_contacts_ai5_widget_pane_t1

0x3a50,	// (0x00031e87) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd5e6,	// (0x0003ba1d) settings_container_pane

0x4492,	// (0x000328c9) listscroll_set_pane_copy1

0x6143,	// (0x0003457a) scroll_pane_cp121_copy1

0xd5f2,	// (0x0003ba29) set_content_pane_copy1

0xd5fa,	// (0x0003ba31) aid_height_set_list_copy1_ParamLimits

0xd5fa,	// (0x0003ba31) aid_height_set_list_copy1

0x5948,	// (0x00033d7f) aid_size_parent_copy1_ParamLimits

0x5948,	// (0x00033d7f) aid_size_parent_copy1

0xd606,	// (0x0003ba3d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd606,	// (0x0003ba3d) button_value_adjust_pane_cp6_copy1

0x3ba7,	// (0x00031fde) list_highlight_pane_cp2_copy1_ParamLimits

0x3ba7,	// (0x00031fde) list_highlight_pane_cp2_copy1

0xd61a,	// (0x0003ba51) list_set_pane_copy1_ParamLimits

0xd61a,	// (0x0003ba51) list_set_pane_copy1

0xd581,	// (0x0003b9b8) main_pane_set_t1_copy1_ParamLimits

0xd581,	// (0x0003b9b8) main_pane_set_t1_copy1

0xd5bb,	// (0x0003b9f2) main_pane_set_t2_copy1_ParamLimits

0xd5bb,	// (0x0003b9f2) main_pane_set_t2_copy1

0xd6c7,	// (0x0003bafe) main_pane_set_t3_copy1

0xd6d5,	// (0x0003bb0c) main_pane_set_t4_copy1

0xd5da,	// (0x0003ba11) set_content_pane_g1_copy1_ParamLimits

0xd5da,	// (0x0003ba11) set_content_pane_g1_copy1

0xd6e3,	// (0x0003bb1a) setting_code_pane_copy1

0xd6ed,	// (0x0003bb24) setting_slider_graphic_pane_copy1

0xd6ed,	// (0x0003bb24) setting_slider_pane_copy1

0xd6f7,	// (0x0003bb2e) setting_text_pane_copy1

0xd701,	// (0x0003bb38) setting_volume_pane_copy1

0xd70a,	// (0x0003bb41) settings_code_pane_cp2_copy1

0xd712,	// (0x0003bb49) settings_code_pane_cp_copy1_ParamLimits

0xd712,	// (0x0003bb49) settings_code_pane_cp_copy1

0xd726,	// (0x0003bb5d) volume_set_pane_copy1

0xd72e,	// (0x0003bb65) volume_set_pane_g10_copy1

0xd736,	// (0x0003bb6d) volume_set_pane_g1_copy1

0xd73e,	// (0x0003bb75) volume_set_pane_g2_copy1

0xd746,	// (0x0003bb7d) volume_set_pane_g3_copy1

0xd74e,	// (0x0003bb85) volume_set_pane_g4_copy1

0xd756,	// (0x0003bb8d) volume_set_pane_g5_copy1

0xd75e,	// (0x0003bb95) volume_set_pane_g6_copy1

0xd766,	// (0x0003bb9d) volume_set_pane_g7_copy1

0xd76e,	// (0x0003bba5) volume_set_pane_g8_copy1

0xd776,	// (0x0003bbad) volume_set_pane_g9_copy1

0x3400,	// (0x00031837) bg_set_opt_pane_cp_copy1_ParamLimits

0x3400,	// (0x00031837) bg_set_opt_pane_cp_copy1

0xd77e,	// (0x0003bbb5) setting_slider_pane_t1_copy1_ParamLimits

0xd77e,	// (0x0003bbb5) setting_slider_pane_t1_copy1

0xd79c,	// (0x0003bbd3) setting_slider_pane_t2_copy1_ParamLimits

0xd79c,	// (0x0003bbd3) setting_slider_pane_t2_copy1

0xd7b6,	// (0x0003bbed) setting_slider_pane_t3_copy1_ParamLimits

0xd7b6,	// (0x0003bbed) setting_slider_pane_t3_copy1

0xd7ce,	// (0x0003bc05) slider_set_pane_copy1_ParamLimits

0xd7ce,	// (0x0003bc05) slider_set_pane_copy1

0x3ab7,	// (0x00031eee) set_opt_bg_pane_g1_copy2

0x3abf,	// (0x00031ef6) set_opt_bg_pane_g2_copy2

0xd7e4,	// (0x0003bc1b) set_opt_bg_pane_g3_copy2

0x3acf,	// (0x00031f06) set_opt_bg_pane_g4_copy2

0x3ad7,	// (0x00031f0e) set_opt_bg_pane_g5_copy2

0x3adf,	// (0x00031f16) set_opt_bg_pane_g6_copy2

0xd7ee,	// (0x0003bc25) set_opt_bg_pane_g7_copy2

0xd7f6,	// (0x0003bc2d) set_opt_bg_pane_g8_copy2

0xd800,	// (0x0003bc37) set_opt_bg_pane_g9_copy2

0x9d2a,	// (0x00038161) aid_size_touch_slider_mark_copy1_ParamLimits

0x9d2a,	// (0x00038161) aid_size_touch_slider_mark_copy1

0xd80a,	// (0x0003bc41) slider_set_pane_g1_copy1

0x9d3e,	// (0x00038175) slider_set_pane_g2_copy1

0x8e60,	// (0x00037297) slider_set_pane_g3_copy1_ParamLimits

0x8e60,	// (0x00037297) slider_set_pane_g3_copy1

0x8e74,	// (0x000372ab) slider_set_pane_g4_copy1_ParamLimits

0x8e74,	// (0x000372ab) slider_set_pane_g4_copy1

0x8e8c,	// (0x000372c3) slider_set_pane_g5_copy1_ParamLimits

0x8e8c,	// (0x000372c3) slider_set_pane_g5_copy1

0x8e60,	// (0x00037297) slider_set_pane_g6_copy1_ParamLimits

0x8e60,	// (0x00037297) slider_set_pane_g6_copy1

0x9d46,	// (0x0003817d) slider_set_pane_g7_copy1_ParamLimits

0x9d46,	// (0x0003817d) slider_set_pane_g7_copy1

0x33a4,	// (0x000317db) bg_set_opt_pane_cp2_copy1

0xd813,	// (0x0003bc4a) setting_slider_graphic_pane_g1_copy1

0xd81c,	// (0x0003bc53) setting_slider_graphic_pane_t1_copy1

0xd82c,	// (0x0003bc63) setting_slider_graphic_pane_t2_copy1

0xd83c,	// (0x0003bc73) slider_set_pane_cp_copy1

0xd84c,	// (0x0003bc83) input_focus_pane_cp1_copy1

0xd855,	// (0x0003bc8c) list_set_text_pane_copy1

0xd85d,	// (0x0003bc94) setting_text_pane_g1_copy1

0x7b7f,	// (0x00035fb6) set_text_pane_t1_copy1

0xd84c,	// (0x0003bc83) input_focus_pane_cp2_copy1

0xd85d,	// (0x0003bc94) setting_code_pane_g1_copy1

0xd866,	// (0x0003bc9d) setting_code_pane_t1_copy1

0xd874,	// (0x0003bcab) list_set_graphic_pane_copy1

0x33a4,	// (0x000317db) bg_set_opt_pane_cp4_copy1

0x4194,	// (0x000325cb) list_set_graphic_pane_g1_copy1_ParamLimits

0x4194,	// (0x000325cb) list_set_graphic_pane_g1_copy1

0xd888,	// (0x0003bcbf) list_set_graphic_pane_g2_copy1

0x41ac,	// (0x000325e3) list_set_graphic_pane_t1_copy1_ParamLimits

0x41ac,	// (0x000325e3) list_set_graphic_pane_t1_copy1

0xaf59,	// (0x00039390) rs_clock_indi_pane_g1

0xd890,	// (0x0003bcc7) rs_clock_indi_pane_t1

0xd89e,	// (0x0003bcd5) rs_indi_pane

0xd8a6,	// (0x0003bcdd) rs_indi_pane_g1

0xd8af,	// (0x0003bce6) rs_indi_pane_g2

0xd8b8,	// (0x0003bcef) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x0003e318) rs_indi_pane_g

0x4492,	// (0x000328c9) bg_popup_preview_window_pane_cp03

0xd8c1,	// (0x0003bcf8) popup_fep_tooltip_window_t1

0xbc00,	// (0x0003a037) popup_note2_window_g2_ParamLimits

0xbc00,	// (0x0003a037) popup_note2_window_g2

0x0001,

0xfc86,	// (0x0003e0bd) popup_note2_window_g_ParamLimits

0xfc86,	// (0x0003e0bd) popup_note2_window_g

0xc0ee,	// (0x0003a525) bg_popup_sub_pane_cp11_ParamLimits

0xc0fb,	// (0x0003a532) cell_ai3_links_pane_g1_ParamLimits

0xc112,	// (0x0003a549) cell_ai3_links_pane_t1

0x7b7f,	// (0x00035fb6) set_text_pane_t1_copy1_ParamLimits

0x43a1,	// (0x000327d8) cell_graphic_popup_pane_cp2_ParamLimits

0x43a1,	// (0x000327d8) cell_graphic_popup_pane_cp2

0xd8cf,	// (0x0003bd06) cell_graphic_popup_pane_g1_cp2

0x37a5,	// (0x00031bdc) cell_graphic_popup_pane_g2_cp2

0xd8d7,	// (0x0003bd0e) cell_graphic_popup_pane_g3_cp2

0xd8df,	// (0x0003bd16) cell_graphic_popup_pane_t2_cp2

0x37b6,	// (0x00031bed) grid_highlight_pane_cp3_cp2

0x3d51,	// (0x00032188) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3a50,	// (0x00031e87) main_tmo_pane_ParamLimits

0x24da,	// (0x00030911) popup_tmo_big_image_note_window

0x3041,	// (0x00031478) cell_ai5_widget_list_pane

0x3049,	// (0x00031480) cell_ai5_widget_lrg_icon_pane

0x32df,	// (0x00031716) tmo_note_info_pane_t1_ParamLimits

0x32f4,	// (0x0003172b) tmo_note_info_pane_t2_ParamLimits

0x330d,	// (0x00031744) tmo_note_info_pane_t3_ParamLimits

0xd49e,	// (0x0003b8d5) tmo_note_info_pane_t4_ParamLimits

0xd4b0,	// (0x0003b8e7) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x0003e306) tmo_note_info_pane_t_ParamLimits

0xd5e6,	// (0x0003ba1d) settings_container_pane_ParamLimits

0xd844,	// (0x0003bc7b) indicator_popup_pane_cp5

0xd844,	// (0x0003bc7b) indicator_popup_pane_cp6

0xd874,	// (0x0003bcab) list_set_graphic_pane_copy1_ParamLimits

0x3390,	// (0x000317c7) bg_popup_window_pane_cp23

0xd8ed,	// (0x0003bd24) popup_tmo_big_image_note_window_g1

0xd8f8,	// (0x0003bd2f) popup_tmo_big_image_note_window_t1

0xd908,	// (0x0003bd3f) popup_tmo_big_image_note_window_t2

0xd918,	// (0x0003bd4f) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x0003e31f) popup_tmo_big_image_note_window_t

0x3322,	// (0x00031759) cell_ai5_widget_lrg_icon_pane_g1

0x332a,	// (0x00031761) cell_ai5_widget_lrg_icon_pane_t1

0x3338,	// (0x0003176f) cell_ai5_widget_list_row_pane_ParamLimits

0x3338,	// (0x0003176f) cell_ai5_widget_list_row_pane

0x3351,	// (0x00031788) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3351,	// (0x00031788) cell_ai5_widget_list_row_pane_g1

0x335e,	// (0x00031795) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x335e,	// (0x00031795) cell_ai5_widget_list_row_pane_t1

0x3376,	// (0x000317ad) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3376,	// (0x000317ad) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeef,	// (0x0003e326) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x0003e326) cell_ai5_widget_list_row_pane_t

0x3390,	// (0x000317c7) main_fep_vtchi_ss_pane

0xd928,	// (0x0003bd5f) popup_fep_char_pre_window

0xd930,	// (0x0003bd67) popup_fep_ituss_window

0xd93b,	// (0x0003bd72) popup_fep_vkbss_window

0xd944,	// (0x0003bd7b) grid_vkbss_keypad_pane_ParamLimits

0xd944,	// (0x0003bd7b) grid_vkbss_keypad_pane

0xd954,	// (0x0003bd8b) ituss_keypad_pane

0xd95c,	// (0x0003bd93) aid_vkbss_key_offset_ParamLimits

0xd95c,	// (0x0003bd93) aid_vkbss_key_offset

0xd96b,	// (0x0003bda2) cell_vkbss_key_pane_ParamLimits

0xd96b,	// (0x0003bda2) cell_vkbss_key_pane

0xd981,	// (0x0003bdb8) bg_cell_vkbss_key_g1_ParamLimits

0xd981,	// (0x0003bdb8) bg_cell_vkbss_key_g1

0xd98d,	// (0x0003bdc4) cell_vkbss_key_3p_pane_ParamLimits

0xd98d,	// (0x0003bdc4) cell_vkbss_key_3p_pane

0xd9a7,	// (0x0003bdde) cell_vkbss_key_g1_ParamLimits

0xd9a7,	// (0x0003bdde) cell_vkbss_key_g1

0xd9c1,	// (0x0003bdf8) cell_vkbss_key_t1_ParamLimits

0xd9c1,	// (0x0003bdf8) cell_vkbss_key_t1

0xd9ec,	// (0x0003be23) cell_ituss_key_pane_ParamLimits

0xd9ec,	// (0x0003be23) cell_ituss_key_pane

0xd9fb,	// (0x0003be32) bg_cell_ituss_key_g1_ParamLimits

0xd9fb,	// (0x0003be32) bg_cell_ituss_key_g1

0xda07,	// (0x0003be3e) cell_ituss_key_pane_g1_ParamLimits

0xda07,	// (0x0003be3e) cell_ituss_key_pane_g1

0xda13,	// (0x0003be4a) cell_ituss_key_pane_g2_ParamLimits

0xda13,	// (0x0003be4a) cell_ituss_key_pane_g2

0x0001,

0xfef4,	// (0x0003e32b) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x0003e32b) cell_ituss_key_pane_g

0xda26,	// (0x0003be5d) cell_ituss_key_t1_ParamLimits

0xda26,	// (0x0003be5d) cell_ituss_key_t1

0xda44,	// (0x0003be7b) cell_ituss_key_t2_ParamLimits

0xda44,	// (0x0003be7b) cell_ituss_key_t2

0xda63,	// (0x0003be9a) cell_ituss_key_t3_ParamLimits

0xda63,	// (0x0003be9a) cell_ituss_key_t3

0xda82,	// (0x0003beb9) cell_ituss_key_t4_ParamLimits

0xda82,	// (0x0003beb9) cell_ituss_key_t4

0x0003,

0xfef9,	// (0x0003e330) cell_ituss_key_t_ParamLimits

0xfef9,	// (0x0003e330) cell_ituss_key_t

0xdaa1,	// (0x0003bed8) cell_vkbss_key_3p_pane_g1

0xdaa9,	// (0x0003bee0) cell_vkbss_key_3p_pane_g2

0xdab1,	// (0x0003bee8) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x0003e339) cell_vkbss_key_3p_pane_g

0x3390,	// (0x000317c7) bg_popup_fep_char_preview_window_cp02

0xdab9,	// (0x0003bef0) popup_fep_char_pre_window_t1

0x3037,	// (0x0003146e) main_ai5_sk_pane

0xd52a,	// (0x0003b961) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xd536,	// (0x0003b96d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xd54a,	// (0x0003b981) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xd559,	// (0x0003b990) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x0003e311) cell_contacts_ai5_widget_pane_g_ParamLimits

0xd56c,	// (0x0003b9a3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3a50,	// (0x00031e87) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x340e,	// (0x00031845) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
