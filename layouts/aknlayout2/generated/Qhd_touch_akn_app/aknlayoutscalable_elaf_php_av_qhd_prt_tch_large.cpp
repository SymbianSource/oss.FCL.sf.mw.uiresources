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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002e848 };

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
0xa0a2,	// (0x000388ea) Screen

0xa0ae,	// (0x000388f6) application_window_ParamLimits

0xa0ae,	// (0x000388f6) application_window

0x20c4,	// (0x0003090c) screen_g1

0xa10a,	// (0x00038952) area_bottom_pane_ParamLimits

0xa10a,	// (0x00038952) area_bottom_pane

0xa1ca,	// (0x00038a12) area_top_pane_ParamLimits

0xa1ca,	// (0x00038a12) area_top_pane

0xa25e,	// (0x00038aa6) main_pane_ParamLimits

0xa25e,	// (0x00038aa6) main_pane

0x20ce,	// (0x00030916) misc_graphics

0xcdeb,	// (0x0003b633) battery_pane_ParamLimits

0xcdeb,	// (0x0003b633) battery_pane

0x613e,	// (0x00034986) bg_status_flat_pane_g8

0x6146,	// (0x0003498e) bg_status_flat_pane_g9

0x583c,	// (0x00034084) context_pane_ParamLimits

0x583c,	// (0x00034084) context_pane

0xcf1f,	// (0x0003b767) navi_pane_ParamLimits

0xcf1f,	// (0x0003b767) navi_pane

0xcf8c,	// (0x0003b7d4) signal_pane_ParamLimits

0xcf8c,	// (0x0003b7d4) signal_pane

0x0008,

0xf88f,	// (0x0003e0d7) bg_status_flat_pane_g

0xcff1,	// (0x0003b839) status_pane_g1_ParamLimits

0xcff1,	// (0x0003b839) status_pane_g1

0xcffd,	// (0x0003b845) status_pane_g2_ParamLimits

0xcffd,	// (0x0003b845) status_pane_g2

0x58a1,	// (0x000340e9) status_pane_g3_ParamLimits

0x58a1,	// (0x000340e9) status_pane_g3

0x0004,

0xf7bd,	// (0x0003e005) status_pane_g_ParamLimits

0xf7bd,	// (0x0003e005) status_pane_g

0xd009,	// (0x0003b851) title_pane_ParamLimits

0xd009,	// (0x0003b851) title_pane

0xd046,	// (0x0003b88e) uni_indicator_pane_ParamLimits

0xd046,	// (0x0003b88e) uni_indicator_pane

0x5667,	// (0x00033eaf) bg_list_pane_ParamLimits

0x5667,	// (0x00033eaf) bg_list_pane

0xb171,	// (0x000399b9) find_pane

0xc901,	// (0x0003b149) listscroll_app_pane_ParamLimits

0xc901,	// (0x0003b149) listscroll_app_pane

0x5687,	// (0x00033ecf) listscroll_form_pane

0xb179,	// (0x000399c1) listscroll_gen_pane_ParamLimits

0xb179,	// (0x000399c1) listscroll_gen_pane

0x5687,	// (0x00033ecf) listscroll_set_pane

0xa929,	// (0x00039171) main_idle_act_pane

0x5433,	// (0x00033c7b) main_idle_trad_pane

0x5433,	// (0x00033c7b) main_list_empty_pane

0x4a42,	// (0x0003328a) main_midp_pane

0x56a1,	// (0x00033ee9) main_pane_g1_ParamLimits

0x56a1,	// (0x00033ee9) main_pane_g1

0xc90d,	// (0x0003b155) popup_ai_message_window_ParamLimits

0xc90d,	// (0x0003b155) popup_ai_message_window

0xc98b,	// (0x0003b1d3) popup_fep_china_uni_window_ParamLimits

0xc98b,	// (0x0003b1d3) popup_fep_china_uni_window

0x56d7,	// (0x00033f1f) popup_fep_japan_candidate_window_ParamLimits

0x56d7,	// (0x00033f1f) popup_fep_japan_candidate_window

0x56f7,	// (0x00033f3f) popup_fep_japan_predictive_window_ParamLimits

0x56f7,	// (0x00033f3f) popup_fep_japan_predictive_window

0xc9e7,	// (0x0003b22f) popup_find_window

0xc9f4,	// (0x0003b23c) popup_grid_graphic_window_ParamLimits

0xc9f4,	// (0x0003b23c) popup_grid_graphic_window

0x5727,	// (0x00033f6f) popup_large_graphic_colour_window

0xca1c,	// (0x0003b264) popup_menu_window_ParamLimits

0xca1c,	// (0x0003b264) popup_menu_window

0xcbd4,	// (0x0003b41c) popup_note_image_window

0xcbc0,	// (0x0003b408) popup_note_wait_window_ParamLimits

0xcbc0,	// (0x0003b408) popup_note_wait_window

0xcbc0,	// (0x0003b408) popup_note_window_ParamLimits

0xcbc0,	// (0x0003b408) popup_note_window

0xcc2a,	// (0x0003b472) popup_query_code_window_ParamLimits

0xcc2a,	// (0x0003b472) popup_query_code_window

0x574d,	// (0x00033f95) popup_query_data_code_window_ParamLimits

0x574d,	// (0x00033f95) popup_query_data_code_window

0xcc3e,	// (0x0003b486) popup_query_data_window_ParamLimits

0xcc3e,	// (0x0003b486) popup_query_data_window

0xcc5a,	// (0x0003b4a2) popup_query_sat_info_window_ParamLimits

0xcc5a,	// (0x0003b4a2) popup_query_sat_info_window

0xcc93,	// (0x0003b4db) popup_snote_single_graphic_window_ParamLimits

0xcc93,	// (0x0003b4db) popup_snote_single_graphic_window

0xcc93,	// (0x0003b4db) popup_snote_single_text_window_ParamLimits

0xcc93,	// (0x0003b4db) popup_snote_single_text_window

0x576a,	// (0x00033fb2) popup_sub_window_general

0x57b2,	// (0x00033ffa) popup_window_general_ParamLimits

0x57b2,	// (0x00033ffa) popup_window_general

0x57c7,	// (0x0003400f) power_save_pane

0xb023,	// (0x0003986b) control_pane_g1_ParamLimits

0xb023,	// (0x0003986b) control_pane_g1

0xb04a,	// (0x00039892) control_pane_g2_ParamLimits

0xb04a,	// (0x00039892) control_pane_g2

0x5641,	// (0x00033e89) control_pane_g3_ParamLimits

0x5641,	// (0x00033e89) control_pane_g3

0x0007,

0xf7a5,	// (0x0003dfed) control_pane_g_ParamLimits

0xf7a5,	// (0x0003dfed) control_pane_g

0xb090,	// (0x000398d8) control_pane_t1_ParamLimits

0xb090,	// (0x000398d8) control_pane_t1

0xb0dc,	// (0x00039924) control_pane_t2_ParamLimits

0xb0dc,	// (0x00039924) control_pane_t2

0x0002,

0xf7b6,	// (0x0003dffe) control_pane_t_ParamLimits

0xf7b6,	// (0x0003dffe) control_pane_t

0x5562,	// (0x00033daa) navi_navi_volume_pane_cp1

0x556b,	// (0x00033db3) status_small_icon_pane

0x5573,	// (0x00033dbb) status_small_pane_g1_ParamLimits

0x5573,	// (0x00033dbb) status_small_pane_g1

0x55a7,	// (0x00033def) status_small_pane_g2_ParamLimits

0x55a7,	// (0x00033def) status_small_pane_g2

0x55b3,	// (0x00033dfb) status_small_pane_g3_ParamLimits

0x55b3,	// (0x00033dfb) status_small_pane_g3

0x55bf,	// (0x00033e07) status_small_pane_g4_ParamLimits

0x55bf,	// (0x00033e07) status_small_pane_g4

0x55cb,	// (0x00033e13) status_small_pane_g5_ParamLimits

0x55cb,	// (0x00033e13) status_small_pane_g5

0x55da,	// (0x00033e22) status_small_pane_g6_ParamLimits

0x55da,	// (0x00033e22) status_small_pane_g6

0x0007,

0xf794,	// (0x0003dfdc) status_small_pane_g_ParamLimits

0xf794,	// (0x0003dfdc) status_small_pane_g

0x560a,	// (0x00033e52) status_small_pane_t1

0x562d,	// (0x00033e75) status_small_wait_pane_ParamLimits

0x562d,	// (0x00033e75) status_small_wait_pane

0xac4a,	// (0x00039492) aid_levels_signal_ParamLimits

0xac4a,	// (0x00039492) aid_levels_signal

0xac59,	// (0x000394a1) signal_pane_g1_ParamLimits

0xac59,	// (0x000394a1) signal_pane_g1

0xac6e,	// (0x000394b6) signal_pane_g2_ParamLimits

0xac6e,	// (0x000394b6) signal_pane_g2

0x0003,

0xf725,	// (0x0003df6d) signal_pane_g_ParamLimits

0xf725,	// (0x0003df6d) signal_pane_g

0x4f99,	// (0x000337e1) context_pane_g1

0xa4a3,	// (0x00038ceb) title_pane_g1

0xa4cd,	// (0x00038d15) title_pane_t1

0x20e4,	// (0x0003092c) title_pane_t2

0x210a,	// (0x00030952) title_pane_t3

0x0002,

0xf56f,	// (0x0003ddb7) title_pane_t

0xd05e,	// (0x0003b8a6) aid_levels_battery_ParamLimits

0xd05e,	// (0x0003b8a6) aid_levels_battery

0xd06f,	// (0x0003b8b7) battery_pane_g1_ParamLimits

0xd06f,	// (0x0003b8b7) battery_pane_g1

0xd085,	// (0x0003b8cd) battery_pane_g2_ParamLimits

0xd085,	// (0x0003b8cd) battery_pane_g2

0x0001,

0xf7c8,	// (0x0003e010) battery_pane_g_ParamLimits

0xf7c8,	// (0x0003e010) battery_pane_g

0x69d1,	// (0x00035219) uni_indicator_pane_g1

0x69e6,	// (0x0003522e) uni_indicator_pane_g2

0x69fc,	// (0x00035244) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0003e17f) uni_indicator_pane_g

0x52a5,	// (0x00033aed) navi_icon_pane_ParamLimits

0x52a5,	// (0x00033aed) navi_icon_pane

0x51ee,	// (0x00033a36) navi_midp_pane

0x52c1,	// (0x00033b09) navi_navi_pane

0x52cb,	// (0x00033b13) navi_text_pane_ParamLimits

0x52cb,	// (0x00033b13) navi_text_pane

0x20c4,	// (0x0003090c) status_small_wait_pane_g1

0x2c66,	// (0x000314ae) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0003e17a) status_small_wait_pane_g

0x671d,	// (0x00034f65) navi_navi_icon_text_pane

0x6737,	// (0x00034f7f) navi_navi_pane_g1_ParamLimits

0x6737,	// (0x00034f7f) navi_navi_pane_g1

0x6725,	// (0x00034f6d) navi_navi_pane_g2_ParamLimits

0x6725,	// (0x00034f6d) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0003e148) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0003e148) navi_navi_pane_g

0x6749,	// (0x00034f91) navi_navi_tabs_pane

0x6752,	// (0x00034f9a) navi_navi_text_pane

0x671d,	// (0x00034f65) navi_navi_volume_pane

0x66f9,	// (0x00034f41) navi_text_pane_t1

0x66ed,	// (0x00034f35) navi_icon_pane_g1

0x6640,	// (0x00034e88) navi_navi_text_pane_t1

0xb424,	// (0x00039c6c) navi_navi_volume_pane_g1

0xb42c,	// (0x00039c74) volume_small_pane

0xd1ea,	// (0x0003ba32) navi_navi_icon_text_pane_g1

0xd1f2,	// (0x0003ba3a) navi_navi_icon_text_pane_t1

0x52c1,	// (0x00033b09) navi_tabs_2_long_pane

0x52c1,	// (0x00033b09) navi_tabs_2_pane

0x52c1,	// (0x00033b09) navi_tabs_3_long_pane

0x52c1,	// (0x00033b09) navi_tabs_3_pane

0x52c1,	// (0x00033b09) navi_tabs_4_pane

0xb404,	// (0x00039c4c) tabs_2_active_pane_ParamLimits

0xb404,	// (0x00039c4c) tabs_2_active_pane

0xb414,	// (0x00039c5c) tabs_2_passive_pane_ParamLimits

0xb414,	// (0x00039c5c) tabs_2_passive_pane

0xb3d2,	// (0x00039c1a) tabs_3_active_pane_ParamLimits

0xb3d2,	// (0x00039c1a) tabs_3_active_pane

0xb3e2,	// (0x00039c2a) tabs_3_passive_pane_ParamLimits

0xb3e2,	// (0x00039c2a) tabs_3_passive_pane

0xb3f3,	// (0x00039c3b) tabs_3_passive_pane_cp_ParamLimits

0xb3f3,	// (0x00039c3b) tabs_3_passive_pane_cp

0xb38e,	// (0x00039bd6) tabs_4_active_pane_ParamLimits

0xb38e,	// (0x00039bd6) tabs_4_active_pane

0xb39f,	// (0x00039be7) tabs_4_passive_pane_ParamLimits

0xb39f,	// (0x00039be7) tabs_4_passive_pane

0xb3b0,	// (0x00039bf8) tabs_4_passive_pane_cp_ParamLimits

0xb3b0,	// (0x00039bf8) tabs_4_passive_pane_cp

0xb3c1,	// (0x00039c09) tabs_4_passive_pane_cp2_ParamLimits

0xb3c1,	// (0x00039c09) tabs_4_passive_pane_cp2

0xb36a,	// (0x00039bb2) tabs_2_long_active_pane_ParamLimits

0xb36a,	// (0x00039bb2) tabs_2_long_active_pane

0xb37c,	// (0x00039bc4) tabs_2_long_passive_pane_ParamLimits

0xb37c,	// (0x00039bc4) tabs_2_long_passive_pane

0xb32b,	// (0x00039b73) tabs_3_long_active_pane_ParamLimits

0xb32b,	// (0x00039b73) tabs_3_long_active_pane

0xb33e,	// (0x00039b86) tabs_3_long_passive_pane_ParamLimits

0xb33e,	// (0x00039b86) tabs_3_long_passive_pane

0xb357,	// (0x00039b9f) tabs_3_long_passive_pane_cp_ParamLimits

0xb357,	// (0x00039b9f) tabs_3_long_passive_pane_cp

0xb2d1,	// (0x00039b19) volume_small_pane_g1

0xb2da,	// (0x00039b22) volume_small_pane_g2

0xb2e3,	// (0x00039b2b) volume_small_pane_g3

0xb2ec,	// (0x00039b34) volume_small_pane_g4

0xb2f5,	// (0x00039b3d) volume_small_pane_g5

0xb2fe,	// (0x00039b46) volume_small_pane_g6

0xb307,	// (0x00039b4f) volume_small_pane_g7

0xb310,	// (0x00039b58) volume_small_pane_g8

0xb319,	// (0x00039b61) volume_small_pane_g9

0xb322,	// (0x00039b6a) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0003e114) volume_small_pane_g

0x212a,	// (0x00030972) bg_active_tab_pane_cp2_ParamLimits

0x212a,	// (0x00030972) bg_active_tab_pane_cp2

0xa535,	// (0x00038d7d) tabs_3_active_pane_g1

0xa53d,	// (0x00038d85) tabs_3_active_pane_t1

0x212a,	// (0x00030972) bg_passive_tab_pane_cp2_ParamLimits

0x212a,	// (0x00030972) bg_passive_tab_pane_cp2

0xa535,	// (0x00038d7d) tabs_3_passive_pane_g1

0xa53d,	// (0x00038d85) tabs_3_passive_pane_t1

0x212a,	// (0x00030972) bg_active_tab_pane_cp3_ParamLimits

0x212a,	// (0x00030972) bg_active_tab_pane_cp3

0xa54f,	// (0x00038d97) tabs_4_active_pane_g1

0xa557,	// (0x00038d9f) tabs_4_active_pane_t1

0x212a,	// (0x00030972) bg_passive_tab_pane_cp3_ParamLimits

0x212a,	// (0x00030972) bg_passive_tab_pane_cp3

0xa54f,	// (0x00038d97) tabs_4_1_passive_pane_g1

0xa557,	// (0x00038d9f) tabs_4_1_passive_pane_t1

0x4a42,	// (0x0003328a) list_highlight_pane_cp2

0xd300,	// (0x0003bb48) list_set_pane_ParamLimits

0xd300,	// (0x0003bb48) list_set_pane

0xd3a6,	// (0x0003bbee) main_pane_set_t1_ParamLimits

0xd3a6,	// (0x0003bbee) main_pane_set_t1

0xd3c6,	// (0x0003bc0e) main_pane_set_t2_ParamLimits

0xd3c6,	// (0x0003bc0e) main_pane_set_t2

0xd3da,	// (0x0003bc22) main_pane_set_t3_ParamLimits

0xd3da,	// (0x0003bc22) main_pane_set_t3

0xd3ec,	// (0x0003bc34) main_pane_set_t4_ParamLimits

0xd3ec,	// (0x0003bc34) main_pane_set_t4

0x0003,

0xf99c,	// (0x0003e1e4) main_pane_set_t_ParamLimits

0xf99c,	// (0x0003e1e4) main_pane_set_t

0xd3fe,	// (0x0003bc46) setting_code_pane

0xd40a,	// (0x0003bc52) setting_slider_graphic_pane

0xd40a,	// (0x0003bc52) setting_slider_pane

0xd40a,	// (0x0003bc52) setting_text_pane

0xd40a,	// (0x0003bc52) setting_volume_pane

0xa569,	// (0x00038db1) volume_set_pane

0x212a,	// (0x00030972) bg_set_opt_pane_cp

0xa571,	// (0x00038db9) setting_slider_pane_t1

0xa58a,	// (0x00038dd2) setting_slider_pane_t2

0xa5a4,	// (0x00038dec) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0003ddbe) setting_slider_pane_t

0xa5bc,	// (0x00038e04) slider_set_pane

0x20ce,	// (0x00030916) bg_set_opt_pane_cp2

0x2138,	// (0x00030980) setting_slider_graphic_pane_g1

0xa5d2,	// (0x00038e1a) setting_slider_graphic_pane_t1

0xa5e2,	// (0x00038e2a) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0003ddc5) setting_slider_graphic_pane_t

0xa5f2,	// (0x00038e3a) slider_set_pane_cp

0x20ce,	// (0x00030916) input_focus_pane_cp1

0x6bdf,	// (0x00035427) list_set_text_pane

0x20c4,	// (0x0003090c) setting_text_pane_g1

0x20ce,	// (0x00030916) input_focus_pane_cp2

0x20c4,	// (0x0003090c) setting_code_pane_g1

0x2141,	// (0x00030989) setting_code_pane_t1

0x92cb,	// (0x00037b13) set_text_pane_t1_ParamLimits

0x92cb,	// (0x00037b13) set_text_pane_t1

0x4951,	// (0x00033199) set_opt_bg_pane_g1

0x4959,	// (0x000331a1) set_opt_bg_pane_g2

0x6bb9,	// (0x00035401) set_opt_bg_pane_g3

0x4969,	// (0x000331b1) set_opt_bg_pane_g4

0x4971,	// (0x000331b9) set_opt_bg_pane_g5

0x4979,	// (0x000331c1) set_opt_bg_pane_g6

0x6bc3,	// (0x0003540b) set_opt_bg_pane_g7

0x6bcb,	// (0x00035413) set_opt_bg_pane_g8

0x6bd5,	// (0x0003541d) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0003e1d1) set_opt_bg_pane_g

0x6bac,	// (0x000353f4) slider_set_pane_g1

0xb499,	// (0x00039ce1) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0003e1c2) slider_set_pane_g

0xb435,	// (0x00039c7d) volume_set_pane_g1

0xb43d,	// (0x00039c85) volume_set_pane_g2

0xb445,	// (0x00039c8d) volume_set_pane_g3

0xb44d,	// (0x00039c95) volume_set_pane_g4

0xb455,	// (0x00039c9d) volume_set_pane_g5

0xb45d,	// (0x00039ca5) volume_set_pane_g6

0xb465,	// (0x00039cad) volume_set_pane_g7

0xb46d,	// (0x00039cb5) volume_set_pane_g8

0xb475,	// (0x00039cbd) volume_set_pane_g9

0xb47d,	// (0x00039cc5) volume_set_pane_g10

0x0009,

0xf952,	// (0x0003e19a) volume_set_pane_g

0xa5fa,	// (0x00038e42) indicator_pane_ParamLimits

0xa5fa,	// (0x00038e42) indicator_pane

0xa606,	// (0x00038e4e) main_idle_pane_g2_ParamLimits

0xa606,	// (0x00038e4e) main_idle_pane_g2

0xa62e,	// (0x00038e76) main_pane_idle_g1_ParamLimits

0xa62e,	// (0x00038e76) main_pane_idle_g1

0x214f,	// (0x00030997) popup_clock_digital_analogue_window_ParamLimits

0x214f,	// (0x00030997) popup_clock_digital_analogue_window

0xa63b,	// (0x00038e83) soft_indicator_pane_ParamLimits

0xa63b,	// (0x00038e83) soft_indicator_pane

0xa647,	// (0x00038e8f) wallpaper_pane_ParamLimits

0xa647,	// (0x00038e8f) wallpaper_pane

0x20c4,	// (0x0003090c) wallpaper_pane_g1

0xa653,	// (0x00038e9b) indicator_pane_g1_ParamLimits

0xa653,	// (0x00038e9b) indicator_pane_g1

0x6d36,	// (0x0003557e) navi_navi_icon_text_pane_srt_g1

0x217d,	// (0x000309c5) soft_indicator_pane_t1

0x2197,	// (0x000309df) aid_ps_area_pane

0xa65f,	// (0x00038ea7) aid_ps_clock_pane

0x21a8,	// (0x000309f0) aid_ps_indicator_pane

0x21b4,	// (0x000309fc) indicator_ps_pane_ParamLimits

0x21b4,	// (0x000309fc) indicator_ps_pane

0x21c3,	// (0x00030a0b) power_save_pane_g1_ParamLimits

0x21c3,	// (0x00030a0b) power_save_pane_g1

0x21cf,	// (0x00030a17) power_save_pane_g2_ParamLimits

0x21cf,	// (0x00030a17) power_save_pane_g2

0xa0be,	// (0x00038906) aid_navinavi_width_pane

0x2197,	// (0x000309df) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0003ddca) power_save_pane_g_ParamLimits

0xf582,	// (0x0003ddca) power_save_pane_g

0x21dd,	// (0x00030a25) power_save_pane_t1_ParamLimits

0x21dd,	// (0x00030a25) power_save_pane_t1

0xa65f,	// (0x00038ea7) aid_ps_clock_pane_ParamLimits

0x21a8,	// (0x000309f0) aid_ps_indicator_pane_ParamLimits

0x21ef,	// (0x00030a37) power_save_pane_t4_ParamLimits

0x21ef,	// (0x00030a37) power_save_pane_t4

0x0001,

0xf587,	// (0x0003ddcf) power_save_pane_t_ParamLimits

0xf587,	// (0x0003ddcf) power_save_pane_t

0x2219,	// (0x00030a61) power_save_t3_ParamLimits

0x2219,	// (0x00030a61) power_save_t3

0x2204,	// (0x00030a4c) power_save_t2_ParamLimits

0x2204,	// (0x00030a4c) power_save_t2

0x222e,	// (0x00030a76) indicator_ps_pane_g1

0xa66d,	// (0x00038eb5) ai_gene_pane_ParamLimits

0xa66d,	// (0x00038eb5) ai_gene_pane

0xa679,	// (0x00038ec1) ai_links_pane_ParamLimits

0xa679,	// (0x00038ec1) ai_links_pane

0xa685,	// (0x00038ecd) indicator_pane_cp1_ParamLimits

0xa685,	// (0x00038ecd) indicator_pane_cp1

0xa691,	// (0x00038ed9) main_pane_idle_g1_cp_ParamLimits

0xa691,	// (0x00038ed9) main_pane_idle_g1_cp

0x2237,	// (0x00030a7f) popup_ai_links_title_window

0xa69d,	// (0x00038ee5) soft_indicator_pane_cp1_ParamLimits

0xa69d,	// (0x00038ee5) soft_indicator_pane_cp1

0x69bf,	// (0x00035207) ai_links_pane_g1

0x69c8,	// (0x00035210) grid_ai_links_pane

0xd294,	// (0x0003badc) ai_gene_pane_1

0x69ad,	// (0x000351f5) ai_gene_pane_2

0x69b6,	// (0x000351fe) list_highlight_pane_cp4

0xd278,	// (0x0003bac0) cell_ai_link_pane_ParamLimits

0xd278,	// (0x0003bac0) cell_ai_link_pane

0x69a5,	// (0x000351ed) cell_ai_link_pane_g1

0x2c66,	// (0x000314ae) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0003e175) cell_ai_link_pane_g

0x20ce,	// (0x00030916) grid_highlight_cp2

0x20ce,	// (0x00030916) bg_popup_sub_pane_cp1

0x224e,	// (0x00030a96) popup_ai_links_title_window_t1

0x68f3,	// (0x0003513b) ai_gene_pane_1_g1_ParamLimits

0x68f3,	// (0x0003513b) ai_gene_pane_1_g1

0x68ff,	// (0x00035147) ai_gene_pane_1_g2_ParamLimits

0x68ff,	// (0x00035147) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0003e16b) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0003e16b) ai_gene_pane_1_g

0x690c,	// (0x00035154) ai_gene_pane_1_t1_ParamLimits

0x690c,	// (0x00035154) ai_gene_pane_1_t1

0x6940,	// (0x00035188) grid_ai_soft_ind_pane

0x68de,	// (0x00035126) ai_gene_pane_2_t1_ParamLimits

0x68de,	// (0x00035126) ai_gene_pane_2_t1

0xa6a9,	// (0x00038ef1) main_pane_empty_t1_ParamLimits

0xa6a9,	// (0x00038ef1) main_pane_empty_t1

0xa6c1,	// (0x00038f09) main_pane_empty_t2_ParamLimits

0xa6c1,	// (0x00038f09) main_pane_empty_t2

0xa6d6,	// (0x00038f1e) main_pane_empty_t3_ParamLimits

0xa6d6,	// (0x00038f1e) main_pane_empty_t3

0xa6e8,	// (0x00038f30) main_pane_empty_t4_ParamLimits

0xa6e8,	// (0x00038f30) main_pane_empty_t4

0xa6fa,	// (0x00038f42) main_pane_empty_t5_ParamLimits

0xa6fa,	// (0x00038f42) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0003ddd4) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0003ddd4) main_pane_empty_t

0x49a2,	// (0x000331ea) bg_popup_window_pane_ParamLimits

0x49a2,	// (0x000331ea) bg_popup_window_pane

0x664e,	// (0x00034e96) find_popup_pane_cp2_ParamLimits

0x664e,	// (0x00034e96) find_popup_pane_cp2

0x665a,	// (0x00034ea2) heading_pane_ParamLimits

0x665a,	// (0x00034ea2) heading_pane

0x20ce,	// (0x00030916) bg_popup_sub_pane

0xd20c,	// (0x0003ba54) bg_popup_window_pane_g1_ParamLimits

0xd20c,	// (0x0003ba54) bg_popup_window_pane_g1

0xd218,	// (0x0003ba60) bg_popup_window_pane_g2_ParamLimits

0xd218,	// (0x0003ba60) bg_popup_window_pane_g2

0xd224,	// (0x0003ba6c) bg_popup_window_pane_g3_ParamLimits

0xd224,	// (0x0003ba6c) bg_popup_window_pane_g3

0xd230,	// (0x0003ba78) bg_popup_window_pane_g4_ParamLimits

0xd230,	// (0x0003ba78) bg_popup_window_pane_g4

0xd23c,	// (0x0003ba84) bg_popup_window_pane_g5_ParamLimits

0xd23c,	// (0x0003ba84) bg_popup_window_pane_g5

0xd248,	// (0x0003ba90) bg_popup_window_pane_g6_ParamLimits

0xd248,	// (0x0003ba90) bg_popup_window_pane_g6

0xd254,	// (0x0003ba9c) bg_popup_window_pane_g7_ParamLimits

0xd254,	// (0x0003ba9c) bg_popup_window_pane_g7

0xd260,	// (0x0003baa8) bg_popup_window_pane_g8_ParamLimits

0xd260,	// (0x0003baa8) bg_popup_window_pane_g8

0xd26c,	// (0x0003bab4) bg_popup_window_pane_g9_ParamLimits

0xd26c,	// (0x0003bab4) bg_popup_window_pane_g9

0x6634,	// (0x00034e7c) bg_popup_window_pane_g10_ParamLimits

0x6634,	// (0x00034e7c) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0003e133) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0003e133) bg_popup_window_pane_g

0x65eb,	// (0x00034e33) bg_popup_heading_pane_ParamLimits

0x65eb,	// (0x00034e33) bg_popup_heading_pane

0xb5c5,	// (0x00039e0d) tabs_4_passive_pane_cp_srt_ParamLimits

0xb5c5,	// (0x00039e0d) tabs_4_passive_pane_cp_srt

0xb5d7,	// (0x00039e1f) tabs_4_passive_pane_srt_ParamLimits

0x65ff,	// (0x00034e47) heading_pane_g2

0xb5d7,	// (0x00039e1f) tabs_4_passive_pane_srt

0x4a42,	// (0x0003328a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4a42,	// (0x0003328a) bg_passive_tab_pane_cp3_srt

0x6607,	// (0x00034e4f) heading_pane_t1_ParamLimits

0x6607,	// (0x00034e4f) heading_pane_t1

0x661e,	// (0x00034e66) heading_pane_t2_ParamLimits

0x661e,	// (0x00034e66) heading_pane_t2

0x0001,

0xf8e6,	// (0x0003e12e) heading_pane_t_ParamLimits

0xf8e6,	// (0x0003e12e) heading_pane_t

0x6106,	// (0x0003494e) bg_popup_heading_pane_g1

0x6197,	// (0x000349df) bg_popup_heading_pane_g2

0x61a1,	// (0x000349e9) bg_popup_heading_pane_g3

0x61ab,	// (0x000349f3) bg_popup_heading_pane_g4

0x61b5,	// (0x000349fd) bg_popup_heading_pane_g5

0x61bf,	// (0x00034a07) bg_popup_heading_pane_g6

0x61c7,	// (0x00034a0f) bg_popup_heading_pane_g7

0x61cf,	// (0x00034a17) bg_popup_heading_pane_g8

0x61d9,	// (0x00034a21) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0003e0ea) bg_popup_heading_pane_g

0x5997,	// (0x000341df) bg_popup_sub_pane_g1

0x59a7,	// (0x000341ef) bg_popup_sub_pane_g2

0x599f,	// (0x000341e7) bg_popup_sub_pane_g3

0x59b7,	// (0x000341ff) bg_popup_sub_pane_g4

0x59af,	// (0x000341f7) bg_popup_sub_pane_g5

0x59bf,	// (0x00034207) bg_popup_sub_pane_g6

0x59c7,	// (0x0003420f) bg_popup_sub_pane_g7

0x59d7,	// (0x0003421f) bg_popup_sub_pane_g8

0x59cf,	// (0x00034217) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0003e0c4) bg_popup_sub_pane_g

0x211c,	// (0x00030964) bg_popup_window_pane_cp5_ParamLimits

0x211c,	// (0x00030964) bg_popup_window_pane_cp5

0x226b,	// (0x00030ab3) popup_note_window_g1_ParamLimits

0x226b,	// (0x00030ab3) popup_note_window_g1

0x2277,	// (0x00030abf) popup_note_window_t1_ParamLimits

0x2277,	// (0x00030abf) popup_note_window_t1

0x228d,	// (0x00030ad5) popup_note_window_t2_ParamLimits

0x228d,	// (0x00030ad5) popup_note_window_t2

0x22a3,	// (0x00030aeb) popup_note_window_t3_ParamLimits

0x22a3,	// (0x00030aeb) popup_note_window_t3

0x22b9,	// (0x00030b01) popup_note_window_t4_ParamLimits

0x22b9,	// (0x00030b01) popup_note_window_t4

0x22e1,	// (0x00030b29) popup_note_window_t5_ParamLimits

0x22e1,	// (0x00030b29) popup_note_window_t5

0x0004,

0xf597,	// (0x0003dddf) popup_note_window_t_ParamLimits

0xf597,	// (0x0003dddf) popup_note_window_t

0x2305,	// (0x00030b4d) bg_popup_window_pane_cp6_ParamLimits

0x2305,	// (0x00030b4d) bg_popup_window_pane_cp6

0x6082,	// (0x000348ca) popup_note_image_window_g1_ParamLimits

0x6082,	// (0x000348ca) popup_note_image_window_g1

0x608e,	// (0x000348d6) popup_note_image_window_g2_ParamLimits

0x608e,	// (0x000348d6) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0003e0b8) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0003e0b8) popup_note_image_window_g

0x60a7,	// (0x000348ef) popup_note_image_window_t1_ParamLimits

0x60a7,	// (0x000348ef) popup_note_image_window_t1

0x60c0,	// (0x00034908) popup_note_image_window_t2_ParamLimits

0x60c0,	// (0x00034908) popup_note_image_window_t2

0x60d9,	// (0x00034921) popup_note_image_window_t3_ParamLimits

0x60d9,	// (0x00034921) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0003e0bd) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0003e0bd) popup_note_image_window_t

0x5f41,	// (0x00034789) bg_popup_window_pane_cp7_ParamLimits

0x5f41,	// (0x00034789) bg_popup_window_pane_cp7

0x5f8f,	// (0x000347d7) popup_note_wait_window_g1_ParamLimits

0x5f8f,	// (0x000347d7) popup_note_wait_window_g1

0x5f9b,	// (0x000347e3) popup_note_wait_window_g2_ParamLimits

0x5f9b,	// (0x000347e3) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0003e0a6) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0003e0a6) popup_note_wait_window_g

0x5fb3,	// (0x000347fb) popup_note_wait_window_t1_ParamLimits

0x5fb3,	// (0x000347fb) popup_note_wait_window_t1

0x5fda,	// (0x00034822) popup_note_wait_window_t2_ParamLimits

0x5fda,	// (0x00034822) popup_note_wait_window_t2

0x5ff7,	// (0x0003483f) popup_note_wait_window_t3_ParamLimits

0x5ff7,	// (0x0003483f) popup_note_wait_window_t3

0x600a,	// (0x00034852) popup_note_wait_window_t4_ParamLimits

0x600a,	// (0x00034852) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0003e0ad) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0003e0ad) popup_note_wait_window_t

0x602f,	// (0x00034877) wait_bar_pane_ParamLimits

0x602f,	// (0x00034877) wait_bar_pane

0x20ce,	// (0x00030916) wait_anim_pane

0x20ce,	// (0x00030916) wait_border_pane

0x20c4,	// (0x0003090c) wait_anim_pane_g1

0x20c4,	// (0x0003090c) wait_anim_pane_g2

0x0001,

0xf720,	// (0x0003df68) wait_anim_pane_g

0x5ee5,	// (0x0003472d) wait_border_pane_g1

0x5ef0,	// (0x00034738) wait_border_pane_g2

0x5ef9,	// (0x00034741) wait_border_pane_g3

0x0002,

0xf857,	// (0x0003e09f) wait_border_pane_g

0x5d50,	// (0x00034598) bg_popup_window_pane_cp16_ParamLimits

0x5d50,	// (0x00034598) bg_popup_window_pane_cp16

0x5e50,	// (0x00034698) indicator_popup_pane_cp4_ParamLimits

0x5e50,	// (0x00034698) indicator_popup_pane_cp4

0x5e64,	// (0x000346ac) popup_query_data_window_t1_ParamLimits

0x5e64,	// (0x000346ac) popup_query_data_window_t1

0x5e76,	// (0x000346be) popup_query_data_window_t2_ParamLimits

0x5e76,	// (0x000346be) popup_query_data_window_t2

0x5e8f,	// (0x000346d7) popup_query_data_window_t3_ParamLimits

0x5e8f,	// (0x000346d7) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0003e098) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0003e098) popup_query_data_window_t

0x5ea9,	// (0x000346f1) query_popup_data_pane_ParamLimits

0x5ea9,	// (0x000346f1) query_popup_data_pane

0x5ebd,	// (0x00034705) query_popup_data_pane_cp1_ParamLimits

0x5ebd,	// (0x00034705) query_popup_data_pane_cp1

0x5d50,	// (0x00034598) bg_popup_window_pane_cp10_ParamLimits

0x5d50,	// (0x00034598) bg_popup_window_pane_cp10

0x5d82,	// (0x000345ca) indicator_popup_pane_ParamLimits

0x5d82,	// (0x000345ca) indicator_popup_pane

0x5da4,	// (0x000345ec) popup_query_code_window_t1_ParamLimits

0x5da4,	// (0x000345ec) popup_query_code_window_t1

0x5dbe,	// (0x00034606) popup_query_code_window_t2_ParamLimits

0x5dbe,	// (0x00034606) popup_query_code_window_t2

0x5e07,	// (0x0003464f) popup_query_code_window_t3_ParamLimits

0x5e07,	// (0x0003464f) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0003e091) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0003e091) popup_query_code_window_t

0x5e36,	// (0x0003467e) query_popup_pane_ParamLimits

0x5e36,	// (0x0003467e) query_popup_pane

0x2305,	// (0x00030b4d) bg_popup_window_pane_cp15_ParamLimits

0x2305,	// (0x00030b4d) bg_popup_window_pane_cp15

0x2323,	// (0x00030b6b) indicator_popup_pane_cp1_ParamLimits

0x2323,	// (0x00030b6b) indicator_popup_pane_cp1

0x2bab,	// (0x000313f3) indicator_popup_pane_cp2_ParamLimits

0x2bab,	// (0x000313f3) indicator_popup_pane_cp2

0x2bbe,	// (0x00031406) popup_query_data_code_window_g1_ParamLimits

0x2bbe,	// (0x00031406) popup_query_data_code_window_g1

0x2bd1,	// (0x00031419) popup_query_data_code_window_t1_ParamLimits

0x2bd1,	// (0x00031419) popup_query_data_code_window_t1

0x2be3,	// (0x0003142b) popup_query_data_code_window_t2_ParamLimits

0x2be3,	// (0x0003142b) popup_query_data_code_window_t2

0x2bf5,	// (0x0003143d) popup_query_data_code_window_t3_ParamLimits

0x2bf5,	// (0x0003143d) popup_query_data_code_window_t3

0x2c0b,	// (0x00031453) popup_query_data_code_window_t4_ParamLimits

0x2c0b,	// (0x00031453) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0003ddea) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0003ddea) popup_query_data_code_window_t

0xb1ee,	// (0x00039a36) list_single_midp_graphic_pane_g3

0x2c23,	// (0x0003146b) query_popup_data_pane_cp2_ParamLimits

0x2c36,	// (0x0003147e) query_popup_pane_cp2_ParamLimits

0x2c36,	// (0x0003147e) query_popup_pane_cp2

0x20ce,	// (0x00030916) bg_popup_window_pane_cp11

0x5d48,	// (0x00034590) heading_pane_cp5

0x2cc4,	// (0x0003150c) listscroll_popup_info_pane

0x20ce,	// (0x00030916) input_focus_pane_cp3

0x2c49,	// (0x00031491) query_popup_pane_t1

0x2c57,	// (0x0003149f) list_popup_info_pane_ParamLimits

0x2c57,	// (0x0003149f) list_popup_info_pane

0x2c66,	// (0x000314ae) listscroll_popup_info_pane_g1

0x2c6e,	// (0x000314b6) scroll_pane_cp7

0x2c78,	// (0x000314c0) popup_info_list_pane_t1_ParamLimits

0x2c78,	// (0x000314c0) popup_info_list_pane_t1

0x2c92,	// (0x000314da) popup_info_list_pane_t2_ParamLimits

0x2c92,	// (0x000314da) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0003ddf3) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0003ddf3) popup_info_list_pane_t

0x20ce,	// (0x00030916) bg_popup_window_pane_cp12

0x6d50,	// (0x00035598) find_popup_pane

0x212a,	// (0x00030972) bg_popup_window_pane_cp3

0x2cac,	// (0x000314f4) heading_pane_cp3

0x2cb8,	// (0x00031500) listscroll_popup_graphic_pane

0x20ce,	// (0x00030916) bg_popup_window_pane_cp4

0xa75e,	// (0x00038fa6) heading_pane_cp4

0x2cc4,	// (0x0003150c) listscroll_popup_colour_pane

0xa768,	// (0x00038fb0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa768,	// (0x00038fb0) cell_large_graphic_colour_none_popup_pane

0xa77c,	// (0x00038fc4) grid_large_graphic_colour_popup_pane_ParamLimits

0xa77c,	// (0x00038fc4) grid_large_graphic_colour_popup_pane

0xa7a8,	// (0x00038ff0) listscroll_popup_colour_pane_g1_ParamLimits

0xa7a8,	// (0x00038ff0) listscroll_popup_colour_pane_g1

0xa7bf,	// (0x00039007) listscroll_popup_colour_pane_g2_ParamLimits

0xa7bf,	// (0x00039007) listscroll_popup_colour_pane_g2

0xa7d6,	// (0x0003901e) listscroll_popup_colour_pane_g3_ParamLimits

0xa7d6,	// (0x0003901e) listscroll_popup_colour_pane_g3

0xa7e6,	// (0x0003902e) listscroll_popup_colour_pane_g4_ParamLimits

0xa7e6,	// (0x0003902e) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0003ddf8) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0003ddf8) listscroll_popup_colour_pane_g

0x2ccc,	// (0x00031514) scroll_pane_cp6_ParamLimits

0x2ccc,	// (0x00031514) scroll_pane_cp6

0xa7fa,	// (0x00039042) cell_large_graphic_colour_popup_pane_ParamLimits

0xa7fa,	// (0x00039042) cell_large_graphic_colour_popup_pane

0x2cde,	// (0x00031526) cell_large_graphic_colour_none_popup_pane_t1

0x20ce,	// (0x00030916) grid_highlight_pane_cp5

0x2ced,	// (0x00031535) cell_large_graphic_colour_popup_pane_g1

0x2cf5,	// (0x0003153d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0003de01) cell_large_graphic_colour_popup_pane_g

0x2cfd,	// (0x00031545) cell_large_graphic_colour_popup_pane_g2_copy1

0x2d06,	// (0x0003154e) grid_highlight_pane_cp4

0x2d0e,	// (0x00031556) bg_popup_window_pane_cp8_ParamLimits

0x2d0e,	// (0x00031556) bg_popup_window_pane_cp8

0x2d29,	// (0x00031571) popup_snote_single_text_window_g1_ParamLimits

0x2d29,	// (0x00031571) popup_snote_single_text_window_g1

0x2d3b,	// (0x00031583) popup_snote_single_text_window_t1_ParamLimits

0x2d3b,	// (0x00031583) popup_snote_single_text_window_t1

0x2d4e,	// (0x00031596) popup_snote_single_text_window_t2_ParamLimits

0x2d4e,	// (0x00031596) popup_snote_single_text_window_t2

0x2d61,	// (0x000315a9) popup_snote_single_text_window_t3_ParamLimits

0x2d61,	// (0x000315a9) popup_snote_single_text_window_t3

0x2d9a,	// (0x000315e2) popup_snote_single_text_window_t4_ParamLimits

0x2d9a,	// (0x000315e2) popup_snote_single_text_window_t4

0x2dce,	// (0x00031616) popup_snote_single_text_window_t5_ParamLimits

0x2dce,	// (0x00031616) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0003de06) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0003de06) popup_snote_single_text_window_t

0x2dfd,	// (0x00031645) bg_popup_window_pane_cp9_ParamLimits

0x2dfd,	// (0x00031645) bg_popup_window_pane_cp9

0x2d29,	// (0x00031571) popup_snote_single_graphic_window_g1_ParamLimits

0x2d29,	// (0x00031571) popup_snote_single_graphic_window_g1

0x2e0b,	// (0x00031653) popup_snote_single_graphic_window_g2_ParamLimits

0x2e0b,	// (0x00031653) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0003de11) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0003de11) popup_snote_single_graphic_window_g

0x2e17,	// (0x0003165f) popup_snote_single_graphic_window_t1_ParamLimits

0x2e17,	// (0x0003165f) popup_snote_single_graphic_window_t1

0x2e2a,	// (0x00031672) popup_snote_single_graphic_window_t2_ParamLimits

0x2e2a,	// (0x00031672) popup_snote_single_graphic_window_t2

0x2e3d,	// (0x00031685) popup_snote_single_graphic_window_t3_ParamLimits

0x2e3d,	// (0x00031685) popup_snote_single_graphic_window_t3

0x2e76,	// (0x000316be) popup_snote_single_graphic_window_t4_ParamLimits

0x2e76,	// (0x000316be) popup_snote_single_graphic_window_t4

0x2eaa,	// (0x000316f2) popup_snote_single_graphic_window_t5_ParamLimits

0x2eaa,	// (0x000316f2) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0003de16) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0003de16) popup_snote_single_graphic_window_t

0x6cd8,	// (0x00035520) grid_graphic_popup_pane_ParamLimits

0x6cd8,	// (0x00035520) grid_graphic_popup_pane

0x6d00,	// (0x00035548) listscroll_popup_graphic_pane_g1_ParamLimits

0x6d00,	// (0x00035548) listscroll_popup_graphic_pane_g1

0xd4ea,	// (0x0003bd32) listscroll_popup_graphic_pane_g2_ParamLimits

0xd4ea,	// (0x0003bd32) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0003e20e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0003e20e) listscroll_popup_graphic_pane_g

0x5f83,	// (0x000347cb) scroll_pane_cp5

0xd4a9,	// (0x0003bcf1) cell_graphic_popup_pane_ParamLimits

0xd4a9,	// (0x0003bcf1) cell_graphic_popup_pane

0x6ca3,	// (0x000354eb) cell_graphic_popup_pane_g1

0x6cab,	// (0x000354f3) cell_graphic_popup_pane_g2

0x2cfd,	// (0x00031545) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0003e207) cell_graphic_popup_pane_g

0x6cb4,	// (0x000354fc) cell_graphic_popup_pane_t2

0x2d06,	// (0x0003154e) grid_highlight_pane_cp3

0x2eeb,	// (0x00031733) list_gen_pane_ParamLimits

0x2eeb,	// (0x00031733) list_gen_pane

0x2f13,	// (0x0003175b) scroll_pane

0xd458,	// (0x0003bca0) bg_list_pane_g1_ParamLimits

0xd458,	// (0x0003bca0) bg_list_pane_g1

0x6c4c,	// (0x00035494) bg_list_pane_g2_ParamLimits

0x6c4c,	// (0x00035494) bg_list_pane_g2

0x6c61,	// (0x000354a9) bg_list_pane_g3_ParamLimits

0x6c61,	// (0x000354a9) bg_list_pane_g3

0x6c75,	// (0x000354bd) bg_list_pane_g4_ParamLimits

0x6c75,	// (0x000354bd) bg_list_pane_g4

0xd475,	// (0x0003bcbd) bg_list_pane_g5_ParamLimits

0xd475,	// (0x0003bcbd) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0003e1fc) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0003e1fc) bg_list_pane_g

0x9beb,	// (0x00038433) list_double2_graphic_large_graphic_pane_ParamLimits

0x9beb,	// (0x00038433) list_double2_graphic_large_graphic_pane

0x9beb,	// (0x00038433) list_double2_graphic_pane_ParamLimits

0x9beb,	// (0x00038433) list_double2_graphic_pane

0x9beb,	// (0x00038433) list_double2_large_graphic_pane_ParamLimits

0x9beb,	// (0x00038433) list_double2_large_graphic_pane

0xd43d,	// (0x0003bc85) list_double2_pane_ParamLimits

0xd43d,	// (0x0003bc85) list_double2_pane

0x9beb,	// (0x00038433) list_double_graphic_heading_pane_ParamLimits

0x9beb,	// (0x00038433) list_double_graphic_heading_pane

0x9beb,	// (0x00038433) list_double_graphic_pane_ParamLimits

0x9beb,	// (0x00038433) list_double_graphic_pane

0x9beb,	// (0x00038433) list_double_heading_pane_ParamLimits

0x9beb,	// (0x00038433) list_double_heading_pane

0x9beb,	// (0x00038433) list_double_large_graphic_pane_ParamLimits

0x9beb,	// (0x00038433) list_double_large_graphic_pane

0x9beb,	// (0x00038433) list_double_number_pane_ParamLimits

0x9beb,	// (0x00038433) list_double_number_pane

0x9beb,	// (0x00038433) list_double_pane_ParamLimits

0x9beb,	// (0x00038433) list_double_pane

0x9beb,	// (0x00038433) list_double_time_pane_ParamLimits

0x9beb,	// (0x00038433) list_double_time_pane

0x9beb,	// (0x00038433) list_setting_number_pane_ParamLimits

0x9beb,	// (0x00038433) list_setting_number_pane

0x9beb,	// (0x00038433) list_setting_pane_ParamLimits

0x9beb,	// (0x00038433) list_setting_pane

0xb52c,	// (0x00039d74) list_single_2graphic_pane_ParamLimits

0xb52c,	// (0x00039d74) list_single_2graphic_pane

0xb52c,	// (0x00039d74) list_single_graphic_heading_pane_ParamLimits

0xb52c,	// (0x00039d74) list_single_graphic_heading_pane

0xb52c,	// (0x00039d74) list_single_graphic_pane_ParamLimits

0xb52c,	// (0x00039d74) list_single_graphic_pane

0xb52c,	// (0x00039d74) list_single_heading_pane_ParamLimits

0xb52c,	// (0x00039d74) list_single_heading_pane

0xb582,	// (0x00039dca) list_single_large_graphic_pane_ParamLimits

0xb582,	// (0x00039dca) list_single_large_graphic_pane

0xb52c,	// (0x00039d74) list_single_number_heading_pane_ParamLimits

0xb52c,	// (0x00039d74) list_single_number_heading_pane

0xb52c,	// (0x00039d74) list_single_number_pane_ParamLimits

0xb52c,	// (0x00039d74) list_single_number_pane

0xb52c,	// (0x00039d74) list_single_pane_ParamLimits

0xb52c,	// (0x00039d74) list_single_pane

0x20ce,	// (0x00030916) list_highlight_pane_cp1

0xa823,	// (0x0003906b) list_single_pane_g1_ParamLimits

0xa823,	// (0x0003906b) list_single_pane_g1

0xa82f,	// (0x00039077) list_single_pane_g2_ParamLimits

0xa82f,	// (0x00039077) list_single_pane_g2

0x0001,

0xf5ea,	// (0x0003de32) list_single_pane_g_ParamLimits

0xf5ea,	// (0x0003de32) list_single_pane_g

0x9bd5,	// (0x0003841d) list_single_pane_t1_ParamLimits

0x9bd5,	// (0x0003841d) list_single_pane_t1

0xa823,	// (0x0003906b) list_single_number_pane_g1_ParamLimits

0xa823,	// (0x0003906b) list_single_number_pane_g1

0xa82f,	// (0x00039077) list_single_number_pane_g2_ParamLimits

0xa82f,	// (0x00039077) list_single_number_pane_g2

0x0001,

0xf5ea,	// (0x0003de32) list_single_number_pane_g_ParamLimits

0xf5ea,	// (0x0003de32) list_single_number_pane_g

0x9b7d,	// (0x000383c5) list_single_number_pane_t1_ParamLimits

0x9b7d,	// (0x000383c5) list_single_number_pane_t1

0x9b93,	// (0x000383db) list_single_number_pane_t2_ParamLimits

0x9b93,	// (0x000383db) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0003e1bd) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0003e1bd) list_single_number_pane_t

0x92e4,	// (0x00037b2c) list_single_graphic_pane_g1_ParamLimits

0x92e4,	// (0x00037b2c) list_single_graphic_pane_g1

0xa823,	// (0x0003906b) list_single_graphic_pane_g2_ParamLimits

0xa823,	// (0x0003906b) list_single_graphic_pane_g2

0xa82f,	// (0x00039077) list_single_graphic_pane_g3_ParamLimits

0xa82f,	// (0x00039077) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0003de21) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0003de21) list_single_graphic_pane_g

0x92f0,	// (0x00037b38) list_single_graphic_pane_t1_ParamLimits

0x92f0,	// (0x00037b38) list_single_graphic_pane_t1

0x9306,	// (0x00037b4e) list_single_heading_pane_g1_ParamLimits

0x9306,	// (0x00037b4e) list_single_heading_pane_g1

0xa82f,	// (0x00039077) list_single_heading_pane_g2_ParamLimits

0xa82f,	// (0x00039077) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0003de28) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0003de28) list_single_heading_pane_g

0x9319,	// (0x00037b61) list_single_heading_pane_t1_ParamLimits

0x9319,	// (0x00037b61) list_single_heading_pane_t1

0xa83b,	// (0x00039083) list_single_heading_pane_t2_ParamLimits

0xa83b,	// (0x00039083) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0003de2d) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0003de2d) list_single_heading_pane_t

0xa823,	// (0x0003906b) list_single_number_heading_pane_g1_ParamLimits

0xa823,	// (0x0003906b) list_single_number_heading_pane_g1

0xa82f,	// (0x00039077) list_single_number_heading_pane_g2_ParamLimits

0xa82f,	// (0x00039077) list_single_number_heading_pane_g2

0x0001,

0xf5ea,	// (0x0003de32) list_single_number_heading_pane_g_ParamLimits

0xf5ea,	// (0x0003de32) list_single_number_heading_pane_g

0x932f,	// (0x00037b77) list_single_number_heading_pane_t1_ParamLimits

0x932f,	// (0x00037b77) list_single_number_heading_pane_t1

0x9345,	// (0x00037b8d) list_single_number_heading_pane_t2_ParamLimits

0x9345,	// (0x00037b8d) list_single_number_heading_pane_t2

0x9357,	// (0x00037b9f) list_single_number_heading_pane_t3_ParamLimits

0x9357,	// (0x00037b9f) list_single_number_heading_pane_t3

0x0002,

0xf5ef,	// (0x0003de37) list_single_number_heading_pane_t_ParamLimits

0xf5ef,	// (0x0003de37) list_single_number_heading_pane_t

0x9369,	// (0x00037bb1) list_single_graphic_heading_pane_g1_ParamLimits

0x9369,	// (0x00037bb1) list_single_graphic_heading_pane_g1

0xa84d,	// (0x00039095) list_single_graphic_heading_pane_g4_ParamLimits

0xa84d,	// (0x00039095) list_single_graphic_heading_pane_g4

0xa82f,	// (0x00039077) list_single_graphic_heading_pane_g5_ParamLimits

0xa82f,	// (0x00039077) list_single_graphic_heading_pane_g5

0x0002,

0xf5f6,	// (0x0003de3e) list_single_graphic_heading_pane_g_ParamLimits

0xf5f6,	// (0x0003de3e) list_single_graphic_heading_pane_g

0x932f,	// (0x00037b77) list_single_graphic_heading_pane_t1_ParamLimits

0x932f,	// (0x00037b77) list_single_graphic_heading_pane_t1

0x9381,	// (0x00037bc9) list_single_graphic_heading_pane_t2_ParamLimits

0x9381,	// (0x00037bc9) list_single_graphic_heading_pane_t2

0x0001,

0xf5fd,	// (0x0003de45) list_single_graphic_heading_pane_t_ParamLimits

0xf5fd,	// (0x0003de45) list_single_graphic_heading_pane_t

0xa85e,	// (0x000390a6) list_single_large_graphic_pane_g1_ParamLimits

0xa85e,	// (0x000390a6) list_single_large_graphic_pane_g1

0xa86a,	// (0x000390b2) list_single_large_graphic_pane_g2_ParamLimits

0xa86a,	// (0x000390b2) list_single_large_graphic_pane_g2

0xa876,	// (0x000390be) list_single_large_graphic_pane_g3_ParamLimits

0xa876,	// (0x000390be) list_single_large_graphic_pane_g3

0x0002,

0xf602,	// (0x0003de4a) list_single_large_graphic_pane_g_ParamLimits

0xf602,	// (0x0003de4a) list_single_large_graphic_pane_g

0x5ef0,	// (0x00034738) wait_border_pane_g2_copy1

0xa882,	// (0x000390ca) list_single_large_graphic_pane_g4_cp2

0x9397,	// (0x00037bdf) list_single_large_graphic_pane_t1_ParamLimits

0x9397,	// (0x00037bdf) list_single_large_graphic_pane_t1

0x5308,	// (0x00033b50) list_double_pane_g1_ParamLimits

0x5308,	// (0x00033b50) list_double_pane_g1

0x93ad,	// (0x00037bf5) list_double_pane_g2_ParamLimits

0x93ad,	// (0x00037bf5) list_double_pane_g2

0x0001,

0xf609,	// (0x0003de51) list_double_pane_g_ParamLimits

0xf609,	// (0x0003de51) list_double_pane_g

0x93b9,	// (0x00037c01) list_double_pane_t1_ParamLimits

0x93b9,	// (0x00037c01) list_double_pane_t1

0x93cf,	// (0x00037c17) list_double_pane_t2_ParamLimits

0x93cf,	// (0x00037c17) list_double_pane_t2

0x0001,

0xf60e,	// (0x0003de56) list_double_pane_t_ParamLimits

0xf60e,	// (0x0003de56) list_double_pane_t

0x93e1,	// (0x00037c29) list_double2_pane_g1_ParamLimits

0x93e1,	// (0x00037c29) list_double2_pane_g1

0x93f2,	// (0x00037c3a) list_double2_pane_g2_ParamLimits

0x93f2,	// (0x00037c3a) list_double2_pane_g2

0x0001,

0xf613,	// (0x0003de5b) list_double2_pane_g_ParamLimits

0xf613,	// (0x0003de5b) list_double2_pane_g

0x93fe,	// (0x00037c46) list_double2_pane_t1_ParamLimits

0x93fe,	// (0x00037c46) list_double2_pane_t1

0x9414,	// (0x00037c5c) list_double2_pane_t2_ParamLimits

0x9414,	// (0x00037c5c) list_double2_pane_t2

0x0001,

0xf618,	// (0x0003de60) list_double2_pane_t_ParamLimits

0xf618,	// (0x0003de60) list_double2_pane_t

0x5308,	// (0x00033b50) list_double_number_pane_g1_ParamLimits

0x5308,	// (0x00033b50) list_double_number_pane_g1

0x93ad,	// (0x00037bf5) list_double_number_pane_g2_ParamLimits

0x93ad,	// (0x00037bf5) list_double_number_pane_g2

0x0001,

0xf609,	// (0x0003de51) list_double_number_pane_g_ParamLimits

0xf609,	// (0x0003de51) list_double_number_pane_g

0x9426,	// (0x00037c6e) list_double_number_pane_t1_ParamLimits

0x9426,	// (0x00037c6e) list_double_number_pane_t1

0x9438,	// (0x00037c80) list_double_number_pane_t2_ParamLimits

0x9438,	// (0x00037c80) list_double_number_pane_t2

0x944e,	// (0x00037c96) list_double_number_pane_t3_ParamLimits

0x944e,	// (0x00037c96) list_double_number_pane_t3

0x0002,

0xf61d,	// (0x0003de65) list_double_number_pane_t_ParamLimits

0xf61d,	// (0x0003de65) list_double_number_pane_t

0x9460,	// (0x00037ca8) list_double_graphic_pane_g1_ParamLimits

0x9460,	// (0x00037ca8) list_double_graphic_pane_g1

0x66ae,	// (0x00034ef6) list_double_graphic_pane_g2_ParamLimits

0x66ae,	// (0x00034ef6) list_double_graphic_pane_g2

0x946c,	// (0x00037cb4) list_double_graphic_pane_g3_ParamLimits

0x946c,	// (0x00037cb4) list_double_graphic_pane_g3

0x0003,

0xf624,	// (0x0003de6c) list_double_graphic_pane_g_ParamLimits

0xf624,	// (0x0003de6c) list_double_graphic_pane_g

0x9484,	// (0x00037ccc) list_double_graphic_pane_t1_ParamLimits

0x9484,	// (0x00037ccc) list_double_graphic_pane_t1

0x949a,	// (0x00037ce2) list_double_graphic_pane_t2_ParamLimits

0x949a,	// (0x00037ce2) list_double_graphic_pane_t2

0x0001,

0xf62d,	// (0x0003de75) list_double_graphic_pane_t_ParamLimits

0xf62d,	// (0x0003de75) list_double_graphic_pane_t

0x94ac,	// (0x00037cf4) list_double2_graphic_pane_g1_ParamLimits

0x94ac,	// (0x00037cf4) list_double2_graphic_pane_g1

0x94b8,	// (0x00037d00) list_double2_graphic_pane_g2_ParamLimits

0x94b8,	// (0x00037d00) list_double2_graphic_pane_g2

0x94c4,	// (0x00037d0c) list_double2_graphic_pane_g3_ParamLimits

0x94c4,	// (0x00037d0c) list_double2_graphic_pane_g3

0x0002,

0xf632,	// (0x0003de7a) list_double2_graphic_pane_g_ParamLimits

0xf632,	// (0x0003de7a) list_double2_graphic_pane_g

0x94d0,	// (0x00037d18) list_double2_graphic_pane_t1_ParamLimits

0x94d0,	// (0x00037d18) list_double2_graphic_pane_t1

0x94e6,	// (0x00037d2e) list_double2_graphic_pane_t2_ParamLimits

0x94e6,	// (0x00037d2e) list_double2_graphic_pane_t2

0x0001,

0xf639,	// (0x0003de81) list_double2_graphic_pane_t_ParamLimits

0xf639,	// (0x0003de81) list_double2_graphic_pane_t

0x94f8,	// (0x00037d40) list_double_large_graphic_pane_g1_ParamLimits

0x94f8,	// (0x00037d40) list_double_large_graphic_pane_g1

0x9521,	// (0x00037d69) list_double_large_graphic_pane_g2_ParamLimits

0x9521,	// (0x00037d69) list_double_large_graphic_pane_g2

0x93ad,	// (0x00037bf5) list_double_large_graphic_pane_g3_ParamLimits

0x93ad,	// (0x00037bf5) list_double_large_graphic_pane_g3

0x9537,	// (0x00037d7f) list_double_large_graphic_pane_g4_ParamLimits

0x9537,	// (0x00037d7f) list_double_large_graphic_pane_g4

0x0004,

0xf63e,	// (0x0003de86) list_double_large_graphic_pane_g_ParamLimits

0xf63e,	// (0x0003de86) list_double_large_graphic_pane_g

0x9548,	// (0x00037d90) list_double_large_graphic_pane_t1_ParamLimits

0x9548,	// (0x00037d90) list_double_large_graphic_pane_t1

0x9561,	// (0x00037da9) list_double_large_graphic_pane_t2_ParamLimits

0x9561,	// (0x00037da9) list_double_large_graphic_pane_t2

0x0001,

0xf649,	// (0x0003de91) list_double_large_graphic_pane_t_ParamLimits

0xf649,	// (0x0003de91) list_double_large_graphic_pane_t

0x9573,	// (0x00037dbb) list_double2_large_graphic_pane_g1_ParamLimits

0x9573,	// (0x00037dbb) list_double2_large_graphic_pane_g1

0x957f,	// (0x00037dc7) list_double2_large_graphic_pane_g2_ParamLimits

0x957f,	// (0x00037dc7) list_double2_large_graphic_pane_g2

0x94c4,	// (0x00037d0c) list_double2_large_graphic_pane_g3_ParamLimits

0x94c4,	// (0x00037d0c) list_double2_large_graphic_pane_g3

0x0002,

0xf64e,	// (0x0003de96) list_double2_large_graphic_pane_g_ParamLimits

0xf64e,	// (0x0003de96) list_double2_large_graphic_pane_g

0x9590,	// (0x00037dd8) list_double2_large_graphic_pane_t1_ParamLimits

0x9590,	// (0x00037dd8) list_double2_large_graphic_pane_t1

0x95a6,	// (0x00037dee) list_double2_large_graphic_pane_t2_ParamLimits

0x95a6,	// (0x00037dee) list_double2_large_graphic_pane_t2

0x0001,

0xf655,	// (0x0003de9d) list_double2_large_graphic_pane_t_ParamLimits

0xf655,	// (0x0003de9d) list_double2_large_graphic_pane_t

0x95b8,	// (0x00037e00) list_double_heading_pane_g1_ParamLimits

0x95b8,	// (0x00037e00) list_double_heading_pane_g1

0x95c9,	// (0x00037e11) list_double_heading_pane_g2_ParamLimits

0x95c9,	// (0x00037e11) list_double_heading_pane_g2

0x0001,

0xf65a,	// (0x0003dea2) list_double_heading_pane_g_ParamLimits

0xf65a,	// (0x0003dea2) list_double_heading_pane_g

0x95d5,	// (0x00037e1d) list_double_heading_pane_t1_ParamLimits

0x95d5,	// (0x00037e1d) list_double_heading_pane_t1

0x95eb,	// (0x00037e33) list_double_heading_pane_t2_ParamLimits

0x95eb,	// (0x00037e33) list_double_heading_pane_t2

0x0001,

0xf65f,	// (0x0003dea7) list_double_heading_pane_t_ParamLimits

0xf65f,	// (0x0003dea7) list_double_heading_pane_t

0x94ac,	// (0x00037cf4) list_double_graphic_heading_pane_g1_ParamLimits

0x94ac,	// (0x00037cf4) list_double_graphic_heading_pane_g1

0x95b8,	// (0x00037e00) list_double_graphic_heading_pane_g2_ParamLimits

0x95b8,	// (0x00037e00) list_double_graphic_heading_pane_g2

0x95c9,	// (0x00037e11) list_double_graphic_heading_pane_g3_ParamLimits

0x95c9,	// (0x00037e11) list_double_graphic_heading_pane_g3

0x0002,

0xf664,	// (0x0003deac) list_double_graphic_heading_pane_g_ParamLimits

0xf664,	// (0x0003deac) list_double_graphic_heading_pane_g

0x95fd,	// (0x00037e45) list_double_graphic_heading_pane_t1_ParamLimits

0x95fd,	// (0x00037e45) list_double_graphic_heading_pane_t1

0x94e6,	// (0x00037d2e) list_double_graphic_heading_pane_t2_ParamLimits

0x94e6,	// (0x00037d2e) list_double_graphic_heading_pane_t2

0x0001,

0xf66b,	// (0x0003deb3) list_double_graphic_heading_pane_t_ParamLimits

0xf66b,	// (0x0003deb3) list_double_graphic_heading_pane_t

0x9613,	// (0x00037e5b) list_double_time_pane_g1_ParamLimits

0x9613,	// (0x00037e5b) list_double_time_pane_g1

0x9624,	// (0x00037e6c) list_double_time_pane_g2_ParamLimits

0x9624,	// (0x00037e6c) list_double_time_pane_g2

0x0001,

0xf670,	// (0x0003deb8) list_double_time_pane_g_ParamLimits

0xf670,	// (0x0003deb8) list_double_time_pane_g

0x9630,	// (0x00037e78) list_double_time_pane_t1_ParamLimits

0x9630,	// (0x00037e78) list_double_time_pane_t1

0x9646,	// (0x00037e8e) list_double_time_pane_t2_ParamLimits

0x9646,	// (0x00037e8e) list_double_time_pane_t2

0x9658,	// (0x00037ea0) list_double_time_pane_t3_ParamLimits

0x9658,	// (0x00037ea0) list_double_time_pane_t3

0x966a,	// (0x00037eb2) list_double_time_pane_t4_ParamLimits

0x966a,	// (0x00037eb2) list_double_time_pane_t4

0x0003,

0xf675,	// (0x0003debd) list_double_time_pane_t_ParamLimits

0xf675,	// (0x0003debd) list_double_time_pane_t

0x967c,	// (0x00037ec4) list_setting_pane_g1_ParamLimits

0x967c,	// (0x00037ec4) list_setting_pane_g1

0x9688,	// (0x00037ed0) list_setting_pane_g2_ParamLimits

0x9688,	// (0x00037ed0) list_setting_pane_g2

0x0001,

0xf67e,	// (0x0003dec6) list_setting_pane_g_ParamLimits

0xf67e,	// (0x0003dec6) list_setting_pane_g

0x9694,	// (0x00037edc) list_setting_pane_t1_ParamLimits

0x9694,	// (0x00037edc) list_setting_pane_t1

0x96ae,	// (0x00037ef6) list_setting_pane_t2_ParamLimits

0x96ae,	// (0x00037ef6) list_setting_pane_t2

0x0002,

0xf683,	// (0x0003decb) list_setting_pane_t_ParamLimits

0xf683,	// (0x0003decb) list_setting_pane_t

0x96ed,	// (0x00037f35) set_value_pane_cp_ParamLimits

0x96ed,	// (0x00037f35) set_value_pane_cp

0x96f9,	// (0x00037f41) list_setting_number_pane_g1_ParamLimits

0x96f9,	// (0x00037f41) list_setting_number_pane_g1

0x9705,	// (0x00037f4d) list_setting_number_pane_g2_ParamLimits

0x9705,	// (0x00037f4d) list_setting_number_pane_g2

0x0001,

0xf68a,	// (0x0003ded2) list_setting_number_pane_g_ParamLimits

0xf68a,	// (0x0003ded2) list_setting_number_pane_g

0x9711,	// (0x00037f59) list_setting_number_pane_t1_ParamLimits

0x9711,	// (0x00037f59) list_setting_number_pane_t1

0x972a,	// (0x00037f72) list_setting_number_pane_t2_ParamLimits

0x972a,	// (0x00037f72) list_setting_number_pane_t2

0x9744,	// (0x00037f8c) list_setting_number_pane_t3_ParamLimits

0x9744,	// (0x00037f8c) list_setting_number_pane_t3

0x0003,

0xf68f,	// (0x0003ded7) list_setting_number_pane_t_ParamLimits

0xf68f,	// (0x0003ded7) list_setting_number_pane_t

0x96ed,	// (0x00037f35) set_value_pane_ParamLimits

0x96ed,	// (0x00037f35) set_value_pane

0x4891,	// (0x000330d9) bg_set_opt_pane_ParamLimits

0x4891,	// (0x000330d9) bg_set_opt_pane

0x9787,	// (0x00037fcf) set_value_pane_t1

0x48b2,	// (0x000330fa) slider_set_pane_cp3

0x48bb,	// (0x00033103) volume_small_pane_cp

0x48c4,	// (0x0003310c) list_form_gen_pane

0x48cd,	// (0x00033115) scroll_pane_cp8

0x979d,	// (0x00037fe5) form_field_data_pane_ParamLimits

0x979d,	// (0x00037fe5) form_field_data_pane

0x97c1,	// (0x00038009) form_field_data_wide_pane_ParamLimits

0x97c1,	// (0x00038009) form_field_data_wide_pane

0x97e4,	// (0x0003802c) form_field_popup_pane_ParamLimits

0x97e4,	// (0x0003802c) form_field_popup_pane

0x9804,	// (0x0003804c) form_field_popup_wide_pane_ParamLimits

0x9804,	// (0x0003804c) form_field_popup_wide_pane

0x9823,	// (0x0003806b) form_field_slider_pane_ParamLimits

0x9823,	// (0x0003806b) form_field_slider_pane

0x9836,	// (0x0003807e) form_field_slider_wide_pane_ParamLimits

0x9836,	// (0x0003807e) form_field_slider_wide_pane

0x48de,	// (0x00033126) data_form_pane

0x9853,	// (0x0003809b) form_field_data_pane_t1

0x48ea,	// (0x00033132) input_focus_pane

0x48f8,	// (0x00033140) data_form_wide_pane

0x9877,	// (0x000380bf) form_field_data_wide_pane_t1

0x2d1b,	// (0x00031563) input_focus_pane_cp6

0x9899,	// (0x000380e1) form_field_popup_pane_t1

0x48ea,	// (0x00033132) input_focus_pane_cp7

0x4924,	// (0x0003316c) list_form_pane

0x98b9,	// (0x00038101) form_field_popup_wide_pane_t1

0x48ea,	// (0x00033132) input_focus_pane_cp8

0x4930,	// (0x00033178) list_form_wide_pane

0x98d6,	// (0x0003811e) form_field_slider_pane_t1_ParamLimits

0x98d6,	// (0x0003811e) form_field_slider_pane_t1

0x98ec,	// (0x00038134) form_field_slider_pane_t2_ParamLimits

0x98ec,	// (0x00038134) form_field_slider_pane_t2

0x0001,

0xf69f,	// (0x0003dee7) form_field_slider_pane_t_ParamLimits

0xf69f,	// (0x0003dee7) form_field_slider_pane_t

0x211c,	// (0x00030964) input_focus_pane_cp9_ParamLimits

0x211c,	// (0x00030964) input_focus_pane_cp9

0x9901,	// (0x00038149) slider_cont_pane_ParamLimits

0x9901,	// (0x00038149) slider_cont_pane

0x493f,	// (0x00033187) form_field_slider_wide_pane_t1_ParamLimits

0x493f,	// (0x00033187) form_field_slider_wide_pane_t1

0x9915,	// (0x0003815d) form_field_slider_wide_pane_t2_ParamLimits

0x9915,	// (0x0003815d) form_field_slider_wide_pane_t2

0x0001,

0xf6a4,	// (0x0003deec) form_field_slider_wide_pane_t_ParamLimits

0xf6a4,	// (0x0003deec) form_field_slider_wide_pane_t

0x211c,	// (0x00030964) input_focus_pane_cp10_ParamLimits

0x211c,	// (0x00030964) input_focus_pane_cp10

0x9927,	// (0x0003816f) slider_cont_pane_cp1_ParamLimits

0x9927,	// (0x0003816f) slider_cont_pane_cp1

0x993b,	// (0x00038183) slider_form_pane_cp

0x4951,	// (0x00033199) input_focus_pane_g1

0x4959,	// (0x000331a1) input_focus_pane_g2

0x4961,	// (0x000331a9) input_focus_pane_g3

0x4969,	// (0x000331b1) input_focus_pane_g4

0x4971,	// (0x000331b9) input_focus_pane_g5

0x4979,	// (0x000331c1) input_focus_pane_g6

0x4981,	// (0x000331c9) input_focus_pane_g7

0x4989,	// (0x000331d1) input_focus_pane_g8

0x4991,	// (0x000331d9) input_focus_pane_g9

0x20c4,	// (0x0003090c) input_focus_pane_g10

0x0009,

0xf6a9,	// (0x0003def1) input_focus_pane_g

0x5ef9,	// (0x00034741) wait_border_pane_g3_copy1

0x9943,	// (0x0003818b) data_form_pane_t1

0x20c4,	// (0x0003090c) wait_anim_pane_g1_copy1

0x9ba5,	// (0x000383ed) data_form_wide_pane_t1

0x995e,	// (0x000381a6) list_form_graphic_pane_cp_ParamLimits

0x995e,	// (0x000381a6) list_form_graphic_pane_cp

0x6be7,	// (0x0003542f) slider_form_pane_g1

0x6bf0,	// (0x00035438) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0003e1ed) slider_form_pane_g

0x9977,	// (0x000381bf) list_form_graphic_pane_ParamLimits

0x9977,	// (0x000381bf) list_form_graphic_pane

0x9993,	// (0x000381db) list_form_graphic_pane_g1

0x999b,	// (0x000381e3) list_form_graphic_pane_t1_ParamLimits

0x999b,	// (0x000381e3) list_form_graphic_pane_t1

0x212a,	// (0x00030972) list_highlight_pane_cp5_ParamLimits

0x212a,	// (0x00030972) list_highlight_pane_cp5

0x99b0,	// (0x000381f8) find_pane_g1

0x4999,	// (0x000331e1) input_find_pane

0x99b9,	// (0x00038201) input_find_pane_g1_ParamLimits

0x99b9,	// (0x00038201) input_find_pane_g1

0x99c5,	// (0x0003820d) input_find_pane_t1_ParamLimits

0x99c5,	// (0x0003820d) input_find_pane_t1

0x99da,	// (0x00038222) input_find_pane_t2_ParamLimits

0x99da,	// (0x00038222) input_find_pane_t2

0x0001,

0xf6be,	// (0x0003df06) input_find_pane_t_ParamLimits

0xf6be,	// (0x0003df06) input_find_pane_t

0x49a2,	// (0x000331ea) input_focus_pane_cp5_ParamLimits

0x49a2,	// (0x000331ea) input_focus_pane_cp5

0xa8ab,	// (0x000390f3) bg_popup_window_pane_cp2_ParamLimits

0xa8ab,	// (0x000390f3) bg_popup_window_pane_cp2

0xa8b8,	// (0x00039100) listscroll_menu_pane_ParamLimits

0xa8b8,	// (0x00039100) listscroll_menu_pane

0xa8c4,	// (0x0003910c) popup_submenu_window_ParamLimits

0xa8c4,	// (0x0003910c) popup_submenu_window

0x49b0,	// (0x000331f8) find_popup_pane_g1

0x49b8,	// (0x00033200) input_popup_find_pane_cp

0x49a2,	// (0x000331ea) input_focus_pane_cp4_ParamLimits

0x49a2,	// (0x000331ea) input_focus_pane_cp4

0x49c2,	// (0x0003320a) input_popup_find_pane_t1_ParamLimits

0x49c2,	// (0x0003320a) input_popup_find_pane_t1

0x20ce,	// (0x00030916) bg_popup_sub_pane_cp

0x49f0,	// (0x00033238) listscroll_popup_sub_pane

0x49f8,	// (0x00033240) list_submenu_pane_ParamLimits

0x49f8,	// (0x00033240) list_submenu_pane

0x4a09,	// (0x00033251) scroll_pane_cp4

0x4a11,	// (0x00033259) list_single_popup_submenu_pane_ParamLimits

0x4a11,	// (0x00033259) list_single_popup_submenu_pane

0x4a25,	// (0x0003326d) list_single_popup_submenu_pane_g1

0x4a2d,	// (0x00033275) list_single_popup_submenu_pane_t1_ParamLimits

0x4a2d,	// (0x00033275) list_single_popup_submenu_pane_t1

0x212a,	// (0x00030972) bg_active_tab_pane_cp1_ParamLimits

0x212a,	// (0x00030972) bg_active_tab_pane_cp1

0xa8fc,	// (0x00039144) tabs_2_active_pane_g1

0xa904,	// (0x0003914c) tabs_2_active_pane_t1

0x212a,	// (0x00030972) bg_passive_tab_pane_cp1_ParamLimits

0x212a,	// (0x00030972) bg_passive_tab_pane_cp1

0xa8fc,	// (0x00039144) tabs_2_passive_pane_g1

0xa904,	// (0x0003914c) tabs_2_passive_pane_t1

0x628d,	// (0x00034ad5) bg_active_tab_pane_cp4

0xa916,	// (0x0003915e) tabs_2_long_active_pane_t1

0xa929,	// (0x00039171) bg_passive_tab_pane_cp4

0xb1f6,	// (0x00039a3e) list_single_midp_graphic_pane_g4_ParamLimits

0x628d,	// (0x00034ad5) bg_active_tab_pane_cp5

0xa935,	// (0x0003917d) tabs_3_long_active_pane_t1

0xa929,	// (0x00039171) bg_passive_tab_pane_cp5

0xb1f6,	// (0x00039a3e) list_single_midp_graphic_pane_g4

0x212a,	// (0x00030972) bg_popup_window_pane_cp13_ParamLimits

0x212a,	// (0x00030972) bg_popup_window_pane_cp13

0x4a57,	// (0x0003329f) listscroll_popup_fast_pane_ParamLimits

0x4a57,	// (0x0003329f) listscroll_popup_fast_pane

0x4a66,	// (0x000332ae) grid_popup_fast_pane_ParamLimits

0x4a66,	// (0x000332ae) grid_popup_fast_pane

0x4a78,	// (0x000332c0) scroll_pane_cp9_ParamLimits

0x4a78,	// (0x000332c0) scroll_pane_cp9

0x7ead,	// (0x000366f5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ead,	// (0x000366f5) list_single_graphic_hl_pane_t1_cp2

0x4a9c,	// (0x000332e4) input_focus_pane_cp20_ParamLimits

0x4a9c,	// (0x000332e4) input_focus_pane_cp20

0x4bdb,	// (0x00033423) query_popup_data_pane_t1_ParamLimits

0x4bdb,	// (0x00033423) query_popup_data_pane_t1

0x4bee,	// (0x00033436) query_popup_data_pane_t2_ParamLimits

0x4bee,	// (0x00033436) query_popup_data_pane_t2

0x4c34,	// (0x0003347c) query_popup_data_pane_t3_ParamLimits

0x4c34,	// (0x0003347c) query_popup_data_pane_t3

0x4c75,	// (0x000334bd) query_popup_data_pane_t4_ParamLimits

0x4c75,	// (0x000334bd) query_popup_data_pane_t4

0x4cb1,	// (0x000334f9) query_popup_data_pane_t5_ParamLimits

0x4cb1,	// (0x000334f9) query_popup_data_pane_t5

0x0004,

0xf6c3,	// (0x0003df0b) query_popup_data_pane_t_ParamLimits

0xf6c3,	// (0x0003df0b) query_popup_data_pane_t

0x4951,	// (0x00033199) bg_set_opt_pane_g1

0x4959,	// (0x000331a1) bg_set_opt_pane_g2

0x4961,	// (0x000331a9) bg_set_opt_pane_g3

0x4969,	// (0x000331b1) bg_set_opt_pane_g4

0x4971,	// (0x000331b9) bg_set_opt_pane_g5

0x4979,	// (0x000331c1) bg_set_opt_pane_g6

0x4981,	// (0x000331c9) bg_set_opt_pane_g7

0x4989,	// (0x000331d1) bg_set_opt_pane_g8

0x4991,	// (0x000331d9) bg_set_opt_pane_g9

0x0008,

0xf6ce,	// (0x0003df16) bg_set_opt_pane_g

0xad3d,	// (0x00039585) control_top_pane_stacon_ParamLimits

0xad3d,	// (0x00039585) control_top_pane_stacon

0xad90,	// (0x000395d8) signal_pane_stacon_ParamLimits

0xad90,	// (0x000395d8) signal_pane_stacon

0x5119,	// (0x00033961) stacon_top_pane_g1_ParamLimits

0x5119,	// (0x00033961) stacon_top_pane_g1

0xadb5,	// (0x000395fd) title_pane_stacon_ParamLimits

0xadb5,	// (0x000395fd) title_pane_stacon

0xaddf,	// (0x00039627) uni_indicator_pane_stacon_ParamLimits

0xaddf,	// (0x00039627) uni_indicator_pane_stacon

0xadf4,	// (0x0003963c) battery_pane_stacon_ParamLimits

0xadf4,	// (0x0003963c) battery_pane_stacon

0xae38,	// (0x00039680) control_bottom_pane_stacon_ParamLimits

0xae38,	// (0x00039680) control_bottom_pane_stacon

0xae5b,	// (0x000396a3) navi_pane_stacon_ParamLimits

0xae5b,	// (0x000396a3) navi_pane_stacon

0x513b,	// (0x00033983) stacon_bottom_pane_g1_ParamLimits

0x513b,	// (0x00033983) stacon_bottom_pane_g1

0xa947,	// (0x0003918f) aid_levels_signal_lsc_ParamLimits

0xa947,	// (0x0003918f) aid_levels_signal_lsc

0xa95e,	// (0x000391a6) signal_pane_stacon_g1_ParamLimits

0xa95e,	// (0x000391a6) signal_pane_stacon_g1

0xa972,	// (0x000391ba) signal_pane_stacon_g2_ParamLimits

0xa972,	// (0x000391ba) signal_pane_stacon_g2

0x0001,

0xf6e1,	// (0x0003df29) signal_pane_stacon_g_ParamLimits

0xf6e1,	// (0x0003df29) signal_pane_stacon_g

0xa9a7,	// (0x000391ef) title_pane_stacon_t1_ParamLimits

0xa9a7,	// (0x000391ef) title_pane_stacon_t1

0x4d09,	// (0x00033551) uni_indicator_pane_stacon_g1

0x4d13,	// (0x0003355b) uni_indicator_pane_stacon_g2

0x4cf5,	// (0x0003353d) uni_indicator_pane_stacon_g3

0x4cff,	// (0x00033547) uni_indicator_pane_stacon_g4

0x0003,

0xf6ed,	// (0x0003df35) uni_indicator_pane_stacon_g

0xa9cc,	// (0x00039214) control_top_pane_stacon_g1

0xa9d4,	// (0x0003921c) control_top_pane_stacon_t1_ParamLimits

0xa9d4,	// (0x0003921c) control_top_pane_stacon_t1

0xaa0b,	// (0x00039253) aid_levels_battery_lsc_ParamLimits

0xaa0b,	// (0x00039253) aid_levels_battery_lsc

0xaa23,	// (0x0003926b) battery_pane_stacon_g1_ParamLimits

0xaa23,	// (0x0003926b) battery_pane_stacon_g1

0xaa36,	// (0x0003927e) battery_pane_stacon_g2_ParamLimits

0xaa36,	// (0x0003927e) battery_pane_stacon_g2

0x0001,

0xf6f6,	// (0x0003df3e) battery_pane_stacon_g_ParamLimits

0xf6f6,	// (0x0003df3e) battery_pane_stacon_g

0xaa74,	// (0x000392bc) navi_icon_pane_stacon

0xaa88,	// (0x000392d0) navi_navi_pane_stacon

0xaa74,	// (0x000392bc) navi_text_pane_stacon

0xa9cc,	// (0x00039214) control_bottom_pane_stacon_g1

0xaa9c,	// (0x000392e4) control_bottom_pane_stacon_t1_ParamLimits

0xaa9c,	// (0x000392e4) control_bottom_pane_stacon_t1

0xaad3,	// (0x0003931b) grid_app_pane_ParamLimits

0xaad3,	// (0x0003931b) grid_app_pane

0xaaf7,	// (0x0003933f) scroll_pane_cp15_ParamLimits

0xaaf7,	// (0x0003933f) scroll_pane_cp15

0xab0c,	// (0x00039354) cell_app_pane_ParamLimits

0xab0c,	// (0x00039354) cell_app_pane

0xab30,	// (0x00039378) cell_app_pane_g1_ParamLimits

0xab30,	// (0x00039378) cell_app_pane_g1

0x4d37,	// (0x0003357f) cell_app_pane_g2_ParamLimits

0x4d37,	// (0x0003357f) cell_app_pane_g2

0x0001,

0xf6fb,	// (0x0003df43) cell_app_pane_g_ParamLimits

0xf6fb,	// (0x0003df43) cell_app_pane_g

0xab50,	// (0x00039398) cell_app_pane_t1_ParamLimits

0xab50,	// (0x00039398) cell_app_pane_t1

0x4d43,	// (0x0003358b) grid_highlight_pane_ParamLimits

0x4d43,	// (0x0003358b) grid_highlight_pane

0x4951,	// (0x00033199) cell_highlight_pane_g1

0x4959,	// (0x000331a1) cell_highlight_pane_g2

0x4961,	// (0x000331a9) cell_highlight_pane_g3

0x4969,	// (0x000331b1) cell_highlight_pane_g4

0x4971,	// (0x000331b9) cell_highlight_pane_g5

0x4979,	// (0x000331c1) cell_highlight_pane_g6

0x4981,	// (0x000331c9) cell_highlight_pane_g7

0x4989,	// (0x000331d1) cell_highlight_pane_g8

0x4991,	// (0x000331d9) cell_highlight_pane_g9

0x20c4,	// (0x0003090c) cell_highlight_pane_g10

0x0009,

0xf6a9,	// (0x0003def1) cell_highlight_pane_g

0x4d54,	// (0x0003359c) bg_scroll_pane

0xab7a,	// (0x000393c2) scroll_handle_pane

0x4d9b,	// (0x000335e3) scroll_bg_pane_g1

0x4db0,	// (0x000335f8) scroll_bg_pane_g2

0x4dc8,	// (0x00033610) scroll_bg_pane_g3

0x0002,

0xf700,	// (0x0003df48) scroll_bg_pane_g

0x4ddd,	// (0x00033625) scroll_handle_focus_pane_ParamLimits

0x4ddd,	// (0x00033625) scroll_handle_focus_pane

0x4d9b,	// (0x000335e3) scroll_handle_pane_g1

0x4dea,	// (0x00033632) scroll_handle_pane_g2

0x4dc8,	// (0x00033610) scroll_handle_pane_g3

0x0002,

0xf707,	// (0x0003df4f) scroll_handle_pane_g

0x49a2,	// (0x000331ea) bg_popup_sub_pane_cp21_ParamLimits

0x49a2,	// (0x000331ea) bg_popup_sub_pane_cp21

0x4dfe,	// (0x00033646) popup_fep_japan_predictive_window_t1_ParamLimits

0x4dfe,	// (0x00033646) popup_fep_japan_predictive_window_t1

0x4e18,	// (0x00033660) popup_fep_japan_predictive_window_t2_ParamLimits

0x4e18,	// (0x00033660) popup_fep_japan_predictive_window_t2

0x4e4b,	// (0x00033693) popup_fep_japan_predictive_window_t3_ParamLimits

0x4e4b,	// (0x00033693) popup_fep_japan_predictive_window_t3

0x0002,

0xf70e,	// (0x0003df56) popup_fep_japan_predictive_window_t_ParamLimits

0xf70e,	// (0x0003df56) popup_fep_japan_predictive_window_t

0x20ce,	// (0x00030916) bg_popup_sub_pane_cp23

0x4e82,	// (0x000336ca) listscroll_japin_cand_pane

0x4e8a,	// (0x000336d2) popup_fep_japan_candidate_window_t1

0x4e98,	// (0x000336e0) candidate_pane_ParamLimits

0x4e98,	// (0x000336e0) candidate_pane

0x4eaa,	// (0x000336f2) scroll_pane_cp30

0x4eb2,	// (0x000336fa) list_single_popup_jap_candidate_pane_ParamLimits

0x4eb2,	// (0x000336fa) list_single_popup_jap_candidate_pane

0x20ce,	// (0x00030916) list_highlight_pane_cp30

0x4ec7,	// (0x0003370f) list_single_popup_jap_candidate_pane_t1

0x4ed6,	// (0x0003371e) level_1_signal

0x4ee3,	// (0x0003372b) level_2_signal

0x4ef0,	// (0x00033738) level_3_signal

0x4efd,	// (0x00033745) level_4_signal

0x4f0a,	// (0x00033752) level_5_signal

0x4f17,	// (0x0003375f) level_6_signal

0x4f24,	// (0x0003376c) level_7_signal

0x4ed6,	// (0x0003371e) level_1_battery

0x4ee3,	// (0x0003372b) level_2_battery

0x4ef0,	// (0x00033738) level_3_battery

0x4efd,	// (0x00033745) level_4_battery

0x4f0a,	// (0x00033752) level_5_battery

0x4f17,	// (0x0003375f) level_6_battery

0x4f24,	// (0x0003376c) level_7_battery

0x4f49,	// (0x00033791) list_menu_pane_ParamLimits

0x4f49,	// (0x00033791) list_menu_pane

0x4f5f,	// (0x000337a7) scroll_pane_cp25_ParamLimits

0x4f5f,	// (0x000337a7) scroll_pane_cp25

0x4f78,	// (0x000337c0) list_double2_graphic_pane_cp2_ParamLimits

0x4f78,	// (0x000337c0) list_double2_graphic_pane_cp2

0x4f78,	// (0x000337c0) list_double2_large_graphic_pane_cp2_ParamLimits

0x4f78,	// (0x000337c0) list_double2_large_graphic_pane_cp2

0x4f78,	// (0x000337c0) list_double2_pane_cp2_ParamLimits

0x4f78,	// (0x000337c0) list_double2_pane_cp2

0x4f78,	// (0x000337c0) list_double_graphic_pane_cp2_ParamLimits

0x4f78,	// (0x000337c0) list_double_graphic_pane_cp2

0x4f78,	// (0x000337c0) list_double_large_graphic_pane_cp2_ParamLimits

0x4f78,	// (0x000337c0) list_double_large_graphic_pane_cp2

0x4f78,	// (0x000337c0) list_double_number_pane_cp2_ParamLimits

0x4f78,	// (0x000337c0) list_double_number_pane_cp2

0x4f78,	// (0x000337c0) list_double_pane_cp2_ParamLimits

0x4f78,	// (0x000337c0) list_double_pane_cp2

0xabd6,	// (0x0003941e) list_single_2graphic_pane_cp2_ParamLimits

0xabd6,	// (0x0003941e) list_single_2graphic_pane_cp2

0xabd6,	// (0x0003941e) list_single_graphic_heading_pane_cp2_ParamLimits

0xabd6,	// (0x0003941e) list_single_graphic_heading_pane_cp2

0xabd6,	// (0x0003941e) list_single_graphic_pane_cp2_ParamLimits

0xabd6,	// (0x0003941e) list_single_graphic_pane_cp2

0xabd6,	// (0x0003941e) list_single_heading_pane_cp2_ParamLimits

0xabd6,	// (0x0003941e) list_single_heading_pane_cp2

0x4f88,	// (0x000337d0) list_single_large_graphic_pane_cp2_ParamLimits

0x4f88,	// (0x000337d0) list_single_large_graphic_pane_cp2

0xabd6,	// (0x0003941e) list_single_number_heading_pane_cp2_ParamLimits

0xabd6,	// (0x0003941e) list_single_number_heading_pane_cp2

0xabd6,	// (0x0003941e) list_single_number_pane_cp2_ParamLimits

0xabd6,	// (0x0003941e) list_single_number_pane_cp2

0xabd6,	// (0x0003941e) list_single_pane_cp2_ParamLimits

0xabd6,	// (0x0003941e) list_single_pane_cp2

0x4fa2,	// (0x000337ea) bg_popup_sub_pane_cp22

0xacb5,	// (0x000394fd) popup_side_volume_key_window_g1

0xacdf,	// (0x00039527) popup_side_volume_key_window_t1

0xacfb,	// (0x00039543) volume_small_pane_cp1

0x211c,	// (0x00030964) bg_popup_sub_pane_cp24_ParamLimits

0x211c,	// (0x00030964) bg_popup_sub_pane_cp24

0x4fb8,	// (0x00033800) fep_china_uni_candidate_pane_ParamLimits

0x4fb8,	// (0x00033800) fep_china_uni_candidate_pane

0x4fcc,	// (0x00033814) fep_china_uni_entry_pane

0x4fdc,	// (0x00033824) popup_fep_china_uni_window_g1

0x4ff8,	// (0x00033840) fep_china_uni_entry_pane_g1

0x5000,	// (0x00033848) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0003df87) fep_china_uni_entry_pane_g

0x5008,	// (0x00033850) fep_entry_item_pane

0x5012,	// (0x0003385a) fep_candidate_item_pane

0x501a,	// (0x00033862) fep_china_uni_candidate_pane_g1

0x5022,	// (0x0003386a) fep_china_uni_candidate_pane_g2

0x502a,	// (0x00033872) fep_china_uni_candidate_pane_g3

0x5032,	// (0x0003387a) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0003df8c) fep_china_uni_candidate_pane_g

0x20c4,	// (0x0003090c) fep_entry_item_pane_g1

0x503a,	// (0x00033882) fep_entry_item_pane_t1_ParamLimits

0x503a,	// (0x00033882) fep_entry_item_pane_t1

0x5050,	// (0x00033898) fep_candidate_item_pane_t1_ParamLimits

0x5050,	// (0x00033898) fep_candidate_item_pane_t1

0x5065,	// (0x000338ad) fep_candidate_item_pane_t2_ParamLimits

0x5065,	// (0x000338ad) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0003df95) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0003df95) fep_candidate_item_pane_t

0x212a,	// (0x00030972) list_highlight_pane_cp31_ParamLimits

0x212a,	// (0x00030972) list_highlight_pane_cp31

0x5077,	// (0x000338bf) level_1_signal_lsc

0x5080,	// (0x000338c8) level_2_signal_lsc

0x5089,	// (0x000338d1) level_3_signal_lsc

0x5092,	// (0x000338da) level_4_signal_lsc

0x509b,	// (0x000338e3) level_5_signal_lsc

0x50a4,	// (0x000338ec) level_6_signal_lsc

0x50ad,	// (0x000338f5) level_7_signal_lsc

0x50ad,	// (0x000338f5) level_1_battery_lsc

0x50b6,	// (0x000338fe) level_2_battery_lsc

0x50bf,	// (0x00033907) level_3_battery_lsc

0x50c8,	// (0x00033910) level_4_battery_lsc

0x50d1,	// (0x00033919) level_5_battery_lsc

0x50da,	// (0x00033922) level_6_battery_lsc

0x5077,	// (0x000338bf) level_7_battery_lsc

0x50e3,	// (0x0003392b) scroll_handle_focus_pane_g1

0x50ec,	// (0x00033934) scroll_handle_focus_pane_g2

0x50f5,	// (0x0003393d) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0003df9a) scroll_handle_focus_pane_g

0x99ef,	// (0x00038237) list_single_2graphic_pane_g1_ParamLimits

0x99ef,	// (0x00038237) list_single_2graphic_pane_g1

0xa84d,	// (0x00039095) list_single_2graphic_pane_g2_ParamLimits

0xa84d,	// (0x00039095) list_single_2graphic_pane_g2

0xa82f,	// (0x00039077) list_single_2graphic_pane_g3_ParamLimits

0xa82f,	// (0x00039077) list_single_2graphic_pane_g3

0x99fb,	// (0x00038243) list_single_2graphic_pane_g4_ParamLimits

0x99fb,	// (0x00038243) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0003dfa1) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0003dfa1) list_single_2graphic_pane_g

0x9a07,	// (0x0003824f) list_single_2graphic_pane_t1_ParamLimits

0x9a07,	// (0x0003824f) list_single_2graphic_pane_t1

0x9a35,	// (0x0003827d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9a35,	// (0x0003827d) list_double2_graphic_large_graphic_pane_g1

0x957f,	// (0x00037dc7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x957f,	// (0x00037dc7) list_double2_graphic_large_graphic_pane_g2

0x94c4,	// (0x00037d0c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x94c4,	// (0x00037d0c) list_double2_graphic_large_graphic_pane_g3

0x9a45,	// (0x0003828d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9a45,	// (0x0003828d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0003dfaa) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0003dfaa) list_double2_graphic_large_graphic_pane_g

0x9a51,	// (0x00038299) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9a51,	// (0x00038299) list_double2_graphic_large_graphic_pane_t1

0x9a67,	// (0x000382af) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9a67,	// (0x000382af) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0003dfb3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0003dfb3) list_double2_graphic_large_graphic_pane_t

0x51b6,	// (0x000339fe) popup_fast_swap_window_ParamLimits

0x51b6,	// (0x000339fe) popup_fast_swap_window

0x51d2,	// (0x00033a1a) popup_side_volume_key_window

0x51ee,	// (0x00033a36) stacon_top_pane

0x51f8,	// (0x00033a40) status_pane_ParamLimits

0x51f8,	// (0x00033a40) status_pane

0x51ee,	// (0x00033a36) status_small_pane

0x20ce,	// (0x00030916) control_pane

0x20ce,	// (0x00030916) stacon_bottom_pane

0x48cd,	// (0x00033115) scroll_pane_cp121

0x48c4,	// (0x0003310c) set_content_pane

0xad03,	// (0x0003954b) bg_active_tab_pane_g1_cp1

0x5107,	// (0x0003394f) bg_active_tab_pane_g2_cp1

0xad0c,	// (0x00039554) bg_active_tab_pane_g3_cp1

0xad03,	// (0x0003954b) bg_passive_tab_pane_g1_cp1

0x5107,	// (0x0003394f) bg_passive_tab_pane_g2_cp1

0xad0c,	// (0x00039554) bg_passive_tab_pane_g3_cp1

0x5110,	// (0x00033958) bg_active_tab_pane_g1_cp2

0x5107,	// (0x0003394f) bg_active_tab_pane_g2_cp2

0x50fe,	// (0x00033946) bg_active_tab_pane_g3_cp2

0x5110,	// (0x00033958) bg_passive_tab_pane_g1_cp2

0x5107,	// (0x0003394f) bg_passive_tab_pane_g2_cp2

0x50fe,	// (0x00033946) bg_passive_tab_pane_g3_cp2

0xad15,	// (0x0003955d) bg_active_tab_pane_g1_cp3

0x5107,	// (0x0003394f) bg_active_tab_pane_g2_cp3

0xad1e,	// (0x00039566) bg_active_tab_pane_g3_cp3

0xad15,	// (0x0003955d) bg_passive_tab_pane_g1_cp3

0x5107,	// (0x0003394f) bg_passive_tab_pane_g2_cp3

0xad1e,	// (0x00039566) bg_passive_tab_pane_g3_cp3

0xad27,	// (0x0003956f) bg_active_tab_pane_g1_cp4

0x5107,	// (0x0003394f) bg_active_tab_pane_g2_cp4

0xad32,	// (0x0003957a) bg_active_tab_pane_g3_cp4

0xad27,	// (0x0003956f) bg_passive_tab_pane_g1_cp4

0x5107,	// (0x0003394f) bg_passive_tab_pane_g2_cp4

0xad32,	// (0x0003957a) bg_passive_tab_pane_g3_cp4

0x5160,	// (0x000339a8) bg_active_tab_pane_g1_cp5

0x5107,	// (0x0003394f) bg_active_tab_pane_g2_cp5

0x5157,	// (0x0003399f) bg_active_tab_pane_g3_cp5

0x5160,	// (0x000339a8) bg_passive_tab_pane_g1_cp5

0x5107,	// (0x0003394f) bg_passive_tab_pane_g2_cp5

0x5157,	// (0x0003399f) bg_passive_tab_pane_g3_cp5

0xae7e,	// (0x000396c6) list_set_graphic_pane_ParamLimits

0xae7e,	// (0x000396c6) list_set_graphic_pane

0x20ce,	// (0x00030916) bg_set_opt_pane_cp4

0xae9b,	// (0x000396e3) list_set_graphic_pane_g1_ParamLimits

0xae9b,	// (0x000396e3) list_set_graphic_pane_g1

0xaea7,	// (0x000396ef) list_set_graphic_pane_g2_ParamLimits

0xaea7,	// (0x000396ef) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0003dfb8) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0003dfb8) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0003e31b) volume_small_pane_cp_g

0x5169,	// (0x000339b1) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5169,	// (0x000339b1) list_double2_large_graphic_pane_g1_cp2

0x5175,	// (0x000339bd) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5175,	// (0x000339bd) list_double2_large_graphic_pane_g2_cp2

0x5186,	// (0x000339ce) list_double2_large_graphic_pane_g3_cp2

0x518e,	// (0x000339d6) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x518e,	// (0x000339d6) list_double2_large_graphic_pane_t1_cp2

0x51a4,	// (0x000339ec) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x51a4,	// (0x000339ec) list_double2_large_graphic_pane_t2_cp2

0x6952,	// (0x0003519a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6952,	// (0x0003519a) list_double_large_graphic_pane_g1_cp2

0x6963,	// (0x000351ab) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6963,	// (0x000351ab) list_double_large_graphic_pane_g2_cp2

0x5314,	// (0x00033b5c) list_double_large_graphic_pane_g3_cp2

0x6974,	// (0x000351bc) list_double_large_graphic_pane_g4_cp

0x697c,	// (0x000351c4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x697c,	// (0x000351c4) list_double_large_graphic_pane_t1_cp2

0x6993,	// (0x000351db) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6993,	// (0x000351db) list_double_large_graphic_pane_t2_cp2

0x5206,	// (0x00033a4e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5206,	// (0x00033a4e) list_double2_graphic_pane_g1_cp2

0x5214,	// (0x00033a5c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5214,	// (0x00033a5c) list_double2_graphic_pane_g2_cp2

0x5225,	// (0x00033a6d) list_double2_graphic_pane_g3_cp2

0x522f,	// (0x00033a77) list_double2_graphic_pane_t1_cp2_ParamLimits

0x522f,	// (0x00033a77) list_double2_graphic_pane_t1_cp2

0x5245,	// (0x00033a8d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5245,	// (0x00033a8d) list_double2_graphic_pane_t2_cp2

0x5257,	// (0x00033a9f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5257,	// (0x00033a9f) list_single_number_heading_pane_g1_cp2

0x5263,	// (0x00033aab) list_single_number_heading_pane_g2_cp2

0x526b,	// (0x00033ab3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x526b,	// (0x00033ab3) list_single_number_heading_pane_t1_cp2

0x5281,	// (0x00033ac9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5281,	// (0x00033ac9) list_single_number_heading_pane_t2_cp2

0x5293,	// (0x00033adb) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5293,	// (0x00033adb) list_single_number_heading_pane_t3_cp2

0x5257,	// (0x00033a9f) list_single_heading_pane_g1_cp2_ParamLimits

0x5257,	// (0x00033a9f) list_single_heading_pane_g1_cp2

0x5263,	// (0x00033aab) list_single_heading_pane_g2_cp2

0x526b,	// (0x00033ab3) list_single_heading_pane_t1_cp2_ParamLimits

0x526b,	// (0x00033ab3) list_single_heading_pane_t1_cp2

0x675a,	// (0x00034fa2) list_single_heading_pane_t2_cp2_ParamLimits

0x675a,	// (0x00034fa2) list_single_heading_pane_t2_cp2

0x66a2,	// (0x00034eea) list_double_graphic_pane_g1_cp2_ParamLimits

0x66a2,	// (0x00034eea) list_double_graphic_pane_g1_cp2

0x66ae,	// (0x00034ef6) list_double_graphic_pane_g2_cp2_ParamLimits

0x66ae,	// (0x00034ef6) list_double_graphic_pane_g2_cp2

0x66bd,	// (0x00034f05) list_double_graphic_pane_g3_cp2

0x66c5,	// (0x00034f0d) list_double_graphic_pane_t1_cp2_ParamLimits

0x66c5,	// (0x00034f0d) list_double_graphic_pane_t1_cp2

0x66db,	// (0x00034f23) list_double_graphic_pane_t2_cp2_ParamLimits

0x66db,	// (0x00034f23) list_double_graphic_pane_t2_cp2

0x5308,	// (0x00033b50) list_double_number_pane_g1_cp2_ParamLimits

0x5308,	// (0x00033b50) list_double_number_pane_g1_cp2

0x5314,	// (0x00033b5c) list_double_number_pane_g2_cp2

0x6666,	// (0x00034eae) list_double_number_pane_t1_cp2_ParamLimits

0x6666,	// (0x00034eae) list_double_number_pane_t1_cp2

0x667a,	// (0x00034ec2) list_double_number_pane_t2_cp2_ParamLimits

0x667a,	// (0x00034ec2) list_double_number_pane_t2_cp2

0x6690,	// (0x00034ed8) list_double_number_pane_t3_cp2_ParamLimits

0x6690,	// (0x00034ed8) list_double_number_pane_t3_cp2

0x65dd,	// (0x00034e25) list_single_graphic_pane_g1_cp2_ParamLimits

0x65dd,	// (0x00034e25) list_single_graphic_pane_g1_cp2

0x536c,	// (0x00033bb4) list_single_graphic_pane_g2_cp2_ParamLimits

0x536c,	// (0x00033bb4) list_single_graphic_pane_g2_cp2

0x5378,	// (0x00033bc0) list_single_graphic_pane_g3_cp2

0x65b3,	// (0x00034dfb) list_single_graphic_pane_t1_cp2_ParamLimits

0x65b3,	// (0x00034dfb) list_single_graphic_pane_t1_cp2

0x536c,	// (0x00033bb4) list_single_number_pane_g1_cp2_ParamLimits

0x536c,	// (0x00033bb4) list_single_number_pane_g1_cp2

0x5378,	// (0x00033bc0) list_single_number_pane_g2_cp2

0x65b3,	// (0x00034dfb) list_single_number_pane_t1_cp2_ParamLimits

0x65b3,	// (0x00034dfb) list_single_number_pane_t1_cp2

0x65c9,	// (0x00034e11) list_single_number_pane_t2_cp2_ParamLimits

0x65c9,	// (0x00034e11) list_single_number_pane_t2_cp2

0x5175,	// (0x000339bd) list_double2_pane_g1_cp2_ParamLimits

0x5175,	// (0x000339bd) list_double2_pane_g1_cp2

0x5186,	// (0x000339ce) list_double2_pane_g2_cp2

0x52e0,	// (0x00033b28) list_double2_pane_t1_cp2_ParamLimits

0x52e0,	// (0x00033b28) list_double2_pane_t1_cp2

0x52f6,	// (0x00033b3e) list_double2_pane_t2_cp2_ParamLimits

0x52f6,	// (0x00033b3e) list_double2_pane_t2_cp2

0x5308,	// (0x00033b50) list_double_pane_g1_cp2_ParamLimits

0x5308,	// (0x00033b50) list_double_pane_g1_cp2

0x5314,	// (0x00033b5c) list_double_pane_g2_cp2

0x531c,	// (0x00033b64) list_double_pane_t1_cp2_ParamLimits

0x531c,	// (0x00033b64) list_double_pane_t1_cp2

0x5332,	// (0x00033b7a) list_double_pane_t2_cp2_ParamLimits

0x5332,	// (0x00033b7a) list_double_pane_t2_cp2

0x535c,	// (0x00033ba4) list_single_pane_cp2_g3

0x536c,	// (0x00033bb4) list_single_pane_g1_cp2_ParamLimits

0x536c,	// (0x00033bb4) list_single_pane_g1_cp2

0x5378,	// (0x00033bc0) list_single_pane_g2_cp2

0x5380,	// (0x00033bc8) list_single_pane_t1_cp2_ParamLimits

0x5380,	// (0x00033bc8) list_single_pane_t1_cp2

0x5398,	// (0x00033be0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5398,	// (0x00033be0) list_single_large_graphic_pane_g1_cp2

0x53a4,	// (0x00033bec) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x53a4,	// (0x00033bec) list_single_large_graphic_pane_g2_cp2

0x53b0,	// (0x00033bf8) list_single_large_graphic_pane_g3_cp2

0x53b8,	// (0x00033c00) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x53b8,	// (0x00033c00) list_single_large_graphic_pane_g4_cp1

0x53d2,	// (0x00033c1a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x53d2,	// (0x00033c1a) list_single_large_graphic_pane_t1_cp2

0x657f,	// (0x00034dc7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x657f,	// (0x00034dc7) list_single_graphic_heading_pane_g1_cp2

0x654c,	// (0x00034d94) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x654c,	// (0x00034d94) list_single_graphic_heading_pane_g4_cp2

0x5378,	// (0x00033bc0) list_single_graphic_heading_pane_g5_cp2

0x658b,	// (0x00034dd3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x658b,	// (0x00034dd3) list_single_graphic_heading_pane_t1_cp2

0x65a1,	// (0x00034de9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x65a1,	// (0x00034de9) list_single_graphic_heading_pane_t2_cp2

0x6540,	// (0x00034d88) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6540,	// (0x00034d88) list_single_2graphic_pane_g1_cp2

0x654c,	// (0x00034d94) list_single_2graphic_pane_g2_cp2_ParamLimits

0x654c,	// (0x00034d94) list_single_2graphic_pane_g2_cp2

0x5378,	// (0x00033bc0) list_single_2graphic_pane_g3_cp2

0x655d,	// (0x00034da5) list_single_2graphic_pane_g4_cp2_ParamLimits

0x655d,	// (0x00034da5) list_single_2graphic_pane_g4_cp2

0x6569,	// (0x00034db1) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6569,	// (0x00034db1) list_single_2graphic_pane_t1_cp2

0x20c4,	// (0x0003090c) list_highlight_pane_g10_cp1

0x6106,	// (0x0003494e) list_highlight_pane_g1_cp1

0x610e,	// (0x00034956) list_highlight_pane_g2_cp1

0x6116,	// (0x0003495e) list_highlight_pane_g3_cp1

0x611e,	// (0x00034966) list_highlight_pane_g4_cp1

0x6126,	// (0x0003496e) list_highlight_pane_g5_cp1

0x612e,	// (0x00034976) list_highlight_pane_g6_cp1

0x6136,	// (0x0003497e) list_highlight_pane_g7_cp1

0x613e,	// (0x00034986) list_highlight_pane_g8_cp1

0x6146,	// (0x0003498e) list_highlight_pane_g9_cp1

0xd1b0,	// (0x0003b9f8) form_field_slider_pane_t3

0xd1be,	// (0x0003ba06) form_field_slider_pane_t4

0x6042,	// (0x0003488a) slider_form_pane_ParamLimits

0x6042,	// (0x0003488a) slider_form_pane

0x20ce,	// (0x00030916) control_abbreviations

0x20ce,	// (0x00030916) control_conventions

0x20ce,	// (0x00030916) control_definitions

0x20ce,	// (0x00030916) format_table_attribute

0x67a4,	// (0x00034fec) bg_popup_preview_window_pane_g9

0x20ce,	// (0x00030916) format_table_data2

0x20ce,	// (0x00030916) format_table_data3

0x20ce,	// (0x00030916) format_table_data_example

0x0008,

0x20ce,	// (0x00030916) intro_purpose

0xf905,	// (0x0003e14d) bg_popup_preview_window_pane_g

0x20ce,	// (0x00030916) texts_category

0x20ce,	// (0x00030916) texts_graphics

0x53e8,	// (0x00033c30) text_digital

0x53f7,	// (0x00033c3f) text_primary

0x5406,	// (0x00033c4e) text_primary_small

0x5415,	// (0x00033c5d) text_secondary

0x5424,	// (0x00033c6c) text_title

0x6c92,	// (0x000354da) bg_passive_tab_pane_g1_cp3_srt

0x5107,	// (0x0003394f) bg_passive_tab_pane_g2_cp3_srt

0x6c89,	// (0x000354d1) bg_passive_tab_pane_g3_cp3_srt

0x212a,	// (0x00030972) bg_active_tab_pane_cp3_srt_ParamLimits

0x212a,	// (0x00030972) bg_active_tab_pane_cp3_srt

0x6c9b,	// (0x000354e3) tabs_4_active_pane_srt_g1

0xd497,	// (0x0003bcdf) tabs_4_active_pane_srt_t1_ParamLimits

0xd497,	// (0x0003bcdf) tabs_4_active_pane_srt_t1

0x6c92,	// (0x000354da) bg_active_tab_pane_g1_cp3_copy1

0x5107,	// (0x0003394f) bg_active_tab_pane_g2_cp3_copy1

0x6c89,	// (0x000354d1) bg_active_tab_pane_g3_cp3_copy1

0x212a,	// (0x00030972) tabs_2_long_active_pane_srt_ParamLimits

0x212a,	// (0x00030972) tabs_2_long_active_pane_srt

0x212a,	// (0x00030972) tabs_2_long_passive_pane_srt_ParamLimits

0x212a,	// (0x00030972) tabs_2_long_passive_pane_srt

0xa929,	// (0x00039171) bg_passive_tab_pane_cp4_srt_ParamLimits

0xa929,	// (0x00039171) bg_passive_tab_pane_cp4_srt

0x6ba3,	// (0x000353eb) bg_passive_tab_pane_g1_cp4_srt

0x5107,	// (0x0003394f) bg_passive_tab_pane_g2_cp4_srt

0x6b9a,	// (0x000353e2) bg_passive_tab_pane_g3_cp4_srt

0x628d,	// (0x00034ad5) bg_active_tab_pane_cp4_srt_ParamLimits

0x628d,	// (0x00034ad5) bg_active_tab_pane_cp4_srt

0xd2c6,	// (0x0003bb0e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd2c6,	// (0x0003bb0e) tabs_2_long_active_pane_srt_t1

0x6ba3,	// (0x000353eb) bg_active_tab_pane_g1_cp4_srt

0x5107,	// (0x0003394f) bg_active_tab_pane_g2_cp4_srt

0x6b9a,	// (0x000353e2) bg_active_tab_pane_g3_cp4_srt

0x211c,	// (0x00030964) tabs_3_long_active_pane_srt_ParamLimits

0x211c,	// (0x00030964) tabs_3_long_active_pane_srt

0x211c,	// (0x00030964) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x211c,	// (0x00030964) tabs_3_long_passive_pane_cp_srt

0x211c,	// (0x00030964) tabs_3_long_passive_pane_srt_ParamLimits

0x211c,	// (0x00030964) tabs_3_long_passive_pane_srt

0xa929,	// (0x00039171) bg_passive_tab_pane_cp5_srt_ParamLimits

0xa929,	// (0x00039171) bg_passive_tab_pane_cp5_srt

0x5160,	// (0x000339a8) bg_passive_tab_pane_g1_cp5_srt

0x5107,	// (0x0003394f) bg_passive_tab_pane_g2_cp5_srt

0x5157,	// (0x0003399f) bg_passive_tab_pane_g3_cp5_srt

0x628d,	// (0x00034ad5) bg_active_tab_pane_cp5_srt_ParamLimits

0x628d,	// (0x00034ad5) bg_active_tab_pane_cp5_srt

0xd2b4,	// (0x0003bafc) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd2b4,	// (0x0003bafc) tabs_3_long_active_pane_srt_t1

0x5160,	// (0x000339a8) bg_active_tab_pane_g1_cp5_srt

0x5107,	// (0x0003394f) bg_active_tab_pane_g2_cp5_srt

0x5157,	// (0x0003399f) bg_active_tab_pane_g3_cp5_srt

0x6b8c,	// (0x000353d4) navi_text_pane_srt_t1

0x6b84,	// (0x000353cc) navi_icon_pane_srt_g1

0x553c,	// (0x00033d84) midp_editing_number_pane_srt

0x5433,	// (0x00033c7b) midp_ticker_pane_srt

0x5544,	// (0x00033d8c) midp_ticker_pane_srt_g1

0x554c,	// (0x00033d94) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0003dfd7) midp_ticker_pane_srt_g

0x5554,	// (0x00033d9c) midp_ticker_pane_srt_t1

0x6b75,	// (0x000353bd) midp_editing_number_pane_t1_copy1

0xa929,	// (0x00039171) listscroll_midp_pane

0xa929,	// (0x00039171) midp_form_pane

0x543b,	// (0x00033c83) midp_info_popup_window_ParamLimits

0x543b,	// (0x00033c83) midp_info_popup_window

0x49a2,	// (0x000331ea) bg_popup_sub_pane_cp50_ParamLimits

0x49a2,	// (0x000331ea) bg_popup_sub_pane_cp50

0x5d3c,	// (0x00034584) listscroll_midp_info_pane_ParamLimits

0x5d3c,	// (0x00034584) listscroll_midp_info_pane

0x5d24,	// (0x0003456c) listscroll_form_midp_pane_ParamLimits

0x5d24,	// (0x0003456c) listscroll_form_midp_pane

0x5d30,	// (0x00034578) scroll_bar_cp050

0xd198,	// (0x0003b9e0) list_midp_pane

0x7539,	// (0x00035d81) signal_pane_g2_cp

0x5c56,	// (0x0003449e) listscroll_midp_info_pane_t1_ParamLimits

0x5c56,	// (0x0003449e) listscroll_midp_info_pane_t1

0x5c6e,	// (0x000344b6) listscroll_midp_info_pane_t2_ParamLimits

0x5c6e,	// (0x000344b6) listscroll_midp_info_pane_t2

0x5cac,	// (0x000344f4) listscroll_midp_info_pane_t3_ParamLimits

0x5cac,	// (0x000344f4) listscroll_midp_info_pane_t3

0x5ce6,	// (0x0003452e) listscroll_midp_info_pane_t4_ParamLimits

0x5ce6,	// (0x0003452e) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0003e088) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0003e088) listscroll_midp_info_pane_t

0x4a09,	// (0x00033251) scroll_pane_cp21

0x5be8,	// (0x00034430) form_midp_field_choice_group_pane

0x5bf1,	// (0x00034439) form_midp_field_text_pane

0x5c3c,	// (0x00034484) form_midp_field_time_pane

0x5c44,	// (0x0003448c) form_midp_gauge_slider_pane

0x5c4d,	// (0x00034495) form_midp_gauge_wait_pane

0x20ce,	// (0x00030916) form_midp_image_pane

0x9b52,	// (0x0003839a) list_single_midp_pane_ParamLimits

0x9b52,	// (0x0003839a) list_single_midp_pane

0xd161,	// (0x0003b9a9) form_midp_field_text_pane_t1

0x5a8f,	// (0x000342d7) input_focus_pane_cp050

0x5bd7,	// (0x0003441f) list_midp_form_text_pane

0x5ba6,	// (0x000343ee) form_midp_field_choice_group_pane_t1

0x5bb4,	// (0x000343fc) input_focus_pane_cp051

0x5bc8,	// (0x00034410) list_midp_choice_pane

0x20ce,	// (0x00030916) status_idle_pane

0x5b8a,	// (0x000343d2) form_midp_field_time_pane_t1

0x20c4,	// (0x0003090c) wait_anim_pane_g2_copy1

0x5b98,	// (0x000343e0) form_midp_field_time_pane_t2

0x0001,

0x54a6,	// (0x00033cee) aid_navinavi_width_2_pane

0xf83b,	// (0x0003e083) form_midp_field_time_pane_t

0x20ce,	// (0x00030916) input_focus_pane_cp052

0x20ce,	// (0x00030916) bg_input_focus_pane_cp040

0x5b66,	// (0x000343ae) form_midp_gauge_slider_pane_t1

0x5b74,	// (0x000343bc) form_midp_gauge_slider_pane_t2

0xd145,	// (0x0003b98d) form_midp_gauge_slider_pane_t3

0xd153,	// (0x0003b99b) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0003e07a) form_midp_gauge_slider_pane_t

0x5b82,	// (0x000343ca) form_midp_slider_pane

0x212a,	// (0x00030972) bg_input_focus_pane_cp041_ParamLimits

0x212a,	// (0x00030972) bg_input_focus_pane_cp041

0x5b33,	// (0x0003437b) form_midp_gauge_wait_pane_t1_ParamLimits

0x5b33,	// (0x0003437b) form_midp_gauge_wait_pane_t1

0x5b45,	// (0x0003438d) form_midp_gauge_wait_pane_t2_ParamLimits

0x5b45,	// (0x0003438d) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0003e075) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0003e075) form_midp_gauge_wait_pane_t

0x5b57,	// (0x0003439f) form_midp_wait_pane_ParamLimits

0x5b57,	// (0x0003439f) form_midp_wait_pane

0x5afd,	// (0x00034345) form_midp_image_pane_g1

0x5b06,	// (0x0003434e) form_midp_image_pane_t1

0x5b15,	// (0x0003435d) form_midp_image_pane_t2

0x5b24,	// (0x0003436c) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0003e06e) form_midp_image_pane_t

0x5af4,	// (0x0003433c) list_single_midp_pane_g1

0x9b43,	// (0x0003838b) list_single_midp_pane_t1

0xd11d,	// (0x0003b965) list_midp_form_item_pane_ParamLimits

0xd11d,	// (0x0003b965) list_midp_form_item_pane

0x544e,	// (0x00033c96) list_midp_form_item_pane_t1

0x545d,	// (0x00033ca5) midp_ticker_pane_g1

0x5469,	// (0x00033cb1) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0003dfbd) midp_ticker_pane_g

0x5475,	// (0x00033cbd) midp_ticker_pane_t1

0x6c2b,	// (0x00035473) midp_editing_number_pane_t1

0x6c09,	// (0x00035451) midp_editing_number_pane

0x6c18,	// (0x00035460) midp_ticker_pane

0x6b65,	// (0x000353ad) ai_message_heading_pane

0x20ce,	// (0x00030916) bg_popup_window_pane_cp14

0x6b6d,	// (0x000353b5) listscroll_ai_message_pane

0x6aef,	// (0x00035337) ai_message_heading_pane_g1_ParamLimits

0x6aef,	// (0x00035337) ai_message_heading_pane_g1

0x6afb,	// (0x00035343) ai_message_heading_pane_g2_ParamLimits

0x6afb,	// (0x00035343) ai_message_heading_pane_g2

0x6b07,	// (0x0003534f) ai_message_heading_pane_g3_ParamLimits

0x6b07,	// (0x0003534f) ai_message_heading_pane_g3

0x6b13,	// (0x0003535b) ai_message_heading_pane_g4_ParamLimits

0x6b13,	// (0x0003535b) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0003e1af) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0003e1af) ai_message_heading_pane_g

0x6b1f,	// (0x00035367) ai_message_heading_pane_t1_ParamLimits

0x6b1f,	// (0x00035367) ai_message_heading_pane_t1

0x6b39,	// (0x00035381) ai_message_heading_pane_t2_ParamLimits

0x6b39,	// (0x00035381) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0003e1b8) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0003e1b8) ai_message_heading_pane_t

0x6b4b,	// (0x00035393) bg_popup_heading_pane_cp1_ParamLimits

0x6b4b,	// (0x00035393) bg_popup_heading_pane_cp1

0x6add,	// (0x00035325) list_ai_message_pane_ParamLimits

0x6add,	// (0x00035325) list_ai_message_pane

0x4a09,	// (0x00033251) scroll_pane_cp10

0x6a79,	// (0x000352c1) list_ai_message_pane_g1

0x6a81,	// (0x000352c9) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0003e18c) list_ai_message_pane_g

0x6a89,	// (0x000352d1) list_ai_message_pane_t1_ParamLimits

0x6a89,	// (0x000352d1) list_ai_message_pane_t1

0x6a9e,	// (0x000352e6) list_ai_message_pane_t2_ParamLimits

0x6a9e,	// (0x000352e6) list_ai_message_pane_t2

0x6ab3,	// (0x000352fb) list_ai_message_pane_t3_ParamLimits

0x6ab3,	// (0x000352fb) list_ai_message_pane_t3

0x6ac8,	// (0x00035310) list_ai_message_pane_t4_ParamLimits

0x6ac8,	// (0x00035310) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0003e191) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0003e191) list_ai_message_pane_t

0xd29f,	// (0x0003bae7) cell_ai_soft_ind_pane_ParamLimits

0xd29f,	// (0x0003bae7) cell_ai_soft_ind_pane

0x5487,	// (0x00033ccf) cell_ai_soft_ind_pane_g1_ParamLimits

0x5487,	// (0x00033ccf) cell_ai_soft_ind_pane_g1

0x20ce,	// (0x00030916) grid_highlight_cp1

0x5494,	// (0x00033cdc) text_secondary_cp56_ParamLimits

0x5494,	// (0x00033cdc) text_secondary_cp56

0x6a4e,	// (0x00035296) example_general_pane_ParamLimits

0x6a4e,	// (0x00035296) example_general_pane

0x6a5a,	// (0x000352a2) example_parent_pane_g1_ParamLimits

0x6a5a,	// (0x000352a2) example_parent_pane_g1

0x6a66,	// (0x000352ae) example_parent_pane_t1_ParamLimits

0x6a66,	// (0x000352ae) example_parent_pane_t1

0xcbe2,	// (0x0003b42a) popup_preview_text_window_ParamLimits

0xcbe2,	// (0x0003b42a) popup_preview_text_window

0x5364,	// (0x00033bac) list_single_pane_cp2_g4

0x2305,	// (0x00030b4d) bg_popup_preview_window_pane_ParamLimits

0x2305,	// (0x00030b4d) bg_popup_preview_window_pane

0x67ac,	// (0x00034ff4) popup_preview_text_window_t1_ParamLimits

0x67ac,	// (0x00034ff4) popup_preview_text_window_t1

0x67ca,	// (0x00035012) popup_preview_text_window_t2_ParamLimits

0x67ca,	// (0x00035012) popup_preview_text_window_t2

0x6813,	// (0x0003505b) popup_preview_text_window_t3_ParamLimits

0x6813,	// (0x0003505b) popup_preview_text_window_t3

0x6858,	// (0x000350a0) popup_preview_text_window_t4_ParamLimits

0x6858,	// (0x000350a0) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0003e160) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0003e160) popup_preview_text_window_t

0x68d6,	// (0x0003511e) scroll_pane_cp11

0x5997,	// (0x000341df) bg_popup_preview_window_pane_g1

0x676c,	// (0x00034fb4) bg_popup_preview_window_pane_g2

0x6774,	// (0x00034fbc) bg_popup_preview_window_pane_g3

0x677c,	// (0x00034fc4) bg_popup_preview_window_pane_g4

0x6784,	// (0x00034fcc) bg_popup_preview_window_pane_g5

0x678c,	// (0x00034fd4) bg_popup_preview_window_pane_g6

0x6794,	// (0x00034fdc) bg_popup_preview_window_pane_g7

0x679c,	// (0x00034fe4) bg_popup_preview_window_pane_g8

0xa0ca,	// (0x00038912) aid_popup_width_pane

0xcbc0,	// (0x0003b408) popup_midp_note_alarm_window_ParamLimits

0xcbc0,	// (0x0003b408) popup_midp_note_alarm_window

0x48de,	// (0x00033126) data_form_pane_ParamLimits

0x9849,	// (0x00038091) form_field_data_pane_g1

0x9853,	// (0x0003809b) form_field_data_pane_t1_ParamLimits

0x48ea,	// (0x00033132) input_focus_pane_ParamLimits

0x48f8,	// (0x00033140) data_form_wide_pane_ParamLimits

0x986b,	// (0x000380b3) form_field_data_wide_pane_g1

0x9877,	// (0x000380bf) form_field_data_wide_pane_t1_ParamLimits

0x2d1b,	// (0x00031563) input_focus_pane_cp6_ParamLimits

0xa8f0,	// (0x00039138) input_popup_find_pane_g1_ParamLimits

0xa8f0,	// (0x00039138) input_popup_find_pane_g1

0xaa47,	// (0x0003928f) aid_navi_side_left_pane

0xaa5c,	// (0x000392a4) aid_navi_side_right_pane

0x61e3,	// (0x00034a2b) bg_popup_window_pane_cp30_ParamLimits

0x61e3,	// (0x00034a2b) bg_popup_window_pane_cp30

0x625d,	// (0x00034aa5) popup_midp_note_alarm_window_g1_ParamLimits

0x625d,	// (0x00034aa5) popup_midp_note_alarm_window_g1

0x62bd,	// (0x00034b05) popup_midp_note_alarm_window_t1_ParamLimits

0x62bd,	// (0x00034b05) popup_midp_note_alarm_window_t1

0x635e,	// (0x00034ba6) popup_midp_note_alarm_window_t2_ParamLimits

0x635e,	// (0x00034ba6) popup_midp_note_alarm_window_t2

0x640c,	// (0x00034c54) popup_midp_note_alarm_window_t3_ParamLimits

0x640c,	// (0x00034c54) popup_midp_note_alarm_window_t3

0x643e,	// (0x00034c86) popup_midp_note_alarm_window_t4_ParamLimits

0x643e,	// (0x00034c86) popup_midp_note_alarm_window_t4

0x6464,	// (0x00034cac) popup_midp_note_alarm_window_t5_ParamLimits

0x6464,	// (0x00034cac) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0003e0fd) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0003e0fd) popup_midp_note_alarm_window_t

0x6510,	// (0x00034d58) wait_bar_pane_cp1_ParamLimits

0x6510,	// (0x00034d58) wait_bar_pane_cp1

0x20ce,	// (0x00030916) wait_anim_pane_copy1

0x20ce,	// (0x00030916) wait_border_pane_copy1

0x5ee5,	// (0x0003472d) wait_border_pane_g1_copy1

0x9891,	// (0x000380d9) form_field_popup_pane_g1

0x9899,	// (0x000380e1) form_field_popup_pane_t1_ParamLimits

0x48ea,	// (0x00033132) input_focus_pane_cp7_ParamLimits

0x4924,	// (0x0003316c) list_form_pane_ParamLimits

0x98b1,	// (0x000380f9) form_field_popup_wide_pane_g1

0x98b9,	// (0x00038101) form_field_popup_wide_pane_t1_ParamLimits

0x48ea,	// (0x00033132) input_focus_pane_cp8_ParamLimits

0x4930,	// (0x00033178) list_form_wide_pane_ParamLimits

0x6cc2,	// (0x0003550a) aid_size_cell_graphic_pane

0x9943,	// (0x0003818b) data_form_pane_t1_ParamLimits

0x9ba5,	// (0x000383ed) data_form_wide_pane_t1_ParamLimits

0xce2c,	// (0x0003b674) bg_status_flat_pane

0xa4cd,	// (0x00038d15) title_pane_t1_ParamLimits

0x20e4,	// (0x0003092c) title_pane_t2_ParamLimits

0x210a,	// (0x00030952) title_pane_t3_ParamLimits

0xf56f,	// (0x0003ddb7) title_pane_t_ParamLimits

0x4ed6,	// (0x0003371e) level_1_signal_ParamLimits

0x4ee3,	// (0x0003372b) level_2_signal_ParamLimits

0x4ef0,	// (0x00033738) level_3_signal_ParamLimits

0x4efd,	// (0x00033745) level_4_signal_ParamLimits

0x4f0a,	// (0x00033752) level_5_signal_ParamLimits

0x4f17,	// (0x0003375f) level_6_signal_ParamLimits

0x4f24,	// (0x0003376c) level_7_signal_ParamLimits

0x4ed6,	// (0x0003371e) level_1_battery_ParamLimits

0x4ee3,	// (0x0003372b) level_2_battery_ParamLimits

0x4ef0,	// (0x00033738) level_3_battery_ParamLimits

0x4efd,	// (0x00033745) level_4_battery_ParamLimits

0x4f0a,	// (0x00033752) level_5_battery_ParamLimits

0x4f17,	// (0x0003375f) level_6_battery_ParamLimits

0x4f24,	// (0x0003376c) level_7_battery_ParamLimits

0x6106,	// (0x0003494e) bg_status_flat_pane_g1

0x610e,	// (0x00034956) bg_status_flat_pane_g2

0x6116,	// (0x0003495e) bg_status_flat_pane_g3

0x611e,	// (0x00034966) bg_status_flat_pane_g4

0x6126,	// (0x0003496e) bg_status_flat_pane_g5

0x612e,	// (0x00034976) bg_status_flat_pane_g6

0x6136,	// (0x0003497e) bg_status_flat_pane_g7

0xa53d,	// (0x00038d85) tabs_3_active_pane_t1_ParamLimits

0xa53d,	// (0x00038d85) tabs_3_passive_pane_t1_ParamLimits

0xa557,	// (0x00038d9f) tabs_4_active_pane_t1_ParamLimits

0xa557,	// (0x00038d9f) tabs_4_1_passive_pane_t1_ParamLimits

0xa904,	// (0x0003914c) tabs_2_active_pane_t1_ParamLimits

0xa904,	// (0x0003914c) tabs_2_passive_pane_t1_ParamLimits

0x628d,	// (0x00034ad5) bg_active_tab_pane_cp4_ParamLimits

0xa916,	// (0x0003915e) tabs_2_long_active_pane_t1_ParamLimits

0xa929,	// (0x00039171) bg_passive_tab_pane_cp4_ParamLimits

0xb21e,	// (0x00039a66) list_single_midp_graphic_pane_t1_ParamLimits

0x628d,	// (0x00034ad5) bg_active_tab_pane_cp5_ParamLimits

0xa935,	// (0x0003917d) tabs_3_long_active_pane_t1_ParamLimits

0xa929,	// (0x00039171) bg_passive_tab_pane_cp5_ParamLimits

0xb21e,	// (0x00039a66) list_single_midp_graphic_pane_t1

0xce2c,	// (0x0003b674) bg_status_flat_pane_ParamLimits

0x5868,	// (0x000340b0) indicator_pane_cp2_ParamLimits

0x5868,	// (0x000340b0) indicator_pane_cp2

0xcf70,	// (0x0003b7b8) navi_pane_srt_ParamLimits

0xcf70,	// (0x0003b7b8) navi_pane_srt

0x5890,	// (0x000340d8) popup_clock_digital_analogue_window_cp1

0x216e,	// (0x000309b6) indicator_pane_t1

0x5433,	// (0x00033c7b) copy_highlight_pane

0x5433,	// (0x00033c7b) cursor_graphics_pane

0x5433,	// (0x00033c7b) graphic_within_text_pane

0x5433,	// (0x00033c7b) link_highlight_pane

0x6899,	// (0x000350e1) popup_preview_text_window_t5_ParamLimits

0x6899,	// (0x000350e1) popup_preview_text_window_t5

0x54ae,	// (0x00033cf6) cursor_digital_pane

0x54ae,	// (0x00033cf6) cursor_primary_pane

0x54bf,	// (0x00033d07) cursor_primary_small_pane

0x54c7,	// (0x00033d0f) cursor_secondary_pane

0x54cf,	// (0x00033d17) cursor_title_pane

0x54ae,	// (0x00033cf6) link_highlight_digital_pane

0x54b6,	// (0x00033cfe) link_highlight_primary_pane

0x54bf,	// (0x00033d07) link_highlight_primary_small_pane

0x54c7,	// (0x00033d0f) link_highlight_secondary_pane

0x54cf,	// (0x00033d17) link_highlight_title_pane

0x54ae,	// (0x00033cf6) copy_highlight_digital_pane

0x54ae,	// (0x00033cf6) copy_highlight_primary_pane

0x54bf,	// (0x00033d07) copy_highlight_primary_small_pane

0x54c7,	// (0x00033d0f) copy_highlight_secondary_pane

0x54cf,	// (0x00033d17) copy_highlight_title_pane

0x54c7,	// (0x00033d0f) graphic_text_digital_pane

0x6186,	// (0x000349ce) graphic_text_primary_pane

0x618f,	// (0x000349d7) graphic_text_primary_small_pane

0x54bf,	// (0x00033d07) graphic_text_secondary_pane

0x54ae,	// (0x00033cf6) graphic_text_title_pane

0xaf70,	// (0x000397b8) cursor_primary_pane_g1

0x6178,	// (0x000349c0) cursor_text_primary_t1

0xd1e0,	// (0x0003ba28) cursor_primary_small_pane_g1

0x616a,	// (0x000349b2) cursor_text_primary_small_t1

0xd1d6,	// (0x0003ba1e) cursor_primary_small_pane_g1_copy1

0x615c,	// (0x000349a4) cursor_text_primary_small_t1_copy1

0x614e,	// (0x00034996) cursor_text_title_t1

0xd1cc,	// (0x0003ba14) cursor_title_pane_g1

0xaf70,	// (0x000397b8) cursor_digital_pane_g1

0x54d7,	// (0x00033d1f) cursor_text_digital_t1

0x54fc,	// (0x00033d44) link_highlight_primary_pane_g1

0x60f7,	// (0x0003493f) link_highlight_primary_pane_t1

0x54e5,	// (0x00033d2d) link_highlight_primary_small_pane_g1

0x54ed,	// (0x00033d35) link_highlight_primary_small_pane_t1

0x54fc,	// (0x00033d44) link_highlight_secondary_pane_g1

0x5504,	// (0x00033d4c) link_highlight_secondary_pane_t1

0x606b,	// (0x000348b3) link_highlight_title_pane_g1

0x6073,	// (0x000348bb) link_highlight_title_pane_t1

0x6054,	// (0x0003489c) link_highlight_digital_pane_g1

0x605c,	// (0x000348a4) link_highlight_digital_pane_t1

0x5f2a,	// (0x00034772) copy_highlight_primary_pane_g1

0x5f32,	// (0x0003477a) copy_highlight_primary_pane_t1

0x5f04,	// (0x0003474c) copy_highlight_primary_small_pane_g1

0x5f1b,	// (0x00034763) copy_highlight_primary_small_pane_t1

0x5513,	// (0x00033d5b) copy_highlight_secondary_pane_g1

0x551b,	// (0x00033d63) copy_highlight_secondary_pane_t1

0x5f04,	// (0x0003474c) copy_highlight_title_pane_g1

0x5f0c,	// (0x00034754) copy_highlight_title_pane_t1

0x5f2a,	// (0x00034772) copy_highlight_digital_pane_g1

0x6e48,	// (0x00035690) copy_highlight_digital_pane_t1

0x6d9c,	// (0x000355e4) graphic_text_primary_pane_g1

0x6e2c,	// (0x00035674) graphic_text_primary_pane_t1

0x6e3a,	// (0x00035682) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0003e22c) graphic_text_primary_pane_t

0x6e08,	// (0x00035650) graphic_text_primary_small_pane_g1

0x6e10,	// (0x00035658) graphic_text_primary_small_pane_t1

0x6e1e,	// (0x00035666) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0003e227) graphic_text_primary_small_pane_t

0x6de4,	// (0x0003562c) graphic_text_secondary_pane_g1

0x6dec,	// (0x00035634) graphic_text_secondary_pane_t1

0x6dfa,	// (0x00035642) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0003e222) graphic_text_secondary_pane_t

0x6dc0,	// (0x00035608) graphic_text_title_pane_g1

0x6dc8,	// (0x00035610) graphic_text_title_pane_t1

0x6dd6,	// (0x0003561e) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0003e21d) graphic_text_title_pane_t

0x6d9c,	// (0x000355e4) graphic_text_digital_pane_g1

0x6da4,	// (0x000355ec) graphic_text_digital_pane_t1

0x6db2,	// (0x000355fa) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0003e218) graphic_text_digital_pane_t

0x212a,	// (0x00030972) navi_icon_pane_srt_ParamLimits

0x212a,	// (0x00030972) navi_icon_pane_srt

0x20ce,	// (0x00030916) navi_midp_pane_srt

0x20ce,	// (0x00030916) navi_navi_pane_srt

0x212a,	// (0x00030972) navi_text_pane_srt_ParamLimits

0x212a,	// (0x00030972) navi_text_pane_srt

0x6d67,	// (0x000355af) navi_navi_icon_text_pane_srt

0x6d81,	// (0x000355c9) navi_navi_pane_srt_g1_ParamLimits

0x6d81,	// (0x000355c9) navi_navi_pane_srt_g1

0x6d6f,	// (0x000355b7) navi_navi_pane_srt_g2_ParamLimits

0x6d6f,	// (0x000355b7) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0003e213) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0003e213) navi_navi_pane_srt_g

0x6d93,	// (0x000355db) navi_navi_tabs_pane_srt

0x6d67,	// (0x000355af) navi_navi_text_pane_srt

0x6d67,	// (0x000355af) navi_navi_volume_pane_srt

0x6d58,	// (0x000355a0) navi_navi_text_pane_srt_t1

0xb63c,	// (0x00039e84) navi_navi_volume_pane_srt_g1

0xb644,	// (0x00039e8c) volume_small_pane_srt_ParamLimits

0xb644,	// (0x00039e8c) volume_small_pane_srt

0xaf7a,	// (0x000397c2) volume_small_pane_srt_g1_ParamLimits

0xaf7a,	// (0x000397c2) volume_small_pane_srt_g1

0xaf8a,	// (0x000397d2) volume_small_pane_srt_g2_ParamLimits

0xaf8a,	// (0x000397d2) volume_small_pane_srt_g2

0xaf9b,	// (0x000397e3) volume_small_pane_srt_g3_ParamLimits

0xaf9b,	// (0x000397e3) volume_small_pane_srt_g3

0xafac,	// (0x000397f4) volume_small_pane_srt_g4_ParamLimits

0xafac,	// (0x000397f4) volume_small_pane_srt_g4

0xafbd,	// (0x00039805) volume_small_pane_srt_g5_ParamLimits

0xafbd,	// (0x00039805) volume_small_pane_srt_g5

0xafce,	// (0x00039816) volume_small_pane_srt_g6_ParamLimits

0xafce,	// (0x00039816) volume_small_pane_srt_g6

0xafdf,	// (0x00039827) volume_small_pane_srt_g7_ParamLimits

0xafdf,	// (0x00039827) volume_small_pane_srt_g7

0xaff0,	// (0x00039838) volume_small_pane_srt_g8_ParamLimits

0xaff0,	// (0x00039838) volume_small_pane_srt_g8

0xb001,	// (0x00039849) volume_small_pane_srt_g9_ParamLimits

0xb001,	// (0x00039849) volume_small_pane_srt_g9

0xb012,	// (0x0003985a) volume_small_pane_srt_g10_ParamLimits

0xb012,	// (0x0003985a) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0003dfc2) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0003dfc2) volume_small_pane_srt_g

0x2c23,	// (0x0003146b) query_popup_data_pane_cp2

0x6d3e,	// (0x00035586) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6d3e,	// (0x00035586) navi_navi_icon_text_pane_srt_t1

0x6186,	// (0x000349ce) navi_tabs_2_long_pane_srt

0x6186,	// (0x000349ce) navi_tabs_2_pane_srt

0x6186,	// (0x000349ce) navi_tabs_3_long_pane_srt

0x6186,	// (0x000349ce) navi_tabs_3_pane_srt

0x6186,	// (0x000349ce) navi_tabs_4_pane_srt

0xb61c,	// (0x00039e64) tabs_2_active_pane_srt_ParamLimits

0xb61c,	// (0x00039e64) tabs_2_active_pane_srt

0xb62c,	// (0x00039e74) tabs_2_passive_pane_srt_ParamLimits

0xb62c,	// (0x00039e74) tabs_2_passive_pane_srt

0x4a42,	// (0x0003328a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4a42,	// (0x0003328a) bg_passive_tab_pane_cp1_srt

0x6d25,	// (0x0003556d) bg_passive_tab_pane_g1_cp1_srt

0x5107,	// (0x0003394f) bg_passive_tab_pane_g2_cp1_srt

0x6d1c,	// (0x00035564) bg_passive_tab_pane_g3_cp1_srt

0x212a,	// (0x00030972) bg_active_tab_pane_cp1_srt_ParamLimits

0x212a,	// (0x00030972) bg_active_tab_pane_cp1_srt

0x6d2e,	// (0x00035576) tabs_2_active_pane_srt_g1

0xd510,	// (0x0003bd58) tabs_2_active_pane_srt_t1_ParamLimits

0xd510,	// (0x0003bd58) tabs_2_active_pane_srt_t1

0x6d25,	// (0x0003556d) bg_active_tab_pane_g1_cp1_srt

0x5107,	// (0x0003394f) bg_active_tab_pane_g2_cp1_srt

0x6d1c,	// (0x00035564) bg_active_tab_pane_g3_cp1_srt

0xb5e9,	// (0x00039e31) tabs_3_active_pane_srt_ParamLimits

0xb5e9,	// (0x00039e31) tabs_3_active_pane_srt

0xb5fa,	// (0x00039e42) tabs_3_passive_pane_cp_srt_ParamLimits

0xb5fa,	// (0x00039e42) tabs_3_passive_pane_cp_srt

0xb60b,	// (0x00039e53) tabs_3_passive_pane_srt_ParamLimits

0xb60b,	// (0x00039e53) tabs_3_passive_pane_srt

0x4a42,	// (0x0003328a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4a42,	// (0x0003328a) bg_passive_tab_pane_cp2_srt

0x5533,	// (0x00033d7b) bg_passive_tab_pane_g1_cp2_srt

0x5107,	// (0x0003394f) bg_passive_tab_pane_g2_cp2_srt

0x552a,	// (0x00033d72) bg_passive_tab_pane_g3_cp2_srt

0x212a,	// (0x00030972) bg_active_tab_pane_cp2_srt_ParamLimits

0x212a,	// (0x00030972) bg_active_tab_pane_cp2_srt

0x6d14,	// (0x0003555c) tabs_3_active_pane_srt_g1

0xd4fe,	// (0x0003bd46) tabs_3_active_pane_srt_t1_ParamLimits

0xd4fe,	// (0x0003bd46) tabs_3_active_pane_srt_t1

0x5533,	// (0x00033d7b) bg_active_tab_pane_g1_cp2_srt

0x5107,	// (0x0003394f) bg_active_tab_pane_g2_cp2_srt

0x552a,	// (0x00033d72) bg_active_tab_pane_g3_cp2_srt

0xb5a1,	// (0x00039de9) tabs_4_active_pane_srt_ParamLimits

0xb5a1,	// (0x00039de9) tabs_4_active_pane_srt

0xb5b3,	// (0x00039dfb) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb5b3,	// (0x00039dfb) tabs_4_passive_pane_cp2_srt

0x5657,	// (0x00033e9f) aid_size_cell_toolbar

0xa929,	// (0x00039171) main_idle_act_pane_ParamLimits

0x5727,	// (0x00033f6f) popup_large_graphic_colour_window_ParamLimits

0xcd38,	// (0x0003b580) popup_toolbar_window_ParamLimits

0xcd38,	// (0x0003b580) popup_toolbar_window

0x6c3a,	// (0x00035482) list_single_graphic_2heading_pane_ParamLimits

0x6c3a,	// (0x00035482) list_single_graphic_2heading_pane

0x4d1d,	// (0x00033565) aid_size_cell_apps_grid_lsc_pane

0x4d2f,	// (0x00033577) aid_size_cell_apps_grid_prt_pane

0x4a42,	// (0x0003328a) bg_wml_button_pane_cp1_ParamLimits

0x4a42,	// (0x0003328a) bg_wml_button_pane_cp1

0xd161,	// (0x0003b9a9) form_midp_field_text_pane_t1_ParamLimits

0x5a8f,	// (0x000342d7) input_focus_pane_cp050_ParamLimits

0x5bd7,	// (0x0003441f) list_midp_form_text_pane_ParamLimits

0x5bb4,	// (0x000343fc) input_focus_pane_cp051_ParamLimits

0x5bc8,	// (0x00034410) list_midp_choice_pane_ParamLimits

0xd0c7,	// (0x0003b90f) list_single_2graphic_pane_cp3_ParamLimits

0xd0c7,	// (0x0003b90f) list_single_2graphic_pane_cp3

0xd0eb,	// (0x0003b933) list_single_midp_graphic_pane_ParamLimits

0xd0eb,	// (0x0003b933) list_single_midp_graphic_pane

0x9a89,	// (0x000382d1) list_single_graphic_2heading_pane_g1_ParamLimits

0x9a89,	// (0x000382d1) list_single_graphic_2heading_pane_g1

0x9a95,	// (0x000382dd) list_single_graphic_2heading_pane_g4_ParamLimits

0x9a95,	// (0x000382dd) list_single_graphic_2heading_pane_g4

0x9aa1,	// (0x000382e9) list_single_graphic_2heading_pane_g5_ParamLimits

0x9aa1,	// (0x000382e9) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0003e015) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0003e015) list_single_graphic_2heading_pane_g

0x9aad,	// (0x000382f5) list_single_graphic_2heading_pane_t1_ParamLimits

0x9aad,	// (0x000382f5) list_single_graphic_2heading_pane_t1

0x9ac1,	// (0x00038309) list_single_graphic_2heading_pane_t2_ParamLimits

0x9ac1,	// (0x00038309) list_single_graphic_2heading_pane_t2

0x9add,	// (0x00038325) list_single_graphic_2heading_pane_t3_ParamLimits

0x9add,	// (0x00038325) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0003e01c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0003e01c) list_single_graphic_2heading_pane_t

0x58d5,	// (0x0003411d) bg_popup_sub_pane_cp2

0x58ff,	// (0x00034147) grid_toobar_pane

0xb18d,	// (0x000399d5) cell_toolbar_pane_ParamLimits

0xb18d,	// (0x000399d5) cell_toolbar_pane

0x593b,	// (0x00034183) cell_toolbar_pane_g1_ParamLimits

0x593b,	// (0x00034183) cell_toolbar_pane_g1

0x594f,	// (0x00034197) cell_toolbar_pane_g2_ParamLimits

0x594f,	// (0x00034197) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0003e02a) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0003e02a) cell_toolbar_pane_g

0x5971,	// (0x000341b9) grid_highlight_pane_cp2_ParamLimits

0x5971,	// (0x000341b9) grid_highlight_pane_cp2

0x598b,	// (0x000341d3) toolbar_button_pane

0x5997,	// (0x000341df) toolbar_button_pane_g1

0x59a7,	// (0x000341ef) toolbar_button_pane_g2

0x599f,	// (0x000341e7) toolbar_button_pane_g3

0x59b7,	// (0x000341ff) toolbar_button_pane_g4

0x59af,	// (0x000341f7) toolbar_button_pane_g5

0x59bf,	// (0x00034207) toolbar_button_pane_g6

0x59c7,	// (0x0003420f) toolbar_button_pane_g7

0x59d7,	// (0x0003421f) toolbar_button_pane_g8

0x59cf,	// (0x00034217) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0003e02f) toolbar_button_pane_g

0xb1d1,	// (0x00039a19) list_single_2graphic_pane_g1_cp3_ParamLimits

0xb1d1,	// (0x00039a19) list_single_2graphic_pane_g1_cp3

0xb1dd,	// (0x00039a25) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb1dd,	// (0x00039a25) list_single_2graphic_pane_g2_cp3

0xb1ee,	// (0x00039a36) list_single_2graphic_pane_g3_cp3

0xb1f6,	// (0x00039a3e) list_single_2graphic_pane_g4_cp3_ParamLimits

0xb1f6,	// (0x00039a3e) list_single_2graphic_pane_g4_cp3

0xb202,	// (0x00039a4a) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb202,	// (0x00039a4a) list_single_2graphic_pane_t1_cp3

0x5c30,	// (0x00034478) list_single_midp_graphic_pane_g2_ParamLimits

0x5c30,	// (0x00034478) list_single_midp_graphic_pane_g2

0x9a79,	// (0x000382c1) aid_zoom_text_primary

0xb169,	// (0x000399b1) aid_zoom_text_secondary

0x55e7,	// (0x00033e2f) status_small_pane_g7_ParamLimits

0x55e7,	// (0x00033e2f) status_small_pane_g7

0x560a,	// (0x00033e52) status_small_pane_t1_ParamLimits

0xa4b0,	// (0x00038cf8) title_pane_g2

0x0003,

0xf566,	// (0x0003ddae) title_pane_g

0xa70e,	// (0x00038f56) aid_size_cell_colour_1_pane_ParamLimits

0xa70e,	// (0x00038f56) aid_size_cell_colour_1_pane

0xa722,	// (0x00038f6a) aid_size_cell_colour_2_pane_ParamLimits

0xa722,	// (0x00038f6a) aid_size_cell_colour_2_pane

0xa736,	// (0x00038f7e) aid_size_cell_colour_3_pane_ParamLimits

0xa736,	// (0x00038f7e) aid_size_cell_colour_3_pane

0xa74a,	// (0x00038f92) aid_size_cell_colour_4_pane_ParamLimits

0xa74a,	// (0x00038f92) aid_size_cell_colour_4_pane

0xa983,	// (0x000391cb) title_pane_stacon_g1_ParamLimits

0xa983,	// (0x000391cb) title_pane_stacon_g1

0x5fa7,	// (0x000347ef) popup_note_wait_window_g3_ParamLimits

0x5fa7,	// (0x000347ef) popup_note_wait_window_g3

0x601d,	// (0x00034865) popup_note_wait_window_t5_ParamLimits

0x601d,	// (0x00034865) popup_note_wait_window_t5

0x20ce,	// (0x00030916) main_feb_china_hwr_fs_writing_pane

0xc95b,	// (0x0003b1a3) popup_feb_china_hwr_fs_window_ParamLimits

0xc95b,	// (0x0003b1a3) popup_feb_china_hwr_fs_window

0xb234,	// (0x00039a7c) aid_size_cell_hwr_fs_ParamLimits

0xb234,	// (0x00039a7c) aid_size_cell_hwr_fs

0x5a8f,	// (0x000342d7) bg_popup_sub_pane_cp3_ParamLimits

0x5a8f,	// (0x000342d7) bg_popup_sub_pane_cp3

0xb249,	// (0x00039a91) grid_hwr_fs_pane_ParamLimits

0xb249,	// (0x00039a91) grid_hwr_fs_pane

0xb261,	// (0x00039aa9) linegrid_hwr_fs_pane_ParamLimits

0xb261,	// (0x00039aa9) linegrid_hwr_fs_pane

0xb271,	// (0x00039ab9) cell_hwr_fs_pane_ParamLimits

0xb271,	// (0x00039ab9) cell_hwr_fs_pane

0x5a9b,	// (0x000342e3) linegrid_hwr_fs_pane_g1_ParamLimits

0x5a9b,	// (0x000342e3) linegrid_hwr_fs_pane_g1

0xd09b,	// (0x0003b8e3) linegrid_hwr_fs_pane_g2_ParamLimits

0xd09b,	// (0x0003b8e3) linegrid_hwr_fs_pane_g2

0x5aa7,	// (0x000342ef) linegrid_hwr_fs_pane_g3_ParamLimits

0x5aa7,	// (0x000342ef) linegrid_hwr_fs_pane_g3

0xb293,	// (0x00039adb) linegrid_hwr_fs_pane_g4_ParamLimits

0xb293,	// (0x00039adb) linegrid_hwr_fs_pane_g4

0xb2ad,	// (0x00039af5) linegrid_hwr_fs_pane_g5_ParamLimits

0xb2ad,	// (0x00039af5) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0003e05a) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0003e05a) linegrid_hwr_fs_pane_g

0x5ab3,	// (0x000342fb) cell_hwr_fs_pane_g1_ParamLimits

0x5ab3,	// (0x000342fb) cell_hwr_fs_pane_g1

0x58a1,	// (0x000340e9) cell_hwr_fs_pane_g2_ParamLimits

0x58a1,	// (0x000340e9) cell_hwr_fs_pane_g2

0xd0ad,	// (0x0003b8f5) cell_hwr_fs_pane_g3_ParamLimits

0xd0ad,	// (0x0003b8f5) cell_hwr_fs_pane_g3

0xd0ba,	// (0x0003b902) cell_hwr_fs_pane_g4_ParamLimits

0xd0ba,	// (0x0003b902) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0003e065) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0003e065) cell_hwr_fs_pane_g

0xb2c3,	// (0x00039b0b) cell_hwr_fs_pane_t1

0x20ce,	// (0x00030916) grid_highlight_pane_cp6

0x20ce,	// (0x00030916) main_idle_act2_pane

0x49f0,	// (0x00033238) aid_inside_area_popup_secondary

0xd200,	// (0x0003ba48) aid_inside_area_window_primary_ParamLimits

0xd200,	// (0x0003ba48) aid_inside_area_window_primary

0x6e57,	// (0x0003569f) ai2_news_ticker_pane

0x6e5f,	// (0x000356a7) aid_size_cell_ai1_link_ParamLimits

0x6e5f,	// (0x000356a7) aid_size_cell_ai1_link

0xd522,	// (0x0003bd6a) popup_ai2_data_window_ParamLimits

0xd522,	// (0x0003bd6a) popup_ai2_data_window

0x6e79,	// (0x000356c1) popup_ai2_link_window_ParamLimits

0x6e79,	// (0x000356c1) popup_ai2_link_window

0x5a8f,	// (0x000342d7) bg_popup_sub_pane_cp4_ParamLimits

0x5a8f,	// (0x000342d7) bg_popup_sub_pane_cp4

0x6e8d,	// (0x000356d5) grid_ai2_link_pane_ParamLimits

0x6e8d,	// (0x000356d5) grid_ai2_link_pane

0x6ea4,	// (0x000356ec) popup_ai2_link_window_g1_ParamLimits

0x6ea4,	// (0x000356ec) popup_ai2_link_window_g1

0x6eb0,	// (0x000356f8) popup_ai2_link_window_g2_ParamLimits

0x6eb0,	// (0x000356f8) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0003e231) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0003e231) popup_ai2_link_window_g

0x6ebf,	// (0x00035707) ai2_mp_button_pane

0x6ec7,	// (0x0003570f) ai2_mp_volume_pane

0x5bb4,	// (0x000343fc) bg_popup_sub_pane_cp5_ParamLimits

0x5bb4,	// (0x000343fc) bg_popup_sub_pane_cp5

0x6ecf,	// (0x00035717) heading_ai2_gene_pane_ParamLimits

0x6ecf,	// (0x00035717) heading_ai2_gene_pane

0x6edb,	// (0x00035723) list_ai2_gene_pane_ParamLimits

0x6edb,	// (0x00035723) list_ai2_gene_pane

0x6f23,	// (0x0003576b) cell_ai2_link_pane_ParamLimits

0x6f23,	// (0x0003576b) cell_ai2_link_pane

0x6f39,	// (0x00035781) cell_ai2_link_pane_g1

0x20ce,	// (0x00030916) grid_highlight_pane_cp7

0xb659,	// (0x00039ea1) ai2_mp_volume_pane_g1

0x6fde,	// (0x00035826) ai2_mp_volume_pane_g2

0xd54f,	// (0x0003bd97) list_ai2_gene_pane_t1

0x6fd6,	// (0x0003581e) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0003e24a) ai2_mp_volume_pane_g

0xb661,	// (0x00039ea9) volume_small_pane_cp3

0x6fe6,	// (0x0003582e) aid_size_cell_ai2_button

0x6fee,	// (0x00035836) grid_ai2_button_pane

0x6ff7,	// (0x0003583f) cell_ai2_button_pane_ParamLimits

0x6ff7,	// (0x0003583f) cell_ai2_button_pane

0x20c4,	// (0x0003090c) cell_ai2_button_pane_g1

0x20ce,	// (0x00030916) grid_highlight_pane_cp8

0x6f96,	// (0x000357de) ai2_gene_pane_t1_ParamLimits

0x6f96,	// (0x000357de) ai2_gene_pane_t1

0xc8f7,	// (0x0003b13f) aid_height_parent_landscape

0xd2d9,	// (0x0003bb21) aid_height_set_list

0x5f71,	// (0x000347b9) aid_size_parent

0x6cc2,	// (0x0003550a) aid_size_cell_graphic_pane_ParamLimits

0x6eeb,	// (0x00035733) popup_ai2_data_window_g1_ParamLimits

0x6eeb,	// (0x00035733) popup_ai2_data_window_g1

0x6ef7,	// (0x0003573f) ai2_news_ticker_pane_g1

0x6eff,	// (0x00035747) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0003e236) ai2_news_ticker_pane_g

0x6f07,	// (0x0003574f) ai2_news_ticker_pane_t1

0x6f15,	// (0x0003575d) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0003e23b) ai2_news_ticker_pane_t

0x6f42,	// (0x0003578a) heading_ai2_gene_pane_g1

0x6f4a,	// (0x00035792) heading_ai2_gene_pane_t1_ParamLimits

0x6f4a,	// (0x00035792) heading_ai2_gene_pane_t1

0x6f5f,	// (0x000357a7) list_highlight_pane_cp6

0xd538,	// (0x0003bd80) ai2_gene_pane_ParamLimits

0xd538,	// (0x0003bd80) ai2_gene_pane

0xd55d,	// (0x0003bda5) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0003e240) list_ai2_gene_pane_t

0x6f67,	// (0x000357af) list_highlight_pane_cp8_ParamLimits

0x6f67,	// (0x000357af) list_highlight_pane_cp8

0x6f78,	// (0x000357c0) ai2_gene_pane_g1_ParamLimits

0x6f78,	// (0x000357c0) ai2_gene_pane_g1

0x6f8a,	// (0x000357d2) ai2_gene_pane_g2_ParamLimits

0x6f8a,	// (0x000357d2) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0003e245) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0003e245) ai2_gene_pane_g

0x2f36,	// (0x0003177e) scroll_pane_cp12

0xb128,	// (0x00039970) control_pane_t3_ParamLimits

0xb128,	// (0x00039970) control_pane_t3

0x55fb,	// (0x00033e43) status_small_pane_g8_ParamLimits

0x55fb,	// (0x00033e43) status_small_pane_g8

0xc9e7,	// (0x0003b22f) popup_find_window_ParamLimits

0xcbd4,	// (0x0003b41c) popup_note_image_window_ParamLimits

0x9af5,	// (0x0003833d) list_double2_graphic_pane_vc_g1_ParamLimits

0x9af5,	// (0x0003833d) list_double2_graphic_pane_vc_g1

0x629b,	// (0x00034ae3) list_double2_graphic_pane_vc_g2_ParamLimits

0x629b,	// (0x00034ae3) list_double2_graphic_pane_vc_g2

0xb1bd,	// (0x00039a05) list_double2_graphic_pane_vc_g3_ParamLimits

0xb1bd,	// (0x00039a05) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0003e023) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0003e023) list_double2_graphic_pane_vc_g

0x9b01,	// (0x00038349) list_double2_graphic_pane_vc_t1_ParamLimits

0x9b01,	// (0x00038349) list_double2_graphic_pane_vc_t1

0x629b,	// (0x00034ae3) list_single_heading_pane_vc_g1_ParamLimits

0x629b,	// (0x00034ae3) list_single_heading_pane_vc_g1

0xb1bd,	// (0x00039a05) list_single_heading_pane_vc_g2_ParamLimits

0xb1bd,	// (0x00039a05) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003e044) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003e044) list_single_heading_pane_vc_g

0x9b17,	// (0x0003835f) list_single_heading_pane_vc_t1_ParamLimits

0x9b17,	// (0x0003835f) list_single_heading_pane_vc_t1

0x9b2f,	// (0x00038377) list_single_heading_pane_vc_t2_ParamLimits

0x9b2f,	// (0x00038377) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0003e049) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0003e049) list_single_heading_pane_vc_t

0x59df,	// (0x00034227) list_setting_number_pane_vc_g1_ParamLimits

0x59df,	// (0x00034227) list_setting_number_pane_vc_g1

0x59eb,	// (0x00034233) list_setting_number_pane_vc_g2_ParamLimits

0x59eb,	// (0x00034233) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0003e04e) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0003e04e) list_setting_number_pane_vc_g

0x59f7,	// (0x0003423f) list_setting_number_pane_vc_t1_ParamLimits

0x59f7,	// (0x0003423f) list_setting_number_pane_vc_t1

0x5a0b,	// (0x00034253) list_setting_number_pane_vc_t2_ParamLimits

0x5a0b,	// (0x00034253) list_setting_number_pane_vc_t2

0x5a27,	// (0x0003426f) list_setting_number_pane_vc_t3_ParamLimits

0x5a27,	// (0x0003426f) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0003e053) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0003e053) list_setting_number_pane_vc_t

0x5a53,	// (0x0003429b) set_value_pane_vc_ParamLimits

0x5a53,	// (0x0003429b) set_value_pane_vc

0x6c3a,	// (0x00035482) list_double2_graphic_pane_vc_ParamLimits

0x6c3a,	// (0x00035482) list_double2_graphic_pane_vc

0xb4fd,	// (0x00039d45) list_double2_large_graphic_pane_vc_ParamLimits

0xb4fd,	// (0x00039d45) list_double2_large_graphic_pane_vc

0x6c3a,	// (0x00035482) list_double2_pane_vc_ParamLimits

0x6c3a,	// (0x00035482) list_double2_pane_vc

0x6c3a,	// (0x00035482) list_double_graphic_heading_pane_vc_ParamLimits

0x6c3a,	// (0x00035482) list_double_graphic_heading_pane_vc

0x6c3a,	// (0x00035482) list_double_graphic_pane_vc_ParamLimits

0x6c3a,	// (0x00035482) list_double_graphic_pane_vc

0x6c3a,	// (0x00035482) list_double_heading_pane_vc_ParamLimits

0x6c3a,	// (0x00035482) list_double_heading_pane_vc

0xb4fd,	// (0x00039d45) list_double_large_graphic_pane_vc_ParamLimits

0xb4fd,	// (0x00039d45) list_double_large_graphic_pane_vc

0x6c3a,	// (0x00035482) list_double_number_pane_vc_ParamLimits

0x6c3a,	// (0x00035482) list_double_number_pane_vc

0x6c3a,	// (0x00035482) list_double_pane_vc_ParamLimits

0x6c3a,	// (0x00035482) list_double_pane_vc

0x6c3a,	// (0x00035482) list_double_time_pane_vc_ParamLimits

0x6c3a,	// (0x00035482) list_double_time_pane_vc

0x6c3a,	// (0x00035482) list_setting_number_pane_vc_ParamLimits

0x6c3a,	// (0x00035482) list_setting_number_pane_vc

0x6c3a,	// (0x00035482) list_setting_pane_vc_ParamLimits

0x6c3a,	// (0x00035482) list_setting_pane_vc

0x6c3a,	// (0x00035482) list_single_graphic_heading_pane_vc_ParamLimits

0x6c3a,	// (0x00035482) list_single_graphic_heading_pane_vc

0x6c3a,	// (0x00035482) list_single_heading_pane_vc_ParamLimits

0x6c3a,	// (0x00035482) list_single_heading_pane_vc

0xb50e,	// (0x00039d56) list_single_number_heading_pane_vc_ParamLimits

0xb50e,	// (0x00039d56) list_single_number_heading_pane_vc

0x9af5,	// (0x0003833d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9af5,	// (0x0003833d) list_double_graphic_heading_pane_vc_g1

0x629b,	// (0x00034ae3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x629b,	// (0x00034ae3) list_double_graphic_heading_pane_vc_g2

0xb1bd,	// (0x00039a05) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb1bd,	// (0x00039a05) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x0003e023) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0003e023) list_double_graphic_heading_pane_vc_g

0x9c1e,	// (0x00038466) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x9c1e,	// (0x00038466) list_double_graphic_heading_pane_vc_t1

0x9b17,	// (0x0003835f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9b17,	// (0x0003835f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x0003e251) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0003e251) list_double_graphic_heading_pane_vc_t

0x59df,	// (0x00034227) list_setting_pane_vc_g1_ParamLimits

0x59df,	// (0x00034227) list_setting_pane_vc_g1

0x59eb,	// (0x00034233) list_setting_pane_vc_g2_ParamLimits

0x59eb,	// (0x00034233) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0003e04e) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0003e04e) list_setting_pane_vc_g

0x720d,	// (0x00035a55) list_setting_pane_vc_t1_ParamLimits

0x720d,	// (0x00035a55) list_setting_pane_vc_t1

0x7229,	// (0x00035a71) list_setting_pane_vc_t2_ParamLimits

0x7229,	// (0x00035a71) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x0003e27f) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x0003e27f) list_setting_pane_vc_t

0x5a53,	// (0x0003429b) set_value_pane_cp_vc_ParamLimits

0x5a53,	// (0x0003429b) set_value_pane_cp_vc

0x629b,	// (0x00034ae3) list_single_number_heading_pane_vc_g1_ParamLimits

0x629b,	// (0x00034ae3) list_single_number_heading_pane_vc_g1

0xb1bd,	// (0x00039a05) list_single_number_heading_pane_vc_g2_ParamLimits

0xb1bd,	// (0x00039a05) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003e044) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003e044) list_single_number_heading_pane_vc_g

0x9b17,	// (0x0003835f) list_single_number_heading_pane_vc_t1_ParamLimits

0x9b17,	// (0x0003835f) list_single_number_heading_pane_vc_t1

0x9c32,	// (0x0003847a) list_single_number_heading_pane_vc_t2_ParamLimits

0x9c32,	// (0x0003847a) list_single_number_heading_pane_vc_t2

0x9c46,	// (0x0003848e) list_single_number_heading_pane_vc_t3_ParamLimits

0x9c46,	// (0x0003848e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x0003e284) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0003e284) list_single_number_heading_pane_vc_t

0x9af5,	// (0x0003833d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9af5,	// (0x0003833d) list_single_graphic_heading_pane_vc_g1

0x629b,	// (0x00034ae3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x629b,	// (0x00034ae3) list_single_graphic_heading_pane_vc_g4

0xb1bd,	// (0x00039a05) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xb1bd,	// (0x00039a05) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0003e023) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0003e023) list_single_graphic_heading_pane_vc_g

0x9b17,	// (0x0003835f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9b17,	// (0x0003835f) list_single_graphic_heading_pane_vc_t1

0x9c58,	// (0x000384a0) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x9c58,	// (0x000384a0) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0003e28b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0003e28b) list_single_graphic_heading_pane_vc_t

0x629b,	// (0x00034ae3) list_double2_pane_vc_g1_ParamLimits

0x629b,	// (0x00034ae3) list_double2_pane_vc_g1

0xb1bd,	// (0x00039a05) list_double2_pane_vc_g2_ParamLimits

0xb1bd,	// (0x00039a05) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003e044) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003e044) list_double2_pane_vc_g

0x9c6c,	// (0x000384b4) list_double2_pane_vc_t1_ParamLimits

0x9c6c,	// (0x000384b4) list_double2_pane_vc_t1

0xb66a,	// (0x00039eb2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb66a,	// (0x00039eb2) list_double2_large_graphic_pane_vc_g1

0xb676,	// (0x00039ebe) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb676,	// (0x00039ebe) list_double2_large_graphic_pane_vc_g2

0xb682,	// (0x00039eca) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb682,	// (0x00039eca) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa48,	// (0x0003e290) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0003e290) list_double2_large_graphic_pane_vc_g

0x9c82,	// (0x000384ca) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x9c82,	// (0x000384ca) list_double2_large_graphic_pane_vc_t1

0xb68e,	// (0x00039ed6) list_double_time_pane_vc_g1_ParamLimits

0xb68e,	// (0x00039ed6) list_double_time_pane_vc_g1

0xb69a,	// (0x00039ee2) list_double_time_pane_vc_g2_ParamLimits

0xb69a,	// (0x00039ee2) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x0003e297) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x0003e297) list_double_time_pane_vc_g

0x9c98,	// (0x000384e0) list_double_time_pane_vc_t1_ParamLimits

0x9c98,	// (0x000384e0) list_double_time_pane_vc_t1

0x9cb3,	// (0x000384fb) list_double_time_pane_vc_t2_ParamLimits

0x9cb3,	// (0x000384fb) list_double_time_pane_vc_t2

0x9cf3,	// (0x0003853b) list_double_time_pane_vc_t3_ParamLimits

0x9cf3,	// (0x0003853b) list_double_time_pane_vc_t3

0x9d0b,	// (0x00038553) list_double_time_pane_vc_t4_ParamLimits

0x9d0b,	// (0x00038553) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x0003e29c) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x0003e29c) list_double_time_pane_vc_t

0x629b,	// (0x00034ae3) list_double_pane_vc_g1_ParamLimits

0x629b,	// (0x00034ae3) list_double_pane_vc_g1

0xb1bd,	// (0x00039a05) list_double_pane_vc_g2_ParamLimits

0xb1bd,	// (0x00039a05) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003e044) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003e044) list_double_pane_vc_g

0x9d1f,	// (0x00038567) list_double_pane_vc_t1_ParamLimits

0x9d1f,	// (0x00038567) list_double_pane_vc_t1

0x9d33,	// (0x0003857b) list_double_pane_vc_t2_ParamLimits

0x9d33,	// (0x0003857b) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x0003e2a5) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x0003e2a5) list_double_pane_vc_t

0x629b,	// (0x00034ae3) list_double_number_pane_vc_g1_ParamLimits

0x629b,	// (0x00034ae3) list_double_number_pane_vc_g1

0xb1bd,	// (0x00039a05) list_double_number_pane_vc_g2_ParamLimits

0xb1bd,	// (0x00039a05) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003e044) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003e044) list_double_number_pane_vc_g

0x9d4b,	// (0x00038593) list_double_number_pane_vc_t1_ParamLimits

0x9d4b,	// (0x00038593) list_double_number_pane_vc_t1

0x9d5f,	// (0x000385a7) list_double_number_pane_vc_t2_ParamLimits

0x9d5f,	// (0x000385a7) list_double_number_pane_vc_t2

0x9d33,	// (0x0003857b) list_double_number_pane_vc_t3_ParamLimits

0x9d33,	// (0x0003857b) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x0003e2aa) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x0003e2aa) list_double_number_pane_vc_t

0xb6a6,	// (0x00039eee) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb6a6,	// (0x00039eee) list_double_large_graphic_pane_vc_g1

0xb6b2,	// (0x00039efa) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb6b2,	// (0x00039efa) list_double_large_graphic_pane_vc_g2

0xb682,	// (0x00039eca) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb682,	// (0x00039eca) list_double_large_graphic_pane_vc_g3

0x9d73,	// (0x000385bb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x9d73,	// (0x000385bb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x0003e2b1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x0003e2b1) list_double_large_graphic_pane_vc_g

0x9d7f,	// (0x000385c7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x9d7f,	// (0x000385c7) list_double_large_graphic_pane_vc_t1

0x9d93,	// (0x000385db) list_double_large_graphic_pane_vc_t2_ParamLimits

0x9d93,	// (0x000385db) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x0003e2ba) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x0003e2ba) list_double_large_graphic_pane_vc_t

0x629b,	// (0x00034ae3) list_double_heading_pane_vc_g1_ParamLimits

0x629b,	// (0x00034ae3) list_double_heading_pane_vc_g1

0xb1bd,	// (0x00039a05) list_double_heading_pane_vc_g2_ParamLimits

0xb1bd,	// (0x00039a05) list_double_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003e044) list_double_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003e044) list_double_heading_pane_vc_g

0x9dac,	// (0x000385f4) list_double_heading_pane_vc_t1_ParamLimits

0x9dac,	// (0x000385f4) list_double_heading_pane_vc_t1

0x9b17,	// (0x0003835f) list_double_heading_pane_vc_t2_ParamLimits

0x9b17,	// (0x0003835f) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x0003e2bf) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x0003e2bf) list_double_heading_pane_vc_t

0x9af5,	// (0x0003833d) list_double_graphic_pane_vc_g1_ParamLimits

0x9af5,	// (0x0003833d) list_double_graphic_pane_vc_g1

0xb6c1,	// (0x00039f09) list_double_graphic_pane_vc_g2_ParamLimits

0xb6c1,	// (0x00039f09) list_double_graphic_pane_vc_g2

0xb6d0,	// (0x00039f18) list_double_graphic_pane_vc_g3_ParamLimits

0xb6d0,	// (0x00039f18) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x0003e2c4) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x0003e2c4) list_double_graphic_pane_vc_g

0x9dc0,	// (0x00038608) list_double_graphic_pane_vc_t1_ParamLimits

0x9dc0,	// (0x00038608) list_double_graphic_pane_vc_t1

0x9d33,	// (0x0003857b) list_double_graphic_pane_vc_t2_ParamLimits

0x9d33,	// (0x0003857b) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0003e2cb) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0003e2cb) list_double_graphic_pane_vc_t

0xa0d6,	// (0x0003891e) aid_size_cell_fastswap

0xa0de,	// (0x00038926) aid_size_cell_touch_ParamLimits

0xa0de,	// (0x00038926) aid_size_cell_touch

0xa339,	// (0x00038b81) popup_fast_swap_wide_window_ParamLimits

0xa339,	// (0x00038b81) popup_fast_swap_wide_window

0xa443,	// (0x00038c8b) touch_pane_ParamLimits

0xa443,	// (0x00038c8b) touch_pane

0x48d6,	// (0x0003311e) button_value_adjust_pane_cp2

0x9795,	// (0x00037fdd) button_value_adjust_pane_cp4

0x97b9,	// (0x00038001) form_field_data_pane_cp2

0x97da,	// (0x00038022) form_field_data_wide_pane_cp2

0x4d54,	// (0x0003359c) bg_scroll_pane_ParamLimits

0xab7a,	// (0x000393c2) scroll_handle_pane_ParamLimits

0xab8e,	// (0x000393d6) scroll_sc2_down_pane_ParamLimits

0xab8e,	// (0x000393d6) scroll_sc2_down_pane

0x4d85,	// (0x000335cd) scroll_sc2_up_pane_ParamLimits

0x4d85,	// (0x000335cd) scroll_sc2_up_pane

0xd69f,	// (0x0003bee7) grid_wheel_folder_pane_g1_ParamLimits

0xd69f,	// (0x0003bee7) grid_wheel_folder_pane_g1

0xae16,	// (0x0003965e) clock_nsta_pane_cp2_ParamLimits

0xae16,	// (0x0003965e) clock_nsta_pane_cp2

0xa929,	// (0x00039171) listscroll_midp_pane_ParamLimits

0xaecb,	// (0x00039713) midp_canvas_pane

0x564f,	// (0x00033e97) nsta_clock_indic_pane

0x5687,	// (0x00033ecf) listscroll_form_pane_vc

0x568f,	// (0x00033ed7) listscroll_set_pane_vc_ParamLimits

0x568f,	// (0x00033ed7) listscroll_set_pane_vc

0xce48,	// (0x0003b690) clock_nsta_pane

0xce55,	// (0x0003b69d) indicator_nsta_pane

0x58d5,	// (0x0003411d) bg_popup_sub_pane_cp2_ParamLimits

0x58e9,	// (0x00034131) find_pane_cp2_ParamLimits

0x58e9,	// (0x00034131) find_pane_cp2

0x58ff,	// (0x00034147) grid_toobar_pane_ParamLimits

0x5a63,	// (0x000342ab) list_form_gen_pane_vc_ParamLimits

0x5a63,	// (0x000342ab) list_form_gen_pane_vc

0x5a79,	// (0x000342c1) scroll_pane_cp8_vc_ParamLimits

0x5a79,	// (0x000342c1) scroll_pane_cp8_vc

0x5ac9,	// (0x00034311) data_form_wide_pane_vc_ParamLimits

0x5ac9,	// (0x00034311) data_form_wide_pane_vc

0x5ad5,	// (0x0003431d) form_field_data_wide_pane_vc_g1

0x5add,	// (0x00034325) form_field_data_wide_pane_vc_t1_ParamLimits

0x5add,	// (0x00034325) form_field_data_wide_pane_vc_t1

0x48ea,	// (0x00033132) input_focus_pane_cp6_vc_ParamLimits

0x48ea,	// (0x00033132) input_focus_pane_cp6_vc

0xd198,	// (0x0003b9e0) list_midp_pane_ParamLimits

0xd1a4,	// (0x0003b9ec) scroll_pane_cp16_ParamLimits

0xd1a4,	// (0x0003b9ec) scroll_pane_cp16

0x5d5e,	// (0x000345a6) button_value_adjust_pane_ParamLimits

0x5d5e,	// (0x000345a6) button_value_adjust_pane

0xd2ea,	// (0x0003bb32) button_value_adjust_pane_cp6_ParamLimits

0xd2ea,	// (0x0003bb32) button_value_adjust_pane_cp6

0xd414,	// (0x0003bc5c) settings_code_pane_cp_ParamLimits

0xd414,	// (0x0003bc5c) settings_code_pane_cp

0x20c4,	// (0x0003090c) cell_touch_pane_g1

0x20c4,	// (0x0003090c) cell_touch_pane_g2

0x0001,

0xf720,	// (0x0003df68) cell_touch_pane_g

0xd56b,	// (0x0003bdb3) cell_touch_pane_cp_ParamLimits

0xd56b,	// (0x0003bdb3) cell_touch_pane_cp

0xd57b,	// (0x0003bdc3) cell_touch_pane_ParamLimits

0xd57b,	// (0x0003bdc3) cell_touch_pane

0x20c4,	// (0x0003090c) scroll_sc2_down_pane_g1

0x20c4,	// (0x0003090c) scroll_sc2_up_pane_g1

0x20ce,	// (0x00030916) bg_set_opt_pane_cp4_vc

0x7009,	// (0x00035851) list_set_graphic_pane_vc_g1_ParamLimits

0x7009,	// (0x00035851) list_set_graphic_pane_vc_g1

0x7015,	// (0x0003585d) list_set_graphic_pane_vc_g2_ParamLimits

0x7015,	// (0x0003585d) list_set_graphic_pane_vc_g2

0x0001,

0xfa0e,	// (0x0003e256) list_set_graphic_pane_vc_g_ParamLimits

0xfa0e,	// (0x0003e256) list_set_graphic_pane_vc_g

0x7021,	// (0x00035869) text_primary_small_cp13_vc_ParamLimits

0x7021,	// (0x00035869) text_primary_small_cp13_vc

0x7039,	// (0x00035881) list_set_graphic_pane_vc_ParamLimits

0x7039,	// (0x00035881) list_set_graphic_pane_vc

0x20ce,	// (0x00030916) input_focus_pane_cp2_vc

0x20c4,	// (0x0003090c) setting_code_pane_vc_g1

0x704d,	// (0x00035895) setting_code_pane_vc_t1

0x705b,	// (0x000358a3) set_text_pane_vc_t1_ParamLimits

0x705b,	// (0x000358a3) set_text_pane_vc_t1

0x20ce,	// (0x00030916) input_focus_pane_cp1_vc

0x7076,	// (0x000358be) list_set_text_pane_vc

0x20c4,	// (0x0003090c) setting_text_pane_vc_g1

0x20ce,	// (0x00030916) bg_set_opt_pane_cp2_vc

0x7080,	// (0x000358c8) setting_slider_graphic_pane_vc_g1

0x7088,	// (0x000358d0) setting_slider_graphic_pane_vc_t1

0x7096,	// (0x000358de) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa13,	// (0x0003e25b) setting_slider_graphic_pane_vc_t

0x70a4,	// (0x000358ec) slider_set_pane_cp_vc

0x70ac,	// (0x000358f4) slider_set_pane_vc_g1

0x70b5,	// (0x000358fd) slider_set_pane_vc_g2

0x0006,

0xfa18,	// (0x0003e260) slider_set_pane_vc_g

0x4951,	// (0x00033199) set_opt_bg_pane_g1_copy1

0x4959,	// (0x000331a1) set_opt_bg_pane_g2_copy1

0x70e1,	// (0x00035929) set_opt_bg_pane_g3_copy1

0x4969,	// (0x000331b1) set_opt_bg_pane_g4_copy1

0x4971,	// (0x000331b9) set_opt_bg_pane_g5_copy1

0x4979,	// (0x000331c1) set_opt_bg_pane_g6_copy1

0x70eb,	// (0x00035933) set_opt_bg_pane_g7_copy1

0x70f3,	// (0x0003593b) set_opt_bg_pane_g8_copy1

0x70fd,	// (0x00035945) set_opt_bg_pane_g9_copy1

0x20ce,	// (0x00030916) bg_set_opt_pane_cp_vc

0x7107,	// (0x0003594f) setting_slider_pane_vc_t1

0x7088,	// (0x000358d0) setting_slider_pane_vc_t2

0x7096,	// (0x000358de) setting_slider_pane_vc_t3

0x0002,

0xfa27,	// (0x0003e26f) setting_slider_pane_vc_t

0x70a4,	// (0x000358ec) slider_set_pane_vc

0xb2d1,	// (0x00039b19) volume_set_pane_vc_g1

0xb2da,	// (0x00039b22) volume_set_pane_vc_g2

0xb2e3,	// (0x00039b2b) volume_set_pane_vc_g3

0xb2ec,	// (0x00039b34) volume_set_pane_vc_g4

0xb2f5,	// (0x00039b3d) volume_set_pane_vc_g5

0xb2fe,	// (0x00039b46) volume_set_pane_vc_g6

0xb307,	// (0x00039b4f) volume_set_pane_vc_g7

0xb310,	// (0x00039b58) volume_set_pane_vc_g8

0xb319,	// (0x00039b61) volume_set_pane_vc_g9

0xb322,	// (0x00039b6a) volume_set_pane_vc_g10

0x0009,

0xf8cc,	// (0x0003e114) volume_set_pane_vc_g

0x7116,	// (0x0003595e) volume_set_pane_vc

0x711e,	// (0x00035966) button_value_adjust_pane_cp1_vc

0x7128,	// (0x00035970) list_highlight_pane_cp2_vc

0x7131,	// (0x00035979) list_set_pane_vc_ParamLimits

0x7131,	// (0x00035979) list_set_pane_vc

0x719b,	// (0x000359e3) main_pane_set_vc_t1_ParamLimits

0x719b,	// (0x000359e3) main_pane_set_vc_t1

0x71b0,	// (0x000359f8) main_pane_set_vc_t2_ParamLimits

0x71b0,	// (0x000359f8) main_pane_set_vc_t2

0x71c2,	// (0x00035a0a) main_pane_set_vc_t3_ParamLimits

0x71c2,	// (0x00035a0a) main_pane_set_vc_t3

0x71d6,	// (0x00035a1e) main_pane_set_vc_t4_ParamLimits

0x71d6,	// (0x00035a1e) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x0003e276) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x0003e276) main_pane_set_vc_t

0x71ea,	// (0x00035a32) setting_code_pane_vc_ParamLimits

0x71ea,	// (0x00035a32) setting_code_pane_vc

0x71fb,	// (0x00035a43) setting_slider_graphic_pane_vc

0x71fb,	// (0x00035a43) setting_slider_pane_vc

0x71fb,	// (0x00035a43) setting_text_pane_vc

0x71fb,	// (0x00035a43) setting_volume_pane_vc

0x7205,	// (0x00035a4d) scroll_pane_cp121_vc

0x48c4,	// (0x0003310c) set_content_pane_vc

0x7245,	// (0x00035a8d) button_value_adjust_pane_g1

0x724e,	// (0x00035a96) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0003e2d0) button_value_adjust_pane_g

0x7257,	// (0x00035a9f) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7257,	// (0x00035a9f) form_field_slider_wide_pane_vc_t1

0x726b,	// (0x00035ab3) form_field_slider_wide_pane_vc_t2_ParamLimits

0x726b,	// (0x00035ab3) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8d,	// (0x0003e2d5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0003e2d5) form_field_slider_wide_pane_vc_t

0x211c,	// (0x00030964) input_focus_pane_cp10_vc_ParamLimits

0x211c,	// (0x00030964) input_focus_pane_cp10_vc

0x727f,	// (0x00035ac7) slider_cont_pane_cp1_vc_ParamLimits

0x727f,	// (0x00035ac7) slider_cont_pane_cp1_vc

0x70ac,	// (0x000358f4) slider_form_pane_g1_cp2

0x70b5,	// (0x000358fd) slider_form_pane_g2_cp2

0x729a,	// (0x00035ae2) form_field_slider_pane_vc_t3

0x72a8,	// (0x00035af0) form_field_slider_pane_vc_t4

0x72b6,	// (0x00035afe) slider_form_pane_vc_ParamLimits

0x72b6,	// (0x00035afe) slider_form_pane_vc

0x72c3,	// (0x00035b0b) form_field_slider_pane_vc_t1_ParamLimits

0x72c3,	// (0x00035b0b) form_field_slider_pane_vc_t1

0x726b,	// (0x00035ab3) form_field_slider_pane_vc_t2_ParamLimits

0x726b,	// (0x00035ab3) form_field_slider_pane_vc_t2

0x0001,

0xfa9d,	// (0x0003e2e5) form_field_slider_pane_vc_t_ParamLimits

0xfa9d,	// (0x0003e2e5) form_field_slider_pane_vc_t

0x211c,	// (0x00030964) input_focus_pane_cp9_vc_ParamLimits

0x211c,	// (0x00030964) input_focus_pane_cp9_vc

0x72df,	// (0x00035b27) slider_cont_pane_vc_ParamLimits

0x72df,	// (0x00035b27) slider_cont_pane_vc

0x72f3,	// (0x00035b3b) list_form_graphic_pane_cp_vc_ParamLimits

0x72f3,	// (0x00035b3b) list_form_graphic_pane_cp_vc

0x5ad5,	// (0x0003431d) form_field_popup_wide_pane_vc_g1

0x7308,	// (0x00035b50) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7308,	// (0x00035b50) form_field_popup_wide_pane_vc_t1

0x48ea,	// (0x00033132) input_focus_pane_cp8_vc_ParamLimits

0x48ea,	// (0x00033132) input_focus_pane_cp8_vc

0x731f,	// (0x00035b67) list_form_wide_pane_vc_ParamLimits

0x731f,	// (0x00035b67) list_form_wide_pane_vc

0x732b,	// (0x00035b73) list_form_graphic_pane_vc_g1

0x7333,	// (0x00035b7b) list_form_graphic_pane_vc_t1_ParamLimits

0x7333,	// (0x00035b7b) list_form_graphic_pane_vc_t1

0x212a,	// (0x00030972) list_highlight_pane_cp5_vc_ParamLimits

0x212a,	// (0x00030972) list_highlight_pane_cp5_vc

0x734f,	// (0x00035b97) list_form_graphic_pane_vc_ParamLimits

0x734f,	// (0x00035b97) list_form_graphic_pane_vc

0x5ad5,	// (0x0003431d) form_field_popup_pane_vc_g1

0x7365,	// (0x00035bad) form_field_popup_pane_vc_t1_ParamLimits

0x7365,	// (0x00035bad) form_field_popup_pane_vc_t1

0x48ea,	// (0x00033132) input_focus_pane_cp7_vc_ParamLimits

0x48ea,	// (0x00033132) input_focus_pane_cp7_vc

0x737c,	// (0x00035bc4) list_form_pane_vc_ParamLimits

0x737c,	// (0x00035bc4) list_form_pane_vc

0x7388,	// (0x00035bd0) data_form_pane_vc_t1_ParamLimits

0x7388,	// (0x00035bd0) data_form_pane_vc_t1

0x4951,	// (0x00033199) input_focus_pane_vc_g1

0x4959,	// (0x000331a1) input_focus_pane_vc_g2

0x4961,	// (0x000331a9) input_focus_pane_vc_g3

0x4969,	// (0x000331b1) input_focus_pane_vc_g4

0x4971,	// (0x000331b9) input_focus_pane_vc_g5

0x4979,	// (0x000331c1) input_focus_pane_vc_g6

0x4981,	// (0x000331c9) input_focus_pane_vc_g7

0x4989,	// (0x000331d1) input_focus_pane_vc_g8

0x4991,	// (0x000331d9) input_focus_pane_vc_g9

0x20c4,	// (0x0003090c) input_focus_pane_vc_g10

0x0009,

0xf6a9,	// (0x0003def1) input_focus_pane_vc_g

0x5ac9,	// (0x00034311) data_form_pane_vc_ParamLimits

0x5ac9,	// (0x00034311) data_form_pane_vc

0x5ad5,	// (0x0003431d) form_field_data_pane_vc_g1

0x73a3,	// (0x00035beb) form_field_data_pane_vc_t1_ParamLimits

0x73a3,	// (0x00035beb) form_field_data_pane_vc_t1

0x48ea,	// (0x00033132) input_focus_pane_vc_ParamLimits

0x48ea,	// (0x00033132) input_focus_pane_vc

0x73bd,	// (0x00035c05) button_value_adjust_pane_cp3_vc

0x73c5,	// (0x00035c0d) button_value_adjust_pane_cp5_vc

0x73cd,	// (0x00035c15) form_field_data_pane_vc_ParamLimits

0x73cd,	// (0x00035c15) form_field_data_pane_vc

0x73e4,	// (0x00035c2c) form_field_data_pane_vc_cp2

0x73ec,	// (0x00035c34) form_field_data_wide_pane_vc_ParamLimits

0x73ec,	// (0x00035c34) form_field_data_wide_pane_vc

0x7402,	// (0x00035c4a) form_field_data_wide_pane_vc_cp2

0x740a,	// (0x00035c52) form_field_popup_pane_vc_ParamLimits

0x740a,	// (0x00035c52) form_field_popup_pane_vc

0x7421,	// (0x00035c69) form_field_popup_wide_pane_vc_ParamLimits

0x7421,	// (0x00035c69) form_field_popup_wide_pane_vc

0x7437,	// (0x00035c7f) form_field_slider_pane_vc_ParamLimits

0x7437,	// (0x00035c7f) form_field_slider_pane_vc

0x744a,	// (0x00035c92) form_field_slider_wide_pane_vc_ParamLimits

0x744a,	// (0x00035c92) form_field_slider_wide_pane_vc

0xd58d,	// (0x0003bdd5) grid_touch_1_pane_ParamLimits

0xd58d,	// (0x0003bdd5) grid_touch_1_pane

0xd599,	// (0x0003bde1) grid_touch_2_pane_ParamLimits

0xd599,	// (0x0003bde1) grid_touch_2_pane

0x5641,	// (0x00033e89) touch_pane_g1_ParamLimits

0x5641,	// (0x00033e89) touch_pane_g1

0x746b,	// (0x00035cb3) cell_app_pane_cp_wide_ParamLimits

0x746b,	// (0x00035cb3) cell_app_pane_cp_wide

0x747c,	// (0x00035cc4) grid_popup_fast_wide_pane_ParamLimits

0x747c,	// (0x00035cc4) grid_popup_fast_wide_pane

0x7490,	// (0x00035cd8) scroll_pane_cp19_ParamLimits

0x7490,	// (0x00035cd8) scroll_pane_cp19

0x20ce,	// (0x00030916) bg_popup_window_pane_cp20

0x74a4,	// (0x00035cec) listscroll_popup_fast_wide_pane

0x212a,	// (0x00030972) grid_indicator_nsta_pane

0x74ac,	// (0x00035cf4) clock_nsta_pane_g1

0x74b5,	// (0x00035cfd) clock_nsta_pane_t1

0xd5b1,	// (0x0003bdf9) cell_indicator_nsta_pane_ParamLimits

0xd5b1,	// (0x0003bdf9) cell_indicator_nsta_pane

0x745d,	// (0x00035ca5) cell_indicator_nsta_pane_g1

0xd5e9,	// (0x0003be31) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0003e2ef) cell_indicator_nsta_pane_g

0x74d1,	// (0x00035d19) clock_nsta_pane_cp

0x74d9,	// (0x00035d21) indicator_nsta_pane_cp

0x74e2,	// (0x00035d2a) nsta_clock_indic_pane_g1

0x2166,	// (0x000309ae) grid_indicator_pane

0x4e7a,	// (0x000336c2) scroll_pane_cp29

0xad65,	// (0x000395ad) indicator_nsta_pane_cp2_ParamLimits

0xad65,	// (0x000395ad) indicator_nsta_pane_cp2

0x212a,	// (0x00030972) main_apps_wheel_pane

0x5bf1,	// (0x00034439) form_midp_field_text_pane_ParamLimits

0x5d30,	// (0x00034578) scroll_bar_cp050_ParamLimits

0x754b,	// (0x00035d93) cell_indicator_pane_ParamLimits

0x754b,	// (0x00035d93) cell_indicator_pane

0x7562,	// (0x00035daa) cell_indicator_pane_g1

0xd5ff,	// (0x0003be47) grid_wheel_folder_pane_ParamLimits

0xd5ff,	// (0x0003be47) grid_wheel_folder_pane

0xd613,	// (0x0003be5b) list_wheel_apps_pane_ParamLimits

0xd613,	// (0x0003be5b) list_wheel_apps_pane

0xd624,	// (0x0003be6c) main_apps_wheel_pane_g1_ParamLimits

0xd624,	// (0x0003be6c) main_apps_wheel_pane_g1

0xd638,	// (0x0003be80) main_apps_wheel_pane_g2_ParamLimits

0xd638,	// (0x0003be80) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0003e30b) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0003e30b) main_apps_wheel_pane_g

0xd650,	// (0x0003be98) main_apps_wheel_pane_t1_ParamLimits

0xd650,	// (0x0003be98) main_apps_wheel_pane_t1

0xd673,	// (0x0003bebb) list_wheel_apps_pane_g1

0xd67b,	// (0x0003bec3) list_wheel_apps_pane_g2

0xd683,	// (0x0003becb) list_wheel_apps_pane_g3

0xd68b,	// (0x0003bed3) list_wheel_apps_pane_g4

0xd695,	// (0x0003bedd) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0003e310) list_wheel_apps_pane_g

0x52b3,	// (0x00033afb) navi_icon_text_pane

0xcd90,	// (0x0003b5d8) aid_fill_nsta

0x756c,	// (0x00035db4) navi_icon_text_pane_g1

0x7578,	// (0x00035dc0) navi_icon_text_pane_t1

0xaeb3,	// (0x000396fb) list_set_graphic_pane_t1_ParamLimits

0xaeb3,	// (0x000396fb) list_set_graphic_pane_t1

0x6493,	// (0x00034cdb) popup_midp_note_alarm_window_t6_ParamLimits

0x6493,	// (0x00034cdb) popup_midp_note_alarm_window_t6

0x64a5,	// (0x00034ced) popup_midp_note_alarm_window_t7_ParamLimits

0x64a5,	// (0x00034ced) popup_midp_note_alarm_window_t7

0x64b7,	// (0x00034cff) popup_midp_note_alarm_window_t8_ParamLimits

0x64b7,	// (0x00034cff) popup_midp_note_alarm_window_t8

0x64c9,	// (0x00034d11) popup_midp_note_alarm_window_t9_ParamLimits

0x64c9,	// (0x00034d11) popup_midp_note_alarm_window_t9

0x64db,	// (0x00034d23) popup_midp_note_alarm_window_t10_ParamLimits

0x64db,	// (0x00034d23) popup_midp_note_alarm_window_t10

0x64ed,	// (0x00034d35) popup_midp_note_alarm_window_t11_ParamLimits

0x64ed,	// (0x00034d35) popup_midp_note_alarm_window_t11

0x64ff,	// (0x00034d47) scroll_pane_cp17_ParamLimits

0x64ff,	// (0x00034d47) scroll_pane_cp17

0xb2d1,	// (0x00039b19) volume_small_pane_cp_g1

0xb6dc,	// (0x00039f24) volume_small_pane_cp_g2

0xb6e5,	// (0x00039f2d) volume_small_pane_cp_g3

0xb6ee,	// (0x00039f36) volume_small_pane_cp_g4

0xb6f7,	// (0x00039f3f) volume_small_pane_cp_g5

0xb700,	// (0x00039f48) volume_small_pane_cp_g6

0xb709,	// (0x00039f51) volume_small_pane_cp_g7

0xb712,	// (0x00039f5a) volume_small_pane_cp_g8

0xb71b,	// (0x00039f63) volume_small_pane_cp_g9

0xb724,	// (0x00039f6c) volume_small_pane_cp_g10

0x545d,	// (0x00033ca5) midp_ticker_pane_g1_ParamLimits

0x5469,	// (0x00033cb1) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0003dfbd) midp_ticker_pane_g_ParamLimits

0x5475,	// (0x00033cbd) midp_ticker_pane_t1_ParamLimits

0xcda6,	// (0x0003b5ee) aid_fill_nsta_2

0x5d1c,	// (0x00034564) list_form2_midp_pane

0x6c09,	// (0x00035451) midp_editing_number_pane_ParamLimits

0x6c18,	// (0x00035460) midp_ticker_pane_ParamLimits

0x758a,	// (0x00035dd2) form2_midp_field_pane

0x7592,	// (0x00035dda) scroll_pane_cp51

0x75b2,	// (0x00035dfa) form2_midp_button_pane_ParamLimits

0x75b2,	// (0x00035dfa) form2_midp_button_pane

0x75c4,	// (0x00035e0c) form2_midp_content_pane_ParamLimits

0x75c4,	// (0x00035e0c) form2_midp_content_pane

0x75de,	// (0x00035e26) form2_midp_field_choice_group_pane

0x75e6,	// (0x00035e2e) form2_midp_field_pane_g1

0x75ee,	// (0x00035e36) form2_midp_field_pane_g2

0x75f6,	// (0x00035e3e) form2_midp_field_pane_g3

0x75fe,	// (0x00035e46) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0003e335) form2_midp_field_pane_g

0x7606,	// (0x00035e4e) form2_midp_gauge_slider_pane

0x760e,	// (0x00035e56) form2_midp_gauge_wait_pane

0x7616,	// (0x00035e5e) form2_midp_image_pane_ParamLimits

0x7616,	// (0x00035e5e) form2_midp_image_pane

0x7631,	// (0x00035e79) form2_midp_label_pane_ParamLimits

0x7631,	// (0x00035e79) form2_midp_label_pane

0xd6d4,	// (0x0003bf1c) form2_midp_label_pane_cp_ParamLimits

0xd6d4,	// (0x0003bf1c) form2_midp_label_pane_cp

0x764a,	// (0x00035e92) form2_midp_string_pane_ParamLimits

0x764a,	// (0x00035e92) form2_midp_string_pane

0x9dd4,	// (0x0003861c) form2_midp_text_pane_ParamLimits

0x9dd4,	// (0x0003861c) form2_midp_text_pane

0x765c,	// (0x00035ea4) form2_midp_time_pane

0x766c,	// (0x00035eb4) input_focus_pane_cp51_ParamLimits

0x766c,	// (0x00035eb4) input_focus_pane_cp51

0x7684,	// (0x00035ecc) form2_midp_label_pane_t1_ParamLimits

0x7684,	// (0x00035ecc) form2_midp_label_pane_t1

0x9df3,	// (0x0003863b) form2_mdip_text_pane_t1_ParamLimits

0x9df3,	// (0x0003863b) form2_mdip_text_pane_t1

0x9e11,	// (0x00038659) form2_midp_time_pane_t1

0x76cd,	// (0x00035f15) form2_midp_gauge_slider_pane_t1

0xd6f5,	// (0x0003bf3d) form2_midp_gauge_slider_pane_t2

0xd707,	// (0x0003bf4f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0003e33e) form2_midp_gauge_slider_pane_t

0x76df,	// (0x00035f27) form2_midp_slider_pane

0x76eb,	// (0x00035f33) form2_midp_gauge_wait_pane_t1

0x76f9,	// (0x00035f41) form2_midp_wait_pane_ParamLimits

0x76f9,	// (0x00035f41) form2_midp_wait_pane

0xd0c7,	// (0x0003b90f) list_single_2graphic_pane_cp4_ParamLimits

0xd0c7,	// (0x0003b90f) list_single_2graphic_pane_cp4

0xd719,	// (0x0003bf61) list_single_midp_graphic_pane_cp_ParamLimits

0xd719,	// (0x0003bf61) list_single_midp_graphic_pane_cp

0x20ce,	// (0x00030916) list_highlight_pane_cp20

0x7724,	// (0x00035f6c) list_single_2graphic_pane_g1_cp4

0x772c,	// (0x00035f74) list_single_2graphic_pane_g2_cp4

0x7734,	// (0x00035f7c) list_single_2graphic_pane_t1_cp4

0x212a,	// (0x00030972) list_highlight_pane_cp21

0x7743,	// (0x00035f8b) list_single_midp_graphic_pane_g4_cp

0x7752,	// (0x00035f9a) list_single_midp_graphic_pane_t1_cp

0xd748,	// (0x0003bf90) form2_mdip_string_pane_t1_ParamLimits

0xd748,	// (0x0003bf90) form2_mdip_string_pane_t1

0x20ce,	// (0x00030916) bg_wml_button_pane_cp2

0x20c4,	// (0x0003090c) form2_midp_image_pane_g1

0xa88a,	// (0x000390d2) list_double_large_graphic_pane_g5_ParamLimits

0xa88a,	// (0x000390d2) list_double_large_graphic_pane_g5

0xa929,	// (0x00039171) midp_form_pane_ParamLimits

0x212a,	// (0x00030972) main_apps_wheel_pane_ParamLimits

0xcbfa,	// (0x0003b442) popup_preview_window_ParamLimits

0xcbfa,	// (0x0003b442) popup_preview_window

0x5772,	// (0x00033fba) popup_touch_info_window_ParamLimits

0x5772,	// (0x00033fba) popup_touch_info_window

0x5790,	// (0x00033fd8) popup_touch_menu_window_ParamLimits

0x5790,	// (0x00033fd8) popup_touch_menu_window

0x20ba,	// (0x00030902) bg_popup_sub_pane_cp6

0x7767,	// (0x00035faf) list_touch_menu_pane

0x776f,	// (0x00035fb7) list_single_touch_menu_pane_ParamLimits

0x776f,	// (0x00035fb7) list_single_touch_menu_pane

0x7785,	// (0x00035fcd) list_single_touch_menu_pane_t1

0x212a,	// (0x00030972) bg_popup_sub_pane_cp7_ParamLimits

0x212a,	// (0x00030972) bg_popup_sub_pane_cp7

0x7793,	// (0x00035fdb) heading_sub_pane

0x779b,	// (0x00035fe3) list_touch_info_pane_ParamLimits

0x779b,	// (0x00035fe3) list_touch_info_pane

0x77aa,	// (0x00035ff2) list_single_touch_info_pane_ParamLimits

0x77aa,	// (0x00035ff2) list_single_touch_info_pane

0x77bc,	// (0x00036004) list_single_touch_info_pane_t1

0x77ca,	// (0x00036012) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0003e34c) list_single_touch_info_pane_t

0x5433,	// (0x00033c7b) bg_popup_heading_pane_cp

0x77d8,	// (0x00036020) heading_sub_pane_t1

0x5a8f,	// (0x000342d7) bg_popup_preview_window_pane_cp_ParamLimits

0x5a8f,	// (0x000342d7) bg_popup_preview_window_pane_cp

0x7793,	// (0x00035fdb) heading_preview_pane

0x779b,	// (0x00035fe3) list_preview_pane_ParamLimits

0x779b,	// (0x00035fe3) list_preview_pane

0x77e6,	// (0x0003602e) popup_preview_window_g1

0x77aa,	// (0x00035ff2) list_single_preview_pane_ParamLimits

0x77aa,	// (0x00035ff2) list_single_preview_pane

0x77ee,	// (0x00036036) list_single_preview_pane_g1

0x77f6,	// (0x0003603e) list_single_preview_pane_t1

0x77bc,	// (0x00036004) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0003e351) list_single_preview_pane_t

0x7804,	// (0x0003604c) bg_popup_heading_pane_cp2_ParamLimits

0x7804,	// (0x0003604c) bg_popup_heading_pane_cp2

0x781a,	// (0x00036062) heading_preview_pane_g1

0x7822,	// (0x0003606a) heading_preview_pane_t1_ParamLimits

0x7822,	// (0x0003606a) heading_preview_pane_t1

0x217d,	// (0x000309c5) soft_indicator_pane_t1_ParamLimits

0x2f13,	// (0x0003175b) scroll_pane_ParamLimits

0x4d7c,	// (0x000335c4) scroll_sc2_left_pane

0x4d73,	// (0x000335bb) scroll_sc2_right_pane

0x4d9b,	// (0x000335e3) scroll_bg_pane_g1_ParamLimits

0x4db0,	// (0x000335f8) scroll_bg_pane_g2_ParamLimits

0x4dc8,	// (0x00033610) scroll_bg_pane_g3_ParamLimits

0xf700,	// (0x0003df48) scroll_bg_pane_g_ParamLimits

0x4d9b,	// (0x000335e3) scroll_handle_pane_g1_ParamLimits

0x4dea,	// (0x00033632) scroll_handle_pane_g2_ParamLimits

0x4dc8,	// (0x00033610) scroll_handle_pane_g3_ParamLimits

0xf707,	// (0x0003df4f) scroll_handle_pane_g_ParamLimits

0x56af,	// (0x00033ef7) popup_choice_list_window_ParamLimits

0x56af,	// (0x00033ef7) popup_choice_list_window

0x58e1,	// (0x00034129) choice_list_pane

0x5963,	// (0x000341ab) cell_toolbar_pane_t1

0x598b,	// (0x000341d3) toolbar_button_pane_ParamLimits

0x692b,	// (0x00035173) ai_gene_pane_1_t2_ParamLimits

0x692b,	// (0x00035173) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0003e170) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0003e170) ai_gene_pane_1_t

0x783f,	// (0x00036087) scroll_sc2_left_pane_g1

0x783f,	// (0x00036087) scroll_sc2_right_pane_g1

0x4a42,	// (0x0003328a) bg_popup_sub_pane_cp10

0x7849,	// (0x00036091) list_choice_list_pane

0x7862,	// (0x000360aa) list_single_choice_list_pane_ParamLimits

0x7862,	// (0x000360aa) list_single_choice_list_pane

0x7875,	// (0x000360bd) list_single_choice_list_pane_g1

0x4a2d,	// (0x00033275) list_single_choice_list_pane_t1_ParamLimits

0x4a2d,	// (0x00033275) list_single_choice_list_pane_t1

0x787d,	// (0x000360c5) choice_list_pane_g1

0x7885,	// (0x000360cd) choice_list_pane_t1

0x20ba,	// (0x00030902) input_focus_pane_cp11

0x4ce8,	// (0x00033530) title_pane_stacon_g2_ParamLimits

0x4ce8,	// (0x00033530) title_pane_stacon_g2

0x0002,

0xf6e6,	// (0x0003df2e) title_pane_stacon_g_ParamLimits

0xf6e6,	// (0x0003df2e) title_pane_stacon_g

0x5433,	// (0x00033c7b) cursor_press_pane

0xc99f,	// (0x0003b1e7) popup_fep_hwr_window_ParamLimits

0xc99f,	// (0x0003b1e7) popup_fep_hwr_window

0x5709,	// (0x00033f51) popup_fep_vkb_window_ParamLimits

0x5709,	// (0x00033f51) popup_fep_vkb_window

0x7893,	// (0x000360db) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0003e37a) fep_vkb_side_pane_g_ParamLimits

0xb758,	// (0x00039fa0) fep_hwr_candidate_pane_ParamLimits

0xb758,	// (0x00039fa0) fep_hwr_candidate_pane

0xb782,	// (0x00039fca) fep_hwr_side_pane_ParamLimits

0xb782,	// (0x00039fca) fep_hwr_side_pane

0xb7a2,	// (0x00039fea) fep_hwr_top_pane_ParamLimits

0xb7a2,	// (0x00039fea) fep_hwr_top_pane

0xb7ba,	// (0x0003a002) fep_hwr_write_pane_ParamLimits

0xb7ba,	// (0x0003a002) fep_hwr_write_pane

0xfb32,	// (0x0003e37a) fep_vkb_side_pane_g

0x78ad,	// (0x000360f5) fep_hwr_top_pane_g1

0x789b,	// (0x000360e3) fep_hwr_top_pane_g2

0xb7e6,	// (0x0003a02e) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0003e356) fep_hwr_top_pane_g

0xb7fb,	// (0x0003a043) fep_hwr_top_text_pane

0x4f41,	// (0x00033789) fep_hwr_top_text_pane_g1

0x78e3,	// (0x0003612b) fep_hwr_top_text_pane_t1

0xb8f1,	// (0x0003a139) fep_hwr_candidate_pane_g1

0x7a10,	// (0x00036258) fep_vkb_keypad_pane_g3_ParamLimits

0x7a10,	// (0x00036258) fep_vkb_keypad_pane_g3

0x7a38,	// (0x00036280) fep_vkb_keypad_pane_g4_ParamLimits

0x7a38,	// (0x00036280) fep_vkb_keypad_pane_g4

0x7aa7,	// (0x000362ef) fep_vkb_bottom_pane_g2_ParamLimits

0x7aa7,	// (0x000362ef) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0003e381) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0003e381) fep_vkb_bottom_pane_g

0x783f,	// (0x00036087) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0003e38b) cell_vkb_side_pane_g

0x7aeb,	// (0x00036333) cell_vkb_side_pane_t1

0x7af9,	// (0x00036341) cell_vkb_side_pane_t1_copy1

0x783f,	// (0x00036087) bg_fep_vkb_candidate_pane_g2

0x7bcf,	// (0x00036417) cell_vkb_candidate_pane_ParamLimits

0x78f1,	// (0x00036139) aid_size_cell_vkb_ParamLimits

0x78f1,	// (0x00036139) aid_size_cell_vkb

0x7bcf,	// (0x00036417) cell_vkb_candidate_pane

0xb90b,	// (0x0003a153) bg_popup_fep_shadow_pane_g1

0xd853,	// (0x0003c09b) fep_vkb_bottom_pane_ParamLimits

0xd853,	// (0x0003c09b) fep_vkb_bottom_pane

0x797e,	// (0x000361c6) fep_vkb_candidate_pane_ParamLimits

0x797e,	// (0x000361c6) fep_vkb_candidate_pane

0xd878,	// (0x0003c0c0) fep_vkb_keypad_pane_ParamLimits

0xd878,	// (0x0003c0c0) fep_vkb_keypad_pane

0xd8b4,	// (0x0003c0fc) fep_vkb_side_pane_ParamLimits

0xd8b4,	// (0x0003c0fc) fep_vkb_side_pane

0xd8f0,	// (0x0003c138) fep_vkb_top_pane_ParamLimits

0xd8f0,	// (0x0003c138) fep_vkb_top_pane

0x79a4,	// (0x000361ec) fep_vkb_top_pane_g1_ParamLimits

0x79a4,	// (0x000361ec) fep_vkb_top_pane_g1

0x79b3,	// (0x000361fb) fep_vkb_top_pane_g2_ParamLimits

0x79b3,	// (0x000361fb) fep_vkb_top_pane_g2

0x79c2,	// (0x0003620a) fep_vkb_top_pane_g3_ParamLimits

0x79c2,	// (0x0003620a) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0003e371) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0003e371) fep_vkb_top_pane_g

0x79e0,	// (0x00036228) fep_vkb_top_text_pane_ParamLimits

0x79e0,	// (0x00036228) fep_vkb_top_text_pane

0xd92c,	// (0x0003c174) fep_vkb_side_pane_g1_ParamLimits

0xd92c,	// (0x0003c174) fep_vkb_side_pane_g1

0x79ff,	// (0x00036247) grid_vkb_side_pane_ParamLimits

0x79ff,	// (0x00036247) grid_vkb_side_pane

0xb913,	// (0x0003a15b) bg_popup_fep_shadow_pane_g2

0xb91c,	// (0x0003a164) bg_popup_fep_shadow_pane_g3

0xb924,	// (0x0003a16c) bg_popup_fep_shadow_pane_g4

0xb92d,	// (0x0003a175) bg_popup_fep_shadow_pane_g5

0xb937,	// (0x0003a17f) bg_popup_fep_shadow_pane_g6

0xb93f,	// (0x0003a187) bg_popup_fep_shadow_pane_g7

0x4971,	// (0x000331b9) bg_popup_fep_shadow_pane_g8

0x7a56,	// (0x0003629e) grid_vkb_keypad_number_pane_ParamLimits

0x7a56,	// (0x0003629e) grid_vkb_keypad_number_pane

0x7a66,	// (0x000362ae) grid_vkb_keypad_pane_ParamLimits

0x7a66,	// (0x000362ae) grid_vkb_keypad_pane

0x7a8c,	// (0x000362d4) fep_vkb_bottom_pane_g1_ParamLimits

0x7a8c,	// (0x000362d4) fep_vkb_bottom_pane_g1

0x7ab5,	// (0x000362fd) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7ab5,	// (0x000362fd) grid_vkb_keypad_bottom_left_pane

0x7aca,	// (0x00036312) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7aca,	// (0x00036312) grid_vkb_keypad_bottom_right_pane

0x7adf,	// (0x00036327) fep_vkb_top_text_pane_g1

0xd976,	// (0x0003c1be) fep_vkb_top_text_pane_t1

0xd98b,	// (0x0003c1d3) cell_vkb_side_pane_ParamLimits

0xd98b,	// (0x0003c1d3) cell_vkb_side_pane

0x783f,	// (0x00036087) cell_vkb_side_pane_g1

0x7b07,	// (0x0003634f) cell_vkb_keypad_pane_ParamLimits

0x7b07,	// (0x0003634f) cell_vkb_keypad_pane

0x7b7c,	// (0x000363c4) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0003e39e) bg_popup_fep_shadow_pane_g

0x783f,	// (0x00036087) cell_hwr_side_pane_g1

0x783f,	// (0x00036087) cell_hwr_side_pane_g2

0x7b86,	// (0x000363ce) cell_vkb_keypad_pane_t1

0xd9ae,	// (0x0003c1f6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd9ae,	// (0x0003c1f6) cell_vkb_keypad_bottom_left_pane

0xd9cb,	// (0x0003c213) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd9cb,	// (0x0003c213) cell_vkb_keypad_bottom_right_pane

0x783f,	// (0x00036087) cell_vkb_keypad_bottom_left_pane_g1

0x783f,	// (0x00036087) cell_vkb_keypad_bottom_right_pane_g1

0x7b94,	// (0x000363dc) cell_vkb_keypad_number_pane_ParamLimits

0x7b94,	// (0x000363dc) cell_vkb_keypad_number_pane

0x7bb3,	// (0x000363fb) cell_vkb_keypad_number_pane_g1

0x7bbd,	// (0x00036405) cell_vkb_keypad_number_pane_g2

0x7bc6,	// (0x0003640e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0003e390) cell_vkb_keypad_number_pane_g

0x7b86,	// (0x000363ce) cell_vkb_keypad_number_pane_t1

0x7bea,	// (0x00036432) fep_vkb_candidate_pane_g1

0x0001,

0xfb43,	// (0x0003e38b) cell_hwr_side_pane_g

0x7c03,	// (0x0003644b) cell_hwr_side_pane_t1

0xb951,	// (0x0003a199) cell_hwr_side_pane_t1_copy1

0x79d2,	// (0x0003621a) cell_hwr_candidate_pane_g1

0xb95f,	// (0x0003a1a7) cell_hwr_candidate_pane_t1

0x783f,	// (0x00036087) cell_vkb_candidate_pane_g2

0x7c47,	// (0x0003648f) cell_vkb_candidate_pane_t1

0x0ec3,	// (0x0002f70b) bg_popup_fep_shadow_pane_ParamLimits

0x0ec3,	// (0x0002f70b) bg_popup_fep_shadow_pane

0x1cb6,	// (0x000304fe) bg_fep_hwr_top_pane_g4

0x78bf,	// (0x00036107) bg_hwr_side_pane_g1_ParamLimits

0x78bf,	// (0x00036107) bg_hwr_side_pane_g1

0xb837,	// (0x0003a07f) cell_hwr_side_pane_ParamLimits

0xb837,	// (0x0003a07f) cell_hwr_side_pane

0xb872,	// (0x0003a0ba) fep_hwr_write_pane_g1_ParamLimits

0xb872,	// (0x0003a0ba) fep_hwr_write_pane_g1

0xb87f,	// (0x0003a0c7) fep_hwr_write_pane_g2_ParamLimits

0xb87f,	// (0x0003a0c7) fep_hwr_write_pane_g2

0xb88c,	// (0x0003a0d4) fep_hwr_write_pane_g3_ParamLimits

0xb88c,	// (0x0003a0d4) fep_hwr_write_pane_g3

0xb89a,	// (0x0003a0e2) fep_hwr_write_pane_g4_ParamLimits

0xb89a,	// (0x0003a0e2) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0003e35d) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0003e35d) fep_hwr_write_pane_g

0x1cb6,	// (0x000304fe) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1cb6,	// (0x000304fe) bg_fep_hwr_candidate_pane_g2

0xb8af,	// (0x0003a0f7) cell_hwr_candidate_pane_ParamLimits

0xb8af,	// (0x0003a0f7) cell_hwr_candidate_pane

0xb8f1,	// (0x0003a139) fep_hwr_candidate_pane_g1_ParamLimits

0x791f,	// (0x00036167) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x791f,	// (0x00036167) bg_popup_fep_shadow_pane_cp2

0x79d2,	// (0x0003621a) fep_vkb_top_pane_g4_ParamLimits

0x79d2,	// (0x0003621a) fep_vkb_top_pane_g4

0x79f1,	// (0x00036239) fep_vkb_side_pane_g2_ParamLimits

0x79f1,	// (0x00036239) fep_vkb_side_pane_g2

0x96c2,	// (0x00037f0a) list_setting_pane_t4_ParamLimits

0x96c2,	// (0x00037f0a) list_setting_pane_t4

0x975c,	// (0x00037fa4) list_setting_number_pane_t5_ParamLimits

0x975c,	// (0x00037fa4) list_setting_number_pane_t5

0xabc2,	// (0x0003940a) list_double_heading_pane_cp2_ParamLimits

0xabc2,	// (0x0003940a) list_double_heading_pane_cp2

0x4904,	// (0x0003314c) list_double_heading_pane_g1_cp2_ParamLimits

0x4904,	// (0x0003314c) list_double_heading_pane_g1_cp2

0x4910,	// (0x00033158) list_double_heading_pane_g2_cp2_ParamLimits

0x4910,	// (0x00033158) list_double_heading_pane_g2_cp2

0x7c55,	// (0x0003649d) list_double_heading_pane_t1_cp2_ParamLimits

0x7c55,	// (0x0003649d) list_double_heading_pane_t1_cp2

0x7c6b,	// (0x000364b3) list_double_heading_pane_t2_cp2_ParamLimits

0x7c6b,	// (0x000364b3) list_double_heading_pane_t2_cp2

0x20b2,	// (0x000308fa) aid_value_unit2

0xa393,	// (0x00038bdb) popup_preview_fixed_window

0x225d,	// (0x00030aa5) bg_popup_preview_window_pane_cp02

0x7c7d,	// (0x000364c5) list_preview_fixed_pane

0x7cc3,	// (0x0003650b) list_empty_pane_fp_ParamLimits

0x7cc3,	// (0x0003650b) list_empty_pane_fp

0x7cc3,	// (0x0003650b) list_single_cale_day_pane_fp_ParamLimits

0x7cc3,	// (0x0003650b) list_single_cale_day_pane_fp

0x7cc3,	// (0x0003650b) list_single_graphic_heading_pane_fp_ParamLimits

0x7cc3,	// (0x0003650b) list_single_graphic_heading_pane_fp

0x7cc3,	// (0x0003650b) list_single_graphic_pane_fp_ParamLimits

0x7cc3,	// (0x0003650b) list_single_graphic_pane_fp

0x7cc3,	// (0x0003650b) list_single_heading_pane_fp_ParamLimits

0x7cc3,	// (0x0003650b) list_single_heading_pane_fp

0x7cc3,	// (0x0003650b) list_single_pane_fp_ParamLimits

0x7cc3,	// (0x0003650b) list_single_pane_fp

0x7cd8,	// (0x00036520) list_single_pane_fp_g1_ParamLimits

0x7cd8,	// (0x00036520) list_single_pane_fp_g1

0x4904,	// (0x0003314c) list_single_pane_fp_g2_ParamLimits

0x4904,	// (0x0003314c) list_single_pane_fp_g2

0x4910,	// (0x00033158) list_single_pane_fp_g3_ParamLimits

0x4910,	// (0x00033158) list_single_pane_fp_g3

0x7ce4,	// (0x0003652c) list_single_pane_fp_g4_ParamLimits

0x7ce4,	// (0x0003652c) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x0003e3bf) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x0003e3bf) list_single_pane_fp_g

0x9e24,	// (0x0003866c) list_single_pane_fp_t1_ParamLimits

0x9e24,	// (0x0003866c) list_single_pane_fp_t1

0x9e3b,	// (0x00038683) list_single_graphic_pane_fp_g1_ParamLimits

0x9e3b,	// (0x00038683) list_single_graphic_pane_fp_g1

0x7cd8,	// (0x00036520) list_single_graphic_pane_fp_g2_ParamLimits

0x7cd8,	// (0x00036520) list_single_graphic_pane_fp_g2

0x4904,	// (0x0003314c) list_single_graphic_pane_fp_g3_ParamLimits

0x4904,	// (0x0003314c) list_single_graphic_pane_fp_g3

0x4910,	// (0x00033158) list_single_graphic_pane_fp_g4_ParamLimits

0x4910,	// (0x00033158) list_single_graphic_pane_fp_g4

0x7ce4,	// (0x0003652c) list_single_graphic_pane_fp_g5_ParamLimits

0x7ce4,	// (0x0003652c) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x0003e3c8) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x0003e3c8) list_single_graphic_pane_fp_g

0x9e47,	// (0x0003868f) list_single_graphic_pane_fp_t1_ParamLimits

0x9e47,	// (0x0003868f) list_single_graphic_pane_fp_t1

0x9e3b,	// (0x00038683) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9e3b,	// (0x00038683) list_single_graphic_heading_pane_fp_g1

0x7cd8,	// (0x00036520) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7cd8,	// (0x00036520) list_single_graphic_heading_pane_fp_g2

0x4904,	// (0x0003314c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4904,	// (0x0003314c) list_single_graphic_heading_pane_fp_g3

0x4910,	// (0x00033158) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4910,	// (0x00033158) list_single_graphic_heading_pane_fp_g4

0x7ce4,	// (0x0003652c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7ce4,	// (0x0003652c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0003e3c8) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0003e3c8) list_single_graphic_heading_pane_fp_g

0x9e5d,	// (0x000386a5) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9e5d,	// (0x000386a5) list_single_graphic_heading_pane_fp_t1

0x9e73,	// (0x000386bb) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x9e73,	// (0x000386bb) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0003e3d3) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0003e3d3) list_single_graphic_heading_pane_fp_t

0x9e85,	// (0x000386cd) list_single_cale_day_pane_fp_g1_ParamLimits

0x9e85,	// (0x000386cd) list_single_cale_day_pane_fp_g1

0x7cf0,	// (0x00036538) list_single_cale_day_pane_fp_g2_ParamLimits

0x7cf0,	// (0x00036538) list_single_cale_day_pane_fp_g2

0xb97d,	// (0x0003a1c5) list_single_cale_day_pane_fp_g3_ParamLimits

0xb97d,	// (0x0003a1c5) list_single_cale_day_pane_fp_g3

0xb9a5,	// (0x0003a1ed) list_single_cale_day_pane_fp_g4_ParamLimits

0xb9a5,	// (0x0003a1ed) list_single_cale_day_pane_fp_g4

0xb9c9,	// (0x0003a211) list_single_cale_day_pane_fp_g5_ParamLimits

0xb9c9,	// (0x0003a211) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x0003e3d8) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x0003e3d8) list_single_cale_day_pane_fp_g

0x9ebd,	// (0x00038705) list_single_cale_day_pane_fp_t1_ParamLimits

0x9ebd,	// (0x00038705) list_single_cale_day_pane_fp_t1

0x9ee3,	// (0x0003872b) list_single_cale_day_pane_fp_t2_ParamLimits

0x9ee3,	// (0x0003872b) list_single_cale_day_pane_fp_t2

0x9efc,	// (0x00038744) list_single_cale_day_pane_fp_t3_ParamLimits

0x9efc,	// (0x00038744) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x0003e3e3) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x0003e3e3) list_single_cale_day_pane_fp_t

0x7cd8,	// (0x00036520) list_empty_pane_fp_g1_ParamLimits

0x7cd8,	// (0x00036520) list_empty_pane_fp_g1

0x9f15,	// (0x0003875d) list_empty_pane_fp_t1

0x9f23,	// (0x0003876b) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x0003e3ea) list_empty_pane_fp_t

0x7cd8,	// (0x00036520) list_single_heading_pane_fp_g1_ParamLimits

0x7cd8,	// (0x00036520) list_single_heading_pane_fp_g1

0x4904,	// (0x0003314c) list_single_heading_pane_fp_g2_ParamLimits

0x4904,	// (0x0003314c) list_single_heading_pane_fp_g2

0x4910,	// (0x00033158) list_single_heading_pane_fp_g3_ParamLimits

0x4910,	// (0x00033158) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x0003e3ef) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0003e3ef) list_single_heading_pane_fp_g

0x9f31,	// (0x00038779) list_single_heading_pane_fp_t1_ParamLimits

0x9f31,	// (0x00038779) list_single_heading_pane_fp_t1

0x9f43,	// (0x0003878b) list_single_heading_pane_fp_t2_ParamLimits

0x9f43,	// (0x0003878b) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x0003e3f6) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x0003e3f6) list_single_heading_pane_fp_t

0x4a4e,	// (0x00033296) aid_size_cell_fast

0x2240,	// (0x00030a88) soft_indicator_pane_cp1_t1

0x4a8b,	// (0x000332d3) cell_app_pane_cp2_ParamLimits

0x4a8b,	// (0x000332d3) cell_app_pane_cp2

0xb741,	// (0x00039f89) fep_hwr_candidate_drop_down_list_pane

0x2016,	// (0x0003085e) fep_hwr_candidate_pane_g3_ParamLimits

0x2016,	// (0x0003085e) fep_hwr_candidate_pane_g3

0x2023,	// (0x0003086b) fep_hwr_candidate_pane_g4_ParamLimits

0x2023,	// (0x0003086b) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0003e36a) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0003e36a) fep_hwr_candidate_pane_g

0x796d,	// (0x000361b5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x796d,	// (0x000361b5) fep_vkb_candidate_drop_down_list_pane

0x7bf2,	// (0x0003643a) fep_vkb_candidate_pane_g3

0x7bfa,	// (0x00036442) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0003e397) fep_vkb_candidate_pane_g

0x79d2,	// (0x0003621a) cell_hwr_candidate_pane_g1_ParamLimits

0x7da4,	// (0x000365ec) cell_hwr_candidate_pane_g3_ParamLimits

0x7da4,	// (0x000365ec) cell_hwr_candidate_pane_g3

0x7dc5,	// (0x0003660d) cell_hwr_candidate_pane_g4_ParamLimits

0x7dc5,	// (0x0003660d) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x0003e3b1) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x0003e3b1) cell_hwr_candidate_pane_g

0x7c11,	// (0x00036459) cell_vkb_candidate_pane_g3_ParamLimits

0x7c11,	// (0x00036459) cell_vkb_candidate_pane_g3

0x7c2c,	// (0x00036474) cell_vkb_candidate_pane_g4_ParamLimits

0x7c2c,	// (0x00036474) cell_vkb_candidate_pane_g4

0x7cfc,	// (0x00036544) cell_app_pane_cp2_g1_ParamLimits

0x7cfc,	// (0x00036544) cell_app_pane_cp2_g1

0x7d1a,	// (0x00036562) cell_app_pane_cp2_g2_ParamLimits

0x7d1a,	// (0x00036562) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x0003e3fb) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x0003e3fb) cell_app_pane_cp2_g

0x7d26,	// (0x0003656e) cell_app_pane_cp2_t1_ParamLimits

0x7d26,	// (0x0003656e) cell_app_pane_cp2_t1

0x48ea,	// (0x00033132) grid_highlight_pane_cp1_ParamLimits

0x48ea,	// (0x00033132) grid_highlight_pane_cp1

0xb9ed,	// (0x0003a235) cell_hwr_candidate_pane_cp1_ParamLimits

0xb9ed,	// (0x0003a235) cell_hwr_candidate_pane_cp1

0x79d2,	// (0x0003621a) fep_hwr_candidate_drop_down_list_pane_g1

0x7d58,	// (0x000365a0) fep_hwr_candidate_drop_down_list_pane_g2

0x7d65,	// (0x000365ad) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0003e400) fep_hwr_candidate_drop_down_list_pane_g

0xba0c,	// (0x0003a254) fep_hwr_candidate_drop_down_list_scroll_pane

0xba15,	// (0x0003a25d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xba15,	// (0x0003a25d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xba22,	// (0x0003a26a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xba22,	// (0x0003a26a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xba2f,	// (0x0003a277) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xba2f,	// (0x0003a277) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c11,	// (0x00036459) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c11,	// (0x00036459) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c2c,	// (0x00036474) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c2c,	// (0x00036474) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xba3c,	// (0x0003a284) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xba3c,	// (0x0003a284) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xba57,	// (0x0003a29f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xba57,	// (0x0003a29f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xba72,	// (0x0003a2ba) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xba72,	// (0x0003a2ba) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0003e407) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0003e407) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d38,	// (0x00036580) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d38,	// (0x00036580) cell_vkb_candidate_pane_cp1

0x79d2,	// (0x0003621a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x79d2,	// (0x0003621a) fep_vkb_candidate_drop_down_list_pane_g1

0x7d58,	// (0x000365a0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7d58,	// (0x000365a0) fep_vkb_candidate_drop_down_list_pane_g2

0x7d65,	// (0x000365ad) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7d65,	// (0x000365ad) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0003e400) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb8,	// (0x0003e400) fep_vkb_candidate_drop_down_list_pane_g

0x7d72,	// (0x000365ba) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7d72,	// (0x000365ba) fep_vkb_candidate_drop_down_list_scroll_pane

0x7d7f,	// (0x000365c7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d7f,	// (0x000365c7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7d8c,	// (0x000365d4) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7d8c,	// (0x000365d4) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7d98,	// (0x000365e0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7d98,	// (0x000365e0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7da4,	// (0x000365ec) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7da4,	// (0x000365ec) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7dc5,	// (0x0003660d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7dc5,	// (0x0003660d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7de6,	// (0x0003662e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7de6,	// (0x0003662e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7e07,	// (0x0003664f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7e07,	// (0x0003664f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7e28,	// (0x00036670) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e28,	// (0x00036670) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0003e418) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0003e418) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa4a3,	// (0x00038ceb) title_pane_g1_ParamLimits

0xa4b0,	// (0x00038cf8) title_pane_g2_ParamLimits

0xf566,	// (0x0003ddae) title_pane_g_ParamLimits

0x4f39,	// (0x00033781) aid_call2_pane

0x4f31,	// (0x00033779) aid_call_pane

0x4f41,	// (0x00033789) popup_clock_analogue_window_g1

0x4f41,	// (0x00033789) popup_clock_analogue_window_g2

0xaba3,	// (0x000393eb) popup_clock_analogue_window_g3

0xabac,	// (0x000393f4) popup_clock_analogue_window_g4

0x20c4,	// (0x0003090c) popup_clock_analogue_window_g5

0x0004,

0xf715,	// (0x0003df5d) popup_clock_analogue_window_g

0xabb4,	// (0x000393fc) popup_clock_analogue_window_t1

0xabef,	// (0x00039437) clock_digital_number_pane_ParamLimits

0xabef,	// (0x00039437) clock_digital_number_pane

0xabfb,	// (0x00039443) clock_digital_number_pane_cp02_ParamLimits

0xabfb,	// (0x00039443) clock_digital_number_pane_cp02

0xac07,	// (0x0003944f) clock_digital_number_pane_cp03_ParamLimits

0xac07,	// (0x0003944f) clock_digital_number_pane_cp03

0xac13,	// (0x0003945b) clock_digital_number_pane_cp04_ParamLimits

0xac13,	// (0x0003945b) clock_digital_number_pane_cp04

0xac1f,	// (0x00039467) clock_digital_separator_pane_ParamLimits

0xac1f,	// (0x00039467) clock_digital_separator_pane

0xac2b,	// (0x00039473) popup_clock_digital_window_t1_ParamLimits

0xac2b,	// (0x00039473) popup_clock_digital_window_t1

0x20c4,	// (0x0003090c) clock_digital_number_pane_g1

0x20c4,	// (0x0003090c) clock_digital_number_pane_g2

0x0001,

0xf720,	// (0x0003df68) clock_digital_number_pane_g

0x20c4,	// (0x0003090c) clock_digital_separator_pane_g1

0x20c4,	// (0x0003090c) clock_digital_separator_pane_g2

0x0001,

0xf720,	// (0x0003df68) clock_digital_separator_pane_g

0xcd90,	// (0x0003b5d8) aid_fill_nsta_ParamLimits

0xce55,	// (0x0003b69d) indicator_nsta_pane_ParamLimits

0x5888,	// (0x000340d0) popup_clock_analogue_window

0x5888,	// (0x000340d0) popup_clock_digital_window

0x212a,	// (0x00030972) grid_indicator_nsta_pane_ParamLimits

0x74c3,	// (0x00035d0b) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0003e2ea) clock_nsta_pane_t

0xab67,	// (0x000393af) aid_size_max_handle

0xab71,	// (0x000393b9) aid_size_min_handle

0x5433,	// (0x00033c7b) editor_scroll_pane

0x7e43,	// (0x0003668b) ex_editor_pane

0x4a09,	// (0x00033251) scroll_pane_cp13

0x2f3f,	// (0x00031787) scroll_pane_cp14

0x4f70,	// (0x000337b8) scroll_pane_cp36

0xabd6,	// (0x0003941e) list_single_graphic_hl_pane_cp2_ParamLimits

0xabd6,	// (0x0003941e) list_single_graphic_hl_pane_cp2

0x9c03,	// (0x0003844b) list_single_graphic_hl_pane_ParamLimits

0x9c03,	// (0x0003844b) list_single_graphic_hl_pane

0x9f59,	// (0x000387a1) aid_size_min_hl_cp1

0x7e4b,	// (0x00036693) list_highlight_pane_cp34_ParamLimits

0x7e4b,	// (0x00036693) list_highlight_pane_cp34

0x7e5c,	// (0x000366a4) list_single_graphic_hl_pane_g1_ParamLimits

0x7e5c,	// (0x000366a4) list_single_graphic_hl_pane_g1

0x9f62,	// (0x000387aa) list_single_graphic_hl_pane_g2_ParamLimits

0x9f62,	// (0x000387aa) list_single_graphic_hl_pane_g2

0x9f62,	// (0x000387aa) list_single_graphic_hl_pane_g3_ParamLimits

0x9f62,	// (0x000387aa) list_single_graphic_hl_pane_g3

0x53a4,	// (0x00033bec) list_single_graphic_hl_pane_g4_ParamLimits

0x53a4,	// (0x00033bec) list_single_graphic_hl_pane_g4

0xba8d,	// (0x0003a2d5) list_single_graphic_hl_pane_g5_ParamLimits

0xba8d,	// (0x0003a2d5) list_single_graphic_hl_pane_g5

0x0004,

0xfbe1,	// (0x0003e429) list_single_graphic_hl_pane_g_ParamLimits

0xfbe1,	// (0x0003e429) list_single_graphic_hl_pane_g

0x9f6e,	// (0x000387b6) list_single_graphic_hl_pane_t1_ParamLimits

0x9f6e,	// (0x000387b6) list_single_graphic_hl_pane_t1

0x7e69,	// (0x000366b1) aid_size_min_hl_cp2

0x7e72,	// (0x000366ba) list_highlight_pane_cp34_cp2_ParamLimits

0x7e72,	// (0x000366ba) list_highlight_pane_cp34_cp2

0x7e5c,	// (0x000366a4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e5c,	// (0x000366a4) list_single_graphic_hl_pane_g1_cp2

0x7e7f,	// (0x000366c7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7e7f,	// (0x000366c7) list_single_graphic_hl_pane_g2_cp2

0x7e8b,	// (0x000366d3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7e8b,	// (0x000366d3) list_single_graphic_hl_pane_g3_cp2

0x629b,	// (0x00034ae3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x629b,	// (0x00034ae3) list_single_graphic_hl_pane_g4_cp2

0x7e99,	// (0x000366e1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e99,	// (0x000366e1) list_single_graphic_hl_pane_g5_cp2

0xb06d,	// (0x000398b5) control_pane_g4_ParamLimits

0xb06d,	// (0x000398b5) control_pane_g4

0x4a42,	// (0x0003328a) bg_popup_sub_pane_cp10_ParamLimits

0x7849,	// (0x00036091) list_choice_list_pane_ParamLimits

0x7858,	// (0x000360a0) scroll_pane_cp23

0x225d,	// (0x00030aa5) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c7d,	// (0x000364c5) list_preview_fixed_pane_ParamLimits

0x7c93,	// (0x000364db) list_preview_fixed_pane_cp_ParamLimits

0x7c93,	// (0x000364db) list_preview_fixed_pane_cp

0x7c9f,	// (0x000364e7) popup_preview_fixed_window_g1_ParamLimits

0x7c9f,	// (0x000364e7) popup_preview_fixed_window_g1

0x7cab,	// (0x000364f3) popup_preview_fixed_window_g2_ParamLimits

0x7cab,	// (0x000364f3) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x0003e3b8) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x0003e3b8) popup_preview_fixed_window_g

0xaa47,	// (0x0003928f) aid_navi_side_left_pane_ParamLimits

0xaa5c,	// (0x000392a4) aid_navi_side_right_pane_ParamLimits

0xaa74,	// (0x000392bc) navi_icon_pane_stacon_ParamLimits

0xaa88,	// (0x000392d0) navi_navi_pane_stacon_ParamLimits

0xaa74,	// (0x000392bc) navi_text_pane_stacon_ParamLimits

0x20ba,	// (0x00030902) main_text_info_pane

0x7ec3,	// (0x0003670b) listscroll_text_info_pane

0x7ecb,	// (0x00036713) list_text_info_pane_ParamLimits

0x7ecb,	// (0x00036713) list_text_info_pane

0x7eda,	// (0x00036722) scroll_pane_cp24_ParamLimits

0x7eda,	// (0x00036722) scroll_pane_cp24

0xda04,	// (0x0003c24c) list_text_info_pane_t1_ParamLimits

0xda04,	// (0x0003c24c) list_text_info_pane_t1

0xc91b,	// (0x0003b163) popup_fast_swap2_window_ParamLimits

0xc91b,	// (0x0003b163) popup_fast_swap2_window

0x7ef8,	// (0x00036740) aid_size_cell_fast2

0x20ba,	// (0x00030902) bg_popup_window_pane_cp17

0x5d48,	// (0x00034590) heading_pane_cp2

0x2cc4,	// (0x0003150c) listscroll_fast2_pane

0x7f02,	// (0x0003674a) grid_fast2_pane

0x7f0c,	// (0x00036754) listscroll_fast2_pane_g1

0x7f14,	// (0x0003675c) listscroll_fast2_pane_g2

0x0001,

0xfbec,	// (0x0003e434) listscroll_fast2_pane_g

0x4a09,	// (0x00033251) scroll_pane_cp26

0x7f1e,	// (0x00036766) cell_fast2_pane_ParamLimits

0x7f1e,	// (0x00036766) cell_fast2_pane

0x7f33,	// (0x0003677b) cell_fast2_pane_g1

0x7f3c,	// (0x00036784) cell_fast2_pane_g2

0x7f45,	// (0x0003678d) cell_fast2_pane_g3

0x0002,

0xfbf1,	// (0x0003e439) cell_fast2_pane_g

0x2d06,	// (0x0003154e) grid_highlight_pane_cp9

0x2d1b,	// (0x00031563) main_eswt_pane_ParamLimits

0x2d1b,	// (0x00031563) main_eswt_pane

0x7eef,	// (0x00036737) list_single_text_info_pane

0x7f4d,	// (0x00036795) eswt_ctrl_button_pane

0x7f4d,	// (0x00036795) eswt_ctrl_canvas_pane

0x7f55,	// (0x0003679d) eswt_ctrl_combo_pane

0x7f4d,	// (0x00036795) eswt_ctrl_default_pane

0x7f4d,	// (0x00036795) eswt_ctrl_label_pane

0x7f5d,	// (0x000367a5) eswt_ctrl_wait_pane

0x7f65,	// (0x000367ad) eswt_shell_pane

0x20ba,	// (0x00030902) listscroll_eswt_app_pane

0x7f85,	// (0x000367cd) popup_eswt_tasktip_window_ParamLimits

0x7f85,	// (0x000367cd) popup_eswt_tasktip_window

0x5a8f,	// (0x000342d7) bg_popup_window_pane_cp18

0x7f96,	// (0x000367de) eswt_control_pane_g1_ParamLimits

0x7f96,	// (0x000367de) eswt_control_pane_g1

0x7fa3,	// (0x000367eb) eswt_control_pane_g2_ParamLimits

0x7fa3,	// (0x000367eb) eswt_control_pane_g2

0x7fb0,	// (0x000367f8) eswt_control_pane_g3_ParamLimits

0x7fb0,	// (0x000367f8) eswt_control_pane_g3

0x7fbd,	// (0x00036805) eswt_control_pane_g4_ParamLimits

0x7fbd,	// (0x00036805) eswt_control_pane_g4

0x0003,

0xfbf8,	// (0x0003e440) eswt_control_pane_g_ParamLimits

0xfbf8,	// (0x0003e440) eswt_control_pane_g

0x48ea,	// (0x00033132) bg_button_pane_ParamLimits

0x48ea,	// (0x00033132) bg_button_pane

0x2d1b,	// (0x00031563) common_borders_pane_copy2_ParamLimits

0x2d1b,	// (0x00031563) common_borders_pane_copy2

0x7fca,	// (0x00036812) control_button_pane_g1_ParamLimits

0x7fca,	// (0x00036812) control_button_pane_g1

0x7fd6,	// (0x0003681e) control_button_pane_g2_ParamLimits

0x7fd6,	// (0x0003681e) control_button_pane_g2

0x7fe2,	// (0x0003682a) control_button_pane_g3_ParamLimits

0x7fe2,	// (0x0003682a) control_button_pane_g3

0x0002,

0xfc01,	// (0x0003e449) control_button_pane_g_ParamLimits

0xfc01,	// (0x0003e449) control_button_pane_g

0x7ff6,	// (0x0003683e) control_button_pane_t1

0x8004,	// (0x0003684c) control_button_pane_t2

0x0001,

0xfc08,	// (0x0003e450) control_button_pane_t

0x5997,	// (0x000341df) bg_button_pane_g1

0x59a7,	// (0x000341ef) bg_button_pane_g2

0x599f,	// (0x000341e7) bg_button_pane_g3

0x59b7,	// (0x000341ff) bg_button_pane_g4

0x59af,	// (0x000341f7) bg_button_pane_g5

0x59bf,	// (0x00034207) bg_button_pane_g6

0x59c7,	// (0x0003420f) bg_button_pane_g7

0x59d7,	// (0x0003421f) bg_button_pane_g8

0x59cf,	// (0x00034217) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0003e0c4) bg_button_pane_g

0x7804,	// (0x0003604c) common_borders_pane_ParamLimits

0x7804,	// (0x0003604c) common_borders_pane

0x7f96,	// (0x000367de) eswt_control_pane_g1_copy1_ParamLimits

0x7f96,	// (0x000367de) eswt_control_pane_g1_copy1

0x7fa3,	// (0x000367eb) eswt_control_pane_g2_copy1_ParamLimits

0x7fa3,	// (0x000367eb) eswt_control_pane_g2_copy1

0x7fb0,	// (0x000367f8) eswt_control_pane_g3_copy1_ParamLimits

0x7fb0,	// (0x000367f8) eswt_control_pane_g3_copy1

0x7fbd,	// (0x00036805) eswt_control_pane_g4_copy1_ParamLimits

0x7fbd,	// (0x00036805) eswt_control_pane_g4_copy1

0x783f,	// (0x00036087) bg_eswt_ctrl_canvas_pane_g1

0x7804,	// (0x0003604c) common_borders_pane_cp2_ParamLimits

0x7804,	// (0x0003604c) common_borders_pane_cp2

0x7804,	// (0x0003604c) common_borders_pane_cp3_ParamLimits

0x7804,	// (0x0003604c) common_borders_pane_cp3

0x8012,	// (0x0003685a) separator_horizontal_pane

0x801a,	// (0x00036862) separator_vertical_pane

0x7f96,	// (0x000367de) eswt_control_pane_g1_copy2_ParamLimits

0x7f96,	// (0x000367de) eswt_control_pane_g1_copy2

0x7fa3,	// (0x000367eb) eswt_control_pane_g2_copy2_ParamLimits

0x7fa3,	// (0x000367eb) eswt_control_pane_g2_copy2

0x7fb0,	// (0x000367f8) eswt_control_pane_g3_copy2_ParamLimits

0x7fb0,	// (0x000367f8) eswt_control_pane_g3_copy2

0x7fbd,	// (0x00036805) eswt_control_pane_g4_copy2_ParamLimits

0x7fbd,	// (0x00036805) eswt_control_pane_g4_copy2

0x20ba,	// (0x00030902) common_borders_pane_cp4

0x8023,	// (0x0003686b) separator_horizontal_pane_g1

0x802c,	// (0x00036874) separator_horizontal_pane_g2

0x8035,	// (0x0003687d) separator_horizontal_pane_g3

0x0002,

0xfc0d,	// (0x0003e455) separator_horizontal_pane_g

0x7f96,	// (0x000367de) eswt_control_pane_g1_copy3_ParamLimits

0x7f96,	// (0x000367de) eswt_control_pane_g1_copy3

0x7fa3,	// (0x000367eb) eswt_control_pane_g2_copy3_ParamLimits

0x7fa3,	// (0x000367eb) eswt_control_pane_g2_copy3

0x7fb0,	// (0x000367f8) eswt_control_pane_g3_copy3_ParamLimits

0x7fb0,	// (0x000367f8) eswt_control_pane_g3_copy3

0x7fbd,	// (0x00036805) eswt_control_pane_g4_copy3_ParamLimits

0x7fbd,	// (0x00036805) eswt_control_pane_g4_copy3

0x20ba,	// (0x00030902) common_borders_pane_cp5

0x803e,	// (0x00036886) separator_vertical_pane_g1

0x8047,	// (0x0003688f) separator_vertical_pane_g2

0x8050,	// (0x00036898) separator_vertical_pane_g3

0x0002,

0xfc14,	// (0x0003e45c) separator_vertical_pane_g

0x7f96,	// (0x000367de) eswt_control_pane_g1_copy4_ParamLimits

0x7f96,	// (0x000367de) eswt_control_pane_g1_copy4

0x7fa3,	// (0x000367eb) eswt_control_pane_g2_copy4_ParamLimits

0x7fa3,	// (0x000367eb) eswt_control_pane_g2_copy4

0x7fb0,	// (0x000367f8) eswt_control_pane_g3_copy4_ParamLimits

0x7fb0,	// (0x000367f8) eswt_control_pane_g3_copy4

0x7fbd,	// (0x00036805) eswt_control_pane_g4_copy4_ParamLimits

0x7fbd,	// (0x00036805) eswt_control_pane_g4_copy4

0xda35,	// (0x0003c27d) eswt_ctrl_combo_button_pane

0xda3d,	// (0x0003c285) eswt_ctrl_input_pane

0xda45,	// (0x0003c28d) popup_choice_list_window_cp70

0xda4d,	// (0x0003c295) eswt_ctrl_input_pane_t1

0x20ba,	// (0x00030902) input_focus_pane_cp70

0x7804,	// (0x0003604c) bg_button_pane_cp70_ParamLimits

0x7804,	// (0x0003604c) bg_button_pane_cp70

0xda5b,	// (0x0003c2a3) eswt_ctrl_combo_button_pane_g1

0x8059,	// (0x000368a1) wait_bar_pane_cp70

0x5a8f,	// (0x000342d7) bg_popup_window_pane_cp70_ParamLimits

0x5a8f,	// (0x000342d7) bg_popup_window_pane_cp70

0x8061,	// (0x000368a9) popup_eswt_tasktip_window_t1

0x8077,	// (0x000368bf) wait_bar_pane_cp71_ParamLimits

0x8077,	// (0x000368bf) wait_bar_pane_cp71

0x8083,	// (0x000368cb) grid_eswt_app_pane

0x4d73,	// (0x000335bb) scroll_pane_cp70

0xda63,	// (0x0003c2ab) cell_eswt_app_pane_ParamLimits

0xda63,	// (0x0003c2ab) cell_eswt_app_pane

0xda93,	// (0x0003c2db) cell_eswt_app_pane_g1_ParamLimits

0xda93,	// (0x0003c2db) cell_eswt_app_pane_g1

0xdac2,	// (0x0003c30a) cell_eswt_app_pane_g2_ParamLimits

0xdac2,	// (0x0003c30a) cell_eswt_app_pane_g2

0x0001,

0xfc1b,	// (0x0003e463) cell_eswt_app_pane_g_ParamLimits

0xfc1b,	// (0x0003e463) cell_eswt_app_pane_g

0xdaeb,	// (0x0003c333) cell_eswt_app_pane_t1_ParamLimits

0xdaeb,	// (0x0003c333) cell_eswt_app_pane_t1

0x808c,	// (0x000368d4) grid_highlight_pane_cp70_ParamLimits

0x808c,	// (0x000368d4) grid_highlight_pane_cp70

0x5308,	// (0x00033b50) set_content_pane_g1

0x5624,	// (0x00033e6c) status_small_volume_pane

0xbaa1,	// (0x0003a2e9) status_small_volume_pane_g1

0xbaa9,	// (0x0003a2f1) volume_small2_pane

0xbab2,	// (0x0003a2fa) volume_small2_pane_g1

0xbabb,	// (0x0003a303) volume_small2_pane_g2

0xbac4,	// (0x0003a30c) volume_small2_pane_g3

0xbacd,	// (0x0003a315) volume_small2_pane_g4

0xbad6,	// (0x0003a31e) volume_small2_pane_g5

0xbadf,	// (0x0003a327) volume_small2_pane_g6

0xbae8,	// (0x0003a330) volume_small2_pane_g7

0xbaf1,	// (0x0003a339) volume_small2_pane_g8

0xbafa,	// (0x0003a342) volume_small2_pane_g9

0xbb03,	// (0x0003a34b) volume_small2_pane_g10

0x0009,

0xfc20,	// (0x0003e468) volume_small2_pane_g

0x7adf,	// (0x00036327) fep_vkb_top_text_pane_g1_ParamLimits

0xd976,	// (0x0003c1be) fep_vkb_top_text_pane_t1_ParamLimits

0x7cb7,	// (0x000364ff) popup_preview_fixed_window_g3_ParamLimits

0x7cb7,	// (0x000364ff) popup_preview_fixed_window_g3

0xcd23,	// (0x0003b56b) popup_toolbar_trans_pane

0xd2d9,	// (0x0003bb21) aid_height_set_list_ParamLimits

0x5f71,	// (0x000347b9) aid_size_parent_ParamLimits

0x4a42,	// (0x0003328a) list_highlight_pane_cp2_ParamLimits

0x5308,	// (0x00033b50) set_content_pane_g1_ParamLimits

0xb56a,	// (0x00039db2) list_single_image_pane_ParamLimits

0xb56a,	// (0x00039db2) list_single_image_pane

0xdb1d,	// (0x0003c365) aid_size_cell_image_ParamLimits

0xdb1d,	// (0x0003c365) aid_size_cell_image

0xdb2a,	// (0x0003c372) grid_single_image_pane_ParamLimits

0xdb2a,	// (0x0003c372) grid_single_image_pane

0x5c30,	// (0x00034478) list_single_image_pane_g1_ParamLimits

0x5c30,	// (0x00034478) list_single_image_pane_g1

0x8098,	// (0x000368e0) list_single_image_pane_g2_ParamLimits

0x8098,	// (0x000368e0) list_single_image_pane_g2

0x0001,

0xfc35,	// (0x0003e47d) list_single_image_pane_g_ParamLimits

0xfc35,	// (0x0003e47d) list_single_image_pane_g

0x62a7,	// (0x00034aef) list_single_image_pane_t1_ParamLimits

0x62a7,	// (0x00034aef) list_single_image_pane_t1

0xdb38,	// (0x0003c380) cell_image_list_pane_ParamLimits

0xdb38,	// (0x0003c380) cell_image_list_pane

0xdb4b,	// (0x0003c393) cell_image_list_pane_g1

0xdb54,	// (0x0003c39c) cell_image_list_pane_g2

0x0001,

0xfc3a,	// (0x0003e482) cell_image_list_pane_g

0x80ac,	// (0x000368f4) aid_size_cell_tb_trans_pane

0x48ea,	// (0x00033132) bg_tb_trans_pane

0x80be,	// (0x00036906) grid_tb_trans_pane

0x5997,	// (0x000341df) bg_tb_trans_pane_g1

0x59a7,	// (0x000341ef) bg_tb_trans_pane_g2

0x599f,	// (0x000341e7) bg_tb_trans_pane_g3

0x59b7,	// (0x000341ff) bg_tb_trans_pane_g4

0x59af,	// (0x000341f7) bg_tb_trans_pane_g5

0x59d7,	// (0x0003421f) bg_tb_trans_pane_g6

0x59cf,	// (0x00034217) bg_tb_trans_pane_g7

0x59bf,	// (0x00034207) bg_tb_trans_pane_g8

0x59c7,	// (0x0003420f) bg_tb_trans_pane_g9

0x0008,

0xfc3f,	// (0x0003e487) bg_tb_trans_pane_g

0x80d2,	// (0x0003691a) cell_toolbar_trans_pane_ParamLimits

0x80d2,	// (0x0003691a) cell_toolbar_trans_pane

0x783f,	// (0x00036087) cell_toolbar_trans_pane_g1

0xd6b8,	// (0x0003bf00) list_form2_midp_pane_t1

0xd6c6,	// (0x0003bf0e) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0003e330) list_form2_midp_pane_t

0x7592,	// (0x00035dda) scroll_pane_cp51_ParamLimits

0x7709,	// (0x00035f51) form2_midp_wait_pane_g1

0x7712,	// (0x00035f5a) form2_midp_wait_pane_g2

0x771b,	// (0x00035f63) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0003e345) form2_midp_wait_pane_g

0x212a,	// (0x00030972) list_highlight_pane_cp21_ParamLimits

0x7743,	// (0x00035f8b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7752,	// (0x00035f9a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb50e,	// (0x00039d56) list_single_2graphic_im_pane_ParamLimits

0xb50e,	// (0x00039d56) list_single_2graphic_im_pane

0xdb5d,	// (0x0003c3a5) list_single_2graphic_im_pane_g1_ParamLimits

0xdb5d,	// (0x0003c3a5) list_single_2graphic_im_pane_g1

0xdb6e,	// (0x0003c3b6) list_single_2graphic_im_pane_g2_ParamLimits

0xdb6e,	// (0x0003c3b6) list_single_2graphic_im_pane_g2

0xdb7a,	// (0x0003c3c2) list_single_2graphic_im_pane_g3_ParamLimits

0xdb7a,	// (0x0003c3c2) list_single_2graphic_im_pane_g3

0x0003,

0xfc52,	// (0x0003e49a) list_single_2graphic_im_pane_g_ParamLimits

0xfc52,	// (0x0003e49a) list_single_2graphic_im_pane_g

0xdb8e,	// (0x0003c3d6) list_single_2graphic_im_pane_t1_ParamLimits

0xdb8e,	// (0x0003c3d6) list_single_2graphic_im_pane_t1

0x7cc3,	// (0x0003650b) list_single_graphic_2heading_pane_fp_ParamLimits

0x7cc3,	// (0x0003650b) list_single_graphic_2heading_pane_fp

0x9e3b,	// (0x00038683) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9e3b,	// (0x00038683) list_single_graphic_2heading_pane_fp_g1

0x7cd8,	// (0x00036520) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7cd8,	// (0x00036520) list_single_graphic_2heading_pane_fp_g2

0x4904,	// (0x0003314c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4904,	// (0x0003314c) list_single_graphic_2heading_pane_fp_g3

0x4910,	// (0x00033158) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4910,	// (0x00033158) list_single_graphic_2heading_pane_fp_g4

0x7ce4,	// (0x0003652c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7ce4,	// (0x0003652c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0003e3c8) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0003e3c8) list_single_graphic_2heading_pane_fp_g

0x9f84,	// (0x000387cc) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x9f84,	// (0x000387cc) list_single_graphic_2heading_pane_fp_t1

0x9e73,	// (0x000386bb) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x9e73,	// (0x000386bb) list_single_graphic_2heading_pane_fp_t2

0x9f9a,	// (0x000387e2) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x9f9a,	// (0x000387e2) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5b,	// (0x0003e4a3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5b,	// (0x0003e4a3) list_single_graphic_2heading_pane_fp_t

0x78cb,	// (0x00036113) fep_hwr_write_pane_g5_ParamLimits

0x78cb,	// (0x00036113) fep_hwr_write_pane_g5

0x78d7,	// (0x0003611f) fep_hwr_write_pane_g6_ParamLimits

0x78d7,	// (0x0003611f) fep_hwr_write_pane_g6

0x7f65,	// (0x000367ad) eswt_shell_pane_ParamLimits

0x5a8f,	// (0x000342d7) bg_popup_window_pane_cp18_ParamLimits

0x6b65,	// (0x000353ad) heading_pane_cp70

0x8061,	// (0x000368a9) popup_eswt_tasktip_window_t1_ParamLimits

0xcdd0,	// (0x0003b618) aid_touch_tab_arrow_left

0xcddc,	// (0x0003b624) aid_touch_tab_arrow_right

0xa4c1,	// (0x00038d09) title_pane_g3_ParamLimits

0xa4c1,	// (0x00038d09) title_pane_g3

0x48a9,	// (0x000330f1) set_value_pane_g1

0xcd23,	// (0x0003b56b) popup_toolbar_trans_pane_ParamLimits

0x80ac,	// (0x000368f4) aid_size_cell_tb_trans_pane_ParamLimits

0x48ea,	// (0x00033132) bg_tb_trans_pane_ParamLimits

0x80be,	// (0x00036906) grid_tb_trans_pane_ParamLimits

0x225d,	// (0x00030aa5) cont_note_pane_ParamLimits

0x225d,	// (0x00030aa5) cont_note_pane

0x2d1b,	// (0x00031563) cont_snote2_single_text_pane_ParamLimits

0x2d1b,	// (0x00031563) cont_snote2_single_text_pane

0x2d1b,	// (0x00031563) cont_snote2_single_graphic_pane_ParamLimits

0x2d1b,	// (0x00031563) cont_snote2_single_graphic_pane

0x5f63,	// (0x000347ab) cont_note_wait_pane_ParamLimits

0x5f63,	// (0x000347ab) cont_note_wait_pane

0x5f63,	// (0x000347ab) cont_note_image_pane_ParamLimits

0x5f63,	// (0x000347ab) cont_note_image_pane

0x8104,	// (0x0003694c) popup_note2_window_g1_ParamLimits

0x8104,	// (0x0003694c) popup_note2_window_g1

0x8135,	// (0x0003697d) popup_note2_window_t1_ParamLimits

0x8135,	// (0x0003697d) popup_note2_window_t1

0x817a,	// (0x000369c2) popup_note2_window_t2_ParamLimits

0x817a,	// (0x000369c2) popup_note2_window_t2

0x81bf,	// (0x00036a07) popup_note2_window_t3_ParamLimits

0x81bf,	// (0x00036a07) popup_note2_window_t3

0x8204,	// (0x00036a4c) popup_note2_window_t4_ParamLimits

0x8204,	// (0x00036a4c) popup_note2_window_t4

0x22e1,	// (0x00030b29) popup_note2_window_t5_ParamLimits

0x22e1,	// (0x00030b29) popup_note2_window_t5

0x0004,

0xfc67,	// (0x0003e4af) popup_note2_window_t_ParamLimits

0xfc67,	// (0x0003e4af) popup_note2_window_t

0x8233,	// (0x00036a7b) popup_note2_image_window_g1_ParamLimits

0x8233,	// (0x00036a7b) popup_note2_image_window_g1

0x823f,	// (0x00036a87) popup_note2_image_window_g2_ParamLimits

0x823f,	// (0x00036a87) popup_note2_image_window_g2

0x0001,

0xfc72,	// (0x0003e4ba) popup_note2_image_window_g_ParamLimits

0xfc72,	// (0x0003e4ba) popup_note2_image_window_g

0x8251,	// (0x00036a99) popup_note2_image_window_t1_ParamLimits

0x8251,	// (0x00036a99) popup_note2_image_window_t1

0x8269,	// (0x00036ab1) popup_note2_image_window_t2_ParamLimits

0x8269,	// (0x00036ab1) popup_note2_image_window_t2

0x8281,	// (0x00036ac9) popup_note2_image_window_t3_ParamLimits

0x8281,	// (0x00036ac9) popup_note2_image_window_t3

0x0002,

0xfc77,	// (0x0003e4bf) popup_note2_image_window_t_ParamLimits

0xfc77,	// (0x0003e4bf) popup_note2_image_window_t

0x5f8f,	// (0x000347d7) popup_note2_wait_window_g1_ParamLimits

0x5f8f,	// (0x000347d7) popup_note2_wait_window_g1

0x829d,	// (0x00036ae5) popup_note2_wait_window_g2_ParamLimits

0x829d,	// (0x00036ae5) popup_note2_wait_window_g2

0x5fa7,	// (0x000347ef) popup_note2_wait_window_g3_ParamLimits

0x5fa7,	// (0x000347ef) popup_note2_wait_window_g3

0x0002,

0xfc7e,	// (0x0003e4c6) popup_note2_wait_window_g_ParamLimits

0xfc7e,	// (0x0003e4c6) popup_note2_wait_window_g

0x82a9,	// (0x00036af1) popup_note2_wait_window_t1_ParamLimits

0x82a9,	// (0x00036af1) popup_note2_wait_window_t1

0x82c7,	// (0x00036b0f) popup_note2_wait_window_t2_ParamLimits

0x82c7,	// (0x00036b0f) popup_note2_wait_window_t2

0x82e5,	// (0x00036b2d) popup_note2_wait_window_t3_ParamLimits

0x82e5,	// (0x00036b2d) popup_note2_wait_window_t3

0x82f7,	// (0x00036b3f) popup_note2_wait_window_t4_ParamLimits

0x82f7,	// (0x00036b3f) popup_note2_wait_window_t4

0x0003,

0xfc85,	// (0x0003e4cd) popup_note2_wait_window_t_ParamLimits

0xfc85,	// (0x0003e4cd) popup_note2_wait_window_t

0x8309,	// (0x00036b51) wait_bar2_pane_ParamLimits

0x8309,	// (0x00036b51) wait_bar2_pane

0x8321,	// (0x00036b69) popup_snote2_single_text_window_g1_ParamLimits

0x8321,	// (0x00036b69) popup_snote2_single_text_window_g1

0x8349,	// (0x00036b91) popup_snote2_single_text_window_t1_ParamLimits

0x8349,	// (0x00036b91) popup_snote2_single_text_window_t1

0x8395,	// (0x00036bdd) popup_snote2_single_text_window_t2_ParamLimits

0x8395,	// (0x00036bdd) popup_snote2_single_text_window_t2

0x83e1,	// (0x00036c29) popup_snote2_single_text_window_t3_ParamLimits

0x83e1,	// (0x00036c29) popup_snote2_single_text_window_t3

0x8422,	// (0x00036c6a) popup_snote2_single_text_window_t4_ParamLimits

0x8422,	// (0x00036c6a) popup_snote2_single_text_window_t4

0x8458,	// (0x00036ca0) popup_snote2_single_text_window_t5_ParamLimits

0x8458,	// (0x00036ca0) popup_snote2_single_text_window_t5

0x0004,

0xfc8e,	// (0x0003e4d6) popup_snote2_single_text_window_t_ParamLimits

0xfc8e,	// (0x0003e4d6) popup_snote2_single_text_window_t

0x8483,	// (0x00036ccb) popup_snote2_single_graphic_window_g1_ParamLimits

0x8483,	// (0x00036ccb) popup_snote2_single_graphic_window_g1

0x84ab,	// (0x00036cf3) popup_snote2_single_graphic_window_g2_ParamLimits

0x84ab,	// (0x00036cf3) popup_snote2_single_graphic_window_g2

0x0001,

0xfc99,	// (0x0003e4e1) popup_snote2_single_graphic_window_g_ParamLimits

0xfc99,	// (0x0003e4e1) popup_snote2_single_graphic_window_g

0x84d3,	// (0x00036d1b) popup_snote2_single_graphic_window_t1_ParamLimits

0x84d3,	// (0x00036d1b) popup_snote2_single_graphic_window_t1

0x851f,	// (0x00036d67) popup_snote2_single_graphic_window_t2_ParamLimits

0x851f,	// (0x00036d67) popup_snote2_single_graphic_window_t2

0x83e1,	// (0x00036c29) popup_snote2_single_graphic_window_t3_ParamLimits

0x83e1,	// (0x00036c29) popup_snote2_single_graphic_window_t3

0x8422,	// (0x00036c6a) popup_snote2_single_graphic_window_t4_ParamLimits

0x8422,	// (0x00036c6a) popup_snote2_single_graphic_window_t4

0x8458,	// (0x00036ca0) popup_snote2_single_graphic_window_t5_ParamLimits

0x8458,	// (0x00036ca0) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9e,	// (0x0003e4e6) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9e,	// (0x0003e4e6) popup_snote2_single_graphic_window_t

0x752a,	// (0x00035d72) clock_nsta_pane_cp2_t1

0x752a,	// (0x00035d72) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0003e306) clock_nsta_pane_cp2_t

0x986b,	// (0x000380b3) form_field_data_wide_pane_g1_ParamLimits

0x4904,	// (0x0003314c) form_field_data_wide_pane_g2_ParamLimits

0x4904,	// (0x0003314c) form_field_data_wide_pane_g2

0x4910,	// (0x00033158) form_field_data_wide_pane_g3_ParamLimits

0x4910,	// (0x00033158) form_field_data_wide_pane_g3

0x0002,

0xf698,	// (0x0003dee0) form_field_data_wide_pane_g_ParamLimits

0xf698,	// (0x0003dee0) form_field_data_wide_pane_g

0xd5a5,	// (0x0003bded) grid_touch_3_pane_ParamLimits

0xd5a5,	// (0x0003bded) grid_touch_3_pane

0xdbbf,	// (0x0003c407) cell_touch_3_pane_ParamLimits

0xdbbf,	// (0x0003c407) cell_touch_3_pane

0x783f,	// (0x00036087) cell_touch_3_pane_g1

0x783f,	// (0x00036087) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0003e38b) cell_touch_3_pane_g

0x2313,	// (0x00030b5b) cont_query_data_pane

0x231b,	// (0x00030b63) cont_query_data_pane_cp1

0x856b,	// (0x00036db3) button_value_adjust_pane_cp7

0x8573,	// (0x00036dbb) query_popup_pane_cp3

0x4fa2,	// (0x000337ea) bg_popup_sub_pane_cp22_ParamLimits

0xaca6,	// (0x000394ee) navi_navi_volume_pane_cp2

0xacc1,	// (0x00039509) popup_side_volume_key_window_g2

0xacd0,	// (0x00039518) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0003df76) popup_side_volume_key_window_g

0xaced,	// (0x00039535) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0003df7d) popup_side_volume_key_window_t

0x51d2,	// (0x00033a1a) popup_side_volume_key_window_ParamLimits

0x9478,	// (0x00037cc0) list_double_graphic_pane_g4_ParamLimits

0x9478,	// (0x00037cc0) list_double_graphic_pane_g4

0xb54b,	// (0x00039d93) list_single_2heading_msg_pane_ParamLimits

0xb54b,	// (0x00039d93) list_single_2heading_msg_pane

0xbb0c,	// (0x0003a354) list_single_2heading_msg_pane_g1_ParamLimits

0xbb0c,	// (0x0003a354) list_single_2heading_msg_pane_g1

0x536c,	// (0x00033bb4) list_single_2heading_msg_pane_g2_ParamLimits

0x536c,	// (0x00033bb4) list_single_2heading_msg_pane_g2

0xbb18,	// (0x0003a360) list_single_2heading_msg_pane_g3_ParamLimits

0xbb18,	// (0x0003a360) list_single_2heading_msg_pane_g3

0xbb24,	// (0x0003a36c) list_single_2heading_msg_pane_g4_ParamLimits

0xbb24,	// (0x0003a36c) list_single_2heading_msg_pane_g4

0x0003,

0xfca9,	// (0x0003e4f1) list_single_2heading_msg_pane_g_ParamLimits

0xfca9,	// (0x0003e4f1) list_single_2heading_msg_pane_g

0x9fba,	// (0x00038802) list_single_2heading_msg_pane_t1_ParamLimits

0x9fba,	// (0x00038802) list_single_2heading_msg_pane_t1

0x9fe2,	// (0x0003882a) list_single_2heading_msg_pane_t2_ParamLimits

0x9fe2,	// (0x0003882a) list_single_2heading_msg_pane_t2

0xa016,	// (0x0003885e) list_single_2heading_msg_pane_t3_ParamLimits

0xa016,	// (0x0003885e) list_single_2heading_msg_pane_t3

0xa04f,	// (0x00038897) list_single_2heading_msg_pane_t4_ParamLimits

0xa04f,	// (0x00038897) list_single_2heading_msg_pane_t4

0x0003,

0xfcb2,	// (0x0003e4fa) list_single_2heading_msg_pane_t_ParamLimits

0xfcb2,	// (0x0003e4fa) list_single_2heading_msg_pane_t

0x20d8,	// (0x00030920) title_pane_g4_ParamLimits

0x20d8,	// (0x00030920) title_pane_g4

0xa997,	// (0x000391df) title_pane_stacon_g3_ParamLimits

0xa997,	// (0x000391df) title_pane_stacon_g3

0x80f8,	// (0x00036940) list_single_2graphic_im_pane_g4_ParamLimits

0x80f8,	// (0x00036940) list_single_2graphic_im_pane_g4

0x6948,	// (0x00035190) popup_side_volume_key_window_cp

0x6e6b,	// (0x000356b3) main_idle_act2_pane_t1

0xb1c9,	// (0x00039a11) toolbar_button_pane_g10

0xa819,	// (0x00039061) popup_toolbar_window_cp1

0x751b,	// (0x00035d63) clock_nsta_pane_cp_t1

0x751b,	// (0x00035d63) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0003e301) clock_nsta_pane_cp_t

0xaca6,	// (0x000394ee) navi_navi_volume_pane_cp2_ParamLimits

0xacb5,	// (0x000394fd) popup_side_volume_key_window_g1_ParamLimits

0xacc1,	// (0x00039509) popup_side_volume_key_window_g2_ParamLimits

0xacd0,	// (0x00039518) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0003df76) popup_side_volume_key_window_g_ParamLimits

0xb72d,	// (0x00039f75) fep_hwr_aid_pane

0x1cb6,	// (0x000304fe) bg_fep_hwr_top_pane_g4_ParamLimits

0x78ad,	// (0x000360f5) fep_hwr_top_pane_g1_ParamLimits

0x789b,	// (0x000360e3) fep_hwr_top_pane_g2_ParamLimits

0xb7e6,	// (0x0003a02e) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0003e356) fep_hwr_top_pane_g_ParamLimits

0xb7fb,	// (0x0003a043) fep_hwr_top_text_pane_ParamLimits

0x6714,	// (0x00034f5c) aid_touch_tab_arrow_arrow_2

0x670b,	// (0x00034f53) aid_touch_tab_arrow_left_2

0xb741,	// (0x00039f89) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xb778,	// (0x00039fc0) fep_hwr_prediction_pane

0x799a,	// (0x000361e2) fep_vkb_prediction_pane

0xd953,	// (0x0003c19b) fep_vkb_side_pane_g3_ParamLimits

0xd953,	// (0x0003c19b) fep_vkb_side_pane_g3

0x79d2,	// (0x0003621a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7d58,	// (0x000365a0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7d65,	// (0x000365ad) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0003e400) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8584,	// (0x00036dcc) fep_hwr_prediction_pane_g1

0xbb3c,	// (0x0003a384) fep_hwr_prediction_pane_g2

0xbb44,	// (0x0003a38c) fep_hwr_prediction_pane_g3

0xbb4c,	// (0x0003a394) fep_hwr_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0003e503) fep_hwr_prediction_pane_g

0x8584,	// (0x00036dcc) fep_vkb_prediction_pane_g1

0x858e,	// (0x00036dd6) fep_vkb_prediction_pane_g2

0x8596,	// (0x00036dde) fep_vkb_prediction_pane_g3

0x859e,	// (0x00036de6) fep_vkb_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0003e50c) fep_vkb_prediction_pane_g

0xb4a5,	// (0x00039ced) slider_set_pane_g3

0xb4b9,	// (0x00039d01) slider_set_pane_g4

0xb4d1,	// (0x00039d19) slider_set_pane_g5

0xb4a5,	// (0x00039ced) slider_set_pane_g6

0xb4e7,	// (0x00039d2f) slider_set_pane_g7

0x6bf0,	// (0x00035438) slider_form_pane_g3

0x6bf9,	// (0x00035441) slider_form_pane_g4

0x6c01,	// (0x00035449) slider_form_pane_g5

0x6bf0,	// (0x00035438) slider_form_pane_g6

0xd434,	// (0x0003bc7c) slider_form_pane_g7

0x70bd,	// (0x00035905) slider_set_pane_vc_g3

0x70c6,	// (0x0003590e) slider_set_pane_vc_g4

0x70cf,	// (0x00035917) slider_set_pane_vc_g5

0x70bd,	// (0x00035905) slider_set_pane_vc_g6

0x70d8,	// (0x00035920) slider_set_pane_vc_g7

0x70bd,	// (0x00035905) slider_form_pane_vc_g1

0x70c6,	// (0x0003590e) slider_form_pane_vc_g2

0x70cf,	// (0x00035917) slider_form_pane_vc_g3

0x70bd,	// (0x00035905) slider_form_pane_vc_g4

0x7291,	// (0x00035ad9) slider_form_pane_vc_g5

0x0004,

0xfa92,	// (0x0003e2da) slider_form_pane_vc_g

0x20ba,	// (0x00030902) main_idle_act3_pane

0x85a6,	// (0x00036dee) ai3_links_pane

0xdc01,	// (0x0003c449) popup_ai3_data_window_ParamLimits

0xdc01,	// (0x0003c449) popup_ai3_data_window

0x20ba,	// (0x00030902) grid_ai3_links_pane

0xdc1b,	// (0x0003c463) cell_ai3_links_pane_ParamLimits

0xdc1b,	// (0x0003c463) cell_ai3_links_pane

0x85af,	// (0x00036df7) bg_popup_sub_pane_cp11

0x85bc,	// (0x00036e04) cell_ai3_links_pane_g1

0x20ba,	// (0x00030902) bg_popup_sub_pane_cp12

0x85e1,	// (0x00036e29) heading_ai3_data_pane

0x85e9,	// (0x00036e31) list_ai3_gene_pane

0x85f5,	// (0x00036e3d) popup_ai3_data_window_g1

0x85fd,	// (0x00036e45) heading_ai3_data_pane_g1

0x8605,	// (0x00036e4d) heading_ai3_data_pane_t1

0x8613,	// (0x00036e5b) list_double_ai3_gene_pane_ParamLimits

0x8613,	// (0x00036e5b) list_double_ai3_gene_pane

0x8620,	// (0x00036e68) list_single_ai3_gene_pane_ParamLimits

0x8620,	// (0x00036e68) list_single_ai3_gene_pane

0x7804,	// (0x0003604c) list_highlight_pane_cp7_ParamLimits

0x7804,	// (0x0003604c) list_highlight_pane_cp7

0x862d,	// (0x00036e75) list_single_a13_gene_pane_t1_ParamLimits

0x862d,	// (0x00036e75) list_single_a13_gene_pane_t1

0x8644,	// (0x00036e8c) list_single_ai3_gene_pane_g1

0x864d,	// (0x00036e95) list_single_ai3_gene_pane_g2

0x0001,

0xfccd,	// (0x0003e515) list_single_ai3_gene_pane_g

0x8655,	// (0x00036e9d) list_double_ai3_gene_pane_g1_ParamLimits

0x8655,	// (0x00036e9d) list_double_ai3_gene_pane_g1

0x8661,	// (0x00036ea9) list_double_ai3_gene_pane_t1_ParamLimits

0x8661,	// (0x00036ea9) list_double_ai3_gene_pane_t1

0x867d,	// (0x00036ec5) list_double_ai3_gene_pane_t2_ParamLimits

0x867d,	// (0x00036ec5) list_double_ai3_gene_pane_t2

0x8693,	// (0x00036edb) list_double_ai3_gene_pane_t3_ParamLimits

0x8693,	// (0x00036edb) list_double_ai3_gene_pane_t3

0x0002,

0xfcd2,	// (0x0003e51a) list_double_ai3_gene_pane_t_ParamLimits

0xfcd2,	// (0x0003e51a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9fb0,	// (0x000387f8) aid_size_min_col_2

0xdbed,	// (0x0003c435) aid_size_min_msg_ParamLimits

0xdbed,	// (0x0003c435) aid_size_min_msg

0xd967,	// (0x0003c1af) fep_vkb_top_text_pane_g2_ParamLimits

0xd967,	// (0x0003c1af) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0003e386) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0003e386) fep_vkb_top_text_pane_g

0x20ba,	// (0x00030902) main_hc_apps_shell_pane

0x86b0,	// (0x00036ef8) grid_hc_apps_pane_ParamLimits

0x86b0,	// (0x00036ef8) grid_hc_apps_pane

0x86bf,	// (0x00036f07) list_hc_apps_pane

0x86c7,	// (0x00036f0f) scroll_pane_cp37_ParamLimits

0x86c7,	// (0x00036f0f) scroll_pane_cp37

0xdc33,	// (0x0003c47b) cell_hc_apps_pane_ParamLimits

0xdc33,	// (0x0003c47b) cell_hc_apps_pane

0xdce1,	// (0x0003c529) cell_hc_apps_pane_g1_ParamLimits

0xdce1,	// (0x0003c529) cell_hc_apps_pane_g1

0x86d3,	// (0x00036f1b) cell_hc_apps_pane_g2_ParamLimits

0x86d3,	// (0x00036f1b) cell_hc_apps_pane_g2

0x86ef,	// (0x00036f37) cell_hc_apps_pane_g3_ParamLimits

0x86ef,	// (0x00036f37) cell_hc_apps_pane_g3

0x0002,

0xfcd9,	// (0x0003e521) cell_hc_apps_pane_g_ParamLimits

0xfcd9,	// (0x0003e521) cell_hc_apps_pane_g

0xdd12,	// (0x0003c55a) cell_hc_apps_pane_t1_ParamLimits

0xdd12,	// (0x0003c55a) cell_hc_apps_pane_t1

0x225d,	// (0x00030aa5) grid_highlight_pane_cp10_ParamLimits

0x225d,	// (0x00030aa5) grid_highlight_pane_cp10

0xdd52,	// (0x0003c59a) list_single_hc_apps_pane_ParamLimits

0xdd52,	// (0x0003c59a) list_single_hc_apps_pane

0xddae,	// (0x0003c5f6) list_single_hc_apps_pane_g1

0xbb54,	// (0x0003a39c) list_single_hc_apps_pane_g2

0x0001,

0xfce0,	// (0x0003e528) list_single_hc_apps_pane_g

0xbb6d,	// (0x0003a3b5) list_single_hc_apps_pane_g2_copy1

0xa074,	// (0x000388bc) list_single_hc_apps_pane_t1

0x212a,	// (0x00030972) bg_set_opt_pane_cp_ParamLimits

0xa571,	// (0x00038db9) setting_slider_pane_t1_ParamLimits

0xa58a,	// (0x00038dd2) setting_slider_pane_t2_ParamLimits

0xa5a4,	// (0x00038dec) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0003ddbe) setting_slider_pane_t_ParamLimits

0xa5bc,	// (0x00038e04) slider_set_pane_ParamLimits

0xb081,	// (0x000398c9) control_pane_g5_ParamLimits

0xb081,	// (0x000398c9) control_pane_g5

0x6bac,	// (0x000353f4) slider_set_pane_g1_ParamLimits

0xb499,	// (0x00039ce1) slider_set_pane_g2_ParamLimits

0xb4a5,	// (0x00039ced) slider_set_pane_g3_ParamLimits

0xb4b9,	// (0x00039d01) slider_set_pane_g4_ParamLimits

0xb4d1,	// (0x00039d19) slider_set_pane_g5_ParamLimits

0xb4a5,	// (0x00039ced) slider_set_pane_g6_ParamLimits

0xb4e7,	// (0x00039d2f) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0003e1c2) slider_set_pane_g_ParamLimits

0x52b3,	// (0x00033afb) navi_icon_text_pane_ParamLimits

0xcda6,	// (0x0003b5ee) aid_fill_nsta_2_ParamLimits

0xcdd0,	// (0x0003b618) aid_touch_tab_arrow_left_ParamLimits

0xcddc,	// (0x0003b624) aid_touch_tab_arrow_right_ParamLimits

0xce48,	// (0x0003b690) clock_nsta_pane_ParamLimits

0x66ed,	// (0x00034f35) navi_icon_pane_g1_ParamLimits

0x66f9,	// (0x00034f41) navi_text_pane_t1_ParamLimits

0x756c,	// (0x00035db4) navi_icon_text_pane_g1_ParamLimits

0x7578,	// (0x00035dc0) navi_icon_text_pane_t1_ParamLimits

0xddae,	// (0x0003c5f6) list_single_hc_apps_pane_g1_ParamLimits

0xbb54,	// (0x0003a39c) list_single_hc_apps_pane_g2_ParamLimits

0xfce0,	// (0x0003e528) list_single_hc_apps_pane_g_ParamLimits

0xbb6d,	// (0x0003a3b5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa074,	// (0x000388bc) list_single_hc_apps_pane_t1_ParamLimits

0xa3bf,	// (0x00038c07) popup_toolbar2_fixed_window_ParamLimits

0xa3bf,	// (0x00038c07) popup_toolbar2_fixed_window

0xcd19,	// (0x0003b561) popup_toolbar2_float_window

0x20ba,	// (0x00030902) bg_popup_sub_pane_cp27

0x8711,	// (0x00036f59) grid_toolbar2_float_pane

0x20ba,	// (0x00030902) bg_popup_sub_pane_cp26

0x8711,	// (0x00036f59) grid_toolbar2_fixed_pane

0xddc7,	// (0x0003c60f) cell_toolbar2_fixed_pane_ParamLimits

0xddc7,	// (0x0003c60f) cell_toolbar2_fixed_pane

0xddd7,	// (0x0003c61f) cell_toolbar2_fixed_pane_g1

0x8719,	// (0x00036f61) toolbar2_fixed_button_pane

0x5997,	// (0x000341df) toolbar2_fixed_button_pane_g1

0x59a7,	// (0x000341ef) toolbar2_fixed_button_pane_g2

0x599f,	// (0x000341e7) toolbar2_fixed_button_pane_g3

0x59b7,	// (0x000341ff) toolbar2_fixed_button_pane_g4

0x59af,	// (0x000341f7) toolbar2_fixed_button_pane_g5

0x59bf,	// (0x00034207) toolbar2_fixed_button_pane_g6

0x59c7,	// (0x0003420f) toolbar2_fixed_button_pane_g7

0x59d7,	// (0x0003421f) toolbar2_fixed_button_pane_g8

0x59cf,	// (0x00034217) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0003e0c4) toolbar2_fixed_button_pane_g

0x8721,	// (0x00036f69) cell_toolbar2_float_pane_ParamLimits

0x8721,	// (0x00036f69) cell_toolbar2_float_pane

0x8732,	// (0x00036f7a) cell_toolbar2_float_pane_g1

0x8719,	// (0x00036f61) toolbar2_fixed_button_pane_cp

0xd841,	// (0x0003c089) fep_vkb_accented_list_pane_ParamLimits

0xd841,	// (0x0003c089) fep_vkb_accented_list_pane

0xb949,	// (0x0003a191) bg_popup_fep_shadow_pane_g9

0x5433,	// (0x00033c7b) bg_popup_fep_shadow_pane_cp3

0x49f0,	// (0x00033238) list_accented_list_pane

0x873b,	// (0x00036f83) list_single_accented_list_pane_ParamLimits

0x873b,	// (0x00036f83) list_single_accented_list_pane

0x5433,	// (0x00033c7b) list_highlight_pane_cp10

0x874c,	// (0x00036f94) list_single_accented_list_pane_t1

0xcc71,	// (0x0003b4b9) popup_slider_window_ParamLimits

0xcc71,	// (0x0003b4b9) popup_slider_window

0x857b,	// (0x00036dc3) aid_indentation_list_msg

0xde8c,	// (0x0003c6d4) bg_popup_window_pane_cp19

0x87b8,	// (0x00037000) popup_slider_window_g1

0x87d4,	// (0x0003701c) popup_slider_window_g2

0x87f0,	// (0x00037038) popup_slider_window_g3

0x0005,

0xfce5,	// (0x0003e52d) popup_slider_window_g

0x880c,	// (0x00037054) popup_slider_window_t1

0x8852,	// (0x0003709a) small_volume_slider_vertical_pane

0x783f,	// (0x00036087) small_volume_slider_vertical_pane_g1

0x783f,	// (0x00036087) small_volume_slider_vertical_pane_g2

0x886e,	// (0x000370b6) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf7,	// (0x0003e53f) small_volume_slider_vertical_pane_g

0xa181,	// (0x000389c9) area_side_right_pane_ParamLimits

0xa181,	// (0x000389c9) area_side_right_pane

0xbb89,	// (0x0003a3d1) aid_size_side_button_ParamLimits

0xbb89,	// (0x0003a3d1) aid_size_side_button

0xbb9d,	// (0x0003a3e5) grid_sctrl_middle_pane_ParamLimits

0xbb9d,	// (0x0003a3e5) grid_sctrl_middle_pane

0xbbbd,	// (0x0003a405) sctrl_sk_bottom_pane

0xbbce,	// (0x0003a416) sctrl_sk_top_pane

0xbbe0,	// (0x0003a428) aid_touch_sctrl_top

0x225d,	// (0x00030aa5) bg_sctrl_sk_pane_ParamLimits

0x225d,	// (0x00030aa5) bg_sctrl_sk_pane

0xbbed,	// (0x0003a435) sctrl_sk_top_pane_g1

0xbbfa,	// (0x0003a442) sctrl_sk_top_pane_t1

0xbbe0,	// (0x0003a428) aid_touch_sctrl_bottom

0x225d,	// (0x00030aa5) bg_sctrl_sk_pane_cp_ParamLimits

0x225d,	// (0x00030aa5) bg_sctrl_sk_pane_cp

0xbc15,	// (0x0003a45d) sctrl_sk_bottom_pane_g1

0xbbfa,	// (0x0003a442) sctrl_sk_bottom_pane_t1

0xbc1e,	// (0x0003a466) cell_sctrl_middle_pane_ParamLimits

0xbc1e,	// (0x0003a466) cell_sctrl_middle_pane

0xbc39,	// (0x0003a481) aid_touch_sctrl_middle_ParamLimits

0xbc39,	// (0x0003a481) aid_touch_sctrl_middle

0x48ea,	// (0x00033132) bg_sctrl_middle_pane_ParamLimits

0x48ea,	// (0x00033132) bg_sctrl_middle_pane

0x79d2,	// (0x0003621a) cell_sctrl_middle_pane_g1_ParamLimits

0x79d2,	// (0x0003621a) cell_sctrl_middle_pane_g1

0xbc4b,	// (0x0003a493) cell_sctrl_middle_pane_g2_ParamLimits

0xbc4b,	// (0x0003a493) cell_sctrl_middle_pane_g2

0x0001,

0xfd03,	// (0x0003e54b) cell_sctrl_middle_pane_g_ParamLimits

0xfd03,	// (0x0003e54b) cell_sctrl_middle_pane_g

0x5997,	// (0x000341df) bg_sctrl_middle_pane_g1

0x59a7,	// (0x000341ef) bg_sctrl_middle_pane_g2

0x599f,	// (0x000341e7) bg_sctrl_middle_pane_g3

0x59b7,	// (0x000341ff) bg_sctrl_middle_pane_g4

0x59af,	// (0x000341f7) bg_sctrl_middle_pane_g5

0x59bf,	// (0x00034207) bg_sctrl_middle_pane_g6

0x59c7,	// (0x0003420f) bg_sctrl_middle_pane_g7

0x59d7,	// (0x0003421f) bg_sctrl_middle_pane_g8

0x0007,

0xfd08,	// (0x0003e550) bg_sctrl_middle_pane_g

0x59cf,	// (0x00034217) bg_sctrl_middle_pane_g8_copy1

0x5997,	// (0x000341df) bg_sctrl_sk_pane_g1

0x59a7,	// (0x000341ef) bg_sctrl_sk_pane_g2

0x599f,	// (0x000341e7) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0003e0c4) bg_sctrl_sk_pane_g

0x2ed9,	// (0x00031721) aid_size_touch_scroll_bar

0x59b7,	// (0x000341ff) bg_sctrl_sk_pane_g4

0x59af,	// (0x000341f7) bg_sctrl_sk_pane_g5

0x59bf,	// (0x00034207) bg_sctrl_sk_pane_g6

0x59c7,	// (0x0003420f) bg_sctrl_sk_pane_g7

0x59d7,	// (0x0003421f) bg_sctrl_sk_pane_g8

0x59cf,	// (0x00034217) bg_sctrl_sk_pane_g9

0x56cd,	// (0x00033f15) popup_fep_china_hwr2_fs_candidate_window

0xc979,	// (0x0003b1c1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc979,	// (0x0003b1c1) popup_fep_china_hwr2_fs_control_window

0x79d2,	// (0x0003621a) sctrl_sk_top_pane_g2

0x0001,

0xfcfe,	// (0x0003e546) sctrl_sk_top_pane_g

0xdf06,	// (0x0003c74e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdf06,	// (0x0003c74e) aid_fep_china_hwr2_fs_cell

0xdf18,	// (0x0003c760) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdf18,	// (0x0003c760) bg_popup_fep_shadow_pane_cp4

0xdf2f,	// (0x0003c777) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdf2f,	// (0x0003c777) bg_popup_fep_shadow_pane_cp5

0xdf41,	// (0x0003c789) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdf41,	// (0x0003c789) popup_fep_china_hwr2_fs_control_bar_grid

0xdf51,	// (0x0003c799) popup_fep_china_hwr2_fs_control_funtion_grid

0x8877,	// (0x000370bf) aid_fep_china_hwr2_fs_candi_cell

0x20ba,	// (0x00030902) bg_popup_fep_shadow_pane_cp6

0x8881,	// (0x000370c9) popup_fep_china_hwr2_fs_candidate_grid

0xdf59,	// (0x0003c7a1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdf59,	// (0x0003c7a1) cell_fep_china_hwr2_fs_funtion_grid

0x783f,	// (0x00036087) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x888b,	// (0x000370d3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x888b,	// (0x000370d3) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8899,	// (0x000370e1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8899,	// (0x000370e1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd19,	// (0x0003e561) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd19,	// (0x0003e561) cell_fep_china_hwr2_fs_funtion_grid_g

0xdf71,	// (0x0003c7b9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdf71,	// (0x0003c7b9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdf86,	// (0x0003c7ce) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdf86,	// (0x0003c7ce) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1e,	// (0x0003e566) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1e,	// (0x0003e566) cell_fep_china_hwr2_fs_funtion_grid_t

0x88af,	// (0x000370f7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x88b7,	// (0x000370ff) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x88bf,	// (0x00037107) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd23,	// (0x0003e56b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x88c7,	// (0x0003710f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x88c7,	// (0x0003710f) cell_fep_china_hwr2_fs_candidate_grid

0x88e0,	// (0x00037128) popup_fep_china_hwr2_fs_candidate_grid_g20

0x88e8,	// (0x00037130) popup_fep_china_hwr2_fs_candidate_grid_g21

0x783f,	// (0x00036087) cell_fep_china_hwr2_fs_candidate_grid_g1

0x783f,	// (0x00036087) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0003e38b) cell_fep_china_hwr2_fs_candidate_grid_g

0x88f0,	// (0x00037138) cell_fep_china_hwr2_fs_candidate_grid_t1

0x57e4,	// (0x0003402c) clock_nsta_pane_cp_24_ParamLimits

0x57e4,	// (0x0003402c) clock_nsta_pane_cp_24

0x584c,	// (0x00034094) indicator_nsta_pane_cp_24_ParamLimits

0x584c,	// (0x00034094) indicator_nsta_pane_cp_24

0x65f7,	// (0x00034e3f) heading_pane_g1

0x0001,

0xf8e1,	// (0x0003e129) heading_pane_g

0x6cf8,	// (0x00035540) grid_sct_catagory_button_pane

0x5f83,	// (0x000347cb) scroll_pane_cp5_ParamLimits

0x759e,	// (0x00035de6) button_value_adjust_pane_cp5_ParamLimits

0x759e,	// (0x00035de6) button_value_adjust_pane_cp5

0x765c,	// (0x00035ea4) form2_midp_time_pane_ParamLimits

0x88fe,	// (0x00037146) cell_sct_catagory_button_pane_ParamLimits

0x88fe,	// (0x00037146) cell_sct_catagory_button_pane

0x7804,	// (0x0003604c) bg_button_pane_cp01_ParamLimits

0x7804,	// (0x0003604c) bg_button_pane_cp01

0x783f,	// (0x00036087) cell_sct_catagory_button_pane_g1

0xcca8,	// (0x0003b4f0) popup_tb_extension_window

0xdfa2,	// (0x0003c7ea) aid_size_cell_ext_ParamLimits

0xdfa2,	// (0x0003c7ea) aid_size_cell_ext

0x225d,	// (0x00030aa5) bg_tb_trans_pane_cp1_ParamLimits

0x225d,	// (0x00030aa5) bg_tb_trans_pane_cp1

0xdfc2,	// (0x0003c80a) grid_tb_ext_pane_ParamLimits

0xdfc2,	// (0x0003c80a) grid_tb_ext_pane

0xdff2,	// (0x0003c83a) cell_tb_ext_pane_ParamLimits

0xdff2,	// (0x0003c83a) cell_tb_ext_pane

0xe009,	// (0x0003c851) cell_tb_ext_pane_g1_ParamLimits

0xe009,	// (0x0003c851) cell_tb_ext_pane_g1

0x8910,	// (0x00037158) cell_tb_ext_pane_t1

0x225d,	// (0x00030aa5) list_highlight_pane_cp11_ParamLimits

0x225d,	// (0x00030aa5) list_highlight_pane_cp11

0xa3de,	// (0x00038c26) popup_uni_indicator_window_ParamLimits

0xa3de,	// (0x00038c26) popup_uni_indicator_window

0x48ea,	// (0x00033132) bg_popup_sub_pane_cp14

0x892b,	// (0x00037173) list_uniindi_pane

0x8937,	// (0x0003717f) uniindi_top_pane

0x225d,	// (0x00030aa5) bg_uniindi_top_pane

0x8956,	// (0x0003719e) uniindi_top_pane_g1

0x896c,	// (0x000371b4) uniindi_top_pane_g2

0x0003,

0xfd2a,	// (0x0003e572) uniindi_top_pane_g

0x8996,	// (0x000371de) uniindi_top_pane_t1

0x89c0,	// (0x00037208) list_single_uniindi_pane_ParamLimits

0x89c0,	// (0x00037208) list_single_uniindi_pane

0x783f,	// (0x00036087) bg_uniindi_top_pane_g1

0x89d3,	// (0x0003721b) list_single_uniindi_pane_g1

0x89e6,	// (0x0003722e) list_single_uniindi_pane_t1

0x20ba,	// (0x00030902) control_bg_pane

0x8a0b,	// (0x00037253) bg_sctrl_sk_pane_cp1

0x8a14,	// (0x0003725c) bg_sctrl_sk_pane_cp2

0x8a1d,	// (0x00037265) control_bg_pane_g1

0x8a26,	// (0x0003726e) control_bg_pane_g2

0x0001,

0xfd33,	// (0x0003e57b) control_bg_pane_g

0x745d,	// (0x00035ca5) cell_indicator_nsta_pane_g1_ParamLimits

0xd5e9,	// (0x0003be31) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0003e2ef) cell_indicator_nsta_pane_g_ParamLimits

0x9e11,	// (0x00038659) form2_midp_time_pane_t1_ParamLimits

0x2d1b,	// (0x00031563) main_idle_act4_pane_ParamLimits

0x2d1b,	// (0x00031563) main_idle_act4_pane

0xcca8,	// (0x0003b4f0) popup_tb_extension_window_ParamLimits

0xdfe2,	// (0x0003c82a) tb_ext_find_pane_ParamLimits

0xdfe2,	// (0x0003c82a) tb_ext_find_pane

0x8a2f,	// (0x00037277) ai_gene_pane_1_cp1

0x54c7,	// (0x00033d0f) ai_gene_pane_2_cp1

0x8a37,	// (0x0003727f) list_single_idle_plugin_calendar_pane

0x8a40,	// (0x00037288) list_single_idle_plugin_notification_pane

0x8a49,	// (0x00037291) list_single_idle_plugin_player_pane

0xe026,	// (0x0003c86e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe026,	// (0x0003c86e) list_single_idle_plugin_shortcut_pane

0xe048,	// (0x0003c890) main_idle_act4_pane_t1

0xe05a,	// (0x0003c8a2) main_idle_act4_pane_t2

0x0001,

0xfd38,	// (0x0003e580) main_idle_act4_pane_t

0xe06c,	// (0x0003c8b4) middle_sk_idle_act4_pane_ParamLimits

0xe06c,	// (0x0003c8b4) middle_sk_idle_act4_pane

0xe082,	// (0x0003c8ca) popup_clock_digital_analogue_window_cp2

0xe09c,	// (0x0003c8e4) shortcut_wheel_idle_act4_pane_ParamLimits

0xe09c,	// (0x0003c8e4) shortcut_wheel_idle_act4_pane

0x783f,	// (0x00036087) shortcut_wheel_idle_act4_pane_g1

0x783f,	// (0x00036087) shortcut_wheel_idle_act4_pane_g2

0x783f,	// (0x00036087) shortcut_wheel_idle_act4_pane_g3

0x783f,	// (0x00036087) shortcut_wheel_idle_act4_pane_g4

0x783f,	// (0x00036087) shortcut_wheel_idle_act4_pane_g5

0x8a52,	// (0x0003729a) shortcut_wheel_idle_act4_pane_g6

0x8a5a,	// (0x000372a2) shortcut_wheel_idle_act4_pane_g7

0x8a62,	// (0x000372aa) shortcut_wheel_idle_act4_pane_g8

0x8a6a,	// (0x000372b2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3d,	// (0x0003e585) shortcut_wheel_idle_act4_pane_g

0x79d2,	// (0x0003621a) middle_sk_idle_act4_pane_g1_ParamLimits

0x79d2,	// (0x0003621a) middle_sk_idle_act4_pane_g1

0xe10c,	// (0x0003c954) middle_sk_idle_act4_pane_g2_ParamLimits

0xe10c,	// (0x0003c954) middle_sk_idle_act4_pane_g2

0x0001,

0xfd60,	// (0x0003e5a8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd60,	// (0x0003e5a8) middle_sk_idle_act4_pane_g

0xe118,	// (0x0003c960) middle_sk_idle_act4_pane_t1_ParamLimits

0xe118,	// (0x0003c960) middle_sk_idle_act4_pane_t1

0xe135,	// (0x0003c97d) grid_ai_shortcut_pane_ParamLimits

0xe135,	// (0x0003c97d) grid_ai_shortcut_pane

0xe14e,	// (0x0003c996) list_highlight_pane_cp16_ParamLimits

0xe14e,	// (0x0003c996) list_highlight_pane_cp16

0xe15b,	// (0x0003c9a3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe15b,	// (0x0003c9a3) list_single_idle_plugin_shortcut_pane_g1

0xe167,	// (0x0003c9af) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe167,	// (0x0003c9af) list_single_idle_plugin_shortcut_pane_g2

0xe17f,	// (0x0003c9c7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe17f,	// (0x0003c9c7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd65,	// (0x0003e5ad) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd65,	// (0x0003e5ad) list_single_idle_plugin_shortcut_pane_g

0xe192,	// (0x0003c9da) cell_ai_shortcut_pane_ParamLimits

0xe192,	// (0x0003c9da) cell_ai_shortcut_pane

0xe1b6,	// (0x0003c9fe) cell_ai_shortcut_pane_g1_ParamLimits

0xe1b6,	// (0x0003c9fe) cell_ai_shortcut_pane_g1

0x8a2f,	// (0x00037277) ai_gene_pane_1_cp2

0x8a72,	// (0x000372ba) ai_gene_pane_2_cp2

0x8a7a,	// (0x000372c2) list_highlight_pane_cp15

0x8a83,	// (0x000372cb) list_single_idle_plugin_calendar_pane_g1

0x8a7a,	// (0x000372c2) list_highlight_pane_cp17

0x8a8b,	// (0x000372d3) list_single_idle_plugin_calendar_pane_g1_copy1

0x8a93,	// (0x000372db) list_single_idle_plugin_player_pane_g1

0x6ef7,	// (0x0003573f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6c,	// (0x0003e5b4) list_single_idle_plugin_player_pane_g

0x8a9b,	// (0x000372e3) list_single_idle_plugin_player_pane_t1

0x8aa9,	// (0x000372f1) list_single_idle_plugin_player_pane_t2

0x8ab7,	// (0x000372ff) list_single_idle_plugin_player_pane_t3

0x8ac5,	// (0x0003730d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd71,	// (0x0003e5b9) list_single_idle_plugin_player_pane_t

0x8ad3,	// (0x0003731b) wait_bar_pane_cp15

0x8adb,	// (0x00037323) grid_ai_notification_pane

0x6ef7,	// (0x0003573f) list_single_idle_plugin_notification_pane_g1

0xe1d8,	// (0x0003ca20) cell_ai_notification_pane_ParamLimits

0xe1d8,	// (0x0003ca20) cell_ai_notification_pane

0x8ae4,	// (0x0003732c) cell_ai_notification_pane_g1

0x8aec,	// (0x00037334) cell_ai_notification_pane_t1

0xe1e5,	// (0x0003ca2d) tb_ext_find_button_pane

0xe1ed,	// (0x0003ca35) tb_ext_find_pane_g1

0xe1f5,	// (0x0003ca3d) tb_ext_find_pane_t1

0x4f41,	// (0x00033789) tb_ext_find_button_pane_g1

0x8afa,	// (0x00037342) tb_ext_find_button_pane_g2

0x0001,

0xfd7a,	// (0x0003e5c2) tb_ext_find_button_pane_g

0xe048,	// (0x0003c890) main_idle_act4_pane_t1_ParamLimits

0xe05a,	// (0x0003c8a2) main_idle_act4_pane_t2_ParamLimits

0xfd38,	// (0x0003e580) main_idle_act4_pane_t_ParamLimits

0xe082,	// (0x0003c8ca) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe090,	// (0x0003c8d8) sat_plugin_idle_act4_pane_ParamLimits

0xe090,	// (0x0003c8d8) sat_plugin_idle_act4_pane

0xe203,	// (0x0003ca4b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe203,	// (0x0003ca4b) sat_plugin_idle_act4_pane_t1

0xe216,	// (0x0003ca5e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe216,	// (0x0003ca5e) sat_plugin_idle_act4_pane_t2

0xe229,	// (0x0003ca71) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe229,	// (0x0003ca71) sat_plugin_idle_act4_pane_t3

0xe23c,	// (0x0003ca84) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe23c,	// (0x0003ca84) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7f,	// (0x0003e5c7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7f,	// (0x0003e5c7) sat_plugin_idle_act4_pane_t

0xa319,	// (0x00038b61) popup_battery_window_ParamLimits

0xa319,	// (0x00038b61) popup_battery_window

0x225d,	// (0x00030aa5) bg_popup_sub_pane_cp25_ParamLimits

0x225d,	// (0x00030aa5) bg_popup_sub_pane_cp25

0xe24f,	// (0x0003ca97) popup_battery_window_g1_ParamLimits

0xe24f,	// (0x0003ca97) popup_battery_window_g1

0xe25b,	// (0x0003caa3) popup_battery_window_t1_ParamLimits

0xe25b,	// (0x0003caa3) popup_battery_window_t1

0xe26d,	// (0x0003cab5) popup_battery_window_t2_ParamLimits

0xe26d,	// (0x0003cab5) popup_battery_window_t2

0x0001,

0xfd88,	// (0x0003e5d0) popup_battery_window_t_ParamLimits

0xfd88,	// (0x0003e5d0) popup_battery_window_t

0xaecb,	// (0x00039713) midp_canvas_pane_ParamLimits

0xaf2d,	// (0x00039775) midp_keypad_pane_ParamLimits

0xaf2d,	// (0x00039775) midp_keypad_pane

0x4a42,	// (0x0003328a) main_midp_pane_ParamLimits

0x7539,	// (0x00035d81) signal_pane_g2_cp_ParamLimits

0xe28a,	// (0x0003cad2) aid_size_cell_midp_keypad_ParamLimits

0xe28a,	// (0x0003cad2) aid_size_cell_midp_keypad

0xe2a4,	// (0x0003caec) midp_keyp_game_grid_pane_ParamLimits

0xe2a4,	// (0x0003caec) midp_keyp_game_grid_pane

0xe2c4,	// (0x0003cb0c) midp_keyp_rocker_pane_ParamLimits

0xe2c4,	// (0x0003cb0c) midp_keyp_rocker_pane

0xe2ef,	// (0x0003cb37) midp_keyp_sk_left_pane_ParamLimits

0xe2ef,	// (0x0003cb37) midp_keyp_sk_left_pane

0xe349,	// (0x0003cb91) midp_keyp_sk_right_pane_ParamLimits

0xe349,	// (0x0003cb91) midp_keyp_sk_right_pane

0x20ba,	// (0x00030902) bg_button_pane_cp03

0xe3a3,	// (0x0003cbeb) midp_keyp_sk_left_pane_g1

0x20ba,	// (0x00030902) bg_button_pane_cp04

0xe3a3,	// (0x0003cbeb) midp_keyp_sk_right_pane_g1

0x783f,	// (0x00036087) midp_keyp_rocker_pane_g1

0xe3ac,	// (0x0003cbf4) keyp_game_cell_pane_ParamLimits

0xe3ac,	// (0x0003cbf4) keyp_game_cell_pane

0x20ba,	// (0x00030902) bg_button_pane_cp02

0xe3bf,	// (0x0003cc07) keyp_game_cell_pane_g1

0xa35d,	// (0x00038ba5) popup_fep_vkb2_window_ParamLimits

0xa35d,	// (0x00038ba5) popup_fep_vkb2_window

0xbc69,	// (0x0003a4b1) aid_size_cell_vkb2_ParamLimits

0xbc69,	// (0x0003a4b1) aid_size_cell_vkb2

0xbcbd,	// (0x0003a505) popup_fep_vkb2_window_g1_ParamLimits

0xbcbd,	// (0x0003a505) popup_fep_vkb2_window_g1

0xbd05,	// (0x0003a54d) vkb2_area_bottom_pane_ParamLimits

0xbd05,	// (0x0003a54d) vkb2_area_bottom_pane

0xbd51,	// (0x0003a599) vkb2_area_keypad_pane_ParamLimits

0xbd51,	// (0x0003a599) vkb2_area_keypad_pane

0xbd93,	// (0x0003a5db) vkb2_area_top_pane_ParamLimits

0xbd93,	// (0x0003a5db) vkb2_area_top_pane

0xbe0d,	// (0x0003a655) vkb2_top_entry_pane_ParamLimits

0xbe0d,	// (0x0003a655) vkb2_top_entry_pane

0xbe37,	// (0x0003a67f) vkb2_top_grid_left_pane_ParamLimits

0xbe37,	// (0x0003a67f) vkb2_top_grid_left_pane

0xbe55,	// (0x0003a69d) vkb2_top_grid_right_pane_ParamLimits

0xbe55,	// (0x0003a69d) vkb2_top_grid_right_pane

0xbe73,	// (0x0003a6bb) vkb2_cell_keypad_pane_ParamLimits

0xbe73,	// (0x0003a6bb) vkb2_cell_keypad_pane

0xbf44,	// (0x0003a78c) vkb2_area_bottom_grid_pane_ParamLimits

0xbf44,	// (0x0003a78c) vkb2_area_bottom_grid_pane

0xbf6a,	// (0x0003a7b2) vkb2_area_bottom_pane_g1_ParamLimits

0xbf6a,	// (0x0003a7b2) vkb2_area_bottom_pane_g1

0xbf8e,	// (0x0003a7d6) vkb2_area_bottom_pane_g2_ParamLimits

0xbf8e,	// (0x0003a7d6) vkb2_area_bottom_pane_g2

0xbfbc,	// (0x0003a804) vkb2_area_bottom_pane_g3_ParamLimits

0xbfbc,	// (0x0003a804) vkb2_area_bottom_pane_g3

0x0002,

0xfd8d,	// (0x0003e5d5) vkb2_area_bottom_pane_g_ParamLimits

0xfd8d,	// (0x0003e5d5) vkb2_area_bottom_pane_g

0xc01d,	// (0x0003a865) vkb2_top_cell_left_pane_ParamLimits

0xc01d,	// (0x0003a865) vkb2_top_cell_left_pane

0xe3f1,	// (0x0003cc39) vkb2_top_entry_pane_g1_ParamLimits

0xe3f1,	// (0x0003cc39) vkb2_top_entry_pane_g1

0xe3ff,	// (0x0003cc47) vkb2_top_entry_pane_t1_ParamLimits

0xe3ff,	// (0x0003cc47) vkb2_top_entry_pane_t1

0xe431,	// (0x0003cc79) vkb2_top_entry_pane_t2_ParamLimits

0xe431,	// (0x0003cc79) vkb2_top_entry_pane_t2

0xe463,	// (0x0003ccab) vkb2_top_entry_pane_t3_ParamLimits

0xe463,	// (0x0003ccab) vkb2_top_entry_pane_t3

0x0002,

0xfd94,	// (0x0003e5dc) vkb2_top_entry_pane_t_ParamLimits

0xfd94,	// (0x0003e5dc) vkb2_top_entry_pane_t

0xc06a,	// (0x0003a8b2) vkb2_top_grid_right_pane_g1_ParamLimits

0xc06a,	// (0x0003a8b2) vkb2_top_grid_right_pane_g1

0xc080,	// (0x0003a8c8) vkb2_top_grid_right_pane_g2_ParamLimits

0xc080,	// (0x0003a8c8) vkb2_top_grid_right_pane_g2

0xc098,	// (0x0003a8e0) vkb2_top_grid_right_pane_g3_ParamLimits

0xc098,	// (0x0003a8e0) vkb2_top_grid_right_pane_g3

0xc0b0,	// (0x0003a8f8) vkb2_top_grid_right_pane_g4_ParamLimits

0xc0b0,	// (0x0003a8f8) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9b,	// (0x0003e5e3) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9b,	// (0x0003e5e3) vkb2_top_grid_right_pane_g

0xc0c6,	// (0x0003a90e) vkb2_top_cell_left_pane_g1

0xc0dd,	// (0x0003a925) vkb2_cell_keypad_pane_g1_ParamLimits

0xc0dd,	// (0x0003a925) vkb2_cell_keypad_pane_g1

0xe487,	// (0x0003cccf) vkb2_cell_keypad_pane_t1_ParamLimits

0xe487,	// (0x0003cccf) vkb2_cell_keypad_pane_t1

0xc0eb,	// (0x0003a933) vkb2_cell_bottom_grid_pane_ParamLimits

0xc0eb,	// (0x0003a933) vkb2_cell_bottom_grid_pane

0xc124,	// (0x0003a96c) vkb2_cell_bottom_grid_pane_g1

0xe0b0,	// (0x0003c8f8) aid_call2_pane_cp02

0xe0b8,	// (0x0003c900) aid_call_pane_cp02

0xe0c0,	// (0x0003c908) clock_digital_number_pane_cp10

0xe0c8,	// (0x0003c910) clock_digital_number_pane_cp11

0xe0d0,	// (0x0003c918) clock_digital_number_pane_cp12

0xe0d8,	// (0x0003c920) clock_digital_number_pane_cp13

0xe0e0,	// (0x0003c928) clock_digital_separator_pane_cp10

0x4f41,	// (0x00033789) popup_clock_digital_analogue_window_cp2_g1

0x4f41,	// (0x00033789) popup_clock_digital_analogue_window_cp2_g2

0xe0e8,	// (0x0003c930) popup_clock_digital_analogue_window_cp2_g3

0x4f41,	// (0x00033789) popup_clock_digital_analogue_window_cp2_g4

0xe0e8,	// (0x0003c930) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd50,	// (0x0003e598) popup_clock_digital_analogue_window_cp2_g

0xe0f0,	// (0x0003c938) popup_clock_digital_analogue_window_cp2_t1

0xe0fe,	// (0x0003c946) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5b,	// (0x0003e5a3) popup_clock_digital_analogue_window_cp2_t

0x783f,	// (0x00036087) clock_digital_number_pane_cp10_g1

0x783f,	// (0x00036087) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0003e38b) clock_digital_number_pane_cp10_g

0x783f,	// (0x00036087) clock_digital_separator_pane_cp10_g1

0x783f,	// (0x00036087) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0003e38b) clock_digital_separator_pane_cp10_g

0x8978,	// (0x000371c0) uniindi_top_pane_g3

0x8989,	// (0x000371d1) uniindi_top_pane_g4

0xbefe,	// (0x0003a746) vkb2_row_keypad_pane_ParamLimits

0xbefe,	// (0x0003a746) vkb2_row_keypad_pane

0xc140,	// (0x0003a988) vkb2_cell_t_keypad_pane_ParamLimits

0xc140,	// (0x0003a988) vkb2_cell_t_keypad_pane

0xc150,	// (0x0003a998) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xc150,	// (0x0003a998) vkb2_cell_t_keypad_pane_cp08

0xc163,	// (0x0003a9ab) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xc163,	// (0x0003a9ab) vkb2_cell_t_keypad_pane_cp09

0xc177,	// (0x0003a9bf) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xc177,	// (0x0003a9bf) vkb2_cell_t_keypad_pane_cp01

0xc188,	// (0x0003a9d0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xc188,	// (0x0003a9d0) vkb2_cell_t_keypad_pane_cp02

0xc199,	// (0x0003a9e1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xc199,	// (0x0003a9e1) vkb2_cell_t_keypad_pane_cp03

0xc1aa,	// (0x0003a9f2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xc1aa,	// (0x0003a9f2) vkb2_cell_t_keypad_pane_cp04

0xc1bb,	// (0x0003aa03) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xc1bb,	// (0x0003aa03) vkb2_cell_t_keypad_pane_cp05

0xc1cc,	// (0x0003aa14) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xc1cc,	// (0x0003aa14) vkb2_cell_t_keypad_pane_cp06

0xc1dd,	// (0x0003aa25) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xc1dd,	// (0x0003aa25) vkb2_cell_t_keypad_pane_cp07

0xc1ee,	// (0x0003aa36) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xc1ee,	// (0x0003aa36) vkb2_cell_t_keypad_pane_cp10

0x79d2,	// (0x0003621a) vkb2_cell_t_keypad_pane_g1

0xe49e,	// (0x0003cce6) vkb2_cell_t_keypad_pane_t1

0x20ba,	// (0x00030902) popup_grid_graphic2_window

0xe4b0,	// (0x0003ccf8) aid_size_cell_graphic2_ParamLimits

0xe4b0,	// (0x0003ccf8) aid_size_cell_graphic2

0xe4e8,	// (0x0003cd30) bg_popup_window_pane_cp21_ParamLimits

0xe4e8,	// (0x0003cd30) bg_popup_window_pane_cp21

0xe4f6,	// (0x0003cd3e) graphic2_pages_pane_ParamLimits

0xe4f6,	// (0x0003cd3e) graphic2_pages_pane

0xe53c,	// (0x0003cd84) grid_graphic2_control_pane_ParamLimits

0xe53c,	// (0x0003cd84) grid_graphic2_control_pane

0xe57a,	// (0x0003cdc2) grid_graphic2_pane_ParamLimits

0xe57a,	// (0x0003cdc2) grid_graphic2_pane

0xe5ee,	// (0x0003ce36) cell_graphic2_pane

0x20ba,	// (0x00030902) main_comp_mode_pane

0x85e9,	// (0x00036e31) list_ai3_gene_pane_ParamLimits

0xde8c,	// (0x0003c6d4) bg_popup_window_pane_cp19_ParamLimits

0x875a,	// (0x00036fa2) bg_touch_area_indi_pane_ParamLimits

0x875a,	// (0x00036fa2) bg_touch_area_indi_pane

0x8770,	// (0x00036fb8) bg_touch_area_indi_pane_cp01_ParamLimits

0x8770,	// (0x00036fb8) bg_touch_area_indi_pane_cp01

0x8786,	// (0x00036fce) bg_touch_area_indi_pane_cp02_ParamLimits

0x8786,	// (0x00036fce) bg_touch_area_indi_pane_cp02

0x879e,	// (0x00036fe6) bg_touch_area_indi_pane_cp03_ParamLimits

0x879e,	// (0x00036fe6) bg_touch_area_indi_pane_cp03

0x87b8,	// (0x00037000) popup_slider_window_g1_ParamLimits

0x87d4,	// (0x0003701c) popup_slider_window_g2_ParamLimits

0x87f0,	// (0x00037038) popup_slider_window_g3_ParamLimits

0xfce5,	// (0x0003e52d) popup_slider_window_g_ParamLimits

0x880c,	// (0x00037054) popup_slider_window_t1_ParamLimits

0x8852,	// (0x0003709a) small_volume_slider_vertical_pane_ParamLimits

0xe5ee,	// (0x0003ce36) cell_graphic2_pane_ParamLimits

0xe63c,	// (0x0003ce84) bg_button_pane_cp10_ParamLimits

0xe63c,	// (0x0003ce84) bg_button_pane_cp10

0xe64f,	// (0x0003ce97) bg_button_pane_cp11_ParamLimits

0xe64f,	// (0x0003ce97) bg_button_pane_cp11

0xe662,	// (0x0003ceaa) graphic2_pages_pane_g1_ParamLimits

0xe662,	// (0x0003ceaa) graphic2_pages_pane_g1

0xe67d,	// (0x0003cec5) graphic2_pages_pane_g2_ParamLimits

0xe67d,	// (0x0003cec5) graphic2_pages_pane_g2

0x0001,

0xfda9,	// (0x0003e5f1) graphic2_pages_pane_g_ParamLimits

0xfda9,	// (0x0003e5f1) graphic2_pages_pane_g

0xe695,	// (0x0003cedd) graphic2_pages_pane_t1_ParamLimits

0xe695,	// (0x0003cedd) graphic2_pages_pane_t1

0xe6ad,	// (0x0003cef5) cell_graphic2_control_pane_ParamLimits

0xe6ad,	// (0x0003cef5) cell_graphic2_control_pane

0xe6ce,	// (0x0003cf16) cell_graphic2_pane_g1_ParamLimits

0xe6ce,	// (0x0003cf16) cell_graphic2_pane_g1

0xe6db,	// (0x0003cf23) cell_graphic2_pane_g2_ParamLimits

0xe6db,	// (0x0003cf23) cell_graphic2_pane_g2

0xe6e8,	// (0x0003cf30) cell_graphic2_pane_g3_ParamLimits

0xe6e8,	// (0x0003cf30) cell_graphic2_pane_g3

0xe6f5,	// (0x0003cf3d) cell_graphic2_pane_g4_ParamLimits

0xe6f5,	// (0x0003cf3d) cell_graphic2_pane_g4

0xe702,	// (0x0003cf4a) cell_graphic2_pane_g5_ParamLimits

0xe702,	// (0x0003cf4a) cell_graphic2_pane_g5

0x0004,

0xfdae,	// (0x0003e5f6) cell_graphic2_pane_g_ParamLimits

0xfdae,	// (0x0003e5f6) cell_graphic2_pane_g

0xe71d,	// (0x0003cf65) cell_graphic2_pane_t1_ParamLimits

0xe71d,	// (0x0003cf65) cell_graphic2_pane_t1

0x5a8f,	// (0x000342d7) grid_highlight_pane_cp11_ParamLimits

0x5a8f,	// (0x000342d7) grid_highlight_pane_cp11

0x225d,	// (0x00030aa5) bg_button_pane_cp05

0xe746,	// (0x0003cf8e) cell_graphic2_control_pane_g1

0x783f,	// (0x00036087) bg_touch_area_indi_pane_g1

0xe76e,	// (0x0003cfb6) aid_cmod_rocker_key_size

0xe778,	// (0x0003cfc0) aid_cmode_itu_key_size

0xe782,	// (0x0003cfca) main_cmode_video_pane

0xe78c,	// (0x0003cfd4) main_comp_mode_itu_pane

0xe798,	// (0x0003cfe0) main_comp_mode_rocker_pane

0xe7a4,	// (0x0003cfec) cell_cmode_rocker_pane_ParamLimits

0xe7a4,	// (0x0003cfec) cell_cmode_rocker_pane

0xe7b6,	// (0x0003cffe) cell_cmode_itu_pane_ParamLimits

0xe7b6,	// (0x0003cffe) cell_cmode_itu_pane

0x48ea,	// (0x00033132) bg_button_pane_cp06_ParamLimits

0x48ea,	// (0x00033132) bg_button_pane_cp06

0x79d2,	// (0x0003621a) cell_cmode_rocker_pane_g1_ParamLimits

0x79d2,	// (0x0003621a) cell_cmode_rocker_pane_g1

0x888b,	// (0x000370d3) cell_cmode_rocker_pane_g2_ParamLimits

0x888b,	// (0x000370d3) cell_cmode_rocker_pane_g2

0x0001,

0xfdbe,	// (0x0003e606) cell_cmode_rocker_pane_g_ParamLimits

0xfdbe,	// (0x0003e606) cell_cmode_rocker_pane_g

0x20ba,	// (0x00030902) bg_button_pane_cp07

0xe7cb,	// (0x0003d013) cell_cmode_itu_pane_g1

0xe7d4,	// (0x0003d01c) cell_cmode_itu_pane_t1

0xe7e2,	// (0x0003d02a) cell_cmode_itu_pane_t2

0x0001,

0xfdc3,	// (0x0003e60b) cell_cmode_itu_pane_t

0x89fb,	// (0x00037243) aid_touch_ctrl_left

0x8a03,	// (0x0003724b) aid_touch_ctrl_right

0x20ba,	// (0x00030902) compa_mode_pane

0xe7f0,	// (0x0003d038) aid_cmod_rocker_key_size_cp

0xe7fa,	// (0x0003d042) aid_cmode_itu_key_size_cp

0xe804,	// (0x0003d04c) compa_mode_pane_g1

0xe80c,	// (0x0003d054) compa_mode_pane_g2

0xe814,	// (0x0003d05c) compa_mode_pane_g3

0x0002,

0xfdc8,	// (0x0003e610) compa_mode_pane_g

0xe81c,	// (0x0003d064) main_comp_mode_itu_pane_cp

0xe824,	// (0x0003d06c) main_comp_mode_rocker_pane_cp

0xe82c,	// (0x0003d074) cell_cmode_itu_pane_cp_ParamLimits

0xe82c,	// (0x0003d074) cell_cmode_itu_pane_cp

0xe841,	// (0x0003d089) cell_cmode_rocker_pane_cp_ParamLimits

0xe841,	// (0x0003d089) cell_cmode_rocker_pane_cp

0x48ea,	// (0x00033132) bg_button_pane_cp06_cp_ParamLimits

0x48ea,	// (0x00033132) bg_button_pane_cp06_cp

0x79d2,	// (0x0003621a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x79d2,	// (0x0003621a) cell_cmode_rocker_pane_g1_cp

0x783f,	// (0x00036087) cell_cmode_rocker_pane_g2_cp

0x20ba,	// (0x00030902) bg_button_pane_cp07_cp

0x6bf0,	// (0x00035438) cell_cmode_itu_pane_g1_cp

0xe853,	// (0x0003d09b) cell_cmode_itu_pane_t1_cp

0xe853,	// (0x0003d09b) cell_cmode_itu_pane_t2_cp

0xd42a,	// (0x0003bc72) settings_code_pane_cp2

0x212a,	// (0x00030972) bg_popup_window_pane_cp3_ParamLimits

0x2cac,	// (0x000314f4) heading_pane_cp3_ParamLimits

0x2cb8,	// (0x00031500) listscroll_popup_graphic_pane_ParamLimits

0xb72d,	// (0x00039f75) fep_hwr_aid_pane_ParamLimits

0xbbe0,	// (0x0003a428) aid_touch_sctrl_top_ParamLimits

0xbbed,	// (0x0003a435) sctrl_sk_top_pane_g1_ParamLimits

0x79d2,	// (0x0003621a) sctrl_sk_top_pane_g2_ParamLimits

0xfcfe,	// (0x0003e546) sctrl_sk_top_pane_g_ParamLimits

0xbbfa,	// (0x0003a442) sctrl_sk_top_pane_t1_ParamLimits

0xbbe0,	// (0x0003a428) aid_touch_sctrl_bottom_ParamLimits

0xbbfa,	// (0x0003a442) sctrl_sk_bottom_pane_t1_ParamLimits

0x8944,	// (0x0003718c) aid_area_touch_clock

0xbdd5,	// (0x0003a61d) aid_vkb2_area_top_pane_cell_ParamLimits

0xbdd5,	// (0x0003a61d) aid_vkb2_area_top_pane_cell

0xbf20,	// (0x0003a768) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbf20,	// (0x0003a768) aid_vkb2_area_bottom_pane_cell

0xe3e9,	// (0x0003cc31) popup_char_count_window

0xe861,	// (0x0003d0a9) popup_char_count_window_g1

0xe86a,	// (0x0003d0b2) popup_char_count_window_g2

0xe873,	// (0x0003d0bb) popup_char_count_window_g3

0x0002,

0xfdcf,	// (0x0003e617) popup_char_count_window_g

0xe87c,	// (0x0003d0c4) popup_char_count_window_t1

0xbc9b,	// (0x0003a4e3) popup_fep_char_preview_window_ParamLimits

0xbc9b,	// (0x0003a4e3) popup_fep_char_preview_window

0xbdf3,	// (0x0003a63b) vkb2_top_candi_pane_ParamLimits

0xbdf3,	// (0x0003a63b) vkb2_top_candi_pane

0xe88a,	// (0x0003d0d2) cell_vkb2_top_candi_pane_ParamLimits

0xe88a,	// (0x0003d0d2) cell_vkb2_top_candi_pane

0x5f63,	// (0x000347ab) bg_popup_fep_char_preview_window_ParamLimits

0x5f63,	// (0x000347ab) bg_popup_fep_char_preview_window

0xc203,	// (0x0003aa4b) popup_fep_char_preview_window_t1_ParamLimits

0xc203,	// (0x0003aa4b) popup_fep_char_preview_window_t1

0xe8d7,	// (0x0003d11f) bg_popup_fep_char_preview_window_g1

0xe8df,	// (0x0003d127) bg_popup_fep_char_preview_window_g2

0xe8e7,	// (0x0003d12f) bg_popup_fep_char_preview_window_g3

0xe8ef,	// (0x0003d137) bg_popup_fep_char_preview_window_g4

0xe8f7,	// (0x0003d13f) bg_popup_fep_char_preview_window_g5

0xc23d,	// (0x0003aa85) bg_popup_fep_char_preview_window_g6

0xe8ff,	// (0x0003d147) bg_popup_fep_char_preview_window_g7

0xe907,	// (0x0003d14f) bg_popup_fep_char_preview_window_g8

0xe90f,	// (0x0003d157) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd6,	// (0x0003e61e) bg_popup_fep_char_preview_window_g

0x79d2,	// (0x0003621a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x79d2,	// (0x0003621a) cell_vkb2_top_candi_pane_g1

0x7da4,	// (0x000365ec) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7da4,	// (0x000365ec) cell_vkb2_top_candi_pane_g2

0x7dc5,	// (0x0003660d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7dc5,	// (0x0003660d) cell_vkb2_top_candi_pane_g3

0xc245,	// (0x0003aa8d) cell_vkb2_top_candi_pane_g4_ParamLimits

0xc245,	// (0x0003aa8d) cell_vkb2_top_candi_pane_g4

0xe3c8,	// (0x0003cc10) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3c8,	// (0x0003cc10) cell_vkb2_top_candi_pane_g5

0x888b,	// (0x000370d3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x888b,	// (0x000370d3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde9,	// (0x0003e631) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde9,	// (0x0003e631) cell_vkb2_top_candi_pane_g

0xc266,	// (0x0003aaae) cell_vkb2_top_candi_pane_t1

0xb485,	// (0x00039ccd) aid_size_touch_slider_mark_ParamLimits

0xb485,	// (0x00039ccd) aid_size_touch_slider_mark

0xe52c,	// (0x0003cd74) grid_graphic2_catg_pane_ParamLimits

0xe52c,	// (0x0003cd74) grid_graphic2_catg_pane

0xe5ca,	// (0x0003ce12) popup_grid_graphic2_window_t1_ParamLimits

0xe5ca,	// (0x0003ce12) popup_grid_graphic2_window_t1

0xe5dc,	// (0x0003ce24) popup_grid_graphic2_window_t2_ParamLimits

0xe5dc,	// (0x0003ce24) popup_grid_graphic2_window_t2

0x0001,

0xfda4,	// (0x0003e5ec) popup_grid_graphic2_window_t_ParamLimits

0xfda4,	// (0x0003e5ec) popup_grid_graphic2_window_t

0x225d,	// (0x00030aa5) bg_button_pane_cp05_ParamLimits

0xe746,	// (0x0003cf8e) cell_graphic2_control_pane_g1_ParamLimits

0xe917,	// (0x0003d15f) cell_graphic2_catg_pane_ParamLimits

0xe917,	// (0x0003d15f) cell_graphic2_catg_pane

0x20ba,	// (0x00030902) bg_button_pane_cp12

0xe929,	// (0x0003d171) cell_graphic2_catg_pane_g1

0x8910,	// (0x00037158) cell_tb_ext_pane_t1_ParamLimits

0xc03d,	// (0x0003a885) vkb2_top_cell_right_narrow_pane_ParamLimits

0xc03d,	// (0x0003a885) vkb2_top_cell_right_narrow_pane

0xc055,	// (0x0003a89d) vkb2_top_cell_right_wide_pane_ParamLimits

0xc055,	// (0x0003a89d) vkb2_top_cell_right_wide_pane

0x0ec3,	// (0x0002f70b) bg_vkb2_func_pane_ParamLimits

0x0ec3,	// (0x0002f70b) bg_vkb2_func_pane

0xc0c6,	// (0x0003a90e) vkb2_top_cell_left_pane_g1_ParamLimits

0x0ec3,	// (0x0002f70b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0ec3,	// (0x0002f70b) bg_vkb2_fuc_pane_cp03

0xc124,	// (0x0003a96c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x59a7,	// (0x000341ef) bg_vkb2_func_pane_g1

0x599f,	// (0x000341e7) bg_vkb2_func_pane_g2

0x59af,	// (0x000341f7) bg_vkb2_func_pane_g3

0x59b7,	// (0x000341ff) bg_vkb2_func_pane_g4

0x59bf,	// (0x00034207) bg_vkb2_func_pane_g5

0x59c7,	// (0x0003420f) bg_vkb2_func_pane_g6

0x59d7,	// (0x0003421f) bg_vkb2_func_pane_g7

0x59cf,	// (0x00034217) bg_vkb2_func_pane_g8

0x5997,	// (0x000341df) bg_vkb2_func_pane_g9

0x0008,

0xfdf6,	// (0x0003e63e) bg_vkb2_func_pane_g

0x0ec3,	// (0x0002f70b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0ec3,	// (0x0002f70b) bg_vkb2_fuc_pane_cp01

0xc0c6,	// (0x0003a90e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xc0c6,	// (0x0003a90e) vkb2_top_cell_right_wide_pane_g1

0x0ec3,	// (0x0002f70b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0ec3,	// (0x0002f70b) bg_vkb2_fuc_pane_cp02

0xc124,	// (0x0003a96c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xc124,	// (0x0003a96c) vkb2_top_cell_right_narrow_pane_g1

0xde10,	// (0x0003c658) aid_touch_area_decrease_ParamLimits

0xde10,	// (0x0003c658) aid_touch_area_decrease

0xde2e,	// (0x0003c676) aid_touch_area_increase_ParamLimits

0xde2e,	// (0x0003c676) aid_touch_area_increase

0xde3a,	// (0x0003c682) aid_touch_area_mute_ParamLimits

0xde3a,	// (0x0003c682) aid_touch_area_mute

0xde5e,	// (0x0003c6a6) aid_touch_area_slider_ParamLimits

0xde5e,	// (0x0003c6a6) aid_touch_area_slider

0xde98,	// (0x0003c6e0) popup_slider_window_g4_ParamLimits

0xde98,	// (0x0003c6e0) popup_slider_window_g4

0xdea4,	// (0x0003c6ec) popup_slider_window_g5_ParamLimits

0xdea4,	// (0x0003c6ec) popup_slider_window_g5

0xdec6,	// (0x0003c70e) popup_slider_window_g6_ParamLimits

0xdec6,	// (0x0003c70e) popup_slider_window_g6

0x883a,	// (0x00037082) popup_slider_window_t2_ParamLimits

0x883a,	// (0x00037082) popup_slider_window_t2

0x0001,

0xfcf2,	// (0x0003e53a) popup_slider_window_t_ParamLimits

0xfcf2,	// (0x0003e53a) popup_slider_window_t

0xded8,	// (0x0003c720) slider_pane_ParamLimits

0xded8,	// (0x0003c720) slider_pane

0xe932,	// (0x0003d17a) slider_pane_g1_ParamLimits

0xe932,	// (0x0003d17a) slider_pane_g1

0xe946,	// (0x0003d18e) slider_pane_g2_ParamLimits

0xe946,	// (0x0003d18e) slider_pane_g2

0xe95c,	// (0x0003d1a4) slider_pane_g3_ParamLimits

0xe95c,	// (0x0003d1a4) slider_pane_g3

0x0003,

0xfe09,	// (0x0003e651) slider_pane_g_ParamLimits

0xfe09,	// (0x0003e651) slider_pane_g

0xcd04,	// (0x0003b54c) popup_tb_float_extension_window_ParamLimits

0xcd04,	// (0x0003b54c) popup_tb_float_extension_window

0xe988,	// (0x0003d1d0) aid_size_cell_tb_float_ext

0x20ba,	// (0x00030902) bg_popup_sub_window_cp28

0xe994,	// (0x0003d1dc) grid_tb_float_ext_pane

0xe99e,	// (0x0003d1e6) cell_tb_float_ext_pane_ParamLimits

0xe99e,	// (0x0003d1e6) cell_tb_float_ext_pane

0xe9b8,	// (0x0003d200) cell_tb_float_ext_pane_g1

0xe9c1,	// (0x0003d209) grid_highlight_pane_cp12

0xb860,	// (0x0003a0a8) cell_last_hwr_side_pane_ParamLimits

0xb860,	// (0x0003a0a8) cell_last_hwr_side_pane

0x783f,	// (0x00036087) cell_last_hwr_side_pane_g1

0xe9ca,	// (0x0003d212) cell_last_hwr_side_pane_g2

0x0001,

0xfe12,	// (0x0003e65a) cell_last_hwr_side_pane_g

0xbfec,	// (0x0003a834) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbfec,	// (0x0003a834) vkb2_area_bottom_space_btn_pane

0x79d2,	// (0x0003621a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe49e,	// (0x0003cce6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xc266,	// (0x0003aaae) cell_vkb2_top_candi_pane_t1_ParamLimits

0xc285,	// (0x0003aacd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xc285,	// (0x0003aacd) vkb2_area_bottom_space_btn_pane_g1

0xc2bf,	// (0x0003ab07) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xc2bf,	// (0x0003ab07) vkb2_area_bottom_space_btn_pane_g2

0xc2f5,	// (0x0003ab3d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xc2f5,	// (0x0003ab3d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe17,	// (0x0003e65f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe17,	// (0x0003e65f) vkb2_area_bottom_space_btn_pane_g

0xb7d4,	// (0x0003a01c) cel_fep_hwr_func_pane_ParamLimits

0xb7d4,	// (0x0003a01c) cel_fep_hwr_func_pane

0xb810,	// (0x0003a058) cell_hwr_side_button_pane_ParamLimits

0xb810,	// (0x0003a058) cell_hwr_side_button_pane

0x8944,	// (0x0003718c) aid_area_touch_clock_ParamLimits

0x225d,	// (0x00030aa5) bg_uniindi_top_pane_ParamLimits

0x8956,	// (0x0003719e) uniindi_top_pane_g1_ParamLimits

0x896c,	// (0x000371b4) uniindi_top_pane_g2_ParamLimits

0x8978,	// (0x000371c0) uniindi_top_pane_g3_ParamLimits

0x8989,	// (0x000371d1) uniindi_top_pane_g4_ParamLimits

0xfd2a,	// (0x0003e572) uniindi_top_pane_g_ParamLimits

0x8996,	// (0x000371de) uniindi_top_pane_t1_ParamLimits

0x225d,	// (0x00030aa5) bg_vkb2_func_pane_cp01_ParamLimits

0x225d,	// (0x00030aa5) bg_vkb2_func_pane_cp01

0xe9d3,	// (0x0003d21b) cel_fep_hwr_func_pane_g1_ParamLimits

0xe9d3,	// (0x0003d21b) cel_fep_hwr_func_pane_g1

0x225d,	// (0x00030aa5) bg_vkb2_func_pane_cp02_ParamLimits

0x225d,	// (0x00030aa5) bg_vkb2_func_pane_cp02

0xe9d3,	// (0x0003d21b) cell_hwr_side_button_pane_g1_ParamLimits

0xe9d3,	// (0x0003d21b) cell_hwr_side_button_pane_g1

0x58ad,	// (0x000340f5) status_pane_g4_ParamLimits

0x58ad,	// (0x000340f5) status_pane_g4

0x58c7,	// (0x0003410f) status_pane_t1

0x76c5,	// (0x00035f0d) form2_midp_gauge_slider_cont_pane

0x76cd,	// (0x00035f15) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd6f5,	// (0x0003bf3d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd707,	// (0x0003bf4f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0003e33e) form2_midp_gauge_slider_pane_t_ParamLimits

0x76df,	// (0x00035f27) form2_midp_slider_pane_ParamLimits

0xbc5b,	// (0x0003a4a3) aid_size_cell_func_vkb2_ParamLimits

0xbc5b,	// (0x0003a4a3) aid_size_cell_func_vkb2

0xe974,	// (0x0003d1bc) slider_pane_g4_ParamLimits

0xe974,	// (0x0003d1bc) slider_pane_g4

0xc33f,	// (0x0003ab87) form2_midp_gauge_slider_pane_t2_cp01

0xc34d,	// (0x0003ab95) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc34d,	// (0x0003ab95) form2_midp_gauge_slider_pane_t3_cp01

0xc36a,	// (0x0003abb2) form2_midp_slider_pane_cp01

0x20ba,	// (0x00030902) navi_smil_pane

0xea03,	// (0x0003d24b) navi_smil_pane_g1

0xea0b,	// (0x0003d253) navi_smil_pane_t1

0xe9e1,	// (0x0003d229) form2_midp_slider_pane_g1

0xe9ea,	// (0x0003d232) form2_midp_slider_pane_g2

0xe9f2,	// (0x0003d23a) form2_midp_slider_pane_g3

0xe9e1,	// (0x0003d229) form2_midp_slider_pane_g4

0xc373,	// (0x0003abbb) form2_midp_slider_pane_g5

0x0004,

0xfe20,	// (0x0003e668) form2_midp_slider_pane_g

0xc32f,	// (0x0003ab77) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xc32f,	// (0x0003ab77) vkb2_area_bottom_space_btn_pane_g4

0xce6b,	// (0x0003b6b3) lc0_navi_pane_ParamLimits

0xce6b,	// (0x0003b6b3) lc0_navi_pane

0xcee1,	// (0x0003b729) lc0_stat_indi_pane_ParamLimits

0xcee1,	// (0x0003b729) lc0_stat_indi_pane

0xcef8,	// (0x0003b740) ls0_title_pane_ParamLimits

0xcef8,	// (0x0003b740) ls0_title_pane

0x48ea,	// (0x00033132) bg_popup_sub_pane_cp14_ParamLimits

0x892b,	// (0x00037173) list_uniindi_pane_ParamLimits

0x8937,	// (0x0003717f) uniindi_top_pane_ParamLimits

0x89d3,	// (0x0003721b) list_single_uniindi_pane_g1_ParamLimits

0x89e6,	// (0x0003722e) list_single_uniindi_pane_t1_ParamLimits

0xc37c,	// (0x0003abc4) lc0_stat_clock_pane_ParamLimits

0xc37c,	// (0x0003abc4) lc0_stat_clock_pane

0xc389,	// (0x0003abd1) lc0_stat_indi_pane_g1_ParamLimits

0xc389,	// (0x0003abd1) lc0_stat_indi_pane_g1

0xc396,	// (0x0003abde) lc0_stat_indi_pane_g2_ParamLimits

0xc396,	// (0x0003abde) lc0_stat_indi_pane_g2

0x0001,

0xfe2b,	// (0x0003e673) lc0_stat_indi_pane_g_ParamLimits

0xfe2b,	// (0x0003e673) lc0_stat_indi_pane_g

0xc3a3,	// (0x0003abeb) lc0_uni_indicator_pane_ParamLimits

0xc3a3,	// (0x0003abeb) lc0_uni_indicator_pane

0xc3b0,	// (0x0003abf8) ls0_title_pane_g1_ParamLimits

0xc3b0,	// (0x0003abf8) ls0_title_pane_g1

0xc3c4,	// (0x0003ac0c) ls0_title_pane_t1_ParamLimits

0xc3c4,	// (0x0003ac0c) ls0_title_pane_t1

0xc3fa,	// (0x0003ac42) lc0_uni_indicator_pane_g1_ParamLimits

0xc3fa,	// (0x0003ac42) lc0_uni_indicator_pane_g1

0xea19,	// (0x0003d261) lc0_stat_clock_pane_t1

0x20ba,	// (0x00030902) main_ai5_pane

0xea27,	// (0x0003d26f) ai5_sk_pane_ParamLimits

0xea27,	// (0x0003d26f) ai5_sk_pane

0xc40e,	// (0x0003ac56) cell_ai5_widget_pane_ParamLimits

0xc40e,	// (0x0003ac56) cell_ai5_widget_pane

0xea34,	// (0x0003d27c) aid_size_cell_widget_grid

0xea48,	// (0x0003d290) bg_ai5_widget_pane_ParamLimits

0xea48,	// (0x0003d290) bg_ai5_widget_pane

0xea92,	// (0x0003d2da) cell_ai5_widget_pane_g2

0xeaa2,	// (0x0003d2ea) cell_ai5_widget_pane_g3

0xeac1,	// (0x0003d309) cell_ai5_widget_pane_g4

0xeacd,	// (0x0003d315) cell_ai5_widget_pane_g5

0xead9,	// (0x0003d321) cell_ai5_widget_pane_g6

0xeae5,	// (0x0003d32d) cell_ai5_widget_pane_g7

0xeb2d,	// (0x0003d375) cell_ai5_widget_pane_t1_ParamLimits

0xeb2d,	// (0x0003d375) cell_ai5_widget_pane_t1

0xeb4a,	// (0x0003d392) cell_ai5_widget_pane_t2_ParamLimits

0xeb4a,	// (0x0003d392) cell_ai5_widget_pane_t2

0xeb62,	// (0x0003d3aa) cell_ai5_widget_pane_t3_ParamLimits

0xeb62,	// (0x0003d3aa) cell_ai5_widget_pane_t3

0xeb7a,	// (0x0003d3c2) cell_ai5_widget_pane_t4_ParamLimits

0xeb7a,	// (0x0003d3c2) cell_ai5_widget_pane_t4

0xeb94,	// (0x0003d3dc) cell_ai5_widget_pane_t5_ParamLimits

0xeb94,	// (0x0003d3dc) cell_ai5_widget_pane_t5

0xebb3,	// (0x0003d3fb) cell_ai5_widget_pane_t6_ParamLimits

0xebb3,	// (0x0003d3fb) cell_ai5_widget_pane_t6

0xebc5,	// (0x0003d40d) cell_ai5_widget_pane_t7_ParamLimits

0xebc5,	// (0x0003d40d) cell_ai5_widget_pane_t7

0xebde,	// (0x0003d426) cell_ai5_widget_pane_t8_ParamLimits

0xebde,	// (0x0003d426) cell_ai5_widget_pane_t8

0x0009,

0xfe45,	// (0x0003e68d) cell_ai5_widget_pane_t_ParamLimits

0xfe45,	// (0x0003e68d) cell_ai5_widget_pane_t

0xec2a,	// (0x0003d472) grid_ai5_widget_pane

0x48ea,	// (0x00033132) highlight_cell_ai5_widget_pane_ParamLimits

0x48ea,	// (0x00033132) highlight_cell_ai5_widget_pane

0xc4c4,	// (0x0003ad0c) ai5_sk_left_pane

0xc4ce,	// (0x0003ad16) ai5_sk_middle_pane

0xc4d8,	// (0x0003ad20) ai5_sk_right_pane

0xec42,	// (0x0003d48a) bg_ai5_widget_pane_g1_ParamLimits

0xec42,	// (0x0003d48a) bg_ai5_widget_pane_g1

0xec4e,	// (0x0003d496) bg_ai5_widget_pane_g2_ParamLimits

0xec4e,	// (0x0003d496) bg_ai5_widget_pane_g2

0xec5a,	// (0x0003d4a2) bg_ai5_widget_pane_g3_ParamLimits

0xec5a,	// (0x0003d4a2) bg_ai5_widget_pane_g3

0xec66,	// (0x0003d4ae) bg_ai5_widget_pane_g4_ParamLimits

0xec66,	// (0x0003d4ae) bg_ai5_widget_pane_g4

0xec72,	// (0x0003d4ba) bg_ai5_widget_pane_g5_ParamLimits

0xec72,	// (0x0003d4ba) bg_ai5_widget_pane_g5

0xec7e,	// (0x0003d4c6) bg_ai5_widget_pane_g6_ParamLimits

0xec7e,	// (0x0003d4c6) bg_ai5_widget_pane_g6

0xec8a,	// (0x0003d4d2) bg_ai5_widget_pane_g7_ParamLimits

0xec8a,	// (0x0003d4d2) bg_ai5_widget_pane_g7

0xec96,	// (0x0003d4de) bg_ai5_widget_pane_g8_ParamLimits

0xec96,	// (0x0003d4de) bg_ai5_widget_pane_g8

0xeca2,	// (0x0003d4ea) bg_ai5_widget_pane_g9_ParamLimits

0xeca2,	// (0x0003d4ea) bg_ai5_widget_pane_g9

0x0008,

0xfe5a,	// (0x0003e6a2) bg_ai5_widget_pane_g_ParamLimits

0xfe5a,	// (0x0003e6a2) bg_ai5_widget_pane_g

0xecd5,	// (0x0003d51d) cell_shortcut_ai5_widget_pane_ParamLimits

0xecd5,	// (0x0003d51d) cell_shortcut_ai5_widget_pane

0x2166,	// (0x000309ae) bg_cell_shortcut_ai5_widget_pane

0xece6,	// (0x0003d52e) cell_grid_ai5_widget_pane_g1

0xecef,	// (0x0003d537) highlight_cell_shortcut_ai5_widget_pane

0x599f,	// (0x000341e7) ai5_sk_left_pane_g1

0xecf7,	// (0x0003d53f) ai5_sk_left_pane_g2

0xecff,	// (0x0003d547) ai5_sk_left_pane_g3

0xed07,	// (0x0003d54f) ai5_sk_left_pane_g4

0x0003,

0xfe6d,	// (0x0003e6b5) ai5_sk_left_pane_g

0xed0f,	// (0x0003d557) ai5_sk_left_pane_t1

0x59a7,	// (0x000341ef) ai5_sk_right_pane_g1

0xed1d,	// (0x0003d565) ai5_sk_right_pane_g2

0xed25,	// (0x0003d56d) ai5_sk_right_pane_g3

0xed2d,	// (0x0003d575) ai5_sk_right_pane_g4

0x0003,

0xfe76,	// (0x0003e6be) ai5_sk_right_pane_g

0xed35,	// (0x0003d57d) ai5_sk_right_pane_t1

0x59a7,	// (0x000341ef) ai5_sk_middle_pane_g1

0x599f,	// (0x000341e7) ai5_sk_middle_pane_g2

0x59bf,	// (0x00034207) ai5_sk_middle_pane_g3

0xed25,	// (0x0003d56d) ai5_sk_middle_pane_g4

0xecff,	// (0x0003d547) ai5_sk_middle_pane_g5

0xed43,	// (0x0003d58b) ai5_sk_middle_pane_g6

0xc4e2,	// (0x0003ad2a) ai5_sk_middle_pane_g7

0x0006,

0xfe7f,	// (0x0003e6c7) ai5_sk_middle_pane_g

0xcdb4,	// (0x0003b5fc) aid_touch_area_size_lc0_ParamLimits

0xcdb4,	// (0x0003b5fc) aid_touch_area_size_lc0

0xb95f,	// (0x0003a1a7) cell_hwr_candidate_pane_t1_ParamLimits

0x57cf,	// (0x00034017) aid_touch_navi_pane

0xcfcf,	// (0x0003b817) status_dt_navi_pane_ParamLimits

0xcfcf,	// (0x0003b817) status_dt_navi_pane

0xcfdc,	// (0x0003b824) status_dt_sta_pane_ParamLimits

0xcfdc,	// (0x0003b824) status_dt_sta_pane

0xc4ea,	// (0x0003ad32) dt_sta_controll_pane

0xc4f7,	// (0x0003ad3f) dt_sta_indi_pane

0xc504,	// (0x0003ad4c) dt_sta_title_pane

0x225d,	// (0x00030aa5) bg_dt_sta_indi_pane_ParamLimits

0x225d,	// (0x00030aa5) bg_dt_sta_indi_pane

0xed4b,	// (0x0003d593) dt_sta_battery_pane

0xed53,	// (0x0003d59b) dt_sta_indi_pane_g1

0xed5c,	// (0x0003d5a4) dt_sta_indi_pane_g2

0xed65,	// (0x0003d5ad) dt_sta_indi_pane_g3

0x0002,

0xfe8e,	// (0x0003e6d6) dt_sta_indi_pane_g

0xed6e,	// (0x0003d5b6) dt_sta_signal_pane

0x48ea,	// (0x00033132) bg_dt_sta_title_pane_ParamLimits

0x48ea,	// (0x00033132) bg_dt_sta_title_pane

0xed77,	// (0x0003d5bf) dt_sta_title_pane_g1

0xed7f,	// (0x0003d5c7) dt_sta_title_pane_t1_ParamLimits

0xed7f,	// (0x0003d5c7) dt_sta_title_pane_t1

0x20ba,	// (0x00030902) bg_dt_sta_control_pane

0xed94,	// (0x0003d5dc) dt_sta_controll_pane_g1

0xed9d,	// (0x0003d5e5) bg_dt_sta_title_pane_g1

0xeda6,	// (0x0003d5ee) bg_dt_sta_title_pane_g2

0xedaf,	// (0x0003d5f7) bg_dt_sta_title_pane_g3

0x0002,

0xfe95,	// (0x0003e6dd) bg_dt_sta_title_pane_g

0x783f,	// (0x00036087) bg_dt_sta_indi_pane_g1

0xedb8,	// (0x0003d600) dt_sta_signal_pane_g1

0xedc0,	// (0x0003d608) dt_sta_signal_pane_g2

0x0001,

0xfe9c,	// (0x0003e6e4) dt_sta_signal_pane_g

0xedc8,	// (0x0003d610) dt_sta_battery_pane_g1

0xedd1,	// (0x0003d619) dt_sta_battery_pane_t1

0x783f,	// (0x00036087) bg_dt_sta_control_pane_g1

0x4fc4,	// (0x0003380c) fep_china_uni_eep_pane

0x4fcc,	// (0x00033814) fep_china_uni_entry_pane_ParamLimits

0x4fdc,	// (0x00033824) popup_fep_china_uni_window_g1_ParamLimits

0x4fec,	// (0x00033834) popup_fep_china_uni_window_g2_ParamLimits

0x4fec,	// (0x00033834) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0003df82) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0003df82) popup_fep_china_uni_window_g

0xede0,	// (0x0003d628) fep_china_uni_eep_pane_g1

0xede8,	// (0x0003d630) fep_china_uni_eep_pane_t1

0xe9fa,	// (0x0003d242) aid_touch_area_size_smil_player

0x5880,	// (0x000340c8) lc0_clock_pane

0x58bb,	// (0x00034103) status_pane_g5_ParamLimits

0x58bb,	// (0x00034103) status_pane_g5

0xca14,	// (0x0003b25c) popup_keymap_window

0x5899,	// (0x000340e1) status_icon_pane

0xeaa2,	// (0x0003d2ea) cell_ai5_widget_pane_g3_ParamLimits

0xeac1,	// (0x0003d309) cell_ai5_widget_pane_g4_ParamLimits

0xeacd,	// (0x0003d315) cell_ai5_widget_pane_g5_ParamLimits

0xeaf1,	// (0x0003d339) cell_ai5_widget_pane_g8_ParamLimits

0xeaf1,	// (0x0003d339) cell_ai5_widget_pane_g8

0xeb05,	// (0x0003d34d) cell_ai5_widget_pane_g9_ParamLimits

0xeb05,	// (0x0003d34d) cell_ai5_widget_pane_g9

0xeb19,	// (0x0003d361) cell_ai5_widget_pane_g10_ParamLimits

0xeb19,	// (0x0003d361) cell_ai5_widget_pane_g10

0xedf7,	// (0x0003d63f) status_icon_pane_g1

0x20ba,	// (0x00030902) bg_popup_sub_pane_cp13

0xedff,	// (0x0003d647) popup_keymap_window_t1

0xc8d0,	// (0x0003b118) control_pane_g6_ParamLimits

0xc8d0,	// (0x0003b118) control_pane_g6

0xc8dd,	// (0x0003b125) control_pane_g7_ParamLimits

0xc8dd,	// (0x0003b125) control_pane_g7

0xc8ea,	// (0x0003b132) control_pane_g8_ParamLimits

0xc8ea,	// (0x0003b132) control_pane_g8

0xc4ea,	// (0x0003ad32) dt_sta_controll_pane_ParamLimits

0xc4f7,	// (0x0003ad3f) dt_sta_indi_pane_ParamLimits

0xc504,	// (0x0003ad4c) dt_sta_title_pane_ParamLimits

0x2ee2,	// (0x0003172a) aid_size_touch_scroll_bar_cale

0xa32d,	// (0x00038b75) popup_discreet_window_ParamLimits

0xa32d,	// (0x00038b75) popup_discreet_window

0xa3b5,	// (0x00038bfd) popup_sk_window

0x5f63,	// (0x000347ab) bg_popup_sub_pane_cp28_ParamLimits

0x5f63,	// (0x000347ab) bg_popup_sub_pane_cp28

0xee0d,	// (0x0003d655) popup_discreet_window_g1_ParamLimits

0xee0d,	// (0x0003d655) popup_discreet_window_g1

0xee2d,	// (0x0003d675) popup_discreet_window_t1_ParamLimits

0xee2d,	// (0x0003d675) popup_discreet_window_t1

0xee4b,	// (0x0003d693) popup_discreet_window_t2_ParamLimits

0xee4b,	// (0x0003d693) popup_discreet_window_t2

0x0002,

0xfea1,	// (0x0003e6e9) popup_discreet_window_t_ParamLimits

0xfea1,	// (0x0003e6e9) popup_discreet_window_t

0xc515,	// (0x0003ad5d) popup_sk_window_g1

0xc51f,	// (0x0003ad67) popup_sk_window_g2

0x0001,

0xfea8,	// (0x0003e6f0) popup_sk_window_g

0xc529,	// (0x0003ad71) popup_sk_window_t1

0xc537,	// (0x0003ad7f) popup_sk_window_t1_copy1

0xea92,	// (0x0003d2da) cell_ai5_widget_pane_g2_ParamLimits

0xebf0,	// (0x0003d438) cell_ai5_widget_pane_t9_ParamLimits

0xebf0,	// (0x0003d438) cell_ai5_widget_pane_t9

0x20ba,	// (0x00030902) main_fep_fshwr2_pane

0xc545,	// (0x0003ad8d) aid_fshwr2_btn_pane

0xc54d,	// (0x0003ad95) aid_fshwr2_syb_pane

0xc555,	// (0x0003ad9d) aid_fshwr2_txt_pane

0xc55d,	// (0x0003ada5) fshwr2_func_candi_pane

0xc569,	// (0x0003adb1) fshwr2_hwr_syb_pane

0xc575,	// (0x0003adbd) fshwr2_icf_pane

0x20ba,	// (0x00030902) fshwr2_icf_bg_pane

0xc57f,	// (0x0003adc7) fshwr2_icf_pane_t1_ParamLimits

0xc57f,	// (0x0003adc7) fshwr2_icf_pane_t1

0x783f,	// (0x00036087) fshwr2_func_candi_pane_g1

0xeeb1,	// (0x0003d6f9) fshwr2_func_candi_row_pane_ParamLimits

0xeeb1,	// (0x0003d6f9) fshwr2_func_candi_row_pane

0xc596,	// (0x0003adde) cell_fshwr2_syb_pane_ParamLimits

0xc596,	// (0x0003adde) cell_fshwr2_syb_pane

0x79d2,	// (0x0003621a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x79d2,	// (0x0003621a) fshwr2_hwr_syb_pane_g1

0x20ba,	// (0x00030902) bg_popup_call_pane_cp01

0xeec2,	// (0x0003d70a) fshwr2_func_candi_cell_pane_ParamLimits

0xeec2,	// (0x0003d70a) fshwr2_func_candi_cell_pane

0xeef3,	// (0x0003d73b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeef3,	// (0x0003d73b) fshwr2_func_candi_cell_bg_pane

0xef0d,	// (0x0003d755) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xef0d,	// (0x0003d755) fshwr2_func_candi_cell_pane_g1

0xef35,	// (0x0003d77d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xef35,	// (0x0003d77d) fshwr2_func_candi_cell_pane_t1

0x20ba,	// (0x00030902) bg_button_pane_cp08

0x5433,	// (0x00033c7b) cell_fshwr2_syb_bg_pane

0xc5b0,	// (0x0003adf8) cell_fshwr2_syb_bg_pane_g1

0xc5b8,	// (0x0003ae00) cell_fshwr2_syb_bg_pane_t1

0x48ea,	// (0x00033132) main_tmo_pane

0x69d1,	// (0x00035219) uni_indicator_pane_g1_ParamLimits

0x69e6,	// (0x0003522e) uni_indicator_pane_g2_ParamLimits

0x69fc,	// (0x00035244) uni_indicator_pane_g3_ParamLimits

0x6a12,	// (0x0003525a) uni_indicator_pane_g4_ParamLimits

0x6a12,	// (0x0003525a) uni_indicator_pane_g4

0x6a26,	// (0x0003526e) uni_indicator_pane_g5_ParamLimits

0x6a26,	// (0x0003526e) uni_indicator_pane_g5

0x6a3a,	// (0x00035282) uni_indicator_pane_g6_ParamLimits

0x6a3a,	// (0x00035282) uni_indicator_pane_g6

0xf937,	// (0x0003e17f) uni_indicator_pane_g_ParamLimits

0xddec,	// (0x0003c634) popup_tmo_note_window_ParamLimits

0xddec,	// (0x0003c634) popup_tmo_note_window

0x20ba,	// (0x00030902) fshwr2_bg_pane

0xef26,	// (0x0003d76e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xef26,	// (0x0003d76e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfead,	// (0x0003e6f5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfead,	// (0x0003e6f5) fshwr2_func_candi_cell_pane_g

0x783f,	// (0x00036087) bg_popup_window_pane_cp01

0xef48,	// (0x0003d790) bg_popup_window_pane_g1_cp01

0xef51,	// (0x0003d799) bg_popup_window_pane_cp22_ParamLimits

0xef51,	// (0x0003d799) bg_popup_window_pane_cp22

0xef5f,	// (0x0003d7a7) listscroll_tmo_link_pane_ParamLimits

0xef5f,	// (0x0003d7a7) listscroll_tmo_link_pane

0xef9f,	// (0x0003d7e7) popup_tmo_note_window_g1_ParamLimits

0xef9f,	// (0x0003d7e7) popup_tmo_note_window_g1

0xefac,	// (0x0003d7f4) tmo_note_info_pane_ParamLimits

0xefac,	// (0x0003d7f4) tmo_note_info_pane

0xc5c7,	// (0x0003ae0f) list_tmo_note_info_pane_g1_ParamLimits

0xc5c7,	// (0x0003ae0f) list_tmo_note_info_pane_g1

0xefc6,	// (0x0003d80e) list_tmo_note_info_pane_g2_ParamLimits

0xefc6,	// (0x0003d80e) list_tmo_note_info_pane_g2

0x0001,

0xfeb2,	// (0x0003e6fa) list_tmo_note_info_pane_g_ParamLimits

0xfeb2,	// (0x0003e6fa) list_tmo_note_info_pane_g

0xefe2,	// (0x0003d82a) list_tmo_note_info_text_pane_ParamLimits

0xefe2,	// (0x0003d82a) list_tmo_note_info_text_pane

0xf024,	// (0x0003d86c) list_tmo_link_pane

0xf031,	// (0x0003d879) scroll_pane_cp20

0xf03e,	// (0x0003d886) list_single_tmo_link_pane_ParamLimits

0xf03e,	// (0x0003d886) list_single_tmo_link_pane

0xf04e,	// (0x0003d896) list_single_tmo_link_pane_t1

0xf05c,	// (0x0003d8a4) list_tmo_note_info_text_pane_t1_ParamLimits

0xf05c,	// (0x0003d8a4) list_tmo_note_info_text_pane_t1

0xa89f,	// (0x000390e7) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa89f,	// (0x000390e7) aid_size_touch_scroll_bar_cp01

0x98ce,	// (0x00038116) aid_size_touch_slider_marker

0xa39d,	// (0x00038be5) popup_settings_window_ParamLimits

0xa39d,	// (0x00038be5) popup_settings_window

0x9a81,	// (0x000382c9) popup_candi_list_indi_window

0x57cf,	// (0x00034017) aid_touch_navi_pane_ParamLimits

0xbbb4,	// (0x0003a3fc) rs_clock_indi_pane

0xbbbd,	// (0x0003a405) sctrl_sk_bottom_pane_ParamLimits

0xbbce,	// (0x0003a416) sctrl_sk_top_pane_ParamLimits

0xbcb5,	// (0x0003a4fd) popup_fep_tooltip_window

0xea34,	// (0x0003d27c) aid_size_cell_widget_grid_ParamLimits

0xea86,	// (0x0003d2ce) cell_ai5_widget_pane_g1_ParamLimits

0xea86,	// (0x0003d2ce) cell_ai5_widget_pane_g1

0xead9,	// (0x0003d321) cell_ai5_widget_pane_g6_ParamLimits

0xeae5,	// (0x0003d32d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe30,	// (0x0003e678) cell_ai5_widget_pane_g_ParamLimits

0xfe30,	// (0x0003e678) cell_ai5_widget_pane_g

0xec14,	// (0x0003d45c) cell_ai5_widget_pane_t10_ParamLimits

0xec14,	// (0x0003d45c) cell_ai5_widget_pane_t10

0xec2a,	// (0x0003d472) grid_ai5_widget_pane_ParamLimits

0xecae,	// (0x0003d4f6) cell_contacts_ai5_widget_pane_ParamLimits

0xecae,	// (0x0003d4f6) cell_contacts_ai5_widget_pane

0xee60,	// (0x0003d6a8) popup_discreet_window_t3_ParamLimits

0xee60,	// (0x0003d6a8) popup_discreet_window_t3

0xee9d,	// (0x0003d6e5) popup_fshwr2_char_preview_window_ParamLimits

0xee9d,	// (0x0003d6e5) popup_fshwr2_char_preview_window

0xc5de,	// (0x0003ae26) tmo_note_info_pane_t1

0xc5f3,	// (0x0003ae3b) tmo_note_info_pane_t2

0xc608,	// (0x0003ae50) tmo_note_info_pane_t3

0xf000,	// (0x0003d848) tmo_note_info_pane_t4

0xf012,	// (0x0003d85a) tmo_note_info_pane_t5

0x0004,

0xfeb7,	// (0x0003e6ff) tmo_note_info_pane_t

0xf024,	// (0x0003d86c) list_tmo_link_pane_ParamLimits

0xf031,	// (0x0003d879) scroll_pane_cp20_ParamLimits

0x20ba,	// (0x00030902) bg_popup_fep_char_preview_window_cp01

0xf075,	// (0x0003d8bd) popup_fshwr2_char_preview_window_t1

0xf083,	// (0x0003d8cb) popup_candi_list_indi_window_g1

0xf08c,	// (0x0003d8d4) bg_cell_contacts_ai5_widget_pane

0xf098,	// (0x0003d8e0) cell_contacts_ai5_widget_pane_g1

0xf0ac,	// (0x0003d8f4) cell_contacts_ai5_widget_pane_g2

0xf0bb,	// (0x0003d903) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec2,	// (0x0003e70a) cell_contacts_ai5_widget_pane_g

0xf0ce,	// (0x0003d916) cell_contacts_ai5_widget_pane_t1

0x48ea,	// (0x00033132) highlight_cell_shortcut_ai5_widget_pane_cp01

0xc682,	// (0x0003aeca) settings_container_pane

0x5433,	// (0x00033c7b) listscroll_set_pane_copy1

0x7205,	// (0x00035a4d) scroll_pane_cp121_copy1

0xf0e0,	// (0x0003d928) set_content_pane_copy1

0xc68e,	// (0x0003aed6) aid_height_set_list_copy1_ParamLimits

0xc68e,	// (0x0003aed6) aid_height_set_list_copy1

0x5f71,	// (0x000347b9) aid_size_parent_copy1_ParamLimits

0x5f71,	// (0x000347b9) aid_size_parent_copy1

0xc69a,	// (0x0003aee2) button_value_adjust_pane_cp6_copy1_ParamLimits

0xc69a,	// (0x0003aee2) button_value_adjust_pane_cp6_copy1

0x4a42,	// (0x0003328a) list_highlight_pane_cp2_copy1_ParamLimits

0x4a42,	// (0x0003328a) list_highlight_pane_cp2_copy1

0xc6ae,	// (0x0003aef6) list_set_pane_copy1_ParamLimits

0xc6ae,	// (0x0003aef6) list_set_pane_copy1

0xc61d,	// (0x0003ae65) main_pane_set_t1_copy1_ParamLimits

0xc61d,	// (0x0003ae65) main_pane_set_t1_copy1

0xc657,	// (0x0003ae9f) main_pane_set_t2_copy1_ParamLimits

0xc657,	// (0x0003ae9f) main_pane_set_t2_copy1

0xc75b,	// (0x0003afa3) main_pane_set_t3_copy1

0xc769,	// (0x0003afb1) main_pane_set_t4_copy1

0xc676,	// (0x0003aebe) set_content_pane_g1_copy1_ParamLimits

0xc676,	// (0x0003aebe) set_content_pane_g1_copy1

0xc777,	// (0x0003afbf) setting_code_pane_copy1

0xf0e8,	// (0x0003d930) setting_slider_graphic_pane_copy1

0xf0e8,	// (0x0003d930) setting_slider_pane_copy1

0xf0e8,	// (0x0003d930) setting_text_pane_copy1

0xf0f2,	// (0x0003d93a) setting_volume_pane_copy1

0xc781,	// (0x0003afc9) settings_code_pane_cp2_copy1

0xc789,	// (0x0003afd1) settings_code_pane_cp_copy1_ParamLimits

0xc789,	// (0x0003afd1) settings_code_pane_cp_copy1

0xc79d,	// (0x0003afe5) volume_set_pane_copy1

0xc7a5,	// (0x0003afed) volume_set_pane_g10_copy1

0xc7ad,	// (0x0003aff5) volume_set_pane_g1_copy1

0xc7b5,	// (0x0003affd) volume_set_pane_g2_copy1

0xc7bd,	// (0x0003b005) volume_set_pane_g3_copy1

0xc7c5,	// (0x0003b00d) volume_set_pane_g4_copy1

0xc7cd,	// (0x0003b015) volume_set_pane_g5_copy1

0xc7d5,	// (0x0003b01d) volume_set_pane_g6_copy1

0xc7dd,	// (0x0003b025) volume_set_pane_g7_copy1

0xc7e5,	// (0x0003b02d) volume_set_pane_g8_copy1

0xc7ed,	// (0x0003b035) volume_set_pane_g9_copy1

0x212a,	// (0x00030972) bg_set_opt_pane_cp_copy1_ParamLimits

0x212a,	// (0x00030972) bg_set_opt_pane_cp_copy1

0xf0fb,	// (0x0003d943) setting_slider_pane_t1_copy1_ParamLimits

0xf0fb,	// (0x0003d943) setting_slider_pane_t1_copy1

0xc7f5,	// (0x0003b03d) setting_slider_pane_t2_copy1_ParamLimits

0xc7f5,	// (0x0003b03d) setting_slider_pane_t2_copy1

0xc80f,	// (0x0003b057) setting_slider_pane_t3_copy1_ParamLimits

0xc80f,	// (0x0003b057) setting_slider_pane_t3_copy1

0xc827,	// (0x0003b06f) slider_set_pane_copy1_ParamLimits

0xc827,	// (0x0003b06f) slider_set_pane_copy1

0x4951,	// (0x00033199) set_opt_bg_pane_g1_copy2

0x4959,	// (0x000331a1) set_opt_bg_pane_g2_copy2

0xf119,	// (0x0003d961) set_opt_bg_pane_g3_copy2

0x4969,	// (0x000331b1) set_opt_bg_pane_g4_copy2

0x4971,	// (0x000331b9) set_opt_bg_pane_g5_copy2

0x4979,	// (0x000331c1) set_opt_bg_pane_g6_copy2

0xc83d,	// (0x0003b085) set_opt_bg_pane_g7_copy2

0xf123,	// (0x0003d96b) set_opt_bg_pane_g8_copy2

0xf12d,	// (0x0003d975) set_opt_bg_pane_g9_copy2

0xc845,	// (0x0003b08d) aid_size_touch_slider_mark_copy1_ParamLimits

0xc845,	// (0x0003b08d) aid_size_touch_slider_mark_copy1

0xf137,	// (0x0003d97f) slider_set_pane_g1_copy1

0xc859,	// (0x0003b0a1) slider_set_pane_g2_copy1

0xb4a5,	// (0x00039ced) slider_set_pane_g3_copy1_ParamLimits

0xb4a5,	// (0x00039ced) slider_set_pane_g3_copy1

0xb4b9,	// (0x00039d01) slider_set_pane_g4_copy1_ParamLimits

0xb4b9,	// (0x00039d01) slider_set_pane_g4_copy1

0xb4d1,	// (0x00039d19) slider_set_pane_g5_copy1_ParamLimits

0xb4d1,	// (0x00039d19) slider_set_pane_g5_copy1

0xb4a5,	// (0x00039ced) slider_set_pane_g6_copy1_ParamLimits

0xb4a5,	// (0x00039ced) slider_set_pane_g6_copy1

0xc861,	// (0x0003b0a9) slider_set_pane_g7_copy1_ParamLimits

0xc861,	// (0x0003b0a9) slider_set_pane_g7_copy1

0x20ce,	// (0x00030916) bg_set_opt_pane_cp2_copy1

0xf140,	// (0x0003d988) setting_slider_graphic_pane_g1_copy1

0xc877,	// (0x0003b0bf) setting_slider_graphic_pane_t1_copy1

0xc887,	// (0x0003b0cf) setting_slider_graphic_pane_t2_copy1

0xc897,	// (0x0003b0df) slider_set_pane_cp_copy1

0xf151,	// (0x0003d999) input_focus_pane_cp1_copy1

0xf15a,	// (0x0003d9a2) list_set_text_pane_copy1

0xf162,	// (0x0003d9aa) setting_text_pane_g1_copy1

0x92cb,	// (0x00037b13) set_text_pane_t1_copy1

0xf151,	// (0x0003d999) input_focus_pane_cp2_copy1

0xf162,	// (0x0003d9aa) setting_code_pane_g1_copy1

0xc89f,	// (0x0003b0e7) setting_code_pane_t1_copy1

0xc8ad,	// (0x0003b0f5) list_set_graphic_pane_copy1

0x20ce,	// (0x00030916) bg_set_opt_pane_cp4_copy1

0xae9b,	// (0x000396e3) list_set_graphic_pane_g1_copy1_ParamLimits

0xae9b,	// (0x000396e3) list_set_graphic_pane_g1_copy1

0xc8bf,	// (0x0003b107) list_set_graphic_pane_g2_copy1

0xaeb3,	// (0x000396fb) list_set_graphic_pane_t1_copy1_ParamLimits

0xaeb3,	// (0x000396fb) list_set_graphic_pane_t1_copy1

0x783f,	// (0x00036087) rs_clock_indi_pane_g1

0xf16b,	// (0x0003d9b3) rs_clock_indi_pane_t1

0xf179,	// (0x0003d9c1) rs_indi_pane

0xf181,	// (0x0003d9c9) rs_indi_pane_g1

0xf18a,	// (0x0003d9d2) rs_indi_pane_g2

0xf193,	// (0x0003d9db) rs_indi_pane_g3

0x0002,

0xfec9,	// (0x0003e711) rs_indi_pane_g

0x5433,	// (0x00033c7b) bg_popup_preview_window_pane_cp03

0xf19c,	// (0x0003d9e4) popup_fep_tooltip_window_t1

0x8128,	// (0x00036970) popup_note2_window_g2_ParamLimits

0x8128,	// (0x00036970) popup_note2_window_g2

0x0001,

0xfc62,	// (0x0003e4aa) popup_note2_window_g_ParamLimits

0xfc62,	// (0x0003e4aa) popup_note2_window_g

0x85af,	// (0x00036df7) bg_popup_sub_pane_cp11_ParamLimits

0x85bc,	// (0x00036e04) cell_ai3_links_pane_g1_ParamLimits

0x85d3,	// (0x00036e1b) cell_ai3_links_pane_t1

0x92cb,	// (0x00037b13) set_text_pane_t1_copy1_ParamLimits

0x5344,	// (0x00033b8c) cell_graphic_popup_pane_cp2_ParamLimits

0x5344,	// (0x00033b8c) cell_graphic_popup_pane_cp2

0xf1aa,	// (0x0003d9f2) cell_graphic_popup_pane_g1_cp2

0x2cf5,	// (0x0003153d) cell_graphic_popup_pane_g2_cp2

0xf1b2,	// (0x0003d9fa) cell_graphic_popup_pane_g3_cp2

0xf1ba,	// (0x0003da02) cell_graphic_popup_pane_t2_cp2

0x2d06,	// (0x0003154e) grid_highlight_pane_cp3_cp2

0x4d1d,	// (0x00033565) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x48ea,	// (0x00033132) main_tmo_pane_ParamLimits

0xdde0,	// (0x0003c628) popup_tmo_big_image_note_window

0xea76,	// (0x0003d2be) cell_ai5_widget_list_pane

0xea7e,	// (0x0003d2c6) cell_ai5_widget_lrg_icon_pane

0xc5de,	// (0x0003ae26) tmo_note_info_pane_t1_ParamLimits

0xc5f3,	// (0x0003ae3b) tmo_note_info_pane_t2_ParamLimits

0xc608,	// (0x0003ae50) tmo_note_info_pane_t3_ParamLimits

0xf000,	// (0x0003d848) tmo_note_info_pane_t4_ParamLimits

0xf012,	// (0x0003d85a) tmo_note_info_pane_t5_ParamLimits

0xfeb7,	// (0x0003e6ff) tmo_note_info_pane_t_ParamLimits

0xc682,	// (0x0003aeca) settings_container_pane_ParamLimits

0xf149,	// (0x0003d991) indicator_popup_pane_cp5

0xf149,	// (0x0003d991) indicator_popup_pane_cp6

0xc8ad,	// (0x0003b0f5) list_set_graphic_pane_copy1_ParamLimits

0x20ba,	// (0x00030902) bg_popup_window_pane_cp23

0xf1c8,	// (0x0003da10) popup_tmo_big_image_note_window_g1

0xf1d2,	// (0x0003da1a) popup_tmo_big_image_note_window_t1

0xf1e2,	// (0x0003da2a) popup_tmo_big_image_note_window_t2

0xf1f2,	// (0x0003da3a) popup_tmo_big_image_note_window_t3

0x0002,

0xfed0,	// (0x0003e718) popup_tmo_big_image_note_window_t

0xf202,	// (0x0003da4a) cell_ai5_widget_lrg_icon_pane_g1

0xf20a,	// (0x0003da52) cell_ai5_widget_lrg_icon_pane_t1

0xf218,	// (0x0003da60) cell_ai5_widget_list_row_pane_ParamLimits

0xf218,	// (0x0003da60) cell_ai5_widget_list_row_pane

0xf231,	// (0x0003da79) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf231,	// (0x0003da79) cell_ai5_widget_list_row_pane_g1

0xf23e,	// (0x0003da86) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf23e,	// (0x0003da86) cell_ai5_widget_list_row_pane_t1

0xf256,	// (0x0003da9e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf256,	// (0x0003da9e) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfed7,	// (0x0003e71f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed7,	// (0x0003e71f) cell_ai5_widget_list_row_pane_t

0x20ba,	// (0x00030902) main_fep_vtchi_ss_pane

0xf268,	// (0x0003dab0) popup_fep_char_pre_window

0xf270,	// (0x0003dab8) popup_fep_ituss_window

0xf28a,	// (0x0003dad2) popup_fep_vkbss_window

0xf2a8,	// (0x0003daf0) grid_vkbss_keypad_pane_ParamLimits

0xf2a8,	// (0x0003daf0) grid_vkbss_keypad_pane

0xf2b8,	// (0x0003db00) ituss_keypad_pane

0xf2ce,	// (0x0003db16) aid_vkbss_key_offset_ParamLimits

0xf2ce,	// (0x0003db16) aid_vkbss_key_offset

0xf2da,	// (0x0003db22) cell_vkbss_key_pane_ParamLimits

0xf2da,	// (0x0003db22) cell_vkbss_key_pane

0xf2f0,	// (0x0003db38) bg_cell_vkbss_key_g1_ParamLimits

0xf2f0,	// (0x0003db38) bg_cell_vkbss_key_g1

0xf2fc,	// (0x0003db44) cell_vkbss_key_3p_pane_ParamLimits

0xf2fc,	// (0x0003db44) cell_vkbss_key_3p_pane

0xf316,	// (0x0003db5e) cell_vkbss_key_g1_ParamLimits

0xf316,	// (0x0003db5e) cell_vkbss_key_g1

0xf330,	// (0x0003db78) cell_vkbss_key_t1_ParamLimits

0xf330,	// (0x0003db78) cell_vkbss_key_t1

0xf35b,	// (0x0003dba3) cell_ituss_key_pane_ParamLimits

0xf35b,	// (0x0003dba3) cell_ituss_key_pane

0xf36b,	// (0x0003dbb3) bg_cell_ituss_key_g1_ParamLimits

0xf36b,	// (0x0003dbb3) bg_cell_ituss_key_g1

0xf377,	// (0x0003dbbf) cell_ituss_key_pane_g1_ParamLimits

0xf377,	// (0x0003dbbf) cell_ituss_key_pane_g1

0xf383,	// (0x0003dbcb) cell_ituss_key_pane_g2_ParamLimits

0xf383,	// (0x0003dbcb) cell_ituss_key_pane_g2

0x0001,

0xfedc,	// (0x0003e724) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x0003e724) cell_ituss_key_pane_g

0xf39c,	// (0x0003dbe4) cell_ituss_key_t1_ParamLimits

0xf39c,	// (0x0003dbe4) cell_ituss_key_t1

0xf3ca,	// (0x0003dc12) cell_ituss_key_t2_ParamLimits

0xf3ca,	// (0x0003dc12) cell_ituss_key_t2

0xf3fb,	// (0x0003dc43) cell_ituss_key_t3_ParamLimits

0xf3fb,	// (0x0003dc43) cell_ituss_key_t3

0xf42c,	// (0x0003dc74) cell_ituss_key_t4_ParamLimits

0xf42c,	// (0x0003dc74) cell_ituss_key_t4

0x0003,

0xfee1,	// (0x0003e729) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0003e729) cell_ituss_key_t

0xf45d,	// (0x0003dca5) cell_vkbss_key_3p_pane_g1

0xf465,	// (0x0003dcad) cell_vkbss_key_3p_pane_g2

0xf46d,	// (0x0003dcb5) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0003e732) cell_vkbss_key_3p_pane_g

0x20ba,	// (0x00030902) bg_popup_fep_char_preview_window_cp02

0xf475,	// (0x0003dcbd) popup_fep_char_pre_window_t1

0xc4ba,	// (0x0003ad02) main_ai5_sk_pane

0xf08c,	// (0x0003d8d4) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf098,	// (0x0003d8e0) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf0ac,	// (0x0003d8f4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf0bb,	// (0x0003d903) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec2,	// (0x0003e70a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf0ce,	// (0x0003d916) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x48ea,	// (0x00033132) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xc8c7,	// (0x0003b10f) main_ai5_sk_pane_g1

0x5d9c,	// (0x000345e4) popup_query_code_window_g1

0xf27f,	// (0x0003dac7) popup_fep_vkb_icf_pane

0xf293,	// (0x0003dadb) popup_fep_vtchi_icf_pane

0x48ea,	// (0x00033132) bg_icf_pane

0xf2b8,	// (0x0003db00) list_vkb_icf_pane

0x48ea,	// (0x00033132) bg_icf_pane_cp01

0xf49f,	// (0x0003dce7) vtchi_icf_list_pane

0xf4af,	// (0x0003dcf7) list_vkb_icf_pane_t1_ParamLimits

0xf4af,	// (0x0003dcf7) list_vkb_icf_pane_t1

0xf4c6,	// (0x0003dd0e) vtchi_icf_list_pane_t1_ParamLimits

0xf4c6,	// (0x0003dd0e) vtchi_icf_list_pane_t1

0xf270,	// (0x0003dab8) popup_fep_ituss_window_ParamLimits

0xf293,	// (0x0003dadb) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b8,	// (0x0003db00) ituss_keypad_pane_ParamLimits

0xf2c4,	// (0x0003db0c) ituss_sks_pane

0x48ea,	// (0x00033132) bg_icf_pane_ParamLimits

0xf484,	// (0x0003dccc) icf_edit_indi_pane_ParamLimits

0xf484,	// (0x0003dccc) icf_edit_indi_pane

0xf2b8,	// (0x0003db00) list_vkb_icf_pane_ParamLimits

0x48ea,	// (0x00033132) bg_icf_pane_cp01_ParamLimits

0xf493,	// (0x0003dcdb) icf_edit_indi_pane_cp01_ParamLimits

0xf493,	// (0x0003dcdb) icf_edit_indi_pane_cp01

0xf4a7,	// (0x0003dcef) vtchi_query_pane

0x79d2,	// (0x0003621a) icf_edit_indi_pane_g1_ParamLimits

0x79d2,	// (0x0003621a) icf_edit_indi_pane_g1

0xf4e2,	// (0x0003dd2a) icf_edit_indi_pane_g2_ParamLimits

0xf4e2,	// (0x0003dd2a) icf_edit_indi_pane_g2

0x0001,

0xfef1,	// (0x0003e739) icf_edit_indi_pane_g_ParamLimits

0xfef1,	// (0x0003e739) icf_edit_indi_pane_g

0xf4ee,	// (0x0003dd36) icf_edit_indi_pane_t1

0xf4fc,	// (0x0003dd44) bg_input_focus_pane_cp042

0x2ed9,	// (0x00031721) vtchi_button_pane

0xf505,	// (0x0003dd4d) vtchi_query_pane_t1

0xf513,	// (0x0003dd5b) vtchi_query_pane_t2

0xf521,	// (0x0003dd69) vtchi_query_pane_t3

0x0002,

0xfef6,	// (0x0003e73e) vtchi_query_pane_t

0x20ba,	// (0x00030902) bg_button_pane_cp13

0xf52f,	// (0x0003dd77) vtchi_button_pane_g1

0xf537,	// (0x0003dd7f) ituss_sks_pane_g1

0xf542,	// (0x0003dd8a) ituss_sks_pane_g2

0x0001,

0xfefd,	// (0x0003e745) ituss_sks_pane_g

0xf54a,	// (0x0003dd92) ituss_sks_pane_t1

0xf558,	// (0x0003dda0) ituss_sks_pane_t2

0x0001,

0xff02,	// (0x0003e74a) ituss_sks_pane_t

0x74ea,	// (0x00035d32) indicator_nsta_pane_cp_g1

0x74f3,	// (0x00035d3b) indicator_nsta_pane_cp_g2

0x74fb,	// (0x00035d43) indicator_nsta_pane_cp_g3

0x7503,	// (0x00035d4b) indicator_nsta_pane_cp_g4

0x750b,	// (0x00035d53) indicator_nsta_pane_cp_g5

0x7513,	// (0x00035d5b) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0003e2f4) indicator_nsta_pane_cp_g

0xe733,	// (0x0003cf7b) cell_graphic2_pane_t2_ParamLimits

0xe733,	// (0x0003cf7b) cell_graphic2_pane_t2

0x0001,

0xfdb9,	// (0x0003e601) cell_graphic2_pane_t_ParamLimits

0xfdb9,	// (0x0003e601) cell_graphic2_pane_t

0xe760,	// (0x0003cfa8) cell_graphic2_control_pane_t1

0xac83,	// (0x000394cb) signal_pane_g3_ParamLimits

0xac83,	// (0x000394cb) signal_pane_g3

0xac92,	// (0x000394da) signal_pane_g4_ParamLimits

0xac92,	// (0x000394da) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
