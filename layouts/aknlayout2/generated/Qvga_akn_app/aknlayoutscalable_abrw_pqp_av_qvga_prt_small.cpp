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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00019056 };

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
0x8ff6,	// (0x0002204c) Screen

0x9000,	// (0x00022056) application_window_ParamLimits

0x9000,	// (0x00022056) application_window

0x6d14,	// (0x0001fd6a) screen_g1

0x9049,	// (0x0002209f) area_bottom_pane_ParamLimits

0x9049,	// (0x0002209f) area_bottom_pane

0x6d1e,	// (0x0001fd74) area_top_pane_ParamLimits

0x6d1e,	// (0x0001fd74) area_top_pane

0x9101,	// (0x00022157) main_pane_ParamLimits

0x9101,	// (0x00022157) main_pane

0x6d96,	// (0x0001fdec) misc_graphics

0xdcf7,	// (0x00026d4d) battery_pane_ParamLimits

0xdcf7,	// (0x00026d4d) battery_pane

0xb93a,	// (0x00024990) bg_status_flat_pane_g8

0xb942,	// (0x00024998) bg_status_flat_pane_g9

0xb0d7,	// (0x0002412d) context_pane_ParamLimits

0xb0d7,	// (0x0002412d) context_pane

0xde29,	// (0x00026e7f) navi_pane_ParamLimits

0xde29,	// (0x00026e7f) navi_pane

0xde95,	// (0x00026eeb) signal_pane_ParamLimits

0xde95,	// (0x00026eeb) signal_pane

0x0008,

0xf8ad,	// (0x00028903) bg_status_flat_pane_g

0xe0a6,	// (0x000270fc) status_pane_g1_ParamLimits

0xe0a6,	// (0x000270fc) status_pane_g1

0xe0b2,	// (0x00027108) status_pane_g2_ParamLimits

0xe0b2,	// (0x00027108) status_pane_g2

0xb13d,	// (0x00024193) status_pane_g3_ParamLimits

0xb13d,	// (0x00024193) status_pane_g3

0x0004,

0xf7db,	// (0x00028831) status_pane_g_ParamLimits

0xf7db,	// (0x00028831) status_pane_g

0xe0be,	// (0x00027114) title_pane_ParamLimits

0xe0be,	// (0x00027114) title_pane

0xe0fb,	// (0x00027151) uni_indicator_pane_ParamLimits

0xe0fb,	// (0x00027151) uni_indicator_pane

0xaf2d,	// (0x00023f83) bg_list_pane_ParamLimits

0xaf2d,	// (0x00023f83) bg_list_pane

0xd078,	// (0x000260ce) find_pane

0xd903,	// (0x00026959) listscroll_app_pane_ParamLimits

0xd903,	// (0x00026959) listscroll_app_pane

0xaf4d,	// (0x00023fa3) listscroll_form_pane

0xd080,	// (0x000260d6) listscroll_gen_pane_ParamLimits

0xd080,	// (0x000260d6) listscroll_gen_pane

0xaf4d,	// (0x00023fa3) listscroll_set_pane

0x9685,	// (0x000226db) main_idle_act_pane

0x8407,	// (0x0002145d) main_idle_trad_pane

0x8407,	// (0x0002145d) main_list_empty_pane

0xaf67,	// (0x00023fbd) main_midp_pane

0xaf73,	// (0x00023fc9) main_pane_g1_ParamLimits

0xaf73,	// (0x00023fc9) main_pane_g1

0xd90f,	// (0x00026965) popup_ai_message_window_ParamLimits

0xd90f,	// (0x00026965) popup_ai_message_window

0xd983,	// (0x000269d9) popup_fep_china_uni_window_ParamLimits

0xd983,	// (0x000269d9) popup_fep_china_uni_window

0xafa3,	// (0x00023ff9) popup_fep_japan_candidate_window_ParamLimits

0xafa3,	// (0x00023ff9) popup_fep_japan_candidate_window

0xafc1,	// (0x00024017) popup_fep_japan_predictive_window_ParamLimits

0xafc1,	// (0x00024017) popup_fep_japan_predictive_window

0xd9c1,	// (0x00026a17) popup_find_window

0xd9ce,	// (0x00026a24) popup_grid_graphic_window_ParamLimits

0xd9ce,	// (0x00026a24) popup_grid_graphic_window

0xafed,	// (0x00024043) popup_large_graphic_colour_window

0xd9ec,	// (0x00026a42) popup_menu_window_ParamLimits

0xd9ec,	// (0x00026a42) popup_menu_window

0xdb24,	// (0x00026b7a) popup_note_image_window

0xdb12,	// (0x00026b68) popup_note_wait_window_ParamLimits

0xdb12,	// (0x00026b68) popup_note_wait_window

0xdb12,	// (0x00026b68) popup_note_window_ParamLimits

0xdb12,	// (0x00026b68) popup_note_window

0xdb78,	// (0x00026bce) popup_query_code_window_ParamLimits

0xdb78,	// (0x00026bce) popup_query_code_window

0xb00c,	// (0x00024062) popup_query_data_code_window_ParamLimits

0xb00c,	// (0x00024062) popup_query_data_code_window

0xdb8a,	// (0x00026be0) popup_query_data_window_ParamLimits

0xdb8a,	// (0x00026be0) popup_query_data_window

0xdba0,	// (0x00026bf6) popup_query_sat_info_window_ParamLimits

0xdba0,	// (0x00026bf6) popup_query_sat_info_window

0xdbd1,	// (0x00026c27) popup_snote_single_graphic_window_ParamLimits

0xdbd1,	// (0x00026c27) popup_snote_single_graphic_window

0xdbd1,	// (0x00026c27) popup_snote_single_text_window_ParamLimits

0xdbd1,	// (0x00026c27) popup_snote_single_text_window

0xb021,	// (0x00024077) popup_sub_window_general

0xb063,	// (0x000240b9) popup_window_general_ParamLimits

0xb063,	// (0x000240b9) popup_window_general

0xb076,	// (0x000240cc) power_save_pane

0x9cfb,	// (0x00022d51) control_pane_g1_ParamLimits

0x9cfb,	// (0x00022d51) control_pane_g1

0x9d1c,	// (0x00022d72) control_pane_g2_ParamLimits

0x9d1c,	// (0x00022d72) control_pane_g2

0x8613,	// (0x00021669) control_pane_g3_ParamLimits

0x8613,	// (0x00021669) control_pane_g3

0x0007,

0xf7c3,	// (0x00028819) control_pane_g_ParamLimits

0xf7c3,	// (0x00028819) control_pane_g

0x9d86,	// (0x00022ddc) control_pane_t1_ParamLimits

0x9d86,	// (0x00022ddc) control_pane_t1

0x9dd8,	// (0x00022e2e) control_pane_t2_ParamLimits

0x9dd8,	// (0x00022e2e) control_pane_t2

0x0002,

0xf7d4,	// (0x0002882a) control_pane_t_ParamLimits

0xf7d4,	// (0x0002882a) control_pane_t

0x8536,	// (0x0002158c) navi_navi_volume_pane_cp1

0x853f,	// (0x00021595) status_small_icon_pane

0x8547,	// (0x0002159d) status_small_pane_g1_ParamLimits

0x8547,	// (0x0002159d) status_small_pane_g1

0x857b,	// (0x000215d1) status_small_pane_g2_ParamLimits

0x857b,	// (0x000215d1) status_small_pane_g2

0x8587,	// (0x000215dd) status_small_pane_g3_ParamLimits

0x8587,	// (0x000215dd) status_small_pane_g3

0x8593,	// (0x000215e9) status_small_pane_g4_ParamLimits

0x8593,	// (0x000215e9) status_small_pane_g4

0x859f,	// (0x000215f5) status_small_pane_g5_ParamLimits

0x859f,	// (0x000215f5) status_small_pane_g5

0x85ac,	// (0x00021602) status_small_pane_g6_ParamLimits

0x85ac,	// (0x00021602) status_small_pane_g6

0x0007,

0xf7b2,	// (0x00028808) status_small_pane_g_ParamLimits

0xf7b2,	// (0x00028808) status_small_pane_g

0x85dc,	// (0x00021632) status_small_pane_t1

0x85ff,	// (0x00021655) status_small_wait_pane_ParamLimits

0x85ff,	// (0x00021655) status_small_wait_pane

0x9989,	// (0x000229df) aid_levels_signal_ParamLimits

0x9989,	// (0x000229df) aid_levels_signal

0x999a,	// (0x000229f0) signal_pane_g1_ParamLimits

0x999a,	// (0x000229f0) signal_pane_g1

0x99b0,	// (0x00022a06) signal_pane_g2_ParamLimits

0x99b0,	// (0x00022a06) signal_pane_g2

0x0001,

0xf747,	// (0x0002879d) signal_pane_g_ParamLimits

0xf747,	// (0x0002879d) signal_pane_g

0x7f8e,	// (0x00020fe4) context_pane_g1

0x9300,	// (0x00022356) title_pane_g1

0x932a,	// (0x00022380) title_pane_t1

0x6dac,	// (0x0001fe02) title_pane_t2

0x6dd2,	// (0x0001fe28) title_pane_t3

0x0002,

0xf59b,	// (0x000285f1) title_pane_t

0xe111,	// (0x00027167) aid_levels_battery_ParamLimits

0xe111,	// (0x00027167) aid_levels_battery

0xe124,	// (0x0002717a) battery_pane_g1_ParamLimits

0xe124,	// (0x0002717a) battery_pane_g1

0xe139,	// (0x0002718f) battery_pane_g2_ParamLimits

0xe139,	// (0x0002718f) battery_pane_g2

0x0001,

0xf7e6,	// (0x0002883c) battery_pane_g_ParamLimits

0xf7e6,	// (0x0002883c) battery_pane_g

0xe302,	// (0x00027358) uni_indicator_pane_g1

0xe317,	// (0x0002736d) uni_indicator_pane_g2

0xe32d,	// (0x00027383) uni_indicator_pane_g3

0x0005,

0xf955,	// (0x000289ab) uni_indicator_pane_g

0x7b02,	// (0x00020b58) navi_icon_pane_ParamLimits

0x7b02,	// (0x00020b58) navi_icon_pane

0x6d96,	// (0x0001fdec) navi_midp_pane

0x6d96,	// (0x0001fdec) navi_navi_pane

0x7b02,	// (0x00020b58) navi_text_pane_ParamLimits

0x7b02,	// (0x00020b58) navi_text_pane

0x6d14,	// (0x0001fd6a) status_small_wait_pane_g1

0x70ed,	// (0x00020143) status_small_wait_pane_g2

0x0001,

0xf950,	// (0x000289a6) status_small_wait_pane_g

0xbeb0,	// (0x00024f06) navi_navi_icon_text_pane

0xbeb8,	// (0x00024f0e) navi_navi_pane_g1_ParamLimits

0xbeb8,	// (0x00024f0e) navi_navi_pane_g1

0xbeca,	// (0x00024f20) navi_navi_pane_g2_ParamLimits

0xbeca,	// (0x00024f20) navi_navi_pane_g2

0x0001,

0xf91e,	// (0x00028974) navi_navi_pane_g_ParamLimits

0xf91e,	// (0x00028974) navi_navi_pane_g

0xbedc,	// (0x00024f32) navi_navi_tabs_pane

0xbeb0,	// (0x00024f06) navi_navi_text_pane

0xbeb0,	// (0x00024f06) navi_navi_volume_pane

0xbe8c,	// (0x00024ee2) navi_text_pane_t1

0xbe80,	// (0x00024ed6) navi_icon_pane_g1

0xbdd4,	// (0x00024e2a) navi_navi_text_pane_t1

0xa0e1,	// (0x00023137) navi_navi_volume_pane_g1

0xa0e9,	// (0x0002313f) volume_small_pane

0xe24f,	// (0x000272a5) navi_navi_icon_text_pane_g1

0xe257,	// (0x000272ad) navi_navi_icon_text_pane_t1

0xb982,	// (0x000249d8) navi_tabs_2_long_pane

0xb982,	// (0x000249d8) navi_tabs_2_pane

0xb982,	// (0x000249d8) navi_tabs_3_long_pane

0xb982,	// (0x000249d8) navi_tabs_3_pane

0xb982,	// (0x000249d8) navi_tabs_4_pane

0xa0c1,	// (0x00023117) tabs_2_active_pane_ParamLimits

0xa0c1,	// (0x00023117) tabs_2_active_pane

0xa0d1,	// (0x00023127) tabs_2_passive_pane_ParamLimits

0xa0d1,	// (0x00023127) tabs_2_passive_pane

0xa08f,	// (0x000230e5) tabs_3_active_pane_ParamLimits

0xa08f,	// (0x000230e5) tabs_3_active_pane

0xa09f,	// (0x000230f5) tabs_3_passive_pane_ParamLimits

0xa09f,	// (0x000230f5) tabs_3_passive_pane

0xa0b0,	// (0x00023106) tabs_3_passive_pane_cp_ParamLimits

0xa0b0,	// (0x00023106) tabs_3_passive_pane_cp

0xa04b,	// (0x000230a1) tabs_4_active_pane_ParamLimits

0xa04b,	// (0x000230a1) tabs_4_active_pane

0xa05c,	// (0x000230b2) tabs_4_passive_pane_ParamLimits

0xa05c,	// (0x000230b2) tabs_4_passive_pane

0xa06d,	// (0x000230c3) tabs_4_passive_pane_cp_ParamLimits

0xa06d,	// (0x000230c3) tabs_4_passive_pane_cp

0xa07e,	// (0x000230d4) tabs_4_passive_pane_cp2_ParamLimits

0xa07e,	// (0x000230d4) tabs_4_passive_pane_cp2

0xa02b,	// (0x00023081) tabs_2_long_active_pane_ParamLimits

0xa02b,	// (0x00023081) tabs_2_long_active_pane

0xa03b,	// (0x00023091) tabs_2_long_passive_pane_ParamLimits

0xa03b,	// (0x00023091) tabs_2_long_passive_pane

0x9ff6,	// (0x0002304c) tabs_3_long_active_pane_ParamLimits

0x9ff6,	// (0x0002304c) tabs_3_long_active_pane

0xa007,	// (0x0002305d) tabs_3_long_passive_pane_ParamLimits

0xa007,	// (0x0002305d) tabs_3_long_passive_pane

0xa01a,	// (0x00023070) tabs_3_long_passive_pane_cp_ParamLimits

0xa01a,	// (0x00023070) tabs_3_long_passive_pane_cp

0x9f9c,	// (0x00022ff2) volume_small_pane_g1

0x9fa5,	// (0x00022ffb) volume_small_pane_g2

0x9fae,	// (0x00023004) volume_small_pane_g3

0x9fb7,	// (0x0002300d) volume_small_pane_g4

0x9fc0,	// (0x00023016) volume_small_pane_g5

0x9fc9,	// (0x0002301f) volume_small_pane_g6

0x9fd2,	// (0x00023028) volume_small_pane_g7

0x9fdb,	// (0x00023031) volume_small_pane_g8

0x9fe4,	// (0x0002303a) volume_small_pane_g9

0x9fed,	// (0x00023043) volume_small_pane_g10

0x0009,

0xf8ea,	// (0x00028940) volume_small_pane_g

0x6dfa,	// (0x0001fe50) bg_active_tab_pane_cp2_ParamLimits

0x6dfa,	// (0x0001fe50) bg_active_tab_pane_cp2

0x6df2,	// (0x0001fe48) tabs_3_active_pane_g1

0x9392,	// (0x000223e8) tabs_3_active_pane_t1

0x6dfa,	// (0x0001fe50) bg_passive_tab_pane_cp2_ParamLimits

0x6dfa,	// (0x0001fe50) bg_passive_tab_pane_cp2

0x6df2,	// (0x0001fe48) tabs_3_passive_pane_g1

0x9392,	// (0x000223e8) tabs_3_passive_pane_t1

0x6dfa,	// (0x0001fe50) bg_active_tab_pane_cp3_ParamLimits

0x6dfa,	// (0x0001fe50) bg_active_tab_pane_cp3

0x93a4,	// (0x000223fa) tabs_4_active_pane_g1

0x93ac,	// (0x00022402) tabs_4_active_pane_t1

0x6dfa,	// (0x0001fe50) bg_passive_tab_pane_cp3_ParamLimits

0x6dfa,	// (0x0001fe50) bg_passive_tab_pane_cp3

0x93a4,	// (0x000223fa) tabs_4_1_passive_pane_g1

0x93ac,	// (0x00022402) tabs_4_1_passive_pane_t1

0xaf67,	// (0x00023fbd) list_highlight_pane_cp2

0xe383,	// (0x000273d9) list_set_pane_ParamLimits

0xe383,	// (0x000273d9) list_set_pane

0xe411,	// (0x00027467) main_pane_set_t1_ParamLimits

0xe411,	// (0x00027467) main_pane_set_t1

0xe431,	// (0x00027487) main_pane_set_t2_ParamLimits

0xe431,	// (0x00027487) main_pane_set_t2

0xe443,	// (0x00027499) main_pane_set_t3_ParamLimits

0xe443,	// (0x00027499) main_pane_set_t3

0xe455,	// (0x000274ab) main_pane_set_t4_ParamLimits

0xe455,	// (0x000274ab) main_pane_set_t4

0x0003,

0xf9ba,	// (0x00028a10) main_pane_set_t_ParamLimits

0xf9ba,	// (0x00028a10) main_pane_set_t

0xe467,	// (0x000274bd) setting_code_pane

0xe46f,	// (0x000274c5) setting_slider_graphic_pane

0xe46f,	// (0x000274c5) setting_slider_pane

0xe46f,	// (0x000274c5) setting_text_pane

0xe46f,	// (0x000274c5) setting_volume_pane

0x93be,	// (0x00022414) volume_set_pane

0x6dfa,	// (0x0001fe50) bg_set_opt_pane_cp

0x93c6,	// (0x0002241c) setting_slider_pane_t1

0x93dc,	// (0x00022432) setting_slider_pane_t2

0x93f5,	// (0x0002244b) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x000285f8) setting_slider_pane_t

0x940c,	// (0x00022462) slider_set_pane

0x6d96,	// (0x0001fdec) bg_set_opt_pane_cp2

0x6e34,	// (0x0001fe8a) setting_slider_graphic_pane_g1

0x9422,	// (0x00022478) setting_slider_graphic_pane_t1

0x9431,	// (0x00022487) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x000285ff) setting_slider_graphic_pane_t

0x9440,	// (0x00022496) slider_set_pane_cp

0x6d96,	// (0x0001fdec) input_focus_pane_cp1

0xc311,	// (0x00025367) list_set_text_pane

0x6d14,	// (0x0001fd6a) setting_text_pane_g1

0x6d96,	// (0x0001fdec) input_focus_pane_cp2

0x6d14,	// (0x0001fd6a) setting_code_pane_g1

0x6e3d,	// (0x0001fe93) setting_code_pane_t1

0xc94e,	// (0x000259a4) set_text_pane_t1_ParamLimits

0xc94e,	// (0x000259a4) set_text_pane_t1

0x7a9d,	// (0x00020af3) set_opt_bg_pane_g1

0x7aa5,	// (0x00020afb) set_opt_bg_pane_g2

0xe343,	// (0x00027399) set_opt_bg_pane_g3

0x7ab5,	// (0x00020b0b) set_opt_bg_pane_g4

0x7abd,	// (0x00020b13) set_opt_bg_pane_g5

0x7ac5,	// (0x00020b1b) set_opt_bg_pane_g6

0xe34b,	// (0x000273a1) set_opt_bg_pane_g7

0xe353,	// (0x000273a9) set_opt_bg_pane_g8

0xe35b,	// (0x000273b1) set_opt_bg_pane_g9

0x0008,

0xf9a7,	// (0x000289fd) set_opt_bg_pane_g

0xc304,	// (0x0002535a) slider_set_pane_g1

0xa156,	// (0x000231ac) slider_set_pane_g2

0x0006,

0xf998,	// (0x000289ee) slider_set_pane_g

0xa0f2,	// (0x00023148) volume_set_pane_g1

0xa0fa,	// (0x00023150) volume_set_pane_g2

0xa102,	// (0x00023158) volume_set_pane_g3

0xa10a,	// (0x00023160) volume_set_pane_g4

0xa112,	// (0x00023168) volume_set_pane_g5

0xa11a,	// (0x00023170) volume_set_pane_g6

0xa122,	// (0x00023178) volume_set_pane_g7

0xa12a,	// (0x00023180) volume_set_pane_g8

0xa132,	// (0x00023188) volume_set_pane_g9

0xa13a,	// (0x00023190) volume_set_pane_g10

0x0009,

0xf970,	// (0x000289c6) volume_set_pane_g

0x9448,	// (0x0002249e) indicator_pane_ParamLimits

0x9448,	// (0x0002249e) indicator_pane

0x9454,	// (0x000224aa) main_idle_pane_g2_ParamLimits

0x9454,	// (0x000224aa) main_idle_pane_g2

0x9478,	// (0x000224ce) main_pane_idle_g1_ParamLimits

0x9478,	// (0x000224ce) main_pane_idle_g1

0x6e4b,	// (0x0001fea1) popup_clock_digital_analogue_window_ParamLimits

0x6e4b,	// (0x0001fea1) popup_clock_digital_analogue_window

0x9485,	// (0x000224db) soft_indicator_pane_ParamLimits

0x9485,	// (0x000224db) soft_indicator_pane

0x9491,	// (0x000224e7) wallpaper_pane_ParamLimits

0x9491,	// (0x000224e7) wallpaper_pane

0x6d14,	// (0x0001fd6a) wallpaper_pane_g1

0x949d,	// (0x000224f3) indicator_pane_g1_ParamLimits

0x949d,	// (0x000224f3) indicator_pane_g1

0xc439,	// (0x0002548f) navi_navi_icon_text_pane_srt_g1

0x6e79,	// (0x0001fecf) soft_indicator_pane_t1

0x6e93,	// (0x0001fee9) aid_ps_area_pane

0x94a9,	// (0x000224ff) aid_ps_clock_pane

0x6ea4,	// (0x0001fefa) aid_ps_indicator_pane

0x6eb0,	// (0x0001ff06) indicator_ps_pane_ParamLimits

0x6eb0,	// (0x0001ff06) indicator_ps_pane

0x6ebf,	// (0x0001ff15) power_save_pane_g1_ParamLimits

0x6ebf,	// (0x0001ff15) power_save_pane_g1

0x6ecb,	// (0x0001ff21) power_save_pane_g2_ParamLimits

0x6ecb,	// (0x0001ff21) power_save_pane_g2

0x900e,	// (0x00022064) aid_navinavi_width_pane

0x6e93,	// (0x0001fee9) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00028604) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00028604) power_save_pane_g

0x6ed9,	// (0x0001ff2f) power_save_pane_t1_ParamLimits

0x6ed9,	// (0x0001ff2f) power_save_pane_t1

0x94a9,	// (0x000224ff) aid_ps_clock_pane_ParamLimits

0x6ea4,	// (0x0001fefa) aid_ps_indicator_pane_ParamLimits

0x6eeb,	// (0x0001ff41) power_save_pane_t4_ParamLimits

0x6eeb,	// (0x0001ff41) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00028609) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00028609) power_save_pane_t

0x6f15,	// (0x0001ff6b) power_save_t3_ParamLimits

0x6f15,	// (0x0001ff6b) power_save_t3

0x6f00,	// (0x0001ff56) power_save_t2_ParamLimits

0x6f00,	// (0x0001ff56) power_save_t2

0x6f2a,	// (0x0001ff80) indicator_ps_pane_g1

0x94b5,	// (0x0002250b) ai_gene_pane_ParamLimits

0x94b5,	// (0x0002250b) ai_gene_pane

0x94c1,	// (0x00022517) ai_links_pane_ParamLimits

0x94c1,	// (0x00022517) ai_links_pane

0x94cd,	// (0x00022523) indicator_pane_cp1_ParamLimits

0x94cd,	// (0x00022523) indicator_pane_cp1

0x94d9,	// (0x0002252f) main_pane_idle_g1_cp_ParamLimits

0x94d9,	// (0x0002252f) main_pane_idle_g1_cp

0x6f33,	// (0x0001ff89) popup_ai_links_title_window

0x94e5,	// (0x0002253b) soft_indicator_pane_cp1_ParamLimits

0x94e5,	// (0x0002253b) soft_indicator_pane_cp1

0xc146,	// (0x0002519c) ai_links_pane_g1

0xc14f,	// (0x000251a5) grid_ai_links_pane

0xe2f9,	// (0x0002734f) ai_gene_pane_1

0xc134,	// (0x0002518a) ai_gene_pane_2

0xc13d,	// (0x00025193) list_highlight_pane_cp4

0xe2dd,	// (0x00027333) cell_ai_link_pane_ParamLimits

0xe2dd,	// (0x00027333) cell_ai_link_pane

0xc12c,	// (0x00025182) cell_ai_link_pane_g1

0x70ed,	// (0x00020143) cell_ai_link_pane_g2

0x0001,

0xf94b,	// (0x000289a1) cell_ai_link_pane_g

0x6d96,	// (0x0001fdec) grid_highlight_cp2

0x6d96,	// (0x0001fdec) bg_popup_sub_pane_cp1

0x6f4a,	// (0x0001ffa0) popup_ai_links_title_window_t1

0xc07e,	// (0x000250d4) ai_gene_pane_1_g1_ParamLimits

0xc07e,	// (0x000250d4) ai_gene_pane_1_g1

0xc08a,	// (0x000250e0) ai_gene_pane_1_g2_ParamLimits

0xc08a,	// (0x000250e0) ai_gene_pane_1_g2

0x0001,

0xf941,	// (0x00028997) ai_gene_pane_1_g_ParamLimits

0xf941,	// (0x00028997) ai_gene_pane_1_g

0xc097,	// (0x000250ed) ai_gene_pane_1_t1_ParamLimits

0xc097,	// (0x000250ed) ai_gene_pane_1_t1

0xc0cb,	// (0x00025121) grid_ai_soft_ind_pane

0xc069,	// (0x000250bf) ai_gene_pane_2_t1_ParamLimits

0xc069,	// (0x000250bf) ai_gene_pane_2_t1

0x94f1,	// (0x00022547) main_pane_empty_t1_ParamLimits

0x94f1,	// (0x00022547) main_pane_empty_t1

0x950e,	// (0x00022564) main_pane_empty_t2_ParamLimits

0x950e,	// (0x00022564) main_pane_empty_t2

0x9526,	// (0x0002257c) main_pane_empty_t3_ParamLimits

0x9526,	// (0x0002257c) main_pane_empty_t3

0x9539,	// (0x0002258f) main_pane_empty_t4_ParamLimits

0x9539,	// (0x0002258f) main_pane_empty_t4

0x954c,	// (0x000225a2) main_pane_empty_t5_ParamLimits

0x954c,	// (0x000225a2) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002860e) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002860e) main_pane_empty_t

0x7b02,	// (0x00020b58) bg_popup_window_pane_ParamLimits

0x7b02,	// (0x00020b58) bg_popup_window_pane

0xbde3,	// (0x00024e39) find_popup_pane_cp2_ParamLimits

0xbde3,	// (0x00024e39) find_popup_pane_cp2

0xbdef,	// (0x00024e45) heading_pane_ParamLimits

0xbdef,	// (0x00024e45) heading_pane

0x6d96,	// (0x0001fdec) bg_popup_sub_pane

0xe271,	// (0x000272c7) bg_popup_window_pane_g1_ParamLimits

0xe271,	// (0x000272c7) bg_popup_window_pane_g1

0xe27d,	// (0x000272d3) bg_popup_window_pane_g2_ParamLimits

0xe27d,	// (0x000272d3) bg_popup_window_pane_g2

0xe289,	// (0x000272df) bg_popup_window_pane_g3_ParamLimits

0xe289,	// (0x000272df) bg_popup_window_pane_g3

0xe295,	// (0x000272eb) bg_popup_window_pane_g4_ParamLimits

0xe295,	// (0x000272eb) bg_popup_window_pane_g4

0xe2a1,	// (0x000272f7) bg_popup_window_pane_g5_ParamLimits

0xe2a1,	// (0x000272f7) bg_popup_window_pane_g5

0xe2ad,	// (0x00027303) bg_popup_window_pane_g6_ParamLimits

0xe2ad,	// (0x00027303) bg_popup_window_pane_g6

0xe2b9,	// (0x0002730f) bg_popup_window_pane_g7_ParamLimits

0xe2b9,	// (0x0002730f) bg_popup_window_pane_g7

0xe2c5,	// (0x0002731b) bg_popup_window_pane_g8_ParamLimits

0xe2c5,	// (0x0002731b) bg_popup_window_pane_g8

0xe2d1,	// (0x00027327) bg_popup_window_pane_g9_ParamLimits

0xe2d1,	// (0x00027327) bg_popup_window_pane_g9

0xbdc8,	// (0x00024e1e) bg_popup_window_pane_g10_ParamLimits

0xbdc8,	// (0x00024e1e) bg_popup_window_pane_g10

0x0009,

0xf909,	// (0x0002895f) bg_popup_window_pane_g_ParamLimits

0xf909,	// (0x0002895f) bg_popup_window_pane_g

0xbd7f,	// (0x00024dd5) bg_popup_heading_pane_ParamLimits

0xbd7f,	// (0x00024dd5) bg_popup_heading_pane

0xa1de,	// (0x00023234) tabs_4_passive_pane_cp_srt_ParamLimits

0xa1de,	// (0x00023234) tabs_4_passive_pane_cp_srt

0xa1f0,	// (0x00023246) tabs_4_passive_pane_srt_ParamLimits

0xbd93,	// (0x00024de9) heading_pane_g2

0xa1f0,	// (0x00023246) tabs_4_passive_pane_srt

0xaf67,	// (0x00023fbd) bg_passive_tab_pane_cp3_srt_ParamLimits

0xaf67,	// (0x00023fbd) bg_passive_tab_pane_cp3_srt

0xbd9b,	// (0x00024df1) heading_pane_t1_ParamLimits

0xbd9b,	// (0x00024df1) heading_pane_t1

0xbdb2,	// (0x00024e08) heading_pane_t2_ParamLimits

0xbdb2,	// (0x00024e08) heading_pane_t2

0x0001,

0xf904,	// (0x0002895a) heading_pane_t_ParamLimits

0xf904,	// (0x0002895a) heading_pane_t

0xb902,	// (0x00024958) bg_popup_heading_pane_g1

0xb993,	// (0x000249e9) bg_popup_heading_pane_g2

0xb99b,	// (0x000249f1) bg_popup_heading_pane_g3

0xb9a3,	// (0x000249f9) bg_popup_heading_pane_g4

0xb9ab,	// (0x00024a01) bg_popup_heading_pane_g5

0xb9b3,	// (0x00024a09) bg_popup_heading_pane_g6

0xb9bb,	// (0x00024a11) bg_popup_heading_pane_g7

0xb9c3,	// (0x00024a19) bg_popup_heading_pane_g8

0xb9cb,	// (0x00024a21) bg_popup_heading_pane_g9

0x0008,

0xf8c0,	// (0x00028916) bg_popup_heading_pane_g

0xb225,	// (0x0002427b) bg_popup_sub_pane_g1

0xb235,	// (0x0002428b) bg_popup_sub_pane_g2

0xb22d,	// (0x00024283) bg_popup_sub_pane_g3

0xb245,	// (0x0002429b) bg_popup_sub_pane_g4

0xb23d,	// (0x00024293) bg_popup_sub_pane_g5

0xb24d,	// (0x000242a3) bg_popup_sub_pane_g6

0xb255,	// (0x000242ab) bg_popup_sub_pane_g7

0xb265,	// (0x000242bb) bg_popup_sub_pane_g8

0xb25d,	// (0x000242b3) bg_popup_sub_pane_g9

0x0008,

0xf89a,	// (0x000288f0) bg_popup_sub_pane_g

0x6de4,	// (0x0001fe3a) bg_popup_window_pane_cp5_ParamLimits

0x6de4,	// (0x0001fe3a) bg_popup_window_pane_cp5

0x6f67,	// (0x0001ffbd) popup_note_window_g1_ParamLimits

0x6f67,	// (0x0001ffbd) popup_note_window_g1

0x6f73,	// (0x0001ffc9) popup_note_window_t1_ParamLimits

0x6f73,	// (0x0001ffc9) popup_note_window_t1

0x6f89,	// (0x0001ffdf) popup_note_window_t2_ParamLimits

0x6f89,	// (0x0001ffdf) popup_note_window_t2

0x6f9f,	// (0x0001fff5) popup_note_window_t3_ParamLimits

0x6f9f,	// (0x0001fff5) popup_note_window_t3

0x6fb5,	// (0x0002000b) popup_note_window_t4_ParamLimits

0x6fb5,	// (0x0002000b) popup_note_window_t4

0x6fdd,	// (0x00020033) popup_note_window_t5_ParamLimits

0x6fdd,	// (0x00020033) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00028619) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00028619) popup_note_window_t

0x7001,	// (0x00020057) bg_popup_window_pane_cp6_ParamLimits

0x7001,	// (0x00020057) bg_popup_window_pane_cp6

0xb87e,	// (0x000248d4) popup_note_image_window_g1_ParamLimits

0xb87e,	// (0x000248d4) popup_note_image_window_g1

0xb88a,	// (0x000248e0) popup_note_image_window_g2_ParamLimits

0xb88a,	// (0x000248e0) popup_note_image_window_g2

0x0001,

0xf88e,	// (0x000288e4) popup_note_image_window_g_ParamLimits

0xf88e,	// (0x000288e4) popup_note_image_window_g

0xb8a3,	// (0x000248f9) popup_note_image_window_t1_ParamLimits

0xb8a3,	// (0x000248f9) popup_note_image_window_t1

0xb8bc,	// (0x00024912) popup_note_image_window_t2_ParamLimits

0xb8bc,	// (0x00024912) popup_note_image_window_t2

0xb8d5,	// (0x0002492b) popup_note_image_window_t3_ParamLimits

0xb8d5,	// (0x0002492b) popup_note_image_window_t3

0x0002,

0xf893,	// (0x000288e9) popup_note_image_window_t_ParamLimits

0xf893,	// (0x000288e9) popup_note_image_window_t

0xb769,	// (0x000247bf) bg_popup_window_pane_cp7_ParamLimits

0xb769,	// (0x000247bf) bg_popup_window_pane_cp7

0xb799,	// (0x000247ef) popup_note_wait_window_g1_ParamLimits

0xb799,	// (0x000247ef) popup_note_wait_window_g1

0xb7a5,	// (0x000247fb) popup_note_wait_window_g2_ParamLimits

0xb7a5,	// (0x000247fb) popup_note_wait_window_g2

0x0002,

0xf87c,	// (0x000288d2) popup_note_wait_window_g_ParamLimits

0xf87c,	// (0x000288d2) popup_note_wait_window_g

0xb7bd,	// (0x00024813) popup_note_wait_window_t1_ParamLimits

0xb7bd,	// (0x00024813) popup_note_wait_window_t1

0xb7e4,	// (0x0002483a) popup_note_wait_window_t2_ParamLimits

0xb7e4,	// (0x0002483a) popup_note_wait_window_t2

0xb801,	// (0x00024857) popup_note_wait_window_t3_ParamLimits

0xb801,	// (0x00024857) popup_note_wait_window_t3

0xb814,	// (0x0002486a) popup_note_wait_window_t4_ParamLimits

0xb814,	// (0x0002486a) popup_note_wait_window_t4

0x0004,

0xf883,	// (0x000288d9) popup_note_wait_window_t_ParamLimits

0xf883,	// (0x000288d9) popup_note_wait_window_t

0xb839,	// (0x0002488f) wait_bar_pane_ParamLimits

0xb839,	// (0x0002488f) wait_bar_pane

0x6d96,	// (0x0001fdec) wait_anim_pane

0x6d96,	// (0x0001fdec) wait_border_pane

0x6d14,	// (0x0001fd6a) wait_anim_pane_g1

0x6d14,	// (0x0001fd6a) wait_anim_pane_g2

0x0001,

0xf742,	// (0x00028798) wait_anim_pane_g

0xb719,	// (0x0002476f) wait_border_pane_g1

0xb722,	// (0x00024778) wait_border_pane_g2

0xb72b,	// (0x00024781) wait_border_pane_g3

0x0002,

0xf875,	// (0x000288cb) wait_border_pane_g

0xb67b,	// (0x000246d1) bg_popup_window_pane_cp16_ParamLimits

0xb67b,	// (0x000246d1) bg_popup_window_pane_cp16

0xb689,	// (0x000246df) indicator_popup_pane_cp4_ParamLimits

0xb689,	// (0x000246df) indicator_popup_pane_cp4

0xb69d,	// (0x000246f3) popup_query_data_window_t1_ParamLimits

0xb69d,	// (0x000246f3) popup_query_data_window_t1

0xb6af,	// (0x00024705) popup_query_data_window_t2_ParamLimits

0xb6af,	// (0x00024705) popup_query_data_window_t2

0xb6c8,	// (0x0002471e) popup_query_data_window_t3_ParamLimits

0xb6c8,	// (0x0002471e) popup_query_data_window_t3

0x0002,

0xf86e,	// (0x000288c4) popup_query_data_window_t_ParamLimits

0xf86e,	// (0x000288c4) popup_query_data_window_t

0xb6e2,	// (0x00024738) query_popup_data_pane_ParamLimits

0xb6e2,	// (0x00024738) query_popup_data_pane

0xb6f6,	// (0x0002474c) query_popup_data_pane_cp1_ParamLimits

0xb6f6,	// (0x0002474c) query_popup_data_pane_cp1

0x7001,	// (0x00020057) bg_popup_window_pane_cp10_ParamLimits

0x7001,	// (0x00020057) bg_popup_window_pane_cp10

0xb5de,	// (0x00024634) indicator_popup_pane_ParamLimits

0xb5de,	// (0x00024634) indicator_popup_pane

0x7058,	// (0x000200ae) popup_query_code_window_t1_ParamLimits

0x7058,	// (0x000200ae) popup_query_code_window_t1

0xb5f6,	// (0x0002464c) popup_query_code_window_t2_ParamLimits

0xb5f6,	// (0x0002464c) popup_query_code_window_t2

0xb634,	// (0x0002468a) popup_query_code_window_t3_ParamLimits

0xb634,	// (0x0002468a) popup_query_code_window_t3

0x0002,

0xf867,	// (0x000288bd) popup_query_code_window_t_ParamLimits

0xf867,	// (0x000288bd) popup_query_code_window_t

0xb663,	// (0x000246b9) query_popup_pane_ParamLimits

0xb663,	// (0x000246b9) query_popup_pane

0x7001,	// (0x00020057) bg_popup_window_pane_cp15_ParamLimits

0x7001,	// (0x00020057) bg_popup_window_pane_cp15

0x701f,	// (0x00020075) indicator_popup_pane_cp1_ParamLimits

0x701f,	// (0x00020075) indicator_popup_pane_cp1

0x7032,	// (0x00020088) indicator_popup_pane_cp2_ParamLimits

0x7032,	// (0x00020088) indicator_popup_pane_cp2

0x7045,	// (0x0002009b) popup_query_data_code_window_g1_ParamLimits

0x7045,	// (0x0002009b) popup_query_data_code_window_g1

0x7058,	// (0x000200ae) popup_query_data_code_window_t1_ParamLimits

0x7058,	// (0x000200ae) popup_query_data_code_window_t1

0x706a,	// (0x000200c0) popup_query_data_code_window_t2_ParamLimits

0x706a,	// (0x000200c0) popup_query_data_code_window_t2

0x707c,	// (0x000200d2) popup_query_data_code_window_t3_ParamLimits

0x707c,	// (0x000200d2) popup_query_data_code_window_t3

0x7092,	// (0x000200e8) popup_query_data_code_window_t4_ParamLimits

0x7092,	// (0x000200e8) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00028624) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00028624) popup_query_data_code_window_t

0x9eb7,	// (0x00022f0d) list_single_midp_graphic_pane_g3

0x70aa,	// (0x00020100) query_popup_data_pane_cp2_ParamLimits

0x70bd,	// (0x00020113) query_popup_pane_cp2_ParamLimits

0x70bd,	// (0x00020113) query_popup_pane_cp2

0x6d96,	// (0x0001fdec) bg_popup_window_pane_cp11

0xb5b2,	// (0x00024608) heading_pane_cp5

0x7149,	// (0x0002019f) listscroll_popup_info_pane

0x6d96,	// (0x0001fdec) input_focus_pane_cp3

0x70d0,	// (0x00020126) query_popup_pane_t1

0x70de,	// (0x00020134) list_popup_info_pane_ParamLimits

0x70de,	// (0x00020134) list_popup_info_pane

0x70ed,	// (0x00020143) listscroll_popup_info_pane_g1

0x70f5,	// (0x0002014b) scroll_pane_cp7

0x70fd,	// (0x00020153) popup_info_list_pane_t1_ParamLimits

0x70fd,	// (0x00020153) popup_info_list_pane_t1

0x7117,	// (0x0002016d) popup_info_list_pane_t2_ParamLimits

0x7117,	// (0x0002016d) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002862d) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002862d) popup_info_list_pane_t

0x6d96,	// (0x0001fdec) bg_popup_window_pane_cp12

0xc453,	// (0x000254a9) find_popup_pane

0x6dfa,	// (0x0001fe50) bg_popup_window_pane_cp3

0x7131,	// (0x00020187) heading_pane_cp3

0x713d,	// (0x00020193) listscroll_popup_graphic_pane

0x6d96,	// (0x0001fdec) bg_popup_window_pane_cp4

0x95af,	// (0x00022605) heading_pane_cp4

0x7149,	// (0x0002019f) listscroll_popup_colour_pane

0x7151,	// (0x000201a7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7151,	// (0x000201a7) cell_large_graphic_colour_none_popup_pane

0x95b7,	// (0x0002260d) grid_large_graphic_colour_popup_pane_ParamLimits

0x95b7,	// (0x0002260d) grid_large_graphic_colour_popup_pane

0x95d3,	// (0x00022629) listscroll_popup_colour_pane_g1_ParamLimits

0x95d3,	// (0x00022629) listscroll_popup_colour_pane_g1

0x95ea,	// (0x00022640) listscroll_popup_colour_pane_g2_ParamLimits

0x95ea,	// (0x00022640) listscroll_popup_colour_pane_g2

0x7161,	// (0x000201b7) listscroll_popup_colour_pane_g3_ParamLimits

0x7161,	// (0x000201b7) listscroll_popup_colour_pane_g3

0x95fe,	// (0x00022654) listscroll_popup_colour_pane_g4_ParamLimits

0x95fe,	// (0x00022654) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00028632) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00028632) listscroll_popup_colour_pane_g

0x7171,	// (0x000201c7) scroll_pane_cp6_ParamLimits

0x7171,	// (0x000201c7) scroll_pane_cp6

0x960d,	// (0x00022663) cell_large_graphic_colour_popup_pane_ParamLimits

0x960d,	// (0x00022663) cell_large_graphic_colour_popup_pane

0x7183,	// (0x000201d9) cell_large_graphic_colour_none_popup_pane_t1

0x6d96,	// (0x0001fdec) grid_highlight_pane_cp5

0x7192,	// (0x000201e8) cell_large_graphic_colour_popup_pane_g1

0x719a,	// (0x000201f0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002863b) cell_large_graphic_colour_popup_pane_g

0x71a2,	// (0x000201f8) cell_large_graphic_colour_popup_pane_g2_copy1

0x71ab,	// (0x00020201) grid_highlight_pane_cp4

0x71b3,	// (0x00020209) bg_popup_window_pane_cp8_ParamLimits

0x71b3,	// (0x00020209) bg_popup_window_pane_cp8

0x71ce,	// (0x00020224) popup_snote_single_text_window_g1_ParamLimits

0x71ce,	// (0x00020224) popup_snote_single_text_window_g1

0x71e0,	// (0x00020236) popup_snote_single_text_window_t1_ParamLimits

0x71e0,	// (0x00020236) popup_snote_single_text_window_t1

0x71f3,	// (0x00020249) popup_snote_single_text_window_t2_ParamLimits

0x71f3,	// (0x00020249) popup_snote_single_text_window_t2

0x7206,	// (0x0002025c) popup_snote_single_text_window_t3_ParamLimits

0x7206,	// (0x0002025c) popup_snote_single_text_window_t3

0x723f,	// (0x00020295) popup_snote_single_text_window_t4_ParamLimits

0x723f,	// (0x00020295) popup_snote_single_text_window_t4

0x7273,	// (0x000202c9) popup_snote_single_text_window_t5_ParamLimits

0x7273,	// (0x000202c9) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00028640) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00028640) popup_snote_single_text_window_t

0x72a2,	// (0x000202f8) bg_popup_window_pane_cp9_ParamLimits

0x72a2,	// (0x000202f8) bg_popup_window_pane_cp9

0x71ce,	// (0x00020224) popup_snote_single_graphic_window_g1_ParamLimits

0x71ce,	// (0x00020224) popup_snote_single_graphic_window_g1

0x72b0,	// (0x00020306) popup_snote_single_graphic_window_g2_ParamLimits

0x72b0,	// (0x00020306) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002864b) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002864b) popup_snote_single_graphic_window_g

0x72bc,	// (0x00020312) popup_snote_single_graphic_window_t1_ParamLimits

0x72bc,	// (0x00020312) popup_snote_single_graphic_window_t1

0x72cf,	// (0x00020325) popup_snote_single_graphic_window_t2_ParamLimits

0x72cf,	// (0x00020325) popup_snote_single_graphic_window_t2

0x7206,	// (0x0002025c) popup_snote_single_graphic_window_t3_ParamLimits

0x7206,	// (0x0002025c) popup_snote_single_graphic_window_t3

0x723f,	// (0x00020295) popup_snote_single_graphic_window_t4_ParamLimits

0x723f,	// (0x00020295) popup_snote_single_graphic_window_t4

0x7273,	// (0x000202c9) popup_snote_single_graphic_window_t5_ParamLimits

0x7273,	// (0x000202c9) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00028650) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00028650) popup_snote_single_graphic_window_t

0xe562,	// (0x000275b8) grid_graphic_popup_pane_ParamLimits

0xe562,	// (0x000275b8) grid_graphic_popup_pane

0xe585,	// (0x000275db) listscroll_popup_graphic_pane_g1_ParamLimits

0xe585,	// (0x000275db) listscroll_popup_graphic_pane_g1

0xe599,	// (0x000275ef) listscroll_popup_graphic_pane_g2_ParamLimits

0xe599,	// (0x000275ef) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e4,	// (0x00028a3a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e4,	// (0x00028a3a) listscroll_popup_graphic_pane_g

0xc40b,	// (0x00025461) scroll_pane_cp5

0xe51b,	// (0x00027571) cell_graphic_popup_pane_ParamLimits

0xe51b,	// (0x00027571) cell_graphic_popup_pane

0xc3d6,	// (0x0002542c) cell_graphic_popup_pane_g1

0xc3de,	// (0x00025434) cell_graphic_popup_pane_g2

0x71a2,	// (0x000201f8) cell_graphic_popup_pane_g3

0x0002,

0xf9dd,	// (0x00028a33) cell_graphic_popup_pane_g

0xc3e7,	// (0x0002543d) cell_graphic_popup_pane_t2

0x71ab,	// (0x00020201) grid_highlight_pane_cp3

0x72f4,	// (0x0002034a) list_gen_pane_ParamLimits

0x72f4,	// (0x0002034a) list_gen_pane

0x731d,	// (0x00020373) scroll_pane

0xe4ec,	// (0x00027542) bg_list_pane_g1_ParamLimits

0xe4ec,	// (0x00027542) bg_list_pane_g1

0xc385,	// (0x000253db) bg_list_pane_g2_ParamLimits

0xc385,	// (0x000253db) bg_list_pane_g2

0xc398,	// (0x000253ee) bg_list_pane_g3_ParamLimits

0xc398,	// (0x000253ee) bg_list_pane_g3

0xc3aa,	// (0x00025400) bg_list_pane_g4_ParamLimits

0xc3aa,	// (0x00025400) bg_list_pane_g4

0xe503,	// (0x00027559) bg_list_pane_g5_ParamLimits

0xe503,	// (0x00027559) bg_list_pane_g5

0x0004,

0xf9d2,	// (0x00028a28) bg_list_pane_g_ParamLimits

0xf9d2,	// (0x00028a28) bg_list_pane_g

0xe49c,	// (0x000274f2) list_double2_graphic_large_graphic_pane_ParamLimits

0xe49c,	// (0x000274f2) list_double2_graphic_large_graphic_pane

0xe49c,	// (0x000274f2) list_double2_graphic_pane_ParamLimits

0xe49c,	// (0x000274f2) list_double2_graphic_pane

0xe49c,	// (0x000274f2) list_double2_large_graphic_pane_ParamLimits

0xe49c,	// (0x000274f2) list_double2_large_graphic_pane

0xe49c,	// (0x000274f2) list_double2_pane_ParamLimits

0xe49c,	// (0x000274f2) list_double2_pane

0xe49c,	// (0x000274f2) list_double_graphic_heading_pane_ParamLimits

0xe49c,	// (0x000274f2) list_double_graphic_heading_pane

0xe49c,	// (0x000274f2) list_double_graphic_pane_ParamLimits

0xe49c,	// (0x000274f2) list_double_graphic_pane

0xe49c,	// (0x000274f2) list_double_heading_pane_ParamLimits

0xe49c,	// (0x000274f2) list_double_heading_pane

0xe49c,	// (0x000274f2) list_double_large_graphic_pane_ParamLimits

0xe49c,	// (0x000274f2) list_double_large_graphic_pane

0xe49c,	// (0x000274f2) list_double_number_pane_ParamLimits

0xe49c,	// (0x000274f2) list_double_number_pane

0xe49c,	// (0x000274f2) list_double_pane_ParamLimits

0xe49c,	// (0x000274f2) list_double_pane

0xe49c,	// (0x000274f2) list_double_time_pane_ParamLimits

0xe49c,	// (0x000274f2) list_double_time_pane

0xe49c,	// (0x000274f2) list_setting_number_pane_ParamLimits

0xe49c,	// (0x000274f2) list_setting_number_pane

0xe49c,	// (0x000274f2) list_setting_pane_ParamLimits

0xe49c,	// (0x000274f2) list_setting_pane

0xd19a,	// (0x000261f0) list_single_2graphic_pane_ParamLimits

0xd19a,	// (0x000261f0) list_single_2graphic_pane

0xd19a,	// (0x000261f0) list_single_graphic_heading_pane_ParamLimits

0xd19a,	// (0x000261f0) list_single_graphic_heading_pane

0xd19a,	// (0x000261f0) list_single_graphic_pane_ParamLimits

0xd19a,	// (0x000261f0) list_single_graphic_pane

0xd19a,	// (0x000261f0) list_single_heading_pane_ParamLimits

0xd19a,	// (0x000261f0) list_single_heading_pane

0xd1b1,	// (0x00026207) list_single_large_graphic_pane_ParamLimits

0xd1b1,	// (0x00026207) list_single_large_graphic_pane

0xd19a,	// (0x000261f0) list_single_number_heading_pane_ParamLimits

0xd19a,	// (0x000261f0) list_single_number_heading_pane

0xd19a,	// (0x000261f0) list_single_number_pane_ParamLimits

0xd19a,	// (0x000261f0) list_single_number_pane

0xd19a,	// (0x000261f0) list_single_pane_ParamLimits

0xd19a,	// (0x000261f0) list_single_pane

0x6d96,	// (0x0001fdec) list_highlight_pane_cp1

0xc976,	// (0x000259cc) list_single_pane_g1_ParamLimits

0xc976,	// (0x000259cc) list_single_pane_g1

0xc982,	// (0x000259d8) list_single_pane_g2_ParamLimits

0xc982,	// (0x000259d8) list_single_pane_g2

0x0001,

0xf60c,	// (0x00028662) list_single_pane_g_ParamLimits

0xf60c,	// (0x00028662) list_single_pane_g

0xd15a,	// (0x000261b0) list_single_pane_t1_ParamLimits

0xd15a,	// (0x000261b0) list_single_pane_t1

0xc976,	// (0x000259cc) list_single_number_pane_g1_ParamLimits

0xc976,	// (0x000259cc) list_single_number_pane_g1

0xc982,	// (0x000259d8) list_single_number_pane_g2_ParamLimits

0xc982,	// (0x000259d8) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00028662) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00028662) list_single_number_pane_g

0xc98e,	// (0x000259e4) list_single_number_pane_t1_ParamLimits

0xc98e,	// (0x000259e4) list_single_number_pane_t1

0xd11b,	// (0x00026171) list_single_number_pane_t2_ParamLimits

0xd11b,	// (0x00026171) list_single_number_pane_t2

0x0001,

0xf993,	// (0x000289e9) list_single_number_pane_t_ParamLimits

0xf993,	// (0x000289e9) list_single_number_pane_t

0xc96a,	// (0x000259c0) list_single_graphic_pane_g1_ParamLimits

0xc96a,	// (0x000259c0) list_single_graphic_pane_g1

0xc976,	// (0x000259cc) list_single_graphic_pane_g2_ParamLimits

0xc976,	// (0x000259cc) list_single_graphic_pane_g2

0xc982,	// (0x000259d8) list_single_graphic_pane_g3_ParamLimits

0xc982,	// (0x000259d8) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002865b) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002865b) list_single_graphic_pane_g

0xc98e,	// (0x000259e4) list_single_graphic_pane_t1_ParamLimits

0xc98e,	// (0x000259e4) list_single_graphic_pane_t1

0xc976,	// (0x000259cc) list_single_heading_pane_g1_ParamLimits

0xc976,	// (0x000259cc) list_single_heading_pane_g1

0xc982,	// (0x000259d8) list_single_heading_pane_g2_ParamLimits

0xc982,	// (0x000259d8) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00028662) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00028662) list_single_heading_pane_g

0xc9a4,	// (0x000259fa) list_single_heading_pane_t1_ParamLimits

0xc9a4,	// (0x000259fa) list_single_heading_pane_t1

0xc9ba,	// (0x00025a10) list_single_heading_pane_t2_ParamLimits

0xc9ba,	// (0x00025a10) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00028667) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00028667) list_single_heading_pane_t

0xc976,	// (0x000259cc) list_single_number_heading_pane_g1_ParamLimits

0xc976,	// (0x000259cc) list_single_number_heading_pane_g1

0xc982,	// (0x000259d8) list_single_number_heading_pane_g2_ParamLimits

0xc982,	// (0x000259d8) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00028662) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00028662) list_single_number_heading_pane_g

0xc9a4,	// (0x000259fa) list_single_number_heading_pane_t1_ParamLimits

0xc9a4,	// (0x000259fa) list_single_number_heading_pane_t1

0xc9cc,	// (0x00025a22) list_single_number_heading_pane_t2_ParamLimits

0xc9cc,	// (0x00025a22) list_single_number_heading_pane_t2

0xc9de,	// (0x00025a34) list_single_number_heading_pane_t3_ParamLimits

0xc9de,	// (0x00025a34) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002866c) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002866c) list_single_number_heading_pane_t

0xc96a,	// (0x000259c0) list_single_graphic_heading_pane_g1_ParamLimits

0xc96a,	// (0x000259c0) list_single_graphic_heading_pane_g1

0xc9f0,	// (0x00025a46) list_single_graphic_heading_pane_g4_ParamLimits

0xc9f0,	// (0x00025a46) list_single_graphic_heading_pane_g4

0xc982,	// (0x000259d8) list_single_graphic_heading_pane_g5_ParamLimits

0xc982,	// (0x000259d8) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00028673) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00028673) list_single_graphic_heading_pane_g

0xc9a4,	// (0x000259fa) list_single_graphic_heading_pane_t1_ParamLimits

0xc9a4,	// (0x000259fa) list_single_graphic_heading_pane_t1

0xc9ff,	// (0x00025a55) list_single_graphic_heading_pane_t2_ParamLimits

0xc9ff,	// (0x00025a55) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0002867a) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0002867a) list_single_graphic_heading_pane_t

0xca11,	// (0x00025a67) list_single_large_graphic_pane_g1_ParamLimits

0xca11,	// (0x00025a67) list_single_large_graphic_pane_g1

0xca1d,	// (0x00025a73) list_single_large_graphic_pane_g2_ParamLimits

0xca1d,	// (0x00025a73) list_single_large_graphic_pane_g2

0xca29,	// (0x00025a7f) list_single_large_graphic_pane_g3_ParamLimits

0xca29,	// (0x00025a7f) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002867f) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002867f) list_single_large_graphic_pane_g

0xb722,	// (0x00024778) wait_border_pane_g2_copy1

0xca35,	// (0x00025a8b) list_single_large_graphic_pane_g4_cp2

0xca3d,	// (0x00025a93) list_single_large_graphic_pane_t1_ParamLimits

0xca3d,	// (0x00025a93) list_single_large_graphic_pane_t1

0xca53,	// (0x00025aa9) list_double_pane_g1_ParamLimits

0xca53,	// (0x00025aa9) list_double_pane_g1

0xca5f,	// (0x00025ab5) list_double_pane_g2_ParamLimits

0xca5f,	// (0x00025ab5) list_double_pane_g2

0x0001,

0xf630,	// (0x00028686) list_double_pane_g_ParamLimits

0xf630,	// (0x00028686) list_double_pane_g

0xca6b,	// (0x00025ac1) list_double_pane_t1_ParamLimits

0xca6b,	// (0x00025ac1) list_double_pane_t1

0xca81,	// (0x00025ad7) list_double_pane_t2_ParamLimits

0xca81,	// (0x00025ad7) list_double_pane_t2

0x0001,

0xf635,	// (0x0002868b) list_double_pane_t_ParamLimits

0xf635,	// (0x0002868b) list_double_pane_t

0xca93,	// (0x00025ae9) list_double2_pane_g1_ParamLimits

0xca93,	// (0x00025ae9) list_double2_pane_g1

0xca5f,	// (0x00025ab5) list_double2_pane_g2_ParamLimits

0xca5f,	// (0x00025ab5) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00028690) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00028690) list_double2_pane_g

0xca6b,	// (0x00025ac1) list_double2_pane_t1_ParamLimits

0xca6b,	// (0x00025ac1) list_double2_pane_t1

0xcaa2,	// (0x00025af8) list_double2_pane_t2_ParamLimits

0xcaa2,	// (0x00025af8) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00028695) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00028695) list_double2_pane_t

0xca53,	// (0x00025aa9) list_double_number_pane_g1_ParamLimits

0xca53,	// (0x00025aa9) list_double_number_pane_g1

0xca5f,	// (0x00025ab5) list_double_number_pane_g2_ParamLimits

0xca5f,	// (0x00025ab5) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00028686) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00028686) list_double_number_pane_g

0xcab4,	// (0x00025b0a) list_double_number_pane_t1_ParamLimits

0xcab4,	// (0x00025b0a) list_double_number_pane_t1

0xcac6,	// (0x00025b1c) list_double_number_pane_t2_ParamLimits

0xcac6,	// (0x00025b1c) list_double_number_pane_t2

0xcadc,	// (0x00025b32) list_double_number_pane_t3_ParamLimits

0xcadc,	// (0x00025b32) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002869a) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002869a) list_double_number_pane_t

0xcaee,	// (0x00025b44) list_double_graphic_pane_g1_ParamLimits

0xcaee,	// (0x00025b44) list_double_graphic_pane_g1

0xcafa,	// (0x00025b50) list_double_graphic_pane_g2_ParamLimits

0xcafa,	// (0x00025b50) list_double_graphic_pane_g2

0xcb09,	// (0x00025b5f) list_double_graphic_pane_g3_ParamLimits

0xcb09,	// (0x00025b5f) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x000286a1) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x000286a1) list_double_graphic_pane_g

0xcb21,	// (0x00025b77) list_double_graphic_pane_t1_ParamLimits

0xcb21,	// (0x00025b77) list_double_graphic_pane_t1

0xcb37,	// (0x00025b8d) list_double_graphic_pane_t2_ParamLimits

0xcb37,	// (0x00025b8d) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x000286aa) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x000286aa) list_double_graphic_pane_t

0xcaee,	// (0x00025b44) list_double2_graphic_pane_g1_ParamLimits

0xcaee,	// (0x00025b44) list_double2_graphic_pane_g1

0xcb49,	// (0x00025b9f) list_double2_graphic_pane_g2_ParamLimits

0xcb49,	// (0x00025b9f) list_double2_graphic_pane_g2

0xcb55,	// (0x00025bab) list_double2_graphic_pane_g3_ParamLimits

0xcb55,	// (0x00025bab) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x000286af) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x000286af) list_double2_graphic_pane_g

0xcac6,	// (0x00025b1c) list_double2_graphic_pane_t1_ParamLimits

0xcac6,	// (0x00025b1c) list_double2_graphic_pane_t1

0xcb61,	// (0x00025bb7) list_double2_graphic_pane_t2_ParamLimits

0xcb61,	// (0x00025bb7) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x000286b6) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x000286b6) list_double2_graphic_pane_t

0xcb73,	// (0x00025bc9) list_double_large_graphic_pane_g1_ParamLimits

0xcb73,	// (0x00025bc9) list_double_large_graphic_pane_g1

0xca93,	// (0x00025ae9) list_double_large_graphic_pane_g2_ParamLimits

0xca93,	// (0x00025ae9) list_double_large_graphic_pane_g2

0xca5f,	// (0x00025ab5) list_double_large_graphic_pane_g3_ParamLimits

0xca5f,	// (0x00025ab5) list_double_large_graphic_pane_g3

0xcb9c,	// (0x00025bf2) list_double_large_graphic_pane_g4_ParamLimits

0xcb9c,	// (0x00025bf2) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x000286bb) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x000286bb) list_double_large_graphic_pane_g

0xcbc2,	// (0x00025c18) list_double_large_graphic_pane_t1_ParamLimits

0xcbc2,	// (0x00025c18) list_double_large_graphic_pane_t1

0xcbdb,	// (0x00025c31) list_double_large_graphic_pane_t2_ParamLimits

0xcbdb,	// (0x00025c31) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x000286c6) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x000286c6) list_double_large_graphic_pane_t

0xcbed,	// (0x00025c43) list_double2_large_graphic_pane_g1_ParamLimits

0xcbed,	// (0x00025c43) list_double2_large_graphic_pane_g1

0xca93,	// (0x00025ae9) list_double2_large_graphic_pane_g2_ParamLimits

0xca93,	// (0x00025ae9) list_double2_large_graphic_pane_g2

0xca5f,	// (0x00025ab5) list_double2_large_graphic_pane_g3_ParamLimits

0xca5f,	// (0x00025ab5) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x000286cb) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x000286cb) list_double2_large_graphic_pane_g

0xcbf9,	// (0x00025c4f) list_double2_large_graphic_pane_t1_ParamLimits

0xcbf9,	// (0x00025c4f) list_double2_large_graphic_pane_t1

0xcc0f,	// (0x00025c65) list_double2_large_graphic_pane_t2_ParamLimits

0xcc0f,	// (0x00025c65) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x000286d2) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x000286d2) list_double2_large_graphic_pane_t

0xcc21,	// (0x00025c77) list_double_heading_pane_g1_ParamLimits

0xcc21,	// (0x00025c77) list_double_heading_pane_g1

0xcc30,	// (0x00025c86) list_double_heading_pane_g2_ParamLimits

0xcc30,	// (0x00025c86) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x000286d7) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x000286d7) list_double_heading_pane_g

0xcc3c,	// (0x00025c92) list_double_heading_pane_t1_ParamLimits

0xcc3c,	// (0x00025c92) list_double_heading_pane_t1

0xcc52,	// (0x00025ca8) list_double_heading_pane_t2_ParamLimits

0xcc52,	// (0x00025ca8) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x000286dc) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x000286dc) list_double_heading_pane_t

0xcc64,	// (0x00025cba) list_double_graphic_heading_pane_g1_ParamLimits

0xcc64,	// (0x00025cba) list_double_graphic_heading_pane_g1

0xcc21,	// (0x00025c77) list_double_graphic_heading_pane_g2_ParamLimits

0xcc21,	// (0x00025c77) list_double_graphic_heading_pane_g2

0xcc30,	// (0x00025c86) list_double_graphic_heading_pane_g3_ParamLimits

0xcc30,	// (0x00025c86) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x000286e1) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x000286e1) list_double_graphic_heading_pane_g

0xcc70,	// (0x00025cc6) list_double_graphic_heading_pane_t1_ParamLimits

0xcc70,	// (0x00025cc6) list_double_graphic_heading_pane_t1

0xcc86,	// (0x00025cdc) list_double_graphic_heading_pane_t2_ParamLimits

0xcc86,	// (0x00025cdc) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x000286e8) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x000286e8) list_double_graphic_heading_pane_t

0xca93,	// (0x00025ae9) list_double_time_pane_g1_ParamLimits

0xca93,	// (0x00025ae9) list_double_time_pane_g1

0xca5f,	// (0x00025ab5) list_double_time_pane_g2_ParamLimits

0xca5f,	// (0x00025ab5) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x00028690) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x00028690) list_double_time_pane_g

0xcbf9,	// (0x00025c4f) list_double_time_pane_t1_ParamLimits

0xcbf9,	// (0x00025c4f) list_double_time_pane_t1

0xcc98,	// (0x00025cee) list_double_time_pane_t2_ParamLimits

0xcc98,	// (0x00025cee) list_double_time_pane_t2

0xccaa,	// (0x00025d00) list_double_time_pane_t3_ParamLimits

0xccaa,	// (0x00025d00) list_double_time_pane_t3

0xccbc,	// (0x00025d12) list_double_time_pane_t4_ParamLimits

0xccbc,	// (0x00025d12) list_double_time_pane_t4

0x0003,

0xf697,	// (0x000286ed) list_double_time_pane_t_ParamLimits

0xf697,	// (0x000286ed) list_double_time_pane_t

0xccce,	// (0x00025d24) list_setting_pane_g1_ParamLimits

0xccce,	// (0x00025d24) list_setting_pane_g1

0xccda,	// (0x00025d30) list_setting_pane_g2_ParamLimits

0xccda,	// (0x00025d30) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x000286f6) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x000286f6) list_setting_pane_g

0xcce6,	// (0x00025d3c) list_setting_pane_t1_ParamLimits

0xcce6,	// (0x00025d3c) list_setting_pane_t1

0xccfd,	// (0x00025d53) list_setting_pane_t2_ParamLimits

0xccfd,	// (0x00025d53) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x000286fb) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x000286fb) list_setting_pane_t

0xcd3a,	// (0x00025d90) set_value_pane_cp_ParamLimits

0xcd3a,	// (0x00025d90) set_value_pane_cp

0xcd46,	// (0x00025d9c) list_setting_number_pane_g1_ParamLimits

0xcd46,	// (0x00025d9c) list_setting_number_pane_g1

0xcd52,	// (0x00025da8) list_setting_number_pane_g2_ParamLimits

0xcd52,	// (0x00025da8) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x00028702) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x00028702) list_setting_number_pane_g

0xcd5e,	// (0x00025db4) list_setting_number_pane_t1_ParamLimits

0xcd5e,	// (0x00025db4) list_setting_number_pane_t1

0xcd70,	// (0x00025dc6) list_setting_number_pane_t2_ParamLimits

0xcd70,	// (0x00025dc6) list_setting_number_pane_t2

0xcd87,	// (0x00025ddd) list_setting_number_pane_t3_ParamLimits

0xcd87,	// (0x00025ddd) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x00028707) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x00028707) list_setting_number_pane_t

0xcd3a,	// (0x00025d90) set_value_pane_ParamLimits

0xcd3a,	// (0x00025d90) set_value_pane

0x7a06,	// (0x00020a5c) bg_set_opt_pane_ParamLimits

0x7a06,	// (0x00020a5c) bg_set_opt_pane

0xcdc8,	// (0x00025e1e) set_value_pane_t1

0x7a27,	// (0x00020a7d) slider_set_pane_cp3

0x7a30,	// (0x00020a86) volume_small_pane_cp

0x7a39,	// (0x00020a8f) list_form_gen_pane

0x7341,	// (0x00020397) scroll_pane_cp8

0xcde6,	// (0x00025e3c) form_field_data_pane_ParamLimits

0xcde6,	// (0x00025e3c) form_field_data_pane

0xce06,	// (0x00025e5c) form_field_data_wide_pane_ParamLimits

0xce06,	// (0x00025e5c) form_field_data_wide_pane

0xce25,	// (0x00025e7b) form_field_popup_pane_ParamLimits

0xce25,	// (0x00025e7b) form_field_popup_pane

0xce3d,	// (0x00025e93) form_field_popup_wide_pane_ParamLimits

0xce3d,	// (0x00025e93) form_field_popup_wide_pane

0xce54,	// (0x00025eaa) form_field_slider_pane_ParamLimits

0xce54,	// (0x00025eaa) form_field_slider_pane

0xce67,	// (0x00025ebd) form_field_slider_wide_pane_ParamLimits

0xce67,	// (0x00025ebd) form_field_slider_wide_pane

0x7a42,	// (0x00020a98) data_form_pane

0x9634,	// (0x0002268a) form_field_data_pane_t1

0x7a4e,	// (0x00020aa4) input_focus_pane

0x7a5c,	// (0x00020ab2) data_form_wide_pane

0xce8e,	// (0x00025ee4) form_field_data_wide_pane_t1

0x71c0,	// (0x00020216) input_focus_pane_cp6

0xceb0,	// (0x00025f06) form_field_popup_pane_t1

0x7a4e,	// (0x00020aa4) input_focus_pane_cp7

0x7a42,	// (0x00020a98) list_form_pane

0xced0,	// (0x00025f26) form_field_popup_wide_pane_t1

0x7a4e,	// (0x00020aa4) input_focus_pane_cp8

0x7a7c,	// (0x00020ad2) list_form_wide_pane

0xceed,	// (0x00025f43) form_field_slider_pane_t1_ParamLimits

0xceed,	// (0x00025f43) form_field_slider_pane_t1

0xceff,	// (0x00025f55) form_field_slider_pane_t2_ParamLimits

0xceff,	// (0x00025f55) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x00028717) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x00028717) form_field_slider_pane_t

0x6de4,	// (0x0001fe3a) input_focus_pane_cp9_ParamLimits

0x6de4,	// (0x0001fe3a) input_focus_pane_cp9

0xcf11,	// (0x00025f67) slider_cont_pane_ParamLimits

0xcf11,	// (0x00025f67) slider_cont_pane

0x7a8b,	// (0x00020ae1) form_field_slider_wide_pane_t1_ParamLimits

0x7a8b,	// (0x00020ae1) form_field_slider_wide_pane_t1

0xcf25,	// (0x00025f7b) form_field_slider_wide_pane_t2_ParamLimits

0xcf25,	// (0x00025f7b) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0002871c) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0002871c) form_field_slider_wide_pane_t

0x6de4,	// (0x0001fe3a) input_focus_pane_cp10_ParamLimits

0x6de4,	// (0x0001fe3a) input_focus_pane_cp10

0xcf37,	// (0x00025f8d) slider_cont_pane_cp1_ParamLimits

0xcf37,	// (0x00025f8d) slider_cont_pane_cp1

0xcf4d,	// (0x00025fa3) slider_form_pane_cp

0x7a9d,	// (0x00020af3) input_focus_pane_g1

0x7aa5,	// (0x00020afb) input_focus_pane_g2

0x7aad,	// (0x00020b03) input_focus_pane_g3

0x7ab5,	// (0x00020b0b) input_focus_pane_g4

0x7abd,	// (0x00020b13) input_focus_pane_g5

0x7ac5,	// (0x00020b1b) input_focus_pane_g6

0x7acd,	// (0x00020b23) input_focus_pane_g7

0x7ad5,	// (0x00020b2b) input_focus_pane_g8

0x7add,	// (0x00020b33) input_focus_pane_g9

0x6d14,	// (0x0001fd6a) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x00028721) input_focus_pane_g

0xb72b,	// (0x00024781) wait_border_pane_g3_copy1

0xcf55,	// (0x00025fab) data_form_pane_t1

0x6d14,	// (0x0001fd6a) wait_anim_pane_g1_copy1

0xd12d,	// (0x00026183) data_form_wide_pane_t1

0xcf6f,	// (0x00025fc5) list_form_graphic_pane_cp_ParamLimits

0xcf6f,	// (0x00025fc5) list_form_graphic_pane_cp

0xc32b,	// (0x00025381) slider_form_pane_g1

0xc334,	// (0x0002538a) slider_form_pane_g2

0x0006,

0xf9c3,	// (0x00028a19) slider_form_pane_g

0xcf6f,	// (0x00025fc5) list_form_graphic_pane_ParamLimits

0xcf6f,	// (0x00025fc5) list_form_graphic_pane

0xcf85,	// (0x00025fdb) list_form_graphic_pane_g1

0xcf8d,	// (0x00025fe3) list_form_graphic_pane_t1_ParamLimits

0xcf8d,	// (0x00025fe3) list_form_graphic_pane_t1

0x6dfa,	// (0x0001fe50) list_highlight_pane_cp5_ParamLimits

0x6dfa,	// (0x0001fe50) list_highlight_pane_cp5

0xcfa2,	// (0x00025ff8) find_pane_g1

0x7af9,	// (0x00020b4f) input_find_pane

0xcfab,	// (0x00026001) input_find_pane_g1_ParamLimits

0xcfab,	// (0x00026001) input_find_pane_g1

0xcfb7,	// (0x0002600d) input_find_pane_t1_ParamLimits

0xcfb7,	// (0x0002600d) input_find_pane_t1

0xcfcc,	// (0x00026022) input_find_pane_t2_ParamLimits

0xcfcc,	// (0x00026022) input_find_pane_t2

0x0001,

0xf6e0,	// (0x00028736) input_find_pane_t_ParamLimits

0xf6e0,	// (0x00028736) input_find_pane_t

0x7b02,	// (0x00020b58) input_focus_pane_cp5_ParamLimits

0x7b02,	// (0x00020b58) input_focus_pane_cp5

0x6de4,	// (0x0001fe3a) bg_popup_window_pane_cp2_ParamLimits

0x6de4,	// (0x0001fe3a) bg_popup_window_pane_cp2

0x7b1c,	// (0x00020b72) listscroll_menu_pane_ParamLimits

0x7b1c,	// (0x00020b72) listscroll_menu_pane

0x7b28,	// (0x00020b7e) popup_submenu_window_ParamLimits

0x7b28,	// (0x00020b7e) popup_submenu_window

0x7b4c,	// (0x00020ba2) find_popup_pane_g1

0x7b54,	// (0x00020baa) input_popup_find_pane_cp

0x7b02,	// (0x00020b58) input_focus_pane_cp4_ParamLimits

0x7b02,	// (0x00020b58) input_focus_pane_cp4

0x7b5e,	// (0x00020bb4) input_popup_find_pane_t1_ParamLimits

0x7b5e,	// (0x00020bb4) input_popup_find_pane_t1

0x6d96,	// (0x0001fdec) bg_popup_sub_pane_cp

0x7b8c,	// (0x00020be2) listscroll_popup_sub_pane

0x7b94,	// (0x00020bea) list_submenu_pane_ParamLimits

0x7b94,	// (0x00020bea) list_submenu_pane

0x7ba5,	// (0x00020bfb) scroll_pane_cp4

0x7ae5,	// (0x00020b3b) list_single_popup_submenu_pane_ParamLimits

0x7ae5,	// (0x00020b3b) list_single_popup_submenu_pane

0x7bad,	// (0x00020c03) list_single_popup_submenu_pane_g1

0x7bb5,	// (0x00020c0b) list_single_popup_submenu_pane_t1_ParamLimits

0x7bb5,	// (0x00020c0b) list_single_popup_submenu_pane_t1

0x6dfa,	// (0x0001fe50) bg_active_tab_pane_cp1_ParamLimits

0x6dfa,	// (0x0001fe50) bg_active_tab_pane_cp1

0x9658,	// (0x000226ae) tabs_2_active_pane_g1

0x9660,	// (0x000226b6) tabs_2_active_pane_t1

0x6dfa,	// (0x0001fe50) bg_passive_tab_pane_cp1_ParamLimits

0x6dfa,	// (0x0001fe50) bg_passive_tab_pane_cp1

0x9658,	// (0x000226ae) tabs_2_passive_pane_g1

0x9660,	// (0x000226b6) tabs_2_passive_pane_t1

0x7fc9,	// (0x0002101f) bg_active_tab_pane_cp4

0x9672,	// (0x000226c8) tabs_2_long_active_pane_t1

0x9685,	// (0x000226db) bg_passive_tab_pane_cp4

0x9ebf,	// (0x00022f15) list_single_midp_graphic_pane_g4_ParamLimits

0x7fc9,	// (0x0002101f) bg_active_tab_pane_cp5

0x9691,	// (0x000226e7) tabs_3_long_active_pane_t1

0x9685,	// (0x000226db) bg_passive_tab_pane_cp5

0x9ebf,	// (0x00022f15) list_single_midp_graphic_pane_g4

0x6dfa,	// (0x0001fe50) bg_popup_window_pane_cp13_ParamLimits

0x6dfa,	// (0x0001fe50) bg_popup_window_pane_cp13

0x7bd3,	// (0x00020c29) listscroll_popup_fast_pane_ParamLimits

0x7bd3,	// (0x00020c29) listscroll_popup_fast_pane

0x7be2,	// (0x00020c38) grid_popup_fast_pane_ParamLimits

0x7be2,	// (0x00020c38) grid_popup_fast_pane

0x7bf4,	// (0x00020c4a) scroll_pane_cp9_ParamLimits

0x7bf4,	// (0x00020c4a) scroll_pane_cp9

0xf2ba,	// (0x00028310) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf2ba,	// (0x00028310) list_single_graphic_hl_pane_t1_cp2

0x7c18,	// (0x00020c6e) input_focus_pane_cp20_ParamLimits

0x7c18,	// (0x00020c6e) input_focus_pane_cp20

0x7c26,	// (0x00020c7c) query_popup_data_pane_t1_ParamLimits

0x7c26,	// (0x00020c7c) query_popup_data_pane_t1

0x7c39,	// (0x00020c8f) query_popup_data_pane_t2_ParamLimits

0x7c39,	// (0x00020c8f) query_popup_data_pane_t2

0x7c7f,	// (0x00020cd5) query_popup_data_pane_t3_ParamLimits

0x7c7f,	// (0x00020cd5) query_popup_data_pane_t3

0x7cc0,	// (0x00020d16) query_popup_data_pane_t4_ParamLimits

0x7cc0,	// (0x00020d16) query_popup_data_pane_t4

0x7cfc,	// (0x00020d52) query_popup_data_pane_t5_ParamLimits

0x7cfc,	// (0x00020d52) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0002873b) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0002873b) query_popup_data_pane_t

0x7a9d,	// (0x00020af3) bg_set_opt_pane_g1

0x7aa5,	// (0x00020afb) bg_set_opt_pane_g2

0x7aad,	// (0x00020b03) bg_set_opt_pane_g3

0x7ab5,	// (0x00020b0b) bg_set_opt_pane_g4

0x7abd,	// (0x00020b13) bg_set_opt_pane_g5

0x7ac5,	// (0x00020b1b) bg_set_opt_pane_g6

0x7acd,	// (0x00020b23) bg_set_opt_pane_g7

0x7ad5,	// (0x00020b2b) bg_set_opt_pane_g8

0x7add,	// (0x00020b33) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x00028746) bg_set_opt_pane_g

0x9a62,	// (0x00022ab8) control_top_pane_stacon_ParamLimits

0x9a62,	// (0x00022ab8) control_top_pane_stacon

0x9ab5,	// (0x00022b0b) signal_pane_stacon_ParamLimits

0x9ab5,	// (0x00022b0b) signal_pane_stacon

0x811a,	// (0x00021170) stacon_top_pane_g1_ParamLimits

0x811a,	// (0x00021170) stacon_top_pane_g1

0x9ada,	// (0x00022b30) title_pane_stacon_ParamLimits

0x9ada,	// (0x00022b30) title_pane_stacon

0x9afc,	// (0x00022b52) uni_indicator_pane_stacon_ParamLimits

0x9afc,	// (0x00022b52) uni_indicator_pane_stacon

0x9b11,	// (0x00022b67) battery_pane_stacon_ParamLimits

0x9b11,	// (0x00022b67) battery_pane_stacon

0x9b51,	// (0x00022ba7) control_bottom_pane_stacon_ParamLimits

0x9b51,	// (0x00022ba7) control_bottom_pane_stacon

0x9b70,	// (0x00022bc6) navi_pane_stacon_ParamLimits

0x9b70,	// (0x00022bc6) navi_pane_stacon

0x813c,	// (0x00021192) stacon_bottom_pane_g1_ParamLimits

0x813c,	// (0x00021192) stacon_bottom_pane_g1

0x7d33,	// (0x00020d89) aid_levels_signal_lsc_ParamLimits

0x7d33,	// (0x00020d89) aid_levels_signal_lsc

0x96a3,	// (0x000226f9) signal_pane_stacon_g1_ParamLimits

0x96a3,	// (0x000226f9) signal_pane_stacon_g1

0x96af,	// (0x00022705) signal_pane_stacon_g2_ParamLimits

0x96af,	// (0x00022705) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x00028759) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x00028759) signal_pane_stacon_g

0x96e3,	// (0x00022739) title_pane_stacon_t1_ParamLimits

0x96e3,	// (0x00022739) title_pane_stacon_t1

0x7d61,	// (0x00020db7) uni_indicator_pane_stacon_g1

0x7d6b,	// (0x00020dc1) uni_indicator_pane_stacon_g2

0x7d4d,	// (0x00020da3) uni_indicator_pane_stacon_g3

0x7d57,	// (0x00020dad) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x00028765) uni_indicator_pane_stacon_g

0x9708,	// (0x0002275e) control_top_pane_stacon_g1

0x9710,	// (0x00022766) control_top_pane_stacon_t1_ParamLimits

0x9710,	// (0x00022766) control_top_pane_stacon_t1

0x7d75,	// (0x00020dcb) aid_levels_battery_lsc_ParamLimits

0x7d75,	// (0x00020dcb) aid_levels_battery_lsc

0x9741,	// (0x00022797) battery_pane_stacon_g1_ParamLimits

0x9741,	// (0x00022797) battery_pane_stacon_g1

0x974d,	// (0x000227a3) battery_pane_stacon_g2_ParamLimits

0x974d,	// (0x000227a3) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0002876e) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0002876e) battery_pane_stacon_g

0x977c,	// (0x000227d2) navi_icon_pane_stacon

0x978c,	// (0x000227e2) navi_navi_pane_stacon

0x977c,	// (0x000227d2) navi_text_pane_stacon

0x9708,	// (0x0002275e) control_bottom_pane_stacon_g1

0x979c,	// (0x000227f2) control_bottom_pane_stacon_t1_ParamLimits

0x979c,	// (0x000227f2) control_bottom_pane_stacon_t1

0x97cd,	// (0x00022823) grid_app_pane_ParamLimits

0x97cd,	// (0x00022823) grid_app_pane

0x97e9,	// (0x0002283f) scroll_pane_cp15_ParamLimits

0x97e9,	// (0x0002283f) scroll_pane_cp15

0x97fc,	// (0x00022852) cell_app_pane_ParamLimits

0x97fc,	// (0x00022852) cell_app_pane

0x981e,	// (0x00022874) cell_app_pane_g1_ParamLimits

0x981e,	// (0x00022874) cell_app_pane_g1

0x7d9d,	// (0x00020df3) cell_app_pane_g2_ParamLimits

0x7d9d,	// (0x00020df3) cell_app_pane_g2

0x0001,

0xf71d,	// (0x00028773) cell_app_pane_g_ParamLimits

0xf71d,	// (0x00028773) cell_app_pane_g

0x7da9,	// (0x00020dff) cell_app_pane_t1_ParamLimits

0x7da9,	// (0x00020dff) cell_app_pane_t1

0x7dbb,	// (0x00020e11) grid_highlight_pane_ParamLimits

0x7dbb,	// (0x00020e11) grid_highlight_pane

0x7a9d,	// (0x00020af3) cell_highlight_pane_g1

0x7aa5,	// (0x00020afb) cell_highlight_pane_g2

0x7aad,	// (0x00020b03) cell_highlight_pane_g3

0x7ab5,	// (0x00020b0b) cell_highlight_pane_g4

0x7abd,	// (0x00020b13) cell_highlight_pane_g5

0x7ac5,	// (0x00020b1b) cell_highlight_pane_g6

0x7acd,	// (0x00020b23) cell_highlight_pane_g7

0x7ad5,	// (0x00020b2b) cell_highlight_pane_g8

0x7add,	// (0x00020b33) cell_highlight_pane_g9

0x6d14,	// (0x0001fd6a) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x00028721) cell_highlight_pane_g

0x7dcc,	// (0x00020e22) bg_scroll_pane

0x9855,	// (0x000228ab) scroll_handle_pane

0x7e13,	// (0x00020e69) scroll_bg_pane_g1

0x7e28,	// (0x00020e7e) scroll_bg_pane_g2

0x7e40,	// (0x00020e96) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x00028778) scroll_bg_pane_g

0x7e55,	// (0x00020eab) scroll_handle_focus_pane_ParamLimits

0x7e55,	// (0x00020eab) scroll_handle_focus_pane

0x7e13,	// (0x00020e69) scroll_handle_pane_g1

0x7e62,	// (0x00020eb8) scroll_handle_pane_g2

0x7e40,	// (0x00020e96) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0002877f) scroll_handle_pane_g

0x7b02,	// (0x00020b58) bg_popup_sub_pane_cp21_ParamLimits

0x7b02,	// (0x00020b58) bg_popup_sub_pane_cp21

0x7e76,	// (0x00020ecc) popup_fep_japan_predictive_window_t1_ParamLimits

0x7e76,	// (0x00020ecc) popup_fep_japan_predictive_window_t1

0x7e8d,	// (0x00020ee3) popup_fep_japan_predictive_window_t2_ParamLimits

0x7e8d,	// (0x00020ee3) popup_fep_japan_predictive_window_t2

0x7ec0,	// (0x00020f16) popup_fep_japan_predictive_window_t3_ParamLimits

0x7ec0,	// (0x00020f16) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x00028786) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x00028786) popup_fep_japan_predictive_window_t

0x6d96,	// (0x0001fdec) bg_popup_sub_pane_cp23

0x7ef7,	// (0x00020f4d) listscroll_japin_cand_pane

0x7eff,	// (0x00020f55) popup_fep_japan_candidate_window_t1

0x7f0d,	// (0x00020f63) candidate_pane_ParamLimits

0x7f0d,	// (0x00020f63) candidate_pane

0x7f20,	// (0x00020f76) scroll_pane_cp30

0x7f28,	// (0x00020f7e) list_single_popup_jap_candidate_pane_ParamLimits

0x7f28,	// (0x00020f7e) list_single_popup_jap_candidate_pane

0x6d96,	// (0x0001fdec) list_highlight_pane_cp30

0x7f3d,	// (0x00020f93) list_single_popup_jap_candidate_pane_t1

0x987e,	// (0x000228d4) level_1_signal

0x988b,	// (0x000228e1) level_2_signal

0x9898,	// (0x000228ee) level_3_signal

0x98a5,	// (0x000228fb) level_4_signal

0x98b2,	// (0x00022908) level_5_signal

0x98bf,	// (0x00022915) level_6_signal

0x98cc,	// (0x00022922) level_7_signal

0x987e,	// (0x000228d4) level_1_battery

0x988b,	// (0x000228e1) level_2_battery

0x9898,	// (0x000228ee) level_3_battery

0x98a5,	// (0x000228fb) level_4_battery

0x98b2,	// (0x00022908) level_5_battery

0x98bf,	// (0x00022915) level_6_battery

0x98cc,	// (0x00022922) level_7_battery

0x7f64,	// (0x00020fba) list_menu_pane_ParamLimits

0x7f64,	// (0x00020fba) list_menu_pane

0x7f75,	// (0x00020fcb) scroll_pane_cp25_ParamLimits

0x7f75,	// (0x00020fcb) scroll_pane_cp25

0x98f8,	// (0x0002294e) list_double2_graphic_pane_cp2_ParamLimits

0x98f8,	// (0x0002294e) list_double2_graphic_pane_cp2

0x98f8,	// (0x0002294e) list_double2_large_graphic_pane_cp2_ParamLimits

0x98f8,	// (0x0002294e) list_double2_large_graphic_pane_cp2

0x98f8,	// (0x0002294e) list_double2_pane_cp2_ParamLimits

0x98f8,	// (0x0002294e) list_double2_pane_cp2

0x98f8,	// (0x0002294e) list_double_graphic_pane_cp2_ParamLimits

0x98f8,	// (0x0002294e) list_double_graphic_pane_cp2

0x98f8,	// (0x0002294e) list_double_large_graphic_pane_cp2_ParamLimits

0x98f8,	// (0x0002294e) list_double_large_graphic_pane_cp2

0x98f8,	// (0x0002294e) list_double_number_pane_cp2_ParamLimits

0x98f8,	// (0x0002294e) list_double_number_pane_cp2

0x98f8,	// (0x0002294e) list_double_pane_cp2_ParamLimits

0x98f8,	// (0x0002294e) list_double_pane_cp2

0x9908,	// (0x0002295e) list_single_2graphic_pane_cp2_ParamLimits

0x9908,	// (0x0002295e) list_single_2graphic_pane_cp2

0x9908,	// (0x0002295e) list_single_graphic_heading_pane_cp2_ParamLimits

0x9908,	// (0x0002295e) list_single_graphic_heading_pane_cp2

0x9908,	// (0x0002295e) list_single_graphic_pane_cp2_ParamLimits

0x9908,	// (0x0002295e) list_single_graphic_pane_cp2

0x9908,	// (0x0002295e) list_single_heading_pane_cp2_ParamLimits

0x9908,	// (0x0002295e) list_single_heading_pane_cp2

0x991d,	// (0x00022973) list_single_large_graphic_pane_cp2_ParamLimits

0x991d,	// (0x00022973) list_single_large_graphic_pane_cp2

0x9908,	// (0x0002295e) list_single_number_heading_pane_cp2_ParamLimits

0x9908,	// (0x0002295e) list_single_number_heading_pane_cp2

0x9908,	// (0x0002295e) list_single_number_pane_cp2_ParamLimits

0x9908,	// (0x0002295e) list_single_number_pane_cp2

0x9908,	// (0x0002295e) list_single_pane_cp2_ParamLimits

0x9908,	// (0x0002295e) list_single_pane_cp2

0x7f97,	// (0x00020fed) bg_popup_sub_pane_cp22

0x99d2,	// (0x00022a28) popup_side_volume_key_window_g1

0x99f6,	// (0x00022a4c) popup_side_volume_key_window_t1

0x9a12,	// (0x00022a68) volume_small_pane_cp1

0x6de4,	// (0x0001fe3a) bg_popup_sub_pane_cp24_ParamLimits

0x6de4,	// (0x0001fe3a) bg_popup_sub_pane_cp24

0x7fad,	// (0x00021003) fep_china_uni_candidate_pane_ParamLimits

0x7fad,	// (0x00021003) fep_china_uni_candidate_pane

0x7fdf,	// (0x00021035) fep_china_uni_entry_pane

0x7fef,	// (0x00021045) popup_fep_china_uni_window_g1

0x800b,	// (0x00021061) fep_china_uni_entry_pane_g1

0x8013,	// (0x00021069) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x000287b3) fep_china_uni_entry_pane_g

0x801b,	// (0x00021071) fep_entry_item_pane

0x8025,	// (0x0002107b) fep_candidate_item_pane

0x802d,	// (0x00021083) fep_china_uni_candidate_pane_g1

0x8035,	// (0x0002108b) fep_china_uni_candidate_pane_g2

0x803d,	// (0x00021093) fep_china_uni_candidate_pane_g3

0x8045,	// (0x0002109b) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x000287b8) fep_china_uni_candidate_pane_g

0x6d14,	// (0x0001fd6a) fep_entry_item_pane_g1

0x804d,	// (0x000210a3) fep_entry_item_pane_t1_ParamLimits

0x804d,	// (0x000210a3) fep_entry_item_pane_t1

0x8063,	// (0x000210b9) fep_candidate_item_pane_t1_ParamLimits

0x8063,	// (0x000210b9) fep_candidate_item_pane_t1

0x8078,	// (0x000210ce) fep_candidate_item_pane_t2_ParamLimits

0x8078,	// (0x000210ce) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x000287c1) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x000287c1) fep_candidate_item_pane_t

0x6dfa,	// (0x0001fe50) list_highlight_pane_cp31_ParamLimits

0x6dfa,	// (0x0001fe50) list_highlight_pane_cp31

0x808a,	// (0x000210e0) level_1_signal_lsc

0x8093,	// (0x000210e9) level_2_signal_lsc

0x809c,	// (0x000210f2) level_3_signal_lsc

0x80a5,	// (0x000210fb) level_4_signal_lsc

0x80ae,	// (0x00021104) level_5_signal_lsc

0x80b7,	// (0x0002110d) level_6_signal_lsc

0x80c0,	// (0x00021116) level_7_signal_lsc

0x80c0,	// (0x00021116) level_1_battery_lsc

0x80c9,	// (0x0002111f) level_2_battery_lsc

0x80d2,	// (0x00021128) level_3_battery_lsc

0x80db,	// (0x00021131) level_4_battery_lsc

0x80e4,	// (0x0002113a) level_5_battery_lsc

0x80ed,	// (0x00021143) level_6_battery_lsc

0x808a,	// (0x000210e0) level_7_battery_lsc

0x80f6,	// (0x0002114c) scroll_handle_focus_pane_g1

0x80ff,	// (0x00021155) scroll_handle_focus_pane_g2

0x8108,	// (0x0002115e) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x000287c6) scroll_handle_focus_pane_g

0xcfe1,	// (0x00026037) list_single_2graphic_pane_g1_ParamLimits

0xcfe1,	// (0x00026037) list_single_2graphic_pane_g1

0xc9f0,	// (0x00025a46) list_single_2graphic_pane_g2_ParamLimits

0xc9f0,	// (0x00025a46) list_single_2graphic_pane_g2

0xc982,	// (0x000259d8) list_single_2graphic_pane_g3_ParamLimits

0xc982,	// (0x000259d8) list_single_2graphic_pane_g3

0xcfed,	// (0x00026043) list_single_2graphic_pane_g4_ParamLimits

0xcfed,	// (0x00026043) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x000287cd) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x000287cd) list_single_2graphic_pane_g

0xcffe,	// (0x00026054) list_single_2graphic_pane_t1_ParamLimits

0xcffe,	// (0x00026054) list_single_2graphic_pane_t1

0xd02c,	// (0x00026082) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd02c,	// (0x00026082) list_double2_graphic_large_graphic_pane_g1

0xca93,	// (0x00025ae9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xca93,	// (0x00025ae9) list_double2_graphic_large_graphic_pane_g2

0xca5f,	// (0x00025ab5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xca5f,	// (0x00025ab5) list_double2_graphic_large_graphic_pane_g3

0xd03c,	// (0x00026092) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd03c,	// (0x00026092) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x000287d6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x000287d6) list_double2_graphic_large_graphic_pane_g

0xd048,	// (0x0002609e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd048,	// (0x0002609e) list_double2_graphic_large_graphic_pane_t1

0xd05e,	// (0x000260b4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd05e,	// (0x000260b4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x000287df) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x000287df) list_double2_graphic_large_graphic_pane_t

0x81e3,	// (0x00021239) popup_fast_swap_window_ParamLimits

0x81e3,	// (0x00021239) popup_fast_swap_window

0x81ff,	// (0x00021255) popup_side_volume_key_window

0x8219,	// (0x0002126f) stacon_top_pane

0x8223,	// (0x00021279) status_pane_ParamLimits

0x8223,	// (0x00021279) status_pane

0x8219,	// (0x0002126f) status_small_pane

0x6d96,	// (0x0001fdec) control_pane

0x6d96,	// (0x0001fdec) stacon_bottom_pane

0x7341,	// (0x00020397) scroll_pane_cp121

0x7a39,	// (0x00020a8f) set_content_pane

0x9a1a,	// (0x00022a70) bg_active_tab_pane_g1_cp1

0x8111,	// (0x00021167) bg_active_tab_pane_g2_cp1

0x9a23,	// (0x00022a79) bg_active_tab_pane_g3_cp1

0x9a1a,	// (0x00022a70) bg_passive_tab_pane_g1_cp1

0x8111,	// (0x00021167) bg_passive_tab_pane_g2_cp1

0x9a23,	// (0x00022a79) bg_passive_tab_pane_g3_cp1

0x9a2c,	// (0x00022a82) bg_active_tab_pane_g1_cp2

0x8111,	// (0x00021167) bg_active_tab_pane_g2_cp2

0x9a35,	// (0x00022a8b) bg_active_tab_pane_g3_cp2

0x9a2c,	// (0x00022a82) bg_passive_tab_pane_g1_cp2

0x8111,	// (0x00021167) bg_passive_tab_pane_g2_cp2

0x9a35,	// (0x00022a8b) bg_passive_tab_pane_g3_cp2

0x9a3e,	// (0x00022a94) bg_active_tab_pane_g1_cp3

0x8111,	// (0x00021167) bg_active_tab_pane_g2_cp3

0x9a47,	// (0x00022a9d) bg_active_tab_pane_g3_cp3

0x9a3e,	// (0x00022a94) bg_passive_tab_pane_g1_cp3

0x8111,	// (0x00021167) bg_passive_tab_pane_g2_cp3

0x9a47,	// (0x00022a9d) bg_passive_tab_pane_g3_cp3

0x9a50,	// (0x00022aa6) bg_active_tab_pane_g1_cp4

0x8111,	// (0x00021167) bg_active_tab_pane_g2_cp4

0x9a59,	// (0x00022aaf) bg_active_tab_pane_g3_cp4

0x9a50,	// (0x00022aa6) bg_passive_tab_pane_g1_cp4

0x8111,	// (0x00021167) bg_passive_tab_pane_g2_cp4

0x9a59,	// (0x00022aaf) bg_passive_tab_pane_g3_cp4

0x8161,	// (0x000211b7) bg_active_tab_pane_g1_cp5

0x8111,	// (0x00021167) bg_active_tab_pane_g2_cp5

0x8158,	// (0x000211ae) bg_active_tab_pane_g3_cp5

0x8161,	// (0x000211b7) bg_passive_tab_pane_g1_cp5

0x8111,	// (0x00021167) bg_passive_tab_pane_g2_cp5

0x8158,	// (0x000211ae) bg_passive_tab_pane_g3_cp5

0x9b8f,	// (0x00022be5) list_set_graphic_pane_ParamLimits

0x9b8f,	// (0x00022be5) list_set_graphic_pane

0x6d96,	// (0x0001fdec) bg_set_opt_pane_cp4

0x816a,	// (0x000211c0) list_set_graphic_pane_g1_ParamLimits

0x816a,	// (0x000211c0) list_set_graphic_pane_g1

0x8176,	// (0x000211cc) list_set_graphic_pane_g2_ParamLimits

0x8176,	// (0x000211cc) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x000287e4) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x000287e4) list_set_graphic_pane_g

0x0009,

0xfafb,	// (0x00028b51) volume_small_pane_cp_g

0x8198,	// (0x000211ee) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8198,	// (0x000211ee) list_double2_large_graphic_pane_g1_cp2

0x81a4,	// (0x000211fa) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x81a4,	// (0x000211fa) list_double2_large_graphic_pane_g2_cp2

0x81b3,	// (0x00021209) list_double2_large_graphic_pane_g3_cp2

0x81bb,	// (0x00021211) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x81bb,	// (0x00021211) list_double2_large_graphic_pane_t1_cp2

0x81d1,	// (0x00021227) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x81d1,	// (0x00021227) list_double2_large_graphic_pane_t2_cp2

0xc0db,	// (0x00025131) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc0db,	// (0x00025131) list_double_large_graphic_pane_g1_cp2

0xc0ec,	// (0x00025142) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc0ec,	// (0x00025142) list_double_large_graphic_pane_g2_cp2

0x82fe,	// (0x00021354) list_double_large_graphic_pane_g3_cp2

0xc0fb,	// (0x00025151) list_double_large_graphic_pane_g4_cp

0xc103,	// (0x00025159) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xc103,	// (0x00025159) list_double_large_graphic_pane_t1_cp2

0xc11a,	// (0x00025170) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xc11a,	// (0x00025170) list_double_large_graphic_pane_t2_cp2

0x8231,	// (0x00021287) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8231,	// (0x00021287) list_double2_graphic_pane_g1_cp2

0x823d,	// (0x00021293) list_double2_graphic_pane_g2_cp2_ParamLimits

0x823d,	// (0x00021293) list_double2_graphic_pane_g2_cp2

0x824c,	// (0x000212a2) list_double2_graphic_pane_g3_cp2

0x8254,	// (0x000212aa) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8254,	// (0x000212aa) list_double2_graphic_pane_t1_cp2

0x826a,	// (0x000212c0) list_double2_graphic_pane_t2_cp2_ParamLimits

0x826a,	// (0x000212c0) list_double2_graphic_pane_t2_cp2

0x827c,	// (0x000212d2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x827c,	// (0x000212d2) list_single_number_heading_pane_g1_cp2

0x8288,	// (0x000212de) list_single_number_heading_pane_g2_cp2

0x8290,	// (0x000212e6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8290,	// (0x000212e6) list_single_number_heading_pane_t1_cp2

0x82a6,	// (0x000212fc) list_single_number_heading_pane_t2_cp2_ParamLimits

0x82a6,	// (0x000212fc) list_single_number_heading_pane_t2_cp2

0x82b8,	// (0x0002130e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x82b8,	// (0x0002130e) list_single_number_heading_pane_t3_cp2

0x827c,	// (0x000212d2) list_single_heading_pane_g1_cp2_ParamLimits

0x827c,	// (0x000212d2) list_single_heading_pane_g1_cp2

0x8288,	// (0x000212de) list_single_heading_pane_g2_cp2

0x8290,	// (0x000212e6) list_single_heading_pane_t1_cp2_ParamLimits

0x8290,	// (0x000212e6) list_single_heading_pane_t1_cp2

0xbee5,	// (0x00024f3b) list_single_heading_pane_t2_cp2_ParamLimits

0xbee5,	// (0x00024f3b) list_single_heading_pane_t2_cp2

0xbe35,	// (0x00024e8b) list_double_graphic_pane_g1_cp2_ParamLimits

0xbe35,	// (0x00024e8b) list_double_graphic_pane_g1_cp2

0xbe41,	// (0x00024e97) list_double_graphic_pane_g2_cp2_ParamLimits

0xbe41,	// (0x00024e97) list_double_graphic_pane_g2_cp2

0xbe50,	// (0x00024ea6) list_double_graphic_pane_g3_cp2

0xbe58,	// (0x00024eae) list_double_graphic_pane_t1_cp2_ParamLimits

0xbe58,	// (0x00024eae) list_double_graphic_pane_t1_cp2

0xbe6e,	// (0x00024ec4) list_double_graphic_pane_t2_cp2_ParamLimits

0xbe6e,	// (0x00024ec4) list_double_graphic_pane_t2_cp2

0x82f2,	// (0x00021348) list_double_number_pane_g1_cp2_ParamLimits

0x82f2,	// (0x00021348) list_double_number_pane_g1_cp2

0x82fe,	// (0x00021354) list_double_number_pane_g2_cp2

0xbdfb,	// (0x00024e51) list_double_number_pane_t1_cp2_ParamLimits

0xbdfb,	// (0x00024e51) list_double_number_pane_t1_cp2

0xbe0d,	// (0x00024e63) list_double_number_pane_t2_cp2_ParamLimits

0xbe0d,	// (0x00024e63) list_double_number_pane_t2_cp2

0xbe23,	// (0x00024e79) list_double_number_pane_t3_cp2_ParamLimits

0xbe23,	// (0x00024e79) list_double_number_pane_t3_cp2

0xbd73,	// (0x00024dc9) list_single_graphic_pane_g1_cp2_ParamLimits

0xbd73,	// (0x00024dc9) list_single_graphic_pane_g1_cp2

0x827c,	// (0x000212d2) list_single_graphic_pane_g2_cp2_ParamLimits

0x827c,	// (0x000212d2) list_single_graphic_pane_g2_cp2

0x8288,	// (0x000212de) list_single_graphic_pane_g3_cp2

0xbd4b,	// (0x00024da1) list_single_graphic_pane_t1_cp2_ParamLimits

0xbd4b,	// (0x00024da1) list_single_graphic_pane_t1_cp2

0x827c,	// (0x000212d2) list_single_number_pane_g1_cp2_ParamLimits

0x827c,	// (0x000212d2) list_single_number_pane_g1_cp2

0x8288,	// (0x000212de) list_single_number_pane_g2_cp2

0xbd4b,	// (0x00024da1) list_single_number_pane_t1_cp2_ParamLimits

0xbd4b,	// (0x00024da1) list_single_number_pane_t1_cp2

0xbd61,	// (0x00024db7) list_single_number_pane_t2_cp2_ParamLimits

0xbd61,	// (0x00024db7) list_single_number_pane_t2_cp2

0x81a4,	// (0x000211fa) list_double2_pane_g1_cp2_ParamLimits

0x81a4,	// (0x000211fa) list_double2_pane_g1_cp2

0x81b3,	// (0x00021209) list_double2_pane_g2_cp2

0x82ca,	// (0x00021320) list_double2_pane_t1_cp2_ParamLimits

0x82ca,	// (0x00021320) list_double2_pane_t1_cp2

0x82e0,	// (0x00021336) list_double2_pane_t2_cp2_ParamLimits

0x82e0,	// (0x00021336) list_double2_pane_t2_cp2

0x82f2,	// (0x00021348) list_double_pane_g1_cp2_ParamLimits

0x82f2,	// (0x00021348) list_double_pane_g1_cp2

0x82fe,	// (0x00021354) list_double_pane_g2_cp2

0x8306,	// (0x0002135c) list_double_pane_t1_cp2_ParamLimits

0x8306,	// (0x0002135c) list_double_pane_t1_cp2

0x831c,	// (0x00021372) list_double_pane_t2_cp2_ParamLimits

0x831c,	// (0x00021372) list_double_pane_t2_cp2

0x8344,	// (0x0002139a) list_single_pane_cp2_g3

0x827c,	// (0x000212d2) list_single_pane_g1_cp2_ParamLimits

0x827c,	// (0x000212d2) list_single_pane_g1_cp2

0x8288,	// (0x000212de) list_single_pane_g2_cp2

0x8354,	// (0x000213aa) list_single_pane_t1_cp2_ParamLimits

0x8354,	// (0x000213aa) list_single_pane_t1_cp2

0x836c,	// (0x000213c2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x836c,	// (0x000213c2) list_single_large_graphic_pane_g1_cp2

0x8378,	// (0x000213ce) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8378,	// (0x000213ce) list_single_large_graphic_pane_g2_cp2

0x8384,	// (0x000213da) list_single_large_graphic_pane_g3_cp2

0x838c,	// (0x000213e2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x838c,	// (0x000213e2) list_single_large_graphic_pane_g4_cp1

0x83a6,	// (0x000213fc) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x83a6,	// (0x000213fc) list_single_large_graphic_pane_t1_cp2

0xbd2d,	// (0x00024d83) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xbd2d,	// (0x00024d83) list_single_graphic_heading_pane_g1_cp2

0xbcfc,	// (0x00024d52) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xbcfc,	// (0x00024d52) list_single_graphic_heading_pane_g4_cp2

0x8288,	// (0x000212de) list_single_graphic_heading_pane_g5_cp2

0x8290,	// (0x000212e6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x8290,	// (0x000212e6) list_single_graphic_heading_pane_t1_cp2

0xbd39,	// (0x00024d8f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xbd39,	// (0x00024d8f) list_single_graphic_heading_pane_t2_cp2

0xbcf0,	// (0x00024d46) list_single_2graphic_pane_g1_cp2_ParamLimits

0xbcf0,	// (0x00024d46) list_single_2graphic_pane_g1_cp2

0xbcfc,	// (0x00024d52) list_single_2graphic_pane_g2_cp2_ParamLimits

0xbcfc,	// (0x00024d52) list_single_2graphic_pane_g2_cp2

0x8288,	// (0x000212de) list_single_2graphic_pane_g3_cp2

0xbd0b,	// (0x00024d61) list_single_2graphic_pane_g4_cp2_ParamLimits

0xbd0b,	// (0x00024d61) list_single_2graphic_pane_g4_cp2

0xbd17,	// (0x00024d6d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xbd17,	// (0x00024d6d) list_single_2graphic_pane_t1_cp2

0x6d14,	// (0x0001fd6a) list_highlight_pane_g10_cp1

0xb902,	// (0x00024958) list_highlight_pane_g1_cp1

0xb90a,	// (0x00024960) list_highlight_pane_g2_cp1

0xb912,	// (0x00024968) list_highlight_pane_g3_cp1

0xb91a,	// (0x00024970) list_highlight_pane_g4_cp1

0xb922,	// (0x00024978) list_highlight_pane_g5_cp1

0xb92a,	// (0x00024980) list_highlight_pane_g6_cp1

0xb932,	// (0x00024988) list_highlight_pane_g7_cp1

0xb93a,	// (0x00024990) list_highlight_pane_g8_cp1

0xb942,	// (0x00024998) list_highlight_pane_g9_cp1

0xe21b,	// (0x00027271) form_field_slider_pane_t3

0xe229,	// (0x0002727f) form_field_slider_pane_t4

0xb84c,	// (0x000248a2) slider_form_pane_ParamLimits

0xb84c,	// (0x000248a2) slider_form_pane

0x6d96,	// (0x0001fdec) control_abbreviations

0x6d96,	// (0x0001fdec) control_conventions

0x6d96,	// (0x0001fdec) control_definitions

0x6d96,	// (0x0001fdec) format_table_attribute

0xbf2f,	// (0x00024f85) bg_popup_preview_window_pane_g9

0x6d96,	// (0x0001fdec) format_table_data2

0x6d96,	// (0x0001fdec) format_table_data3

0x6d96,	// (0x0001fdec) format_table_data_example

0x0008,

0x6d96,	// (0x0001fdec) intro_purpose

0xf923,	// (0x00028979) bg_popup_preview_window_pane_g

0x6d96,	// (0x0001fdec) texts_category

0x6d96,	// (0x0001fdec) texts_graphics

0x83bc,	// (0x00021412) text_digital

0x83cb,	// (0x00021421) text_primary

0x83da,	// (0x00021430) text_primary_small

0x83e9,	// (0x0002143f) text_secondary

0x83f8,	// (0x0002144e) text_title

0xc3bc,	// (0x00025412) bg_passive_tab_pane_g1_cp3_srt

0x8111,	// (0x00021167) bg_passive_tab_pane_g2_cp3_srt

0xc3c5,	// (0x0002541b) bg_passive_tab_pane_g3_cp3_srt

0x6dfa,	// (0x0001fe50) bg_active_tab_pane_cp3_srt_ParamLimits

0x6dfa,	// (0x0001fe50) bg_active_tab_pane_cp3_srt

0xc3ce,	// (0x00025424) tabs_4_active_pane_srt_g1

0x93ac,	// (0x00022402) tabs_4_active_pane_srt_t1_ParamLimits

0x93ac,	// (0x00022402) tabs_4_active_pane_srt_t1

0xc3bc,	// (0x00025412) bg_active_tab_pane_g1_cp3_copy1

0x8111,	// (0x00021167) bg_active_tab_pane_g2_cp3_copy1

0xc3c5,	// (0x0002541b) bg_active_tab_pane_g3_cp3_copy1

0x6dfa,	// (0x0001fe50) tabs_2_long_active_pane_srt_ParamLimits

0x6dfa,	// (0x0001fe50) tabs_2_long_active_pane_srt

0x6dfa,	// (0x0001fe50) tabs_2_long_passive_pane_srt_ParamLimits

0x6dfa,	// (0x0001fe50) tabs_2_long_passive_pane_srt

0x9685,	// (0x000226db) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9685,	// (0x000226db) bg_passive_tab_pane_cp4_srt

0xc2f2,	// (0x00025348) bg_passive_tab_pane_g1_cp4_srt

0x8111,	// (0x00021167) bg_passive_tab_pane_g2_cp4_srt

0xc2fb,	// (0x00025351) bg_passive_tab_pane_g3_cp4_srt

0x7fc9,	// (0x0002101f) bg_active_tab_pane_cp4_srt_ParamLimits

0x7fc9,	// (0x0002101f) bg_active_tab_pane_cp4_srt

0x9672,	// (0x000226c8) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9672,	// (0x000226c8) tabs_2_long_active_pane_srt_t1

0xc2f2,	// (0x00025348) bg_active_tab_pane_g1_cp4_srt

0x8111,	// (0x00021167) bg_active_tab_pane_g2_cp4_srt

0xc2fb,	// (0x00025351) bg_active_tab_pane_g3_cp4_srt

0x6de4,	// (0x0001fe3a) tabs_3_long_active_pane_srt_ParamLimits

0x6de4,	// (0x0001fe3a) tabs_3_long_active_pane_srt

0x6de4,	// (0x0001fe3a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6de4,	// (0x0001fe3a) tabs_3_long_passive_pane_cp_srt

0x6de4,	// (0x0001fe3a) tabs_3_long_passive_pane_srt_ParamLimits

0x6de4,	// (0x0001fe3a) tabs_3_long_passive_pane_srt

0x9685,	// (0x000226db) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9685,	// (0x000226db) bg_passive_tab_pane_cp5_srt

0x8161,	// (0x000211b7) bg_passive_tab_pane_g1_cp5_srt

0x8111,	// (0x00021167) bg_passive_tab_pane_g2_cp5_srt

0x8158,	// (0x000211ae) bg_passive_tab_pane_g3_cp5_srt

0x7fc9,	// (0x0002101f) bg_active_tab_pane_cp5_srt_ParamLimits

0x7fc9,	// (0x0002101f) bg_active_tab_pane_cp5_srt

0x9691,	// (0x000226e7) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9691,	// (0x000226e7) tabs_3_long_active_pane_srt_t1

0x8161,	// (0x000211b7) bg_active_tab_pane_g1_cp5_srt

0x8111,	// (0x00021167) bg_active_tab_pane_g2_cp5_srt

0x8158,	// (0x000211ae) bg_active_tab_pane_g3_cp5_srt

0xc2e4,	// (0x0002533a) navi_text_pane_srt_t1

0xc2dc,	// (0x00025332) navi_icon_pane_srt_g1

0x8510,	// (0x00021566) midp_editing_number_pane_srt

0x8407,	// (0x0002145d) midp_ticker_pane_srt

0x8518,	// (0x0002156e) midp_ticker_pane_srt_g1

0x8520,	// (0x00021576) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x00028803) midp_ticker_pane_srt_g

0x8528,	// (0x0002157e) midp_ticker_pane_srt_t1

0xc2cd,	// (0x00025323) midp_editing_number_pane_t1_copy1

0x9ba5,	// (0x00022bfb) listscroll_midp_pane

0x9ba5,	// (0x00022bfb) midp_form_pane

0x840f,	// (0x00021465) midp_info_popup_window_ParamLimits

0x840f,	// (0x00021465) midp_info_popup_window

0x7b02,	// (0x00020b58) bg_popup_sub_pane_cp50_ParamLimits

0x7b02,	// (0x00020b58) bg_popup_sub_pane_cp50

0xb5a6,	// (0x000245fc) listscroll_midp_info_pane_ParamLimits

0xb5a6,	// (0x000245fc) listscroll_midp_info_pane

0xb58e,	// (0x000245e4) listscroll_form_midp_pane_ParamLimits

0xb58e,	// (0x000245e4) listscroll_form_midp_pane

0xb59a,	// (0x000245f0) scroll_bar_cp050

0xe203,	// (0x00027259) list_midp_pane

0xd69c,	// (0x000266f2) signal_pane_g2_cp

0xb4c0,	// (0x00024516) listscroll_midp_info_pane_t1_ParamLimits

0xb4c0,	// (0x00024516) listscroll_midp_info_pane_t1

0xb4d8,	// (0x0002452e) listscroll_midp_info_pane_t2_ParamLimits

0xb4d8,	// (0x0002452e) listscroll_midp_info_pane_t2

0xb516,	// (0x0002456c) listscroll_midp_info_pane_t3_ParamLimits

0xb516,	// (0x0002456c) listscroll_midp_info_pane_t3

0xb550,	// (0x000245a6) listscroll_midp_info_pane_t4_ParamLimits

0xb550,	// (0x000245a6) listscroll_midp_info_pane_t4

0x0003,

0xf85e,	// (0x000288b4) listscroll_midp_info_pane_t_ParamLimits

0xf85e,	// (0x000288b4) listscroll_midp_info_pane_t

0x7ba5,	// (0x00020bfb) scroll_pane_cp21

0xb464,	// (0x000244ba) form_midp_field_choice_group_pane

0xb46d,	// (0x000244c3) form_midp_field_text_pane

0xb4a6,	// (0x000244fc) form_midp_field_time_pane

0xb4ae,	// (0x00024504) form_midp_gauge_slider_pane

0xb4b7,	// (0x0002450d) form_midp_gauge_wait_pane

0x6d96,	// (0x0001fdec) form_midp_image_pane

0xd102,	// (0x00026158) list_single_midp_pane_ParamLimits

0xd102,	// (0x00026158) list_single_midp_pane

0xe1e0,	// (0x00027236) form_midp_field_text_pane_t1

0xb313,	// (0x00024369) input_focus_pane_cp050

0xb453,	// (0x000244a9) list_midp_form_text_pane

0xb422,	// (0x00024478) form_midp_field_choice_group_pane_t1

0xb430,	// (0x00024486) input_focus_pane_cp051

0xb444,	// (0x0002449a) list_midp_choice_pane

0x6d96,	// (0x0001fdec) status_idle_pane

0xb406,	// (0x0002445c) form_midp_field_time_pane_t1

0x6d14,	// (0x0001fd6a) wait_anim_pane_g2_copy1

0xb414,	// (0x0002446a) form_midp_field_time_pane_t2

0x0001,

0x847a,	// (0x000214d0) aid_navinavi_width_2_pane

0xf859,	// (0x000288af) form_midp_field_time_pane_t

0x6d96,	// (0x0001fdec) input_focus_pane_cp052

0x6d96,	// (0x0001fdec) bg_input_focus_pane_cp040

0xb3e2,	// (0x00024438) form_midp_gauge_slider_pane_t1

0xb3f0,	// (0x00024446) form_midp_gauge_slider_pane_t2

0xe1c4,	// (0x0002721a) form_midp_gauge_slider_pane_t3

0xe1d2,	// (0x00027228) form_midp_gauge_slider_pane_t4

0x0003,

0xf850,	// (0x000288a6) form_midp_gauge_slider_pane_t

0xb3fe,	// (0x00024454) form_midp_slider_pane

0x6dfa,	// (0x0001fe50) bg_input_focus_pane_cp041_ParamLimits

0x6dfa,	// (0x0001fe50) bg_input_focus_pane_cp041

0xb3b2,	// (0x00024408) form_midp_gauge_wait_pane_t1_ParamLimits

0xb3b2,	// (0x00024408) form_midp_gauge_wait_pane_t1

0xb3c4,	// (0x0002441a) form_midp_gauge_wait_pane_t2_ParamLimits

0xb3c4,	// (0x0002441a) form_midp_gauge_wait_pane_t2

0x0001,

0xf84b,	// (0x000288a1) form_midp_gauge_wait_pane_t_ParamLimits

0xf84b,	// (0x000288a1) form_midp_gauge_wait_pane_t

0xb3d6,	// (0x0002442c) form_midp_wait_pane_ParamLimits

0xb3d6,	// (0x0002442c) form_midp_wait_pane

0xb37c,	// (0x000243d2) form_midp_image_pane_g1

0xb385,	// (0x000243db) form_midp_image_pane_t1

0xb394,	// (0x000243ea) form_midp_image_pane_t2

0xb3a3,	// (0x000243f9) form_midp_image_pane_t3

0x0002,

0xf844,	// (0x0002889a) form_midp_image_pane_t

0xb373,	// (0x000243c9) list_single_midp_pane_g1

0xd0f3,	// (0x00026149) list_single_midp_pane_t1

0xe1ae,	// (0x00027204) list_midp_form_item_pane_ParamLimits

0xe1ae,	// (0x00027204) list_midp_form_item_pane

0x8422,	// (0x00021478) list_midp_form_item_pane_t1

0x8431,	// (0x00021487) midp_ticker_pane_g1

0x843d,	// (0x00021493) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x000287e9) midp_ticker_pane_g

0x8449,	// (0x0002149f) midp_ticker_pane_t1

0xc2cd,	// (0x00025323) midp_editing_number_pane_t1

0xc355,	// (0x000253ab) midp_editing_number_pane

0xc361,	// (0x000253b7) midp_ticker_pane

0xc2bd,	// (0x00025313) ai_message_heading_pane

0x6d96,	// (0x0001fdec) bg_popup_window_pane_cp14

0xc2c5,	// (0x0002531b) listscroll_ai_message_pane

0xc247,	// (0x0002529d) ai_message_heading_pane_g1_ParamLimits

0xc247,	// (0x0002529d) ai_message_heading_pane_g1

0xc253,	// (0x000252a9) ai_message_heading_pane_g2_ParamLimits

0xc253,	// (0x000252a9) ai_message_heading_pane_g2

0xc25f,	// (0x000252b5) ai_message_heading_pane_g3_ParamLimits

0xc25f,	// (0x000252b5) ai_message_heading_pane_g3

0xc26b,	// (0x000252c1) ai_message_heading_pane_g4_ParamLimits

0xc26b,	// (0x000252c1) ai_message_heading_pane_g4

0x0003,

0xf985,	// (0x000289db) ai_message_heading_pane_g_ParamLimits

0xf985,	// (0x000289db) ai_message_heading_pane_g

0xc277,	// (0x000252cd) ai_message_heading_pane_t1_ParamLimits

0xc277,	// (0x000252cd) ai_message_heading_pane_t1

0xc291,	// (0x000252e7) ai_message_heading_pane_t2_ParamLimits

0xc291,	// (0x000252e7) ai_message_heading_pane_t2

0x0001,

0xf98e,	// (0x000289e4) ai_message_heading_pane_t_ParamLimits

0xf98e,	// (0x000289e4) ai_message_heading_pane_t

0xc2a3,	// (0x000252f9) bg_popup_heading_pane_cp1_ParamLimits

0xc2a3,	// (0x000252f9) bg_popup_heading_pane_cp1

0xc235,	// (0x0002528b) list_ai_message_pane_ParamLimits

0xc235,	// (0x0002528b) list_ai_message_pane

0x7ba5,	// (0x00020bfb) scroll_pane_cp10

0xc1d1,	// (0x00025227) list_ai_message_pane_g1

0xc1d9,	// (0x0002522f) list_ai_message_pane_g2

0x0001,

0xf962,	// (0x000289b8) list_ai_message_pane_g

0xc1e1,	// (0x00025237) list_ai_message_pane_t1_ParamLimits

0xc1e1,	// (0x00025237) list_ai_message_pane_t1

0xc1f6,	// (0x0002524c) list_ai_message_pane_t2_ParamLimits

0xc1f6,	// (0x0002524c) list_ai_message_pane_t2

0xc20b,	// (0x00025261) list_ai_message_pane_t3_ParamLimits

0xc20b,	// (0x00025261) list_ai_message_pane_t3

0xc220,	// (0x00025276) list_ai_message_pane_t4_ParamLimits

0xc220,	// (0x00025276) list_ai_message_pane_t4

0x0003,

0xf967,	// (0x000289bd) list_ai_message_pane_t_ParamLimits

0xf967,	// (0x000289bd) list_ai_message_pane_t

0xc1bf,	// (0x00025215) cell_ai_soft_ind_pane_ParamLimits

0xc1bf,	// (0x00025215) cell_ai_soft_ind_pane

0x845b,	// (0x000214b1) cell_ai_soft_ind_pane_g1_ParamLimits

0x845b,	// (0x000214b1) cell_ai_soft_ind_pane_g1

0x6d96,	// (0x0001fdec) grid_highlight_cp1

0x8468,	// (0x000214be) text_secondary_cp56_ParamLimits

0x8468,	// (0x000214be) text_secondary_cp56

0xc194,	// (0x000251ea) example_general_pane_ParamLimits

0xc194,	// (0x000251ea) example_general_pane

0xc1a0,	// (0x000251f6) example_parent_pane_g1_ParamLimits

0xc1a0,	// (0x000251f6) example_parent_pane_g1

0xc1ac,	// (0x00025202) example_parent_pane_t1_ParamLimits

0xc1ac,	// (0x00025202) example_parent_pane_t1

0xdb30,	// (0x00026b86) popup_preview_text_window_ParamLimits

0xdb30,	// (0x00026b86) popup_preview_text_window

0x834c,	// (0x000213a2) list_single_pane_cp2_g4

0x7001,	// (0x00020057) bg_popup_preview_window_pane_ParamLimits

0x7001,	// (0x00020057) bg_popup_preview_window_pane

0xbf37,	// (0x00024f8d) popup_preview_text_window_t1_ParamLimits

0xbf37,	// (0x00024f8d) popup_preview_text_window_t1

0xbf55,	// (0x00024fab) popup_preview_text_window_t2_ParamLimits

0xbf55,	// (0x00024fab) popup_preview_text_window_t2

0xbf9e,	// (0x00024ff4) popup_preview_text_window_t3_ParamLimits

0xbf9e,	// (0x00024ff4) popup_preview_text_window_t3

0xbfe3,	// (0x00025039) popup_preview_text_window_t4_ParamLimits

0xbfe3,	// (0x00025039) popup_preview_text_window_t4

0x0004,

0xf936,	// (0x0002898c) popup_preview_text_window_t_ParamLimits

0xf936,	// (0x0002898c) popup_preview_text_window_t

0xc061,	// (0x000250b7) scroll_pane_cp11

0xb225,	// (0x0002427b) bg_popup_preview_window_pane_g1

0xbef7,	// (0x00024f4d) bg_popup_preview_window_pane_g2

0xbeff,	// (0x00024f55) bg_popup_preview_window_pane_g3

0xbf07,	// (0x00024f5d) bg_popup_preview_window_pane_g4

0xbf0f,	// (0x00024f65) bg_popup_preview_window_pane_g5

0xbf17,	// (0x00024f6d) bg_popup_preview_window_pane_g6

0xbf1f,	// (0x00024f75) bg_popup_preview_window_pane_g7

0xbf27,	// (0x00024f7d) bg_popup_preview_window_pane_g8

0x9016,	// (0x0002206c) aid_popup_width_pane

0xdb12,	// (0x00026b68) popup_midp_note_alarm_window_ParamLimits

0xdb12,	// (0x00026b68) popup_midp_note_alarm_window

0x7a42,	// (0x00020a98) data_form_pane_ParamLimits

0xce7a,	// (0x00025ed0) form_field_data_pane_g1

0x9634,	// (0x0002268a) form_field_data_pane_t1_ParamLimits

0x7a4e,	// (0x00020aa4) input_focus_pane_ParamLimits

0x7a5c,	// (0x00020ab2) data_form_wide_pane_ParamLimits

0xce82,	// (0x00025ed8) form_field_data_wide_pane_g1

0xce8e,	// (0x00025ee4) form_field_data_wide_pane_t1_ParamLimits

0x71c0,	// (0x00020216) input_focus_pane_cp6_ParamLimits

0x964c,	// (0x000226a2) input_popup_find_pane_g1_ParamLimits

0x964c,	// (0x000226a2) input_popup_find_pane_g1

0x975d,	// (0x000227b3) aid_navi_side_left_pane

0x976d,	// (0x000227c3) aid_navi_side_right_pane

0xb9d3,	// (0x00024a29) bg_popup_window_pane_cp30_ParamLimits

0xb9d3,	// (0x00024a29) bg_popup_window_pane_cp30

0xba4d,	// (0x00024aa3) popup_midp_note_alarm_window_g1_ParamLimits

0xba4d,	// (0x00024aa3) popup_midp_note_alarm_window_g1

0xba7d,	// (0x00024ad3) popup_midp_note_alarm_window_t1_ParamLimits

0xba7d,	// (0x00024ad3) popup_midp_note_alarm_window_t1

0xbb1e,	// (0x00024b74) popup_midp_note_alarm_window_t2_ParamLimits

0xbb1e,	// (0x00024b74) popup_midp_note_alarm_window_t2

0xbbcc,	// (0x00024c22) popup_midp_note_alarm_window_t3_ParamLimits

0xbbcc,	// (0x00024c22) popup_midp_note_alarm_window_t3

0xbbf4,	// (0x00024c4a) popup_midp_note_alarm_window_t4_ParamLimits

0xbbf4,	// (0x00024c4a) popup_midp_note_alarm_window_t4

0xbc14,	// (0x00024c6a) popup_midp_note_alarm_window_t5_ParamLimits

0xbc14,	// (0x00024c6a) popup_midp_note_alarm_window_t5

0x000a,

0xf8d3,	// (0x00028929) popup_midp_note_alarm_window_t_ParamLimits

0xf8d3,	// (0x00028929) popup_midp_note_alarm_window_t

0xbcc0,	// (0x00024d16) wait_bar_pane_cp1_ParamLimits

0xbcc0,	// (0x00024d16) wait_bar_pane_cp1

0x6d96,	// (0x0001fdec) wait_anim_pane_copy1

0x6d96,	// (0x0001fdec) wait_border_pane_copy1

0xb719,	// (0x0002476f) wait_border_pane_g1_copy1

0xcea8,	// (0x00025efe) form_field_popup_pane_g1

0xceb0,	// (0x00025f06) form_field_popup_pane_t1_ParamLimits

0x7a4e,	// (0x00020aa4) input_focus_pane_cp7_ParamLimits

0x7a42,	// (0x00020a98) list_form_pane_ParamLimits

0xcec8,	// (0x00025f1e) form_field_popup_wide_pane_g1

0xced0,	// (0x00025f26) form_field_popup_wide_pane_t1_ParamLimits

0x7a4e,	// (0x00020aa4) input_focus_pane_cp8_ParamLimits

0x7a7c,	// (0x00020ad2) list_form_wide_pane_ParamLimits

0xc3f5,	// (0x0002544b) aid_size_cell_graphic_pane

0xcf55,	// (0x00025fab) data_form_pane_t1_ParamLimits

0xd12d,	// (0x00026183) data_form_wide_pane_t1_ParamLimits

0xdd36,	// (0x00026d8c) bg_status_flat_pane

0x932a,	// (0x00022380) title_pane_t1_ParamLimits

0x6dac,	// (0x0001fe02) title_pane_t2_ParamLimits

0x6dd2,	// (0x0001fe28) title_pane_t3_ParamLimits

0xf59b,	// (0x000285f1) title_pane_t_ParamLimits

0x987e,	// (0x000228d4) level_1_signal_ParamLimits

0x988b,	// (0x000228e1) level_2_signal_ParamLimits

0x9898,	// (0x000228ee) level_3_signal_ParamLimits

0x98a5,	// (0x000228fb) level_4_signal_ParamLimits

0x98b2,	// (0x00022908) level_5_signal_ParamLimits

0x98bf,	// (0x00022915) level_6_signal_ParamLimits

0x98cc,	// (0x00022922) level_7_signal_ParamLimits

0x987e,	// (0x000228d4) level_1_battery_ParamLimits

0x988b,	// (0x000228e1) level_2_battery_ParamLimits

0x9898,	// (0x000228ee) level_3_battery_ParamLimits

0x98a5,	// (0x000228fb) level_4_battery_ParamLimits

0x98b2,	// (0x00022908) level_5_battery_ParamLimits

0x98bf,	// (0x00022915) level_6_battery_ParamLimits

0x98cc,	// (0x00022922) level_7_battery_ParamLimits

0xb902,	// (0x00024958) bg_status_flat_pane_g1

0xb90a,	// (0x00024960) bg_status_flat_pane_g2

0xb912,	// (0x00024968) bg_status_flat_pane_g3

0xb91a,	// (0x00024970) bg_status_flat_pane_g4

0xb922,	// (0x00024978) bg_status_flat_pane_g5

0xb92a,	// (0x00024980) bg_status_flat_pane_g6

0xb932,	// (0x00024988) bg_status_flat_pane_g7

0x9392,	// (0x000223e8) tabs_3_active_pane_t1_ParamLimits

0x9392,	// (0x000223e8) tabs_3_passive_pane_t1_ParamLimits

0x93ac,	// (0x00022402) tabs_4_active_pane_t1_ParamLimits

0x93ac,	// (0x00022402) tabs_4_1_passive_pane_t1_ParamLimits

0x9660,	// (0x000226b6) tabs_2_active_pane_t1_ParamLimits

0x9660,	// (0x000226b6) tabs_2_passive_pane_t1_ParamLimits

0x7fc9,	// (0x0002101f) bg_active_tab_pane_cp4_ParamLimits

0x9672,	// (0x000226c8) tabs_2_long_active_pane_t1_ParamLimits

0x9685,	// (0x000226db) bg_passive_tab_pane_cp4_ParamLimits

0x9ef1,	// (0x00022f47) list_single_midp_graphic_pane_t1_ParamLimits

0x7fc9,	// (0x0002101f) bg_active_tab_pane_cp5_ParamLimits

0x9691,	// (0x000226e7) tabs_3_long_active_pane_t1_ParamLimits

0x9685,	// (0x000226db) bg_passive_tab_pane_cp5_ParamLimits

0x9ef1,	// (0x00022f47) list_single_midp_graphic_pane_t1

0xdd36,	// (0x00026d8c) bg_status_flat_pane_ParamLimits

0xb104,	// (0x0002415a) indicator_pane_cp2_ParamLimits

0xb104,	// (0x0002415a) indicator_pane_cp2

0xde79,	// (0x00026ecf) navi_pane_srt_ParamLimits

0xde79,	// (0x00026ecf) navi_pane_srt

0xb12c,	// (0x00024182) popup_clock_digital_analogue_window_cp1

0x6e6a,	// (0x0001fec0) indicator_pane_t1

0x8407,	// (0x0002145d) copy_highlight_pane

0x8407,	// (0x0002145d) cursor_graphics_pane

0x8407,	// (0x0002145d) graphic_within_text_pane

0x8407,	// (0x0002145d) link_highlight_pane

0xc024,	// (0x0002507a) popup_preview_text_window_t5_ParamLimits

0xc024,	// (0x0002507a) popup_preview_text_window_t5

0x8482,	// (0x000214d8) cursor_digital_pane

0x8482,	// (0x000214d8) cursor_primary_pane

0x8493,	// (0x000214e9) cursor_primary_small_pane

0x849b,	// (0x000214f1) cursor_secondary_pane

0x84a3,	// (0x000214f9) cursor_title_pane

0x8482,	// (0x000214d8) link_highlight_digital_pane

0x848a,	// (0x000214e0) link_highlight_primary_pane

0x8493,	// (0x000214e9) link_highlight_primary_small_pane

0x849b,	// (0x000214f1) link_highlight_secondary_pane

0x84a3,	// (0x000214f9) link_highlight_title_pane

0x8482,	// (0x000214d8) copy_highlight_digital_pane

0x8482,	// (0x000214d8) copy_highlight_primary_pane

0x8493,	// (0x000214e9) copy_highlight_primary_small_pane

0x849b,	// (0x000214f1) copy_highlight_secondary_pane

0x84a3,	// (0x000214f9) copy_highlight_title_pane

0x849b,	// (0x000214f1) graphic_text_digital_pane

0xb982,	// (0x000249d8) graphic_text_primary_pane

0xb98b,	// (0x000249e1) graphic_text_primary_small_pane

0x8493,	// (0x000214e9) graphic_text_secondary_pane

0x8482,	// (0x000214d8) graphic_text_title_pane

0x9c4a,	// (0x00022ca0) cursor_primary_pane_g1

0xb974,	// (0x000249ca) cursor_text_primary_t1

0xe247,	// (0x0002729d) cursor_primary_small_pane_g1

0xb966,	// (0x000249bc) cursor_text_primary_small_t1

0xe23f,	// (0x00027295) cursor_primary_small_pane_g1_copy1

0xb958,	// (0x000249ae) cursor_text_primary_small_t1_copy1

0xb94a,	// (0x000249a0) cursor_text_title_t1

0xe237,	// (0x0002728d) cursor_title_pane_g1

0x9c4a,	// (0x00022ca0) cursor_digital_pane_g1

0x84ab,	// (0x00021501) cursor_text_digital_t1

0x84b9,	// (0x0002150f) link_highlight_primary_pane_g1

0xb8f3,	// (0x00024949) link_highlight_primary_pane_t1

0x84b9,	// (0x0002150f) link_highlight_primary_small_pane_g1

0x84c1,	// (0x00021517) link_highlight_primary_small_pane_t1

0x84d0,	// (0x00021526) link_highlight_secondary_pane_g1

0x84d8,	// (0x0002152e) link_highlight_secondary_pane_t1

0xb858,	// (0x000248ae) link_highlight_title_pane_g1

0xb86f,	// (0x000248c5) link_highlight_title_pane_t1

0xb858,	// (0x000248ae) link_highlight_digital_pane_g1

0xb860,	// (0x000248b6) link_highlight_digital_pane_t1

0xb734,	// (0x0002478a) copy_highlight_primary_pane_g1

0xb75a,	// (0x000247b0) copy_highlight_primary_pane_t1

0xb734,	// (0x0002478a) copy_highlight_primary_small_pane_g1

0xb74b,	// (0x000247a1) copy_highlight_primary_small_pane_t1

0x84e7,	// (0x0002153d) copy_highlight_secondary_pane_g1

0x84ef,	// (0x00021545) copy_highlight_secondary_pane_t1

0xb734,	// (0x0002478a) copy_highlight_title_pane_g1

0xb73c,	// (0x00024792) copy_highlight_title_pane_t1

0xb734,	// (0x0002478a) copy_highlight_digital_pane_g1

0xc516,	// (0x0002556c) copy_highlight_digital_pane_t1

0xc46a,	// (0x000254c0) graphic_text_primary_pane_g1

0xc4fa,	// (0x00025550) graphic_text_primary_pane_t1

0xc508,	// (0x0002555e) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x00028a53) graphic_text_primary_pane_t

0xc4d6,	// (0x0002552c) graphic_text_primary_small_pane_g1

0xc4de,	// (0x00025534) graphic_text_primary_small_pane_t1

0xc4ec,	// (0x00025542) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x00028a4e) graphic_text_primary_small_pane_t

0xc4b2,	// (0x00025508) graphic_text_secondary_pane_g1

0xc4ba,	// (0x00025510) graphic_text_secondary_pane_t1

0xc4c8,	// (0x0002551e) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x00028a49) graphic_text_secondary_pane_t

0xc48e,	// (0x000254e4) graphic_text_title_pane_g1

0xc496,	// (0x000254ec) graphic_text_title_pane_t1

0xc4a4,	// (0x000254fa) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x00028a44) graphic_text_title_pane_t

0xc46a,	// (0x000254c0) graphic_text_digital_pane_g1

0xc472,	// (0x000254c8) graphic_text_digital_pane_t1

0xc480,	// (0x000254d6) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x00028a3f) graphic_text_digital_pane_t

0x6dfa,	// (0x0001fe50) navi_icon_pane_srt_ParamLimits

0x6dfa,	// (0x0001fe50) navi_icon_pane_srt

0x6d96,	// (0x0001fdec) navi_midp_pane_srt

0x6d96,	// (0x0001fdec) navi_navi_pane_srt

0x6dfa,	// (0x0001fe50) navi_text_pane_srt_ParamLimits

0x6dfa,	// (0x0001fe50) navi_text_pane_srt

0xbeb0,	// (0x00024f06) navi_navi_icon_text_pane_srt

0xbeb8,	// (0x00024f0e) navi_navi_pane_srt_g1_ParamLimits

0xbeb8,	// (0x00024f0e) navi_navi_pane_srt_g1

0xbeca,	// (0x00024f20) navi_navi_pane_srt_g2_ParamLimits

0xbeca,	// (0x00024f20) navi_navi_pane_srt_g2

0x0001,

0xf91e,	// (0x00028974) navi_navi_pane_srt_g_ParamLimits

0xf91e,	// (0x00028974) navi_navi_pane_srt_g

0xbedc,	// (0x00024f32) navi_navi_tabs_pane_srt

0xbeb0,	// (0x00024f06) navi_navi_text_pane_srt

0xbeb0,	// (0x00024f06) navi_navi_volume_pane_srt

0xc45b,	// (0x000254b1) navi_navi_text_pane_srt_t1

0xa255,	// (0x000232ab) navi_navi_volume_pane_srt_g1

0xa25d,	// (0x000232b3) volume_small_pane_srt_ParamLimits

0xa25d,	// (0x000232b3) volume_small_pane_srt

0x9c52,	// (0x00022ca8) volume_small_pane_srt_g1_ParamLimits

0x9c52,	// (0x00022ca8) volume_small_pane_srt_g1

0x9c62,	// (0x00022cb8) volume_small_pane_srt_g2_ParamLimits

0x9c62,	// (0x00022cb8) volume_small_pane_srt_g2

0x9c73,	// (0x00022cc9) volume_small_pane_srt_g3_ParamLimits

0x9c73,	// (0x00022cc9) volume_small_pane_srt_g3

0x9c84,	// (0x00022cda) volume_small_pane_srt_g4_ParamLimits

0x9c84,	// (0x00022cda) volume_small_pane_srt_g4

0x9c95,	// (0x00022ceb) volume_small_pane_srt_g5_ParamLimits

0x9c95,	// (0x00022ceb) volume_small_pane_srt_g5

0x9ca6,	// (0x00022cfc) volume_small_pane_srt_g6_ParamLimits

0x9ca6,	// (0x00022cfc) volume_small_pane_srt_g6

0x9cb7,	// (0x00022d0d) volume_small_pane_srt_g7_ParamLimits

0x9cb7,	// (0x00022d0d) volume_small_pane_srt_g7

0x9cc8,	// (0x00022d1e) volume_small_pane_srt_g8_ParamLimits

0x9cc8,	// (0x00022d1e) volume_small_pane_srt_g8

0x9cd9,	// (0x00022d2f) volume_small_pane_srt_g9_ParamLimits

0x9cd9,	// (0x00022d2f) volume_small_pane_srt_g9

0x9cea,	// (0x00022d40) volume_small_pane_srt_g10_ParamLimits

0x9cea,	// (0x00022d40) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x000287ee) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x000287ee) volume_small_pane_srt_g

0x70aa,	// (0x00020100) query_popup_data_pane_cp2

0xc441,	// (0x00025497) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xc441,	// (0x00025497) navi_navi_icon_text_pane_srt_t1

0xb982,	// (0x000249d8) navi_tabs_2_long_pane_srt

0xb982,	// (0x000249d8) navi_tabs_2_pane_srt

0xb982,	// (0x000249d8) navi_tabs_3_long_pane_srt

0xb982,	// (0x000249d8) navi_tabs_3_pane_srt

0xb982,	// (0x000249d8) navi_tabs_4_pane_srt

0xa235,	// (0x0002328b) tabs_2_active_pane_srt_ParamLimits

0xa235,	// (0x0002328b) tabs_2_active_pane_srt

0xa245,	// (0x0002329b) tabs_2_passive_pane_srt_ParamLimits

0xa245,	// (0x0002329b) tabs_2_passive_pane_srt

0xaf67,	// (0x00023fbd) bg_passive_tab_pane_cp1_srt_ParamLimits

0xaf67,	// (0x00023fbd) bg_passive_tab_pane_cp1_srt

0xc41f,	// (0x00025475) bg_passive_tab_pane_g1_cp1_srt

0x8111,	// (0x00021167) bg_passive_tab_pane_g2_cp1_srt

0xc428,	// (0x0002547e) bg_passive_tab_pane_g3_cp1_srt

0x6dfa,	// (0x0001fe50) bg_active_tab_pane_cp1_srt_ParamLimits

0x6dfa,	// (0x0001fe50) bg_active_tab_pane_cp1_srt

0xc431,	// (0x00025487) tabs_2_active_pane_srt_g1

0x9660,	// (0x000226b6) tabs_2_active_pane_srt_t1_ParamLimits

0x9660,	// (0x000226b6) tabs_2_active_pane_srt_t1

0xc41f,	// (0x00025475) bg_active_tab_pane_g1_cp1_srt

0x8111,	// (0x00021167) bg_active_tab_pane_g2_cp1_srt

0xc428,	// (0x0002547e) bg_active_tab_pane_g3_cp1_srt

0xa202,	// (0x00023258) tabs_3_active_pane_srt_ParamLimits

0xa202,	// (0x00023258) tabs_3_active_pane_srt

0xa213,	// (0x00023269) tabs_3_passive_pane_cp_srt_ParamLimits

0xa213,	// (0x00023269) tabs_3_passive_pane_cp_srt

0xa224,	// (0x0002327a) tabs_3_passive_pane_srt_ParamLimits

0xa224,	// (0x0002327a) tabs_3_passive_pane_srt

0xaf67,	// (0x00023fbd) bg_passive_tab_pane_cp2_srt_ParamLimits

0xaf67,	// (0x00023fbd) bg_passive_tab_pane_cp2_srt

0x8507,	// (0x0002155d) bg_passive_tab_pane_g1_cp2_srt

0x8111,	// (0x00021167) bg_passive_tab_pane_g2_cp2_srt

0x84fe,	// (0x00021554) bg_passive_tab_pane_g3_cp2_srt

0x6dfa,	// (0x0001fe50) bg_active_tab_pane_cp2_srt_ParamLimits

0x6dfa,	// (0x0001fe50) bg_active_tab_pane_cp2_srt

0xc417,	// (0x0002546d) tabs_3_active_pane_srt_g1

0x9392,	// (0x000223e8) tabs_3_active_pane_srt_t1_ParamLimits

0x9392,	// (0x000223e8) tabs_3_active_pane_srt_t1

0x8507,	// (0x0002155d) bg_active_tab_pane_g1_cp2_srt

0x8111,	// (0x00021167) bg_active_tab_pane_g2_cp2_srt

0x84fe,	// (0x00021554) bg_active_tab_pane_g3_cp2_srt

0xa1ba,	// (0x00023210) tabs_4_active_pane_srt_ParamLimits

0xa1ba,	// (0x00023210) tabs_4_active_pane_srt

0xa1cc,	// (0x00023222) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa1cc,	// (0x00023222) tabs_4_passive_pane_cp2_srt

0xaf1d,	// (0x00023f73) aid_size_cell_toolbar

0x9685,	// (0x000226db) main_idle_act_pane_ParamLimits

0xafed,	// (0x00024043) popup_large_graphic_colour_window_ParamLimits

0xdc64,	// (0x00026cba) popup_toolbar_window_ParamLimits

0xdc64,	// (0x00026cba) popup_toolbar_window

0xd170,	// (0x000261c6) list_single_graphic_2heading_pane_ParamLimits

0xd170,	// (0x000261c6) list_single_graphic_2heading_pane

0x7d83,	// (0x00020dd9) aid_size_cell_apps_grid_lsc_pane

0x7d95,	// (0x00020deb) aid_size_cell_apps_grid_prt_pane

0xaf67,	// (0x00023fbd) bg_wml_button_pane_cp1_ParamLimits

0xaf67,	// (0x00023fbd) bg_wml_button_pane_cp1

0xe1e0,	// (0x00027236) form_midp_field_text_pane_t1_ParamLimits

0xb313,	// (0x00024369) input_focus_pane_cp050_ParamLimits

0xb453,	// (0x000244a9) list_midp_form_text_pane_ParamLimits

0xb430,	// (0x00024486) input_focus_pane_cp051_ParamLimits

0xb444,	// (0x0002449a) list_midp_choice_pane_ParamLimits

0xe17a,	// (0x000271d0) list_single_2graphic_pane_cp3_ParamLimits

0xe17a,	// (0x000271d0) list_single_2graphic_pane_cp3

0xe18e,	// (0x000271e4) list_single_midp_graphic_pane_ParamLimits

0xe18e,	// (0x000271e4) list_single_midp_graphic_pane

0x8f8c,	// (0x00021fe2) list_single_graphic_2heading_pane_g1_ParamLimits

0x8f8c,	// (0x00021fe2) list_single_graphic_2heading_pane_g1

0x8f98,	// (0x00021fee) list_single_graphic_2heading_pane_g4_ParamLimits

0x8f98,	// (0x00021fee) list_single_graphic_2heading_pane_g4

0x8fa4,	// (0x00021ffa) list_single_graphic_2heading_pane_g5_ParamLimits

0x8fa4,	// (0x00021ffa) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x00028841) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x00028841) list_single_graphic_2heading_pane_g

0x8fb0,	// (0x00022006) list_single_graphic_2heading_pane_t1_ParamLimits

0x8fb0,	// (0x00022006) list_single_graphic_2heading_pane_t1

0x8fc4,	// (0x0002201a) list_single_graphic_2heading_pane_t2_ParamLimits

0x8fc4,	// (0x0002201a) list_single_graphic_2heading_pane_t2

0x8fde,	// (0x00022034) list_single_graphic_2heading_pane_t3_ParamLimits

0x8fde,	// (0x00022034) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x00028848) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x00028848) list_single_graphic_2heading_pane_t

0xb16f,	// (0x000241c5) bg_popup_sub_pane_cp2

0xb195,	// (0x000241eb) grid_toobar_pane

0x9e6d,	// (0x00022ec3) cell_toolbar_pane_ParamLimits

0x9e6d,	// (0x00022ec3) cell_toolbar_pane

0xb1cb,	// (0x00024221) cell_toolbar_pane_g1_ParamLimits

0xb1cb,	// (0x00024221) cell_toolbar_pane_g1

0xb1dd,	// (0x00024233) cell_toolbar_pane_g2_ParamLimits

0xb1dd,	// (0x00024233) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x00028856) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x00028856) cell_toolbar_pane_g

0xb1ff,	// (0x00024255) grid_highlight_pane_cp2_ParamLimits

0xb1ff,	// (0x00024255) grid_highlight_pane_cp2

0xb219,	// (0x0002426f) toolbar_button_pane

0xb225,	// (0x0002427b) toolbar_button_pane_g1

0xb22d,	// (0x00024283) toolbar_button_pane_g2

0xb235,	// (0x0002428b) toolbar_button_pane_g3

0xb23d,	// (0x00024293) toolbar_button_pane_g4

0xb245,	// (0x0002429b) toolbar_button_pane_g5

0xb24d,	// (0x000242a3) toolbar_button_pane_g6

0xb255,	// (0x000242ab) toolbar_button_pane_g7

0xb25d,	// (0x000242b3) toolbar_button_pane_g8

0xb265,	// (0x000242bb) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0002885b) toolbar_button_pane_g

0x9e9c,	// (0x00022ef2) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9e9c,	// (0x00022ef2) list_single_2graphic_pane_g1_cp3

0x9ea8,	// (0x00022efe) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9ea8,	// (0x00022efe) list_single_2graphic_pane_g2_cp3

0x9eb7,	// (0x00022f0d) list_single_2graphic_pane_g3_cp3

0x9ebf,	// (0x00022f15) list_single_2graphic_pane_g4_cp3_ParamLimits

0x9ebf,	// (0x00022f15) list_single_2graphic_pane_g4_cp3

0x9ecb,	// (0x00022f21) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9ecb,	// (0x00022f21) list_single_2graphic_pane_t1_cp3

0x9ee5,	// (0x00022f3b) list_single_midp_graphic_pane_g2_ParamLimits

0x9ee5,	// (0x00022f3b) list_single_midp_graphic_pane_g2

0xaf25,	// (0x00023f7b) aid_zoom_text_primary

0xd070,	// (0x000260c6) aid_zoom_text_secondary

0x85b9,	// (0x0002160f) status_small_pane_g7_ParamLimits

0x85b9,	// (0x0002160f) status_small_pane_g7

0x85dc,	// (0x00021632) status_small_pane_t1_ParamLimits

0x930d,	// (0x00022363) title_pane_g2

0x0003,

0xf592,	// (0x000285e8) title_pane_g

0x955f,	// (0x000225b5) aid_size_cell_colour_1_pane_ParamLimits

0x955f,	// (0x000225b5) aid_size_cell_colour_1_pane

0x9573,	// (0x000225c9) aid_size_cell_colour_2_pane_ParamLimits

0x9573,	// (0x000225c9) aid_size_cell_colour_2_pane

0x9587,	// (0x000225dd) aid_size_cell_colour_3_pane_ParamLimits

0x9587,	// (0x000225dd) aid_size_cell_colour_3_pane

0x959b,	// (0x000225f1) aid_size_cell_colour_4_pane_ParamLimits

0x959b,	// (0x000225f1) aid_size_cell_colour_4_pane

0x96bf,	// (0x00022715) title_pane_stacon_g1_ParamLimits

0x96bf,	// (0x00022715) title_pane_stacon_g1

0xb7b1,	// (0x00024807) popup_note_wait_window_g3_ParamLimits

0xb7b1,	// (0x00024807) popup_note_wait_window_g3

0xb827,	// (0x0002487d) popup_note_wait_window_t5_ParamLimits

0xb827,	// (0x0002487d) popup_note_wait_window_t5

0x6d96,	// (0x0001fdec) main_feb_china_hwr_fs_writing_pane

0xd953,	// (0x000269a9) popup_feb_china_hwr_fs_window_ParamLimits

0xd953,	// (0x000269a9) popup_feb_china_hwr_fs_window

0x9f07,	// (0x00022f5d) aid_size_cell_hwr_fs_ParamLimits

0x9f07,	// (0x00022f5d) aid_size_cell_hwr_fs

0xb313,	// (0x00024369) bg_popup_sub_pane_cp3_ParamLimits

0xb313,	// (0x00024369) bg_popup_sub_pane_cp3

0x9f1c,	// (0x00022f72) grid_hwr_fs_pane_ParamLimits

0x9f1c,	// (0x00022f72) grid_hwr_fs_pane

0x9f30,	// (0x00022f86) linegrid_hwr_fs_pane_ParamLimits

0x9f30,	// (0x00022f86) linegrid_hwr_fs_pane

0x9f40,	// (0x00022f96) cell_hwr_fs_pane_ParamLimits

0x9f40,	// (0x00022f96) cell_hwr_fs_pane

0xb31f,	// (0x00024375) linegrid_hwr_fs_pane_g1_ParamLimits

0xb31f,	// (0x00024375) linegrid_hwr_fs_pane_g1

0xe14e,	// (0x000271a4) linegrid_hwr_fs_pane_g2_ParamLimits

0xe14e,	// (0x000271a4) linegrid_hwr_fs_pane_g2

0xb32b,	// (0x00024381) linegrid_hwr_fs_pane_g3_ParamLimits

0xb32b,	// (0x00024381) linegrid_hwr_fs_pane_g3

0x9f5e,	// (0x00022fb4) linegrid_hwr_fs_pane_g4_ParamLimits

0x9f5e,	// (0x00022fb4) linegrid_hwr_fs_pane_g4

0x9f78,	// (0x00022fce) linegrid_hwr_fs_pane_g5_ParamLimits

0x9f78,	// (0x00022fce) linegrid_hwr_fs_pane_g5

0x0004,

0xf830,	// (0x00028886) linegrid_hwr_fs_pane_g_ParamLimits

0xf830,	// (0x00028886) linegrid_hwr_fs_pane_g

0xb337,	// (0x0002438d) cell_hwr_fs_pane_g1_ParamLimits

0xb337,	// (0x0002438d) cell_hwr_fs_pane_g1

0xb13d,	// (0x00024193) cell_hwr_fs_pane_g2_ParamLimits

0xb13d,	// (0x00024193) cell_hwr_fs_pane_g2

0xe160,	// (0x000271b6) cell_hwr_fs_pane_g3_ParamLimits

0xe160,	// (0x000271b6) cell_hwr_fs_pane_g3

0xe16d,	// (0x000271c3) cell_hwr_fs_pane_g4_ParamLimits

0xe16d,	// (0x000271c3) cell_hwr_fs_pane_g4

0x0003,

0xf83b,	// (0x00028891) cell_hwr_fs_pane_g_ParamLimits

0xf83b,	// (0x00028891) cell_hwr_fs_pane_g

0x9f8e,	// (0x00022fe4) cell_hwr_fs_pane_t1

0x6d96,	// (0x0001fdec) grid_highlight_pane_cp6

0x6d96,	// (0x0001fdec) main_idle_act2_pane

0x7b8c,	// (0x00020be2) aid_inside_area_popup_secondary

0xe265,	// (0x000272bb) aid_inside_area_window_primary_ParamLimits

0xe265,	// (0x000272bb) aid_inside_area_window_primary

0xc525,	// (0x0002557b) ai2_news_ticker_pane

0xc52d,	// (0x00025583) aid_size_cell_ai1_link_ParamLimits

0xc52d,	// (0x00025583) aid_size_cell_ai1_link

0xe5ad,	// (0x00027603) popup_ai2_data_window_ParamLimits

0xe5ad,	// (0x00027603) popup_ai2_data_window

0xc547,	// (0x0002559d) popup_ai2_link_window_ParamLimits

0xc547,	// (0x0002559d) popup_ai2_link_window

0xb313,	// (0x00024369) bg_popup_sub_pane_cp4_ParamLimits

0xb313,	// (0x00024369) bg_popup_sub_pane_cp4

0xc55b,	// (0x000255b1) grid_ai2_link_pane_ParamLimits

0xc55b,	// (0x000255b1) grid_ai2_link_pane

0xc572,	// (0x000255c8) popup_ai2_link_window_g1_ParamLimits

0xc572,	// (0x000255c8) popup_ai2_link_window_g1

0xc57e,	// (0x000255d4) popup_ai2_link_window_g2_ParamLimits

0xc57e,	// (0x000255d4) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x00028a58) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x00028a58) popup_ai2_link_window_g

0xc58d,	// (0x000255e3) ai2_mp_button_pane

0xc595,	// (0x000255eb) ai2_mp_volume_pane

0xb430,	// (0x00024486) bg_popup_sub_pane_cp5_ParamLimits

0xb430,	// (0x00024486) bg_popup_sub_pane_cp5

0xc59d,	// (0x000255f3) heading_ai2_gene_pane_ParamLimits

0xc59d,	// (0x000255f3) heading_ai2_gene_pane

0xc5a9,	// (0x000255ff) list_ai2_gene_pane_ParamLimits

0xc5a9,	// (0x000255ff) list_ai2_gene_pane

0xc5f1,	// (0x00025647) cell_ai2_link_pane_ParamLimits

0xc5f1,	// (0x00025647) cell_ai2_link_pane

0xc607,	// (0x0002565d) cell_ai2_link_pane_g1

0x6d96,	// (0x0001fdec) grid_highlight_pane_cp7

0xa272,	// (0x000232c8) ai2_mp_volume_pane_g1

0xc69c,	// (0x000256f2) ai2_mp_volume_pane_g2

0xe5d8,	// (0x0002762e) list_ai2_gene_pane_t1

0xc6a4,	// (0x000256fa) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x00028a71) ai2_mp_volume_pane_g

0xa27a,	// (0x000232d0) volume_small_pane_cp3

0xc6ac,	// (0x00025702) aid_size_cell_ai2_button

0xc6b4,	// (0x0002570a) grid_ai2_button_pane

0xc6bd,	// (0x00025713) cell_ai2_button_pane_ParamLimits

0xc6bd,	// (0x00025713) cell_ai2_button_pane

0x6d14,	// (0x0001fd6a) cell_ai2_button_pane_g1

0x6d96,	// (0x0001fdec) grid_highlight_pane_cp8

0xc65c,	// (0x000256b2) ai2_gene_pane_t1_ParamLimits

0xc65c,	// (0x000256b2) ai2_gene_pane_t1

0xd8f9,	// (0x0002694f) aid_height_parent_landscape

0xe363,	// (0x000273b9) aid_height_set_list

0xc319,	// (0x0002536f) aid_size_parent

0xc3f5,	// (0x0002544b) aid_size_cell_graphic_pane_ParamLimits

0xc5b9,	// (0x0002560f) popup_ai2_data_window_g1_ParamLimits

0xc5b9,	// (0x0002560f) popup_ai2_data_window_g1

0xc5c5,	// (0x0002561b) ai2_news_ticker_pane_g1

0xc5cd,	// (0x00025623) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x00028a5d) ai2_news_ticker_pane_g

0xc5d5,	// (0x0002562b) ai2_news_ticker_pane_t1

0xc5e3,	// (0x00025639) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x00028a62) ai2_news_ticker_pane_t

0xc3d6,	// (0x0002542c) heading_ai2_gene_pane_g1

0xc610,	// (0x00025666) heading_ai2_gene_pane_t1_ParamLimits

0xc610,	// (0x00025666) heading_ai2_gene_pane_t1

0xc625,	// (0x0002567b) list_highlight_pane_cp6

0xe5c1,	// (0x00027617) ai2_gene_pane_ParamLimits

0xe5c1,	// (0x00027617) ai2_gene_pane

0xe5e6,	// (0x0002763c) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x00028a67) list_ai2_gene_pane_t

0xc62d,	// (0x00025683) list_highlight_pane_cp8_ParamLimits

0xc62d,	// (0x00025683) list_highlight_pane_cp8

0xc63e,	// (0x00025694) ai2_gene_pane_g1_ParamLimits

0xc63e,	// (0x00025694) ai2_gene_pane_g1

0xc650,	// (0x000256a6) ai2_gene_pane_g2_ParamLimits

0xc650,	// (0x000256a6) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x00028a6c) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x00028a6c) ai2_gene_pane_g

0x7341,	// (0x00020397) scroll_pane_cp12

0x9e24,	// (0x00022e7a) control_pane_t3_ParamLimits

0x9e24,	// (0x00022e7a) control_pane_t3

0x85cd,	// (0x00021623) status_small_pane_g8_ParamLimits

0x85cd,	// (0x00021623) status_small_pane_g8

0xd9c1,	// (0x00026a17) popup_find_window_ParamLimits

0xdb24,	// (0x00026b7a) popup_note_image_window_ParamLimits

0xc96a,	// (0x000259c0) list_double2_graphic_pane_vc_g1_ParamLimits

0xc96a,	// (0x000259c0) list_double2_graphic_pane_vc_g1

0xd09d,	// (0x000260f3) list_double2_graphic_pane_vc_g2_ParamLimits

0xd09d,	// (0x000260f3) list_double2_graphic_pane_vc_g2

0xd0a9,	// (0x000260ff) list_double2_graphic_pane_vc_g3_ParamLimits

0xd0a9,	// (0x000260ff) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0002884f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0002884f) list_double2_graphic_pane_vc_g

0xd0b5,	// (0x0002610b) list_double2_graphic_pane_vc_t1_ParamLimits

0xd0b5,	// (0x0002610b) list_double2_graphic_pane_vc_t1

0xd09d,	// (0x000260f3) list_single_heading_pane_vc_g1_ParamLimits

0xd09d,	// (0x000260f3) list_single_heading_pane_vc_g1

0xd0a9,	// (0x000260ff) list_single_heading_pane_vc_g2_ParamLimits

0xd0a9,	// (0x000260ff) list_single_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x00028870) list_single_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x00028870) list_single_heading_pane_vc_g

0xd0cb,	// (0x00026121) list_single_heading_pane_vc_t1_ParamLimits

0xd0cb,	// (0x00026121) list_single_heading_pane_vc_t1

0xd0e1,	// (0x00026137) list_single_heading_pane_vc_t2_ParamLimits

0xd0e1,	// (0x00026137) list_single_heading_pane_vc_t2

0x0001,

0xf81f,	// (0x00028875) list_single_heading_pane_vc_t_ParamLimits

0xf81f,	// (0x00028875) list_single_heading_pane_vc_t

0xb26d,	// (0x000242c3) list_setting_number_pane_vc_g1_ParamLimits

0xb26d,	// (0x000242c3) list_setting_number_pane_vc_g1

0xb279,	// (0x000242cf) list_setting_number_pane_vc_g2_ParamLimits

0xb279,	// (0x000242cf) list_setting_number_pane_vc_g2

0x0001,

0xf824,	// (0x0002887a) list_setting_number_pane_vc_g_ParamLimits

0xf824,	// (0x0002887a) list_setting_number_pane_vc_g

0xb285,	// (0x000242db) list_setting_number_pane_vc_t1_ParamLimits

0xb285,	// (0x000242db) list_setting_number_pane_vc_t1

0xb299,	// (0x000242ef) list_setting_number_pane_vc_t2_ParamLimits

0xb299,	// (0x000242ef) list_setting_number_pane_vc_t2

0xb2b5,	// (0x0002430b) list_setting_number_pane_vc_t3_ParamLimits

0xb2b5,	// (0x0002430b) list_setting_number_pane_vc_t3

0x0002,

0xf829,	// (0x0002887f) list_setting_number_pane_vc_t_ParamLimits

0xf829,	// (0x0002887f) list_setting_number_pane_vc_t

0xb2db,	// (0x00024331) set_value_pane_vc_ParamLimits

0xb2db,	// (0x00024331) set_value_pane_vc

0xd170,	// (0x000261c6) list_double2_graphic_pane_vc_ParamLimits

0xd170,	// (0x000261c6) list_double2_graphic_pane_vc

0xc374,	// (0x000253ca) list_double2_large_graphic_pane_vc_ParamLimits

0xc374,	// (0x000253ca) list_double2_large_graphic_pane_vc

0xd170,	// (0x000261c6) list_double2_pane_vc_ParamLimits

0xd170,	// (0x000261c6) list_double2_pane_vc

0xd170,	// (0x000261c6) list_double_graphic_heading_pane_vc_ParamLimits

0xd170,	// (0x000261c6) list_double_graphic_heading_pane_vc

0xd170,	// (0x000261c6) list_double_graphic_pane_vc_ParamLimits

0xd170,	// (0x000261c6) list_double_graphic_pane_vc

0xd170,	// (0x000261c6) list_double_heading_pane_vc_ParamLimits

0xd170,	// (0x000261c6) list_double_heading_pane_vc

0xc374,	// (0x000253ca) list_double_large_graphic_pane_vc_ParamLimits

0xc374,	// (0x000253ca) list_double_large_graphic_pane_vc

0xd170,	// (0x000261c6) list_double_number_pane_vc_ParamLimits

0xd170,	// (0x000261c6) list_double_number_pane_vc

0xd170,	// (0x000261c6) list_double_pane_vc_ParamLimits

0xd170,	// (0x000261c6) list_double_pane_vc

0xd170,	// (0x000261c6) list_double_time_pane_vc_ParamLimits

0xd170,	// (0x000261c6) list_double_time_pane_vc

0xd170,	// (0x000261c6) list_setting_number_pane_vc_ParamLimits

0xd170,	// (0x000261c6) list_setting_number_pane_vc

0xd170,	// (0x000261c6) list_setting_pane_vc_ParamLimits

0xd170,	// (0x000261c6) list_setting_pane_vc

0xd170,	// (0x000261c6) list_single_graphic_heading_pane_vc_ParamLimits

0xd170,	// (0x000261c6) list_single_graphic_heading_pane_vc

0xd170,	// (0x000261c6) list_single_heading_pane_vc_ParamLimits

0xd170,	// (0x000261c6) list_single_heading_pane_vc

0xd184,	// (0x000261da) list_single_number_heading_pane_vc_ParamLimits

0xd184,	// (0x000261da) list_single_number_heading_pane_vc

0xd1c8,	// (0x0002621e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd1c8,	// (0x0002621e) list_double_graphic_heading_pane_vc_g1

0xd09d,	// (0x000260f3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd09d,	// (0x000260f3) list_double_graphic_heading_pane_vc_g2

0xd0a9,	// (0x000260ff) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd0a9,	// (0x000260ff) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa22,	// (0x00028a78) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x00028a78) list_double_graphic_heading_pane_vc_g

0xd1d4,	// (0x0002622a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd1d4,	// (0x0002622a) list_double_graphic_heading_pane_vc_t1

0xd0cb,	// (0x00026121) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd0cb,	// (0x00026121) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa29,	// (0x00028a7f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x00028a7f) list_double_graphic_heading_pane_vc_t

0xb26d,	// (0x000242c3) list_setting_pane_vc_g1_ParamLimits

0xb26d,	// (0x000242c3) list_setting_pane_vc_g1

0xb279,	// (0x000242cf) list_setting_pane_vc_g2_ParamLimits

0xb279,	// (0x000242cf) list_setting_pane_vc_g2

0x0001,

0xf824,	// (0x0002887a) list_setting_pane_vc_g_ParamLimits

0xf824,	// (0x0002887a) list_setting_pane_vc_g

0xc8ac,	// (0x00025902) list_setting_pane_vc_t1_ParamLimits

0xc8ac,	// (0x00025902) list_setting_pane_vc_t1

0xc8c0,	// (0x00025916) list_setting_pane_vc_t2_ParamLimits

0xc8c0,	// (0x00025916) list_setting_pane_vc_t2

0x0001,

0xfa6c,	// (0x00028ac2) list_setting_pane_vc_t_ParamLimits

0xfa6c,	// (0x00028ac2) list_setting_pane_vc_t

0xb2db,	// (0x00024331) set_value_pane_cp_vc_ParamLimits

0xb2db,	// (0x00024331) set_value_pane_cp_vc

0xd09d,	// (0x000260f3) list_single_number_heading_pane_vc_g1_ParamLimits

0xd09d,	// (0x000260f3) list_single_number_heading_pane_vc_g1

0xd0a9,	// (0x000260ff) list_single_number_heading_pane_vc_g2_ParamLimits

0xd0a9,	// (0x000260ff) list_single_number_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x00028870) list_single_number_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x00028870) list_single_number_heading_pane_vc_g

0xd0cb,	// (0x00026121) list_single_number_heading_pane_vc_t1_ParamLimits

0xd0cb,	// (0x00026121) list_single_number_heading_pane_vc_t1

0xd1e6,	// (0x0002623c) list_single_number_heading_pane_vc_t2_ParamLimits

0xd1e6,	// (0x0002623c) list_single_number_heading_pane_vc_t2

0xd1f8,	// (0x0002624e) list_single_number_heading_pane_vc_t3_ParamLimits

0xd1f8,	// (0x0002624e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa71,	// (0x00028ac7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x00028ac7) list_single_number_heading_pane_vc_t

0xc96a,	// (0x000259c0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc96a,	// (0x000259c0) list_single_graphic_heading_pane_vc_g1

0xd09d,	// (0x000260f3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd09d,	// (0x000260f3) list_single_graphic_heading_pane_vc_g4

0xd0a9,	// (0x000260ff) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd0a9,	// (0x000260ff) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0002884f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0002884f) list_single_graphic_heading_pane_vc_g

0xd0cb,	// (0x00026121) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd0cb,	// (0x00026121) list_single_graphic_heading_pane_vc_t1

0xd20a,	// (0x00026260) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd20a,	// (0x00026260) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x00028ace) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x00028ace) list_single_graphic_heading_pane_vc_t

0xd09d,	// (0x000260f3) list_double2_pane_vc_g1_ParamLimits

0xd09d,	// (0x000260f3) list_double2_pane_vc_g1

0xd0a9,	// (0x000260ff) list_double2_pane_vc_g2_ParamLimits

0xd0a9,	// (0x000260ff) list_double2_pane_vc_g2

0x0001,

0xf81a,	// (0x00028870) list_double2_pane_vc_g_ParamLimits

0xf81a,	// (0x00028870) list_double2_pane_vc_g

0xd21c,	// (0x00026272) list_double2_pane_vc_t1_ParamLimits

0xd21c,	// (0x00026272) list_double2_pane_vc_t1

0xd232,	// (0x00026288) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd232,	// (0x00026288) list_double2_large_graphic_pane_vc_g1

0xd23e,	// (0x00026294) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd23e,	// (0x00026294) list_double2_large_graphic_pane_vc_g2

0xd24a,	// (0x000262a0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd24a,	// (0x000262a0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa7d,	// (0x00028ad3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa7d,	// (0x00028ad3) list_double2_large_graphic_pane_vc_g

0xd256,	// (0x000262ac) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd256,	// (0x000262ac) list_double2_large_graphic_pane_vc_t1

0xd26c,	// (0x000262c2) list_double_time_pane_vc_g1_ParamLimits

0xd26c,	// (0x000262c2) list_double_time_pane_vc_g1

0xd278,	// (0x000262ce) list_double_time_pane_vc_g2_ParamLimits

0xd278,	// (0x000262ce) list_double_time_pane_vc_g2

0x0001,

0xfa84,	// (0x00028ada) list_double_time_pane_vc_g_ParamLimits

0xfa84,	// (0x00028ada) list_double_time_pane_vc_g

0xd284,	// (0x000262da) list_double_time_pane_vc_t1_ParamLimits

0xd284,	// (0x000262da) list_double_time_pane_vc_t1

0xd29d,	// (0x000262f3) list_double_time_pane_vc_t2_ParamLimits

0xd29d,	// (0x000262f3) list_double_time_pane_vc_t2

0xd2d6,	// (0x0002632c) list_double_time_pane_vc_t3_ParamLimits

0xd2d6,	// (0x0002632c) list_double_time_pane_vc_t3

0xd2ee,	// (0x00026344) list_double_time_pane_vc_t4_ParamLimits

0xd2ee,	// (0x00026344) list_double_time_pane_vc_t4

0x0003,

0xfa89,	// (0x00028adf) list_double_time_pane_vc_t_ParamLimits

0xfa89,	// (0x00028adf) list_double_time_pane_vc_t

0xd09d,	// (0x000260f3) list_double_pane_vc_g1_ParamLimits

0xd09d,	// (0x000260f3) list_double_pane_vc_g1

0xd0a9,	// (0x000260ff) list_double_pane_vc_g2_ParamLimits

0xd0a9,	// (0x000260ff) list_double_pane_vc_g2

0x0001,

0xf81a,	// (0x00028870) list_double_pane_vc_g_ParamLimits

0xf81a,	// (0x00028870) list_double_pane_vc_g

0xd300,	// (0x00026356) list_double_pane_vc_t1_ParamLimits

0xd300,	// (0x00026356) list_double_pane_vc_t1

0xd312,	// (0x00026368) list_double_pane_vc_t2_ParamLimits

0xd312,	// (0x00026368) list_double_pane_vc_t2

0x0001,

0xfa92,	// (0x00028ae8) list_double_pane_vc_t_ParamLimits

0xfa92,	// (0x00028ae8) list_double_pane_vc_t

0xd09d,	// (0x000260f3) list_double_number_pane_vc_g1_ParamLimits

0xd09d,	// (0x000260f3) list_double_number_pane_vc_g1

0xd0a9,	// (0x000260ff) list_double_number_pane_vc_g2_ParamLimits

0xd0a9,	// (0x000260ff) list_double_number_pane_vc_g2

0x0001,

0xf81a,	// (0x00028870) list_double_number_pane_vc_g_ParamLimits

0xf81a,	// (0x00028870) list_double_number_pane_vc_g

0xd328,	// (0x0002637e) list_double_number_pane_vc_t1_ParamLimits

0xd328,	// (0x0002637e) list_double_number_pane_vc_t1

0xd33c,	// (0x00026392) list_double_number_pane_vc_t2_ParamLimits

0xd33c,	// (0x00026392) list_double_number_pane_vc_t2

0xd312,	// (0x00026368) list_double_number_pane_vc_t3_ParamLimits

0xd312,	// (0x00026368) list_double_number_pane_vc_t3

0x0002,

0xfa97,	// (0x00028aed) list_double_number_pane_vc_t_ParamLimits

0xfa97,	// (0x00028aed) list_double_number_pane_vc_t

0xd34e,	// (0x000263a4) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd34e,	// (0x000263a4) list_double_large_graphic_pane_vc_g1

0xd35a,	// (0x000263b0) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd35a,	// (0x000263b0) list_double_large_graphic_pane_vc_g2

0xd24a,	// (0x000262a0) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd24a,	// (0x000262a0) list_double_large_graphic_pane_vc_g3

0xd369,	// (0x000263bf) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd369,	// (0x000263bf) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa9e,	// (0x00028af4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa9e,	// (0x00028af4) list_double_large_graphic_pane_vc_g

0xd375,	// (0x000263cb) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd375,	// (0x000263cb) list_double_large_graphic_pane_vc_t1

0xd387,	// (0x000263dd) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd387,	// (0x000263dd) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa7,	// (0x00028afd) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa7,	// (0x00028afd) list_double_large_graphic_pane_vc_t

0xd09d,	// (0x000260f3) list_double_heading_pane_vc_g1_ParamLimits

0xd09d,	// (0x000260f3) list_double_heading_pane_vc_g1

0xd0a9,	// (0x000260ff) list_double_heading_pane_vc_g2_ParamLimits

0xd0a9,	// (0x000260ff) list_double_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x00028870) list_double_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x00028870) list_double_heading_pane_vc_g

0xd39e,	// (0x000263f4) list_double_heading_pane_vc_t1_ParamLimits

0xd39e,	// (0x000263f4) list_double_heading_pane_vc_t1

0xd0cb,	// (0x00026121) list_double_heading_pane_vc_t2_ParamLimits

0xd0cb,	// (0x00026121) list_double_heading_pane_vc_t2

0x0001,

0xfaac,	// (0x00028b02) list_double_heading_pane_vc_t_ParamLimits

0xfaac,	// (0x00028b02) list_double_heading_pane_vc_t

0xd3b0,	// (0x00026406) list_double_graphic_pane_vc_g1_ParamLimits

0xd3b0,	// (0x00026406) list_double_graphic_pane_vc_g1

0xd3c0,	// (0x00026416) list_double_graphic_pane_vc_g2_ParamLimits

0xd3c0,	// (0x00026416) list_double_graphic_pane_vc_g2

0xd3cf,	// (0x00026425) list_double_graphic_pane_vc_g3_ParamLimits

0xd3cf,	// (0x00026425) list_double_graphic_pane_vc_g3

0x0002,

0xfab1,	// (0x00028b07) list_double_graphic_pane_vc_g_ParamLimits

0xfab1,	// (0x00028b07) list_double_graphic_pane_vc_g

0xd3db,	// (0x00026431) list_double_graphic_pane_vc_t1_ParamLimits

0xd3db,	// (0x00026431) list_double_graphic_pane_vc_t1

0xd312,	// (0x00026368) list_double_graphic_pane_vc_t2_ParamLimits

0xd312,	// (0x00026368) list_double_graphic_pane_vc_t2

0x0001,

0xfab8,	// (0x00028b0e) list_double_graphic_pane_vc_t_ParamLimits

0xfab8,	// (0x00028b0e) list_double_graphic_pane_vc_t

0x901e,	// (0x00022074) aid_size_cell_fastswap

0x9026,	// (0x0002207c) aid_size_cell_touch_ParamLimits

0x9026,	// (0x0002207c) aid_size_cell_touch

0x91da,	// (0x00022230) popup_fast_swap_wide_window_ParamLimits

0x91da,	// (0x00022230) popup_fast_swap_wide_window

0x92a0,	// (0x000222f6) touch_pane_ParamLimits

0x92a0,	// (0x000222f6) touch_pane

0xcdd6,	// (0x00025e2c) button_value_adjust_pane_cp2

0xcdde,	// (0x00025e34) button_value_adjust_pane_cp4

0xcdfe,	// (0x00025e54) form_field_data_pane_cp2

0xce1d,	// (0x00025e73) form_field_data_wide_pane_cp2

0x7dcc,	// (0x00020e22) bg_scroll_pane_ParamLimits

0x9855,	// (0x000228ab) scroll_handle_pane_ParamLimits

0x9869,	// (0x000228bf) scroll_sc2_down_pane_ParamLimits

0x9869,	// (0x000228bf) scroll_sc2_down_pane

0x7dfd,	// (0x00020e53) scroll_sc2_up_pane_ParamLimits

0x7dfd,	// (0x00020e53) scroll_sc2_up_pane

0xe717,	// (0x0002776d) grid_wheel_folder_pane_g1_ParamLimits

0xe717,	// (0x0002776d) grid_wheel_folder_pane_g1

0x9b33,	// (0x00022b89) clock_nsta_pane_cp2_ParamLimits

0x9b33,	// (0x00022b89) clock_nsta_pane_cp2

0x9ba5,	// (0x00022bfb) listscroll_midp_pane_ParamLimits

0x9bb1,	// (0x00022c07) midp_canvas_pane

0x9e65,	// (0x00022ebb) nsta_clock_indic_pane

0xaf4d,	// (0x00023fa3) listscroll_form_pane_vc

0xaf55,	// (0x00023fab) listscroll_set_pane_vc_ParamLimits

0xaf55,	// (0x00023fab) listscroll_set_pane_vc

0xdd52,	// (0x00026da8) clock_nsta_pane

0xdd5f,	// (0x00026db5) indicator_nsta_pane

0xb16f,	// (0x000241c5) bg_popup_sub_pane_cp2_ParamLimits

0xb183,	// (0x000241d9) find_pane_cp2_ParamLimits

0xb183,	// (0x000241d9) find_pane_cp2

0xb195,	// (0x000241eb) grid_toobar_pane_ParamLimits

0xb2e7,	// (0x0002433d) list_form_gen_pane_vc_ParamLimits

0xb2e7,	// (0x0002433d) list_form_gen_pane_vc

0xb2fd,	// (0x00024353) scroll_pane_cp8_vc_ParamLimits

0xb2fd,	// (0x00024353) scroll_pane_cp8_vc

0xb34d,	// (0x000243a3) data_form_wide_pane_vc_ParamLimits

0xb34d,	// (0x000243a3) data_form_wide_pane_vc

0xb359,	// (0x000243af) form_field_data_wide_pane_vc_g1

0xb361,	// (0x000243b7) form_field_data_wide_pane_vc_t1_ParamLimits

0xb361,	// (0x000243b7) form_field_data_wide_pane_vc_t1

0x7a4e,	// (0x00020aa4) input_focus_pane_cp6_vc_ParamLimits

0x7a4e,	// (0x00020aa4) input_focus_pane_cp6_vc

0xe203,	// (0x00027259) list_midp_pane_ParamLimits

0xe20f,	// (0x00027265) scroll_pane_cp16_ParamLimits

0xe20f,	// (0x00027265) scroll_pane_cp16

0xb5ba,	// (0x00024610) button_value_adjust_pane_ParamLimits

0xb5ba,	// (0x00024610) button_value_adjust_pane

0xe36f,	// (0x000273c5) button_value_adjust_pane_cp6_ParamLimits

0xe36f,	// (0x000273c5) button_value_adjust_pane_cp6

0xe477,	// (0x000274cd) settings_code_pane_cp_ParamLimits

0xe477,	// (0x000274cd) settings_code_pane_cp

0x6d14,	// (0x0001fd6a) cell_touch_pane_g1

0x6d14,	// (0x0001fd6a) cell_touch_pane_g2

0x0001,

0xf742,	// (0x00028798) cell_touch_pane_g

0xe5f4,	// (0x0002764a) cell_touch_pane_cp_ParamLimits

0xe5f4,	// (0x0002764a) cell_touch_pane_cp

0xe604,	// (0x0002765a) cell_touch_pane_ParamLimits

0xe604,	// (0x0002765a) cell_touch_pane

0x6d14,	// (0x0001fd6a) scroll_sc2_down_pane_g1

0x6d14,	// (0x0001fd6a) scroll_sc2_up_pane_g1

0x6d96,	// (0x0001fdec) bg_set_opt_pane_cp4_vc

0xc6cf,	// (0x00025725) list_set_graphic_pane_vc_g1_ParamLimits

0xc6cf,	// (0x00025725) list_set_graphic_pane_vc_g1

0xc6db,	// (0x00025731) list_set_graphic_pane_vc_g2_ParamLimits

0xc6db,	// (0x00025731) list_set_graphic_pane_vc_g2

0x0001,

0xfa2e,	// (0x00028a84) list_set_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x00028a84) list_set_graphic_pane_vc_g

0xc6e7,	// (0x0002573d) text_primary_small_cp13_vc_ParamLimits

0xc6e7,	// (0x0002573d) text_primary_small_cp13_vc

0xc6ff,	// (0x00025755) list_set_graphic_pane_vc_ParamLimits

0xc6ff,	// (0x00025755) list_set_graphic_pane_vc

0x6d96,	// (0x0001fdec) input_focus_pane_cp2_vc

0x6d14,	// (0x0001fd6a) setting_code_pane_vc_g1

0xc712,	// (0x00025768) setting_code_pane_vc_t1

0xc720,	// (0x00025776) set_text_pane_vc_t1_ParamLimits

0xc720,	// (0x00025776) set_text_pane_vc_t1

0x6d96,	// (0x0001fdec) input_focus_pane_cp1_vc

0xc73b,	// (0x00025791) list_set_text_pane_vc

0x6d14,	// (0x0001fd6a) setting_text_pane_vc_g1

0x6d96,	// (0x0001fdec) bg_set_opt_pane_cp2_vc

0xc745,	// (0x0002579b) setting_slider_graphic_pane_vc_g1

0xc74d,	// (0x000257a3) setting_slider_graphic_pane_vc_t1

0xc75b,	// (0x000257b1) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x00028a89) setting_slider_graphic_pane_vc_t

0xc769,	// (0x000257bf) slider_set_pane_cp_vc

0xc771,	// (0x000257c7) slider_set_pane_vc_g1

0xc77a,	// (0x000257d0) slider_set_pane_vc_g2

0x0006,

0xfa38,	// (0x00028a8e) slider_set_pane_vc_g

0x7a9d,	// (0x00020af3) set_opt_bg_pane_g1_copy1

0x7aa5,	// (0x00020afb) set_opt_bg_pane_g2_copy1

0xc7a6,	// (0x000257fc) set_opt_bg_pane_g3_copy1

0x7ab5,	// (0x00020b0b) set_opt_bg_pane_g4_copy1

0x7abd,	// (0x00020b13) set_opt_bg_pane_g5_copy1

0x7ac5,	// (0x00020b1b) set_opt_bg_pane_g6_copy1

0xc7ae,	// (0x00025804) set_opt_bg_pane_g7_copy1

0xc7b6,	// (0x0002580c) set_opt_bg_pane_g8_copy1

0xc7be,	// (0x00025814) set_opt_bg_pane_g9_copy1

0x6d96,	// (0x0001fdec) bg_set_opt_pane_cp_vc

0xc7c6,	// (0x0002581c) setting_slider_pane_vc_t1

0xc74d,	// (0x000257a3) setting_slider_pane_vc_t2

0xc75b,	// (0x000257b1) setting_slider_pane_vc_t3

0x0002,

0xfa47,	// (0x00028a9d) setting_slider_pane_vc_t

0xc769,	// (0x000257bf) slider_set_pane_vc

0x9f9c,	// (0x00022ff2) volume_set_pane_vc_g1

0xa283,	// (0x000232d9) volume_set_pane_vc_g2

0xa28c,	// (0x000232e2) volume_set_pane_vc_g3

0xa295,	// (0x000232eb) volume_set_pane_vc_g4

0xa29e,	// (0x000232f4) volume_set_pane_vc_g5

0xa2a7,	// (0x000232fd) volume_set_pane_vc_g6

0xa2b0,	// (0x00023306) volume_set_pane_vc_g7

0xa2b9,	// (0x0002330f) volume_set_pane_vc_g8

0xa2c2,	// (0x00023318) volume_set_pane_vc_g9

0xa2cb,	// (0x00023321) volume_set_pane_vc_g10

0x0009,

0xfa4e,	// (0x00028aa4) volume_set_pane_vc_g

0xc7d5,	// (0x0002582b) volume_set_pane_vc

0xc7dd,	// (0x00025833) button_value_adjust_pane_cp1_vc

0xc7e7,	// (0x0002583d) list_highlight_pane_cp2_vc

0xc7f0,	// (0x00025846) list_set_pane_vc_ParamLimits

0xc7f0,	// (0x00025846) list_set_pane_vc

0xc842,	// (0x00025898) main_pane_set_vc_t1_ParamLimits

0xc842,	// (0x00025898) main_pane_set_vc_t1

0xc857,	// (0x000258ad) main_pane_set_vc_t2_ParamLimits

0xc857,	// (0x000258ad) main_pane_set_vc_t2

0xc869,	// (0x000258bf) main_pane_set_vc_t3_ParamLimits

0xc869,	// (0x000258bf) main_pane_set_vc_t3

0xc87b,	// (0x000258d1) main_pane_set_vc_t4_ParamLimits

0xc87b,	// (0x000258d1) main_pane_set_vc_t4

0x0003,

0xfa63,	// (0x00028ab9) main_pane_set_vc_t_ParamLimits

0xfa63,	// (0x00028ab9) main_pane_set_vc_t

0xc88d,	// (0x000258e3) setting_code_pane_vc_ParamLimits

0xc88d,	// (0x000258e3) setting_code_pane_vc

0xc89c,	// (0x000258f2) setting_slider_graphic_pane_vc

0xc89c,	// (0x000258f2) setting_slider_pane_vc

0xc89c,	// (0x000258f2) setting_text_pane_vc

0xc89c,	// (0x000258f2) setting_volume_pane_vc

0xc8a4,	// (0x000258fa) scroll_pane_cp121_vc

0x7a39,	// (0x00020a8f) set_content_pane_vc

0xd3ed,	// (0x00026443) button_value_adjust_pane_g1

0xd3f6,	// (0x0002644c) button_value_adjust_pane_g2

0x0001,

0xfabd,	// (0x00028b13) button_value_adjust_pane_g

0xd3ff,	// (0x00026455) form_field_slider_wide_pane_vc_t1_ParamLimits

0xd3ff,	// (0x00026455) form_field_slider_wide_pane_vc_t1

0xd415,	// (0x0002646b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xd415,	// (0x0002646b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac2,	// (0x00028b18) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac2,	// (0x00028b18) form_field_slider_wide_pane_vc_t

0x6de4,	// (0x0001fe3a) input_focus_pane_cp10_vc_ParamLimits

0x6de4,	// (0x0001fe3a) input_focus_pane_cp10_vc

0xd42a,	// (0x00026480) slider_cont_pane_cp1_vc_ParamLimits

0xd42a,	// (0x00026480) slider_cont_pane_cp1_vc

0xc771,	// (0x000257c7) slider_form_pane_g1_cp2

0xc77a,	// (0x000257d0) slider_form_pane_g2_cp2

0xd445,	// (0x0002649b) form_field_slider_pane_vc_t3

0xd453,	// (0x000264a9) form_field_slider_pane_vc_t4

0xd461,	// (0x000264b7) slider_form_pane_vc_ParamLimits

0xd461,	// (0x000264b7) slider_form_pane_vc

0xd46e,	// (0x000264c4) form_field_slider_pane_vc_t1_ParamLimits

0xd46e,	// (0x000264c4) form_field_slider_pane_vc_t1

0xd484,	// (0x000264da) form_field_slider_pane_vc_t2_ParamLimits

0xd484,	// (0x000264da) form_field_slider_pane_vc_t2

0x0001,

0xfad2,	// (0x00028b28) form_field_slider_pane_vc_t_ParamLimits

0xfad2,	// (0x00028b28) form_field_slider_pane_vc_t

0x6de4,	// (0x0001fe3a) input_focus_pane_cp9_vc_ParamLimits

0x6de4,	// (0x0001fe3a) input_focus_pane_cp9_vc

0xd496,	// (0x000264ec) slider_cont_pane_vc_ParamLimits

0xd496,	// (0x000264ec) slider_cont_pane_vc

0xd4a8,	// (0x000264fe) list_form_graphic_pane_cp_vc_ParamLimits

0xd4a8,	// (0x000264fe) list_form_graphic_pane_cp_vc

0xb359,	// (0x000243af) form_field_popup_wide_pane_vc_g1

0xd4bd,	// (0x00026513) form_field_popup_wide_pane_vc_t1_ParamLimits

0xd4bd,	// (0x00026513) form_field_popup_wide_pane_vc_t1

0x7a4e,	// (0x00020aa4) input_focus_pane_cp8_vc_ParamLimits

0x7a4e,	// (0x00020aa4) input_focus_pane_cp8_vc

0xd4d2,	// (0x00026528) list_form_wide_pane_vc_ParamLimits

0xd4d2,	// (0x00026528) list_form_wide_pane_vc

0xd4de,	// (0x00026534) list_form_graphic_pane_vc_g1

0xd4e6,	// (0x0002653c) list_form_graphic_pane_vc_t1_ParamLimits

0xd4e6,	// (0x0002653c) list_form_graphic_pane_vc_t1

0x6dfa,	// (0x0001fe50) list_highlight_pane_cp5_vc_ParamLimits

0x6dfa,	// (0x0001fe50) list_highlight_pane_cp5_vc

0xd502,	// (0x00026558) list_form_graphic_pane_vc_ParamLimits

0xd502,	// (0x00026558) list_form_graphic_pane_vc

0xb359,	// (0x000243af) form_field_popup_pane_vc_g1

0xd518,	// (0x0002656e) form_field_popup_pane_vc_t1_ParamLimits

0xd518,	// (0x0002656e) form_field_popup_pane_vc_t1

0x7a4e,	// (0x00020aa4) input_focus_pane_cp7_vc_ParamLimits

0x7a4e,	// (0x00020aa4) input_focus_pane_cp7_vc

0xd52d,	// (0x00026583) list_form_pane_vc_ParamLimits

0xd52d,	// (0x00026583) list_form_pane_vc

0xd539,	// (0x0002658f) data_form_pane_vc_t1_ParamLimits

0xd539,	// (0x0002658f) data_form_pane_vc_t1

0x7a9d,	// (0x00020af3) input_focus_pane_vc_g1

0x7aa5,	// (0x00020afb) input_focus_pane_vc_g2

0x7aad,	// (0x00020b03) input_focus_pane_vc_g3

0x7ab5,	// (0x00020b0b) input_focus_pane_vc_g4

0x7abd,	// (0x00020b13) input_focus_pane_vc_g5

0x7ac5,	// (0x00020b1b) input_focus_pane_vc_g6

0x7acd,	// (0x00020b23) input_focus_pane_vc_g7

0x7ad5,	// (0x00020b2b) input_focus_pane_vc_g8

0x7add,	// (0x00020b33) input_focus_pane_vc_g9

0x6d14,	// (0x0001fd6a) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x00028721) input_focus_pane_vc_g

0xb34d,	// (0x000243a3) data_form_pane_vc_ParamLimits

0xb34d,	// (0x000243a3) data_form_pane_vc

0xb359,	// (0x000243af) form_field_data_pane_vc_g1

0xd554,	// (0x000265aa) form_field_data_pane_vc_t1_ParamLimits

0xd554,	// (0x000265aa) form_field_data_pane_vc_t1

0x7a4e,	// (0x00020aa4) input_focus_pane_vc_ParamLimits

0x7a4e,	// (0x00020aa4) input_focus_pane_vc

0x7fb9,	// (0x0002100f) button_value_adjust_pane_cp3_vc

0xcdde,	// (0x00025e34) button_value_adjust_pane_cp5_vc

0xd56a,	// (0x000265c0) form_field_data_pane_vc_ParamLimits

0xd56a,	// (0x000265c0) form_field_data_pane_vc

0x7fc1,	// (0x00021017) form_field_data_pane_vc_cp2

0xd581,	// (0x000265d7) form_field_data_wide_pane_vc_ParamLimits

0xd581,	// (0x000265d7) form_field_data_wide_pane_vc

0xd597,	// (0x000265ed) form_field_data_wide_pane_vc_cp2

0xd59f,	// (0x000265f5) form_field_popup_pane_vc_ParamLimits

0xd59f,	// (0x000265f5) form_field_popup_pane_vc

0xd5b6,	// (0x0002660c) form_field_popup_wide_pane_vc_ParamLimits

0xd5b6,	// (0x0002660c) form_field_popup_wide_pane_vc

0xd5cc,	// (0x00026622) form_field_slider_pane_vc_ParamLimits

0xd5cc,	// (0x00026622) form_field_slider_pane_vc

0xd5df,	// (0x00026635) form_field_slider_wide_pane_vc_ParamLimits

0xd5df,	// (0x00026635) form_field_slider_wide_pane_vc

0xe616,	// (0x0002766c) grid_touch_1_pane_ParamLimits

0xe616,	// (0x0002766c) grid_touch_1_pane

0xe622,	// (0x00027678) grid_touch_2_pane_ParamLimits

0xe622,	// (0x00027678) grid_touch_2_pane

0x8613,	// (0x00021669) touch_pane_g1_ParamLimits

0x8613,	// (0x00021669) touch_pane_g1

0xd5f2,	// (0x00026648) cell_app_pane_cp_wide_ParamLimits

0xd5f2,	// (0x00026648) cell_app_pane_cp_wide

0xd602,	// (0x00026658) grid_popup_fast_wide_pane_ParamLimits

0xd602,	// (0x00026658) grid_popup_fast_wide_pane

0xd616,	// (0x0002666c) scroll_pane_cp19_ParamLimits

0xd616,	// (0x0002666c) scroll_pane_cp19

0x6d96,	// (0x0001fdec) bg_popup_window_pane_cp20

0xd62a,	// (0x00026680) listscroll_popup_fast_wide_pane

0x6dfa,	// (0x0001fe50) grid_indicator_nsta_pane

0xd632,	// (0x00026688) clock_nsta_pane_g1

0xd63b,	// (0x00026691) clock_nsta_pane_t1

0xe63a,	// (0x00027690) cell_indicator_nsta_pane_ParamLimits

0xe63a,	// (0x00027690) cell_indicator_nsta_pane

0xd657,	// (0x000266ad) cell_indicator_nsta_pane_g1

0xe672,	// (0x000276c8) cell_indicator_nsta_pane_g2

0x0001,

0xfadc,	// (0x00028b32) cell_indicator_nsta_pane_g

0xd665,	// (0x000266bb) clock_nsta_pane_cp

0xd66d,	// (0x000266c3) indicator_nsta_pane_cp

0xd676,	// (0x000266cc) nsta_clock_indic_pane_g1

0x6e62,	// (0x0001feb8) grid_indicator_pane

0x7eef,	// (0x00020f45) scroll_pane_cp29

0x9a8a,	// (0x00022ae0) indicator_nsta_pane_cp2_ParamLimits

0x9a8a,	// (0x00022ae0) indicator_nsta_pane_cp2

0x6dfa,	// (0x0001fe50) main_apps_wheel_pane

0xb46d,	// (0x000244c3) form_midp_field_text_pane_ParamLimits

0xb59a,	// (0x000245f0) scroll_bar_cp050_ParamLimits

0xd6ae,	// (0x00026704) cell_indicator_pane_ParamLimits

0xd6ae,	// (0x00026704) cell_indicator_pane

0xd6c4,	// (0x0002671a) cell_indicator_pane_g1

0xe687,	// (0x000276dd) grid_wheel_folder_pane_ParamLimits

0xe687,	// (0x000276dd) grid_wheel_folder_pane

0xe699,	// (0x000276ef) list_wheel_apps_pane_ParamLimits

0xe699,	// (0x000276ef) list_wheel_apps_pane

0xe6a8,	// (0x000276fe) main_apps_wheel_pane_g1_ParamLimits

0xe6a8,	// (0x000276fe) main_apps_wheel_pane_g1

0xe6bc,	// (0x00027712) main_apps_wheel_pane_g2_ParamLimits

0xe6bc,	// (0x00027712) main_apps_wheel_pane_g2

0x0001,

0xfaeb,	// (0x00028b41) main_apps_wheel_pane_g_ParamLimits

0xfaeb,	// (0x00028b41) main_apps_wheel_pane_g

0xe6d0,	// (0x00027726) main_apps_wheel_pane_t1_ParamLimits

0xe6d0,	// (0x00027726) main_apps_wheel_pane_t1

0xe6ef,	// (0x00027745) list_wheel_apps_pane_g1

0xe6f7,	// (0x0002774d) list_wheel_apps_pane_g2

0xe6ff,	// (0x00027755) list_wheel_apps_pane_g3

0xe707,	// (0x0002775d) list_wheel_apps_pane_g4

0xe70f,	// (0x00027765) list_wheel_apps_pane_g5

0x0004,

0xfaf0,	// (0x00028b46) list_wheel_apps_pane_g

0x6dfa,	// (0x0001fe50) navi_icon_text_pane

0xdca6,	// (0x00026cfc) aid_fill_nsta

0xe72e,	// (0x00027784) navi_icon_text_pane_g1

0xe73a,	// (0x00027790) navi_icon_text_pane_t1

0x8182,	// (0x000211d8) list_set_graphic_pane_t1_ParamLimits

0x8182,	// (0x000211d8) list_set_graphic_pane_t1

0xbc43,	// (0x00024c99) popup_midp_note_alarm_window_t6_ParamLimits

0xbc43,	// (0x00024c99) popup_midp_note_alarm_window_t6

0xbc55,	// (0x00024cab) popup_midp_note_alarm_window_t7_ParamLimits

0xbc55,	// (0x00024cab) popup_midp_note_alarm_window_t7

0xbc67,	// (0x00024cbd) popup_midp_note_alarm_window_t8_ParamLimits

0xbc67,	// (0x00024cbd) popup_midp_note_alarm_window_t8

0xbc79,	// (0x00024ccf) popup_midp_note_alarm_window_t9_ParamLimits

0xbc79,	// (0x00024ccf) popup_midp_note_alarm_window_t9

0xbc8b,	// (0x00024ce1) popup_midp_note_alarm_window_t10_ParamLimits

0xbc8b,	// (0x00024ce1) popup_midp_note_alarm_window_t10

0xbc9d,	// (0x00024cf3) popup_midp_note_alarm_window_t11_ParamLimits

0xbc9d,	// (0x00024cf3) popup_midp_note_alarm_window_t11

0xbcaf,	// (0x00024d05) scroll_pane_cp17_ParamLimits

0xbcaf,	// (0x00024d05) scroll_pane_cp17

0x9f9c,	// (0x00022ff2) volume_small_pane_cp_g1

0xa2d4,	// (0x0002332a) volume_small_pane_cp_g2

0xa2dd,	// (0x00023333) volume_small_pane_cp_g3

0xa2e6,	// (0x0002333c) volume_small_pane_cp_g4

0x9fc9,	// (0x0002301f) volume_small_pane_cp_g5

0xa2ef,	// (0x00023345) volume_small_pane_cp_g6

0xa2f8,	// (0x0002334e) volume_small_pane_cp_g7

0xa301,	// (0x00023357) volume_small_pane_cp_g8

0xa30a,	// (0x00023360) volume_small_pane_cp_g9

0xa313,	// (0x00023369) volume_small_pane_cp_g10

0x8431,	// (0x00021487) midp_ticker_pane_g1_ParamLimits

0x843d,	// (0x00021493) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x000287e9) midp_ticker_pane_g_ParamLimits

0x8449,	// (0x0002149f) midp_ticker_pane_t1_ParamLimits

0xdcb6,	// (0x00026d0c) aid_fill_nsta_2

0xb586,	// (0x000245dc) list_form2_midp_pane

0xc355,	// (0x000253ab) midp_editing_number_pane_ParamLimits

0xc361,	// (0x000253b7) midp_ticker_pane_ParamLimits

0xe74c,	// (0x000277a2) form2_midp_field_pane

0xe770,	// (0x000277c6) scroll_pane_cp51

0xe790,	// (0x000277e6) form2_midp_button_pane_ParamLimits

0xe790,	// (0x000277e6) form2_midp_button_pane

0xe7a2,	// (0x000277f8) form2_midp_content_pane_ParamLimits

0xe7a2,	// (0x000277f8) form2_midp_content_pane

0xe7bc,	// (0x00027812) form2_midp_field_choice_group_pane

0xe7c4,	// (0x0002781a) form2_midp_field_pane_g1

0xe7cc,	// (0x00027822) form2_midp_field_pane_g2

0xe7d4,	// (0x0002782a) form2_midp_field_pane_g3

0xe7dc,	// (0x00027832) form2_midp_field_pane_g4

0x0003,

0xfb15,	// (0x00028b6b) form2_midp_field_pane_g

0xe7e4,	// (0x0002783a) form2_midp_gauge_slider_pane

0xe7ec,	// (0x00027842) form2_midp_gauge_wait_pane

0xe7f4,	// (0x0002784a) form2_midp_image_pane_ParamLimits

0xe7f4,	// (0x0002784a) form2_midp_image_pane

0xe80f,	// (0x00027865) form2_midp_label_pane_ParamLimits

0xe80f,	// (0x00027865) form2_midp_label_pane

0xe828,	// (0x0002787e) form2_midp_label_pane_cp_ParamLimits

0xe828,	// (0x0002787e) form2_midp_label_pane_cp

0xe847,	// (0x0002789d) form2_midp_string_pane_ParamLimits

0xe847,	// (0x0002789d) form2_midp_string_pane

0xd6ce,	// (0x00026724) form2_midp_text_pane_ParamLimits

0xd6ce,	// (0x00026724) form2_midp_text_pane

0xe859,	// (0x000278af) form2_midp_time_pane

0xe869,	// (0x000278bf) input_focus_pane_cp51_ParamLimits

0xe869,	// (0x000278bf) input_focus_pane_cp51

0xe881,	// (0x000278d7) form2_midp_label_pane_t1_ParamLimits

0xe881,	// (0x000278d7) form2_midp_label_pane_t1

0xd6e7,	// (0x0002673d) form2_mdip_text_pane_t1_ParamLimits

0xd6e7,	// (0x0002673d) form2_mdip_text_pane_t1

0xd704,	// (0x0002675a) form2_midp_time_pane_t1

0xe8c9,	// (0x0002791f) form2_midp_gauge_slider_pane_t1

0xe8db,	// (0x00027931) form2_midp_gauge_slider_pane_t2

0xe8ed,	// (0x00027943) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1e,	// (0x00028b74) form2_midp_gauge_slider_pane_t

0xe8ff,	// (0x00027955) form2_midp_slider_pane

0xe90b,	// (0x00027961) form2_midp_gauge_wait_pane_t1

0xe919,	// (0x0002796f) form2_midp_wait_pane_ParamLimits

0xe919,	// (0x0002796f) form2_midp_wait_pane

0x9908,	// (0x0002295e) list_single_2graphic_pane_cp4_ParamLimits

0x9908,	// (0x0002295e) list_single_2graphic_pane_cp4

0xe18e,	// (0x000271e4) list_single_midp_graphic_pane_cp_ParamLimits

0xe18e,	// (0x000271e4) list_single_midp_graphic_pane_cp

0x6d96,	// (0x0001fdec) list_highlight_pane_cp20

0xe944,	// (0x0002799a) list_single_2graphic_pane_g1_cp4

0xc3d6,	// (0x0002542c) list_single_2graphic_pane_g2_cp4

0xe94c,	// (0x000279a2) list_single_2graphic_pane_t1_cp4

0x6dfa,	// (0x0001fe50) list_highlight_pane_cp21

0xe95b,	// (0x000279b1) list_single_midp_graphic_pane_g4_cp

0xe96a,	// (0x000279c0) list_single_midp_graphic_pane_t1_cp

0xe97f,	// (0x000279d5) form2_mdip_string_pane_t1_ParamLimits

0xe97f,	// (0x000279d5) form2_mdip_string_pane_t1

0x6d96,	// (0x0001fdec) bg_wml_button_pane_cp2

0x6d14,	// (0x0001fd6a) form2_midp_image_pane_g1

0xcbad,	// (0x00025c03) list_double_large_graphic_pane_g5_ParamLimits

0xcbad,	// (0x00025c03) list_double_large_graphic_pane_g5

0x9ba5,	// (0x00022bfb) midp_form_pane_ParamLimits

0x6dfa,	// (0x0001fe50) main_apps_wheel_pane_ParamLimits

0xdb48,	// (0x00026b9e) popup_preview_window_ParamLimits

0xdb48,	// (0x00026b9e) popup_preview_window

0xb029,	// (0x0002407f) popup_touch_info_window_ParamLimits

0xb029,	// (0x0002407f) popup_touch_info_window

0xb047,	// (0x0002409d) popup_touch_menu_window_ParamLimits

0xb047,	// (0x0002409d) popup_touch_menu_window

0x6d0a,	// (0x0001fd60) bg_popup_sub_pane_cp6

0xe9f7,	// (0x00027a4d) list_touch_menu_pane

0xe9ff,	// (0x00027a55) list_single_touch_menu_pane_ParamLimits

0xe9ff,	// (0x00027a55) list_single_touch_menu_pane

0xea16,	// (0x00027a6c) list_single_touch_menu_pane_t1

0x6dfa,	// (0x0001fe50) bg_popup_sub_pane_cp7_ParamLimits

0x6dfa,	// (0x0001fe50) bg_popup_sub_pane_cp7

0xea24,	// (0x00027a7a) heading_sub_pane

0xea2c,	// (0x00027a82) list_touch_info_pane_ParamLimits

0xea2c,	// (0x00027a82) list_touch_info_pane

0xea3b,	// (0x00027a91) list_single_touch_info_pane_ParamLimits

0xea3b,	// (0x00027a91) list_single_touch_info_pane

0xea4c,	// (0x00027aa2) list_single_touch_info_pane_t1

0xea5a,	// (0x00027ab0) list_single_touch_info_pane_t2

0x0001,

0xfb2c,	// (0x00028b82) list_single_touch_info_pane_t

0x8407,	// (0x0002145d) bg_popup_heading_pane_cp

0xea68,	// (0x00027abe) heading_sub_pane_t1

0xb313,	// (0x00024369) bg_popup_preview_window_pane_cp_ParamLimits

0xb313,	// (0x00024369) bg_popup_preview_window_pane_cp

0xea24,	// (0x00027a7a) heading_preview_pane

0xea2c,	// (0x00027a82) list_preview_pane_ParamLimits

0xea2c,	// (0x00027a82) list_preview_pane

0xea76,	// (0x00027acc) popup_preview_window_g1

0xea3b,	// (0x00027a91) list_single_preview_pane_ParamLimits

0xea3b,	// (0x00027a91) list_single_preview_pane

0xea7e,	// (0x00027ad4) list_single_preview_pane_g1

0xea86,	// (0x00027adc) list_single_preview_pane_t1

0xea4c,	// (0x00027aa2) list_single_preview_pane_t2

0x0001,

0xfb31,	// (0x00028b87) list_single_preview_pane_t

0xea94,	// (0x00027aea) bg_popup_heading_pane_cp2_ParamLimits

0xea94,	// (0x00027aea) bg_popup_heading_pane_cp2

0xeaaa,	// (0x00027b00) heading_preview_pane_g1

0xeab2,	// (0x00027b08) heading_preview_pane_t1_ParamLimits

0xeab2,	// (0x00027b08) heading_preview_pane_t1

0x6e79,	// (0x0001fecf) soft_indicator_pane_t1_ParamLimits

0x731d,	// (0x00020373) scroll_pane_ParamLimits

0x7df4,	// (0x00020e4a) scroll_sc2_left_pane

0x7deb,	// (0x00020e41) scroll_sc2_right_pane

0x7e13,	// (0x00020e69) scroll_bg_pane_g1_ParamLimits

0x7e28,	// (0x00020e7e) scroll_bg_pane_g2_ParamLimits

0x7e40,	// (0x00020e96) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x00028778) scroll_bg_pane_g_ParamLimits

0x7e13,	// (0x00020e69) scroll_handle_pane_g1_ParamLimits

0x7e62,	// (0x00020eb8) scroll_handle_pane_g2_ParamLimits

0x7e40,	// (0x00020e96) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0002877f) scroll_handle_pane_g_ParamLimits

0xaf81,	// (0x00023fd7) popup_choice_list_window_ParamLimits

0xaf81,	// (0x00023fd7) popup_choice_list_window

0xb17b,	// (0x000241d1) choice_list_pane

0xb1f1,	// (0x00024247) cell_toolbar_pane_t1

0xb219,	// (0x0002426f) toolbar_button_pane_ParamLimits

0xc0b6,	// (0x0002510c) ai_gene_pane_1_t2_ParamLimits

0xc0b6,	// (0x0002510c) ai_gene_pane_1_t2

0x0001,

0xf946,	// (0x0002899c) ai_gene_pane_1_t_ParamLimits

0xf946,	// (0x0002899c) ai_gene_pane_1_t

0xeacf,	// (0x00027b25) scroll_sc2_left_pane_g1

0xeacf,	// (0x00027b25) scroll_sc2_right_pane_g1

0xaf67,	// (0x00023fbd) bg_popup_sub_pane_cp10

0xead9,	// (0x00027b2f) list_choice_list_pane

0xeaf0,	// (0x00027b46) list_single_choice_list_pane_ParamLimits

0xeaf0,	// (0x00027b46) list_single_choice_list_pane

0xeb04,	// (0x00027b5a) list_single_choice_list_pane_g1

0x7bb5,	// (0x00020c0b) list_single_choice_list_pane_t1_ParamLimits

0x7bb5,	// (0x00020c0b) list_single_choice_list_pane_t1

0xeb0c,	// (0x00027b62) choice_list_pane_g1

0xeb14,	// (0x00027b6a) choice_list_pane_t1

0x6d0a,	// (0x0001fd60) input_focus_pane_cp11

0x7d40,	// (0x00020d96) title_pane_stacon_g2_ParamLimits

0x7d40,	// (0x00020d96) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0002875e) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0002875e) title_pane_stacon_g

0x8407,	// (0x0002145d) cursor_press_pane

0xd995,	// (0x000269eb) popup_fep_hwr_window_ParamLimits

0xd995,	// (0x000269eb) popup_fep_hwr_window

0xafd3,	// (0x00024029) popup_fep_vkb_window_ParamLimits

0xafd3,	// (0x00024029) popup_fep_vkb_window

0xeb22,	// (0x00027b78) cursor_press_pane_g1

0x0002,

0xfb5a,	// (0x00028bb0) fep_vkb_side_pane_g_ParamLimits

0xa351,	// (0x000233a7) fep_hwr_candidate_pane_ParamLimits

0xa351,	// (0x000233a7) fep_hwr_candidate_pane

0xa379,	// (0x000233cf) fep_hwr_side_pane_ParamLimits

0xa379,	// (0x000233cf) fep_hwr_side_pane

0xa399,	// (0x000233ef) fep_hwr_top_pane_ParamLimits

0xa399,	// (0x000233ef) fep_hwr_top_pane

0xa3b1,	// (0x00023407) fep_hwr_write_pane_ParamLimits

0xa3b1,	// (0x00023407) fep_hwr_write_pane

0xfb5a,	// (0x00028bb0) fep_vkb_side_pane_g

0xeb38,	// (0x00027b8e) fep_hwr_top_pane_g1

0xeb4a,	// (0x00027ba0) fep_hwr_top_pane_g2

0xa3eb,	// (0x00023441) fep_hwr_top_pane_g3

0x0002,

0xfb36,	// (0x00028b8c) fep_hwr_top_pane_g

0xa400,	// (0x00023456) fep_hwr_top_text_pane

0x7f5c,	// (0x00020fb2) fep_hwr_top_text_pane_g1

0xeb80,	// (0x00027bd6) fep_hwr_top_text_pane_t1

0xa4ee,	// (0x00023544) fep_hwr_candidate_pane_g1

0xed90,	// (0x00027de6) fep_vkb_keypad_pane_g3_ParamLimits

0xed90,	// (0x00027de6) fep_vkb_keypad_pane_g3

0xedb2,	// (0x00027e08) fep_vkb_keypad_pane_g4_ParamLimits

0xedb2,	// (0x00027e08) fep_vkb_keypad_pane_g4

0xee21,	// (0x00027e77) fep_vkb_bottom_pane_g2_ParamLimits

0xee21,	// (0x00027e77) fep_vkb_bottom_pane_g2

0x0001,

0xfb61,	// (0x00028bb7) fep_vkb_bottom_pane_g_ParamLimits

0xfb61,	// (0x00028bb7) fep_vkb_bottom_pane_g

0xeacf,	// (0x00027b25) cell_vkb_side_pane_g2

0x0001,

0xfb6b,	// (0x00028bc1) cell_vkb_side_pane_g

0xeeac,	// (0x00027f02) cell_vkb_side_pane_t1

0xeeba,	// (0x00027f10) cell_vkb_side_pane_t1_copy1

0xeacf,	// (0x00027b25) bg_fep_vkb_candidate_pane_g2

0xefde,	// (0x00028034) cell_vkb_candidate_pane_ParamLimits

0xeb8e,	// (0x00027be4) aid_size_cell_vkb_ParamLimits

0xeb8e,	// (0x00027be4) aid_size_cell_vkb

0xefde,	// (0x00028034) cell_vkb_candidate_pane

0xa515,	// (0x0002356b) bg_popup_fep_shadow_pane_g1

0xec04,	// (0x00027c5a) fep_vkb_bottom_pane_ParamLimits

0xec04,	// (0x00027c5a) fep_vkb_bottom_pane

0xec41,	// (0x00027c97) fep_vkb_candidate_pane_ParamLimits

0xec41,	// (0x00027c97) fep_vkb_candidate_pane

0xec5d,	// (0x00027cb3) fep_vkb_keypad_pane_ParamLimits

0xec5d,	// (0x00027cb3) fep_vkb_keypad_pane

0xec91,	// (0x00027ce7) fep_vkb_side_pane_ParamLimits

0xec91,	// (0x00027ce7) fep_vkb_side_pane

0xecbd,	// (0x00027d13) fep_vkb_top_pane_ParamLimits

0xecbd,	// (0x00027d13) fep_vkb_top_pane

0xece9,	// (0x00027d3f) fep_vkb_top_pane_g1_ParamLimits

0xece9,	// (0x00027d3f) fep_vkb_top_pane_g1

0xecf8,	// (0x00027d4e) fep_vkb_top_pane_g2_ParamLimits

0xecf8,	// (0x00027d4e) fep_vkb_top_pane_g2

0xed07,	// (0x00027d5d) fep_vkb_top_pane_g3_ParamLimits

0xed07,	// (0x00027d5d) fep_vkb_top_pane_g3

0x0003,

0xfb51,	// (0x00028ba7) fep_vkb_top_pane_g_ParamLimits

0xfb51,	// (0x00028ba7) fep_vkb_top_pane_g

0xed25,	// (0x00027d7b) fep_vkb_top_text_pane_ParamLimits

0xed25,	// (0x00027d7b) fep_vkb_top_text_pane

0xed36,	// (0x00027d8c) fep_vkb_side_pane_g1_ParamLimits

0xed36,	// (0x00027d8c) fep_vkb_side_pane_g1

0xed7f,	// (0x00027dd5) grid_vkb_side_pane_ParamLimits

0xed7f,	// (0x00027dd5) grid_vkb_side_pane

0xa51d,	// (0x00023573) bg_popup_fep_shadow_pane_g2

0xa526,	// (0x0002357c) bg_popup_fep_shadow_pane_g3

0xa52e,	// (0x00023584) bg_popup_fep_shadow_pane_g4

0xa537,	// (0x0002358d) bg_popup_fep_shadow_pane_g5

0xa53f,	// (0x00023595) bg_popup_fep_shadow_pane_g6

0xa547,	// (0x0002359d) bg_popup_fep_shadow_pane_g7

0x7ab5,	// (0x00020b0b) bg_popup_fep_shadow_pane_g8

0xedd0,	// (0x00027e26) grid_vkb_keypad_number_pane_ParamLimits

0xedd0,	// (0x00027e26) grid_vkb_keypad_number_pane

0xede0,	// (0x00027e36) grid_vkb_keypad_pane_ParamLimits

0xede0,	// (0x00027e36) grid_vkb_keypad_pane

0xee06,	// (0x00027e5c) fep_vkb_bottom_pane_g1_ParamLimits

0xee06,	// (0x00027e5c) fep_vkb_bottom_pane_g1

0xee2f,	// (0x00027e85) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xee2f,	// (0x00027e85) grid_vkb_keypad_bottom_left_pane

0xee44,	// (0x00027e9a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xee44,	// (0x00027e9a) grid_vkb_keypad_bottom_right_pane

0xee59,	// (0x00027eaf) fep_vkb_top_text_pane_g1

0xee74,	// (0x00027eca) fep_vkb_top_text_pane_t1

0xee89,	// (0x00027edf) cell_vkb_side_pane_ParamLimits

0xee89,	// (0x00027edf) cell_vkb_side_pane

0xeacf,	// (0x00027b25) cell_vkb_side_pane_g1

0xeec8,	// (0x00027f1e) cell_vkb_keypad_pane_ParamLimits

0xeec8,	// (0x00027f1e) cell_vkb_keypad_pane

0xef35,	// (0x00027f8b) cell_vkb_keypad_pane_g1

0x0008,

0xfb7e,	// (0x00028bd4) bg_popup_fep_shadow_pane_g

0xa557,	// (0x000235ad) cell_hwr_side_pane_g1

0xa557,	// (0x000235ad) cell_hwr_side_pane_g2

0xef3f,	// (0x00027f95) cell_vkb_keypad_pane_t1

0xef4d,	// (0x00027fa3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xef4d,	// (0x00027fa3) cell_vkb_keypad_bottom_left_pane

0xef6a,	// (0x00027fc0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xef6a,	// (0x00027fc0) cell_vkb_keypad_bottom_right_pane

0xeacf,	// (0x00027b25) cell_vkb_keypad_bottom_left_pane_g1

0xeacf,	// (0x00027b25) cell_vkb_keypad_bottom_right_pane_g1

0xefa3,	// (0x00027ff9) cell_vkb_keypad_number_pane_ParamLimits

0xefa3,	// (0x00027ff9) cell_vkb_keypad_number_pane

0xefc2,	// (0x00028018) cell_vkb_keypad_number_pane_g1

0xefcc,	// (0x00028022) cell_vkb_keypad_number_pane_g2

0xefd5,	// (0x0002802b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb70,	// (0x00028bc6) cell_vkb_keypad_number_pane_g

0xef3f,	// (0x00027f95) cell_vkb_keypad_number_pane_t1

0xeff7,	// (0x0002804d) fep_vkb_candidate_pane_g1

0x0001,

0xfb91,	// (0x00028be7) cell_hwr_side_pane_g

0xf010,	// (0x00028066) cell_hwr_side_pane_t1

0xa561,	// (0x000235b7) cell_hwr_side_pane_t1_copy1

0xa56f,	// (0x000235c5) cell_hwr_candidate_pane_g1

0xa59e,	// (0x000235f4) cell_hwr_candidate_pane_t1

0xeacf,	// (0x00027b25) cell_vkb_candidate_pane_g2

0xf054,	// (0x000280aa) cell_vkb_candidate_pane_t1

0xa31c,	// (0x00023372) bg_popup_fep_shadow_pane_ParamLimits

0xa31c,	// (0x00023372) bg_popup_fep_shadow_pane

0xa3cb,	// (0x00023421) bg_fep_hwr_top_pane_g4

0xeb5c,	// (0x00027bb2) bg_hwr_side_pane_g1_ParamLimits

0xeb5c,	// (0x00027bb2) bg_hwr_side_pane_g1

0xa43c,	// (0x00023492) cell_hwr_side_pane_ParamLimits

0xa43c,	// (0x00023492) cell_hwr_side_pane

0xa477,	// (0x000234cd) fep_hwr_write_pane_g1_ParamLimits

0xa477,	// (0x000234cd) fep_hwr_write_pane_g1

0xa484,	// (0x000234da) fep_hwr_write_pane_g2_ParamLimits

0xa484,	// (0x000234da) fep_hwr_write_pane_g2

0xa491,	// (0x000234e7) fep_hwr_write_pane_g3_ParamLimits

0xa491,	// (0x000234e7) fep_hwr_write_pane_g3

0xa49f,	// (0x000234f5) fep_hwr_write_pane_g4_ParamLimits

0xa49f,	// (0x000234f5) fep_hwr_write_pane_g4

0x0005,

0xfb3d,	// (0x00028b93) fep_hwr_write_pane_g_ParamLimits

0xfb3d,	// (0x00028b93) fep_hwr_write_pane_g

0xa3cb,	// (0x00023421) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa3cb,	// (0x00023421) bg_fep_hwr_candidate_pane_g2

0xa4b4,	// (0x0002350a) cell_hwr_candidate_pane_ParamLimits

0xa4b4,	// (0x0002350a) cell_hwr_candidate_pane

0xa4ee,	// (0x00023544) fep_hwr_candidate_pane_g1_ParamLimits

0xebbc,	// (0x00027c12) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xebbc,	// (0x00027c12) bg_popup_fep_shadow_pane_cp2

0xed17,	// (0x00027d6d) fep_vkb_top_pane_g4_ParamLimits

0xed17,	// (0x00027d6d) fep_vkb_top_pane_g4

0xed5d,	// (0x00027db3) fep_vkb_side_pane_g2_ParamLimits

0xed5d,	// (0x00027db3) fep_vkb_side_pane_g2

0xcd0f,	// (0x00025d65) list_setting_pane_t4_ParamLimits

0xcd0f,	// (0x00025d65) list_setting_pane_t4

0xcd9d,	// (0x00025df3) list_setting_number_pane_t5_ParamLimits

0xcd9d,	// (0x00025df3) list_setting_number_pane_t5

0x98f8,	// (0x0002294e) list_double_heading_pane_cp2_ParamLimits

0x98f8,	// (0x0002294e) list_double_heading_pane_cp2

0x827c,	// (0x000212d2) list_double_heading_pane_g1_cp2_ParamLimits

0x827c,	// (0x000212d2) list_double_heading_pane_g1_cp2

0xf062,	// (0x000280b8) list_double_heading_pane_g2_cp2_ParamLimits

0xf062,	// (0x000280b8) list_double_heading_pane_g2_cp2

0xf076,	// (0x000280cc) list_double_heading_pane_t1_cp2_ParamLimits

0xf076,	// (0x000280cc) list_double_heading_pane_t1_cp2

0xf08c,	// (0x000280e2) list_double_heading_pane_t2_cp2_ParamLimits

0xf08c,	// (0x000280e2) list_double_heading_pane_t2_cp2

0x6d02,	// (0x0001fd58) aid_value_unit2

0x9216,	// (0x0002226c) popup_preview_fixed_window

0x6f59,	// (0x0001ffaf) bg_popup_preview_window_pane_cp02

0xf09e,	// (0x000280f4) list_preview_fixed_pane

0xf126,	// (0x0002817c) list_empty_pane_fp_ParamLimits

0xf126,	// (0x0002817c) list_empty_pane_fp

0xf126,	// (0x0002817c) list_single_cale_day_pane_fp_ParamLimits

0xf126,	// (0x0002817c) list_single_cale_day_pane_fp

0xf126,	// (0x0002817c) list_single_graphic_heading_pane_fp_ParamLimits

0xf126,	// (0x0002817c) list_single_graphic_heading_pane_fp

0xf126,	// (0x0002817c) list_single_graphic_pane_fp_ParamLimits

0xf126,	// (0x0002817c) list_single_graphic_pane_fp

0xf126,	// (0x0002817c) list_single_heading_pane_fp_ParamLimits

0xf126,	// (0x0002817c) list_single_heading_pane_fp

0xf126,	// (0x0002817c) list_single_pane_fp_ParamLimits

0xf126,	// (0x0002817c) list_single_pane_fp

0xf13a,	// (0x00028190) list_single_pane_fp_g1_ParamLimits

0xf13a,	// (0x00028190) list_single_pane_fp_g1

0xccce,	// (0x00025d24) list_single_pane_fp_g2_ParamLimits

0xccce,	// (0x00025d24) list_single_pane_fp_g2

0xd717,	// (0x0002676d) list_single_pane_fp_g3_ParamLimits

0xd717,	// (0x0002676d) list_single_pane_fp_g3

0xf146,	// (0x0002819c) list_single_pane_fp_g4_ParamLimits

0xf146,	// (0x0002819c) list_single_pane_fp_g4

0x0003,

0xfba4,	// (0x00028bfa) list_single_pane_fp_g_ParamLimits

0xfba4,	// (0x00028bfa) list_single_pane_fp_g

0xd72b,	// (0x00026781) list_single_pane_fp_t1_ParamLimits

0xd72b,	// (0x00026781) list_single_pane_fp_t1

0xd742,	// (0x00026798) list_single_graphic_pane_fp_g1_ParamLimits

0xd742,	// (0x00026798) list_single_graphic_pane_fp_g1

0xf13a,	// (0x00028190) list_single_graphic_pane_fp_g2_ParamLimits

0xf13a,	// (0x00028190) list_single_graphic_pane_fp_g2

0xccce,	// (0x00025d24) list_single_graphic_pane_fp_g3_ParamLimits

0xccce,	// (0x00025d24) list_single_graphic_pane_fp_g3

0xd717,	// (0x0002676d) list_single_graphic_pane_fp_g4_ParamLimits

0xd717,	// (0x0002676d) list_single_graphic_pane_fp_g4

0xf146,	// (0x0002819c) list_single_graphic_pane_fp_g5_ParamLimits

0xf146,	// (0x0002819c) list_single_graphic_pane_fp_g5

0x0004,

0xfbad,	// (0x00028c03) list_single_graphic_pane_fp_g_ParamLimits

0xfbad,	// (0x00028c03) list_single_graphic_pane_fp_g

0xd74e,	// (0x000267a4) list_single_graphic_pane_fp_t1_ParamLimits

0xd74e,	// (0x000267a4) list_single_graphic_pane_fp_t1

0xd742,	// (0x00026798) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd742,	// (0x00026798) list_single_graphic_heading_pane_fp_g1

0xf13a,	// (0x00028190) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf13a,	// (0x00028190) list_single_graphic_heading_pane_fp_g2

0xccce,	// (0x00025d24) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xccce,	// (0x00025d24) list_single_graphic_heading_pane_fp_g3

0xd717,	// (0x0002676d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd717,	// (0x0002676d) list_single_graphic_heading_pane_fp_g4

0xf146,	// (0x0002819c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf146,	// (0x0002819c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbad,	// (0x00028c03) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbad,	// (0x00028c03) list_single_graphic_heading_pane_fp_g

0xd764,	// (0x000267ba) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd764,	// (0x000267ba) list_single_graphic_heading_pane_fp_t1

0xd77a,	// (0x000267d0) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd77a,	// (0x000267d0) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00028c0e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00028c0e) list_single_graphic_heading_pane_fp_t

0xd78c,	// (0x000267e2) list_single_cale_day_pane_fp_g1_ParamLimits

0xd78c,	// (0x000267e2) list_single_cale_day_pane_fp_g1

0xf152,	// (0x000281a8) list_single_cale_day_pane_fp_g2_ParamLimits

0xf152,	// (0x000281a8) list_single_cale_day_pane_fp_g2

0xd7c4,	// (0x0002681a) list_single_cale_day_pane_fp_g3_ParamLimits

0xd7c4,	// (0x0002681a) list_single_cale_day_pane_fp_g3

0xd7ec,	// (0x00026842) list_single_cale_day_pane_fp_g4_ParamLimits

0xd7ec,	// (0x00026842) list_single_cale_day_pane_fp_g4

0xd810,	// (0x00026866) list_single_cale_day_pane_fp_g5_ParamLimits

0xd810,	// (0x00026866) list_single_cale_day_pane_fp_g5

0x0004,

0xfbbd,	// (0x00028c13) list_single_cale_day_pane_fp_g_ParamLimits

0xfbbd,	// (0x00028c13) list_single_cale_day_pane_fp_g

0xd834,	// (0x0002688a) list_single_cale_day_pane_fp_t1_ParamLimits

0xd834,	// (0x0002688a) list_single_cale_day_pane_fp_t1

0xd85a,	// (0x000268b0) list_single_cale_day_pane_fp_t2_ParamLimits

0xd85a,	// (0x000268b0) list_single_cale_day_pane_fp_t2

0xd873,	// (0x000268c9) list_single_cale_day_pane_fp_t3_ParamLimits

0xd873,	// (0x000268c9) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc8,	// (0x00028c1e) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc8,	// (0x00028c1e) list_single_cale_day_pane_fp_t

0xf13a,	// (0x00028190) list_empty_pane_fp_g1_ParamLimits

0xf13a,	// (0x00028190) list_empty_pane_fp_g1

0xd88c,	// (0x000268e2) list_empty_pane_fp_t1

0xd89a,	// (0x000268f0) list_empty_pane_fp_t2

0x0001,

0xfbcf,	// (0x00028c25) list_empty_pane_fp_t

0xf13a,	// (0x00028190) list_single_heading_pane_fp_g1_ParamLimits

0xf13a,	// (0x00028190) list_single_heading_pane_fp_g1

0xccce,	// (0x00025d24) list_single_heading_pane_fp_g2_ParamLimits

0xccce,	// (0x00025d24) list_single_heading_pane_fp_g2

0xd717,	// (0x0002676d) list_single_heading_pane_fp_g3_ParamLimits

0xd717,	// (0x0002676d) list_single_heading_pane_fp_g3

0x0002,

0xfbd4,	// (0x00028c2a) list_single_heading_pane_fp_g_ParamLimits

0xfbd4,	// (0x00028c2a) list_single_heading_pane_fp_g

0xd8a8,	// (0x000268fe) list_single_heading_pane_fp_t1_ParamLimits

0xd8a8,	// (0x000268fe) list_single_heading_pane_fp_t1

0xd8ba,	// (0x00026910) list_single_heading_pane_fp_t2_ParamLimits

0xd8ba,	// (0x00026910) list_single_heading_pane_fp_t2

0x0001,

0xfbdb,	// (0x00028c31) list_single_heading_pane_fp_t_ParamLimits

0xfbdb,	// (0x00028c31) list_single_heading_pane_fp_t

0x7bca,	// (0x00020c20) aid_size_cell_fast

0x6f3c,	// (0x0001ff92) soft_indicator_pane_cp1_t1

0x7c07,	// (0x00020c5d) cell_app_pane_cp2_ParamLimits

0x7c07,	// (0x00020c5d) cell_app_pane_cp2

0xa33e,	// (0x00023394) fep_hwr_candidate_drop_down_list_pane

0xa508,	// (0x0002355e) fep_hwr_candidate_pane_g3_ParamLimits

0xa508,	// (0x0002355e) fep_hwr_candidate_pane_g3

0x6bea,	// (0x0001fc40) fep_hwr_candidate_pane_g4_ParamLimits

0x6bea,	// (0x0001fc40) fep_hwr_candidate_pane_g4

0x0002,

0xfb4a,	// (0x00028ba0) fep_hwr_candidate_pane_g_ParamLimits

0xfb4a,	// (0x00028ba0) fep_hwr_candidate_pane_g

0xec30,	// (0x00027c86) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xec30,	// (0x00027c86) fep_vkb_candidate_drop_down_list_pane

0xefff,	// (0x00028055) fep_vkb_candidate_pane_g3

0xf007,	// (0x0002805d) fep_vkb_candidate_pane_g4

0x0002,

0xfb77,	// (0x00028bcd) fep_vkb_candidate_pane_g

0xa56f,	// (0x000235c5) cell_hwr_candidate_pane_g1_ParamLimits

0xa57d,	// (0x000235d3) cell_hwr_candidate_pane_g3_ParamLimits

0xa57d,	// (0x000235d3) cell_hwr_candidate_pane_g3

0x1d8d,	// (0x0001ade3) cell_hwr_candidate_pane_g4_ParamLimits

0x1d8d,	// (0x0001ade3) cell_hwr_candidate_pane_g4

0x0002,

0xfb96,	// (0x00028bec) cell_hwr_candidate_pane_g_ParamLimits

0xfb96,	// (0x00028bec) cell_hwr_candidate_pane_g

0xf01e,	// (0x00028074) cell_vkb_candidate_pane_g3_ParamLimits

0xf01e,	// (0x00028074) cell_vkb_candidate_pane_g3

0xf039,	// (0x0002808f) cell_vkb_candidate_pane_g4_ParamLimits

0xf039,	// (0x0002808f) cell_vkb_candidate_pane_g4

0xf15e,	// (0x000281b4) cell_app_pane_cp2_g1_ParamLimits

0xf15e,	// (0x000281b4) cell_app_pane_cp2_g1

0xf17c,	// (0x000281d2) cell_app_pane_cp2_g2_ParamLimits

0xf17c,	// (0x000281d2) cell_app_pane_cp2_g2

0x0001,

0xfbe0,	// (0x00028c36) cell_app_pane_cp2_g_ParamLimits

0xfbe0,	// (0x00028c36) cell_app_pane_cp2_g

0xf188,	// (0x000281de) cell_app_pane_cp2_t1_ParamLimits

0xf188,	// (0x000281de) cell_app_pane_cp2_t1

0x7a4e,	// (0x00020aa4) grid_highlight_pane_cp1_ParamLimits

0x7a4e,	// (0x00020aa4) grid_highlight_pane_cp1

0xa5bb,	// (0x00023611) cell_hwr_candidate_pane_cp1_ParamLimits

0xa5bb,	// (0x00023611) cell_hwr_candidate_pane_cp1

0xa56f,	// (0x000235c5) fep_hwr_candidate_drop_down_list_pane_g1

0xa5d9,	// (0x0002362f) fep_hwr_candidate_drop_down_list_pane_g2

0xa5e6,	// (0x0002363c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe5,	// (0x00028c3b) fep_hwr_candidate_drop_down_list_pane_g

0xa5f3,	// (0x00023649) fep_hwr_candidate_drop_down_list_scroll_pane

0xa5fc,	// (0x00023652) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xa5fc,	// (0x00023652) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xa609,	// (0x0002365f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xa609,	// (0x0002365f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xa616,	// (0x0002366c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xa616,	// (0x0002366c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xa623,	// (0x00023679) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xa623,	// (0x00023679) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xa63e,	// (0x00023694) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xa63e,	// (0x00023694) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xa659,	// (0x000236af) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xa659,	// (0x000236af) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xa674,	// (0x000236ca) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xa674,	// (0x000236ca) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xa68f,	// (0x000236e5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xa68f,	// (0x000236e5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbec,	// (0x00028c42) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbec,	// (0x00028c42) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf1a7,	// (0x000281fd) cell_vkb_candidate_pane_cp1_ParamLimits

0xf1a7,	// (0x000281fd) cell_vkb_candidate_pane_cp1

0xed17,	// (0x00027d6d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xed17,	// (0x00027d6d) fep_vkb_candidate_drop_down_list_pane_g1

0xf19a,	// (0x000281f0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf19a,	// (0x000281f0) fep_vkb_candidate_drop_down_list_pane_g2

0xf1ca,	// (0x00028220) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf1ca,	// (0x00028220) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbfd,	// (0x00028c53) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbfd,	// (0x00028c53) fep_vkb_candidate_drop_down_list_pane_g

0xf1d7,	// (0x0002822d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf1d7,	// (0x0002822d) fep_vkb_candidate_drop_down_list_scroll_pane

0xf1e4,	// (0x0002823a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf1e4,	// (0x0002823a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf1f1,	// (0x00028247) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf1f1,	// (0x00028247) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf1fd,	// (0x00028253) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf1fd,	// (0x00028253) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf0b4,	// (0x0002810a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf0b4,	// (0x0002810a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf0d5,	// (0x0002812b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf0d5,	// (0x0002812b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf209,	// (0x0002825f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf209,	// (0x0002825f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf22a,	// (0x00028280) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf22a,	// (0x00028280) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf24b,	// (0x000282a1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf24b,	// (0x000282a1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc04,	// (0x00028c5a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc04,	// (0x00028c5a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9300,	// (0x00022356) title_pane_g1_ParamLimits

0x930d,	// (0x00022363) title_pane_g2_ParamLimits

0xf592,	// (0x000285e8) title_pane_g_ParamLimits

0x7f54,	// (0x00020faa) aid_call2_pane

0x7f4c,	// (0x00020fa2) aid_call_pane

0x7f5c,	// (0x00020fb2) popup_clock_analogue_window_g1

0x7f5c,	// (0x00020fb2) popup_clock_analogue_window_g2

0x98d9,	// (0x0002292f) popup_clock_analogue_window_g3

0x98e2,	// (0x00022938) popup_clock_analogue_window_g4

0x6d14,	// (0x0001fd6a) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0002878d) popup_clock_analogue_window_g

0x98ea,	// (0x00022940) popup_clock_analogue_window_t1

0x992e,	// (0x00022984) clock_digital_number_pane_ParamLimits

0x992e,	// (0x00022984) clock_digital_number_pane

0x993a,	// (0x00022990) clock_digital_number_pane_cp02_ParamLimits

0x993a,	// (0x00022990) clock_digital_number_pane_cp02

0x9946,	// (0x0002299c) clock_digital_number_pane_cp03_ParamLimits

0x9946,	// (0x0002299c) clock_digital_number_pane_cp03

0x9952,	// (0x000229a8) clock_digital_number_pane_cp04_ParamLimits

0x9952,	// (0x000229a8) clock_digital_number_pane_cp04

0x995e,	// (0x000229b4) clock_digital_separator_pane_ParamLimits

0x995e,	// (0x000229b4) clock_digital_separator_pane

0x996a,	// (0x000229c0) popup_clock_digital_window_t1_ParamLimits

0x996a,	// (0x000229c0) popup_clock_digital_window_t1

0x6d14,	// (0x0001fd6a) clock_digital_number_pane_g1

0x6d14,	// (0x0001fd6a) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x00028798) clock_digital_number_pane_g

0x6d14,	// (0x0001fd6a) clock_digital_separator_pane_g1

0x6d14,	// (0x0001fd6a) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x00028798) clock_digital_separator_pane_g

0xdca6,	// (0x00026cfc) aid_fill_nsta_ParamLimits

0xdd5f,	// (0x00026db5) indicator_nsta_pane_ParamLimits

0xb124,	// (0x0002417a) popup_clock_analogue_window

0xb124,	// (0x0002417a) popup_clock_digital_window

0x6dfa,	// (0x0001fe50) grid_indicator_nsta_pane_ParamLimits

0xd649,	// (0x0002669f) clock_nsta_pane_t2

0x0001,

0xfad7,	// (0x00028b2d) clock_nsta_pane_t

0x9842,	// (0x00022898) aid_size_max_handle

0x984c,	// (0x000228a2) aid_size_min_handle

0x8407,	// (0x0002145d) editor_scroll_pane

0xf266,	// (0x000282bc) ex_editor_pane

0x7ba5,	// (0x00020bfb) scroll_pane_cp13

0x734a,	// (0x000203a0) scroll_pane_cp14

0x7f86,	// (0x00020fdc) scroll_pane_cp36

0x9908,	// (0x0002295e) list_single_graphic_hl_pane_cp2_ParamLimits

0x9908,	// (0x0002295e) list_single_graphic_hl_pane_cp2

0xe4c5,	// (0x0002751b) list_single_graphic_hl_pane_ParamLimits

0xe4c5,	// (0x0002751b) list_single_graphic_hl_pane

0xd8d0,	// (0x00026926) aid_size_min_hl_cp1

0xf26e,	// (0x000282c4) list_highlight_pane_cp34_ParamLimits

0xf26e,	// (0x000282c4) list_highlight_pane_cp34

0xf27f,	// (0x000282d5) list_single_graphic_hl_pane_g1_ParamLimits

0xf27f,	// (0x000282d5) list_single_graphic_hl_pane_g1

0xd8d9,	// (0x0002692f) list_single_graphic_hl_pane_g2_ParamLimits

0xd8d9,	// (0x0002692f) list_single_graphic_hl_pane_g2

0xd8d9,	// (0x0002692f) list_single_graphic_hl_pane_g3_ParamLimits

0xd8d9,	// (0x0002692f) list_single_graphic_hl_pane_g3

0xd09d,	// (0x000260f3) list_single_graphic_hl_pane_g4_ParamLimits

0xd09d,	// (0x000260f3) list_single_graphic_hl_pane_g4

0xd8e5,	// (0x0002693b) list_single_graphic_hl_pane_g5_ParamLimits

0xd8e5,	// (0x0002693b) list_single_graphic_hl_pane_g5

0x0004,

0xfc15,	// (0x00028c6b) list_single_graphic_hl_pane_g_ParamLimits

0xfc15,	// (0x00028c6b) list_single_graphic_hl_pane_g

0xded4,	// (0x00026f2a) list_single_graphic_hl_pane_t1_ParamLimits

0xded4,	// (0x00026f2a) list_single_graphic_hl_pane_t1

0xf28c,	// (0x000282e2) aid_size_min_hl_cp2

0xf295,	// (0x000282eb) list_highlight_pane_cp34_cp2_ParamLimits

0xf295,	// (0x000282eb) list_highlight_pane_cp34_cp2

0xf27f,	// (0x000282d5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf27f,	// (0x000282d5) list_single_graphic_hl_pane_g1_cp2

0xf2a2,	// (0x000282f8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf2a2,	// (0x000282f8) list_single_graphic_hl_pane_g2_cp2

0xf2ae,	// (0x00028304) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xf2ae,	// (0x00028304) list_single_graphic_hl_pane_g3_cp2

0x827c,	// (0x000212d2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x827c,	// (0x000212d2) list_single_graphic_hl_pane_g4_cp2

0xf062,	// (0x000280b8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf062,	// (0x000280b8) list_single_graphic_hl_pane_g5_cp2

0x9d3d,	// (0x00022d93) control_pane_g4_ParamLimits

0x9d3d,	// (0x00022d93) control_pane_g4

0xaf67,	// (0x00023fbd) bg_popup_sub_pane_cp10_ParamLimits

0xead9,	// (0x00027b2f) list_choice_list_pane_ParamLimits

0xeae8,	// (0x00027b3e) scroll_pane_cp23

0x6f59,	// (0x0001ffaf) bg_popup_preview_window_pane_cp02_ParamLimits

0xf09e,	// (0x000280f4) list_preview_fixed_pane_ParamLimits

0xf0f6,	// (0x0002814c) list_preview_fixed_pane_cp_ParamLimits

0xf0f6,	// (0x0002814c) list_preview_fixed_pane_cp

0xf102,	// (0x00028158) popup_preview_fixed_window_g1_ParamLimits

0xf102,	// (0x00028158) popup_preview_fixed_window_g1

0xf10e,	// (0x00028164) popup_preview_fixed_window_g2_ParamLimits

0xf10e,	// (0x00028164) popup_preview_fixed_window_g2

0x0002,

0xfb9d,	// (0x00028bf3) popup_preview_fixed_window_g_ParamLimits

0xfb9d,	// (0x00028bf3) popup_preview_fixed_window_g

0x975d,	// (0x000227b3) aid_navi_side_left_pane_ParamLimits

0x976d,	// (0x000227c3) aid_navi_side_right_pane_ParamLimits

0x977c,	// (0x000227d2) navi_icon_pane_stacon_ParamLimits

0x978c,	// (0x000227e2) navi_navi_pane_stacon_ParamLimits

0x977c,	// (0x000227d2) navi_text_pane_stacon_ParamLimits

0x6d0a,	// (0x0001fd60) main_text_info_pane

0xf2d0,	// (0x00028326) listscroll_text_info_pane

0xf2d8,	// (0x0002832e) list_text_info_pane_ParamLimits

0xf2d8,	// (0x0002832e) list_text_info_pane

0xf2e7,	// (0x0002833d) scroll_pane_cp24_ParamLimits

0xf2e7,	// (0x0002833d) scroll_pane_cp24

0xf305,	// (0x0002835b) list_text_info_pane_t1_ParamLimits

0xf305,	// (0x0002835b) list_text_info_pane_t1

0xd91b,	// (0x00026971) popup_fast_swap2_window_ParamLimits

0xd91b,	// (0x00026971) popup_fast_swap2_window

0xf322,	// (0x00028378) aid_size_cell_fast2

0x6d0a,	// (0x0001fd60) bg_popup_window_pane_cp17

0xb5b2,	// (0x00024608) heading_pane_cp2

0x7149,	// (0x0002019f) listscroll_fast2_pane

0xf32c,	// (0x00028382) grid_fast2_pane

0xf334,	// (0x0002838a) listscroll_fast2_pane_g1

0xf33c,	// (0x00028392) listscroll_fast2_pane_g2

0x0001,

0xfc20,	// (0x00028c76) listscroll_fast2_pane_g

0x7ba5,	// (0x00020bfb) scroll_pane_cp26

0xf344,	// (0x0002839a) cell_fast2_pane_ParamLimits

0xf344,	// (0x0002839a) cell_fast2_pane

0xf35a,	// (0x000283b0) cell_fast2_pane_g1

0xf363,	// (0x000283b9) cell_fast2_pane_g2

0xf36c,	// (0x000283c2) cell_fast2_pane_g3

0x0002,

0xfc25,	// (0x00028c7b) cell_fast2_pane_g

0x71ab,	// (0x00020201) grid_highlight_pane_cp9

0x71c0,	// (0x00020216) main_eswt_pane_ParamLimits

0x71c0,	// (0x00020216) main_eswt_pane

0xf2fc,	// (0x00028352) list_single_text_info_pane

0xf374,	// (0x000283ca) eswt_ctrl_button_pane

0xf374,	// (0x000283ca) eswt_ctrl_canvas_pane

0xf37c,	// (0x000283d2) eswt_ctrl_combo_pane

0xf374,	// (0x000283ca) eswt_ctrl_default_pane

0xf374,	// (0x000283ca) eswt_ctrl_label_pane

0xf384,	// (0x000283da) eswt_ctrl_wait_pane

0xf38c,	// (0x000283e2) eswt_shell_pane

0x6d0a,	// (0x0001fd60) listscroll_eswt_app_pane

0xf3a8,	// (0x000283fe) popup_eswt_tasktip_window_ParamLimits

0xf3a8,	// (0x000283fe) popup_eswt_tasktip_window

0xb313,	// (0x00024369) bg_popup_window_pane_cp18

0xf3b9,	// (0x0002840f) eswt_control_pane_g1_ParamLimits

0xf3b9,	// (0x0002840f) eswt_control_pane_g1

0xf3c6,	// (0x0002841c) eswt_control_pane_g2_ParamLimits

0xf3c6,	// (0x0002841c) eswt_control_pane_g2

0xf3d3,	// (0x00028429) eswt_control_pane_g3_ParamLimits

0xf3d3,	// (0x00028429) eswt_control_pane_g3

0xf3e0,	// (0x00028436) eswt_control_pane_g4_ParamLimits

0xf3e0,	// (0x00028436) eswt_control_pane_g4

0x0003,

0xfc2c,	// (0x00028c82) eswt_control_pane_g_ParamLimits

0xfc2c,	// (0x00028c82) eswt_control_pane_g

0x7a4e,	// (0x00020aa4) bg_button_pane_ParamLimits

0x7a4e,	// (0x00020aa4) bg_button_pane

0x71c0,	// (0x00020216) common_borders_pane_copy2_ParamLimits

0x71c0,	// (0x00020216) common_borders_pane_copy2

0xf3ed,	// (0x00028443) control_button_pane_g1_ParamLimits

0xf3ed,	// (0x00028443) control_button_pane_g1

0xf3f9,	// (0x0002844f) control_button_pane_g2_ParamLimits

0xf3f9,	// (0x0002844f) control_button_pane_g2

0xf405,	// (0x0002845b) control_button_pane_g3_ParamLimits

0xf405,	// (0x0002845b) control_button_pane_g3

0x0002,

0xfc35,	// (0x00028c8b) control_button_pane_g_ParamLimits

0xfc35,	// (0x00028c8b) control_button_pane_g

0xf419,	// (0x0002846f) control_button_pane_t1

0xf427,	// (0x0002847d) control_button_pane_t2

0x0001,

0xfc3c,	// (0x00028c92) control_button_pane_t

0xb225,	// (0x0002427b) bg_button_pane_g1

0xb235,	// (0x0002428b) bg_button_pane_g2

0xb22d,	// (0x00024283) bg_button_pane_g3

0xb245,	// (0x0002429b) bg_button_pane_g4

0xb23d,	// (0x00024293) bg_button_pane_g5

0xb24d,	// (0x000242a3) bg_button_pane_g6

0xb255,	// (0x000242ab) bg_button_pane_g7

0xb265,	// (0x000242bb) bg_button_pane_g8

0xb25d,	// (0x000242b3) bg_button_pane_g9

0x0008,

0xf89a,	// (0x000288f0) bg_button_pane_g

0xea94,	// (0x00027aea) common_borders_pane_ParamLimits

0xea94,	// (0x00027aea) common_borders_pane

0xf3b9,	// (0x0002840f) eswt_control_pane_g1_copy1_ParamLimits

0xf3b9,	// (0x0002840f) eswt_control_pane_g1_copy1

0xf3c6,	// (0x0002841c) eswt_control_pane_g2_copy1_ParamLimits

0xf3c6,	// (0x0002841c) eswt_control_pane_g2_copy1

0xf3d3,	// (0x00028429) eswt_control_pane_g3_copy1_ParamLimits

0xf3d3,	// (0x00028429) eswt_control_pane_g3_copy1

0xf3e0,	// (0x00028436) eswt_control_pane_g4_copy1_ParamLimits

0xf3e0,	// (0x00028436) eswt_control_pane_g4_copy1

0xeacf,	// (0x00027b25) bg_eswt_ctrl_canvas_pane_g1

0xea94,	// (0x00027aea) common_borders_pane_cp2_ParamLimits

0xea94,	// (0x00027aea) common_borders_pane_cp2

0xea94,	// (0x00027aea) common_borders_pane_cp3_ParamLimits

0xea94,	// (0x00027aea) common_borders_pane_cp3

0xf435,	// (0x0002848b) separator_horizontal_pane

0x7deb,	// (0x00020e41) separator_vertical_pane

0xf3b9,	// (0x0002840f) eswt_control_pane_g1_copy2_ParamLimits

0xf3b9,	// (0x0002840f) eswt_control_pane_g1_copy2

0xf3c6,	// (0x0002841c) eswt_control_pane_g2_copy2_ParamLimits

0xf3c6,	// (0x0002841c) eswt_control_pane_g2_copy2

0xf3d3,	// (0x00028429) eswt_control_pane_g3_copy2_ParamLimits

0xf3d3,	// (0x00028429) eswt_control_pane_g3_copy2

0xf3e0,	// (0x00028436) eswt_control_pane_g4_copy2_ParamLimits

0xf3e0,	// (0x00028436) eswt_control_pane_g4_copy2

0x6d0a,	// (0x0001fd60) common_borders_pane_cp4

0xf43d,	// (0x00028493) separator_horizontal_pane_g1

0xf446,	// (0x0002849c) separator_horizontal_pane_g2

0xf44f,	// (0x000284a5) separator_horizontal_pane_g3

0x0002,

0xfc41,	// (0x00028c97) separator_horizontal_pane_g

0xf3b9,	// (0x0002840f) eswt_control_pane_g1_copy3_ParamLimits

0xf3b9,	// (0x0002840f) eswt_control_pane_g1_copy3

0xf3c6,	// (0x0002841c) eswt_control_pane_g2_copy3_ParamLimits

0xf3c6,	// (0x0002841c) eswt_control_pane_g2_copy3

0xf3d3,	// (0x00028429) eswt_control_pane_g3_copy3_ParamLimits

0xf3d3,	// (0x00028429) eswt_control_pane_g3_copy3

0xf3e0,	// (0x00028436) eswt_control_pane_g4_copy3_ParamLimits

0xf3e0,	// (0x00028436) eswt_control_pane_g4_copy3

0x6d0a,	// (0x0001fd60) common_borders_pane_cp5

0xf458,	// (0x000284ae) separator_vertical_pane_g1

0xf461,	// (0x000284b7) separator_vertical_pane_g2

0xf46a,	// (0x000284c0) separator_vertical_pane_g3

0x0002,

0xfc48,	// (0x00028c9e) separator_vertical_pane_g

0xf3b9,	// (0x0002840f) eswt_control_pane_g1_copy4_ParamLimits

0xf3b9,	// (0x0002840f) eswt_control_pane_g1_copy4

0xf3c6,	// (0x0002841c) eswt_control_pane_g2_copy4_ParamLimits

0xf3c6,	// (0x0002841c) eswt_control_pane_g2_copy4

0xf3d3,	// (0x00028429) eswt_control_pane_g3_copy4_ParamLimits

0xf3d3,	// (0x00028429) eswt_control_pane_g3_copy4

0xf3e0,	// (0x00028436) eswt_control_pane_g4_copy4_ParamLimits

0xf3e0,	// (0x00028436) eswt_control_pane_g4_copy4

0xf473,	// (0x000284c9) eswt_ctrl_combo_button_pane

0xf47b,	// (0x000284d1) eswt_ctrl_input_pane

0xf483,	// (0x000284d9) popup_choice_list_window_cp70

0xf48b,	// (0x000284e1) eswt_ctrl_input_pane_t1

0x6d0a,	// (0x0001fd60) input_focus_pane_cp70

0xea94,	// (0x00027aea) bg_button_pane_cp70_ParamLimits

0xea94,	// (0x00027aea) bg_button_pane_cp70

0xf499,	// (0x000284ef) eswt_ctrl_combo_button_pane_g1

0xf4a1,	// (0x000284f7) wait_bar_pane_cp70

0xb313,	// (0x00024369) bg_popup_window_pane_cp70_ParamLimits

0xb313,	// (0x00024369) bg_popup_window_pane_cp70

0xf4a9,	// (0x000284ff) popup_eswt_tasktip_window_t1

0xf4bf,	// (0x00028515) wait_bar_pane_cp71_ParamLimits

0xf4bf,	// (0x00028515) wait_bar_pane_cp71

0xf4cb,	// (0x00028521) grid_eswt_app_pane

0x7df4,	// (0x00020e4a) scroll_pane_cp70

0xf4d4,	// (0x0002852a) cell_eswt_app_pane_ParamLimits

0xf4d4,	// (0x0002852a) cell_eswt_app_pane

0xf4fc,	// (0x00028552) cell_eswt_app_pane_g1_ParamLimits

0xf4fc,	// (0x00028552) cell_eswt_app_pane_g1

0xf52b,	// (0x00028581) cell_eswt_app_pane_g2_ParamLimits

0xf52b,	// (0x00028581) cell_eswt_app_pane_g2

0x0001,

0xfc4f,	// (0x00028ca5) cell_eswt_app_pane_g_ParamLimits

0xfc4f,	// (0x00028ca5) cell_eswt_app_pane_g

0xf554,	// (0x000285aa) cell_eswt_app_pane_t1_ParamLimits

0xf554,	// (0x000285aa) cell_eswt_app_pane_t1

0xf586,	// (0x000285dc) grid_highlight_pane_cp70_ParamLimits

0xf586,	// (0x000285dc) grid_highlight_pane_cp70

0x7352,	// (0x000203a8) set_content_pane_g1

0x85f6,	// (0x0002164c) status_small_volume_pane

0xa6aa,	// (0x00023700) status_small_volume_pane_g1

0xa6b2,	// (0x00023708) volume_small2_pane

0xa6bb,	// (0x00023711) volume_small2_pane_g1

0xa6c4,	// (0x0002371a) volume_small2_pane_g2

0xa6cd,	// (0x00023723) volume_small2_pane_g3

0xa6d6,	// (0x0002372c) volume_small2_pane_g4

0xa6df,	// (0x00023735) volume_small2_pane_g5

0xa6e8,	// (0x0002373e) volume_small2_pane_g6

0xa6f1,	// (0x00023747) volume_small2_pane_g7

0xa6fa,	// (0x00023750) volume_small2_pane_g8

0xa703,	// (0x00023759) volume_small2_pane_g9

0xa70c,	// (0x00023762) volume_small2_pane_g10

0x0009,

0xfc54,	// (0x00028caa) volume_small2_pane_g

0xee59,	// (0x00027eaf) fep_vkb_top_text_pane_g1_ParamLimits

0xee74,	// (0x00027eca) fep_vkb_top_text_pane_t1_ParamLimits

0xf11a,	// (0x00028170) popup_preview_fixed_window_g3_ParamLimits

0xf11a,	// (0x00028170) popup_preview_fixed_window_g3

0xdc4f,	// (0x00026ca5) popup_toolbar_trans_pane

0xe363,	// (0x000273b9) aid_height_set_list_ParamLimits

0xc319,	// (0x0002536f) aid_size_parent_ParamLimits

0xaf67,	// (0x00023fbd) list_highlight_pane_cp2_ParamLimits

0x7352,	// (0x000203a8) set_content_pane_g1_ParamLimits

0xe4da,	// (0x00027530) list_single_image_pane_ParamLimits

0xe4da,	// (0x00027530) list_single_image_pane

0x0046,	// (0x0001909c) aid_size_cell_image_ParamLimits

0x0046,	// (0x0001909c) aid_size_cell_image

0x0053,	// (0x000190a9) grid_single_image_pane_ParamLimits

0x0053,	// (0x000190a9) grid_single_image_pane

0x7352,	// (0x000203a8) list_single_image_pane_g1_ParamLimits

0x7352,	// (0x000203a8) list_single_image_pane_g1

0x7a68,	// (0x00020abe) list_single_image_pane_g2_ParamLimits

0x7a68,	// (0x00020abe) list_single_image_pane_g2

0x0001,

0xfc69,	// (0x00028cbf) list_single_image_pane_g_ParamLimits

0xfc69,	// (0x00028cbf) list_single_image_pane_g

0xc8e2,	// (0x00025938) list_single_image_pane_t1_ParamLimits

0xc8e2,	// (0x00025938) list_single_image_pane_t1

0x005f,	// (0x000190b5) cell_image_list_pane_ParamLimits

0x005f,	// (0x000190b5) cell_image_list_pane

0x0072,	// (0x000190c8) cell_image_list_pane_g1

0x007b,	// (0x000190d1) cell_image_list_pane_g2

0x0001,

0xfc6e,	// (0x00028cc4) cell_image_list_pane_g

0x0084,	// (0x000190da) aid_size_cell_tb_trans_pane

0x7a4e,	// (0x00020aa4) bg_tb_trans_pane

0x0096,	// (0x000190ec) grid_tb_trans_pane

0xb225,	// (0x0002427b) bg_tb_trans_pane_g1

0xb235,	// (0x0002428b) bg_tb_trans_pane_g2

0xb22d,	// (0x00024283) bg_tb_trans_pane_g3

0xb245,	// (0x0002429b) bg_tb_trans_pane_g4

0xb23d,	// (0x00024293) bg_tb_trans_pane_g5

0xb265,	// (0x000242bb) bg_tb_trans_pane_g6

0xb25d,	// (0x000242b3) bg_tb_trans_pane_g7

0xb24d,	// (0x000242a3) bg_tb_trans_pane_g8

0xb255,	// (0x000242ab) bg_tb_trans_pane_g9

0x0008,

0xfc73,	// (0x00028cc9) bg_tb_trans_pane_g

0x00aa,	// (0x00019100) cell_toolbar_trans_pane_ParamLimits

0x00aa,	// (0x00019100) cell_toolbar_trans_pane

0xeacf,	// (0x00027b25) cell_toolbar_trans_pane_g1

0xe754,	// (0x000277aa) list_form2_midp_pane_t1

0xe762,	// (0x000277b8) list_form2_midp_pane_t2

0x0001,

0xfb10,	// (0x00028b66) list_form2_midp_pane_t

0xe770,	// (0x000277c6) scroll_pane_cp51_ParamLimits

0xe929,	// (0x0002797f) form2_midp_wait_pane_g1

0xe932,	// (0x00027988) form2_midp_wait_pane_g2

0xe93b,	// (0x00027991) form2_midp_wait_pane_g3

0x0002,

0xfb25,	// (0x00028b7b) form2_midp_wait_pane_g

0x6dfa,	// (0x0001fe50) list_highlight_pane_cp21_ParamLimits

0xe95b,	// (0x000279b1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe96a,	// (0x000279c0) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd184,	// (0x000261da) list_single_2graphic_im_pane_ParamLimits

0xd184,	// (0x000261da) list_single_2graphic_im_pane

0x00d0,	// (0x00019126) list_single_2graphic_im_pane_g1_ParamLimits

0x00d0,	// (0x00019126) list_single_2graphic_im_pane_g1

0x00e1,	// (0x00019137) list_single_2graphic_im_pane_g2_ParamLimits

0x00e1,	// (0x00019137) list_single_2graphic_im_pane_g2

0x00ed,	// (0x00019143) list_single_2graphic_im_pane_g3_ParamLimits

0x00ed,	// (0x00019143) list_single_2graphic_im_pane_g3

0x0003,

0xfc86,	// (0x00028cdc) list_single_2graphic_im_pane_g_ParamLimits

0xfc86,	// (0x00028cdc) list_single_2graphic_im_pane_g

0x010d,	// (0x00019163) list_single_2graphic_im_pane_t1_ParamLimits

0x010d,	// (0x00019163) list_single_2graphic_im_pane_t1

0xf126,	// (0x0002817c) list_single_graphic_2heading_pane_fp_ParamLimits

0xf126,	// (0x0002817c) list_single_graphic_2heading_pane_fp

0xd742,	// (0x00026798) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd742,	// (0x00026798) list_single_graphic_2heading_pane_fp_g1

0xf13a,	// (0x00028190) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf13a,	// (0x00028190) list_single_graphic_2heading_pane_fp_g2

0xccce,	// (0x00025d24) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xccce,	// (0x00025d24) list_single_graphic_2heading_pane_fp_g3

0xd717,	// (0x0002676d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd717,	// (0x0002676d) list_single_graphic_2heading_pane_fp_g4

0xf146,	// (0x0002819c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf146,	// (0x0002819c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbad,	// (0x00028c03) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbad,	// (0x00028c03) list_single_graphic_2heading_pane_fp_g

0xdeea,	// (0x00026f40) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdeea,	// (0x00026f40) list_single_graphic_2heading_pane_fp_t1

0xd77a,	// (0x000267d0) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd77a,	// (0x000267d0) list_single_graphic_2heading_pane_fp_t2

0xdf00,	// (0x00026f56) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdf00,	// (0x00026f56) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8f,	// (0x00028ce5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8f,	// (0x00028ce5) list_single_graphic_2heading_pane_fp_t

0xeb68,	// (0x00027bbe) fep_hwr_write_pane_g5_ParamLimits

0xeb68,	// (0x00027bbe) fep_hwr_write_pane_g5

0xeb74,	// (0x00027bca) fep_hwr_write_pane_g6_ParamLimits

0xeb74,	// (0x00027bca) fep_hwr_write_pane_g6

0xf38c,	// (0x000283e2) eswt_shell_pane_ParamLimits

0xb313,	// (0x00024369) bg_popup_window_pane_cp18_ParamLimits

0xc2bd,	// (0x00025313) heading_pane_cp70

0xf4a9,	// (0x000284ff) popup_eswt_tasktip_window_t1_ParamLimits

0xdcdc,	// (0x00026d32) aid_touch_tab_arrow_left

0xdce8,	// (0x00026d3e) aid_touch_tab_arrow_right

0x931e,	// (0x00022374) title_pane_g3_ParamLimits

0x931e,	// (0x00022374) title_pane_g3

0x7a1e,	// (0x00020a74) set_value_pane_g1

0xdc4f,	// (0x00026ca5) popup_toolbar_trans_pane_ParamLimits

0x0084,	// (0x000190da) aid_size_cell_tb_trans_pane_ParamLimits

0x7a4e,	// (0x00020aa4) bg_tb_trans_pane_ParamLimits

0x0096,	// (0x000190ec) grid_tb_trans_pane_ParamLimits

0x6f59,	// (0x0001ffaf) cont_note_pane_ParamLimits

0x6f59,	// (0x0001ffaf) cont_note_pane

0x71c0,	// (0x00020216) cont_snote2_single_text_pane_ParamLimits

0x71c0,	// (0x00020216) cont_snote2_single_text_pane

0x71c0,	// (0x00020216) cont_snote2_single_graphic_pane_ParamLimits

0x71c0,	// (0x00020216) cont_snote2_single_graphic_pane

0xb78b,	// (0x000247e1) cont_note_wait_pane_ParamLimits

0xb78b,	// (0x000247e1) cont_note_wait_pane

0xb78b,	// (0x000247e1) cont_note_image_pane_ParamLimits

0xb78b,	// (0x000247e1) cont_note_image_pane

0x013e,	// (0x00019194) popup_note2_window_g1_ParamLimits

0x013e,	// (0x00019194) popup_note2_window_g1

0x016f,	// (0x000191c5) popup_note2_window_t1_ParamLimits

0x016f,	// (0x000191c5) popup_note2_window_t1

0x01b4,	// (0x0001920a) popup_note2_window_t2_ParamLimits

0x01b4,	// (0x0001920a) popup_note2_window_t2

0x01f9,	// (0x0001924f) popup_note2_window_t3_ParamLimits

0x01f9,	// (0x0001924f) popup_note2_window_t3

0x023e,	// (0x00019294) popup_note2_window_t4_ParamLimits

0x023e,	// (0x00019294) popup_note2_window_t4

0x6fdd,	// (0x00020033) popup_note2_window_t5_ParamLimits

0x6fdd,	// (0x00020033) popup_note2_window_t5

0x0004,

0xfc9b,	// (0x00028cf1) popup_note2_window_t_ParamLimits

0xfc9b,	// (0x00028cf1) popup_note2_window_t

0x026d,	// (0x000192c3) popup_note2_image_window_g1_ParamLimits

0x026d,	// (0x000192c3) popup_note2_image_window_g1

0x0279,	// (0x000192cf) popup_note2_image_window_g2_ParamLimits

0x0279,	// (0x000192cf) popup_note2_image_window_g2

0x0001,

0xfca6,	// (0x00028cfc) popup_note2_image_window_g_ParamLimits

0xfca6,	// (0x00028cfc) popup_note2_image_window_g

0x028b,	// (0x000192e1) popup_note2_image_window_t1_ParamLimits

0x028b,	// (0x000192e1) popup_note2_image_window_t1

0x02a3,	// (0x000192f9) popup_note2_image_window_t2_ParamLimits

0x02a3,	// (0x000192f9) popup_note2_image_window_t2

0x02bb,	// (0x00019311) popup_note2_image_window_t3_ParamLimits

0x02bb,	// (0x00019311) popup_note2_image_window_t3

0x0002,

0xfcab,	// (0x00028d01) popup_note2_image_window_t_ParamLimits

0xfcab,	// (0x00028d01) popup_note2_image_window_t

0xb799,	// (0x000247ef) popup_note2_wait_window_g1_ParamLimits

0xb799,	// (0x000247ef) popup_note2_wait_window_g1

0xb7a5,	// (0x000247fb) popup_note2_wait_window_g2_ParamLimits

0xb7a5,	// (0x000247fb) popup_note2_wait_window_g2

0xb7b1,	// (0x00024807) popup_note2_wait_window_g3_ParamLimits

0xb7b1,	// (0x00024807) popup_note2_wait_window_g3

0x0002,

0xf87c,	// (0x000288d2) popup_note2_wait_window_g_ParamLimits

0xf87c,	// (0x000288d2) popup_note2_wait_window_g

0x02d7,	// (0x0001932d) popup_note2_wait_window_t1_ParamLimits

0x02d7,	// (0x0001932d) popup_note2_wait_window_t1

0x02f5,	// (0x0001934b) popup_note2_wait_window_t2_ParamLimits

0x02f5,	// (0x0001934b) popup_note2_wait_window_t2

0x0313,	// (0x00019369) popup_note2_wait_window_t3_ParamLimits

0x0313,	// (0x00019369) popup_note2_wait_window_t3

0x0325,	// (0x0001937b) popup_note2_wait_window_t4_ParamLimits

0x0325,	// (0x0001937b) popup_note2_wait_window_t4

0x0003,

0xfcb2,	// (0x00028d08) popup_note2_wait_window_t_ParamLimits

0xfcb2,	// (0x00028d08) popup_note2_wait_window_t

0x0337,	// (0x0001938d) wait_bar2_pane_ParamLimits

0x0337,	// (0x0001938d) wait_bar2_pane

0x034f,	// (0x000193a5) popup_snote2_single_text_window_g1_ParamLimits

0x034f,	// (0x000193a5) popup_snote2_single_text_window_g1

0x0377,	// (0x000193cd) popup_snote2_single_text_window_t1_ParamLimits

0x0377,	// (0x000193cd) popup_snote2_single_text_window_t1

0x03c3,	// (0x00019419) popup_snote2_single_text_window_t2_ParamLimits

0x03c3,	// (0x00019419) popup_snote2_single_text_window_t2

0x040f,	// (0x00019465) popup_snote2_single_text_window_t3_ParamLimits

0x040f,	// (0x00019465) popup_snote2_single_text_window_t3

0x0450,	// (0x000194a6) popup_snote2_single_text_window_t4_ParamLimits

0x0450,	// (0x000194a6) popup_snote2_single_text_window_t4

0x0486,	// (0x000194dc) popup_snote2_single_text_window_t5_ParamLimits

0x0486,	// (0x000194dc) popup_snote2_single_text_window_t5

0x0004,

0xfcbb,	// (0x00028d11) popup_snote2_single_text_window_t_ParamLimits

0xfcbb,	// (0x00028d11) popup_snote2_single_text_window_t

0x04b1,	// (0x00019507) popup_snote2_single_graphic_window_g1_ParamLimits

0x04b1,	// (0x00019507) popup_snote2_single_graphic_window_g1

0x04d9,	// (0x0001952f) popup_snote2_single_graphic_window_g2_ParamLimits

0x04d9,	// (0x0001952f) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc6,	// (0x00028d1c) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc6,	// (0x00028d1c) popup_snote2_single_graphic_window_g

0x0501,	// (0x00019557) popup_snote2_single_graphic_window_t1_ParamLimits

0x0501,	// (0x00019557) popup_snote2_single_graphic_window_t1

0x054d,	// (0x000195a3) popup_snote2_single_graphic_window_t2_ParamLimits

0x054d,	// (0x000195a3) popup_snote2_single_graphic_window_t2

0x040f,	// (0x00019465) popup_snote2_single_graphic_window_t3_ParamLimits

0x040f,	// (0x00019465) popup_snote2_single_graphic_window_t3

0x0450,	// (0x000194a6) popup_snote2_single_graphic_window_t4_ParamLimits

0x0450,	// (0x000194a6) popup_snote2_single_graphic_window_t4

0x0486,	// (0x000194dc) popup_snote2_single_graphic_window_t5_ParamLimits

0x0486,	// (0x000194dc) popup_snote2_single_graphic_window_t5

0x0004,

0xfccb,	// (0x00028d21) popup_snote2_single_graphic_window_t_ParamLimits

0xfccb,	// (0x00028d21) popup_snote2_single_graphic_window_t

0xd68d,	// (0x000266e3) clock_nsta_pane_cp2_t1

0xd68d,	// (0x000266e3) clock_nsta_pane_cp2_t2

0x0001,

0xfae6,	// (0x00028b3c) clock_nsta_pane_cp2_t

0xce82,	// (0x00025ed8) form_field_data_wide_pane_g1_ParamLimits

0x7352,	// (0x000203a8) form_field_data_wide_pane_g2_ParamLimits

0x7352,	// (0x000203a8) form_field_data_wide_pane_g2

0x7a68,	// (0x00020abe) form_field_data_wide_pane_g3_ParamLimits

0x7a68,	// (0x00020abe) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x00028710) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x00028710) form_field_data_wide_pane_g

0xe62e,	// (0x00027684) grid_touch_3_pane_ParamLimits

0xe62e,	// (0x00027684) grid_touch_3_pane

0x0599,	// (0x000195ef) cell_touch_3_pane_ParamLimits

0x0599,	// (0x000195ef) cell_touch_3_pane

0xeacf,	// (0x00027b25) cell_touch_3_pane_g1

0xeacf,	// (0x00027b25) cell_touch_3_pane_g2

0x0001,

0xfb6b,	// (0x00028bc1) cell_touch_3_pane_g

0x700f,	// (0x00020065) cont_query_data_pane

0x7017,	// (0x0002006d) cont_query_data_pane_cp1

0x05c6,	// (0x0001961c) button_value_adjust_pane_cp7

0x05ce,	// (0x00019624) query_popup_pane_cp3

0x7f97,	// (0x00020fed) bg_popup_sub_pane_cp22_ParamLimits

0x99c6,	// (0x00022a1c) navi_navi_volume_pane_cp2

0x99de,	// (0x00022a34) popup_side_volume_key_window_g2

0x99ea,	// (0x00022a40) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x000287a2) popup_side_volume_key_window_g

0x9a04,	// (0x00022a5a) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x000287a9) popup_side_volume_key_window_t

0x81ff,	// (0x00021255) popup_side_volume_key_window_ParamLimits

0xcb15,	// (0x00025b6b) list_double_graphic_pane_g4_ParamLimits

0xcb15,	// (0x00025b6b) list_double_graphic_pane_g4

0xe4ae,	// (0x00027504) list_single_2heading_msg_pane_ParamLimits

0xe4ae,	// (0x00027504) list_single_2heading_msg_pane

0xdf1e,	// (0x00026f74) list_single_2heading_msg_pane_g1_ParamLimits

0xdf1e,	// (0x00026f74) list_single_2heading_msg_pane_g1

0xc976,	// (0x000259cc) list_single_2heading_msg_pane_g2_ParamLimits

0xc976,	// (0x000259cc) list_single_2heading_msg_pane_g2

0xdf2a,	// (0x00026f80) list_single_2heading_msg_pane_g3_ParamLimits

0xdf2a,	// (0x00026f80) list_single_2heading_msg_pane_g3

0xdf36,	// (0x00026f8c) list_single_2heading_msg_pane_g4_ParamLimits

0xdf36,	// (0x00026f8c) list_single_2heading_msg_pane_g4

0x0003,

0xfcd6,	// (0x00028d2c) list_single_2heading_msg_pane_g_ParamLimits

0xfcd6,	// (0x00028d2c) list_single_2heading_msg_pane_g

0xdf4e,	// (0x00026fa4) list_single_2heading_msg_pane_t1_ParamLimits

0xdf4e,	// (0x00026fa4) list_single_2heading_msg_pane_t1

0xdf76,	// (0x00026fcc) list_single_2heading_msg_pane_t2_ParamLimits

0xdf76,	// (0x00026fcc) list_single_2heading_msg_pane_t2

0xdfaa,	// (0x00027000) list_single_2heading_msg_pane_t3_ParamLimits

0xdfaa,	// (0x00027000) list_single_2heading_msg_pane_t3

0xdfe3,	// (0x00027039) list_single_2heading_msg_pane_t4_ParamLimits

0xdfe3,	// (0x00027039) list_single_2heading_msg_pane_t4

0x0003,

0xfcdf,	// (0x00028d35) list_single_2heading_msg_pane_t_ParamLimits

0xfcdf,	// (0x00028d35) list_single_2heading_msg_pane_t

0x6da0,	// (0x0001fdf6) title_pane_g4_ParamLimits

0x6da0,	// (0x0001fdf6) title_pane_g4

0x96d3,	// (0x00022729) title_pane_stacon_g3_ParamLimits

0x96d3,	// (0x00022729) title_pane_stacon_g3

0x0101,	// (0x00019157) list_single_2graphic_im_pane_g4_ParamLimits

0x0101,	// (0x00019157) list_single_2graphic_im_pane_g4

0xc0d3,	// (0x00025129) popup_side_volume_key_window_cp

0xc539,	// (0x0002558f) main_idle_act2_pane_t1

0x9e94,	// (0x00022eea) toolbar_button_pane_g10

0x962c,	// (0x00022682) popup_toolbar_window_cp1

0xd67e,	// (0x000266d4) clock_nsta_pane_cp_t1

0xd67e,	// (0x000266d4) clock_nsta_pane_cp_t2

0x0001,

0xfae1,	// (0x00028b37) clock_nsta_pane_cp_t

0x99c6,	// (0x00022a1c) navi_navi_volume_pane_cp2_ParamLimits

0x99d2,	// (0x00022a28) popup_side_volume_key_window_g1_ParamLimits

0x99de,	// (0x00022a34) popup_side_volume_key_window_g2_ParamLimits

0x99ea,	// (0x00022a40) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x000287a2) popup_side_volume_key_window_g_ParamLimits

0xa32a,	// (0x00023380) fep_hwr_aid_pane

0xa3cb,	// (0x00023421) bg_fep_hwr_top_pane_g4_ParamLimits

0xeb38,	// (0x00027b8e) fep_hwr_top_pane_g1_ParamLimits

0xeb4a,	// (0x00027ba0) fep_hwr_top_pane_g2_ParamLimits

0xa3eb,	// (0x00023441) fep_hwr_top_pane_g3_ParamLimits

0xfb36,	// (0x00028b8c) fep_hwr_top_pane_g_ParamLimits

0xa400,	// (0x00023456) fep_hwr_top_text_pane_ParamLimits

0xbe9e,	// (0x00024ef4) aid_touch_tab_arrow_arrow_2

0xbea7,	// (0x00024efd) aid_touch_tab_arrow_left_2

0xa33e,	// (0x00023394) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xa371,	// (0x000233c7) fep_hwr_prediction_pane

0xec89,	// (0x00027cdf) fep_vkb_prediction_pane

0xed6b,	// (0x00027dc1) fep_vkb_side_pane_g3_ParamLimits

0xed6b,	// (0x00027dc1) fep_vkb_side_pane_g3

0xa56f,	// (0x000235c5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xa5d9,	// (0x0002362f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xa5e6,	// (0x0002363c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe5,	// (0x00028c3b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xa715,	// (0x0002376b) fep_hwr_prediction_pane_g1

0xa71f,	// (0x00023775) fep_hwr_prediction_pane_g2

0xa727,	// (0x0002377d) fep_hwr_prediction_pane_g3

0xa72f,	// (0x00023785) fep_hwr_prediction_pane_g4

0x0003,

0xfce8,	// (0x00028d3e) fep_hwr_prediction_pane_g

0x05f3,	// (0x00019649) fep_vkb_prediction_pane_g1

0x0615,	// (0x0001966b) fep_vkb_prediction_pane_g2

0x061d,	// (0x00019673) fep_vkb_prediction_pane_g3

0x0625,	// (0x0001967b) fep_vkb_prediction_pane_g4

0x0003,

0xfcf1,	// (0x00028d47) fep_vkb_prediction_pane_g

0xa162,	// (0x000231b8) slider_set_pane_g3

0xa176,	// (0x000231cc) slider_set_pane_g4

0xa18e,	// (0x000231e4) slider_set_pane_g5

0xa162,	// (0x000231b8) slider_set_pane_g6

0xa1a4,	// (0x000231fa) slider_set_pane_g7

0xc33c,	// (0x00025392) slider_form_pane_g3

0xc345,	// (0x0002539b) slider_form_pane_g4

0xc34d,	// (0x000253a3) slider_form_pane_g5

0xc33c,	// (0x00025392) slider_form_pane_g6

0xe493,	// (0x000274e9) slider_form_pane_g7

0xc782,	// (0x000257d8) slider_set_pane_vc_g3

0xc78b,	// (0x000257e1) slider_set_pane_vc_g4

0xc794,	// (0x000257ea) slider_set_pane_vc_g5

0xc782,	// (0x000257d8) slider_set_pane_vc_g6

0xc79d,	// (0x000257f3) slider_set_pane_vc_g7

0xc782,	// (0x000257d8) slider_form_pane_vc_g1

0xc78b,	// (0x000257e1) slider_form_pane_vc_g2

0xc794,	// (0x000257ea) slider_form_pane_vc_g3

0xc782,	// (0x000257d8) slider_form_pane_vc_g4

0xd43c,	// (0x00026492) slider_form_pane_vc_g5

0x0004,

0xfac7,	// (0x00028b1d) slider_form_pane_vc_g

0x6d0a,	// (0x0001fd60) main_idle_act3_pane

0x062d,	// (0x00019683) ai3_links_pane

0x0636,	// (0x0001968c) popup_ai3_data_window_ParamLimits

0x0636,	// (0x0001968c) popup_ai3_data_window

0x6d0a,	// (0x0001fd60) grid_ai3_links_pane

0x064e,	// (0x000196a4) cell_ai3_links_pane_ParamLimits

0x064e,	// (0x000196a4) cell_ai3_links_pane

0x0662,	// (0x000196b8) bg_popup_sub_pane_cp11

0x066f,	// (0x000196c5) cell_ai3_links_pane_g1

0x6d0a,	// (0x0001fd60) bg_popup_sub_pane_cp12

0x0694,	// (0x000196ea) heading_ai3_data_pane

0x069c,	// (0x000196f2) list_ai3_gene_pane

0x06a8,	// (0x000196fe) popup_ai3_data_window_g1

0x06b0,	// (0x00019706) heading_ai3_data_pane_g1

0x06b8,	// (0x0001970e) heading_ai3_data_pane_t1

0x06c6,	// (0x0001971c) list_double_ai3_gene_pane_ParamLimits

0x06c6,	// (0x0001971c) list_double_ai3_gene_pane

0x06d3,	// (0x00019729) list_single_ai3_gene_pane_ParamLimits

0x06d3,	// (0x00019729) list_single_ai3_gene_pane

0xea94,	// (0x00027aea) list_highlight_pane_cp7_ParamLimits

0xea94,	// (0x00027aea) list_highlight_pane_cp7

0x06e0,	// (0x00019736) list_single_a13_gene_pane_t1_ParamLimits

0x06e0,	// (0x00019736) list_single_a13_gene_pane_t1

0x06f7,	// (0x0001974d) list_single_ai3_gene_pane_g1

0x0700,	// (0x00019756) list_single_ai3_gene_pane_g2

0x0001,

0xfcfa,	// (0x00028d50) list_single_ai3_gene_pane_g

0x0708,	// (0x0001975e) list_double_ai3_gene_pane_g1_ParamLimits

0x0708,	// (0x0001975e) list_double_ai3_gene_pane_g1

0x0714,	// (0x0001976a) list_double_ai3_gene_pane_t1_ParamLimits

0x0714,	// (0x0001976a) list_double_ai3_gene_pane_t1

0x0730,	// (0x00019786) list_double_ai3_gene_pane_t2_ParamLimits

0x0730,	// (0x00019786) list_double_ai3_gene_pane_t2

0x0745,	// (0x0001979b) list_double_ai3_gene_pane_t3_ParamLimits

0x0745,	// (0x0001979b) list_double_ai3_gene_pane_t3

0x0002,

0xfcff,	// (0x00028d55) list_double_ai3_gene_pane_t_ParamLimits

0xfcff,	// (0x00028d55) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdf16,	// (0x00026f6c) aid_size_min_col_2

0x05df,	// (0x00019635) aid_size_min_msg_ParamLimits

0x05df,	// (0x00019635) aid_size_min_msg

0xee65,	// (0x00027ebb) fep_vkb_top_text_pane_g2_ParamLimits

0xee65,	// (0x00027ebb) fep_vkb_top_text_pane_g2

0x0001,

0xfb66,	// (0x00028bbc) fep_vkb_top_text_pane_g_ParamLimits

0xfb66,	// (0x00028bbc) fep_vkb_top_text_pane_g

0x6d0a,	// (0x0001fd60) main_hc_apps_shell_pane

0x0762,	// (0x000197b8) grid_hc_apps_pane_ParamLimits

0x0762,	// (0x000197b8) grid_hc_apps_pane

0x0771,	// (0x000197c7) list_hc_apps_pane

0x0779,	// (0x000197cf) scroll_pane_cp37_ParamLimits

0x0779,	// (0x000197cf) scroll_pane_cp37

0x0785,	// (0x000197db) cell_hc_apps_pane_ParamLimits

0x0785,	// (0x000197db) cell_hc_apps_pane

0x0813,	// (0x00019869) cell_hc_apps_pane_g1_ParamLimits

0x0813,	// (0x00019869) cell_hc_apps_pane_g1

0x0840,	// (0x00019896) cell_hc_apps_pane_g2_ParamLimits

0x0840,	// (0x00019896) cell_hc_apps_pane_g2

0x085c,	// (0x000198b2) cell_hc_apps_pane_g3_ParamLimits

0x085c,	// (0x000198b2) cell_hc_apps_pane_g3

0x0002,

0xfd06,	// (0x00028d5c) cell_hc_apps_pane_g_ParamLimits

0xfd06,	// (0x00028d5c) cell_hc_apps_pane_g

0x087e,	// (0x000198d4) cell_hc_apps_pane_t1_ParamLimits

0x087e,	// (0x000198d4) cell_hc_apps_pane_t1

0x6f59,	// (0x0001ffaf) grid_highlight_pane_cp10_ParamLimits

0x6f59,	// (0x0001ffaf) grid_highlight_pane_cp10

0x08bc,	// (0x00019912) list_single_hc_apps_pane_ParamLimits

0x08bc,	// (0x00019912) list_single_hc_apps_pane

0x08ec,	// (0x00019942) list_single_hc_apps_pane_g1

0xe008,	// (0x0002705e) list_single_hc_apps_pane_g2

0x0001,

0xfd0d,	// (0x00028d63) list_single_hc_apps_pane_g

0xe021,	// (0x00027077) list_single_hc_apps_pane_g2_copy1

0xe03d,	// (0x00027093) list_single_hc_apps_pane_t1

0x6dfa,	// (0x0001fe50) bg_set_opt_pane_cp_ParamLimits

0x93c6,	// (0x0002241c) setting_slider_pane_t1_ParamLimits

0x93dc,	// (0x00022432) setting_slider_pane_t2_ParamLimits

0x93f5,	// (0x0002244b) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x000285f8) setting_slider_pane_t_ParamLimits

0x940c,	// (0x00022462) slider_set_pane_ParamLimits

0x9d52,	// (0x00022da8) control_pane_g5_ParamLimits

0x9d52,	// (0x00022da8) control_pane_g5

0xc304,	// (0x0002535a) slider_set_pane_g1_ParamLimits

0xa156,	// (0x000231ac) slider_set_pane_g2_ParamLimits

0xa162,	// (0x000231b8) slider_set_pane_g3_ParamLimits

0xa176,	// (0x000231cc) slider_set_pane_g4_ParamLimits

0xa18e,	// (0x000231e4) slider_set_pane_g5_ParamLimits

0xa162,	// (0x000231b8) slider_set_pane_g6_ParamLimits

0xa1a4,	// (0x000231fa) slider_set_pane_g7_ParamLimits

0xf998,	// (0x000289ee) slider_set_pane_g_ParamLimits

0x6dfa,	// (0x0001fe50) navi_icon_text_pane_ParamLimits

0xdcb6,	// (0x00026d0c) aid_fill_nsta_2_ParamLimits

0xdcdc,	// (0x00026d32) aid_touch_tab_arrow_left_ParamLimits

0xdce8,	// (0x00026d3e) aid_touch_tab_arrow_right_ParamLimits

0xdd52,	// (0x00026da8) clock_nsta_pane_ParamLimits

0xbe80,	// (0x00024ed6) navi_icon_pane_g1_ParamLimits

0xbe8c,	// (0x00024ee2) navi_text_pane_t1_ParamLimits

0xe72e,	// (0x00027784) navi_icon_text_pane_g1_ParamLimits

0xe73a,	// (0x00027790) navi_icon_text_pane_t1_ParamLimits

0x08ec,	// (0x00019942) list_single_hc_apps_pane_g1_ParamLimits

0xe008,	// (0x0002705e) list_single_hc_apps_pane_g2_ParamLimits

0xfd0d,	// (0x00028d63) list_single_hc_apps_pane_g_ParamLimits

0xe021,	// (0x00027077) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe03d,	// (0x00027093) list_single_hc_apps_pane_t1_ParamLimits

0x923a,	// (0x00022290) popup_toolbar2_fixed_window_ParamLimits

0x923a,	// (0x00022290) popup_toolbar2_fixed_window

0xdc47,	// (0x00026c9d) popup_toolbar2_float_window

0x6d0a,	// (0x0001fd60) bg_popup_sub_pane_cp27

0x0905,	// (0x0001995b) grid_toolbar2_float_pane

0x6d0a,	// (0x0001fd60) bg_popup_sub_pane_cp26

0x0905,	// (0x0001995b) grid_toolbar2_fixed_pane

0x090d,	// (0x00019963) cell_toolbar2_fixed_pane_ParamLimits

0x090d,	// (0x00019963) cell_toolbar2_fixed_pane

0x091e,	// (0x00019974) cell_toolbar2_fixed_pane_g1

0x0927,	// (0x0001997d) toolbar2_fixed_button_pane

0xb225,	// (0x0002427b) toolbar2_fixed_button_pane_g1

0xb235,	// (0x0002428b) toolbar2_fixed_button_pane_g2

0xb22d,	// (0x00024283) toolbar2_fixed_button_pane_g3

0xb245,	// (0x0002429b) toolbar2_fixed_button_pane_g4

0xb23d,	// (0x00024293) toolbar2_fixed_button_pane_g5

0xb24d,	// (0x000242a3) toolbar2_fixed_button_pane_g6

0xb255,	// (0x000242ab) toolbar2_fixed_button_pane_g7

0xb265,	// (0x000242bb) toolbar2_fixed_button_pane_g8

0xb25d,	// (0x000242b3) toolbar2_fixed_button_pane_g9

0x0008,

0xf89a,	// (0x000288f0) toolbar2_fixed_button_pane_g

0x092f,	// (0x00019985) cell_toolbar2_float_pane_ParamLimits

0x092f,	// (0x00019985) cell_toolbar2_float_pane

0x0940,	// (0x00019996) cell_toolbar2_float_pane_g1

0x0927,	// (0x0001997d) toolbar2_fixed_button_pane_cp

0xebf8,	// (0x00027c4e) fep_vkb_accented_list_pane_ParamLimits

0xebf8,	// (0x00027c4e) fep_vkb_accented_list_pane

0xa54f,	// (0x000235a5) bg_popup_fep_shadow_pane_g9

0x8407,	// (0x0002145d) bg_popup_fep_shadow_pane_cp3

0x7b8c,	// (0x00020be2) list_accented_list_pane

0x0949,	// (0x0001999f) list_single_accented_list_pane_ParamLimits

0x0949,	// (0x0001999f) list_single_accented_list_pane

0x8407,	// (0x0002145d) list_highlight_pane_cp10

0x095a,	// (0x000199b0) list_single_accented_list_pane_t1

0xdbb5,	// (0x00026c0b) popup_slider_window_ParamLimits

0xdbb5,	// (0x00026c0b) popup_slider_window

0x05d6,	// (0x0001962c) aid_indentation_list_msg

0x09fa,	// (0x00019a50) bg_popup_window_pane_cp19

0x0a5e,	// (0x00019ab4) popup_slider_window_g1

0x0a7a,	// (0x00019ad0) popup_slider_window_g2

0x0a96,	// (0x00019aec) popup_slider_window_g3

0x0005,

0xfd12,	// (0x00028d68) popup_slider_window_g

0x0af2,	// (0x00019b48) popup_slider_window_t1

0x0b64,	// (0x00019bba) small_volume_slider_vertical_pane

0xeacf,	// (0x00027b25) small_volume_slider_vertical_pane_g1

0xeacf,	// (0x00027b25) small_volume_slider_vertical_pane_g2

0x0b80,	// (0x00019bd6) small_volume_slider_vertical_pane_g3

0x0002,

0xfd24,	// (0x00028d7a) small_volume_slider_vertical_pane_g

0x90ae,	// (0x00022104) area_side_right_pane_ParamLimits

0x90ae,	// (0x00022104) area_side_right_pane

0xa737,	// (0x0002378d) aid_size_side_button_ParamLimits

0xa737,	// (0x0002378d) aid_size_side_button

0xa74b,	// (0x000237a1) grid_sctrl_middle_pane_ParamLimits

0xa74b,	// (0x000237a1) grid_sctrl_middle_pane

0xa767,	// (0x000237bd) sctrl_sk_bottom_pane

0xa778,	// (0x000237ce) sctrl_sk_top_pane

0xa78a,	// (0x000237e0) aid_touch_sctrl_top

0xa797,	// (0x000237ed) bg_sctrl_sk_pane_ParamLimits

0xa797,	// (0x000237ed) bg_sctrl_sk_pane

0xa7a5,	// (0x000237fb) sctrl_sk_top_pane_g1

0xa7b2,	// (0x00023808) sctrl_sk_top_pane_t1

0xa78a,	// (0x000237e0) aid_touch_sctrl_bottom

0xa797,	// (0x000237ed) bg_sctrl_sk_pane_cp_ParamLimits

0xa797,	// (0x000237ed) bg_sctrl_sk_pane_cp

0xa7cd,	// (0x00023823) sctrl_sk_bottom_pane_g1

0xa7b2,	// (0x00023808) sctrl_sk_bottom_pane_t1

0xa7d6,	// (0x0002382c) cell_sctrl_middle_pane_ParamLimits

0xa7d6,	// (0x0002382c) cell_sctrl_middle_pane

0xa7f1,	// (0x00023847) aid_touch_sctrl_middle_ParamLimits

0xa7f1,	// (0x00023847) aid_touch_sctrl_middle

0xa802,	// (0x00023858) bg_sctrl_middle_pane_ParamLimits

0xa802,	// (0x00023858) bg_sctrl_middle_pane

0xa56f,	// (0x000235c5) cell_sctrl_middle_pane_g1_ParamLimits

0xa56f,	// (0x000235c5) cell_sctrl_middle_pane_g1

0xa810,	// (0x00023866) cell_sctrl_middle_pane_g2_ParamLimits

0xa810,	// (0x00023866) cell_sctrl_middle_pane_g2

0x0001,

0xfd30,	// (0x00028d86) cell_sctrl_middle_pane_g_ParamLimits

0xfd30,	// (0x00028d86) cell_sctrl_middle_pane_g

0xb225,	// (0x0002427b) bg_sctrl_middle_pane_g1

0xb22d,	// (0x00024283) bg_sctrl_middle_pane_g2

0xb235,	// (0x0002428b) bg_sctrl_middle_pane_g3

0xb23d,	// (0x00024293) bg_sctrl_middle_pane_g4

0xb245,	// (0x0002429b) bg_sctrl_middle_pane_g5

0xb24d,	// (0x000242a3) bg_sctrl_middle_pane_g6

0xb255,	// (0x000242ab) bg_sctrl_middle_pane_g7

0xb25d,	// (0x000242b3) bg_sctrl_middle_pane_g8

0x0007,

0xfd35,	// (0x00028d8b) bg_sctrl_middle_pane_g

0xb265,	// (0x000242bb) bg_sctrl_middle_pane_g8_copy1

0xb225,	// (0x0002427b) bg_sctrl_sk_pane_g1

0xb235,	// (0x0002428b) bg_sctrl_sk_pane_g2

0xb22d,	// (0x00024283) bg_sctrl_sk_pane_g3

0x0008,

0xf89a,	// (0x000288f0) bg_sctrl_sk_pane_g

0x72e2,	// (0x00020338) aid_size_touch_scroll_bar

0xb245,	// (0x0002429b) bg_sctrl_sk_pane_g4

0xb23d,	// (0x00024293) bg_sctrl_sk_pane_g5

0xb24d,	// (0x000242a3) bg_sctrl_sk_pane_g6

0xb255,	// (0x000242ab) bg_sctrl_sk_pane_g7

0xb265,	// (0x000242bb) bg_sctrl_sk_pane_g8

0xb25d,	// (0x000242b3) bg_sctrl_sk_pane_g9

0xaf9b,	// (0x00023ff1) popup_fep_china_hwr2_fs_candidate_window

0xd971,	// (0x000269c7) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xd971,	// (0x000269c7) popup_fep_china_hwr2_fs_control_window

0xa56f,	// (0x000235c5) sctrl_sk_top_pane_g2

0x0001,

0xfd2b,	// (0x00028d81) sctrl_sk_top_pane_g

0x0c5c,	// (0x00019cb2) aid_fep_china_hwr2_fs_cell_ParamLimits

0x0c5c,	// (0x00019cb2) aid_fep_china_hwr2_fs_cell

0x0c6d,	// (0x00019cc3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x0c6d,	// (0x00019cc3) bg_popup_fep_shadow_pane_cp4

0x0c84,	// (0x00019cda) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x0c84,	// (0x00019cda) bg_popup_fep_shadow_pane_cp5

0x0c96,	// (0x00019cec) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x0c96,	// (0x00019cec) popup_fep_china_hwr2_fs_control_bar_grid

0x0ca6,	// (0x00019cfc) popup_fep_china_hwr2_fs_control_funtion_grid

0x0cae,	// (0x00019d04) aid_fep_china_hwr2_fs_candi_cell

0x6d0a,	// (0x0001fd60) bg_popup_fep_shadow_pane_cp6

0x0cb8,	// (0x00019d0e) popup_fep_china_hwr2_fs_candidate_grid

0x0cc0,	// (0x00019d16) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x0cc0,	// (0x00019d16) cell_fep_china_hwr2_fs_funtion_grid

0xeacf,	// (0x00027b25) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x0cd8,	// (0x00019d2e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x0cd8,	// (0x00019d2e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x0ce6,	// (0x00019d3c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x0ce6,	// (0x00019d3c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd46,	// (0x00028d9c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd46,	// (0x00028d9c) cell_fep_china_hwr2_fs_funtion_grid_g

0x0cfc,	// (0x00019d52) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x0cfc,	// (0x00019d52) cell_fep_china_hwr2_fs_funtion_grid_t1

0x0d11,	// (0x00019d67) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x0d11,	// (0x00019d67) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd4b,	// (0x00028da1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd4b,	// (0x00028da1) cell_fep_china_hwr2_fs_funtion_grid_t

0x0d2d,	// (0x00019d83) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x0d35,	// (0x00019d8b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x0d3d,	// (0x00019d93) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd50,	// (0x00028da6) popup_fep_china_hwr2_fs_control_bar_grid_g

0x0d45,	// (0x00019d9b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x0d45,	// (0x00019d9b) cell_fep_china_hwr2_fs_candidate_grid

0x0d5e,	// (0x00019db4) popup_fep_china_hwr2_fs_candidate_grid_g20

0x0d66,	// (0x00019dbc) popup_fep_china_hwr2_fs_candidate_grid_g21

0xeacf,	// (0x00027b25) cell_fep_china_hwr2_fs_candidate_grid_g1

0xeacf,	// (0x00027b25) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb6b,	// (0x00028bc1) cell_fep_china_hwr2_fs_candidate_grid_g

0x0d6e,	// (0x00019dc4) cell_fep_china_hwr2_fs_candidate_grid_t1

0xb08a,	// (0x000240e0) clock_nsta_pane_cp_24_ParamLimits

0xb08a,	// (0x000240e0) clock_nsta_pane_cp_24

0xb0e7,	// (0x0002413d) indicator_nsta_pane_cp_24_ParamLimits

0xb0e7,	// (0x0002413d) indicator_nsta_pane_cp_24

0xbd8b,	// (0x00024de1) heading_pane_g1

0x0001,

0xf8ff,	// (0x00028955) heading_pane_g

0xe57d,	// (0x000275d3) grid_sct_catagory_button_pane

0xc40b,	// (0x00025461) scroll_pane_cp5_ParamLimits

0xe77c,	// (0x000277d2) button_value_adjust_pane_cp5_ParamLimits

0xe77c,	// (0x000277d2) button_value_adjust_pane_cp5

0xe859,	// (0x000278af) form2_midp_time_pane_ParamLimits

0x0d7c,	// (0x00019dd2) cell_sct_catagory_button_pane_ParamLimits

0x0d7c,	// (0x00019dd2) cell_sct_catagory_button_pane

0xea94,	// (0x00027aea) bg_button_pane_cp01_ParamLimits

0xea94,	// (0x00027aea) bg_button_pane_cp01

0xeacf,	// (0x00027b25) cell_sct_catagory_button_pane_g1

0xdbe4,	// (0x00026c3a) popup_tb_extension_window

0x0d8e,	// (0x00019de4) aid_size_cell_ext_ParamLimits

0x0d8e,	// (0x00019de4) aid_size_cell_ext

0x6f59,	// (0x0001ffaf) bg_tb_trans_pane_cp1_ParamLimits

0x6f59,	// (0x0001ffaf) bg_tb_trans_pane_cp1

0x0dae,	// (0x00019e04) grid_tb_ext_pane_ParamLimits

0x0dae,	// (0x00019e04) grid_tb_ext_pane

0x0dd4,	// (0x00019e2a) cell_tb_ext_pane_ParamLimits

0x0dd4,	// (0x00019e2a) cell_tb_ext_pane

0x0de9,	// (0x00019e3f) cell_tb_ext_pane_g1_ParamLimits

0x0de9,	// (0x00019e3f) cell_tb_ext_pane_g1

0x0e06,	// (0x00019e5c) cell_tb_ext_pane_t1

0x6f59,	// (0x0001ffaf) list_highlight_pane_cp11_ParamLimits

0x6f59,	// (0x0001ffaf) list_highlight_pane_cp11

0x9259,	// (0x000222af) popup_uni_indicator_window_ParamLimits

0x9259,	// (0x000222af) popup_uni_indicator_window

0x7a4e,	// (0x00020aa4) bg_popup_sub_pane_cp14

0x0e21,	// (0x00019e77) list_uniindi_pane

0x0e2d,	// (0x00019e83) uniindi_top_pane

0x6f59,	// (0x0001ffaf) bg_uniindi_top_pane

0x0e4c,	// (0x00019ea2) uniindi_top_pane_g1

0x0e62,	// (0x00019eb8) uniindi_top_pane_g2

0x0003,

0xfd57,	// (0x00028dad) uniindi_top_pane_g

0x0e8c,	// (0x00019ee2) uniindi_top_pane_t1

0x0eb6,	// (0x00019f0c) list_single_uniindi_pane_ParamLimits

0x0eb6,	// (0x00019f0c) list_single_uniindi_pane

0xeacf,	// (0x00027b25) bg_uniindi_top_pane_g1

0x0ec8,	// (0x00019f1e) list_single_uniindi_pane_g1

0x0edb,	// (0x00019f31) list_single_uniindi_pane_t1

0x90f7,	// (0x0002214d) control_bg_pane

0x0f00,	// (0x00019f56) bg_sctrl_sk_pane_cp1

0x0f09,	// (0x00019f5f) bg_sctrl_sk_pane_cp2

0x0f12,	// (0x00019f68) control_bg_pane_g1

0x0f1b,	// (0x00019f71) control_bg_pane_g2

0x0001,

0xfd60,	// (0x00028db6) control_bg_pane_g

0xd657,	// (0x000266ad) cell_indicator_nsta_pane_g1_ParamLimits

0xe672,	// (0x000276c8) cell_indicator_nsta_pane_g2_ParamLimits

0xfadc,	// (0x00028b32) cell_indicator_nsta_pane_g_ParamLimits

0xd704,	// (0x0002675a) form2_midp_time_pane_t1_ParamLimits

0x71c0,	// (0x00020216) main_idle_act4_pane_ParamLimits

0x71c0,	// (0x00020216) main_idle_act4_pane

0xdbe4,	// (0x00026c3a) popup_tb_extension_window_ParamLimits

0x0dc8,	// (0x00019e1e) tb_ext_find_pane_ParamLimits

0x0dc8,	// (0x00019e1e) tb_ext_find_pane

0x0f24,	// (0x00019f7a) ai_gene_pane_1_cp1

0x849b,	// (0x000214f1) ai_gene_pane_2_cp1

0x0f2c,	// (0x00019f82) list_single_idle_plugin_calendar_pane

0x0f35,	// (0x00019f8b) list_single_idle_plugin_notification_pane

0x0f3e,	// (0x00019f94) list_single_idle_plugin_player_pane

0x0f47,	// (0x00019f9d) list_single_idle_plugin_shortcut_pane_ParamLimits

0x0f47,	// (0x00019f9d) list_single_idle_plugin_shortcut_pane

0x0f69,	// (0x00019fbf) main_idle_act4_pane_t1

0x0f7b,	// (0x00019fd1) main_idle_act4_pane_t2

0x0001,

0xfd65,	// (0x00028dbb) main_idle_act4_pane_t

0x0f8d,	// (0x00019fe3) middle_sk_idle_act4_pane_ParamLimits

0x0f8d,	// (0x00019fe3) middle_sk_idle_act4_pane

0x0fa3,	// (0x00019ff9) popup_clock_digital_analogue_window_cp2

0x0fbd,	// (0x0001a013) shortcut_wheel_idle_act4_pane_ParamLimits

0x0fbd,	// (0x0001a013) shortcut_wheel_idle_act4_pane

0xeacf,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g1

0xeacf,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g2

0xeacf,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g3

0xeacf,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g4

0xeacf,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g5

0x0fd1,	// (0x0001a027) shortcut_wheel_idle_act4_pane_g6

0x0fd9,	// (0x0001a02f) shortcut_wheel_idle_act4_pane_g7

0x0fe1,	// (0x0001a037) shortcut_wheel_idle_act4_pane_g8

0x0fe9,	// (0x0001a03f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6a,	// (0x00028dc0) shortcut_wheel_idle_act4_pane_g

0xed17,	// (0x00027d6d) middle_sk_idle_act4_pane_g1_ParamLimits

0xed17,	// (0x00027d6d) middle_sk_idle_act4_pane_g1

0x104d,	// (0x0001a0a3) middle_sk_idle_act4_pane_g2_ParamLimits

0x104d,	// (0x0001a0a3) middle_sk_idle_act4_pane_g2

0x0001,

0xfd8d,	// (0x00028de3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd8d,	// (0x00028de3) middle_sk_idle_act4_pane_g

0x1059,	// (0x0001a0af) middle_sk_idle_act4_pane_t1_ParamLimits

0x1059,	// (0x0001a0af) middle_sk_idle_act4_pane_t1

0x1076,	// (0x0001a0cc) grid_ai_shortcut_pane_ParamLimits

0x1076,	// (0x0001a0cc) grid_ai_shortcut_pane

0x108f,	// (0x0001a0e5) list_highlight_pane_cp16_ParamLimits

0x108f,	// (0x0001a0e5) list_highlight_pane_cp16

0x109c,	// (0x0001a0f2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x109c,	// (0x0001a0f2) list_single_idle_plugin_shortcut_pane_g1

0x10a8,	// (0x0001a0fe) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x10a8,	// (0x0001a0fe) list_single_idle_plugin_shortcut_pane_g2

0x10c0,	// (0x0001a116) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x10c0,	// (0x0001a116) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd92,	// (0x00028de8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd92,	// (0x00028de8) list_single_idle_plugin_shortcut_pane_g

0x10d3,	// (0x0001a129) cell_ai_shortcut_pane_ParamLimits

0x10d3,	// (0x0001a129) cell_ai_shortcut_pane

0x10f4,	// (0x0001a14a) cell_ai_shortcut_pane_g1_ParamLimits

0x10f4,	// (0x0001a14a) cell_ai_shortcut_pane_g1

0x0f24,	// (0x00019f7a) ai_gene_pane_1_cp2

0x1116,	// (0x0001a16c) ai_gene_pane_2_cp2

0x111e,	// (0x0001a174) list_highlight_pane_cp15

0x1127,	// (0x0001a17d) list_single_idle_plugin_calendar_pane_g1

0x111e,	// (0x0001a174) list_highlight_pane_cp17

0x112f,	// (0x0001a185) list_single_idle_plugin_calendar_pane_g1_copy1

0x1137,	// (0x0001a18d) list_single_idle_plugin_player_pane_g1

0xc5c5,	// (0x0002561b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd99,	// (0x00028def) list_single_idle_plugin_player_pane_g

0x113f,	// (0x0001a195) list_single_idle_plugin_player_pane_t1

0x114d,	// (0x0001a1a3) list_single_idle_plugin_player_pane_t2

0x115b,	// (0x0001a1b1) list_single_idle_plugin_player_pane_t3

0x1169,	// (0x0001a1bf) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9e,	// (0x00028df4) list_single_idle_plugin_player_pane_t

0x1177,	// (0x0001a1cd) wait_bar_pane_cp15

0x117f,	// (0x0001a1d5) grid_ai_notification_pane

0xc5c5,	// (0x0002561b) list_single_idle_plugin_notification_pane_g1

0x1188,	// (0x0001a1de) cell_ai_notification_pane_ParamLimits

0x1188,	// (0x0001a1de) cell_ai_notification_pane

0x1195,	// (0x0001a1eb) cell_ai_notification_pane_g1

0x119d,	// (0x0001a1f3) cell_ai_notification_pane_t1

0x11ab,	// (0x0001a201) tb_ext_find_button_pane

0x11b3,	// (0x0001a209) tb_ext_find_pane_g1

0x11bb,	// (0x0001a211) tb_ext_find_pane_t1

0x7f5c,	// (0x00020fb2) tb_ext_find_button_pane_g1

0x11c9,	// (0x0001a21f) tb_ext_find_button_pane_g2

0x0001,

0xfda7,	// (0x00028dfd) tb_ext_find_button_pane_g

0x0f69,	// (0x00019fbf) main_idle_act4_pane_t1_ParamLimits

0x0f7b,	// (0x00019fd1) main_idle_act4_pane_t2_ParamLimits

0xfd65,	// (0x00028dbb) main_idle_act4_pane_t_ParamLimits

0x0fa3,	// (0x00019ff9) popup_clock_digital_analogue_window_cp2_ParamLimits

0x0fb1,	// (0x0001a007) sat_plugin_idle_act4_pane_ParamLimits

0x0fb1,	// (0x0001a007) sat_plugin_idle_act4_pane

0x11d2,	// (0x0001a228) sat_plugin_idle_act4_pane_t1_ParamLimits

0x11d2,	// (0x0001a228) sat_plugin_idle_act4_pane_t1

0x11e5,	// (0x0001a23b) sat_plugin_idle_act4_pane_t2_ParamLimits

0x11e5,	// (0x0001a23b) sat_plugin_idle_act4_pane_t2

0x11f8,	// (0x0001a24e) sat_plugin_idle_act4_pane_t3_ParamLimits

0x11f8,	// (0x0001a24e) sat_plugin_idle_act4_pane_t3

0x120b,	// (0x0001a261) sat_plugin_idle_act4_pane_t4_ParamLimits

0x120b,	// (0x0001a261) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdac,	// (0x00028e02) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdac,	// (0x00028e02) sat_plugin_idle_act4_pane_t

0x91ba,	// (0x00022210) popup_battery_window_ParamLimits

0x91ba,	// (0x00022210) popup_battery_window

0x6f59,	// (0x0001ffaf) bg_popup_sub_pane_cp25_ParamLimits

0x6f59,	// (0x0001ffaf) bg_popup_sub_pane_cp25

0x121e,	// (0x0001a274) popup_battery_window_g1_ParamLimits

0x121e,	// (0x0001a274) popup_battery_window_g1

0x122a,	// (0x0001a280) popup_battery_window_t1_ParamLimits

0x122a,	// (0x0001a280) popup_battery_window_t1

0x123c,	// (0x0001a292) popup_battery_window_t2_ParamLimits

0x123c,	// (0x0001a292) popup_battery_window_t2

0x0001,

0xfdb5,	// (0x00028e0b) popup_battery_window_t_ParamLimits

0xfdb5,	// (0x00028e0b) popup_battery_window_t

0x9bb1,	// (0x00022c07) midp_canvas_pane_ParamLimits

0x9c0d,	// (0x00022c63) midp_keypad_pane_ParamLimits

0x9c0d,	// (0x00022c63) midp_keypad_pane

0xaf67,	// (0x00023fbd) main_midp_pane_ParamLimits

0xd69c,	// (0x000266f2) signal_pane_g2_cp_ParamLimits

0x1259,	// (0x0001a2af) aid_size_cell_midp_keypad_ParamLimits

0x1259,	// (0x0001a2af) aid_size_cell_midp_keypad

0x1273,	// (0x0001a2c9) midp_keyp_game_grid_pane_ParamLimits

0x1273,	// (0x0001a2c9) midp_keyp_game_grid_pane

0x128d,	// (0x0001a2e3) midp_keyp_rocker_pane_ParamLimits

0x128d,	// (0x0001a2e3) midp_keyp_rocker_pane

0x12ba,	// (0x0001a310) midp_keyp_sk_left_pane_ParamLimits

0x12ba,	// (0x0001a310) midp_keyp_sk_left_pane

0x1312,	// (0x0001a368) midp_keyp_sk_right_pane_ParamLimits

0x1312,	// (0x0001a368) midp_keyp_sk_right_pane

0x6d0a,	// (0x0001fd60) bg_button_pane_cp03

0x1364,	// (0x0001a3ba) midp_keyp_sk_left_pane_g1

0x6d0a,	// (0x0001fd60) bg_button_pane_cp04

0x1364,	// (0x0001a3ba) midp_keyp_sk_right_pane_g1

0xeacf,	// (0x00027b25) midp_keyp_rocker_pane_g1

0x136d,	// (0x0001a3c3) keyp_game_cell_pane_ParamLimits

0x136d,	// (0x0001a3c3) keyp_game_cell_pane

0x6d0a,	// (0x0001fd60) bg_button_pane_cp02

0x137e,	// (0x0001a3d4) keyp_game_cell_pane_g1

0x91f0,	// (0x00022246) popup_fep_vkb2_window_ParamLimits

0x91f0,	// (0x00022246) popup_fep_vkb2_window

0xa834,	// (0x0002388a) aid_size_cell_vkb2_ParamLimits

0xa834,	// (0x0002388a) aid_size_cell_vkb2

0xa888,	// (0x000238de) popup_fep_vkb2_window_g1_ParamLimits

0xa888,	// (0x000238de) popup_fep_vkb2_window_g1

0xa8d0,	// (0x00023926) vkb2_area_bottom_pane_ParamLimits

0xa8d0,	// (0x00023926) vkb2_area_bottom_pane

0xa908,	// (0x0002395e) vkb2_area_keypad_pane_ParamLimits

0xa908,	// (0x0002395e) vkb2_area_keypad_pane

0xa940,	// (0x00023996) vkb2_area_top_pane_ParamLimits

0xa940,	// (0x00023996) vkb2_area_top_pane

0xa9b0,	// (0x00023a06) vkb2_top_entry_pane_ParamLimits

0xa9b0,	// (0x00023a06) vkb2_top_entry_pane

0xa9da,	// (0x00023a30) vkb2_top_grid_left_pane_ParamLimits

0xa9da,	// (0x00023a30) vkb2_top_grid_left_pane

0xa9f8,	// (0x00023a4e) vkb2_top_grid_right_pane_ParamLimits

0xa9f8,	// (0x00023a4e) vkb2_top_grid_right_pane

0xaa16,	// (0x00023a6c) vkb2_cell_keypad_pane_ParamLimits

0xaa16,	// (0x00023a6c) vkb2_cell_keypad_pane

0xaac7,	// (0x00023b1d) vkb2_area_bottom_grid_pane_ParamLimits

0xaac7,	// (0x00023b1d) vkb2_area_bottom_grid_pane

0xaaeb,	// (0x00023b41) vkb2_area_bottom_pane_g1_ParamLimits

0xaaeb,	// (0x00023b41) vkb2_area_bottom_pane_g1

0xab0f,	// (0x00023b65) vkb2_area_bottom_pane_g2_ParamLimits

0xab0f,	// (0x00023b65) vkb2_area_bottom_pane_g2

0xab3d,	// (0x00023b93) vkb2_area_bottom_pane_g3_ParamLimits

0xab3d,	// (0x00023b93) vkb2_area_bottom_pane_g3

0x0002,

0xfdba,	// (0x00028e10) vkb2_area_bottom_pane_g_ParamLimits

0xfdba,	// (0x00028e10) vkb2_area_bottom_pane_g

0xab8e,	// (0x00023be4) vkb2_top_cell_left_pane_ParamLimits

0xab8e,	// (0x00023be4) vkb2_top_cell_left_pane

0x1717,	// (0x0001a76d) vkb2_top_entry_pane_g1_ParamLimits

0x1717,	// (0x0001a76d) vkb2_top_entry_pane_g1

0x1725,	// (0x0001a77b) vkb2_top_entry_pane_t1_ParamLimits

0x1725,	// (0x0001a77b) vkb2_top_entry_pane_t1

0x1757,	// (0x0001a7ad) vkb2_top_entry_pane_t2_ParamLimits

0x1757,	// (0x0001a7ad) vkb2_top_entry_pane_t2

0x1789,	// (0x0001a7df) vkb2_top_entry_pane_t3_ParamLimits

0x1789,	// (0x0001a7df) vkb2_top_entry_pane_t3

0x0002,

0xfdc1,	// (0x00028e17) vkb2_top_entry_pane_t_ParamLimits

0xfdc1,	// (0x00028e17) vkb2_top_entry_pane_t

0xabdb,	// (0x00023c31) vkb2_top_grid_right_pane_g1_ParamLimits

0xabdb,	// (0x00023c31) vkb2_top_grid_right_pane_g1

0xabf1,	// (0x00023c47) vkb2_top_grid_right_pane_g2_ParamLimits

0xabf1,	// (0x00023c47) vkb2_top_grid_right_pane_g2

0xac09,	// (0x00023c5f) vkb2_top_grid_right_pane_g3_ParamLimits

0xac09,	// (0x00023c5f) vkb2_top_grid_right_pane_g3

0xac21,	// (0x00023c77) vkb2_top_grid_right_pane_g4_ParamLimits

0xac21,	// (0x00023c77) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc8,	// (0x00028e1e) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc8,	// (0x00028e1e) vkb2_top_grid_right_pane_g

0xac37,	// (0x00023c8d) vkb2_top_cell_left_pane_g1

0xac4e,	// (0x00023ca4) vkb2_cell_keypad_pane_g1_ParamLimits

0xac4e,	// (0x00023ca4) vkb2_cell_keypad_pane_g1

0x184d,	// (0x0001a8a3) vkb2_cell_keypad_pane_t1_ParamLimits

0x184d,	// (0x0001a8a3) vkb2_cell_keypad_pane_t1

0xac5c,	// (0x00023cb2) vkb2_cell_bottom_grid_pane_ParamLimits

0xac5c,	// (0x00023cb2) vkb2_cell_bottom_grid_pane

0xac95,	// (0x00023ceb) vkb2_cell_bottom_grid_pane_g1

0x0ff1,	// (0x0001a047) aid_call2_pane_cp02

0x0ff9,	// (0x0001a04f) aid_call_pane_cp02

0x1001,	// (0x0001a057) clock_digital_number_pane_cp10

0x1009,	// (0x0001a05f) clock_digital_number_pane_cp11

0x1011,	// (0x0001a067) clock_digital_number_pane_cp12

0x1019,	// (0x0001a06f) clock_digital_number_pane_cp13

0x1021,	// (0x0001a077) clock_digital_separator_pane_cp10

0x7f5c,	// (0x00020fb2) popup_clock_digital_analogue_window_cp2_g1

0x7f5c,	// (0x00020fb2) popup_clock_digital_analogue_window_cp2_g2

0x1029,	// (0x0001a07f) popup_clock_digital_analogue_window_cp2_g3

0x7f5c,	// (0x00020fb2) popup_clock_digital_analogue_window_cp2_g4

0x1029,	// (0x0001a07f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd7d,	// (0x00028dd3) popup_clock_digital_analogue_window_cp2_g

0x1031,	// (0x0001a087) popup_clock_digital_analogue_window_cp2_t1

0x103f,	// (0x0001a095) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd88,	// (0x00028dde) popup_clock_digital_analogue_window_cp2_t

0xeacf,	// (0x00027b25) clock_digital_number_pane_cp10_g1

0xeacf,	// (0x00027b25) clock_digital_number_pane_cp10_g2

0x0001,

0xfb6b,	// (0x00028bc1) clock_digital_number_pane_cp10_g

0xeacf,	// (0x00027b25) clock_digital_separator_pane_cp10_g1

0xeacf,	// (0x00027b25) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb6b,	// (0x00028bc1) clock_digital_separator_pane_cp10_g

0x0e6e,	// (0x00019ec4) uniindi_top_pane_g3

0x0e7f,	// (0x00019ed5) uniindi_top_pane_g4

0xaa81,	// (0x00023ad7) vkb2_row_keypad_pane_ParamLimits

0xaa81,	// (0x00023ad7) vkb2_row_keypad_pane

0xacb1,	// (0x00023d07) vkb2_cell_t_keypad_pane_ParamLimits

0xacb1,	// (0x00023d07) vkb2_cell_t_keypad_pane

0xacbe,	// (0x00023d14) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xacbe,	// (0x00023d14) vkb2_cell_t_keypad_pane_cp08

0xacce,	// (0x00023d24) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xacce,	// (0x00023d24) vkb2_cell_t_keypad_pane_cp09

0xacdf,	// (0x00023d35) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xacdf,	// (0x00023d35) vkb2_cell_t_keypad_pane_cp01

0xacef,	// (0x00023d45) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xacef,	// (0x00023d45) vkb2_cell_t_keypad_pane_cp02

0xacff,	// (0x00023d55) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xacff,	// (0x00023d55) vkb2_cell_t_keypad_pane_cp03

0xad0f,	// (0x00023d65) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xad0f,	// (0x00023d65) vkb2_cell_t_keypad_pane_cp04

0xad1f,	// (0x00023d75) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xad1f,	// (0x00023d75) vkb2_cell_t_keypad_pane_cp05

0xad2f,	// (0x00023d85) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xad2f,	// (0x00023d85) vkb2_cell_t_keypad_pane_cp06

0xad3f,	// (0x00023d95) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xad3f,	// (0x00023d95) vkb2_cell_t_keypad_pane_cp07

0xad4f,	// (0x00023da5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xad4f,	// (0x00023da5) vkb2_cell_t_keypad_pane_cp10

0xa56f,	// (0x000235c5) vkb2_cell_t_keypad_pane_g1

0x196c,	// (0x0001a9c2) vkb2_cell_t_keypad_pane_t1

0x90f7,	// (0x0002214d) popup_grid_graphic2_window

0x197e,	// (0x0001a9d4) aid_size_cell_graphic2_ParamLimits

0x197e,	// (0x0001a9d4) aid_size_cell_graphic2

0xeb2a,	// (0x00027b80) bg_popup_window_pane_cp21_ParamLimits

0xeb2a,	// (0x00027b80) bg_popup_window_pane_cp21

0x19aa,	// (0x0001aa00) graphic2_pages_pane_ParamLimits

0x19aa,	// (0x0001aa00) graphic2_pages_pane

0x19e4,	// (0x0001aa3a) grid_graphic2_control_pane_ParamLimits

0x19e4,	// (0x0001aa3a) grid_graphic2_control_pane

0x1a0c,	// (0x0001aa62) grid_graphic2_pane_ParamLimits

0x1a0c,	// (0x0001aa62) grid_graphic2_pane

0x1a5c,	// (0x0001aab2) cell_graphic2_pane

0x6d0a,	// (0x0001fd60) main_comp_mode_pane

0x069c,	// (0x000196f2) list_ai3_gene_pane_ParamLimits

0x09fa,	// (0x00019a50) bg_popup_window_pane_cp19_ParamLimits

0x0a06,	// (0x00019a5c) bg_touch_area_indi_pane_ParamLimits

0x0a06,	// (0x00019a5c) bg_touch_area_indi_pane

0x0a1c,	// (0x00019a72) bg_touch_area_indi_pane_cp01_ParamLimits

0x0a1c,	// (0x00019a72) bg_touch_area_indi_pane_cp01

0x0a32,	// (0x00019a88) bg_touch_area_indi_pane_cp02_ParamLimits

0x0a32,	// (0x00019a88) bg_touch_area_indi_pane_cp02

0x0a48,	// (0x00019a9e) bg_touch_area_indi_pane_cp03_ParamLimits

0x0a48,	// (0x00019a9e) bg_touch_area_indi_pane_cp03

0x0a5e,	// (0x00019ab4) popup_slider_window_g1_ParamLimits

0x0a7a,	// (0x00019ad0) popup_slider_window_g2_ParamLimits

0x0a96,	// (0x00019aec) popup_slider_window_g3_ParamLimits

0xfd12,	// (0x00028d68) popup_slider_window_g_ParamLimits

0x0af2,	// (0x00019b48) popup_slider_window_t1_ParamLimits

0x0b64,	// (0x00019bba) small_volume_slider_vertical_pane_ParamLimits

0x1a5c,	// (0x0001aab2) cell_graphic2_pane_ParamLimits

0x1a99,	// (0x0001aaef) bg_button_pane_cp10_ParamLimits

0x1a99,	// (0x0001aaef) bg_button_pane_cp10

0x1aaa,	// (0x0001ab00) bg_button_pane_cp11_ParamLimits

0x1aaa,	// (0x0001ab00) bg_button_pane_cp11

0x1abb,	// (0x0001ab11) graphic2_pages_pane_g1_ParamLimits

0x1abb,	// (0x0001ab11) graphic2_pages_pane_g1

0x1ace,	// (0x0001ab24) graphic2_pages_pane_g2_ParamLimits

0x1ace,	// (0x0001ab24) graphic2_pages_pane_g2

0x0001,

0xfdd6,	// (0x00028e2c) graphic2_pages_pane_g_ParamLimits

0xfdd6,	// (0x00028e2c) graphic2_pages_pane_g

0x1ae4,	// (0x0001ab3a) graphic2_pages_pane_t1_ParamLimits

0x1ae4,	// (0x0001ab3a) graphic2_pages_pane_t1

0x1afa,	// (0x0001ab50) cell_graphic2_control_pane_ParamLimits

0x1afa,	// (0x0001ab50) cell_graphic2_control_pane

0x1b14,	// (0x0001ab6a) cell_graphic2_pane_g1_ParamLimits

0x1b14,	// (0x0001ab6a) cell_graphic2_pane_g1

0x1b21,	// (0x0001ab77) cell_graphic2_pane_g2_ParamLimits

0x1b21,	// (0x0001ab77) cell_graphic2_pane_g2

0x1b2e,	// (0x0001ab84) cell_graphic2_pane_g3_ParamLimits

0x1b2e,	// (0x0001ab84) cell_graphic2_pane_g3

0x1b3b,	// (0x0001ab91) cell_graphic2_pane_g4_ParamLimits

0x1b3b,	// (0x0001ab91) cell_graphic2_pane_g4

0x1b48,	// (0x0001ab9e) cell_graphic2_pane_g5_ParamLimits

0x1b48,	// (0x0001ab9e) cell_graphic2_pane_g5

0x0004,

0xfddb,	// (0x00028e31) cell_graphic2_pane_g_ParamLimits

0xfddb,	// (0x00028e31) cell_graphic2_pane_g

0x1b63,	// (0x0001abb9) cell_graphic2_pane_t1_ParamLimits

0x1b63,	// (0x0001abb9) cell_graphic2_pane_t1

0xb313,	// (0x00024369) grid_highlight_pane_cp11_ParamLimits

0xb313,	// (0x00024369) grid_highlight_pane_cp11

0x7a4e,	// (0x00020aa4) bg_button_pane_cp05

0x1b79,	// (0x0001abcf) cell_graphic2_control_pane_g1

0xeacf,	// (0x00027b25) bg_touch_area_indi_pane_g1

0x1b86,	// (0x0001abdc) aid_cmod_rocker_key_size

0x1b90,	// (0x0001abe6) aid_cmode_itu_key_size

0x1b9a,	// (0x0001abf0) main_cmode_video_pane

0x1ba2,	// (0x0001abf8) main_comp_mode_itu_pane

0x1bac,	// (0x0001ac02) main_comp_mode_rocker_pane

0x1bb4,	// (0x0001ac0a) cell_cmode_rocker_pane_ParamLimits

0x1bb4,	// (0x0001ac0a) cell_cmode_rocker_pane

0x1bc6,	// (0x0001ac1c) cell_cmode_itu_pane_ParamLimits

0x1bc6,	// (0x0001ac1c) cell_cmode_itu_pane

0x7a4e,	// (0x00020aa4) bg_button_pane_cp06_ParamLimits

0x7a4e,	// (0x00020aa4) bg_button_pane_cp06

0xed17,	// (0x00027d6d) cell_cmode_rocker_pane_g1_ParamLimits

0xed17,	// (0x00027d6d) cell_cmode_rocker_pane_g1

0x0cd8,	// (0x00019d2e) cell_cmode_rocker_pane_g2_ParamLimits

0x0cd8,	// (0x00019d2e) cell_cmode_rocker_pane_g2

0x0001,

0xfde6,	// (0x00028e3c) cell_cmode_rocker_pane_g_ParamLimits

0xfde6,	// (0x00028e3c) cell_cmode_rocker_pane_g

0x6d0a,	// (0x0001fd60) bg_button_pane_cp07

0x1bdb,	// (0x0001ac31) cell_cmode_itu_pane_g1

0x1be4,	// (0x0001ac3a) cell_cmode_itu_pane_t1

0x1bf2,	// (0x0001ac48) cell_cmode_itu_pane_t2

0x0001,

0xfdeb,	// (0x00028e41) cell_cmode_itu_pane_t

0x0ef0,	// (0x00019f46) aid_touch_ctrl_left

0x0ef8,	// (0x00019f4e) aid_touch_ctrl_right

0x6d0a,	// (0x0001fd60) compa_mode_pane

0x1c00,	// (0x0001ac56) aid_cmod_rocker_key_size_cp

0x1c0a,	// (0x0001ac60) aid_cmode_itu_key_size_cp

0x1c14,	// (0x0001ac6a) compa_mode_pane_g1

0x1c1c,	// (0x0001ac72) compa_mode_pane_g2

0x1c24,	// (0x0001ac7a) compa_mode_pane_g3

0x0002,

0xfdf0,	// (0x00028e46) compa_mode_pane_g

0x1c2c,	// (0x0001ac82) main_comp_mode_itu_pane_cp

0x1c34,	// (0x0001ac8a) main_comp_mode_rocker_pane_cp

0x1c3c,	// (0x0001ac92) cell_cmode_itu_pane_cp_ParamLimits

0x1c3c,	// (0x0001ac92) cell_cmode_itu_pane_cp

0x1c51,	// (0x0001aca7) cell_cmode_rocker_pane_cp_ParamLimits

0x1c51,	// (0x0001aca7) cell_cmode_rocker_pane_cp

0x7a4e,	// (0x00020aa4) bg_button_pane_cp06_cp_ParamLimits

0x7a4e,	// (0x00020aa4) bg_button_pane_cp06_cp

0xed17,	// (0x00027d6d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xed17,	// (0x00027d6d) cell_cmode_rocker_pane_g1_cp

0xeacf,	// (0x00027b25) cell_cmode_rocker_pane_g2_cp

0x6d0a,	// (0x0001fd60) bg_button_pane_cp07_cp

0x1c63,	// (0x0001acb9) cell_cmode_itu_pane_g1_cp

0x1c6c,	// (0x0001acc2) cell_cmode_itu_pane_t1_cp

0x1c7a,	// (0x0001acd0) cell_cmode_itu_pane_t2_cp

0xe48b,	// (0x000274e1) settings_code_pane_cp2

0x6dfa,	// (0x0001fe50) bg_popup_window_pane_cp3_ParamLimits

0x7131,	// (0x00020187) heading_pane_cp3_ParamLimits

0x713d,	// (0x00020193) listscroll_popup_graphic_pane_ParamLimits

0xa32a,	// (0x00023380) fep_hwr_aid_pane_ParamLimits

0xa78a,	// (0x000237e0) aid_touch_sctrl_top_ParamLimits

0xa7a5,	// (0x000237fb) sctrl_sk_top_pane_g1_ParamLimits

0xa56f,	// (0x000235c5) sctrl_sk_top_pane_g2_ParamLimits

0xfd2b,	// (0x00028d81) sctrl_sk_top_pane_g_ParamLimits

0xa7b2,	// (0x00023808) sctrl_sk_top_pane_t1_ParamLimits

0xa78a,	// (0x000237e0) aid_touch_sctrl_bottom_ParamLimits

0xa7b2,	// (0x00023808) sctrl_sk_bottom_pane_t1_ParamLimits

0x0e3a,	// (0x00019e90) aid_area_touch_clock

0xa978,	// (0x000239ce) aid_vkb2_area_top_pane_cell_ParamLimits

0xa978,	// (0x000239ce) aid_vkb2_area_top_pane_cell

0xaaa3,	// (0x00023af9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xaaa3,	// (0x00023af9) aid_vkb2_area_bottom_pane_cell

0x170f,	// (0x0001a765) popup_char_count_window

0x1c88,	// (0x0001acde) popup_char_count_window_g1

0x1c91,	// (0x0001ace7) popup_char_count_window_g2

0x1c9a,	// (0x0001acf0) popup_char_count_window_g3

0x0002,

0xfdf7,	// (0x00028e4d) popup_char_count_window_g

0x1ca3,	// (0x0001acf9) popup_char_count_window_t1

0xa866,	// (0x000238bc) popup_fep_char_preview_window_ParamLimits

0xa866,	// (0x000238bc) popup_fep_char_preview_window

0xa996,	// (0x000239ec) vkb2_top_candi_pane_ParamLimits

0xa996,	// (0x000239ec) vkb2_top_candi_pane

0x1cb1,	// (0x0001ad07) cell_vkb2_top_candi_pane_ParamLimits

0x1cb1,	// (0x0001ad07) cell_vkb2_top_candi_pane

0xad64,	// (0x00023dba) bg_popup_fep_char_preview_window_ParamLimits

0xad64,	// (0x00023dba) bg_popup_fep_char_preview_window

0xad72,	// (0x00023dc8) popup_fep_char_preview_window_t1_ParamLimits

0xad72,	// (0x00023dc8) popup_fep_char_preview_window_t1

0x1d34,	// (0x0001ad8a) bg_popup_fep_char_preview_window_g1

0x1d2c,	// (0x0001ad82) bg_popup_fep_char_preview_window_g2

0x1d24,	// (0x0001ad7a) bg_popup_fep_char_preview_window_g3

0x1d5c,	// (0x0001adb2) bg_popup_fep_char_preview_window_g4

0x1d54,	// (0x0001adaa) bg_popup_fep_char_preview_window_g5

0xadac,	// (0x00023e02) bg_popup_fep_char_preview_window_g6

0x1d44,	// (0x0001ad9a) bg_popup_fep_char_preview_window_g7

0x1d3c,	// (0x0001ad92) bg_popup_fep_char_preview_window_g8

0x1d64,	// (0x0001adba) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfe,	// (0x00028e54) bg_popup_fep_char_preview_window_g

0xa56f,	// (0x000235c5) cell_vkb2_top_candi_pane_g1_ParamLimits

0xa56f,	// (0x000235c5) cell_vkb2_top_candi_pane_g1

0xa57d,	// (0x000235d3) cell_vkb2_top_candi_pane_g2_ParamLimits

0xa57d,	// (0x000235d3) cell_vkb2_top_candi_pane_g2

0x1d8d,	// (0x0001ade3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x1d8d,	// (0x0001ade3) cell_vkb2_top_candi_pane_g3

0xadb4,	// (0x00023e0a) cell_vkb2_top_candi_pane_g4_ParamLimits

0xadb4,	// (0x00023e0a) cell_vkb2_top_candi_pane_g4

0xf0d5,	// (0x0002812b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xf0d5,	// (0x0002812b) cell_vkb2_top_candi_pane_g5

0xadd5,	// (0x00023e2b) cell_vkb2_top_candi_pane_g6_ParamLimits

0xadd5,	// (0x00023e2b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe11,	// (0x00028e67) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe11,	// (0x00028e67) cell_vkb2_top_candi_pane_g

0xade3,	// (0x00023e39) cell_vkb2_top_candi_pane_t1

0xa142,	// (0x00023198) aid_size_touch_slider_mark_ParamLimits

0xa142,	// (0x00023198) aid_size_touch_slider_mark

0x19d8,	// (0x0001aa2e) grid_graphic2_catg_pane_ParamLimits

0x19d8,	// (0x0001aa2e) grid_graphic2_catg_pane

0x1a38,	// (0x0001aa8e) popup_grid_graphic2_window_t1_ParamLimits

0x1a38,	// (0x0001aa8e) popup_grid_graphic2_window_t1

0x1a4a,	// (0x0001aaa0) popup_grid_graphic2_window_t2_ParamLimits

0x1a4a,	// (0x0001aaa0) popup_grid_graphic2_window_t2

0x0001,

0xfdd1,	// (0x00028e27) popup_grid_graphic2_window_t_ParamLimits

0xfdd1,	// (0x00028e27) popup_grid_graphic2_window_t

0x7a4e,	// (0x00020aa4) bg_button_pane_cp05_ParamLimits

0x1b79,	// (0x0001abcf) cell_graphic2_control_pane_g1_ParamLimits

0x1dc4,	// (0x0001ae1a) cell_graphic2_catg_pane_ParamLimits

0x1dc4,	// (0x0001ae1a) cell_graphic2_catg_pane

0x6d0a,	// (0x0001fd60) bg_button_pane_cp12

0x1dd6,	// (0x0001ae2c) cell_graphic2_catg_pane_g1

0x0e06,	// (0x00019e5c) cell_tb_ext_pane_t1_ParamLimits

0xabae,	// (0x00023c04) vkb2_top_cell_right_narrow_pane_ParamLimits

0xabae,	// (0x00023c04) vkb2_top_cell_right_narrow_pane

0xabc6,	// (0x00023c1c) vkb2_top_cell_right_wide_pane_ParamLimits

0xabc6,	// (0x00023c1c) vkb2_top_cell_right_wide_pane

0xa31c,	// (0x00023372) bg_vkb2_func_pane_ParamLimits

0xa31c,	// (0x00023372) bg_vkb2_func_pane

0xac37,	// (0x00023c8d) vkb2_top_cell_left_pane_g1_ParamLimits

0xa31c,	// (0x00023372) bg_vkb2_fuc_pane_cp03_ParamLimits

0xa31c,	// (0x00023372) bg_vkb2_fuc_pane_cp03

0xac95,	// (0x00023ceb) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xb22d,	// (0x00024283) bg_vkb2_func_pane_g1

0xb235,	// (0x0002428b) bg_vkb2_func_pane_g2

0xb245,	// (0x0002429b) bg_vkb2_func_pane_g3

0xb23d,	// (0x00024293) bg_vkb2_func_pane_g4

0xb24d,	// (0x000242a3) bg_vkb2_func_pane_g5

0xb255,	// (0x000242ab) bg_vkb2_func_pane_g6

0xb25d,	// (0x000242b3) bg_vkb2_func_pane_g7

0xb265,	// (0x000242bb) bg_vkb2_func_pane_g8

0xb225,	// (0x0002427b) bg_vkb2_func_pane_g9

0x0008,

0xfe1e,	// (0x00028e74) bg_vkb2_func_pane_g

0xa31c,	// (0x00023372) bg_vkb2_fuc_pane_cp01_ParamLimits

0xa31c,	// (0x00023372) bg_vkb2_fuc_pane_cp01

0xac37,	// (0x00023c8d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xac37,	// (0x00023c8d) vkb2_top_cell_right_wide_pane_g1

0xa31c,	// (0x00023372) bg_vkb2_fuc_pane_cp02_ParamLimits

0xa31c,	// (0x00023372) bg_vkb2_fuc_pane_cp02

0xac95,	// (0x00023ceb) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xac95,	// (0x00023ceb) vkb2_top_cell_right_narrow_pane_g1

0x098c,	// (0x000199e2) aid_touch_area_decrease_ParamLimits

0x098c,	// (0x000199e2) aid_touch_area_decrease

0x09a4,	// (0x000199fa) aid_touch_area_increase_ParamLimits

0x09a4,	// (0x000199fa) aid_touch_area_increase

0x09b0,	// (0x00019a06) aid_touch_area_mute_ParamLimits

0x09b0,	// (0x00019a06) aid_touch_area_mute

0x09cc,	// (0x00019a22) aid_touch_area_slider_ParamLimits

0x09cc,	// (0x00019a22) aid_touch_area_slider

0x0ab2,	// (0x00019b08) popup_slider_window_g4_ParamLimits

0x0ab2,	// (0x00019b08) popup_slider_window_g4

0x0abe,	// (0x00019b14) popup_slider_window_g5_ParamLimits

0x0abe,	// (0x00019b14) popup_slider_window_g5

0x0ae0,	// (0x00019b36) popup_slider_window_g6_ParamLimits

0x0ae0,	// (0x00019b36) popup_slider_window_g6

0x0b1e,	// (0x00019b74) popup_slider_window_t2_ParamLimits

0x0b1e,	// (0x00019b74) popup_slider_window_t2

0x0001,

0xfd1f,	// (0x00028d75) popup_slider_window_t_ParamLimits

0xfd1f,	// (0x00028d75) popup_slider_window_t

0x0b36,	// (0x00019b8c) slider_pane_ParamLimits

0x0b36,	// (0x00019b8c) slider_pane

0x1ddf,	// (0x0001ae35) slider_pane_g1_ParamLimits

0x1ddf,	// (0x0001ae35) slider_pane_g1

0x1df3,	// (0x0001ae49) slider_pane_g2_ParamLimits

0x1df3,	// (0x0001ae49) slider_pane_g2

0x1e09,	// (0x0001ae5f) slider_pane_g3_ParamLimits

0x1e09,	// (0x0001ae5f) slider_pane_g3

0x0003,

0xfe31,	// (0x00028e87) slider_pane_g_ParamLimits

0xfe31,	// (0x00028e87) slider_pane_g

0xdc34,	// (0x00026c8a) popup_tb_float_extension_window_ParamLimits

0xdc34,	// (0x00026c8a) popup_tb_float_extension_window

0x1e35,	// (0x0001ae8b) aid_size_cell_tb_float_ext

0x6d0a,	// (0x0001fd60) bg_popup_sub_window_cp28

0x1e40,	// (0x0001ae96) grid_tb_float_ext_pane

0x1e48,	// (0x0001ae9e) cell_tb_float_ext_pane_ParamLimits

0x1e48,	// (0x0001ae9e) cell_tb_float_ext_pane

0x1e60,	// (0x0001aeb6) cell_tb_float_ext_pane_g1

0x1e69,	// (0x0001aebf) grid_highlight_pane_cp12

0xa465,	// (0x000234bb) cell_last_hwr_side_pane_ParamLimits

0xa465,	// (0x000234bb) cell_last_hwr_side_pane

0xeacf,	// (0x00027b25) cell_last_hwr_side_pane_g1

0x1e72,	// (0x0001aec8) cell_last_hwr_side_pane_g2

0x0001,

0xfe3a,	// (0x00028e90) cell_last_hwr_side_pane_g

0xab6b,	// (0x00023bc1) vkb2_area_bottom_space_btn_pane_ParamLimits

0xab6b,	// (0x00023bc1) vkb2_area_bottom_space_btn_pane

0xa56f,	// (0x000235c5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x196c,	// (0x0001a9c2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xade3,	// (0x00023e39) cell_vkb2_top_candi_pane_t1_ParamLimits

0xadf9,	// (0x00023e4f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xadf9,	// (0x00023e4f) vkb2_area_bottom_space_btn_pane_g1

0xae2f,	// (0x00023e85) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xae2f,	// (0x00023e85) vkb2_area_bottom_space_btn_pane_g2

0xae65,	// (0x00023ebb) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xae65,	// (0x00023ebb) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3f,	// (0x00028e95) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3f,	// (0x00028e95) vkb2_area_bottom_space_btn_pane_g

0xa3d9,	// (0x0002342f) cel_fep_hwr_func_pane_ParamLimits

0xa3d9,	// (0x0002342f) cel_fep_hwr_func_pane

0xa415,	// (0x0002346b) cell_hwr_side_button_pane_ParamLimits

0xa415,	// (0x0002346b) cell_hwr_side_button_pane

0x0e3a,	// (0x00019e90) aid_area_touch_clock_ParamLimits

0x6f59,	// (0x0001ffaf) bg_uniindi_top_pane_ParamLimits

0x0e4c,	// (0x00019ea2) uniindi_top_pane_g1_ParamLimits

0x0e62,	// (0x00019eb8) uniindi_top_pane_g2_ParamLimits

0x0e6e,	// (0x00019ec4) uniindi_top_pane_g3_ParamLimits

0x0e7f,	// (0x00019ed5) uniindi_top_pane_g4_ParamLimits

0xfd57,	// (0x00028dad) uniindi_top_pane_g_ParamLimits

0x0e8c,	// (0x00019ee2) uniindi_top_pane_t1_ParamLimits

0x6f59,	// (0x0001ffaf) bg_vkb2_func_pane_cp01_ParamLimits

0x6f59,	// (0x0001ffaf) bg_vkb2_func_pane_cp01

0x1f2d,	// (0x0001af83) cel_fep_hwr_func_pane_g1_ParamLimits

0x1f2d,	// (0x0001af83) cel_fep_hwr_func_pane_g1

0x6f59,	// (0x0001ffaf) bg_vkb2_func_pane_cp02_ParamLimits

0x6f59,	// (0x0001ffaf) bg_vkb2_func_pane_cp02

0x1f2d,	// (0x0001af83) cell_hwr_side_button_pane_g1_ParamLimits

0x1f2d,	// (0x0001af83) cell_hwr_side_button_pane_g1

0xb149,	// (0x0002419f) status_pane_g4_ParamLimits

0xb149,	// (0x0002419f) status_pane_g4

0xb161,	// (0x000241b7) status_pane_t1

0xe8c1,	// (0x00027917) form2_midp_gauge_slider_cont_pane

0xe8c9,	// (0x0002791f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe8db,	// (0x00027931) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe8ed,	// (0x00027943) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1e,	// (0x00028b74) form2_midp_gauge_slider_pane_t_ParamLimits

0xe8ff,	// (0x00027955) form2_midp_slider_pane_ParamLimits

0xa826,	// (0x0002387c) aid_size_cell_func_vkb2_ParamLimits

0xa826,	// (0x0002387c) aid_size_cell_func_vkb2

0x1e21,	// (0x0001ae77) slider_pane_g4_ParamLimits

0x1e21,	// (0x0001ae77) slider_pane_g4

0xaeab,	// (0x00023f01) form2_midp_gauge_slider_pane_t2_cp01

0xaeb9,	// (0x00023f0f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xaeb9,	// (0x00023f0f) form2_midp_gauge_slider_pane_t3_cp01

0xaed6,	// (0x00023f2c) form2_midp_slider_pane_cp01

0x6d0a,	// (0x0001fd60) navi_smil_pane

0x1f9a,	// (0x0001aff0) navi_smil_pane_g1

0x1fa2,	// (0x0001aff8) navi_smil_pane_t1

0x1f6f,	// (0x0001afc5) form2_midp_slider_pane_g1

0x1f78,	// (0x0001afce) form2_midp_slider_pane_g2

0x1f80,	// (0x0001afd6) form2_midp_slider_pane_g3

0x1f6f,	// (0x0001afc5) form2_midp_slider_pane_g4

0x1f88,	// (0x0001afde) form2_midp_slider_pane_g5

0x0004,

0xfe48,	// (0x00028e9e) form2_midp_slider_pane_g

0xae9b,	// (0x00023ef1) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xae9b,	// (0x00023ef1) vkb2_area_bottom_space_btn_pane_g4

0xdd75,	// (0x00026dcb) lc0_navi_pane_ParamLimits

0xdd75,	// (0x00026dcb) lc0_navi_pane

0xddeb,	// (0x00026e41) lc0_stat_indi_pane_ParamLimits

0xddeb,	// (0x00026e41) lc0_stat_indi_pane

0xde02,	// (0x00026e58) ls0_title_pane_ParamLimits

0xde02,	// (0x00026e58) ls0_title_pane

0x7a4e,	// (0x00020aa4) bg_popup_sub_pane_cp14_ParamLimits

0x0e21,	// (0x00019e77) list_uniindi_pane_ParamLimits

0x0e2d,	// (0x00019e83) uniindi_top_pane_ParamLimits

0x0ec8,	// (0x00019f1e) list_single_uniindi_pane_g1_ParamLimits

0x0edb,	// (0x00019f31) list_single_uniindi_pane_t1_ParamLimits

0xaedf,	// (0x00023f35) lc0_stat_clock_pane_ParamLimits

0xaedf,	// (0x00023f35) lc0_stat_clock_pane

0x1fca,	// (0x0001b020) lc0_stat_indi_pane_g1_ParamLimits

0x1fca,	// (0x0001b020) lc0_stat_indi_pane_g1

0x1fbd,	// (0x0001b013) lc0_stat_indi_pane_g2_ParamLimits

0x1fbd,	// (0x0001b013) lc0_stat_indi_pane_g2

0x0001,

0xfe53,	// (0x00028ea9) lc0_stat_indi_pane_g_ParamLimits

0xfe53,	// (0x00028ea9) lc0_stat_indi_pane_g

0xaeec,	// (0x00023f42) lc0_uni_indicator_pane_ParamLimits

0xaeec,	// (0x00023f42) lc0_uni_indicator_pane

0x1fe4,	// (0x0001b03a) ls0_title_pane_g1_ParamLimits

0x1fe4,	// (0x0001b03a) ls0_title_pane_g1

0x1ff8,	// (0x0001b04e) ls0_title_pane_t1_ParamLimits

0x1ff8,	// (0x0001b04e) ls0_title_pane_t1

0xaef9,	// (0x00023f4f) lc0_uni_indicator_pane_g1_ParamLimits

0xaef9,	// (0x00023f4f) lc0_uni_indicator_pane_g1

0x2040,	// (0x0001b096) lc0_stat_clock_pane_t1

0x6d0a,	// (0x0001fd60) main_ai5_pane

0x204e,	// (0x0001b0a4) ai5_sk_pane_ParamLimits

0x204e,	// (0x0001b0a4) ai5_sk_pane

0x205b,	// (0x0001b0b1) cell_ai5_widget_pane_ParamLimits

0x205b,	// (0x0001b0b1) cell_ai5_widget_pane

0x20b6,	// (0x0001b10c) aid_size_cell_widget_grid

0x20ca,	// (0x0001b120) bg_ai5_widget_pane_ParamLimits

0x20ca,	// (0x0001b120) bg_ai5_widget_pane

0x20f2,	// (0x0001b148) cell_ai5_widget_pane_g2

0x2102,	// (0x0001b158) cell_ai5_widget_pane_g3

0x2116,	// (0x0001b16c) cell_ai5_widget_pane_g4

0x2122,	// (0x0001b178) cell_ai5_widget_pane_g5

0x212e,	// (0x0001b184) cell_ai5_widget_pane_g6

0x213a,	// (0x0001b190) cell_ai5_widget_pane_g7

0x2182,	// (0x0001b1d8) cell_ai5_widget_pane_t1_ParamLimits

0x2182,	// (0x0001b1d8) cell_ai5_widget_pane_t1

0x219f,	// (0x0001b1f5) cell_ai5_widget_pane_t2_ParamLimits

0x219f,	// (0x0001b1f5) cell_ai5_widget_pane_t2

0x21b7,	// (0x0001b20d) cell_ai5_widget_pane_t3_ParamLimits

0x21b7,	// (0x0001b20d) cell_ai5_widget_pane_t3

0x21cf,	// (0x0001b225) cell_ai5_widget_pane_t4_ParamLimits

0x21cf,	// (0x0001b225) cell_ai5_widget_pane_t4

0x21e9,	// (0x0001b23f) cell_ai5_widget_pane_t5_ParamLimits

0x21e9,	// (0x0001b23f) cell_ai5_widget_pane_t5

0x2208,	// (0x0001b25e) cell_ai5_widget_pane_t6_ParamLimits

0x2208,	// (0x0001b25e) cell_ai5_widget_pane_t6

0x221a,	// (0x0001b270) cell_ai5_widget_pane_t7_ParamLimits

0x221a,	// (0x0001b270) cell_ai5_widget_pane_t7

0x2233,	// (0x0001b289) cell_ai5_widget_pane_t8_ParamLimits

0x2233,	// (0x0001b289) cell_ai5_widget_pane_t8

0x0009,

0xfe6d,	// (0x00028ec3) cell_ai5_widget_pane_t_ParamLimits

0xfe6d,	// (0x00028ec3) cell_ai5_widget_pane_t

0x227b,	// (0x0001b2d1) grid_ai5_widget_pane

0x7a4e,	// (0x00020aa4) highlight_cell_ai5_widget_pane_ParamLimits

0x7a4e,	// (0x00020aa4) highlight_cell_ai5_widget_pane

0x2291,	// (0x0001b2e7) ai5_sk_left_pane

0x229b,	// (0x0001b2f1) ai5_sk_middle_pane

0x22a5,	// (0x0001b2fb) ai5_sk_right_pane

0x22af,	// (0x0001b305) bg_ai5_widget_pane_g1_ParamLimits

0x22af,	// (0x0001b305) bg_ai5_widget_pane_g1

0x22bb,	// (0x0001b311) bg_ai5_widget_pane_g2_ParamLimits

0x22bb,	// (0x0001b311) bg_ai5_widget_pane_g2

0x22c7,	// (0x0001b31d) bg_ai5_widget_pane_g3_ParamLimits

0x22c7,	// (0x0001b31d) bg_ai5_widget_pane_g3

0x22d3,	// (0x0001b329) bg_ai5_widget_pane_g4_ParamLimits

0x22d3,	// (0x0001b329) bg_ai5_widget_pane_g4

0x22df,	// (0x0001b335) bg_ai5_widget_pane_g5_ParamLimits

0x22df,	// (0x0001b335) bg_ai5_widget_pane_g5

0x22eb,	// (0x0001b341) bg_ai5_widget_pane_g6_ParamLimits

0x22eb,	// (0x0001b341) bg_ai5_widget_pane_g6

0x22f7,	// (0x0001b34d) bg_ai5_widget_pane_g7_ParamLimits

0x22f7,	// (0x0001b34d) bg_ai5_widget_pane_g7

0x2303,	// (0x0001b359) bg_ai5_widget_pane_g8_ParamLimits

0x2303,	// (0x0001b359) bg_ai5_widget_pane_g8

0x230f,	// (0x0001b365) bg_ai5_widget_pane_g9_ParamLimits

0x230f,	// (0x0001b365) bg_ai5_widget_pane_g9

0x0008,

0xfe82,	// (0x00028ed8) bg_ai5_widget_pane_g_ParamLimits

0xfe82,	// (0x00028ed8) bg_ai5_widget_pane_g

0x2337,	// (0x0001b38d) cell_shortcut_ai5_widget_pane_ParamLimits

0x2337,	// (0x0001b38d) cell_shortcut_ai5_widget_pane

0x6e62,	// (0x0001feb8) bg_cell_shortcut_ai5_widget_pane

0x2348,	// (0x0001b39e) cell_grid_ai5_widget_pane_g1

0x2351,	// (0x0001b3a7) highlight_cell_shortcut_ai5_widget_pane

0xb22d,	// (0x00024283) ai5_sk_left_pane_g1

0x2359,	// (0x0001b3af) ai5_sk_left_pane_g2

0x2361,	// (0x0001b3b7) ai5_sk_left_pane_g3

0x2369,	// (0x0001b3bf) ai5_sk_left_pane_g4

0x0003,

0xfe95,	// (0x00028eeb) ai5_sk_left_pane_g

0x2371,	// (0x0001b3c7) ai5_sk_left_pane_t1

0xb235,	// (0x0002428b) ai5_sk_right_pane_g1

0x237f,	// (0x0001b3d5) ai5_sk_right_pane_g2

0x2387,	// (0x0001b3dd) ai5_sk_right_pane_g3

0x238f,	// (0x0001b3e5) ai5_sk_right_pane_g4

0x0003,

0xfe9e,	// (0x00028ef4) ai5_sk_right_pane_g

0x2397,	// (0x0001b3ed) ai5_sk_right_pane_t1

0xb235,	// (0x0002428b) ai5_sk_middle_pane_g1

0xb22d,	// (0x00024283) ai5_sk_middle_pane_g2

0xb24d,	// (0x000242a3) ai5_sk_middle_pane_g3

0x2387,	// (0x0001b3dd) ai5_sk_middle_pane_g4

0x2361,	// (0x0001b3b7) ai5_sk_middle_pane_g5

0x23a5,	// (0x0001b3fb) ai5_sk_middle_pane_g6

0x23ad,	// (0x0001b403) ai5_sk_middle_pane_g7

0x0006,

0xfea7,	// (0x00028efd) ai5_sk_middle_pane_g

0xdcc2,	// (0x00026d18) aid_touch_area_size_lc0_ParamLimits

0xdcc2,	// (0x00026d18) aid_touch_area_size_lc0

0xa59e,	// (0x000235f4) cell_hwr_candidate_pane_t1_ParamLimits

0xb07e,	// (0x000240d4) aid_touch_navi_pane

0xe084,	// (0x000270da) status_dt_navi_pane_ParamLimits

0xe084,	// (0x000270da) status_dt_navi_pane

0xe091,	// (0x000270e7) status_dt_sta_pane_ParamLimits

0xe091,	// (0x000270e7) status_dt_sta_pane

0x23b5,	// (0x0001b40b) dt_sta_controll_pane

0x23c2,	// (0x0001b418) dt_sta_indi_pane

0x23d3,	// (0x0001b429) dt_sta_title_pane

0x6f59,	// (0x0001ffaf) bg_dt_sta_indi_pane_ParamLimits

0x6f59,	// (0x0001ffaf) bg_dt_sta_indi_pane

0x23e6,	// (0x0001b43c) dt_sta_battery_pane

0x23ee,	// (0x0001b444) dt_sta_indi_pane_g1

0x23f7,	// (0x0001b44d) dt_sta_indi_pane_g2

0x2400,	// (0x0001b456) dt_sta_indi_pane_g3

0x0002,

0xfeb6,	// (0x00028f0c) dt_sta_indi_pane_g

0x2409,	// (0x0001b45f) dt_sta_signal_pane

0x7a4e,	// (0x00020aa4) bg_dt_sta_title_pane_ParamLimits

0x7a4e,	// (0x00020aa4) bg_dt_sta_title_pane

0x2412,	// (0x0001b468) dt_sta_title_pane_g1

0x241a,	// (0x0001b470) dt_sta_title_pane_t1_ParamLimits

0x241a,	// (0x0001b470) dt_sta_title_pane_t1

0x6d0a,	// (0x0001fd60) bg_dt_sta_control_pane

0x242f,	// (0x0001b485) dt_sta_controll_pane_g1

0x2438,	// (0x0001b48e) bg_dt_sta_title_pane_g1

0x2441,	// (0x0001b497) bg_dt_sta_title_pane_g2

0x244a,	// (0x0001b4a0) bg_dt_sta_title_pane_g3

0x0002,

0xfebd,	// (0x00028f13) bg_dt_sta_title_pane_g

0xeacf,	// (0x00027b25) bg_dt_sta_indi_pane_g1

0x2453,	// (0x0001b4a9) dt_sta_signal_pane_g1

0x245b,	// (0x0001b4b1) dt_sta_signal_pane_g2

0x0001,

0xfec4,	// (0x00028f1a) dt_sta_signal_pane_g

0x2463,	// (0x0001b4b9) dt_sta_battery_pane_g1

0x246c,	// (0x0001b4c2) dt_sta_battery_pane_t1

0xeacf,	// (0x00027b25) bg_dt_sta_control_pane_g1

0x7fd7,	// (0x0002102d) fep_china_uni_eep_pane

0x7fdf,	// (0x00021035) fep_china_uni_entry_pane_ParamLimits

0x7fef,	// (0x00021045) popup_fep_china_uni_window_g1_ParamLimits

0x7fff,	// (0x00021055) popup_fep_china_uni_window_g2_ParamLimits

0x7fff,	// (0x00021055) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x000287ae) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x000287ae) popup_fep_china_uni_window_g

0x247b,	// (0x0001b4d1) fep_china_uni_eep_pane_g1

0x2483,	// (0x0001b4d9) fep_china_uni_eep_pane_t1

0x1f91,	// (0x0001afe7) aid_touch_area_size_smil_player

0xb11c,	// (0x00024172) lc0_clock_pane

0xb155,	// (0x000241ab) status_pane_g5_ParamLimits

0xb155,	// (0x000241ab) status_pane_g5

0xd9e4,	// (0x00026a3a) popup_keymap_window

0xb135,	// (0x0002418b) status_icon_pane

0x2102,	// (0x0001b158) cell_ai5_widget_pane_g3_ParamLimits

0x2116,	// (0x0001b16c) cell_ai5_widget_pane_g4_ParamLimits

0x2122,	// (0x0001b178) cell_ai5_widget_pane_g5_ParamLimits

0x2146,	// (0x0001b19c) cell_ai5_widget_pane_g8_ParamLimits

0x2146,	// (0x0001b19c) cell_ai5_widget_pane_g8

0x215a,	// (0x0001b1b0) cell_ai5_widget_pane_g9_ParamLimits

0x215a,	// (0x0001b1b0) cell_ai5_widget_pane_g9

0x216e,	// (0x0001b1c4) cell_ai5_widget_pane_g10_ParamLimits

0x216e,	// (0x0001b1c4) cell_ai5_widget_pane_g10

0x2492,	// (0x0001b4e8) status_icon_pane_g1

0x6d0a,	// (0x0001fd60) bg_popup_sub_pane_cp13

0x249a,	// (0x0001b4f0) popup_keymap_window_t1

0x9d5f,	// (0x00022db5) control_pane_g6_ParamLimits

0x9d5f,	// (0x00022db5) control_pane_g6

0x9d6c,	// (0x00022dc2) control_pane_g7_ParamLimits

0x9d6c,	// (0x00022dc2) control_pane_g7

0x9d79,	// (0x00022dcf) control_pane_g8_ParamLimits

0x9d79,	// (0x00022dcf) control_pane_g8

0x23b5,	// (0x0001b40b) dt_sta_controll_pane_ParamLimits

0x23c2,	// (0x0001b418) dt_sta_indi_pane_ParamLimits

0x23d3,	// (0x0001b429) dt_sta_title_pane_ParamLimits

0x72eb,	// (0x00020341) aid_size_touch_scroll_bar_cale

0x91ce,	// (0x00022224) popup_discreet_window_ParamLimits

0x91ce,	// (0x00022224) popup_discreet_window

0x9232,	// (0x00022288) popup_sk_window

0xb78b,	// (0x000247e1) bg_popup_sub_pane_cp28_ParamLimits

0xb78b,	// (0x000247e1) bg_popup_sub_pane_cp28

0x24a8,	// (0x0001b4fe) popup_discreet_window_g1_ParamLimits

0x24a8,	// (0x0001b4fe) popup_discreet_window_g1

0x24c8,	// (0x0001b51e) popup_discreet_window_t1_ParamLimits

0x24c8,	// (0x0001b51e) popup_discreet_window_t1

0x24e6,	// (0x0001b53c) popup_discreet_window_t2_ParamLimits

0x24e6,	// (0x0001b53c) popup_discreet_window_t2

0x0002,

0xfec9,	// (0x00028f1f) popup_discreet_window_t_ParamLimits

0xfec9,	// (0x00028f1f) popup_discreet_window_t

0xaf0b,	// (0x00023f61) popup_sk_window_g1

0xaf14,	// (0x00023f6a) popup_sk_window_g2

0x0001,

0xfed0,	// (0x00028f26) popup_sk_window_g

0x2558,	// (0x0001b5ae) popup_sk_window_t1

0x254a,	// (0x0001b5a0) popup_sk_window_t1_copy1

0x20f2,	// (0x0001b148) cell_ai5_widget_pane_g2_ParamLimits

0x2245,	// (0x0001b29b) cell_ai5_widget_pane_t9_ParamLimits

0x2245,	// (0x0001b29b) cell_ai5_widget_pane_t9

0x6d0a,	// (0x0001fd60) main_fep_fshwr2_pane

0x2566,	// (0x0001b5bc) aid_fshwr2_btn_pane

0x256e,	// (0x0001b5c4) aid_fshwr2_syb_pane

0x2576,	// (0x0001b5cc) aid_fshwr2_txt_pane

0x257e,	// (0x0001b5d4) fshwr2_func_candi_pane

0x2586,	// (0x0001b5dc) fshwr2_hwr_syb_pane

0x258e,	// (0x0001b5e4) fshwr2_icf_pane

0x6d0a,	// (0x0001fd60) fshwr2_icf_bg_pane

0x25a8,	// (0x0001b5fe) fshwr2_icf_pane_t1_ParamLimits

0x25a8,	// (0x0001b5fe) fshwr2_icf_pane_t1

0xeacf,	// (0x00027b25) fshwr2_func_candi_pane_g1

0x25bf,	// (0x0001b615) fshwr2_func_candi_row_pane_ParamLimits

0x25bf,	// (0x0001b615) fshwr2_func_candi_row_pane

0x25d0,	// (0x0001b626) cell_fshwr2_syb_pane_ParamLimits

0x25d0,	// (0x0001b626) cell_fshwr2_syb_pane

0xed17,	// (0x00027d6d) fshwr2_hwr_syb_pane_g1_ParamLimits

0xed17,	// (0x00027d6d) fshwr2_hwr_syb_pane_g1

0x6d0a,	// (0x0001fd60) bg_popup_call_pane_cp01

0x25e7,	// (0x0001b63d) fshwr2_func_candi_cell_pane_ParamLimits

0x25e7,	// (0x0001b63d) fshwr2_func_candi_cell_pane

0x2612,	// (0x0001b668) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2612,	// (0x0001b668) fshwr2_func_candi_cell_bg_pane

0x262c,	// (0x0001b682) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x262c,	// (0x0001b682) fshwr2_func_candi_cell_pane_g1

0x264c,	// (0x0001b6a2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x264c,	// (0x0001b6a2) fshwr2_func_candi_cell_pane_t1

0x6d0a,	// (0x0001fd60) bg_button_pane_cp08

0x8407,	// (0x0002145d) cell_fshwr2_syb_bg_pane

0x265f,	// (0x0001b6b5) cell_fshwr2_syb_bg_pane_g1

0x2667,	// (0x0001b6bd) cell_fshwr2_syb_bg_pane_t1

0x7a4e,	// (0x00020aa4) main_tmo_pane

0xe302,	// (0x00027358) uni_indicator_pane_g1_ParamLimits

0xe317,	// (0x0002736d) uni_indicator_pane_g2_ParamLimits

0xe32d,	// (0x00027383) uni_indicator_pane_g3_ParamLimits

0xc158,	// (0x000251ae) uni_indicator_pane_g4_ParamLimits

0xc158,	// (0x000251ae) uni_indicator_pane_g4

0xc16c,	// (0x000251c2) uni_indicator_pane_g5_ParamLimits

0xc16c,	// (0x000251c2) uni_indicator_pane_g5

0xc180,	// (0x000251d6) uni_indicator_pane_g6_ParamLimits

0xc180,	// (0x000251d6) uni_indicator_pane_g6

0xf955,	// (0x000289ab) uni_indicator_pane_g_ParamLimits

0x0970,	// (0x000199c6) popup_tmo_note_window_ParamLimits

0x0970,	// (0x000199c6) popup_tmo_note_window

0x6d0a,	// (0x0001fd60) fshwr2_bg_pane

0x263d,	// (0x0001b693) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x263d,	// (0x0001b693) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed5,	// (0x00028f2b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed5,	// (0x00028f2b) fshwr2_func_candi_cell_pane_g

0xeacf,	// (0x00027b25) bg_popup_window_pane_cp01

0x2676,	// (0x0001b6cc) bg_popup_window_pane_g1_cp01

0x267f,	// (0x0001b6d5) bg_popup_window_pane_cp22_ParamLimits

0x267f,	// (0x0001b6d5) bg_popup_window_pane_cp22

0x268d,	// (0x0001b6e3) listscroll_tmo_link_pane_ParamLimits

0x268d,	// (0x0001b6e3) listscroll_tmo_link_pane

0x26cd,	// (0x0001b723) popup_tmo_note_window_g1_ParamLimits

0x26cd,	// (0x0001b723) popup_tmo_note_window_g1

0x26da,	// (0x0001b730) tmo_note_info_pane_ParamLimits

0x26da,	// (0x0001b730) tmo_note_info_pane

0x26f4,	// (0x0001b74a) list_tmo_note_info_pane_g1_ParamLimits

0x26f4,	// (0x0001b74a) list_tmo_note_info_pane_g1

0x270b,	// (0x0001b761) list_tmo_note_info_pane_g2_ParamLimits

0x270b,	// (0x0001b761) list_tmo_note_info_pane_g2

0x0001,

0xfeda,	// (0x00028f30) list_tmo_note_info_pane_g_ParamLimits

0xfeda,	// (0x00028f30) list_tmo_note_info_pane_g

0x2727,	// (0x0001b77d) list_tmo_note_info_text_pane_ParamLimits

0x2727,	// (0x0001b77d) list_tmo_note_info_text_pane

0x27a8,	// (0x0001b7fe) list_tmo_link_pane

0x27b5,	// (0x0001b80b) scroll_pane_cp20

0x27c2,	// (0x0001b818) list_single_tmo_link_pane_ParamLimits

0x27c2,	// (0x0001b818) list_single_tmo_link_pane

0x27d2,	// (0x0001b828) list_single_tmo_link_pane_t1

0x27e0,	// (0x0001b836) list_tmo_note_info_text_pane_t1_ParamLimits

0x27e0,	// (0x0001b836) list_tmo_note_info_text_pane_t1

0x7b10,	// (0x00020b66) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7b10,	// (0x00020b66) aid_size_touch_scroll_bar_cp01

0xcee5,	// (0x00025f3b) aid_size_touch_slider_marker

0x921e,	// (0x00022274) popup_settings_window_ParamLimits

0x921e,	// (0x00022274) popup_settings_window

0xd095,	// (0x000260eb) popup_candi_list_indi_window

0xb07e,	// (0x000240d4) aid_touch_navi_pane_ParamLimits

0xa75e,	// (0x000237b4) rs_clock_indi_pane

0xa767,	// (0x000237bd) sctrl_sk_bottom_pane_ParamLimits

0xa778,	// (0x000237ce) sctrl_sk_top_pane_ParamLimits

0xa880,	// (0x000238d6) popup_fep_tooltip_window

0x20b6,	// (0x0001b10c) aid_size_cell_widget_grid_ParamLimits

0x20e6,	// (0x0001b13c) cell_ai5_widget_pane_g1_ParamLimits

0x20e6,	// (0x0001b13c) cell_ai5_widget_pane_g1

0x212e,	// (0x0001b184) cell_ai5_widget_pane_g6_ParamLimits

0x213a,	// (0x0001b190) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe58,	// (0x00028eae) cell_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x00028eae) cell_ai5_widget_pane_g

0x2269,	// (0x0001b2bf) cell_ai5_widget_pane_t10_ParamLimits

0x2269,	// (0x0001b2bf) cell_ai5_widget_pane_t10

0x227b,	// (0x0001b2d1) grid_ai5_widget_pane_ParamLimits

0x231b,	// (0x0001b371) cell_contacts_ai5_widget_pane_ParamLimits

0x231b,	// (0x0001b371) cell_contacts_ai5_widget_pane

0x24fb,	// (0x0001b551) popup_discreet_window_t3_ParamLimits

0x24fb,	// (0x0001b551) popup_discreet_window_t3

0x2596,	// (0x0001b5ec) popup_fshwr2_char_preview_window_ParamLimits

0x2596,	// (0x0001b5ec) popup_fshwr2_char_preview_window

0x2745,	// (0x0001b79b) tmo_note_info_pane_t1

0x275a,	// (0x0001b7b0) tmo_note_info_pane_t2

0x276f,	// (0x0001b7c5) tmo_note_info_pane_t3

0x2784,	// (0x0001b7da) tmo_note_info_pane_t4

0x2796,	// (0x0001b7ec) tmo_note_info_pane_t5

0x0004,

0xfedf,	// (0x00028f35) tmo_note_info_pane_t

0x27a8,	// (0x0001b7fe) list_tmo_link_pane_ParamLimits

0x27b5,	// (0x0001b80b) scroll_pane_cp20_ParamLimits

0x6d0a,	// (0x0001fd60) bg_popup_fep_char_preview_window_cp01

0x27f9,	// (0x0001b84f) popup_fshwr2_char_preview_window_t1

0x2807,	// (0x0001b85d) popup_candi_list_indi_window_g1

0x2810,	// (0x0001b866) bg_cell_contacts_ai5_widget_pane

0x281c,	// (0x0001b872) cell_contacts_ai5_widget_pane_g1

0x2830,	// (0x0001b886) cell_contacts_ai5_widget_pane_g2

0x283f,	// (0x0001b895) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeea,	// (0x00028f40) cell_contacts_ai5_widget_pane_g

0x2852,	// (0x0001b8a8) cell_contacts_ai5_widget_pane_t1

0x7a4e,	// (0x00020aa4) highlight_cell_shortcut_ai5_widget_pane_cp01

0x28ca,	// (0x0001b920) settings_container_pane

0x8407,	// (0x0002145d) listscroll_set_pane_copy1

0xc8a4,	// (0x000258fa) scroll_pane_cp121_copy1

0x28d6,	// (0x0001b92c) set_content_pane_copy1

0x28de,	// (0x0001b934) aid_height_set_list_copy1_ParamLimits

0x28de,	// (0x0001b934) aid_height_set_list_copy1

0xc319,	// (0x0002536f) aid_size_parent_copy1_ParamLimits

0xc319,	// (0x0002536f) aid_size_parent_copy1

0x28ea,	// (0x0001b940) button_value_adjust_pane_cp6_copy1_ParamLimits

0x28ea,	// (0x0001b940) button_value_adjust_pane_cp6_copy1

0xaf67,	// (0x00023fbd) list_highlight_pane_cp2_copy1_ParamLimits

0xaf67,	// (0x00023fbd) list_highlight_pane_cp2_copy1

0x28fe,	// (0x0001b954) list_set_pane_copy1_ParamLimits

0x28fe,	// (0x0001b954) list_set_pane_copy1

0x2867,	// (0x0001b8bd) main_pane_set_t1_copy1_ParamLimits

0x2867,	// (0x0001b8bd) main_pane_set_t1_copy1

0x28a1,	// (0x0001b8f7) main_pane_set_t2_copy1_ParamLimits

0x28a1,	// (0x0001b8f7) main_pane_set_t2_copy1

0x298c,	// (0x0001b9e2) main_pane_set_t3_copy1

0x299a,	// (0x0001b9f0) main_pane_set_t4_copy1

0x28be,	// (0x0001b914) set_content_pane_g1_copy1_ParamLimits

0x28be,	// (0x0001b914) set_content_pane_g1_copy1

0x29a8,	// (0x0001b9fe) setting_code_pane_copy1

0x29b0,	// (0x0001ba06) setting_slider_graphic_pane_copy1

0x29b0,	// (0x0001ba06) setting_slider_pane_copy1

0x29b8,	// (0x0001ba0e) setting_text_pane_copy1

0x29b0,	// (0x0001ba06) setting_volume_pane_copy1

0x29c0,	// (0x0001ba16) settings_code_pane_cp2_copy1

0x29c8,	// (0x0001ba1e) settings_code_pane_cp_copy1_ParamLimits

0x29c8,	// (0x0001ba1e) settings_code_pane_cp_copy1

0x29dc,	// (0x0001ba32) volume_set_pane_copy1

0x29e4,	// (0x0001ba3a) volume_set_pane_g10_copy1

0x29ec,	// (0x0001ba42) volume_set_pane_g1_copy1

0x29f4,	// (0x0001ba4a) volume_set_pane_g2_copy1

0x29fc,	// (0x0001ba52) volume_set_pane_g3_copy1

0x2a04,	// (0x0001ba5a) volume_set_pane_g4_copy1

0x2a0c,	// (0x0001ba62) volume_set_pane_g5_copy1

0x2a14,	// (0x0001ba6a) volume_set_pane_g6_copy1

0x2a1c,	// (0x0001ba72) volume_set_pane_g7_copy1

0x2a24,	// (0x0001ba7a) volume_set_pane_g8_copy1

0x2a2c,	// (0x0001ba82) volume_set_pane_g9_copy1

0x6dfa,	// (0x0001fe50) bg_set_opt_pane_cp_copy1_ParamLimits

0x6dfa,	// (0x0001fe50) bg_set_opt_pane_cp_copy1

0x6e08,	// (0x0001fe5e) setting_slider_pane_t1_copy1_ParamLimits

0x6e08,	// (0x0001fe5e) setting_slider_pane_t1_copy1

0x2a34,	// (0x0001ba8a) setting_slider_pane_t2_copy1_ParamLimits

0x2a34,	// (0x0001ba8a) setting_slider_pane_t2_copy1

0x2a4d,	// (0x0001baa3) setting_slider_pane_t3_copy1_ParamLimits

0x2a4d,	// (0x0001baa3) setting_slider_pane_t3_copy1

0x6e1e,	// (0x0001fe74) slider_set_pane_copy1_ParamLimits

0x6e1e,	// (0x0001fe74) slider_set_pane_copy1

0x7a9d,	// (0x00020af3) set_opt_bg_pane_g1_copy2

0x7aa5,	// (0x00020afb) set_opt_bg_pane_g2_copy2

0x2a64,	// (0x0001baba) set_opt_bg_pane_g3_copy2

0x7ab5,	// (0x00020b0b) set_opt_bg_pane_g4_copy2

0x7abd,	// (0x00020b13) set_opt_bg_pane_g5_copy2

0x7ac5,	// (0x00020b1b) set_opt_bg_pane_g6_copy2

0x2a6c,	// (0x0001bac2) set_opt_bg_pane_g7_copy2

0x2a74,	// (0x0001baca) set_opt_bg_pane_g8_copy2

0x2a7c,	// (0x0001bad2) set_opt_bg_pane_g9_copy2

0xc8f8,	// (0x0002594e) aid_size_touch_slider_mark_copy1_ParamLimits

0xc8f8,	// (0x0002594e) aid_size_touch_slider_mark_copy1

0xc32b,	// (0x00025381) slider_set_pane_g1_copy1

0xc334,	// (0x0002538a) slider_set_pane_g2_copy1

0xc90c,	// (0x00025962) slider_set_pane_g3_copy1_ParamLimits

0xc90c,	// (0x00025962) slider_set_pane_g3_copy1

0xc920,	// (0x00025976) slider_set_pane_g4_copy1_ParamLimits

0xc920,	// (0x00025976) slider_set_pane_g4_copy1

0xc938,	// (0x0002598e) slider_set_pane_g5_copy1_ParamLimits

0xc938,	// (0x0002598e) slider_set_pane_g5_copy1

0xc90c,	// (0x00025962) slider_set_pane_g6_copy1_ParamLimits

0xc90c,	// (0x00025962) slider_set_pane_g6_copy1

0x2a84,	// (0x0001bada) slider_set_pane_g7_copy1_ParamLimits

0x2a84,	// (0x0001bada) slider_set_pane_g7_copy1

0x6d96,	// (0x0001fdec) bg_set_opt_pane_cp2_copy1

0x6e34,	// (0x0001fe8a) setting_slider_graphic_pane_g1_copy1

0x2a9a,	// (0x0001baf0) setting_slider_graphic_pane_t1_copy1

0x2aa9,	// (0x0001baff) setting_slider_graphic_pane_t2_copy1

0x2ab8,	// (0x0001bb0e) slider_set_pane_cp_copy1

0x2ac8,	// (0x0001bb1e) input_focus_pane_cp1_copy1

0x2ad1,	// (0x0001bb27) list_set_text_pane_copy1

0x2ad9,	// (0x0001bb2f) setting_text_pane_g1_copy1

0xe06b,	// (0x000270c1) set_text_pane_t1_copy1

0x2ac8,	// (0x0001bb1e) input_focus_pane_cp2_copy1

0x2ad9,	// (0x0001bb2f) setting_code_pane_g1_copy1

0x2ae2,	// (0x0001bb38) setting_code_pane_t1_copy1

0x2af0,	// (0x0001bb46) list_set_graphic_pane_copy1

0x6d96,	// (0x0001fdec) bg_set_opt_pane_cp4_copy1

0x2b04,	// (0x0001bb5a) list_set_graphic_pane_g1_copy1_ParamLimits

0x2b04,	// (0x0001bb5a) list_set_graphic_pane_g1_copy1

0x2b10,	// (0x0001bb66) list_set_graphic_pane_g2_copy1

0x8182,	// (0x000211d8) list_set_graphic_pane_t1_copy1_ParamLimits

0x8182,	// (0x000211d8) list_set_graphic_pane_t1_copy1

0xeacf,	// (0x00027b25) rs_clock_indi_pane_g1

0x2b18,	// (0x0001bb6e) rs_clock_indi_pane_t1

0x2b26,	// (0x0001bb7c) rs_indi_pane

0x2b2e,	// (0x0001bb84) rs_indi_pane_g1

0x2b37,	// (0x0001bb8d) rs_indi_pane_g2

0x2807,	// (0x0001b85d) rs_indi_pane_g3

0x0002,

0xfef1,	// (0x00028f47) rs_indi_pane_g

0x8407,	// (0x0002145d) bg_popup_preview_window_pane_cp03

0x2b40,	// (0x0001bb96) popup_fep_tooltip_window_t1

0x0162,	// (0x000191b8) popup_note2_window_g2_ParamLimits

0x0162,	// (0x000191b8) popup_note2_window_g2

0x0001,

0xfc96,	// (0x00028cec) popup_note2_window_g_ParamLimits

0xfc96,	// (0x00028cec) popup_note2_window_g

0x0662,	// (0x000196b8) bg_popup_sub_pane_cp11_ParamLimits

0x066f,	// (0x000196c5) cell_ai3_links_pane_g1_ParamLimits

0x0686,	// (0x000196dc) cell_ai3_links_pane_t1

0xe06b,	// (0x000270c1) set_text_pane_t1_copy1_ParamLimits

0x832e,	// (0x00021384) cell_graphic_popup_pane_cp2_ParamLimits

0x832e,	// (0x00021384) cell_graphic_popup_pane_cp2

0x2b4e,	// (0x0001bba4) cell_graphic_popup_pane_g1_cp2

0x719a,	// (0x000201f0) cell_graphic_popup_pane_g2_cp2

0x2b56,	// (0x0001bbac) cell_graphic_popup_pane_g3_cp2

0x2b5e,	// (0x0001bbb4) cell_graphic_popup_pane_t2_cp2

0x71ab,	// (0x00020201) grid_highlight_pane_cp3_cp2

0x7d83,	// (0x00020dd9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7a4e,	// (0x00020aa4) main_tmo_pane_ParamLimits

0x0968,	// (0x000199be) popup_tmo_big_image_note_window

0x20d6,	// (0x0001b12c) cell_ai5_widget_list_pane

0x20de,	// (0x0001b134) cell_ai5_widget_lrg_icon_pane

0x2745,	// (0x0001b79b) tmo_note_info_pane_t1_ParamLimits

0x275a,	// (0x0001b7b0) tmo_note_info_pane_t2_ParamLimits

0x276f,	// (0x0001b7c5) tmo_note_info_pane_t3_ParamLimits

0x2784,	// (0x0001b7da) tmo_note_info_pane_t4_ParamLimits

0x2796,	// (0x0001b7ec) tmo_note_info_pane_t5_ParamLimits

0xfedf,	// (0x00028f35) tmo_note_info_pane_t_ParamLimits

0x28ca,	// (0x0001b920) settings_container_pane_ParamLimits

0x2ac0,	// (0x0001bb16) indicator_popup_pane_cp5

0x2ac0,	// (0x0001bb16) indicator_popup_pane_cp6

0x2af0,	// (0x0001bb46) list_set_graphic_pane_copy1_ParamLimits

0x6d0a,	// (0x0001fd60) bg_popup_window_pane_cp23

0x2b6c,	// (0x0001bbc2) popup_tmo_big_image_note_window_g1

0x2b75,	// (0x0001bbcb) popup_tmo_big_image_note_window_t1

0x2b83,	// (0x0001bbd9) popup_tmo_big_image_note_window_t2

0x2b91,	// (0x0001bbe7) popup_tmo_big_image_note_window_t3

0x0002,

0xfef8,	// (0x00028f4e) popup_tmo_big_image_note_window_t

0x2b9f,	// (0x0001bbf5) cell_ai5_widget_lrg_icon_pane_g1

0x2ba7,	// (0x0001bbfd) cell_ai5_widget_lrg_icon_pane_t1

0x2bb5,	// (0x0001bc0b) cell_ai5_widget_list_row_pane_ParamLimits

0x2bb5,	// (0x0001bc0b) cell_ai5_widget_list_row_pane

0x2bce,	// (0x0001bc24) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x2bce,	// (0x0001bc24) cell_ai5_widget_list_row_pane_g1

0x2bdb,	// (0x0001bc31) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x2bdb,	// (0x0001bc31) cell_ai5_widget_list_row_pane_t1

0x2bf3,	// (0x0001bc49) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x2bf3,	// (0x0001bc49) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeff,	// (0x00028f55) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeff,	// (0x00028f55) cell_ai5_widget_list_row_pane_t

0x90f7,	// (0x0002214d) main_fep_vtchi_ss_pane

0x2c05,	// (0x0001bc5b) popup_fep_char_pre_window

0x2c0d,	// (0x0001bc63) popup_fep_ituss_window

0x2c16,	// (0x0001bc6c) popup_fep_vkbss_window

0x2c1f,	// (0x0001bc75) grid_vkbss_keypad_pane_ParamLimits

0x2c1f,	// (0x0001bc75) grid_vkbss_keypad_pane

0x2c2f,	// (0x0001bc85) ituss_keypad_pane

0x2c37,	// (0x0001bc8d) aid_vkbss_key_offset_ParamLimits

0x2c37,	// (0x0001bc8d) aid_vkbss_key_offset

0x2c46,	// (0x0001bc9c) cell_vkbss_key_pane_ParamLimits

0x2c46,	// (0x0001bc9c) cell_vkbss_key_pane

0x2c5c,	// (0x0001bcb2) bg_cell_vkbss_key_g1_ParamLimits

0x2c5c,	// (0x0001bcb2) bg_cell_vkbss_key_g1

0x2c68,	// (0x0001bcbe) cell_vkbss_key_3p_pane_ParamLimits

0x2c68,	// (0x0001bcbe) cell_vkbss_key_3p_pane

0x2c7c,	// (0x0001bcd2) cell_vkbss_key_g1_ParamLimits

0x2c7c,	// (0x0001bcd2) cell_vkbss_key_g1

0x2c90,	// (0x0001bce6) cell_vkbss_key_t1_ParamLimits

0x2c90,	// (0x0001bce6) cell_vkbss_key_t1

0x2cbb,	// (0x0001bd11) cell_ituss_key_pane_ParamLimits

0x2cbb,	// (0x0001bd11) cell_ituss_key_pane

0x2cca,	// (0x0001bd20) bg_cell_ituss_key_g1_ParamLimits

0x2cca,	// (0x0001bd20) bg_cell_ituss_key_g1

0x2cd6,	// (0x0001bd2c) cell_ituss_key_pane_g1_ParamLimits

0x2cd6,	// (0x0001bd2c) cell_ituss_key_pane_g1

0x2ce2,	// (0x0001bd38) cell_ituss_key_pane_g2_ParamLimits

0x2ce2,	// (0x0001bd38) cell_ituss_key_pane_g2

0x0001,

0xff04,	// (0x00028f5a) cell_ituss_key_pane_g_ParamLimits

0xff04,	// (0x00028f5a) cell_ituss_key_pane_g

0x2cf5,	// (0x0001bd4b) cell_ituss_key_t1_ParamLimits

0x2cf5,	// (0x0001bd4b) cell_ituss_key_t1

0x2d13,	// (0x0001bd69) cell_ituss_key_t2_ParamLimits

0x2d13,	// (0x0001bd69) cell_ituss_key_t2

0x2d32,	// (0x0001bd88) cell_ituss_key_t3_ParamLimits

0x2d32,	// (0x0001bd88) cell_ituss_key_t3

0x2d51,	// (0x0001bda7) cell_ituss_key_t4_ParamLimits

0x2d51,	// (0x0001bda7) cell_ituss_key_t4

0x0003,

0xff09,	// (0x00028f5f) cell_ituss_key_t_ParamLimits

0xff09,	// (0x00028f5f) cell_ituss_key_t

0x2d70,	// (0x0001bdc6) cell_vkbss_key_3p_pane_g1

0x2d78,	// (0x0001bdce) cell_vkbss_key_3p_pane_g2

0x2d80,	// (0x0001bdd6) cell_vkbss_key_3p_pane_g3

0x0002,

0xff12,	// (0x00028f68) cell_vkbss_key_3p_pane_g

0x6d0a,	// (0x0001fd60) bg_popup_fep_char_preview_window_cp02

0x2d88,	// (0x0001bdde) popup_fep_char_pre_window_t1

0x20ac,	// (0x0001b102) main_ai5_sk_pane

0x2810,	// (0x0001b866) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x281c,	// (0x0001b872) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x2830,	// (0x0001b886) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x283f,	// (0x0001b895) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeea,	// (0x00028f40) cell_contacts_ai5_widget_pane_g_ParamLimits

0x2852,	// (0x0001b8a8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7a4e,	// (0x00020aa4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x2d97,	// (0x0001bded) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small
