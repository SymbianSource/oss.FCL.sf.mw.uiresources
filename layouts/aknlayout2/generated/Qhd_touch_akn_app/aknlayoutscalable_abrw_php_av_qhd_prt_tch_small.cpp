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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002acf8 };

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
0x76c4,	// (0x000323bc) Screen

0x76d8,	// (0x000323d0) application_window_ParamLimits

0x76d8,	// (0x000323d0) application_window

0x76f2,	// (0x000323ea) screen_g1

0x4910,	// (0x0002f608) area_bottom_pane_ParamLimits

0x4910,	// (0x0002f608) area_bottom_pane

0x49d0,	// (0x0002f6c8) area_top_pane_ParamLimits

0x49d0,	// (0x0002f6c8) area_top_pane

0x4a6e,	// (0x0002f766) main_pane_ParamLimits

0x4a6e,	// (0x0002f766) main_pane

0x76fc,	// (0x000323f4) misc_graphics

0x9815,	// (0x0003450d) battery_pane_ParamLimits

0x9815,	// (0x0003450d) battery_pane

0xa4db,	// (0x000351d3) bg_status_flat_pane_g8

0xa4e3,	// (0x000351db) bg_status_flat_pane_g9

0x98d7,	// (0x000345cf) context_pane_ParamLimits

0x98d7,	// (0x000345cf) context_pane

0x99ed,	// (0x000346e5) navi_pane_ParamLimits

0x99ed,	// (0x000346e5) navi_pane

0x9a71,	// (0x00034769) signal_pane_ParamLimits

0x9a71,	// (0x00034769) signal_pane

0x0008,

0xf879,	// (0x0003a571) bg_status_flat_pane_g

0x9ade,	// (0x000347d6) status_pane_g1_ParamLimits

0x9ade,	// (0x000347d6) status_pane_g1

0x9af2,	// (0x000347ea) status_pane_g2_ParamLimits

0x9af2,	// (0x000347ea) status_pane_g2

0x9afe,	// (0x000347f6) status_pane_g3_ParamLimits

0x9afe,	// (0x000347f6) status_pane_g3

0x0004,

0xf7a0,	// (0x0003a498) status_pane_g_ParamLimits

0xf7a0,	// (0x0003a498) status_pane_g

0x9b32,	// (0x0003482a) title_pane_ParamLimits

0x9b32,	// (0x0003482a) title_pane

0x9b6f,	// (0x00034867) uni_indicator_pane_ParamLimits

0x9b6f,	// (0x00034867) uni_indicator_pane

0x9739,	// (0x00034431) bg_list_pane_ParamLimits

0x9739,	// (0x00034431) bg_list_pane

0x5ade,	// (0x000307d6) find_pane

0x9759,	// (0x00034451) listscroll_app_pane_ParamLimits

0x9759,	// (0x00034451) listscroll_app_pane

0x9765,	// (0x0003445d) listscroll_form_pane

0x4846,	// (0x0002f53e) listscroll_gen_pane_ParamLimits

0x4846,	// (0x0002f53e) listscroll_gen_pane

0x5ae6,	// (0x000307de) listscroll_set_pane

0x898f,	// (0x00033687) main_idle_act_pane

0x9441,	// (0x00034139) main_idle_trad_pane

0x9441,	// (0x00034139) main_list_empty_pane

0x977f,	// (0x00034477) main_midp_pane

0x978b,	// (0x00034483) main_pane_g1_ParamLimits

0x978b,	// (0x00034483) main_pane_g1

0x5afc,	// (0x000307f4) popup_ai_message_window_ParamLimits

0x5afc,	// (0x000307f4) popup_ai_message_window

0x5baa,	// (0x000308a2) popup_fep_china_uni_window_ParamLimits

0x5baa,	// (0x000308a2) popup_fep_china_uni_window

0x5c06,	// (0x000308fe) popup_fep_japan_candidate_window_ParamLimits

0x5c06,	// (0x000308fe) popup_fep_japan_candidate_window

0x5c26,	// (0x0003091e) popup_fep_japan_predictive_window_ParamLimits

0x5c26,	// (0x0003091e) popup_fep_japan_predictive_window

0x5c56,	// (0x0003094e) popup_find_window

0x5c63,	// (0x0003095b) popup_grid_graphic_window_ParamLimits

0x5c63,	// (0x0003095b) popup_grid_graphic_window

0x5c8d,	// (0x00030985) popup_large_graphic_colour_window

0x5cb3,	// (0x000309ab) popup_menu_window_ParamLimits

0x5cb3,	// (0x000309ab) popup_menu_window

0x5e6b,	// (0x00030b63) popup_note_image_window

0x5e57,	// (0x00030b4f) popup_note_wait_window_ParamLimits

0x5e57,	// (0x00030b4f) popup_note_wait_window

0x5e57,	// (0x00030b4f) popup_note_window_ParamLimits

0x5e57,	// (0x00030b4f) popup_note_window

0x5ec1,	// (0x00030bb9) popup_query_code_window_ParamLimits

0x5ec1,	// (0x00030bb9) popup_query_code_window

0x5ed5,	// (0x00030bcd) popup_query_data_code_window_ParamLimits

0x5ed5,	// (0x00030bcd) popup_query_data_code_window

0x5ef2,	// (0x00030bea) popup_query_data_window_ParamLimits

0x5ef2,	// (0x00030bea) popup_query_data_window

0x5f0e,	// (0x00030c06) popup_query_sat_info_window_ParamLimits

0x5f0e,	// (0x00030c06) popup_query_sat_info_window

0x5f47,	// (0x00030c3f) popup_snote_single_graphic_window_ParamLimits

0x5f47,	// (0x00030c3f) popup_snote_single_graphic_window

0x5f47,	// (0x00030c3f) popup_snote_single_text_window_ParamLimits

0x5f47,	// (0x00030c3f) popup_snote_single_text_window

0x5f5c,	// (0x00030c54) popup_sub_window_general

0x608c,	// (0x00030d84) popup_window_general_ParamLimits

0x608c,	// (0x00030d84) popup_window_general

0x9799,	// (0x00034491) power_save_pane

0x597a,	// (0x00030672) control_pane_g1_ParamLimits

0x597a,	// (0x00030672) control_pane_g1

0x59a1,	// (0x00030699) control_pane_g2_ParamLimits

0x59a1,	// (0x00030699) control_pane_g2

0x96fc,	// (0x000343f4) control_pane_g3_ParamLimits

0x96fc,	// (0x000343f4) control_pane_g3

0x0007,

0xf788,	// (0x0003a480) control_pane_g_ParamLimits

0xf788,	// (0x0003a480) control_pane_g

0x59eb,	// (0x000306e3) control_pane_t1_ParamLimits

0x59eb,	// (0x000306e3) control_pane_t1

0x5a37,	// (0x0003072f) control_pane_t2_ParamLimits

0x5a37,	// (0x0003072f) control_pane_t2

0x0002,

0xf799,	// (0x0003a491) control_pane_t_ParamLimits

0xf799,	// (0x0003a491) control_pane_t

0x9621,	// (0x00034319) navi_navi_volume_pane_cp1

0x9629,	// (0x00034321) status_small_icon_pane

0x9631,	// (0x00034329) status_small_pane_g1_ParamLimits

0x9631,	// (0x00034329) status_small_pane_g1

0x9665,	// (0x0003435d) status_small_pane_g2_ParamLimits

0x9665,	// (0x0003435d) status_small_pane_g2

0x9671,	// (0x00034369) status_small_pane_g3_ParamLimits

0x9671,	// (0x00034369) status_small_pane_g3

0x967d,	// (0x00034375) status_small_pane_g4_ParamLimits

0x967d,	// (0x00034375) status_small_pane_g4

0x9689,	// (0x00034381) status_small_pane_g5_ParamLimits

0x9689,	// (0x00034381) status_small_pane_g5

0x9697,	// (0x0003438f) status_small_pane_g6_ParamLimits

0x9697,	// (0x0003438f) status_small_pane_g6

0x0007,

0xf777,	// (0x0003a46f) status_small_pane_g_ParamLimits

0xf777,	// (0x0003a46f) status_small_pane_g

0x96c6,	// (0x000343be) status_small_pane_t1

0x96e8,	// (0x000343e0) status_small_wait_pane_ParamLimits

0x96e8,	// (0x000343e0) status_small_wait_pane

0x8eb3,	// (0x00033bab) aid_levels_signal_ParamLimits

0x8eb3,	// (0x00033bab) aid_levels_signal

0x8ec5,	// (0x00033bbd) signal_pane_g1_ParamLimits

0x8ec5,	// (0x00033bbd) signal_pane_g1

0x8eda,	// (0x00033bd2) signal_pane_g2_ParamLimits

0x8eda,	// (0x00033bd2) signal_pane_g2

0x0003,

0xf708,	// (0x0003a400) signal_pane_g_ParamLimits

0xf708,	// (0x0003a400) signal_pane_g

0x8f15,	// (0x00033c0d) context_pane_g1

0x7706,	// (0x000323fe) title_pane_g1

0x773c,	// (0x00032434) title_pane_t1

0x77a4,	// (0x0003249c) title_pane_t2

0x77ca,	// (0x000324c2) title_pane_t3

0x0002,

0xf557,	// (0x0003a24f) title_pane_t

0x9b87,	// (0x0003487f) aid_levels_battery_ParamLimits

0x9b87,	// (0x0003487f) aid_levels_battery

0x9b9b,	// (0x00034893) battery_pane_g1_ParamLimits

0x9b9b,	// (0x00034893) battery_pane_g1

0x9bb1,	// (0x000348a9) battery_pane_g2_ParamLimits

0x9bb1,	// (0x000348a9) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003a4a3) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003a4a3) battery_pane_g

0xae1d,	// (0x00035b15) uni_indicator_pane_g1

0xae33,	// (0x00035b2b) uni_indicator_pane_g2

0xae49,	// (0x00035b41) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0003a619) uni_indicator_pane_g

0x92b3,	// (0x00033fab) navi_icon_pane_ParamLimits

0x92b3,	// (0x00033fab) navi_icon_pane

0x91f1,	// (0x00033ee9) navi_midp_pane

0x92cf,	// (0x00033fc7) navi_navi_pane

0x92d9,	// (0x00033fd1) navi_text_pane_ParamLimits

0x92d9,	// (0x00033fd1) navi_text_pane

0x76f2,	// (0x000323ea) status_small_wait_pane_g1

0x8359,	// (0x00033051) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0003a614) status_small_wait_pane_g

0xab36,	// (0x0003582e) navi_navi_icon_text_pane

0xab3e,	// (0x00035836) navi_navi_pane_g1_ParamLimits

0xab3e,	// (0x00035836) navi_navi_pane_g1

0xab50,	// (0x00035848) navi_navi_pane_g2_ParamLimits

0xab50,	// (0x00035848) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0003a5e2) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0003a5e2) navi_navi_pane_g

0xab62,	// (0x0003585a) navi_navi_tabs_pane

0xab6b,	// (0x00035863) navi_navi_text_pane

0xab36,	// (0x0003582e) navi_navi_volume_pane

0xab12,	// (0x0003580a) navi_text_pane_t1

0xab06,	// (0x000357fe) navi_icon_pane_g1

0xaa59,	// (0x00035751) navi_navi_text_pane_t1

0x645d,	// (0x00031155) navi_navi_volume_pane_g1

0x6465,	// (0x0003115d) volume_small_pane

0xa9bf,	// (0x000356b7) navi_navi_icon_text_pane_g1

0xa9c7,	// (0x000356bf) navi_navi_icon_text_pane_t1

0x92cf,	// (0x00033fc7) navi_tabs_2_long_pane

0x92cf,	// (0x00033fc7) navi_tabs_2_pane

0x92cf,	// (0x00033fc7) navi_tabs_3_long_pane

0x92cf,	// (0x00033fc7) navi_tabs_3_pane

0x92cf,	// (0x00033fc7) navi_tabs_4_pane

0x643d,	// (0x00031135) tabs_2_active_pane_ParamLimits

0x643d,	// (0x00031135) tabs_2_active_pane

0x644d,	// (0x00031145) tabs_2_passive_pane_ParamLimits

0x644d,	// (0x00031145) tabs_2_passive_pane

0x640b,	// (0x00031103) tabs_3_active_pane_ParamLimits

0x640b,	// (0x00031103) tabs_3_active_pane

0x641b,	// (0x00031113) tabs_3_passive_pane_ParamLimits

0x641b,	// (0x00031113) tabs_3_passive_pane

0x642c,	// (0x00031124) tabs_3_passive_pane_cp_ParamLimits

0x642c,	// (0x00031124) tabs_3_passive_pane_cp

0x63c7,	// (0x000310bf) tabs_4_active_pane_ParamLimits

0x63c7,	// (0x000310bf) tabs_4_active_pane

0x63d8,	// (0x000310d0) tabs_4_passive_pane_ParamLimits

0x63d8,	// (0x000310d0) tabs_4_passive_pane

0x63e9,	// (0x000310e1) tabs_4_passive_pane_cp_ParamLimits

0x63e9,	// (0x000310e1) tabs_4_passive_pane_cp

0x63fa,	// (0x000310f2) tabs_4_passive_pane_cp2_ParamLimits

0x63fa,	// (0x000310f2) tabs_4_passive_pane_cp2

0x63a3,	// (0x0003109b) tabs_2_long_active_pane_ParamLimits

0x63a3,	// (0x0003109b) tabs_2_long_active_pane

0x63b5,	// (0x000310ad) tabs_2_long_passive_pane_ParamLimits

0x63b5,	// (0x000310ad) tabs_2_long_passive_pane

0x6364,	// (0x0003105c) tabs_3_long_active_pane_ParamLimits

0x6364,	// (0x0003105c) tabs_3_long_active_pane

0x6377,	// (0x0003106f) tabs_3_long_passive_pane_ParamLimits

0x6377,	// (0x0003106f) tabs_3_long_passive_pane

0x6390,	// (0x00031088) tabs_3_long_passive_pane_cp_ParamLimits

0x6390,	// (0x00031088) tabs_3_long_passive_pane_cp

0x630a,	// (0x00031002) volume_small_pane_g1

0x6313,	// (0x0003100b) volume_small_pane_g2

0x631c,	// (0x00031014) volume_small_pane_g3

0x6325,	// (0x0003101d) volume_small_pane_g4

0x632e,	// (0x00031026) volume_small_pane_g5

0x6337,	// (0x0003102f) volume_small_pane_g6

0x6340,	// (0x00031038) volume_small_pane_g7

0x6349,	// (0x00031041) volume_small_pane_g8

0x6352,	// (0x0003104a) volume_small_pane_g9

0x635b,	// (0x00031053) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0003a5ae) volume_small_pane_g

0x77dc,	// (0x000324d4) bg_active_tab_pane_cp2_ParamLimits

0x77dc,	// (0x000324d4) bg_active_tab_pane_cp2

0x77ea,	// (0x000324e2) tabs_3_active_pane_g1

0x77f2,	// (0x000324ea) tabs_3_active_pane_t1

0x77dc,	// (0x000324d4) bg_passive_tab_pane_cp2_ParamLimits

0x77dc,	// (0x000324d4) bg_passive_tab_pane_cp2

0x77ea,	// (0x000324e2) tabs_3_passive_pane_g1

0x77f2,	// (0x000324ea) tabs_3_passive_pane_t1

0x77dc,	// (0x000324d4) bg_active_tab_pane_cp3_ParamLimits

0x77dc,	// (0x000324d4) bg_active_tab_pane_cp3

0x7804,	// (0x000324fc) tabs_4_active_pane_g1

0x780c,	// (0x00032504) tabs_4_active_pane_t1

0x77dc,	// (0x000324d4) bg_passive_tab_pane_cp3_ParamLimits

0x77dc,	// (0x000324d4) bg_passive_tab_pane_cp3

0x7804,	// (0x000324fc) tabs_4_1_passive_pane_g1

0x780c,	// (0x00032504) tabs_4_1_passive_pane_t1

0x977f,	// (0x00034477) list_highlight_pane_cp2

0xb091,	// (0x00035d89) list_set_pane_ParamLimits

0xb091,	// (0x00035d89) list_set_pane

0xb137,	// (0x00035e2f) main_pane_set_t1_ParamLimits

0xb137,	// (0x00035e2f) main_pane_set_t1

0xb157,	// (0x00035e4f) main_pane_set_t2_ParamLimits

0xb157,	// (0x00035e4f) main_pane_set_t2

0xb16b,	// (0x00035e63) main_pane_set_t3_ParamLimits

0xb16b,	// (0x00035e63) main_pane_set_t3

0xb17d,	// (0x00035e75) main_pane_set_t4_ParamLimits

0xb17d,	// (0x00035e75) main_pane_set_t4

0x0003,

0xf986,	// (0x0003a67e) main_pane_set_t_ParamLimits

0xf986,	// (0x0003a67e) main_pane_set_t

0xb18f,	// (0x00035e87) setting_code_pane

0xb19b,	// (0x00035e93) setting_slider_graphic_pane

0xb19b,	// (0x00035e93) setting_slider_pane

0xb19b,	// (0x00035e93) setting_text_pane

0xb19b,	// (0x00035e93) setting_volume_pane

0x4cbd,	// (0x0002f9b5) volume_set_pane

0x77dc,	// (0x000324d4) bg_set_opt_pane_cp

0x4cc5,	// (0x0002f9bd) setting_slider_pane_t1

0x4cde,	// (0x0002f9d6) setting_slider_pane_t2

0x4cf8,	// (0x0002f9f0) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003a256) setting_slider_pane_t

0x4d10,	// (0x0002fa08) slider_set_pane

0x76fc,	// (0x000323f4) bg_set_opt_pane_cp2

0x781e,	// (0x00032516) setting_slider_graphic_pane_g1

0x4d26,	// (0x0002fa1e) setting_slider_graphic_pane_t1

0x4d36,	// (0x0002fa2e) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003a25d) setting_slider_graphic_pane_t

0x4d46,	// (0x0002fa3e) slider_set_pane_cp

0x76fc,	// (0x000323f4) input_focus_pane_cp1

0xb050,	// (0x00035d48) list_set_text_pane

0x76f2,	// (0x000323ea) setting_text_pane_g1

0x76fc,	// (0x000323f4) input_focus_pane_cp2

0x76f2,	// (0x000323ea) setting_code_pane_g1

0x7827,	// (0x0003251f) setting_code_pane_t1

0x4d4e,	// (0x0002fa46) set_text_pane_t1_ParamLimits

0x4d4e,	// (0x0002fa46) set_text_pane_t1

0x8806,	// (0x000334fe) set_opt_bg_pane_g1

0x880e,	// (0x00033506) set_opt_bg_pane_g2

0xb02a,	// (0x00035d22) set_opt_bg_pane_g3

0x881e,	// (0x00033516) set_opt_bg_pane_g4

0x8826,	// (0x0003351e) set_opt_bg_pane_g5

0x882e,	// (0x00033526) set_opt_bg_pane_g6

0xb034,	// (0x00035d2c) set_opt_bg_pane_g7

0xb03c,	// (0x00035d34) set_opt_bg_pane_g8

0xb046,	// (0x00035d3e) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0003a66b) set_opt_bg_pane_g

0xb01d,	// (0x00035d15) slider_set_pane_g1

0x64fa,	// (0x000311f2) slider_set_pane_g2

0x0006,

0xf964,	// (0x0003a65c) slider_set_pane_g

0x646e,	// (0x00031166) volume_set_pane_g1

0x6476,	// (0x0003116e) volume_set_pane_g2

0x647e,	// (0x00031176) volume_set_pane_g3

0x6486,	// (0x0003117e) volume_set_pane_g4

0x648e,	// (0x00031186) volume_set_pane_g5

0x6496,	// (0x0003118e) volume_set_pane_g6

0x649e,	// (0x00031196) volume_set_pane_g7

0x64a6,	// (0x0003119e) volume_set_pane_g8

0x64ae,	// (0x000311a6) volume_set_pane_g9

0x64b6,	// (0x000311ae) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0003a634) volume_set_pane_g

0x7835,	// (0x0003252d) indicator_pane_ParamLimits

0x7835,	// (0x0003252d) indicator_pane

0x7841,	// (0x00032539) main_idle_pane_g2_ParamLimits

0x7841,	// (0x00032539) main_idle_pane_g2

0x7869,	// (0x00032561) main_pane_idle_g1_ParamLimits

0x7869,	// (0x00032561) main_pane_idle_g1

0x7876,	// (0x0003256e) popup_clock_digital_analogue_window_ParamLimits

0x7876,	// (0x0003256e) popup_clock_digital_analogue_window

0x788d,	// (0x00032585) soft_indicator_pane_ParamLimits

0x788d,	// (0x00032585) soft_indicator_pane

0x7899,	// (0x00032591) wallpaper_pane_ParamLimits

0x7899,	// (0x00032591) wallpaper_pane

0x76f2,	// (0x000323ea) wallpaper_pane_g1

0x78ad,	// (0x000325a5) indicator_pane_g1_ParamLimits

0x78ad,	// (0x000325a5) indicator_pane_g1

0xb454,	// (0x0003614c) navi_navi_icon_text_pane_srt_g1

0x78c8,	// (0x000325c0) soft_indicator_pane_t1

0x78e2,	// (0x000325da) aid_ps_area_pane

0x78f3,	// (0x000325eb) aid_ps_clock_pane

0x7901,	// (0x000325f9) aid_ps_indicator_pane

0x790d,	// (0x00032605) indicator_ps_pane_ParamLimits

0x790d,	// (0x00032605) indicator_ps_pane

0x791c,	// (0x00032614) power_save_pane_g1_ParamLimits

0x791c,	// (0x00032614) power_save_pane_g1

0x7928,	// (0x00032620) power_save_pane_g2_ParamLimits

0x7928,	// (0x00032620) power_save_pane_g2

0x48c4,	// (0x0002f5bc) aid_navinavi_width_pane

0x78e2,	// (0x000325da) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003a262) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003a262) power_save_pane_g

0x7936,	// (0x0003262e) power_save_pane_t1_ParamLimits

0x7936,	// (0x0003262e) power_save_pane_t1

0x78f3,	// (0x000325eb) aid_ps_clock_pane_ParamLimits

0x7901,	// (0x000325f9) aid_ps_indicator_pane_ParamLimits

0x7948,	// (0x00032640) power_save_pane_t4_ParamLimits

0x7948,	// (0x00032640) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003a267) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003a267) power_save_pane_t

0x7972,	// (0x0003266a) power_save_t3_ParamLimits

0x7972,	// (0x0003266a) power_save_t3

0x795d,	// (0x00032655) power_save_t2_ParamLimits

0x795d,	// (0x00032655) power_save_t2

0x7987,	// (0x0003267f) indicator_ps_pane_g1

0x7990,	// (0x00032688) ai_gene_pane_ParamLimits

0x7990,	// (0x00032688) ai_gene_pane

0x799c,	// (0x00032694) ai_links_pane_ParamLimits

0x799c,	// (0x00032694) ai_links_pane

0x79a8,	// (0x000326a0) indicator_pane_cp1_ParamLimits

0x79a8,	// (0x000326a0) indicator_pane_cp1

0x79b4,	// (0x000326ac) main_pane_idle_g1_cp_ParamLimits

0x79b4,	// (0x000326ac) main_pane_idle_g1_cp

0x79c0,	// (0x000326b8) popup_ai_links_title_window

0x79c9,	// (0x000326c1) soft_indicator_pane_cp1_ParamLimits

0x79c9,	// (0x000326c1) soft_indicator_pane_cp1

0xae0b,	// (0x00035b03) ai_links_pane_g1

0xae14,	// (0x00035b0c) grid_ai_links_pane

0xadee,	// (0x00035ae6) ai_gene_pane_1

0xadf9,	// (0x00035af1) ai_gene_pane_2

0xae02,	// (0x00035afa) list_highlight_pane_cp4

0xadd2,	// (0x00035aca) cell_ai_link_pane_ParamLimits

0xadd2,	// (0x00035aca) cell_ai_link_pane

0xadca,	// (0x00035ac2) cell_ai_link_pane_g1

0x8359,	// (0x00033051) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0003a60f) cell_ai_link_pane_g

0x76fc,	// (0x000323f4) grid_highlight_cp2

0x76fc,	// (0x000323f4) bg_popup_sub_pane_cp1

0x79e3,	// (0x000326db) popup_ai_links_title_window_t1

0xad18,	// (0x00035a10) ai_gene_pane_1_g1_ParamLimits

0xad18,	// (0x00035a10) ai_gene_pane_1_g1

0xad24,	// (0x00035a1c) ai_gene_pane_1_g2_ParamLimits

0xad24,	// (0x00035a1c) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0003a605) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0003a605) ai_gene_pane_1_g

0xad31,	// (0x00035a29) ai_gene_pane_1_t1_ParamLimits

0xad31,	// (0x00035a29) ai_gene_pane_1_t1

0xad65,	// (0x00035a5d) grid_ai_soft_ind_pane

0xad03,	// (0x000359fb) ai_gene_pane_2_t1_ParamLimits

0xad03,	// (0x000359fb) ai_gene_pane_2_t1

0x79f2,	// (0x000326ea) main_pane_empty_t1_ParamLimits

0x79f2,	// (0x000326ea) main_pane_empty_t1

0x816a,	// (0x00032e62) main_pane_empty_t2_ParamLimits

0x816a,	// (0x00032e62) main_pane_empty_t2

0x817f,	// (0x00032e77) main_pane_empty_t3_ParamLimits

0x817f,	// (0x00032e77) main_pane_empty_t3

0x8191,	// (0x00032e89) main_pane_empty_t4_ParamLimits

0x8191,	// (0x00032e89) main_pane_empty_t4

0x81a3,	// (0x00032e9b) main_pane_empty_t5_ParamLimits

0x81a3,	// (0x00032e9b) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003a26c) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003a26c) main_pane_empty_t

0x8857,	// (0x0003354f) bg_popup_window_pane_ParamLimits

0x8857,	// (0x0003354f) bg_popup_window_pane

0xaa67,	// (0x0003575f) find_popup_pane_cp2_ParamLimits

0xaa67,	// (0x0003575f) find_popup_pane_cp2

0xaa73,	// (0x0003576b) heading_pane_ParamLimits

0xaa73,	// (0x0003576b) heading_pane

0x76fc,	// (0x000323f4) bg_popup_sub_pane

0xa9e1,	// (0x000356d9) bg_popup_window_pane_g1_ParamLimits

0xa9e1,	// (0x000356d9) bg_popup_window_pane_g1

0xa9ed,	// (0x000356e5) bg_popup_window_pane_g2_ParamLimits

0xa9ed,	// (0x000356e5) bg_popup_window_pane_g2

0xa9f9,	// (0x000356f1) bg_popup_window_pane_g3_ParamLimits

0xa9f9,	// (0x000356f1) bg_popup_window_pane_g3

0xaa05,	// (0x000356fd) bg_popup_window_pane_g4_ParamLimits

0xaa05,	// (0x000356fd) bg_popup_window_pane_g4

0xaa11,	// (0x00035709) bg_popup_window_pane_g5_ParamLimits

0xaa11,	// (0x00035709) bg_popup_window_pane_g5

0xaa1d,	// (0x00035715) bg_popup_window_pane_g6_ParamLimits

0xaa1d,	// (0x00035715) bg_popup_window_pane_g6

0xaa29,	// (0x00035721) bg_popup_window_pane_g7_ParamLimits

0xaa29,	// (0x00035721) bg_popup_window_pane_g7

0xaa35,	// (0x0003572d) bg_popup_window_pane_g8_ParamLimits

0xaa35,	// (0x0003572d) bg_popup_window_pane_g8

0xaa41,	// (0x00035739) bg_popup_window_pane_g9_ParamLimits

0xaa41,	// (0x00035739) bg_popup_window_pane_g9

0xaa4d,	// (0x00035745) bg_popup_window_pane_g10_ParamLimits

0xaa4d,	// (0x00035745) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0003a5cd) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0003a5cd) bg_popup_window_pane_g

0xa976,	// (0x0003566e) bg_popup_heading_pane_ParamLimits

0xa976,	// (0x0003566e) bg_popup_heading_pane

0x6601,	// (0x000312f9) tabs_4_passive_pane_cp_srt_ParamLimits

0x6601,	// (0x000312f9) tabs_4_passive_pane_cp_srt

0x6613,	// (0x0003130b) tabs_4_passive_pane_srt_ParamLimits

0xa98a,	// (0x00035682) heading_pane_g2

0x6613,	// (0x0003130b) tabs_4_passive_pane_srt

0x977f,	// (0x00034477) bg_passive_tab_pane_cp3_srt_ParamLimits

0x977f,	// (0x00034477) bg_passive_tab_pane_cp3_srt

0xa992,	// (0x0003568a) heading_pane_t1_ParamLimits

0xa992,	// (0x0003568a) heading_pane_t1

0xa9a9,	// (0x000356a1) heading_pane_t2_ParamLimits

0xa9a9,	// (0x000356a1) heading_pane_t2

0x0001,

0xf8d0,	// (0x0003a5c8) heading_pane_t_ParamLimits

0xf8d0,	// (0x0003a5c8) heading_pane_t

0xa4a3,	// (0x0003519b) bg_popup_heading_pane_g1

0xa552,	// (0x0003524a) bg_popup_heading_pane_g2

0xa55c,	// (0x00035254) bg_popup_heading_pane_g3

0xa566,	// (0x0003525e) bg_popup_heading_pane_g4

0xa570,	// (0x00035268) bg_popup_heading_pane_g5

0xa57a,	// (0x00035272) bg_popup_heading_pane_g6

0xa582,	// (0x0003527a) bg_popup_heading_pane_g7

0xa58a,	// (0x00035282) bg_popup_heading_pane_g8

0xa594,	// (0x0003528c) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0003a584) bg_popup_heading_pane_g

0x9c89,	// (0x00034981) bg_popup_sub_pane_g1

0x9c99,	// (0x00034991) bg_popup_sub_pane_g2

0x9c91,	// (0x00034989) bg_popup_sub_pane_g3

0x9ca9,	// (0x000349a1) bg_popup_sub_pane_g4

0x9ca1,	// (0x00034999) bg_popup_sub_pane_g5

0x9cb1,	// (0x000349a9) bg_popup_sub_pane_g6

0x9cb9,	// (0x000349b1) bg_popup_sub_pane_g7

0x9cc9,	// (0x000349c1) bg_popup_sub_pane_g8

0x9cc1,	// (0x000349b9) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0003a55e) bg_popup_sub_pane_g

0x81b7,	// (0x00032eaf) bg_popup_window_pane_cp5_ParamLimits

0x81b7,	// (0x00032eaf) bg_popup_window_pane_cp5

0x81d3,	// (0x00032ecb) popup_note_window_g1_ParamLimits

0x81d3,	// (0x00032ecb) popup_note_window_g1

0x81df,	// (0x00032ed7) popup_note_window_t1_ParamLimits

0x81df,	// (0x00032ed7) popup_note_window_t1

0x81f5,	// (0x00032eed) popup_note_window_t2_ParamLimits

0x81f5,	// (0x00032eed) popup_note_window_t2

0x820b,	// (0x00032f03) popup_note_window_t3_ParamLimits

0x820b,	// (0x00032f03) popup_note_window_t3

0x8221,	// (0x00032f19) popup_note_window_t4_ParamLimits

0x8221,	// (0x00032f19) popup_note_window_t4

0x8249,	// (0x00032f41) popup_note_window_t5_ParamLimits

0x8249,	// (0x00032f41) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003a277) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003a277) popup_note_window_t

0x826d,	// (0x00032f65) bg_popup_window_pane_cp6_ParamLimits

0x826d,	// (0x00032f65) bg_popup_window_pane_cp6

0xa41f,	// (0x00035117) popup_note_image_window_g1_ParamLimits

0xa41f,	// (0x00035117) popup_note_image_window_g1

0xa42b,	// (0x00035123) popup_note_image_window_g2_ParamLimits

0xa42b,	// (0x00035123) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0003a552) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0003a552) popup_note_image_window_g

0xa444,	// (0x0003513c) popup_note_image_window_t1_ParamLimits

0xa444,	// (0x0003513c) popup_note_image_window_t1

0xa45d,	// (0x00035155) popup_note_image_window_t2_ParamLimits

0xa45d,	// (0x00035155) popup_note_image_window_t2

0xa476,	// (0x0003516e) popup_note_image_window_t3_ParamLimits

0xa476,	// (0x0003516e) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0003a557) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0003a557) popup_note_image_window_t

0xa2e0,	// (0x00034fd8) bg_popup_window_pane_cp7_ParamLimits

0xa2e0,	// (0x00034fd8) bg_popup_window_pane_cp7

0xa310,	// (0x00035008) popup_note_wait_window_g1_ParamLimits

0xa310,	// (0x00035008) popup_note_wait_window_g1

0xa31c,	// (0x00035014) popup_note_wait_window_g2_ParamLimits

0xa31c,	// (0x00035014) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0003a540) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0003a540) popup_note_wait_window_g

0xa334,	// (0x0003502c) popup_note_wait_window_t1_ParamLimits

0xa334,	// (0x0003502c) popup_note_wait_window_t1

0xa35b,	// (0x00035053) popup_note_wait_window_t2_ParamLimits

0xa35b,	// (0x00035053) popup_note_wait_window_t2

0xa378,	// (0x00035070) popup_note_wait_window_t3_ParamLimits

0xa378,	// (0x00035070) popup_note_wait_window_t3

0xa38b,	// (0x00035083) popup_note_wait_window_t4_ParamLimits

0xa38b,	// (0x00035083) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0003a547) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0003a547) popup_note_wait_window_t

0xa3b0,	// (0x000350a8) wait_bar_pane_ParamLimits

0xa3b0,	// (0x000350a8) wait_bar_pane

0x76fc,	// (0x000323f4) wait_anim_pane

0x76fc,	// (0x000323f4) wait_border_pane

0x76f2,	// (0x000323ea) wait_anim_pane_g1

0x76f2,	// (0x000323ea) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003a3fb) wait_anim_pane_g

0xa284,	// (0x00034f7c) wait_border_pane_g1

0xa28f,	// (0x00034f87) wait_border_pane_g2

0xa298,	// (0x00034f90) wait_border_pane_g3

0x0002,

0xf841,	// (0x0003a539) wait_border_pane_g

0xa0ef,	// (0x00034de7) bg_popup_window_pane_cp16_ParamLimits

0xa0ef,	// (0x00034de7) bg_popup_window_pane_cp16

0xa1ef,	// (0x00034ee7) indicator_popup_pane_cp4_ParamLimits

0xa1ef,	// (0x00034ee7) indicator_popup_pane_cp4

0xa203,	// (0x00034efb) popup_query_data_window_t1_ParamLimits

0xa203,	// (0x00034efb) popup_query_data_window_t1

0xa215,	// (0x00034f0d) popup_query_data_window_t2_ParamLimits

0xa215,	// (0x00034f0d) popup_query_data_window_t2

0xa22e,	// (0x00034f26) popup_query_data_window_t3_ParamLimits

0xa22e,	// (0x00034f26) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0003a532) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0003a532) popup_query_data_window_t

0xa248,	// (0x00034f40) query_popup_data_pane_ParamLimits

0xa248,	// (0x00034f40) query_popup_data_pane

0xa25c,	// (0x00034f54) query_popup_data_pane_cp1_ParamLimits

0xa25c,	// (0x00034f54) query_popup_data_pane_cp1

0xa0ef,	// (0x00034de7) bg_popup_window_pane_cp10_ParamLimits

0xa0ef,	// (0x00034de7) bg_popup_window_pane_cp10

0xa121,	// (0x00034e19) indicator_popup_pane_ParamLimits

0xa121,	// (0x00034e19) indicator_popup_pane

0xa143,	// (0x00034e3b) popup_query_code_window_t1_ParamLimits

0xa143,	// (0x00034e3b) popup_query_code_window_t1

0xa15d,	// (0x00034e55) popup_query_code_window_t2_ParamLimits

0xa15d,	// (0x00034e55) popup_query_code_window_t2

0xa1a6,	// (0x00034e9e) popup_query_code_window_t3_ParamLimits

0xa1a6,	// (0x00034e9e) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0003a52b) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0003a52b) popup_query_code_window_t

0xa1d5,	// (0x00034ecd) query_popup_pane_ParamLimits

0xa1d5,	// (0x00034ecd) query_popup_pane

0x826d,	// (0x00032f65) bg_popup_window_pane_cp15_ParamLimits

0x826d,	// (0x00032f65) bg_popup_window_pane_cp15

0x828b,	// (0x00032f83) indicator_popup_pane_cp1_ParamLimits

0x828b,	// (0x00032f83) indicator_popup_pane_cp1

0x829e,	// (0x00032f96) indicator_popup_pane_cp2_ParamLimits

0x829e,	// (0x00032f96) indicator_popup_pane_cp2

0x82b1,	// (0x00032fa9) popup_query_data_code_window_g1_ParamLimits

0x82b1,	// (0x00032fa9) popup_query_data_code_window_g1

0x82c4,	// (0x00032fbc) popup_query_data_code_window_t1_ParamLimits

0x82c4,	// (0x00032fbc) popup_query_data_code_window_t1

0x82d6,	// (0x00032fce) popup_query_data_code_window_t2_ParamLimits

0x82d6,	// (0x00032fce) popup_query_data_code_window_t2

0x82e8,	// (0x00032fe0) popup_query_data_code_window_t3_ParamLimits

0x82e8,	// (0x00032fe0) popup_query_data_code_window_t3

0x82fe,	// (0x00032ff6) popup_query_data_code_window_t4_ParamLimits

0x82fe,	// (0x00032ff6) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003a282) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003a282) popup_query_data_code_window_t

0x6130,	// (0x00030e28) list_single_midp_graphic_pane_g3

0x8316,	// (0x0003300e) query_popup_data_pane_cp2_ParamLimits

0x8329,	// (0x00033021) query_popup_pane_cp2_ParamLimits

0x8329,	// (0x00033021) query_popup_pane_cp2

0x76fc,	// (0x000323f4) bg_popup_window_pane_cp11

0xa0e7,	// (0x00034ddf) heading_pane_cp5

0x8414,	// (0x0003310c) listscroll_popup_info_pane

0x76fc,	// (0x000323f4) input_focus_pane_cp3

0x833c,	// (0x00033034) query_popup_pane_t1

0x834a,	// (0x00033042) list_popup_info_pane_ParamLimits

0x834a,	// (0x00033042) list_popup_info_pane

0x8359,	// (0x00033051) listscroll_popup_info_pane_g1

0x8361,	// (0x00033059) scroll_pane_cp7

0x836b,	// (0x00033063) popup_info_list_pane_t1_ParamLimits

0x836b,	// (0x00033063) popup_info_list_pane_t1

0x8385,	// (0x0003307d) popup_info_list_pane_t2_ParamLimits

0x8385,	// (0x0003307d) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003a28b) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003a28b) popup_info_list_pane_t

0x76fc,	// (0x000323f4) bg_popup_window_pane_cp12

0xb46e,	// (0x00036166) find_popup_pane

0x77dc,	// (0x000324d4) bg_popup_window_pane_cp3

0x839f,	// (0x00033097) heading_pane_cp3

0x83ab,	// (0x000330a3) listscroll_popup_graphic_pane

0x76fc,	// (0x000323f4) bg_popup_window_pane_cp4

0x840a,	// (0x00033102) heading_pane_cp4

0x8414,	// (0x0003310c) listscroll_popup_colour_pane

0x841c,	// (0x00033114) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x841c,	// (0x00033114) cell_large_graphic_colour_none_popup_pane

0x8430,	// (0x00033128) grid_large_graphic_colour_popup_pane_ParamLimits

0x8430,	// (0x00033128) grid_large_graphic_colour_popup_pane

0x845c,	// (0x00033154) listscroll_popup_colour_pane_g1_ParamLimits

0x845c,	// (0x00033154) listscroll_popup_colour_pane_g1

0x8473,	// (0x0003316b) listscroll_popup_colour_pane_g2_ParamLimits

0x8473,	// (0x0003316b) listscroll_popup_colour_pane_g2

0x848a,	// (0x00033182) listscroll_popup_colour_pane_g3_ParamLimits

0x848a,	// (0x00033182) listscroll_popup_colour_pane_g3

0x849a,	// (0x00033192) listscroll_popup_colour_pane_g4_ParamLimits

0x849a,	// (0x00033192) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003a290) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003a290) listscroll_popup_colour_pane_g

0x84ae,	// (0x000331a6) scroll_pane_cp6_ParamLimits

0x84ae,	// (0x000331a6) scroll_pane_cp6

0x84c0,	// (0x000331b8) cell_large_graphic_colour_popup_pane_ParamLimits

0x84c0,	// (0x000331b8) cell_large_graphic_colour_popup_pane

0x84df,	// (0x000331d7) cell_large_graphic_colour_none_popup_pane_t1

0x76fc,	// (0x000323f4) grid_highlight_pane_cp5

0x84ee,	// (0x000331e6) cell_large_graphic_colour_popup_pane_g1

0x84f6,	// (0x000331ee) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003a299) cell_large_graphic_colour_popup_pane_g

0x84fe,	// (0x000331f6) cell_large_graphic_colour_popup_pane_g2_copy1

0x8507,	// (0x000331ff) grid_highlight_pane_cp4

0x850f,	// (0x00033207) bg_popup_window_pane_cp8_ParamLimits

0x850f,	// (0x00033207) bg_popup_window_pane_cp8

0x852a,	// (0x00033222) popup_snote_single_text_window_g1_ParamLimits

0x852a,	// (0x00033222) popup_snote_single_text_window_g1

0x853c,	// (0x00033234) popup_snote_single_text_window_t1_ParamLimits

0x853c,	// (0x00033234) popup_snote_single_text_window_t1

0x854f,	// (0x00033247) popup_snote_single_text_window_t2_ParamLimits

0x854f,	// (0x00033247) popup_snote_single_text_window_t2

0x8562,	// (0x0003325a) popup_snote_single_text_window_t3_ParamLimits

0x8562,	// (0x0003325a) popup_snote_single_text_window_t3

0x859b,	// (0x00033293) popup_snote_single_text_window_t4_ParamLimits

0x859b,	// (0x00033293) popup_snote_single_text_window_t4

0x85cf,	// (0x000332c7) popup_snote_single_text_window_t5_ParamLimits

0x85cf,	// (0x000332c7) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003a29e) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003a29e) popup_snote_single_text_window_t

0x85fe,	// (0x000332f6) bg_popup_window_pane_cp9_ParamLimits

0x85fe,	// (0x000332f6) bg_popup_window_pane_cp9

0x852a,	// (0x00033222) popup_snote_single_graphic_window_g1_ParamLimits

0x852a,	// (0x00033222) popup_snote_single_graphic_window_g1

0x860c,	// (0x00033304) popup_snote_single_graphic_window_g2_ParamLimits

0x860c,	// (0x00033304) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003a2a9) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003a2a9) popup_snote_single_graphic_window_g

0x8618,	// (0x00033310) popup_snote_single_graphic_window_t1_ParamLimits

0x8618,	// (0x00033310) popup_snote_single_graphic_window_t1

0x862b,	// (0x00033323) popup_snote_single_graphic_window_t2_ParamLimits

0x862b,	// (0x00033323) popup_snote_single_graphic_window_t2

0x863e,	// (0x00033336) popup_snote_single_graphic_window_t3_ParamLimits

0x863e,	// (0x00033336) popup_snote_single_graphic_window_t3

0x8677,	// (0x0003336f) popup_snote_single_graphic_window_t4_ParamLimits

0x8677,	// (0x0003336f) popup_snote_single_graphic_window_t4

0x86ab,	// (0x000333a3) popup_snote_single_graphic_window_t5_ParamLimits

0x86ab,	// (0x000333a3) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003a2ae) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003a2ae) popup_snote_single_graphic_window_t

0xb3b2,	// (0x000360aa) grid_graphic_popup_pane_ParamLimits

0xb3b2,	// (0x000360aa) grid_graphic_popup_pane

0xb3da,	// (0x000360d2) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3da,	// (0x000360d2) listscroll_popup_graphic_pane_g1

0xb3ee,	// (0x000360e6) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3ee,	// (0x000360e6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0003a6a8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0003a6a8) listscroll_popup_graphic_pane_g

0xb402,	// (0x000360fa) scroll_pane_cp5

0xb34f,	// (0x00036047) cell_graphic_popup_pane_ParamLimits

0xb34f,	// (0x00036047) cell_graphic_popup_pane

0xb330,	// (0x00036028) cell_graphic_popup_pane_g1

0xb338,	// (0x00036030) cell_graphic_popup_pane_g2

0x84fe,	// (0x000331f6) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0003a6a1) cell_graphic_popup_pane_g

0xb341,	// (0x00036039) cell_graphic_popup_pane_t2

0x8507,	// (0x000331ff) grid_highlight_pane_cp3

0x86ec,	// (0x000333e4) list_gen_pane_ParamLimits

0x86ec,	// (0x000333e4) list_gen_pane

0x871e,	// (0x00033416) scroll_pane

0xb288,	// (0x00035f80) bg_list_pane_g1_ParamLimits

0xb288,	// (0x00035f80) bg_list_pane_g1

0xb2a5,	// (0x00035f9d) bg_list_pane_g2_ParamLimits

0xb2a5,	// (0x00035f9d) bg_list_pane_g2

0xb2ba,	// (0x00035fb2) bg_list_pane_g3_ParamLimits

0xb2ba,	// (0x00035fb2) bg_list_pane_g3

0xb2ce,	// (0x00035fc6) bg_list_pane_g4_ParamLimits

0xb2ce,	// (0x00035fc6) bg_list_pane_g4

0xb2e2,	// (0x00035fda) bg_list_pane_g5_ParamLimits

0xb2e2,	// (0x00035fda) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0003a696) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0003a696) bg_list_pane_g

0x65a2,	// (0x0003129a) list_double2_graphic_large_graphic_pane_ParamLimits

0x65a2,	// (0x0003129a) list_double2_graphic_large_graphic_pane

0x65a2,	// (0x0003129a) list_double2_graphic_pane_ParamLimits

0x65a2,	// (0x0003129a) list_double2_graphic_pane

0x65a2,	// (0x0003129a) list_double2_large_graphic_pane_ParamLimits

0x65a2,	// (0x0003129a) list_double2_large_graphic_pane

0x65a2,	// (0x0003129a) list_double2_pane_ParamLimits

0x65a2,	// (0x0003129a) list_double2_pane

0x65a2,	// (0x0003129a) list_double_graphic_heading_pane_ParamLimits

0x65a2,	// (0x0003129a) list_double_graphic_heading_pane

0x65a2,	// (0x0003129a) list_double_graphic_pane_ParamLimits

0x65a2,	// (0x0003129a) list_double_graphic_pane

0x65a2,	// (0x0003129a) list_double_heading_pane_ParamLimits

0x65a2,	// (0x0003129a) list_double_heading_pane

0x65a2,	// (0x0003129a) list_double_large_graphic_pane_ParamLimits

0x65a2,	// (0x0003129a) list_double_large_graphic_pane

0x65a2,	// (0x0003129a) list_double_number_pane_ParamLimits

0x65a2,	// (0x0003129a) list_double_number_pane

0x65a2,	// (0x0003129a) list_double_pane_ParamLimits

0x65a2,	// (0x0003129a) list_double_pane

0x65a2,	// (0x0003129a) list_double_time_pane_ParamLimits

0x65a2,	// (0x0003129a) list_double_time_pane

0x65a2,	// (0x0003129a) list_setting_number_pane_ParamLimits

0x65a2,	// (0x0003129a) list_setting_number_pane

0x65a2,	// (0x0003129a) list_setting_pane_ParamLimits

0x65a2,	// (0x0003129a) list_setting_pane

0x7a0a,	// (0x00032702) list_single_2graphic_pane_ParamLimits

0x7a0a,	// (0x00032702) list_single_2graphic_pane

0x7a0a,	// (0x00032702) list_single_graphic_heading_pane_ParamLimits

0x7a0a,	// (0x00032702) list_single_graphic_heading_pane

0x7a0a,	// (0x00032702) list_single_graphic_pane_ParamLimits

0x7a0a,	// (0x00032702) list_single_graphic_pane

0x7a0a,	// (0x00032702) list_single_heading_pane_ParamLimits

0x7a0a,	// (0x00032702) list_single_heading_pane

0x7a4a,	// (0x00032742) list_single_large_graphic_pane_ParamLimits

0x7a4a,	// (0x00032742) list_single_large_graphic_pane

0x7a0a,	// (0x00032702) list_single_number_heading_pane_ParamLimits

0x7a0a,	// (0x00032702) list_single_number_heading_pane

0x7a0a,	// (0x00032702) list_single_number_pane_ParamLimits

0x7a0a,	// (0x00032702) list_single_number_pane

0x7a0a,	// (0x00032702) list_single_pane_ParamLimits

0x7a0a,	// (0x00032702) list_single_pane

0x76fc,	// (0x000323f4) list_highlight_pane_cp1

0x4d75,	// (0x0002fa6d) list_single_pane_g1_ParamLimits

0x4d75,	// (0x0002fa6d) list_single_pane_g1

0x4d81,	// (0x0002fa79) list_single_pane_g2_ParamLimits

0x4d81,	// (0x0002fa79) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003a2c0) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003a2c0) list_single_pane_g

0x658c,	// (0x00031284) list_single_pane_t1_ParamLimits

0x658c,	// (0x00031284) list_single_pane_t1

0x4d75,	// (0x0002fa6d) list_single_number_pane_g1_ParamLimits

0x4d75,	// (0x0002fa6d) list_single_number_pane_g1

0x4d81,	// (0x0002fa79) list_single_number_pane_g2_ParamLimits

0x4d81,	// (0x0002fa79) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003a2c0) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003a2c0) list_single_number_pane_g

0x64be,	// (0x000311b6) list_single_number_pane_t1_ParamLimits

0x64be,	// (0x000311b6) list_single_number_pane_t1

0x64d4,	// (0x000311cc) list_single_number_pane_t2_ParamLimits

0x64d4,	// (0x000311cc) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0003a657) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0003a657) list_single_number_pane_t

0x4d69,	// (0x0002fa61) list_single_graphic_pane_g1_ParamLimits

0x4d69,	// (0x0002fa61) list_single_graphic_pane_g1

0x4d75,	// (0x0002fa6d) list_single_graphic_pane_g2_ParamLimits

0x4d75,	// (0x0002fa6d) list_single_graphic_pane_g2

0x4d81,	// (0x0002fa79) list_single_graphic_pane_g3_ParamLimits

0x4d81,	// (0x0002fa79) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003a2b9) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003a2b9) list_single_graphic_pane_g

0x4d8d,	// (0x0002fa85) list_single_graphic_pane_t1_ParamLimits

0x4d8d,	// (0x0002fa85) list_single_graphic_pane_t1

0x4d75,	// (0x0002fa6d) list_single_heading_pane_g1_ParamLimits

0x4d75,	// (0x0002fa6d) list_single_heading_pane_g1

0x4d81,	// (0x0002fa79) list_single_heading_pane_g2_ParamLimits

0x4d81,	// (0x0002fa79) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003a2c0) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003a2c0) list_single_heading_pane_g

0x4da3,	// (0x0002fa9b) list_single_heading_pane_t1_ParamLimits

0x4da3,	// (0x0002fa9b) list_single_heading_pane_t1

0x4db9,	// (0x0002fab1) list_single_heading_pane_t2_ParamLimits

0x4db9,	// (0x0002fab1) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003a2c5) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003a2c5) list_single_heading_pane_t

0x4d75,	// (0x0002fa6d) list_single_number_heading_pane_g1_ParamLimits

0x4d75,	// (0x0002fa6d) list_single_number_heading_pane_g1

0x4d81,	// (0x0002fa79) list_single_number_heading_pane_g2_ParamLimits

0x4d81,	// (0x0002fa79) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003a2c0) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003a2c0) list_single_number_heading_pane_g

0x4da3,	// (0x0002fa9b) list_single_number_heading_pane_t1_ParamLimits

0x4da3,	// (0x0002fa9b) list_single_number_heading_pane_t1

0x4dcb,	// (0x0002fac3) list_single_number_heading_pane_t2_ParamLimits

0x4dcb,	// (0x0002fac3) list_single_number_heading_pane_t2

0x4ddd,	// (0x0002fad5) list_single_number_heading_pane_t3_ParamLimits

0x4ddd,	// (0x0002fad5) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003a2ca) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003a2ca) list_single_number_heading_pane_t

0x4def,	// (0x0002fae7) list_single_graphic_heading_pane_g1_ParamLimits

0x4def,	// (0x0002fae7) list_single_graphic_heading_pane_g1

0x4dfb,	// (0x0002faf3) list_single_graphic_heading_pane_g4_ParamLimits

0x4dfb,	// (0x0002faf3) list_single_graphic_heading_pane_g4

0x4d81,	// (0x0002fa79) list_single_graphic_heading_pane_g5_ParamLimits

0x4d81,	// (0x0002fa79) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003a2d1) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003a2d1) list_single_graphic_heading_pane_g

0x4da3,	// (0x0002fa9b) list_single_graphic_heading_pane_t1_ParamLimits

0x4da3,	// (0x0002fa9b) list_single_graphic_heading_pane_t1

0x4e0c,	// (0x0002fb04) list_single_graphic_heading_pane_t2_ParamLimits

0x4e0c,	// (0x0002fb04) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003a2d8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003a2d8) list_single_graphic_heading_pane_t

0x4e1e,	// (0x0002fb16) list_single_large_graphic_pane_g1_ParamLimits

0x4e1e,	// (0x0002fb16) list_single_large_graphic_pane_g1

0x4e2a,	// (0x0002fb22) list_single_large_graphic_pane_g2_ParamLimits

0x4e2a,	// (0x0002fb22) list_single_large_graphic_pane_g2

0x4e36,	// (0x0002fb2e) list_single_large_graphic_pane_g3_ParamLimits

0x4e36,	// (0x0002fb2e) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003a2dd) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003a2dd) list_single_large_graphic_pane_g

0xa28f,	// (0x00034f87) wait_border_pane_g2_copy1

0x4e42,	// (0x0002fb3a) list_single_large_graphic_pane_g4_cp2

0x4e4a,	// (0x0002fb42) list_single_large_graphic_pane_t1_ParamLimits

0x4e4a,	// (0x0002fb42) list_single_large_graphic_pane_t1

0x4e60,	// (0x0002fb58) list_double_pane_g1_ParamLimits

0x4e60,	// (0x0002fb58) list_double_pane_g1

0x4e6c,	// (0x0002fb64) list_double_pane_g2_ParamLimits

0x4e6c,	// (0x0002fb64) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003a2e4) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003a2e4) list_double_pane_g

0x4e78,	// (0x0002fb70) list_double_pane_t1_ParamLimits

0x4e78,	// (0x0002fb70) list_double_pane_t1

0x4e8e,	// (0x0002fb86) list_double_pane_t2_ParamLimits

0x4e8e,	// (0x0002fb86) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003a2e9) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003a2e9) list_double_pane_t

0x4ea0,	// (0x0002fb98) list_double2_pane_g1_ParamLimits

0x4ea0,	// (0x0002fb98) list_double2_pane_g1

0x4eb1,	// (0x0002fba9) list_double2_pane_g2_ParamLimits

0x4eb1,	// (0x0002fba9) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003a2ee) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003a2ee) list_double2_pane_g

0x4ebd,	// (0x0002fbb5) list_double2_pane_t1_ParamLimits

0x4ebd,	// (0x0002fbb5) list_double2_pane_t1

0x4ed3,	// (0x0002fbcb) list_double2_pane_t2_ParamLimits

0x4ed3,	// (0x0002fbcb) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003a2f3) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003a2f3) list_double2_pane_t

0x4e60,	// (0x0002fb58) list_double_number_pane_g1_ParamLimits

0x4e60,	// (0x0002fb58) list_double_number_pane_g1

0x4e6c,	// (0x0002fb64) list_double_number_pane_g2_ParamLimits

0x4e6c,	// (0x0002fb64) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003a2e4) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003a2e4) list_double_number_pane_g

0x4ee5,	// (0x0002fbdd) list_double_number_pane_t1_ParamLimits

0x4ee5,	// (0x0002fbdd) list_double_number_pane_t1

0x4ef7,	// (0x0002fbef) list_double_number_pane_t2_ParamLimits

0x4ef7,	// (0x0002fbef) list_double_number_pane_t2

0x4f0d,	// (0x0002fc05) list_double_number_pane_t3_ParamLimits

0x4f0d,	// (0x0002fc05) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003a2f8) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003a2f8) list_double_number_pane_t

0x4f1f,	// (0x0002fc17) list_double_graphic_pane_g1_ParamLimits

0x4f1f,	// (0x0002fc17) list_double_graphic_pane_g1

0x4f2b,	// (0x0002fc23) list_double_graphic_pane_g2_ParamLimits

0x4f2b,	// (0x0002fc23) list_double_graphic_pane_g2

0x4f3a,	// (0x0002fc32) list_double_graphic_pane_g3_ParamLimits

0x4f3a,	// (0x0002fc32) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003a2ff) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003a2ff) list_double_graphic_pane_g

0x4f52,	// (0x0002fc4a) list_double_graphic_pane_t1_ParamLimits

0x4f52,	// (0x0002fc4a) list_double_graphic_pane_t1

0x4f68,	// (0x0002fc60) list_double_graphic_pane_t2_ParamLimits

0x4f68,	// (0x0002fc60) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003a308) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003a308) list_double_graphic_pane_t

0x4f7a,	// (0x0002fc72) list_double2_graphic_pane_g1_ParamLimits

0x4f7a,	// (0x0002fc72) list_double2_graphic_pane_g1

0x4f86,	// (0x0002fc7e) list_double2_graphic_pane_g2_ParamLimits

0x4f86,	// (0x0002fc7e) list_double2_graphic_pane_g2

0x4eb1,	// (0x0002fba9) list_double2_graphic_pane_g3_ParamLimits

0x4eb1,	// (0x0002fba9) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003a30d) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003a30d) list_double2_graphic_pane_g

0x4f92,	// (0x0002fc8a) list_double2_graphic_pane_t1_ParamLimits

0x4f92,	// (0x0002fc8a) list_double2_graphic_pane_t1

0x4fa8,	// (0x0002fca0) list_double2_graphic_pane_t2_ParamLimits

0x4fa8,	// (0x0002fca0) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003a314) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003a314) list_double2_graphic_pane_t

0x4fba,	// (0x0002fcb2) list_double_large_graphic_pane_g1_ParamLimits

0x4fba,	// (0x0002fcb2) list_double_large_graphic_pane_g1

0x4fcd,	// (0x0002fcc5) list_double_large_graphic_pane_g2_ParamLimits

0x4fcd,	// (0x0002fcc5) list_double_large_graphic_pane_g2

0x4e6c,	// (0x0002fb64) list_double_large_graphic_pane_g3_ParamLimits

0x4e6c,	// (0x0002fb64) list_double_large_graphic_pane_g3

0x4fde,	// (0x0002fcd6) list_double_large_graphic_pane_g4_ParamLimits

0x4fde,	// (0x0002fcd6) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003a319) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003a319) list_double_large_graphic_pane_g

0x5005,	// (0x0002fcfd) list_double_large_graphic_pane_t1_ParamLimits

0x5005,	// (0x0002fcfd) list_double_large_graphic_pane_t1

0x501e,	// (0x0002fd16) list_double_large_graphic_pane_t2_ParamLimits

0x501e,	// (0x0002fd16) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003a324) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003a324) list_double_large_graphic_pane_t

0x5030,	// (0x0002fd28) list_double2_large_graphic_pane_g1_ParamLimits

0x5030,	// (0x0002fd28) list_double2_large_graphic_pane_g1

0x4ea0,	// (0x0002fb98) list_double2_large_graphic_pane_g2_ParamLimits

0x4ea0,	// (0x0002fb98) list_double2_large_graphic_pane_g2

0x4eb1,	// (0x0002fba9) list_double2_large_graphic_pane_g3_ParamLimits

0x4eb1,	// (0x0002fba9) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003a329) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003a329) list_double2_large_graphic_pane_g

0x503c,	// (0x0002fd34) list_double2_large_graphic_pane_t1_ParamLimits

0x503c,	// (0x0002fd34) list_double2_large_graphic_pane_t1

0x5052,	// (0x0002fd4a) list_double2_large_graphic_pane_t2_ParamLimits

0x5052,	// (0x0002fd4a) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003a330) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003a330) list_double2_large_graphic_pane_t

0x5064,	// (0x0002fd5c) list_double_heading_pane_g1_ParamLimits

0x5064,	// (0x0002fd5c) list_double_heading_pane_g1

0x5075,	// (0x0002fd6d) list_double_heading_pane_g2_ParamLimits

0x5075,	// (0x0002fd6d) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003a335) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003a335) list_double_heading_pane_g

0x5081,	// (0x0002fd79) list_double_heading_pane_t1_ParamLimits

0x5081,	// (0x0002fd79) list_double_heading_pane_t1

0x4ed3,	// (0x0002fbcb) list_double_heading_pane_t2_ParamLimits

0x4ed3,	// (0x0002fbcb) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003a33a) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003a33a) list_double_heading_pane_t

0x5097,	// (0x0002fd8f) list_double_graphic_heading_pane_g1_ParamLimits

0x5097,	// (0x0002fd8f) list_double_graphic_heading_pane_g1

0x5064,	// (0x0002fd5c) list_double_graphic_heading_pane_g2_ParamLimits

0x5064,	// (0x0002fd5c) list_double_graphic_heading_pane_g2

0x5075,	// (0x0002fd6d) list_double_graphic_heading_pane_g3_ParamLimits

0x5075,	// (0x0002fd6d) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003a33f) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003a33f) list_double_graphic_heading_pane_g

0x50a3,	// (0x0002fd9b) list_double_graphic_heading_pane_t1_ParamLimits

0x50a3,	// (0x0002fd9b) list_double_graphic_heading_pane_t1

0x4fa8,	// (0x0002fca0) list_double_graphic_heading_pane_t2_ParamLimits

0x4fa8,	// (0x0002fca0) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003a346) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003a346) list_double_graphic_heading_pane_t

0x4fcd,	// (0x0002fcc5) list_double_time_pane_g1_ParamLimits

0x4fcd,	// (0x0002fcc5) list_double_time_pane_g1

0x4e6c,	// (0x0002fb64) list_double_time_pane_g2_ParamLimits

0x4e6c,	// (0x0002fb64) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003a34b) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003a34b) list_double_time_pane_g

0x50b9,	// (0x0002fdb1) list_double_time_pane_t1_ParamLimits

0x50b9,	// (0x0002fdb1) list_double_time_pane_t1

0x50cf,	// (0x0002fdc7) list_double_time_pane_t2_ParamLimits

0x50cf,	// (0x0002fdc7) list_double_time_pane_t2

0x50e1,	// (0x0002fdd9) list_double_time_pane_t3_ParamLimits

0x50e1,	// (0x0002fdd9) list_double_time_pane_t3

0x50f3,	// (0x0002fdeb) list_double_time_pane_t4_ParamLimits

0x50f3,	// (0x0002fdeb) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003a350) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003a350) list_double_time_pane_t

0x4f86,	// (0x0002fc7e) list_setting_pane_g1_ParamLimits

0x4f86,	// (0x0002fc7e) list_setting_pane_g1

0x4eb1,	// (0x0002fba9) list_setting_pane_g2_ParamLimits

0x4eb1,	// (0x0002fba9) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003a359) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003a359) list_setting_pane_g

0x5105,	// (0x0002fdfd) list_setting_pane_t1_ParamLimits

0x5105,	// (0x0002fdfd) list_setting_pane_t1

0x511f,	// (0x0002fe17) list_setting_pane_t2_ParamLimits

0x511f,	// (0x0002fe17) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003a35e) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003a35e) list_setting_pane_t

0x515e,	// (0x0002fe56) set_value_pane_cp_ParamLimits

0x515e,	// (0x0002fe56) set_value_pane_cp

0x516a,	// (0x0002fe62) list_setting_number_pane_g1_ParamLimits

0x516a,	// (0x0002fe62) list_setting_number_pane_g1

0x5176,	// (0x0002fe6e) list_setting_number_pane_g2_ParamLimits

0x5176,	// (0x0002fe6e) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003a365) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003a365) list_setting_number_pane_g

0x5182,	// (0x0002fe7a) list_setting_number_pane_t1_ParamLimits

0x5182,	// (0x0002fe7a) list_setting_number_pane_t1

0x519b,	// (0x0002fe93) list_setting_number_pane_t2_ParamLimits

0x519b,	// (0x0002fe93) list_setting_number_pane_t2

0x51b5,	// (0x0002fead) list_setting_number_pane_t3_ParamLimits

0x51b5,	// (0x0002fead) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003a36a) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003a36a) list_setting_number_pane_t

0x515e,	// (0x0002fe56) set_value_pane_ParamLimits

0x515e,	// (0x0002fe56) set_value_pane

0x8752,	// (0x0003344a) bg_set_opt_pane_ParamLimits

0x8752,	// (0x0003344a) bg_set_opt_pane

0x51f8,	// (0x0002fef0) set_value_pane_t1

0x8773,	// (0x0003346b) slider_set_pane_cp3

0x877c,	// (0x00033474) volume_small_pane_cp

0x8785,	// (0x0003347d) list_form_gen_pane

0x878e,	// (0x00033486) scroll_pane_cp8

0x520e,	// (0x0002ff06) form_field_data_pane_ParamLimits

0x520e,	// (0x0002ff06) form_field_data_pane

0x522e,	// (0x0002ff26) form_field_data_wide_pane_ParamLimits

0x522e,	// (0x0002ff26) form_field_data_wide_pane

0x524f,	// (0x0002ff47) form_field_popup_pane_ParamLimits

0x524f,	// (0x0002ff47) form_field_popup_pane

0x526f,	// (0x0002ff67) form_field_popup_wide_pane_ParamLimits

0x526f,	// (0x0002ff67) form_field_popup_wide_pane

0x528c,	// (0x0002ff84) form_field_slider_pane_ParamLimits

0x528c,	// (0x0002ff84) form_field_slider_pane

0x529f,	// (0x0002ff97) form_field_slider_wide_pane_ParamLimits

0x529f,	// (0x0002ff97) form_field_slider_wide_pane

0x879f,	// (0x00033497) data_form_pane

0x52bc,	// (0x0002ffb4) form_field_data_pane_t1

0x87ab,	// (0x000334a3) input_focus_pane

0x52d4,	// (0x0002ffcc) data_form_wide_pane

0x52f1,	// (0x0002ffe9) form_field_data_wide_pane_t1

0x851c,	// (0x00033214) input_focus_pane_cp6

0x5313,	// (0x0003000b) form_field_popup_pane_t1

0x87ab,	// (0x000334a3) input_focus_pane_cp7

0x87d9,	// (0x000334d1) list_form_pane

0x5333,	// (0x0003002b) form_field_popup_wide_pane_t1

0x87ab,	// (0x000334a3) input_focus_pane_cp8

0x87e5,	// (0x000334dd) list_form_wide_pane

0x5350,	// (0x00030048) form_field_slider_pane_t1_ParamLimits

0x5350,	// (0x00030048) form_field_slider_pane_t1

0x5366,	// (0x0003005e) form_field_slider_pane_t2_ParamLimits

0x5366,	// (0x0003005e) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003a37a) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003a37a) form_field_slider_pane_t

0x81b7,	// (0x00032eaf) input_focus_pane_cp9_ParamLimits

0x81b7,	// (0x00032eaf) input_focus_pane_cp9

0x537b,	// (0x00030073) slider_cont_pane_ParamLimits

0x537b,	// (0x00030073) slider_cont_pane

0x87f4,	// (0x000334ec) form_field_slider_wide_pane_t1_ParamLimits

0x87f4,	// (0x000334ec) form_field_slider_wide_pane_t1

0x538f,	// (0x00030087) form_field_slider_wide_pane_t2_ParamLimits

0x538f,	// (0x00030087) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003a37f) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003a37f) form_field_slider_wide_pane_t

0x81b7,	// (0x00032eaf) input_focus_pane_cp10_ParamLimits

0x81b7,	// (0x00032eaf) input_focus_pane_cp10

0x53a1,	// (0x00030099) slider_cont_pane_cp1_ParamLimits

0x53a1,	// (0x00030099) slider_cont_pane_cp1

0x53b5,	// (0x000300ad) slider_form_pane_cp

0x8806,	// (0x000334fe) input_focus_pane_g1

0x880e,	// (0x00033506) input_focus_pane_g2

0x8816,	// (0x0003350e) input_focus_pane_g3

0x881e,	// (0x00033516) input_focus_pane_g4

0x8826,	// (0x0003351e) input_focus_pane_g5

0x882e,	// (0x00033526) input_focus_pane_g6

0x8836,	// (0x0003352e) input_focus_pane_g7

0x883e,	// (0x00033536) input_focus_pane_g8

0x8846,	// (0x0003353e) input_focus_pane_g9

0x76f2,	// (0x000323ea) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003a384) input_focus_pane_g

0xa298,	// (0x00034f90) wait_border_pane_g3_copy1

0x53bd,	// (0x000300b5) data_form_pane_t1

0x76f2,	// (0x000323ea) wait_anim_pane_g1_copy1

0x655e,	// (0x00031256) data_form_wide_pane_t1

0x53d8,	// (0x000300d0) list_form_graphic_pane_cp_ParamLimits

0x53d8,	// (0x000300d0) list_form_graphic_pane_cp

0xb1c5,	// (0x00035ebd) slider_form_pane_g1

0xb1ce,	// (0x00035ec6) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0003a687) slider_form_pane_g

0x53f1,	// (0x000300e9) list_form_graphic_pane_ParamLimits

0x53f1,	// (0x000300e9) list_form_graphic_pane

0x540d,	// (0x00030105) list_form_graphic_pane_g1

0x5415,	// (0x0003010d) list_form_graphic_pane_t1_ParamLimits

0x5415,	// (0x0003010d) list_form_graphic_pane_t1

0x77dc,	// (0x000324d4) list_highlight_pane_cp5_ParamLimits

0x77dc,	// (0x000324d4) list_highlight_pane_cp5

0x542a,	// (0x00030122) find_pane_g1

0x884e,	// (0x00033546) input_find_pane

0x5433,	// (0x0003012b) input_find_pane_g1_ParamLimits

0x5433,	// (0x0003012b) input_find_pane_g1

0x543f,	// (0x00030137) input_find_pane_t1_ParamLimits

0x543f,	// (0x00030137) input_find_pane_t1

0x5454,	// (0x0003014c) input_find_pane_t2_ParamLimits

0x5454,	// (0x0003014c) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003a399) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003a399) input_find_pane_t

0x8857,	// (0x0003354f) input_focus_pane_cp5_ParamLimits

0x8857,	// (0x0003354f) input_focus_pane_cp5

0x8871,	// (0x00033569) bg_popup_window_pane_cp2_ParamLimits

0x8871,	// (0x00033569) bg_popup_window_pane_cp2

0x887e,	// (0x00033576) listscroll_menu_pane_ParamLimits

0x887e,	// (0x00033576) listscroll_menu_pane

0x888a,	// (0x00033582) popup_submenu_window_ParamLimits

0x888a,	// (0x00033582) popup_submenu_window

0x88b6,	// (0x000335ae) find_popup_pane_g1

0x88be,	// (0x000335b6) input_popup_find_pane_cp

0x8857,	// (0x0003354f) input_focus_pane_cp4_ParamLimits

0x8857,	// (0x0003354f) input_focus_pane_cp4

0x88d4,	// (0x000335cc) input_popup_find_pane_t1_ParamLimits

0x88d4,	// (0x000335cc) input_popup_find_pane_t1

0x76fc,	// (0x000323f4) bg_popup_sub_pane_cp

0x8902,	// (0x000335fa) listscroll_popup_sub_pane

0x890a,	// (0x00033602) list_submenu_pane_ParamLimits

0x890a,	// (0x00033602) list_submenu_pane

0x891b,	// (0x00033613) scroll_pane_cp4

0x8923,	// (0x0003361b) list_single_popup_submenu_pane_ParamLimits

0x8923,	// (0x0003361b) list_single_popup_submenu_pane

0x8937,	// (0x0003362f) list_single_popup_submenu_pane_g1

0x893f,	// (0x00033637) list_single_popup_submenu_pane_t1_ParamLimits

0x893f,	// (0x00033637) list_single_popup_submenu_pane_t1

0x77dc,	// (0x000324d4) bg_active_tab_pane_cp1_ParamLimits

0x77dc,	// (0x000324d4) bg_active_tab_pane_cp1

0x8954,	// (0x0003364c) tabs_2_active_pane_g1

0x895c,	// (0x00033654) tabs_2_active_pane_t1

0x77dc,	// (0x000324d4) bg_passive_tab_pane_cp1_ParamLimits

0x77dc,	// (0x000324d4) bg_passive_tab_pane_cp1

0x8954,	// (0x0003364c) tabs_2_passive_pane_g1

0x895c,	// (0x00033654) tabs_2_passive_pane_t1

0x896e,	// (0x00033666) bg_active_tab_pane_cp4

0x897c,	// (0x00033674) tabs_2_long_active_pane_t1

0x898f,	// (0x00033687) bg_passive_tab_pane_cp4

0x6138,	// (0x00030e30) list_single_midp_graphic_pane_g4_ParamLimits

0x896e,	// (0x00033666) bg_active_tab_pane_cp5

0x899b,	// (0x00033693) tabs_3_long_active_pane_t1

0x898f,	// (0x00033687) bg_passive_tab_pane_cp5

0x6138,	// (0x00030e30) list_single_midp_graphic_pane_g4

0x77dc,	// (0x000324d4) bg_popup_window_pane_cp13_ParamLimits

0x77dc,	// (0x000324d4) bg_popup_window_pane_cp13

0x89b6,	// (0x000336ae) listscroll_popup_fast_pane_ParamLimits

0x89b6,	// (0x000336ae) listscroll_popup_fast_pane

0x89c5,	// (0x000336bd) grid_popup_fast_pane_ParamLimits

0x89c5,	// (0x000336bd) grid_popup_fast_pane

0x89d7,	// (0x000336cf) scroll_pane_cp9_ParamLimits

0x89d7,	// (0x000336cf) scroll_pane_cp9

0xcae0,	// (0x000377d8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae0,	// (0x000377d8) list_single_graphic_hl_pane_t1_cp2

0x89fb,	// (0x000336f3) input_focus_pane_cp20_ParamLimits

0x89fb,	// (0x000336f3) input_focus_pane_cp20

0x8a09,	// (0x00033701) query_popup_data_pane_t1_ParamLimits

0x8a09,	// (0x00033701) query_popup_data_pane_t1

0x8a1c,	// (0x00033714) query_popup_data_pane_t2_ParamLimits

0x8a1c,	// (0x00033714) query_popup_data_pane_t2

0x8a62,	// (0x0003375a) query_popup_data_pane_t3_ParamLimits

0x8a62,	// (0x0003375a) query_popup_data_pane_t3

0x8aa3,	// (0x0003379b) query_popup_data_pane_t4_ParamLimits

0x8aa3,	// (0x0003379b) query_popup_data_pane_t4

0x8adf,	// (0x000337d7) query_popup_data_pane_t5_ParamLimits

0x8adf,	// (0x000337d7) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003a39e) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003a39e) query_popup_data_pane_t

0x8806,	// (0x000334fe) bg_set_opt_pane_g1

0x880e,	// (0x00033506) bg_set_opt_pane_g2

0x8816,	// (0x0003350e) bg_set_opt_pane_g3

0x881e,	// (0x00033516) bg_set_opt_pane_g4

0x8826,	// (0x0003351e) bg_set_opt_pane_g5

0x882e,	// (0x00033526) bg_set_opt_pane_g6

0x8836,	// (0x0003352e) bg_set_opt_pane_g7

0x883e,	// (0x00033536) bg_set_opt_pane_g8

0x8846,	// (0x0003353e) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003a3a9) bg_set_opt_pane_g

0x5790,	// (0x00030488) control_top_pane_stacon_ParamLimits

0x5790,	// (0x00030488) control_top_pane_stacon

0x57e3,	// (0x000304db) signal_pane_stacon_ParamLimits

0x57e3,	// (0x000304db) signal_pane_stacon

0x90cf,	// (0x00033dc7) stacon_top_pane_g1_ParamLimits

0x90cf,	// (0x00033dc7) stacon_top_pane_g1

0x5808,	// (0x00030500) title_pane_stacon_ParamLimits

0x5808,	// (0x00030500) title_pane_stacon

0x5832,	// (0x0003052a) uni_indicator_pane_stacon_ParamLimits

0x5832,	// (0x0003052a) uni_indicator_pane_stacon

0x5847,	// (0x0003053f) battery_pane_stacon_ParamLimits

0x5847,	// (0x0003053f) battery_pane_stacon

0x588b,	// (0x00030583) control_bottom_pane_stacon_ParamLimits

0x588b,	// (0x00030583) control_bottom_pane_stacon

0x58ae,	// (0x000305a6) navi_pane_stacon_ParamLimits

0x58ae,	// (0x000305a6) navi_pane_stacon

0x90f1,	// (0x00033de9) stacon_bottom_pane_g1_ParamLimits

0x90f1,	// (0x00033de9) stacon_bottom_pane_g1

0x5469,	// (0x00030161) aid_levels_signal_lsc_ParamLimits

0x5469,	// (0x00030161) aid_levels_signal_lsc

0x547f,	// (0x00030177) signal_pane_stacon_g1_ParamLimits

0x547f,	// (0x00030177) signal_pane_stacon_g1

0x5493,	// (0x0003018b) signal_pane_stacon_g2_ParamLimits

0x5493,	// (0x0003018b) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003a3bc) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003a3bc) signal_pane_stacon_g

0x54c8,	// (0x000301c0) title_pane_stacon_t1_ParamLimits

0x54c8,	// (0x000301c0) title_pane_stacon_t1

0x8b23,	// (0x0003381b) uni_indicator_pane_stacon_g1

0x8b2d,	// (0x00033825) uni_indicator_pane_stacon_g2

0x8b37,	// (0x0003382f) uni_indicator_pane_stacon_g3

0x8b41,	// (0x00033839) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003a3c8) uni_indicator_pane_stacon_g

0x54ed,	// (0x000301e5) control_top_pane_stacon_g1

0x54f5,	// (0x000301ed) control_top_pane_stacon_t1_ParamLimits

0x54f5,	// (0x000301ed) control_top_pane_stacon_t1

0x552c,	// (0x00030224) aid_levels_battery_lsc_ParamLimits

0x552c,	// (0x00030224) aid_levels_battery_lsc

0x5543,	// (0x0003023b) battery_pane_stacon_g1_ParamLimits

0x5543,	// (0x0003023b) battery_pane_stacon_g1

0x5556,	// (0x0003024e) battery_pane_stacon_g2_ParamLimits

0x5556,	// (0x0003024e) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003a3d1) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003a3d1) battery_pane_stacon_g

0x5594,	// (0x0003028c) navi_icon_pane_stacon

0x55a8,	// (0x000302a0) navi_navi_pane_stacon

0x5594,	// (0x0003028c) navi_text_pane_stacon

0x54ed,	// (0x000301e5) control_bottom_pane_stacon_g1

0x55bc,	// (0x000302b4) control_bottom_pane_stacon_t1_ParamLimits

0x55bc,	// (0x000302b4) control_bottom_pane_stacon_t1

0x8b65,	// (0x0003385d) grid_app_pane_ParamLimits

0x8b65,	// (0x0003385d) grid_app_pane

0x8b89,	// (0x00033881) scroll_pane_cp15_ParamLimits

0x8b89,	// (0x00033881) scroll_pane_cp15

0x8b9c,	// (0x00033894) cell_app_pane_ParamLimits

0x8b9c,	// (0x00033894) cell_app_pane

0x8bc0,	// (0x000338b8) cell_app_pane_g1_ParamLimits

0x8bc0,	// (0x000338b8) cell_app_pane_g1

0x8be4,	// (0x000338dc) cell_app_pane_g2_ParamLimits

0x8be4,	// (0x000338dc) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003a3d6) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003a3d6) cell_app_pane_g

0x8bf0,	// (0x000338e8) cell_app_pane_t1_ParamLimits

0x8bf0,	// (0x000338e8) cell_app_pane_t1

0x8c07,	// (0x000338ff) grid_highlight_pane_ParamLimits

0x8c07,	// (0x000338ff) grid_highlight_pane

0x8806,	// (0x000334fe) cell_highlight_pane_g1

0x880e,	// (0x00033506) cell_highlight_pane_g2

0x8816,	// (0x0003350e) cell_highlight_pane_g3

0x881e,	// (0x00033516) cell_highlight_pane_g4

0x8826,	// (0x0003351e) cell_highlight_pane_g5

0x882e,	// (0x00033526) cell_highlight_pane_g6

0x8836,	// (0x0003352e) cell_highlight_pane_g7

0x883e,	// (0x00033536) cell_highlight_pane_g8

0x8846,	// (0x0003353e) cell_highlight_pane_g9

0x76f2,	// (0x000323ea) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003a384) cell_highlight_pane_g

0x8c18,	// (0x00033910) bg_scroll_pane

0x5606,	// (0x000302fe) scroll_handle_pane

0x8c5f,	// (0x00033957) scroll_bg_pane_g1

0x8c74,	// (0x0003396c) scroll_bg_pane_g2

0x8c8c,	// (0x00033984) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003a3db) scroll_bg_pane_g

0x8ca1,	// (0x00033999) scroll_handle_focus_pane_ParamLimits

0x8ca1,	// (0x00033999) scroll_handle_focus_pane

0x8c5f,	// (0x00033957) scroll_handle_pane_g1

0x8cae,	// (0x000339a6) scroll_handle_pane_g2

0x8c8c,	// (0x00033984) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003a3e2) scroll_handle_pane_g

0x8857,	// (0x0003354f) bg_popup_sub_pane_cp21_ParamLimits

0x8857,	// (0x0003354f) bg_popup_sub_pane_cp21

0x8cc2,	// (0x000339ba) popup_fep_japan_predictive_window_t1_ParamLimits

0x8cc2,	// (0x000339ba) popup_fep_japan_predictive_window_t1

0x8cdc,	// (0x000339d4) popup_fep_japan_predictive_window_t2_ParamLimits

0x8cdc,	// (0x000339d4) popup_fep_japan_predictive_window_t2

0x8d0f,	// (0x00033a07) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d0f,	// (0x00033a07) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003a3e9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003a3e9) popup_fep_japan_predictive_window_t

0x76fc,	// (0x000323f4) bg_popup_sub_pane_cp23

0x8d46,	// (0x00033a3e) listscroll_japin_cand_pane

0x8d4e,	// (0x00033a46) popup_fep_japan_candidate_window_t1

0x8d5c,	// (0x00033a54) candidate_pane_ParamLimits

0x8d5c,	// (0x00033a54) candidate_pane

0x8d6e,	// (0x00033a66) scroll_pane_cp30

0x8d76,	// (0x00033a6e) list_single_popup_jap_candidate_pane_ParamLimits

0x8d76,	// (0x00033a6e) list_single_popup_jap_candidate_pane

0x76fc,	// (0x000323f4) list_highlight_pane_cp30

0x8d8b,	// (0x00033a83) list_single_popup_jap_candidate_pane_t1

0x8d9a,	// (0x00033a92) level_1_signal

0x8dac,	// (0x00033aa4) level_2_signal

0x8dbf,	// (0x00033ab7) level_3_signal

0x8dd2,	// (0x00033aca) level_4_signal

0x8de5,	// (0x00033add) level_5_signal

0x8df8,	// (0x00033af0) level_6_signal

0x8e0b,	// (0x00033b03) level_7_signal

0x8d9a,	// (0x00033a92) level_1_battery

0x8dac,	// (0x00033aa4) level_2_battery

0x8dbf,	// (0x00033ab7) level_3_battery

0x8dd2,	// (0x00033aca) level_4_battery

0x8de5,	// (0x00033add) level_5_battery

0x8df8,	// (0x00033af0) level_6_battery

0x8e0b,	// (0x00033b03) level_7_battery

0x8e36,	// (0x00033b2e) list_menu_pane_ParamLimits

0x8e36,	// (0x00033b2e) list_menu_pane

0x8e4c,	// (0x00033b44) scroll_pane_cp25_ParamLimits

0x8e4c,	// (0x00033b44) scroll_pane_cp25

0x8e65,	// (0x00033b5d) list_double2_graphic_pane_cp2_ParamLimits

0x8e65,	// (0x00033b5d) list_double2_graphic_pane_cp2

0x8e65,	// (0x00033b5d) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e65,	// (0x00033b5d) list_double2_large_graphic_pane_cp2

0x8e65,	// (0x00033b5d) list_double2_pane_cp2_ParamLimits

0x8e65,	// (0x00033b5d) list_double2_pane_cp2

0x8e65,	// (0x00033b5d) list_double_graphic_pane_cp2_ParamLimits

0x8e65,	// (0x00033b5d) list_double_graphic_pane_cp2

0x8e65,	// (0x00033b5d) list_double_large_graphic_pane_cp2_ParamLimits

0x8e65,	// (0x00033b5d) list_double_large_graphic_pane_cp2

0x8e65,	// (0x00033b5d) list_double_number_pane_cp2_ParamLimits

0x8e65,	// (0x00033b5d) list_double_number_pane_cp2

0x8e65,	// (0x00033b5d) list_double_pane_cp2_ParamLimits

0x8e65,	// (0x00033b5d) list_double_pane_cp2

0x8e89,	// (0x00033b81) list_single_2graphic_pane_cp2_ParamLimits

0x8e89,	// (0x00033b81) list_single_2graphic_pane_cp2

0x8e89,	// (0x00033b81) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e89,	// (0x00033b81) list_single_graphic_heading_pane_cp2

0x8e89,	// (0x00033b81) list_single_graphic_pane_cp2_ParamLimits

0x8e89,	// (0x00033b81) list_single_graphic_pane_cp2

0x8e89,	// (0x00033b81) list_single_heading_pane_cp2_ParamLimits

0x8e89,	// (0x00033b81) list_single_heading_pane_cp2

0x8ea2,	// (0x00033b9a) list_single_large_graphic_pane_cp2_ParamLimits

0x8ea2,	// (0x00033b9a) list_single_large_graphic_pane_cp2

0x8e89,	// (0x00033b81) list_single_number_heading_pane_cp2_ParamLimits

0x8e89,	// (0x00033b81) list_single_number_heading_pane_cp2

0x8e89,	// (0x00033b81) list_single_number_pane_cp2_ParamLimits

0x8e89,	// (0x00033b81) list_single_number_pane_cp2

0x8e89,	// (0x00033b81) list_single_pane_cp2_ParamLimits

0x8e89,	// (0x00033b81) list_single_pane_cp2

0x8f1e,	// (0x00033c16) bg_popup_sub_pane_cp22

0x56b8,	// (0x000303b0) popup_side_volume_key_window_g1

0x56e2,	// (0x000303da) popup_side_volume_key_window_t1

0x56fe,	// (0x000303f6) volume_small_pane_cp1

0x81b7,	// (0x00032eaf) bg_popup_sub_pane_cp24_ParamLimits

0x81b7,	// (0x00032eaf) bg_popup_sub_pane_cp24

0x8f34,	// (0x00033c2c) fep_china_uni_candidate_pane_ParamLimits

0x8f34,	// (0x00033c2c) fep_china_uni_candidate_pane

0x8f48,	// (0x00033c40) fep_china_uni_entry_pane

0x8f58,	// (0x00033c50) popup_fep_china_uni_window_g1

0x8f74,	// (0x00033c6c) fep_china_uni_entry_pane_g1

0x8f7c,	// (0x00033c74) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003a41a) fep_china_uni_entry_pane_g

0x8f84,	// (0x00033c7c) fep_entry_item_pane

0x8f8e,	// (0x00033c86) fep_candidate_item_pane

0x8f96,	// (0x00033c8e) fep_china_uni_candidate_pane_g1

0x8f9e,	// (0x00033c96) fep_china_uni_candidate_pane_g2

0x8fa6,	// (0x00033c9e) fep_china_uni_candidate_pane_g3

0x8fae,	// (0x00033ca6) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003a41f) fep_china_uni_candidate_pane_g

0x76f2,	// (0x000323ea) fep_entry_item_pane_g1

0x8fb6,	// (0x00033cae) fep_entry_item_pane_t1_ParamLimits

0x8fb6,	// (0x00033cae) fep_entry_item_pane_t1

0x8fcc,	// (0x00033cc4) fep_candidate_item_pane_t1_ParamLimits

0x8fcc,	// (0x00033cc4) fep_candidate_item_pane_t1

0x8fe1,	// (0x00033cd9) fep_candidate_item_pane_t2_ParamLimits

0x8fe1,	// (0x00033cd9) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003a428) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003a428) fep_candidate_item_pane_t

0x77dc,	// (0x000324d4) list_highlight_pane_cp31_ParamLimits

0x77dc,	// (0x000324d4) list_highlight_pane_cp31

0x8ff3,	// (0x00033ceb) level_1_signal_lsc

0x8ffc,	// (0x00033cf4) level_2_signal_lsc

0x9005,	// (0x00033cfd) level_3_signal_lsc

0x900e,	// (0x00033d06) level_4_signal_lsc

0x9017,	// (0x00033d0f) level_5_signal_lsc

0x9020,	// (0x00033d18) level_6_signal_lsc

0x9029,	// (0x00033d21) level_7_signal_lsc

0x9029,	// (0x00033d21) level_1_battery_lsc

0x9032,	// (0x00033d2a) level_2_battery_lsc

0x903b,	// (0x00033d33) level_3_battery_lsc

0x9044,	// (0x00033d3c) level_4_battery_lsc

0x904d,	// (0x00033d45) level_5_battery_lsc

0x9056,	// (0x00033d4e) level_6_battery_lsc

0x8ff3,	// (0x00033ceb) level_7_battery_lsc

0x905f,	// (0x00033d57) scroll_handle_focus_pane_g1

0x9068,	// (0x00033d60) scroll_handle_focus_pane_g2

0x9071,	// (0x00033d69) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003a42d) scroll_handle_focus_pane_g

0x5706,	// (0x000303fe) list_single_2graphic_pane_g1_ParamLimits

0x5706,	// (0x000303fe) list_single_2graphic_pane_g1

0x4dfb,	// (0x0002faf3) list_single_2graphic_pane_g2_ParamLimits

0x4dfb,	// (0x0002faf3) list_single_2graphic_pane_g2

0x4d81,	// (0x0002fa79) list_single_2graphic_pane_g3_ParamLimits

0x4d81,	// (0x0002fa79) list_single_2graphic_pane_g3

0x5712,	// (0x0003040a) list_single_2graphic_pane_g4_ParamLimits

0x5712,	// (0x0003040a) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003a434) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003a434) list_single_2graphic_pane_g

0x571e,	// (0x00030416) list_single_2graphic_pane_t1_ParamLimits

0x571e,	// (0x00030416) list_single_2graphic_pane_t1

0x574c,	// (0x00030444) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x574c,	// (0x00030444) list_double2_graphic_large_graphic_pane_g1

0x4ea0,	// (0x0002fb98) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4ea0,	// (0x0002fb98) list_double2_graphic_large_graphic_pane_g2

0x4eb1,	// (0x0002fba9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4eb1,	// (0x0002fba9) list_double2_graphic_large_graphic_pane_g3

0x575c,	// (0x00030454) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x575c,	// (0x00030454) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003a43d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003a43d) list_double2_graphic_large_graphic_pane_g

0x5768,	// (0x00030460) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5768,	// (0x00030460) list_double2_graphic_large_graphic_pane_t1

0x577e,	// (0x00030476) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x577e,	// (0x00030476) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003a446) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003a446) list_double2_graphic_large_graphic_pane_t

0x91b9,	// (0x00033eb1) popup_fast_swap_window_ParamLimits

0x91b9,	// (0x00033eb1) popup_fast_swap_window

0x91d5,	// (0x00033ecd) popup_side_volume_key_window

0x91f1,	// (0x00033ee9) stacon_top_pane

0x91fb,	// (0x00033ef3) status_pane_ParamLimits

0x91fb,	// (0x00033ef3) status_pane

0x9209,	// (0x00033f01) status_small_pane

0x76fc,	// (0x000323f4) control_pane

0x76fc,	// (0x000323f4) stacon_bottom_pane

0x878e,	// (0x00033486) scroll_pane_cp121

0x8785,	// (0x0003347d) set_content_pane

0x907a,	// (0x00033d72) bg_active_tab_pane_g1_cp1

0x9083,	// (0x00033d7b) bg_active_tab_pane_g2_cp1

0x908c,	// (0x00033d84) bg_active_tab_pane_g3_cp1

0x907a,	// (0x00033d72) bg_passive_tab_pane_g1_cp1

0x9083,	// (0x00033d7b) bg_passive_tab_pane_g2_cp1

0x908c,	// (0x00033d84) bg_passive_tab_pane_g3_cp1

0x9095,	// (0x00033d8d) bg_active_tab_pane_g1_cp2

0x9083,	// (0x00033d7b) bg_active_tab_pane_g2_cp2

0x909e,	// (0x00033d96) bg_active_tab_pane_g3_cp2

0x9095,	// (0x00033d8d) bg_passive_tab_pane_g1_cp2

0x9083,	// (0x00033d7b) bg_passive_tab_pane_g2_cp2

0x909e,	// (0x00033d96) bg_passive_tab_pane_g3_cp2

0x90a7,	// (0x00033d9f) bg_active_tab_pane_g1_cp3

0x9083,	// (0x00033d7b) bg_active_tab_pane_g2_cp3

0x90b0,	// (0x00033da8) bg_active_tab_pane_g3_cp3

0x90a7,	// (0x00033d9f) bg_passive_tab_pane_g1_cp3

0x9083,	// (0x00033d7b) bg_passive_tab_pane_g2_cp3

0x90b0,	// (0x00033da8) bg_passive_tab_pane_g3_cp3

0x90b9,	// (0x00033db1) bg_active_tab_pane_g1_cp4

0x9083,	// (0x00033d7b) bg_active_tab_pane_g2_cp4

0x90c4,	// (0x00033dbc) bg_active_tab_pane_g3_cp4

0x90b9,	// (0x00033db1) bg_passive_tab_pane_g1_cp4

0x9083,	// (0x00033d7b) bg_passive_tab_pane_g2_cp4

0x90c4,	// (0x00033dbc) bg_passive_tab_pane_g3_cp4

0x910d,	// (0x00033e05) bg_active_tab_pane_g1_cp5

0x9083,	// (0x00033d7b) bg_active_tab_pane_g2_cp5

0x9116,	// (0x00033e0e) bg_active_tab_pane_g3_cp5

0x910d,	// (0x00033e05) bg_passive_tab_pane_g1_cp5

0x9083,	// (0x00033d7b) bg_passive_tab_pane_g2_cp5

0x9116,	// (0x00033e0e) bg_passive_tab_pane_g3_cp5

0x911f,	// (0x00033e17) list_set_graphic_pane_ParamLimits

0x911f,	// (0x00033e17) list_set_graphic_pane

0x76fc,	// (0x000323f4) bg_set_opt_pane_cp4

0x913c,	// (0x00033e34) list_set_graphic_pane_g1_ParamLimits

0x913c,	// (0x00033e34) list_set_graphic_pane_g1

0x9148,	// (0x00033e40) list_set_graphic_pane_g2_ParamLimits

0x9148,	// (0x00033e40) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003a44b) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003a44b) list_set_graphic_pane_g

0x0009,

0xfac8,	// (0x0003a7c0) volume_small_pane_cp_g

0x916c,	// (0x00033e64) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x916c,	// (0x00033e64) list_double2_large_graphic_pane_g1_cp2

0x9178,	// (0x00033e70) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9178,	// (0x00033e70) list_double2_large_graphic_pane_g2_cp2

0x9189,	// (0x00033e81) list_double2_large_graphic_pane_g3_cp2

0x9191,	// (0x00033e89) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9191,	// (0x00033e89) list_double2_large_graphic_pane_t1_cp2

0x91a7,	// (0x00033e9f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91a7,	// (0x00033e9f) list_double2_large_graphic_pane_t2_cp2

0xad77,	// (0x00035a6f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad77,	// (0x00035a6f) list_double_large_graphic_pane_g1_cp2

0xad88,	// (0x00035a80) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad88,	// (0x00035a80) list_double_large_graphic_pane_g2_cp2

0x9322,	// (0x0003401a) list_double_large_graphic_pane_g3_cp2

0xad99,	// (0x00035a91) list_double_large_graphic_pane_g4_cp

0xada1,	// (0x00035a99) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xada1,	// (0x00035a99) list_double_large_graphic_pane_t1_cp2

0xadb8,	// (0x00035ab0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadb8,	// (0x00035ab0) list_double_large_graphic_pane_t2_cp2

0x9214,	// (0x00033f0c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9214,	// (0x00033f0c) list_double2_graphic_pane_g1_cp2

0x9222,	// (0x00033f1a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9222,	// (0x00033f1a) list_double2_graphic_pane_g2_cp2

0x9233,	// (0x00033f2b) list_double2_graphic_pane_g3_cp2

0x923d,	// (0x00033f35) list_double2_graphic_pane_t1_cp2_ParamLimits

0x923d,	// (0x00033f35) list_double2_graphic_pane_t1_cp2

0x9253,	// (0x00033f4b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9253,	// (0x00033f4b) list_double2_graphic_pane_t2_cp2

0x9265,	// (0x00033f5d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9265,	// (0x00033f5d) list_single_number_heading_pane_g1_cp2

0x9271,	// (0x00033f69) list_single_number_heading_pane_g2_cp2

0x9279,	// (0x00033f71) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9279,	// (0x00033f71) list_single_number_heading_pane_t1_cp2

0x928f,	// (0x00033f87) list_single_number_heading_pane_t2_cp2_ParamLimits

0x928f,	// (0x00033f87) list_single_number_heading_pane_t2_cp2

0x92a1,	// (0x00033f99) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92a1,	// (0x00033f99) list_single_number_heading_pane_t3_cp2

0x9265,	// (0x00033f5d) list_single_heading_pane_g1_cp2_ParamLimits

0x9265,	// (0x00033f5d) list_single_heading_pane_g1_cp2

0x9271,	// (0x00033f69) list_single_heading_pane_g2_cp2

0x9279,	// (0x00033f71) list_single_heading_pane_t1_cp2_ParamLimits

0x9279,	// (0x00033f71) list_single_heading_pane_t1_cp2

0xab73,	// (0x0003586b) list_single_heading_pane_t2_cp2_ParamLimits

0xab73,	// (0x0003586b) list_single_heading_pane_t2_cp2

0xaabb,	// (0x000357b3) list_double_graphic_pane_g1_cp2_ParamLimits

0xaabb,	// (0x000357b3) list_double_graphic_pane_g1_cp2

0xaac7,	// (0x000357bf) list_double_graphic_pane_g2_cp2_ParamLimits

0xaac7,	// (0x000357bf) list_double_graphic_pane_g2_cp2

0xaad6,	// (0x000357ce) list_double_graphic_pane_g3_cp2

0xaade,	// (0x000357d6) list_double_graphic_pane_t1_cp2_ParamLimits

0xaade,	// (0x000357d6) list_double_graphic_pane_t1_cp2

0xaaf4,	// (0x000357ec) list_double_graphic_pane_t2_cp2_ParamLimits

0xaaf4,	// (0x000357ec) list_double_graphic_pane_t2_cp2

0x9316,	// (0x0003400e) list_double_number_pane_g1_cp2_ParamLimits

0x9316,	// (0x0003400e) list_double_number_pane_g1_cp2

0x9322,	// (0x0003401a) list_double_number_pane_g2_cp2

0xaa7f,	// (0x00035777) list_double_number_pane_t1_cp2_ParamLimits

0xaa7f,	// (0x00035777) list_double_number_pane_t1_cp2

0xaa93,	// (0x0003578b) list_double_number_pane_t2_cp2_ParamLimits

0xaa93,	// (0x0003578b) list_double_number_pane_t2_cp2

0xaaa9,	// (0x000357a1) list_double_number_pane_t3_cp2_ParamLimits

0xaaa9,	// (0x000357a1) list_double_number_pane_t3_cp2

0xa968,	// (0x00035660) list_single_graphic_pane_g1_cp2_ParamLimits

0xa968,	// (0x00035660) list_single_graphic_pane_g1_cp2

0x937a,	// (0x00034072) list_single_graphic_pane_g2_cp2_ParamLimits

0x937a,	// (0x00034072) list_single_graphic_pane_g2_cp2

0x9386,	// (0x0003407e) list_single_graphic_pane_g3_cp2

0xa93e,	// (0x00035636) list_single_graphic_pane_t1_cp2_ParamLimits

0xa93e,	// (0x00035636) list_single_graphic_pane_t1_cp2

0x937a,	// (0x00034072) list_single_number_pane_g1_cp2_ParamLimits

0x937a,	// (0x00034072) list_single_number_pane_g1_cp2

0x9386,	// (0x0003407e) list_single_number_pane_g2_cp2

0xa93e,	// (0x00035636) list_single_number_pane_t1_cp2_ParamLimits

0xa93e,	// (0x00035636) list_single_number_pane_t1_cp2

0xa954,	// (0x0003564c) list_single_number_pane_t2_cp2_ParamLimits

0xa954,	// (0x0003564c) list_single_number_pane_t2_cp2

0x9178,	// (0x00033e70) list_double2_pane_g1_cp2_ParamLimits

0x9178,	// (0x00033e70) list_double2_pane_g1_cp2

0x9189,	// (0x00033e81) list_double2_pane_g2_cp2

0x92ee,	// (0x00033fe6) list_double2_pane_t1_cp2_ParamLimits

0x92ee,	// (0x00033fe6) list_double2_pane_t1_cp2

0x9304,	// (0x00033ffc) list_double2_pane_t2_cp2_ParamLimits

0x9304,	// (0x00033ffc) list_double2_pane_t2_cp2

0x9316,	// (0x0003400e) list_double_pane_g1_cp2_ParamLimits

0x9316,	// (0x0003400e) list_double_pane_g1_cp2

0x9322,	// (0x0003401a) list_double_pane_g2_cp2

0x932a,	// (0x00034022) list_double_pane_t1_cp2_ParamLimits

0x932a,	// (0x00034022) list_double_pane_t1_cp2

0x9340,	// (0x00034038) list_double_pane_t2_cp2_ParamLimits

0x9340,	// (0x00034038) list_double_pane_t2_cp2

0x936a,	// (0x00034062) list_single_pane_cp2_g3

0x937a,	// (0x00034072) list_single_pane_g1_cp2_ParamLimits

0x937a,	// (0x00034072) list_single_pane_g1_cp2

0x9386,	// (0x0003407e) list_single_pane_g2_cp2

0x938e,	// (0x00034086) list_single_pane_t1_cp2_ParamLimits

0x938e,	// (0x00034086) list_single_pane_t1_cp2

0x93a6,	// (0x0003409e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93a6,	// (0x0003409e) list_single_large_graphic_pane_g1_cp2

0x93b2,	// (0x000340aa) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x93b2,	// (0x000340aa) list_single_large_graphic_pane_g2_cp2

0x93be,	// (0x000340b6) list_single_large_graphic_pane_g3_cp2

0x93c6,	// (0x000340be) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x93c6,	// (0x000340be) list_single_large_graphic_pane_g4_cp1

0x93e0,	// (0x000340d8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x93e0,	// (0x000340d8) list_single_large_graphic_pane_t1_cp2

0xa90a,	// (0x00035602) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa90a,	// (0x00035602) list_single_graphic_heading_pane_g1_cp2

0xa8d7,	// (0x000355cf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8d7,	// (0x000355cf) list_single_graphic_heading_pane_g4_cp2

0x9386,	// (0x0003407e) list_single_graphic_heading_pane_g5_cp2

0xa916,	// (0x0003560e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa916,	// (0x0003560e) list_single_graphic_heading_pane_t1_cp2

0xa92c,	// (0x00035624) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa92c,	// (0x00035624) list_single_graphic_heading_pane_t2_cp2

0xa8cb,	// (0x000355c3) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8cb,	// (0x000355c3) list_single_2graphic_pane_g1_cp2

0xa8d7,	// (0x000355cf) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8d7,	// (0x000355cf) list_single_2graphic_pane_g2_cp2

0x9386,	// (0x0003407e) list_single_2graphic_pane_g3_cp2

0xa8e8,	// (0x000355e0) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa8e8,	// (0x000355e0) list_single_2graphic_pane_g4_cp2

0xa8f4,	// (0x000355ec) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa8f4,	// (0x000355ec) list_single_2graphic_pane_t1_cp2

0x76f2,	// (0x000323ea) list_highlight_pane_g10_cp1

0xa4a3,	// (0x0003519b) list_highlight_pane_g1_cp1

0xa4ab,	// (0x000351a3) list_highlight_pane_g2_cp1

0xa4b3,	// (0x000351ab) list_highlight_pane_g3_cp1

0xa4bb,	// (0x000351b3) list_highlight_pane_g4_cp1

0xa4c3,	// (0x000351bb) list_highlight_pane_g5_cp1

0xa4cb,	// (0x000351c3) list_highlight_pane_g6_cp1

0xa4d3,	// (0x000351cb) list_highlight_pane_g7_cp1

0xa4db,	// (0x000351d3) list_highlight_pane_g8_cp1

0xa4e3,	// (0x000351db) list_highlight_pane_g9_cp1

0xa3c3,	// (0x000350bb) form_field_slider_pane_t3

0xa3d1,	// (0x000350c9) form_field_slider_pane_t4

0xa3df,	// (0x000350d7) slider_form_pane_ParamLimits

0xa3df,	// (0x000350d7) slider_form_pane

0x76fc,	// (0x000323f4) control_abbreviations

0x76fc,	// (0x000323f4) control_conventions

0x76fc,	// (0x000323f4) control_definitions

0x76fc,	// (0x000323f4) format_table_attribute

0xabbd,	// (0x000358b5) bg_popup_preview_window_pane_g9

0x76fc,	// (0x000323f4) format_table_data2

0x76fc,	// (0x000323f4) format_table_data3

0x76fc,	// (0x000323f4) format_table_data_example

0x0008,

0x76fc,	// (0x000323f4) intro_purpose

0xf8ef,	// (0x0003a5e7) bg_popup_preview_window_pane_g

0x76fc,	// (0x000323f4) texts_category

0x76fc,	// (0x000323f4) texts_graphics

0x93f6,	// (0x000340ee) text_digital

0x9405,	// (0x000340fd) text_primary

0x9414,	// (0x0003410c) text_primary_small

0x9423,	// (0x0003411b) text_secondary

0x9432,	// (0x0003412a) text_title

0xb304,	// (0x00035ffc) bg_passive_tab_pane_g1_cp3_srt

0x9083,	// (0x00033d7b) bg_passive_tab_pane_g2_cp3_srt

0xb30d,	// (0x00036005) bg_passive_tab_pane_g3_cp3_srt

0x77dc,	// (0x000324d4) bg_active_tab_pane_cp3_srt_ParamLimits

0x77dc,	// (0x000324d4) bg_active_tab_pane_cp3_srt

0xb316,	// (0x0003600e) tabs_4_active_pane_srt_g1

0xb31e,	// (0x00036016) tabs_4_active_pane_srt_t1_ParamLimits

0xb31e,	// (0x00036016) tabs_4_active_pane_srt_t1

0xb304,	// (0x00035ffc) bg_active_tab_pane_g1_cp3_copy1

0x9083,	// (0x00033d7b) bg_active_tab_pane_g2_cp3_copy1

0xb30d,	// (0x00036005) bg_active_tab_pane_g3_cp3_copy1

0x77dc,	// (0x000324d4) tabs_2_long_active_pane_srt_ParamLimits

0x77dc,	// (0x000324d4) tabs_2_long_active_pane_srt

0x77dc,	// (0x000324d4) tabs_2_long_passive_pane_srt_ParamLimits

0x77dc,	// (0x000324d4) tabs_2_long_passive_pane_srt

0x898f,	// (0x00033687) bg_passive_tab_pane_cp4_srt_ParamLimits

0x898f,	// (0x00033687) bg_passive_tab_pane_cp4_srt

0xaff8,	// (0x00035cf0) bg_passive_tab_pane_g1_cp4_srt

0x9083,	// (0x00033d7b) bg_passive_tab_pane_g2_cp4_srt

0xb001,	// (0x00035cf9) bg_passive_tab_pane_g3_cp4_srt

0x896e,	// (0x00033666) bg_active_tab_pane_cp4_srt_ParamLimits

0x896e,	// (0x00033666) bg_active_tab_pane_cp4_srt

0xb00a,	// (0x00035d02) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb00a,	// (0x00035d02) tabs_2_long_active_pane_srt_t1

0xaff8,	// (0x00035cf0) bg_active_tab_pane_g1_cp4_srt

0x9083,	// (0x00033d7b) bg_active_tab_pane_g2_cp4_srt

0xb001,	// (0x00035cf9) bg_active_tab_pane_g3_cp4_srt

0x81b7,	// (0x00032eaf) tabs_3_long_active_pane_srt_ParamLimits

0x81b7,	// (0x00032eaf) tabs_3_long_active_pane_srt

0x81b7,	// (0x00032eaf) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x81b7,	// (0x00032eaf) tabs_3_long_passive_pane_cp_srt

0x81b7,	// (0x00032eaf) tabs_3_long_passive_pane_srt_ParamLimits

0x81b7,	// (0x00032eaf) tabs_3_long_passive_pane_srt

0x898f,	// (0x00033687) bg_passive_tab_pane_cp5_srt_ParamLimits

0x898f,	// (0x00033687) bg_passive_tab_pane_cp5_srt

0x910d,	// (0x00033e05) bg_passive_tab_pane_g1_cp5_srt

0x9083,	// (0x00033d7b) bg_passive_tab_pane_g2_cp5_srt

0x9116,	// (0x00033e0e) bg_passive_tab_pane_g3_cp5_srt

0x896e,	// (0x00033666) bg_active_tab_pane_cp5_srt_ParamLimits

0x896e,	// (0x00033666) bg_active_tab_pane_cp5_srt

0xafe6,	// (0x00035cde) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafe6,	// (0x00035cde) tabs_3_long_active_pane_srt_t1

0x910d,	// (0x00033e05) bg_active_tab_pane_g1_cp5_srt

0x9083,	// (0x00033d7b) bg_active_tab_pane_g2_cp5_srt

0x9116,	// (0x00033e0e) bg_active_tab_pane_g3_cp5_srt

0xafd8,	// (0x00035cd0) navi_text_pane_srt_t1

0xafd0,	// (0x00035cc8) navi_icon_pane_srt_g1

0x95fb,	// (0x000342f3) midp_editing_number_pane_srt

0x9441,	// (0x00034139) midp_ticker_pane_srt

0x9603,	// (0x000342fb) midp_ticker_pane_srt_g1

0x960b,	// (0x00034303) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003a46a) midp_ticker_pane_srt_g

0x9613,	// (0x0003430b) midp_ticker_pane_srt_t1

0xafc1,	// (0x00035cb9) midp_editing_number_pane_t1_copy1

0x898f,	// (0x00033687) listscroll_midp_pane

0x898f,	// (0x00033687) midp_form_pane

0x94ad,	// (0x000341a5) midp_info_popup_window_ParamLimits

0x94ad,	// (0x000341a5) midp_info_popup_window

0x8857,	// (0x0003354f) bg_popup_sub_pane_cp50_ParamLimits

0x8857,	// (0x0003354f) bg_popup_sub_pane_cp50

0xa0db,	// (0x00034dd3) listscroll_midp_info_pane_ParamLimits

0xa0db,	// (0x00034dd3) listscroll_midp_info_pane

0xa0c3,	// (0x00034dbb) listscroll_form_midp_pane_ParamLimits

0xa0c3,	// (0x00034dbb) listscroll_form_midp_pane

0xa0cf,	// (0x00034dc7) scroll_bar_cp050

0xa0a3,	// (0x00034d9b) list_midp_pane

0xbd59,	// (0x00036a51) signal_pane_g2_cp

0x9fdd,	// (0x00034cd5) listscroll_midp_info_pane_t1_ParamLimits

0x9fdd,	// (0x00034cd5) listscroll_midp_info_pane_t1

0x9ff5,	// (0x00034ced) listscroll_midp_info_pane_t2_ParamLimits

0x9ff5,	// (0x00034ced) listscroll_midp_info_pane_t2

0xa033,	// (0x00034d2b) listscroll_midp_info_pane_t3_ParamLimits

0xa033,	// (0x00034d2b) listscroll_midp_info_pane_t3

0xa06d,	// (0x00034d65) listscroll_midp_info_pane_t4_ParamLimits

0xa06d,	// (0x00034d65) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0003a522) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0003a522) listscroll_midp_info_pane_t

0x891b,	// (0x00033613) scroll_pane_cp21

0x9f7b,	// (0x00034c73) form_midp_field_choice_group_pane

0x9f84,	// (0x00034c7c) form_midp_field_text_pane

0x9fc3,	// (0x00034cbb) form_midp_field_time_pane

0x9fcb,	// (0x00034cc3) form_midp_gauge_slider_pane

0x9fd4,	// (0x00034ccc) form_midp_gauge_wait_pane

0x76fc,	// (0x000323f4) form_midp_image_pane

0x62d8,	// (0x00030fd0) list_single_midp_pane_ParamLimits

0x62d8,	// (0x00030fd0) list_single_midp_pane

0x9f33,	// (0x00034c2b) form_midp_field_text_pane_t1

0x9cfd,	// (0x000349f5) input_focus_pane_cp050

0x9f6a,	// (0x00034c62) list_midp_form_text_pane

0x9f02,	// (0x00034bfa) form_midp_field_choice_group_pane_t1

0x9f10,	// (0x00034c08) input_focus_pane_cp051

0x9f24,	// (0x00034c1c) list_midp_choice_pane

0x76fc,	// (0x000323f4) status_idle_pane

0x9ee6,	// (0x00034bde) form_midp_field_time_pane_t1

0x76f2,	// (0x000323ea) wait_anim_pane_g2_copy1

0x9ef4,	// (0x00034bec) form_midp_field_time_pane_t2

0x0001,

0x955b,	// (0x00034253) aid_navinavi_width_2_pane

0xf825,	// (0x0003a51d) form_midp_field_time_pane_t

0x76fc,	// (0x000323f4) input_focus_pane_cp052

0x76fc,	// (0x000323f4) bg_input_focus_pane_cp040

0x9ea6,	// (0x00034b9e) form_midp_gauge_slider_pane_t1

0x9eb4,	// (0x00034bac) form_midp_gauge_slider_pane_t2

0x9ec2,	// (0x00034bba) form_midp_gauge_slider_pane_t3

0x9ed0,	// (0x00034bc8) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0003a514) form_midp_gauge_slider_pane_t

0x9ede,	// (0x00034bd6) form_midp_slider_pane

0x77dc,	// (0x000324d4) bg_input_focus_pane_cp041_ParamLimits

0x77dc,	// (0x000324d4) bg_input_focus_pane_cp041

0x9e73,	// (0x00034b6b) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e73,	// (0x00034b6b) form_midp_gauge_wait_pane_t1

0x9e85,	// (0x00034b7d) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e85,	// (0x00034b7d) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0003a50f) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0003a50f) form_midp_gauge_wait_pane_t

0x9e97,	// (0x00034b8f) form_midp_wait_pane_ParamLimits

0x9e97,	// (0x00034b8f) form_midp_wait_pane

0x9e3d,	// (0x00034b35) form_midp_image_pane_g1

0x9e46,	// (0x00034b3e) form_midp_image_pane_t1

0x9e55,	// (0x00034b4d) form_midp_image_pane_t2

0x9e64,	// (0x00034b5c) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0003a508) form_midp_image_pane_t

0x9e34,	// (0x00034b2c) list_single_midp_pane_g1

0x62c9,	// (0x00030fc1) list_single_midp_pane_t1

0x9e0c,	// (0x00034b04) list_midp_form_item_pane_ParamLimits

0x9e0c,	// (0x00034b04) list_midp_form_item_pane

0x9503,	// (0x000341fb) list_midp_form_item_pane_t1

0x9512,	// (0x0003420a) midp_ticker_pane_g1

0x951e,	// (0x00034216) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003a450) midp_ticker_pane_g

0x952a,	// (0x00034222) midp_ticker_pane_t1

0xb212,	// (0x00035f0a) midp_editing_number_pane_t1

0xb1f0,	// (0x00035ee8) midp_editing_number_pane

0xb1ff,	// (0x00035ef7) midp_ticker_pane

0xafb1,	// (0x00035ca9) ai_message_heading_pane

0x76fc,	// (0x000323f4) bg_popup_window_pane_cp14

0xafb9,	// (0x00035cb1) listscroll_ai_message_pane

0xaf3b,	// (0x00035c33) ai_message_heading_pane_g1_ParamLimits

0xaf3b,	// (0x00035c33) ai_message_heading_pane_g1

0xaf47,	// (0x00035c3f) ai_message_heading_pane_g2_ParamLimits

0xaf47,	// (0x00035c3f) ai_message_heading_pane_g2

0xaf53,	// (0x00035c4b) ai_message_heading_pane_g3_ParamLimits

0xaf53,	// (0x00035c4b) ai_message_heading_pane_g3

0xaf5f,	// (0x00035c57) ai_message_heading_pane_g4_ParamLimits

0xaf5f,	// (0x00035c57) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0003a649) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0003a649) ai_message_heading_pane_g

0xaf6b,	// (0x00035c63) ai_message_heading_pane_t1_ParamLimits

0xaf6b,	// (0x00035c63) ai_message_heading_pane_t1

0xaf85,	// (0x00035c7d) ai_message_heading_pane_t2_ParamLimits

0xaf85,	// (0x00035c7d) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0003a652) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0003a652) ai_message_heading_pane_t

0xaf97,	// (0x00035c8f) bg_popup_heading_pane_cp1_ParamLimits

0xaf97,	// (0x00035c8f) bg_popup_heading_pane_cp1

0xaf29,	// (0x00035c21) list_ai_message_pane_ParamLimits

0xaf29,	// (0x00035c21) list_ai_message_pane

0x891b,	// (0x00033613) scroll_pane_cp10

0xaec5,	// (0x00035bbd) list_ai_message_pane_g1

0xaecd,	// (0x00035bc5) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0003a626) list_ai_message_pane_g

0xaed5,	// (0x00035bcd) list_ai_message_pane_t1_ParamLimits

0xaed5,	// (0x00035bcd) list_ai_message_pane_t1

0xaeea,	// (0x00035be2) list_ai_message_pane_t2_ParamLimits

0xaeea,	// (0x00035be2) list_ai_message_pane_t2

0xaeff,	// (0x00035bf7) list_ai_message_pane_t3_ParamLimits

0xaeff,	// (0x00035bf7) list_ai_message_pane_t3

0xaf14,	// (0x00035c0c) list_ai_message_pane_t4_ParamLimits

0xaf14,	// (0x00035c0c) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0003a62b) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0003a62b) list_ai_message_pane_t

0xaeb0,	// (0x00035ba8) cell_ai_soft_ind_pane_ParamLimits

0xaeb0,	// (0x00035ba8) cell_ai_soft_ind_pane

0x953c,	// (0x00034234) cell_ai_soft_ind_pane_g1_ParamLimits

0x953c,	// (0x00034234) cell_ai_soft_ind_pane_g1

0x76fc,	// (0x000323f4) grid_highlight_cp1

0x9549,	// (0x00034241) text_secondary_cp56_ParamLimits

0x9549,	// (0x00034241) text_secondary_cp56

0xae85,	// (0x00035b7d) example_general_pane_ParamLimits

0xae85,	// (0x00035b7d) example_general_pane

0xae91,	// (0x00035b89) example_parent_pane_g1_ParamLimits

0xae91,	// (0x00035b89) example_parent_pane_g1

0xae9d,	// (0x00035b95) example_parent_pane_t1_ParamLimits

0xae9d,	// (0x00035b95) example_parent_pane_t1

0x5e79,	// (0x00030b71) popup_preview_text_window_ParamLimits

0x5e79,	// (0x00030b71) popup_preview_text_window

0x9372,	// (0x0003406a) list_single_pane_cp2_g4

0x826d,	// (0x00032f65) bg_popup_preview_window_pane_ParamLimits

0x826d,	// (0x00032f65) bg_popup_preview_window_pane

0xabc5,	// (0x000358bd) popup_preview_text_window_t1_ParamLimits

0xabc5,	// (0x000358bd) popup_preview_text_window_t1

0xabe3,	// (0x000358db) popup_preview_text_window_t2_ParamLimits

0xabe3,	// (0x000358db) popup_preview_text_window_t2

0xac38,	// (0x00035930) popup_preview_text_window_t3_ParamLimits

0xac38,	// (0x00035930) popup_preview_text_window_t3

0xac7d,	// (0x00035975) popup_preview_text_window_t4_ParamLimits

0xac7d,	// (0x00035975) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0003a5fa) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0003a5fa) popup_preview_text_window_t

0xacfb,	// (0x000359f3) scroll_pane_cp11

0x9c89,	// (0x00034981) bg_popup_preview_window_pane_g1

0xab85,	// (0x0003587d) bg_popup_preview_window_pane_g2

0xab8d,	// (0x00035885) bg_popup_preview_window_pane_g3

0xab95,	// (0x0003588d) bg_popup_preview_window_pane_g4

0xab9d,	// (0x00035895) bg_popup_preview_window_pane_g5

0xaba5,	// (0x0003589d) bg_popup_preview_window_pane_g6

0xabad,	// (0x000358a5) bg_popup_preview_window_pane_g7

0xabb5,	// (0x000358ad) bg_popup_preview_window_pane_g8

0x48d0,	// (0x0002f5c8) aid_popup_width_pane

0x5e57,	// (0x00030b4f) popup_midp_note_alarm_window_ParamLimits

0x5e57,	// (0x00030b4f) popup_midp_note_alarm_window

0x879f,	// (0x00033497) data_form_pane_ParamLimits

0x52b2,	// (0x0002ffaa) form_field_data_pane_g1

0x52bc,	// (0x0002ffb4) form_field_data_pane_t1_ParamLimits

0x87ab,	// (0x000334a3) input_focus_pane_ParamLimits

0x52d4,	// (0x0002ffcc) data_form_wide_pane_ParamLimits

0x52e5,	// (0x0002ffdd) form_field_data_wide_pane_g1

0x52f1,	// (0x0002ffe9) form_field_data_wide_pane_t1_ParamLimits

0x851c,	// (0x00033214) input_focus_pane_cp6_ParamLimits

0x88c8,	// (0x000335c0) input_popup_find_pane_g1_ParamLimits

0x88c8,	// (0x000335c0) input_popup_find_pane_g1

0x5567,	// (0x0003025f) aid_navi_side_left_pane

0x557c,	// (0x00030274) aid_navi_side_right_pane

0xa59e,	// (0x00035296) bg_popup_window_pane_cp30_ParamLimits

0xa59e,	// (0x00035296) bg_popup_window_pane_cp30

0xa618,	// (0x00035310) popup_midp_note_alarm_window_g1_ParamLimits

0xa618,	// (0x00035310) popup_midp_note_alarm_window_g1

0xa648,	// (0x00035340) popup_midp_note_alarm_window_t1_ParamLimits

0xa648,	// (0x00035340) popup_midp_note_alarm_window_t1

0xa6e9,	// (0x000353e1) popup_midp_note_alarm_window_t2_ParamLimits

0xa6e9,	// (0x000353e1) popup_midp_note_alarm_window_t2

0xa797,	// (0x0003548f) popup_midp_note_alarm_window_t3_ParamLimits

0xa797,	// (0x0003548f) popup_midp_note_alarm_window_t3

0xa7c9,	// (0x000354c1) popup_midp_note_alarm_window_t4_ParamLimits

0xa7c9,	// (0x000354c1) popup_midp_note_alarm_window_t4

0xa7ef,	// (0x000354e7) popup_midp_note_alarm_window_t5_ParamLimits

0xa7ef,	// (0x000354e7) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0003a597) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0003a597) popup_midp_note_alarm_window_t

0xa89b,	// (0x00035593) wait_bar_pane_cp1_ParamLimits

0xa89b,	// (0x00035593) wait_bar_pane_cp1

0x76fc,	// (0x000323f4) wait_anim_pane_copy1

0x76fc,	// (0x000323f4) wait_border_pane_copy1

0xa284,	// (0x00034f7c) wait_border_pane_g1_copy1

0x530b,	// (0x00030003) form_field_popup_pane_g1

0x5313,	// (0x0003000b) form_field_popup_pane_t1_ParamLimits

0x87ab,	// (0x000334a3) input_focus_pane_cp7_ParamLimits

0x87d9,	// (0x000334d1) list_form_pane_ParamLimits

0x532b,	// (0x00030023) form_field_popup_wide_pane_g1

0x5333,	// (0x0003002b) form_field_popup_wide_pane_t1_ParamLimits

0x87ab,	// (0x000334a3) input_focus_pane_cp8_ParamLimits

0x87e5,	// (0x000334dd) list_form_wide_pane_ParamLimits

0xb39c,	// (0x00036094) aid_size_cell_graphic_pane

0x53bd,	// (0x000300b5) data_form_pane_t1_ParamLimits

0x655e,	// (0x00031256) data_form_wide_pane_t1_ParamLimits

0x9856,	// (0x0003454e) bg_status_flat_pane

0x773c,	// (0x00032434) title_pane_t1_ParamLimits

0x77a4,	// (0x0003249c) title_pane_t2_ParamLimits

0x77ca,	// (0x000324c2) title_pane_t3_ParamLimits

0xf557,	// (0x0003a24f) title_pane_t_ParamLimits

0x8d9a,	// (0x00033a92) level_1_signal_ParamLimits

0x8dac,	// (0x00033aa4) level_2_signal_ParamLimits

0x8dbf,	// (0x00033ab7) level_3_signal_ParamLimits

0x8dd2,	// (0x00033aca) level_4_signal_ParamLimits

0x8de5,	// (0x00033add) level_5_signal_ParamLimits

0x8df8,	// (0x00033af0) level_6_signal_ParamLimits

0x8e0b,	// (0x00033b03) level_7_signal_ParamLimits

0x8d9a,	// (0x00033a92) level_1_battery_ParamLimits

0x8dac,	// (0x00033aa4) level_2_battery_ParamLimits

0x8dbf,	// (0x00033ab7) level_3_battery_ParamLimits

0x8dd2,	// (0x00033aca) level_4_battery_ParamLimits

0x8de5,	// (0x00033add) level_5_battery_ParamLimits

0x8df8,	// (0x00033af0) level_6_battery_ParamLimits

0x8e0b,	// (0x00033b03) level_7_battery_ParamLimits

0xa4a3,	// (0x0003519b) bg_status_flat_pane_g1

0xa4ab,	// (0x000351a3) bg_status_flat_pane_g2

0xa4b3,	// (0x000351ab) bg_status_flat_pane_g3

0xa4bb,	// (0x000351b3) bg_status_flat_pane_g4

0xa4c3,	// (0x000351bb) bg_status_flat_pane_g5

0xa4cb,	// (0x000351c3) bg_status_flat_pane_g6

0xa4d3,	// (0x000351cb) bg_status_flat_pane_g7

0x77f2,	// (0x000324ea) tabs_3_active_pane_t1_ParamLimits

0x77f2,	// (0x000324ea) tabs_3_passive_pane_t1_ParamLimits

0x780c,	// (0x00032504) tabs_4_active_pane_t1_ParamLimits

0x780c,	// (0x00032504) tabs_4_1_passive_pane_t1_ParamLimits

0x895c,	// (0x00033654) tabs_2_active_pane_t1_ParamLimits

0x895c,	// (0x00033654) tabs_2_passive_pane_t1_ParamLimits

0x896e,	// (0x00033666) bg_active_tab_pane_cp4_ParamLimits

0x897c,	// (0x00033674) tabs_2_long_active_pane_t1_ParamLimits

0x898f,	// (0x00033687) bg_passive_tab_pane_cp4_ParamLimits

0x61a0,	// (0x00030e98) list_single_midp_graphic_pane_t1_ParamLimits

0x896e,	// (0x00033666) bg_active_tab_pane_cp5_ParamLimits

0x899b,	// (0x00033693) tabs_3_long_active_pane_t1_ParamLimits

0x898f,	// (0x00033687) bg_passive_tab_pane_cp5_ParamLimits

0x61a0,	// (0x00030e98) list_single_midp_graphic_pane_t1

0x9856,	// (0x0003454e) bg_status_flat_pane_ParamLimits

0x9919,	// (0x00034611) indicator_pane_cp2_ParamLimits

0x9919,	// (0x00034611) indicator_pane_cp2

0x9a44,	// (0x0003473c) navi_pane_srt_ParamLimits

0x9a44,	// (0x0003473c) navi_pane_srt

0x9a68,	// (0x00034760) popup_clock_digital_analogue_window_cp1

0x78b9,	// (0x000325b1) indicator_pane_t1

0x9441,	// (0x00034139) copy_highlight_pane

0x9441,	// (0x00034139) cursor_graphics_pane

0x9441,	// (0x00034139) graphic_within_text_pane

0x9441,	// (0x00034139) link_highlight_pane

0xacbe,	// (0x000359b6) popup_preview_text_window_t5_ParamLimits

0xacbe,	// (0x000359b6) popup_preview_text_window_t5

0x9563,	// (0x0003425b) cursor_digital_pane

0x9563,	// (0x0003425b) cursor_primary_pane

0x9574,	// (0x0003426c) cursor_primary_small_pane

0x957c,	// (0x00034274) cursor_secondary_pane

0x9584,	// (0x0003427c) cursor_title_pane

0x9563,	// (0x0003425b) link_highlight_digital_pane

0x956b,	// (0x00034263) link_highlight_primary_pane

0x9574,	// (0x0003426c) link_highlight_primary_small_pane

0x957c,	// (0x00034274) link_highlight_secondary_pane

0x9584,	// (0x0003427c) link_highlight_title_pane

0x9563,	// (0x0003425b) copy_highlight_digital_pane

0x9563,	// (0x0003425b) copy_highlight_primary_pane

0x9574,	// (0x0003426c) copy_highlight_primary_small_pane

0x957c,	// (0x00034274) copy_highlight_secondary_pane

0x9584,	// (0x0003427c) copy_highlight_title_pane

0x957c,	// (0x00034274) graphic_text_digital_pane

0xa541,	// (0x00035239) graphic_text_primary_pane

0xa54a,	// (0x00035242) graphic_text_primary_small_pane

0x9574,	// (0x0003426c) graphic_text_secondary_pane

0x9563,	// (0x0003425b) graphic_text_title_pane

0x958c,	// (0x00034284) cursor_primary_pane_g1

0xa533,	// (0x0003522b) cursor_text_primary_t1

0xa51b,	// (0x00035213) cursor_primary_small_pane_g1

0xa525,	// (0x0003521d) cursor_text_primary_small_t1

0xa503,	// (0x000351fb) cursor_primary_small_pane_g1_copy1

0xa50d,	// (0x00035205) cursor_text_primary_small_t1_copy1

0xa4eb,	// (0x000351e3) cursor_text_title_t1

0xa4f9,	// (0x000351f1) cursor_title_pane_g1

0x958c,	// (0x00034284) cursor_digital_pane_g1

0x9596,	// (0x0003428e) cursor_text_digital_t1

0x95bb,	// (0x000342b3) link_highlight_primary_pane_g1

0xa494,	// (0x0003518c) link_highlight_primary_pane_t1

0x95a4,	// (0x0003429c) link_highlight_primary_small_pane_g1

0x95ac,	// (0x000342a4) link_highlight_primary_small_pane_t1

0x95bb,	// (0x000342b3) link_highlight_secondary_pane_g1

0x95c3,	// (0x000342bb) link_highlight_secondary_pane_t1

0xa408,	// (0x00035100) link_highlight_title_pane_g1

0xa410,	// (0x00035108) link_highlight_title_pane_t1

0xa3f1,	// (0x000350e9) link_highlight_digital_pane_g1

0xa3f9,	// (0x000350f1) link_highlight_digital_pane_t1

0xa2c9,	// (0x00034fc1) copy_highlight_primary_pane_g1

0xa2d1,	// (0x00034fc9) copy_highlight_primary_pane_t1

0xa2a3,	// (0x00034f9b) copy_highlight_primary_small_pane_g1

0xa2ba,	// (0x00034fb2) copy_highlight_primary_small_pane_t1

0x95d2,	// (0x000342ca) copy_highlight_secondary_pane_g1

0x95da,	// (0x000342d2) copy_highlight_secondary_pane_t1

0xa2a3,	// (0x00034f9b) copy_highlight_title_pane_g1

0xa2ab,	// (0x00034fa3) copy_highlight_title_pane_t1

0xa2c9,	// (0x00034fc1) copy_highlight_digital_pane_g1

0xb566,	// (0x0003625e) copy_highlight_digital_pane_t1

0xb4ba,	// (0x000361b2) graphic_text_primary_pane_g1

0xb54a,	// (0x00036242) graphic_text_primary_pane_t1

0xb558,	// (0x00036250) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0003a6c6) graphic_text_primary_pane_t

0xb526,	// (0x0003621e) graphic_text_primary_small_pane_g1

0xb52e,	// (0x00036226) graphic_text_primary_small_pane_t1

0xb53c,	// (0x00036234) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0003a6c1) graphic_text_primary_small_pane_t

0xb502,	// (0x000361fa) graphic_text_secondary_pane_g1

0xb50a,	// (0x00036202) graphic_text_secondary_pane_t1

0xb518,	// (0x00036210) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0003a6bc) graphic_text_secondary_pane_t

0xb4de,	// (0x000361d6) graphic_text_title_pane_g1

0xb4e6,	// (0x000361de) graphic_text_title_pane_t1

0xb4f4,	// (0x000361ec) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0003a6b7) graphic_text_title_pane_t

0xb4ba,	// (0x000361b2) graphic_text_digital_pane_g1

0xb4c2,	// (0x000361ba) graphic_text_digital_pane_t1

0xb4d0,	// (0x000361c8) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0003a6b2) graphic_text_digital_pane_t

0x77dc,	// (0x000324d4) navi_icon_pane_srt_ParamLimits

0x77dc,	// (0x000324d4) navi_icon_pane_srt

0x76fc,	// (0x000323f4) navi_midp_pane_srt

0x76fc,	// (0x000323f4) navi_navi_pane_srt

0x77dc,	// (0x000324d4) navi_text_pane_srt_ParamLimits

0x77dc,	// (0x000324d4) navi_text_pane_srt

0xb485,	// (0x0003617d) navi_navi_icon_text_pane_srt

0xb48d,	// (0x00036185) navi_navi_pane_srt_g1_ParamLimits

0xb48d,	// (0x00036185) navi_navi_pane_srt_g1

0xb49f,	// (0x00036197) navi_navi_pane_srt_g2_ParamLimits

0xb49f,	// (0x00036197) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0003a6ad) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0003a6ad) navi_navi_pane_srt_g

0xb4b1,	// (0x000361a9) navi_navi_tabs_pane_srt

0xb485,	// (0x0003617d) navi_navi_text_pane_srt

0xb485,	// (0x0003617d) navi_navi_volume_pane_srt

0xb476,	// (0x0003616e) navi_navi_text_pane_srt_t1

0x6678,	// (0x00031370) navi_navi_volume_pane_srt_g1

0x6680,	// (0x00031378) volume_small_pane_srt_ParamLimits

0x6680,	// (0x00031378) volume_small_pane_srt

0x58d1,	// (0x000305c9) volume_small_pane_srt_g1_ParamLimits

0x58d1,	// (0x000305c9) volume_small_pane_srt_g1

0x58e1,	// (0x000305d9) volume_small_pane_srt_g2_ParamLimits

0x58e1,	// (0x000305d9) volume_small_pane_srt_g2

0x58f2,	// (0x000305ea) volume_small_pane_srt_g3_ParamLimits

0x58f2,	// (0x000305ea) volume_small_pane_srt_g3

0x5903,	// (0x000305fb) volume_small_pane_srt_g4_ParamLimits

0x5903,	// (0x000305fb) volume_small_pane_srt_g4

0x5914,	// (0x0003060c) volume_small_pane_srt_g5_ParamLimits

0x5914,	// (0x0003060c) volume_small_pane_srt_g5

0x5925,	// (0x0003061d) volume_small_pane_srt_g6_ParamLimits

0x5925,	// (0x0003061d) volume_small_pane_srt_g6

0x5936,	// (0x0003062e) volume_small_pane_srt_g7_ParamLimits

0x5936,	// (0x0003062e) volume_small_pane_srt_g7

0x5947,	// (0x0003063f) volume_small_pane_srt_g8_ParamLimits

0x5947,	// (0x0003063f) volume_small_pane_srt_g8

0x5958,	// (0x00030650) volume_small_pane_srt_g9_ParamLimits

0x5958,	// (0x00030650) volume_small_pane_srt_g9

0x5969,	// (0x00030661) volume_small_pane_srt_g10_ParamLimits

0x5969,	// (0x00030661) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003a455) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003a455) volume_small_pane_srt_g

0x8316,	// (0x0003300e) query_popup_data_pane_cp2

0xb45c,	// (0x00036154) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb45c,	// (0x00036154) navi_navi_icon_text_pane_srt_t1

0xa541,	// (0x00035239) navi_tabs_2_long_pane_srt

0xa541,	// (0x00035239) navi_tabs_2_pane_srt

0xa541,	// (0x00035239) navi_tabs_3_long_pane_srt

0xa541,	// (0x00035239) navi_tabs_3_pane_srt

0xa541,	// (0x00035239) navi_tabs_4_pane_srt

0x6658,	// (0x00031350) tabs_2_active_pane_srt_ParamLimits

0x6658,	// (0x00031350) tabs_2_active_pane_srt

0x6668,	// (0x00031360) tabs_2_passive_pane_srt_ParamLimits

0x6668,	// (0x00031360) tabs_2_passive_pane_srt

0x977f,	// (0x00034477) bg_passive_tab_pane_cp1_srt_ParamLimits

0x977f,	// (0x00034477) bg_passive_tab_pane_cp1_srt

0xb428,	// (0x00036120) bg_passive_tab_pane_g1_cp1_srt

0x9083,	// (0x00033d7b) bg_passive_tab_pane_g2_cp1_srt

0xb431,	// (0x00036129) bg_passive_tab_pane_g3_cp1_srt

0x77dc,	// (0x000324d4) bg_active_tab_pane_cp1_srt_ParamLimits

0x77dc,	// (0x000324d4) bg_active_tab_pane_cp1_srt

0xb43a,	// (0x00036132) tabs_2_active_pane_srt_g1

0xb442,	// (0x0003613a) tabs_2_active_pane_srt_t1_ParamLimits

0xb442,	// (0x0003613a) tabs_2_active_pane_srt_t1

0xb428,	// (0x00036120) bg_active_tab_pane_g1_cp1_srt

0x9083,	// (0x00033d7b) bg_active_tab_pane_g2_cp1_srt

0xb431,	// (0x00036129) bg_active_tab_pane_g3_cp1_srt

0x6625,	// (0x0003131d) tabs_3_active_pane_srt_ParamLimits

0x6625,	// (0x0003131d) tabs_3_active_pane_srt

0x6636,	// (0x0003132e) tabs_3_passive_pane_cp_srt_ParamLimits

0x6636,	// (0x0003132e) tabs_3_passive_pane_cp_srt

0x6647,	// (0x0003133f) tabs_3_passive_pane_srt_ParamLimits

0x6647,	// (0x0003133f) tabs_3_passive_pane_srt

0x977f,	// (0x00034477) bg_passive_tab_pane_cp2_srt_ParamLimits

0x977f,	// (0x00034477) bg_passive_tab_pane_cp2_srt

0x95e9,	// (0x000342e1) bg_passive_tab_pane_g1_cp2_srt

0x9083,	// (0x00033d7b) bg_passive_tab_pane_g2_cp2_srt

0x95f2,	// (0x000342ea) bg_passive_tab_pane_g3_cp2_srt

0x77dc,	// (0x000324d4) bg_active_tab_pane_cp2_srt_ParamLimits

0x77dc,	// (0x000324d4) bg_active_tab_pane_cp2_srt

0xb40e,	// (0x00036106) tabs_3_active_pane_srt_g1

0xb416,	// (0x0003610e) tabs_3_active_pane_srt_t1_ParamLimits

0xb416,	// (0x0003610e) tabs_3_active_pane_srt_t1

0x95e9,	// (0x000342e1) bg_active_tab_pane_g1_cp2_srt

0x9083,	// (0x00033d7b) bg_active_tab_pane_g2_cp2_srt

0x95f2,	// (0x000342ea) bg_active_tab_pane_g3_cp2_srt

0x65dd,	// (0x000312d5) tabs_4_active_pane_srt_ParamLimits

0x65dd,	// (0x000312d5) tabs_4_active_pane_srt

0x65ef,	// (0x000312e7) tabs_4_passive_pane_cp2_srt_ParamLimits

0x65ef,	// (0x000312e7) tabs_4_passive_pane_cp2_srt

0x5ace,	// (0x000307c6) aid_size_cell_toolbar

0x898f,	// (0x00033687) main_idle_act_pane_ParamLimits

0x5c8d,	// (0x00030985) popup_large_graphic_colour_window_ParamLimits

0x5ff4,	// (0x00030cec) popup_toolbar_window_ParamLimits

0x5ff4,	// (0x00030cec) popup_toolbar_window

0xb221,	// (0x00035f19) list_single_graphic_2heading_pane_ParamLimits

0xb221,	// (0x00035f19) list_single_graphic_2heading_pane

0x8b4b,	// (0x00033843) aid_size_cell_apps_grid_lsc_pane

0x8b5d,	// (0x00033855) aid_size_cell_apps_grid_prt_pane

0x977f,	// (0x00034477) bg_wml_button_pane_cp1_ParamLimits

0x977f,	// (0x00034477) bg_wml_button_pane_cp1

0x9f33,	// (0x00034c2b) form_midp_field_text_pane_t1_ParamLimits

0x9cfd,	// (0x000349f5) input_focus_pane_cp050_ParamLimits

0x9f6a,	// (0x00034c62) list_midp_form_text_pane_ParamLimits

0x9f10,	// (0x00034c08) input_focus_pane_cp051_ParamLimits

0x9f24,	// (0x00034c1c) list_midp_choice_pane_ParamLimits

0x9db6,	// (0x00034aae) list_single_2graphic_pane_cp3_ParamLimits

0x9db6,	// (0x00034aae) list_single_2graphic_pane_cp3

0x9dda,	// (0x00034ad2) list_single_midp_graphic_pane_ParamLimits

0x9dda,	// (0x00034ad2) list_single_midp_graphic_pane

0x485a,	// (0x0002f552) list_single_graphic_2heading_pane_g1_ParamLimits

0x485a,	// (0x0002f552) list_single_graphic_2heading_pane_g1

0x4866,	// (0x0002f55e) list_single_graphic_2heading_pane_g4_ParamLimits

0x4866,	// (0x0002f55e) list_single_graphic_2heading_pane_g4

0x4872,	// (0x0002f56a) list_single_graphic_2heading_pane_g5_ParamLimits

0x4872,	// (0x0002f56a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003a4a8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003a4a8) list_single_graphic_2heading_pane_g

0x487e,	// (0x0002f576) list_single_graphic_2heading_pane_t1_ParamLimits

0x487e,	// (0x0002f576) list_single_graphic_2heading_pane_t1

0x4892,	// (0x0002f58a) list_single_graphic_2heading_pane_t2_ParamLimits

0x4892,	// (0x0002f58a) list_single_graphic_2heading_pane_t2

0x48ac,	// (0x0002f5a4) list_single_graphic_2heading_pane_t3_ParamLimits

0x48ac,	// (0x0002f5a4) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003a4af) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003a4af) list_single_graphic_2heading_pane_t

0x9bc7,	// (0x000348bf) bg_popup_sub_pane_cp2

0x9bf1,	// (0x000348e9) grid_toobar_pane

0x60a1,	// (0x00030d99) cell_toolbar_pane_ParamLimits

0x60a1,	// (0x00030d99) cell_toolbar_pane

0x9c2d,	// (0x00034925) cell_toolbar_pane_g1_ParamLimits

0x9c2d,	// (0x00034925) cell_toolbar_pane_g1

0x9c41,	// (0x00034939) cell_toolbar_pane_g2_ParamLimits

0x9c41,	// (0x00034939) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003a4bd) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003a4bd) cell_toolbar_pane_g

0x9c63,	// (0x0003495b) grid_highlight_pane_cp2_ParamLimits

0x9c63,	// (0x0003495b) grid_highlight_pane_cp2

0x9c7d,	// (0x00034975) toolbar_button_pane

0x9c89,	// (0x00034981) toolbar_button_pane_g1

0x9c91,	// (0x00034989) toolbar_button_pane_g2

0x9c99,	// (0x00034991) toolbar_button_pane_g3

0x9ca1,	// (0x00034999) toolbar_button_pane_g4

0x9ca9,	// (0x000349a1) toolbar_button_pane_g5

0x9cb1,	// (0x000349a9) toolbar_button_pane_g6

0x9cb9,	// (0x000349b1) toolbar_button_pane_g7

0x9cc1,	// (0x000349b9) toolbar_button_pane_g8

0x9cc9,	// (0x000349c1) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003a4c2) toolbar_button_pane_g

0x6113,	// (0x00030e0b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6113,	// (0x00030e0b) list_single_2graphic_pane_g1_cp3

0x611f,	// (0x00030e17) list_single_2graphic_pane_g2_cp3_ParamLimits

0x611f,	// (0x00030e17) list_single_2graphic_pane_g2_cp3

0x6130,	// (0x00030e28) list_single_2graphic_pane_g3_cp3

0x6138,	// (0x00030e30) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6138,	// (0x00030e30) list_single_2graphic_pane_g4_cp3

0x6144,	// (0x00030e3c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6144,	// (0x00030e3c) list_single_2graphic_pane_t1_cp3

0x6194,	// (0x00030e8c) list_single_midp_graphic_pane_g2_ParamLimits

0x6194,	// (0x00030e8c) list_single_midp_graphic_pane_g2

0x5ad6,	// (0x000307ce) aid_zoom_text_primary

0x483e,	// (0x0002f536) aid_zoom_text_secondary

0x96a3,	// (0x0003439b) status_small_pane_g7_ParamLimits

0x96a3,	// (0x0003439b) status_small_pane_g7

0x96c6,	// (0x000343be) status_small_pane_t1_ParamLimits

0x7713,	// (0x0003240b) title_pane_g2

0x0003,

0xf54e,	// (0x0003a246) title_pane_g

0x83ba,	// (0x000330b2) aid_size_cell_colour_1_pane_ParamLimits

0x83ba,	// (0x000330b2) aid_size_cell_colour_1_pane

0x83ce,	// (0x000330c6) aid_size_cell_colour_2_pane_ParamLimits

0x83ce,	// (0x000330c6) aid_size_cell_colour_2_pane

0x83e2,	// (0x000330da) aid_size_cell_colour_3_pane_ParamLimits

0x83e2,	// (0x000330da) aid_size_cell_colour_3_pane

0x83f6,	// (0x000330ee) aid_size_cell_colour_4_pane_ParamLimits

0x83f6,	// (0x000330ee) aid_size_cell_colour_4_pane

0x54a4,	// (0x0003019c) title_pane_stacon_g1_ParamLimits

0x54a4,	// (0x0003019c) title_pane_stacon_g1

0xa328,	// (0x00035020) popup_note_wait_window_g3_ParamLimits

0xa328,	// (0x00035020) popup_note_wait_window_g3

0xa39e,	// (0x00035096) popup_note_wait_window_t5_ParamLimits

0xa39e,	// (0x00035096) popup_note_wait_window_t5

0x76fc,	// (0x000323f4) main_feb_china_hwr_fs_writing_pane

0x5b70,	// (0x00030868) popup_feb_china_hwr_fs_window_ParamLimits

0x5b70,	// (0x00030868) popup_feb_china_hwr_fs_window

0x622c,	// (0x00030f24) aid_size_cell_hwr_fs_ParamLimits

0x622c,	// (0x00030f24) aid_size_cell_hwr_fs

0x9cfd,	// (0x000349f5) bg_popup_sub_pane_cp3_ParamLimits

0x9cfd,	// (0x000349f5) bg_popup_sub_pane_cp3

0x6241,	// (0x00030f39) grid_hwr_fs_pane_ParamLimits

0x6241,	// (0x00030f39) grid_hwr_fs_pane

0x6259,	// (0x00030f51) linegrid_hwr_fs_pane_ParamLimits

0x6259,	// (0x00030f51) linegrid_hwr_fs_pane

0x6269,	// (0x00030f61) cell_hwr_fs_pane_ParamLimits

0x6269,	// (0x00030f61) cell_hwr_fs_pane

0x9d09,	// (0x00034a01) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d09,	// (0x00034a01) linegrid_hwr_fs_pane_g1

0x9d15,	// (0x00034a0d) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d15,	// (0x00034a0d) linegrid_hwr_fs_pane_g2

0x9d27,	// (0x00034a1f) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d27,	// (0x00034a1f) linegrid_hwr_fs_pane_g3

0x628b,	// (0x00030f83) linegrid_hwr_fs_pane_g4_ParamLimits

0x628b,	// (0x00030f83) linegrid_hwr_fs_pane_g4

0x62a5,	// (0x00030f9d) linegrid_hwr_fs_pane_g5_ParamLimits

0x62a5,	// (0x00030f9d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0003a4ed) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0003a4ed) linegrid_hwr_fs_pane_g

0x9d33,	// (0x00034a2b) cell_hwr_fs_pane_g1_ParamLimits

0x9d33,	// (0x00034a2b) cell_hwr_fs_pane_g1

0x9afe,	// (0x000347f6) cell_hwr_fs_pane_g2_ParamLimits

0x9afe,	// (0x000347f6) cell_hwr_fs_pane_g2

0x9d49,	// (0x00034a41) cell_hwr_fs_pane_g3_ParamLimits

0x9d49,	// (0x00034a41) cell_hwr_fs_pane_g3

0x9d56,	// (0x00034a4e) cell_hwr_fs_pane_g4_ParamLimits

0x9d56,	// (0x00034a4e) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0003a4f8) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0003a4f8) cell_hwr_fs_pane_g

0x62bb,	// (0x00030fb3) cell_hwr_fs_pane_t1

0x76fc,	// (0x000323f4) grid_highlight_pane_cp6

0x76fc,	// (0x000323f4) main_idle_act2_pane

0x8902,	// (0x000335fa) aid_inside_area_popup_secondary

0xa9d5,	// (0x000356cd) aid_inside_area_window_primary_ParamLimits

0xa9d5,	// (0x000356cd) aid_inside_area_window_primary

0xb575,	// (0x0003626d) ai2_news_ticker_pane

0xb57d,	// (0x00036275) aid_size_cell_ai1_link_ParamLimits

0xb57d,	// (0x00036275) aid_size_cell_ai1_link

0xb597,	// (0x0003628f) popup_ai2_data_window_ParamLimits

0xb597,	// (0x0003628f) popup_ai2_data_window

0xb5ad,	// (0x000362a5) popup_ai2_link_window_ParamLimits

0xb5ad,	// (0x000362a5) popup_ai2_link_window

0x9cfd,	// (0x000349f5) bg_popup_sub_pane_cp4_ParamLimits

0x9cfd,	// (0x000349f5) bg_popup_sub_pane_cp4

0xb5c1,	// (0x000362b9) grid_ai2_link_pane_ParamLimits

0xb5c1,	// (0x000362b9) grid_ai2_link_pane

0xb5d8,	// (0x000362d0) popup_ai2_link_window_g1_ParamLimits

0xb5d8,	// (0x000362d0) popup_ai2_link_window_g1

0xb5e4,	// (0x000362dc) popup_ai2_link_window_g2_ParamLimits

0xb5e4,	// (0x000362dc) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0003a6cb) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0003a6cb) popup_ai2_link_window_g

0xb5f3,	// (0x000362eb) ai2_mp_button_pane

0xb5fb,	// (0x000362f3) ai2_mp_volume_pane

0x9f10,	// (0x00034c08) bg_popup_sub_pane_cp5_ParamLimits

0x9f10,	// (0x00034c08) bg_popup_sub_pane_cp5

0xb603,	// (0x000362fb) heading_ai2_gene_pane_ParamLimits

0xb603,	// (0x000362fb) heading_ai2_gene_pane

0xb60f,	// (0x00036307) list_ai2_gene_pane_ParamLimits

0xb60f,	// (0x00036307) list_ai2_gene_pane

0xb657,	// (0x0003634f) cell_ai2_link_pane_ParamLimits

0xb657,	// (0x0003634f) cell_ai2_link_pane

0xb66d,	// (0x00036365) cell_ai2_link_pane_g1

0x76fc,	// (0x000323f4) grid_highlight_pane_cp7

0x6695,	// (0x0003138d) ai2_mp_volume_pane_g1

0xb73d,	// (0x00036435) ai2_mp_volume_pane_g2

0xb6b2,	// (0x000363aa) list_ai2_gene_pane_t1

0xb745,	// (0x0003643d) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0003a6e4) ai2_mp_volume_pane_g

0x669d,	// (0x00031395) volume_small_pane_cp3

0xb74d,	// (0x00036445) aid_size_cell_ai2_button

0xb755,	// (0x0003644d) grid_ai2_button_pane

0xb75e,	// (0x00036456) cell_ai2_button_pane_ParamLimits

0xb75e,	// (0x00036456) cell_ai2_button_pane

0x76f2,	// (0x000323ea) cell_ai2_button_pane_g1

0x76fc,	// (0x000323f4) grid_highlight_pane_cp8

0xb6fd,	// (0x000363f5) ai2_gene_pane_t1_ParamLimits

0xb6fd,	// (0x000363f5) ai2_gene_pane_t1

0x5ac4,	// (0x000307bc) aid_height_parent_landscape

0xb058,	// (0x00035d50) aid_height_set_list

0xb069,	// (0x00035d61) aid_size_parent

0xb39c,	// (0x00036094) aid_size_cell_graphic_pane_ParamLimits

0xb61f,	// (0x00036317) popup_ai2_data_window_g1_ParamLimits

0xb61f,	// (0x00036317) popup_ai2_data_window_g1

0xb62b,	// (0x00036323) ai2_news_ticker_pane_g1

0xb633,	// (0x0003632b) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0003a6d0) ai2_news_ticker_pane_g

0xb63b,	// (0x00036333) ai2_news_ticker_pane_t1

0xb649,	// (0x00036341) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0003a6d5) ai2_news_ticker_pane_t

0xb676,	// (0x0003636e) heading_ai2_gene_pane_g1

0xb67e,	// (0x00036376) heading_ai2_gene_pane_t1_ParamLimits

0xb67e,	// (0x00036376) heading_ai2_gene_pane_t1

0xb693,	// (0x0003638b) list_highlight_pane_cp6

0xb69b,	// (0x00036393) ai2_gene_pane_ParamLimits

0xb69b,	// (0x00036393) ai2_gene_pane

0xb6c0,	// (0x000363b8) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0003a6da) list_ai2_gene_pane_t

0xb6ce,	// (0x000363c6) list_highlight_pane_cp8_ParamLimits

0xb6ce,	// (0x000363c6) list_highlight_pane_cp8

0xb6df,	// (0x000363d7) ai2_gene_pane_g1_ParamLimits

0xb6df,	// (0x000363d7) ai2_gene_pane_g1

0xb6f1,	// (0x000363e9) ai2_gene_pane_g2_ParamLimits

0xb6f1,	// (0x000363e9) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0003a6df) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0003a6df) ai2_gene_pane_g

0x8741,	// (0x00033439) scroll_pane_cp12

0x5a83,	// (0x0003077b) control_pane_t3_ParamLimits

0x5a83,	// (0x0003077b) control_pane_t3

0x96b7,	// (0x000343af) status_small_pane_g8_ParamLimits

0x96b7,	// (0x000343af) status_small_pane_g8

0x5c56,	// (0x0003094e) popup_find_window_ParamLimits

0x5e6b,	// (0x00030b63) popup_note_image_window_ParamLimits

0x60d1,	// (0x00030dc9) list_double2_graphic_pane_vc_g1_ParamLimits

0x60d1,	// (0x00030dc9) list_double2_graphic_pane_vc_g1

0x60dd,	// (0x00030dd5) list_double2_graphic_pane_vc_g2_ParamLimits

0x60dd,	// (0x00030dd5) list_double2_graphic_pane_vc_g2

0x60e9,	// (0x00030de1) list_double2_graphic_pane_vc_g3_ParamLimits

0x60e9,	// (0x00030de1) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003a4b6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a4b6) list_double2_graphic_pane_vc_g

0x60f5,	// (0x00030ded) list_double2_graphic_pane_vc_t1_ParamLimits

0x60f5,	// (0x00030ded) list_double2_graphic_pane_vc_t1

0x60dd,	// (0x00030dd5) list_single_heading_pane_vc_g1_ParamLimits

0x60dd,	// (0x00030dd5) list_single_heading_pane_vc_g1

0x60e9,	// (0x00030de1) list_single_heading_pane_vc_g2_ParamLimits

0x60e9,	// (0x00030de1) list_single_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a4d7) list_single_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a4d7) list_single_heading_pane_vc_g

0x6160,	// (0x00030e58) list_single_heading_pane_vc_t1_ParamLimits

0x6160,	// (0x00030e58) list_single_heading_pane_vc_t1

0x6178,	// (0x00030e70) list_single_heading_pane_vc_t2_ParamLimits

0x6178,	// (0x00030e70) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0003a4dc) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003a4dc) list_single_heading_pane_vc_t

0x61b6,	// (0x00030eae) list_setting_number_pane_vc_g1_ParamLimits

0x61b6,	// (0x00030eae) list_setting_number_pane_vc_g1

0x61c2,	// (0x00030eba) list_setting_number_pane_vc_g2_ParamLimits

0x61c2,	// (0x00030eba) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003a4e1) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003a4e1) list_setting_number_pane_vc_g

0x61ce,	// (0x00030ec6) list_setting_number_pane_vc_t1_ParamLimits

0x61ce,	// (0x00030ec6) list_setting_number_pane_vc_t1

0x61e2,	// (0x00030eda) list_setting_number_pane_vc_t2_ParamLimits

0x61e2,	// (0x00030eda) list_setting_number_pane_vc_t2

0x61fe,	// (0x00030ef6) list_setting_number_pane_vc_t3_ParamLimits

0x61fe,	// (0x00030ef6) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0003a4e6) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0003a4e6) list_setting_number_pane_vc_t

0x621c,	// (0x00030f14) set_value_pane_vc_ParamLimits

0x621c,	// (0x00030f14) set_value_pane_vc

0xb221,	// (0x00035f19) list_double2_graphic_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_double2_graphic_pane_vc

0xb221,	// (0x00035f19) list_double2_large_graphic_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_double2_large_graphic_pane_vc

0xb221,	// (0x00035f19) list_double2_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_double2_pane_vc

0xb221,	// (0x00035f19) list_double_graphic_heading_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_double_graphic_heading_pane_vc

0xb221,	// (0x00035f19) list_double_graphic_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_double_graphic_pane_vc

0xb221,	// (0x00035f19) list_double_heading_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_double_heading_pane_vc

0xb233,	// (0x00035f2b) list_double_large_graphic_pane_vc_ParamLimits

0xb233,	// (0x00035f2b) list_double_large_graphic_pane_vc

0xb221,	// (0x00035f19) list_double_number_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_double_number_pane_vc

0xb221,	// (0x00035f19) list_double_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_double_pane_vc

0xb221,	// (0x00035f19) list_double_time_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_double_time_pane_vc

0xb221,	// (0x00035f19) list_setting_number_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_setting_number_pane_vc

0xb221,	// (0x00035f19) list_setting_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_setting_pane_vc

0xb221,	// (0x00035f19) list_single_graphic_heading_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_single_graphic_heading_pane_vc

0xb221,	// (0x00035f19) list_single_heading_pane_vc_ParamLimits

0xb221,	// (0x00035f19) list_single_heading_pane_vc

0x65be,	// (0x000312b6) list_single_number_heading_pane_vc_ParamLimits

0x65be,	// (0x000312b6) list_single_number_heading_pane_vc

0x60d1,	// (0x00030dc9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x60d1,	// (0x00030dc9) list_double_graphic_heading_pane_vc_g1

0x60dd,	// (0x00030dd5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x60dd,	// (0x00030dd5) list_double_graphic_heading_pane_vc_g2

0x60e9,	// (0x00030de1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x60e9,	// (0x00030de1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003a4b6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a4b6) list_double_graphic_heading_pane_vc_g

0x7a6c,	// (0x00032764) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7a6c,	// (0x00032764) list_double_graphic_heading_pane_vc_t1

0x7a88,	// (0x00032780) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x7a88,	// (0x00032780) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0003a6eb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0003a6eb) list_double_graphic_heading_pane_vc_t

0x61b6,	// (0x00030eae) list_setting_pane_vc_g1_ParamLimits

0x61b6,	// (0x00030eae) list_setting_pane_vc_g1

0x61c2,	// (0x00030eba) list_setting_pane_vc_g2_ParamLimits

0x61c2,	// (0x00030eba) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003a4e1) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003a4e1) list_setting_pane_vc_g

0x7aa6,	// (0x0003279e) list_setting_pane_vc_t1_ParamLimits

0x7aa6,	// (0x0003279e) list_setting_pane_vc_t1

0x7ac2,	// (0x000327ba) list_setting_pane_vc_t2_ParamLimits

0x7ac2,	// (0x000327ba) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0003a719) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0003a719) list_setting_pane_vc_t

0x621c,	// (0x00030f14) set_value_pane_cp_vc_ParamLimits

0x621c,	// (0x00030f14) set_value_pane_cp_vc

0x60dd,	// (0x00030dd5) list_single_number_heading_pane_vc_g1_ParamLimits

0x60dd,	// (0x00030dd5) list_single_number_heading_pane_vc_g1

0x60e9,	// (0x00030de1) list_single_number_heading_pane_vc_g2_ParamLimits

0x60e9,	// (0x00030de1) list_single_number_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a4d7) list_single_number_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a4d7) list_single_number_heading_pane_vc_g

0x6160,	// (0x00030e58) list_single_number_heading_pane_vc_t1_ParamLimits

0x6160,	// (0x00030e58) list_single_number_heading_pane_vc_t1

0x7ade,	// (0x000327d6) list_single_number_heading_pane_vc_t2_ParamLimits

0x7ade,	// (0x000327d6) list_single_number_heading_pane_vc_t2

0x7af2,	// (0x000327ea) list_single_number_heading_pane_vc_t3_ParamLimits

0x7af2,	// (0x000327ea) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0003a71e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0003a71e) list_single_number_heading_pane_vc_t

0x60d1,	// (0x00030dc9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x60d1,	// (0x00030dc9) list_single_graphic_heading_pane_vc_g1

0x60dd,	// (0x00030dd5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x60dd,	// (0x00030dd5) list_single_graphic_heading_pane_vc_g4

0x60e9,	// (0x00030de1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x60e9,	// (0x00030de1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003a4b6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a4b6) list_single_graphic_heading_pane_vc_g

0x6160,	// (0x00030e58) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6160,	// (0x00030e58) list_single_graphic_heading_pane_vc_t1

0x7b04,	// (0x000327fc) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7b04,	// (0x000327fc) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0003a725) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0003a725) list_single_graphic_heading_pane_vc_t

0x60dd,	// (0x00030dd5) list_double2_pane_vc_g1_ParamLimits

0x60dd,	// (0x00030dd5) list_double2_pane_vc_g1

0x60e9,	// (0x00030de1) list_double2_pane_vc_g2_ParamLimits

0x60e9,	// (0x00030de1) list_double2_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a4d7) list_double2_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a4d7) list_double2_pane_vc_g

0x7b18,	// (0x00032810) list_double2_pane_vc_t1_ParamLimits

0x7b18,	// (0x00032810) list_double2_pane_vc_t1

0x7b2e,	// (0x00032826) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7b2e,	// (0x00032826) list_double2_large_graphic_pane_vc_g1

0x60dd,	// (0x00030dd5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x60dd,	// (0x00030dd5) list_double2_large_graphic_pane_vc_g2

0x60e9,	// (0x00030de1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x60e9,	// (0x00030de1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa32,	// (0x0003a72a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa32,	// (0x0003a72a) list_double2_large_graphic_pane_vc_g

0x7b3a,	// (0x00032832) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7b3a,	// (0x00032832) list_double2_large_graphic_pane_vc_t1

0x7b50,	// (0x00032848) list_double_time_pane_vc_g1_ParamLimits

0x7b50,	// (0x00032848) list_double_time_pane_vc_g1

0x7b5c,	// (0x00032854) list_double_time_pane_vc_g2_ParamLimits

0x7b5c,	// (0x00032854) list_double_time_pane_vc_g2

0x0001,

0xfa39,	// (0x0003a731) list_double_time_pane_vc_g_ParamLimits

0xfa39,	// (0x0003a731) list_double_time_pane_vc_g

0x7b68,	// (0x00032860) list_double_time_pane_vc_t1_ParamLimits

0x7b68,	// (0x00032860) list_double_time_pane_vc_t1

0x7b8c,	// (0x00032884) list_double_time_pane_vc_t2_ParamLimits

0x7b8c,	// (0x00032884) list_double_time_pane_vc_t2

0x7bdb,	// (0x000328d3) list_double_time_pane_vc_t3_ParamLimits

0x7bdb,	// (0x000328d3) list_double_time_pane_vc_t3

0x7bed,	// (0x000328e5) list_double_time_pane_vc_t4_ParamLimits

0x7bed,	// (0x000328e5) list_double_time_pane_vc_t4

0x0003,

0xfa3e,	// (0x0003a736) list_double_time_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003a736) list_double_time_pane_vc_t

0x60dd,	// (0x00030dd5) list_double_pane_vc_g1_ParamLimits

0x60dd,	// (0x00030dd5) list_double_pane_vc_g1

0x60e9,	// (0x00030de1) list_double_pane_vc_g2_ParamLimits

0x60e9,	// (0x00030de1) list_double_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a4d7) list_double_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a4d7) list_double_pane_vc_g

0x7c01,	// (0x000328f9) list_double_pane_vc_t1_ParamLimits

0x7c01,	// (0x000328f9) list_double_pane_vc_t1

0x7c15,	// (0x0003290d) list_double_pane_vc_t2_ParamLimits

0x7c15,	// (0x0003290d) list_double_pane_vc_t2

0x0001,

0xfa47,	// (0x0003a73f) list_double_pane_vc_t_ParamLimits

0xfa47,	// (0x0003a73f) list_double_pane_vc_t

0x60dd,	// (0x00030dd5) list_double_number_pane_vc_g1_ParamLimits

0x60dd,	// (0x00030dd5) list_double_number_pane_vc_g1

0x60e9,	// (0x00030de1) list_double_number_pane_vc_g2_ParamLimits

0x60e9,	// (0x00030de1) list_double_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a4d7) list_double_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a4d7) list_double_number_pane_vc_g

0x7c2d,	// (0x00032925) list_double_number_pane_vc_t1_ParamLimits

0x7c2d,	// (0x00032925) list_double_number_pane_vc_t1

0x7c3f,	// (0x00032937) list_double_number_pane_vc_t2_ParamLimits

0x7c3f,	// (0x00032937) list_double_number_pane_vc_t2

0x7c53,	// (0x0003294b) list_double_number_pane_vc_t3_ParamLimits

0x7c53,	// (0x0003294b) list_double_number_pane_vc_t3

0x0002,

0xfa4c,	// (0x0003a744) list_double_number_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003a744) list_double_number_pane_vc_t

0x7c6b,	// (0x00032963) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7c6b,	// (0x00032963) list_double_large_graphic_pane_vc_g1

0x7c8d,	// (0x00032985) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7c8d,	// (0x00032985) list_double_large_graphic_pane_vc_g2

0x7ca1,	// (0x00032999) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7ca1,	// (0x00032999) list_double_large_graphic_pane_vc_g3

0x7cb0,	// (0x000329a8) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7cb0,	// (0x000329a8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa53,	// (0x0003a74b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0003a74b) list_double_large_graphic_pane_vc_g

0x7cbc,	// (0x000329b4) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7cbc,	// (0x000329b4) list_double_large_graphic_pane_vc_t1

0x7cd8,	// (0x000329d0) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7cd8,	// (0x000329d0) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0003a754) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003a754) list_double_large_graphic_pane_vc_t

0x60dd,	// (0x00030dd5) list_double_heading_pane_vc_g1_ParamLimits

0x60dd,	// (0x00030dd5) list_double_heading_pane_vc_g1

0x60e9,	// (0x00030de1) list_double_heading_pane_vc_g2_ParamLimits

0x60e9,	// (0x00030de1) list_double_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a4d7) list_double_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a4d7) list_double_heading_pane_vc_g

0x7cfa,	// (0x000329f2) list_double_heading_pane_vc_t1_ParamLimits

0x7cfa,	// (0x000329f2) list_double_heading_pane_vc_t1

0x6160,	// (0x00030e58) list_double_heading_pane_vc_t2_ParamLimits

0x6160,	// (0x00030e58) list_double_heading_pane_vc_t2

0x0001,

0xfa61,	// (0x0003a759) list_double_heading_pane_vc_t_ParamLimits

0xfa61,	// (0x0003a759) list_double_heading_pane_vc_t

0x7d0e,	// (0x00032a06) list_double_graphic_pane_vc_g1_ParamLimits

0x7d0e,	// (0x00032a06) list_double_graphic_pane_vc_g1

0x7d1a,	// (0x00032a12) list_double_graphic_pane_vc_g2_ParamLimits

0x7d1a,	// (0x00032a12) list_double_graphic_pane_vc_g2

0x60dd,	// (0x00030dd5) list_double_graphic_pane_vc_g3_ParamLimits

0x60dd,	// (0x00030dd5) list_double_graphic_pane_vc_g3

0x0003,

0xfa66,	// (0x0003a75e) list_double_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0003a75e) list_double_graphic_pane_vc_g

0x7d37,	// (0x00032a2f) list_double_graphic_pane_vc_t1_ParamLimits

0x7d37,	// (0x00032a2f) list_double_graphic_pane_vc_t1

0x7d61,	// (0x00032a59) list_double_graphic_pane_vc_t2_ParamLimits

0x7d61,	// (0x00032a59) list_double_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003a767) list_double_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003a767) list_double_graphic_pane_vc_t

0x48dc,	// (0x0002f5d4) aid_size_cell_fastswap

0x48e4,	// (0x0002f5dc) aid_size_cell_touch_ParamLimits

0x48e4,	// (0x0002f5dc) aid_size_cell_touch

0x4b49,	// (0x0002f841) popup_fast_swap_wide_window_ParamLimits

0x4b49,	// (0x0002f841) popup_fast_swap_wide_window

0x4c5d,	// (0x0002f955) touch_pane_ParamLimits

0x4c5d,	// (0x0002f955) touch_pane

0x8797,	// (0x0003348f) button_value_adjust_pane_cp2

0x5206,	// (0x0002fefe) button_value_adjust_pane_cp4

0x5226,	// (0x0002ff1e) form_field_data_pane_cp2

0x5245,	// (0x0002ff3d) form_field_data_wide_pane_cp2

0x8c18,	// (0x00033910) bg_scroll_pane_ParamLimits

0x5606,	// (0x000302fe) scroll_handle_pane_ParamLimits

0x561a,	// (0x00030312) scroll_sc2_down_pane_ParamLimits

0x561a,	// (0x00030312) scroll_sc2_down_pane

0x8c49,	// (0x00033941) scroll_sc2_up_pane_ParamLimits

0x8c49,	// (0x00033941) scroll_sc2_up_pane

0xbe2e,	// (0x00036b26) grid_wheel_folder_pane_g1_ParamLimits

0xbe2e,	// (0x00036b26) grid_wheel_folder_pane_g1

0x5869,	// (0x00030561) clock_nsta_pane_cp2_ParamLimits

0x5869,	// (0x00030561) clock_nsta_pane_cp2

0x898f,	// (0x00033687) listscroll_midp_pane_ParamLimits

0x9449,	// (0x00034141) midp_canvas_pane

0x9731,	// (0x00034429) nsta_clock_indic_pane

0x9765,	// (0x0003445d) listscroll_form_pane_vc

0x976d,	// (0x00034465) listscroll_set_pane_vc_ParamLimits

0x976d,	// (0x00034465) listscroll_set_pane_vc

0x9872,	// (0x0003456a) clock_nsta_pane

0x98e7,	// (0x000345df) indicator_nsta_pane

0x9bc7,	// (0x000348bf) bg_popup_sub_pane_cp2_ParamLimits

0x9bdb,	// (0x000348d3) find_pane_cp2_ParamLimits

0x9bdb,	// (0x000348d3) find_pane_cp2

0x9bf1,	// (0x000348e9) grid_toobar_pane_ParamLimits

0x9cd1,	// (0x000349c9) list_form_gen_pane_vc_ParamLimits

0x9cd1,	// (0x000349c9) list_form_gen_pane_vc

0x9ce7,	// (0x000349df) scroll_pane_cp8_vc_ParamLimits

0x9ce7,	// (0x000349df) scroll_pane_cp8_vc

0x9d63,	// (0x00034a5b) data_form_wide_pane_vc_ParamLimits

0x9d63,	// (0x00034a5b) data_form_wide_pane_vc

0x9d6f,	// (0x00034a67) form_field_data_wide_pane_vc_g1

0x9d77,	// (0x00034a6f) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d77,	// (0x00034a6f) form_field_data_wide_pane_vc_t1

0x87ab,	// (0x000334a3) input_focus_pane_cp6_vc_ParamLimits

0x87ab,	// (0x000334a3) input_focus_pane_cp6_vc

0xa0a3,	// (0x00034d9b) list_midp_pane_ParamLimits

0xa0af,	// (0x00034da7) scroll_pane_cp16_ParamLimits

0xa0af,	// (0x00034da7) scroll_pane_cp16

0xa0fd,	// (0x00034df5) button_value_adjust_pane_ParamLimits

0xa0fd,	// (0x00034df5) button_value_adjust_pane

0xb07b,	// (0x00035d73) button_value_adjust_pane_cp6_ParamLimits

0xb07b,	// (0x00035d73) button_value_adjust_pane_cp6

0xb1a5,	// (0x00035e9d) settings_code_pane_cp_ParamLimits

0xb1a5,	// (0x00035e9d) settings_code_pane_cp

0x76f2,	// (0x000323ea) cell_touch_pane_g1

0x76f2,	// (0x000323ea) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003a3fb) cell_touch_pane_g

0xb770,	// (0x00036468) cell_touch_pane_cp_ParamLimits

0xb770,	// (0x00036468) cell_touch_pane_cp

0xb780,	// (0x00036478) cell_touch_pane_ParamLimits

0xb780,	// (0x00036478) cell_touch_pane

0x76f2,	// (0x000323ea) scroll_sc2_down_pane_g1

0x76f2,	// (0x000323ea) scroll_sc2_up_pane_g1

0x76fc,	// (0x000323f4) bg_set_opt_pane_cp4_vc

0xb792,	// (0x0003648a) list_set_graphic_pane_vc_g1_ParamLimits

0xb792,	// (0x0003648a) list_set_graphic_pane_vc_g1

0xb79e,	// (0x00036496) list_set_graphic_pane_vc_g2_ParamLimits

0xb79e,	// (0x00036496) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0003a6f0) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0003a6f0) list_set_graphic_pane_vc_g

0xb7aa,	// (0x000364a2) text_primary_small_cp13_vc_ParamLimits

0xb7aa,	// (0x000364a2) text_primary_small_cp13_vc

0xb7c2,	// (0x000364ba) list_set_graphic_pane_vc_ParamLimits

0xb7c2,	// (0x000364ba) list_set_graphic_pane_vc

0x76fc,	// (0x000323f4) input_focus_pane_cp2_vc

0x76f2,	// (0x000323ea) setting_code_pane_vc_g1

0x7827,	// (0x0003251f) setting_code_pane_vc_t1

0xb7d5,	// (0x000364cd) set_text_pane_vc_t1_ParamLimits

0xb7d5,	// (0x000364cd) set_text_pane_vc_t1

0x76fc,	// (0x000323f4) input_focus_pane_cp1_vc

0xb7f1,	// (0x000364e9) list_set_text_pane_vc

0x76f2,	// (0x000323ea) setting_text_pane_vc_g1

0x76fc,	// (0x000323f4) bg_set_opt_pane_cp2_vc

0x781e,	// (0x00032516) setting_slider_graphic_pane_vc_g1

0xb7fb,	// (0x000364f3) setting_slider_graphic_pane_vc_t1

0xb80b,	// (0x00036503) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0003a6f5) setting_slider_graphic_pane_vc_t

0xb81b,	// (0x00036513) slider_set_pane_cp_vc

0xb823,	// (0x0003651b) slider_set_pane_vc_g1

0xb82c,	// (0x00036524) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0003a6fa) slider_set_pane_vc_g

0x8806,	// (0x000334fe) set_opt_bg_pane_g1_copy1

0x880e,	// (0x00033506) set_opt_bg_pane_g2_copy1

0xb858,	// (0x00036550) set_opt_bg_pane_g3_copy1

0x881e,	// (0x00033516) set_opt_bg_pane_g4_copy1

0x8826,	// (0x0003351e) set_opt_bg_pane_g5_copy1

0x882e,	// (0x00033526) set_opt_bg_pane_g6_copy1

0xb862,	// (0x0003655a) set_opt_bg_pane_g7_copy1

0xb86a,	// (0x00036562) set_opt_bg_pane_g8_copy1

0xb874,	// (0x0003656c) set_opt_bg_pane_g9_copy1

0x76fc,	// (0x000323f4) bg_set_opt_pane_cp_vc

0xb87e,	// (0x00036576) setting_slider_pane_vc_t1

0xb88d,	// (0x00036585) setting_slider_pane_vc_t2

0xb89d,	// (0x00036595) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0003a709) setting_slider_pane_vc_t

0xb8ad,	// (0x000365a5) slider_set_pane_vc

0x630a,	// (0x00031002) volume_set_pane_vc_g1

0x6313,	// (0x0003100b) volume_set_pane_vc_g2

0x631c,	// (0x00031014) volume_set_pane_vc_g3

0x6325,	// (0x0003101d) volume_set_pane_vc_g4

0x632e,	// (0x00031026) volume_set_pane_vc_g5

0x6337,	// (0x0003102f) volume_set_pane_vc_g6

0x6340,	// (0x00031038) volume_set_pane_vc_g7

0x6349,	// (0x00031041) volume_set_pane_vc_g8

0x6352,	// (0x0003104a) volume_set_pane_vc_g9

0x635b,	// (0x00031053) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0003a5ae) volume_set_pane_vc_g

0xb8b5,	// (0x000365ad) volume_set_pane_vc

0xb8bd,	// (0x000365b5) button_value_adjust_pane_cp1_vc

0xb8c7,	// (0x000365bf) list_highlight_pane_cp2_vc

0xb8d0,	// (0x000365c8) list_set_pane_vc_ParamLimits

0xb8d0,	// (0x000365c8) list_set_pane_vc

0xb92e,	// (0x00036626) main_pane_set_vc_t1_ParamLimits

0xb92e,	// (0x00036626) main_pane_set_vc_t1

0xb943,	// (0x0003663b) main_pane_set_vc_t2_ParamLimits

0xb943,	// (0x0003663b) main_pane_set_vc_t2

0xb955,	// (0x0003664d) main_pane_set_vc_t3_ParamLimits

0xb955,	// (0x0003664d) main_pane_set_vc_t3

0xb969,	// (0x00036661) main_pane_set_vc_t4_ParamLimits

0xb969,	// (0x00036661) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0003a710) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0003a710) main_pane_set_vc_t

0xb97d,	// (0x00036675) setting_code_pane_vc_ParamLimits

0xb97d,	// (0x00036675) setting_code_pane_vc

0xb98e,	// (0x00036686) setting_slider_graphic_pane_vc

0xb98e,	// (0x00036686) setting_slider_pane_vc

0xb98e,	// (0x00036686) setting_text_pane_vc

0xb98e,	// (0x00036686) setting_volume_pane_vc

0xb998,	// (0x00036690) scroll_pane_cp121_vc

0x8785,	// (0x0003347d) set_content_pane_vc

0xb9a0,	// (0x00036698) button_value_adjust_pane_g1

0xb9a9,	// (0x000366a1) button_value_adjust_pane_g2

0x0001,

0xfa74,	// (0x0003a76c) button_value_adjust_pane_g

0xb9b2,	// (0x000366aa) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9b2,	// (0x000366aa) form_field_slider_wide_pane_vc_t1

0xb9c6,	// (0x000366be) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9c6,	// (0x000366be) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa79,	// (0x0003a771) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa79,	// (0x0003a771) form_field_slider_wide_pane_vc_t

0x81b7,	// (0x00032eaf) input_focus_pane_cp10_vc_ParamLimits

0x81b7,	// (0x00032eaf) input_focus_pane_cp10_vc

0xb9f4,	// (0x000366ec) slider_cont_pane_cp1_vc_ParamLimits

0xb9f4,	// (0x000366ec) slider_cont_pane_cp1_vc

0xba06,	// (0x000366fe) slider_form_pane_g1_cp2

0xb82c,	// (0x00036524) slider_form_pane_g2_cp2

0xba33,	// (0x0003672b) form_field_slider_pane_vc_t3

0xba41,	// (0x00036739) form_field_slider_pane_vc_t4

0xba4f,	// (0x00036747) slider_form_pane_vc_ParamLimits

0xba4f,	// (0x00036747) slider_form_pane_vc

0xba5c,	// (0x00036754) form_field_slider_pane_vc_t1_ParamLimits

0xba5c,	// (0x00036754) form_field_slider_pane_vc_t1

0xb9c6,	// (0x000366be) form_field_slider_pane_vc_t2_ParamLimits

0xb9c6,	// (0x000366be) form_field_slider_pane_vc_t2

0x0001,

0xfa8b,	// (0x0003a783) form_field_slider_pane_vc_t_ParamLimits

0xfa8b,	// (0x0003a783) form_field_slider_pane_vc_t

0x81b7,	// (0x00032eaf) input_focus_pane_cp9_vc_ParamLimits

0x81b7,	// (0x00032eaf) input_focus_pane_cp9_vc

0xba78,	// (0x00036770) slider_cont_pane_vc_ParamLimits

0xba78,	// (0x00036770) slider_cont_pane_vc

0xba8c,	// (0x00036784) list_form_graphic_pane_cp_vc_ParamLimits

0xba8c,	// (0x00036784) list_form_graphic_pane_cp_vc

0x9d6f,	// (0x00034a67) form_field_popup_wide_pane_vc_g1

0xbaa1,	// (0x00036799) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbaa1,	// (0x00036799) form_field_popup_wide_pane_vc_t1

0x87ab,	// (0x000334a3) input_focus_pane_cp8_vc_ParamLimits

0x87ab,	// (0x000334a3) input_focus_pane_cp8_vc

0xbae6,	// (0x000367de) list_form_wide_pane_vc_ParamLimits

0xbae6,	// (0x000367de) list_form_wide_pane_vc

0xbaf2,	// (0x000367ea) list_form_graphic_pane_vc_g1

0xbafa,	// (0x000367f2) list_form_graphic_pane_vc_t1_ParamLimits

0xbafa,	// (0x000367f2) list_form_graphic_pane_vc_t1

0x77dc,	// (0x000324d4) list_highlight_pane_cp5_vc_ParamLimits

0x77dc,	// (0x000324d4) list_highlight_pane_cp5_vc

0xbb16,	// (0x0003680e) list_form_graphic_pane_vc_ParamLimits

0xbb16,	// (0x0003680e) list_form_graphic_pane_vc

0x9d6f,	// (0x00034a67) form_field_popup_pane_vc_g1

0xbb2c,	// (0x00036824) form_field_popup_pane_vc_t1_ParamLimits

0xbb2c,	// (0x00036824) form_field_popup_pane_vc_t1

0x87ab,	// (0x000334a3) input_focus_pane_cp7_vc_ParamLimits

0x87ab,	// (0x000334a3) input_focus_pane_cp7_vc

0xbb43,	// (0x0003683b) list_form_pane_vc_ParamLimits

0xbb43,	// (0x0003683b) list_form_pane_vc

0xbb4f,	// (0x00036847) data_form_pane_vc_t1_ParamLimits

0xbb4f,	// (0x00036847) data_form_pane_vc_t1

0x8806,	// (0x000334fe) input_focus_pane_vc_g1

0x880e,	// (0x00033506) input_focus_pane_vc_g2

0x8816,	// (0x0003350e) input_focus_pane_vc_g3

0x881e,	// (0x00033516) input_focus_pane_vc_g4

0x8826,	// (0x0003351e) input_focus_pane_vc_g5

0x882e,	// (0x00033526) input_focus_pane_vc_g6

0x8836,	// (0x0003352e) input_focus_pane_vc_g7

0x883e,	// (0x00033536) input_focus_pane_vc_g8

0x8846,	// (0x0003353e) input_focus_pane_vc_g9

0x76f2,	// (0x000323ea) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003a384) input_focus_pane_vc_g

0x9d63,	// (0x00034a5b) data_form_pane_vc_ParamLimits

0x9d63,	// (0x00034a5b) data_form_pane_vc

0x9d6f,	// (0x00034a67) form_field_data_pane_vc_g1

0xbb6a,	// (0x00036862) form_field_data_pane_vc_t1_ParamLimits

0xbb6a,	// (0x00036862) form_field_data_pane_vc_t1

0x87ab,	// (0x000334a3) input_focus_pane_vc_ParamLimits

0x87ab,	// (0x000334a3) input_focus_pane_vc

0xbb84,	// (0x0003687c) button_value_adjust_pane_cp3_vc

0xbb8c,	// (0x00036884) button_value_adjust_pane_cp5_vc

0xbb94,	// (0x0003688c) form_field_data_pane_vc_ParamLimits

0xbb94,	// (0x0003688c) form_field_data_pane_vc

0xbbab,	// (0x000368a3) form_field_data_pane_vc_cp2

0xbbb3,	// (0x000368ab) form_field_data_wide_pane_vc_ParamLimits

0xbbb3,	// (0x000368ab) form_field_data_wide_pane_vc

0xbbc9,	// (0x000368c1) form_field_data_wide_pane_vc_cp2

0xbbd1,	// (0x000368c9) form_field_popup_pane_vc_ParamLimits

0xbbd1,	// (0x000368c9) form_field_popup_pane_vc

0xbbe8,	// (0x000368e0) form_field_popup_wide_pane_vc_ParamLimits

0xbbe8,	// (0x000368e0) form_field_popup_wide_pane_vc

0xbbfe,	// (0x000368f6) form_field_slider_pane_vc_ParamLimits

0xbbfe,	// (0x000368f6) form_field_slider_pane_vc

0xbc11,	// (0x00036909) form_field_slider_wide_pane_vc_ParamLimits

0xbc11,	// (0x00036909) form_field_slider_wide_pane_vc

0xbc24,	// (0x0003691c) grid_touch_1_pane_ParamLimits

0xbc24,	// (0x0003691c) grid_touch_1_pane

0xbc30,	// (0x00036928) grid_touch_2_pane_ParamLimits

0xbc30,	// (0x00036928) grid_touch_2_pane

0x96fc,	// (0x000343f4) touch_pane_g1_ParamLimits

0x96fc,	// (0x000343f4) touch_pane_g1

0xbc48,	// (0x00036940) cell_app_pane_cp_wide_ParamLimits

0xbc48,	// (0x00036940) cell_app_pane_cp_wide

0xbc59,	// (0x00036951) grid_popup_fast_wide_pane_ParamLimits

0xbc59,	// (0x00036951) grid_popup_fast_wide_pane

0xbc6d,	// (0x00036965) scroll_pane_cp19_ParamLimits

0xbc6d,	// (0x00036965) scroll_pane_cp19

0x76fc,	// (0x000323f4) bg_popup_window_pane_cp20

0xbc81,	// (0x00036979) listscroll_popup_fast_wide_pane

0x77dc,	// (0x000324d4) grid_indicator_nsta_pane

0xbc89,	// (0x00036981) clock_nsta_pane_g1

0xbc92,	// (0x0003698a) clock_nsta_pane_t1

0xbcae,	// (0x000369a6) cell_indicator_nsta_pane_ParamLimits

0xbcae,	// (0x000369a6) cell_indicator_nsta_pane

0xbcdf,	// (0x000369d7) cell_indicator_nsta_pane_g1

0xbced,	// (0x000369e5) cell_indicator_nsta_pane_g2

0x0001,

0xfa9c,	// (0x0003a794) cell_indicator_nsta_pane_g

0xbcfa,	// (0x000369f2) clock_nsta_pane_cp

0xbd02,	// (0x000369fa) indicator_nsta_pane_cp

0xbd0a,	// (0x00036a02) nsta_clock_indic_pane_g1

0x78a5,	// (0x0003259d) grid_indicator_pane

0x8d3e,	// (0x00033a36) scroll_pane_cp29

0x57b8,	// (0x000304b0) indicator_nsta_pane_cp2_ParamLimits

0x57b8,	// (0x000304b0) indicator_nsta_pane_cp2

0x77dc,	// (0x000324d4) main_apps_wheel_pane

0x9f84,	// (0x00034c7c) form_midp_field_text_pane_ParamLimits

0xa0cf,	// (0x00034dc7) scroll_bar_cp050_ParamLimits

0xbd6b,	// (0x00036a63) cell_indicator_pane_ParamLimits

0xbd6b,	// (0x00036a63) cell_indicator_pane

0xbd82,	// (0x00036a7a) cell_indicator_pane_g1

0xbd8c,	// (0x00036a84) grid_wheel_folder_pane_ParamLimits

0xbd8c,	// (0x00036a84) grid_wheel_folder_pane

0xbda2,	// (0x00036a9a) list_wheel_apps_pane_ParamLimits

0xbda2,	// (0x00036a9a) list_wheel_apps_pane

0xbdb3,	// (0x00036aab) main_apps_wheel_pane_g1_ParamLimits

0xbdb3,	// (0x00036aab) main_apps_wheel_pane_g1

0xbdc7,	// (0x00036abf) main_apps_wheel_pane_g2_ParamLimits

0xbdc7,	// (0x00036abf) main_apps_wheel_pane_g2

0x0001,

0xfab8,	// (0x0003a7b0) main_apps_wheel_pane_g_ParamLimits

0xfab8,	// (0x0003a7b0) main_apps_wheel_pane_g

0xbddf,	// (0x00036ad7) main_apps_wheel_pane_t1_ParamLimits

0xbddf,	// (0x00036ad7) main_apps_wheel_pane_t1

0xbe02,	// (0x00036afa) list_wheel_apps_pane_g1

0xbe0a,	// (0x00036b02) list_wheel_apps_pane_g2

0xbe12,	// (0x00036b0a) list_wheel_apps_pane_g3

0xbe1a,	// (0x00036b12) list_wheel_apps_pane_g4

0xbe24,	// (0x00036b1c) list_wheel_apps_pane_g5

0x0004,

0xfabd,	// (0x0003a7b5) list_wheel_apps_pane_g

0x92c1,	// (0x00033fb9) navi_icon_text_pane

0x97a1,	// (0x00034499) aid_fill_nsta

0xbe47,	// (0x00036b3f) navi_icon_text_pane_g1

0xbe53,	// (0x00036b4b) navi_icon_text_pane_t1

0x9154,	// (0x00033e4c) list_set_graphic_pane_t1_ParamLimits

0x9154,	// (0x00033e4c) list_set_graphic_pane_t1

0xa81e,	// (0x00035516) popup_midp_note_alarm_window_t6_ParamLimits

0xa81e,	// (0x00035516) popup_midp_note_alarm_window_t6

0xa830,	// (0x00035528) popup_midp_note_alarm_window_t7_ParamLimits

0xa830,	// (0x00035528) popup_midp_note_alarm_window_t7

0xa842,	// (0x0003553a) popup_midp_note_alarm_window_t8_ParamLimits

0xa842,	// (0x0003553a) popup_midp_note_alarm_window_t8

0xa854,	// (0x0003554c) popup_midp_note_alarm_window_t9_ParamLimits

0xa854,	// (0x0003554c) popup_midp_note_alarm_window_t9

0xa866,	// (0x0003555e) popup_midp_note_alarm_window_t10_ParamLimits

0xa866,	// (0x0003555e) popup_midp_note_alarm_window_t10

0xa878,	// (0x00035570) popup_midp_note_alarm_window_t11_ParamLimits

0xa878,	// (0x00035570) popup_midp_note_alarm_window_t11

0xa88a,	// (0x00035582) scroll_pane_cp17_ParamLimits

0xa88a,	// (0x00035582) scroll_pane_cp17

0x630a,	// (0x00031002) volume_small_pane_cp_g1

0x66a6,	// (0x0003139e) volume_small_pane_cp_g2

0x66af,	// (0x000313a7) volume_small_pane_cp_g3

0x66b8,	// (0x000313b0) volume_small_pane_cp_g4

0x66c1,	// (0x000313b9) volume_small_pane_cp_g5

0x66ca,	// (0x000313c2) volume_small_pane_cp_g6

0x66d3,	// (0x000313cb) volume_small_pane_cp_g7

0x66dc,	// (0x000313d4) volume_small_pane_cp_g8

0x66e5,	// (0x000313dd) volume_small_pane_cp_g9

0x66ee,	// (0x000313e6) volume_small_pane_cp_g10

0x9512,	// (0x0003420a) midp_ticker_pane_g1_ParamLimits

0x951e,	// (0x00034216) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003a450) midp_ticker_pane_g_ParamLimits

0x952a,	// (0x00034222) midp_ticker_pane_t1_ParamLimits

0x97b7,	// (0x000344af) aid_fill_nsta_2

0xa0bb,	// (0x00034db3) list_form2_midp_pane

0xb1f0,	// (0x00035ee8) midp_editing_number_pane_ParamLimits

0xb1ff,	// (0x00035ef7) midp_ticker_pane_ParamLimits

0xbe65,	// (0x00036b5d) form2_midp_field_pane

0xbe89,	// (0x00036b81) scroll_pane_cp51

0xbea9,	// (0x00036ba1) form2_midp_button_pane_ParamLimits

0xbea9,	// (0x00036ba1) form2_midp_button_pane

0xbebb,	// (0x00036bb3) form2_midp_content_pane_ParamLimits

0xbebb,	// (0x00036bb3) form2_midp_content_pane

0xbed5,	// (0x00036bcd) form2_midp_field_choice_group_pane

0xbedd,	// (0x00036bd5) form2_midp_field_pane_g1

0xbee5,	// (0x00036bdd) form2_midp_field_pane_g2

0xbeed,	// (0x00036be5) form2_midp_field_pane_g3

0xbef5,	// (0x00036bed) form2_midp_field_pane_g4

0x0003,

0xfae2,	// (0x0003a7da) form2_midp_field_pane_g

0xbefd,	// (0x00036bf5) form2_midp_gauge_slider_pane

0xbf05,	// (0x00036bfd) form2_midp_gauge_wait_pane

0xbf0d,	// (0x00036c05) form2_midp_image_pane_ParamLimits

0xbf0d,	// (0x00036c05) form2_midp_image_pane

0xbf28,	// (0x00036c20) form2_midp_label_pane_ParamLimits

0xbf28,	// (0x00036c20) form2_midp_label_pane

0xbf41,	// (0x00036c39) form2_midp_label_pane_cp_ParamLimits

0xbf41,	// (0x00036c39) form2_midp_label_pane_cp

0xbf62,	// (0x00036c5a) form2_midp_string_pane_ParamLimits

0xbf62,	// (0x00036c5a) form2_midp_string_pane

0x7d8b,	// (0x00032a83) form2_midp_text_pane_ParamLimits

0x7d8b,	// (0x00032a83) form2_midp_text_pane

0xbf74,	// (0x00036c6c) form2_midp_time_pane

0xbf84,	// (0x00036c7c) input_focus_pane_cp51_ParamLimits

0xbf84,	// (0x00036c7c) input_focus_pane_cp51

0xbf9c,	// (0x00036c94) form2_midp_label_pane_t1_ParamLimits

0xbf9c,	// (0x00036c94) form2_midp_label_pane_t1

0x7da6,	// (0x00032a9e) form2_mdip_text_pane_t1_ParamLimits

0x7da6,	// (0x00032a9e) form2_mdip_text_pane_t1

0x7dc4,	// (0x00032abc) form2_midp_time_pane_t1

0xbfe5,	// (0x00036cdd) form2_midp_gauge_slider_pane_t1

0xbff7,	// (0x00036cef) form2_midp_gauge_slider_pane_t2

0xc009,	// (0x00036d01) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaeb,	// (0x0003a7e3) form2_midp_gauge_slider_pane_t

0xc01b,	// (0x00036d13) form2_midp_slider_pane

0xc027,	// (0x00036d1f) form2_midp_gauge_wait_pane_t1

0xc035,	// (0x00036d2d) form2_midp_wait_pane_ParamLimits

0xc035,	// (0x00036d2d) form2_midp_wait_pane

0x9db6,	// (0x00034aae) list_single_2graphic_pane_cp4_ParamLimits

0x9db6,	// (0x00034aae) list_single_2graphic_pane_cp4

0xc060,	// (0x00036d58) list_single_midp_graphic_pane_cp_ParamLimits

0xc060,	// (0x00036d58) list_single_midp_graphic_pane_cp

0x76fc,	// (0x000323f4) list_highlight_pane_cp20

0xc08f,	// (0x00036d87) list_single_2graphic_pane_g1_cp4

0xc097,	// (0x00036d8f) list_single_2graphic_pane_g2_cp4

0xc09f,	// (0x00036d97) list_single_2graphic_pane_t1_cp4

0x77dc,	// (0x000324d4) list_highlight_pane_cp21

0xc0ae,	// (0x00036da6) list_single_midp_graphic_pane_g4_cp

0xc0bd,	// (0x00036db5) list_single_midp_graphic_pane_t1_cp

0xc0d2,	// (0x00036dca) form2_mdip_string_pane_t1_ParamLimits

0xc0d2,	// (0x00036dca) form2_mdip_string_pane_t1

0x76fc,	// (0x000323f4) bg_wml_button_pane_cp2

0x76f2,	// (0x000323ea) form2_midp_image_pane_g1

0x4ff0,	// (0x0002fce8) list_double_large_graphic_pane_g5_ParamLimits

0x4ff0,	// (0x0002fce8) list_double_large_graphic_pane_g5

0x898f,	// (0x00033687) midp_form_pane_ParamLimits

0x77dc,	// (0x000324d4) main_apps_wheel_pane_ParamLimits

0x5e91,	// (0x00030b89) popup_preview_window_ParamLimits

0x5e91,	// (0x00030b89) popup_preview_window

0x604c,	// (0x00030d44) popup_touch_info_window_ParamLimits

0x604c,	// (0x00030d44) popup_touch_info_window

0x606a,	// (0x00030d62) popup_touch_menu_window_ParamLimits

0x606a,	// (0x00030d62) popup_touch_menu_window

0x76e8,	// (0x000323e0) bg_popup_sub_pane_cp6

0xc1d7,	// (0x00036ecf) list_touch_menu_pane

0xc1df,	// (0x00036ed7) list_single_touch_menu_pane_ParamLimits

0xc1df,	// (0x00036ed7) list_single_touch_menu_pane

0xc1f5,	// (0x00036eed) list_single_touch_menu_pane_t1

0x77dc,	// (0x000324d4) bg_popup_sub_pane_cp7_ParamLimits

0x77dc,	// (0x000324d4) bg_popup_sub_pane_cp7

0xc203,	// (0x00036efb) heading_sub_pane

0xc20b,	// (0x00036f03) list_touch_info_pane_ParamLimits

0xc20b,	// (0x00036f03) list_touch_info_pane

0xc21a,	// (0x00036f12) list_single_touch_info_pane_ParamLimits

0xc21a,	// (0x00036f12) list_single_touch_info_pane

0xc22c,	// (0x00036f24) list_single_touch_info_pane_t1

0xc23a,	// (0x00036f32) list_single_touch_info_pane_t2

0x0001,

0xfaf9,	// (0x0003a7f1) list_single_touch_info_pane_t

0x9441,	// (0x00034139) bg_popup_heading_pane_cp

0xc248,	// (0x00036f40) heading_sub_pane_t1

0x9cfd,	// (0x000349f5) bg_popup_preview_window_pane_cp_ParamLimits

0x9cfd,	// (0x000349f5) bg_popup_preview_window_pane_cp

0xc203,	// (0x00036efb) heading_preview_pane

0xc20b,	// (0x00036f03) list_preview_pane_ParamLimits

0xc20b,	// (0x00036f03) list_preview_pane

0xc256,	// (0x00036f4e) popup_preview_window_g1

0xc21a,	// (0x00036f12) list_single_preview_pane_ParamLimits

0xc21a,	// (0x00036f12) list_single_preview_pane

0xc25e,	// (0x00036f56) list_single_preview_pane_g1

0xc266,	// (0x00036f5e) list_single_preview_pane_t1

0xc22c,	// (0x00036f24) list_single_preview_pane_t2

0x0001,

0xfafe,	// (0x0003a7f6) list_single_preview_pane_t

0xc274,	// (0x00036f6c) bg_popup_heading_pane_cp2_ParamLimits

0xc274,	// (0x00036f6c) bg_popup_heading_pane_cp2

0xc28a,	// (0x00036f82) heading_preview_pane_g1

0xc292,	// (0x00036f8a) heading_preview_pane_t1_ParamLimits

0xc292,	// (0x00036f8a) heading_preview_pane_t1

0x78c8,	// (0x000325c0) soft_indicator_pane_t1_ParamLimits

0x871e,	// (0x00033416) scroll_pane_ParamLimits

0x8c37,	// (0x0003392f) scroll_sc2_left_pane

0x8c40,	// (0x00033938) scroll_sc2_right_pane

0x8c5f,	// (0x00033957) scroll_bg_pane_g1_ParamLimits

0x8c74,	// (0x0003396c) scroll_bg_pane_g2_ParamLimits

0x8c8c,	// (0x00033984) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003a3db) scroll_bg_pane_g_ParamLimits

0x8c5f,	// (0x00033957) scroll_handle_pane_g1_ParamLimits

0x8cae,	// (0x000339a6) scroll_handle_pane_g2_ParamLimits

0x8c8c,	// (0x00033984) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003a3e2) scroll_handle_pane_g_ParamLimits

0x5b12,	// (0x0003080a) popup_choice_list_window_ParamLimits

0x5b12,	// (0x0003080a) popup_choice_list_window

0x9bd3,	// (0x000348cb) choice_list_pane

0x9c55,	// (0x0003494d) cell_toolbar_pane_t1

0x9c7d,	// (0x00034975) toolbar_button_pane_ParamLimits

0xad50,	// (0x00035a48) ai_gene_pane_1_t2_ParamLimits

0xad50,	// (0x00035a48) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0003a60a) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0003a60a) ai_gene_pane_1_t

0xc2af,	// (0x00036fa7) scroll_sc2_left_pane_g1

0xc2af,	// (0x00036fa7) scroll_sc2_right_pane_g1

0x977f,	// (0x00034477) bg_popup_sub_pane_cp10

0xc2b9,	// (0x00036fb1) list_choice_list_pane

0xc2d2,	// (0x00036fca) list_single_choice_list_pane_ParamLimits

0xc2d2,	// (0x00036fca) list_single_choice_list_pane

0xc2e5,	// (0x00036fdd) list_single_choice_list_pane_g1

0x893f,	// (0x00033637) list_single_choice_list_pane_t1_ParamLimits

0x893f,	// (0x00033637) list_single_choice_list_pane_t1

0xc2ed,	// (0x00036fe5) choice_list_pane_g1

0xc2f5,	// (0x00036fed) choice_list_pane_t1

0x76e8,	// (0x000323e0) input_focus_pane_cp11

0x8b16,	// (0x0003380e) title_pane_stacon_g2_ParamLimits

0x8b16,	// (0x0003380e) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003a3c1) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003a3c1) title_pane_stacon_g

0x9441,	// (0x00034139) cursor_press_pane

0x5bbe,	// (0x000308b6) popup_fep_hwr_window_ParamLimits

0x5bbe,	// (0x000308b6) popup_fep_hwr_window

0x5c38,	// (0x00030930) popup_fep_vkb_window_ParamLimits

0x5c38,	// (0x00030930) popup_fep_vkb_window

0xc303,	// (0x00036ffb) cursor_press_pane_g1

0x0002,

0xfb27,	// (0x0003a81f) fep_vkb_side_pane_g_ParamLimits

0x6730,	// (0x00031428) fep_hwr_candidate_pane_ParamLimits

0x6730,	// (0x00031428) fep_hwr_candidate_pane

0x675a,	// (0x00031452) fep_hwr_side_pane_ParamLimits

0x675a,	// (0x00031452) fep_hwr_side_pane

0x677a,	// (0x00031472) fep_hwr_top_pane_ParamLimits

0x677a,	// (0x00031472) fep_hwr_top_pane

0x6792,	// (0x0003148a) fep_hwr_write_pane_ParamLimits

0x6792,	// (0x0003148a) fep_hwr_write_pane

0xfb27,	// (0x0003a81f) fep_vkb_side_pane_g

0xc30b,	// (0x00037003) fep_hwr_top_pane_g1

0xc31d,	// (0x00037015) fep_hwr_top_pane_g2

0x67cc,	// (0x000314c4) fep_hwr_top_pane_g3

0x0002,

0xfb03,	// (0x0003a7fb) fep_hwr_top_pane_g

0x67e1,	// (0x000314d9) fep_hwr_top_text_pane

0x8e2e,	// (0x00033b26) fep_hwr_top_text_pane_g1

0xc353,	// (0x0003704b) fep_hwr_top_text_pane_t1

0x68d7,	// (0x000315cf) fep_hwr_candidate_pane_g1

0xc5a6,	// (0x0003729e) fep_vkb_keypad_pane_g3_ParamLimits

0xc5a6,	// (0x0003729e) fep_vkb_keypad_pane_g3

0xc5ce,	// (0x000372c6) fep_vkb_keypad_pane_g4_ParamLimits

0xc5ce,	// (0x000372c6) fep_vkb_keypad_pane_g4

0xc63d,	// (0x00037335) fep_vkb_bottom_pane_g2_ParamLimits

0xc63d,	// (0x00037335) fep_vkb_bottom_pane_g2

0x0001,

0xfb2e,	// (0x0003a826) fep_vkb_bottom_pane_g_ParamLimits

0xfb2e,	// (0x0003a826) fep_vkb_bottom_pane_g

0xc2af,	// (0x00036fa7) cell_vkb_side_pane_g2

0x0001,

0xfb38,	// (0x0003a830) cell_vkb_side_pane_g

0xc6c8,	// (0x000373c0) cell_vkb_side_pane_t1

0xc6d6,	// (0x000373ce) cell_vkb_side_pane_t1_copy1

0xc2af,	// (0x00036fa7) bg_fep_vkb_candidate_pane_g2

0xc802,	// (0x000374fa) cell_vkb_candidate_pane_ParamLimits

0xc361,	// (0x00037059) aid_size_cell_vkb_ParamLimits

0xc361,	// (0x00037059) aid_size_cell_vkb

0xc802,	// (0x000374fa) cell_vkb_candidate_pane

0x68fe,	// (0x000315f6) bg_popup_fep_shadow_pane_g1

0xc3ef,	// (0x000370e7) fep_vkb_bottom_pane_ParamLimits

0xc3ef,	// (0x000370e7) fep_vkb_bottom_pane

0xc425,	// (0x0003711d) fep_vkb_candidate_pane_ParamLimits

0xc425,	// (0x0003711d) fep_vkb_candidate_pane

0xc441,	// (0x00037139) fep_vkb_keypad_pane_ParamLimits

0xc441,	// (0x00037139) fep_vkb_keypad_pane

0xc487,	// (0x0003717f) fep_vkb_side_pane_ParamLimits

0xc487,	// (0x0003717f) fep_vkb_side_pane

0xc4c3,	// (0x000371bb) fep_vkb_top_pane_ParamLimits

0xc4c3,	// (0x000371bb) fep_vkb_top_pane

0xc4ff,	// (0x000371f7) fep_vkb_top_pane_g1_ParamLimits

0xc4ff,	// (0x000371f7) fep_vkb_top_pane_g1

0xc50e,	// (0x00037206) fep_vkb_top_pane_g2_ParamLimits

0xc50e,	// (0x00037206) fep_vkb_top_pane_g2

0xc51d,	// (0x00037215) fep_vkb_top_pane_g3_ParamLimits

0xc51d,	// (0x00037215) fep_vkb_top_pane_g3

0x0003,

0xfb1e,	// (0x0003a816) fep_vkb_top_pane_g_ParamLimits

0xfb1e,	// (0x0003a816) fep_vkb_top_pane_g

0xc53b,	// (0x00037233) fep_vkb_top_text_pane_ParamLimits

0xc53b,	// (0x00037233) fep_vkb_top_text_pane

0xc54c,	// (0x00037244) fep_vkb_side_pane_g1_ParamLimits

0xc54c,	// (0x00037244) fep_vkb_side_pane_g1

0xc595,	// (0x0003728d) grid_vkb_side_pane_ParamLimits

0xc595,	// (0x0003728d) grid_vkb_side_pane

0x6906,	// (0x000315fe) bg_popup_fep_shadow_pane_g2

0x690f,	// (0x00031607) bg_popup_fep_shadow_pane_g3

0x6917,	// (0x0003160f) bg_popup_fep_shadow_pane_g4

0x6920,	// (0x00031618) bg_popup_fep_shadow_pane_g5

0x692a,	// (0x00031622) bg_popup_fep_shadow_pane_g6

0x6932,	// (0x0003162a) bg_popup_fep_shadow_pane_g7

0x881e,	// (0x00033516) bg_popup_fep_shadow_pane_g8

0xc5ec,	// (0x000372e4) grid_vkb_keypad_number_pane_ParamLimits

0xc5ec,	// (0x000372e4) grid_vkb_keypad_number_pane

0xc5fc,	// (0x000372f4) grid_vkb_keypad_pane_ParamLimits

0xc5fc,	// (0x000372f4) grid_vkb_keypad_pane

0xc622,	// (0x0003731a) fep_vkb_bottom_pane_g1_ParamLimits

0xc622,	// (0x0003731a) fep_vkb_bottom_pane_g1

0xc64b,	// (0x00037343) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64b,	// (0x00037343) grid_vkb_keypad_bottom_left_pane

0xc660,	// (0x00037358) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc660,	// (0x00037358) grid_vkb_keypad_bottom_right_pane

0xc675,	// (0x0003736d) fep_vkb_top_text_pane_g1

0xc690,	// (0x00037388) fep_vkb_top_text_pane_t1

0xc6a5,	// (0x0003739d) cell_vkb_side_pane_ParamLimits

0xc6a5,	// (0x0003739d) cell_vkb_side_pane

0xc2af,	// (0x00036fa7) cell_vkb_side_pane_g1

0xc6e4,	// (0x000373dc) cell_vkb_keypad_pane_ParamLimits

0xc6e4,	// (0x000373dc) cell_vkb_keypad_pane

0xc759,	// (0x00037451) cell_vkb_keypad_pane_g1

0x0008,

0xfb4b,	// (0x0003a843) bg_popup_fep_shadow_pane_g

0x6944,	// (0x0003163c) cell_hwr_side_pane_g1

0x6944,	// (0x0003163c) cell_hwr_side_pane_g2

0xc763,	// (0x0003745b) cell_vkb_keypad_pane_t1

0xc771,	// (0x00037469) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc771,	// (0x00037469) cell_vkb_keypad_bottom_left_pane

0xc78e,	// (0x00037486) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc78e,	// (0x00037486) cell_vkb_keypad_bottom_right_pane

0xc2af,	// (0x00036fa7) cell_vkb_keypad_bottom_left_pane_g1

0xc2af,	// (0x00036fa7) cell_vkb_keypad_bottom_right_pane_g1

0xc7c7,	// (0x000374bf) cell_vkb_keypad_number_pane_ParamLimits

0xc7c7,	// (0x000374bf) cell_vkb_keypad_number_pane

0xc7e6,	// (0x000374de) cell_vkb_keypad_number_pane_g1

0xc7f0,	// (0x000374e8) cell_vkb_keypad_number_pane_g2

0xc7f9,	// (0x000374f1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3d,	// (0x0003a835) cell_vkb_keypad_number_pane_g

0xc763,	// (0x0003745b) cell_vkb_keypad_number_pane_t1

0xc81d,	// (0x00037515) fep_vkb_candidate_pane_g1

0x0001,

0xfb5e,	// (0x0003a856) cell_hwr_side_pane_g

0xc836,	// (0x0003752e) cell_hwr_side_pane_t1

0x694e,	// (0x00031646) cell_hwr_side_pane_t1_copy1

0x695c,	// (0x00031654) cell_hwr_candidate_pane_g1

0x698b,	// (0x00031683) cell_hwr_candidate_pane_t1

0xc2af,	// (0x00036fa7) cell_vkb_candidate_pane_g2

0xc87a,	// (0x00037572) cell_vkb_candidate_pane_t1

0x66f7,	// (0x000313ef) bg_popup_fep_shadow_pane_ParamLimits

0x66f7,	// (0x000313ef) bg_popup_fep_shadow_pane

0x67ac,	// (0x000314a4) bg_fep_hwr_top_pane_g4

0xc32f,	// (0x00037027) bg_hwr_side_pane_g1_ParamLimits

0xc32f,	// (0x00037027) bg_hwr_side_pane_g1

0x681d,	// (0x00031515) cell_hwr_side_pane_ParamLimits

0x681d,	// (0x00031515) cell_hwr_side_pane

0x6858,	// (0x00031550) fep_hwr_write_pane_g1_ParamLimits

0x6858,	// (0x00031550) fep_hwr_write_pane_g1

0x6865,	// (0x0003155d) fep_hwr_write_pane_g2_ParamLimits

0x6865,	// (0x0003155d) fep_hwr_write_pane_g2

0x6872,	// (0x0003156a) fep_hwr_write_pane_g3_ParamLimits

0x6872,	// (0x0003156a) fep_hwr_write_pane_g3

0x6880,	// (0x00031578) fep_hwr_write_pane_g4_ParamLimits

0x6880,	// (0x00031578) fep_hwr_write_pane_g4

0x0005,

0xfb0a,	// (0x0003a802) fep_hwr_write_pane_g_ParamLimits

0xfb0a,	// (0x0003a802) fep_hwr_write_pane_g

0x67ac,	// (0x000314a4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x67ac,	// (0x000314a4) bg_fep_hwr_candidate_pane_g2

0x6895,	// (0x0003158d) cell_hwr_candidate_pane_ParamLimits

0x6895,	// (0x0003158d) cell_hwr_candidate_pane

0x68d7,	// (0x000315cf) fep_hwr_candidate_pane_g1_ParamLimits

0xc38f,	// (0x00037087) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc38f,	// (0x00037087) bg_popup_fep_shadow_pane_cp2

0xc52d,	// (0x00037225) fep_vkb_top_pane_g4_ParamLimits

0xc52d,	// (0x00037225) fep_vkb_top_pane_g4

0xc573,	// (0x0003726b) fep_vkb_side_pane_g2_ParamLimits

0xc573,	// (0x0003726b) fep_vkb_side_pane_g2

0x5133,	// (0x0002fe2b) list_setting_pane_t4_ParamLimits

0x5133,	// (0x0002fe2b) list_setting_pane_t4

0x51cd,	// (0x0002fec5) list_setting_number_pane_t5_ParamLimits

0x51cd,	// (0x0002fec5) list_setting_number_pane_t5

0x8e75,	// (0x00033b6d) list_double_heading_pane_cp2_ParamLimits

0x8e75,	// (0x00033b6d) list_double_heading_pane_cp2

0x87b9,	// (0x000334b1) list_double_heading_pane_g1_cp2_ParamLimits

0x87b9,	// (0x000334b1) list_double_heading_pane_g1_cp2

0x87c5,	// (0x000334bd) list_double_heading_pane_g2_cp2_ParamLimits

0x87c5,	// (0x000334bd) list_double_heading_pane_g2_cp2

0xc888,	// (0x00037580) list_double_heading_pane_t1_cp2_ParamLimits

0xc888,	// (0x00037580) list_double_heading_pane_t1_cp2

0xc89e,	// (0x00037596) list_double_heading_pane_t2_cp2_ParamLimits

0xc89e,	// (0x00037596) list_double_heading_pane_t2_cp2

0x76d0,	// (0x000323c8) aid_value_unit2

0x4ba3,	// (0x0002f89b) popup_preview_fixed_window

0x81c5,	// (0x00032ebd) bg_popup_preview_window_pane_cp02

0xc8b0,	// (0x000375a8) list_preview_fixed_pane

0xc8f6,	// (0x000375ee) list_empty_pane_fp_ParamLimits

0xc8f6,	// (0x000375ee) list_empty_pane_fp

0xc8f6,	// (0x000375ee) list_single_cale_day_pane_fp_ParamLimits

0xc8f6,	// (0x000375ee) list_single_cale_day_pane_fp

0xc8f6,	// (0x000375ee) list_single_graphic_heading_pane_fp_ParamLimits

0xc8f6,	// (0x000375ee) list_single_graphic_heading_pane_fp

0xc8f6,	// (0x000375ee) list_single_graphic_pane_fp_ParamLimits

0xc8f6,	// (0x000375ee) list_single_graphic_pane_fp

0xc8f6,	// (0x000375ee) list_single_heading_pane_fp_ParamLimits

0xc8f6,	// (0x000375ee) list_single_heading_pane_fp

0xc8f6,	// (0x000375ee) list_single_pane_fp_ParamLimits

0xc8f6,	// (0x000375ee) list_single_pane_fp

0xc90b,	// (0x00037603) list_single_pane_fp_g1_ParamLimits

0xc90b,	// (0x00037603) list_single_pane_fp_g1

0x7dd7,	// (0x00032acf) list_single_pane_fp_g2_ParamLimits

0x7dd7,	// (0x00032acf) list_single_pane_fp_g2

0x7de3,	// (0x00032adb) list_single_pane_fp_g3_ParamLimits

0x7de3,	// (0x00032adb) list_single_pane_fp_g3

0xc917,	// (0x0003760f) list_single_pane_fp_g4_ParamLimits

0xc917,	// (0x0003760f) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x0003a869) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x0003a869) list_single_pane_fp_g

0x7df7,	// (0x00032aef) list_single_pane_fp_t1_ParamLimits

0x7df7,	// (0x00032aef) list_single_pane_fp_t1

0x7e0e,	// (0x00032b06) list_single_graphic_pane_fp_g1_ParamLimits

0x7e0e,	// (0x00032b06) list_single_graphic_pane_fp_g1

0xc90b,	// (0x00037603) list_single_graphic_pane_fp_g2_ParamLimits

0xc90b,	// (0x00037603) list_single_graphic_pane_fp_g2

0x7dd7,	// (0x00032acf) list_single_graphic_pane_fp_g3_ParamLimits

0x7dd7,	// (0x00032acf) list_single_graphic_pane_fp_g3

0x7de3,	// (0x00032adb) list_single_graphic_pane_fp_g4_ParamLimits

0x7de3,	// (0x00032adb) list_single_graphic_pane_fp_g4

0xc917,	// (0x0003760f) list_single_graphic_pane_fp_g5_ParamLimits

0xc917,	// (0x0003760f) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a872) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a872) list_single_graphic_pane_fp_g

0x7e1a,	// (0x00032b12) list_single_graphic_pane_fp_t1_ParamLimits

0x7e1a,	// (0x00032b12) list_single_graphic_pane_fp_t1

0x7e0e,	// (0x00032b06) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7e0e,	// (0x00032b06) list_single_graphic_heading_pane_fp_g1

0xc90b,	// (0x00037603) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc90b,	// (0x00037603) list_single_graphic_heading_pane_fp_g2

0x7dd7,	// (0x00032acf) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7dd7,	// (0x00032acf) list_single_graphic_heading_pane_fp_g3

0x7de3,	// (0x00032adb) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7de3,	// (0x00032adb) list_single_graphic_heading_pane_fp_g4

0xc917,	// (0x0003760f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc917,	// (0x0003760f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a872) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a872) list_single_graphic_heading_pane_fp_g

0x7e30,	// (0x00032b28) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7e30,	// (0x00032b28) list_single_graphic_heading_pane_fp_t1

0x7e46,	// (0x00032b3e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7e46,	// (0x00032b3e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0003a87d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0003a87d) list_single_graphic_heading_pane_fp_t

0x7e58,	// (0x00032b50) list_single_cale_day_pane_fp_g1_ParamLimits

0x7e58,	// (0x00032b50) list_single_cale_day_pane_fp_g1

0xc923,	// (0x0003761b) list_single_cale_day_pane_fp_g2_ParamLimits

0xc923,	// (0x0003761b) list_single_cale_day_pane_fp_g2

0x7e90,	// (0x00032b88) list_single_cale_day_pane_fp_g3_ParamLimits

0x7e90,	// (0x00032b88) list_single_cale_day_pane_fp_g3

0x7eb8,	// (0x00032bb0) list_single_cale_day_pane_fp_g4_ParamLimits

0x7eb8,	// (0x00032bb0) list_single_cale_day_pane_fp_g4

0x7edc,	// (0x00032bd4) list_single_cale_day_pane_fp_g5_ParamLimits

0x7edc,	// (0x00032bd4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003a882) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003a882) list_single_cale_day_pane_fp_g

0x7f00,	// (0x00032bf8) list_single_cale_day_pane_fp_t1_ParamLimits

0x7f00,	// (0x00032bf8) list_single_cale_day_pane_fp_t1

0x7f26,	// (0x00032c1e) list_single_cale_day_pane_fp_t2_ParamLimits

0x7f26,	// (0x00032c1e) list_single_cale_day_pane_fp_t2

0x7f3f,	// (0x00032c37) list_single_cale_day_pane_fp_t3_ParamLimits

0x7f3f,	// (0x00032c37) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x0003a88d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x0003a88d) list_single_cale_day_pane_fp_t

0xc90b,	// (0x00037603) list_empty_pane_fp_g1_ParamLimits

0xc90b,	// (0x00037603) list_empty_pane_fp_g1

0x7f58,	// (0x00032c50) list_empty_pane_fp_t1

0x7f66,	// (0x00032c5e) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003a894) list_empty_pane_fp_t

0xc90b,	// (0x00037603) list_single_heading_pane_fp_g1_ParamLimits

0xc90b,	// (0x00037603) list_single_heading_pane_fp_g1

0x7dd7,	// (0x00032acf) list_single_heading_pane_fp_g2_ParamLimits

0x7dd7,	// (0x00032acf) list_single_heading_pane_fp_g2

0x7de3,	// (0x00032adb) list_single_heading_pane_fp_g3_ParamLimits

0x7de3,	// (0x00032adb) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x0003a899) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0003a899) list_single_heading_pane_fp_g

0x7f74,	// (0x00032c6c) list_single_heading_pane_fp_t1_ParamLimits

0x7f74,	// (0x00032c6c) list_single_heading_pane_fp_t1

0x7f86,	// (0x00032c7e) list_single_heading_pane_fp_t2_ParamLimits

0x7f86,	// (0x00032c7e) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0003a8a0) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0003a8a0) list_single_heading_pane_fp_t

0x89ad,	// (0x000336a5) aid_size_cell_fast

0x79d5,	// (0x000326cd) soft_indicator_pane_cp1_t1

0x89ea,	// (0x000336e2) cell_app_pane_cp2_ParamLimits

0x89ea,	// (0x000336e2) cell_app_pane_cp2

0x6719,	// (0x00031411) fep_hwr_candidate_drop_down_list_pane

0x68f1,	// (0x000315e9) fep_hwr_candidate_pane_g3_ParamLimits

0x68f1,	// (0x000315e9) fep_hwr_candidate_pane_g3

0x38a9,	// (0x0002e5a1) fep_hwr_candidate_pane_g4_ParamLimits

0x38a9,	// (0x0002e5a1) fep_hwr_candidate_pane_g4

0x0002,

0xfb17,	// (0x0003a80f) fep_hwr_candidate_pane_g_ParamLimits

0xfb17,	// (0x0003a80f) fep_hwr_candidate_pane_g

0xc414,	// (0x0003710c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc414,	// (0x0003710c) fep_vkb_candidate_drop_down_list_pane

0xc825,	// (0x0003751d) fep_vkb_candidate_pane_g3

0xc82d,	// (0x00037525) fep_vkb_candidate_pane_g4

0x0002,

0xfb44,	// (0x0003a83c) fep_vkb_candidate_pane_g

0x695c,	// (0x00031654) cell_hwr_candidate_pane_g1_ParamLimits

0x696a,	// (0x00031662) cell_hwr_candidate_pane_g3_ParamLimits

0x696a,	// (0x00031662) cell_hwr_candidate_pane_g3

0xe1d0,	// (0x00038ec8) cell_hwr_candidate_pane_g4_ParamLimits

0xe1d0,	// (0x00038ec8) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x0003a85b) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x0003a85b) cell_hwr_candidate_pane_g

0xc844,	// (0x0003753c) cell_vkb_candidate_pane_g3_ParamLimits

0xc844,	// (0x0003753c) cell_vkb_candidate_pane_g3

0xc85f,	// (0x00037557) cell_vkb_candidate_pane_g4_ParamLimits

0xc85f,	// (0x00037557) cell_vkb_candidate_pane_g4

0xc92f,	// (0x00037627) cell_app_pane_cp2_g1_ParamLimits

0xc92f,	// (0x00037627) cell_app_pane_cp2_g1

0xc94d,	// (0x00037645) cell_app_pane_cp2_g2_ParamLimits

0xc94d,	// (0x00037645) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x0003a8a5) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x0003a8a5) cell_app_pane_cp2_g

0xc959,	// (0x00037651) cell_app_pane_cp2_t1_ParamLimits

0xc959,	// (0x00037651) cell_app_pane_cp2_t1

0x87ab,	// (0x000334a3) grid_highlight_pane_cp1_ParamLimits

0x87ab,	// (0x000334a3) grid_highlight_pane_cp1

0x69a9,	// (0x000316a1) cell_hwr_candidate_pane_cp1_ParamLimits

0x69a9,	// (0x000316a1) cell_hwr_candidate_pane_cp1

0x695c,	// (0x00031654) fep_hwr_candidate_drop_down_list_pane_g1

0x69c8,	// (0x000316c0) fep_hwr_candidate_drop_down_list_pane_g2

0x69d5,	// (0x000316cd) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0003a8aa) fep_hwr_candidate_drop_down_list_pane_g

0x69e2,	// (0x000316da) fep_hwr_candidate_drop_down_list_scroll_pane

0x69eb,	// (0x000316e3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x69eb,	// (0x000316e3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x69f8,	// (0x000316f0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x69f8,	// (0x000316f0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6a05,	// (0x000316fd) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6a05,	// (0x000316fd) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6a12,	// (0x0003170a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6a12,	// (0x0003170a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6a2d,	// (0x00031725) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6a2d,	// (0x00031725) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6a48,	// (0x00031740) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6a48,	// (0x00031740) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6a63,	// (0x0003175b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6a63,	// (0x0003175b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6a7e,	// (0x00031776) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6a7e,	// (0x00031776) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0003a8b1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0003a8b1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc96b,	// (0x00037663) cell_vkb_candidate_pane_cp1_ParamLimits

0xc96b,	// (0x00037663) cell_vkb_candidate_pane_cp1

0xc52d,	// (0x00037225) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc52d,	// (0x00037225) fep_vkb_candidate_drop_down_list_pane_g1

0xc98b,	// (0x00037683) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98b,	// (0x00037683) fep_vkb_candidate_drop_down_list_pane_g2

0xc998,	// (0x00037690) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc998,	// (0x00037690) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbca,	// (0x0003a8c2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbca,	// (0x0003a8c2) fep_vkb_candidate_drop_down_list_pane_g

0xc9a5,	// (0x0003769d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9a5,	// (0x0003769d) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9b2,	// (0x000376aa) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9b2,	// (0x000376aa) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9bf,	// (0x000376b7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9bf,	// (0x000376b7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9cb,	// (0x000376c3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9cb,	// (0x000376c3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9d7,	// (0x000376cf) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9d7,	// (0x000376cf) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9f8,	// (0x000376f0) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9f8,	// (0x000376f0) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca19,	// (0x00037711) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca19,	// (0x00037711) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3a,	// (0x00037732) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3a,	// (0x00037732) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5b,	// (0x00037753) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5b,	// (0x00037753) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd1,	// (0x0003a8c9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd1,	// (0x0003a8c9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7706,	// (0x000323fe) title_pane_g1_ParamLimits

0x7713,	// (0x0003240b) title_pane_g2_ParamLimits

0xf54e,	// (0x0003a246) title_pane_g_ParamLimits

0x8e1e,	// (0x00033b16) aid_call2_pane

0x8e26,	// (0x00033b1e) aid_call_pane

0x8e2e,	// (0x00033b26) popup_clock_analogue_window_g1

0x8e2e,	// (0x00033b26) popup_clock_analogue_window_g2

0x562f,	// (0x00030327) popup_clock_analogue_window_g3

0x5638,	// (0x00030330) popup_clock_analogue_window_g4

0x76f2,	// (0x000323ea) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003a3f0) popup_clock_analogue_window_g

0x5640,	// (0x00030338) popup_clock_analogue_window_t1

0x564e,	// (0x00030346) clock_digital_number_pane_ParamLimits

0x564e,	// (0x00030346) clock_digital_number_pane

0x565a,	// (0x00030352) clock_digital_number_pane_cp02_ParamLimits

0x565a,	// (0x00030352) clock_digital_number_pane_cp02

0x5666,	// (0x0003035e) clock_digital_number_pane_cp03_ParamLimits

0x5666,	// (0x0003035e) clock_digital_number_pane_cp03

0x5672,	// (0x0003036a) clock_digital_number_pane_cp04_ParamLimits

0x5672,	// (0x0003036a) clock_digital_number_pane_cp04

0x567e,	// (0x00030376) clock_digital_separator_pane_ParamLimits

0x567e,	// (0x00030376) clock_digital_separator_pane

0x568a,	// (0x00030382) popup_clock_digital_window_t1_ParamLimits

0x568a,	// (0x00030382) popup_clock_digital_window_t1

0x76f2,	// (0x000323ea) clock_digital_number_pane_g1

0x76f2,	// (0x000323ea) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003a3fb) clock_digital_number_pane_g

0x76f2,	// (0x000323ea) clock_digital_separator_pane_g1

0x76f2,	// (0x000323ea) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003a3fb) clock_digital_separator_pane_g

0x97a1,	// (0x00034499) aid_fill_nsta_ParamLimits

0x98e7,	// (0x000345df) indicator_nsta_pane_ParamLimits

0x9a60,	// (0x00034758) popup_clock_analogue_window

0x9a60,	// (0x00034758) popup_clock_digital_window

0x77dc,	// (0x000324d4) grid_indicator_nsta_pane_ParamLimits

0xbca0,	// (0x00036998) clock_nsta_pane_t2

0x0001,

0xfa97,	// (0x0003a78f) clock_nsta_pane_t

0x55f3,	// (0x000302eb) aid_size_max_handle

0x55fd,	// (0x000302f5) aid_size_min_handle

0x9441,	// (0x00034139) editor_scroll_pane

0xca76,	// (0x0003776e) ex_editor_pane

0x891b,	// (0x00033613) scroll_pane_cp13

0x874a,	// (0x00033442) scroll_pane_cp14

0x8e5d,	// (0x00033b55) scroll_pane_cp36

0x8e89,	// (0x00033b81) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e89,	// (0x00033b81) list_single_graphic_hl_pane_cp2

0xb251,	// (0x00035f49) list_single_graphic_hl_pane_ParamLimits

0xb251,	// (0x00035f49) list_single_graphic_hl_pane

0x7f9c,	// (0x00032c94) aid_size_min_hl_cp1

0xca7e,	// (0x00037776) list_highlight_pane_cp34_ParamLimits

0xca7e,	// (0x00037776) list_highlight_pane_cp34

0xca8f,	// (0x00037787) list_single_graphic_hl_pane_g1_ParamLimits

0xca8f,	// (0x00037787) list_single_graphic_hl_pane_g1

0x7fa5,	// (0x00032c9d) list_single_graphic_hl_pane_g2_ParamLimits

0x7fa5,	// (0x00032c9d) list_single_graphic_hl_pane_g2

0x7fa5,	// (0x00032c9d) list_single_graphic_hl_pane_g3_ParamLimits

0x7fa5,	// (0x00032c9d) list_single_graphic_hl_pane_g3

0x7fb1,	// (0x00032ca9) list_single_graphic_hl_pane_g4_ParamLimits

0x7fb1,	// (0x00032ca9) list_single_graphic_hl_pane_g4

0x7fbd,	// (0x00032cb5) list_single_graphic_hl_pane_g5_ParamLimits

0x7fbd,	// (0x00032cb5) list_single_graphic_hl_pane_g5

0x0004,

0xfbe2,	// (0x0003a8da) list_single_graphic_hl_pane_g_ParamLimits

0xfbe2,	// (0x0003a8da) list_single_graphic_hl_pane_g

0x7fd1,	// (0x00032cc9) list_single_graphic_hl_pane_t1_ParamLimits

0x7fd1,	// (0x00032cc9) list_single_graphic_hl_pane_t1

0xca9c,	// (0x00037794) aid_size_min_hl_cp2

0xcaa5,	// (0x0003779d) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa5,	// (0x0003779d) list_highlight_pane_cp34_cp2

0xca8f,	// (0x00037787) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca8f,	// (0x00037787) list_single_graphic_hl_pane_g1_cp2

0xcab2,	// (0x000377aa) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab2,	// (0x000377aa) list_single_graphic_hl_pane_g2_cp2

0xcabe,	// (0x000377b6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcabe,	// (0x000377b6) list_single_graphic_hl_pane_g3_cp2

0xc1cb,	// (0x00036ec3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc1cb,	// (0x00036ec3) list_single_graphic_hl_pane_g4_cp2

0xcacc,	// (0x000377c4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacc,	// (0x000377c4) list_single_graphic_hl_pane_g5_cp2

0x59c8,	// (0x000306c0) control_pane_g4_ParamLimits

0x59c8,	// (0x000306c0) control_pane_g4

0x977f,	// (0x00034477) bg_popup_sub_pane_cp10_ParamLimits

0xc2b9,	// (0x00036fb1) list_choice_list_pane_ParamLimits

0xc2c8,	// (0x00036fc0) scroll_pane_cp23

0x81c5,	// (0x00032ebd) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8b0,	// (0x000375a8) list_preview_fixed_pane_ParamLimits

0xc8c6,	// (0x000375be) list_preview_fixed_pane_cp_ParamLimits

0xc8c6,	// (0x000375be) list_preview_fixed_pane_cp

0xc8d2,	// (0x000375ca) popup_preview_fixed_window_g1_ParamLimits

0xc8d2,	// (0x000375ca) popup_preview_fixed_window_g1

0xc8de,	// (0x000375d6) popup_preview_fixed_window_g2_ParamLimits

0xc8de,	// (0x000375d6) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x0003a862) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x0003a862) popup_preview_fixed_window_g

0x5567,	// (0x0003025f) aid_navi_side_left_pane_ParamLimits

0x557c,	// (0x00030274) aid_navi_side_right_pane_ParamLimits

0x5594,	// (0x0003028c) navi_icon_pane_stacon_ParamLimits

0x55a8,	// (0x000302a0) navi_navi_pane_stacon_ParamLimits

0x5594,	// (0x0003028c) navi_text_pane_stacon_ParamLimits

0x4a64,	// (0x0002f75c) main_text_info_pane

0xcaf6,	// (0x000377ee) listscroll_text_info_pane

0xcafe,	// (0x000377f6) list_text_info_pane_ParamLimits

0xcafe,	// (0x000377f6) list_text_info_pane

0xcb0d,	// (0x00037805) scroll_pane_cp24_ParamLimits

0xcb0d,	// (0x00037805) scroll_pane_cp24

0xcb2b,	// (0x00037823) list_text_info_pane_t1_ParamLimits

0xcb2b,	// (0x00037823) list_text_info_pane_t1

0x5b30,	// (0x00030828) popup_fast_swap2_window_ParamLimits

0x5b30,	// (0x00030828) popup_fast_swap2_window

0xcb5c,	// (0x00037854) aid_size_cell_fast2

0x76e8,	// (0x000323e0) bg_popup_window_pane_cp17

0xa0e7,	// (0x00034ddf) heading_pane_cp2

0x8414,	// (0x0003310c) listscroll_fast2_pane

0xcb66,	// (0x0003785e) grid_fast2_pane

0xcb70,	// (0x00037868) listscroll_fast2_pane_g1

0xcb78,	// (0x00037870) listscroll_fast2_pane_g2

0x0001,

0xfbed,	// (0x0003a8e5) listscroll_fast2_pane_g

0x891b,	// (0x00033613) scroll_pane_cp26

0xcb82,	// (0x0003787a) cell_fast2_pane_ParamLimits

0xcb82,	// (0x0003787a) cell_fast2_pane

0xcb97,	// (0x0003788f) cell_fast2_pane_g1

0xcba0,	// (0x00037898) cell_fast2_pane_g2

0xcba9,	// (0x000378a1) cell_fast2_pane_g3

0x0002,

0xfbf2,	// (0x0003a8ea) cell_fast2_pane_g

0x8507,	// (0x000331ff) grid_highlight_pane_cp9

0x5aee,	// (0x000307e6) main_eswt_pane_ParamLimits

0x5aee,	// (0x000307e6) main_eswt_pane

0xcb22,	// (0x0003781a) list_single_text_info_pane

0xcbb1,	// (0x000378a9) eswt_ctrl_button_pane

0xcbb1,	// (0x000378a9) eswt_ctrl_canvas_pane

0xcbb9,	// (0x000378b1) eswt_ctrl_combo_pane

0xcbb1,	// (0x000378a9) eswt_ctrl_default_pane

0xcbb1,	// (0x000378a9) eswt_ctrl_label_pane

0xcbc1,	// (0x000378b9) eswt_ctrl_wait_pane

0xcbc9,	// (0x000378c1) eswt_shell_pane

0x76e8,	// (0x000323e0) listscroll_eswt_app_pane

0xcbe9,	// (0x000378e1) popup_eswt_tasktip_window_ParamLimits

0xcbe9,	// (0x000378e1) popup_eswt_tasktip_window

0x9cfd,	// (0x000349f5) bg_popup_window_pane_cp18

0xcbfa,	// (0x000378f2) eswt_control_pane_g1_ParamLimits

0xcbfa,	// (0x000378f2) eswt_control_pane_g1

0xcc07,	// (0x000378ff) eswt_control_pane_g2_ParamLimits

0xcc07,	// (0x000378ff) eswt_control_pane_g2

0xcc14,	// (0x0003790c) eswt_control_pane_g3_ParamLimits

0xcc14,	// (0x0003790c) eswt_control_pane_g3

0xcc21,	// (0x00037919) eswt_control_pane_g4_ParamLimits

0xcc21,	// (0x00037919) eswt_control_pane_g4

0x0003,

0xfbf9,	// (0x0003a8f1) eswt_control_pane_g_ParamLimits

0xfbf9,	// (0x0003a8f1) eswt_control_pane_g

0x87ab,	// (0x000334a3) bg_button_pane_ParamLimits

0x87ab,	// (0x000334a3) bg_button_pane

0x851c,	// (0x00033214) common_borders_pane_copy2_ParamLimits

0x851c,	// (0x00033214) common_borders_pane_copy2

0xcc2e,	// (0x00037926) control_button_pane_g1_ParamLimits

0xcc2e,	// (0x00037926) control_button_pane_g1

0xcc3a,	// (0x00037932) control_button_pane_g2_ParamLimits

0xcc3a,	// (0x00037932) control_button_pane_g2

0xcc46,	// (0x0003793e) control_button_pane_g3_ParamLimits

0xcc46,	// (0x0003793e) control_button_pane_g3

0x0002,

0xfc02,	// (0x0003a8fa) control_button_pane_g_ParamLimits

0xfc02,	// (0x0003a8fa) control_button_pane_g

0xcc5a,	// (0x00037952) control_button_pane_t1

0xcc68,	// (0x00037960) control_button_pane_t2

0x0001,

0xfc09,	// (0x0003a901) control_button_pane_t

0x9c89,	// (0x00034981) bg_button_pane_g1

0x9c99,	// (0x00034991) bg_button_pane_g2

0x9c91,	// (0x00034989) bg_button_pane_g3

0x9ca9,	// (0x000349a1) bg_button_pane_g4

0x9ca1,	// (0x00034999) bg_button_pane_g5

0x9cb1,	// (0x000349a9) bg_button_pane_g6

0x9cb9,	// (0x000349b1) bg_button_pane_g7

0x9cc9,	// (0x000349c1) bg_button_pane_g8

0x9cc1,	// (0x000349b9) bg_button_pane_g9

0x0008,

0xf866,	// (0x0003a55e) bg_button_pane_g

0xc274,	// (0x00036f6c) common_borders_pane_ParamLimits

0xc274,	// (0x00036f6c) common_borders_pane

0xcbfa,	// (0x000378f2) eswt_control_pane_g1_copy1_ParamLimits

0xcbfa,	// (0x000378f2) eswt_control_pane_g1_copy1

0xcc07,	// (0x000378ff) eswt_control_pane_g2_copy1_ParamLimits

0xcc07,	// (0x000378ff) eswt_control_pane_g2_copy1

0xcc14,	// (0x0003790c) eswt_control_pane_g3_copy1_ParamLimits

0xcc14,	// (0x0003790c) eswt_control_pane_g3_copy1

0xcc21,	// (0x00037919) eswt_control_pane_g4_copy1_ParamLimits

0xcc21,	// (0x00037919) eswt_control_pane_g4_copy1

0xc2af,	// (0x00036fa7) bg_eswt_ctrl_canvas_pane_g1

0xc274,	// (0x00036f6c) common_borders_pane_cp2_ParamLimits

0xc274,	// (0x00036f6c) common_borders_pane_cp2

0xc274,	// (0x00036f6c) common_borders_pane_cp3_ParamLimits

0xc274,	// (0x00036f6c) common_borders_pane_cp3

0xcc76,	// (0x0003796e) separator_horizontal_pane

0xcc7e,	// (0x00037976) separator_vertical_pane

0xcbfa,	// (0x000378f2) eswt_control_pane_g1_copy2_ParamLimits

0xcbfa,	// (0x000378f2) eswt_control_pane_g1_copy2

0xcc07,	// (0x000378ff) eswt_control_pane_g2_copy2_ParamLimits

0xcc07,	// (0x000378ff) eswt_control_pane_g2_copy2

0xcc14,	// (0x0003790c) eswt_control_pane_g3_copy2_ParamLimits

0xcc14,	// (0x0003790c) eswt_control_pane_g3_copy2

0xcc21,	// (0x00037919) eswt_control_pane_g4_copy2_ParamLimits

0xcc21,	// (0x00037919) eswt_control_pane_g4_copy2

0x76e8,	// (0x000323e0) common_borders_pane_cp4

0xcc87,	// (0x0003797f) separator_horizontal_pane_g1

0xcc90,	// (0x00037988) separator_horizontal_pane_g2

0xcc99,	// (0x00037991) separator_horizontal_pane_g3

0x0002,

0xfc0e,	// (0x0003a906) separator_horizontal_pane_g

0xcbfa,	// (0x000378f2) eswt_control_pane_g1_copy3_ParamLimits

0xcbfa,	// (0x000378f2) eswt_control_pane_g1_copy3

0xcc07,	// (0x000378ff) eswt_control_pane_g2_copy3_ParamLimits

0xcc07,	// (0x000378ff) eswt_control_pane_g2_copy3

0xcc14,	// (0x0003790c) eswt_control_pane_g3_copy3_ParamLimits

0xcc14,	// (0x0003790c) eswt_control_pane_g3_copy3

0xcc21,	// (0x00037919) eswt_control_pane_g4_copy3_ParamLimits

0xcc21,	// (0x00037919) eswt_control_pane_g4_copy3

0x76e8,	// (0x000323e0) common_borders_pane_cp5

0xcca2,	// (0x0003799a) separator_vertical_pane_g1

0xccab,	// (0x000379a3) separator_vertical_pane_g2

0xccb4,	// (0x000379ac) separator_vertical_pane_g3

0x0002,

0xfc15,	// (0x0003a90d) separator_vertical_pane_g

0xcbfa,	// (0x000378f2) eswt_control_pane_g1_copy4_ParamLimits

0xcbfa,	// (0x000378f2) eswt_control_pane_g1_copy4

0xcc07,	// (0x000378ff) eswt_control_pane_g2_copy4_ParamLimits

0xcc07,	// (0x000378ff) eswt_control_pane_g2_copy4

0xcc14,	// (0x0003790c) eswt_control_pane_g3_copy4_ParamLimits

0xcc14,	// (0x0003790c) eswt_control_pane_g3_copy4

0xcc21,	// (0x00037919) eswt_control_pane_g4_copy4_ParamLimits

0xcc21,	// (0x00037919) eswt_control_pane_g4_copy4

0xccbd,	// (0x000379b5) eswt_ctrl_combo_button_pane

0xccc5,	// (0x000379bd) eswt_ctrl_input_pane

0xcccd,	// (0x000379c5) popup_choice_list_window_cp70

0xccd5,	// (0x000379cd) eswt_ctrl_input_pane_t1

0x76e8,	// (0x000323e0) input_focus_pane_cp70

0xc274,	// (0x00036f6c) bg_button_pane_cp70_ParamLimits

0xc274,	// (0x00036f6c) bg_button_pane_cp70

0xcce3,	// (0x000379db) eswt_ctrl_combo_button_pane_g1

0xcceb,	// (0x000379e3) wait_bar_pane_cp70

0x9cfd,	// (0x000349f5) bg_popup_window_pane_cp70_ParamLimits

0x9cfd,	// (0x000349f5) bg_popup_window_pane_cp70

0xccf3,	// (0x000379eb) popup_eswt_tasktip_window_t1

0xcd09,	// (0x00037a01) wait_bar_pane_cp71_ParamLimits

0xcd09,	// (0x00037a01) wait_bar_pane_cp71

0xcd15,	// (0x00037a0d) grid_eswt_app_pane

0x8c37,	// (0x0003392f) scroll_pane_cp70

0xcd1e,	// (0x00037a16) cell_eswt_app_pane_ParamLimits

0xcd1e,	// (0x00037a16) cell_eswt_app_pane

0xcd4e,	// (0x00037a46) cell_eswt_app_pane_g1_ParamLimits

0xcd4e,	// (0x00037a46) cell_eswt_app_pane_g1

0xcd7d,	// (0x00037a75) cell_eswt_app_pane_g2_ParamLimits

0xcd7d,	// (0x00037a75) cell_eswt_app_pane_g2

0x0001,

0xfc1c,	// (0x0003a914) cell_eswt_app_pane_g_ParamLimits

0xfc1c,	// (0x0003a914) cell_eswt_app_pane_g

0xcda6,	// (0x00037a9e) cell_eswt_app_pane_t1_ParamLimits

0xcda6,	// (0x00037a9e) cell_eswt_app_pane_t1

0xcdd8,	// (0x00037ad0) grid_highlight_pane_cp70_ParamLimits

0xcdd8,	// (0x00037ad0) grid_highlight_pane_cp70

0x9316,	// (0x0003400e) set_content_pane_g1

0x96e0,	// (0x000343d8) status_small_volume_pane

0x6a99,	// (0x00031791) status_small_volume_pane_g1

0x6aa1,	// (0x00031799) volume_small2_pane

0x6aaa,	// (0x000317a2) volume_small2_pane_g1

0x6ab3,	// (0x000317ab) volume_small2_pane_g2

0x6abc,	// (0x000317b4) volume_small2_pane_g3

0x6ac5,	// (0x000317bd) volume_small2_pane_g4

0x6ace,	// (0x000317c6) volume_small2_pane_g5

0x6ad7,	// (0x000317cf) volume_small2_pane_g6

0x6ae0,	// (0x000317d8) volume_small2_pane_g7

0x6ae9,	// (0x000317e1) volume_small2_pane_g8

0x6af2,	// (0x000317ea) volume_small2_pane_g9

0x6afb,	// (0x000317f3) volume_small2_pane_g10

0x0009,

0xfc21,	// (0x0003a919) volume_small2_pane_g

0xc675,	// (0x0003736d) fep_vkb_top_text_pane_g1_ParamLimits

0xc690,	// (0x00037388) fep_vkb_top_text_pane_t1_ParamLimits

0xc8ea,	// (0x000375e2) popup_preview_fixed_window_g3_ParamLimits

0xc8ea,	// (0x000375e2) popup_preview_fixed_window_g3

0x5fdf,	// (0x00030cd7) popup_toolbar_trans_pane

0xb058,	// (0x00035d50) aid_height_set_list_ParamLimits

0xb069,	// (0x00035d61) aid_size_parent_ParamLimits

0x977f,	// (0x00034477) list_highlight_pane_cp2_ParamLimits

0x9316,	// (0x0003400e) set_content_pane_g1_ParamLimits

0xb26d,	// (0x00035f65) list_single_image_pane_ParamLimits

0xb26d,	// (0x00035f65) list_single_image_pane

0xcde4,	// (0x00037adc) aid_size_cell_image_ParamLimits

0xcde4,	// (0x00037adc) aid_size_cell_image

0xcdf1,	// (0x00037ae9) grid_single_image_pane_ParamLimits

0xcdf1,	// (0x00037ae9) grid_single_image_pane

0xac2c,	// (0x00035924) list_single_image_pane_g1_ParamLimits

0xac2c,	// (0x00035924) list_single_image_pane_g1

0xcdfd,	// (0x00037af5) list_single_image_pane_g2_ParamLimits

0xcdfd,	// (0x00037af5) list_single_image_pane_g2

0x0001,

0xfc36,	// (0x0003a92e) list_single_image_pane_g_ParamLimits

0xfc36,	// (0x0003a92e) list_single_image_pane_g

0xce11,	// (0x00037b09) list_single_image_pane_t1_ParamLimits

0xce11,	// (0x00037b09) list_single_image_pane_t1

0xce27,	// (0x00037b1f) cell_image_list_pane_ParamLimits

0xce27,	// (0x00037b1f) cell_image_list_pane

0xce3b,	// (0x00037b33) cell_image_list_pane_g1

0xce44,	// (0x00037b3c) cell_image_list_pane_g2

0x0001,

0xfc3b,	// (0x0003a933) cell_image_list_pane_g

0xce4d,	// (0x00037b45) aid_size_cell_tb_trans_pane

0x87ab,	// (0x000334a3) bg_tb_trans_pane

0xce5f,	// (0x00037b57) grid_tb_trans_pane

0x9c89,	// (0x00034981) bg_tb_trans_pane_g1

0x9c99,	// (0x00034991) bg_tb_trans_pane_g2

0x9c91,	// (0x00034989) bg_tb_trans_pane_g3

0x9ca9,	// (0x000349a1) bg_tb_trans_pane_g4

0x9ca1,	// (0x00034999) bg_tb_trans_pane_g5

0x9cc9,	// (0x000349c1) bg_tb_trans_pane_g6

0x9cc1,	// (0x000349b9) bg_tb_trans_pane_g7

0x9cb1,	// (0x000349a9) bg_tb_trans_pane_g8

0x9cb9,	// (0x000349b1) bg_tb_trans_pane_g9

0x0008,

0xfc40,	// (0x0003a938) bg_tb_trans_pane_g

0xce73,	// (0x00037b6b) cell_toolbar_trans_pane_ParamLimits

0xce73,	// (0x00037b6b) cell_toolbar_trans_pane

0xc2af,	// (0x00036fa7) cell_toolbar_trans_pane_g1

0xbe6d,	// (0x00036b65) list_form2_midp_pane_t1

0xbe7b,	// (0x00036b73) list_form2_midp_pane_t2

0x0001,

0xfadd,	// (0x0003a7d5) list_form2_midp_pane_t

0xbe89,	// (0x00036b81) scroll_pane_cp51_ParamLimits

0xc045,	// (0x00036d3d) form2_midp_wait_pane_g1

0xc04e,	// (0x00036d46) form2_midp_wait_pane_g2

0xc057,	// (0x00036d4f) form2_midp_wait_pane_g3

0x0002,

0xfaf2,	// (0x0003a7ea) form2_midp_wait_pane_g

0x77dc,	// (0x000324d4) list_highlight_pane_cp21_ParamLimits

0xc0ae,	// (0x00036da6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0bd,	// (0x00036db5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x65be,	// (0x000312b6) list_single_2graphic_im_pane_ParamLimits

0x65be,	// (0x000312b6) list_single_2graphic_im_pane

0xce99,	// (0x00037b91) list_single_2graphic_im_pane_g1_ParamLimits

0xce99,	// (0x00037b91) list_single_2graphic_im_pane_g1

0xceaa,	// (0x00037ba2) list_single_2graphic_im_pane_g2_ParamLimits

0xceaa,	// (0x00037ba2) list_single_2graphic_im_pane_g2

0xceb6,	// (0x00037bae) list_single_2graphic_im_pane_g3_ParamLimits

0xceb6,	// (0x00037bae) list_single_2graphic_im_pane_g3

0x0003,

0xfc53,	// (0x0003a94b) list_single_2graphic_im_pane_g_ParamLimits

0xfc53,	// (0x0003a94b) list_single_2graphic_im_pane_g

0xced6,	// (0x00037bce) list_single_2graphic_im_pane_t1_ParamLimits

0xced6,	// (0x00037bce) list_single_2graphic_im_pane_t1

0xc8f6,	// (0x000375ee) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8f6,	// (0x000375ee) list_single_graphic_2heading_pane_fp

0x7e0e,	// (0x00032b06) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7e0e,	// (0x00032b06) list_single_graphic_2heading_pane_fp_g1

0xc90b,	// (0x00037603) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc90b,	// (0x00037603) list_single_graphic_2heading_pane_fp_g2

0x7dd7,	// (0x00032acf) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7dd7,	// (0x00032acf) list_single_graphic_2heading_pane_fp_g3

0x7de3,	// (0x00032adb) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7de3,	// (0x00032adb) list_single_graphic_2heading_pane_fp_g4

0xc917,	// (0x0003760f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc917,	// (0x0003760f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a872) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a872) list_single_graphic_2heading_pane_fp_g

0x7fe7,	// (0x00032cdf) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7fe7,	// (0x00032cdf) list_single_graphic_2heading_pane_fp_t1

0x7e46,	// (0x00032b3e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7e46,	// (0x00032b3e) list_single_graphic_2heading_pane_fp_t2

0x7ffd,	// (0x00032cf5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7ffd,	// (0x00032cf5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5c,	// (0x0003a954) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5c,	// (0x0003a954) list_single_graphic_2heading_pane_fp_t

0xc33b,	// (0x00037033) fep_hwr_write_pane_g5_ParamLimits

0xc33b,	// (0x00037033) fep_hwr_write_pane_g5

0xc347,	// (0x0003703f) fep_hwr_write_pane_g6_ParamLimits

0xc347,	// (0x0003703f) fep_hwr_write_pane_g6

0xcbc9,	// (0x000378c1) eswt_shell_pane_ParamLimits

0x9cfd,	// (0x000349f5) bg_popup_window_pane_cp18_ParamLimits

0xafb1,	// (0x00035ca9) heading_pane_cp70

0xccf3,	// (0x000379eb) popup_eswt_tasktip_window_t1_ParamLimits

0x97f6,	// (0x000344ee) aid_touch_tab_arrow_left

0x9805,	// (0x000344fd) aid_touch_tab_arrow_right

0x7724,	// (0x0003241c) title_pane_g3_ParamLimits

0x7724,	// (0x0003241c) title_pane_g3

0x876a,	// (0x00033462) set_value_pane_g1

0x5fdf,	// (0x00030cd7) popup_toolbar_trans_pane_ParamLimits

0xce4d,	// (0x00037b45) aid_size_cell_tb_trans_pane_ParamLimits

0x87ab,	// (0x000334a3) bg_tb_trans_pane_ParamLimits

0xce5f,	// (0x00037b57) grid_tb_trans_pane_ParamLimits

0x81c5,	// (0x00032ebd) cont_note_pane_ParamLimits

0x81c5,	// (0x00032ebd) cont_note_pane

0x851c,	// (0x00033214) cont_snote2_single_text_pane_ParamLimits

0x851c,	// (0x00033214) cont_snote2_single_text_pane

0x851c,	// (0x00033214) cont_snote2_single_graphic_pane_ParamLimits

0x851c,	// (0x00033214) cont_snote2_single_graphic_pane

0xa302,	// (0x00034ffa) cont_note_wait_pane_ParamLimits

0xa302,	// (0x00034ffa) cont_note_wait_pane

0xa302,	// (0x00034ffa) cont_note_image_pane_ParamLimits

0xa302,	// (0x00034ffa) cont_note_image_pane

0xcf07,	// (0x00037bff) popup_note2_window_g1_ParamLimits

0xcf07,	// (0x00037bff) popup_note2_window_g1

0xcf38,	// (0x00037c30) popup_note2_window_t1_ParamLimits

0xcf38,	// (0x00037c30) popup_note2_window_t1

0xcf7d,	// (0x00037c75) popup_note2_window_t2_ParamLimits

0xcf7d,	// (0x00037c75) popup_note2_window_t2

0xcfc2,	// (0x00037cba) popup_note2_window_t3_ParamLimits

0xcfc2,	// (0x00037cba) popup_note2_window_t3

0xd007,	// (0x00037cff) popup_note2_window_t4_ParamLimits

0xd007,	// (0x00037cff) popup_note2_window_t4

0x8249,	// (0x00032f41) popup_note2_window_t5_ParamLimits

0x8249,	// (0x00032f41) popup_note2_window_t5

0x0004,

0xfc68,	// (0x0003a960) popup_note2_window_t_ParamLimits

0xfc68,	// (0x0003a960) popup_note2_window_t

0xd036,	// (0x00037d2e) popup_note2_image_window_g1_ParamLimits

0xd036,	// (0x00037d2e) popup_note2_image_window_g1

0xd042,	// (0x00037d3a) popup_note2_image_window_g2_ParamLimits

0xd042,	// (0x00037d3a) popup_note2_image_window_g2

0x0001,

0xfc73,	// (0x0003a96b) popup_note2_image_window_g_ParamLimits

0xfc73,	// (0x0003a96b) popup_note2_image_window_g

0xd054,	// (0x00037d4c) popup_note2_image_window_t1_ParamLimits

0xd054,	// (0x00037d4c) popup_note2_image_window_t1

0xd06c,	// (0x00037d64) popup_note2_image_window_t2_ParamLimits

0xd06c,	// (0x00037d64) popup_note2_image_window_t2

0xd084,	// (0x00037d7c) popup_note2_image_window_t3_ParamLimits

0xd084,	// (0x00037d7c) popup_note2_image_window_t3

0x0002,

0xfc78,	// (0x0003a970) popup_note2_image_window_t_ParamLimits

0xfc78,	// (0x0003a970) popup_note2_image_window_t

0xa310,	// (0x00035008) popup_note2_wait_window_g1_ParamLimits

0xa310,	// (0x00035008) popup_note2_wait_window_g1

0xd0a0,	// (0x00037d98) popup_note2_wait_window_g2_ParamLimits

0xd0a0,	// (0x00037d98) popup_note2_wait_window_g2

0xa328,	// (0x00035020) popup_note2_wait_window_g3_ParamLimits

0xa328,	// (0x00035020) popup_note2_wait_window_g3

0x0002,

0xfc7f,	// (0x0003a977) popup_note2_wait_window_g_ParamLimits

0xfc7f,	// (0x0003a977) popup_note2_wait_window_g

0xd0ac,	// (0x00037da4) popup_note2_wait_window_t1_ParamLimits

0xd0ac,	// (0x00037da4) popup_note2_wait_window_t1

0xd0ca,	// (0x00037dc2) popup_note2_wait_window_t2_ParamLimits

0xd0ca,	// (0x00037dc2) popup_note2_wait_window_t2

0xd0e8,	// (0x00037de0) popup_note2_wait_window_t3_ParamLimits

0xd0e8,	// (0x00037de0) popup_note2_wait_window_t3

0xd0fa,	// (0x00037df2) popup_note2_wait_window_t4_ParamLimits

0xd0fa,	// (0x00037df2) popup_note2_wait_window_t4

0x0003,

0xfc86,	// (0x0003a97e) popup_note2_wait_window_t_ParamLimits

0xfc86,	// (0x0003a97e) popup_note2_wait_window_t

0xd10c,	// (0x00037e04) wait_bar2_pane_ParamLimits

0xd10c,	// (0x00037e04) wait_bar2_pane

0xd124,	// (0x00037e1c) popup_snote2_single_text_window_g1_ParamLimits

0xd124,	// (0x00037e1c) popup_snote2_single_text_window_g1

0xd14c,	// (0x00037e44) popup_snote2_single_text_window_t1_ParamLimits

0xd14c,	// (0x00037e44) popup_snote2_single_text_window_t1

0xd198,	// (0x00037e90) popup_snote2_single_text_window_t2_ParamLimits

0xd198,	// (0x00037e90) popup_snote2_single_text_window_t2

0xd1e4,	// (0x00037edc) popup_snote2_single_text_window_t3_ParamLimits

0xd1e4,	// (0x00037edc) popup_snote2_single_text_window_t3

0xd225,	// (0x00037f1d) popup_snote2_single_text_window_t4_ParamLimits

0xd225,	// (0x00037f1d) popup_snote2_single_text_window_t4

0xd25b,	// (0x00037f53) popup_snote2_single_text_window_t5_ParamLimits

0xd25b,	// (0x00037f53) popup_snote2_single_text_window_t5

0x0004,

0xfc8f,	// (0x0003a987) popup_snote2_single_text_window_t_ParamLimits

0xfc8f,	// (0x0003a987) popup_snote2_single_text_window_t

0xd286,	// (0x00037f7e) popup_snote2_single_graphic_window_g1_ParamLimits

0xd286,	// (0x00037f7e) popup_snote2_single_graphic_window_g1

0xd2ae,	// (0x00037fa6) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2ae,	// (0x00037fa6) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9a,	// (0x0003a992) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9a,	// (0x0003a992) popup_snote2_single_graphic_window_g

0xd2d6,	// (0x00037fce) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2d6,	// (0x00037fce) popup_snote2_single_graphic_window_t1

0xd322,	// (0x0003801a) popup_snote2_single_graphic_window_t2_ParamLimits

0xd322,	// (0x0003801a) popup_snote2_single_graphic_window_t2

0xd1e4,	// (0x00037edc) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e4,	// (0x00037edc) popup_snote2_single_graphic_window_t3

0xd225,	// (0x00037f1d) popup_snote2_single_graphic_window_t4_ParamLimits

0xd225,	// (0x00037f1d) popup_snote2_single_graphic_window_t4

0xd25b,	// (0x00037f53) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25b,	// (0x00037f53) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9f,	// (0x0003a997) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9f,	// (0x0003a997) popup_snote2_single_graphic_window_t

0xbd4a,	// (0x00036a42) clock_nsta_pane_cp2_t1

0xbd4a,	// (0x00036a42) clock_nsta_pane_cp2_t2

0x0001,

0xfab3,	// (0x0003a7ab) clock_nsta_pane_cp2_t

0x52e5,	// (0x0002ffdd) form_field_data_wide_pane_g1_ParamLimits

0x87b9,	// (0x000334b1) form_field_data_wide_pane_g2_ParamLimits

0x87b9,	// (0x000334b1) form_field_data_wide_pane_g2

0x87c5,	// (0x000334bd) form_field_data_wide_pane_g3_ParamLimits

0x87c5,	// (0x000334bd) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003a373) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003a373) form_field_data_wide_pane_g

0xbc3c,	// (0x00036934) grid_touch_3_pane_ParamLimits

0xbc3c,	// (0x00036934) grid_touch_3_pane

0xd36e,	// (0x00038066) cell_touch_3_pane_ParamLimits

0xd36e,	// (0x00038066) cell_touch_3_pane

0xc2af,	// (0x00036fa7) cell_touch_3_pane_g1

0xc2af,	// (0x00036fa7) cell_touch_3_pane_g2

0x0001,

0xfb38,	// (0x0003a830) cell_touch_3_pane_g

0x827b,	// (0x00032f73) cont_query_data_pane

0x8283,	// (0x00032f7b) cont_query_data_pane_cp1

0xd39c,	// (0x00038094) button_value_adjust_pane_cp7

0xd3a4,	// (0x0003809c) query_popup_pane_cp3

0x8f1e,	// (0x00033c16) bg_popup_sub_pane_cp22_ParamLimits

0x56a9,	// (0x000303a1) navi_navi_volume_pane_cp2

0x56c4,	// (0x000303bc) popup_side_volume_key_window_g2

0x56d3,	// (0x000303cb) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003a409) popup_side_volume_key_window_g

0x56f0,	// (0x000303e8) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003a410) popup_side_volume_key_window_t

0x91d5,	// (0x00033ecd) popup_side_volume_key_window_ParamLimits

0x4f46,	// (0x0002fc3e) list_double_graphic_pane_g4_ParamLimits

0x4f46,	// (0x0002fc3e) list_double_graphic_pane_g4

0x7a2a,	// (0x00032722) list_single_2heading_msg_pane_ParamLimits

0x7a2a,	// (0x00032722) list_single_2heading_msg_pane

0x801d,	// (0x00032d15) list_single_2heading_msg_pane_g1_ParamLimits

0x801d,	// (0x00032d15) list_single_2heading_msg_pane_g1

0x4d75,	// (0x0002fa6d) list_single_2heading_msg_pane_g2_ParamLimits

0x4d75,	// (0x0002fa6d) list_single_2heading_msg_pane_g2

0x8029,	// (0x00032d21) list_single_2heading_msg_pane_g3_ParamLimits

0x8029,	// (0x00032d21) list_single_2heading_msg_pane_g3

0x8035,	// (0x00032d2d) list_single_2heading_msg_pane_g4_ParamLimits

0x8035,	// (0x00032d2d) list_single_2heading_msg_pane_g4

0x0003,

0xfcaa,	// (0x0003a9a2) list_single_2heading_msg_pane_g_ParamLimits

0xfcaa,	// (0x0003a9a2) list_single_2heading_msg_pane_g

0x804d,	// (0x00032d45) list_single_2heading_msg_pane_t1_ParamLimits

0x804d,	// (0x00032d45) list_single_2heading_msg_pane_t1

0x8075,	// (0x00032d6d) list_single_2heading_msg_pane_t2_ParamLimits

0x8075,	// (0x00032d6d) list_single_2heading_msg_pane_t2

0x80a9,	// (0x00032da1) list_single_2heading_msg_pane_t3_ParamLimits

0x80a9,	// (0x00032da1) list_single_2heading_msg_pane_t3

0x80e2,	// (0x00032dda) list_single_2heading_msg_pane_t4_ParamLimits

0x80e2,	// (0x00032dda) list_single_2heading_msg_pane_t4

0x0003,

0xfcb3,	// (0x0003a9ab) list_single_2heading_msg_pane_t_ParamLimits

0xfcb3,	// (0x0003a9ab) list_single_2heading_msg_pane_t

0x7730,	// (0x00032428) title_pane_g4_ParamLimits

0x7730,	// (0x00032428) title_pane_g4

0x54b8,	// (0x000301b0) title_pane_stacon_g3_ParamLimits

0x54b8,	// (0x000301b0) title_pane_stacon_g3

0xceca,	// (0x00037bc2) list_single_2graphic_im_pane_g4_ParamLimits

0xceca,	// (0x00037bc2) list_single_2graphic_im_pane_g4

0xad6d,	// (0x00035a65) popup_side_volume_key_window_cp

0xb589,	// (0x00036281) main_idle_act2_pane_t1

0x610b,	// (0x00030e03) toolbar_button_pane_g10

0x8714,	// (0x0003340c) popup_toolbar_window_cp1

0xbd3b,	// (0x00036a33) clock_nsta_pane_cp_t1

0xbd3b,	// (0x00036a33) clock_nsta_pane_cp_t2

0x0001,

0xfaae,	// (0x0003a7a6) clock_nsta_pane_cp_t

0x56a9,	// (0x000303a1) navi_navi_volume_pane_cp2_ParamLimits

0x56b8,	// (0x000303b0) popup_side_volume_key_window_g1_ParamLimits

0x56c4,	// (0x000303bc) popup_side_volume_key_window_g2_ParamLimits

0x56d3,	// (0x000303cb) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003a409) popup_side_volume_key_window_g_ParamLimits

0x6705,	// (0x000313fd) fep_hwr_aid_pane

0x67ac,	// (0x000314a4) bg_fep_hwr_top_pane_g4_ParamLimits

0xc30b,	// (0x00037003) fep_hwr_top_pane_g1_ParamLimits

0xc31d,	// (0x00037015) fep_hwr_top_pane_g2_ParamLimits

0x67cc,	// (0x000314c4) fep_hwr_top_pane_g3_ParamLimits

0xfb03,	// (0x0003a7fb) fep_hwr_top_pane_g_ParamLimits

0x67e1,	// (0x000314d9) fep_hwr_top_text_pane_ParamLimits

0xab24,	// (0x0003581c) aid_touch_tab_arrow_arrow_2

0xab2d,	// (0x00035825) aid_touch_tab_arrow_left_2

0x6719,	// (0x00031411) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6750,	// (0x00031448) fep_hwr_prediction_pane

0xc47d,	// (0x00037175) fep_vkb_prediction_pane

0xc581,	// (0x00037279) fep_vkb_side_pane_g3_ParamLimits

0xc581,	// (0x00037279) fep_vkb_side_pane_g3

0x695c,	// (0x00031654) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x69c8,	// (0x000316c0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x69d5,	// (0x000316cd) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x0003a8aa) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6b04,	// (0x000317fc) fep_hwr_prediction_pane_g1

0x6b0e,	// (0x00031806) fep_hwr_prediction_pane_g2

0x6b16,	// (0x0003180e) fep_hwr_prediction_pane_g3

0x6b1e,	// (0x00031816) fep_hwr_prediction_pane_g4

0x0003,

0xfcbc,	// (0x0003a9b4) fep_hwr_prediction_pane_g

0xd3c9,	// (0x000380c1) fep_vkb_prediction_pane_g1

0xd3d3,	// (0x000380cb) fep_vkb_prediction_pane_g2

0xd3db,	// (0x000380d3) fep_vkb_prediction_pane_g3

0xd3e3,	// (0x000380db) fep_vkb_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0003a9bd) fep_vkb_prediction_pane_g

0x6506,	// (0x000311fe) slider_set_pane_g3

0x651a,	// (0x00031212) slider_set_pane_g4

0x6532,	// (0x0003122a) slider_set_pane_g5

0x6506,	// (0x000311fe) slider_set_pane_g6

0x6548,	// (0x00031240) slider_set_pane_g7

0xb1ce,	// (0x00035ec6) slider_form_pane_g3

0xb1d7,	// (0x00035ecf) slider_form_pane_g4

0xb1df,	// (0x00035ed7) slider_form_pane_g5

0xb1ce,	// (0x00035ec6) slider_form_pane_g6

0xb1e7,	// (0x00035edf) slider_form_pane_g7

0xb834,	// (0x0003652c) slider_set_pane_vc_g3

0xb83d,	// (0x00036535) slider_set_pane_vc_g4

0xb846,	// (0x0003653e) slider_set_pane_vc_g5

0xb834,	// (0x0003652c) slider_set_pane_vc_g6

0xb84f,	// (0x00036547) slider_set_pane_vc_g7

0xba0f,	// (0x00036707) slider_form_pane_vc_g1

0xba18,	// (0x00036710) slider_form_pane_vc_g2

0xba21,	// (0x00036719) slider_form_pane_vc_g3

0xba0f,	// (0x00036707) slider_form_pane_vc_g4

0xba2a,	// (0x00036722) slider_form_pane_vc_g5

0x0004,

0xfa80,	// (0x0003a778) slider_form_pane_vc_g

0x4a64,	// (0x0002f75c) main_idle_act3_pane

0xd3eb,	// (0x000380e3) ai3_links_pane

0xd3f4,	// (0x000380ec) popup_ai3_data_window_ParamLimits

0xd3f4,	// (0x000380ec) popup_ai3_data_window

0x76e8,	// (0x000323e0) grid_ai3_links_pane

0xd40e,	// (0x00038106) cell_ai3_links_pane_ParamLimits

0xd40e,	// (0x00038106) cell_ai3_links_pane

0xd426,	// (0x0003811e) bg_popup_sub_pane_cp11

0xd433,	// (0x0003812b) cell_ai3_links_pane_g1

0x76e8,	// (0x000323e0) bg_popup_sub_pane_cp12

0xd458,	// (0x00038150) heading_ai3_data_pane

0xd460,	// (0x00038158) list_ai3_gene_pane

0xd46c,	// (0x00038164) popup_ai3_data_window_g1

0xd474,	// (0x0003816c) heading_ai3_data_pane_g1

0xd47c,	// (0x00038174) heading_ai3_data_pane_t1

0xd48a,	// (0x00038182) list_double_ai3_gene_pane_ParamLimits

0xd48a,	// (0x00038182) list_double_ai3_gene_pane

0xd497,	// (0x0003818f) list_single_ai3_gene_pane_ParamLimits

0xd497,	// (0x0003818f) list_single_ai3_gene_pane

0xc274,	// (0x00036f6c) list_highlight_pane_cp7_ParamLimits

0xc274,	// (0x00036f6c) list_highlight_pane_cp7

0xd4a4,	// (0x0003819c) list_single_a13_gene_pane_t1_ParamLimits

0xd4a4,	// (0x0003819c) list_single_a13_gene_pane_t1

0xd4bb,	// (0x000381b3) list_single_ai3_gene_pane_g1

0xd4c4,	// (0x000381bc) list_single_ai3_gene_pane_g2

0x0001,

0xfcce,	// (0x0003a9c6) list_single_ai3_gene_pane_g

0xd4cc,	// (0x000381c4) list_double_ai3_gene_pane_g1_ParamLimits

0xd4cc,	// (0x000381c4) list_double_ai3_gene_pane_g1

0xd4d8,	// (0x000381d0) list_double_ai3_gene_pane_t1_ParamLimits

0xd4d8,	// (0x000381d0) list_double_ai3_gene_pane_t1

0xd4f4,	// (0x000381ec) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f4,	// (0x000381ec) list_double_ai3_gene_pane_t2

0xd50a,	// (0x00038202) list_double_ai3_gene_pane_t3_ParamLimits

0xd50a,	// (0x00038202) list_double_ai3_gene_pane_t3

0x0002,

0xfcd3,	// (0x0003a9cb) list_double_ai3_gene_pane_t_ParamLimits

0xfcd3,	// (0x0003a9cb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8013,	// (0x00032d0b) aid_size_min_col_2

0xd3b5,	// (0x000380ad) aid_size_min_msg_ParamLimits

0xd3b5,	// (0x000380ad) aid_size_min_msg

0xc681,	// (0x00037379) fep_vkb_top_text_pane_g2_ParamLimits

0xc681,	// (0x00037379) fep_vkb_top_text_pane_g2

0x0001,

0xfb33,	// (0x0003a82b) fep_vkb_top_text_pane_g_ParamLimits

0xfb33,	// (0x0003a82b) fep_vkb_top_text_pane_g

0x4a64,	// (0x0002f75c) main_hc_apps_shell_pane

0xd527,	// (0x0003821f) grid_hc_apps_pane_ParamLimits

0xd527,	// (0x0003821f) grid_hc_apps_pane

0xd536,	// (0x0003822e) list_hc_apps_pane

0xd53e,	// (0x00038236) scroll_pane_cp37_ParamLimits

0xd53e,	// (0x00038236) scroll_pane_cp37

0xd54a,	// (0x00038242) cell_hc_apps_pane_ParamLimits

0xd54a,	// (0x00038242) cell_hc_apps_pane

0xd5f8,	// (0x000382f0) cell_hc_apps_pane_g1_ParamLimits

0xd5f8,	// (0x000382f0) cell_hc_apps_pane_g1

0xd629,	// (0x00038321) cell_hc_apps_pane_g2_ParamLimits

0xd629,	// (0x00038321) cell_hc_apps_pane_g2

0xd645,	// (0x0003833d) cell_hc_apps_pane_g3_ParamLimits

0xd645,	// (0x0003833d) cell_hc_apps_pane_g3

0x0002,

0xfcda,	// (0x0003a9d2) cell_hc_apps_pane_g_ParamLimits

0xfcda,	// (0x0003a9d2) cell_hc_apps_pane_g

0xd667,	// (0x0003835f) cell_hc_apps_pane_t1_ParamLimits

0xd667,	// (0x0003835f) cell_hc_apps_pane_t1

0x81c5,	// (0x00032ebd) grid_highlight_pane_cp10_ParamLimits

0x81c5,	// (0x00032ebd) grid_highlight_pane_cp10

0xd6a7,	// (0x0003839f) list_single_hc_apps_pane_ParamLimits

0xd6a7,	// (0x0003839f) list_single_hc_apps_pane

0xd703,	// (0x000383fb) list_single_hc_apps_pane_g1

0x8107,	// (0x00032dff) list_single_hc_apps_pane_g2

0x0001,

0xfce1,	// (0x0003a9d9) list_single_hc_apps_pane_g

0x8120,	// (0x00032e18) list_single_hc_apps_pane_g2_copy1

0x813c,	// (0x00032e34) list_single_hc_apps_pane_t1

0x77dc,	// (0x000324d4) bg_set_opt_pane_cp_ParamLimits

0x4cc5,	// (0x0002f9bd) setting_slider_pane_t1_ParamLimits

0x4cde,	// (0x0002f9d6) setting_slider_pane_t2_ParamLimits

0x4cf8,	// (0x0002f9f0) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003a256) setting_slider_pane_t_ParamLimits

0x4d10,	// (0x0002fa08) slider_set_pane_ParamLimits

0x59dc,	// (0x000306d4) control_pane_g5_ParamLimits

0x59dc,	// (0x000306d4) control_pane_g5

0xb01d,	// (0x00035d15) slider_set_pane_g1_ParamLimits

0x64fa,	// (0x000311f2) slider_set_pane_g2_ParamLimits

0x6506,	// (0x000311fe) slider_set_pane_g3_ParamLimits

0x651a,	// (0x00031212) slider_set_pane_g4_ParamLimits

0x6532,	// (0x0003122a) slider_set_pane_g5_ParamLimits

0x6506,	// (0x000311fe) slider_set_pane_g6_ParamLimits

0x6548,	// (0x00031240) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0003a65c) slider_set_pane_g_ParamLimits

0x92c1,	// (0x00033fb9) navi_icon_text_pane_ParamLimits

0x97b7,	// (0x000344af) aid_fill_nsta_2_ParamLimits

0x97f6,	// (0x000344ee) aid_touch_tab_arrow_left_ParamLimits

0x9805,	// (0x000344fd) aid_touch_tab_arrow_right_ParamLimits

0x9872,	// (0x0003456a) clock_nsta_pane_ParamLimits

0xab06,	// (0x000357fe) navi_icon_pane_g1_ParamLimits

0xab12,	// (0x0003580a) navi_text_pane_t1_ParamLimits

0xbe47,	// (0x00036b3f) navi_icon_text_pane_g1_ParamLimits

0xbe53,	// (0x00036b4b) navi_icon_text_pane_t1_ParamLimits

0xd703,	// (0x000383fb) list_single_hc_apps_pane_g1_ParamLimits

0x8107,	// (0x00032dff) list_single_hc_apps_pane_g2_ParamLimits

0xfce1,	// (0x0003a9d9) list_single_hc_apps_pane_g_ParamLimits

0x8120,	// (0x00032e18) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x813c,	// (0x00032e34) list_single_hc_apps_pane_t1_ParamLimits

0x4bcf,	// (0x0002f8c7) popup_toolbar2_fixed_window_ParamLimits

0x4bcf,	// (0x0002f8c7) popup_toolbar2_fixed_window

0x5fd5,	// (0x00030ccd) popup_toolbar2_float_window

0x76e8,	// (0x000323e0) bg_popup_sub_pane_cp27

0xd71c,	// (0x00038414) grid_toolbar2_float_pane

0x76e8,	// (0x000323e0) bg_popup_sub_pane_cp26

0xd71c,	// (0x00038414) grid_toolbar2_fixed_pane

0xd724,	// (0x0003841c) cell_toolbar2_fixed_pane_ParamLimits

0xd724,	// (0x0003841c) cell_toolbar2_fixed_pane

0xd734,	// (0x0003842c) cell_toolbar2_fixed_pane_g1

0xd73d,	// (0x00038435) toolbar2_fixed_button_pane

0x9c89,	// (0x00034981) toolbar2_fixed_button_pane_g1

0x9c99,	// (0x00034991) toolbar2_fixed_button_pane_g2

0x9c91,	// (0x00034989) toolbar2_fixed_button_pane_g3

0x9ca9,	// (0x000349a1) toolbar2_fixed_button_pane_g4

0x9ca1,	// (0x00034999) toolbar2_fixed_button_pane_g5

0x9cb1,	// (0x000349a9) toolbar2_fixed_button_pane_g6

0x9cb9,	// (0x000349b1) toolbar2_fixed_button_pane_g7

0x9cc9,	// (0x000349c1) toolbar2_fixed_button_pane_g8

0x9cc1,	// (0x000349b9) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0003a55e) toolbar2_fixed_button_pane_g

0xd745,	// (0x0003843d) cell_toolbar2_float_pane_ParamLimits

0xd745,	// (0x0003843d) cell_toolbar2_float_pane

0xd756,	// (0x0003844e) cell_toolbar2_float_pane_g1

0xd73d,	// (0x00038435) toolbar2_fixed_button_pane_cp

0xc3dd,	// (0x000370d5) fep_vkb_accented_list_pane_ParamLimits

0xc3dd,	// (0x000370d5) fep_vkb_accented_list_pane

0x693c,	// (0x00031634) bg_popup_fep_shadow_pane_g9

0x9441,	// (0x00034139) bg_popup_fep_shadow_pane_cp3

0x8902,	// (0x000335fa) list_accented_list_pane

0xd75f,	// (0x00038457) list_single_accented_list_pane_ParamLimits

0xd75f,	// (0x00038457) list_single_accented_list_pane

0x9441,	// (0x00034139) list_highlight_pane_cp10

0xd770,	// (0x00038468) list_single_accented_list_pane_t1

0x5f25,	// (0x00030c1d) popup_slider_window_ParamLimits

0x5f25,	// (0x00030c1d) popup_slider_window

0xd3ac,	// (0x000380a4) aid_indentation_list_msg

0xd82a,	// (0x00038522) bg_popup_window_pane_cp19

0xd894,	// (0x0003858c) popup_slider_window_g1

0xd8b0,	// (0x000385a8) popup_slider_window_g2

0xd8cc,	// (0x000385c4) popup_slider_window_g3

0x0005,

0xfce6,	// (0x0003a9de) popup_slider_window_g

0xd928,	// (0x00038620) popup_slider_window_t1

0xd99c,	// (0x00038694) small_volume_slider_vertical_pane

0xc2af,	// (0x00036fa7) small_volume_slider_vertical_pane_g1

0xc2af,	// (0x00036fa7) small_volume_slider_vertical_pane_g2

0xd9b8,	// (0x000386b0) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf8,	// (0x0003a9f0) small_volume_slider_vertical_pane_g

0x4987,	// (0x0002f67f) area_side_right_pane_ParamLimits

0x4987,	// (0x0002f67f) area_side_right_pane

0x6b26,	// (0x0003181e) aid_size_side_button_ParamLimits

0x6b26,	// (0x0003181e) aid_size_side_button

0x6b3a,	// (0x00031832) grid_sctrl_middle_pane_ParamLimits

0x6b3a,	// (0x00031832) grid_sctrl_middle_pane

0x6b59,	// (0x00031851) sctrl_sk_bottom_pane

0x6b6a,	// (0x00031862) sctrl_sk_top_pane

0x6b7c,	// (0x00031874) aid_touch_sctrl_top

0x6b89,	// (0x00031881) bg_sctrl_sk_pane_ParamLimits

0x6b89,	// (0x00031881) bg_sctrl_sk_pane

0x6b97,	// (0x0003188f) sctrl_sk_top_pane_g1

0x6ba4,	// (0x0003189c) sctrl_sk_top_pane_t1

0x6b7c,	// (0x00031874) aid_touch_sctrl_bottom

0x6b89,	// (0x00031881) bg_sctrl_sk_pane_cp_ParamLimits

0x6b89,	// (0x00031881) bg_sctrl_sk_pane_cp

0x6bbf,	// (0x000318b7) sctrl_sk_bottom_pane_g1

0x6ba4,	// (0x0003189c) sctrl_sk_bottom_pane_t1

0x6bc8,	// (0x000318c0) cell_sctrl_middle_pane_ParamLimits

0x6bc8,	// (0x000318c0) cell_sctrl_middle_pane

0x6be3,	// (0x000318db) aid_touch_sctrl_middle_ParamLimits

0x6be3,	// (0x000318db) aid_touch_sctrl_middle

0x6bf5,	// (0x000318ed) bg_sctrl_middle_pane_ParamLimits

0x6bf5,	// (0x000318ed) bg_sctrl_middle_pane

0x695c,	// (0x00031654) cell_sctrl_middle_pane_g1_ParamLimits

0x695c,	// (0x00031654) cell_sctrl_middle_pane_g1

0x6c03,	// (0x000318fb) cell_sctrl_middle_pane_g2_ParamLimits

0x6c03,	// (0x000318fb) cell_sctrl_middle_pane_g2

0x0001,

0xfd04,	// (0x0003a9fc) cell_sctrl_middle_pane_g_ParamLimits

0xfd04,	// (0x0003a9fc) cell_sctrl_middle_pane_g

0x9c89,	// (0x00034981) bg_sctrl_middle_pane_g1

0x9c91,	// (0x00034989) bg_sctrl_middle_pane_g2

0x9c99,	// (0x00034991) bg_sctrl_middle_pane_g3

0x9ca1,	// (0x00034999) bg_sctrl_middle_pane_g4

0x9ca9,	// (0x000349a1) bg_sctrl_middle_pane_g5

0x9cb1,	// (0x000349a9) bg_sctrl_middle_pane_g6

0x9cb9,	// (0x000349b1) bg_sctrl_middle_pane_g7

0x9cc1,	// (0x000349b9) bg_sctrl_middle_pane_g8

0x0007,

0xfd09,	// (0x0003aa01) bg_sctrl_middle_pane_g

0x9cc9,	// (0x000349c1) bg_sctrl_middle_pane_g8_copy1

0x9c89,	// (0x00034981) bg_sctrl_sk_pane_g1

0x9c99,	// (0x00034991) bg_sctrl_sk_pane_g2

0x9c91,	// (0x00034989) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0003a55e) bg_sctrl_sk_pane_g

0x86da,	// (0x000333d2) aid_size_touch_scroll_bar

0x9ca9,	// (0x000349a1) bg_sctrl_sk_pane_g4

0x9ca1,	// (0x00034999) bg_sctrl_sk_pane_g5

0x9cb1,	// (0x000349a9) bg_sctrl_sk_pane_g6

0x9cb9,	// (0x000349b1) bg_sctrl_sk_pane_g7

0x9cc9,	// (0x000349c1) bg_sctrl_sk_pane_g8

0x9cc1,	// (0x000349b9) bg_sctrl_sk_pane_g9

0x5b8e,	// (0x00030886) popup_fep_china_hwr2_fs_candidate_window

0x5b98,	// (0x00030890) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5b98,	// (0x00030890) popup_fep_china_hwr2_fs_control_window

0x695c,	// (0x00031654) sctrl_sk_top_pane_g2

0x0001,

0xfcff,	// (0x0003a9f7) sctrl_sk_top_pane_g

0xd9c1,	// (0x000386b9) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c1,	// (0x000386b9) aid_fep_china_hwr2_fs_cell

0xd9d3,	// (0x000386cb) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d3,	// (0x000386cb) bg_popup_fep_shadow_pane_cp4

0xd9ea,	// (0x000386e2) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ea,	// (0x000386e2) bg_popup_fep_shadow_pane_cp5

0xd9fc,	// (0x000386f4) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9fc,	// (0x000386f4) popup_fep_china_hwr2_fs_control_bar_grid

0xda0c,	// (0x00038704) popup_fep_china_hwr2_fs_control_funtion_grid

0xda14,	// (0x0003870c) aid_fep_china_hwr2_fs_candi_cell

0x76e8,	// (0x000323e0) bg_popup_fep_shadow_pane_cp6

0xda1e,	// (0x00038716) popup_fep_china_hwr2_fs_candidate_grid

0xda28,	// (0x00038720) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda28,	// (0x00038720) cell_fep_china_hwr2_fs_funtion_grid

0xc2af,	// (0x00036fa7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda40,	// (0x00038738) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda40,	// (0x00038738) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda4e,	// (0x00038746) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda4e,	// (0x00038746) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1a,	// (0x0003aa12) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1a,	// (0x0003aa12) cell_fep_china_hwr2_fs_funtion_grid_g

0xda64,	// (0x0003875c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda64,	// (0x0003875c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda79,	// (0x00038771) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda79,	// (0x00038771) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1f,	// (0x0003aa17) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1f,	// (0x0003aa17) cell_fep_china_hwr2_fs_funtion_grid_t

0xda95,	// (0x0003878d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda9d,	// (0x00038795) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa5,	// (0x0003879d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd24,	// (0x0003aa1c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaad,	// (0x000387a5) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaad,	// (0x000387a5) cell_fep_china_hwr2_fs_candidate_grid

0xdac6,	// (0x000387be) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdace,	// (0x000387c6) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2af,	// (0x00036fa7) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2af,	// (0x00036fa7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb38,	// (0x0003a830) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad6,	// (0x000387ce) cell_fep_china_hwr2_fs_candidate_grid_t1

0x987f,	// (0x00034577) clock_nsta_pane_cp_24_ParamLimits

0x987f,	// (0x00034577) clock_nsta_pane_cp_24

0x98fd,	// (0x000345f5) indicator_nsta_pane_cp_24_ParamLimits

0x98fd,	// (0x000345f5) indicator_nsta_pane_cp_24

0xa982,	// (0x0003567a) heading_pane_g1

0x0001,

0xf8cb,	// (0x0003a5c3) heading_pane_g

0xb3d2,	// (0x000360ca) grid_sct_catagory_button_pane

0xb402,	// (0x000360fa) scroll_pane_cp5_ParamLimits

0xbe95,	// (0x00036b8d) button_value_adjust_pane_cp5_ParamLimits

0xbe95,	// (0x00036b8d) button_value_adjust_pane_cp5

0xbf74,	// (0x00036c6c) form2_midp_time_pane_ParamLimits

0xdae4,	// (0x000387dc) cell_sct_catagory_button_pane_ParamLimits

0xdae4,	// (0x000387dc) cell_sct_catagory_button_pane

0xc274,	// (0x00036f6c) bg_button_pane_cp01_ParamLimits

0xc274,	// (0x00036f6c) bg_button_pane_cp01

0xc2af,	// (0x00036fa7) cell_sct_catagory_button_pane_g1

0x5f64,	// (0x00030c5c) popup_tb_extension_window

0xdaf6,	// (0x000387ee) aid_size_cell_ext_ParamLimits

0xdaf6,	// (0x000387ee) aid_size_cell_ext

0x81c5,	// (0x00032ebd) bg_tb_trans_pane_cp1_ParamLimits

0x81c5,	// (0x00032ebd) bg_tb_trans_pane_cp1

0xdb16,	// (0x0003880e) grid_tb_ext_pane_ParamLimits

0xdb16,	// (0x0003880e) grid_tb_ext_pane

0xdb44,	// (0x0003883c) cell_tb_ext_pane_ParamLimits

0xdb44,	// (0x0003883c) cell_tb_ext_pane

0xdb5b,	// (0x00038853) cell_tb_ext_pane_g1_ParamLimits

0xdb5b,	// (0x00038853) cell_tb_ext_pane_g1

0xdb78,	// (0x00038870) cell_tb_ext_pane_t1

0x81c5,	// (0x00032ebd) list_highlight_pane_cp11_ParamLimits

0x81c5,	// (0x00032ebd) list_highlight_pane_cp11

0x4bee,	// (0x0002f8e6) popup_uni_indicator_window_ParamLimits

0x4bee,	// (0x0002f8e6) popup_uni_indicator_window

0x87ab,	// (0x000334a3) bg_popup_sub_pane_cp14

0xdb93,	// (0x0003888b) list_uniindi_pane

0xdb9f,	// (0x00038897) uniindi_top_pane

0x81c5,	// (0x00032ebd) bg_uniindi_top_pane

0xdbbe,	// (0x000388b6) uniindi_top_pane_g1

0xdbd4,	// (0x000388cc) uniindi_top_pane_g2

0x0003,

0xfd2b,	// (0x0003aa23) uniindi_top_pane_g

0xdbfe,	// (0x000388f6) uniindi_top_pane_t1

0xdc28,	// (0x00038920) list_single_uniindi_pane_ParamLimits

0xdc28,	// (0x00038920) list_single_uniindi_pane

0xc2af,	// (0x00036fa7) bg_uniindi_top_pane_g1

0xdc3b,	// (0x00038933) list_single_uniindi_pane_g1

0xdc4e,	// (0x00038946) list_single_uniindi_pane_t1

0x4a64,	// (0x0002f75c) control_bg_pane

0xdc73,	// (0x0003896b) bg_sctrl_sk_pane_cp1

0xdc7c,	// (0x00038974) bg_sctrl_sk_pane_cp2

0xdc85,	// (0x0003897d) control_bg_pane_g1

0xdc8e,	// (0x00038986) control_bg_pane_g2

0x0001,

0xfd34,	// (0x0003aa2c) control_bg_pane_g

0xbcdf,	// (0x000369d7) cell_indicator_nsta_pane_g1_ParamLimits

0xbced,	// (0x000369e5) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9c,	// (0x0003a794) cell_indicator_nsta_pane_g_ParamLimits

0x7dc4,	// (0x00032abc) form2_midp_time_pane_t1_ParamLimits

0x5aee,	// (0x000307e6) main_idle_act4_pane_ParamLimits

0x5aee,	// (0x000307e6) main_idle_act4_pane

0x5f64,	// (0x00030c5c) popup_tb_extension_window_ParamLimits

0xdb34,	// (0x0003882c) tb_ext_find_pane_ParamLimits

0xdb34,	// (0x0003882c) tb_ext_find_pane

0xdc97,	// (0x0003898f) ai_gene_pane_1_cp1

0x957c,	// (0x00034274) ai_gene_pane_2_cp1

0xdc9f,	// (0x00038997) list_single_idle_plugin_calendar_pane

0xdca8,	// (0x000389a0) list_single_idle_plugin_notification_pane

0xdcb1,	// (0x000389a9) list_single_idle_plugin_player_pane

0xdcba,	// (0x000389b2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcba,	// (0x000389b2) list_single_idle_plugin_shortcut_pane

0xdcdc,	// (0x000389d4) main_idle_act4_pane_t1

0xdcee,	// (0x000389e6) main_idle_act4_pane_t2

0x0001,

0xfd39,	// (0x0003aa31) main_idle_act4_pane_t

0xdd00,	// (0x000389f8) middle_sk_idle_act4_pane_ParamLimits

0xdd00,	// (0x000389f8) middle_sk_idle_act4_pane

0xdd16,	// (0x00038a0e) popup_clock_digital_analogue_window_cp2

0xdd30,	// (0x00038a28) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd30,	// (0x00038a28) shortcut_wheel_idle_act4_pane

0xc2af,	// (0x00036fa7) shortcut_wheel_idle_act4_pane_g1

0xc2af,	// (0x00036fa7) shortcut_wheel_idle_act4_pane_g2

0xc2af,	// (0x00036fa7) shortcut_wheel_idle_act4_pane_g3

0xc2af,	// (0x00036fa7) shortcut_wheel_idle_act4_pane_g4

0xc2af,	// (0x00036fa7) shortcut_wheel_idle_act4_pane_g5

0xdd44,	// (0x00038a3c) shortcut_wheel_idle_act4_pane_g6

0xdd4c,	// (0x00038a44) shortcut_wheel_idle_act4_pane_g7

0xdd54,	// (0x00038a4c) shortcut_wheel_idle_act4_pane_g8

0xdd5c,	// (0x00038a54) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3e,	// (0x0003aa36) shortcut_wheel_idle_act4_pane_g

0xc52d,	// (0x00037225) middle_sk_idle_act4_pane_g1_ParamLimits

0xc52d,	// (0x00037225) middle_sk_idle_act4_pane_g1

0xddc0,	// (0x00038ab8) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc0,	// (0x00038ab8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd61,	// (0x0003aa59) middle_sk_idle_act4_pane_g_ParamLimits

0xfd61,	// (0x0003aa59) middle_sk_idle_act4_pane_g

0xddcc,	// (0x00038ac4) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x00038ac4) middle_sk_idle_act4_pane_t1

0xdde9,	// (0x00038ae1) grid_ai_shortcut_pane_ParamLimits

0xdde9,	// (0x00038ae1) grid_ai_shortcut_pane

0xde02,	// (0x00038afa) list_highlight_pane_cp16_ParamLimits

0xde02,	// (0x00038afa) list_highlight_pane_cp16

0xde0f,	// (0x00038b07) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde0f,	// (0x00038b07) list_single_idle_plugin_shortcut_pane_g1

0xde1b,	// (0x00038b13) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1b,	// (0x00038b13) list_single_idle_plugin_shortcut_pane_g2

0xde33,	// (0x00038b2b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde33,	// (0x00038b2b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd66,	// (0x0003aa5e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd66,	// (0x0003aa5e) list_single_idle_plugin_shortcut_pane_g

0xde46,	// (0x00038b3e) cell_ai_shortcut_pane_ParamLimits

0xde46,	// (0x00038b3e) cell_ai_shortcut_pane

0xde6a,	// (0x00038b62) cell_ai_shortcut_pane_g1_ParamLimits

0xde6a,	// (0x00038b62) cell_ai_shortcut_pane_g1

0xdc97,	// (0x0003898f) ai_gene_pane_1_cp2

0xde8c,	// (0x00038b84) ai_gene_pane_2_cp2

0xde94,	// (0x00038b8c) list_highlight_pane_cp15

0xde9d,	// (0x00038b95) list_single_idle_plugin_calendar_pane_g1

0xde94,	// (0x00038b8c) list_highlight_pane_cp17

0xdea5,	// (0x00038b9d) list_single_idle_plugin_calendar_pane_g1_copy1

0xdead,	// (0x00038ba5) list_single_idle_plugin_player_pane_g1

0xb62b,	// (0x00036323) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6d,	// (0x0003aa65) list_single_idle_plugin_player_pane_g

0xdeb5,	// (0x00038bad) list_single_idle_plugin_player_pane_t1

0xdec3,	// (0x00038bbb) list_single_idle_plugin_player_pane_t2

0xded1,	// (0x00038bc9) list_single_idle_plugin_player_pane_t3

0xdedf,	// (0x00038bd7) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd72,	// (0x0003aa6a) list_single_idle_plugin_player_pane_t

0xdeed,	// (0x00038be5) wait_bar_pane_cp15

0xdef5,	// (0x00038bed) grid_ai_notification_pane

0xb62b,	// (0x00036323) list_single_idle_plugin_notification_pane_g1

0xdefe,	// (0x00038bf6) cell_ai_notification_pane_ParamLimits

0xdefe,	// (0x00038bf6) cell_ai_notification_pane

0xdf0b,	// (0x00038c03) cell_ai_notification_pane_g1

0xdf13,	// (0x00038c0b) cell_ai_notification_pane_t1

0xdf21,	// (0x00038c19) tb_ext_find_button_pane

0xdf29,	// (0x00038c21) tb_ext_find_pane_g1

0xdf31,	// (0x00038c29) tb_ext_find_pane_t1

0x8e2e,	// (0x00033b26) tb_ext_find_button_pane_g1

0xdf3f,	// (0x00038c37) tb_ext_find_button_pane_g2

0x0001,

0xfd7b,	// (0x0003aa73) tb_ext_find_button_pane_g

0xdcdc,	// (0x000389d4) main_idle_act4_pane_t1_ParamLimits

0xdcee,	// (0x000389e6) main_idle_act4_pane_t2_ParamLimits

0xfd39,	// (0x0003aa31) main_idle_act4_pane_t_ParamLimits

0xdd16,	// (0x00038a0e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd24,	// (0x00038a1c) sat_plugin_idle_act4_pane_ParamLimits

0xdd24,	// (0x00038a1c) sat_plugin_idle_act4_pane

0xdf48,	// (0x00038c40) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf48,	// (0x00038c40) sat_plugin_idle_act4_pane_t1

0xdf5b,	// (0x00038c53) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5b,	// (0x00038c53) sat_plugin_idle_act4_pane_t2

0xdf6e,	// (0x00038c66) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf6e,	// (0x00038c66) sat_plugin_idle_act4_pane_t3

0xdf81,	// (0x00038c79) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf81,	// (0x00038c79) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd80,	// (0x0003aa78) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd80,	// (0x0003aa78) sat_plugin_idle_act4_pane_t

0x4b29,	// (0x0002f821) popup_battery_window_ParamLimits

0x4b29,	// (0x0002f821) popup_battery_window

0x81c5,	// (0x00032ebd) bg_popup_sub_pane_cp25_ParamLimits

0x81c5,	// (0x00032ebd) bg_popup_sub_pane_cp25

0xdf94,	// (0x00038c8c) popup_battery_window_g1_ParamLimits

0xdf94,	// (0x00038c8c) popup_battery_window_g1

0xdfa0,	// (0x00038c98) popup_battery_window_t1_ParamLimits

0xdfa0,	// (0x00038c98) popup_battery_window_t1

0xdfb2,	// (0x00038caa) popup_battery_window_t2_ParamLimits

0xdfb2,	// (0x00038caa) popup_battery_window_t2

0x0001,

0xfd89,	// (0x0003aa81) popup_battery_window_t_ParamLimits

0xfd89,	// (0x0003aa81) popup_battery_window_t

0x9449,	// (0x00034141) midp_canvas_pane_ParamLimits

0x94c0,	// (0x000341b8) midp_keypad_pane_ParamLimits

0x94c0,	// (0x000341b8) midp_keypad_pane

0x977f,	// (0x00034477) main_midp_pane_ParamLimits

0xbd59,	// (0x00036a51) signal_pane_g2_cp_ParamLimits

0xdfcf,	// (0x00038cc7) aid_size_cell_midp_keypad_ParamLimits

0xdfcf,	// (0x00038cc7) aid_size_cell_midp_keypad

0xdfe9,	// (0x00038ce1) midp_keyp_game_grid_pane_ParamLimits

0xdfe9,	// (0x00038ce1) midp_keyp_game_grid_pane

0xe009,	// (0x00038d01) midp_keyp_rocker_pane_ParamLimits

0xe009,	// (0x00038d01) midp_keyp_rocker_pane

0xe042,	// (0x00038d3a) midp_keyp_sk_left_pane_ParamLimits

0xe042,	// (0x00038d3a) midp_keyp_sk_left_pane

0xe09c,	// (0x00038d94) midp_keyp_sk_right_pane_ParamLimits

0xe09c,	// (0x00038d94) midp_keyp_sk_right_pane

0x76e8,	// (0x000323e0) bg_button_pane_cp03

0xe0f6,	// (0x00038dee) midp_keyp_sk_left_pane_g1

0x76e8,	// (0x000323e0) bg_button_pane_cp04

0xe0f6,	// (0x00038dee) midp_keyp_sk_right_pane_g1

0xc2af,	// (0x00036fa7) midp_keyp_rocker_pane_g1

0xe0ff,	// (0x00038df7) keyp_game_cell_pane_ParamLimits

0xe0ff,	// (0x00038df7) keyp_game_cell_pane

0x76e8,	// (0x000323e0) bg_button_pane_cp02

0xe112,	// (0x00038e0a) keyp_game_cell_pane_g1

0x4b6d,	// (0x0002f865) popup_fep_vkb2_window_ParamLimits

0x4b6d,	// (0x0002f865) popup_fep_vkb2_window

0x6c21,	// (0x00031919) aid_size_cell_vkb2_ParamLimits

0x6c21,	// (0x00031919) aid_size_cell_vkb2

0x6c75,	// (0x0003196d) popup_fep_vkb2_window_g1_ParamLimits

0x6c75,	// (0x0003196d) popup_fep_vkb2_window_g1

0x6cbd,	// (0x000319b5) vkb2_area_bottom_pane_ParamLimits

0x6cbd,	// (0x000319b5) vkb2_area_bottom_pane

0x6d09,	// (0x00031a01) vkb2_area_keypad_pane_ParamLimits

0x6d09,	// (0x00031a01) vkb2_area_keypad_pane

0x6d4b,	// (0x00031a43) vkb2_area_top_pane_ParamLimits

0x6d4b,	// (0x00031a43) vkb2_area_top_pane

0x6dc5,	// (0x00031abd) vkb2_top_entry_pane_ParamLimits

0x6dc5,	// (0x00031abd) vkb2_top_entry_pane

0x6def,	// (0x00031ae7) vkb2_top_grid_left_pane_ParamLimits

0x6def,	// (0x00031ae7) vkb2_top_grid_left_pane

0x6e0d,	// (0x00031b05) vkb2_top_grid_right_pane_ParamLimits

0x6e0d,	// (0x00031b05) vkb2_top_grid_right_pane

0x6e2b,	// (0x00031b23) vkb2_cell_keypad_pane_ParamLimits

0x6e2b,	// (0x00031b23) vkb2_cell_keypad_pane

0x6efc,	// (0x00031bf4) vkb2_area_bottom_grid_pane_ParamLimits

0x6efc,	// (0x00031bf4) vkb2_area_bottom_grid_pane

0x6f22,	// (0x00031c1a) vkb2_area_bottom_pane_g1_ParamLimits

0x6f22,	// (0x00031c1a) vkb2_area_bottom_pane_g1

0x6f46,	// (0x00031c3e) vkb2_area_bottom_pane_g2_ParamLimits

0x6f46,	// (0x00031c3e) vkb2_area_bottom_pane_g2

0x6f74,	// (0x00031c6c) vkb2_area_bottom_pane_g3_ParamLimits

0x6f74,	// (0x00031c6c) vkb2_area_bottom_pane_g3

0x0002,

0xfd8e,	// (0x0003aa86) vkb2_area_bottom_pane_g_ParamLimits

0xfd8e,	// (0x0003aa86) vkb2_area_bottom_pane_g

0x6fd5,	// (0x00031ccd) vkb2_top_cell_left_pane_ParamLimits

0x6fd5,	// (0x00031ccd) vkb2_top_cell_left_pane

0xe123,	// (0x00038e1b) vkb2_top_entry_pane_g1_ParamLimits

0xe123,	// (0x00038e1b) vkb2_top_entry_pane_g1

0xe131,	// (0x00038e29) vkb2_top_entry_pane_t1_ParamLimits

0xe131,	// (0x00038e29) vkb2_top_entry_pane_t1

0xe163,	// (0x00038e5b) vkb2_top_entry_pane_t2_ParamLimits

0xe163,	// (0x00038e5b) vkb2_top_entry_pane_t2

0xe195,	// (0x00038e8d) vkb2_top_entry_pane_t3_ParamLimits

0xe195,	// (0x00038e8d) vkb2_top_entry_pane_t3

0x0002,

0xfd95,	// (0x0003aa8d) vkb2_top_entry_pane_t_ParamLimits

0xfd95,	// (0x0003aa8d) vkb2_top_entry_pane_t

0x7022,	// (0x00031d1a) vkb2_top_grid_right_pane_g1_ParamLimits

0x7022,	// (0x00031d1a) vkb2_top_grid_right_pane_g1

0x7038,	// (0x00031d30) vkb2_top_grid_right_pane_g2_ParamLimits

0x7038,	// (0x00031d30) vkb2_top_grid_right_pane_g2

0x7050,	// (0x00031d48) vkb2_top_grid_right_pane_g3_ParamLimits

0x7050,	// (0x00031d48) vkb2_top_grid_right_pane_g3

0x7068,	// (0x00031d60) vkb2_top_grid_right_pane_g4_ParamLimits

0x7068,	// (0x00031d60) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9c,	// (0x0003aa94) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9c,	// (0x0003aa94) vkb2_top_grid_right_pane_g

0x707e,	// (0x00031d76) vkb2_top_cell_left_pane_g1

0x7095,	// (0x00031d8d) vkb2_cell_keypad_pane_g1_ParamLimits

0x7095,	// (0x00031d8d) vkb2_cell_keypad_pane_g1

0xe1b9,	// (0x00038eb1) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1b9,	// (0x00038eb1) vkb2_cell_keypad_pane_t1

0x70a3,	// (0x00031d9b) vkb2_cell_bottom_grid_pane_ParamLimits

0x70a3,	// (0x00031d9b) vkb2_cell_bottom_grid_pane

0x70dc,	// (0x00031dd4) vkb2_cell_bottom_grid_pane_g1

0xdd64,	// (0x00038a5c) aid_call2_pane_cp02

0xdd6c,	// (0x00038a64) aid_call_pane_cp02

0xdd74,	// (0x00038a6c) clock_digital_number_pane_cp10

0xdd7c,	// (0x00038a74) clock_digital_number_pane_cp11

0xdd84,	// (0x00038a7c) clock_digital_number_pane_cp12

0xdd8c,	// (0x00038a84) clock_digital_number_pane_cp13

0xdd94,	// (0x00038a8c) clock_digital_separator_pane_cp10

0x8e2e,	// (0x00033b26) popup_clock_digital_analogue_window_cp2_g1

0x8e2e,	// (0x00033b26) popup_clock_digital_analogue_window_cp2_g2

0xdd9c,	// (0x00038a94) popup_clock_digital_analogue_window_cp2_g3

0x8e2e,	// (0x00033b26) popup_clock_digital_analogue_window_cp2_g4

0xdd9c,	// (0x00038a94) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd51,	// (0x0003aa49) popup_clock_digital_analogue_window_cp2_g

0xdda4,	// (0x00038a9c) popup_clock_digital_analogue_window_cp2_t1

0xddb2,	// (0x00038aaa) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5c,	// (0x0003aa54) popup_clock_digital_analogue_window_cp2_t

0xc2af,	// (0x00036fa7) clock_digital_number_pane_cp10_g1

0xc2af,	// (0x00036fa7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a830) clock_digital_number_pane_cp10_g

0xc2af,	// (0x00036fa7) clock_digital_separator_pane_cp10_g1

0xc2af,	// (0x00036fa7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a830) clock_digital_separator_pane_cp10_g

0xdbe0,	// (0x000388d8) uniindi_top_pane_g3

0xdbf1,	// (0x000388e9) uniindi_top_pane_g4

0x6eb6,	// (0x00031bae) vkb2_row_keypad_pane_ParamLimits

0x6eb6,	// (0x00031bae) vkb2_row_keypad_pane

0x70f8,	// (0x00031df0) vkb2_cell_t_keypad_pane_ParamLimits

0x70f8,	// (0x00031df0) vkb2_cell_t_keypad_pane

0x7108,	// (0x00031e00) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7108,	// (0x00031e00) vkb2_cell_t_keypad_pane_cp08

0x711b,	// (0x00031e13) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x711b,	// (0x00031e13) vkb2_cell_t_keypad_pane_cp09

0x712f,	// (0x00031e27) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x712f,	// (0x00031e27) vkb2_cell_t_keypad_pane_cp01

0x7140,	// (0x00031e38) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7140,	// (0x00031e38) vkb2_cell_t_keypad_pane_cp02

0x7151,	// (0x00031e49) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7151,	// (0x00031e49) vkb2_cell_t_keypad_pane_cp03

0x7162,	// (0x00031e5a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7162,	// (0x00031e5a) vkb2_cell_t_keypad_pane_cp04

0x7173,	// (0x00031e6b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7173,	// (0x00031e6b) vkb2_cell_t_keypad_pane_cp05

0x7184,	// (0x00031e7c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7184,	// (0x00031e7c) vkb2_cell_t_keypad_pane_cp06

0x7195,	// (0x00031e8d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7195,	// (0x00031e8d) vkb2_cell_t_keypad_pane_cp07

0x71a6,	// (0x00031e9e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x71a6,	// (0x00031e9e) vkb2_cell_t_keypad_pane_cp10

0x695c,	// (0x00031654) vkb2_cell_t_keypad_pane_g1

0xe1f1,	// (0x00038ee9) vkb2_cell_t_keypad_pane_t1

0x4a64,	// (0x0002f75c) popup_grid_graphic2_window

0xe203,	// (0x00038efb) aid_size_cell_graphic2_ParamLimits

0xe203,	// (0x00038efb) aid_size_cell_graphic2

0xe23b,	// (0x00038f33) bg_popup_window_pane_cp21_ParamLimits

0xe23b,	// (0x00038f33) bg_popup_window_pane_cp21

0xe249,	// (0x00038f41) graphic2_pages_pane_ParamLimits

0xe249,	// (0x00038f41) graphic2_pages_pane

0xe28f,	// (0x00038f87) grid_graphic2_control_pane_ParamLimits

0xe28f,	// (0x00038f87) grid_graphic2_control_pane

0xe2cd,	// (0x00038fc5) grid_graphic2_pane_ParamLimits

0xe2cd,	// (0x00038fc5) grid_graphic2_pane

0xe341,	// (0x00039039) cell_graphic2_pane

0x4a64,	// (0x0002f75c) main_comp_mode_pane

0xd460,	// (0x00038158) list_ai3_gene_pane_ParamLimits

0xd82a,	// (0x00038522) bg_popup_window_pane_cp19_ParamLimits

0xd836,	// (0x0003852e) bg_touch_area_indi_pane_ParamLimits

0xd836,	// (0x0003852e) bg_touch_area_indi_pane

0xd84c,	// (0x00038544) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84c,	// (0x00038544) bg_touch_area_indi_pane_cp01

0xd862,	// (0x0003855a) bg_touch_area_indi_pane_cp02_ParamLimits

0xd862,	// (0x0003855a) bg_touch_area_indi_pane_cp02

0xd87a,	// (0x00038572) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87a,	// (0x00038572) bg_touch_area_indi_pane_cp03

0xd894,	// (0x0003858c) popup_slider_window_g1_ParamLimits

0xd8b0,	// (0x000385a8) popup_slider_window_g2_ParamLimits

0xd8cc,	// (0x000385c4) popup_slider_window_g3_ParamLimits

0xfce6,	// (0x0003a9de) popup_slider_window_g_ParamLimits

0xd928,	// (0x00038620) popup_slider_window_t1_ParamLimits

0xd99c,	// (0x00038694) small_volume_slider_vertical_pane_ParamLimits

0xe341,	// (0x00039039) cell_graphic2_pane_ParamLimits

0xe38f,	// (0x00039087) bg_button_pane_cp10_ParamLimits

0xe38f,	// (0x00039087) bg_button_pane_cp10

0xe3a2,	// (0x0003909a) bg_button_pane_cp11_ParamLimits

0xe3a2,	// (0x0003909a) bg_button_pane_cp11

0xe3b5,	// (0x000390ad) graphic2_pages_pane_g1_ParamLimits

0xe3b5,	// (0x000390ad) graphic2_pages_pane_g1

0xe3d0,	// (0x000390c8) graphic2_pages_pane_g2_ParamLimits

0xe3d0,	// (0x000390c8) graphic2_pages_pane_g2

0x0001,

0xfdaa,	// (0x0003aaa2) graphic2_pages_pane_g_ParamLimits

0xfdaa,	// (0x0003aaa2) graphic2_pages_pane_g

0xe3e8,	// (0x000390e0) graphic2_pages_pane_t1_ParamLimits

0xe3e8,	// (0x000390e0) graphic2_pages_pane_t1

0xe400,	// (0x000390f8) cell_graphic2_control_pane_ParamLimits

0xe400,	// (0x000390f8) cell_graphic2_control_pane

0xe421,	// (0x00039119) cell_graphic2_pane_g1_ParamLimits

0xe421,	// (0x00039119) cell_graphic2_pane_g1

0xe42e,	// (0x00039126) cell_graphic2_pane_g2_ParamLimits

0xe42e,	// (0x00039126) cell_graphic2_pane_g2

0xe43b,	// (0x00039133) cell_graphic2_pane_g3_ParamLimits

0xe43b,	// (0x00039133) cell_graphic2_pane_g3

0xe448,	// (0x00039140) cell_graphic2_pane_g4_ParamLimits

0xe448,	// (0x00039140) cell_graphic2_pane_g4

0xe455,	// (0x0003914d) cell_graphic2_pane_g5_ParamLimits

0xe455,	// (0x0003914d) cell_graphic2_pane_g5

0x0004,

0xfdaf,	// (0x0003aaa7) cell_graphic2_pane_g_ParamLimits

0xfdaf,	// (0x0003aaa7) cell_graphic2_pane_g

0xe470,	// (0x00039168) cell_graphic2_pane_t1_ParamLimits

0xe470,	// (0x00039168) cell_graphic2_pane_t1

0x9cfd,	// (0x000349f5) grid_highlight_pane_cp11_ParamLimits

0x9cfd,	// (0x000349f5) grid_highlight_pane_cp11

0x81c5,	// (0x00032ebd) bg_button_pane_cp05

0xe499,	// (0x00039191) cell_graphic2_control_pane_g1

0xc2af,	// (0x00036fa7) bg_touch_area_indi_pane_g1

0xe4c1,	// (0x000391b9) aid_cmod_rocker_key_size

0xe4cb,	// (0x000391c3) aid_cmode_itu_key_size

0xe4d5,	// (0x000391cd) main_cmode_video_pane

0xe4df,	// (0x000391d7) main_comp_mode_itu_pane

0xe4eb,	// (0x000391e3) main_comp_mode_rocker_pane

0xe4f7,	// (0x000391ef) cell_cmode_rocker_pane_ParamLimits

0xe4f7,	// (0x000391ef) cell_cmode_rocker_pane

0xe509,	// (0x00039201) cell_cmode_itu_pane_ParamLimits

0xe509,	// (0x00039201) cell_cmode_itu_pane

0x87ab,	// (0x000334a3) bg_button_pane_cp06_ParamLimits

0x87ab,	// (0x000334a3) bg_button_pane_cp06

0xc52d,	// (0x00037225) cell_cmode_rocker_pane_g1_ParamLimits

0xc52d,	// (0x00037225) cell_cmode_rocker_pane_g1

0xda40,	// (0x00038738) cell_cmode_rocker_pane_g2_ParamLimits

0xda40,	// (0x00038738) cell_cmode_rocker_pane_g2

0x0001,

0xfdbf,	// (0x0003aab7) cell_cmode_rocker_pane_g_ParamLimits

0xfdbf,	// (0x0003aab7) cell_cmode_rocker_pane_g

0x76e8,	// (0x000323e0) bg_button_pane_cp07

0xe51e,	// (0x00039216) cell_cmode_itu_pane_g1

0xe527,	// (0x0003921f) cell_cmode_itu_pane_t1

0xe535,	// (0x0003922d) cell_cmode_itu_pane_t2

0x0001,

0xfdc4,	// (0x0003aabc) cell_cmode_itu_pane_t

0xdc63,	// (0x0003895b) aid_touch_ctrl_left

0xdc6b,	// (0x00038963) aid_touch_ctrl_right

0x76e8,	// (0x000323e0) compa_mode_pane

0xe543,	// (0x0003923b) aid_cmod_rocker_key_size_cp

0xe54d,	// (0x00039245) aid_cmode_itu_key_size_cp

0xe557,	// (0x0003924f) compa_mode_pane_g1

0xe55f,	// (0x00039257) compa_mode_pane_g2

0xe567,	// (0x0003925f) compa_mode_pane_g3

0x0002,

0xfdc9,	// (0x0003aac1) compa_mode_pane_g

0xe56f,	// (0x00039267) main_comp_mode_itu_pane_cp

0xe577,	// (0x0003926f) main_comp_mode_rocker_pane_cp

0xe57f,	// (0x00039277) cell_cmode_itu_pane_cp_ParamLimits

0xe57f,	// (0x00039277) cell_cmode_itu_pane_cp

0xe594,	// (0x0003928c) cell_cmode_rocker_pane_cp_ParamLimits

0xe594,	// (0x0003928c) cell_cmode_rocker_pane_cp

0x87ab,	// (0x000334a3) bg_button_pane_cp06_cp_ParamLimits

0x87ab,	// (0x000334a3) bg_button_pane_cp06_cp

0xc52d,	// (0x00037225) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc52d,	// (0x00037225) cell_cmode_rocker_pane_g1_cp

0xc2af,	// (0x00036fa7) cell_cmode_rocker_pane_g2_cp

0x76e8,	// (0x000323e0) bg_button_pane_cp07_cp

0xb1ce,	// (0x00035ec6) cell_cmode_itu_pane_g1_cp

0xe5a6,	// (0x0003929e) cell_cmode_itu_pane_t1_cp

0xe5a6,	// (0x0003929e) cell_cmode_itu_pane_t2_cp

0xb1bb,	// (0x00035eb3) settings_code_pane_cp2

0x77dc,	// (0x000324d4) bg_popup_window_pane_cp3_ParamLimits

0x839f,	// (0x00033097) heading_pane_cp3_ParamLimits

0x83ab,	// (0x000330a3) listscroll_popup_graphic_pane_ParamLimits

0x6705,	// (0x000313fd) fep_hwr_aid_pane_ParamLimits

0x6b7c,	// (0x00031874) aid_touch_sctrl_top_ParamLimits

0x6b97,	// (0x0003188f) sctrl_sk_top_pane_g1_ParamLimits

0x695c,	// (0x00031654) sctrl_sk_top_pane_g2_ParamLimits

0xfcff,	// (0x0003a9f7) sctrl_sk_top_pane_g_ParamLimits

0x6ba4,	// (0x0003189c) sctrl_sk_top_pane_t1_ParamLimits

0x6b7c,	// (0x00031874) aid_touch_sctrl_bottom_ParamLimits

0x6ba4,	// (0x0003189c) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbac,	// (0x000388a4) aid_area_touch_clock

0x6d8d,	// (0x00031a85) aid_vkb2_area_top_pane_cell_ParamLimits

0x6d8d,	// (0x00031a85) aid_vkb2_area_top_pane_cell

0x6ed8,	// (0x00031bd0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6ed8,	// (0x00031bd0) aid_vkb2_area_bottom_pane_cell

0xe11b,	// (0x00038e13) popup_char_count_window

0xe5b4,	// (0x000392ac) popup_char_count_window_g1

0xe5bd,	// (0x000392b5) popup_char_count_window_g2

0xe5c6,	// (0x000392be) popup_char_count_window_g3

0x0002,

0xfdd0,	// (0x0003aac8) popup_char_count_window_g

0xe5cf,	// (0x000392c7) popup_char_count_window_t1

0x6c53,	// (0x0003194b) popup_fep_char_preview_window_ParamLimits

0x6c53,	// (0x0003194b) popup_fep_char_preview_window

0x6dab,	// (0x00031aa3) vkb2_top_candi_pane_ParamLimits

0x6dab,	// (0x00031aa3) vkb2_top_candi_pane

0xe5dd,	// (0x000392d5) cell_vkb2_top_candi_pane_ParamLimits

0xe5dd,	// (0x000392d5) cell_vkb2_top_candi_pane

0x71bb,	// (0x00031eb3) bg_popup_fep_char_preview_window_ParamLimits

0x71bb,	// (0x00031eb3) bg_popup_fep_char_preview_window

0x71c9,	// (0x00031ec1) popup_fep_char_preview_window_t1_ParamLimits

0x71c9,	// (0x00031ec1) popup_fep_char_preview_window_t1

0xe62a,	// (0x00039322) bg_popup_fep_char_preview_window_g1

0xe632,	// (0x0003932a) bg_popup_fep_char_preview_window_g2

0xe63a,	// (0x00039332) bg_popup_fep_char_preview_window_g3

0xe642,	// (0x0003933a) bg_popup_fep_char_preview_window_g4

0xe64a,	// (0x00039342) bg_popup_fep_char_preview_window_g5

0x7203,	// (0x00031efb) bg_popup_fep_char_preview_window_g6

0xe652,	// (0x0003934a) bg_popup_fep_char_preview_window_g7

0xe65a,	// (0x00039352) bg_popup_fep_char_preview_window_g8

0xe662,	// (0x0003935a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd7,	// (0x0003aacf) bg_popup_fep_char_preview_window_g

0x695c,	// (0x00031654) cell_vkb2_top_candi_pane_g1_ParamLimits

0x695c,	// (0x00031654) cell_vkb2_top_candi_pane_g1

0x696a,	// (0x00031662) cell_vkb2_top_candi_pane_g2_ParamLimits

0x696a,	// (0x00031662) cell_vkb2_top_candi_pane_g2

0xe1d0,	// (0x00038ec8) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe1d0,	// (0x00038ec8) cell_vkb2_top_candi_pane_g3

0x720b,	// (0x00031f03) cell_vkb2_top_candi_pane_g4_ParamLimits

0x720b,	// (0x00031f03) cell_vkb2_top_candi_pane_g4

0xc9f8,	// (0x000376f0) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9f8,	// (0x000376f0) cell_vkb2_top_candi_pane_g5

0x722c,	// (0x00031f24) cell_vkb2_top_candi_pane_g6_ParamLimits

0x722c,	// (0x00031f24) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdea,	// (0x0003aae2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdea,	// (0x0003aae2) cell_vkb2_top_candi_pane_g

0x723a,	// (0x00031f32) cell_vkb2_top_candi_pane_t1

0x64e6,	// (0x000311de) aid_size_touch_slider_mark_ParamLimits

0x64e6,	// (0x000311de) aid_size_touch_slider_mark

0xe27f,	// (0x00038f77) grid_graphic2_catg_pane_ParamLimits

0xe27f,	// (0x00038f77) grid_graphic2_catg_pane

0xe31d,	// (0x00039015) popup_grid_graphic2_window_t1_ParamLimits

0xe31d,	// (0x00039015) popup_grid_graphic2_window_t1

0xe32f,	// (0x00039027) popup_grid_graphic2_window_t2_ParamLimits

0xe32f,	// (0x00039027) popup_grid_graphic2_window_t2

0x0001,

0xfda5,	// (0x0003aa9d) popup_grid_graphic2_window_t_ParamLimits

0xfda5,	// (0x0003aa9d) popup_grid_graphic2_window_t

0x81c5,	// (0x00032ebd) bg_button_pane_cp05_ParamLimits

0xe499,	// (0x00039191) cell_graphic2_control_pane_g1_ParamLimits

0xe66a,	// (0x00039362) cell_graphic2_catg_pane_ParamLimits

0xe66a,	// (0x00039362) cell_graphic2_catg_pane

0x76e8,	// (0x000323e0) bg_button_pane_cp12

0xe67c,	// (0x00039374) cell_graphic2_catg_pane_g1

0xdb78,	// (0x00038870) cell_tb_ext_pane_t1_ParamLimits

0x6ff5,	// (0x00031ced) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6ff5,	// (0x00031ced) vkb2_top_cell_right_narrow_pane

0x700d,	// (0x00031d05) vkb2_top_cell_right_wide_pane_ParamLimits

0x700d,	// (0x00031d05) vkb2_top_cell_right_wide_pane

0x66f7,	// (0x000313ef) bg_vkb2_func_pane_ParamLimits

0x66f7,	// (0x000313ef) bg_vkb2_func_pane

0x707e,	// (0x00031d76) vkb2_top_cell_left_pane_g1_ParamLimits

0x66f7,	// (0x000313ef) bg_vkb2_fuc_pane_cp03_ParamLimits

0x66f7,	// (0x000313ef) bg_vkb2_fuc_pane_cp03

0x70dc,	// (0x00031dd4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c91,	// (0x00034989) bg_vkb2_func_pane_g1

0x9c99,	// (0x00034991) bg_vkb2_func_pane_g2

0x9ca9,	// (0x000349a1) bg_vkb2_func_pane_g3

0x9ca1,	// (0x00034999) bg_vkb2_func_pane_g4

0x9cb1,	// (0x000349a9) bg_vkb2_func_pane_g5

0x9cb9,	// (0x000349b1) bg_vkb2_func_pane_g6

0x9cc1,	// (0x000349b9) bg_vkb2_func_pane_g7

0x9cc9,	// (0x000349c1) bg_vkb2_func_pane_g8

0x9c89,	// (0x00034981) bg_vkb2_func_pane_g9

0x0008,

0xfdf7,	// (0x0003aaef) bg_vkb2_func_pane_g

0x66f7,	// (0x000313ef) bg_vkb2_fuc_pane_cp01_ParamLimits

0x66f7,	// (0x000313ef) bg_vkb2_fuc_pane_cp01

0x707e,	// (0x00031d76) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x707e,	// (0x00031d76) vkb2_top_cell_right_wide_pane_g1

0x66f7,	// (0x000313ef) bg_vkb2_fuc_pane_cp02_ParamLimits

0x66f7,	// (0x000313ef) bg_vkb2_fuc_pane_cp02

0x70dc,	// (0x00031dd4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x70dc,	// (0x00031dd4) vkb2_top_cell_right_narrow_pane_g1

0xd7ae,	// (0x000384a6) aid_touch_area_decrease_ParamLimits

0xd7ae,	// (0x000384a6) aid_touch_area_decrease

0xd7cc,	// (0x000384c4) aid_touch_area_increase_ParamLimits

0xd7cc,	// (0x000384c4) aid_touch_area_increase

0xd7d8,	// (0x000384d0) aid_touch_area_mute_ParamLimits

0xd7d8,	// (0x000384d0) aid_touch_area_mute

0xd7fc,	// (0x000384f4) aid_touch_area_slider_ParamLimits

0xd7fc,	// (0x000384f4) aid_touch_area_slider

0xd8e8,	// (0x000385e0) popup_slider_window_g4_ParamLimits

0xd8e8,	// (0x000385e0) popup_slider_window_g4

0xd8f4,	// (0x000385ec) popup_slider_window_g5_ParamLimits

0xd8f4,	// (0x000385ec) popup_slider_window_g5

0xd916,	// (0x0003860e) popup_slider_window_g6_ParamLimits

0xd916,	// (0x0003860e) popup_slider_window_g6

0xd956,	// (0x0003864e) popup_slider_window_t2_ParamLimits

0xd956,	// (0x0003864e) popup_slider_window_t2

0x0001,

0xfcf3,	// (0x0003a9eb) popup_slider_window_t_ParamLimits

0xfcf3,	// (0x0003a9eb) popup_slider_window_t

0xd96e,	// (0x00038666) slider_pane_ParamLimits

0xd96e,	// (0x00038666) slider_pane

0xe685,	// (0x0003937d) slider_pane_g1_ParamLimits

0xe685,	// (0x0003937d) slider_pane_g1

0xe699,	// (0x00039391) slider_pane_g2_ParamLimits

0xe699,	// (0x00039391) slider_pane_g2

0xe6af,	// (0x000393a7) slider_pane_g3_ParamLimits

0xe6af,	// (0x000393a7) slider_pane_g3

0x0003,

0xfe0a,	// (0x0003ab02) slider_pane_g_ParamLimits

0xfe0a,	// (0x0003ab02) slider_pane_g

0x5fc0,	// (0x00030cb8) popup_tb_float_extension_window_ParamLimits

0x5fc0,	// (0x00030cb8) popup_tb_float_extension_window

0xe6db,	// (0x000393d3) aid_size_cell_tb_float_ext

0x76e8,	// (0x000323e0) bg_popup_sub_window_cp28

0xe6e7,	// (0x000393df) grid_tb_float_ext_pane

0xe6f1,	// (0x000393e9) cell_tb_float_ext_pane_ParamLimits

0xe6f1,	// (0x000393e9) cell_tb_float_ext_pane

0xe70b,	// (0x00039403) cell_tb_float_ext_pane_g1

0xe714,	// (0x0003940c) grid_highlight_pane_cp12

0x6846,	// (0x0003153e) cell_last_hwr_side_pane_ParamLimits

0x6846,	// (0x0003153e) cell_last_hwr_side_pane

0xc2af,	// (0x00036fa7) cell_last_hwr_side_pane_g1

0xe71d,	// (0x00039415) cell_last_hwr_side_pane_g2

0x0001,

0xfe13,	// (0x0003ab0b) cell_last_hwr_side_pane_g

0x6fa4,	// (0x00031c9c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6fa4,	// (0x00031c9c) vkb2_area_bottom_space_btn_pane

0x695c,	// (0x00031654) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1f1,	// (0x00038ee9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x723a,	// (0x00031f32) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7259,	// (0x00031f51) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7259,	// (0x00031f51) vkb2_area_bottom_space_btn_pane_g1

0x7293,	// (0x00031f8b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7293,	// (0x00031f8b) vkb2_area_bottom_space_btn_pane_g2

0x72c9,	// (0x00031fc1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x72c9,	// (0x00031fc1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe18,	// (0x0003ab10) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe18,	// (0x0003ab10) vkb2_area_bottom_space_btn_pane_g

0x67ba,	// (0x000314b2) cel_fep_hwr_func_pane_ParamLimits

0x67ba,	// (0x000314b2) cel_fep_hwr_func_pane

0x67f6,	// (0x000314ee) cell_hwr_side_button_pane_ParamLimits

0x67f6,	// (0x000314ee) cell_hwr_side_button_pane

0xdbac,	// (0x000388a4) aid_area_touch_clock_ParamLimits

0x81c5,	// (0x00032ebd) bg_uniindi_top_pane_ParamLimits

0xdbbe,	// (0x000388b6) uniindi_top_pane_g1_ParamLimits

0xdbd4,	// (0x000388cc) uniindi_top_pane_g2_ParamLimits

0xdbe0,	// (0x000388d8) uniindi_top_pane_g3_ParamLimits

0xdbf1,	// (0x000388e9) uniindi_top_pane_g4_ParamLimits

0xfd2b,	// (0x0003aa23) uniindi_top_pane_g_ParamLimits

0xdbfe,	// (0x000388f6) uniindi_top_pane_t1_ParamLimits

0x81c5,	// (0x00032ebd) bg_vkb2_func_pane_cp01_ParamLimits

0x81c5,	// (0x00032ebd) bg_vkb2_func_pane_cp01

0xe726,	// (0x0003941e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe726,	// (0x0003941e) cel_fep_hwr_func_pane_g1

0x81c5,	// (0x00032ebd) bg_vkb2_func_pane_cp02_ParamLimits

0x81c5,	// (0x00032ebd) bg_vkb2_func_pane_cp02

0xe726,	// (0x0003941e) cell_hwr_side_button_pane_g1_ParamLimits

0xe726,	// (0x0003941e) cell_hwr_side_button_pane_g1

0x9b0a,	// (0x00034802) status_pane_g4_ParamLimits

0x9b0a,	// (0x00034802) status_pane_g4

0x9b24,	// (0x0003481c) status_pane_t1

0xbfdd,	// (0x00036cd5) form2_midp_gauge_slider_cont_pane

0xbfe5,	// (0x00036cdd) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbff7,	// (0x00036cef) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc009,	// (0x00036d01) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaeb,	// (0x0003a7e3) form2_midp_gauge_slider_pane_t_ParamLimits

0xc01b,	// (0x00036d13) form2_midp_slider_pane_ParamLimits

0x6c13,	// (0x0003190b) aid_size_cell_func_vkb2_ParamLimits

0x6c13,	// (0x0003190b) aid_size_cell_func_vkb2

0xe6c7,	// (0x000393bf) slider_pane_g4_ParamLimits

0xe6c7,	// (0x000393bf) slider_pane_g4

0x7313,	// (0x0003200b) form2_midp_gauge_slider_pane_t2_cp01

0x7321,	// (0x00032019) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7321,	// (0x00032019) form2_midp_gauge_slider_pane_t3_cp01

0x733e,	// (0x00032036) form2_midp_slider_pane_cp01

0x76e8,	// (0x000323e0) navi_smil_pane

0xe75f,	// (0x00039457) navi_smil_pane_g1

0xe767,	// (0x0003945f) navi_smil_pane_t1

0xe734,	// (0x0003942c) form2_midp_slider_pane_g1

0xe73d,	// (0x00039435) form2_midp_slider_pane_g2

0xe745,	// (0x0003943d) form2_midp_slider_pane_g3

0xe734,	// (0x0003942c) form2_midp_slider_pane_g4

0xe74d,	// (0x00039445) form2_midp_slider_pane_g5

0x0004,

0xfe21,	// (0x0003ab19) form2_midp_slider_pane_g

0x7303,	// (0x00031ffb) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7303,	// (0x00031ffb) vkb2_area_bottom_space_btn_pane_g4

0x9939,	// (0x00034631) lc0_navi_pane_ParamLimits

0x9939,	// (0x00034631) lc0_navi_pane

0x99af,	// (0x000346a7) lc0_stat_indi_pane_ParamLimits

0x99af,	// (0x000346a7) lc0_stat_indi_pane

0x99c6,	// (0x000346be) ls0_title_pane_ParamLimits

0x99c6,	// (0x000346be) ls0_title_pane

0x87ab,	// (0x000334a3) bg_popup_sub_pane_cp14_ParamLimits

0xdb93,	// (0x0003888b) list_uniindi_pane_ParamLimits

0xdb9f,	// (0x00038897) uniindi_top_pane_ParamLimits

0xdc3b,	// (0x00038933) list_single_uniindi_pane_g1_ParamLimits

0xdc4e,	// (0x00038946) list_single_uniindi_pane_t1_ParamLimits

0x7347,	// (0x0003203f) lc0_stat_clock_pane_ParamLimits

0x7347,	// (0x0003203f) lc0_stat_clock_pane

0xe775,	// (0x0003946d) lc0_stat_indi_pane_g1_ParamLimits

0xe775,	// (0x0003946d) lc0_stat_indi_pane_g1

0xe782,	// (0x0003947a) lc0_stat_indi_pane_g2_ParamLimits

0xe782,	// (0x0003947a) lc0_stat_indi_pane_g2

0x0001,

0xfe2c,	// (0x0003ab24) lc0_stat_indi_pane_g_ParamLimits

0xfe2c,	// (0x0003ab24) lc0_stat_indi_pane_g

0x7354,	// (0x0003204c) lc0_uni_indicator_pane_ParamLimits

0x7354,	// (0x0003204c) lc0_uni_indicator_pane

0xe78f,	// (0x00039487) ls0_title_pane_g1_ParamLimits

0xe78f,	// (0x00039487) ls0_title_pane_g1

0xe7a3,	// (0x0003949b) ls0_title_pane_t1_ParamLimits

0xe7a3,	// (0x0003949b) ls0_title_pane_t1

0x7361,	// (0x00032059) lc0_uni_indicator_pane_g1_ParamLimits

0x7361,	// (0x00032059) lc0_uni_indicator_pane_g1

0xe7d9,	// (0x000394d1) lc0_stat_clock_pane_t1

0x4a64,	// (0x0002f75c) main_ai5_pane

0xe7e7,	// (0x000394df) ai5_sk_pane_ParamLimits

0xe7e7,	// (0x000394df) ai5_sk_pane

0xe7f4,	// (0x000394ec) cell_ai5_widget_pane_ParamLimits

0xe7f4,	// (0x000394ec) cell_ai5_widget_pane

0xe8aa,	// (0x000395a2) aid_size_cell_widget_grid

0xe8c0,	// (0x000395b8) bg_ai5_widget_pane_ParamLimits

0xe8c0,	// (0x000395b8) bg_ai5_widget_pane

0xe934,	// (0x0003962c) cell_ai5_widget_pane_g2

0xe944,	// (0x0003963c) cell_ai5_widget_pane_g3

0xe95b,	// (0x00039653) cell_ai5_widget_pane_g4

0xe967,	// (0x0003965f) cell_ai5_widget_pane_g5

0xe973,	// (0x0003966b) cell_ai5_widget_pane_g6

0xe97f,	// (0x00039677) cell_ai5_widget_pane_g7

0xe9c7,	// (0x000396bf) cell_ai5_widget_pane_t1_ParamLimits

0xe9c7,	// (0x000396bf) cell_ai5_widget_pane_t1

0xe9e4,	// (0x000396dc) cell_ai5_widget_pane_t2_ParamLimits

0xe9e4,	// (0x000396dc) cell_ai5_widget_pane_t2

0xe9fc,	// (0x000396f4) cell_ai5_widget_pane_t3_ParamLimits

0xe9fc,	// (0x000396f4) cell_ai5_widget_pane_t3

0xea14,	// (0x0003970c) cell_ai5_widget_pane_t4_ParamLimits

0xea14,	// (0x0003970c) cell_ai5_widget_pane_t4

0xea31,	// (0x00039729) cell_ai5_widget_pane_t5_ParamLimits

0xea31,	// (0x00039729) cell_ai5_widget_pane_t5

0xea50,	// (0x00039748) cell_ai5_widget_pane_t6_ParamLimits

0xea50,	// (0x00039748) cell_ai5_widget_pane_t6

0xea62,	// (0x0003975a) cell_ai5_widget_pane_t7_ParamLimits

0xea62,	// (0x0003975a) cell_ai5_widget_pane_t7

0xea7b,	// (0x00039773) cell_ai5_widget_pane_t8_ParamLimits

0xea7b,	// (0x00039773) cell_ai5_widget_pane_t8

0x0009,

0xfe46,	// (0x0003ab3e) cell_ai5_widget_pane_t_ParamLimits

0xfe46,	// (0x0003ab3e) cell_ai5_widget_pane_t

0xeacf,	// (0x000397c7) grid_ai5_widget_pane

0x87ab,	// (0x000334a3) highlight_cell_ai5_widget_pane_ParamLimits

0x87ab,	// (0x000334a3) highlight_cell_ai5_widget_pane

0xeae6,	// (0x000397de) ai5_sk_left_pane

0xeaf0,	// (0x000397e8) ai5_sk_middle_pane

0xeafa,	// (0x000397f2) ai5_sk_right_pane

0xeb04,	// (0x000397fc) bg_ai5_widget_pane_g1_ParamLimits

0xeb04,	// (0x000397fc) bg_ai5_widget_pane_g1

0xeb10,	// (0x00039808) bg_ai5_widget_pane_g2_ParamLimits

0xeb10,	// (0x00039808) bg_ai5_widget_pane_g2

0xeb1c,	// (0x00039814) bg_ai5_widget_pane_g3_ParamLimits

0xeb1c,	// (0x00039814) bg_ai5_widget_pane_g3

0xeb28,	// (0x00039820) bg_ai5_widget_pane_g4_ParamLimits

0xeb28,	// (0x00039820) bg_ai5_widget_pane_g4

0xeb34,	// (0x0003982c) bg_ai5_widget_pane_g5_ParamLimits

0xeb34,	// (0x0003982c) bg_ai5_widget_pane_g5

0xeb40,	// (0x00039838) bg_ai5_widget_pane_g6_ParamLimits

0xeb40,	// (0x00039838) bg_ai5_widget_pane_g6

0xeb4c,	// (0x00039844) bg_ai5_widget_pane_g7_ParamLimits

0xeb4c,	// (0x00039844) bg_ai5_widget_pane_g7

0xeb58,	// (0x00039850) bg_ai5_widget_pane_g8_ParamLimits

0xeb58,	// (0x00039850) bg_ai5_widget_pane_g8

0xeb64,	// (0x0003985c) bg_ai5_widget_pane_g9_ParamLimits

0xeb64,	// (0x0003985c) bg_ai5_widget_pane_g9

0x0008,

0xfe5b,	// (0x0003ab53) bg_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x0003ab53) bg_ai5_widget_pane_g

0xeb96,	// (0x0003988e) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb96,	// (0x0003988e) cell_shortcut_ai5_widget_pane

0x9441,	// (0x00034139) bg_cell_shortcut_ai5_widget_pane

0xeba7,	// (0x0003989f) cell_grid_ai5_widget_pane_g1

0x9441,	// (0x00034139) highlight_cell_shortcut_ai5_widget_pane

0x9c91,	// (0x00034989) ai5_sk_left_pane_g1

0xebb0,	// (0x000398a8) ai5_sk_left_pane_g2

0xebb8,	// (0x000398b0) ai5_sk_left_pane_g3

0xebc0,	// (0x000398b8) ai5_sk_left_pane_g4

0x0003,

0xfe6e,	// (0x0003ab66) ai5_sk_left_pane_g

0xebc8,	// (0x000398c0) ai5_sk_left_pane_t1

0x9c99,	// (0x00034991) ai5_sk_right_pane_g1

0xebd6,	// (0x000398ce) ai5_sk_right_pane_g2

0xebde,	// (0x000398d6) ai5_sk_right_pane_g3

0xebe6,	// (0x000398de) ai5_sk_right_pane_g4

0x0003,

0xfe77,	// (0x0003ab6f) ai5_sk_right_pane_g

0xebee,	// (0x000398e6) ai5_sk_right_pane_t1

0x9c99,	// (0x00034991) ai5_sk_middle_pane_g1

0x9c91,	// (0x00034989) ai5_sk_middle_pane_g2

0x9cb1,	// (0x000349a9) ai5_sk_middle_pane_g3

0xebde,	// (0x000398d6) ai5_sk_middle_pane_g4

0xebb8,	// (0x000398b0) ai5_sk_middle_pane_g5

0xebfc,	// (0x000398f4) ai5_sk_middle_pane_g6

0xec04,	// (0x000398fc) ai5_sk_middle_pane_g7

0x0006,

0xfe80,	// (0x0003ab78) ai5_sk_middle_pane_g

0x97c5,	// (0x000344bd) aid_touch_area_size_lc0_ParamLimits

0x97c5,	// (0x000344bd) aid_touch_area_size_lc0

0x698b,	// (0x00031683) cell_hwr_candidate_pane_t1_ParamLimits

0x97e1,	// (0x000344d9) aid_touch_navi_pane

0x9ab4,	// (0x000347ac) status_dt_navi_pane_ParamLimits

0x9ab4,	// (0x000347ac) status_dt_navi_pane

0x9ac1,	// (0x000347b9) status_dt_sta_pane_ParamLimits

0x9ac1,	// (0x000347b9) status_dt_sta_pane

0xec0c,	// (0x00039904) dt_sta_controll_pane

0xec19,	// (0x00039911) dt_sta_indi_pane

0xec2a,	// (0x00039922) dt_sta_title_pane

0x81c5,	// (0x00032ebd) bg_dt_sta_indi_pane_ParamLimits

0x81c5,	// (0x00032ebd) bg_dt_sta_indi_pane

0xec3d,	// (0x00039935) dt_sta_battery_pane

0xec45,	// (0x0003993d) dt_sta_indi_pane_g1

0xec4e,	// (0x00039946) dt_sta_indi_pane_g2

0xec57,	// (0x0003994f) dt_sta_indi_pane_g3

0x0002,

0xfe8f,	// (0x0003ab87) dt_sta_indi_pane_g

0xec60,	// (0x00039958) dt_sta_signal_pane

0x87ab,	// (0x000334a3) bg_dt_sta_title_pane_ParamLimits

0x87ab,	// (0x000334a3) bg_dt_sta_title_pane

0xec69,	// (0x00039961) dt_sta_title_pane_g1

0xec71,	// (0x00039969) dt_sta_title_pane_t1_ParamLimits

0xec71,	// (0x00039969) dt_sta_title_pane_t1

0x76e8,	// (0x000323e0) bg_dt_sta_control_pane

0xec86,	// (0x0003997e) dt_sta_controll_pane_g1

0xec8f,	// (0x00039987) bg_dt_sta_title_pane_g1

0xec98,	// (0x00039990) bg_dt_sta_title_pane_g2

0xeca1,	// (0x00039999) bg_dt_sta_title_pane_g3

0x0002,

0xfe96,	// (0x0003ab8e) bg_dt_sta_title_pane_g

0xc2af,	// (0x00036fa7) bg_dt_sta_indi_pane_g1

0xecaa,	// (0x000399a2) dt_sta_signal_pane_g1

0xecb2,	// (0x000399aa) dt_sta_signal_pane_g2

0x0001,

0xfe9d,	// (0x0003ab95) dt_sta_signal_pane_g

0xecba,	// (0x000399b2) dt_sta_battery_pane_g1

0xecc3,	// (0x000399bb) dt_sta_battery_pane_t1

0xc2af,	// (0x00036fa7) bg_dt_sta_control_pane_g1

0x8f40,	// (0x00033c38) fep_china_uni_eep_pane

0x8f48,	// (0x00033c40) fep_china_uni_entry_pane_ParamLimits

0x8f58,	// (0x00033c50) popup_fep_china_uni_window_g1_ParamLimits

0x8f68,	// (0x00033c60) popup_fep_china_uni_window_g2_ParamLimits

0x8f68,	// (0x00033c60) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003a415) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003a415) popup_fep_china_uni_window_g

0xecd2,	// (0x000399ca) fep_china_uni_eep_pane_g1

0xecda,	// (0x000399d2) fep_china_uni_eep_pane_t1

0xe756,	// (0x0003944e) aid_touch_area_size_smil_player

0x9931,	// (0x00034629) lc0_clock_pane

0x9b18,	// (0x00034810) status_pane_g5_ParamLimits

0x9b18,	// (0x00034810) status_pane_g5

0x5c85,	// (0x0003097d) popup_keymap_window

0x9ad6,	// (0x000347ce) status_icon_pane

0xe944,	// (0x0003963c) cell_ai5_widget_pane_g3_ParamLimits

0xe95b,	// (0x00039653) cell_ai5_widget_pane_g4_ParamLimits

0xe967,	// (0x0003965f) cell_ai5_widget_pane_g5_ParamLimits

0xe98b,	// (0x00039683) cell_ai5_widget_pane_g8_ParamLimits

0xe98b,	// (0x00039683) cell_ai5_widget_pane_g8

0xe99f,	// (0x00039697) cell_ai5_widget_pane_g9_ParamLimits

0xe99f,	// (0x00039697) cell_ai5_widget_pane_g9

0xe9b3,	// (0x000396ab) cell_ai5_widget_pane_g10_ParamLimits

0xe9b3,	// (0x000396ab) cell_ai5_widget_pane_g10

0xece9,	// (0x000399e1) status_icon_pane_g1

0x76e8,	// (0x000323e0) bg_popup_sub_pane_cp13

0xecf1,	// (0x000399e9) popup_keymap_window_t1

0x970a,	// (0x00034402) control_pane_g6_ParamLimits

0x970a,	// (0x00034402) control_pane_g6

0x9717,	// (0x0003440f) control_pane_g7_ParamLimits

0x9717,	// (0x0003440f) control_pane_g7

0x9724,	// (0x0003441c) control_pane_g8_ParamLimits

0x9724,	// (0x0003441c) control_pane_g8

0xec0c,	// (0x00039904) dt_sta_controll_pane_ParamLimits

0xec19,	// (0x00039911) dt_sta_indi_pane_ParamLimits

0xec2a,	// (0x00039922) dt_sta_title_pane_ParamLimits

0x86e3,	// (0x000333db) aid_size_touch_scroll_bar_cale

0x4b3d,	// (0x0002f835) popup_discreet_window_ParamLimits

0x4b3d,	// (0x0002f835) popup_discreet_window

0x4bc5,	// (0x0002f8bd) popup_sk_window

0xa302,	// (0x00034ffa) bg_popup_sub_pane_cp28_ParamLimits

0xa302,	// (0x00034ffa) bg_popup_sub_pane_cp28

0xecff,	// (0x000399f7) popup_discreet_window_g1_ParamLimits

0xecff,	// (0x000399f7) popup_discreet_window_g1

0xed1f,	// (0x00039a17) popup_discreet_window_t1_ParamLimits

0xed1f,	// (0x00039a17) popup_discreet_window_t1

0xed3d,	// (0x00039a35) popup_discreet_window_t2_ParamLimits

0xed3d,	// (0x00039a35) popup_discreet_window_t2

0x0002,

0xfea2,	// (0x0003ab9a) popup_discreet_window_t_ParamLimits

0xfea2,	// (0x0003ab9a) popup_discreet_window_t

0x7375,	// (0x0003206d) popup_sk_window_g1

0x737f,	// (0x00032077) popup_sk_window_g2

0x0001,

0xfea9,	// (0x0003aba1) popup_sk_window_g

0x7389,	// (0x00032081) popup_sk_window_t1

0x7397,	// (0x0003208f) popup_sk_window_t1_copy1

0xe934,	// (0x0003962c) cell_ai5_widget_pane_g2_ParamLimits

0xea8d,	// (0x00039785) cell_ai5_widget_pane_t9_ParamLimits

0xea8d,	// (0x00039785) cell_ai5_widget_pane_t9

0x76e8,	// (0x000323e0) main_fep_fshwr2_pane

0x73a5,	// (0x0003209d) aid_fshwr2_btn_pane

0x73b1,	// (0x000320a9) aid_fshwr2_syb_pane

0x73bd,	// (0x000320b5) aid_fshwr2_txt_pane

0x73c9,	// (0x000320c1) fshwr2_func_candi_pane

0x73de,	// (0x000320d6) fshwr2_hwr_syb_pane

0x73ee,	// (0x000320e6) fshwr2_icf_pane

0x4a64,	// (0x0002f75c) fshwr2_icf_bg_pane

0x7417,	// (0x0003210f) fshwr2_icf_pane_t1_ParamLimits

0x7417,	// (0x0003210f) fshwr2_icf_pane_t1

0x8e2e,	// (0x00033b26) fshwr2_func_candi_pane_g1

0xed8f,	// (0x00039a87) fshwr2_func_candi_row_pane_ParamLimits

0xed8f,	// (0x00039a87) fshwr2_func_candi_row_pane

0x742f,	// (0x00032127) cell_fshwr2_syb_pane_ParamLimits

0x742f,	// (0x00032127) cell_fshwr2_syb_pane

0x695c,	// (0x00031654) fshwr2_hwr_syb_pane_g1_ParamLimits

0x695c,	// (0x00031654) fshwr2_hwr_syb_pane_g1

0x4a64,	// (0x0002f75c) bg_popup_call_pane_cp01

0x7445,	// (0x0003213d) fshwr2_func_candi_cell_pane_ParamLimits

0x7445,	// (0x0003213d) fshwr2_func_candi_cell_pane

0xed9f,	// (0x00039a97) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed9f,	// (0x00039a97) fshwr2_func_candi_cell_bg_pane

0x748e,	// (0x00032186) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x748e,	// (0x00032186) fshwr2_func_candi_cell_pane_g1

0x74b6,	// (0x000321ae) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x74b6,	// (0x000321ae) fshwr2_func_candi_cell_pane_t1

0x4a64,	// (0x0002f75c) bg_button_pane_cp08

0xedab,	// (0x00039aa3) cell_fshwr2_syb_bg_pane

0x74c9,	// (0x000321c1) cell_fshwr2_syb_bg_pane_g1

0x74d1,	// (0x000321c9) cell_fshwr2_syb_bg_pane_t1

0x87ab,	// (0x000334a3) main_tmo_pane

0xae1d,	// (0x00035b15) uni_indicator_pane_g1_ParamLimits

0xae33,	// (0x00035b2b) uni_indicator_pane_g2_ParamLimits

0xae49,	// (0x00035b41) uni_indicator_pane_g3_ParamLimits

0xae5d,	// (0x00035b55) uni_indicator_pane_g4_ParamLimits

0xae5d,	// (0x00035b55) uni_indicator_pane_g4

0xae71,	// (0x00035b69) uni_indicator_pane_g5_ParamLimits

0xae71,	// (0x00035b69) uni_indicator_pane_g5

0xae71,	// (0x00035b69) uni_indicator_pane_g6_ParamLimits

0xae71,	// (0x00035b69) uni_indicator_pane_g6

0xf921,	// (0x0003a619) uni_indicator_pane_g_ParamLimits

0xd78a,	// (0x00038482) popup_tmo_note_window_ParamLimits

0xd78a,	// (0x00038482) popup_tmo_note_window

0x6bf5,	// (0x000318ed) fshwr2_bg_pane

0x74a7,	// (0x0003219f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x74a7,	// (0x0003219f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeae,	// (0x0003aba6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeae,	// (0x0003aba6) fshwr2_func_candi_cell_pane_g

0x6944,	// (0x0003163c) bg_popup_window_pane_cp01

0x74e0,	// (0x000321d8) bg_popup_window_pane_g1_cp01

0xedb3,	// (0x00039aab) bg_popup_window_pane_cp22_ParamLimits

0xedb3,	// (0x00039aab) bg_popup_window_pane_cp22

0xedc1,	// (0x00039ab9) listscroll_tmo_link_pane_ParamLimits

0xedc1,	// (0x00039ab9) listscroll_tmo_link_pane

0xee01,	// (0x00039af9) popup_tmo_note_window_g1_ParamLimits

0xee01,	// (0x00039af9) popup_tmo_note_window_g1

0xee0e,	// (0x00039b06) tmo_note_info_pane_ParamLimits

0xee0e,	// (0x00039b06) tmo_note_info_pane

0xee28,	// (0x00039b20) list_tmo_note_info_pane_g1_ParamLimits

0xee28,	// (0x00039b20) list_tmo_note_info_pane_g1

0xee3f,	// (0x00039b37) list_tmo_note_info_pane_g2_ParamLimits

0xee3f,	// (0x00039b37) list_tmo_note_info_pane_g2

0x0001,

0xfeb3,	// (0x0003abab) list_tmo_note_info_pane_g_ParamLimits

0xfeb3,	// (0x0003abab) list_tmo_note_info_pane_g

0xee5b,	// (0x00039b53) list_tmo_note_info_text_pane_ParamLimits

0xee5b,	// (0x00039b53) list_tmo_note_info_text_pane

0xeedc,	// (0x00039bd4) list_tmo_link_pane

0xeee9,	// (0x00039be1) scroll_pane_cp20

0xeef6,	// (0x00039bee) list_single_tmo_link_pane_ParamLimits

0xeef6,	// (0x00039bee) list_single_tmo_link_pane

0xef06,	// (0x00039bfe) list_single_tmo_link_pane_t1

0xef14,	// (0x00039c0c) list_tmo_note_info_text_pane_t1_ParamLimits

0xef14,	// (0x00039c0c) list_tmo_note_info_text_pane_t1

0x8865,	// (0x0003355d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8865,	// (0x0003355d) aid_size_touch_scroll_bar_cp01

0x5348,	// (0x00030040) aid_size_touch_slider_marker

0x4bad,	// (0x0002f8a5) popup_settings_window_ParamLimits

0x4bad,	// (0x0002f8a5) popup_settings_window

0x5b0a,	// (0x00030802) popup_candi_list_indi_window

0x97e1,	// (0x000344d9) aid_touch_navi_pane_ParamLimits

0x6b50,	// (0x00031848) rs_clock_indi_pane

0x6b59,	// (0x00031851) sctrl_sk_bottom_pane_ParamLimits

0x6b6a,	// (0x00031862) sctrl_sk_top_pane_ParamLimits

0x6c6d,	// (0x00031965) popup_fep_tooltip_window

0xe8aa,	// (0x000395a2) aid_size_cell_widget_grid_ParamLimits

0xe91f,	// (0x00039617) cell_ai5_widget_pane_g1_ParamLimits

0xe91f,	// (0x00039617) cell_ai5_widget_pane_g1

0xe973,	// (0x0003966b) cell_ai5_widget_pane_g6_ParamLimits

0xe97f,	// (0x00039677) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe31,	// (0x0003ab29) cell_ai5_widget_pane_g_ParamLimits

0xfe31,	// (0x0003ab29) cell_ai5_widget_pane_g

0xeab1,	// (0x000397a9) cell_ai5_widget_pane_t10_ParamLimits

0xeab1,	// (0x000397a9) cell_ai5_widget_pane_t10

0xeacf,	// (0x000397c7) grid_ai5_widget_pane_ParamLimits

0xeb70,	// (0x00039868) cell_contacts_ai5_widget_pane_ParamLimits

0xeb70,	// (0x00039868) cell_contacts_ai5_widget_pane

0xed52,	// (0x00039a4a) popup_discreet_window_t3_ParamLimits

0xed52,	// (0x00039a4a) popup_discreet_window_t3

0x7403,	// (0x000320fb) popup_fshwr2_char_preview_window_ParamLimits

0x7403,	// (0x000320fb) popup_fshwr2_char_preview_window

0xee79,	// (0x00039b71) tmo_note_info_pane_t1

0xee8e,	// (0x00039b86) tmo_note_info_pane_t2

0xeea3,	// (0x00039b9b) tmo_note_info_pane_t3

0xeeb8,	// (0x00039bb0) tmo_note_info_pane_t4

0xeeca,	// (0x00039bc2) tmo_note_info_pane_t5

0x0004,

0xfeb8,	// (0x0003abb0) tmo_note_info_pane_t

0xeedc,	// (0x00039bd4) list_tmo_link_pane_ParamLimits

0xeee9,	// (0x00039be1) scroll_pane_cp20_ParamLimits

0x4a64,	// (0x0002f75c) bg_popup_fep_char_preview_window_cp01

0xef2d,	// (0x00039c25) popup_fshwr2_char_preview_window_t1

0xef3b,	// (0x00039c33) popup_candi_list_indi_window_g1

0xef44,	// (0x00039c3c) bg_cell_contacts_ai5_widget_pane

0xef50,	// (0x00039c48) cell_contacts_ai5_widget_pane_g1

0xc94d,	// (0x00037645) cell_contacts_ai5_widget_pane_g2

0xef65,	// (0x00039c5d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec3,	// (0x0003abbb) cell_contacts_ai5_widget_pane_g

0xef71,	// (0x00039c69) cell_contacts_ai5_widget_pane_t1

0x87ab,	// (0x000334a3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefe8,	// (0x00039ce0) settings_container_pane

0x9441,	// (0x00034139) listscroll_set_pane_copy1

0xb998,	// (0x00036690) scroll_pane_cp121_copy1

0xeff4,	// (0x00039cec) set_content_pane_copy1

0xeffc,	// (0x00039cf4) aid_height_set_list_copy1_ParamLimits

0xeffc,	// (0x00039cf4) aid_height_set_list_copy1

0xb069,	// (0x00035d61) aid_size_parent_copy1_ParamLimits

0xb069,	// (0x00035d61) aid_size_parent_copy1

0xf008,	// (0x00039d00) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf008,	// (0x00039d00) button_value_adjust_pane_cp6_copy1

0x977f,	// (0x00034477) list_highlight_pane_cp2_copy1_ParamLimits

0x977f,	// (0x00034477) list_highlight_pane_cp2_copy1

0xf01c,	// (0x00039d14) list_set_pane_copy1_ParamLimits

0xf01c,	// (0x00039d14) list_set_pane_copy1

0xef83,	// (0x00039c7b) main_pane_set_t1_copy1_ParamLimits

0xef83,	// (0x00039c7b) main_pane_set_t1_copy1

0xefbd,	// (0x00039cb5) main_pane_set_t2_copy1_ParamLimits

0xefbd,	// (0x00039cb5) main_pane_set_t2_copy1

0xf0c9,	// (0x00039dc1) main_pane_set_t3_copy1

0xf0d7,	// (0x00039dcf) main_pane_set_t4_copy1

0xefdc,	// (0x00039cd4) set_content_pane_g1_copy1_ParamLimits

0xefdc,	// (0x00039cd4) set_content_pane_g1_copy1

0xf0e5,	// (0x00039ddd) setting_code_pane_copy1

0xf0ed,	// (0x00039de5) setting_slider_graphic_pane_copy1

0xf0ed,	// (0x00039de5) setting_slider_pane_copy1

0xf0ed,	// (0x00039de5) setting_text_pane_copy1

0xf0ed,	// (0x00039de5) setting_volume_pane_copy1

0xf0e5,	// (0x00039ddd) settings_code_pane_cp2_copy1

0xf0f5,	// (0x00039ded) settings_code_pane_cp_copy1_ParamLimits

0xf0f5,	// (0x00039ded) settings_code_pane_cp_copy1

0x74e9,	// (0x000321e1) volume_set_pane_copy1

0xf109,	// (0x00039e01) volume_set_pane_g10_copy1

0xf111,	// (0x00039e09) volume_set_pane_g1_copy1

0xf119,	// (0x00039e11) volume_set_pane_g2_copy1

0xf121,	// (0x00039e19) volume_set_pane_g3_copy1

0xf129,	// (0x00039e21) volume_set_pane_g4_copy1

0xf131,	// (0x00039e29) volume_set_pane_g5_copy1

0xf139,	// (0x00039e31) volume_set_pane_g6_copy1

0xf141,	// (0x00039e39) volume_set_pane_g7_copy1

0xf149,	// (0x00039e41) volume_set_pane_g8_copy1

0xf151,	// (0x00039e49) volume_set_pane_g9_copy1

0x77dc,	// (0x000324d4) bg_set_opt_pane_cp_copy1_ParamLimits

0x77dc,	// (0x000324d4) bg_set_opt_pane_cp_copy1

0x74f1,	// (0x000321e9) setting_slider_pane_t1_copy1_ParamLimits

0x74f1,	// (0x000321e9) setting_slider_pane_t1_copy1

0x750f,	// (0x00032207) setting_slider_pane_t2_copy1_ParamLimits

0x750f,	// (0x00032207) setting_slider_pane_t2_copy1

0x7529,	// (0x00032221) setting_slider_pane_t3_copy1_ParamLimits

0x7529,	// (0x00032221) setting_slider_pane_t3_copy1

0x7541,	// (0x00032239) slider_set_pane_copy1_ParamLimits

0x7541,	// (0x00032239) slider_set_pane_copy1

0x8806,	// (0x000334fe) set_opt_bg_pane_g1_copy2

0x880e,	// (0x00033506) set_opt_bg_pane_g2_copy2

0xf159,	// (0x00039e51) set_opt_bg_pane_g3_copy2

0x881e,	// (0x00033516) set_opt_bg_pane_g4_copy2

0x8826,	// (0x0003351e) set_opt_bg_pane_g5_copy2

0x882e,	// (0x00033526) set_opt_bg_pane_g6_copy2

0xf163,	// (0x00039e5b) set_opt_bg_pane_g7_copy2

0xf16b,	// (0x00039e63) set_opt_bg_pane_g8_copy2

0xf175,	// (0x00039e6d) set_opt_bg_pane_g9_copy2

0x7557,	// (0x0003224f) aid_size_touch_slider_mark_copy1_ParamLimits

0x7557,	// (0x0003224f) aid_size_touch_slider_mark_copy1

0xf17f,	// (0x00039e77) slider_set_pane_g1_copy1

0x756b,	// (0x00032263) slider_set_pane_g2_copy1

0x6506,	// (0x000311fe) slider_set_pane_g3_copy1_ParamLimits

0x6506,	// (0x000311fe) slider_set_pane_g3_copy1

0x651a,	// (0x00031212) slider_set_pane_g4_copy1_ParamLimits

0x651a,	// (0x00031212) slider_set_pane_g4_copy1

0x6532,	// (0x0003122a) slider_set_pane_g5_copy1_ParamLimits

0x6532,	// (0x0003122a) slider_set_pane_g5_copy1

0x6506,	// (0x000311fe) slider_set_pane_g6_copy1_ParamLimits

0x6506,	// (0x000311fe) slider_set_pane_g6_copy1

0x7573,	// (0x0003226b) slider_set_pane_g7_copy1_ParamLimits

0x7573,	// (0x0003226b) slider_set_pane_g7_copy1

0x76fc,	// (0x000323f4) bg_set_opt_pane_cp2_copy1

0xf188,	// (0x00039e80) setting_slider_graphic_pane_g1_copy1

0xf191,	// (0x00039e89) setting_slider_graphic_pane_t1_copy1

0xf1a1,	// (0x00039e99) setting_slider_graphic_pane_t2_copy1

0xf1b1,	// (0x00039ea9) slider_set_pane_cp_copy1

0xf1c1,	// (0x00039eb9) input_focus_pane_cp1_copy1

0xf1ca,	// (0x00039ec2) list_set_text_pane_copy1

0xf1d2,	// (0x00039eca) setting_text_pane_g1_copy1

0x4d4e,	// (0x0002fa46) set_text_pane_t1_copy1

0xf1c1,	// (0x00039eb9) input_focus_pane_cp2_copy1

0xf1d2,	// (0x00039eca) setting_code_pane_g1_copy1

0xf1db,	// (0x00039ed3) setting_code_pane_t1_copy1

0xf1e9,	// (0x00039ee1) list_set_graphic_pane_copy1

0x76fc,	// (0x000323f4) bg_set_opt_pane_cp4_copy1

0x913c,	// (0x00033e34) list_set_graphic_pane_g1_copy1_ParamLimits

0x913c,	// (0x00033e34) list_set_graphic_pane_g1_copy1

0xf1fb,	// (0x00039ef3) list_set_graphic_pane_g2_copy1

0x9154,	// (0x00033e4c) list_set_graphic_pane_t1_copy1_ParamLimits

0x9154,	// (0x00033e4c) list_set_graphic_pane_t1_copy1

0xc2af,	// (0x00036fa7) rs_clock_indi_pane_g1

0xf203,	// (0x00039efb) rs_clock_indi_pane_t1

0xf211,	// (0x00039f09) rs_indi_pane

0xf219,	// (0x00039f11) rs_indi_pane_g1

0xf222,	// (0x00039f1a) rs_indi_pane_g2

0xf22b,	// (0x00039f23) rs_indi_pane_g3

0x0002,

0xfeca,	// (0x0003abc2) rs_indi_pane_g

0x9441,	// (0x00034139) bg_popup_preview_window_pane_cp03

0xf234,	// (0x00039f2c) popup_fep_tooltip_window_t1

0xcf2b,	// (0x00037c23) popup_note2_window_g2_ParamLimits

0xcf2b,	// (0x00037c23) popup_note2_window_g2

0x0001,

0xfc63,	// (0x0003a95b) popup_note2_window_g_ParamLimits

0xfc63,	// (0x0003a95b) popup_note2_window_g

0xd426,	// (0x0003811e) bg_popup_sub_pane_cp11_ParamLimits

0xd433,	// (0x0003812b) cell_ai3_links_pane_g1_ParamLimits

0xd44a,	// (0x00038142) cell_ai3_links_pane_t1

0x4d4e,	// (0x0002fa46) set_text_pane_t1_copy1_ParamLimits

0x9352,	// (0x0003404a) cell_graphic_popup_pane_cp2_ParamLimits

0x9352,	// (0x0003404a) cell_graphic_popup_pane_cp2

0xf242,	// (0x00039f3a) cell_graphic_popup_pane_g1_cp2

0x84f6,	// (0x000331ee) cell_graphic_popup_pane_g2_cp2

0xf24a,	// (0x00039f42) cell_graphic_popup_pane_g3_cp2

0xf252,	// (0x00039f4a) cell_graphic_popup_pane_t2_cp2

0x8507,	// (0x000331ff) grid_highlight_pane_cp3_cp2

0x8b4b,	// (0x00033843) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x87ab,	// (0x000334a3) main_tmo_pane_ParamLimits

0xd77e,	// (0x00038476) popup_tmo_big_image_note_window

0xe90e,	// (0x00039606) cell_ai5_widget_list_pane

0xe916,	// (0x0003960e) cell_ai5_widget_lrg_icon_pane

0xee79,	// (0x00039b71) tmo_note_info_pane_t1_ParamLimits

0xee8e,	// (0x00039b86) tmo_note_info_pane_t2_ParamLimits

0xeea3,	// (0x00039b9b) tmo_note_info_pane_t3_ParamLimits

0xeeb8,	// (0x00039bb0) tmo_note_info_pane_t4_ParamLimits

0xeeca,	// (0x00039bc2) tmo_note_info_pane_t5_ParamLimits

0xfeb8,	// (0x0003abb0) tmo_note_info_pane_t_ParamLimits

0xefe8,	// (0x00039ce0) settings_container_pane_ParamLimits

0xf1b9,	// (0x00039eb1) indicator_popup_pane_cp5

0xf1b9,	// (0x00039eb1) indicator_popup_pane_cp6

0xf1e9,	// (0x00039ee1) list_set_graphic_pane_copy1_ParamLimits

0x76e8,	// (0x000323e0) bg_popup_window_pane_cp23

0xf260,	// (0x00039f58) popup_tmo_big_image_note_window_g1

0xf26a,	// (0x00039f62) popup_tmo_big_image_note_window_t1

0xf27a,	// (0x00039f72) popup_tmo_big_image_note_window_t2

0xf28a,	// (0x00039f82) popup_tmo_big_image_note_window_t3

0x0002,

0xfed1,	// (0x0003abc9) popup_tmo_big_image_note_window_t

0xc2af,	// (0x00036fa7) cell_ai5_widget_lrg_icon_pane_g1

0xf29a,	// (0x00039f92) cell_ai5_widget_lrg_icon_pane_t1

0xf2a8,	// (0x00039fa0) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a8,	// (0x00039fa0) cell_ai5_widget_list_row_pane

0xf2bf,	// (0x00039fb7) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2bf,	// (0x00039fb7) cell_ai5_widget_list_row_pane_g1

0xf2cc,	// (0x00039fc4) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cc,	// (0x00039fc4) cell_ai5_widget_list_row_pane_t1

0xf2fd,	// (0x00039ff5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2fd,	// (0x00039ff5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed8,	// (0x0003abd0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed8,	// (0x0003abd0) cell_ai5_widget_list_row_pane_t

0x4a64,	// (0x0002f75c) main_fep_vtchi_ss_pane

0xf341,	// (0x0003a039) popup_fep_char_pre_window

0xf349,	// (0x0003a041) popup_fep_ituss_window

0xf36a,	// (0x0003a062) popup_fep_vkbss_window

0xf389,	// (0x0003a081) grid_vkbss_keypad_pane_ParamLimits

0xf389,	// (0x0003a081) grid_vkbss_keypad_pane

0xf399,	// (0x0003a091) ituss_keypad_pane

0x7595,	// (0x0003228d) aid_vkbss_key_offset_ParamLimits

0x7595,	// (0x0003228d) aid_vkbss_key_offset

0x75a1,	// (0x00032299) cell_vkbss_key_pane_ParamLimits

0x75a1,	// (0x00032299) cell_vkbss_key_pane

0xf3a8,	// (0x0003a0a0) bg_cell_vkbss_key_g1_ParamLimits

0xf3a8,	// (0x0003a0a0) bg_cell_vkbss_key_g1

0xf3b4,	// (0x0003a0ac) cell_vkbss_key_3p_pane_ParamLimits

0xf3b4,	// (0x0003a0ac) cell_vkbss_key_3p_pane

0xf3ce,	// (0x0003a0c6) cell_vkbss_key_g1_ParamLimits

0xf3ce,	// (0x0003a0c6) cell_vkbss_key_g1

0xf3e8,	// (0x0003a0e0) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x0003a0e0) cell_vkbss_key_t1

0x75b7,	// (0x000322af) cell_ituss_key_pane_ParamLimits

0x75b7,	// (0x000322af) cell_ituss_key_pane

0xf413,	// (0x0003a10b) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x0003a10b) bg_cell_ituss_key_g1

0xf41f,	// (0x0003a117) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x0003a117) cell_ituss_key_pane_g1

0x75c8,	// (0x000322c0) cell_ituss_key_pane_g2_ParamLimits

0x75c8,	// (0x000322c0) cell_ituss_key_pane_g2

0x0002,

0xfedf,	// (0x0003abd7) cell_ituss_key_pane_g_ParamLimits

0xfedf,	// (0x0003abd7) cell_ituss_key_pane_g

0x75f4,	// (0x000322ec) cell_ituss_key_t1_ParamLimits

0x75f4,	// (0x000322ec) cell_ituss_key_t1

0x762e,	// (0x00032326) cell_ituss_key_t2_ParamLimits

0x762e,	// (0x00032326) cell_ituss_key_t2

0x765f,	// (0x00032357) cell_ituss_key_t3_ParamLimits

0x765f,	// (0x00032357) cell_ituss_key_t3

0x762e,	// (0x00032326) cell_ituss_key_t4_ParamLimits

0x762e,	// (0x00032326) cell_ituss_key_t4

0x0004,

0xfee6,	// (0x0003abde) cell_ituss_key_t_ParamLimits

0xfee6,	// (0x0003abde) cell_ituss_key_t

0xf44b,	// (0x0003a143) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0003a14b) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0003a153) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef1,	// (0x0003abe9) cell_vkbss_key_3p_pane_g

0x4a64,	// (0x0002f75c) bg_popup_fep_char_preview_window_cp02

0x76a2,	// (0x0003239a) popup_fep_char_pre_window_t1

0xe8a0,	// (0x00039598) main_ai5_sk_pane

0xef44,	// (0x00039c3c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef50,	// (0x00039c48) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc94d,	// (0x00037645) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef65,	// (0x00039c5d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec3,	// (0x0003abbb) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef71,	// (0x00039c69) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x87ab,	// (0x000334a3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x0003a15b) main_ai5_sk_pane_g1

0xa13b,	// (0x00034e33) popup_query_code_window_g1

0xf35f,	// (0x0003a057) popup_fep_vkb_icf_pane

0xf373,	// (0x0003a06b) popup_fep_vtchi_icf_pane

0xf46c,	// (0x0003a164) bg_icf_pane

0xf478,	// (0x0003a170) list_vkb_icf_pane

0xf487,	// (0x0003a17f) bg_icf_pane_cp01

0xf49a,	// (0x0003a192) vtchi_icf_list_pane

0xf4aa,	// (0x0003a1a2) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0003a1a2) list_vkb_icf_pane_t1

0xf4c0,	// (0x0003a1b8) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x0003a1b8) vtchi_icf_list_pane_t1

0xf349,	// (0x0003a041) popup_fep_ituss_window_ParamLimits

0xf373,	// (0x0003a06b) popup_fep_vtchi_icf_pane_ParamLimits

0xf399,	// (0x0003a091) ituss_keypad_pane_ParamLimits

0x7589,	// (0x00032281) ituss_sks_pane

0xf46c,	// (0x0003a164) bg_icf_pane_ParamLimits

0xf325,	// (0x0003a01d) icf_edit_indi_pane_ParamLimits

0xf325,	// (0x0003a01d) icf_edit_indi_pane

0xf478,	// (0x0003a170) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x0003a17f) bg_icf_pane_cp01_ParamLimits

0xf334,	// (0x0003a02c) icf_edit_indi_pane_cp01_ParamLimits

0xf334,	// (0x0003a02c) icf_edit_indi_pane_cp01

0xf4a2,	// (0x0003a19a) vtchi_query_pane

0xc52d,	// (0x00037225) icf_edit_indi_pane_g1_ParamLimits

0xc52d,	// (0x00037225) icf_edit_indi_pane_g1

0xf531,	// (0x0003a229) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0003a229) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0003ac01) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0003ac01) icf_edit_indi_pane_g

0xf540,	// (0x0003a238) icf_edit_indi_pane_t1

0xf4da,	// (0x0003a1d2) bg_input_focus_pane_cp042

0x86da,	// (0x000333d2) vtchi_button_pane

0xf4e3,	// (0x0003a1db) vtchi_query_pane_t1

0xf4f1,	// (0x0003a1e9) vtchi_query_pane_t2

0xf4ff,	// (0x0003a1f7) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0003abf0) vtchi_query_pane_t

0x4a64,	// (0x0002f75c) bg_button_pane_cp13

0xf50d,	// (0x0003a205) vtchi_button_pane_g1

0x76b1,	// (0x000323a9) ituss_sks_pane_g1

0x76bc,	// (0x000323b4) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0003abf7) ituss_sks_pane_g

0xf515,	// (0x0003a20d) ituss_sks_pane_t1

0xf523,	// (0x0003a21b) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0003abfc) ituss_sks_pane_t

0xbd12,	// (0x00036a0a) indicator_nsta_pane_cp_g1

0xbd1b,	// (0x00036a13) indicator_nsta_pane_cp_g2

0xbd23,	// (0x00036a1b) indicator_nsta_pane_cp_g3

0xbd2b,	// (0x00036a23) indicator_nsta_pane_cp_g4

0xbd33,	// (0x00036a2b) indicator_nsta_pane_cp_g5

0xbd33,	// (0x00036a2b) indicator_nsta_pane_cp_g6

0x0005,

0xfaa1,	// (0x0003a799) indicator_nsta_pane_cp_g

0xe486,	// (0x0003917e) cell_graphic2_pane_t2_ParamLimits

0xe486,	// (0x0003917e) cell_graphic2_pane_t2

0x0001,

0xfdba,	// (0x0003aab2) cell_graphic2_pane_t_ParamLimits

0xfdba,	// (0x0003aab2) cell_graphic2_pane_t

0xe4b3,	// (0x000391ab) cell_graphic2_control_pane_t1

0x8eef,	// (0x00033be7) signal_pane_g3_ParamLimits

0x8eef,	// (0x00033be7) signal_pane_g3

0x8f01,	// (0x00033bf9) signal_pane_g4_ParamLimits

0x8f01,	// (0x00033bf9) signal_pane_g4

0xf30f,	// (0x0003a007) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf30f,	// (0x0003a007) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x0003a131) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x0003a131) cell_ituss_key_pane_t1

0x9d8e,	// (0x00034a86) form_field_data_wide_pane_vc_t2_ParamLimits

0x9d8e,	// (0x00034a86) form_field_data_wide_pane_vc_t2

0x9da2,	// (0x00034a9a) form_field_data_wide_pane_vc_t3_ParamLimits

0x9da2,	// (0x00034a9a) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0003a501) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0003a501) form_field_data_wide_pane_vc_t

0xb9da,	// (0x000366d2) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9da,	// (0x000366d2) form_field_slider_wide_pane_vc_t3

0xbab8,	// (0x000367b0) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbab8,	// (0x000367b0) form_field_popup_wide_pane_vc_t2

0xbacf,	// (0x000367c7) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbacf,	// (0x000367c7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa90,	// (0x0003a788) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa90,	// (0x0003a788) form_field_popup_wide_pane_vc_t

0x73a5,	// (0x0003209d) aid_fshwr2_btn_pane_ParamLimits

0x73b1,	// (0x000320a9) aid_fshwr2_syb_pane_ParamLimits

0x73bd,	// (0x000320b5) aid_fshwr2_txt_pane_ParamLimits

0x6bf5,	// (0x000318ed) fshwr2_bg_pane_ParamLimits

0x73c9,	// (0x000320c1) fshwr2_func_candi_pane_ParamLimits

0x73de,	// (0x000320d6) fshwr2_hwr_syb_pane_ParamLimits

0x73ee,	// (0x000320e6) fshwr2_icf_pane_ParamLimits

0x7d2b,	// (0x00032a23) list_double_graphic_pane_vc_g4_ParamLimits

0x7d2b,	// (0x00032a23) list_double_graphic_pane_vc_g4

0x75e8,	// (0x000322e0) cell_ituss_key_pane_g3_ParamLimits

0x75e8,	// (0x000322e0) cell_ituss_key_pane_g3

0x7690,	// (0x00032388) cell_ituss_key_t5_ParamLimits

0x7690,	// (0x00032388) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
