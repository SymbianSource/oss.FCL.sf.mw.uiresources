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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003d2a9 };

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
0x7b6c,	// (0x00044e15) Screen

0x7b78,	// (0x00044e21) application_window_ParamLimits

0x7b78,	// (0x00044e21) application_window

0x274e,	// (0x0003f9f7) screen_g1

0x53c7,	// (0x00042670) area_bottom_pane_ParamLimits

0x53c7,	// (0x00042670) area_bottom_pane

0x548d,	// (0x00042736) area_top_pane_ParamLimits

0x548d,	// (0x00042736) area_top_pane

0x5521,	// (0x000427ca) main_pane_ParamLimits

0x5521,	// (0x000427ca) main_pane

0x2758,	// (0x0003fa01) misc_graphics

0x9585,	// (0x0004682e) battery_pane_ParamLimits

0x9585,	// (0x0004682e) battery_pane

0xa267,	// (0x00047510) bg_status_flat_pane_g8

0xa26f,	// (0x00047518) bg_status_flat_pane_g9

0x964d,	// (0x000468f6) context_pane_ParamLimits

0x964d,	// (0x000468f6) context_pane

0x9763,	// (0x00046a0c) navi_pane_ParamLimits

0x9763,	// (0x00046a0c) navi_pane

0x97e7,	// (0x00046a90) signal_pane_ParamLimits

0x97e7,	// (0x00046a90) signal_pane

0x0008,

0xf852,	// (0x0004cafb) bg_status_flat_pane_g

0x9854,	// (0x00046afd) status_pane_g1_ParamLimits

0x9854,	// (0x00046afd) status_pane_g1

0x9868,	// (0x00046b11) status_pane_g2_ParamLimits

0x9868,	// (0x00046b11) status_pane_g2

0x9874,	// (0x00046b1d) status_pane_g3_ParamLimits

0x9874,	// (0x00046b1d) status_pane_g3

0x0004,

0xf77e,	// (0x0004ca27) status_pane_g_ParamLimits

0xf77e,	// (0x0004ca27) status_pane_g

0x98a8,	// (0x00046b51) title_pane_ParamLimits

0x98a8,	// (0x00046b51) title_pane

0x98e5,	// (0x00046b8e) uni_indicator_pane_ParamLimits

0x98e5,	// (0x00046b8e) uni_indicator_pane

0x94b5,	// (0x0004675e) bg_list_pane_ParamLimits

0x94b5,	// (0x0004675e) bg_list_pane

0x5eab,	// (0x00043154) find_pane

0x94d5,	// (0x0004677e) listscroll_app_pane_ParamLimits

0x94d5,	// (0x0004677e) listscroll_app_pane

0x94e1,	// (0x0004678a) listscroll_form_pane

0x5eb3,	// (0x0004315c) listscroll_gen_pane_ParamLimits

0x5eb3,	// (0x0004315c) listscroll_gen_pane

0x5ec7,	// (0x00043170) listscroll_set_pane

0x86df,	// (0x00045988) main_idle_act_pane

0x91b1,	// (0x0004645a) main_idle_trad_pane

0x91b1,	// (0x0004645a) main_list_empty_pane

0x94d5,	// (0x0004677e) main_midp_pane

0x94fb,	// (0x000467a4) main_pane_g1_ParamLimits

0x94fb,	// (0x000467a4) main_pane_g1

0x5ecf,	// (0x00043178) popup_ai_message_window_ParamLimits

0x5ecf,	// (0x00043178) popup_ai_message_window

0x5f75,	// (0x0004321e) popup_fep_china_uni_window_ParamLimits

0x5f75,	// (0x0004321e) popup_fep_china_uni_window

0x5fd1,	// (0x0004327a) popup_fep_japan_candidate_window_ParamLimits

0x5fd1,	// (0x0004327a) popup_fep_japan_candidate_window

0x5ff1,	// (0x0004329a) popup_fep_japan_predictive_window_ParamLimits

0x5ff1,	// (0x0004329a) popup_fep_japan_predictive_window

0x6021,	// (0x000432ca) popup_find_window

0x602e,	// (0x000432d7) popup_grid_graphic_window_ParamLimits

0x602e,	// (0x000432d7) popup_grid_graphic_window

0x605a,	// (0x00043303) popup_large_graphic_colour_window

0x6080,	// (0x00043329) popup_menu_window_ParamLimits

0x6080,	// (0x00043329) popup_menu_window

0x6238,	// (0x000434e1) popup_note_image_window

0x6224,	// (0x000434cd) popup_note_wait_window_ParamLimits

0x6224,	// (0x000434cd) popup_note_wait_window

0x6224,	// (0x000434cd) popup_note_window_ParamLimits

0x6224,	// (0x000434cd) popup_note_window

0x628e,	// (0x00043537) popup_query_code_window_ParamLimits

0x628e,	// (0x00043537) popup_query_code_window

0x62a2,	// (0x0004354b) popup_query_data_code_window_ParamLimits

0x62a2,	// (0x0004354b) popup_query_data_code_window

0x62bf,	// (0x00043568) popup_query_data_window_ParamLimits

0x62bf,	// (0x00043568) popup_query_data_window

0x62db,	// (0x00043584) popup_query_sat_info_window_ParamLimits

0x62db,	// (0x00043584) popup_query_sat_info_window

0x6314,	// (0x000435bd) popup_snote_single_graphic_window_ParamLimits

0x6314,	// (0x000435bd) popup_snote_single_graphic_window

0x6314,	// (0x000435bd) popup_snote_single_text_window_ParamLimits

0x6314,	// (0x000435bd) popup_snote_single_text_window

0x6329,	// (0x000435d2) popup_sub_window_general

0x6459,	// (0x00043702) popup_window_general_ParamLimits

0x6459,	// (0x00043702) popup_window_general

0x9509,	// (0x000467b2) power_save_pane

0x5d39,	// (0x00042fe2) control_pane_g1_ParamLimits

0x5d39,	// (0x00042fe2) control_pane_g1

0x5d60,	// (0x00043009) control_pane_g2_ParamLimits

0x5d60,	// (0x00043009) control_pane_g2

0x9478,	// (0x00046721) control_pane_g3_ParamLimits

0x9478,	// (0x00046721) control_pane_g3

0x0007,

0xf766,	// (0x0004ca0f) control_pane_g_ParamLimits

0xf766,	// (0x0004ca0f) control_pane_g

0x5daa,	// (0x00043053) control_pane_t1_ParamLimits

0x5daa,	// (0x00043053) control_pane_t1

0x5e00,	// (0x000430a9) control_pane_t2_ParamLimits

0x5e00,	// (0x000430a9) control_pane_t2

0x0002,

0xf777,	// (0x0004ca20) control_pane_t_ParamLimits

0xf777,	// (0x0004ca20) control_pane_t

0x939d,	// (0x00046646) navi_navi_volume_pane_cp1

0x93a5,	// (0x0004664e) status_small_icon_pane

0x93ad,	// (0x00046656) status_small_pane_g1_ParamLimits

0x93ad,	// (0x00046656) status_small_pane_g1

0x93e1,	// (0x0004668a) status_small_pane_g2_ParamLimits

0x93e1,	// (0x0004668a) status_small_pane_g2

0x93ed,	// (0x00046696) status_small_pane_g3_ParamLimits

0x93ed,	// (0x00046696) status_small_pane_g3

0x93f9,	// (0x000466a2) status_small_pane_g4_ParamLimits

0x93f9,	// (0x000466a2) status_small_pane_g4

0x9405,	// (0x000466ae) status_small_pane_g5_ParamLimits

0x9405,	// (0x000466ae) status_small_pane_g5

0x9413,	// (0x000466bc) status_small_pane_g6_ParamLimits

0x9413,	// (0x000466bc) status_small_pane_g6

0x0007,

0xf755,	// (0x0004c9fe) status_small_pane_g_ParamLimits

0xf755,	// (0x0004c9fe) status_small_pane_g

0x9442,	// (0x000466eb) status_small_pane_t1

0x9464,	// (0x0004670d) status_small_wait_pane_ParamLimits

0x9464,	// (0x0004670d) status_small_wait_pane

0x8c1e,	// (0x00045ec7) aid_levels_signal_ParamLimits

0x8c1e,	// (0x00045ec7) aid_levels_signal

0x8c30,	// (0x00045ed9) signal_pane_g1_ParamLimits

0x8c30,	// (0x00045ed9) signal_pane_g1

0x8c45,	// (0x00045eee) signal_pane_g2_ParamLimits

0x8c45,	// (0x00045eee) signal_pane_g2

0x0003,

0xf6e6,	// (0x0004c98f) signal_pane_g_ParamLimits

0xf6e6,	// (0x0004c98f) signal_pane_g

0x8c80,	// (0x00045f29) context_pane_g1

0x7b88,	// (0x00044e31) title_pane_g1

0x7bbe,	// (0x00044e67) title_pane_t1

0x7c26,	// (0x00044ecf) title_pane_t2

0x7c4c,	// (0x00044ef5) title_pane_t3

0x0002,

0xf530,	// (0x0004c7d9) title_pane_t

0x98fd,	// (0x00046ba6) aid_levels_battery_ParamLimits

0x98fd,	// (0x00046ba6) aid_levels_battery

0x9911,	// (0x00046bba) battery_pane_g1_ParamLimits

0x9911,	// (0x00046bba) battery_pane_g1

0x9927,	// (0x00046bd0) battery_pane_g2_ParamLimits

0x9927,	// (0x00046bd0) battery_pane_g2

0x0001,

0xf789,	// (0x0004ca32) battery_pane_g_ParamLimits

0xf789,	// (0x0004ca32) battery_pane_g

0xab9d,	// (0x00047e46) uni_indicator_pane_g1

0xabb3,	// (0x00047e5c) uni_indicator_pane_g2

0xabc9,	// (0x00047e72) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x0004cba3) uni_indicator_pane_g

0x9022,	// (0x000462cb) navi_icon_pane_ParamLimits

0x9022,	// (0x000462cb) navi_icon_pane

0x8f6b,	// (0x00046214) navi_midp_pane

0x903e,	// (0x000462e7) navi_navi_pane

0x9048,	// (0x000462f1) navi_text_pane_ParamLimits

0x9048,	// (0x000462f1) navi_text_pane

0x274e,	// (0x0003f9f7) status_small_wait_pane_g1

0x80a1,	// (0x0004534a) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x0004cb9e) status_small_wait_pane_g

0xa8c2,	// (0x00047b6b) navi_navi_icon_text_pane

0xa8ca,	// (0x00047b73) navi_navi_pane_g1_ParamLimits

0xa8ca,	// (0x00047b73) navi_navi_pane_g1

0xa8dc,	// (0x00047b85) navi_navi_pane_g2_ParamLimits

0xa8dc,	// (0x00047b85) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x0004cb6c) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x0004cb6c) navi_navi_pane_g

0xa8ee,	// (0x00047b97) navi_navi_tabs_pane

0xa8f7,	// (0x00047ba0) navi_navi_text_pane

0xa8c2,	// (0x00047b6b) navi_navi_volume_pane

0xa89e,	// (0x00047b47) navi_text_pane_t1

0xa892,	// (0x00047b3b) navi_icon_pane_g1

0xa7e5,	// (0x00047a8e) navi_navi_text_pane_t1

0x6711,	// (0x000439ba) navi_navi_volume_pane_g1

0x6719,	// (0x000439c2) volume_small_pane

0xa74b,	// (0x000479f4) navi_navi_icon_text_pane_g1

0xa753,	// (0x000479fc) navi_navi_icon_text_pane_t1

0x903e,	// (0x000462e7) navi_tabs_2_long_pane

0x903e,	// (0x000462e7) navi_tabs_2_pane

0x903e,	// (0x000462e7) navi_tabs_3_long_pane

0x903e,	// (0x000462e7) navi_tabs_3_pane

0x903e,	// (0x000462e7) navi_tabs_4_pane

0x66f1,	// (0x0004399a) tabs_2_active_pane_ParamLimits

0x66f1,	// (0x0004399a) tabs_2_active_pane

0x6701,	// (0x000439aa) tabs_2_passive_pane_ParamLimits

0x6701,	// (0x000439aa) tabs_2_passive_pane

0x66bf,	// (0x00043968) tabs_3_active_pane_ParamLimits

0x66bf,	// (0x00043968) tabs_3_active_pane

0x66cf,	// (0x00043978) tabs_3_passive_pane_ParamLimits

0x66cf,	// (0x00043978) tabs_3_passive_pane

0x66e0,	// (0x00043989) tabs_3_passive_pane_cp_ParamLimits

0x66e0,	// (0x00043989) tabs_3_passive_pane_cp

0x667b,	// (0x00043924) tabs_4_active_pane_ParamLimits

0x667b,	// (0x00043924) tabs_4_active_pane

0x668c,	// (0x00043935) tabs_4_passive_pane_ParamLimits

0x668c,	// (0x00043935) tabs_4_passive_pane

0x669d,	// (0x00043946) tabs_4_passive_pane_cp_ParamLimits

0x669d,	// (0x00043946) tabs_4_passive_pane_cp

0x66ae,	// (0x00043957) tabs_4_passive_pane_cp2_ParamLimits

0x66ae,	// (0x00043957) tabs_4_passive_pane_cp2

0x6657,	// (0x00043900) tabs_2_long_active_pane_ParamLimits

0x6657,	// (0x00043900) tabs_2_long_active_pane

0x6669,	// (0x00043912) tabs_2_long_passive_pane_ParamLimits

0x6669,	// (0x00043912) tabs_2_long_passive_pane

0x6618,	// (0x000438c1) tabs_3_long_active_pane_ParamLimits

0x6618,	// (0x000438c1) tabs_3_long_active_pane

0x662b,	// (0x000438d4) tabs_3_long_passive_pane_ParamLimits

0x662b,	// (0x000438d4) tabs_3_long_passive_pane

0x6644,	// (0x000438ed) tabs_3_long_passive_pane_cp_ParamLimits

0x6644,	// (0x000438ed) tabs_3_long_passive_pane_cp

0x65be,	// (0x00043867) volume_small_pane_g1

0x65c7,	// (0x00043870) volume_small_pane_g2

0x65d0,	// (0x00043879) volume_small_pane_g3

0x65d9,	// (0x00043882) volume_small_pane_g4

0x65e2,	// (0x0004388b) volume_small_pane_g5

0x65eb,	// (0x00043894) volume_small_pane_g6

0x65f4,	// (0x0004389d) volume_small_pane_g7

0x65fd,	// (0x000438a6) volume_small_pane_g8

0x6606,	// (0x000438af) volume_small_pane_g9

0x660f,	// (0x000438b8) volume_small_pane_g10

0x0009,

0xf88f,	// (0x0004cb38) volume_small_pane_g

0x7c5e,	// (0x00044f07) bg_active_tab_pane_cp2_ParamLimits

0x7c5e,	// (0x00044f07) bg_active_tab_pane_cp2

0x7c6c,	// (0x00044f15) tabs_3_active_pane_g1

0x7c74,	// (0x00044f1d) tabs_3_active_pane_t1

0x7c5e,	// (0x00044f07) bg_passive_tab_pane_cp2_ParamLimits

0x7c5e,	// (0x00044f07) bg_passive_tab_pane_cp2

0x7c6c,	// (0x00044f15) tabs_3_passive_pane_g1

0x7c74,	// (0x00044f1d) tabs_3_passive_pane_t1

0x7c5e,	// (0x00044f07) bg_active_tab_pane_cp3_ParamLimits

0x7c5e,	// (0x00044f07) bg_active_tab_pane_cp3

0x7c86,	// (0x00044f2f) tabs_4_active_pane_g1

0x7c8e,	// (0x00044f37) tabs_4_active_pane_t1

0x7c5e,	// (0x00044f07) bg_passive_tab_pane_cp3_ParamLimits

0x7c5e,	// (0x00044f07) bg_passive_tab_pane_cp3

0x7c86,	// (0x00044f2f) tabs_4_1_passive_pane_g1

0x7c8e,	// (0x00044f37) tabs_4_1_passive_pane_t1

0x94d5,	// (0x0004677e) list_highlight_pane_cp2

0xae00,	// (0x000480a9) list_set_pane_ParamLimits

0xae00,	// (0x000480a9) list_set_pane

0xaea6,	// (0x0004814f) main_pane_set_t1_ParamLimits

0xaea6,	// (0x0004814f) main_pane_set_t1

0xaec6,	// (0x0004816f) main_pane_set_t2_ParamLimits

0xaec6,	// (0x0004816f) main_pane_set_t2

0xaeda,	// (0x00048183) main_pane_set_t3_ParamLimits

0xaeda,	// (0x00048183) main_pane_set_t3

0xaeec,	// (0x00048195) main_pane_set_t4_ParamLimits

0xaeec,	// (0x00048195) main_pane_set_t4

0x0003,

0xf95f,	// (0x0004cc08) main_pane_set_t_ParamLimits

0xf95f,	// (0x0004cc08) main_pane_set_t

0xaefe,	// (0x000481a7) setting_code_pane

0xaf0a,	// (0x000481b3) setting_slider_graphic_pane

0xaf0a,	// (0x000481b3) setting_slider_pane

0xaf0a,	// (0x000481b3) setting_text_pane

0xaf0a,	// (0x000481b3) setting_volume_pane

0x5770,	// (0x00042a19) volume_set_pane

0x7c5e,	// (0x00044f07) bg_set_opt_pane_cp

0x5778,	// (0x00042a21) setting_slider_pane_t1

0x5791,	// (0x00042a3a) setting_slider_pane_t2

0x57ab,	// (0x00042a54) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0004c7e0) setting_slider_pane_t

0x57c3,	// (0x00042a6c) slider_set_pane

0x2758,	// (0x0003fa01) bg_set_opt_pane_cp2

0x7ca0,	// (0x00044f49) setting_slider_graphic_pane_g1

0x57d9,	// (0x00042a82) setting_slider_graphic_pane_t1

0x57e9,	// (0x00042a92) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0004c7e7) setting_slider_graphic_pane_t

0x57f9,	// (0x00042aa2) slider_set_pane_cp

0x2758,	// (0x0003fa01) input_focus_pane_cp1

0xadbf,	// (0x00048068) list_set_text_pane

0x274e,	// (0x0003f9f7) setting_text_pane_g1

0x2758,	// (0x0003fa01) input_focus_pane_cp2

0x274e,	// (0x0003f9f7) setting_code_pane_g1

0x7ca9,	// (0x00044f52) setting_code_pane_t1

0x4477,	// (0x00041720) set_text_pane_t1_ParamLimits

0x4477,	// (0x00041720) set_text_pane_t1

0x8543,	// (0x000457ec) set_opt_bg_pane_g1

0x854b,	// (0x000457f4) set_opt_bg_pane_g2

0xad99,	// (0x00048042) set_opt_bg_pane_g3

0x855b,	// (0x00045804) set_opt_bg_pane_g4

0x8563,	// (0x0004580c) set_opt_bg_pane_g5

0x856b,	// (0x00045814) set_opt_bg_pane_g6

0xada3,	// (0x0004804c) set_opt_bg_pane_g7

0xadab,	// (0x00048054) set_opt_bg_pane_g8

0xadb5,	// (0x0004805e) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x0004cbf5) set_opt_bg_pane_g

0xad8c,	// (0x00048035) slider_set_pane_g1

0x6786,	// (0x00043a2f) slider_set_pane_g2

0x0006,

0xf93d,	// (0x0004cbe6) slider_set_pane_g

0x6722,	// (0x000439cb) volume_set_pane_g1

0x672a,	// (0x000439d3) volume_set_pane_g2

0x6732,	// (0x000439db) volume_set_pane_g3

0x673a,	// (0x000439e3) volume_set_pane_g4

0x6742,	// (0x000439eb) volume_set_pane_g5

0x674a,	// (0x000439f3) volume_set_pane_g6

0x6752,	// (0x000439fb) volume_set_pane_g7

0x675a,	// (0x00043a03) volume_set_pane_g8

0x6762,	// (0x00043a0b) volume_set_pane_g9

0x676a,	// (0x00043a13) volume_set_pane_g10

0x0009,

0xf915,	// (0x0004cbbe) volume_set_pane_g

0x7cb7,	// (0x00044f60) indicator_pane_ParamLimits

0x7cb7,	// (0x00044f60) indicator_pane

0x7cc3,	// (0x00044f6c) main_idle_pane_g2_ParamLimits

0x7cc3,	// (0x00044f6c) main_idle_pane_g2

0x7ceb,	// (0x00044f94) main_pane_idle_g1_ParamLimits

0x7ceb,	// (0x00044f94) main_pane_idle_g1

0x7cf8,	// (0x00044fa1) popup_clock_digital_analogue_window_ParamLimits

0x7cf8,	// (0x00044fa1) popup_clock_digital_analogue_window

0x7d0f,	// (0x00044fb8) soft_indicator_pane_ParamLimits

0x7d0f,	// (0x00044fb8) soft_indicator_pane

0x7d1b,	// (0x00044fc4) wallpaper_pane_ParamLimits

0x7d1b,	// (0x00044fc4) wallpaper_pane

0x274e,	// (0x0003f9f7) wallpaper_pane_g1

0x7d2f,	// (0x00044fd8) indicator_pane_g1_ParamLimits

0x7d2f,	// (0x00044fd8) indicator_pane_g1

0xb1bb,	// (0x00048464) navi_navi_icon_text_pane_srt_g1

0x7d4a,	// (0x00044ff3) soft_indicator_pane_t1

0x7d64,	// (0x0004500d) aid_ps_area_pane

0x7d75,	// (0x0004501e) aid_ps_clock_pane

0x7d83,	// (0x0004502c) aid_ps_indicator_pane

0x7d8f,	// (0x00045038) indicator_ps_pane_ParamLimits

0x7d8f,	// (0x00045038) indicator_ps_pane

0x7d9e,	// (0x00045047) power_save_pane_g1_ParamLimits

0x7d9e,	// (0x00045047) power_save_pane_g1

0x7daa,	// (0x00045053) power_save_pane_g2_ParamLimits

0x7daa,	// (0x00045053) power_save_pane_g2

0x537b,	// (0x00042624) aid_navinavi_width_pane

0x7d64,	// (0x0004500d) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0004c7ec) power_save_pane_g_ParamLimits

0xf543,	// (0x0004c7ec) power_save_pane_g

0x7db8,	// (0x00045061) power_save_pane_t1_ParamLimits

0x7db8,	// (0x00045061) power_save_pane_t1

0x7d75,	// (0x0004501e) aid_ps_clock_pane_ParamLimits

0x7d83,	// (0x0004502c) aid_ps_indicator_pane_ParamLimits

0x7dca,	// (0x00045073) power_save_pane_t4_ParamLimits

0x7dca,	// (0x00045073) power_save_pane_t4

0x0001,

0xf548,	// (0x0004c7f1) power_save_pane_t_ParamLimits

0xf548,	// (0x0004c7f1) power_save_pane_t

0x7df4,	// (0x0004509d) power_save_t3_ParamLimits

0x7df4,	// (0x0004509d) power_save_t3

0x7ddf,	// (0x00045088) power_save_t2_ParamLimits

0x7ddf,	// (0x00045088) power_save_t2

0x7e09,	// (0x000450b2) indicator_ps_pane_g1

0x7e12,	// (0x000450bb) ai_gene_pane_ParamLimits

0x7e12,	// (0x000450bb) ai_gene_pane

0x7e1e,	// (0x000450c7) ai_links_pane_ParamLimits

0x7e1e,	// (0x000450c7) ai_links_pane

0x7e2a,	// (0x000450d3) indicator_pane_cp1_ParamLimits

0x7e2a,	// (0x000450d3) indicator_pane_cp1

0x7e36,	// (0x000450df) main_pane_idle_g1_cp_ParamLimits

0x7e36,	// (0x000450df) main_pane_idle_g1_cp

0x7e42,	// (0x000450eb) popup_ai_links_title_window

0x7e4b,	// (0x000450f4) soft_indicator_pane_cp1_ParamLimits

0x7e4b,	// (0x000450f4) soft_indicator_pane_cp1

0xab8b,	// (0x00047e34) ai_links_pane_g1

0xab94,	// (0x00047e3d) grid_ai_links_pane

0xab6e,	// (0x00047e17) ai_gene_pane_1

0xab79,	// (0x00047e22) ai_gene_pane_2

0xab82,	// (0x00047e2b) list_highlight_pane_cp4

0xab52,	// (0x00047dfb) cell_ai_link_pane_ParamLimits

0xab52,	// (0x00047dfb) cell_ai_link_pane

0xab4a,	// (0x00047df3) cell_ai_link_pane_g1

0x80a1,	// (0x0004534a) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x0004cb99) cell_ai_link_pane_g

0x2758,	// (0x0003fa01) grid_highlight_cp2

0x2758,	// (0x0003fa01) bg_popup_sub_pane_cp1

0x7e65,	// (0x0004510e) popup_ai_links_title_window_t1

0xaa98,	// (0x00047d41) ai_gene_pane_1_g1_ParamLimits

0xaa98,	// (0x00047d41) ai_gene_pane_1_g1

0xaaa4,	// (0x00047d4d) ai_gene_pane_1_g2_ParamLimits

0xaaa4,	// (0x00047d4d) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x0004cb8f) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x0004cb8f) ai_gene_pane_1_g

0xaab1,	// (0x00047d5a) ai_gene_pane_1_t1_ParamLimits

0xaab1,	// (0x00047d5a) ai_gene_pane_1_t1

0xaae5,	// (0x00047d8e) grid_ai_soft_ind_pane

0xaa83,	// (0x00047d2c) ai_gene_pane_2_t1_ParamLimits

0xaa83,	// (0x00047d2c) ai_gene_pane_2_t1

0x7e74,	// (0x0004511d) main_pane_empty_t1_ParamLimits

0x7e74,	// (0x0004511d) main_pane_empty_t1

0x7e8c,	// (0x00045135) main_pane_empty_t2_ParamLimits

0x7e8c,	// (0x00045135) main_pane_empty_t2

0x7ea1,	// (0x0004514a) main_pane_empty_t3_ParamLimits

0x7ea1,	// (0x0004514a) main_pane_empty_t3

0x7eb3,	// (0x0004515c) main_pane_empty_t4_ParamLimits

0x7eb3,	// (0x0004515c) main_pane_empty_t4

0x7ec5,	// (0x0004516e) main_pane_empty_t5_ParamLimits

0x7ec5,	// (0x0004516e) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0004c7f6) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0004c7f6) main_pane_empty_t

0x860a,	// (0x000458b3) bg_popup_window_pane_ParamLimits

0x860a,	// (0x000458b3) bg_popup_window_pane

0xa7f3,	// (0x00047a9c) find_popup_pane_cp2_ParamLimits

0xa7f3,	// (0x00047a9c) find_popup_pane_cp2

0xa7ff,	// (0x00047aa8) heading_pane_ParamLimits

0xa7ff,	// (0x00047aa8) heading_pane

0x2758,	// (0x0003fa01) bg_popup_sub_pane

0xa76d,	// (0x00047a16) bg_popup_window_pane_g1_ParamLimits

0xa76d,	// (0x00047a16) bg_popup_window_pane_g1

0xa779,	// (0x00047a22) bg_popup_window_pane_g2_ParamLimits

0xa779,	// (0x00047a22) bg_popup_window_pane_g2

0xa785,	// (0x00047a2e) bg_popup_window_pane_g3_ParamLimits

0xa785,	// (0x00047a2e) bg_popup_window_pane_g3

0xa791,	// (0x00047a3a) bg_popup_window_pane_g4_ParamLimits

0xa791,	// (0x00047a3a) bg_popup_window_pane_g4

0xa79d,	// (0x00047a46) bg_popup_window_pane_g5_ParamLimits

0xa79d,	// (0x00047a46) bg_popup_window_pane_g5

0xa7a9,	// (0x00047a52) bg_popup_window_pane_g6_ParamLimits

0xa7a9,	// (0x00047a52) bg_popup_window_pane_g6

0xa7b5,	// (0x00047a5e) bg_popup_window_pane_g7_ParamLimits

0xa7b5,	// (0x00047a5e) bg_popup_window_pane_g7

0xa7c1,	// (0x00047a6a) bg_popup_window_pane_g8_ParamLimits

0xa7c1,	// (0x00047a6a) bg_popup_window_pane_g8

0xa7cd,	// (0x00047a76) bg_popup_window_pane_g9_ParamLimits

0xa7cd,	// (0x00047a76) bg_popup_window_pane_g9

0xa7d9,	// (0x00047a82) bg_popup_window_pane_g10_ParamLimits

0xa7d9,	// (0x00047a82) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x0004cb57) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x0004cb57) bg_popup_window_pane_g

0xa702,	// (0x000479ab) bg_popup_heading_pane_ParamLimits

0xa702,	// (0x000479ab) bg_popup_heading_pane

0x6885,	// (0x00043b2e) tabs_4_passive_pane_cp_srt_ParamLimits

0x6885,	// (0x00043b2e) tabs_4_passive_pane_cp_srt

0x6897,	// (0x00043b40) tabs_4_passive_pane_srt_ParamLimits

0xa716,	// (0x000479bf) heading_pane_g2

0x6897,	// (0x00043b40) tabs_4_passive_pane_srt

0x94d5,	// (0x0004677e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94d5,	// (0x0004677e) bg_passive_tab_pane_cp3_srt

0xa71e,	// (0x000479c7) heading_pane_t1_ParamLimits

0xa71e,	// (0x000479c7) heading_pane_t1

0xa735,	// (0x000479de) heading_pane_t2_ParamLimits

0xa735,	// (0x000479de) heading_pane_t2

0x0001,

0xf8a9,	// (0x0004cb52) heading_pane_t_ParamLimits

0xf8a9,	// (0x0004cb52) heading_pane_t

0xa22f,	// (0x000474d8) bg_popup_heading_pane_g1

0xa2de,	// (0x00047587) bg_popup_heading_pane_g2

0xa2e8,	// (0x00047591) bg_popup_heading_pane_g3

0xa2f2,	// (0x0004759b) bg_popup_heading_pane_g4

0xa2fc,	// (0x000475a5) bg_popup_heading_pane_g5

0xa306,	// (0x000475af) bg_popup_heading_pane_g6

0xa30e,	// (0x000475b7) bg_popup_heading_pane_g7

0xa316,	// (0x000475bf) bg_popup_heading_pane_g8

0xa320,	// (0x000475c9) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x0004cb0e) bg_popup_heading_pane_g

0x99ff,	// (0x00046ca8) bg_popup_sub_pane_g1

0x9a07,	// (0x00046cb0) bg_popup_sub_pane_g2

0x9a0f,	// (0x00046cb8) bg_popup_sub_pane_g3

0x9a17,	// (0x00046cc0) bg_popup_sub_pane_g4

0x9a1f,	// (0x00046cc8) bg_popup_sub_pane_g5

0x9a27,	// (0x00046cd0) bg_popup_sub_pane_g6

0x9a2f,	// (0x00046cd8) bg_popup_sub_pane_g7

0x9a37,	// (0x00046ce0) bg_popup_sub_pane_g8

0x9a3f,	// (0x00046ce8) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x0004cae8) bg_popup_sub_pane_g

0x7ed9,	// (0x00045182) bg_popup_window_pane_cp5_ParamLimits

0x7ed9,	// (0x00045182) bg_popup_window_pane_cp5

0x7ef5,	// (0x0004519e) popup_note_window_g1_ParamLimits

0x7ef5,	// (0x0004519e) popup_note_window_g1

0x7f01,	// (0x000451aa) popup_note_window_t1_ParamLimits

0x7f01,	// (0x000451aa) popup_note_window_t1

0x7f17,	// (0x000451c0) popup_note_window_t2_ParamLimits

0x7f17,	// (0x000451c0) popup_note_window_t2

0x7f2d,	// (0x000451d6) popup_note_window_t3_ParamLimits

0x7f2d,	// (0x000451d6) popup_note_window_t3

0x7f43,	// (0x000451ec) popup_note_window_t4_ParamLimits

0x7f43,	// (0x000451ec) popup_note_window_t4

0x7f6b,	// (0x00045214) popup_note_window_t5_ParamLimits

0x7f6b,	// (0x00045214) popup_note_window_t5

0x0004,

0xf558,	// (0x0004c801) popup_note_window_t_ParamLimits

0xf558,	// (0x0004c801) popup_note_window_t

0x7fb5,	// (0x0004525e) bg_popup_window_pane_cp6_ParamLimits

0x7fb5,	// (0x0004525e) bg_popup_window_pane_cp6

0xa1ab,	// (0x00047454) popup_note_image_window_g1_ParamLimits

0xa1ab,	// (0x00047454) popup_note_image_window_g1

0xa1b7,	// (0x00047460) popup_note_image_window_g2_ParamLimits

0xa1b7,	// (0x00047460) popup_note_image_window_g2

0x0001,

0xf833,	// (0x0004cadc) popup_note_image_window_g_ParamLimits

0xf833,	// (0x0004cadc) popup_note_image_window_g

0xa1d0,	// (0x00047479) popup_note_image_window_t1_ParamLimits

0xa1d0,	// (0x00047479) popup_note_image_window_t1

0xa1e9,	// (0x00047492) popup_note_image_window_t2_ParamLimits

0xa1e9,	// (0x00047492) popup_note_image_window_t2

0xa202,	// (0x000474ab) popup_note_image_window_t3_ParamLimits

0xa202,	// (0x000474ab) popup_note_image_window_t3

0x0002,

0xf838,	// (0x0004cae1) popup_note_image_window_t_ParamLimits

0xf838,	// (0x0004cae1) popup_note_image_window_t

0xa06c,	// (0x00047315) bg_popup_window_pane_cp7_ParamLimits

0xa06c,	// (0x00047315) bg_popup_window_pane_cp7

0xa09c,	// (0x00047345) popup_note_wait_window_g1_ParamLimits

0xa09c,	// (0x00047345) popup_note_wait_window_g1

0xa0a8,	// (0x00047351) popup_note_wait_window_g2_ParamLimits

0xa0a8,	// (0x00047351) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x0004caca) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x0004caca) popup_note_wait_window_g

0xa0c0,	// (0x00047369) popup_note_wait_window_t1_ParamLimits

0xa0c0,	// (0x00047369) popup_note_wait_window_t1

0xa0e7,	// (0x00047390) popup_note_wait_window_t2_ParamLimits

0xa0e7,	// (0x00047390) popup_note_wait_window_t2

0xa104,	// (0x000473ad) popup_note_wait_window_t3_ParamLimits

0xa104,	// (0x000473ad) popup_note_wait_window_t3

0xa117,	// (0x000473c0) popup_note_wait_window_t4_ParamLimits

0xa117,	// (0x000473c0) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x0004cad1) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x0004cad1) popup_note_wait_window_t

0xa13c,	// (0x000473e5) wait_bar_pane_ParamLimits

0xa13c,	// (0x000473e5) wait_bar_pane

0x2758,	// (0x0003fa01) wait_anim_pane

0x2758,	// (0x0003fa01) wait_border_pane

0x274e,	// (0x0003f9f7) wait_anim_pane_g1

0x274e,	// (0x0003f9f7) wait_anim_pane_g2

0x0001,

0xf6e1,	// (0x0004c98a) wait_anim_pane_g

0xa010,	// (0x000472b9) wait_border_pane_g1

0xa01b,	// (0x000472c4) wait_border_pane_g2

0xa024,	// (0x000472cd) wait_border_pane_g3

0x0002,

0xf81a,	// (0x0004cac3) wait_border_pane_g

0x9e7b,	// (0x00047124) bg_popup_window_pane_cp16_ParamLimits

0x9e7b,	// (0x00047124) bg_popup_window_pane_cp16

0x9f7b,	// (0x00047224) indicator_popup_pane_cp4_ParamLimits

0x9f7b,	// (0x00047224) indicator_popup_pane_cp4

0x9f8f,	// (0x00047238) popup_query_data_window_t1_ParamLimits

0x9f8f,	// (0x00047238) popup_query_data_window_t1

0x9fa1,	// (0x0004724a) popup_query_data_window_t2_ParamLimits

0x9fa1,	// (0x0004724a) popup_query_data_window_t2

0x9fba,	// (0x00047263) popup_query_data_window_t3_ParamLimits

0x9fba,	// (0x00047263) popup_query_data_window_t3

0x0002,

0xf813,	// (0x0004cabc) popup_query_data_window_t_ParamLimits

0xf813,	// (0x0004cabc) popup_query_data_window_t

0x9fd4,	// (0x0004727d) query_popup_data_pane_ParamLimits

0x9fd4,	// (0x0004727d) query_popup_data_pane

0x9fe8,	// (0x00047291) query_popup_data_pane_cp1_ParamLimits

0x9fe8,	// (0x00047291) query_popup_data_pane_cp1

0x9e7b,	// (0x00047124) bg_popup_window_pane_cp10_ParamLimits

0x9e7b,	// (0x00047124) bg_popup_window_pane_cp10

0x9ead,	// (0x00047156) indicator_popup_pane_ParamLimits

0x9ead,	// (0x00047156) indicator_popup_pane

0x9ecf,	// (0x00047178) popup_query_code_window_t1_ParamLimits

0x9ecf,	// (0x00047178) popup_query_code_window_t1

0x9ee9,	// (0x00047192) popup_query_code_window_t2_ParamLimits

0x9ee9,	// (0x00047192) popup_query_code_window_t2

0x9f32,	// (0x000471db) popup_query_code_window_t3_ParamLimits

0x9f32,	// (0x000471db) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x0004cab5) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x0004cab5) popup_query_code_window_t

0x9f61,	// (0x0004720a) query_popup_pane_ParamLimits

0x9f61,	// (0x0004720a) query_popup_pane

0x7fb5,	// (0x0004525e) bg_popup_window_pane_cp15_ParamLimits

0x7fb5,	// (0x0004525e) bg_popup_window_pane_cp15

0x7fd3,	// (0x0004527c) indicator_popup_pane_cp1_ParamLimits

0x7fd3,	// (0x0004527c) indicator_popup_pane_cp1

0x7fe6,	// (0x0004528f) indicator_popup_pane_cp2_ParamLimits

0x7fe6,	// (0x0004528f) indicator_popup_pane_cp2

0x7ff9,	// (0x000452a2) popup_query_data_code_window_g1_ParamLimits

0x7ff9,	// (0x000452a2) popup_query_data_code_window_g1

0x800c,	// (0x000452b5) popup_query_data_code_window_t1_ParamLimits

0x800c,	// (0x000452b5) popup_query_data_code_window_t1

0x801e,	// (0x000452c7) popup_query_data_code_window_t2_ParamLimits

0x801e,	// (0x000452c7) popup_query_data_code_window_t2

0x8030,	// (0x000452d9) popup_query_data_code_window_t3_ParamLimits

0x8030,	// (0x000452d9) popup_query_data_code_window_t3

0x8046,	// (0x000452ef) popup_query_data_code_window_t4_ParamLimits

0x8046,	// (0x000452ef) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0004c80c) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0004c80c) popup_query_data_code_window_t

0x64c3,	// (0x0004376c) list_single_midp_graphic_pane_g3

0x805e,	// (0x00045307) query_popup_data_pane_cp2_ParamLimits

0x8071,	// (0x0004531a) query_popup_pane_cp2_ParamLimits

0x8071,	// (0x0004531a) query_popup_pane_cp2

0x2758,	// (0x0003fa01) bg_popup_window_pane_cp11

0x9e5f,	// (0x00047108) heading_pane_cp5

0x9e67,	// (0x00047110) listscroll_popup_info_pane

0x2758,	// (0x0003fa01) input_focus_pane_cp3

0x8084,	// (0x0004532d) query_popup_pane_t1

0x8092,	// (0x0004533b) list_popup_info_pane_ParamLimits

0x8092,	// (0x0004533b) list_popup_info_pane

0x80a1,	// (0x0004534a) listscroll_popup_info_pane_g1

0x80a9,	// (0x00045352) scroll_pane_cp7

0x80b3,	// (0x0004535c) popup_info_list_pane_t1_ParamLimits

0x80b3,	// (0x0004535c) popup_info_list_pane_t1

0x80cd,	// (0x00045376) popup_info_list_pane_t2_ParamLimits

0x80cd,	// (0x00045376) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0004c815) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0004c815) popup_info_list_pane_t

0x2758,	// (0x0003fa01) bg_popup_window_pane_cp12

0xb1d5,	// (0x0004847e) find_popup_pane

0x7c5e,	// (0x00044f07) bg_popup_window_pane_cp3

0x80e7,	// (0x00045390) heading_pane_cp3

0x80f6,	// (0x0004539f) listscroll_popup_graphic_pane

0x2758,	// (0x0003fa01) bg_popup_window_pane_cp4

0x8156,	// (0x000453ff) heading_pane_cp4

0x8160,	// (0x00045409) listscroll_popup_colour_pane

0x8168,	// (0x00045411) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8168,	// (0x00045411) cell_large_graphic_colour_none_popup_pane

0x817c,	// (0x00045425) grid_large_graphic_colour_popup_pane_ParamLimits

0x817c,	// (0x00045425) grid_large_graphic_colour_popup_pane

0x81a0,	// (0x00045449) listscroll_popup_colour_pane_g1_ParamLimits

0x81a0,	// (0x00045449) listscroll_popup_colour_pane_g1

0x81b7,	// (0x00045460) listscroll_popup_colour_pane_g2_ParamLimits

0x81b7,	// (0x00045460) listscroll_popup_colour_pane_g2

0x81ce,	// (0x00045477) listscroll_popup_colour_pane_g3_ParamLimits

0x81ce,	// (0x00045477) listscroll_popup_colour_pane_g3

0x81de,	// (0x00045487) listscroll_popup_colour_pane_g4_ParamLimits

0x81de,	// (0x00045487) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0004c81a) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0004c81a) listscroll_popup_colour_pane_g

0x81ee,	// (0x00045497) scroll_pane_cp6_ParamLimits

0x81ee,	// (0x00045497) scroll_pane_cp6

0x8200,	// (0x000454a9) cell_large_graphic_colour_popup_pane_ParamLimits

0x8200,	// (0x000454a9) cell_large_graphic_colour_popup_pane

0x821f,	// (0x000454c8) cell_large_graphic_colour_none_popup_pane_t1

0x2758,	// (0x0003fa01) grid_highlight_pane_cp5

0x822e,	// (0x000454d7) cell_large_graphic_colour_popup_pane_g1

0x8236,	// (0x000454df) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0004c823) cell_large_graphic_colour_popup_pane_g

0x823e,	// (0x000454e7) cell_large_graphic_colour_popup_pane_g2_copy1

0x8247,	// (0x000454f0) grid_highlight_pane_cp4

0x824f,	// (0x000454f8) bg_popup_window_pane_cp8_ParamLimits

0x824f,	// (0x000454f8) bg_popup_window_pane_cp8

0x826a,	// (0x00045513) popup_snote_single_text_window_g1_ParamLimits

0x826a,	// (0x00045513) popup_snote_single_text_window_g1

0x827c,	// (0x00045525) popup_snote_single_text_window_t1_ParamLimits

0x827c,	// (0x00045525) popup_snote_single_text_window_t1

0x828f,	// (0x00045538) popup_snote_single_text_window_t2_ParamLimits

0x828f,	// (0x00045538) popup_snote_single_text_window_t2

0x82a2,	// (0x0004554b) popup_snote_single_text_window_t3_ParamLimits

0x82a2,	// (0x0004554b) popup_snote_single_text_window_t3

0x82db,	// (0x00045584) popup_snote_single_text_window_t4_ParamLimits

0x82db,	// (0x00045584) popup_snote_single_text_window_t4

0x830f,	// (0x000455b8) popup_snote_single_text_window_t5_ParamLimits

0x830f,	// (0x000455b8) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0004c828) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0004c828) popup_snote_single_text_window_t

0x833e,	// (0x000455e7) bg_popup_window_pane_cp9_ParamLimits

0x833e,	// (0x000455e7) bg_popup_window_pane_cp9

0x826a,	// (0x00045513) popup_snote_single_graphic_window_g1_ParamLimits

0x826a,	// (0x00045513) popup_snote_single_graphic_window_g1

0x834c,	// (0x000455f5) popup_snote_single_graphic_window_g2_ParamLimits

0x834c,	// (0x000455f5) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0004c833) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0004c833) popup_snote_single_graphic_window_g

0x8358,	// (0x00045601) popup_snote_single_graphic_window_t1_ParamLimits

0x8358,	// (0x00045601) popup_snote_single_graphic_window_t1

0x836b,	// (0x00045614) popup_snote_single_graphic_window_t2_ParamLimits

0x836b,	// (0x00045614) popup_snote_single_graphic_window_t2

0x837e,	// (0x00045627) popup_snote_single_graphic_window_t3_ParamLimits

0x837e,	// (0x00045627) popup_snote_single_graphic_window_t3

0x83b7,	// (0x00045660) popup_snote_single_graphic_window_t4_ParamLimits

0x83b7,	// (0x00045660) popup_snote_single_graphic_window_t4

0x83eb,	// (0x00045694) popup_snote_single_graphic_window_t5_ParamLimits

0x83eb,	// (0x00045694) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0004c838) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0004c838) popup_snote_single_graphic_window_t

0xb117,	// (0x000483c0) grid_graphic_popup_pane_ParamLimits

0xb117,	// (0x000483c0) grid_graphic_popup_pane

0xb141,	// (0x000483ea) listscroll_popup_graphic_pane_g1_ParamLimits

0xb141,	// (0x000483ea) listscroll_popup_graphic_pane_g1

0xb155,	// (0x000483fe) listscroll_popup_graphic_pane_g2_ParamLimits

0xb155,	// (0x000483fe) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x0004cc32) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x0004cc32) listscroll_popup_graphic_pane_g

0xb169,	// (0x00048412) scroll_pane_cp5

0xb0a5,	// (0x0004834e) cell_graphic_popup_pane_ParamLimits

0xb0a5,	// (0x0004834e) cell_graphic_popup_pane

0xb086,	// (0x0004832f) cell_graphic_popup_pane_g1

0xb08e,	// (0x00048337) cell_graphic_popup_pane_g2

0x823e,	// (0x000454e7) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x0004cc2b) cell_graphic_popup_pane_g

0xb097,	// (0x00048340) cell_graphic_popup_pane_t2

0x8247,	// (0x000454f0) grid_highlight_pane_cp3

0x842c,	// (0x000456d5) list_gen_pane_ParamLimits

0x842c,	// (0x000456d5) list_gen_pane

0x845e,	// (0x00045707) scroll_pane

0xafde,	// (0x00048287) bg_list_pane_g1_ParamLimits

0xafde,	// (0x00048287) bg_list_pane_g1

0xaffb,	// (0x000482a4) bg_list_pane_g2_ParamLimits

0xaffb,	// (0x000482a4) bg_list_pane_g2

0xb010,	// (0x000482b9) bg_list_pane_g3_ParamLimits

0xb010,	// (0x000482b9) bg_list_pane_g3

0xb024,	// (0x000482cd) bg_list_pane_g4_ParamLimits

0xb024,	// (0x000482cd) bg_list_pane_g4

0xb038,	// (0x000482e1) bg_list_pane_g5_ParamLimits

0xb038,	// (0x000482e1) bg_list_pane_g5

0x0004,

0xf977,	// (0x0004cc20) bg_list_pane_g_ParamLimits

0xf977,	// (0x0004cc20) bg_list_pane_g

0x67ea,	// (0x00043a93) list_double2_graphic_large_graphic_pane_ParamLimits

0x67ea,	// (0x00043a93) list_double2_graphic_large_graphic_pane

0x67ea,	// (0x00043a93) list_double2_graphic_pane_ParamLimits

0x67ea,	// (0x00043a93) list_double2_graphic_pane

0x67ea,	// (0x00043a93) list_double2_large_graphic_pane_ParamLimits

0x67ea,	// (0x00043a93) list_double2_large_graphic_pane

0x67ea,	// (0x00043a93) list_double2_pane_ParamLimits

0x67ea,	// (0x00043a93) list_double2_pane

0x67ea,	// (0x00043a93) list_double_graphic_heading_pane_ParamLimits

0x67ea,	// (0x00043a93) list_double_graphic_heading_pane

0x67ea,	// (0x00043a93) list_double_graphic_pane_ParamLimits

0x67ea,	// (0x00043a93) list_double_graphic_pane

0x67ea,	// (0x00043a93) list_double_heading_pane_ParamLimits

0x67ea,	// (0x00043a93) list_double_heading_pane

0x67ea,	// (0x00043a93) list_double_large_graphic_pane_ParamLimits

0x67ea,	// (0x00043a93) list_double_large_graphic_pane

0x67ea,	// (0x00043a93) list_double_number_pane_ParamLimits

0x67ea,	// (0x00043a93) list_double_number_pane

0x67ea,	// (0x00043a93) list_double_pane_ParamLimits

0x67ea,	// (0x00043a93) list_double_pane

0x67ea,	// (0x00043a93) list_double_time_pane_ParamLimits

0x67ea,	// (0x00043a93) list_double_time_pane

0x67ea,	// (0x00043a93) list_setting_number_pane_ParamLimits

0x67ea,	// (0x00043a93) list_setting_number_pane

0x67ea,	// (0x00043a93) list_setting_pane_ParamLimits

0x67ea,	// (0x00043a93) list_setting_pane

0x6823,	// (0x00043acc) list_single_2graphic_pane_ParamLimits

0x6823,	// (0x00043acc) list_single_2graphic_pane

0x6823,	// (0x00043acc) list_single_graphic_heading_pane_ParamLimits

0x6823,	// (0x00043acc) list_single_graphic_heading_pane

0x6823,	// (0x00043acc) list_single_graphic_pane_ParamLimits

0x6823,	// (0x00043acc) list_single_graphic_pane

0x6823,	// (0x00043acc) list_single_heading_pane_ParamLimits

0x6823,	// (0x00043acc) list_single_heading_pane

0x4dab,	// (0x00042054) list_single_large_graphic_pane_ParamLimits

0x4dab,	// (0x00042054) list_single_large_graphic_pane

0x6823,	// (0x00043acc) list_single_number_heading_pane_ParamLimits

0x6823,	// (0x00043acc) list_single_number_heading_pane

0x6823,	// (0x00043acc) list_single_number_pane_ParamLimits

0x6823,	// (0x00043acc) list_single_number_pane

0x6823,	// (0x00043acc) list_single_pane_ParamLimits

0x6823,	// (0x00043acc) list_single_pane

0x2758,	// (0x0003fa01) list_highlight_pane_cp1

0x8e12,	// (0x000460bb) list_single_pane_g1_ParamLimits

0x8e12,	// (0x000460bb) list_single_pane_g1

0x5801,	// (0x00042aaa) list_single_pane_g2_ParamLimits

0x5801,	// (0x00042aaa) list_single_pane_g2

0x0001,

0xf5ab,	// (0x0004c854) list_single_pane_g_ParamLimits

0xf5ab,	// (0x0004c854) list_single_pane_g

0x4d7d,	// (0x00042026) list_single_pane_t1_ParamLimits

0x4d7d,	// (0x00042026) list_single_pane_t1

0x8e12,	// (0x000460bb) list_single_number_pane_g1_ParamLimits

0x8e12,	// (0x000460bb) list_single_number_pane_g1

0x5801,	// (0x00042aaa) list_single_number_pane_g2_ParamLimits

0x5801,	// (0x00042aaa) list_single_number_pane_g2

0x0001,

0xf5ab,	// (0x0004c854) list_single_number_pane_g_ParamLimits

0xf5ab,	// (0x0004c854) list_single_number_pane_g

0x4c54,	// (0x00041efd) list_single_number_pane_t1_ParamLimits

0x4c54,	// (0x00041efd) list_single_number_pane_t1

0x4d3b,	// (0x00041fe4) list_single_number_pane_t2_ParamLimits

0x4d3b,	// (0x00041fe4) list_single_number_pane_t2

0x0001,

0xf938,	// (0x0004cbe1) list_single_number_pane_t_ParamLimits

0xf938,	// (0x0004cbe1) list_single_number_pane_t

0x4490,	// (0x00041739) list_single_graphic_pane_g1_ParamLimits

0x4490,	// (0x00041739) list_single_graphic_pane_g1

0x8e12,	// (0x000460bb) list_single_graphic_pane_g2_ParamLimits

0x8e12,	// (0x000460bb) list_single_graphic_pane_g2

0x5801,	// (0x00042aaa) list_single_graphic_pane_g3_ParamLimits

0x5801,	// (0x00042aaa) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0004c843) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0004c843) list_single_graphic_pane_g

0x449c,	// (0x00041745) list_single_graphic_pane_t1_ParamLimits

0x449c,	// (0x00041745) list_single_graphic_pane_t1

0x44b2,	// (0x0004175b) list_single_heading_pane_g1_ParamLimits

0x44b2,	// (0x0004175b) list_single_heading_pane_g1

0x5801,	// (0x00042aaa) list_single_heading_pane_g2_ParamLimits

0x5801,	// (0x00042aaa) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0004c84a) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0004c84a) list_single_heading_pane_g

0x44c5,	// (0x0004176e) list_single_heading_pane_t1_ParamLimits

0x44c5,	// (0x0004176e) list_single_heading_pane_t1

0x580d,	// (0x00042ab6) list_single_heading_pane_t2_ParamLimits

0x580d,	// (0x00042ab6) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0004c84f) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0004c84f) list_single_heading_pane_t

0x8e12,	// (0x000460bb) list_single_number_heading_pane_g1_ParamLimits

0x8e12,	// (0x000460bb) list_single_number_heading_pane_g1

0x5801,	// (0x00042aaa) list_single_number_heading_pane_g2_ParamLimits

0x5801,	// (0x00042aaa) list_single_number_heading_pane_g2

0x0001,

0xf5ab,	// (0x0004c854) list_single_number_heading_pane_g_ParamLimits

0xf5ab,	// (0x0004c854) list_single_number_heading_pane_g

0x44db,	// (0x00041784) list_single_number_heading_pane_t1_ParamLimits

0x44db,	// (0x00041784) list_single_number_heading_pane_t1

0x44f1,	// (0x0004179a) list_single_number_heading_pane_t2_ParamLimits

0x44f1,	// (0x0004179a) list_single_number_heading_pane_t2

0x4503,	// (0x000417ac) list_single_number_heading_pane_t3_ParamLimits

0x4503,	// (0x000417ac) list_single_number_heading_pane_t3

0x0002,

0xf5b0,	// (0x0004c859) list_single_number_heading_pane_t_ParamLimits

0xf5b0,	// (0x0004c859) list_single_number_heading_pane_t

0x4515,	// (0x000417be) list_single_graphic_heading_pane_g1_ParamLimits

0x4515,	// (0x000417be) list_single_graphic_heading_pane_g1

0x581f,	// (0x00042ac8) list_single_graphic_heading_pane_g4_ParamLimits

0x581f,	// (0x00042ac8) list_single_graphic_heading_pane_g4

0x5801,	// (0x00042aaa) list_single_graphic_heading_pane_g5_ParamLimits

0x5801,	// (0x00042aaa) list_single_graphic_heading_pane_g5

0x0002,

0xf5b7,	// (0x0004c860) list_single_graphic_heading_pane_g_ParamLimits

0xf5b7,	// (0x0004c860) list_single_graphic_heading_pane_g

0x44db,	// (0x00041784) list_single_graphic_heading_pane_t1_ParamLimits

0x44db,	// (0x00041784) list_single_graphic_heading_pane_t1

0x5830,	// (0x00042ad9) list_single_graphic_heading_pane_t2_ParamLimits

0x5830,	// (0x00042ad9) list_single_graphic_heading_pane_t2

0x0001,

0xf5be,	// (0x0004c867) list_single_graphic_heading_pane_t_ParamLimits

0xf5be,	// (0x0004c867) list_single_graphic_heading_pane_t

0x4521,	// (0x000417ca) list_single_large_graphic_pane_g1_ParamLimits

0x4521,	// (0x000417ca) list_single_large_graphic_pane_g1

0x452d,	// (0x000417d6) list_single_large_graphic_pane_g2_ParamLimits

0x452d,	// (0x000417d6) list_single_large_graphic_pane_g2

0x4539,	// (0x000417e2) list_single_large_graphic_pane_g3_ParamLimits

0x4539,	// (0x000417e2) list_single_large_graphic_pane_g3

0x0002,

0xf5c3,	// (0x0004c86c) list_single_large_graphic_pane_g_ParamLimits

0xf5c3,	// (0x0004c86c) list_single_large_graphic_pane_g

0xa01b,	// (0x000472c4) wait_border_pane_g2_copy1

0x4545,	// (0x000417ee) list_single_large_graphic_pane_g4_cp2

0x454d,	// (0x000417f6) list_single_large_graphic_pane_t1_ParamLimits

0x454d,	// (0x000417f6) list_single_large_graphic_pane_t1

0x5842,	// (0x00042aeb) list_double_pane_g1_ParamLimits

0x5842,	// (0x00042aeb) list_double_pane_g1

0x584e,	// (0x00042af7) list_double_pane_g2_ParamLimits

0x584e,	// (0x00042af7) list_double_pane_g2

0x0001,

0xf5ca,	// (0x0004c873) list_double_pane_g_ParamLimits

0xf5ca,	// (0x0004c873) list_double_pane_g

0x4563,	// (0x0004180c) list_double_pane_t1_ParamLimits

0x4563,	// (0x0004180c) list_double_pane_t1

0x4579,	// (0x00041822) list_double_pane_t2_ParamLimits

0x4579,	// (0x00041822) list_double_pane_t2

0x0001,

0xf5cf,	// (0x0004c878) list_double_pane_t_ParamLimits

0xf5cf,	// (0x0004c878) list_double_pane_t

0x458b,	// (0x00041834) list_double2_pane_g1_ParamLimits

0x458b,	// (0x00041834) list_double2_pane_g1

0x459c,	// (0x00041845) list_double2_pane_g2_ParamLimits

0x459c,	// (0x00041845) list_double2_pane_g2

0x0001,

0xf5d4,	// (0x0004c87d) list_double2_pane_g_ParamLimits

0xf5d4,	// (0x0004c87d) list_double2_pane_g

0x45a8,	// (0x00041851) list_double2_pane_t1_ParamLimits

0x45a8,	// (0x00041851) list_double2_pane_t1

0x45be,	// (0x00041867) list_double2_pane_t2_ParamLimits

0x45be,	// (0x00041867) list_double2_pane_t2

0x0001,

0xf5d9,	// (0x0004c882) list_double2_pane_t_ParamLimits

0xf5d9,	// (0x0004c882) list_double2_pane_t

0x5842,	// (0x00042aeb) list_double_number_pane_g1_ParamLimits

0x5842,	// (0x00042aeb) list_double_number_pane_g1

0x584e,	// (0x00042af7) list_double_number_pane_g2_ParamLimits

0x584e,	// (0x00042af7) list_double_number_pane_g2

0x0001,

0xf5ca,	// (0x0004c873) list_double_number_pane_g_ParamLimits

0xf5ca,	// (0x0004c873) list_double_number_pane_g

0x45d0,	// (0x00041879) list_double_number_pane_t1_ParamLimits

0x45d0,	// (0x00041879) list_double_number_pane_t1

0x45e2,	// (0x0004188b) list_double_number_pane_t2_ParamLimits

0x45e2,	// (0x0004188b) list_double_number_pane_t2

0x45f8,	// (0x000418a1) list_double_number_pane_t3_ParamLimits

0x45f8,	// (0x000418a1) list_double_number_pane_t3

0x0002,

0xf5de,	// (0x0004c887) list_double_number_pane_t_ParamLimits

0xf5de,	// (0x0004c887) list_double_number_pane_t

0x460a,	// (0x000418b3) list_double_graphic_pane_g1_ParamLimits

0x460a,	// (0x000418b3) list_double_graphic_pane_g1

0x585a,	// (0x00042b03) list_double_graphic_pane_g2_ParamLimits

0x585a,	// (0x00042b03) list_double_graphic_pane_g2

0x5869,	// (0x00042b12) list_double_graphic_pane_g3_ParamLimits

0x5869,	// (0x00042b12) list_double_graphic_pane_g3

0x0003,

0xf5e5,	// (0x0004c88e) list_double_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0004c88e) list_double_graphic_pane_g

0x4622,	// (0x000418cb) list_double_graphic_pane_t1_ParamLimits

0x4622,	// (0x000418cb) list_double_graphic_pane_t1

0x4638,	// (0x000418e1) list_double_graphic_pane_t2_ParamLimits

0x4638,	// (0x000418e1) list_double_graphic_pane_t2

0x0001,

0xf5ee,	// (0x0004c897) list_double_graphic_pane_t_ParamLimits

0xf5ee,	// (0x0004c897) list_double_graphic_pane_t

0x464a,	// (0x000418f3) list_double2_graphic_pane_g1_ParamLimits

0x464a,	// (0x000418f3) list_double2_graphic_pane_g1

0x8492,	// (0x0004573b) list_double2_graphic_pane_g2_ParamLimits

0x8492,	// (0x0004573b) list_double2_graphic_pane_g2

0x5875,	// (0x00042b1e) list_double2_graphic_pane_g3_ParamLimits

0x5875,	// (0x00042b1e) list_double2_graphic_pane_g3

0x0002,

0xf5f3,	// (0x0004c89c) list_double2_graphic_pane_g_ParamLimits

0xf5f3,	// (0x0004c89c) list_double2_graphic_pane_g

0x4656,	// (0x000418ff) list_double2_graphic_pane_t1_ParamLimits

0x4656,	// (0x000418ff) list_double2_graphic_pane_t1

0x466c,	// (0x00041915) list_double2_graphic_pane_t2_ParamLimits

0x466c,	// (0x00041915) list_double2_graphic_pane_t2

0x0001,

0xf5fa,	// (0x0004c8a3) list_double2_graphic_pane_t_ParamLimits

0xf5fa,	// (0x0004c8a3) list_double2_graphic_pane_t

0x467e,	// (0x00041927) list_double_large_graphic_pane_g1_ParamLimits

0x467e,	// (0x00041927) list_double_large_graphic_pane_g1

0x4691,	// (0x0004193a) list_double_large_graphic_pane_g2_ParamLimits

0x4691,	// (0x0004193a) list_double_large_graphic_pane_g2

0x584e,	// (0x00042af7) list_double_large_graphic_pane_g3_ParamLimits

0x584e,	// (0x00042af7) list_double_large_graphic_pane_g3

0x46a7,	// (0x00041950) list_double_large_graphic_pane_g4_ParamLimits

0x46a7,	// (0x00041950) list_double_large_graphic_pane_g4

0x0004,

0xf5ff,	// (0x0004c8a8) list_double_large_graphic_pane_g_ParamLimits

0xf5ff,	// (0x0004c8a8) list_double_large_graphic_pane_g

0x46b8,	// (0x00041961) list_double_large_graphic_pane_t1_ParamLimits

0x46b8,	// (0x00041961) list_double_large_graphic_pane_t1

0x46d1,	// (0x0004197a) list_double_large_graphic_pane_t2_ParamLimits

0x46d1,	// (0x0004197a) list_double_large_graphic_pane_t2

0x0001,

0xf60a,	// (0x0004c8b3) list_double_large_graphic_pane_t_ParamLimits

0xf60a,	// (0x0004c8b3) list_double_large_graphic_pane_t

0x46e3,	// (0x0004198c) list_double2_large_graphic_pane_g1_ParamLimits

0x46e3,	// (0x0004198c) list_double2_large_graphic_pane_g1

0x46ef,	// (0x00041998) list_double2_large_graphic_pane_g2_ParamLimits

0x46ef,	// (0x00041998) list_double2_large_graphic_pane_g2

0x5875,	// (0x00042b1e) list_double2_large_graphic_pane_g3_ParamLimits

0x5875,	// (0x00042b1e) list_double2_large_graphic_pane_g3

0x0002,

0xf60f,	// (0x0004c8b8) list_double2_large_graphic_pane_g_ParamLimits

0xf60f,	// (0x0004c8b8) list_double2_large_graphic_pane_g

0x4700,	// (0x000419a9) list_double2_large_graphic_pane_t1_ParamLimits

0x4700,	// (0x000419a9) list_double2_large_graphic_pane_t1

0x4716,	// (0x000419bf) list_double2_large_graphic_pane_t2_ParamLimits

0x4716,	// (0x000419bf) list_double2_large_graphic_pane_t2

0x0001,

0xf616,	// (0x0004c8bf) list_double2_large_graphic_pane_t_ParamLimits

0xf616,	// (0x0004c8bf) list_double2_large_graphic_pane_t

0x4728,	// (0x000419d1) list_double_heading_pane_g1_ParamLimits

0x4728,	// (0x000419d1) list_double_heading_pane_g1

0x4739,	// (0x000419e2) list_double_heading_pane_g2_ParamLimits

0x4739,	// (0x000419e2) list_double_heading_pane_g2

0x0001,

0xf61b,	// (0x0004c8c4) list_double_heading_pane_g_ParamLimits

0xf61b,	// (0x0004c8c4) list_double_heading_pane_g

0x4745,	// (0x000419ee) list_double_heading_pane_t1_ParamLimits

0x4745,	// (0x000419ee) list_double_heading_pane_t1

0x45be,	// (0x00041867) list_double_heading_pane_t2_ParamLimits

0x45be,	// (0x00041867) list_double_heading_pane_t2

0x0001,

0xf620,	// (0x0004c8c9) list_double_heading_pane_t_ParamLimits

0xf620,	// (0x0004c8c9) list_double_heading_pane_t

0x475b,	// (0x00041a04) list_double_graphic_heading_pane_g1_ParamLimits

0x475b,	// (0x00041a04) list_double_graphic_heading_pane_g1

0x4728,	// (0x000419d1) list_double_graphic_heading_pane_g2_ParamLimits

0x4728,	// (0x000419d1) list_double_graphic_heading_pane_g2

0x4739,	// (0x000419e2) list_double_graphic_heading_pane_g3_ParamLimits

0x4739,	// (0x000419e2) list_double_graphic_heading_pane_g3

0x0002,

0xf625,	// (0x0004c8ce) list_double_graphic_heading_pane_g_ParamLimits

0xf625,	// (0x0004c8ce) list_double_graphic_heading_pane_g

0x4767,	// (0x00041a10) list_double_graphic_heading_pane_t1_ParamLimits

0x4767,	// (0x00041a10) list_double_graphic_heading_pane_t1

0x466c,	// (0x00041915) list_double_graphic_heading_pane_t2_ParamLimits

0x466c,	// (0x00041915) list_double_graphic_heading_pane_t2

0x0001,

0xf62c,	// (0x0004c8d5) list_double_graphic_heading_pane_t_ParamLimits

0xf62c,	// (0x0004c8d5) list_double_graphic_heading_pane_t

0x477d,	// (0x00041a26) list_double_time_pane_g1_ParamLimits

0x477d,	// (0x00041a26) list_double_time_pane_g1

0x478e,	// (0x00041a37) list_double_time_pane_g2_ParamLimits

0x478e,	// (0x00041a37) list_double_time_pane_g2

0x0001,

0xf631,	// (0x0004c8da) list_double_time_pane_g_ParamLimits

0xf631,	// (0x0004c8da) list_double_time_pane_g

0x479a,	// (0x00041a43) list_double_time_pane_t1_ParamLimits

0x479a,	// (0x00041a43) list_double_time_pane_t1

0x47b0,	// (0x00041a59) list_double_time_pane_t2_ParamLimits

0x47b0,	// (0x00041a59) list_double_time_pane_t2

0x47c2,	// (0x00041a6b) list_double_time_pane_t3_ParamLimits

0x47c2,	// (0x00041a6b) list_double_time_pane_t3

0x47d4,	// (0x00041a7d) list_double_time_pane_t4_ParamLimits

0x47d4,	// (0x00041a7d) list_double_time_pane_t4

0x0003,

0xf636,	// (0x0004c8df) list_double_time_pane_t_ParamLimits

0xf636,	// (0x0004c8df) list_double_time_pane_t

0x47e6,	// (0x00041a8f) list_setting_pane_g1_ParamLimits

0x47e6,	// (0x00041a8f) list_setting_pane_g1

0x47f2,	// (0x00041a9b) list_setting_pane_g2_ParamLimits

0x47f2,	// (0x00041a9b) list_setting_pane_g2

0x0001,

0xf63f,	// (0x0004c8e8) list_setting_pane_g_ParamLimits

0xf63f,	// (0x0004c8e8) list_setting_pane_g

0x47fe,	// (0x00041aa7) list_setting_pane_t1_ParamLimits

0x47fe,	// (0x00041aa7) list_setting_pane_t1

0x4818,	// (0x00041ac1) list_setting_pane_t2_ParamLimits

0x4818,	// (0x00041ac1) list_setting_pane_t2

0x0002,

0xf644,	// (0x0004c8ed) list_setting_pane_t_ParamLimits

0xf644,	// (0x0004c8ed) list_setting_pane_t

0x4857,	// (0x00041b00) set_value_pane_cp_ParamLimits

0x4857,	// (0x00041b00) set_value_pane_cp

0x4863,	// (0x00041b0c) list_setting_number_pane_g1_ParamLimits

0x4863,	// (0x00041b0c) list_setting_number_pane_g1

0x486f,	// (0x00041b18) list_setting_number_pane_g2_ParamLimits

0x486f,	// (0x00041b18) list_setting_number_pane_g2

0x0001,

0xf64b,	// (0x0004c8f4) list_setting_number_pane_g_ParamLimits

0xf64b,	// (0x0004c8f4) list_setting_number_pane_g

0x487b,	// (0x00041b24) list_setting_number_pane_t1_ParamLimits

0x487b,	// (0x00041b24) list_setting_number_pane_t1

0x4894,	// (0x00041b3d) list_setting_number_pane_t2_ParamLimits

0x4894,	// (0x00041b3d) list_setting_number_pane_t2

0x48ae,	// (0x00041b57) list_setting_number_pane_t3_ParamLimits

0x48ae,	// (0x00041b57) list_setting_number_pane_t3

0x0003,

0xf650,	// (0x0004c8f9) list_setting_number_pane_t_ParamLimits

0xf650,	// (0x0004c8f9) list_setting_number_pane_t

0x4857,	// (0x00041b00) set_value_pane_ParamLimits

0x4857,	// (0x00041b00) set_value_pane

0x849e,	// (0x00045747) bg_set_opt_pane_ParamLimits

0x849e,	// (0x00045747) bg_set_opt_pane

0x48f1,	// (0x00041b9a) set_value_pane_t1

0x84bf,	// (0x00045768) slider_set_pane_cp3

0x84c8,	// (0x00045771) volume_small_pane_cp

0x84d1,	// (0x0004577a) list_form_gen_pane

0x84da,	// (0x00045783) scroll_pane_cp8

0x4907,	// (0x00041bb0) form_field_data_pane_ParamLimits

0x4907,	// (0x00041bb0) form_field_data_pane

0x492b,	// (0x00041bd4) form_field_data_wide_pane_ParamLimits

0x492b,	// (0x00041bd4) form_field_data_wide_pane

0x494e,	// (0x00041bf7) form_field_popup_pane_ParamLimits

0x494e,	// (0x00041bf7) form_field_popup_pane

0x496e,	// (0x00041c17) form_field_popup_wide_pane_ParamLimits

0x496e,	// (0x00041c17) form_field_popup_wide_pane

0x498d,	// (0x00041c36) form_field_slider_pane_ParamLimits

0x498d,	// (0x00041c36) form_field_slider_pane

0x49a0,	// (0x00041c49) form_field_slider_wide_pane_ParamLimits

0x49a0,	// (0x00041c49) form_field_slider_wide_pane

0x84eb,	// (0x00045794) data_form_pane

0x49bd,	// (0x00041c66) form_field_data_pane_t1

0x84f7,	// (0x000457a0) input_focus_pane

0x49d5,	// (0x00041c7e) data_form_wide_pane

0x49f2,	// (0x00041c9b) form_field_data_wide_pane_t1

0x825c,	// (0x00045505) input_focus_pane_cp6

0x4a14,	// (0x00041cbd) form_field_popup_pane_t1

0x84f7,	// (0x000457a0) input_focus_pane_cp7

0x8519,	// (0x000457c2) list_form_pane

0x4a34,	// (0x00041cdd) form_field_popup_wide_pane_t1

0x84f7,	// (0x000457a0) input_focus_pane_cp8

0x8525,	// (0x000457ce) list_form_wide_pane

0x4a51,	// (0x00041cfa) form_field_slider_pane_t1_ParamLimits

0x4a51,	// (0x00041cfa) form_field_slider_pane_t1

0x4a67,	// (0x00041d10) form_field_slider_pane_t2_ParamLimits

0x4a67,	// (0x00041d10) form_field_slider_pane_t2

0x0001,

0xf660,	// (0x0004c909) form_field_slider_pane_t_ParamLimits

0xf660,	// (0x0004c909) form_field_slider_pane_t

0x7ed9,	// (0x00045182) input_focus_pane_cp9_ParamLimits

0x7ed9,	// (0x00045182) input_focus_pane_cp9

0x4a7c,	// (0x00041d25) slider_cont_pane_ParamLimits

0x4a7c,	// (0x00041d25) slider_cont_pane

0x8531,	// (0x000457da) form_field_slider_wide_pane_t1_ParamLimits

0x8531,	// (0x000457da) form_field_slider_wide_pane_t1

0x4a90,	// (0x00041d39) form_field_slider_wide_pane_t2_ParamLimits

0x4a90,	// (0x00041d39) form_field_slider_wide_pane_t2

0x0001,

0xf665,	// (0x0004c90e) form_field_slider_wide_pane_t_ParamLimits

0xf665,	// (0x0004c90e) form_field_slider_wide_pane_t

0x7ed9,	// (0x00045182) input_focus_pane_cp10_ParamLimits

0x7ed9,	// (0x00045182) input_focus_pane_cp10

0x4aa2,	// (0x00041d4b) slider_cont_pane_cp1_ParamLimits

0x4aa2,	// (0x00041d4b) slider_cont_pane_cp1

0x4ab6,	// (0x00041d5f) slider_form_pane_cp

0x8543,	// (0x000457ec) input_focus_pane_g1

0x854b,	// (0x000457f4) input_focus_pane_g2

0x8553,	// (0x000457fc) input_focus_pane_g3

0x855b,	// (0x00045804) input_focus_pane_g4

0x8563,	// (0x0004580c) input_focus_pane_g5

0x856b,	// (0x00045814) input_focus_pane_g6

0x8573,	// (0x0004581c) input_focus_pane_g7

0x857b,	// (0x00045824) input_focus_pane_g8

0x8583,	// (0x0004582c) input_focus_pane_g9

0x274e,	// (0x0003f9f7) input_focus_pane_g10

0x0009,

0xf66a,	// (0x0004c913) input_focus_pane_g

0xa024,	// (0x000472cd) wait_border_pane_g3_copy1

0x4abe,	// (0x00041d67) data_form_pane_t1

0x274e,	// (0x0003f9f7) wait_anim_pane_g1_copy1

0x4d4d,	// (0x00041ff6) data_form_wide_pane_t1

0x4ad9,	// (0x00041d82) list_form_graphic_pane_cp_ParamLimits

0x4ad9,	// (0x00041d82) list_form_graphic_pane_cp

0xaf34,	// (0x000481dd) slider_form_pane_g1

0xaf3d,	// (0x000481e6) slider_form_pane_g2

0x0006,

0xf968,	// (0x0004cc11) slider_form_pane_g

0x4af2,	// (0x00041d9b) list_form_graphic_pane_ParamLimits

0x4af2,	// (0x00041d9b) list_form_graphic_pane

0x4b0e,	// (0x00041db7) list_form_graphic_pane_g1

0x4b16,	// (0x00041dbf) list_form_graphic_pane_t1_ParamLimits

0x4b16,	// (0x00041dbf) list_form_graphic_pane_t1

0x7c5e,	// (0x00044f07) list_highlight_pane_cp5_ParamLimits

0x7c5e,	// (0x00044f07) list_highlight_pane_cp5

0x4b2b,	// (0x00041dd4) find_pane_g1

0x858b,	// (0x00045834) input_find_pane

0x4b34,	// (0x00041ddd) input_find_pane_g1_ParamLimits

0x4b34,	// (0x00041ddd) input_find_pane_g1

0x4b40,	// (0x00041de9) input_find_pane_t1_ParamLimits

0x4b40,	// (0x00041de9) input_find_pane_t1

0x4b55,	// (0x00041dfe) input_find_pane_t2_ParamLimits

0x4b55,	// (0x00041dfe) input_find_pane_t2

0x0001,

0xf67f,	// (0x0004c928) input_find_pane_t_ParamLimits

0xf67f,	// (0x0004c928) input_find_pane_t

0x8594,	// (0x0004583d) input_focus_pane_cp5_ParamLimits

0x8594,	// (0x0004583d) input_focus_pane_cp5

0x85b3,	// (0x0004585c) bg_popup_window_pane_cp2_ParamLimits

0x85b3,	// (0x0004585c) bg_popup_window_pane_cp2

0x85c0,	// (0x00045869) listscroll_menu_pane_ParamLimits

0x85c0,	// (0x00045869) listscroll_menu_pane

0x85cc,	// (0x00045875) popup_submenu_window_ParamLimits

0x85cc,	// (0x00045875) popup_submenu_window

0x85f8,	// (0x000458a1) find_popup_pane_g1

0x8600,	// (0x000458a9) input_popup_find_pane_cp

0x860a,	// (0x000458b3) input_focus_pane_cp4_ParamLimits

0x860a,	// (0x000458b3) input_focus_pane_cp4

0x8624,	// (0x000458cd) input_popup_find_pane_t1_ParamLimits

0x8624,	// (0x000458cd) input_popup_find_pane_t1

0x2758,	// (0x0003fa01) bg_popup_sub_pane_cp

0x8652,	// (0x000458fb) listscroll_popup_sub_pane

0x865a,	// (0x00045903) list_submenu_pane_ParamLimits

0x865a,	// (0x00045903) list_submenu_pane

0x866b,	// (0x00045914) scroll_pane_cp4

0x8673,	// (0x0004591c) list_single_popup_submenu_pane_ParamLimits

0x8673,	// (0x0004591c) list_single_popup_submenu_pane

0x8687,	// (0x00045930) list_single_popup_submenu_pane_g1

0x868f,	// (0x00045938) list_single_popup_submenu_pane_t1_ParamLimits

0x868f,	// (0x00045938) list_single_popup_submenu_pane_t1

0x7c5e,	// (0x00044f07) bg_active_tab_pane_cp1_ParamLimits

0x7c5e,	// (0x00044f07) bg_active_tab_pane_cp1

0x86a4,	// (0x0004594d) tabs_2_active_pane_g1

0x86ac,	// (0x00045955) tabs_2_active_pane_t1

0x7c5e,	// (0x00044f07) bg_passive_tab_pane_cp1_ParamLimits

0x7c5e,	// (0x00044f07) bg_passive_tab_pane_cp1

0x86a4,	// (0x0004594d) tabs_2_passive_pane_g1

0x86ac,	// (0x00045955) tabs_2_passive_pane_t1

0x86be,	// (0x00045967) bg_active_tab_pane_cp4

0x86cc,	// (0x00045975) tabs_2_long_active_pane_t1

0x86df,	// (0x00045988) bg_passive_tab_pane_cp4

0x64cb,	// (0x00043774) list_single_midp_graphic_pane_g4_ParamLimits

0x86be,	// (0x00045967) bg_active_tab_pane_cp5

0x86eb,	// (0x00045994) tabs_3_long_active_pane_t1

0x86df,	// (0x00045988) bg_passive_tab_pane_cp5

0x64cb,	// (0x00043774) list_single_midp_graphic_pane_g4

0x7c5e,	// (0x00044f07) bg_popup_window_pane_cp13_ParamLimits

0x7c5e,	// (0x00044f07) bg_popup_window_pane_cp13

0x8706,	// (0x000459af) listscroll_popup_fast_pane_ParamLimits

0x8706,	// (0x000459af) listscroll_popup_fast_pane

0x8715,	// (0x000459be) grid_popup_fast_pane_ParamLimits

0x8715,	// (0x000459be) grid_popup_fast_pane

0x8727,	// (0x000459d0) scroll_pane_cp9_ParamLimits

0x8727,	// (0x000459d0) scroll_pane_cp9

0xc859,	// (0x00049b02) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc859,	// (0x00049b02) list_single_graphic_hl_pane_t1_cp2

0x874b,	// (0x000459f4) input_focus_pane_cp20_ParamLimits

0x874b,	// (0x000459f4) input_focus_pane_cp20

0x8759,	// (0x00045a02) query_popup_data_pane_t1_ParamLimits

0x8759,	// (0x00045a02) query_popup_data_pane_t1

0x876c,	// (0x00045a15) query_popup_data_pane_t2_ParamLimits

0x876c,	// (0x00045a15) query_popup_data_pane_t2

0x87b2,	// (0x00045a5b) query_popup_data_pane_t3_ParamLimits

0x87b2,	// (0x00045a5b) query_popup_data_pane_t3

0x87f3,	// (0x00045a9c) query_popup_data_pane_t4_ParamLimits

0x87f3,	// (0x00045a9c) query_popup_data_pane_t4

0x882f,	// (0x00045ad8) query_popup_data_pane_t5_ParamLimits

0x882f,	// (0x00045ad8) query_popup_data_pane_t5

0x0004,

0xf684,	// (0x0004c92d) query_popup_data_pane_t_ParamLimits

0xf684,	// (0x0004c92d) query_popup_data_pane_t

0x8543,	// (0x000457ec) bg_set_opt_pane_g1

0x854b,	// (0x000457f4) bg_set_opt_pane_g2

0x8553,	// (0x000457fc) bg_set_opt_pane_g3

0x855b,	// (0x00045804) bg_set_opt_pane_g4

0x8563,	// (0x0004580c) bg_set_opt_pane_g5

0x856b,	// (0x00045814) bg_set_opt_pane_g6

0x8573,	// (0x0004581c) bg_set_opt_pane_g7

0x857b,	// (0x00045824) bg_set_opt_pane_g8

0x8583,	// (0x0004582c) bg_set_opt_pane_g9

0x0008,

0xf68f,	// (0x0004c938) bg_set_opt_pane_g

0x5b4f,	// (0x00042df8) control_top_pane_stacon_ParamLimits

0x5b4f,	// (0x00042df8) control_top_pane_stacon

0x5ba2,	// (0x00042e4b) signal_pane_stacon_ParamLimits

0x5ba2,	// (0x00042e4b) signal_pane_stacon

0x8e46,	// (0x000460ef) stacon_top_pane_g1_ParamLimits

0x8e46,	// (0x000460ef) stacon_top_pane_g1

0x5bc7,	// (0x00042e70) title_pane_stacon_ParamLimits

0x5bc7,	// (0x00042e70) title_pane_stacon

0x5bf1,	// (0x00042e9a) uni_indicator_pane_stacon_ParamLimits

0x5bf1,	// (0x00042e9a) uni_indicator_pane_stacon

0x5c06,	// (0x00042eaf) battery_pane_stacon_ParamLimits

0x5c06,	// (0x00042eaf) battery_pane_stacon

0x5c4a,	// (0x00042ef3) control_bottom_pane_stacon_ParamLimits

0x5c4a,	// (0x00042ef3) control_bottom_pane_stacon

0x5c6d,	// (0x00042f16) navi_pane_stacon_ParamLimits

0x5c6d,	// (0x00042f16) navi_pane_stacon

0x8e68,	// (0x00046111) stacon_bottom_pane_g1_ParamLimits

0x8e68,	// (0x00046111) stacon_bottom_pane_g1

0x5896,	// (0x00042b3f) aid_levels_signal_lsc_ParamLimits

0x5896,	// (0x00042b3f) aid_levels_signal_lsc

0x58ac,	// (0x00042b55) signal_pane_stacon_g1_ParamLimits

0x58ac,	// (0x00042b55) signal_pane_stacon_g1

0x58c0,	// (0x00042b69) signal_pane_stacon_g2_ParamLimits

0x58c0,	// (0x00042b69) signal_pane_stacon_g2

0x0001,

0xf6a2,	// (0x0004c94b) signal_pane_stacon_g_ParamLimits

0xf6a2,	// (0x0004c94b) signal_pane_stacon_g

0x58f5,	// (0x00042b9e) title_pane_stacon_t1_ParamLimits

0x58f5,	// (0x00042b9e) title_pane_stacon_t1

0x8873,	// (0x00045b1c) uni_indicator_pane_stacon_g1

0x887d,	// (0x00045b26) uni_indicator_pane_stacon_g2

0x8887,	// (0x00045b30) uni_indicator_pane_stacon_g3

0x8891,	// (0x00045b3a) uni_indicator_pane_stacon_g4

0x0003,

0xf6ae,	// (0x0004c957) uni_indicator_pane_stacon_g

0x591a,	// (0x00042bc3) control_top_pane_stacon_g1

0x5922,	// (0x00042bcb) control_top_pane_stacon_t1_ParamLimits

0x5922,	// (0x00042bcb) control_top_pane_stacon_t1

0x5959,	// (0x00042c02) aid_levels_battery_lsc_ParamLimits

0x5959,	// (0x00042c02) aid_levels_battery_lsc

0x5970,	// (0x00042c19) battery_pane_stacon_g1_ParamLimits

0x5970,	// (0x00042c19) battery_pane_stacon_g1

0x5983,	// (0x00042c2c) battery_pane_stacon_g2_ParamLimits

0x5983,	// (0x00042c2c) battery_pane_stacon_g2

0x0001,

0xf6b7,	// (0x0004c960) battery_pane_stacon_g_ParamLimits

0xf6b7,	// (0x0004c960) battery_pane_stacon_g

0x59c1,	// (0x00042c6a) navi_icon_pane_stacon

0x59d5,	// (0x00042c7e) navi_navi_pane_stacon

0x59c1,	// (0x00042c6a) navi_text_pane_stacon

0x591a,	// (0x00042bc3) control_bottom_pane_stacon_g1

0x59e9,	// (0x00042c92) control_bottom_pane_stacon_t1_ParamLimits

0x59e9,	// (0x00042c92) control_bottom_pane_stacon_t1

0x88b5,	// (0x00045b5e) grid_app_pane_ParamLimits

0x88b5,	// (0x00045b5e) grid_app_pane

0x88d7,	// (0x00045b80) scroll_pane_cp15_ParamLimits

0x88d7,	// (0x00045b80) scroll_pane_cp15

0x88ea,	// (0x00045b93) cell_app_pane_ParamLimits

0x88ea,	// (0x00045b93) cell_app_pane

0x8912,	// (0x00045bbb) cell_app_pane_g1_ParamLimits

0x8912,	// (0x00045bbb) cell_app_pane_g1

0x8936,	// (0x00045bdf) cell_app_pane_g2_ParamLimits

0x8936,	// (0x00045bdf) cell_app_pane_g2

0x0001,

0xf6bc,	// (0x0004c965) cell_app_pane_g_ParamLimits

0xf6bc,	// (0x0004c965) cell_app_pane_g

0x8942,	// (0x00045beb) cell_app_pane_t1_ParamLimits

0x8942,	// (0x00045beb) cell_app_pane_t1

0x8959,	// (0x00045c02) grid_highlight_pane_ParamLimits

0x8959,	// (0x00045c02) grid_highlight_pane

0x8543,	// (0x000457ec) cell_highlight_pane_g1

0x854b,	// (0x000457f4) cell_highlight_pane_g2

0x8553,	// (0x000457fc) cell_highlight_pane_g3

0x855b,	// (0x00045804) cell_highlight_pane_g4

0x8563,	// (0x0004580c) cell_highlight_pane_g5

0x856b,	// (0x00045814) cell_highlight_pane_g6

0x8573,	// (0x0004581c) cell_highlight_pane_g7

0x857b,	// (0x00045824) cell_highlight_pane_g8

0x8583,	// (0x0004582c) cell_highlight_pane_g9

0x274e,	// (0x0003f9f7) cell_highlight_pane_g10

0x0009,

0xf66a,	// (0x0004c913) cell_highlight_pane_g

0x896a,	// (0x00045c13) bg_scroll_pane

0x5a33,	// (0x00042cdc) scroll_handle_pane

0x89b1,	// (0x00045c5a) scroll_bg_pane_g1

0x89c6,	// (0x00045c6f) scroll_bg_pane_g2

0x89de,	// (0x00045c87) scroll_bg_pane_g3

0x0002,

0xf6c1,	// (0x0004c96a) scroll_bg_pane_g

0x89f3,	// (0x00045c9c) scroll_handle_focus_pane_ParamLimits

0x89f3,	// (0x00045c9c) scroll_handle_focus_pane

0x89b1,	// (0x00045c5a) scroll_handle_pane_g1

0x8a00,	// (0x00045ca9) scroll_handle_pane_g2

0x89de,	// (0x00045c87) scroll_handle_pane_g3

0x0002,

0xf6c8,	// (0x0004c971) scroll_handle_pane_g

0x860a,	// (0x000458b3) bg_popup_sub_pane_cp21_ParamLimits

0x860a,	// (0x000458b3) bg_popup_sub_pane_cp21

0x8a14,	// (0x00045cbd) popup_fep_japan_predictive_window_t1_ParamLimits

0x8a14,	// (0x00045cbd) popup_fep_japan_predictive_window_t1

0x8a2e,	// (0x00045cd7) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a2e,	// (0x00045cd7) popup_fep_japan_predictive_window_t2

0x8a61,	// (0x00045d0a) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a61,	// (0x00045d0a) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cf,	// (0x0004c978) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cf,	// (0x0004c978) popup_fep_japan_predictive_window_t

0x2758,	// (0x0003fa01) bg_popup_sub_pane_cp23

0x8a98,	// (0x00045d41) listscroll_japin_cand_pane

0x8aa0,	// (0x00045d49) popup_fep_japan_candidate_window_t1

0x8aae,	// (0x00045d57) candidate_pane_ParamLimits

0x8aae,	// (0x00045d57) candidate_pane

0x8ac0,	// (0x00045d69) scroll_pane_cp30

0x8ac8,	// (0x00045d71) list_single_popup_jap_candidate_pane_ParamLimits

0x8ac8,	// (0x00045d71) list_single_popup_jap_candidate_pane

0x2758,	// (0x0003fa01) list_highlight_pane_cp30

0x8add,	// (0x00045d86) list_single_popup_jap_candidate_pane_t1

0x8aec,	// (0x00045d95) level_1_signal

0x8afe,	// (0x00045da7) level_2_signal

0x8b11,	// (0x00045dba) level_3_signal

0x8b24,	// (0x00045dcd) level_4_signal

0x8b37,	// (0x00045de0) level_5_signal

0x8b4a,	// (0x00045df3) level_6_signal

0x8b5d,	// (0x00045e06) level_7_signal

0x8aec,	// (0x00045d95) level_1_battery

0x8afe,	// (0x00045da7) level_2_battery

0x8b11,	// (0x00045dba) level_3_battery

0x8b24,	// (0x00045dcd) level_4_battery

0x8b37,	// (0x00045de0) level_5_battery

0x8b4a,	// (0x00045df3) level_6_battery

0x8b5d,	// (0x00045e06) level_7_battery

0x8b88,	// (0x00045e31) list_menu_pane_ParamLimits

0x8b88,	// (0x00045e31) list_menu_pane

0x8b9e,	// (0x00045e47) scroll_pane_cp25_ParamLimits

0x8b9e,	// (0x00045e47) scroll_pane_cp25

0x8bb7,	// (0x00045e60) list_double2_graphic_pane_cp2_ParamLimits

0x8bb7,	// (0x00045e60) list_double2_graphic_pane_cp2

0x8bb7,	// (0x00045e60) list_double2_large_graphic_pane_cp2_ParamLimits

0x8bb7,	// (0x00045e60) list_double2_large_graphic_pane_cp2

0x8bb7,	// (0x00045e60) list_double2_pane_cp2_ParamLimits

0x8bb7,	// (0x00045e60) list_double2_pane_cp2

0x8bb7,	// (0x00045e60) list_double_graphic_pane_cp2_ParamLimits

0x8bb7,	// (0x00045e60) list_double_graphic_pane_cp2

0x8bb7,	// (0x00045e60) list_double_large_graphic_pane_cp2_ParamLimits

0x8bb7,	// (0x00045e60) list_double_large_graphic_pane_cp2

0x8bb7,	// (0x00045e60) list_double_number_pane_cp2_ParamLimits

0x8bb7,	// (0x00045e60) list_double_number_pane_cp2

0x8bb7,	// (0x00045e60) list_double_pane_cp2_ParamLimits

0x8bb7,	// (0x00045e60) list_double_pane_cp2

0x8bdb,	// (0x00045e84) list_single_2graphic_pane_cp2_ParamLimits

0x8bdb,	// (0x00045e84) list_single_2graphic_pane_cp2

0x8bdb,	// (0x00045e84) list_single_graphic_heading_pane_cp2_ParamLimits

0x8bdb,	// (0x00045e84) list_single_graphic_heading_pane_cp2

0x8bdb,	// (0x00045e84) list_single_graphic_pane_cp2_ParamLimits

0x8bdb,	// (0x00045e84) list_single_graphic_pane_cp2

0x8bdb,	// (0x00045e84) list_single_heading_pane_cp2_ParamLimits

0x8bdb,	// (0x00045e84) list_single_heading_pane_cp2

0x8bf4,	// (0x00045e9d) list_single_large_graphic_pane_cp2_ParamLimits

0x8bf4,	// (0x00045e9d) list_single_large_graphic_pane_cp2

0x8bdb,	// (0x00045e84) list_single_number_heading_pane_cp2_ParamLimits

0x8bdb,	// (0x00045e84) list_single_number_heading_pane_cp2

0x8bdb,	// (0x00045e84) list_single_number_pane_cp2_ParamLimits

0x8bdb,	// (0x00045e84) list_single_number_pane_cp2

0x8c05,	// (0x00045eae) list_single_pane_cp2_ParamLimits

0x8c05,	// (0x00045eae) list_single_pane_cp2

0x8c89,	// (0x00045f32) bg_popup_sub_pane_cp22

0x5ae5,	// (0x00042d8e) popup_side_volume_key_window_g1

0x5b0f,	// (0x00042db8) popup_side_volume_key_window_t1

0x5b2b,	// (0x00042dd4) volume_small_pane_cp1

0x7ed9,	// (0x00045182) bg_popup_sub_pane_cp24_ParamLimits

0x7ed9,	// (0x00045182) bg_popup_sub_pane_cp24

0x8c9f,	// (0x00045f48) fep_china_uni_candidate_pane_ParamLimits

0x8c9f,	// (0x00045f48) fep_china_uni_candidate_pane

0x8cb3,	// (0x00045f5c) fep_china_uni_entry_pane

0x8cc3,	// (0x00045f6c) popup_fep_china_uni_window_g1

0x8cdf,	// (0x00045f88) fep_china_uni_entry_pane_g1

0x8ce7,	// (0x00045f90) fep_china_uni_entry_pane_g2

0x0001,

0xf700,	// (0x0004c9a9) fep_china_uni_entry_pane_g

0x8cef,	// (0x00045f98) fep_entry_item_pane

0x8cf9,	// (0x00045fa2) fep_candidate_item_pane

0x8d01,	// (0x00045faa) fep_china_uni_candidate_pane_g1

0x8d09,	// (0x00045fb2) fep_china_uni_candidate_pane_g2

0x8d11,	// (0x00045fba) fep_china_uni_candidate_pane_g3

0x8d19,	// (0x00045fc2) fep_china_uni_candidate_pane_g4

0x0003,

0xf705,	// (0x0004c9ae) fep_china_uni_candidate_pane_g

0x274e,	// (0x0003f9f7) fep_entry_item_pane_g1

0x8d21,	// (0x00045fca) fep_entry_item_pane_t1_ParamLimits

0x8d21,	// (0x00045fca) fep_entry_item_pane_t1

0x8d37,	// (0x00045fe0) fep_candidate_item_pane_t1_ParamLimits

0x8d37,	// (0x00045fe0) fep_candidate_item_pane_t1

0x8d4c,	// (0x00045ff5) fep_candidate_item_pane_t2_ParamLimits

0x8d4c,	// (0x00045ff5) fep_candidate_item_pane_t2

0x0001,

0xf70e,	// (0x0004c9b7) fep_candidate_item_pane_t_ParamLimits

0xf70e,	// (0x0004c9b7) fep_candidate_item_pane_t

0x7c5e,	// (0x00044f07) list_highlight_pane_cp31_ParamLimits

0x7c5e,	// (0x00044f07) list_highlight_pane_cp31

0x8d5e,	// (0x00046007) level_1_signal_lsc

0x8d67,	// (0x00046010) level_2_signal_lsc

0x8d70,	// (0x00046019) level_3_signal_lsc

0x8d79,	// (0x00046022) level_4_signal_lsc

0x8d82,	// (0x0004602b) level_5_signal_lsc

0x8d8b,	// (0x00046034) level_6_signal_lsc

0x8d94,	// (0x0004603d) level_7_signal_lsc

0x8d94,	// (0x0004603d) level_1_battery_lsc

0x8d9d,	// (0x00046046) level_2_battery_lsc

0x8da6,	// (0x0004604f) level_3_battery_lsc

0x8daf,	// (0x00046058) level_4_battery_lsc

0x8db8,	// (0x00046061) level_5_battery_lsc

0x8dc1,	// (0x0004606a) level_6_battery_lsc

0x8d5e,	// (0x00046007) level_7_battery_lsc

0x8dca,	// (0x00046073) scroll_handle_focus_pane_g1

0x8dd3,	// (0x0004607c) scroll_handle_focus_pane_g2

0x8ddc,	// (0x00046085) scroll_handle_focus_pane_g3

0x0002,

0xf713,	// (0x0004c9bc) scroll_handle_focus_pane_g

0x4b6a,	// (0x00041e13) list_single_2graphic_pane_g1_ParamLimits

0x4b6a,	// (0x00041e13) list_single_2graphic_pane_g1

0x581f,	// (0x00042ac8) list_single_2graphic_pane_g2_ParamLimits

0x581f,	// (0x00042ac8) list_single_2graphic_pane_g2

0x5801,	// (0x00042aaa) list_single_2graphic_pane_g3_ParamLimits

0x5801,	// (0x00042aaa) list_single_2graphic_pane_g3

0x4b76,	// (0x00041e1f) list_single_2graphic_pane_g4_ParamLimits

0x4b76,	// (0x00041e1f) list_single_2graphic_pane_g4

0x0003,

0xf71a,	// (0x0004c9c3) list_single_2graphic_pane_g_ParamLimits

0xf71a,	// (0x0004c9c3) list_single_2graphic_pane_g

0x4b82,	// (0x00041e2b) list_single_2graphic_pane_t1_ParamLimits

0x4b82,	// (0x00041e2b) list_single_2graphic_pane_t1

0x5b33,	// (0x00042ddc) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5b33,	// (0x00042ddc) list_double2_graphic_large_graphic_pane_g1

0x46ef,	// (0x00041998) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x46ef,	// (0x00041998) list_double2_graphic_large_graphic_pane_g2

0x5875,	// (0x00042b1e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5875,	// (0x00042b1e) list_double2_graphic_large_graphic_pane_g3

0x5b43,	// (0x00042dec) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5b43,	// (0x00042dec) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf723,	// (0x0004c9cc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf723,	// (0x0004c9cc) list_double2_graphic_large_graphic_pane_g

0x4bb0,	// (0x00041e59) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4bb0,	// (0x00041e59) list_double2_graphic_large_graphic_pane_t1

0x4bc6,	// (0x00041e6f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4bc6,	// (0x00041e6f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72c,	// (0x0004c9d5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72c,	// (0x0004c9d5) list_double2_graphic_large_graphic_pane_t

0x8f33,	// (0x000461dc) popup_fast_swap_window_ParamLimits

0x8f33,	// (0x000461dc) popup_fast_swap_window

0x8f4f,	// (0x000461f8) popup_side_volume_key_window

0x8f6b,	// (0x00046214) stacon_top_pane

0x8f75,	// (0x0004621e) status_pane_ParamLimits

0x8f75,	// (0x0004621e) status_pane

0x2744,	// (0x0003f9ed) status_small_pane

0x2758,	// (0x0003fa01) control_pane

0x2758,	// (0x0003fa01) stacon_bottom_pane

0x84da,	// (0x00045783) scroll_pane_cp121

0x84d1,	// (0x0004577a) set_content_pane

0x8de5,	// (0x0004608e) bg_active_tab_pane_g1_cp1

0x8dee,	// (0x00046097) bg_active_tab_pane_g2_cp1

0x8df7,	// (0x000460a0) bg_active_tab_pane_g3_cp1

0x8de5,	// (0x0004608e) bg_passive_tab_pane_g1_cp1

0x8dee,	// (0x00046097) bg_passive_tab_pane_g2_cp1

0x8df7,	// (0x000460a0) bg_passive_tab_pane_g3_cp1

0x8e00,	// (0x000460a9) bg_active_tab_pane_g1_cp2

0x8dee,	// (0x00046097) bg_active_tab_pane_g2_cp2

0x8e09,	// (0x000460b2) bg_active_tab_pane_g3_cp2

0x8e00,	// (0x000460a9) bg_passive_tab_pane_g1_cp2

0x8dee,	// (0x00046097) bg_passive_tab_pane_g2_cp2

0x8e09,	// (0x000460b2) bg_passive_tab_pane_g3_cp2

0x8e1e,	// (0x000460c7) bg_active_tab_pane_g1_cp3

0x8dee,	// (0x00046097) bg_active_tab_pane_g2_cp3

0x8e27,	// (0x000460d0) bg_active_tab_pane_g3_cp3

0x8e1e,	// (0x000460c7) bg_passive_tab_pane_g1_cp3

0x8dee,	// (0x00046097) bg_passive_tab_pane_g2_cp3

0x8e27,	// (0x000460d0) bg_passive_tab_pane_g3_cp3

0x8e30,	// (0x000460d9) bg_active_tab_pane_g1_cp4

0x8dee,	// (0x00046097) bg_active_tab_pane_g2_cp4

0x8e3b,	// (0x000460e4) bg_active_tab_pane_g3_cp4

0x8e30,	// (0x000460d9) bg_passive_tab_pane_g1_cp4

0x8dee,	// (0x00046097) bg_passive_tab_pane_g2_cp4

0x8e3b,	// (0x000460e4) bg_passive_tab_pane_g3_cp4

0x8e84,	// (0x0004612d) bg_active_tab_pane_g1_cp5

0x8dee,	// (0x00046097) bg_active_tab_pane_g2_cp5

0x8e8d,	// (0x00046136) bg_active_tab_pane_g3_cp5

0x8e84,	// (0x0004612d) bg_passive_tab_pane_g1_cp5

0x8dee,	// (0x00046097) bg_passive_tab_pane_g2_cp5

0x8e8d,	// (0x00046136) bg_passive_tab_pane_g3_cp5

0x8e96,	// (0x0004613f) list_set_graphic_pane_ParamLimits

0x8e96,	// (0x0004613f) list_set_graphic_pane

0x2758,	// (0x0003fa01) bg_set_opt_pane_cp4

0x8eb6,	// (0x0004615f) list_set_graphic_pane_g1_ParamLimits

0x8eb6,	// (0x0004615f) list_set_graphic_pane_g1

0x8ec2,	// (0x0004616b) list_set_graphic_pane_g2_ParamLimits

0x8ec2,	// (0x0004616b) list_set_graphic_pane_g2

0x0001,

0xf731,	// (0x0004c9da) list_set_graphic_pane_g_ParamLimits

0xf731,	// (0x0004c9da) list_set_graphic_pane_g

0x0009,

0xfaad,	// (0x0004cd56) volume_small_pane_cp_g

0x8ee6,	// (0x0004618f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8ee6,	// (0x0004618f) list_double2_large_graphic_pane_g1_cp2

0x8ef2,	// (0x0004619b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8ef2,	// (0x0004619b) list_double2_large_graphic_pane_g2_cp2

0x8f03,	// (0x000461ac) list_double2_large_graphic_pane_g3_cp2

0x8f0b,	// (0x000461b4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8f0b,	// (0x000461b4) list_double2_large_graphic_pane_t1_cp2

0x8f21,	// (0x000461ca) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8f21,	// (0x000461ca) list_double2_large_graphic_pane_t2_cp2

0xaaf7,	// (0x00047da0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaaf7,	// (0x00047da0) list_double_large_graphic_pane_g1_cp2

0xab08,	// (0x00047db1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab08,	// (0x00047db1) list_double_large_graphic_pane_g2_cp2

0x9091,	// (0x0004633a) list_double_large_graphic_pane_g3_cp2

0xab19,	// (0x00047dc2) list_double_large_graphic_pane_g4_cp

0xab21,	// (0x00047dca) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab21,	// (0x00047dca) list_double_large_graphic_pane_t1_cp2

0xab38,	// (0x00047de1) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab38,	// (0x00047de1) list_double_large_graphic_pane_t2_cp2

0x8f83,	// (0x0004622c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f83,	// (0x0004622c) list_double2_graphic_pane_g1_cp2

0x8f91,	// (0x0004623a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f91,	// (0x0004623a) list_double2_graphic_pane_g2_cp2

0x8fa2,	// (0x0004624b) list_double2_graphic_pane_g3_cp2

0x8fac,	// (0x00046255) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8fac,	// (0x00046255) list_double2_graphic_pane_t1_cp2

0x8fc2,	// (0x0004626b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8fc2,	// (0x0004626b) list_double2_graphic_pane_t2_cp2

0x8fd4,	// (0x0004627d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fd4,	// (0x0004627d) list_single_number_heading_pane_g1_cp2

0x8fe0,	// (0x00046289) list_single_number_heading_pane_g2_cp2

0x8fe8,	// (0x00046291) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fe8,	// (0x00046291) list_single_number_heading_pane_t1_cp2

0x8ffe,	// (0x000462a7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8ffe,	// (0x000462a7) list_single_number_heading_pane_t2_cp2

0x9010,	// (0x000462b9) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9010,	// (0x000462b9) list_single_number_heading_pane_t3_cp2

0x8fd4,	// (0x0004627d) list_single_heading_pane_g1_cp2_ParamLimits

0x8fd4,	// (0x0004627d) list_single_heading_pane_g1_cp2

0x8fe0,	// (0x00046289) list_single_heading_pane_g2_cp2

0x8fe8,	// (0x00046291) list_single_heading_pane_t1_cp2_ParamLimits

0x8fe8,	// (0x00046291) list_single_heading_pane_t1_cp2

0xa8ff,	// (0x00047ba8) list_single_heading_pane_t2_cp2_ParamLimits

0xa8ff,	// (0x00047ba8) list_single_heading_pane_t2_cp2

0xa847,	// (0x00047af0) list_double_graphic_pane_g1_cp2_ParamLimits

0xa847,	// (0x00047af0) list_double_graphic_pane_g1_cp2

0xa853,	// (0x00047afc) list_double_graphic_pane_g2_cp2_ParamLimits

0xa853,	// (0x00047afc) list_double_graphic_pane_g2_cp2

0xa862,	// (0x00047b0b) list_double_graphic_pane_g3_cp2

0xa86a,	// (0x00047b13) list_double_graphic_pane_t1_cp2_ParamLimits

0xa86a,	// (0x00047b13) list_double_graphic_pane_t1_cp2

0xa880,	// (0x00047b29) list_double_graphic_pane_t2_cp2_ParamLimits

0xa880,	// (0x00047b29) list_double_graphic_pane_t2_cp2

0x9085,	// (0x0004632e) list_double_number_pane_g1_cp2_ParamLimits

0x9085,	// (0x0004632e) list_double_number_pane_g1_cp2

0x9091,	// (0x0004633a) list_double_number_pane_g2_cp2

0xa80b,	// (0x00047ab4) list_double_number_pane_t1_cp2_ParamLimits

0xa80b,	// (0x00047ab4) list_double_number_pane_t1_cp2

0xa81f,	// (0x00047ac8) list_double_number_pane_t2_cp2_ParamLimits

0xa81f,	// (0x00047ac8) list_double_number_pane_t2_cp2

0xa835,	// (0x00047ade) list_double_number_pane_t3_cp2_ParamLimits

0xa835,	// (0x00047ade) list_double_number_pane_t3_cp2

0xa6f4,	// (0x0004799d) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6f4,	// (0x0004799d) list_single_graphic_pane_g1_cp2

0x90f6,	// (0x0004639f) list_single_graphic_pane_g2_cp2_ParamLimits

0x90f6,	// (0x0004639f) list_single_graphic_pane_g2_cp2

0x9102,	// (0x000463ab) list_single_graphic_pane_g3_cp2

0xa6ca,	// (0x00047973) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6ca,	// (0x00047973) list_single_graphic_pane_t1_cp2

0x90f6,	// (0x0004639f) list_single_number_pane_g1_cp2_ParamLimits

0x90f6,	// (0x0004639f) list_single_number_pane_g1_cp2

0x9102,	// (0x000463ab) list_single_number_pane_g2_cp2

0xa6ca,	// (0x00047973) list_single_number_pane_t1_cp2_ParamLimits

0xa6ca,	// (0x00047973) list_single_number_pane_t1_cp2

0xa6e0,	// (0x00047989) list_single_number_pane_t2_cp2_ParamLimits

0xa6e0,	// (0x00047989) list_single_number_pane_t2_cp2

0x8ef2,	// (0x0004619b) list_double2_pane_g1_cp2_ParamLimits

0x8ef2,	// (0x0004619b) list_double2_pane_g1_cp2

0x8f03,	// (0x000461ac) list_double2_pane_g2_cp2

0x905d,	// (0x00046306) list_double2_pane_t1_cp2_ParamLimits

0x905d,	// (0x00046306) list_double2_pane_t1_cp2

0x9073,	// (0x0004631c) list_double2_pane_t2_cp2_ParamLimits

0x9073,	// (0x0004631c) list_double2_pane_t2_cp2

0x9085,	// (0x0004632e) list_double_pane_g1_cp2_ParamLimits

0x9085,	// (0x0004632e) list_double_pane_g1_cp2

0x9091,	// (0x0004633a) list_double_pane_g2_cp2

0x9099,	// (0x00046342) list_double_pane_t1_cp2_ParamLimits

0x9099,	// (0x00046342) list_double_pane_t1_cp2

0x90af,	// (0x00046358) list_double_pane_t2_cp2_ParamLimits

0x90af,	// (0x00046358) list_double_pane_t2_cp2

0x90e6,	// (0x0004638f) list_single_pane_cp2_g3

0x90f6,	// (0x0004639f) list_single_pane_g1_cp2_ParamLimits

0x90f6,	// (0x0004639f) list_single_pane_g1_cp2

0x9102,	// (0x000463ab) list_single_pane_g2_cp2

0x910a,	// (0x000463b3) list_single_pane_t1_cp2_ParamLimits

0x910a,	// (0x000463b3) list_single_pane_t1_cp2

0x9122,	// (0x000463cb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9122,	// (0x000463cb) list_single_large_graphic_pane_g1_cp2

0x8e12,	// (0x000460bb) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8e12,	// (0x000460bb) list_single_large_graphic_pane_g2_cp2

0x912e,	// (0x000463d7) list_single_large_graphic_pane_g3_cp2

0x9136,	// (0x000463df) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9136,	// (0x000463df) list_single_large_graphic_pane_g4_cp1

0x9150,	// (0x000463f9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9150,	// (0x000463f9) list_single_large_graphic_pane_t1_cp2

0xa696,	// (0x0004793f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa696,	// (0x0004793f) list_single_graphic_heading_pane_g1_cp2

0xa663,	// (0x0004790c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa663,	// (0x0004790c) list_single_graphic_heading_pane_g4_cp2

0x9102,	// (0x000463ab) list_single_graphic_heading_pane_g5_cp2

0xa6a2,	// (0x0004794b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6a2,	// (0x0004794b) list_single_graphic_heading_pane_t1_cp2

0xa6b8,	// (0x00047961) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6b8,	// (0x00047961) list_single_graphic_heading_pane_t2_cp2

0xa657,	// (0x00047900) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa657,	// (0x00047900) list_single_2graphic_pane_g1_cp2

0xa663,	// (0x0004790c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa663,	// (0x0004790c) list_single_2graphic_pane_g2_cp2

0x9102,	// (0x000463ab) list_single_2graphic_pane_g3_cp2

0xa674,	// (0x0004791d) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa674,	// (0x0004791d) list_single_2graphic_pane_g4_cp2

0xa680,	// (0x00047929) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa680,	// (0x00047929) list_single_2graphic_pane_t1_cp2

0x274e,	// (0x0003f9f7) list_highlight_pane_g10_cp1

0xa22f,	// (0x000474d8) list_highlight_pane_g1_cp1

0xa237,	// (0x000474e0) list_highlight_pane_g2_cp1

0xa23f,	// (0x000474e8) list_highlight_pane_g3_cp1

0xa247,	// (0x000474f0) list_highlight_pane_g4_cp1

0xa24f,	// (0x000474f8) list_highlight_pane_g5_cp1

0xa257,	// (0x00047500) list_highlight_pane_g6_cp1

0xa25f,	// (0x00047508) list_highlight_pane_g7_cp1

0xa267,	// (0x00047510) list_highlight_pane_g8_cp1

0xa26f,	// (0x00047518) list_highlight_pane_g9_cp1

0xa14f,	// (0x000473f8) form_field_slider_pane_t3

0xa15d,	// (0x00047406) form_field_slider_pane_t4

0xa16b,	// (0x00047414) slider_form_pane_ParamLimits

0xa16b,	// (0x00047414) slider_form_pane

0x2758,	// (0x0003fa01) control_abbreviations

0x2758,	// (0x0003fa01) control_conventions

0x2758,	// (0x0003fa01) control_definitions

0x2758,	// (0x0003fa01) format_table_attribute

0xa949,	// (0x00047bf2) bg_popup_preview_window_pane_g9

0x2758,	// (0x0003fa01) format_table_data2

0x2758,	// (0x0003fa01) format_table_data3

0x2758,	// (0x0003fa01) format_table_data_example

0x0008,

0x2758,	// (0x0003fa01) intro_purpose

0xf8c8,	// (0x0004cb71) bg_popup_preview_window_pane_g

0x2758,	// (0x0003fa01) texts_category

0x2758,	// (0x0003fa01) texts_graphics

0x9166,	// (0x0004640f) text_digital

0x9175,	// (0x0004641e) text_primary

0x9184,	// (0x0004642d) text_primary_small

0x9193,	// (0x0004643c) text_secondary

0x91a2,	// (0x0004644b) text_title

0xb05a,	// (0x00048303) bg_passive_tab_pane_g1_cp3_srt

0x8dee,	// (0x00046097) bg_passive_tab_pane_g2_cp3_srt

0xb063,	// (0x0004830c) bg_passive_tab_pane_g3_cp3_srt

0x7c5e,	// (0x00044f07) bg_active_tab_pane_cp3_srt_ParamLimits

0x7c5e,	// (0x00044f07) bg_active_tab_pane_cp3_srt

0xb06c,	// (0x00048315) tabs_4_active_pane_srt_g1

0xb074,	// (0x0004831d) tabs_4_active_pane_srt_t1_ParamLimits

0xb074,	// (0x0004831d) tabs_4_active_pane_srt_t1

0xb05a,	// (0x00048303) bg_active_tab_pane_g1_cp3_copy1

0x8dee,	// (0x00046097) bg_active_tab_pane_g2_cp3_copy1

0xb063,	// (0x0004830c) bg_active_tab_pane_g3_cp3_copy1

0x7c5e,	// (0x00044f07) tabs_2_long_active_pane_srt_ParamLimits

0x7c5e,	// (0x00044f07) tabs_2_long_active_pane_srt

0x7c5e,	// (0x00044f07) tabs_2_long_passive_pane_srt_ParamLimits

0x7c5e,	// (0x00044f07) tabs_2_long_passive_pane_srt

0x86df,	// (0x00045988) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86df,	// (0x00045988) bg_passive_tab_pane_cp4_srt

0xad67,	// (0x00048010) bg_passive_tab_pane_g1_cp4_srt

0x8dee,	// (0x00046097) bg_passive_tab_pane_g2_cp4_srt

0xad70,	// (0x00048019) bg_passive_tab_pane_g3_cp4_srt

0x86be,	// (0x00045967) bg_active_tab_pane_cp4_srt_ParamLimits

0x86be,	// (0x00045967) bg_active_tab_pane_cp4_srt

0xad79,	// (0x00048022) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad79,	// (0x00048022) tabs_2_long_active_pane_srt_t1

0xad67,	// (0x00048010) bg_active_tab_pane_g1_cp4_srt

0x8dee,	// (0x00046097) bg_active_tab_pane_g2_cp4_srt

0xad70,	// (0x00048019) bg_active_tab_pane_g3_cp4_srt

0x7ed9,	// (0x00045182) tabs_3_long_active_pane_srt_ParamLimits

0x7ed9,	// (0x00045182) tabs_3_long_active_pane_srt

0x7ed9,	// (0x00045182) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7ed9,	// (0x00045182) tabs_3_long_passive_pane_cp_srt

0x7ed9,	// (0x00045182) tabs_3_long_passive_pane_srt_ParamLimits

0x7ed9,	// (0x00045182) tabs_3_long_passive_pane_srt

0x86df,	// (0x00045988) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86df,	// (0x00045988) bg_passive_tab_pane_cp5_srt

0x8e84,	// (0x0004612d) bg_passive_tab_pane_g1_cp5_srt

0x8dee,	// (0x00046097) bg_passive_tab_pane_g2_cp5_srt

0x8e8d,	// (0x00046136) bg_passive_tab_pane_g3_cp5_srt

0x86be,	// (0x00045967) bg_active_tab_pane_cp5_srt_ParamLimits

0x86be,	// (0x00045967) bg_active_tab_pane_cp5_srt

0xad55,	// (0x00047ffe) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad55,	// (0x00047ffe) tabs_3_long_active_pane_srt_t1

0x8e84,	// (0x0004612d) bg_active_tab_pane_g1_cp5_srt

0x8dee,	// (0x00046097) bg_active_tab_pane_g2_cp5_srt

0x8e8d,	// (0x00046136) bg_active_tab_pane_g3_cp5_srt

0xad47,	// (0x00047ff0) navi_text_pane_srt_t1

0xad3f,	// (0x00047fe8) navi_icon_pane_srt_g1

0x9377,	// (0x00046620) midp_editing_number_pane_srt

0x91b1,	// (0x0004645a) midp_ticker_pane_srt

0x937f,	// (0x00046628) midp_ticker_pane_srt_g1

0x9387,	// (0x00046630) midp_ticker_pane_srt_g2

0x0001,

0xf750,	// (0x0004c9f9) midp_ticker_pane_srt_g

0x938f,	// (0x00046638) midp_ticker_pane_srt_t1

0xad30,	// (0x00047fd9) midp_editing_number_pane_t1_copy1

0x91b9,	// (0x00046462) listscroll_midp_pane

0x91b9,	// (0x00046462) midp_form_pane

0x9229,	// (0x000464d2) midp_info_popup_window_ParamLimits

0x9229,	// (0x000464d2) midp_info_popup_window

0x860a,	// (0x000458b3) bg_popup_sub_pane_cp50_ParamLimits

0x860a,	// (0x000458b3) bg_popup_sub_pane_cp50

0x9e53,	// (0x000470fc) listscroll_midp_info_pane_ParamLimits

0x9e53,	// (0x000470fc) listscroll_midp_info_pane

0x9e33,	// (0x000470dc) listscroll_form_midp_pane_ParamLimits

0x9e33,	// (0x000470dc) listscroll_form_midp_pane

0x9e3f,	// (0x000470e8) scroll_bar_cp050

0x9e13,	// (0x000470bc) list_midp_pane

0xbae4,	// (0x00048d8d) signal_pane_g2_cp

0x9d4d,	// (0x00046ff6) listscroll_midp_info_pane_t1_ParamLimits

0x9d4d,	// (0x00046ff6) listscroll_midp_info_pane_t1

0x9d65,	// (0x0004700e) listscroll_midp_info_pane_t2_ParamLimits

0x9d65,	// (0x0004700e) listscroll_midp_info_pane_t2

0x9da3,	// (0x0004704c) listscroll_midp_info_pane_t3_ParamLimits

0x9da3,	// (0x0004704c) listscroll_midp_info_pane_t3

0x9ddd,	// (0x00047086) listscroll_midp_info_pane_t4_ParamLimits

0x9ddd,	// (0x00047086) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x0004caac) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x0004caac) listscroll_midp_info_pane_t

0x866b,	// (0x00045914) scroll_pane_cp21

0x9ceb,	// (0x00046f94) form_midp_field_choice_group_pane

0x9cf4,	// (0x00046f9d) form_midp_field_text_pane

0x9d33,	// (0x00046fdc) form_midp_field_time_pane

0x9d3b,	// (0x00046fe4) form_midp_gauge_slider_pane

0x9d44,	// (0x00046fed) form_midp_gauge_wait_pane

0x2758,	// (0x0003fa01) form_midp_image_pane

0x4d11,	// (0x00041fba) list_single_midp_pane_ParamLimits

0x4d11,	// (0x00041fba) list_single_midp_pane

0x9ca3,	// (0x00046f4c) form_midp_field_text_pane_t1

0x9a73,	// (0x00046d1c) input_focus_pane_cp050

0x9cda,	// (0x00046f83) list_midp_form_text_pane

0x9c72,	// (0x00046f1b) form_midp_field_choice_group_pane_t1

0x9c80,	// (0x00046f29) input_focus_pane_cp051

0x9c94,	// (0x00046f3d) list_midp_choice_pane

0x2758,	// (0x0003fa01) status_idle_pane

0x9c56,	// (0x00046eff) form_midp_field_time_pane_t1

0x274e,	// (0x0003f9f7) wait_anim_pane_g2_copy1

0x9c64,	// (0x00046f0d) form_midp_field_time_pane_t2

0x0001,

0x92d7,	// (0x00046580) aid_navinavi_width_2_pane

0xf7fe,	// (0x0004caa7) form_midp_field_time_pane_t

0x2758,	// (0x0003fa01) input_focus_pane_cp052

0x2758,	// (0x0003fa01) bg_input_focus_pane_cp040

0x9c16,	// (0x00046ebf) form_midp_gauge_slider_pane_t1

0x9c24,	// (0x00046ecd) form_midp_gauge_slider_pane_t2

0x9c32,	// (0x00046edb) form_midp_gauge_slider_pane_t3

0x9c40,	// (0x00046ee9) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x0004ca9e) form_midp_gauge_slider_pane_t

0x9c4e,	// (0x00046ef7) form_midp_slider_pane

0x7c5e,	// (0x00044f07) bg_input_focus_pane_cp041_ParamLimits

0x7c5e,	// (0x00044f07) bg_input_focus_pane_cp041

0x9be3,	// (0x00046e8c) form_midp_gauge_wait_pane_t1_ParamLimits

0x9be3,	// (0x00046e8c) form_midp_gauge_wait_pane_t1

0x9bf5,	// (0x00046e9e) form_midp_gauge_wait_pane_t2_ParamLimits

0x9bf5,	// (0x00046e9e) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x0004ca99) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x0004ca99) form_midp_gauge_wait_pane_t

0x9c07,	// (0x00046eb0) form_midp_wait_pane_ParamLimits

0x9c07,	// (0x00046eb0) form_midp_wait_pane

0x9bad,	// (0x00046e56) form_midp_image_pane_g1

0x9bb6,	// (0x00046e5f) form_midp_image_pane_t1

0x9bc5,	// (0x00046e6e) form_midp_image_pane_t2

0x9bd4,	// (0x00046e7d) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x0004ca92) form_midp_image_pane_t

0x9ba4,	// (0x00046e4d) list_single_midp_pane_g1

0x4d02,	// (0x00041fab) list_single_midp_pane_t1

0x9b7c,	// (0x00046e25) list_midp_form_item_pane_ParamLimits

0x9b7c,	// (0x00046e25) list_midp_form_item_pane

0x927f,	// (0x00046528) list_midp_form_item_pane_t1

0x928e,	// (0x00046537) midp_ticker_pane_g1

0x929a,	// (0x00046543) midp_ticker_pane_g2

0x0001,

0xf736,	// (0x0004c9df) midp_ticker_pane_g

0x92a6,	// (0x0004654f) midp_ticker_pane_t1

0xaf81,	// (0x0004822a) midp_editing_number_pane_t1

0xaf5f,	// (0x00048208) midp_editing_number_pane

0xaf6e,	// (0x00048217) midp_ticker_pane

0x9e5f,	// (0x00047108) ai_message_heading_pane

0x2758,	// (0x0003fa01) bg_popup_window_pane_cp14

0x9e67,	// (0x00047110) listscroll_ai_message_pane

0xacba,	// (0x00047f63) ai_message_heading_pane_g1_ParamLimits

0xacba,	// (0x00047f63) ai_message_heading_pane_g1

0xacc6,	// (0x00047f6f) ai_message_heading_pane_g2_ParamLimits

0xacc6,	// (0x00047f6f) ai_message_heading_pane_g2

0xacd2,	// (0x00047f7b) ai_message_heading_pane_g3_ParamLimits

0xacd2,	// (0x00047f7b) ai_message_heading_pane_g3

0xacde,	// (0x00047f87) ai_message_heading_pane_g4_ParamLimits

0xacde,	// (0x00047f87) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x0004cbd3) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x0004cbd3) ai_message_heading_pane_g

0xacea,	// (0x00047f93) ai_message_heading_pane_t1_ParamLimits

0xacea,	// (0x00047f93) ai_message_heading_pane_t1

0xad04,	// (0x00047fad) ai_message_heading_pane_t2_ParamLimits

0xad04,	// (0x00047fad) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x0004cbdc) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x0004cbdc) ai_message_heading_pane_t

0xad16,	// (0x00047fbf) bg_popup_heading_pane_cp1_ParamLimits

0xad16,	// (0x00047fbf) bg_popup_heading_pane_cp1

0xaca8,	// (0x00047f51) list_ai_message_pane_ParamLimits

0xaca8,	// (0x00047f51) list_ai_message_pane

0x866b,	// (0x00045914) scroll_pane_cp10

0xac44,	// (0x00047eed) list_ai_message_pane_g1

0xac4c,	// (0x00047ef5) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x0004cbb0) list_ai_message_pane_g

0xac54,	// (0x00047efd) list_ai_message_pane_t1_ParamLimits

0xac54,	// (0x00047efd) list_ai_message_pane_t1

0xac69,	// (0x00047f12) list_ai_message_pane_t2_ParamLimits

0xac69,	// (0x00047f12) list_ai_message_pane_t2

0xac7e,	// (0x00047f27) list_ai_message_pane_t3_ParamLimits

0xac7e,	// (0x00047f27) list_ai_message_pane_t3

0xac93,	// (0x00047f3c) list_ai_message_pane_t4_ParamLimits

0xac93,	// (0x00047f3c) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x0004cbb5) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x0004cbb5) list_ai_message_pane_t

0xac2f,	// (0x00047ed8) cell_ai_soft_ind_pane_ParamLimits

0xac2f,	// (0x00047ed8) cell_ai_soft_ind_pane

0x92b8,	// (0x00046561) cell_ai_soft_ind_pane_g1_ParamLimits

0x92b8,	// (0x00046561) cell_ai_soft_ind_pane_g1

0x2758,	// (0x0003fa01) grid_highlight_cp1

0x92c5,	// (0x0004656e) text_secondary_cp56_ParamLimits

0x92c5,	// (0x0004656e) text_secondary_cp56

0xac04,	// (0x00047ead) example_general_pane_ParamLimits

0xac04,	// (0x00047ead) example_general_pane

0xac10,	// (0x00047eb9) example_parent_pane_g1_ParamLimits

0xac10,	// (0x00047eb9) example_parent_pane_g1

0xac1c,	// (0x00047ec5) example_parent_pane_t1_ParamLimits

0xac1c,	// (0x00047ec5) example_parent_pane_t1

0x6246,	// (0x000434ef) popup_preview_text_window_ParamLimits

0x6246,	// (0x000434ef) popup_preview_text_window

0x90ee,	// (0x00046397) list_single_pane_cp2_g4

0x7fb5,	// (0x0004525e) bg_popup_preview_window_pane_ParamLimits

0x7fb5,	// (0x0004525e) bg_popup_preview_window_pane

0xa951,	// (0x00047bfa) popup_preview_text_window_t1_ParamLimits

0xa951,	// (0x00047bfa) popup_preview_text_window_t1

0xa96f,	// (0x00047c18) popup_preview_text_window_t2_ParamLimits

0xa96f,	// (0x00047c18) popup_preview_text_window_t2

0xa9b8,	// (0x00047c61) popup_preview_text_window_t3_ParamLimits

0xa9b8,	// (0x00047c61) popup_preview_text_window_t3

0xa9fd,	// (0x00047ca6) popup_preview_text_window_t4_ParamLimits

0xa9fd,	// (0x00047ca6) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x0004cb84) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x0004cb84) popup_preview_text_window_t

0xaa7b,	// (0x00047d24) scroll_pane_cp11

0x99ff,	// (0x00046ca8) bg_popup_preview_window_pane_g1

0xa911,	// (0x00047bba) bg_popup_preview_window_pane_g2

0xa919,	// (0x00047bc2) bg_popup_preview_window_pane_g3

0xa921,	// (0x00047bca) bg_popup_preview_window_pane_g4

0xa929,	// (0x00047bd2) bg_popup_preview_window_pane_g5

0xa931,	// (0x00047bda) bg_popup_preview_window_pane_g6

0xa939,	// (0x00047be2) bg_popup_preview_window_pane_g7

0xa941,	// (0x00047bea) bg_popup_preview_window_pane_g8

0x5387,	// (0x00042630) aid_popup_width_pane

0x6224,	// (0x000434cd) popup_midp_note_alarm_window_ParamLimits

0x6224,	// (0x000434cd) popup_midp_note_alarm_window

0x84eb,	// (0x00045794) data_form_pane_ParamLimits

0x49b3,	// (0x00041c5c) form_field_data_pane_g1

0x49bd,	// (0x00041c66) form_field_data_pane_t1_ParamLimits

0x84f7,	// (0x000457a0) input_focus_pane_ParamLimits

0x49d5,	// (0x00041c7e) data_form_wide_pane_ParamLimits

0x49e6,	// (0x00041c8f) form_field_data_wide_pane_g1

0x49f2,	// (0x00041c9b) form_field_data_wide_pane_t1_ParamLimits

0x825c,	// (0x00045505) input_focus_pane_cp6_ParamLimits

0x8618,	// (0x000458c1) input_popup_find_pane_g1_ParamLimits

0x8618,	// (0x000458c1) input_popup_find_pane_g1

0x5994,	// (0x00042c3d) aid_navi_side_left_pane

0x59a9,	// (0x00042c52) aid_navi_side_right_pane

0xa32a,	// (0x000475d3) bg_popup_window_pane_cp30_ParamLimits

0xa32a,	// (0x000475d3) bg_popup_window_pane_cp30

0xa3a4,	// (0x0004764d) popup_midp_note_alarm_window_g1_ParamLimits

0xa3a4,	// (0x0004764d) popup_midp_note_alarm_window_g1

0xa3d4,	// (0x0004767d) popup_midp_note_alarm_window_t1_ParamLimits

0xa3d4,	// (0x0004767d) popup_midp_note_alarm_window_t1

0xa475,	// (0x0004771e) popup_midp_note_alarm_window_t2_ParamLimits

0xa475,	// (0x0004771e) popup_midp_note_alarm_window_t2

0xa523,	// (0x000477cc) popup_midp_note_alarm_window_t3_ParamLimits

0xa523,	// (0x000477cc) popup_midp_note_alarm_window_t3

0xa555,	// (0x000477fe) popup_midp_note_alarm_window_t4_ParamLimits

0xa555,	// (0x000477fe) popup_midp_note_alarm_window_t4

0xa57b,	// (0x00047824) popup_midp_note_alarm_window_t5_ParamLimits

0xa57b,	// (0x00047824) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x0004cb21) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x0004cb21) popup_midp_note_alarm_window_t

0xa627,	// (0x000478d0) wait_bar_pane_cp1_ParamLimits

0xa627,	// (0x000478d0) wait_bar_pane_cp1

0x2758,	// (0x0003fa01) wait_anim_pane_copy1

0x2758,	// (0x0003fa01) wait_border_pane_copy1

0xa010,	// (0x000472b9) wait_border_pane_g1_copy1

0x4a0c,	// (0x00041cb5) form_field_popup_pane_g1

0x4a14,	// (0x00041cbd) form_field_popup_pane_t1_ParamLimits

0x84f7,	// (0x000457a0) input_focus_pane_cp7_ParamLimits

0x8519,	// (0x000457c2) list_form_pane_ParamLimits

0x4a2c,	// (0x00041cd5) form_field_popup_wide_pane_g1

0x4a34,	// (0x00041cdd) form_field_popup_wide_pane_t1_ParamLimits

0x84f7,	// (0x000457a0) input_focus_pane_cp8_ParamLimits

0x8525,	// (0x000457ce) list_form_wide_pane_ParamLimits

0xb0ff,	// (0x000483a8) aid_size_cell_graphic_pane

0x4abe,	// (0x00041d67) data_form_pane_t1_ParamLimits

0x4d4d,	// (0x00041ff6) data_form_wide_pane_t1_ParamLimits

0x95c6,	// (0x0004686f) bg_status_flat_pane

0x7bbe,	// (0x00044e67) title_pane_t1_ParamLimits

0x7c26,	// (0x00044ecf) title_pane_t2_ParamLimits

0x7c4c,	// (0x00044ef5) title_pane_t3_ParamLimits

0xf530,	// (0x0004c7d9) title_pane_t_ParamLimits

0x8aec,	// (0x00045d95) level_1_signal_ParamLimits

0x8afe,	// (0x00045da7) level_2_signal_ParamLimits

0x8b11,	// (0x00045dba) level_3_signal_ParamLimits

0x8b24,	// (0x00045dcd) level_4_signal_ParamLimits

0x8b37,	// (0x00045de0) level_5_signal_ParamLimits

0x8b4a,	// (0x00045df3) level_6_signal_ParamLimits

0x8b5d,	// (0x00045e06) level_7_signal_ParamLimits

0x8aec,	// (0x00045d95) level_1_battery_ParamLimits

0x8afe,	// (0x00045da7) level_2_battery_ParamLimits

0x8b11,	// (0x00045dba) level_3_battery_ParamLimits

0x8b24,	// (0x00045dcd) level_4_battery_ParamLimits

0x8b37,	// (0x00045de0) level_5_battery_ParamLimits

0x8b4a,	// (0x00045df3) level_6_battery_ParamLimits

0x8b5d,	// (0x00045e06) level_7_battery_ParamLimits

0xa22f,	// (0x000474d8) bg_status_flat_pane_g1

0xa237,	// (0x000474e0) bg_status_flat_pane_g2

0xa23f,	// (0x000474e8) bg_status_flat_pane_g3

0xa247,	// (0x000474f0) bg_status_flat_pane_g4

0xa24f,	// (0x000474f8) bg_status_flat_pane_g5

0xa257,	// (0x00047500) bg_status_flat_pane_g6

0xa25f,	// (0x00047508) bg_status_flat_pane_g7

0x7c74,	// (0x00044f1d) tabs_3_active_pane_t1_ParamLimits

0x7c74,	// (0x00044f1d) tabs_3_passive_pane_t1_ParamLimits

0x7c8e,	// (0x00044f37) tabs_4_active_pane_t1_ParamLimits

0x7c8e,	// (0x00044f37) tabs_4_1_passive_pane_t1_ParamLimits

0x86ac,	// (0x00045955) tabs_2_active_pane_t1_ParamLimits

0x86ac,	// (0x00045955) tabs_2_passive_pane_t1_ParamLimits

0x86be,	// (0x00045967) bg_active_tab_pane_cp4_ParamLimits

0x86cc,	// (0x00045975) tabs_2_long_active_pane_t1_ParamLimits

0x86df,	// (0x00045988) bg_passive_tab_pane_cp4_ParamLimits

0x64f3,	// (0x0004379c) list_single_midp_graphic_pane_t1_ParamLimits

0x86be,	// (0x00045967) bg_active_tab_pane_cp5_ParamLimits

0x86eb,	// (0x00045994) tabs_3_long_active_pane_t1_ParamLimits

0x86df,	// (0x00045988) bg_passive_tab_pane_cp5_ParamLimits

0x64f3,	// (0x0004379c) list_single_midp_graphic_pane_t1

0x95c6,	// (0x0004686f) bg_status_flat_pane_ParamLimits

0x968f,	// (0x00046938) indicator_pane_cp2_ParamLimits

0x968f,	// (0x00046938) indicator_pane_cp2

0x97ba,	// (0x00046a63) navi_pane_srt_ParamLimits

0x97ba,	// (0x00046a63) navi_pane_srt

0x97de,	// (0x00046a87) popup_clock_digital_analogue_window_cp1

0x7d3b,	// (0x00044fe4) indicator_pane_t1

0x91b1,	// (0x0004645a) copy_highlight_pane

0x91b1,	// (0x0004645a) cursor_graphics_pane

0x91b1,	// (0x0004645a) graphic_within_text_pane

0x91b1,	// (0x0004645a) link_highlight_pane

0xaa3e,	// (0x00047ce7) popup_preview_text_window_t5_ParamLimits

0xaa3e,	// (0x00047ce7) popup_preview_text_window_t5

0x92df,	// (0x00046588) cursor_digital_pane

0x92df,	// (0x00046588) cursor_primary_pane

0x92f0,	// (0x00046599) cursor_primary_small_pane

0x92f8,	// (0x000465a1) cursor_secondary_pane

0x9300,	// (0x000465a9) cursor_title_pane

0x92df,	// (0x00046588) link_highlight_digital_pane

0x92e7,	// (0x00046590) link_highlight_primary_pane

0x92f0,	// (0x00046599) link_highlight_primary_small_pane

0x92f8,	// (0x000465a1) link_highlight_secondary_pane

0x9300,	// (0x000465a9) link_highlight_title_pane

0x92df,	// (0x00046588) copy_highlight_digital_pane

0x92df,	// (0x00046588) copy_highlight_primary_pane

0x92f0,	// (0x00046599) copy_highlight_primary_small_pane

0x92f8,	// (0x000465a1) copy_highlight_secondary_pane

0x9300,	// (0x000465a9) copy_highlight_title_pane

0x92f8,	// (0x000465a1) graphic_text_digital_pane

0xa2cd,	// (0x00047576) graphic_text_primary_pane

0xa2d6,	// (0x0004757f) graphic_text_primary_small_pane

0x92f0,	// (0x00046599) graphic_text_secondary_pane

0x92df,	// (0x00046588) graphic_text_title_pane

0x9308,	// (0x000465b1) cursor_primary_pane_g1

0xa2bf,	// (0x00047568) cursor_text_primary_t1

0xa2a7,	// (0x00047550) cursor_primary_small_pane_g1

0xa2b1,	// (0x0004755a) cursor_text_primary_small_t1

0xa28f,	// (0x00047538) cursor_primary_small_pane_g1_copy1

0xa299,	// (0x00047542) cursor_text_primary_small_t1_copy1

0xa277,	// (0x00047520) cursor_text_title_t1

0xa285,	// (0x0004752e) cursor_title_pane_g1

0x9308,	// (0x000465b1) cursor_digital_pane_g1

0x9312,	// (0x000465bb) cursor_text_digital_t1

0x9337,	// (0x000465e0) link_highlight_primary_pane_g1

0xa220,	// (0x000474c9) link_highlight_primary_pane_t1

0x9320,	// (0x000465c9) link_highlight_primary_small_pane_g1

0x9328,	// (0x000465d1) link_highlight_primary_small_pane_t1

0x9337,	// (0x000465e0) link_highlight_secondary_pane_g1

0x933f,	// (0x000465e8) link_highlight_secondary_pane_t1

0xa194,	// (0x0004743d) link_highlight_title_pane_g1

0xa19c,	// (0x00047445) link_highlight_title_pane_t1

0xa17d,	// (0x00047426) link_highlight_digital_pane_g1

0xa185,	// (0x0004742e) link_highlight_digital_pane_t1

0xa055,	// (0x000472fe) copy_highlight_primary_pane_g1

0xa05d,	// (0x00047306) copy_highlight_primary_pane_t1

0xa02f,	// (0x000472d8) copy_highlight_primary_small_pane_g1

0xa046,	// (0x000472ef) copy_highlight_primary_small_pane_t1

0x934e,	// (0x000465f7) copy_highlight_secondary_pane_g1

0x9356,	// (0x000465ff) copy_highlight_secondary_pane_t1

0xa02f,	// (0x000472d8) copy_highlight_title_pane_g1

0xa037,	// (0x000472e0) copy_highlight_title_pane_t1

0xa055,	// (0x000472fe) copy_highlight_digital_pane_g1

0xb2cd,	// (0x00048576) copy_highlight_digital_pane_t1

0xb221,	// (0x000484ca) graphic_text_primary_pane_g1

0xb2b1,	// (0x0004855a) graphic_text_primary_pane_t1

0xb2bf,	// (0x00048568) graphic_text_primary_pane_t2

0x0001,

0xf9a7,	// (0x0004cc50) graphic_text_primary_pane_t

0xb28d,	// (0x00048536) graphic_text_primary_small_pane_g1

0xb295,	// (0x0004853e) graphic_text_primary_small_pane_t1

0xb2a3,	// (0x0004854c) graphic_text_primary_small_pane_t2

0x0001,

0xf9a2,	// (0x0004cc4b) graphic_text_primary_small_pane_t

0xb269,	// (0x00048512) graphic_text_secondary_pane_g1

0xb271,	// (0x0004851a) graphic_text_secondary_pane_t1

0xb27f,	// (0x00048528) graphic_text_secondary_pane_t2

0x0001,

0xf99d,	// (0x0004cc46) graphic_text_secondary_pane_t

0xb245,	// (0x000484ee) graphic_text_title_pane_g1

0xb24d,	// (0x000484f6) graphic_text_title_pane_t1

0xb25b,	// (0x00048504) graphic_text_title_pane_t2

0x0001,

0xf998,	// (0x0004cc41) graphic_text_title_pane_t

0xb221,	// (0x000484ca) graphic_text_digital_pane_g1

0xb229,	// (0x000484d2) graphic_text_digital_pane_t1

0xb237,	// (0x000484e0) graphic_text_digital_pane_t2

0x0001,

0xf993,	// (0x0004cc3c) graphic_text_digital_pane_t

0x7c5e,	// (0x00044f07) navi_icon_pane_srt_ParamLimits

0x7c5e,	// (0x00044f07) navi_icon_pane_srt

0x2758,	// (0x0003fa01) navi_midp_pane_srt

0x2758,	// (0x0003fa01) navi_navi_pane_srt

0x7c5e,	// (0x00044f07) navi_text_pane_srt_ParamLimits

0x7c5e,	// (0x00044f07) navi_text_pane_srt

0xb1ec,	// (0x00048495) navi_navi_icon_text_pane_srt

0xb1f4,	// (0x0004849d) navi_navi_pane_srt_g1_ParamLimits

0xb1f4,	// (0x0004849d) navi_navi_pane_srt_g1

0xb206,	// (0x000484af) navi_navi_pane_srt_g2_ParamLimits

0xb206,	// (0x000484af) navi_navi_pane_srt_g2

0x0001,

0xf98e,	// (0x0004cc37) navi_navi_pane_srt_g_ParamLimits

0xf98e,	// (0x0004cc37) navi_navi_pane_srt_g

0xb218,	// (0x000484c1) navi_navi_tabs_pane_srt

0xb1ec,	// (0x00048495) navi_navi_text_pane_srt

0xb1ec,	// (0x00048495) navi_navi_volume_pane_srt

0xb1dd,	// (0x00048486) navi_navi_text_pane_srt_t1

0x68fc,	// (0x00043ba5) navi_navi_volume_pane_srt_g1

0x6904,	// (0x00043bad) volume_small_pane_srt_ParamLimits

0x6904,	// (0x00043bad) volume_small_pane_srt

0x5c90,	// (0x00042f39) volume_small_pane_srt_g1_ParamLimits

0x5c90,	// (0x00042f39) volume_small_pane_srt_g1

0x5ca0,	// (0x00042f49) volume_small_pane_srt_g2_ParamLimits

0x5ca0,	// (0x00042f49) volume_small_pane_srt_g2

0x5cb1,	// (0x00042f5a) volume_small_pane_srt_g3_ParamLimits

0x5cb1,	// (0x00042f5a) volume_small_pane_srt_g3

0x5cc2,	// (0x00042f6b) volume_small_pane_srt_g4_ParamLimits

0x5cc2,	// (0x00042f6b) volume_small_pane_srt_g4

0x5cd3,	// (0x00042f7c) volume_small_pane_srt_g5_ParamLimits

0x5cd3,	// (0x00042f7c) volume_small_pane_srt_g5

0x5ce4,	// (0x00042f8d) volume_small_pane_srt_g6_ParamLimits

0x5ce4,	// (0x00042f8d) volume_small_pane_srt_g6

0x5cf5,	// (0x00042f9e) volume_small_pane_srt_g7_ParamLimits

0x5cf5,	// (0x00042f9e) volume_small_pane_srt_g7

0x5d06,	// (0x00042faf) volume_small_pane_srt_g8_ParamLimits

0x5d06,	// (0x00042faf) volume_small_pane_srt_g8

0x5d17,	// (0x00042fc0) volume_small_pane_srt_g9_ParamLimits

0x5d17,	// (0x00042fc0) volume_small_pane_srt_g9

0x5d28,	// (0x00042fd1) volume_small_pane_srt_g10_ParamLimits

0x5d28,	// (0x00042fd1) volume_small_pane_srt_g10

0x0009,

0xf73b,	// (0x0004c9e4) volume_small_pane_srt_g_ParamLimits

0xf73b,	// (0x0004c9e4) volume_small_pane_srt_g

0x805e,	// (0x00045307) query_popup_data_pane_cp2

0xb1c3,	// (0x0004846c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1c3,	// (0x0004846c) navi_navi_icon_text_pane_srt_t1

0xa2cd,	// (0x00047576) navi_tabs_2_long_pane_srt

0xa2cd,	// (0x00047576) navi_tabs_2_pane_srt

0xa2cd,	// (0x00047576) navi_tabs_3_long_pane_srt

0xa2cd,	// (0x00047576) navi_tabs_3_pane_srt

0xa2cd,	// (0x00047576) navi_tabs_4_pane_srt

0x68dc,	// (0x00043b85) tabs_2_active_pane_srt_ParamLimits

0x68dc,	// (0x00043b85) tabs_2_active_pane_srt

0x68ec,	// (0x00043b95) tabs_2_passive_pane_srt_ParamLimits

0x68ec,	// (0x00043b95) tabs_2_passive_pane_srt

0x94d5,	// (0x0004677e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94d5,	// (0x0004677e) bg_passive_tab_pane_cp1_srt

0xb18f,	// (0x00048438) bg_passive_tab_pane_g1_cp1_srt

0x8dee,	// (0x00046097) bg_passive_tab_pane_g2_cp1_srt

0xb198,	// (0x00048441) bg_passive_tab_pane_g3_cp1_srt

0x7c5e,	// (0x00044f07) bg_active_tab_pane_cp1_srt_ParamLimits

0x7c5e,	// (0x00044f07) bg_active_tab_pane_cp1_srt

0xb1a1,	// (0x0004844a) tabs_2_active_pane_srt_g1

0xb1a9,	// (0x00048452) tabs_2_active_pane_srt_t1_ParamLimits

0xb1a9,	// (0x00048452) tabs_2_active_pane_srt_t1

0xb18f,	// (0x00048438) bg_active_tab_pane_g1_cp1_srt

0x8dee,	// (0x00046097) bg_active_tab_pane_g2_cp1_srt

0xb198,	// (0x00048441) bg_active_tab_pane_g3_cp1_srt

0x68a9,	// (0x00043b52) tabs_3_active_pane_srt_ParamLimits

0x68a9,	// (0x00043b52) tabs_3_active_pane_srt

0x68ba,	// (0x00043b63) tabs_3_passive_pane_cp_srt_ParamLimits

0x68ba,	// (0x00043b63) tabs_3_passive_pane_cp_srt

0x68cb,	// (0x00043b74) tabs_3_passive_pane_srt_ParamLimits

0x68cb,	// (0x00043b74) tabs_3_passive_pane_srt

0x94d5,	// (0x0004677e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94d5,	// (0x0004677e) bg_passive_tab_pane_cp2_srt

0x9365,	// (0x0004660e) bg_passive_tab_pane_g1_cp2_srt

0x8dee,	// (0x00046097) bg_passive_tab_pane_g2_cp2_srt

0x936e,	// (0x00046617) bg_passive_tab_pane_g3_cp2_srt

0x7c5e,	// (0x00044f07) bg_active_tab_pane_cp2_srt_ParamLimits

0x7c5e,	// (0x00044f07) bg_active_tab_pane_cp2_srt

0xb175,	// (0x0004841e) tabs_3_active_pane_srt_g1

0xb17d,	// (0x00048426) tabs_3_active_pane_srt_t1_ParamLimits

0xb17d,	// (0x00048426) tabs_3_active_pane_srt_t1

0x9365,	// (0x0004660e) bg_active_tab_pane_g1_cp2_srt

0x8dee,	// (0x00046097) bg_active_tab_pane_g2_cp2_srt

0x936e,	// (0x00046617) bg_active_tab_pane_g3_cp2_srt

0x6861,	// (0x00043b0a) tabs_4_active_pane_srt_ParamLimits

0x6861,	// (0x00043b0a) tabs_4_active_pane_srt

0x6873,	// (0x00043b1c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6873,	// (0x00043b1c) tabs_4_passive_pane_cp2_srt

0x5e9b,	// (0x00043144) aid_size_cell_toolbar

0x86df,	// (0x00045988) main_idle_act_pane_ParamLimits

0x605a,	// (0x00043303) popup_large_graphic_colour_window_ParamLimits

0x63c1,	// (0x0004366a) popup_toolbar_window_ParamLimits

0x63c1,	// (0x0004366a) popup_toolbar_window

0xaf90,	// (0x00048239) list_single_graphic_2heading_pane_ParamLimits

0xaf90,	// (0x00048239) list_single_graphic_2heading_pane

0x889b,	// (0x00045b44) aid_size_cell_apps_grid_lsc_pane

0x88ad,	// (0x00045b56) aid_size_cell_apps_grid_prt_pane

0x94d5,	// (0x0004677e) bg_wml_button_pane_cp1_ParamLimits

0x94d5,	// (0x0004677e) bg_wml_button_pane_cp1

0x9ca3,	// (0x00046f4c) form_midp_field_text_pane_t1_ParamLimits

0x9a73,	// (0x00046d1c) input_focus_pane_cp050_ParamLimits

0x9cda,	// (0x00046f83) list_midp_form_text_pane_ParamLimits

0x9c80,	// (0x00046f29) input_focus_pane_cp051_ParamLimits

0x9c94,	// (0x00046f3d) list_midp_choice_pane_ParamLimits

0x9b2c,	// (0x00046dd5) list_single_2graphic_pane_cp3_ParamLimits

0x9b2c,	// (0x00046dd5) list_single_2graphic_pane_cp3

0x9b4d,	// (0x00046df6) list_single_midp_graphic_pane_ParamLimits

0x9b4d,	// (0x00046df6) list_single_midp_graphic_pane

0x4be8,	// (0x00041e91) list_single_graphic_2heading_pane_g1_ParamLimits

0x4be8,	// (0x00041e91) list_single_graphic_2heading_pane_g1

0x4bf4,	// (0x00041e9d) list_single_graphic_2heading_pane_g4_ParamLimits

0x4bf4,	// (0x00041e9d) list_single_graphic_2heading_pane_g4

0x4c00,	// (0x00041ea9) list_single_graphic_2heading_pane_g5_ParamLimits

0x4c00,	// (0x00041ea9) list_single_graphic_2heading_pane_g5

0x0002,

0xf78e,	// (0x0004ca37) list_single_graphic_2heading_pane_g_ParamLimits

0xf78e,	// (0x0004ca37) list_single_graphic_2heading_pane_g

0x4c0c,	// (0x00041eb5) list_single_graphic_2heading_pane_t1_ParamLimits

0x4c0c,	// (0x00041eb5) list_single_graphic_2heading_pane_t1

0x4c20,	// (0x00041ec9) list_single_graphic_2heading_pane_t2_ParamLimits

0x4c20,	// (0x00041ec9) list_single_graphic_2heading_pane_t2

0x4c3c,	// (0x00041ee5) list_single_graphic_2heading_pane_t3_ParamLimits

0x4c3c,	// (0x00041ee5) list_single_graphic_2heading_pane_t3

0x0002,

0xf795,	// (0x0004ca3e) list_single_graphic_2heading_pane_t_ParamLimits

0xf795,	// (0x0004ca3e) list_single_graphic_2heading_pane_t

0x993d,	// (0x00046be6) bg_popup_sub_pane_cp2

0x9967,	// (0x00046c10) grid_toobar_pane

0x646e,	// (0x00043717) cell_toolbar_pane_ParamLimits

0x646e,	// (0x00043717) cell_toolbar_pane

0x99a3,	// (0x00046c4c) cell_toolbar_pane_g1_ParamLimits

0x99a3,	// (0x00046c4c) cell_toolbar_pane_g1

0x99b7,	// (0x00046c60) cell_toolbar_pane_g2_ParamLimits

0x99b7,	// (0x00046c60) cell_toolbar_pane_g2

0x0001,

0xf7a3,	// (0x0004ca4c) cell_toolbar_pane_g_ParamLimits

0xf7a3,	// (0x0004ca4c) cell_toolbar_pane_g

0x99d9,	// (0x00046c82) grid_highlight_pane_cp2_ParamLimits

0x99d9,	// (0x00046c82) grid_highlight_pane_cp2

0x99f3,	// (0x00046c9c) toolbar_button_pane

0x99ff,	// (0x00046ca8) toolbar_button_pane_g1

0x9a07,	// (0x00046cb0) toolbar_button_pane_g2

0x9a0f,	// (0x00046cb8) toolbar_button_pane_g3

0x9a17,	// (0x00046cc0) toolbar_button_pane_g4

0x9a1f,	// (0x00046cc8) toolbar_button_pane_g5

0x9a27,	// (0x00046cd0) toolbar_button_pane_g6

0x9a2f,	// (0x00046cd8) toolbar_button_pane_g7

0x9a37,	// (0x00046ce0) toolbar_button_pane_g8

0x9a3f,	// (0x00046ce8) toolbar_button_pane_g9

0x0009,

0xf7a8,	// (0x0004ca51) toolbar_button_pane_g

0x64a6,	// (0x0004374f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x64a6,	// (0x0004374f) list_single_2graphic_pane_g1_cp3

0x64b2,	// (0x0004375b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x64b2,	// (0x0004375b) list_single_2graphic_pane_g2_cp3

0x64c3,	// (0x0004376c) list_single_2graphic_pane_g3_cp3

0x64cb,	// (0x00043774) list_single_2graphic_pane_g4_cp3_ParamLimits

0x64cb,	// (0x00043774) list_single_2graphic_pane_g4_cp3

0x64d7,	// (0x00043780) list_single_2graphic_pane_t1_cp3_ParamLimits

0x64d7,	// (0x00043780) list_single_2graphic_pane_t1_cp3

0xb33f,	// (0x000485e8) list_single_midp_graphic_pane_g2_ParamLimits

0xb33f,	// (0x000485e8) list_single_midp_graphic_pane_g2

0x4bd8,	// (0x00041e81) aid_zoom_text_primary

0x5ea3,	// (0x0004314c) aid_zoom_text_secondary

0x941f,	// (0x000466c8) status_small_pane_g7_ParamLimits

0x941f,	// (0x000466c8) status_small_pane_g7

0x9442,	// (0x000466eb) status_small_pane_t1_ParamLimits

0x7b95,	// (0x00044e3e) title_pane_g2

0x0003,

0xf527,	// (0x0004c7d0) title_pane_g

0x8106,	// (0x000453af) aid_size_cell_colour_1_pane_ParamLimits

0x8106,	// (0x000453af) aid_size_cell_colour_1_pane

0x811a,	// (0x000453c3) aid_size_cell_colour_2_pane_ParamLimits

0x811a,	// (0x000453c3) aid_size_cell_colour_2_pane

0x812e,	// (0x000453d7) aid_size_cell_colour_3_pane_ParamLimits

0x812e,	// (0x000453d7) aid_size_cell_colour_3_pane

0x8142,	// (0x000453eb) aid_size_cell_colour_4_pane_ParamLimits

0x8142,	// (0x000453eb) aid_size_cell_colour_4_pane

0x58d1,	// (0x00042b7a) title_pane_stacon_g1_ParamLimits

0x58d1,	// (0x00042b7a) title_pane_stacon_g1

0xa0b4,	// (0x0004735d) popup_note_wait_window_g3_ParamLimits

0xa0b4,	// (0x0004735d) popup_note_wait_window_g3

0xa12a,	// (0x000473d3) popup_note_wait_window_t5_ParamLimits

0xa12a,	// (0x000473d3) popup_note_wait_window_t5

0x2758,	// (0x0003fa01) main_feb_china_hwr_fs_writing_pane

0x5f3b,	// (0x000431e4) popup_feb_china_hwr_fs_window_ParamLimits

0x5f3b,	// (0x000431e4) popup_feb_china_hwr_fs_window

0x6521,	// (0x000437ca) aid_size_cell_hwr_fs_ParamLimits

0x6521,	// (0x000437ca) aid_size_cell_hwr_fs

0x9a73,	// (0x00046d1c) bg_popup_sub_pane_cp3_ParamLimits

0x9a73,	// (0x00046d1c) bg_popup_sub_pane_cp3

0x6536,	// (0x000437df) grid_hwr_fs_pane_ParamLimits

0x6536,	// (0x000437df) grid_hwr_fs_pane

0x654e,	// (0x000437f7) linegrid_hwr_fs_pane_ParamLimits

0x654e,	// (0x000437f7) linegrid_hwr_fs_pane

0x655e,	// (0x00043807) cell_hwr_fs_pane_ParamLimits

0x655e,	// (0x00043807) cell_hwr_fs_pane

0x9a7f,	// (0x00046d28) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a7f,	// (0x00046d28) linegrid_hwr_fs_pane_g1

0x9a8b,	// (0x00046d34) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a8b,	// (0x00046d34) linegrid_hwr_fs_pane_g2

0x9a9d,	// (0x00046d46) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a9d,	// (0x00046d46) linegrid_hwr_fs_pane_g3

0x6580,	// (0x00043829) linegrid_hwr_fs_pane_g4_ParamLimits

0x6580,	// (0x00043829) linegrid_hwr_fs_pane_g4

0x659a,	// (0x00043843) linegrid_hwr_fs_pane_g5_ParamLimits

0x659a,	// (0x00043843) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x0004ca77) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x0004ca77) linegrid_hwr_fs_pane_g

0x9aa9,	// (0x00046d52) cell_hwr_fs_pane_g1_ParamLimits

0x9aa9,	// (0x00046d52) cell_hwr_fs_pane_g1

0x9874,	// (0x00046b1d) cell_hwr_fs_pane_g2_ParamLimits

0x9874,	// (0x00046b1d) cell_hwr_fs_pane_g2

0x9abf,	// (0x00046d68) cell_hwr_fs_pane_g3_ParamLimits

0x9abf,	// (0x00046d68) cell_hwr_fs_pane_g3

0x9acc,	// (0x00046d75) cell_hwr_fs_pane_g4_ParamLimits

0x9acc,	// (0x00046d75) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x0004ca82) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x0004ca82) cell_hwr_fs_pane_g

0x65b0,	// (0x00043859) cell_hwr_fs_pane_t1

0x2758,	// (0x0003fa01) grid_highlight_pane_cp6

0x2758,	// (0x0003fa01) main_idle_act2_pane

0x8652,	// (0x000458fb) aid_inside_area_popup_secondary

0xa761,	// (0x00047a0a) aid_inside_area_window_primary_ParamLimits

0xa761,	// (0x00047a0a) aid_inside_area_window_primary

0xb2dc,	// (0x00048585) ai2_news_ticker_pane

0xb2e4,	// (0x0004858d) aid_size_cell_ai1_link_ParamLimits

0xb2e4,	// (0x0004858d) aid_size_cell_ai1_link

0xb2fe,	// (0x000485a7) popup_ai2_data_window_ParamLimits

0xb2fe,	// (0x000485a7) popup_ai2_data_window

0xb314,	// (0x000485bd) popup_ai2_link_window_ParamLimits

0xb314,	// (0x000485bd) popup_ai2_link_window

0x9a73,	// (0x00046d1c) bg_popup_sub_pane_cp4_ParamLimits

0x9a73,	// (0x00046d1c) bg_popup_sub_pane_cp4

0xb328,	// (0x000485d1) grid_ai2_link_pane_ParamLimits

0xb328,	// (0x000485d1) grid_ai2_link_pane

0xb34b,	// (0x000485f4) popup_ai2_link_window_g1_ParamLimits

0xb34b,	// (0x000485f4) popup_ai2_link_window_g1

0xb357,	// (0x00048600) popup_ai2_link_window_g2_ParamLimits

0xb357,	// (0x00048600) popup_ai2_link_window_g2

0x0001,

0xf9ac,	// (0x0004cc55) popup_ai2_link_window_g_ParamLimits

0xf9ac,	// (0x0004cc55) popup_ai2_link_window_g

0xb366,	// (0x0004860f) ai2_mp_button_pane

0xb36e,	// (0x00048617) ai2_mp_volume_pane

0x9c80,	// (0x00046f29) bg_popup_sub_pane_cp5_ParamLimits

0x9c80,	// (0x00046f29) bg_popup_sub_pane_cp5

0xb376,	// (0x0004861f) heading_ai2_gene_pane_ParamLimits

0xb376,	// (0x0004861f) heading_ai2_gene_pane

0xb382,	// (0x0004862b) list_ai2_gene_pane_ParamLimits

0xb382,	// (0x0004862b) list_ai2_gene_pane

0xb3ca,	// (0x00048673) cell_ai2_link_pane_ParamLimits

0xb3ca,	// (0x00048673) cell_ai2_link_pane

0xb3e0,	// (0x00048689) cell_ai2_link_pane_g1

0x2758,	// (0x0003fa01) grid_highlight_pane_cp7

0x6919,	// (0x00043bc2) ai2_mp_volume_pane_g1

0xb4b0,	// (0x00048759) ai2_mp_volume_pane_g2

0xb425,	// (0x000486ce) list_ai2_gene_pane_t1

0xb4b8,	// (0x00048761) ai2_mp_volume_pane_g3

0x0002,

0xf9c5,	// (0x0004cc6e) ai2_mp_volume_pane_g

0x6921,	// (0x00043bca) volume_small_pane_cp3

0xb4c0,	// (0x00048769) aid_size_cell_ai2_button

0xb4c8,	// (0x00048771) grid_ai2_button_pane

0xb4d1,	// (0x0004877a) cell_ai2_button_pane_ParamLimits

0xb4d1,	// (0x0004877a) cell_ai2_button_pane

0x274e,	// (0x0003f9f7) cell_ai2_button_pane_g1

0x2758,	// (0x0003fa01) grid_highlight_pane_cp8

0xb470,	// (0x00048719) ai2_gene_pane_t1_ParamLimits

0xb470,	// (0x00048719) ai2_gene_pane_t1

0x5e91,	// (0x0004313a) aid_height_parent_landscape

0xadc7,	// (0x00048070) aid_height_set_list

0xadd8,	// (0x00048081) aid_size_parent

0xb0ff,	// (0x000483a8) aid_size_cell_graphic_pane_ParamLimits

0xb392,	// (0x0004863b) popup_ai2_data_window_g1_ParamLimits

0xb392,	// (0x0004863b) popup_ai2_data_window_g1

0xb39e,	// (0x00048647) ai2_news_ticker_pane_g1

0xb3a6,	// (0x0004864f) ai2_news_ticker_pane_g2

0x0001,

0xf9b1,	// (0x0004cc5a) ai2_news_ticker_pane_g

0xb3ae,	// (0x00048657) ai2_news_ticker_pane_t1

0xb3bc,	// (0x00048665) ai2_news_ticker_pane_t2

0x0001,

0xf9b6,	// (0x0004cc5f) ai2_news_ticker_pane_t

0xb3e9,	// (0x00048692) heading_ai2_gene_pane_g1

0xb3f1,	// (0x0004869a) heading_ai2_gene_pane_t1_ParamLimits

0xb3f1,	// (0x0004869a) heading_ai2_gene_pane_t1

0xb406,	// (0x000486af) list_highlight_pane_cp6

0xb40e,	// (0x000486b7) ai2_gene_pane_ParamLimits

0xb40e,	// (0x000486b7) ai2_gene_pane

0xb433,	// (0x000486dc) list_ai2_gene_pane_t2

0x0001,

0xf9bb,	// (0x0004cc64) list_ai2_gene_pane_t

0xb441,	// (0x000486ea) list_highlight_pane_cp8_ParamLimits

0xb441,	// (0x000486ea) list_highlight_pane_cp8

0xb452,	// (0x000486fb) ai2_gene_pane_g1_ParamLimits

0xb452,	// (0x000486fb) ai2_gene_pane_g1

0xb464,	// (0x0004870d) ai2_gene_pane_g2_ParamLimits

0xb464,	// (0x0004870d) ai2_gene_pane_g2

0x0001,

0xf9c0,	// (0x0004cc69) ai2_gene_pane_g_ParamLimits

0xf9c0,	// (0x0004cc69) ai2_gene_pane_g

0x8481,	// (0x0004572a) scroll_pane_cp12

0x5e4e,	// (0x000430f7) control_pane_t3_ParamLimits

0x5e4e,	// (0x000430f7) control_pane_t3

0x9433,	// (0x000466dc) status_small_pane_g8_ParamLimits

0x9433,	// (0x000466dc) status_small_pane_g8

0x6021,	// (0x000432ca) popup_find_window_ParamLimits

0x6238,	// (0x000434e1) popup_note_image_window_ParamLimits

0x4515,	// (0x000417be) list_double2_graphic_pane_vc_g1_ParamLimits

0x4515,	// (0x000417be) list_double2_graphic_pane_vc_g1

0x8e12,	// (0x000460bb) list_double2_graphic_pane_vc_g2_ParamLimits

0x8e12,	// (0x000460bb) list_double2_graphic_pane_vc_g2

0x5801,	// (0x00042aaa) list_double2_graphic_pane_vc_g3_ParamLimits

0x5801,	// (0x00042aaa) list_double2_graphic_pane_vc_g3

0x0002,

0xf79c,	// (0x0004ca45) list_double2_graphic_pane_vc_g_ParamLimits

0xf79c,	// (0x0004ca45) list_double2_graphic_pane_vc_g

0x4c54,	// (0x00041efd) list_double2_graphic_pane_vc_t1_ParamLimits

0x4c54,	// (0x00041efd) list_double2_graphic_pane_vc_t1

0x8e12,	// (0x000460bb) list_single_heading_pane_vc_g1_ParamLimits

0x8e12,	// (0x000460bb) list_single_heading_pane_vc_g1

0x5801,	// (0x00042aaa) list_single_heading_pane_vc_g2_ParamLimits

0x5801,	// (0x00042aaa) list_single_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x0004c854) list_single_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x0004c854) list_single_heading_pane_vc_g

0x4c6a,	// (0x00041f13) list_single_heading_pane_vc_t1_ParamLimits

0x4c6a,	// (0x00041f13) list_single_heading_pane_vc_t1

0x4c80,	// (0x00041f29) list_single_heading_pane_vc_t2_ParamLimits

0x4c80,	// (0x00041f29) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x0004ca66) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x0004ca66) list_single_heading_pane_vc_t

0x6509,	// (0x000437b2) list_setting_number_pane_vc_g1_ParamLimits

0x6509,	// (0x000437b2) list_setting_number_pane_vc_g1

0x6515,	// (0x000437be) list_setting_number_pane_vc_g2_ParamLimits

0x6515,	// (0x000437be) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x0004ca6b) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x0004ca6b) list_setting_number_pane_vc_g

0x4c96,	// (0x00041f3f) list_setting_number_pane_vc_t1_ParamLimits

0x4c96,	// (0x00041f3f) list_setting_number_pane_vc_t1

0x4caa,	// (0x00041f53) list_setting_number_pane_vc_t2_ParamLimits

0x4caa,	// (0x00041f53) list_setting_number_pane_vc_t2

0x4cc6,	// (0x00041f6f) list_setting_number_pane_vc_t3_ParamLimits

0x4cc6,	// (0x00041f6f) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x0004ca70) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x0004ca70) list_setting_number_pane_vc_t

0x4cf2,	// (0x00041f9b) set_value_pane_vc_ParamLimits

0x4cf2,	// (0x00041f9b) set_value_pane_vc

0xaf90,	// (0x00048239) list_double2_graphic_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_double2_graphic_pane_vc

0xaf90,	// (0x00048239) list_double2_large_graphic_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_double2_large_graphic_pane_vc

0xaf90,	// (0x00048239) list_double2_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_double2_pane_vc

0xaf90,	// (0x00048239) list_double_graphic_heading_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_double_graphic_heading_pane_vc

0xaf90,	// (0x00048239) list_double_graphic_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_double_graphic_pane_vc

0xaf90,	// (0x00048239) list_double_heading_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_double_heading_pane_vc

0xafa2,	// (0x0004824b) list_double_large_graphic_pane_vc_ParamLimits

0xafa2,	// (0x0004824b) list_double_large_graphic_pane_vc

0xaf90,	// (0x00048239) list_double_number_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_double_number_pane_vc

0xaf90,	// (0x00048239) list_double_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_double_pane_vc

0xaf90,	// (0x00048239) list_double_time_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_double_time_pane_vc

0xaf90,	// (0x00048239) list_setting_number_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_setting_number_pane_vc

0xaf90,	// (0x00048239) list_setting_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_setting_pane_vc

0xaf90,	// (0x00048239) list_single_graphic_heading_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_single_graphic_heading_pane_vc

0xaf90,	// (0x00048239) list_single_heading_pane_vc_ParamLimits

0xaf90,	// (0x00048239) list_single_heading_pane_vc

0x6805,	// (0x00043aae) list_single_number_heading_pane_vc_ParamLimits

0x6805,	// (0x00043aae) list_single_number_heading_pane_vc

0x4dca,	// (0x00042073) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4dca,	// (0x00042073) list_double_graphic_heading_pane_vc_g1

0x4dd6,	// (0x0004207f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4dd6,	// (0x0004207f) list_double_graphic_heading_pane_vc_g2

0x4de2,	// (0x0004208b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4de2,	// (0x0004208b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9cc,	// (0x0004cc75) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9cc,	// (0x0004cc75) list_double_graphic_heading_pane_vc_g

0x4dee,	// (0x00042097) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4dee,	// (0x00042097) list_double_graphic_heading_pane_vc_t1

0x4e0a,	// (0x000420b3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4e0a,	// (0x000420b3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d3,	// (0x0004cc7c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d3,	// (0x0004cc7c) list_double_graphic_heading_pane_vc_t

0x6509,	// (0x000437b2) list_setting_pane_vc_g1_ParamLimits

0x6509,	// (0x000437b2) list_setting_pane_vc_g1

0x6515,	// (0x000437be) list_setting_pane_vc_g2_ParamLimits

0x6515,	// (0x000437be) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x0004ca6b) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x0004ca6b) list_setting_pane_vc_g

0x4e28,	// (0x000420d1) list_setting_pane_vc_t1_ParamLimits

0x4e28,	// (0x000420d1) list_setting_pane_vc_t1

0x4e44,	// (0x000420ed) list_setting_pane_vc_t2_ParamLimits

0x4e44,	// (0x000420ed) list_setting_pane_vc_t2

0x0001,

0xfa01,	// (0x0004ccaa) list_setting_pane_vc_t_ParamLimits

0xfa01,	// (0x0004ccaa) list_setting_pane_vc_t

0x4cf2,	// (0x00041f9b) set_value_pane_cp_vc_ParamLimits

0x4cf2,	// (0x00041f9b) set_value_pane_cp_vc

0x8e12,	// (0x000460bb) list_single_number_heading_pane_vc_g1_ParamLimits

0x8e12,	// (0x000460bb) list_single_number_heading_pane_vc_g1

0x5801,	// (0x00042aaa) list_single_number_heading_pane_vc_g2_ParamLimits

0x5801,	// (0x00042aaa) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x0004c854) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x0004c854) list_single_number_heading_pane_vc_g

0x44db,	// (0x00041784) list_single_number_heading_pane_vc_t1_ParamLimits

0x44db,	// (0x00041784) list_single_number_heading_pane_vc_t1

0x4e60,	// (0x00042109) list_single_number_heading_pane_vc_t2_ParamLimits

0x4e60,	// (0x00042109) list_single_number_heading_pane_vc_t2

0x4e76,	// (0x0004211f) list_single_number_heading_pane_vc_t3_ParamLimits

0x4e76,	// (0x0004211f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa06,	// (0x0004ccaf) list_single_number_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0004ccaf) list_single_number_heading_pane_vc_t

0x4515,	// (0x000417be) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4515,	// (0x000417be) list_single_graphic_heading_pane_vc_g1

0x8e12,	// (0x000460bb) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8e12,	// (0x000460bb) list_single_graphic_heading_pane_vc_g4

0x5801,	// (0x00042aaa) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5801,	// (0x00042aaa) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79c,	// (0x0004ca45) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79c,	// (0x0004ca45) list_single_graphic_heading_pane_vc_g

0x44db,	// (0x00041784) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x44db,	// (0x00041784) list_single_graphic_heading_pane_vc_t1

0x4e88,	// (0x00042131) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4e88,	// (0x00042131) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0d,	// (0x0004ccb6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x0004ccb6) list_single_graphic_heading_pane_vc_t

0x8e12,	// (0x000460bb) list_double2_pane_vc_g1_ParamLimits

0x8e12,	// (0x000460bb) list_double2_pane_vc_g1

0x5801,	// (0x00042aaa) list_double2_pane_vc_g2_ParamLimits

0x5801,	// (0x00042aaa) list_double2_pane_vc_g2

0x0001,

0xf5ab,	// (0x0004c854) list_double2_pane_vc_g_ParamLimits

0xf5ab,	// (0x0004c854) list_double2_pane_vc_g

0x4d7d,	// (0x00042026) list_double2_pane_vc_t1_ParamLimits

0x4d7d,	// (0x00042026) list_double2_pane_vc_t1

0x692a,	// (0x00043bd3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x692a,	// (0x00043bd3) list_double2_large_graphic_pane_vc_g1

0x8e12,	// (0x000460bb) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8e12,	// (0x000460bb) list_double2_large_graphic_pane_vc_g2

0x5801,	// (0x00042aaa) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5801,	// (0x00042aaa) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa12,	// (0x0004ccbb) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa12,	// (0x0004ccbb) list_double2_large_graphic_pane_vc_g

0x4e9a,	// (0x00042143) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4e9a,	// (0x00042143) list_double2_large_graphic_pane_vc_t1

0x6936,	// (0x00043bdf) list_double_time_pane_vc_g1_ParamLimits

0x6936,	// (0x00043bdf) list_double_time_pane_vc_g1

0x6942,	// (0x00043beb) list_double_time_pane_vc_g2_ParamLimits

0x6942,	// (0x00043beb) list_double_time_pane_vc_g2

0x0001,

0xfa19,	// (0x0004ccc2) list_double_time_pane_vc_g_ParamLimits

0xfa19,	// (0x0004ccc2) list_double_time_pane_vc_g

0x4eb0,	// (0x00042159) list_double_time_pane_vc_t1_ParamLimits

0x4eb0,	// (0x00042159) list_double_time_pane_vc_t1

0x4ed4,	// (0x0004217d) list_double_time_pane_vc_t2_ParamLimits

0x4ed4,	// (0x0004217d) list_double_time_pane_vc_t2

0x4f23,	// (0x000421cc) list_double_time_pane_vc_t3_ParamLimits

0x4f23,	// (0x000421cc) list_double_time_pane_vc_t3

0x4f35,	// (0x000421de) list_double_time_pane_vc_t4_ParamLimits

0x4f35,	// (0x000421de) list_double_time_pane_vc_t4

0x0003,

0xfa1e,	// (0x0004ccc7) list_double_time_pane_vc_t_ParamLimits

0xfa1e,	// (0x0004ccc7) list_double_time_pane_vc_t

0x8e12,	// (0x000460bb) list_double_pane_vc_g1_ParamLimits

0x8e12,	// (0x000460bb) list_double_pane_vc_g1

0x5801,	// (0x00042aaa) list_double_pane_vc_g2_ParamLimits

0x5801,	// (0x00042aaa) list_double_pane_vc_g2

0x0001,

0xf5ab,	// (0x0004c854) list_double_pane_vc_g_ParamLimits

0xf5ab,	// (0x0004c854) list_double_pane_vc_g

0x4f49,	// (0x000421f2) list_double_pane_vc_t1_ParamLimits

0x4f49,	// (0x000421f2) list_double_pane_vc_t1

0x4f5d,	// (0x00042206) list_double_pane_vc_t2_ParamLimits

0x4f5d,	// (0x00042206) list_double_pane_vc_t2

0x0001,

0xfa27,	// (0x0004ccd0) list_double_pane_vc_t_ParamLimits

0xfa27,	// (0x0004ccd0) list_double_pane_vc_t

0x8e12,	// (0x000460bb) list_double_number_pane_vc_g1_ParamLimits

0x8e12,	// (0x000460bb) list_double_number_pane_vc_g1

0x5801,	// (0x00042aaa) list_double_number_pane_vc_g2_ParamLimits

0x5801,	// (0x00042aaa) list_double_number_pane_vc_g2

0x0001,

0xf5ab,	// (0x0004c854) list_double_number_pane_vc_g_ParamLimits

0xf5ab,	// (0x0004c854) list_double_number_pane_vc_g

0x4f75,	// (0x0004221e) list_double_number_pane_vc_t1_ParamLimits

0x4f75,	// (0x0004221e) list_double_number_pane_vc_t1

0x4f87,	// (0x00042230) list_double_number_pane_vc_t2_ParamLimits

0x4f87,	// (0x00042230) list_double_number_pane_vc_t2

0x4f9b,	// (0x00042244) list_double_number_pane_vc_t3_ParamLimits

0x4f9b,	// (0x00042244) list_double_number_pane_vc_t3

0x0002,

0xfa2c,	// (0x0004ccd5) list_double_number_pane_vc_t_ParamLimits

0xfa2c,	// (0x0004ccd5) list_double_number_pane_vc_t

0x694e,	// (0x00043bf7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x694e,	// (0x00043bf7) list_double_large_graphic_pane_vc_g1

0x696a,	// (0x00043c13) list_double_large_graphic_pane_vc_g2_ParamLimits

0x696a,	// (0x00043c13) list_double_large_graphic_pane_vc_g2

0x697e,	// (0x00043c27) list_double_large_graphic_pane_vc_g3_ParamLimits

0x697e,	// (0x00043c27) list_double_large_graphic_pane_vc_g3

0x4fb5,	// (0x0004225e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4fb5,	// (0x0004225e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa33,	// (0x0004ccdc) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa33,	// (0x0004ccdc) list_double_large_graphic_pane_vc_g

0x4fc4,	// (0x0004226d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4fc4,	// (0x0004226d) list_double_large_graphic_pane_vc_t1

0x4fe0,	// (0x00042289) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4fe0,	// (0x00042289) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3c,	// (0x0004cce5) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3c,	// (0x0004cce5) list_double_large_graphic_pane_vc_t

0x4dd6,	// (0x0004207f) list_double_heading_pane_vc_g1_ParamLimits

0x4dd6,	// (0x0004207f) list_double_heading_pane_vc_g1

0x4de2,	// (0x0004208b) list_double_heading_pane_vc_g2_ParamLimits

0x4de2,	// (0x0004208b) list_double_heading_pane_vc_g2

0x0001,

0xfa41,	// (0x0004ccea) list_double_heading_pane_vc_g_ParamLimits

0xfa41,	// (0x0004ccea) list_double_heading_pane_vc_g

0x5002,	// (0x000422ab) list_double_heading_pane_vc_t1_ParamLimits

0x5002,	// (0x000422ab) list_double_heading_pane_vc_t1

0x5016,	// (0x000422bf) list_double_heading_pane_vc_t2_ParamLimits

0x5016,	// (0x000422bf) list_double_heading_pane_vc_t2

0x0001,

0xfa46,	// (0x0004ccef) list_double_heading_pane_vc_t_ParamLimits

0xfa46,	// (0x0004ccef) list_double_heading_pane_vc_t

0x502e,	// (0x000422d7) list_double_graphic_pane_vc_g1_ParamLimits

0x502e,	// (0x000422d7) list_double_graphic_pane_vc_g1

0x698d,	// (0x00043c36) list_double_graphic_pane_vc_g2_ParamLimits

0x698d,	// (0x00043c36) list_double_graphic_pane_vc_g2

0x8e12,	// (0x000460bb) list_double_graphic_pane_vc_g3_ParamLimits

0x8e12,	// (0x000460bb) list_double_graphic_pane_vc_g3

0x0003,

0xfa4b,	// (0x0004ccf4) list_double_graphic_pane_vc_g_ParamLimits

0xfa4b,	// (0x0004ccf4) list_double_graphic_pane_vc_g

0x503a,	// (0x000422e3) list_double_graphic_pane_vc_t1_ParamLimits

0x503a,	// (0x000422e3) list_double_graphic_pane_vc_t1

0x5064,	// (0x0004230d) list_double_graphic_pane_vc_t2_ParamLimits

0x5064,	// (0x0004230d) list_double_graphic_pane_vc_t2

0x0001,

0xfa54,	// (0x0004ccfd) list_double_graphic_pane_vc_t_ParamLimits

0xfa54,	// (0x0004ccfd) list_double_graphic_pane_vc_t

0x5393,	// (0x0004263c) aid_size_cell_fastswap

0x539b,	// (0x00042644) aid_size_cell_touch_ParamLimits

0x539b,	// (0x00042644) aid_size_cell_touch

0x55fc,	// (0x000428a5) popup_fast_swap_wide_window_ParamLimits

0x55fc,	// (0x000428a5) popup_fast_swap_wide_window

0x5710,	// (0x000429b9) touch_pane_ParamLimits

0x5710,	// (0x000429b9) touch_pane

0x84e3,	// (0x0004578c) button_value_adjust_pane_cp2

0x48ff,	// (0x00041ba8) button_value_adjust_pane_cp4

0x4923,	// (0x00041bcc) form_field_data_pane_cp2

0x4944,	// (0x00041bed) form_field_data_wide_pane_cp2

0x896a,	// (0x00045c13) bg_scroll_pane_ParamLimits

0x5a33,	// (0x00042cdc) scroll_handle_pane_ParamLimits

0x5a47,	// (0x00042cf0) scroll_sc2_down_pane_ParamLimits

0x5a47,	// (0x00042cf0) scroll_sc2_down_pane

0x899b,	// (0x00045c44) scroll_sc2_up_pane_ParamLimits

0x899b,	// (0x00045c44) scroll_sc2_up_pane

0xbbb9,	// (0x00048e62) grid_wheel_folder_pane_g1_ParamLimits

0xbbb9,	// (0x00048e62) grid_wheel_folder_pane_g1

0x5c28,	// (0x00042ed1) clock_nsta_pane_cp2_ParamLimits

0x5c28,	// (0x00042ed1) clock_nsta_pane_cp2

0x91b9,	// (0x00046462) listscroll_midp_pane_ParamLimits

0x91c5,	// (0x0004646e) midp_canvas_pane

0x94ad,	// (0x00046756) nsta_clock_indic_pane

0x94e1,	// (0x0004678a) listscroll_form_pane_vc

0x94e9,	// (0x00046792) listscroll_set_pane_vc_ParamLimits

0x94e9,	// (0x00046792) listscroll_set_pane_vc

0x95e2,	// (0x0004688b) clock_nsta_pane

0x965d,	// (0x00046906) indicator_nsta_pane

0x993d,	// (0x00046be6) bg_popup_sub_pane_cp2_ParamLimits

0x9951,	// (0x00046bfa) find_pane_cp2_ParamLimits

0x9951,	// (0x00046bfa) find_pane_cp2

0x9967,	// (0x00046c10) grid_toobar_pane_ParamLimits

0x9a47,	// (0x00046cf0) list_form_gen_pane_vc_ParamLimits

0x9a47,	// (0x00046cf0) list_form_gen_pane_vc

0x9a5d,	// (0x00046d06) scroll_pane_cp8_vc_ParamLimits

0x9a5d,	// (0x00046d06) scroll_pane_cp8_vc

0x9ad9,	// (0x00046d82) data_form_wide_pane_vc_ParamLimits

0x9ad9,	// (0x00046d82) data_form_wide_pane_vc

0x9ae5,	// (0x00046d8e) form_field_data_wide_pane_vc_g1

0x9aed,	// (0x00046d96) form_field_data_wide_pane_vc_t1_ParamLimits

0x9aed,	// (0x00046d96) form_field_data_wide_pane_vc_t1

0x84f7,	// (0x000457a0) input_focus_pane_cp6_vc_ParamLimits

0x84f7,	// (0x000457a0) input_focus_pane_cp6_vc

0x9e13,	// (0x000470bc) list_midp_pane_ParamLimits

0x9e1f,	// (0x000470c8) scroll_pane_cp16_ParamLimits

0x9e1f,	// (0x000470c8) scroll_pane_cp16

0x9e89,	// (0x00047132) button_value_adjust_pane_ParamLimits

0x9e89,	// (0x00047132) button_value_adjust_pane

0xadea,	// (0x00048093) button_value_adjust_pane_cp6_ParamLimits

0xadea,	// (0x00048093) button_value_adjust_pane_cp6

0xaf14,	// (0x000481bd) settings_code_pane_cp_ParamLimits

0xaf14,	// (0x000481bd) settings_code_pane_cp

0x274e,	// (0x0003f9f7) cell_touch_pane_g1

0x274e,	// (0x0003f9f7) cell_touch_pane_g2

0x0001,

0xf6e1,	// (0x0004c98a) cell_touch_pane_g

0xb4e3,	// (0x0004878c) cell_touch_pane_cp_ParamLimits

0xb4e3,	// (0x0004878c) cell_touch_pane_cp

0xb4f3,	// (0x0004879c) cell_touch_pane_ParamLimits

0xb4f3,	// (0x0004879c) cell_touch_pane

0x274e,	// (0x0003f9f7) scroll_sc2_down_pane_g1

0x274e,	// (0x0003f9f7) scroll_sc2_up_pane_g1

0x2758,	// (0x0003fa01) bg_set_opt_pane_cp4_vc

0xb505,	// (0x000487ae) list_set_graphic_pane_vc_g1_ParamLimits

0xb505,	// (0x000487ae) list_set_graphic_pane_vc_g1

0xb511,	// (0x000487ba) list_set_graphic_pane_vc_g2_ParamLimits

0xb511,	// (0x000487ba) list_set_graphic_pane_vc_g2

0x0001,

0xf9d8,	// (0x0004cc81) list_set_graphic_pane_vc_g_ParamLimits

0xf9d8,	// (0x0004cc81) list_set_graphic_pane_vc_g

0xb51d,	// (0x000487c6) text_primary_small_cp13_vc_ParamLimits

0xb51d,	// (0x000487c6) text_primary_small_cp13_vc

0xb535,	// (0x000487de) list_set_graphic_pane_vc_ParamLimits

0xb535,	// (0x000487de) list_set_graphic_pane_vc

0x2758,	// (0x0003fa01) input_focus_pane_cp2_vc

0x274e,	// (0x0003f9f7) setting_code_pane_vc_g1

0x7ca9,	// (0x00044f52) setting_code_pane_vc_t1

0xb548,	// (0x000487f1) set_text_pane_vc_t1_ParamLimits

0xb548,	// (0x000487f1) set_text_pane_vc_t1

0x2758,	// (0x0003fa01) input_focus_pane_cp1_vc

0xb564,	// (0x0004880d) list_set_text_pane_vc

0x274e,	// (0x0003f9f7) setting_text_pane_vc_g1

0x2758,	// (0x0003fa01) bg_set_opt_pane_cp2_vc

0x7ca0,	// (0x00044f49) setting_slider_graphic_pane_vc_g1

0xb56e,	// (0x00048817) setting_slider_graphic_pane_vc_t1

0xb57e,	// (0x00048827) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9dd,	// (0x0004cc86) setting_slider_graphic_pane_vc_t

0xb58e,	// (0x00048837) slider_set_pane_cp_vc

0xb596,	// (0x0004883f) slider_set_pane_vc_g1

0xb59f,	// (0x00048848) slider_set_pane_vc_g2

0x0006,

0xf9e2,	// (0x0004cc8b) slider_set_pane_vc_g

0x8543,	// (0x000457ec) set_opt_bg_pane_g1_copy1

0x854b,	// (0x000457f4) set_opt_bg_pane_g2_copy1

0xb5cb,	// (0x00048874) set_opt_bg_pane_g3_copy1

0x855b,	// (0x00045804) set_opt_bg_pane_g4_copy1

0x8563,	// (0x0004580c) set_opt_bg_pane_g5_copy1

0x856b,	// (0x00045814) set_opt_bg_pane_g6_copy1

0xb5d5,	// (0x0004887e) set_opt_bg_pane_g7_copy1

0xb5df,	// (0x00048888) set_opt_bg_pane_g8_copy1

0xb5e9,	// (0x00048892) set_opt_bg_pane_g9_copy1

0x2758,	// (0x0003fa01) bg_set_opt_pane_cp_vc

0xb5f3,	// (0x0004889c) setting_slider_pane_vc_t1

0xb602,	// (0x000488ab) setting_slider_pane_vc_t2

0xb612,	// (0x000488bb) setting_slider_pane_vc_t3

0x0002,

0xf9f1,	// (0x0004cc9a) setting_slider_pane_vc_t

0xb622,	// (0x000488cb) slider_set_pane_vc

0x65be,	// (0x00043867) volume_set_pane_vc_g1

0x65c7,	// (0x00043870) volume_set_pane_vc_g2

0x65d0,	// (0x00043879) volume_set_pane_vc_g3

0x65d9,	// (0x00043882) volume_set_pane_vc_g4

0x65e2,	// (0x0004388b) volume_set_pane_vc_g5

0x65eb,	// (0x00043894) volume_set_pane_vc_g6

0x65f4,	// (0x0004389d) volume_set_pane_vc_g7

0x65fd,	// (0x000438a6) volume_set_pane_vc_g8

0x6606,	// (0x000438af) volume_set_pane_vc_g9

0x660f,	// (0x000438b8) volume_set_pane_vc_g10

0x0009,

0xf88f,	// (0x0004cb38) volume_set_pane_vc_g

0xb62a,	// (0x000488d3) volume_set_pane_vc

0xb632,	// (0x000488db) button_value_adjust_pane_cp1_vc

0xb63c,	// (0x000488e5) list_highlight_pane_cp2_vc

0xb645,	// (0x000488ee) list_set_pane_vc_ParamLimits

0xb645,	// (0x000488ee) list_set_pane_vc

0xb6a3,	// (0x0004894c) main_pane_set_vc_t1_ParamLimits

0xb6a3,	// (0x0004894c) main_pane_set_vc_t1

0xb6b8,	// (0x00048961) main_pane_set_vc_t2_ParamLimits

0xb6b8,	// (0x00048961) main_pane_set_vc_t2

0xb6ca,	// (0x00048973) main_pane_set_vc_t3_ParamLimits

0xb6ca,	// (0x00048973) main_pane_set_vc_t3

0xb6de,	// (0x00048987) main_pane_set_vc_t4_ParamLimits

0xb6de,	// (0x00048987) main_pane_set_vc_t4

0x0003,

0xf9f8,	// (0x0004cca1) main_pane_set_vc_t_ParamLimits

0xf9f8,	// (0x0004cca1) main_pane_set_vc_t

0xb6f2,	// (0x0004899b) setting_code_pane_vc_ParamLimits

0xb6f2,	// (0x0004899b) setting_code_pane_vc

0xb703,	// (0x000489ac) setting_slider_graphic_pane_vc

0xb703,	// (0x000489ac) setting_slider_pane_vc

0xb703,	// (0x000489ac) setting_text_pane_vc

0xb703,	// (0x000489ac) setting_volume_pane_vc

0xb70d,	// (0x000489b6) scroll_pane_cp121_vc

0x84d1,	// (0x0004577a) set_content_pane_vc

0xb715,	// (0x000489be) button_value_adjust_pane_g1

0xb71e,	// (0x000489c7) button_value_adjust_pane_g2

0x0001,

0xfa59,	// (0x0004cd02) button_value_adjust_pane_g

0xb727,	// (0x000489d0) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb727,	// (0x000489d0) form_field_slider_wide_pane_vc_t1

0xb73b,	// (0x000489e4) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb73b,	// (0x000489e4) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5e,	// (0x0004cd07) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5e,	// (0x0004cd07) form_field_slider_wide_pane_vc_t

0x7ed9,	// (0x00045182) input_focus_pane_cp10_vc_ParamLimits

0x7ed9,	// (0x00045182) input_focus_pane_cp10_vc

0xb769,	// (0x00048a12) slider_cont_pane_cp1_vc_ParamLimits

0xb769,	// (0x00048a12) slider_cont_pane_cp1_vc

0xb77b,	// (0x00048a24) slider_form_pane_g1_cp2

0xb59f,	// (0x00048848) slider_form_pane_g2_cp2

0xb7a8,	// (0x00048a51) form_field_slider_pane_vc_t3

0xb7b6,	// (0x00048a5f) form_field_slider_pane_vc_t4

0xb7c4,	// (0x00048a6d) slider_form_pane_vc_ParamLimits

0xb7c4,	// (0x00048a6d) slider_form_pane_vc

0xb7d1,	// (0x00048a7a) form_field_slider_pane_vc_t1_ParamLimits

0xb7d1,	// (0x00048a7a) form_field_slider_pane_vc_t1

0xb73b,	// (0x000489e4) form_field_slider_pane_vc_t2_ParamLimits

0xb73b,	// (0x000489e4) form_field_slider_pane_vc_t2

0x0001,

0xfa70,	// (0x0004cd19) form_field_slider_pane_vc_t_ParamLimits

0xfa70,	// (0x0004cd19) form_field_slider_pane_vc_t

0x7ed9,	// (0x00045182) input_focus_pane_cp9_vc_ParamLimits

0x7ed9,	// (0x00045182) input_focus_pane_cp9_vc

0xb7ed,	// (0x00048a96) slider_cont_pane_vc_ParamLimits

0xb7ed,	// (0x00048a96) slider_cont_pane_vc

0xb801,	// (0x00048aaa) list_form_graphic_pane_cp_vc_ParamLimits

0xb801,	// (0x00048aaa) list_form_graphic_pane_cp_vc

0x9ae5,	// (0x00046d8e) form_field_popup_wide_pane_vc_g1

0xb816,	// (0x00048abf) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb816,	// (0x00048abf) form_field_popup_wide_pane_vc_t1

0x84f7,	// (0x000457a0) input_focus_pane_cp8_vc_ParamLimits

0x84f7,	// (0x000457a0) input_focus_pane_cp8_vc

0xb85b,	// (0x00048b04) list_form_wide_pane_vc_ParamLimits

0xb85b,	// (0x00048b04) list_form_wide_pane_vc

0xb867,	// (0x00048b10) list_form_graphic_pane_vc_g1

0xb86f,	// (0x00048b18) list_form_graphic_pane_vc_t1_ParamLimits

0xb86f,	// (0x00048b18) list_form_graphic_pane_vc_t1

0x7c5e,	// (0x00044f07) list_highlight_pane_cp5_vc_ParamLimits

0x7c5e,	// (0x00044f07) list_highlight_pane_cp5_vc

0xb88b,	// (0x00048b34) list_form_graphic_pane_vc_ParamLimits

0xb88b,	// (0x00048b34) list_form_graphic_pane_vc

0x9ae5,	// (0x00046d8e) form_field_popup_pane_vc_g1

0xb8a1,	// (0x00048b4a) form_field_popup_pane_vc_t1_ParamLimits

0xb8a1,	// (0x00048b4a) form_field_popup_pane_vc_t1

0x84f7,	// (0x000457a0) input_focus_pane_cp7_vc_ParamLimits

0x84f7,	// (0x000457a0) input_focus_pane_cp7_vc

0xb8b8,	// (0x00048b61) list_form_pane_vc_ParamLimits

0xb8b8,	// (0x00048b61) list_form_pane_vc

0xb8c4,	// (0x00048b6d) data_form_pane_vc_t1_ParamLimits

0xb8c4,	// (0x00048b6d) data_form_pane_vc_t1

0x8543,	// (0x000457ec) input_focus_pane_vc_g1

0x854b,	// (0x000457f4) input_focus_pane_vc_g2

0x8553,	// (0x000457fc) input_focus_pane_vc_g3

0x855b,	// (0x00045804) input_focus_pane_vc_g4

0x8563,	// (0x0004580c) input_focus_pane_vc_g5

0x856b,	// (0x00045814) input_focus_pane_vc_g6

0x8573,	// (0x0004581c) input_focus_pane_vc_g7

0x857b,	// (0x00045824) input_focus_pane_vc_g8

0x8583,	// (0x0004582c) input_focus_pane_vc_g9

0x274e,	// (0x0003f9f7) input_focus_pane_vc_g10

0x0009,

0xf66a,	// (0x0004c913) input_focus_pane_vc_g

0x9ad9,	// (0x00046d82) data_form_pane_vc_ParamLimits

0x9ad9,	// (0x00046d82) data_form_pane_vc

0x9ae5,	// (0x00046d8e) form_field_data_pane_vc_g1

0xb8df,	// (0x00048b88) form_field_data_pane_vc_t1_ParamLimits

0xb8df,	// (0x00048b88) form_field_data_pane_vc_t1

0x84f7,	// (0x000457a0) input_focus_pane_vc_ParamLimits

0x84f7,	// (0x000457a0) input_focus_pane_vc

0xb8f9,	// (0x00048ba2) button_value_adjust_pane_cp3_vc

0xb901,	// (0x00048baa) button_value_adjust_pane_cp5_vc

0xb909,	// (0x00048bb2) form_field_data_pane_vc_ParamLimits

0xb909,	// (0x00048bb2) form_field_data_pane_vc

0xb920,	// (0x00048bc9) form_field_data_pane_vc_cp2

0xb928,	// (0x00048bd1) form_field_data_wide_pane_vc_ParamLimits

0xb928,	// (0x00048bd1) form_field_data_wide_pane_vc

0xb93e,	// (0x00048be7) form_field_data_wide_pane_vc_cp2

0xb946,	// (0x00048bef) form_field_popup_pane_vc_ParamLimits

0xb946,	// (0x00048bef) form_field_popup_pane_vc

0xb95d,	// (0x00048c06) form_field_popup_wide_pane_vc_ParamLimits

0xb95d,	// (0x00048c06) form_field_popup_wide_pane_vc

0xb973,	// (0x00048c1c) form_field_slider_pane_vc_ParamLimits

0xb973,	// (0x00048c1c) form_field_slider_pane_vc

0xb986,	// (0x00048c2f) form_field_slider_wide_pane_vc_ParamLimits

0xb986,	// (0x00048c2f) form_field_slider_wide_pane_vc

0xb999,	// (0x00048c42) grid_touch_1_pane_ParamLimits

0xb999,	// (0x00048c42) grid_touch_1_pane

0xb9a5,	// (0x00048c4e) grid_touch_2_pane_ParamLimits

0xb9a5,	// (0x00048c4e) grid_touch_2_pane

0x9478,	// (0x00046721) touch_pane_g1_ParamLimits

0x9478,	// (0x00046721) touch_pane_g1

0xb9bd,	// (0x00048c66) cell_app_pane_cp_wide_ParamLimits

0xb9bd,	// (0x00048c66) cell_app_pane_cp_wide

0xb9ce,	// (0x00048c77) grid_popup_fast_wide_pane_ParamLimits

0xb9ce,	// (0x00048c77) grid_popup_fast_wide_pane

0xb9e2,	// (0x00048c8b) scroll_pane_cp19_ParamLimits

0xb9e2,	// (0x00048c8b) scroll_pane_cp19

0x2758,	// (0x0003fa01) bg_popup_window_pane_cp20

0xb9f6,	// (0x00048c9f) listscroll_popup_fast_wide_pane

0xb9fe,	// (0x00048ca7) grid_indicator_nsta_pane

0xba10,	// (0x00048cb9) clock_nsta_pane_g1

0xba19,	// (0x00048cc2) clock_nsta_pane_t1

0xba35,	// (0x00048cde) cell_indicator_nsta_pane_ParamLimits

0xba35,	// (0x00048cde) cell_indicator_nsta_pane

0xba6a,	// (0x00048d13) cell_indicator_nsta_pane_g1

0xba78,	// (0x00048d21) cell_indicator_nsta_pane_g2

0x0001,

0xfa81,	// (0x0004cd2a) cell_indicator_nsta_pane_g

0xba8a,	// (0x00048d33) clock_nsta_pane_cp

0xba93,	// (0x00048d3c) indicator_nsta_pane_cp

0xba9d,	// (0x00048d46) nsta_clock_indic_pane_g1

0x7d27,	// (0x00044fd0) grid_indicator_pane

0x8a90,	// (0x00045d39) scroll_pane_cp29

0x5b77,	// (0x00042e20) indicator_nsta_pane_cp2_ParamLimits

0x5b77,	// (0x00042e20) indicator_nsta_pane_cp2

0x7c5e,	// (0x00044f07) main_apps_wheel_pane

0x9cf4,	// (0x00046f9d) form_midp_field_text_pane_ParamLimits

0x9e3f,	// (0x000470e8) scroll_bar_cp050_ParamLimits

0xbaf6,	// (0x00048d9f) cell_indicator_pane_ParamLimits

0xbaf6,	// (0x00048d9f) cell_indicator_pane

0xbb0d,	// (0x00048db6) cell_indicator_pane_g1

0xbb17,	// (0x00048dc0) grid_wheel_folder_pane_ParamLimits

0xbb17,	// (0x00048dc0) grid_wheel_folder_pane

0xbb2d,	// (0x00048dd6) list_wheel_apps_pane_ParamLimits

0xbb2d,	// (0x00048dd6) list_wheel_apps_pane

0xbb3e,	// (0x00048de7) main_apps_wheel_pane_g1_ParamLimits

0xbb3e,	// (0x00048de7) main_apps_wheel_pane_g1

0xbb52,	// (0x00048dfb) main_apps_wheel_pane_g2_ParamLimits

0xbb52,	// (0x00048dfb) main_apps_wheel_pane_g2

0x0001,

0xfa9d,	// (0x0004cd46) main_apps_wheel_pane_g_ParamLimits

0xfa9d,	// (0x0004cd46) main_apps_wheel_pane_g

0xbb6a,	// (0x00048e13) main_apps_wheel_pane_t1_ParamLimits

0xbb6a,	// (0x00048e13) main_apps_wheel_pane_t1

0xbb8d,	// (0x00048e36) list_wheel_apps_pane_g1

0xbb95,	// (0x00048e3e) list_wheel_apps_pane_g2

0xbb9d,	// (0x00048e46) list_wheel_apps_pane_g3

0xbba5,	// (0x00048e4e) list_wheel_apps_pane_g4

0xbbaf,	// (0x00048e58) list_wheel_apps_pane_g5

0x0004,

0xfaa2,	// (0x0004cd4b) list_wheel_apps_pane_g

0x9030,	// (0x000462d9) navi_icon_text_pane

0x9511,	// (0x000467ba) aid_fill_nsta

0xbbd2,	// (0x00048e7b) navi_icon_text_pane_g1

0xbbde,	// (0x00048e87) navi_icon_text_pane_t1

0x8ece,	// (0x00046177) list_set_graphic_pane_t1_ParamLimits

0x8ece,	// (0x00046177) list_set_graphic_pane_t1

0xa5aa,	// (0x00047853) popup_midp_note_alarm_window_t6_ParamLimits

0xa5aa,	// (0x00047853) popup_midp_note_alarm_window_t6

0xa5bc,	// (0x00047865) popup_midp_note_alarm_window_t7_ParamLimits

0xa5bc,	// (0x00047865) popup_midp_note_alarm_window_t7

0xa5ce,	// (0x00047877) popup_midp_note_alarm_window_t8_ParamLimits

0xa5ce,	// (0x00047877) popup_midp_note_alarm_window_t8

0xa5e0,	// (0x00047889) popup_midp_note_alarm_window_t9_ParamLimits

0xa5e0,	// (0x00047889) popup_midp_note_alarm_window_t9

0xa5f2,	// (0x0004789b) popup_midp_note_alarm_window_t10_ParamLimits

0xa5f2,	// (0x0004789b) popup_midp_note_alarm_window_t10

0xa604,	// (0x000478ad) popup_midp_note_alarm_window_t11_ParamLimits

0xa604,	// (0x000478ad) popup_midp_note_alarm_window_t11

0xa616,	// (0x000478bf) scroll_pane_cp17_ParamLimits

0xa616,	// (0x000478bf) scroll_pane_cp17

0x65be,	// (0x00043867) volume_small_pane_cp_g1

0x69aa,	// (0x00043c53) volume_small_pane_cp_g2

0x69b3,	// (0x00043c5c) volume_small_pane_cp_g3

0x69bc,	// (0x00043c65) volume_small_pane_cp_g4

0x69c5,	// (0x00043c6e) volume_small_pane_cp_g5

0x69ce,	// (0x00043c77) volume_small_pane_cp_g6

0x69d7,	// (0x00043c80) volume_small_pane_cp_g7

0x69e0,	// (0x00043c89) volume_small_pane_cp_g8

0x69e9,	// (0x00043c92) volume_small_pane_cp_g9

0x69f2,	// (0x00043c9b) volume_small_pane_cp_g10

0x928e,	// (0x00046537) midp_ticker_pane_g1_ParamLimits

0x929a,	// (0x00046543) midp_ticker_pane_g2_ParamLimits

0xf736,	// (0x0004c9df) midp_ticker_pane_g_ParamLimits

0x92a6,	// (0x0004654f) midp_ticker_pane_t1_ParamLimits

0x9527,	// (0x000467d0) aid_fill_nsta_2

0x9e2b,	// (0x000470d4) list_form2_midp_pane

0xaf5f,	// (0x00048208) midp_editing_number_pane_ParamLimits

0xaf6e,	// (0x00048217) midp_ticker_pane_ParamLimits

0xbbf0,	// (0x00048e99) form2_midp_field_pane

0xbc14,	// (0x00048ebd) scroll_pane_cp51

0xbc34,	// (0x00048edd) form2_midp_button_pane_ParamLimits

0xbc34,	// (0x00048edd) form2_midp_button_pane

0xbc46,	// (0x00048eef) form2_midp_content_pane_ParamLimits

0xbc46,	// (0x00048eef) form2_midp_content_pane

0xbc60,	// (0x00048f09) form2_midp_field_choice_group_pane

0xbc68,	// (0x00048f11) form2_midp_field_pane_g1

0xbc70,	// (0x00048f19) form2_midp_field_pane_g2

0xbc78,	// (0x00048f21) form2_midp_field_pane_g3

0xbc80,	// (0x00048f29) form2_midp_field_pane_g4

0x0003,

0xfac7,	// (0x0004cd70) form2_midp_field_pane_g

0xbc88,	// (0x00048f31) form2_midp_gauge_slider_pane

0xbc90,	// (0x00048f39) form2_midp_gauge_wait_pane

0xbc98,	// (0x00048f41) form2_midp_image_pane_ParamLimits

0xbc98,	// (0x00048f41) form2_midp_image_pane

0xbcb3,	// (0x00048f5c) form2_midp_label_pane_ParamLimits

0xbcb3,	// (0x00048f5c) form2_midp_label_pane

0xbccc,	// (0x00048f75) form2_midp_label_pane_cp_ParamLimits

0xbccc,	// (0x00048f75) form2_midp_label_pane_cp

0xbced,	// (0x00048f96) form2_midp_string_pane_ParamLimits

0xbced,	// (0x00048f96) form2_midp_string_pane

0x5093,	// (0x0004233c) form2_midp_text_pane_ParamLimits

0x5093,	// (0x0004233c) form2_midp_text_pane

0xbcff,	// (0x00048fa8) form2_midp_time_pane

0xbd0f,	// (0x00048fb8) input_focus_pane_cp51_ParamLimits

0xbd0f,	// (0x00048fb8) input_focus_pane_cp51

0xbd27,	// (0x00048fd0) form2_midp_label_pane_t1_ParamLimits

0xbd27,	// (0x00048fd0) form2_midp_label_pane_t1

0x50b2,	// (0x0004235b) form2_mdip_text_pane_t1_ParamLimits

0x50b2,	// (0x0004235b) form2_mdip_text_pane_t1

0x50d0,	// (0x00042379) form2_midp_time_pane_t1

0xbd70,	// (0x00049019) form2_midp_gauge_slider_pane_t1

0xbd82,	// (0x0004902b) form2_midp_gauge_slider_pane_t2

0xbd94,	// (0x0004903d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad0,	// (0x0004cd79) form2_midp_gauge_slider_pane_t

0xbda6,	// (0x0004904f) form2_midp_slider_pane

0xbdb2,	// (0x0004905b) form2_midp_gauge_wait_pane_t1

0xbdc0,	// (0x00049069) form2_midp_wait_pane_ParamLimits

0xbdc0,	// (0x00049069) form2_midp_wait_pane

0xbdeb,	// (0x00049094) list_single_2graphic_pane_cp4_ParamLimits

0xbdeb,	// (0x00049094) list_single_2graphic_pane_cp4

0x9b4d,	// (0x00046df6) list_single_midp_graphic_pane_cp_ParamLimits

0x9b4d,	// (0x00046df6) list_single_midp_graphic_pane_cp

0x2758,	// (0x0003fa01) list_highlight_pane_cp20

0xbe0f,	// (0x000490b8) list_single_2graphic_pane_g1_cp4

0xbe17,	// (0x000490c0) list_single_2graphic_pane_g2_cp4

0xbe1f,	// (0x000490c8) list_single_2graphic_pane_t1_cp4

0x7c5e,	// (0x00044f07) list_highlight_pane_cp21

0xbe2e,	// (0x000490d7) list_single_midp_graphic_pane_g4_cp

0xbe3d,	// (0x000490e6) list_single_midp_graphic_pane_t1_cp

0xbe52,	// (0x000490fb) form2_mdip_string_pane_t1_ParamLimits

0xbe52,	// (0x000490fb) form2_mdip_string_pane_t1

0x2758,	// (0x0003fa01) bg_wml_button_pane_cp2

0x274e,	// (0x0003f9f7) form2_midp_image_pane_g1

0x5881,	// (0x00042b2a) list_double_large_graphic_pane_g5_ParamLimits

0x5881,	// (0x00042b2a) list_double_large_graphic_pane_g5

0x91b9,	// (0x00046462) midp_form_pane_ParamLimits

0x7c5e,	// (0x00044f07) main_apps_wheel_pane_ParamLimits

0x625e,	// (0x00043507) popup_preview_window_ParamLimits

0x625e,	// (0x00043507) popup_preview_window

0x6419,	// (0x000436c2) popup_touch_info_window_ParamLimits

0x6419,	// (0x000436c2) popup_touch_info_window

0x6437,	// (0x000436e0) popup_touch_menu_window_ParamLimits

0x6437,	// (0x000436e0) popup_touch_menu_window

0x2744,	// (0x0003f9ed) bg_popup_sub_pane_cp6

0xbf4b,	// (0x000491f4) list_touch_menu_pane

0xbf53,	// (0x000491fc) list_single_touch_menu_pane_ParamLimits

0xbf53,	// (0x000491fc) list_single_touch_menu_pane

0xbf69,	// (0x00049212) list_single_touch_menu_pane_t1

0x7c5e,	// (0x00044f07) bg_popup_sub_pane_cp7_ParamLimits

0x7c5e,	// (0x00044f07) bg_popup_sub_pane_cp7

0x9e5f,	// (0x00047108) heading_sub_pane

0xbf77,	// (0x00049220) list_touch_info_pane_ParamLimits

0xbf77,	// (0x00049220) list_touch_info_pane

0xbf87,	// (0x00049230) list_single_touch_info_pane_ParamLimits

0xbf87,	// (0x00049230) list_single_touch_info_pane

0xbf99,	// (0x00049242) list_single_touch_info_pane_t1

0xbfa7,	// (0x00049250) list_single_touch_info_pane_t2

0x0001,

0xfade,	// (0x0004cd87) list_single_touch_info_pane_t

0x91b1,	// (0x0004645a) bg_popup_heading_pane_cp

0xbfb5,	// (0x0004925e) heading_sub_pane_t1

0x9a73,	// (0x00046d1c) bg_popup_preview_window_pane_cp_ParamLimits

0x9a73,	// (0x00046d1c) bg_popup_preview_window_pane_cp

0x9e5f,	// (0x00047108) heading_preview_pane

0xbf77,	// (0x00049220) list_preview_pane_ParamLimits

0xbf77,	// (0x00049220) list_preview_pane

0xbfc3,	// (0x0004926c) popup_preview_window_g1

0xbf87,	// (0x00049230) list_single_preview_pane_ParamLimits

0xbf87,	// (0x00049230) list_single_preview_pane

0xbfcb,	// (0x00049274) list_single_preview_pane_g1

0xbfd3,	// (0x0004927c) list_single_preview_pane_t1

0xbf99,	// (0x00049242) list_single_preview_pane_t2

0x0001,

0xfae3,	// (0x0004cd8c) list_single_preview_pane_t

0xbfe1,	// (0x0004928a) bg_popup_heading_pane_cp2_ParamLimits

0xbfe1,	// (0x0004928a) bg_popup_heading_pane_cp2

0xbff7,	// (0x000492a0) heading_preview_pane_g1

0xbfff,	// (0x000492a8) heading_preview_pane_t1_ParamLimits

0xbfff,	// (0x000492a8) heading_preview_pane_t1

0x7d4a,	// (0x00044ff3) soft_indicator_pane_t1_ParamLimits

0x845e,	// (0x00045707) scroll_pane_ParamLimits

0x8989,	// (0x00045c32) scroll_sc2_left_pane

0x8992,	// (0x00045c3b) scroll_sc2_right_pane

0x89b1,	// (0x00045c5a) scroll_bg_pane_g1_ParamLimits

0x89c6,	// (0x00045c6f) scroll_bg_pane_g2_ParamLimits

0x89de,	// (0x00045c87) scroll_bg_pane_g3_ParamLimits

0xf6c1,	// (0x0004c96a) scroll_bg_pane_g_ParamLimits

0x89b1,	// (0x00045c5a) scroll_handle_pane_g1_ParamLimits

0x8a00,	// (0x00045ca9) scroll_handle_pane_g2_ParamLimits

0x89de,	// (0x00045c87) scroll_handle_pane_g3_ParamLimits

0xf6c8,	// (0x0004c971) scroll_handle_pane_g_ParamLimits

0x5edd,	// (0x00043186) popup_choice_list_window_ParamLimits

0x5edd,	// (0x00043186) popup_choice_list_window

0x9949,	// (0x00046bf2) choice_list_pane

0x99cb,	// (0x00046c74) cell_toolbar_pane_t1

0x99f3,	// (0x00046c9c) toolbar_button_pane_ParamLimits

0xaad0,	// (0x00047d79) ai_gene_pane_1_t2_ParamLimits

0xaad0,	// (0x00047d79) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x0004cb94) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x0004cb94) ai_gene_pane_1_t

0xc01c,	// (0x000492c5) scroll_sc2_left_pane_g1

0xc01c,	// (0x000492c5) scroll_sc2_right_pane_g1

0x94d5,	// (0x0004677e) bg_popup_sub_pane_cp10

0xc026,	// (0x000492cf) list_choice_list_pane

0xc03f,	// (0x000492e8) list_single_choice_list_pane_ParamLimits

0xc03f,	// (0x000492e8) list_single_choice_list_pane

0xc052,	// (0x000492fb) list_single_choice_list_pane_g1

0x868f,	// (0x00045938) list_single_choice_list_pane_t1_ParamLimits

0x868f,	// (0x00045938) list_single_choice_list_pane_t1

0xc05a,	// (0x00049303) choice_list_pane_g1

0xc062,	// (0x0004930b) choice_list_pane_t1

0x2744,	// (0x0003f9ed) input_focus_pane_cp11

0x8866,	// (0x00045b0f) title_pane_stacon_g2_ParamLimits

0x8866,	// (0x00045b0f) title_pane_stacon_g2

0x0002,

0xf6a7,	// (0x0004c950) title_pane_stacon_g_ParamLimits

0xf6a7,	// (0x0004c950) title_pane_stacon_g

0x91b1,	// (0x0004645a) cursor_press_pane

0x5f89,	// (0x00043232) popup_fep_hwr_window_ParamLimits

0x5f89,	// (0x00043232) popup_fep_hwr_window

0x6003,	// (0x000432ac) popup_fep_vkb_window_ParamLimits

0x6003,	// (0x000432ac) popup_fep_vkb_window

0xc070,	// (0x00049319) cursor_press_pane_g1

0x0002,

0xfb0c,	// (0x0004cdb5) fep_vkb_side_pane_g_ParamLimits

0x6a34,	// (0x00043cdd) fep_hwr_candidate_pane_ParamLimits

0x6a34,	// (0x00043cdd) fep_hwr_candidate_pane

0x6a5e,	// (0x00043d07) fep_hwr_side_pane_ParamLimits

0x6a5e,	// (0x00043d07) fep_hwr_side_pane

0x6a7e,	// (0x00043d27) fep_hwr_top_pane_ParamLimits

0x6a7e,	// (0x00043d27) fep_hwr_top_pane

0x6a96,	// (0x00043d3f) fep_hwr_write_pane_ParamLimits

0x6a96,	// (0x00043d3f) fep_hwr_write_pane

0xfb0c,	// (0x0004cdb5) fep_vkb_side_pane_g

0xc078,	// (0x00049321) fep_hwr_top_pane_g1

0xc08a,	// (0x00049333) fep_hwr_top_pane_g2

0x6ac2,	// (0x00043d6b) fep_hwr_top_pane_g3

0x0002,

0xfae8,	// (0x0004cd91) fep_hwr_top_pane_g

0x6ad7,	// (0x00043d80) fep_hwr_top_text_pane

0x8b80,	// (0x00045e29) fep_hwr_top_text_pane_g1

0xc0c0,	// (0x00049369) fep_hwr_top_text_pane_t1

0x6bcd,	// (0x00043e76) fep_hwr_candidate_pane_g1

0xc313,	// (0x000495bc) fep_vkb_keypad_pane_g3_ParamLimits

0xc313,	// (0x000495bc) fep_vkb_keypad_pane_g3

0xc33b,	// (0x000495e4) fep_vkb_keypad_pane_g4_ParamLimits

0xc33b,	// (0x000495e4) fep_vkb_keypad_pane_g4

0xc3aa,	// (0x00049653) fep_vkb_bottom_pane_g2_ParamLimits

0xc3aa,	// (0x00049653) fep_vkb_bottom_pane_g2

0x0001,

0xfb13,	// (0x0004cdbc) fep_vkb_bottom_pane_g_ParamLimits

0xfb13,	// (0x0004cdbc) fep_vkb_bottom_pane_g

0xc01c,	// (0x000492c5) cell_vkb_side_pane_g2

0x0001,

0xfb1d,	// (0x0004cdc6) cell_vkb_side_pane_g

0xc435,	// (0x000496de) cell_vkb_side_pane_t1

0xc443,	// (0x000496ec) cell_vkb_side_pane_t1_copy1

0xc01c,	// (0x000492c5) bg_fep_vkb_candidate_pane_g2

0xc56f,	// (0x00049818) cell_vkb_candidate_pane_ParamLimits

0xc0ce,	// (0x00049377) aid_size_cell_vkb_ParamLimits

0xc0ce,	// (0x00049377) aid_size_cell_vkb

0xc56f,	// (0x00049818) cell_vkb_candidate_pane

0x6be7,	// (0x00043e90) bg_popup_fep_shadow_pane_g1

0xc15c,	// (0x00049405) fep_vkb_bottom_pane_ParamLimits

0xc15c,	// (0x00049405) fep_vkb_bottom_pane

0xc192,	// (0x0004943b) fep_vkb_candidate_pane_ParamLimits

0xc192,	// (0x0004943b) fep_vkb_candidate_pane

0xc1ae,	// (0x00049457) fep_vkb_keypad_pane_ParamLimits

0xc1ae,	// (0x00049457) fep_vkb_keypad_pane

0xc1f4,	// (0x0004949d) fep_vkb_side_pane_ParamLimits

0xc1f4,	// (0x0004949d) fep_vkb_side_pane

0xc230,	// (0x000494d9) fep_vkb_top_pane_ParamLimits

0xc230,	// (0x000494d9) fep_vkb_top_pane

0xc26c,	// (0x00049515) fep_vkb_top_pane_g1_ParamLimits

0xc26c,	// (0x00049515) fep_vkb_top_pane_g1

0xc27b,	// (0x00049524) fep_vkb_top_pane_g2_ParamLimits

0xc27b,	// (0x00049524) fep_vkb_top_pane_g2

0xc28a,	// (0x00049533) fep_vkb_top_pane_g3_ParamLimits

0xc28a,	// (0x00049533) fep_vkb_top_pane_g3

0x0003,

0xfb03,	// (0x0004cdac) fep_vkb_top_pane_g_ParamLimits

0xfb03,	// (0x0004cdac) fep_vkb_top_pane_g

0xc2a8,	// (0x00049551) fep_vkb_top_text_pane_ParamLimits

0xc2a8,	// (0x00049551) fep_vkb_top_text_pane

0xc2b9,	// (0x00049562) fep_vkb_side_pane_g1_ParamLimits

0xc2b9,	// (0x00049562) fep_vkb_side_pane_g1

0xc302,	// (0x000495ab) grid_vkb_side_pane_ParamLimits

0xc302,	// (0x000495ab) grid_vkb_side_pane

0x6bef,	// (0x00043e98) bg_popup_fep_shadow_pane_g2

0x6bf8,	// (0x00043ea1) bg_popup_fep_shadow_pane_g3

0x6c00,	// (0x00043ea9) bg_popup_fep_shadow_pane_g4

0x6c09,	// (0x00043eb2) bg_popup_fep_shadow_pane_g5

0x6c13,	// (0x00043ebc) bg_popup_fep_shadow_pane_g6

0x6c1b,	// (0x00043ec4) bg_popup_fep_shadow_pane_g7

0x8563,	// (0x0004580c) bg_popup_fep_shadow_pane_g8

0xc359,	// (0x00049602) grid_vkb_keypad_number_pane_ParamLimits

0xc359,	// (0x00049602) grid_vkb_keypad_number_pane

0xc369,	// (0x00049612) grid_vkb_keypad_pane_ParamLimits

0xc369,	// (0x00049612) grid_vkb_keypad_pane

0xc38f,	// (0x00049638) fep_vkb_bottom_pane_g1_ParamLimits

0xc38f,	// (0x00049638) fep_vkb_bottom_pane_g1

0xc3b8,	// (0x00049661) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3b8,	// (0x00049661) grid_vkb_keypad_bottom_left_pane

0xc3cd,	// (0x00049676) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3cd,	// (0x00049676) grid_vkb_keypad_bottom_right_pane

0xc3e2,	// (0x0004968b) fep_vkb_top_text_pane_g1

0xc3fd,	// (0x000496a6) fep_vkb_top_text_pane_t1

0xc412,	// (0x000496bb) cell_vkb_side_pane_ParamLimits

0xc412,	// (0x000496bb) cell_vkb_side_pane

0xc01c,	// (0x000492c5) cell_vkb_side_pane_g1

0xc451,	// (0x000496fa) cell_vkb_keypad_pane_ParamLimits

0xc451,	// (0x000496fa) cell_vkb_keypad_pane

0xc4c6,	// (0x0004976f) cell_vkb_keypad_pane_g1

0x0008,

0xfb30,	// (0x0004cdd9) bg_popup_fep_shadow_pane_g

0xc01c,	// (0x000492c5) cell_hwr_side_pane_g1

0xc01c,	// (0x000492c5) cell_hwr_side_pane_g2

0xc4d0,	// (0x00049779) cell_vkb_keypad_pane_t1

0xc4de,	// (0x00049787) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4de,	// (0x00049787) cell_vkb_keypad_bottom_left_pane

0xc4fb,	// (0x000497a4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4fb,	// (0x000497a4) cell_vkb_keypad_bottom_right_pane

0xc01c,	// (0x000492c5) cell_vkb_keypad_bottom_left_pane_g1

0xc01c,	// (0x000492c5) cell_vkb_keypad_bottom_right_pane_g1

0xc534,	// (0x000497dd) cell_vkb_keypad_number_pane_ParamLimits

0xc534,	// (0x000497dd) cell_vkb_keypad_number_pane

0xc553,	// (0x000497fc) cell_vkb_keypad_number_pane_g1

0xc55d,	// (0x00049806) cell_vkb_keypad_number_pane_g2

0xc566,	// (0x0004980f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb22,	// (0x0004cdcb) cell_vkb_keypad_number_pane_g

0xc4d0,	// (0x00049779) cell_vkb_keypad_number_pane_t1

0xc58a,	// (0x00049833) fep_vkb_candidate_pane_g1

0x0001,

0xfb1d,	// (0x0004cdc6) cell_hwr_side_pane_g

0xc5a3,	// (0x0004984c) cell_hwr_side_pane_t1

0x6c2d,	// (0x00043ed6) cell_hwr_side_pane_t1_copy1

0xc29a,	// (0x00049543) cell_hwr_candidate_pane_g1

0x6c3b,	// (0x00043ee4) cell_hwr_candidate_pane_t1

0xc01c,	// (0x000492c5) cell_vkb_candidate_pane_g2

0xc629,	// (0x000498d2) cell_vkb_candidate_pane_t1

0x69fb,	// (0x00043ca4) bg_popup_fep_shadow_pane_ParamLimits

0x69fb,	// (0x00043ca4) bg_popup_fep_shadow_pane

0x2714,	// (0x0003f9bd) bg_fep_hwr_top_pane_g4

0xc09c,	// (0x00049345) bg_hwr_side_pane_g1_ParamLimits

0xc09c,	// (0x00049345) bg_hwr_side_pane_g1

0x6b13,	// (0x00043dbc) cell_hwr_side_pane_ParamLimits

0x6b13,	// (0x00043dbc) cell_hwr_side_pane

0x6b4e,	// (0x00043df7) fep_hwr_write_pane_g1_ParamLimits

0x6b4e,	// (0x00043df7) fep_hwr_write_pane_g1

0x6b5b,	// (0x00043e04) fep_hwr_write_pane_g2_ParamLimits

0x6b5b,	// (0x00043e04) fep_hwr_write_pane_g2

0x6b68,	// (0x00043e11) fep_hwr_write_pane_g3_ParamLimits

0x6b68,	// (0x00043e11) fep_hwr_write_pane_g3

0x6b76,	// (0x00043e1f) fep_hwr_write_pane_g4_ParamLimits

0x6b76,	// (0x00043e1f) fep_hwr_write_pane_g4

0x0005,

0xfaef,	// (0x0004cd98) fep_hwr_write_pane_g_ParamLimits

0xfaef,	// (0x0004cd98) fep_hwr_write_pane_g

0x2714,	// (0x0003f9bd) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2714,	// (0x0003f9bd) bg_fep_hwr_candidate_pane_g2

0x6b8b,	// (0x00043e34) cell_hwr_candidate_pane_ParamLimits

0x6b8b,	// (0x00043e34) cell_hwr_candidate_pane

0x6bcd,	// (0x00043e76) fep_hwr_candidate_pane_g1_ParamLimits

0xc0fc,	// (0x000493a5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0fc,	// (0x000493a5) bg_popup_fep_shadow_pane_cp2

0xc29a,	// (0x00049543) fep_vkb_top_pane_g4_ParamLimits

0xc29a,	// (0x00049543) fep_vkb_top_pane_g4

0xc2e0,	// (0x00049589) fep_vkb_side_pane_g2_ParamLimits

0xc2e0,	// (0x00049589) fep_vkb_side_pane_g2

0x482c,	// (0x00041ad5) list_setting_pane_t4_ParamLimits

0x482c,	// (0x00041ad5) list_setting_pane_t4

0x48c6,	// (0x00041b6f) list_setting_number_pane_t5_ParamLimits

0x48c6,	// (0x00041b6f) list_setting_number_pane_t5

0x8bc7,	// (0x00045e70) list_double_heading_pane_cp2_ParamLimits

0x8bc7,	// (0x00045e70) list_double_heading_pane_cp2

0x8492,	// (0x0004573b) list_double_heading_pane_g1_cp2_ParamLimits

0x8492,	// (0x0004573b) list_double_heading_pane_g1_cp2

0x8505,	// (0x000457ae) list_double_heading_pane_g2_cp2_ParamLimits

0x8505,	// (0x000457ae) list_double_heading_pane_g2_cp2

0xc637,	// (0x000498e0) list_double_heading_pane_t1_cp2_ParamLimits

0xc637,	// (0x000498e0) list_double_heading_pane_t1_cp2

0xc64d,	// (0x000498f6) list_double_heading_pane_t2_cp2_ParamLimits

0xc64d,	// (0x000498f6) list_double_heading_pane_t2_cp2

0x273c,	// (0x0003f9e5) aid_value_unit2

0x5656,	// (0x000428ff) popup_preview_fixed_window

0x7ee7,	// (0x00045190) bg_popup_preview_window_pane_cp02

0xc65f,	// (0x00049908) list_preview_fixed_pane

0xc6a5,	// (0x0004994e) list_empty_pane_fp_ParamLimits

0xc6a5,	// (0x0004994e) list_empty_pane_fp

0xc6a5,	// (0x0004994e) list_single_cale_day_pane_fp_ParamLimits

0xc6a5,	// (0x0004994e) list_single_cale_day_pane_fp

0xc6a5,	// (0x0004994e) list_single_graphic_heading_pane_fp_ParamLimits

0xc6a5,	// (0x0004994e) list_single_graphic_heading_pane_fp

0xc6a5,	// (0x0004994e) list_single_graphic_pane_fp_ParamLimits

0xc6a5,	// (0x0004994e) list_single_graphic_pane_fp

0xc6a5,	// (0x0004994e) list_single_heading_pane_fp_ParamLimits

0xc6a5,	// (0x0004994e) list_single_heading_pane_fp

0xc6a5,	// (0x0004994e) list_single_pane_fp_ParamLimits

0xc6a5,	// (0x0004994e) list_single_pane_fp

0xc6ba,	// (0x00049963) list_single_pane_fp_g1_ParamLimits

0xc6ba,	// (0x00049963) list_single_pane_fp_g1

0x8492,	// (0x0004573b) list_single_pane_fp_g2_ParamLimits

0x8492,	// (0x0004573b) list_single_pane_fp_g2

0x8505,	// (0x000457ae) list_single_pane_fp_g3_ParamLimits

0x8505,	// (0x000457ae) list_single_pane_fp_g3

0xc6c6,	// (0x0004996f) list_single_pane_fp_g4_ParamLimits

0xc6c6,	// (0x0004996f) list_single_pane_fp_g4

0x0003,

0xfb51,	// (0x0004cdfa) list_single_pane_fp_g_ParamLimits

0xfb51,	// (0x0004cdfa) list_single_pane_fp_g

0x50e3,	// (0x0004238c) list_single_pane_fp_t1_ParamLimits

0x50e3,	// (0x0004238c) list_single_pane_fp_t1

0x50fa,	// (0x000423a3) list_single_graphic_pane_fp_g1_ParamLimits

0x50fa,	// (0x000423a3) list_single_graphic_pane_fp_g1

0xc6ba,	// (0x00049963) list_single_graphic_pane_fp_g2_ParamLimits

0xc6ba,	// (0x00049963) list_single_graphic_pane_fp_g2

0x8492,	// (0x0004573b) list_single_graphic_pane_fp_g3_ParamLimits

0x8492,	// (0x0004573b) list_single_graphic_pane_fp_g3

0x8505,	// (0x000457ae) list_single_graphic_pane_fp_g4_ParamLimits

0x8505,	// (0x000457ae) list_single_graphic_pane_fp_g4

0xc6c6,	// (0x0004996f) list_single_graphic_pane_fp_g5_ParamLimits

0xc6c6,	// (0x0004996f) list_single_graphic_pane_fp_g5

0x0004,

0xfb5a,	// (0x0004ce03) list_single_graphic_pane_fp_g_ParamLimits

0xfb5a,	// (0x0004ce03) list_single_graphic_pane_fp_g

0x5106,	// (0x000423af) list_single_graphic_pane_fp_t1_ParamLimits

0x5106,	// (0x000423af) list_single_graphic_pane_fp_t1

0x50fa,	// (0x000423a3) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x50fa,	// (0x000423a3) list_single_graphic_heading_pane_fp_g1

0xc6ba,	// (0x00049963) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6ba,	// (0x00049963) list_single_graphic_heading_pane_fp_g2

0x8492,	// (0x0004573b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8492,	// (0x0004573b) list_single_graphic_heading_pane_fp_g3

0x8505,	// (0x000457ae) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8505,	// (0x000457ae) list_single_graphic_heading_pane_fp_g4

0xc6c6,	// (0x0004996f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6c6,	// (0x0004996f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5a,	// (0x0004ce03) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5a,	// (0x0004ce03) list_single_graphic_heading_pane_fp_g

0x511c,	// (0x000423c5) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x511c,	// (0x000423c5) list_single_graphic_heading_pane_fp_t1

0x5132,	// (0x000423db) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5132,	// (0x000423db) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb65,	// (0x0004ce0e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb65,	// (0x0004ce0e) list_single_graphic_heading_pane_fp_t

0x5144,	// (0x000423ed) list_single_cale_day_pane_fp_g1_ParamLimits

0x5144,	// (0x000423ed) list_single_cale_day_pane_fp_g1

0xc6d2,	// (0x0004997b) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6d2,	// (0x0004997b) list_single_cale_day_pane_fp_g2

0x6c59,	// (0x00043f02) list_single_cale_day_pane_fp_g3_ParamLimits

0x6c59,	// (0x00043f02) list_single_cale_day_pane_fp_g3

0x6c81,	// (0x00043f2a) list_single_cale_day_pane_fp_g4_ParamLimits

0x6c81,	// (0x00043f2a) list_single_cale_day_pane_fp_g4

0x6ca5,	// (0x00043f4e) list_single_cale_day_pane_fp_g5_ParamLimits

0x6ca5,	// (0x00043f4e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6a,	// (0x0004ce13) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6a,	// (0x0004ce13) list_single_cale_day_pane_fp_g

0x517c,	// (0x00042425) list_single_cale_day_pane_fp_t1_ParamLimits

0x517c,	// (0x00042425) list_single_cale_day_pane_fp_t1

0x51a2,	// (0x0004244b) list_single_cale_day_pane_fp_t2_ParamLimits

0x51a2,	// (0x0004244b) list_single_cale_day_pane_fp_t2

0x51bb,	// (0x00042464) list_single_cale_day_pane_fp_t3_ParamLimits

0x51bb,	// (0x00042464) list_single_cale_day_pane_fp_t3

0x0002,

0xfb75,	// (0x0004ce1e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb75,	// (0x0004ce1e) list_single_cale_day_pane_fp_t

0xc6ba,	// (0x00049963) list_empty_pane_fp_g1_ParamLimits

0xc6ba,	// (0x00049963) list_empty_pane_fp_g1

0x51d4,	// (0x0004247d) list_empty_pane_fp_t1

0x51e2,	// (0x0004248b) list_empty_pane_fp_t2

0x0001,

0xfb7c,	// (0x0004ce25) list_empty_pane_fp_t

0xc6ba,	// (0x00049963) list_single_heading_pane_fp_g1_ParamLimits

0xc6ba,	// (0x00049963) list_single_heading_pane_fp_g1

0x8492,	// (0x0004573b) list_single_heading_pane_fp_g2_ParamLimits

0x8492,	// (0x0004573b) list_single_heading_pane_fp_g2

0x8505,	// (0x000457ae) list_single_heading_pane_fp_g3_ParamLimits

0x8505,	// (0x000457ae) list_single_heading_pane_fp_g3

0x0002,

0xfb81,	// (0x0004ce2a) list_single_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0004ce2a) list_single_heading_pane_fp_g

0x51f0,	// (0x00042499) list_single_heading_pane_fp_t1_ParamLimits

0x51f0,	// (0x00042499) list_single_heading_pane_fp_t1

0x5202,	// (0x000424ab) list_single_heading_pane_fp_t2_ParamLimits

0x5202,	// (0x000424ab) list_single_heading_pane_fp_t2

0x0001,

0xfb88,	// (0x0004ce31) list_single_heading_pane_fp_t_ParamLimits

0xfb88,	// (0x0004ce31) list_single_heading_pane_fp_t

0x86fd,	// (0x000459a6) aid_size_cell_fast

0x7e57,	// (0x00045100) soft_indicator_pane_cp1_t1

0x873a,	// (0x000459e3) cell_app_pane_cp2_ParamLimits

0x873a,	// (0x000459e3) cell_app_pane_cp2

0x6a1d,	// (0x00043cc6) fep_hwr_candidate_drop_down_list_pane

0x2722,	// (0x0003f9cb) fep_hwr_candidate_pane_g3_ParamLimits

0x2722,	// (0x0003f9cb) fep_hwr_candidate_pane_g3

0x272f,	// (0x0003f9d8) fep_hwr_candidate_pane_g4_ParamLimits

0x272f,	// (0x0003f9d8) fep_hwr_candidate_pane_g4

0x0002,

0xfafc,	// (0x0004cda5) fep_hwr_candidate_pane_g_ParamLimits

0xfafc,	// (0x0004cda5) fep_hwr_candidate_pane_g

0xc181,	// (0x0004942a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc181,	// (0x0004942a) fep_vkb_candidate_drop_down_list_pane

0xc592,	// (0x0004983b) fep_vkb_candidate_pane_g3

0xc59a,	// (0x00049843) fep_vkb_candidate_pane_g4

0x0002,

0xfb29,	// (0x0004cdd2) fep_vkb_candidate_pane_g

0xc29a,	// (0x00049543) cell_hwr_candidate_pane_g1_ParamLimits

0xc5cc,	// (0x00049875) cell_hwr_candidate_pane_g3_ParamLimits

0xc5cc,	// (0x00049875) cell_hwr_candidate_pane_g3

0xc5ed,	// (0x00049896) cell_hwr_candidate_pane_g4_ParamLimits

0xc5ed,	// (0x00049896) cell_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0004cdec) cell_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0004cdec) cell_hwr_candidate_pane_g

0xc5b1,	// (0x0004985a) cell_vkb_candidate_pane_g3_ParamLimits

0xc5b1,	// (0x0004985a) cell_vkb_candidate_pane_g3

0xc60e,	// (0x000498b7) cell_vkb_candidate_pane_g4_ParamLimits

0xc60e,	// (0x000498b7) cell_vkb_candidate_pane_g4

0xc6de,	// (0x00049987) cell_app_pane_cp2_g1_ParamLimits

0xc6de,	// (0x00049987) cell_app_pane_cp2_g1

0xc6fc,	// (0x000499a5) cell_app_pane_cp2_g2_ParamLimits

0xc6fc,	// (0x000499a5) cell_app_pane_cp2_g2

0x0001,

0xfb8d,	// (0x0004ce36) cell_app_pane_cp2_g_ParamLimits

0xfb8d,	// (0x0004ce36) cell_app_pane_cp2_g

0xc708,	// (0x000499b1) cell_app_pane_cp2_t1_ParamLimits

0xc708,	// (0x000499b1) cell_app_pane_cp2_t1

0x84f7,	// (0x000457a0) grid_highlight_pane_cp1_ParamLimits

0x84f7,	// (0x000457a0) grid_highlight_pane_cp1

0x6cc9,	// (0x00043f72) cell_hwr_candidate_pane_cp1_ParamLimits

0x6cc9,	// (0x00043f72) cell_hwr_candidate_pane_cp1

0xc29a,	// (0x00049543) fep_hwr_candidate_drop_down_list_pane_g1

0xc71a,	// (0x000499c3) fep_hwr_candidate_drop_down_list_pane_g2

0xc727,	// (0x000499d0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb92,	// (0x0004ce3b) fep_hwr_candidate_drop_down_list_pane_g

0x6ce8,	// (0x00043f91) fep_hwr_candidate_drop_down_list_scroll_pane

0x6cf1,	// (0x00043f9a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6cf1,	// (0x00043f9a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6cfe,	// (0x00043fa7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6cfe,	// (0x00043fa7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d0b,	// (0x00043fb4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d0b,	// (0x00043fb4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5b1,	// (0x0004985a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5b1,	// (0x0004985a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc60e,	// (0x000498b7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc60e,	// (0x000498b7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d18,	// (0x00043fc1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d18,	// (0x00043fc1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6d33,	// (0x00043fdc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6d33,	// (0x00043fdc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6d4e,	// (0x00043ff7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6d4e,	// (0x00043ff7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb99,	// (0x0004ce42) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb99,	// (0x0004ce42) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc734,	// (0x000499dd) cell_vkb_candidate_pane_cp1_ParamLimits

0xc734,	// (0x000499dd) cell_vkb_candidate_pane_cp1

0xc29a,	// (0x00049543) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc29a,	// (0x00049543) fep_vkb_candidate_drop_down_list_pane_g1

0xc71a,	// (0x000499c3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc71a,	// (0x000499c3) fep_vkb_candidate_drop_down_list_pane_g2

0xc727,	// (0x000499d0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc727,	// (0x000499d0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb92,	// (0x0004ce3b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb92,	// (0x0004ce3b) fep_vkb_candidate_drop_down_list_pane_g

0xc754,	// (0x000499fd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc754,	// (0x000499fd) fep_vkb_candidate_drop_down_list_scroll_pane

0xc761,	// (0x00049a0a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc761,	// (0x00049a0a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc76e,	// (0x00049a17) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc76e,	// (0x00049a17) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc77a,	// (0x00049a23) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc77a,	// (0x00049a23) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5cc,	// (0x00049875) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5cc,	// (0x00049875) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5ed,	// (0x00049896) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5ed,	// (0x00049896) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc786,	// (0x00049a2f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc786,	// (0x00049a2f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7a7,	// (0x00049a50) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7a7,	// (0x00049a50) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7c8,	// (0x00049a71) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7c8,	// (0x00049a71) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbaa,	// (0x0004ce53) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbaa,	// (0x0004ce53) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b88,	// (0x00044e31) title_pane_g1_ParamLimits

0x7b95,	// (0x00044e3e) title_pane_g2_ParamLimits

0xf527,	// (0x0004c7d0) title_pane_g_ParamLimits

0x8b70,	// (0x00045e19) aid_call2_pane

0x8b78,	// (0x00045e21) aid_call_pane

0x8b80,	// (0x00045e29) popup_clock_analogue_window_g1

0x8b80,	// (0x00045e29) popup_clock_analogue_window_g2

0x5a5c,	// (0x00042d05) popup_clock_analogue_window_g3

0x5a65,	// (0x00042d0e) popup_clock_analogue_window_g4

0x274e,	// (0x0003f9f7) popup_clock_analogue_window_g5

0x0004,

0xf6d6,	// (0x0004c97f) popup_clock_analogue_window_g

0x5a6d,	// (0x00042d16) popup_clock_analogue_window_t1

0x5a7b,	// (0x00042d24) clock_digital_number_pane_ParamLimits

0x5a7b,	// (0x00042d24) clock_digital_number_pane

0x5a87,	// (0x00042d30) clock_digital_number_pane_cp02_ParamLimits

0x5a87,	// (0x00042d30) clock_digital_number_pane_cp02

0x5a93,	// (0x00042d3c) clock_digital_number_pane_cp03_ParamLimits

0x5a93,	// (0x00042d3c) clock_digital_number_pane_cp03

0x5a9f,	// (0x00042d48) clock_digital_number_pane_cp04_ParamLimits

0x5a9f,	// (0x00042d48) clock_digital_number_pane_cp04

0x5aab,	// (0x00042d54) clock_digital_separator_pane_ParamLimits

0x5aab,	// (0x00042d54) clock_digital_separator_pane

0x5ab7,	// (0x00042d60) popup_clock_digital_window_t1_ParamLimits

0x5ab7,	// (0x00042d60) popup_clock_digital_window_t1

0x274e,	// (0x0003f9f7) clock_digital_number_pane_g1

0x274e,	// (0x0003f9f7) clock_digital_number_pane_g2

0x0001,

0xf6e1,	// (0x0004c98a) clock_digital_number_pane_g

0x274e,	// (0x0003f9f7) clock_digital_separator_pane_g1

0x274e,	// (0x0003f9f7) clock_digital_separator_pane_g2

0x0001,

0xf6e1,	// (0x0004c98a) clock_digital_separator_pane_g

0x9511,	// (0x000467ba) aid_fill_nsta_ParamLimits

0x965d,	// (0x00046906) indicator_nsta_pane_ParamLimits

0x97d6,	// (0x00046a7f) popup_clock_analogue_window

0x97d6,	// (0x00046a7f) popup_clock_digital_window

0xb9fe,	// (0x00048ca7) grid_indicator_nsta_pane_ParamLimits

0xba27,	// (0x00048cd0) clock_nsta_pane_t2

0x0001,

0xfa7c,	// (0x0004cd25) clock_nsta_pane_t

0x5a20,	// (0x00042cc9) aid_size_max_handle

0x5a2a,	// (0x00042cd3) aid_size_min_handle

0x91b1,	// (0x0004645a) editor_scroll_pane

0xc7e3,	// (0x00049a8c) ex_editor_pane

0x866b,	// (0x00045914) scroll_pane_cp13

0x848a,	// (0x00045733) scroll_pane_cp14

0x8baf,	// (0x00045e58) scroll_pane_cp36

0x8bdb,	// (0x00045e84) list_single_graphic_hl_pane_cp2_ParamLimits

0x8bdb,	// (0x00045e84) list_single_graphic_hl_pane_cp2

0xafc0,	// (0x00048269) list_single_graphic_hl_pane_ParamLimits

0xafc0,	// (0x00048269) list_single_graphic_hl_pane

0x5218,	// (0x000424c1) aid_size_min_hl_cp1

0xc7eb,	// (0x00049a94) list_highlight_pane_cp34_ParamLimits

0xc7eb,	// (0x00049a94) list_highlight_pane_cp34

0xc7fc,	// (0x00049aa5) list_single_graphic_hl_pane_g1_ParamLimits

0xc7fc,	// (0x00049aa5) list_single_graphic_hl_pane_g1

0x5221,	// (0x000424ca) list_single_graphic_hl_pane_g2_ParamLimits

0x5221,	// (0x000424ca) list_single_graphic_hl_pane_g2

0x5221,	// (0x000424ca) list_single_graphic_hl_pane_g3_ParamLimits

0x5221,	// (0x000424ca) list_single_graphic_hl_pane_g3

0x90f6,	// (0x0004639f) list_single_graphic_hl_pane_g4_ParamLimits

0x90f6,	// (0x0004639f) list_single_graphic_hl_pane_g4

0x6d69,	// (0x00044012) list_single_graphic_hl_pane_g5_ParamLimits

0x6d69,	// (0x00044012) list_single_graphic_hl_pane_g5

0x0004,

0xfbbb,	// (0x0004ce64) list_single_graphic_hl_pane_g_ParamLimits

0xfbbb,	// (0x0004ce64) list_single_graphic_hl_pane_g

0x522d,	// (0x000424d6) list_single_graphic_hl_pane_t1_ParamLimits

0x522d,	// (0x000424d6) list_single_graphic_hl_pane_t1

0xc809,	// (0x00049ab2) aid_size_min_hl_cp2

0xc812,	// (0x00049abb) list_highlight_pane_cp34_cp2_ParamLimits

0xc812,	// (0x00049abb) list_highlight_pane_cp34_cp2

0xc7fc,	// (0x00049aa5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7fc,	// (0x00049aa5) list_single_graphic_hl_pane_g1_cp2

0xc81f,	// (0x00049ac8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc81f,	// (0x00049ac8) list_single_graphic_hl_pane_g2_cp2

0xc82b,	// (0x00049ad4) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc82b,	// (0x00049ad4) list_single_graphic_hl_pane_g3_cp2

0xc839,	// (0x00049ae2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc839,	// (0x00049ae2) list_single_graphic_hl_pane_g4_cp2

0xc845,	// (0x00049aee) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc845,	// (0x00049aee) list_single_graphic_hl_pane_g5_cp2

0x5d87,	// (0x00043030) control_pane_g4_ParamLimits

0x5d87,	// (0x00043030) control_pane_g4

0x94d5,	// (0x0004677e) bg_popup_sub_pane_cp10_ParamLimits

0xc026,	// (0x000492cf) list_choice_list_pane_ParamLimits

0xc035,	// (0x000492de) scroll_pane_cp23

0x7ee7,	// (0x00045190) bg_popup_preview_window_pane_cp02_ParamLimits

0xc65f,	// (0x00049908) list_preview_fixed_pane_ParamLimits

0xc675,	// (0x0004991e) list_preview_fixed_pane_cp_ParamLimits

0xc675,	// (0x0004991e) list_preview_fixed_pane_cp

0xc681,	// (0x0004992a) popup_preview_fixed_window_g1_ParamLimits

0xc681,	// (0x0004992a) popup_preview_fixed_window_g1

0xc68d,	// (0x00049936) popup_preview_fixed_window_g2_ParamLimits

0xc68d,	// (0x00049936) popup_preview_fixed_window_g2

0x0002,

0xfb4a,	// (0x0004cdf3) popup_preview_fixed_window_g_ParamLimits

0xfb4a,	// (0x0004cdf3) popup_preview_fixed_window_g

0x5994,	// (0x00042c3d) aid_navi_side_left_pane_ParamLimits

0x59a9,	// (0x00042c52) aid_navi_side_right_pane_ParamLimits

0x59c1,	// (0x00042c6a) navi_icon_pane_stacon_ParamLimits

0x59d5,	// (0x00042c7e) navi_navi_pane_stacon_ParamLimits

0x59c1,	// (0x00042c6a) navi_text_pane_stacon_ParamLimits

0x2744,	// (0x0003f9ed) main_text_info_pane

0xc86f,	// (0x00049b18) listscroll_text_info_pane

0xc877,	// (0x00049b20) list_text_info_pane_ParamLimits

0xc877,	// (0x00049b20) list_text_info_pane

0xc886,	// (0x00049b2f) scroll_pane_cp24_ParamLimits

0xc886,	// (0x00049b2f) scroll_pane_cp24

0xc8a4,	// (0x00049b4d) list_text_info_pane_t1_ParamLimits

0xc8a4,	// (0x00049b4d) list_text_info_pane_t1

0x5efb,	// (0x000431a4) popup_fast_swap2_window_ParamLimits

0x5efb,	// (0x000431a4) popup_fast_swap2_window

0xc8d5,	// (0x00049b7e) aid_size_cell_fast2

0x2744,	// (0x0003f9ed) bg_popup_window_pane_cp17

0x9e5f,	// (0x00047108) heading_pane_cp2

0xc8df,	// (0x00049b88) listscroll_fast2_pane

0xc8e7,	// (0x00049b90) grid_fast2_pane

0xc8f1,	// (0x00049b9a) listscroll_fast2_pane_g1

0xc8f9,	// (0x00049ba2) listscroll_fast2_pane_g2

0x0001,

0xfbc6,	// (0x0004ce6f) listscroll_fast2_pane_g

0x866b,	// (0x00045914) scroll_pane_cp26

0xc903,	// (0x00049bac) cell_fast2_pane_ParamLimits

0xc903,	// (0x00049bac) cell_fast2_pane

0xc918,	// (0x00049bc1) cell_fast2_pane_g1

0xc921,	// (0x00049bca) cell_fast2_pane_g2

0xc92a,	// (0x00049bd3) cell_fast2_pane_g3

0x0002,

0xfbcb,	// (0x0004ce74) cell_fast2_pane_g

0x8247,	// (0x000454f0) grid_highlight_pane_cp9

0x825c,	// (0x00045505) main_eswt_pane_ParamLimits

0x825c,	// (0x00045505) main_eswt_pane

0xc89b,	// (0x00049b44) list_single_text_info_pane

0xc932,	// (0x00049bdb) eswt_ctrl_button_pane

0xc932,	// (0x00049bdb) eswt_ctrl_canvas_pane

0xc93a,	// (0x00049be3) eswt_ctrl_combo_pane

0xc932,	// (0x00049bdb) eswt_ctrl_default_pane

0xc932,	// (0x00049bdb) eswt_ctrl_label_pane

0xc942,	// (0x00049beb) eswt_ctrl_wait_pane

0xc94a,	// (0x00049bf3) eswt_shell_pane

0x2744,	// (0x0003f9ed) listscroll_eswt_app_pane

0xc96a,	// (0x00049c13) popup_eswt_tasktip_window_ParamLimits

0xc96a,	// (0x00049c13) popup_eswt_tasktip_window

0x9a73,	// (0x00046d1c) bg_popup_window_pane_cp18

0xc97b,	// (0x00049c24) eswt_control_pane_g1_ParamLimits

0xc97b,	// (0x00049c24) eswt_control_pane_g1

0xc988,	// (0x00049c31) eswt_control_pane_g2_ParamLimits

0xc988,	// (0x00049c31) eswt_control_pane_g2

0xc995,	// (0x00049c3e) eswt_control_pane_g3_ParamLimits

0xc995,	// (0x00049c3e) eswt_control_pane_g3

0xc9a2,	// (0x00049c4b) eswt_control_pane_g4_ParamLimits

0xc9a2,	// (0x00049c4b) eswt_control_pane_g4

0x0003,

0xfbd2,	// (0x0004ce7b) eswt_control_pane_g_ParamLimits

0xfbd2,	// (0x0004ce7b) eswt_control_pane_g

0x84f7,	// (0x000457a0) bg_button_pane_ParamLimits

0x84f7,	// (0x000457a0) bg_button_pane

0x825c,	// (0x00045505) common_borders_pane_copy2_ParamLimits

0x825c,	// (0x00045505) common_borders_pane_copy2

0xc9af,	// (0x00049c58) control_button_pane_g1_ParamLimits

0xc9af,	// (0x00049c58) control_button_pane_g1

0xc9bb,	// (0x00049c64) control_button_pane_g2_ParamLimits

0xc9bb,	// (0x00049c64) control_button_pane_g2

0xc9c7,	// (0x00049c70) control_button_pane_g3_ParamLimits

0xc9c7,	// (0x00049c70) control_button_pane_g3

0x0002,

0xfbdb,	// (0x0004ce84) control_button_pane_g_ParamLimits

0xfbdb,	// (0x0004ce84) control_button_pane_g

0xc9db,	// (0x00049c84) control_button_pane_t1

0xc9e9,	// (0x00049c92) control_button_pane_t2

0x0001,

0xfbe2,	// (0x0004ce8b) control_button_pane_t

0x99ff,	// (0x00046ca8) bg_button_pane_g1

0x9a07,	// (0x00046cb0) bg_button_pane_g2

0x9a0f,	// (0x00046cb8) bg_button_pane_g3

0x9a17,	// (0x00046cc0) bg_button_pane_g4

0x9a1f,	// (0x00046cc8) bg_button_pane_g5

0x9a27,	// (0x00046cd0) bg_button_pane_g6

0x9a2f,	// (0x00046cd8) bg_button_pane_g7

0x9a37,	// (0x00046ce0) bg_button_pane_g8

0x9a3f,	// (0x00046ce8) bg_button_pane_g9

0x0008,

0xf83f,	// (0x0004cae8) bg_button_pane_g

0xbfe1,	// (0x0004928a) common_borders_pane_ParamLimits

0xbfe1,	// (0x0004928a) common_borders_pane

0xc97b,	// (0x00049c24) eswt_control_pane_g1_copy1_ParamLimits

0xc97b,	// (0x00049c24) eswt_control_pane_g1_copy1

0xc988,	// (0x00049c31) eswt_control_pane_g2_copy1_ParamLimits

0xc988,	// (0x00049c31) eswt_control_pane_g2_copy1

0xc995,	// (0x00049c3e) eswt_control_pane_g3_copy1_ParamLimits

0xc995,	// (0x00049c3e) eswt_control_pane_g3_copy1

0xc9a2,	// (0x00049c4b) eswt_control_pane_g4_copy1_ParamLimits

0xc9a2,	// (0x00049c4b) eswt_control_pane_g4_copy1

0xc01c,	// (0x000492c5) bg_eswt_ctrl_canvas_pane_g1

0xbfe1,	// (0x0004928a) common_borders_pane_cp2_ParamLimits

0xbfe1,	// (0x0004928a) common_borders_pane_cp2

0xbfe1,	// (0x0004928a) common_borders_pane_cp3_ParamLimits

0xbfe1,	// (0x0004928a) common_borders_pane_cp3

0xc9f7,	// (0x00049ca0) separator_horizontal_pane

0xc9ff,	// (0x00049ca8) separator_vertical_pane

0xc97b,	// (0x00049c24) eswt_control_pane_g1_copy2_ParamLimits

0xc97b,	// (0x00049c24) eswt_control_pane_g1_copy2

0xc988,	// (0x00049c31) eswt_control_pane_g2_copy2_ParamLimits

0xc988,	// (0x00049c31) eswt_control_pane_g2_copy2

0xc995,	// (0x00049c3e) eswt_control_pane_g3_copy2_ParamLimits

0xc995,	// (0x00049c3e) eswt_control_pane_g3_copy2

0xc9a2,	// (0x00049c4b) eswt_control_pane_g4_copy2_ParamLimits

0xc9a2,	// (0x00049c4b) eswt_control_pane_g4_copy2

0x2744,	// (0x0003f9ed) common_borders_pane_cp4

0xca08,	// (0x00049cb1) separator_horizontal_pane_g1

0xca11,	// (0x00049cba) separator_horizontal_pane_g2

0xca1a,	// (0x00049cc3) separator_horizontal_pane_g3

0x0002,

0xfbe7,	// (0x0004ce90) separator_horizontal_pane_g

0xc97b,	// (0x00049c24) eswt_control_pane_g1_copy3_ParamLimits

0xc97b,	// (0x00049c24) eswt_control_pane_g1_copy3

0xc988,	// (0x00049c31) eswt_control_pane_g2_copy3_ParamLimits

0xc988,	// (0x00049c31) eswt_control_pane_g2_copy3

0xc995,	// (0x00049c3e) eswt_control_pane_g3_copy3_ParamLimits

0xc995,	// (0x00049c3e) eswt_control_pane_g3_copy3

0xc9a2,	// (0x00049c4b) eswt_control_pane_g4_copy3_ParamLimits

0xc9a2,	// (0x00049c4b) eswt_control_pane_g4_copy3

0x2744,	// (0x0003f9ed) common_borders_pane_cp5

0xca23,	// (0x00049ccc) separator_vertical_pane_g1

0xca2c,	// (0x00049cd5) separator_vertical_pane_g2

0xca35,	// (0x00049cde) separator_vertical_pane_g3

0x0002,

0xfbee,	// (0x0004ce97) separator_vertical_pane_g

0xc97b,	// (0x00049c24) eswt_control_pane_g1_copy4_ParamLimits

0xc97b,	// (0x00049c24) eswt_control_pane_g1_copy4

0xc988,	// (0x00049c31) eswt_control_pane_g2_copy4_ParamLimits

0xc988,	// (0x00049c31) eswt_control_pane_g2_copy4

0xc995,	// (0x00049c3e) eswt_control_pane_g3_copy4_ParamLimits

0xc995,	// (0x00049c3e) eswt_control_pane_g3_copy4

0xc9a2,	// (0x00049c4b) eswt_control_pane_g4_copy4_ParamLimits

0xc9a2,	// (0x00049c4b) eswt_control_pane_g4_copy4

0xca3e,	// (0x00049ce7) eswt_ctrl_combo_button_pane

0xca46,	// (0x00049cef) eswt_ctrl_input_pane

0xca4e,	// (0x00049cf7) popup_choice_list_window_cp70

0xca56,	// (0x00049cff) eswt_ctrl_input_pane_t1

0x2744,	// (0x0003f9ed) input_focus_pane_cp70

0xbfe1,	// (0x0004928a) bg_button_pane_cp70_ParamLimits

0xbfe1,	// (0x0004928a) bg_button_pane_cp70

0xca64,	// (0x00049d0d) eswt_ctrl_combo_button_pane_g1

0xca6c,	// (0x00049d15) wait_bar_pane_cp70

0x9a73,	// (0x00046d1c) bg_popup_window_pane_cp70_ParamLimits

0x9a73,	// (0x00046d1c) bg_popup_window_pane_cp70

0xca74,	// (0x00049d1d) popup_eswt_tasktip_window_t1

0xca8a,	// (0x00049d33) wait_bar_pane_cp71_ParamLimits

0xca8a,	// (0x00049d33) wait_bar_pane_cp71

0xca96,	// (0x00049d3f) grid_eswt_app_pane

0x8992,	// (0x00045c3b) scroll_pane_cp70

0xca9f,	// (0x00049d48) cell_eswt_app_pane_ParamLimits

0xca9f,	// (0x00049d48) cell_eswt_app_pane

0xcacf,	// (0x00049d78) cell_eswt_app_pane_g1_ParamLimits

0xcacf,	// (0x00049d78) cell_eswt_app_pane_g1

0xcafe,	// (0x00049da7) cell_eswt_app_pane_g2_ParamLimits

0xcafe,	// (0x00049da7) cell_eswt_app_pane_g2

0x0001,

0xfbf5,	// (0x0004ce9e) cell_eswt_app_pane_g_ParamLimits

0xfbf5,	// (0x0004ce9e) cell_eswt_app_pane_g

0xcb27,	// (0x00049dd0) cell_eswt_app_pane_t1_ParamLimits

0xcb27,	// (0x00049dd0) cell_eswt_app_pane_t1

0xcb59,	// (0x00049e02) grid_highlight_pane_cp70_ParamLimits

0xcb59,	// (0x00049e02) grid_highlight_pane_cp70

0x9085,	// (0x0004632e) set_content_pane_g1

0x945c,	// (0x00046705) status_small_volume_pane

0x6d7d,	// (0x00044026) status_small_volume_pane_g1

0x6d85,	// (0x0004402e) volume_small2_pane

0x6d8e,	// (0x00044037) volume_small2_pane_g1

0x6d97,	// (0x00044040) volume_small2_pane_g2

0x6da0,	// (0x00044049) volume_small2_pane_g3

0x6da9,	// (0x00044052) volume_small2_pane_g4

0x6db2,	// (0x0004405b) volume_small2_pane_g5

0x6dbb,	// (0x00044064) volume_small2_pane_g6

0x6dc4,	// (0x0004406d) volume_small2_pane_g7

0x6dcd,	// (0x00044076) volume_small2_pane_g8

0x6dd6,	// (0x0004407f) volume_small2_pane_g9

0x6ddf,	// (0x00044088) volume_small2_pane_g10

0x0009,

0xfbfa,	// (0x0004cea3) volume_small2_pane_g

0xc3e2,	// (0x0004968b) fep_vkb_top_text_pane_g1_ParamLimits

0xc3fd,	// (0x000496a6) fep_vkb_top_text_pane_t1_ParamLimits

0xc699,	// (0x00049942) popup_preview_fixed_window_g3_ParamLimits

0xc699,	// (0x00049942) popup_preview_fixed_window_g3

0x63ac,	// (0x00043655) popup_toolbar_trans_pane

0xadc7,	// (0x00048070) aid_height_set_list_ParamLimits

0xadd8,	// (0x00048081) aid_size_parent_ParamLimits

0x94d5,	// (0x0004677e) list_highlight_pane_cp2_ParamLimits

0x9085,	// (0x0004632e) set_content_pane_g1_ParamLimits

0x4d93,	// (0x0004203c) list_single_image_pane_ParamLimits

0x4d93,	// (0x0004203c) list_single_image_pane

0xcb65,	// (0x00049e0e) aid_size_cell_image_ParamLimits

0xcb65,	// (0x00049e0e) aid_size_cell_image

0xcb72,	// (0x00049e1b) grid_single_image_pane_ParamLimits

0xcb72,	// (0x00049e1b) grid_single_image_pane

0xb33f,	// (0x000485e8) list_single_image_pane_g1_ParamLimits

0xb33f,	// (0x000485e8) list_single_image_pane_g1

0xcb7e,	// (0x00049e27) list_single_image_pane_g2_ParamLimits

0xcb7e,	// (0x00049e27) list_single_image_pane_g2

0x0001,

0xfc0f,	// (0x0004ceb8) list_single_image_pane_g_ParamLimits

0xfc0f,	// (0x0004ceb8) list_single_image_pane_g

0xcb92,	// (0x00049e3b) list_single_image_pane_t1_ParamLimits

0xcb92,	// (0x00049e3b) list_single_image_pane_t1

0xcba8,	// (0x00049e51) cell_image_list_pane_ParamLimits

0xcba8,	// (0x00049e51) cell_image_list_pane

0xcbbc,	// (0x00049e65) cell_image_list_pane_g1

0xcbc5,	// (0x00049e6e) cell_image_list_pane_g2

0x0001,

0xfc14,	// (0x0004cebd) cell_image_list_pane_g

0xcbce,	// (0x00049e77) aid_size_cell_tb_trans_pane

0x84f7,	// (0x000457a0) bg_tb_trans_pane

0xcbe0,	// (0x00049e89) grid_tb_trans_pane

0x99ff,	// (0x00046ca8) bg_tb_trans_pane_g1

0x9a07,	// (0x00046cb0) bg_tb_trans_pane_g2

0x9a0f,	// (0x00046cb8) bg_tb_trans_pane_g3

0x9a17,	// (0x00046cc0) bg_tb_trans_pane_g4

0x9a1f,	// (0x00046cc8) bg_tb_trans_pane_g5

0x9a37,	// (0x00046ce0) bg_tb_trans_pane_g6

0x9a3f,	// (0x00046ce8) bg_tb_trans_pane_g7

0x9a27,	// (0x00046cd0) bg_tb_trans_pane_g8

0x9a2f,	// (0x00046cd8) bg_tb_trans_pane_g9

0x0008,

0xfc19,	// (0x0004cec2) bg_tb_trans_pane_g

0xcbf4,	// (0x00049e9d) cell_toolbar_trans_pane_ParamLimits

0xcbf4,	// (0x00049e9d) cell_toolbar_trans_pane

0xc01c,	// (0x000492c5) cell_toolbar_trans_pane_g1

0xbbf8,	// (0x00048ea1) list_form2_midp_pane_t1

0xbc06,	// (0x00048eaf) list_form2_midp_pane_t2

0x0001,

0xfac2,	// (0x0004cd6b) list_form2_midp_pane_t

0xbc14,	// (0x00048ebd) scroll_pane_cp51_ParamLimits

0xbdd0,	// (0x00049079) form2_midp_wait_pane_g1

0xbdd9,	// (0x00049082) form2_midp_wait_pane_g2

0xbde2,	// (0x0004908b) form2_midp_wait_pane_g3

0x0002,

0xfad7,	// (0x0004cd80) form2_midp_wait_pane_g

0x7c5e,	// (0x00044f07) list_highlight_pane_cp21_ParamLimits

0xbe2e,	// (0x000490d7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe3d,	// (0x000490e6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6805,	// (0x00043aae) list_single_2graphic_im_pane_ParamLimits

0x6805,	// (0x00043aae) list_single_2graphic_im_pane

0xcc1a,	// (0x00049ec3) list_single_2graphic_im_pane_g1_ParamLimits

0xcc1a,	// (0x00049ec3) list_single_2graphic_im_pane_g1

0xcc2b,	// (0x00049ed4) list_single_2graphic_im_pane_g2_ParamLimits

0xcc2b,	// (0x00049ed4) list_single_2graphic_im_pane_g2

0xcc37,	// (0x00049ee0) list_single_2graphic_im_pane_g3_ParamLimits

0xcc37,	// (0x00049ee0) list_single_2graphic_im_pane_g3

0x0003,

0xfc2c,	// (0x0004ced5) list_single_2graphic_im_pane_g_ParamLimits

0xfc2c,	// (0x0004ced5) list_single_2graphic_im_pane_g

0xcc57,	// (0x00049f00) list_single_2graphic_im_pane_t1_ParamLimits

0xcc57,	// (0x00049f00) list_single_2graphic_im_pane_t1

0xc6a5,	// (0x0004994e) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6a5,	// (0x0004994e) list_single_graphic_2heading_pane_fp

0x50fa,	// (0x000423a3) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x50fa,	// (0x000423a3) list_single_graphic_2heading_pane_fp_g1

0xc6ba,	// (0x00049963) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6ba,	// (0x00049963) list_single_graphic_2heading_pane_fp_g2

0x8492,	// (0x0004573b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8492,	// (0x0004573b) list_single_graphic_2heading_pane_fp_g3

0x8505,	// (0x000457ae) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8505,	// (0x000457ae) list_single_graphic_2heading_pane_fp_g4

0xc6c6,	// (0x0004996f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6c6,	// (0x0004996f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5a,	// (0x0004ce03) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5a,	// (0x0004ce03) list_single_graphic_2heading_pane_fp_g

0x5243,	// (0x000424ec) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5243,	// (0x000424ec) list_single_graphic_2heading_pane_fp_t1

0x5132,	// (0x000423db) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5132,	// (0x000423db) list_single_graphic_2heading_pane_fp_t2

0x5259,	// (0x00042502) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5259,	// (0x00042502) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc35,	// (0x0004cede) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc35,	// (0x0004cede) list_single_graphic_2heading_pane_fp_t

0xc0a8,	// (0x00049351) fep_hwr_write_pane_g5_ParamLimits

0xc0a8,	// (0x00049351) fep_hwr_write_pane_g5

0xc0b4,	// (0x0004935d) fep_hwr_write_pane_g6_ParamLimits

0xc0b4,	// (0x0004935d) fep_hwr_write_pane_g6

0xc94a,	// (0x00049bf3) eswt_shell_pane_ParamLimits

0x9a73,	// (0x00046d1c) bg_popup_window_pane_cp18_ParamLimits

0x9e5f,	// (0x00047108) heading_pane_cp70

0xca74,	// (0x00049d1d) popup_eswt_tasktip_window_t1_ParamLimits

0x9566,	// (0x0004680f) aid_touch_tab_arrow_left

0x9575,	// (0x0004681e) aid_touch_tab_arrow_right

0x7ba6,	// (0x00044e4f) title_pane_g3_ParamLimits

0x7ba6,	// (0x00044e4f) title_pane_g3

0x84b6,	// (0x0004575f) set_value_pane_g1

0x63ac,	// (0x00043655) popup_toolbar_trans_pane_ParamLimits

0xcbce,	// (0x00049e77) aid_size_cell_tb_trans_pane_ParamLimits

0x84f7,	// (0x000457a0) bg_tb_trans_pane_ParamLimits

0xcbe0,	// (0x00049e89) grid_tb_trans_pane_ParamLimits

0x7ee7,	// (0x00045190) cont_note_pane_ParamLimits

0x7ee7,	// (0x00045190) cont_note_pane

0x825c,	// (0x00045505) cont_snote2_single_text_pane_ParamLimits

0x825c,	// (0x00045505) cont_snote2_single_text_pane

0x825c,	// (0x00045505) cont_snote2_single_graphic_pane_ParamLimits

0x825c,	// (0x00045505) cont_snote2_single_graphic_pane

0xa08e,	// (0x00047337) cont_note_wait_pane_ParamLimits

0xa08e,	// (0x00047337) cont_note_wait_pane

0xa08e,	// (0x00047337) cont_note_image_pane_ParamLimits

0xa08e,	// (0x00047337) cont_note_image_pane

0xcc88,	// (0x00049f31) popup_note2_window_g1_ParamLimits

0xcc88,	// (0x00049f31) popup_note2_window_g1

0xccb9,	// (0x00049f62) popup_note2_window_t1_ParamLimits

0xccb9,	// (0x00049f62) popup_note2_window_t1

0xccfe,	// (0x00049fa7) popup_note2_window_t2_ParamLimits

0xccfe,	// (0x00049fa7) popup_note2_window_t2

0xcd43,	// (0x00049fec) popup_note2_window_t3_ParamLimits

0xcd43,	// (0x00049fec) popup_note2_window_t3

0xcd88,	// (0x0004a031) popup_note2_window_t4_ParamLimits

0xcd88,	// (0x0004a031) popup_note2_window_t4

0x7f6b,	// (0x00045214) popup_note2_window_t5_ParamLimits

0x7f6b,	// (0x00045214) popup_note2_window_t5

0x0004,

0xfc41,	// (0x0004ceea) popup_note2_window_t_ParamLimits

0xfc41,	// (0x0004ceea) popup_note2_window_t

0xcdb7,	// (0x0004a060) popup_note2_image_window_g1_ParamLimits

0xcdb7,	// (0x0004a060) popup_note2_image_window_g1

0xcdc3,	// (0x0004a06c) popup_note2_image_window_g2_ParamLimits

0xcdc3,	// (0x0004a06c) popup_note2_image_window_g2

0x0001,

0xfc4c,	// (0x0004cef5) popup_note2_image_window_g_ParamLimits

0xfc4c,	// (0x0004cef5) popup_note2_image_window_g

0xcdd5,	// (0x0004a07e) popup_note2_image_window_t1_ParamLimits

0xcdd5,	// (0x0004a07e) popup_note2_image_window_t1

0xcded,	// (0x0004a096) popup_note2_image_window_t2_ParamLimits

0xcded,	// (0x0004a096) popup_note2_image_window_t2

0xce05,	// (0x0004a0ae) popup_note2_image_window_t3_ParamLimits

0xce05,	// (0x0004a0ae) popup_note2_image_window_t3

0x0002,

0xfc51,	// (0x0004cefa) popup_note2_image_window_t_ParamLimits

0xfc51,	// (0x0004cefa) popup_note2_image_window_t

0xa09c,	// (0x00047345) popup_note2_wait_window_g1_ParamLimits

0xa09c,	// (0x00047345) popup_note2_wait_window_g1

0xce21,	// (0x0004a0ca) popup_note2_wait_window_g2_ParamLimits

0xce21,	// (0x0004a0ca) popup_note2_wait_window_g2

0xa0b4,	// (0x0004735d) popup_note2_wait_window_g3_ParamLimits

0xa0b4,	// (0x0004735d) popup_note2_wait_window_g3

0x0002,

0xfc58,	// (0x0004cf01) popup_note2_wait_window_g_ParamLimits

0xfc58,	// (0x0004cf01) popup_note2_wait_window_g

0xce2d,	// (0x0004a0d6) popup_note2_wait_window_t1_ParamLimits

0xce2d,	// (0x0004a0d6) popup_note2_wait_window_t1

0xce4b,	// (0x0004a0f4) popup_note2_wait_window_t2_ParamLimits

0xce4b,	// (0x0004a0f4) popup_note2_wait_window_t2

0xce69,	// (0x0004a112) popup_note2_wait_window_t3_ParamLimits

0xce69,	// (0x0004a112) popup_note2_wait_window_t3

0xce7b,	// (0x0004a124) popup_note2_wait_window_t4_ParamLimits

0xce7b,	// (0x0004a124) popup_note2_wait_window_t4

0x0003,

0xfc5f,	// (0x0004cf08) popup_note2_wait_window_t_ParamLimits

0xfc5f,	// (0x0004cf08) popup_note2_wait_window_t

0xce8d,	// (0x0004a136) wait_bar2_pane_ParamLimits

0xce8d,	// (0x0004a136) wait_bar2_pane

0xcea5,	// (0x0004a14e) popup_snote2_single_text_window_g1_ParamLimits

0xcea5,	// (0x0004a14e) popup_snote2_single_text_window_g1

0xcecd,	// (0x0004a176) popup_snote2_single_text_window_t1_ParamLimits

0xcecd,	// (0x0004a176) popup_snote2_single_text_window_t1

0xcf19,	// (0x0004a1c2) popup_snote2_single_text_window_t2_ParamLimits

0xcf19,	// (0x0004a1c2) popup_snote2_single_text_window_t2

0xcf65,	// (0x0004a20e) popup_snote2_single_text_window_t3_ParamLimits

0xcf65,	// (0x0004a20e) popup_snote2_single_text_window_t3

0xcfa6,	// (0x0004a24f) popup_snote2_single_text_window_t4_ParamLimits

0xcfa6,	// (0x0004a24f) popup_snote2_single_text_window_t4

0xcfdc,	// (0x0004a285) popup_snote2_single_text_window_t5_ParamLimits

0xcfdc,	// (0x0004a285) popup_snote2_single_text_window_t5

0x0004,

0xfc68,	// (0x0004cf11) popup_snote2_single_text_window_t_ParamLimits

0xfc68,	// (0x0004cf11) popup_snote2_single_text_window_t

0xd007,	// (0x0004a2b0) popup_snote2_single_graphic_window_g1_ParamLimits

0xd007,	// (0x0004a2b0) popup_snote2_single_graphic_window_g1

0xd02f,	// (0x0004a2d8) popup_snote2_single_graphic_window_g2_ParamLimits

0xd02f,	// (0x0004a2d8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc73,	// (0x0004cf1c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc73,	// (0x0004cf1c) popup_snote2_single_graphic_window_g

0xd057,	// (0x0004a300) popup_snote2_single_graphic_window_t1_ParamLimits

0xd057,	// (0x0004a300) popup_snote2_single_graphic_window_t1

0xd0a3,	// (0x0004a34c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0a3,	// (0x0004a34c) popup_snote2_single_graphic_window_t2

0xcf65,	// (0x0004a20e) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf65,	// (0x0004a20e) popup_snote2_single_graphic_window_t3

0xcfa6,	// (0x0004a24f) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfa6,	// (0x0004a24f) popup_snote2_single_graphic_window_t4

0xcfdc,	// (0x0004a285) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfdc,	// (0x0004a285) popup_snote2_single_graphic_window_t5

0x0004,

0xfc78,	// (0x0004cf21) popup_snote2_single_graphic_window_t_ParamLimits

0xfc78,	// (0x0004cf21) popup_snote2_single_graphic_window_t

0xbad5,	// (0x00048d7e) clock_nsta_pane_cp2_t1

0xbad5,	// (0x00048d7e) clock_nsta_pane_cp2_t2

0x0001,

0xfa98,	// (0x0004cd41) clock_nsta_pane_cp2_t

0x49e6,	// (0x00041c8f) form_field_data_wide_pane_g1_ParamLimits

0x8492,	// (0x0004573b) form_field_data_wide_pane_g2_ParamLimits

0x8492,	// (0x0004573b) form_field_data_wide_pane_g2

0x8505,	// (0x000457ae) form_field_data_wide_pane_g3_ParamLimits

0x8505,	// (0x000457ae) form_field_data_wide_pane_g3

0x0002,

0xf659,	// (0x0004c902) form_field_data_wide_pane_g_ParamLimits

0xf659,	// (0x0004c902) form_field_data_wide_pane_g

0xb9b1,	// (0x00048c5a) grid_touch_3_pane_ParamLimits

0xb9b1,	// (0x00048c5a) grid_touch_3_pane

0xd0ef,	// (0x0004a398) cell_touch_3_pane_ParamLimits

0xd0ef,	// (0x0004a398) cell_touch_3_pane

0xc01c,	// (0x000492c5) cell_touch_3_pane_g1

0xc01c,	// (0x000492c5) cell_touch_3_pane_g2

0x0001,

0xfb1d,	// (0x0004cdc6) cell_touch_3_pane_g

0x7fc3,	// (0x0004526c) cont_query_data_pane

0x7fcb,	// (0x00045274) cont_query_data_pane_cp1

0xd11d,	// (0x0004a3c6) button_value_adjust_pane_cp7

0xd125,	// (0x0004a3ce) query_popup_pane_cp3

0x8c89,	// (0x00045f32) bg_popup_sub_pane_cp22_ParamLimits

0x5ad6,	// (0x00042d7f) navi_navi_volume_pane_cp2

0x5af1,	// (0x00042d9a) popup_side_volume_key_window_g2

0x5b00,	// (0x00042da9) popup_side_volume_key_window_g3

0x0002,

0xf6ef,	// (0x0004c998) popup_side_volume_key_window_g

0x5b1d,	// (0x00042dc6) popup_side_volume_key_window_t2

0x0001,

0xf6f6,	// (0x0004c99f) popup_side_volume_key_window_t

0x8f4f,	// (0x000461f8) popup_side_volume_key_window_ParamLimits

0x4616,	// (0x000418bf) list_double_graphic_pane_g4_ParamLimits

0x4616,	// (0x000418bf) list_double_graphic_pane_g4

0x6842,	// (0x00043aeb) list_single_2heading_msg_pane_ParamLimits

0x6842,	// (0x00043aeb) list_single_2heading_msg_pane

0x6de8,	// (0x00044091) list_single_2heading_msg_pane_g1_ParamLimits

0x6de8,	// (0x00044091) list_single_2heading_msg_pane_g1

0x6df4,	// (0x0004409d) list_single_2heading_msg_pane_g2_ParamLimits

0x6df4,	// (0x0004409d) list_single_2heading_msg_pane_g2

0x6e00,	// (0x000440a9) list_single_2heading_msg_pane_g3_ParamLimits

0x6e00,	// (0x000440a9) list_single_2heading_msg_pane_g3

0x6e0c,	// (0x000440b5) list_single_2heading_msg_pane_g4_ParamLimits

0x6e0c,	// (0x000440b5) list_single_2heading_msg_pane_g4

0x0003,

0xfc83,	// (0x0004cf2c) list_single_2heading_msg_pane_g_ParamLimits

0xfc83,	// (0x0004cf2c) list_single_2heading_msg_pane_g

0x5279,	// (0x00042522) list_single_2heading_msg_pane_t1_ParamLimits

0x5279,	// (0x00042522) list_single_2heading_msg_pane_t1

0x52a1,	// (0x0004254a) list_single_2heading_msg_pane_t2_ParamLimits

0x52a1,	// (0x0004254a) list_single_2heading_msg_pane_t2

0x52d5,	// (0x0004257e) list_single_2heading_msg_pane_t3_ParamLimits

0x52d5,	// (0x0004257e) list_single_2heading_msg_pane_t3

0x530e,	// (0x000425b7) list_single_2heading_msg_pane_t4_ParamLimits

0x530e,	// (0x000425b7) list_single_2heading_msg_pane_t4

0x0003,

0xfc8c,	// (0x0004cf35) list_single_2heading_msg_pane_t_ParamLimits

0xfc8c,	// (0x0004cf35) list_single_2heading_msg_pane_t

0x7bb2,	// (0x00044e5b) title_pane_g4_ParamLimits

0x7bb2,	// (0x00044e5b) title_pane_g4

0x58e5,	// (0x00042b8e) title_pane_stacon_g3_ParamLimits

0x58e5,	// (0x00042b8e) title_pane_stacon_g3

0xcc4b,	// (0x00049ef4) list_single_2graphic_im_pane_g4_ParamLimits

0xcc4b,	// (0x00049ef4) list_single_2graphic_im_pane_g4

0xaaed,	// (0x00047d96) popup_side_volume_key_window_cp

0xb2f0,	// (0x00048599) main_idle_act2_pane_t1

0x649e,	// (0x00043747) toolbar_button_pane_g10

0x8454,	// (0x000456fd) popup_toolbar_window_cp1

0xbac6,	// (0x00048d6f) clock_nsta_pane_cp_t1

0xbac6,	// (0x00048d6f) clock_nsta_pane_cp_t2

0x0001,

0xfa93,	// (0x0004cd3c) clock_nsta_pane_cp_t

0x5ad6,	// (0x00042d7f) navi_navi_volume_pane_cp2_ParamLimits

0x5ae5,	// (0x00042d8e) popup_side_volume_key_window_g1_ParamLimits

0x5af1,	// (0x00042d9a) popup_side_volume_key_window_g2_ParamLimits

0x5b00,	// (0x00042da9) popup_side_volume_key_window_g3_ParamLimits

0xf6ef,	// (0x0004c998) popup_side_volume_key_window_g_ParamLimits

0x6a09,	// (0x00043cb2) fep_hwr_aid_pane

0x2714,	// (0x0003f9bd) bg_fep_hwr_top_pane_g4_ParamLimits

0xc078,	// (0x00049321) fep_hwr_top_pane_g1_ParamLimits

0xc08a,	// (0x00049333) fep_hwr_top_pane_g2_ParamLimits

0x6ac2,	// (0x00043d6b) fep_hwr_top_pane_g3_ParamLimits

0xfae8,	// (0x0004cd91) fep_hwr_top_pane_g_ParamLimits

0x6ad7,	// (0x00043d80) fep_hwr_top_text_pane_ParamLimits

0xa8b0,	// (0x00047b59) aid_touch_tab_arrow_arrow_2

0xa8b9,	// (0x00047b62) aid_touch_tab_arrow_left_2

0x6a1d,	// (0x00043cc6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6a54,	// (0x00043cfd) fep_hwr_prediction_pane

0xc1ea,	// (0x00049493) fep_vkb_prediction_pane

0xc2ee,	// (0x00049597) fep_vkb_side_pane_g3_ParamLimits

0xc2ee,	// (0x00049597) fep_vkb_side_pane_g3

0xc29a,	// (0x00049543) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc71a,	// (0x000499c3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc727,	// (0x000499d0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb92,	// (0x0004ce3b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd14a,	// (0x0004a3f3) fep_hwr_prediction_pane_g1

0x6e24,	// (0x000440cd) fep_hwr_prediction_pane_g2

0x6e2c,	// (0x000440d5) fep_hwr_prediction_pane_g3

0x6e34,	// (0x000440dd) fep_hwr_prediction_pane_g4

0x0003,

0xfc95,	// (0x0004cf3e) fep_hwr_prediction_pane_g

0xd14a,	// (0x0004a3f3) fep_vkb_prediction_pane_g1

0xd154,	// (0x0004a3fd) fep_vkb_prediction_pane_g2

0xd15c,	// (0x0004a405) fep_vkb_prediction_pane_g3

0xd164,	// (0x0004a40d) fep_vkb_prediction_pane_g4

0x0003,

0xfc9e,	// (0x0004cf47) fep_vkb_prediction_pane_g

0x6792,	// (0x00043a3b) slider_set_pane_g3

0x67a6,	// (0x00043a4f) slider_set_pane_g4

0x67be,	// (0x00043a67) slider_set_pane_g5

0x6792,	// (0x00043a3b) slider_set_pane_g6

0x67d4,	// (0x00043a7d) slider_set_pane_g7

0xaf3d,	// (0x000481e6) slider_form_pane_g3

0xaf46,	// (0x000481ef) slider_form_pane_g4

0xaf4e,	// (0x000481f7) slider_form_pane_g5

0xaf3d,	// (0x000481e6) slider_form_pane_g6

0xaf56,	// (0x000481ff) slider_form_pane_g7

0xb5a7,	// (0x00048850) slider_set_pane_vc_g3

0xb5b0,	// (0x00048859) slider_set_pane_vc_g4

0xb5b9,	// (0x00048862) slider_set_pane_vc_g5

0xb5a7,	// (0x00048850) slider_set_pane_vc_g6

0xb5c2,	// (0x0004886b) slider_set_pane_vc_g7

0xb784,	// (0x00048a2d) slider_form_pane_vc_g1

0xb78d,	// (0x00048a36) slider_form_pane_vc_g2

0xb796,	// (0x00048a3f) slider_form_pane_vc_g3

0xb784,	// (0x00048a2d) slider_form_pane_vc_g4

0xb79f,	// (0x00048a48) slider_form_pane_vc_g5

0x0004,

0xfa65,	// (0x0004cd0e) slider_form_pane_vc_g

0x2744,	// (0x0003f9ed) main_idle_act3_pane

0xd16c,	// (0x0004a415) ai3_links_pane

0xd175,	// (0x0004a41e) popup_ai3_data_window_ParamLimits

0xd175,	// (0x0004a41e) popup_ai3_data_window

0x2744,	// (0x0003f9ed) grid_ai3_links_pane

0xd18f,	// (0x0004a438) cell_ai3_links_pane_ParamLimits

0xd18f,	// (0x0004a438) cell_ai3_links_pane

0xd1a7,	// (0x0004a450) bg_popup_sub_pane_cp11

0xd1b4,	// (0x0004a45d) cell_ai3_links_pane_g1

0x2744,	// (0x0003f9ed) bg_popup_sub_pane_cp12

0xd1d9,	// (0x0004a482) heading_ai3_data_pane

0xd1e1,	// (0x0004a48a) list_ai3_gene_pane

0xd1ed,	// (0x0004a496) popup_ai3_data_window_g1

0xd1f5,	// (0x0004a49e) heading_ai3_data_pane_g1

0xd1fd,	// (0x0004a4a6) heading_ai3_data_pane_t1

0xd20b,	// (0x0004a4b4) list_double_ai3_gene_pane_ParamLimits

0xd20b,	// (0x0004a4b4) list_double_ai3_gene_pane

0xd218,	// (0x0004a4c1) list_single_ai3_gene_pane_ParamLimits

0xd218,	// (0x0004a4c1) list_single_ai3_gene_pane

0xbfe1,	// (0x0004928a) list_highlight_pane_cp7_ParamLimits

0xbfe1,	// (0x0004928a) list_highlight_pane_cp7

0xd225,	// (0x0004a4ce) list_single_a13_gene_pane_t1_ParamLimits

0xd225,	// (0x0004a4ce) list_single_a13_gene_pane_t1

0xd23c,	// (0x0004a4e5) list_single_ai3_gene_pane_g1

0xd245,	// (0x0004a4ee) list_single_ai3_gene_pane_g2

0x0001,

0xfca7,	// (0x0004cf50) list_single_ai3_gene_pane_g

0xd24d,	// (0x0004a4f6) list_double_ai3_gene_pane_g1_ParamLimits

0xd24d,	// (0x0004a4f6) list_double_ai3_gene_pane_g1

0xd259,	// (0x0004a502) list_double_ai3_gene_pane_t1_ParamLimits

0xd259,	// (0x0004a502) list_double_ai3_gene_pane_t1

0xd275,	// (0x0004a51e) list_double_ai3_gene_pane_t2_ParamLimits

0xd275,	// (0x0004a51e) list_double_ai3_gene_pane_t2

0xd28b,	// (0x0004a534) list_double_ai3_gene_pane_t3_ParamLimits

0xd28b,	// (0x0004a534) list_double_ai3_gene_pane_t3

0x0002,

0xfcac,	// (0x0004cf55) list_double_ai3_gene_pane_t_ParamLimits

0xfcac,	// (0x0004cf55) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x526f,	// (0x00042518) aid_size_min_col_2

0xd136,	// (0x0004a3df) aid_size_min_msg_ParamLimits

0xd136,	// (0x0004a3df) aid_size_min_msg

0xc3ee,	// (0x00049697) fep_vkb_top_text_pane_g2_ParamLimits

0xc3ee,	// (0x00049697) fep_vkb_top_text_pane_g2

0x0001,

0xfb18,	// (0x0004cdc1) fep_vkb_top_text_pane_g_ParamLimits

0xfb18,	// (0x0004cdc1) fep_vkb_top_text_pane_g

0x2744,	// (0x0003f9ed) main_hc_apps_shell_pane

0xd2a8,	// (0x0004a551) grid_hc_apps_pane_ParamLimits

0xd2a8,	// (0x0004a551) grid_hc_apps_pane

0xd2ba,	// (0x0004a563) list_hc_apps_pane

0xd2c2,	// (0x0004a56b) scroll_pane_cp37_ParamLimits

0xd2c2,	// (0x0004a56b) scroll_pane_cp37

0xd2ce,	// (0x0004a577) cell_hc_apps_pane_ParamLimits

0xd2ce,	// (0x0004a577) cell_hc_apps_pane

0xd37c,	// (0x0004a625) cell_hc_apps_pane_g1_ParamLimits

0xd37c,	// (0x0004a625) cell_hc_apps_pane_g1

0xd3ac,	// (0x0004a655) cell_hc_apps_pane_g2_ParamLimits

0xd3ac,	// (0x0004a655) cell_hc_apps_pane_g2

0xd3c8,	// (0x0004a671) cell_hc_apps_pane_g3_ParamLimits

0xd3c8,	// (0x0004a671) cell_hc_apps_pane_g3

0x0002,

0xfcb3,	// (0x0004cf5c) cell_hc_apps_pane_g_ParamLimits

0xfcb3,	// (0x0004cf5c) cell_hc_apps_pane_g

0xd3ea,	// (0x0004a693) cell_hc_apps_pane_t1_ParamLimits

0xd3ea,	// (0x0004a693) cell_hc_apps_pane_t1

0x7ee7,	// (0x00045190) grid_highlight_pane_cp10_ParamLimits

0x7ee7,	// (0x00045190) grid_highlight_pane_cp10

0xd42a,	// (0x0004a6d3) list_single_hc_apps_pane_ParamLimits

0xd42a,	// (0x0004a6d3) list_single_hc_apps_pane

0xd486,	// (0x0004a72f) list_single_hc_apps_pane_g1

0x6e3c,	// (0x000440e5) list_single_hc_apps_pane_g2

0x0001,

0xfcba,	// (0x0004cf63) list_single_hc_apps_pane_g

0x6e55,	// (0x000440fe) list_single_hc_apps_pane_g2_copy1

0x5333,	// (0x000425dc) list_single_hc_apps_pane_t1

0x7c5e,	// (0x00044f07) bg_set_opt_pane_cp_ParamLimits

0x5778,	// (0x00042a21) setting_slider_pane_t1_ParamLimits

0x5791,	// (0x00042a3a) setting_slider_pane_t2_ParamLimits

0x57ab,	// (0x00042a54) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0004c7e0) setting_slider_pane_t_ParamLimits

0x57c3,	// (0x00042a6c) slider_set_pane_ParamLimits

0x5d9b,	// (0x00043044) control_pane_g5_ParamLimits

0x5d9b,	// (0x00043044) control_pane_g5

0xad8c,	// (0x00048035) slider_set_pane_g1_ParamLimits

0x6786,	// (0x00043a2f) slider_set_pane_g2_ParamLimits

0x6792,	// (0x00043a3b) slider_set_pane_g3_ParamLimits

0x67a6,	// (0x00043a4f) slider_set_pane_g4_ParamLimits

0x67be,	// (0x00043a67) slider_set_pane_g5_ParamLimits

0x6792,	// (0x00043a3b) slider_set_pane_g6_ParamLimits

0x67d4,	// (0x00043a7d) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x0004cbe6) slider_set_pane_g_ParamLimits

0x9030,	// (0x000462d9) navi_icon_text_pane_ParamLimits

0x9527,	// (0x000467d0) aid_fill_nsta_2_ParamLimits

0x9566,	// (0x0004680f) aid_touch_tab_arrow_left_ParamLimits

0x9575,	// (0x0004681e) aid_touch_tab_arrow_right_ParamLimits

0x95e2,	// (0x0004688b) clock_nsta_pane_ParamLimits

0xa892,	// (0x00047b3b) navi_icon_pane_g1_ParamLimits

0xa89e,	// (0x00047b47) navi_text_pane_t1_ParamLimits

0xbbd2,	// (0x00048e7b) navi_icon_text_pane_g1_ParamLimits

0xbbde,	// (0x00048e87) navi_icon_text_pane_t1_ParamLimits

0xd486,	// (0x0004a72f) list_single_hc_apps_pane_g1_ParamLimits

0x6e3c,	// (0x000440e5) list_single_hc_apps_pane_g2_ParamLimits

0xfcba,	// (0x0004cf63) list_single_hc_apps_pane_g_ParamLimits

0x6e55,	// (0x000440fe) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5333,	// (0x000425dc) list_single_hc_apps_pane_t1_ParamLimits

0x5682,	// (0x0004292b) popup_toolbar2_fixed_window_ParamLimits

0x5682,	// (0x0004292b) popup_toolbar2_fixed_window

0x63a2,	// (0x0004364b) popup_toolbar2_float_window

0x2744,	// (0x0003f9ed) bg_popup_sub_pane_cp27

0xd49f,	// (0x0004a748) grid_toolbar2_float_pane

0x2744,	// (0x0003f9ed) bg_popup_sub_pane_cp26

0xd49f,	// (0x0004a748) grid_toolbar2_fixed_pane

0xd4a7,	// (0x0004a750) cell_toolbar2_fixed_pane_ParamLimits

0xd4a7,	// (0x0004a750) cell_toolbar2_fixed_pane

0xd4b7,	// (0x0004a760) cell_toolbar2_fixed_pane_g1

0xd4c0,	// (0x0004a769) toolbar2_fixed_button_pane

0x99ff,	// (0x00046ca8) toolbar2_fixed_button_pane_g1

0x9a07,	// (0x00046cb0) toolbar2_fixed_button_pane_g2

0x9a0f,	// (0x00046cb8) toolbar2_fixed_button_pane_g3

0x9a17,	// (0x00046cc0) toolbar2_fixed_button_pane_g4

0x9a1f,	// (0x00046cc8) toolbar2_fixed_button_pane_g5

0x9a27,	// (0x00046cd0) toolbar2_fixed_button_pane_g6

0x9a2f,	// (0x00046cd8) toolbar2_fixed_button_pane_g7

0x9a37,	// (0x00046ce0) toolbar2_fixed_button_pane_g8

0x9a3f,	// (0x00046ce8) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x0004cae8) toolbar2_fixed_button_pane_g

0xd4c8,	// (0x0004a771) cell_toolbar2_float_pane_ParamLimits

0xd4c8,	// (0x0004a771) cell_toolbar2_float_pane

0xd4d9,	// (0x0004a782) cell_toolbar2_float_pane_g1

0xd4c0,	// (0x0004a769) toolbar2_fixed_button_pane_cp

0xc14a,	// (0x000493f3) fep_vkb_accented_list_pane_ParamLimits

0xc14a,	// (0x000493f3) fep_vkb_accented_list_pane

0x6c25,	// (0x00043ece) bg_popup_fep_shadow_pane_g9

0x91b1,	// (0x0004645a) bg_popup_fep_shadow_pane_cp3

0x8652,	// (0x000458fb) list_accented_list_pane

0xd4e2,	// (0x0004a78b) list_single_accented_list_pane_ParamLimits

0xd4e2,	// (0x0004a78b) list_single_accented_list_pane

0x91b1,	// (0x0004645a) list_highlight_pane_cp10

0xd4f3,	// (0x0004a79c) list_single_accented_list_pane_t1

0x62f2,	// (0x0004359b) popup_slider_window_ParamLimits

0x62f2,	// (0x0004359b) popup_slider_window

0xd12d,	// (0x0004a3d6) aid_indentation_list_msg

0xd5b7,	// (0x0004a860) bg_popup_window_pane_cp19

0xd61f,	// (0x0004a8c8) popup_slider_window_g1

0xd63b,	// (0x0004a8e4) popup_slider_window_g2

0xd657,	// (0x0004a900) popup_slider_window_g3

0x0005,

0xfcbf,	// (0x0004cf68) popup_slider_window_g

0xd6bd,	// (0x0004a966) popup_slider_window_t1

0xd731,	// (0x0004a9da) small_volume_slider_vertical_pane

0xc01c,	// (0x000492c5) small_volume_slider_vertical_pane_g1

0xc01c,	// (0x000492c5) small_volume_slider_vertical_pane_g2

0xd74d,	// (0x0004a9f6) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd1,	// (0x0004cf7a) small_volume_slider_vertical_pane_g

0x543e,	// (0x000426e7) area_side_right_pane_ParamLimits

0x543e,	// (0x000426e7) area_side_right_pane

0x6e71,	// (0x0004411a) aid_size_side_button_ParamLimits

0x6e71,	// (0x0004411a) aid_size_side_button

0x6e85,	// (0x0004412e) grid_sctrl_middle_pane_ParamLimits

0x6e85,	// (0x0004412e) grid_sctrl_middle_pane

0x6ea4,	// (0x0004414d) sctrl_sk_bottom_pane

0x6eb5,	// (0x0004415e) sctrl_sk_top_pane

0x6ec7,	// (0x00044170) aid_touch_sctrl_top

0x7ee7,	// (0x00045190) bg_sctrl_sk_pane_ParamLimits

0x7ee7,	// (0x00045190) bg_sctrl_sk_pane

0x6ed4,	// (0x0004417d) sctrl_sk_top_pane_g1

0x6ee1,	// (0x0004418a) sctrl_sk_top_pane_t1

0x6ec7,	// (0x00044170) aid_touch_sctrl_bottom

0x7ee7,	// (0x00045190) bg_sctrl_sk_pane_cp_ParamLimits

0x7ee7,	// (0x00045190) bg_sctrl_sk_pane_cp

0x6efc,	// (0x000441a5) sctrl_sk_bottom_pane_g1

0x6ee1,	// (0x0004418a) sctrl_sk_bottom_pane_t1

0x6f05,	// (0x000441ae) cell_sctrl_middle_pane_ParamLimits

0x6f05,	// (0x000441ae) cell_sctrl_middle_pane

0x6f20,	// (0x000441c9) aid_touch_sctrl_middle_ParamLimits

0x6f20,	// (0x000441c9) aid_touch_sctrl_middle

0x84f7,	// (0x000457a0) bg_sctrl_middle_pane_ParamLimits

0x84f7,	// (0x000457a0) bg_sctrl_middle_pane

0xc29a,	// (0x00049543) cell_sctrl_middle_pane_g1_ParamLimits

0xc29a,	// (0x00049543) cell_sctrl_middle_pane_g1

0x6f32,	// (0x000441db) cell_sctrl_middle_pane_g2_ParamLimits

0x6f32,	// (0x000441db) cell_sctrl_middle_pane_g2

0x0001,

0xfcdd,	// (0x0004cf86) cell_sctrl_middle_pane_g_ParamLimits

0xfcdd,	// (0x0004cf86) cell_sctrl_middle_pane_g

0x99ff,	// (0x00046ca8) bg_sctrl_middle_pane_g1

0x9a07,	// (0x00046cb0) bg_sctrl_middle_pane_g2

0x9a0f,	// (0x00046cb8) bg_sctrl_middle_pane_g3

0x9a17,	// (0x00046cc0) bg_sctrl_middle_pane_g4

0x9a1f,	// (0x00046cc8) bg_sctrl_middle_pane_g5

0x9a27,	// (0x00046cd0) bg_sctrl_middle_pane_g6

0x9a2f,	// (0x00046cd8) bg_sctrl_middle_pane_g7

0x9a37,	// (0x00046ce0) bg_sctrl_middle_pane_g8

0x0007,

0xfce2,	// (0x0004cf8b) bg_sctrl_middle_pane_g

0x9a3f,	// (0x00046ce8) bg_sctrl_middle_pane_g8_copy1

0x99ff,	// (0x00046ca8) bg_sctrl_sk_pane_g1

0x9a07,	// (0x00046cb0) bg_sctrl_sk_pane_g2

0x9a0f,	// (0x00046cb8) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x0004cae8) bg_sctrl_sk_pane_g

0x841a,	// (0x000456c3) aid_size_touch_scroll_bar

0x9a17,	// (0x00046cc0) bg_sctrl_sk_pane_g4

0x9a1f,	// (0x00046cc8) bg_sctrl_sk_pane_g5

0x9a27,	// (0x00046cd0) bg_sctrl_sk_pane_g6

0x9a2f,	// (0x00046cd8) bg_sctrl_sk_pane_g7

0x9a37,	// (0x00046ce0) bg_sctrl_sk_pane_g8

0x9a3f,	// (0x00046ce8) bg_sctrl_sk_pane_g9

0x5f59,	// (0x00043202) popup_fep_china_hwr2_fs_candidate_window

0x5f63,	// (0x0004320c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5f63,	// (0x0004320c) popup_fep_china_hwr2_fs_control_window

0xc29a,	// (0x00049543) sctrl_sk_top_pane_g2

0x0001,

0xfcd8,	// (0x0004cf81) sctrl_sk_top_pane_g

0xd756,	// (0x0004a9ff) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd756,	// (0x0004a9ff) aid_fep_china_hwr2_fs_cell

0xd768,	// (0x0004aa11) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd768,	// (0x0004aa11) bg_popup_fep_shadow_pane_cp4

0xd77f,	// (0x0004aa28) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd77f,	// (0x0004aa28) bg_popup_fep_shadow_pane_cp5

0xd791,	// (0x0004aa3a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd791,	// (0x0004aa3a) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a1,	// (0x0004aa4a) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7a9,	// (0x0004aa52) aid_fep_china_hwr2_fs_candi_cell

0x2744,	// (0x0003f9ed) bg_popup_fep_shadow_pane_cp6

0xd7b3,	// (0x0004aa5c) popup_fep_china_hwr2_fs_candidate_grid

0xd7bd,	// (0x0004aa66) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7bd,	// (0x0004aa66) cell_fep_china_hwr2_fs_funtion_grid

0xc01c,	// (0x000492c5) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7d5,	// (0x0004aa7e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7d5,	// (0x0004aa7e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7e3,	// (0x0004aa8c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7e3,	// (0x0004aa8c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf3,	// (0x0004cf9c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf3,	// (0x0004cf9c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7f9,	// (0x0004aaa2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7f9,	// (0x0004aaa2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd80e,	// (0x0004aab7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd80e,	// (0x0004aab7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf8,	// (0x0004cfa1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf8,	// (0x0004cfa1) cell_fep_china_hwr2_fs_funtion_grid_t

0xd84b,	// (0x0004aaf4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd853,	// (0x0004aafc) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd85b,	// (0x0004ab04) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfd,	// (0x0004cfa6) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd863,	// (0x0004ab0c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd863,	// (0x0004ab0c) cell_fep_china_hwr2_fs_candidate_grid

0xd87c,	// (0x0004ab25) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd884,	// (0x0004ab2d) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc01c,	// (0x000492c5) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc01c,	// (0x000492c5) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1d,	// (0x0004cdc6) cell_fep_china_hwr2_fs_candidate_grid_g

0xd88c,	// (0x0004ab35) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95f5,	// (0x0004689e) clock_nsta_pane_cp_24_ParamLimits

0x95f5,	// (0x0004689e) clock_nsta_pane_cp_24

0x9673,	// (0x0004691c) indicator_nsta_pane_cp_24_ParamLimits

0x9673,	// (0x0004691c) indicator_nsta_pane_cp_24

0xa70e,	// (0x000479b7) heading_pane_g1

0x0001,

0xf8a4,	// (0x0004cb4d) heading_pane_g

0xb139,	// (0x000483e2) grid_sct_catagory_button_pane

0xb169,	// (0x00048412) scroll_pane_cp5_ParamLimits

0xbc20,	// (0x00048ec9) button_value_adjust_pane_cp5_ParamLimits

0xbc20,	// (0x00048ec9) button_value_adjust_pane_cp5

0xbcff,	// (0x00048fa8) form2_midp_time_pane_ParamLimits

0xd89a,	// (0x0004ab43) cell_sct_catagory_button_pane_ParamLimits

0xd89a,	// (0x0004ab43) cell_sct_catagory_button_pane

0xbfe1,	// (0x0004928a) bg_button_pane_cp01_ParamLimits

0xbfe1,	// (0x0004928a) bg_button_pane_cp01

0xc01c,	// (0x000492c5) cell_sct_catagory_button_pane_g1

0x6331,	// (0x000435da) popup_tb_extension_window

0xd8ac,	// (0x0004ab55) aid_size_cell_ext_ParamLimits

0xd8ac,	// (0x0004ab55) aid_size_cell_ext

0x7ee7,	// (0x00045190) bg_tb_trans_pane_cp1_ParamLimits

0x7ee7,	// (0x00045190) bg_tb_trans_pane_cp1

0xd8cc,	// (0x0004ab75) grid_tb_ext_pane_ParamLimits

0xd8cc,	// (0x0004ab75) grid_tb_ext_pane

0xd8fa,	// (0x0004aba3) cell_tb_ext_pane_ParamLimits

0xd8fa,	// (0x0004aba3) cell_tb_ext_pane

0xd911,	// (0x0004abba) cell_tb_ext_pane_g1_ParamLimits

0xd911,	// (0x0004abba) cell_tb_ext_pane_g1

0xd92e,	// (0x0004abd7) cell_tb_ext_pane_t1

0x7ee7,	// (0x00045190) list_highlight_pane_cp11_ParamLimits

0x7ee7,	// (0x00045190) list_highlight_pane_cp11

0x56a1,	// (0x0004294a) popup_uni_indicator_window_ParamLimits

0x56a1,	// (0x0004294a) popup_uni_indicator_window

0x84f7,	// (0x000457a0) bg_popup_sub_pane_cp14

0xd949,	// (0x0004abf2) list_uniindi_pane

0xd955,	// (0x0004abfe) uniindi_top_pane

0x7ee7,	// (0x00045190) bg_uniindi_top_pane

0xd974,	// (0x0004ac1d) uniindi_top_pane_g1

0xd98a,	// (0x0004ac33) uniindi_top_pane_g2

0x0003,

0xfd04,	// (0x0004cfad) uniindi_top_pane_g

0xd9b4,	// (0x0004ac5d) uniindi_top_pane_t1

0xd9de,	// (0x0004ac87) list_single_uniindi_pane_ParamLimits

0xd9de,	// (0x0004ac87) list_single_uniindi_pane

0xc01c,	// (0x000492c5) bg_uniindi_top_pane_g1

0xd9f1,	// (0x0004ac9a) list_single_uniindi_pane_g1

0xda04,	// (0x0004acad) list_single_uniindi_pane_t1

0x2744,	// (0x0003f9ed) control_bg_pane

0xda29,	// (0x0004acd2) bg_sctrl_sk_pane_cp1

0xda32,	// (0x0004acdb) bg_sctrl_sk_pane_cp2

0xda3b,	// (0x0004ace4) control_bg_pane_g1

0xda44,	// (0x0004aced) control_bg_pane_g2

0x0001,

0xfd0d,	// (0x0004cfb6) control_bg_pane_g

0xba6a,	// (0x00048d13) cell_indicator_nsta_pane_g1_ParamLimits

0xba78,	// (0x00048d21) cell_indicator_nsta_pane_g2_ParamLimits

0xfa81,	// (0x0004cd2a) cell_indicator_nsta_pane_g_ParamLimits

0x50d0,	// (0x00042379) form2_midp_time_pane_t1_ParamLimits

0x825c,	// (0x00045505) main_idle_act4_pane_ParamLimits

0x825c,	// (0x00045505) main_idle_act4_pane

0x6331,	// (0x000435da) popup_tb_extension_window_ParamLimits

0xd8ea,	// (0x0004ab93) tb_ext_find_pane_ParamLimits

0xd8ea,	// (0x0004ab93) tb_ext_find_pane

0xda4d,	// (0x0004acf6) ai_gene_pane_1_cp1

0x92f8,	// (0x000465a1) ai_gene_pane_2_cp1

0xda55,	// (0x0004acfe) list_single_idle_plugin_calendar_pane

0xda5e,	// (0x0004ad07) list_single_idle_plugin_notification_pane

0xda67,	// (0x0004ad10) list_single_idle_plugin_player_pane

0xda70,	// (0x0004ad19) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda70,	// (0x0004ad19) list_single_idle_plugin_shortcut_pane

0xda92,	// (0x0004ad3b) main_idle_act4_pane_t1

0xdaa4,	// (0x0004ad4d) main_idle_act4_pane_t2

0x0001,

0xfd12,	// (0x0004cfbb) main_idle_act4_pane_t

0xdab6,	// (0x0004ad5f) middle_sk_idle_act4_pane_ParamLimits

0xdab6,	// (0x0004ad5f) middle_sk_idle_act4_pane

0xdacc,	// (0x0004ad75) popup_clock_digital_analogue_window_cp2

0xdae6,	// (0x0004ad8f) shortcut_wheel_idle_act4_pane_ParamLimits

0xdae6,	// (0x0004ad8f) shortcut_wheel_idle_act4_pane

0xc01c,	// (0x000492c5) shortcut_wheel_idle_act4_pane_g1

0xc01c,	// (0x000492c5) shortcut_wheel_idle_act4_pane_g2

0xc01c,	// (0x000492c5) shortcut_wheel_idle_act4_pane_g3

0xc01c,	// (0x000492c5) shortcut_wheel_idle_act4_pane_g4

0xc01c,	// (0x000492c5) shortcut_wheel_idle_act4_pane_g5

0xdafa,	// (0x0004ada3) shortcut_wheel_idle_act4_pane_g6

0xdb02,	// (0x0004adab) shortcut_wheel_idle_act4_pane_g7

0xdb0a,	// (0x0004adb3) shortcut_wheel_idle_act4_pane_g8

0xdb12,	// (0x0004adbb) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd17,	// (0x0004cfc0) shortcut_wheel_idle_act4_pane_g

0xc29a,	// (0x00049543) middle_sk_idle_act4_pane_g1_ParamLimits

0xc29a,	// (0x00049543) middle_sk_idle_act4_pane_g1

0xdb76,	// (0x0004ae1f) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb76,	// (0x0004ae1f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3a,	// (0x0004cfe3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3a,	// (0x0004cfe3) middle_sk_idle_act4_pane_g

0xdb82,	// (0x0004ae2b) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb82,	// (0x0004ae2b) middle_sk_idle_act4_pane_t1

0xdb9f,	// (0x0004ae48) grid_ai_shortcut_pane_ParamLimits

0xdb9f,	// (0x0004ae48) grid_ai_shortcut_pane

0xdbb8,	// (0x0004ae61) list_highlight_pane_cp16_ParamLimits

0xdbb8,	// (0x0004ae61) list_highlight_pane_cp16

0xdbc5,	// (0x0004ae6e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbc5,	// (0x0004ae6e) list_single_idle_plugin_shortcut_pane_g1

0xdbd1,	// (0x0004ae7a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbd1,	// (0x0004ae7a) list_single_idle_plugin_shortcut_pane_g2

0xdbe9,	// (0x0004ae92) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbe9,	// (0x0004ae92) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3f,	// (0x0004cfe8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3f,	// (0x0004cfe8) list_single_idle_plugin_shortcut_pane_g

0xdbfc,	// (0x0004aea5) cell_ai_shortcut_pane_ParamLimits

0xdbfc,	// (0x0004aea5) cell_ai_shortcut_pane

0xdc20,	// (0x0004aec9) cell_ai_shortcut_pane_g1_ParamLimits

0xdc20,	// (0x0004aec9) cell_ai_shortcut_pane_g1

0xda4d,	// (0x0004acf6) ai_gene_pane_1_cp2

0xdc42,	// (0x0004aeeb) ai_gene_pane_2_cp2

0xdc4a,	// (0x0004aef3) list_highlight_pane_cp15

0xdc53,	// (0x0004aefc) list_single_idle_plugin_calendar_pane_g1

0xdc4a,	// (0x0004aef3) list_highlight_pane_cp17

0xdc5b,	// (0x0004af04) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc63,	// (0x0004af0c) list_single_idle_plugin_player_pane_g1

0xb39e,	// (0x00048647) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd46,	// (0x0004cfef) list_single_idle_plugin_player_pane_g

0xdc6b,	// (0x0004af14) list_single_idle_plugin_player_pane_t1

0xdc79,	// (0x0004af22) list_single_idle_plugin_player_pane_t2

0xdc87,	// (0x0004af30) list_single_idle_plugin_player_pane_t3

0xdc95,	// (0x0004af3e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4b,	// (0x0004cff4) list_single_idle_plugin_player_pane_t

0xdca3,	// (0x0004af4c) wait_bar_pane_cp15

0xdcab,	// (0x0004af54) grid_ai_notification_pane

0xb39e,	// (0x00048647) list_single_idle_plugin_notification_pane_g1

0xdcb4,	// (0x0004af5d) cell_ai_notification_pane_ParamLimits

0xdcb4,	// (0x0004af5d) cell_ai_notification_pane

0xdcc1,	// (0x0004af6a) cell_ai_notification_pane_g1

0xdcc9,	// (0x0004af72) cell_ai_notification_pane_t1

0xdcd7,	// (0x0004af80) tb_ext_find_button_pane

0xdcdf,	// (0x0004af88) tb_ext_find_pane_g1

0xdce7,	// (0x0004af90) tb_ext_find_pane_t1

0x8b80,	// (0x00045e29) tb_ext_find_button_pane_g1

0xdcf5,	// (0x0004af9e) tb_ext_find_button_pane_g2

0x0001,

0xfd54,	// (0x0004cffd) tb_ext_find_button_pane_g

0xda92,	// (0x0004ad3b) main_idle_act4_pane_t1_ParamLimits

0xdaa4,	// (0x0004ad4d) main_idle_act4_pane_t2_ParamLimits

0xfd12,	// (0x0004cfbb) main_idle_act4_pane_t_ParamLimits

0xdacc,	// (0x0004ad75) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdada,	// (0x0004ad83) sat_plugin_idle_act4_pane_ParamLimits

0xdada,	// (0x0004ad83) sat_plugin_idle_act4_pane

0xdcfe,	// (0x0004afa7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcfe,	// (0x0004afa7) sat_plugin_idle_act4_pane_t1

0xdd11,	// (0x0004afba) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd11,	// (0x0004afba) sat_plugin_idle_act4_pane_t2

0xdd24,	// (0x0004afcd) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd24,	// (0x0004afcd) sat_plugin_idle_act4_pane_t3

0xdd37,	// (0x0004afe0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd37,	// (0x0004afe0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd59,	// (0x0004d002) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd59,	// (0x0004d002) sat_plugin_idle_act4_pane_t

0x55dc,	// (0x00042885) popup_battery_window_ParamLimits

0x55dc,	// (0x00042885) popup_battery_window

0x7ee7,	// (0x00045190) bg_popup_sub_pane_cp25_ParamLimits

0x7ee7,	// (0x00045190) bg_popup_sub_pane_cp25

0xdd4a,	// (0x0004aff3) popup_battery_window_g1_ParamLimits

0xdd4a,	// (0x0004aff3) popup_battery_window_g1

0xdd56,	// (0x0004afff) popup_battery_window_t1_ParamLimits

0xdd56,	// (0x0004afff) popup_battery_window_t1

0xdd68,	// (0x0004b011) popup_battery_window_t2_ParamLimits

0xdd68,	// (0x0004b011) popup_battery_window_t2

0x0001,

0xfd62,	// (0x0004d00b) popup_battery_window_t_ParamLimits

0xfd62,	// (0x0004d00b) popup_battery_window_t

0x91c5,	// (0x0004646e) midp_canvas_pane_ParamLimits

0x923c,	// (0x000464e5) midp_keypad_pane_ParamLimits

0x923c,	// (0x000464e5) midp_keypad_pane

0x94d5,	// (0x0004677e) main_midp_pane_ParamLimits

0xbae4,	// (0x00048d8d) signal_pane_g2_cp_ParamLimits

0xdd85,	// (0x0004b02e) aid_size_cell_midp_keypad_ParamLimits

0xdd85,	// (0x0004b02e) aid_size_cell_midp_keypad

0xdd9f,	// (0x0004b048) midp_keyp_game_grid_pane_ParamLimits

0xdd9f,	// (0x0004b048) midp_keyp_game_grid_pane

0xddbf,	// (0x0004b068) midp_keyp_rocker_pane_ParamLimits

0xddbf,	// (0x0004b068) midp_keyp_rocker_pane

0xddf8,	// (0x0004b0a1) midp_keyp_sk_left_pane_ParamLimits

0xddf8,	// (0x0004b0a1) midp_keyp_sk_left_pane

0xde52,	// (0x0004b0fb) midp_keyp_sk_right_pane_ParamLimits

0xde52,	// (0x0004b0fb) midp_keyp_sk_right_pane

0x2744,	// (0x0003f9ed) bg_button_pane_cp03

0xdeac,	// (0x0004b155) midp_keyp_sk_left_pane_g1

0x2744,	// (0x0003f9ed) bg_button_pane_cp04

0xdeac,	// (0x0004b155) midp_keyp_sk_right_pane_g1

0xc01c,	// (0x000492c5) midp_keyp_rocker_pane_g1

0xdeb5,	// (0x0004b15e) keyp_game_cell_pane_ParamLimits

0xdeb5,	// (0x0004b15e) keyp_game_cell_pane

0x2744,	// (0x0003f9ed) bg_button_pane_cp02

0xdec8,	// (0x0004b171) keyp_game_cell_pane_g1

0x5620,	// (0x000428c9) popup_fep_vkb2_window_ParamLimits

0x5620,	// (0x000428c9) popup_fep_vkb2_window

0x6f50,	// (0x000441f9) aid_size_cell_vkb2_ParamLimits

0x6f50,	// (0x000441f9) aid_size_cell_vkb2

0x6f9c,	// (0x00044245) popup_fep_vkb2_window_g1_ParamLimits

0x6f9c,	// (0x00044245) popup_fep_vkb2_window_g1

0x6fe4,	// (0x0004428d) vkb2_area_bottom_pane_ParamLimits

0x6fe4,	// (0x0004428d) vkb2_area_bottom_pane

0x7030,	// (0x000442d9) vkb2_area_keypad_pane_ParamLimits

0x7030,	// (0x000442d9) vkb2_area_keypad_pane

0x7072,	// (0x0004431b) vkb2_area_top_pane_ParamLimits

0x7072,	// (0x0004431b) vkb2_area_top_pane

0x70f1,	// (0x0004439a) vkb2_top_entry_pane_ParamLimits

0x70f1,	// (0x0004439a) vkb2_top_entry_pane

0x711b,	// (0x000443c4) vkb2_top_grid_left_pane_ParamLimits

0x711b,	// (0x000443c4) vkb2_top_grid_left_pane

0x713a,	// (0x000443e3) vkb2_top_grid_right_pane_ParamLimits

0x713a,	// (0x000443e3) vkb2_top_grid_right_pane

0x7159,	// (0x00044402) vkb2_cell_keypad_pane_ParamLimits

0x7159,	// (0x00044402) vkb2_cell_keypad_pane

0x722a,	// (0x000444d3) vkb2_area_bottom_grid_pane_ParamLimits

0x722a,	// (0x000444d3) vkb2_area_bottom_grid_pane

0x7250,	// (0x000444f9) vkb2_area_bottom_pane_g1_ParamLimits

0x7250,	// (0x000444f9) vkb2_area_bottom_pane_g1

0x7274,	// (0x0004451d) vkb2_area_bottom_pane_g2_ParamLimits

0x7274,	// (0x0004451d) vkb2_area_bottom_pane_g2

0x72a2,	// (0x0004454b) vkb2_area_bottom_pane_g3_ParamLimits

0x72a2,	// (0x0004454b) vkb2_area_bottom_pane_g3

0x0002,

0xfd67,	// (0x0004d010) vkb2_area_bottom_pane_g_ParamLimits

0xfd67,	// (0x0004d010) vkb2_area_bottom_pane_g

0x7303,	// (0x000445ac) vkb2_top_cell_left_pane_ParamLimits

0x7303,	// (0x000445ac) vkb2_top_cell_left_pane

0xded9,	// (0x0004b182) vkb2_top_entry_pane_g1_ParamLimits

0xded9,	// (0x0004b182) vkb2_top_entry_pane_g1

0xdee7,	// (0x0004b190) vkb2_top_entry_pane_t1_ParamLimits

0xdee7,	// (0x0004b190) vkb2_top_entry_pane_t1

0xdf19,	// (0x0004b1c2) vkb2_top_entry_pane_t2_ParamLimits

0xdf19,	// (0x0004b1c2) vkb2_top_entry_pane_t2

0xdf4b,	// (0x0004b1f4) vkb2_top_entry_pane_t3_ParamLimits

0xdf4b,	// (0x0004b1f4) vkb2_top_entry_pane_t3

0x0002,

0xfd6e,	// (0x0004d017) vkb2_top_entry_pane_t_ParamLimits

0xfd6e,	// (0x0004d017) vkb2_top_entry_pane_t

0x7350,	// (0x000445f9) vkb2_top_grid_right_pane_g1_ParamLimits

0x7350,	// (0x000445f9) vkb2_top_grid_right_pane_g1

0x7366,	// (0x0004460f) vkb2_top_grid_right_pane_g2_ParamLimits

0x7366,	// (0x0004460f) vkb2_top_grid_right_pane_g2

0x737e,	// (0x00044627) vkb2_top_grid_right_pane_g3_ParamLimits

0x737e,	// (0x00044627) vkb2_top_grid_right_pane_g3

0x7396,	// (0x0004463f) vkb2_top_grid_right_pane_g4_ParamLimits

0x7396,	// (0x0004463f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd75,	// (0x0004d01e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd75,	// (0x0004d01e) vkb2_top_grid_right_pane_g

0x73ac,	// (0x00044655) vkb2_top_cell_left_pane_g1

0x73c3,	// (0x0004466c) vkb2_cell_keypad_pane_g1_ParamLimits

0x73c3,	// (0x0004466c) vkb2_cell_keypad_pane_g1

0xdf6f,	// (0x0004b218) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf6f,	// (0x0004b218) vkb2_cell_keypad_pane_t1

0x73d1,	// (0x0004467a) vkb2_cell_bottom_grid_pane_ParamLimits

0x73d1,	// (0x0004467a) vkb2_cell_bottom_grid_pane

0x740a,	// (0x000446b3) vkb2_cell_bottom_grid_pane_g1

0xdb1a,	// (0x0004adc3) aid_call2_pane_cp02

0xdb22,	// (0x0004adcb) aid_call_pane_cp02

0xdb2a,	// (0x0004add3) clock_digital_number_pane_cp10

0xdb32,	// (0x0004addb) clock_digital_number_pane_cp11

0xdb3a,	// (0x0004ade3) clock_digital_number_pane_cp12

0xdb42,	// (0x0004adeb) clock_digital_number_pane_cp13

0xdb4a,	// (0x0004adf3) clock_digital_separator_pane_cp10

0x8b80,	// (0x00045e29) popup_clock_digital_analogue_window_cp2_g1

0x8b80,	// (0x00045e29) popup_clock_digital_analogue_window_cp2_g2

0xdb52,	// (0x0004adfb) popup_clock_digital_analogue_window_cp2_g3

0x8b80,	// (0x00045e29) popup_clock_digital_analogue_window_cp2_g4

0xdb52,	// (0x0004adfb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2a,	// (0x0004cfd3) popup_clock_digital_analogue_window_cp2_g

0xdb5a,	// (0x0004ae03) popup_clock_digital_analogue_window_cp2_t1

0xdb68,	// (0x0004ae11) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd35,	// (0x0004cfde) popup_clock_digital_analogue_window_cp2_t

0xc01c,	// (0x000492c5) clock_digital_number_pane_cp10_g1

0xc01c,	// (0x000492c5) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1d,	// (0x0004cdc6) clock_digital_number_pane_cp10_g

0xc01c,	// (0x000492c5) clock_digital_separator_pane_cp10_g1

0xc01c,	// (0x000492c5) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1d,	// (0x0004cdc6) clock_digital_separator_pane_cp10_g

0xd996,	// (0x0004ac3f) uniindi_top_pane_g3

0xd9a7,	// (0x0004ac50) uniindi_top_pane_g4

0x71e4,	// (0x0004448d) vkb2_row_keypad_pane_ParamLimits

0x71e4,	// (0x0004448d) vkb2_row_keypad_pane

0x742a,	// (0x000446d3) vkb2_cell_t_keypad_pane_ParamLimits

0x742a,	// (0x000446d3) vkb2_cell_t_keypad_pane

0x743a,	// (0x000446e3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x743a,	// (0x000446e3) vkb2_cell_t_keypad_pane_cp08

0x744d,	// (0x000446f6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x744d,	// (0x000446f6) vkb2_cell_t_keypad_pane_cp09

0x7461,	// (0x0004470a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7461,	// (0x0004470a) vkb2_cell_t_keypad_pane_cp01

0x7472,	// (0x0004471b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7472,	// (0x0004471b) vkb2_cell_t_keypad_pane_cp02

0x7483,	// (0x0004472c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7483,	// (0x0004472c) vkb2_cell_t_keypad_pane_cp03

0x7494,	// (0x0004473d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7494,	// (0x0004473d) vkb2_cell_t_keypad_pane_cp04

0x74a5,	// (0x0004474e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74a5,	// (0x0004474e) vkb2_cell_t_keypad_pane_cp05

0x74b6,	// (0x0004475f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x74b6,	// (0x0004475f) vkb2_cell_t_keypad_pane_cp06

0x74c7,	// (0x00044770) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x74c7,	// (0x00044770) vkb2_cell_t_keypad_pane_cp07

0x74d8,	// (0x00044781) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x74d8,	// (0x00044781) vkb2_cell_t_keypad_pane_cp10

0xc29a,	// (0x00049543) vkb2_cell_t_keypad_pane_g1

0xdf86,	// (0x0004b22f) vkb2_cell_t_keypad_pane_t1

0x2744,	// (0x0003f9ed) popup_grid_graphic2_window

0xdf98,	// (0x0004b241) aid_size_cell_graphic2_ParamLimits

0xdf98,	// (0x0004b241) aid_size_cell_graphic2

0xdfd0,	// (0x0004b279) bg_popup_window_pane_cp21_ParamLimits

0xdfd0,	// (0x0004b279) bg_popup_window_pane_cp21

0xdfde,	// (0x0004b287) graphic2_pages_pane_ParamLimits

0xdfde,	// (0x0004b287) graphic2_pages_pane

0xe024,	// (0x0004b2cd) grid_graphic2_control_pane_ParamLimits

0xe024,	// (0x0004b2cd) grid_graphic2_control_pane

0xe062,	// (0x0004b30b) grid_graphic2_pane_ParamLimits

0xe062,	// (0x0004b30b) grid_graphic2_pane

0xe0d6,	// (0x0004b37f) cell_graphic2_pane

0x2744,	// (0x0003f9ed) main_comp_mode_pane

0xd1e1,	// (0x0004a48a) list_ai3_gene_pane_ParamLimits

0xd5b7,	// (0x0004a860) bg_popup_window_pane_cp19_ParamLimits

0xd5c3,	// (0x0004a86c) bg_touch_area_indi_pane_ParamLimits

0xd5c3,	// (0x0004a86c) bg_touch_area_indi_pane

0xd5d9,	// (0x0004a882) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5d9,	// (0x0004a882) bg_touch_area_indi_pane_cp01

0xd5ef,	// (0x0004a898) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ef,	// (0x0004a898) bg_touch_area_indi_pane_cp02

0xd605,	// (0x0004a8ae) bg_touch_area_indi_pane_cp03_ParamLimits

0xd605,	// (0x0004a8ae) bg_touch_area_indi_pane_cp03

0xd61f,	// (0x0004a8c8) popup_slider_window_g1_ParamLimits

0xd63b,	// (0x0004a8e4) popup_slider_window_g2_ParamLimits

0xd657,	// (0x0004a900) popup_slider_window_g3_ParamLimits

0xfcbf,	// (0x0004cf68) popup_slider_window_g_ParamLimits

0xd6bd,	// (0x0004a966) popup_slider_window_t1_ParamLimits

0xd731,	// (0x0004a9da) small_volume_slider_vertical_pane_ParamLimits

0xe0d6,	// (0x0004b37f) cell_graphic2_pane_ParamLimits

0xe125,	// (0x0004b3ce) bg_button_pane_cp10_ParamLimits

0xe125,	// (0x0004b3ce) bg_button_pane_cp10

0xe138,	// (0x0004b3e1) bg_button_pane_cp11_ParamLimits

0xe138,	// (0x0004b3e1) bg_button_pane_cp11

0xe14b,	// (0x0004b3f4) graphic2_pages_pane_g1_ParamLimits

0xe14b,	// (0x0004b3f4) graphic2_pages_pane_g1

0xe166,	// (0x0004b40f) graphic2_pages_pane_g2_ParamLimits

0xe166,	// (0x0004b40f) graphic2_pages_pane_g2

0x0001,

0xfd83,	// (0x0004d02c) graphic2_pages_pane_g_ParamLimits

0xfd83,	// (0x0004d02c) graphic2_pages_pane_g

0xe17e,	// (0x0004b427) graphic2_pages_pane_t1_ParamLimits

0xe17e,	// (0x0004b427) graphic2_pages_pane_t1

0xe196,	// (0x0004b43f) cell_graphic2_control_pane_ParamLimits

0xe196,	// (0x0004b43f) cell_graphic2_control_pane

0xe1b4,	// (0x0004b45d) cell_graphic2_pane_g1_ParamLimits

0xe1b4,	// (0x0004b45d) cell_graphic2_pane_g1

0xe1c1,	// (0x0004b46a) cell_graphic2_pane_g2_ParamLimits

0xe1c1,	// (0x0004b46a) cell_graphic2_pane_g2

0xe1ce,	// (0x0004b477) cell_graphic2_pane_g3_ParamLimits

0xe1ce,	// (0x0004b477) cell_graphic2_pane_g3

0xe1db,	// (0x0004b484) cell_graphic2_pane_g4_ParamLimits

0xe1db,	// (0x0004b484) cell_graphic2_pane_g4

0xe1e8,	// (0x0004b491) cell_graphic2_pane_g5_ParamLimits

0xe1e8,	// (0x0004b491) cell_graphic2_pane_g5

0x0004,

0xfd88,	// (0x0004d031) cell_graphic2_pane_g_ParamLimits

0xfd88,	// (0x0004d031) cell_graphic2_pane_g

0xe201,	// (0x0004b4aa) cell_graphic2_pane_t1_ParamLimits

0xe201,	// (0x0004b4aa) cell_graphic2_pane_t1

0x9a73,	// (0x00046d1c) grid_highlight_pane_cp11_ParamLimits

0x9a73,	// (0x00046d1c) grid_highlight_pane_cp11

0x7ee7,	// (0x00045190) bg_button_pane_cp05

0xe237,	// (0x0004b4e0) cell_graphic2_control_pane_g1

0xc01c,	// (0x000492c5) bg_touch_area_indi_pane_g1

0xe25f,	// (0x0004b508) aid_cmod_rocker_key_size

0xe269,	// (0x0004b512) aid_cmode_itu_key_size

0xe273,	// (0x0004b51c) main_cmode_video_pane

0xe27d,	// (0x0004b526) main_comp_mode_itu_pane

0xe289,	// (0x0004b532) main_comp_mode_rocker_pane

0xe295,	// (0x0004b53e) cell_cmode_rocker_pane_ParamLimits

0xe295,	// (0x0004b53e) cell_cmode_rocker_pane

0xe2a7,	// (0x0004b550) cell_cmode_itu_pane_ParamLimits

0xe2a7,	// (0x0004b550) cell_cmode_itu_pane

0x84f7,	// (0x000457a0) bg_button_pane_cp06_ParamLimits

0x84f7,	// (0x000457a0) bg_button_pane_cp06

0xc29a,	// (0x00049543) cell_cmode_rocker_pane_g1_ParamLimits

0xc29a,	// (0x00049543) cell_cmode_rocker_pane_g1

0xd7d5,	// (0x0004aa7e) cell_cmode_rocker_pane_g2_ParamLimits

0xd7d5,	// (0x0004aa7e) cell_cmode_rocker_pane_g2

0x0001,

0xfd98,	// (0x0004d041) cell_cmode_rocker_pane_g_ParamLimits

0xfd98,	// (0x0004d041) cell_cmode_rocker_pane_g

0x2744,	// (0x0003f9ed) bg_button_pane_cp07

0xe2bc,	// (0x0004b565) cell_cmode_itu_pane_g1

0xe2c5,	// (0x0004b56e) cell_cmode_itu_pane_t1

0xe2d3,	// (0x0004b57c) cell_cmode_itu_pane_t2

0x0001,

0xfd9d,	// (0x0004d046) cell_cmode_itu_pane_t

0xda19,	// (0x0004acc2) aid_touch_ctrl_left

0xda21,	// (0x0004acca) aid_touch_ctrl_right

0x2744,	// (0x0003f9ed) compa_mode_pane

0xe2e1,	// (0x0004b58a) aid_cmod_rocker_key_size_cp

0xe2eb,	// (0x0004b594) aid_cmode_itu_key_size_cp

0xe2f5,	// (0x0004b59e) compa_mode_pane_g1

0xe2fd,	// (0x0004b5a6) compa_mode_pane_g2

0xe305,	// (0x0004b5ae) compa_mode_pane_g3

0x0002,

0xfda2,	// (0x0004d04b) compa_mode_pane_g

0xe30d,	// (0x0004b5b6) main_comp_mode_itu_pane_cp

0xe315,	// (0x0004b5be) main_comp_mode_rocker_pane_cp

0xe31d,	// (0x0004b5c6) cell_cmode_itu_pane_cp_ParamLimits

0xe31d,	// (0x0004b5c6) cell_cmode_itu_pane_cp

0xe332,	// (0x0004b5db) cell_cmode_rocker_pane_cp_ParamLimits

0xe332,	// (0x0004b5db) cell_cmode_rocker_pane_cp

0x84f7,	// (0x000457a0) bg_button_pane_cp06_cp_ParamLimits

0x84f7,	// (0x000457a0) bg_button_pane_cp06_cp

0xc29a,	// (0x00049543) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc29a,	// (0x00049543) cell_cmode_rocker_pane_g1_cp

0xc01c,	// (0x000492c5) cell_cmode_rocker_pane_g2_cp

0x2744,	// (0x0003f9ed) bg_button_pane_cp07_cp

0xaf3d,	// (0x000481e6) cell_cmode_itu_pane_g1_cp

0xe344,	// (0x0004b5ed) cell_cmode_itu_pane_t1_cp

0xe344,	// (0x0004b5ed) cell_cmode_itu_pane_t2_cp

0xaf2a,	// (0x000481d3) settings_code_pane_cp2

0x7c5e,	// (0x00044f07) bg_popup_window_pane_cp3_ParamLimits

0x80e7,	// (0x00045390) heading_pane_cp3_ParamLimits

0x80f6,	// (0x0004539f) listscroll_popup_graphic_pane_ParamLimits

0x6a09,	// (0x00043cb2) fep_hwr_aid_pane_ParamLimits

0x6ec7,	// (0x00044170) aid_touch_sctrl_top_ParamLimits

0x6ed4,	// (0x0004417d) sctrl_sk_top_pane_g1_ParamLimits

0xc29a,	// (0x00049543) sctrl_sk_top_pane_g2_ParamLimits

0xfcd8,	// (0x0004cf81) sctrl_sk_top_pane_g_ParamLimits

0x6ee1,	// (0x0004418a) sctrl_sk_top_pane_t1_ParamLimits

0x6ec7,	// (0x00044170) aid_touch_sctrl_bottom_ParamLimits

0x6ee1,	// (0x0004418a) sctrl_sk_bottom_pane_t1_ParamLimits

0xd962,	// (0x0004ac0b) aid_area_touch_clock

0x70b8,	// (0x00044361) aid_vkb2_area_top_pane_cell_ParamLimits

0x70b8,	// (0x00044361) aid_vkb2_area_top_pane_cell

0x7206,	// (0x000444af) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7206,	// (0x000444af) aid_vkb2_area_bottom_pane_cell

0xded1,	// (0x0004b17a) popup_char_count_window

0xe352,	// (0x0004b5fb) popup_char_count_window_g1

0xe35b,	// (0x0004b604) popup_char_count_window_g2

0xe364,	// (0x0004b60d) popup_char_count_window_g3

0x0002,

0xfda9,	// (0x0004d052) popup_char_count_window_g

0xe36d,	// (0x0004b616) popup_char_count_window_t1

0x6f7a,	// (0x00044223) popup_fep_char_preview_window_ParamLimits

0x6f7a,	// (0x00044223) popup_fep_char_preview_window

0x70d6,	// (0x0004437f) vkb2_top_candi_pane_ParamLimits

0x70d6,	// (0x0004437f) vkb2_top_candi_pane

0xe37b,	// (0x0004b624) cell_vkb2_top_candi_pane_ParamLimits

0xe37b,	// (0x0004b624) cell_vkb2_top_candi_pane

0xa08e,	// (0x00047337) bg_popup_fep_char_preview_window_ParamLimits

0xa08e,	// (0x00047337) bg_popup_fep_char_preview_window

0x74ed,	// (0x00044796) popup_fep_char_preview_window_t1_ParamLimits

0x74ed,	// (0x00044796) popup_fep_char_preview_window_t1

0xe3c5,	// (0x0004b66e) bg_popup_fep_char_preview_window_g1

0xe3cd,	// (0x0004b676) bg_popup_fep_char_preview_window_g2

0xe3d5,	// (0x0004b67e) bg_popup_fep_char_preview_window_g3

0xe3dd,	// (0x0004b686) bg_popup_fep_char_preview_window_g4

0xe3e5,	// (0x0004b68e) bg_popup_fep_char_preview_window_g5

0xe3ed,	// (0x0004b696) bg_popup_fep_char_preview_window_g6

0xe3f5,	// (0x0004b69e) bg_popup_fep_char_preview_window_g7

0xe3fd,	// (0x0004b6a6) bg_popup_fep_char_preview_window_g8

0xe405,	// (0x0004b6ae) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb0,	// (0x0004d059) bg_popup_fep_char_preview_window_g

0xc29a,	// (0x00049543) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc29a,	// (0x00049543) cell_vkb2_top_candi_pane_g1

0xc5cc,	// (0x00049875) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5cc,	// (0x00049875) cell_vkb2_top_candi_pane_g2

0xc5ed,	// (0x00049896) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5ed,	// (0x00049896) cell_vkb2_top_candi_pane_g3

0x752f,	// (0x000447d8) cell_vkb2_top_candi_pane_g4_ParamLimits

0x752f,	// (0x000447d8) cell_vkb2_top_candi_pane_g4

0xd82a,	// (0x0004aad3) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd82a,	// (0x0004aad3) cell_vkb2_top_candi_pane_g5

0xd7d5,	// (0x0004aa7e) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7d5,	// (0x0004aa7e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc5,	// (0x0004d06e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc5,	// (0x0004d06e) cell_vkb2_top_candi_pane_g

0x7550,	// (0x000447f9) cell_vkb2_top_candi_pane_t1

0x6772,	// (0x00043a1b) aid_size_touch_slider_mark_ParamLimits

0x6772,	// (0x00043a1b) aid_size_touch_slider_mark

0xe014,	// (0x0004b2bd) grid_graphic2_catg_pane_ParamLimits

0xe014,	// (0x0004b2bd) grid_graphic2_catg_pane

0xe0b2,	// (0x0004b35b) popup_grid_graphic2_window_t1_ParamLimits

0xe0b2,	// (0x0004b35b) popup_grid_graphic2_window_t1

0xe0c4,	// (0x0004b36d) popup_grid_graphic2_window_t2_ParamLimits

0xe0c4,	// (0x0004b36d) popup_grid_graphic2_window_t2

0x0001,

0xfd7e,	// (0x0004d027) popup_grid_graphic2_window_t_ParamLimits

0xfd7e,	// (0x0004d027) popup_grid_graphic2_window_t

0x7ee7,	// (0x00045190) bg_button_pane_cp05_ParamLimits

0xe237,	// (0x0004b4e0) cell_graphic2_control_pane_g1_ParamLimits

0xe40d,	// (0x0004b6b6) cell_graphic2_catg_pane_ParamLimits

0xe40d,	// (0x0004b6b6) cell_graphic2_catg_pane

0x2744,	// (0x0003f9ed) bg_button_pane_cp12

0xe41f,	// (0x0004b6c8) cell_graphic2_catg_pane_g1

0xd92e,	// (0x0004abd7) cell_tb_ext_pane_t1_ParamLimits

0x7323,	// (0x000445cc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7323,	// (0x000445cc) vkb2_top_cell_right_narrow_pane

0x733b,	// (0x000445e4) vkb2_top_cell_right_wide_pane_ParamLimits

0x733b,	// (0x000445e4) vkb2_top_cell_right_wide_pane

0x69fb,	// (0x00043ca4) bg_vkb2_func_pane_ParamLimits

0x69fb,	// (0x00043ca4) bg_vkb2_func_pane

0x73ac,	// (0x00044655) vkb2_top_cell_left_pane_g1_ParamLimits

0x69fb,	// (0x00043ca4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x69fb,	// (0x00043ca4) bg_vkb2_fuc_pane_cp03

0x740a,	// (0x000446b3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a07,	// (0x00046cb0) bg_vkb2_func_pane_g1

0x9a0f,	// (0x00046cb8) bg_vkb2_func_pane_g2

0x9a1f,	// (0x00046cc8) bg_vkb2_func_pane_g3

0x9a17,	// (0x00046cc0) bg_vkb2_func_pane_g4

0x9a27,	// (0x00046cd0) bg_vkb2_func_pane_g5

0x9a2f,	// (0x00046cd8) bg_vkb2_func_pane_g6

0x9a37,	// (0x00046ce0) bg_vkb2_func_pane_g7

0x9a3f,	// (0x00046ce8) bg_vkb2_func_pane_g8

0x99ff,	// (0x00046ca8) bg_vkb2_func_pane_g9

0x0008,

0xfdd2,	// (0x0004d07b) bg_vkb2_func_pane_g

0x69fb,	// (0x00043ca4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x69fb,	// (0x00043ca4) bg_vkb2_fuc_pane_cp01

0x73ac,	// (0x00044655) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73ac,	// (0x00044655) vkb2_top_cell_right_wide_pane_g1

0x69fb,	// (0x00043ca4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x69fb,	// (0x00043ca4) bg_vkb2_fuc_pane_cp02

0x756f,	// (0x00044818) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x756f,	// (0x00044818) vkb2_top_cell_right_narrow_pane_g1

0xd531,	// (0x0004a7da) aid_touch_area_decrease_ParamLimits

0xd531,	// (0x0004a7da) aid_touch_area_decrease

0xd555,	// (0x0004a7fe) aid_touch_area_increase_ParamLimits

0xd555,	// (0x0004a7fe) aid_touch_area_increase

0xd56d,	// (0x0004a816) aid_touch_area_mute_ParamLimits

0xd56d,	// (0x0004a816) aid_touch_area_mute

0xd589,	// (0x0004a832) aid_touch_area_slider_ParamLimits

0xd589,	// (0x0004a832) aid_touch_area_slider

0xd673,	// (0x0004a91c) popup_slider_window_g4_ParamLimits

0xd673,	// (0x0004a91c) popup_slider_window_g4

0xd68b,	// (0x0004a934) popup_slider_window_g5_ParamLimits

0xd68b,	// (0x0004a934) popup_slider_window_g5

0xd6ad,	// (0x0004a956) popup_slider_window_g6_ParamLimits

0xd6ad,	// (0x0004a956) popup_slider_window_g6

0xd6eb,	// (0x0004a994) popup_slider_window_t2_ParamLimits

0xd6eb,	// (0x0004a994) popup_slider_window_t2

0x0001,

0xfccc,	// (0x0004cf75) popup_slider_window_t_ParamLimits

0xfccc,	// (0x0004cf75) popup_slider_window_t

0xd703,	// (0x0004a9ac) slider_pane_ParamLimits

0xd703,	// (0x0004a9ac) slider_pane

0xe428,	// (0x0004b6d1) slider_pane_g1_ParamLimits

0xe428,	// (0x0004b6d1) slider_pane_g1

0xe43c,	// (0x0004b6e5) slider_pane_g2_ParamLimits

0xe43c,	// (0x0004b6e5) slider_pane_g2

0xe452,	// (0x0004b6fb) slider_pane_g3_ParamLimits

0xe452,	// (0x0004b6fb) slider_pane_g3

0x0003,

0xfde5,	// (0x0004d08e) slider_pane_g_ParamLimits

0xfde5,	// (0x0004d08e) slider_pane_g

0x638d,	// (0x00043636) popup_tb_float_extension_window_ParamLimits

0x638d,	// (0x00043636) popup_tb_float_extension_window

0xe47e,	// (0x0004b727) aid_size_cell_tb_float_ext

0x2744,	// (0x0003f9ed) bg_popup_sub_window_cp28

0xe48a,	// (0x0004b733) grid_tb_float_ext_pane

0xe494,	// (0x0004b73d) cell_tb_float_ext_pane_ParamLimits

0xe494,	// (0x0004b73d) cell_tb_float_ext_pane

0xe4ae,	// (0x0004b757) cell_tb_float_ext_pane_g1

0xe4b7,	// (0x0004b760) grid_highlight_pane_cp12

0x6b3c,	// (0x00043de5) cell_last_hwr_side_pane_ParamLimits

0x6b3c,	// (0x00043de5) cell_last_hwr_side_pane

0xc01c,	// (0x000492c5) cell_last_hwr_side_pane_g1

0xe4c0,	// (0x0004b769) cell_last_hwr_side_pane_g2

0x0001,

0xfdee,	// (0x0004d097) cell_last_hwr_side_pane_g

0x72d2,	// (0x0004457b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x72d2,	// (0x0004457b) vkb2_area_bottom_space_btn_pane

0xc29a,	// (0x00049543) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf86,	// (0x0004b22f) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7550,	// (0x000447f9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x758f,	// (0x00044838) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x758f,	// (0x00044838) vkb2_area_bottom_space_btn_pane_g1

0x75c9,	// (0x00044872) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x75c9,	// (0x00044872) vkb2_area_bottom_space_btn_pane_g2

0x75ff,	// (0x000448a8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x75ff,	// (0x000448a8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf3,	// (0x0004d09c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf3,	// (0x0004d09c) vkb2_area_bottom_space_btn_pane_g

0x6ab0,	// (0x00043d59) cel_fep_hwr_func_pane_ParamLimits

0x6ab0,	// (0x00043d59) cel_fep_hwr_func_pane

0x6aec,	// (0x00043d95) cell_hwr_side_button_pane_ParamLimits

0x6aec,	// (0x00043d95) cell_hwr_side_button_pane

0xd962,	// (0x0004ac0b) aid_area_touch_clock_ParamLimits

0x7ee7,	// (0x00045190) bg_uniindi_top_pane_ParamLimits

0xd974,	// (0x0004ac1d) uniindi_top_pane_g1_ParamLimits

0xd98a,	// (0x0004ac33) uniindi_top_pane_g2_ParamLimits

0xd996,	// (0x0004ac3f) uniindi_top_pane_g3_ParamLimits

0xd9a7,	// (0x0004ac50) uniindi_top_pane_g4_ParamLimits

0xfd04,	// (0x0004cfad) uniindi_top_pane_g_ParamLimits

0xd9b4,	// (0x0004ac5d) uniindi_top_pane_t1_ParamLimits

0x7ee7,	// (0x00045190) bg_vkb2_func_pane_cp01_ParamLimits

0x7ee7,	// (0x00045190) bg_vkb2_func_pane_cp01

0xe4c9,	// (0x0004b772) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4c9,	// (0x0004b772) cel_fep_hwr_func_pane_g1

0x7ee7,	// (0x00045190) bg_vkb2_func_pane_cp02_ParamLimits

0x7ee7,	// (0x00045190) bg_vkb2_func_pane_cp02

0xe4c9,	// (0x0004b772) cell_hwr_side_button_pane_g1_ParamLimits

0xe4c9,	// (0x0004b772) cell_hwr_side_button_pane_g1

0x9880,	// (0x00046b29) status_pane_g4_ParamLimits

0x9880,	// (0x00046b29) status_pane_g4

0x989a,	// (0x00046b43) status_pane_t1

0xbd68,	// (0x00049011) form2_midp_gauge_slider_cont_pane

0xbd70,	// (0x00049019) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd82,	// (0x0004902b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd94,	// (0x0004903d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad0,	// (0x0004cd79) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda6,	// (0x0004904f) form2_midp_slider_pane_ParamLimits

0x6f42,	// (0x000441eb) aid_size_cell_func_vkb2_ParamLimits

0x6f42,	// (0x000441eb) aid_size_cell_func_vkb2

0xe46a,	// (0x0004b713) slider_pane_g4_ParamLimits

0xe46a,	// (0x0004b713) slider_pane_g4

0x7649,	// (0x000448f2) form2_midp_gauge_slider_pane_t2_cp01

0x7657,	// (0x00044900) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7657,	// (0x00044900) form2_midp_gauge_slider_pane_t3_cp01

0x7674,	// (0x0004491d) form2_midp_slider_pane_cp01

0x2744,	// (0x0003f9ed) navi_smil_pane

0xe502,	// (0x0004b7ab) navi_smil_pane_g1

0xe50a,	// (0x0004b7b3) navi_smil_pane_t1

0xe4d7,	// (0x0004b780) form2_midp_slider_pane_g1

0xe4e0,	// (0x0004b789) form2_midp_slider_pane_g2

0xe4e8,	// (0x0004b791) form2_midp_slider_pane_g3

0xe4d7,	// (0x0004b780) form2_midp_slider_pane_g4

0xe4f0,	// (0x0004b799) form2_midp_slider_pane_g5

0x0004,

0xfdfc,	// (0x0004d0a5) form2_midp_slider_pane_g

0x7639,	// (0x000448e2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7639,	// (0x000448e2) vkb2_area_bottom_space_btn_pane_g4

0x96af,	// (0x00046958) lc0_navi_pane_ParamLimits

0x96af,	// (0x00046958) lc0_navi_pane

0x9725,	// (0x000469ce) lc0_stat_indi_pane_ParamLimits

0x9725,	// (0x000469ce) lc0_stat_indi_pane

0x973c,	// (0x000469e5) ls0_title_pane_ParamLimits

0x973c,	// (0x000469e5) ls0_title_pane

0x84f7,	// (0x000457a0) bg_popup_sub_pane_cp14_ParamLimits

0xd949,	// (0x0004abf2) list_uniindi_pane_ParamLimits

0xd955,	// (0x0004abfe) uniindi_top_pane_ParamLimits

0xd9f1,	// (0x0004ac9a) list_single_uniindi_pane_g1_ParamLimits

0xda04,	// (0x0004acad) list_single_uniindi_pane_t1_ParamLimits

0x767d,	// (0x00044926) lc0_stat_clock_pane_ParamLimits

0x767d,	// (0x00044926) lc0_stat_clock_pane

0xe518,	// (0x0004b7c1) lc0_stat_indi_pane_g1_ParamLimits

0xe518,	// (0x0004b7c1) lc0_stat_indi_pane_g1

0xe525,	// (0x0004b7ce) lc0_stat_indi_pane_g2_ParamLimits

0xe525,	// (0x0004b7ce) lc0_stat_indi_pane_g2

0x0001,

0xfe07,	// (0x0004d0b0) lc0_stat_indi_pane_g_ParamLimits

0xfe07,	// (0x0004d0b0) lc0_stat_indi_pane_g

0x768a,	// (0x00044933) lc0_uni_indicator_pane_ParamLimits

0x768a,	// (0x00044933) lc0_uni_indicator_pane

0xe532,	// (0x0004b7db) ls0_title_pane_g1_ParamLimits

0xe532,	// (0x0004b7db) ls0_title_pane_g1

0xe546,	// (0x0004b7ef) ls0_title_pane_t1_ParamLimits

0xe546,	// (0x0004b7ef) ls0_title_pane_t1

0x7697,	// (0x00044940) lc0_uni_indicator_pane_g1_ParamLimits

0x7697,	// (0x00044940) lc0_uni_indicator_pane_g1

0xe57c,	// (0x0004b825) lc0_stat_clock_pane_t1

0x2744,	// (0x0003f9ed) main_ai5_pane

0xe592,	// (0x0004b83b) ai5_sk_pane_ParamLimits

0xe592,	// (0x0004b83b) ai5_sk_pane

0xe59f,	// (0x0004b848) cell_ai5_widget_pane_ParamLimits

0xe59f,	// (0x0004b848) cell_ai5_widget_pane

0xe668,	// (0x0004b911) aid_size_cell_widget_grid

0xe676,	// (0x0004b91f) bg_ai5_widget_pane_ParamLimits

0xe676,	// (0x0004b91f) bg_ai5_widget_pane

0xe6f2,	// (0x0004b99b) cell_ai5_widget_pane_g2

0xe706,	// (0x0004b9af) cell_ai5_widget_pane_g3

0xe720,	// (0x0004b9c9) cell_ai5_widget_pane_g4

0xe730,	// (0x0004b9d9) cell_ai5_widget_pane_g5

0xe740,	// (0x0004b9e9) cell_ai5_widget_pane_g6

0xe74c,	// (0x0004b9f5) cell_ai5_widget_pane_g7

0xe7b8,	// (0x0004ba61) cell_ai5_widget_pane_t1_ParamLimits

0xe7b8,	// (0x0004ba61) cell_ai5_widget_pane_t1

0xe7d5,	// (0x0004ba7e) cell_ai5_widget_pane_t2_ParamLimits

0xe7d5,	// (0x0004ba7e) cell_ai5_widget_pane_t2

0xe7ed,	// (0x0004ba96) cell_ai5_widget_pane_t3_ParamLimits

0xe7ed,	// (0x0004ba96) cell_ai5_widget_pane_t3

0xe805,	// (0x0004baae) cell_ai5_widget_pane_t4_ParamLimits

0xe805,	// (0x0004baae) cell_ai5_widget_pane_t4

0xe82b,	// (0x0004bad4) cell_ai5_widget_pane_t5_ParamLimits

0xe82b,	// (0x0004bad4) cell_ai5_widget_pane_t5

0xe84a,	// (0x0004baf3) cell_ai5_widget_pane_t6_ParamLimits

0xe84a,	// (0x0004baf3) cell_ai5_widget_pane_t6

0xe85c,	// (0x0004bb05) cell_ai5_widget_pane_t7_ParamLimits

0xe85c,	// (0x0004bb05) cell_ai5_widget_pane_t7

0xe87b,	// (0x0004bb24) cell_ai5_widget_pane_t8_ParamLimits

0xe87b,	// (0x0004bb24) cell_ai5_widget_pane_t8

0x000b,

0xfe27,	// (0x0004d0d0) cell_ai5_widget_pane_t_ParamLimits

0xfe27,	// (0x0004d0d0) cell_ai5_widget_pane_t

0xe8ff,	// (0x0004bba8) grid_ai5_widget_pane

0x84f7,	// (0x000457a0) highlight_cell_ai5_widget_pane_ParamLimits

0x84f7,	// (0x000457a0) highlight_cell_ai5_widget_pane

0xe913,	// (0x0004bbbc) ai5_sk_left_pane

0xe91d,	// (0x0004bbc6) ai5_sk_middle_pane

0xe927,	// (0x0004bbd0) ai5_sk_right_pane

0xe931,	// (0x0004bbda) bg_ai5_widget_pane_g1_ParamLimits

0xe931,	// (0x0004bbda) bg_ai5_widget_pane_g1

0xe93d,	// (0x0004bbe6) bg_ai5_widget_pane_g2_ParamLimits

0xe93d,	// (0x0004bbe6) bg_ai5_widget_pane_g2

0xe949,	// (0x0004bbf2) bg_ai5_widget_pane_g3_ParamLimits

0xe949,	// (0x0004bbf2) bg_ai5_widget_pane_g3

0xe955,	// (0x0004bbfe) bg_ai5_widget_pane_g4_ParamLimits

0xe955,	// (0x0004bbfe) bg_ai5_widget_pane_g4

0xe961,	// (0x0004bc0a) bg_ai5_widget_pane_g5_ParamLimits

0xe961,	// (0x0004bc0a) bg_ai5_widget_pane_g5

0xe96d,	// (0x0004bc16) bg_ai5_widget_pane_g6_ParamLimits

0xe96d,	// (0x0004bc16) bg_ai5_widget_pane_g6

0xe979,	// (0x0004bc22) bg_ai5_widget_pane_g7_ParamLimits

0xe979,	// (0x0004bc22) bg_ai5_widget_pane_g7

0xe985,	// (0x0004bc2e) bg_ai5_widget_pane_g8_ParamLimits

0xe985,	// (0x0004bc2e) bg_ai5_widget_pane_g8

0xe991,	// (0x0004bc3a) bg_ai5_widget_pane_g9_ParamLimits

0xe991,	// (0x0004bc3a) bg_ai5_widget_pane_g9

0x0008,

0xfe40,	// (0x0004d0e9) bg_ai5_widget_pane_g_ParamLimits

0xfe40,	// (0x0004d0e9) bg_ai5_widget_pane_g

0xe9c3,	// (0x0004bc6c) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c3,	// (0x0004bc6c) cell_shortcut_ai5_widget_pane

0x91b1,	// (0x0004645a) bg_cell_shortcut_ai5_widget_pane

0xe9d4,	// (0x0004bc7d) cell_grid_ai5_widget_pane_g1

0x91b1,	// (0x0004645a) highlight_cell_shortcut_ai5_widget_pane

0x9a0f,	// (0x00046cb8) ai5_sk_left_pane_g1

0xe9dd,	// (0x0004bc86) ai5_sk_left_pane_g2

0xe9e5,	// (0x0004bc8e) ai5_sk_left_pane_g3

0xe9ed,	// (0x0004bc96) ai5_sk_left_pane_g4

0x0003,

0xfe53,	// (0x0004d0fc) ai5_sk_left_pane_g

0xe9f5,	// (0x0004bc9e) ai5_sk_left_pane_t1

0x9a07,	// (0x00046cb0) ai5_sk_right_pane_g1

0xea03,	// (0x0004bcac) ai5_sk_right_pane_g2

0xea0b,	// (0x0004bcb4) ai5_sk_right_pane_g3

0xea13,	// (0x0004bcbc) ai5_sk_right_pane_g4

0x0003,

0xfe5c,	// (0x0004d105) ai5_sk_right_pane_g

0xea1b,	// (0x0004bcc4) ai5_sk_right_pane_t1

0x9a07,	// (0x00046cb0) ai5_sk_middle_pane_g1

0x9a0f,	// (0x00046cb8) ai5_sk_middle_pane_g2

0x9a27,	// (0x00046cd0) ai5_sk_middle_pane_g3

0xea0b,	// (0x0004bcb4) ai5_sk_middle_pane_g4

0xe9e5,	// (0x0004bc8e) ai5_sk_middle_pane_g5

0xea29,	// (0x0004bcd2) ai5_sk_middle_pane_g6

0xea31,	// (0x0004bcda) ai5_sk_middle_pane_g7

0x0006,

0xfe65,	// (0x0004d10e) ai5_sk_middle_pane_g

0x9535,	// (0x000467de) aid_touch_area_size_lc0_ParamLimits

0x9535,	// (0x000467de) aid_touch_area_size_lc0

0x6c3b,	// (0x00043ee4) cell_hwr_candidate_pane_t1_ParamLimits

0x9551,	// (0x000467fa) aid_touch_navi_pane

0x982a,	// (0x00046ad3) status_dt_navi_pane_ParamLimits

0x982a,	// (0x00046ad3) status_dt_navi_pane

0x9837,	// (0x00046ae0) status_dt_sta_pane_ParamLimits

0x9837,	// (0x00046ae0) status_dt_sta_pane

0xea39,	// (0x0004bce2) dt_sta_controll_pane

0xea46,	// (0x0004bcef) dt_sta_indi_pane

0xea57,	// (0x0004bd00) dt_sta_title_pane

0x7ee7,	// (0x00045190) bg_dt_sta_indi_pane_ParamLimits

0x7ee7,	// (0x00045190) bg_dt_sta_indi_pane

0xea6a,	// (0x0004bd13) dt_sta_battery_pane

0xea72,	// (0x0004bd1b) dt_sta_indi_pane_g1

0xea7b,	// (0x0004bd24) dt_sta_indi_pane_g2

0xea84,	// (0x0004bd2d) dt_sta_indi_pane_g3

0x0002,

0xfe74,	// (0x0004d11d) dt_sta_indi_pane_g

0xea8d,	// (0x0004bd36) dt_sta_signal_pane

0x84f7,	// (0x000457a0) bg_dt_sta_title_pane_ParamLimits

0x84f7,	// (0x000457a0) bg_dt_sta_title_pane

0xea96,	// (0x0004bd3f) dt_sta_title_pane_g1

0xea9e,	// (0x0004bd47) dt_sta_title_pane_t1_ParamLimits

0xea9e,	// (0x0004bd47) dt_sta_title_pane_t1

0x2744,	// (0x0003f9ed) bg_dt_sta_control_pane

0xeab3,	// (0x0004bd5c) dt_sta_controll_pane_g1

0xeabc,	// (0x0004bd65) bg_dt_sta_title_pane_g1

0xeac5,	// (0x0004bd6e) bg_dt_sta_title_pane_g2

0xeace,	// (0x0004bd77) bg_dt_sta_title_pane_g3

0x0002,

0xfe7b,	// (0x0004d124) bg_dt_sta_title_pane_g

0xc01c,	// (0x000492c5) bg_dt_sta_indi_pane_g1

0xead7,	// (0x0004bd80) dt_sta_signal_pane_g1

0xeadf,	// (0x0004bd88) dt_sta_signal_pane_g2

0x0001,

0xfe82,	// (0x0004d12b) dt_sta_signal_pane_g

0xeae7,	// (0x0004bd90) dt_sta_battery_pane_g1

0xeaf0,	// (0x0004bd99) dt_sta_battery_pane_t1

0xc01c,	// (0x000492c5) bg_dt_sta_control_pane_g1

0x8cab,	// (0x00045f54) fep_china_uni_eep_pane

0x8cb3,	// (0x00045f5c) fep_china_uni_entry_pane_ParamLimits

0x8cc3,	// (0x00045f6c) popup_fep_china_uni_window_g1_ParamLimits

0x8cd3,	// (0x00045f7c) popup_fep_china_uni_window_g2_ParamLimits

0x8cd3,	// (0x00045f7c) popup_fep_china_uni_window_g2

0x0001,

0xf6fb,	// (0x0004c9a4) popup_fep_china_uni_window_g_ParamLimits

0xf6fb,	// (0x0004c9a4) popup_fep_china_uni_window_g

0xeaff,	// (0x0004bda8) fep_china_uni_eep_pane_g1

0xeb07,	// (0x0004bdb0) fep_china_uni_eep_pane_t1

0xe4f9,	// (0x0004b7a2) aid_touch_area_size_smil_player

0x96a7,	// (0x00046950) lc0_clock_pane

0x988e,	// (0x00046b37) status_pane_g5_ParamLimits

0x988e,	// (0x00046b37) status_pane_g5

0x6052,	// (0x000432fb) popup_keymap_window

0x984c,	// (0x00046af5) status_icon_pane

0xe706,	// (0x0004b9af) cell_ai5_widget_pane_g3_ParamLimits

0xe720,	// (0x0004b9c9) cell_ai5_widget_pane_g4_ParamLimits

0xe730,	// (0x0004b9d9) cell_ai5_widget_pane_g5_ParamLimits

0xe758,	// (0x0004ba01) cell_ai5_widget_pane_g8_ParamLimits

0xe758,	// (0x0004ba01) cell_ai5_widget_pane_g8

0xe76c,	// (0x0004ba15) cell_ai5_widget_pane_g9_ParamLimits

0xe76c,	// (0x0004ba15) cell_ai5_widget_pane_g9

0xe780,	// (0x0004ba29) cell_ai5_widget_pane_g10_ParamLimits

0xe780,	// (0x0004ba29) cell_ai5_widget_pane_g10

0xeb16,	// (0x0004bdbf) status_icon_pane_g1

0x2744,	// (0x0003f9ed) bg_popup_sub_pane_cp13

0xeb1e,	// (0x0004bdc7) popup_keymap_window_t1

0x9486,	// (0x0004672f) control_pane_g6_ParamLimits

0x9486,	// (0x0004672f) control_pane_g6

0x9493,	// (0x0004673c) control_pane_g7_ParamLimits

0x9493,	// (0x0004673c) control_pane_g7

0x94a0,	// (0x00046749) control_pane_g8_ParamLimits

0x94a0,	// (0x00046749) control_pane_g8

0xea39,	// (0x0004bce2) dt_sta_controll_pane_ParamLimits

0xea46,	// (0x0004bcef) dt_sta_indi_pane_ParamLimits

0xea57,	// (0x0004bd00) dt_sta_title_pane_ParamLimits

0x8423,	// (0x000456cc) aid_size_touch_scroll_bar_cale

0x55f0,	// (0x00042899) popup_discreet_window_ParamLimits

0x55f0,	// (0x00042899) popup_discreet_window

0x5678,	// (0x00042921) popup_sk_window

0xa08e,	// (0x00047337) bg_popup_sub_pane_cp28_ParamLimits

0xa08e,	// (0x00047337) bg_popup_sub_pane_cp28

0xeb2c,	// (0x0004bdd5) popup_discreet_window_g1_ParamLimits

0xeb2c,	// (0x0004bdd5) popup_discreet_window_g1

0xeb4c,	// (0x0004bdf5) popup_discreet_window_t1_ParamLimits

0xeb4c,	// (0x0004bdf5) popup_discreet_window_t1

0xeb6a,	// (0x0004be13) popup_discreet_window_t2_ParamLimits

0xeb6a,	// (0x0004be13) popup_discreet_window_t2

0x0002,

0xfe87,	// (0x0004d130) popup_discreet_window_t_ParamLimits

0xfe87,	// (0x0004d130) popup_discreet_window_t

0x76ab,	// (0x00044954) popup_sk_window_g1

0x76b5,	// (0x0004495e) popup_sk_window_g2

0x0001,

0xfe8e,	// (0x0004d137) popup_sk_window_g

0x76bd,	// (0x00044966) popup_sk_window_t1

0x76cb,	// (0x00044974) popup_sk_window_t1_copy1

0xe6f2,	// (0x0004b99b) cell_ai5_widget_pane_g2_ParamLimits

0xe88d,	// (0x0004bb36) cell_ai5_widget_pane_t9_ParamLimits

0xe88d,	// (0x0004bb36) cell_ai5_widget_pane_t9

0x2744,	// (0x0003f9ed) main_fep_fshwr2_pane

0x76d9,	// (0x00044982) aid_fshwr2_btn_pane

0x76e9,	// (0x00044992) aid_fshwr2_syb_pane

0x76fd,	// (0x000449a6) aid_fshwr2_txt_pane

0x770d,	// (0x000449b6) fshwr2_func_candi_pane

0x7731,	// (0x000449da) fshwr2_hwr_syb_pane

0x774b,	// (0x000449f4) fshwr2_icf_pane

0x2744,	// (0x0003f9ed) fshwr2_icf_bg_pane

0x7779,	// (0x00044a22) fshwr2_icf_pane_t1_ParamLimits

0x7779,	// (0x00044a22) fshwr2_icf_pane_t1

0x8b80,	// (0x00045e29) fshwr2_func_candi_pane_g1

0xebbc,	// (0x0004be65) fshwr2_func_candi_row_pane_ParamLimits

0xebbc,	// (0x0004be65) fshwr2_func_candi_row_pane

0x7791,	// (0x00044a3a) cell_fshwr2_syb_pane_ParamLimits

0x7791,	// (0x00044a3a) cell_fshwr2_syb_pane

0xe4c9,	// (0x0004b772) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4c9,	// (0x0004b772) fshwr2_hwr_syb_pane_g1

0x2744,	// (0x0003f9ed) bg_popup_call_pane_cp01

0x77b4,	// (0x00044a5d) fshwr2_func_candi_cell_pane_ParamLimits

0x77b4,	// (0x00044a5d) fshwr2_func_candi_cell_pane

0xa702,	// (0x000479ab) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa702,	// (0x000479ab) fshwr2_func_candi_cell_bg_pane

0x77ff,	// (0x00044aa8) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x77ff,	// (0x00044aa8) fshwr2_func_candi_cell_pane_g1

0x782a,	// (0x00044ad3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x782a,	// (0x00044ad3) fshwr2_func_candi_cell_pane_t1

0x2744,	// (0x0003f9ed) bg_button_pane_cp08

0x94d5,	// (0x0004677e) cell_fshwr2_syb_bg_pane

0x783d,	// (0x00044ae6) cell_fshwr2_syb_bg_pane_g1

0x7851,	// (0x00044afa) cell_fshwr2_syb_bg_pane_t1

0x84f7,	// (0x000457a0) main_tmo_pane

0xab9d,	// (0x00047e46) uni_indicator_pane_g1_ParamLimits

0xabb3,	// (0x00047e5c) uni_indicator_pane_g2_ParamLimits

0xabc9,	// (0x00047e72) uni_indicator_pane_g3_ParamLimits

0xabdc,	// (0x00047e85) uni_indicator_pane_g4_ParamLimits

0xabdc,	// (0x00047e85) uni_indicator_pane_g4

0xabf0,	// (0x00047e99) uni_indicator_pane_g5_ParamLimits

0xabf0,	// (0x00047e99) uni_indicator_pane_g5

0xabf0,	// (0x00047e99) uni_indicator_pane_g6_ParamLimits

0xabf0,	// (0x00047e99) uni_indicator_pane_g6

0xf8fa,	// (0x0004cba3) uni_indicator_pane_g_ParamLimits

0xd50d,	// (0x0004a7b6) popup_tmo_note_window_ParamLimits

0xd50d,	// (0x0004a7b6) popup_tmo_note_window

0x84f7,	// (0x000457a0) fshwr2_bg_pane

0x781b,	// (0x00044ac4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x781b,	// (0x00044ac4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe93,	// (0x0004d13c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe93,	// (0x0004d13c) fshwr2_func_candi_cell_pane_g

0xc01c,	// (0x000492c5) bg_popup_window_pane_cp01

0x7867,	// (0x00044b10) bg_popup_window_pane_g1_cp01

0xebe3,	// (0x0004be8c) bg_popup_window_pane_cp22_ParamLimits

0xebe3,	// (0x0004be8c) bg_popup_window_pane_cp22

0xebf1,	// (0x0004be9a) listscroll_tmo_link_pane_ParamLimits

0xebf1,	// (0x0004be9a) listscroll_tmo_link_pane

0xec31,	// (0x0004beda) popup_tmo_note_window_g1_ParamLimits

0xec31,	// (0x0004beda) popup_tmo_note_window_g1

0xec3e,	// (0x0004bee7) tmo_note_info_pane_ParamLimits

0xec3e,	// (0x0004bee7) tmo_note_info_pane

0xec58,	// (0x0004bf01) list_tmo_note_info_pane_g1_ParamLimits

0xec58,	// (0x0004bf01) list_tmo_note_info_pane_g1

0xec6f,	// (0x0004bf18) list_tmo_note_info_pane_g2_ParamLimits

0xec6f,	// (0x0004bf18) list_tmo_note_info_pane_g2

0x0001,

0xfe98,	// (0x0004d141) list_tmo_note_info_pane_g_ParamLimits

0xfe98,	// (0x0004d141) list_tmo_note_info_pane_g

0xec8b,	// (0x0004bf34) list_tmo_note_info_text_pane_ParamLimits

0xec8b,	// (0x0004bf34) list_tmo_note_info_text_pane

0xed0c,	// (0x0004bfb5) list_tmo_link_pane

0xed19,	// (0x0004bfc2) scroll_pane_cp20

0xed26,	// (0x0004bfcf) list_single_tmo_link_pane_ParamLimits

0xed26,	// (0x0004bfcf) list_single_tmo_link_pane

0xed36,	// (0x0004bfdf) list_single_tmo_link_pane_t1

0xed44,	// (0x0004bfed) list_tmo_note_info_text_pane_t1_ParamLimits

0xed44,	// (0x0004bfed) list_tmo_note_info_text_pane_t1

0x85a7,	// (0x00045850) aid_size_touch_scroll_bar_cp01_ParamLimits

0x85a7,	// (0x00045850) aid_size_touch_scroll_bar_cp01

0x4a49,	// (0x00041cf2) aid_size_touch_slider_marker

0x5660,	// (0x00042909) popup_settings_window_ParamLimits

0x5660,	// (0x00042909) popup_settings_window

0x4be0,	// (0x00041e89) popup_candi_list_indi_window

0x9551,	// (0x000467fa) aid_touch_navi_pane_ParamLimits

0x6e9b,	// (0x00044144) rs_clock_indi_pane

0x6ea4,	// (0x0004414d) sctrl_sk_bottom_pane_ParamLimits

0x6eb5,	// (0x0004415e) sctrl_sk_top_pane_ParamLimits

0x6f94,	// (0x0004423d) popup_fep_tooltip_window

0xe668,	// (0x0004b911) aid_size_cell_widget_grid_ParamLimits

0xe6dd,	// (0x0004b986) cell_ai5_widget_pane_g1_ParamLimits

0xe6dd,	// (0x0004b986) cell_ai5_widget_pane_g1

0xe740,	// (0x0004b9e9) cell_ai5_widget_pane_g6_ParamLimits

0xe74c,	// (0x0004b9f5) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0c,	// (0x0004d0b5) cell_ai5_widget_pane_g_ParamLimits

0xfe0c,	// (0x0004d0b5) cell_ai5_widget_pane_g

0xe8bc,	// (0x0004bb65) cell_ai5_widget_pane_t10_ParamLimits

0xe8bc,	// (0x0004bb65) cell_ai5_widget_pane_t10

0xe8ff,	// (0x0004bba8) grid_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0004bc46) cell_contacts_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0004bc46) cell_contacts_ai5_widget_pane

0xeb7f,	// (0x0004be28) popup_discreet_window_t3_ParamLimits

0xeb7f,	// (0x0004be28) popup_discreet_window_t3

0x7763,	// (0x00044a0c) popup_fshwr2_char_preview_window_ParamLimits

0x7763,	// (0x00044a0c) popup_fshwr2_char_preview_window

0xeca9,	// (0x0004bf52) tmo_note_info_pane_t1

0xecbe,	// (0x0004bf67) tmo_note_info_pane_t2

0xecd3,	// (0x0004bf7c) tmo_note_info_pane_t3

0xece8,	// (0x0004bf91) tmo_note_info_pane_t4

0xecfa,	// (0x0004bfa3) tmo_note_info_pane_t5

0x0004,

0xfe9d,	// (0x0004d146) tmo_note_info_pane_t

0xed0c,	// (0x0004bfb5) list_tmo_link_pane_ParamLimits

0xed19,	// (0x0004bfc2) scroll_pane_cp20_ParamLimits

0x2744,	// (0x0003f9ed) bg_popup_fep_char_preview_window_cp01

0xed5d,	// (0x0004c006) popup_fshwr2_char_preview_window_t1

0xed6b,	// (0x0004c014) popup_candi_list_indi_window_g1

0xed74,	// (0x0004c01d) bg_cell_contacts_ai5_widget_pane

0xed80,	// (0x0004c029) cell_contacts_ai5_widget_pane_g1

0xc6fc,	// (0x000499a5) cell_contacts_ai5_widget_pane_g2

0xed95,	// (0x0004c03e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea8,	// (0x0004d151) cell_contacts_ai5_widget_pane_g

0xeda1,	// (0x0004c04a) cell_contacts_ai5_widget_pane_t1

0x84f7,	// (0x000457a0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee18,	// (0x0004c0c1) settings_container_pane

0x91b1,	// (0x0004645a) listscroll_set_pane_copy1

0xb70d,	// (0x000489b6) scroll_pane_cp121_copy1

0x9e2b,	// (0x000470d4) set_content_pane_copy1

0xee24,	// (0x0004c0cd) aid_height_set_list_copy1_ParamLimits

0xee24,	// (0x0004c0cd) aid_height_set_list_copy1

0xadd8,	// (0x00048081) aid_size_parent_copy1_ParamLimits

0xadd8,	// (0x00048081) aid_size_parent_copy1

0xee30,	// (0x0004c0d9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee30,	// (0x0004c0d9) button_value_adjust_pane_cp6_copy1

0x94d5,	// (0x0004677e) list_highlight_pane_cp2_copy1_ParamLimits

0x94d5,	// (0x0004677e) list_highlight_pane_cp2_copy1

0xee44,	// (0x0004c0ed) list_set_pane_copy1_ParamLimits

0xee44,	// (0x0004c0ed) list_set_pane_copy1

0xedb3,	// (0x0004c05c) main_pane_set_t1_copy1_ParamLimits

0xedb3,	// (0x0004c05c) main_pane_set_t1_copy1

0xeded,	// (0x0004c096) main_pane_set_t2_copy1_ParamLimits

0xeded,	// (0x0004c096) main_pane_set_t2_copy1

0xeef1,	// (0x0004c19a) main_pane_set_t3_copy1

0xeeff,	// (0x0004c1a8) main_pane_set_t4_copy1

0xee0c,	// (0x0004c0b5) set_content_pane_g1_copy1_ParamLimits

0xee0c,	// (0x0004c0b5) set_content_pane_g1_copy1

0xef0d,	// (0x0004c1b6) setting_code_pane_copy1

0xef15,	// (0x0004c1be) setting_slider_graphic_pane_copy1

0xef15,	// (0x0004c1be) setting_slider_pane_copy1

0xef1d,	// (0x0004c1c6) setting_text_pane_copy1

0xef1d,	// (0x0004c1c6) setting_volume_pane_copy1

0xef0d,	// (0x0004c1b6) settings_code_pane_cp2_copy1

0xef25,	// (0x0004c1ce) settings_code_pane_cp_copy1_ParamLimits

0xef25,	// (0x0004c1ce) settings_code_pane_cp_copy1

0x7870,	// (0x00044b19) volume_set_pane_copy1

0xef39,	// (0x0004c1e2) volume_set_pane_g10_copy1

0xef41,	// (0x0004c1ea) volume_set_pane_g1_copy1

0xef49,	// (0x0004c1f2) volume_set_pane_g2_copy1

0xef51,	// (0x0004c1fa) volume_set_pane_g3_copy1

0xef59,	// (0x0004c202) volume_set_pane_g4_copy1

0xef61,	// (0x0004c20a) volume_set_pane_g5_copy1

0xef69,	// (0x0004c212) volume_set_pane_g6_copy1

0xef71,	// (0x0004c21a) volume_set_pane_g7_copy1

0xef79,	// (0x0004c222) volume_set_pane_g8_copy1

0xef81,	// (0x0004c22a) volume_set_pane_g9_copy1

0x7c5e,	// (0x00044f07) bg_set_opt_pane_cp_copy1_ParamLimits

0x7c5e,	// (0x00044f07) bg_set_opt_pane_cp_copy1

0x7878,	// (0x00044b21) setting_slider_pane_t1_copy1_ParamLimits

0x7878,	// (0x00044b21) setting_slider_pane_t1_copy1

0x7897,	// (0x00044b40) setting_slider_pane_t2_copy1_ParamLimits

0x7897,	// (0x00044b40) setting_slider_pane_t2_copy1

0x78b1,	// (0x00044b5a) setting_slider_pane_t3_copy1_ParamLimits

0x78b1,	// (0x00044b5a) setting_slider_pane_t3_copy1

0x78c9,	// (0x00044b72) slider_set_pane_copy1_ParamLimits

0x78c9,	// (0x00044b72) slider_set_pane_copy1

0x8543,	// (0x000457ec) set_opt_bg_pane_g1_copy2

0x854b,	// (0x000457f4) set_opt_bg_pane_g2_copy2

0xef89,	// (0x0004c232) set_opt_bg_pane_g3_copy2

0x855b,	// (0x00045804) set_opt_bg_pane_g4_copy2

0x8563,	// (0x0004580c) set_opt_bg_pane_g5_copy2

0x856b,	// (0x00045814) set_opt_bg_pane_g6_copy2

0xef93,	// (0x0004c23c) set_opt_bg_pane_g7_copy2

0xef9b,	// (0x0004c244) set_opt_bg_pane_g8_copy2

0xefa5,	// (0x0004c24e) set_opt_bg_pane_g9_copy2

0x78df,	// (0x00044b88) aid_size_touch_slider_mark_copy1_ParamLimits

0x78df,	// (0x00044b88) aid_size_touch_slider_mark_copy1

0xefaf,	// (0x0004c258) slider_set_pane_g1_copy1

0x78f3,	// (0x00044b9c) slider_set_pane_g2_copy1

0x6792,	// (0x00043a3b) slider_set_pane_g3_copy1_ParamLimits

0x6792,	// (0x00043a3b) slider_set_pane_g3_copy1

0x67a6,	// (0x00043a4f) slider_set_pane_g4_copy1_ParamLimits

0x67a6,	// (0x00043a4f) slider_set_pane_g4_copy1

0x67be,	// (0x00043a67) slider_set_pane_g5_copy1_ParamLimits

0x67be,	// (0x00043a67) slider_set_pane_g5_copy1

0x6792,	// (0x00043a3b) slider_set_pane_g6_copy1_ParamLimits

0x6792,	// (0x00043a3b) slider_set_pane_g6_copy1

0x78fb,	// (0x00044ba4) slider_set_pane_g7_copy1_ParamLimits

0x78fb,	// (0x00044ba4) slider_set_pane_g7_copy1

0x2758,	// (0x0003fa01) bg_set_opt_pane_cp2_copy1

0xefb8,	// (0x0004c261) setting_slider_graphic_pane_g1_copy1

0xefc1,	// (0x0004c26a) setting_slider_graphic_pane_t1_copy1

0xefd1,	// (0x0004c27a) setting_slider_graphic_pane_t2_copy1

0xefe1,	// (0x0004c28a) slider_set_pane_cp_copy1

0xeff1,	// (0x0004c29a) input_focus_pane_cp1_copy1

0xeffa,	// (0x0004c2a3) list_set_text_pane_copy1

0xf002,	// (0x0004c2ab) setting_text_pane_g1_copy1

0x5361,	// (0x0004260a) set_text_pane_t1_copy1

0xeff1,	// (0x0004c29a) input_focus_pane_cp2_copy1

0xf002,	// (0x0004c2ab) setting_code_pane_g1_copy1

0xf00b,	// (0x0004c2b4) setting_code_pane_t1_copy1

0xb535,	// (0x000487de) list_set_graphic_pane_copy1

0x2758,	// (0x0003fa01) bg_set_opt_pane_cp4_copy1

0x8eb6,	// (0x0004615f) list_set_graphic_pane_g1_copy1_ParamLimits

0x8eb6,	// (0x0004615f) list_set_graphic_pane_g1_copy1

0xf019,	// (0x0004c2c2) list_set_graphic_pane_g2_copy1

0x8ece,	// (0x00046177) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ece,	// (0x00046177) list_set_graphic_pane_t1_copy1

0xc01c,	// (0x000492c5) rs_clock_indi_pane_g1

0xf021,	// (0x0004c2ca) rs_clock_indi_pane_t1

0xf02f,	// (0x0004c2d8) rs_indi_pane

0xf037,	// (0x0004c2e0) rs_indi_pane_g1

0xf040,	// (0x0004c2e9) rs_indi_pane_g2

0xf049,	// (0x0004c2f2) rs_indi_pane_g3

0x0002,

0xfeaf,	// (0x0004d158) rs_indi_pane_g

0x91b1,	// (0x0004645a) bg_popup_preview_window_pane_cp03

0xf052,	// (0x0004c2fb) popup_fep_tooltip_window_t1

0xccac,	// (0x00049f55) popup_note2_window_g2_ParamLimits

0xccac,	// (0x00049f55) popup_note2_window_g2

0x0001,

0xfc3c,	// (0x0004cee5) popup_note2_window_g_ParamLimits

0xfc3c,	// (0x0004cee5) popup_note2_window_g

0xd1a7,	// (0x0004a450) bg_popup_sub_pane_cp11_ParamLimits

0xd1b4,	// (0x0004a45d) cell_ai3_links_pane_g1_ParamLimits

0xd1cb,	// (0x0004a474) cell_ai3_links_pane_t1

0x5361,	// (0x0004260a) set_text_pane_t1_copy1_ParamLimits

0x90c1,	// (0x0004636a) cell_graphic_popup_pane_cp2_ParamLimits

0x90c1,	// (0x0004636a) cell_graphic_popup_pane_cp2

0xf060,	// (0x0004c309) cell_graphic_popup_pane_g1_cp2

0x8236,	// (0x000454df) cell_graphic_popup_pane_g2_cp2

0xf068,	// (0x0004c311) cell_graphic_popup_pane_g3_cp2

0xf070,	// (0x0004c319) cell_graphic_popup_pane_t2_cp2

0x8247,	// (0x000454f0) grid_highlight_pane_cp3_cp2

0x889b,	// (0x00045b44) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84f7,	// (0x000457a0) main_tmo_pane_ParamLimits

0xd501,	// (0x0004a7aa) popup_tmo_big_image_note_window

0xe6cc,	// (0x0004b975) cell_ai5_widget_list_pane

0xe6d4,	// (0x0004b97d) cell_ai5_widget_lrg_icon_pane

0xeca9,	// (0x0004bf52) tmo_note_info_pane_t1_ParamLimits

0xecbe,	// (0x0004bf67) tmo_note_info_pane_t2_ParamLimits

0xecd3,	// (0x0004bf7c) tmo_note_info_pane_t3_ParamLimits

0xece8,	// (0x0004bf91) tmo_note_info_pane_t4_ParamLimits

0xecfa,	// (0x0004bfa3) tmo_note_info_pane_t5_ParamLimits

0xfe9d,	// (0x0004d146) tmo_note_info_pane_t_ParamLimits

0xee18,	// (0x0004c0c1) settings_container_pane_ParamLimits

0xefe9,	// (0x0004c292) indicator_popup_pane_cp5

0xefe9,	// (0x0004c292) indicator_popup_pane_cp6

0xb535,	// (0x000487de) list_set_graphic_pane_copy1_ParamLimits

0x2744,	// (0x0003f9ed) bg_popup_window_pane_cp23

0xf07e,	// (0x0004c327) popup_tmo_big_image_note_window_g1

0xf088,	// (0x0004c331) popup_tmo_big_image_note_window_t1

0xf098,	// (0x0004c341) popup_tmo_big_image_note_window_t2

0xf0a8,	// (0x0004c351) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb6,	// (0x0004d15f) popup_tmo_big_image_note_window_t

0xc01c,	// (0x000492c5) cell_ai5_widget_lrg_icon_pane_g1

0xf0b8,	// (0x0004c361) cell_ai5_widget_lrg_icon_pane_t1

0xf0c6,	// (0x0004c36f) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c6,	// (0x0004c36f) cell_ai5_widget_list_row_pane

0xf0dd,	// (0x0004c386) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0dd,	// (0x0004c386) cell_ai5_widget_list_row_pane_g1

0xf0ea,	// (0x0004c393) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ea,	// (0x0004c393) cell_ai5_widget_list_row_pane_t1

0xf115,	// (0x0004c3be) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf115,	// (0x0004c3be) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebd,	// (0x0004d166) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebd,	// (0x0004d166) cell_ai5_widget_list_row_pane_t

0x2744,	// (0x0003f9ed) main_fep_vtchi_ss_pane

0xf165,	// (0x0004c40e) popup_fep_char_pre_window

0xf16d,	// (0x0004c416) popup_fep_ituss_window

0xf19f,	// (0x0004c448) popup_fep_vkbss_window

0x94d5,	// (0x0004677e) grid_vkbss_keypad_pane_ParamLimits

0x94d5,	// (0x0004677e) grid_vkbss_keypad_pane

0xf1e5,	// (0x0004c48e) ituss_keypad_pane

0x793c,	// (0x00044be5) aid_vkbss_key_offset_ParamLimits

0x793c,	// (0x00044be5) aid_vkbss_key_offset

0x7948,	// (0x00044bf1) cell_vkbss_key_pane_ParamLimits

0x7948,	// (0x00044bf1) cell_vkbss_key_pane

0xf1f1,	// (0x0004c49a) bg_cell_vkbss_key_g1_ParamLimits

0xf1f1,	// (0x0004c49a) bg_cell_vkbss_key_g1

0xf1fd,	// (0x0004c4a6) cell_vkbss_key_3p_pane_ParamLimits

0xf1fd,	// (0x0004c4a6) cell_vkbss_key_3p_pane

0xf233,	// (0x0004c4dc) cell_vkbss_key_g1_ParamLimits

0xf233,	// (0x0004c4dc) cell_vkbss_key_g1

0xf269,	// (0x0004c512) cell_vkbss_key_t1_ParamLimits

0xf269,	// (0x0004c512) cell_vkbss_key_t1

0x79a6,	// (0x00044c4f) cell_ituss_key_pane_ParamLimits

0x79a6,	// (0x00044c4f) cell_ituss_key_pane

0xf2c5,	// (0x0004c56e) bg_cell_ituss_key_g1_ParamLimits

0xf2c5,	// (0x0004c56e) bg_cell_ituss_key_g1

0xf2d1,	// (0x0004c57a) cell_ituss_key_pane_g1_ParamLimits

0xf2d1,	// (0x0004c57a) cell_ituss_key_pane_g1

0x79b7,	// (0x00044c60) cell_ituss_key_pane_g2_ParamLimits

0x79b7,	// (0x00044c60) cell_ituss_key_pane_g2

0x0005,

0xfec4,	// (0x0004d16d) cell_ituss_key_pane_g_ParamLimits

0xfec4,	// (0x0004d16d) cell_ituss_key_pane_g

0x7a3b,	// (0x00044ce4) cell_ituss_key_t1_ParamLimits

0x7a3b,	// (0x00044ce4) cell_ituss_key_t1

0x7a75,	// (0x00044d1e) cell_ituss_key_t2_ParamLimits

0x7a75,	// (0x00044d1e) cell_ituss_key_t2

0x7aa7,	// (0x00044d50) cell_ituss_key_t3_ParamLimits

0x7aa7,	// (0x00044d50) cell_ituss_key_t3

0x7ad8,	// (0x00044d81) cell_ituss_key_t4_ParamLimits

0x7ad8,	// (0x00044d81) cell_ituss_key_t4

0x0005,

0xfed1,	// (0x0004d17a) cell_ituss_key_t_ParamLimits

0xfed1,	// (0x0004d17a) cell_ituss_key_t

0xf2f7,	// (0x0004c5a0) cell_vkbss_key_3p_pane_g1

0xf2ff,	// (0x0004c5a8) cell_vkbss_key_3p_pane_g2

0xf307,	// (0x0004c5b0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x0004d187) cell_vkbss_key_3p_pane_g

0x91b1,	// (0x0004645a) bg_popup_fep_char_preview_window_cp02

0xf30f,	// (0x0004c5b8) popup_fep_char_pre_window_t1

0xe655,	// (0x0004b8fe) main_ai5_sk_pane

0xed74,	// (0x0004c01d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed80,	// (0x0004c029) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6fc,	// (0x000499a5) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed95,	// (0x0004c03e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea8,	// (0x0004d151) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda1,	// (0x0004c04a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84f7,	// (0x000457a0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31d,	// (0x0004c5c6) main_ai5_sk_pane_g1

0x9ec7,	// (0x00047170) popup_query_code_window_g1

0xf186,	// (0x0004c42f) popup_fep_vkb_icf_pane

0xf1b9,	// (0x0004c462) popup_fep_vtchi_icf_pane

0xf326,	// (0x0004c5cf) bg_icf_pane

0xf326,	// (0x0004c5cf) list_vkb_icf_pane

0xf332,	// (0x0004c5db) bg_icf_pane_cp01

0xf345,	// (0x0004c5ee) vtchi_icf_list_pane

0xf3a5,	// (0x0004c64e) list_vkb_icf_pane_t1_ParamLimits

0xf3a5,	// (0x0004c64e) list_vkb_icf_pane_t1

0xf3c3,	// (0x0004c66c) vtchi_icf_list_pane_t1_ParamLimits

0xf3c3,	// (0x0004c66c) vtchi_icf_list_pane_t1

0xf16d,	// (0x0004c416) popup_fep_ituss_window_ParamLimits

0xf1b9,	// (0x0004c462) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e5,	// (0x0004c48e) ituss_keypad_pane_ParamLimits

0x7932,	// (0x00044bdb) ituss_sks_pane

0xf326,	// (0x0004c5cf) bg_icf_pane_ParamLimits

0xf13d,	// (0x0004c3e6) icf_edit_indi_pane_ParamLimits

0xf13d,	// (0x0004c3e6) icf_edit_indi_pane

0xf326,	// (0x0004c5cf) list_vkb_icf_pane_ParamLimits

0xf332,	// (0x0004c5db) bg_icf_pane_cp01_ParamLimits

0xf158,	// (0x0004c401) icf_edit_indi_pane_cp01_ParamLimits

0xf158,	// (0x0004c401) icf_edit_indi_pane_cp01

0xf345,	// (0x0004c5ee) vtchi_query_pane

0xe4c9,	// (0x0004b772) icf_edit_indi_pane_g1_ParamLimits

0xe4c9,	// (0x0004b772) icf_edit_indi_pane_g1

0xf438,	// (0x0004c6e1) icf_edit_indi_pane_g2_ParamLimits

0xf438,	// (0x0004c6e1) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0004d1b2) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0004d1b2) icf_edit_indi_pane_g

0xf44c,	// (0x0004c6f5) icf_edit_indi_pane_t1

0xf3e1,	// (0x0004c68a) bg_input_focus_pane_cp042

0x841a,	// (0x000456c3) vtchi_button_pane

0xf3ea,	// (0x0004c693) vtchi_query_pane_t1

0xf3f8,	// (0x0004c6a1) vtchi_query_pane_t2

0xf406,	// (0x0004c6af) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0004d1a1) vtchi_query_pane_t

0x2744,	// (0x0003f9ed) bg_button_pane_cp13

0xf414,	// (0x0004c6bd) vtchi_button_pane_g1

0x7b59,	// (0x00044e02) ituss_sks_pane_g1

0x7b64,	// (0x00044e0d) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0004d1a8) ituss_sks_pane_g

0xf41c,	// (0x0004c6c5) ituss_sks_pane_t1

0xf42a,	// (0x0004c6d3) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0004d1ad) ituss_sks_pane_t

0xbaa5,	// (0x00048d4e) indicator_nsta_pane_cp_g1

0xbaae,	// (0x00048d57) indicator_nsta_pane_cp_g2

0xbab6,	// (0x00048d5f) indicator_nsta_pane_cp_g3

0xbabe,	// (0x00048d67) indicator_nsta_pane_cp_g4

0xbaae,	// (0x00048d57) indicator_nsta_pane_cp_g5

0xbab6,	// (0x00048d5f) indicator_nsta_pane_cp_g6

0x0005,

0xfa86,	// (0x0004cd2f) indicator_nsta_pane_cp_g

0xe225,	// (0x0004b4ce) cell_graphic2_pane_t2_ParamLimits

0xe225,	// (0x0004b4ce) cell_graphic2_pane_t2

0x0001,

0xfd93,	// (0x0004d03c) cell_graphic2_pane_t_ParamLimits

0xfd93,	// (0x0004d03c) cell_graphic2_pane_t

0xe251,	// (0x0004b4fa) cell_graphic2_control_pane_t1

0x8c5a,	// (0x00045f03) signal_pane_g3_ParamLimits

0x8c5a,	// (0x00045f03) signal_pane_g3

0x8c6c,	// (0x00045f15) signal_pane_g4_ParamLimits

0x8c6c,	// (0x00045f15) signal_pane_g4

0xf127,	// (0x0004c3d0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf127,	// (0x0004c3d0) cell_ai5_widget_list_row_pane_t3

0xf2e5,	// (0x0004c58e) cell_ituss_key_pane_t1_ParamLimits

0xf2e5,	// (0x0004c58e) cell_ituss_key_pane_t1

0x9b04,	// (0x00046dad) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b04,	// (0x00046dad) form_field_data_wide_pane_vc_t2

0x9b18,	// (0x00046dc1) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b18,	// (0x00046dc1) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x0004ca8b) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x0004ca8b) form_field_data_wide_pane_vc_t

0xb74f,	// (0x000489f8) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb74f,	// (0x000489f8) form_field_slider_wide_pane_vc_t3

0xb82d,	// (0x00048ad6) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb82d,	// (0x00048ad6) form_field_popup_wide_pane_vc_t2

0xb844,	// (0x00048aed) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb844,	// (0x00048aed) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa75,	// (0x0004cd1e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa75,	// (0x0004cd1e) form_field_popup_wide_pane_vc_t

0x76d9,	// (0x00044982) aid_fshwr2_btn_pane_ParamLimits

0x76e9,	// (0x00044992) aid_fshwr2_syb_pane_ParamLimits

0x76fd,	// (0x000449a6) aid_fshwr2_txt_pane_ParamLimits

0x84f7,	// (0x000457a0) fshwr2_bg_pane_ParamLimits

0x770d,	// (0x000449b6) fshwr2_func_candi_pane_ParamLimits

0x7731,	// (0x000449da) fshwr2_hwr_syb_pane_ParamLimits

0x774b,	// (0x000449f4) fshwr2_icf_pane_ParamLimits

0x699e,	// (0x00043c47) list_double_graphic_pane_vc_g4_ParamLimits

0x699e,	// (0x00043c47) list_double_graphic_pane_vc_g4

0x79d7,	// (0x00044c80) cell_ituss_key_pane_g3_ParamLimits

0x79d7,	// (0x00044c80) cell_ituss_key_pane_g3

0x7b09,	// (0x00044db2) cell_ituss_key_t5_ParamLimits

0x7b09,	// (0x00044db2) cell_ituss_key_t5

0xf19f,	// (0x0004c448) popup_fep_vkbss_window_ParamLimits

0xe65f,	// (0x0004b908) aid_cell_ai5_quarter

0xf44c,	// (0x0004c6f5) icf_edit_indi_pane_t1_ParamLimits

0x7f8f,	// (0x00045238) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7f8f,	// (0x00045238) aid_tch_indicator_popup_pane_cp2

0x7fa2,	// (0x0004524b) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7fa2,	// (0x0004524b) aid_tch_query_popup_data_pane_cp2

0x9e6f,	// (0x00047118) aid_tch_query_popup_pane_ParamLimits

0x9e6f,	// (0x00047118) aid_tch_query_popup_pane

0x9e6f,	// (0x00047118) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e6f,	// (0x00047118) aid_tch_query_popup_data_pane_cp1

0x94d5,	// (0x0004677e) cell_fshwr2_syb_bg_pane_ParamLimits

0x783d,	// (0x00044ae6) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7851,	// (0x00044afa) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf186,	// (0x0004c42f) popup_fep_vkb_icf_pane_ParamLimits

0x7527,	// (0x000447d0) bg_popup_fep_char_preview_window_g10

0xe794,	// (0x0004ba3d) cell_ai5_widget_pane_g11_ParamLimits

0xe794,	// (0x0004ba3d) cell_ai5_widget_pane_g11

0xe7a0,	// (0x0004ba49) cell_ai5_widget_pane_g12_ParamLimits

0xe7a0,	// (0x0004ba49) cell_ai5_widget_pane_g12

0xe7ac,	// (0x0004ba55) cell_ai5_widget_pane_g13_ParamLimits

0xe7ac,	// (0x0004ba55) cell_ai5_widget_pane_g13

0xe8db,	// (0x0004bb84) cell_ai5_widget_pane_t11_ParamLimits

0xe8db,	// (0x0004bb84) cell_ai5_widget_pane_t11

0xe8ed,	// (0x0004bb96) cell_ai5_widget_pane_t12_ParamLimits

0xe8ed,	// (0x0004bb96) cell_ai5_widget_pane_t12

0x79e3,	// (0x00044c8c) cell_ituss_key_pane_g4_ParamLimits

0x79e3,	// (0x00044c8c) cell_ituss_key_pane_g4

0x79ff,	// (0x00044ca8) cell_ituss_key_pane_g5_ParamLimits

0x79ff,	// (0x00044ca8) cell_ituss_key_pane_g5

0x7a1b,	// (0x00044cc4) cell_ituss_key_pane_g6_ParamLimits

0x7a1b,	// (0x00044cc4) cell_ituss_key_pane_g6

0x99ff,	// (0x00046ca8) bg_icf_pane_g1

0xf34d,	// (0x0004c5f6) bg_icf_pane_g2

0xf359,	// (0x0004c602) bg_icf_pane_g3

0xf363,	// (0x0004c60c) bg_icf_pane_g4

0xf36f,	// (0x0004c618) bg_icf_pane_g5

0xf379,	// (0x0004c622) bg_icf_pane_g6

0xf385,	// (0x0004c62e) bg_icf_pane_g7

0xf38f,	// (0x0004c638) bg_icf_pane_g8

0xf39b,	// (0x0004c644) bg_icf_pane_g9

0x0008,

0xfee5,	// (0x0004d18e) bg_icf_pane_g

0xf1d2,	// (0x0004c47b) popup_hyb_candi_window_ParamLimits

0xf1d2,	// (0x0004c47b) popup_hyb_candi_window

0x9a73,	// (0x00046d1c) bg_popup_sub_pane_cp01_ParamLimits

0x9a73,	// (0x00046d1c) bg_popup_sub_pane_cp01

0xf465,	// (0x0004c70e) entry_hyb_candi_pane_ParamLimits

0xf465,	// (0x0004c70e) entry_hyb_candi_pane

0xf474,	// (0x0004c71d) grid_hyb_candi_pane_ParamLimits

0xf474,	// (0x0004c71d) grid_hyb_candi_pane

0xf489,	// (0x0004c732) grid_hyb_phrase_pane_ParamLimits

0xf489,	// (0x0004c732) grid_hyb_phrase_pane

0xf498,	// (0x0004c741) cell_hyb_candi_pane_ParamLimits

0xf498,	// (0x0004c741) cell_hyb_candi_pane

0xf4bb,	// (0x0004c764) cell_hyb_candi_scroll_pane

0x8b80,	// (0x00045e29) cell_hyb_candi_pane_g1

0xf4c4,	// (0x0004c76d) cell_hyb_candi_pane_t1

0xf4d2,	// (0x0004c77b) cell_hyb_phrase_pane

0x8b80,	// (0x00045e29) cell_hyb_phrase_pane_g1

0xf4db,	// (0x0004c784) cell_hyb_phrase_pane_t1

0xf4e9,	// (0x0004c792) entry_hyb_candi_pane_t1

0x91b1,	// (0x0004645a) input_focus_pane_cp06

0xf4f7,	// (0x0004c7a0) cell_hyb_candi_scroll_pane_g1

0xf4ff,	// (0x0004c7a8) cell_hyb_candi_scroll_pane_g1_aid

0xf507,	// (0x0004c7b0) cell_hyb_candi_scroll_pane_g2

0xf50f,	// (0x0004c7b8) cell_hyb_candi_scroll_pane_g2_aid

0xf517,	// (0x0004c7c0) cell_hyb_candi_scroll_pane_g3

0xf51f,	// (0x0004c7c8) cell_hyb_candi_scroll_pane_g4

0xe58a,	// (0x0004b833) ai5_page_g1

0x7b1b,	// (0x00044dc4) cell_ituss_key_t6_ParamLimits

0x7b1b,	// (0x00044dc4) cell_ituss_key_t6

0x7911,	// (0x00044bba) icf_edit_indi_pane_cp02_ParamLimits

0x7911,	// (0x00044bba) icf_edit_indi_pane_cp02

0x7925,	// (0x00044bce) icf_edit_indi_pane_cp03_ParamLimits

0x7925,	// (0x00044bce) icf_edit_indi_pane_cp03
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
