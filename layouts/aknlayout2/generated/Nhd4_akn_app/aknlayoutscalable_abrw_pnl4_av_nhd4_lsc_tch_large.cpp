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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005d891 };

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
0x8de1,	// (0x00066672) Screen

0x8ded,	// (0x0006667e) application_window_ParamLimits

0x8ded,	// (0x0006667e) application_window

0x709f,	// (0x00064930) screen_g1

0x8e25,	// (0x000666b6) area_bottom_pane_ParamLimits

0x8e25,	// (0x000666b6) area_bottom_pane

0x8ef0,	// (0x00066781) area_top_pane_ParamLimits

0x8ef0,	// (0x00066781) area_top_pane

0x8f84,	// (0x00066815) main_pane_ParamLimits

0x8f84,	// (0x00066815) main_pane

0x70a9,	// (0x0006493a) misc_graphics

0xad5f,	// (0x000685f0) battery_pane_ParamLimits

0xad5f,	// (0x000685f0) battery_pane

0x27a6,	// (0x00060037) bg_status_flat_pane_g8

0x27ae,	// (0x0006003f) bg_status_flat_pane_g9

0x0310,	// (0x0005dba1) context_pane_ParamLimits

0x0310,	// (0x0005dba1) context_pane

0xaeca,	// (0x0006875b) navi_pane_ParamLimits

0xaeca,	// (0x0006875b) navi_pane

0xaf48,	// (0x000687d9) signal_pane_ParamLimits

0xaf48,	// (0x000687d9) signal_pane

0x0008,

0xf848,	// (0x0006d0d9) bg_status_flat_pane_g

0xafd8,	// (0x00068869) status_pane_g1_ParamLimits

0xafd8,	// (0x00068869) status_pane_g1

0xafee,	// (0x0006887f) status_pane_g2_ParamLimits

0xafee,	// (0x0006887f) status_pane_g2

0x1da7,	// (0x0005f638) status_pane_g3_ParamLimits

0x1da7,	// (0x0005f638) status_pane_g3

0x0004,

0xf774,	// (0x0006d005) status_pane_g_ParamLimits

0xf774,	// (0x0006d005) status_pane_g

0xaffa,	// (0x0006888b) title_pane_ParamLimits

0xaffa,	// (0x0006888b) title_pane

0xb05b,	// (0x000688ec) uni_indicator_pane_ParamLimits

0xb05b,	// (0x000688ec) uni_indicator_pane

0xc5d9,	// (0x00069e6a) bg_list_pane_ParamLimits

0xc5d9,	// (0x00069e6a) bg_list_pane

0xa54d,	// (0x00067dde) find_pane

0x1fbb,	// (0x0005f84c) listscroll_app_pane_ParamLimits

0x1fbb,	// (0x0005f84c) listscroll_app_pane

0xc5f9,	// (0x00069e8a) listscroll_form_pane

0xa555,	// (0x00067de6) listscroll_gen_pane_ParamLimits

0xa555,	// (0x00067de6) listscroll_gen_pane

0xf4c3,	// (0x0006cd54) listscroll_set_pane

0x32fa,	// (0x00060b8b) main_idle_act_pane

0xc46d,	// (0x00069cfe) main_idle_trad_pane

0xc46d,	// (0x00069cfe) main_list_empty_pane

0x83d7,	// (0x00065c68) main_midp_pane

0xc613,	// (0x00069ea4) main_pane_g1_ParamLimits

0xc613,	// (0x00069ea4) main_pane_g1

0xa569,	// (0x00067dfa) popup_ai_message_window_ParamLimits

0xa569,	// (0x00067dfa) popup_ai_message_window

0xa61a,	// (0x00067eab) popup_fep_china_uni_window_ParamLimits

0xa61a,	// (0x00067eab) popup_fep_china_uni_window

0xa674,	// (0x00067f05) popup_fep_japan_candidate_window_ParamLimits

0xa674,	// (0x00067f05) popup_fep_japan_candidate_window

0xa692,	// (0x00067f23) popup_fep_japan_predictive_window_ParamLimits

0xa692,	// (0x00067f23) popup_fep_japan_predictive_window

0xa6a4,	// (0x00067f35) popup_find_window

0xa6c1,	// (0x00067f52) popup_grid_graphic_window_ParamLimits

0xa6c1,	// (0x00067f52) popup_grid_graphic_window

0xf501,	// (0x0006cd92) popup_large_graphic_colour_window

0xa75f,	// (0x00067ff0) popup_menu_window_ParamLimits

0xa75f,	// (0x00067ff0) popup_menu_window

0xa931,	// (0x000681c2) popup_note_image_window

0xa8f7,	// (0x00068188) popup_note_wait_window_ParamLimits

0xa8f7,	// (0x00068188) popup_note_wait_window

0xa949,	// (0x000681da) popup_note_window_ParamLimits

0xa949,	// (0x000681da) popup_note_window

0xa9f8,	// (0x00068289) popup_query_code_window_ParamLimits

0xa9f8,	// (0x00068289) popup_query_code_window

0xaa32,	// (0x000682c3) popup_query_data_code_window_ParamLimits

0xaa32,	// (0x000682c3) popup_query_data_code_window

0xaa4f,	// (0x000682e0) popup_query_data_window_ParamLimits

0xaa4f,	// (0x000682e0) popup_query_data_window

0xaad1,	// (0x00068362) popup_query_sat_info_window_ParamLimits

0xaad1,	// (0x00068362) popup_query_sat_info_window

0xab68,	// (0x000683f9) popup_snote_single_graphic_window_ParamLimits

0xab68,	// (0x000683f9) popup_snote_single_graphic_window

0xab68,	// (0x000683f9) popup_snote_single_text_window_ParamLimits

0xab68,	// (0x000683f9) popup_snote_single_text_window

0x0087,	// (0x0005d918) popup_sub_window_general

0xacc5,	// (0x00068556) popup_window_general_ParamLimits

0xacc5,	// (0x00068556) popup_window_general

0x01cc,	// (0x0005da5d) power_save_pane

0xa3a7,	// (0x00067c38) control_pane_g1_ParamLimits

0xa3a7,	// (0x00067c38) control_pane_g1

0xa3d0,	// (0x00067c61) control_pane_g2_ParamLimits

0xa3d0,	// (0x00067c61) control_pane_g2

0xc5c3,	// (0x00069e54) control_pane_g3_ParamLimits

0xc5c3,	// (0x00069e54) control_pane_g3

0x0007,

0xf75c,	// (0x0006cfed) control_pane_g_ParamLimits

0xf75c,	// (0x0006cfed) control_pane_g

0xa438,	// (0x00067cc9) control_pane_t1_ParamLimits

0xa438,	// (0x00067cc9) control_pane_t1

0xa4a0,	// (0x00067d31) control_pane_t2_ParamLimits

0xa4a0,	// (0x00067d31) control_pane_t2

0x0002,

0xf76d,	// (0x0006cffe) control_pane_t_ParamLimits

0xf76d,	// (0x0006cffe) control_pane_t

0xa31e,	// (0x00067baf) navi_navi_volume_pane_cp1

0xa326,	// (0x00067bb7) status_small_icon_pane

0xc56f,	// (0x00069e00) status_small_pane_g1_ParamLimits

0xc56f,	// (0x00069e00) status_small_pane_g1

0xa32e,	// (0x00067bbf) status_small_pane_g2_ParamLimits

0xa32e,	// (0x00067bbf) status_small_pane_g2

0xc5a3,	// (0x00069e34) status_small_pane_g3_ParamLimits

0xc5a3,	// (0x00069e34) status_small_pane_g3

0xa33a,	// (0x00067bcb) status_small_pane_g4_ParamLimits

0xa33a,	// (0x00067bcb) status_small_pane_g4

0xa348,	// (0x00067bd9) status_small_pane_g5_ParamLimits

0xa348,	// (0x00067bd9) status_small_pane_g5

0xa356,	// (0x00067be7) status_small_pane_g6_ParamLimits

0xa356,	// (0x00067be7) status_small_pane_g6

0x0007,

0xf74b,	// (0x0006cfdc) status_small_pane_g_ParamLimits

0xf74b,	// (0x0006cfdc) status_small_pane_g

0xa371,	// (0x00067c02) status_small_pane_t1

0xa393,	// (0x00067c24) status_small_wait_pane_ParamLimits

0xa393,	// (0x00067c24) status_small_wait_pane

0xa005,	// (0x00067896) aid_levels_signal_ParamLimits

0xa005,	// (0x00067896) aid_levels_signal

0xa01d,	// (0x000678ae) signal_pane_g1_ParamLimits

0xa01d,	// (0x000678ae) signal_pane_g1

0xa038,	// (0x000678c9) signal_pane_g2_ParamLimits

0xa038,	// (0x000678c9) signal_pane_g2

0x0003,

0xf6dc,	// (0x0006cf6d) signal_pane_g_ParamLimits

0xf6dc,	// (0x0006cf6d) signal_pane_g

0xc063,	// (0x000698f4) context_pane_g1

0x917f,	// (0x00066a10) title_pane_g1

0x91b6,	// (0x00066a47) title_pane_t1

0x70bf,	// (0x00064950) title_pane_t2

0x70e5,	// (0x00064976) title_pane_t3

0x0002,

0xf530,	// (0x0006cdc1) title_pane_t

0xb083,	// (0x00068914) aid_levels_battery_ParamLimits

0xb083,	// (0x00068914) aid_levels_battery

0xb09f,	// (0x00068930) battery_pane_g1_ParamLimits

0xb09f,	// (0x00068930) battery_pane_g1

0xb0bc,	// (0x0006894d) battery_pane_g2_ParamLimits

0xb0bc,	// (0x0006894d) battery_pane_g2

0x0001,

0xf77f,	// (0x0006d010) battery_pane_g_ParamLimits

0xf77f,	// (0x0006d010) battery_pane_g

0xc9a6,	// (0x0006a237) uni_indicator_pane_g1

0xc9bc,	// (0x0006a24d) uni_indicator_pane_g2

0xc9d2,	// (0x0006a263) uni_indicator_pane_g3

0x0005,

0xf8f0,	// (0x0006d181) uni_indicator_pane_g

0xc30c,	// (0x00069b9d) navi_icon_pane_ParamLimits

0xc30c,	// (0x00069b9d) navi_icon_pane

0xc255,	// (0x00069ae6) navi_midp_pane

0xc328,	// (0x00069bb9) navi_navi_pane

0xc332,	// (0x00069bc3) navi_text_pane_ParamLimits

0xc332,	// (0x00069bc3) navi_text_pane

0x709f,	// (0x00064930) status_small_wait_pane_g1

0x7336,	// (0x00064bc7) status_small_wait_pane_g2

0x0001,

0xf8eb,	// (0x0006d17c) status_small_wait_pane_g

0xc8ff,	// (0x0006a190) navi_navi_icon_text_pane

0x2df9,	// (0x0006068a) navi_navi_pane_g1_ParamLimits

0x2df9,	// (0x0006068a) navi_navi_pane_g1

0x2e0b,	// (0x0006069c) navi_navi_pane_g2_ParamLimits

0x2e0b,	// (0x0006069c) navi_navi_pane_g2

0x0001,

0xf8b9,	// (0x0006d14a) navi_navi_pane_g_ParamLimits

0xf8b9,	// (0x0006d14a) navi_navi_pane_g

0x2e1d,	// (0x000606ae) navi_navi_tabs_pane

0x2e26,	// (0x000606b7) navi_navi_text_pane

0xc8ff,	// (0x0006a190) navi_navi_volume_pane

0x2dcd,	// (0x0006065e) navi_text_pane_t1

0x2dc1,	// (0x00060652) navi_icon_pane_g1

0x2d14,	// (0x000605a5) navi_navi_text_pane_t1

0xb3bb,	// (0x00068c4c) navi_navi_volume_pane_g1

0x07cc,	// (0x0005e05d) volume_small_pane

0x2c7a,	// (0x0006050b) navi_navi_icon_text_pane_g1

0xc857,	// (0x0006a0e8) navi_navi_icon_text_pane_t1

0xc328,	// (0x00069bb9) navi_tabs_2_long_pane

0xc328,	// (0x00069bb9) navi_tabs_2_pane

0xc328,	// (0x00069bb9) navi_tabs_3_long_pane

0xc328,	// (0x00069bb9) navi_tabs_3_pane

0xc328,	// (0x00069bb9) navi_tabs_4_pane

0x07a4,	// (0x0005e035) tabs_2_active_pane_ParamLimits

0x07a4,	// (0x0005e035) tabs_2_active_pane

0x07b4,	// (0x0005e045) tabs_2_passive_pane_ParamLimits

0x07b4,	// (0x0005e045) tabs_2_passive_pane

0x0772,	// (0x0005e003) tabs_3_active_pane_ParamLimits

0x0772,	// (0x0005e003) tabs_3_active_pane

0x0782,	// (0x0005e013) tabs_3_passive_pane_ParamLimits

0x0782,	// (0x0005e013) tabs_3_passive_pane

0x0793,	// (0x0005e024) tabs_3_passive_pane_cp_ParamLimits

0x0793,	// (0x0005e024) tabs_3_passive_pane_cp

0x072e,	// (0x0005dfbf) tabs_4_active_pane_ParamLimits

0x072e,	// (0x0005dfbf) tabs_4_active_pane

0x073f,	// (0x0005dfd0) tabs_4_passive_pane_ParamLimits

0x073f,	// (0x0005dfd0) tabs_4_passive_pane

0x0750,	// (0x0005dfe1) tabs_4_passive_pane_cp_ParamLimits

0x0750,	// (0x0005dfe1) tabs_4_passive_pane_cp

0x0761,	// (0x0005dff2) tabs_4_passive_pane_cp2_ParamLimits

0x0761,	// (0x0005dff2) tabs_4_passive_pane_cp2

0x070a,	// (0x0005df9b) tabs_2_long_active_pane_ParamLimits

0x070a,	// (0x0005df9b) tabs_2_long_active_pane

0x071c,	// (0x0005dfad) tabs_2_long_passive_pane_ParamLimits

0x071c,	// (0x0005dfad) tabs_2_long_passive_pane

0x06c5,	// (0x0005df56) tabs_3_long_active_pane_ParamLimits

0x06c5,	// (0x0005df56) tabs_3_long_active_pane

0x06de,	// (0x0005df6f) tabs_3_long_passive_pane_ParamLimits

0x06de,	// (0x0005df6f) tabs_3_long_passive_pane

0x06f1,	// (0x0005df82) tabs_3_long_passive_pane_cp_ParamLimits

0x06f1,	// (0x0005df82) tabs_3_long_passive_pane_cp

0x066b,	// (0x0005defc) volume_small_pane_g1

0x0674,	// (0x0005df05) volume_small_pane_g2

0x067d,	// (0x0005df0e) volume_small_pane_g3

0x0686,	// (0x0005df17) volume_small_pane_g4

0x068f,	// (0x0005df20) volume_small_pane_g5

0x0698,	// (0x0005df29) volume_small_pane_g6

0x06a1,	// (0x0005df32) volume_small_pane_g7

0x06aa,	// (0x0005df3b) volume_small_pane_g8

0x06b3,	// (0x0005df44) volume_small_pane_g9

0x06bc,	// (0x0005df4d) volume_small_pane_g10

0x0009,

0xf885,	// (0x0006d116) volume_small_pane_g

0x7221,	// (0x00064ab2) bg_active_tab_pane_cp2_ParamLimits

0x7221,	// (0x00064ab2) bg_active_tab_pane_cp2

0x9242,	// (0x00066ad3) tabs_3_active_pane_g1

0x924a,	// (0x00066adb) tabs_3_active_pane_t1

0x7221,	// (0x00064ab2) bg_passive_tab_pane_cp2_ParamLimits

0x7221,	// (0x00064ab2) bg_passive_tab_pane_cp2

0x9242,	// (0x00066ad3) tabs_3_passive_pane_g1

0x924a,	// (0x00066adb) tabs_3_passive_pane_t1

0x7221,	// (0x00064ab2) bg_active_tab_pane_cp3_ParamLimits

0x7221,	// (0x00064ab2) bg_active_tab_pane_cp3

0x925c,	// (0x00066aed) tabs_4_active_pane_g1

0x9264,	// (0x00066af5) tabs_4_active_pane_t1

0x7221,	// (0x00064ab2) bg_passive_tab_pane_cp3_ParamLimits

0x7221,	// (0x00064ab2) bg_passive_tab_pane_cp3

0x925c,	// (0x00066aed) tabs_4_1_passive_pane_g1

0x9264,	// (0x00066af5) tabs_4_1_passive_pane_t1

0x83d7,	// (0x00065c68) list_highlight_pane_cp2

0xcad8,	// (0x0006a369) list_set_pane_ParamLimits

0xcad8,	// (0x0006a369) list_set_pane

0xcb72,	// (0x0006a403) main_pane_set_t1_ParamLimits

0xcb72,	// (0x0006a403) main_pane_set_t1

0xcb92,	// (0x0006a423) main_pane_set_t2_ParamLimits

0xcb92,	// (0x0006a423) main_pane_set_t2

0xcba6,	// (0x0006a437) main_pane_set_t3_ParamLimits

0xcba6,	// (0x0006a437) main_pane_set_t3

0xcbb8,	// (0x0006a449) main_pane_set_t4_ParamLimits

0xcbb8,	// (0x0006a449) main_pane_set_t4

0x0003,

0xf955,	// (0x0006d1e6) main_pane_set_t_ParamLimits

0xf955,	// (0x0006d1e6) main_pane_set_t

0xcbca,	// (0x0006a45b) setting_code_pane

0xcbd4,	// (0x0006a465) setting_slider_graphic_pane

0xcbd4,	// (0x0006a465) setting_slider_pane

0xcbd4,	// (0x0006a465) setting_text_pane

0xcbd4,	// (0x0006a465) setting_volume_pane

0x9276,	// (0x00066b07) volume_set_pane

0x70f7,	// (0x00064988) bg_set_opt_pane_cp

0x927e,	// (0x00066b0f) setting_slider_pane_t1

0x9297,	// (0x00066b28) setting_slider_pane_t2

0x92b1,	// (0x00066b42) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0006cdc8) setting_slider_pane_t

0x92c9,	// (0x00066b5a) slider_set_pane

0x70a9,	// (0x0006493a) bg_set_opt_pane_cp2

0x7105,	// (0x00064996) setting_slider_graphic_pane_g1

0x92df,	// (0x00066b70) setting_slider_graphic_pane_t1

0x92ef,	// (0x00066b80) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0006cdcf) setting_slider_graphic_pane_t

0x92ff,	// (0x00066b90) slider_set_pane_cp

0x70a9,	// (0x0006493a) input_focus_pane_cp1

0x32e1,	// (0x00060b72) list_set_text_pane

0x709f,	// (0x00064930) setting_text_pane_g1

0x70a9,	// (0x0006493a) input_focus_pane_cp2

0x709f,	// (0x00064930) setting_code_pane_g1

0x710e,	// (0x0006499f) setting_code_pane_t1

0xbebf,	// (0x00069750) set_text_pane_t1_ParamLimits

0xbebf,	// (0x00069750) set_text_pane_t1

0x808a,	// (0x0006591b) set_opt_bg_pane_g1

0x8092,	// (0x00065923) set_opt_bg_pane_g2

0xca8d,	// (0x0006a31e) set_opt_bg_pane_g3

0x80a2,	// (0x00065933) set_opt_bg_pane_g4

0x80aa,	// (0x0006593b) set_opt_bg_pane_g5

0x80b2,	// (0x00065943) set_opt_bg_pane_g6

0xca97,	// (0x0006a328) set_opt_bg_pane_g7

0xca9f,	// (0x0006a330) set_opt_bg_pane_g8

0xcaa9,	// (0x0006a33a) set_opt_bg_pane_g9

0x0008,

0xf942,	// (0x0006d1d3) set_opt_bg_pane_g

0xca80,	// (0x0006a311) slider_set_pane_g1

0x084b,	// (0x0005e0dc) slider_set_pane_g2

0x0006,

0xf933,	// (0x0006d1c4) slider_set_pane_g

0xb3c3,	// (0x00068c54) volume_set_pane_g1

0xb3cb,	// (0x00068c5c) volume_set_pane_g2

0xb3d3,	// (0x00068c64) volume_set_pane_g3

0xb3db,	// (0x00068c6c) volume_set_pane_g4

0xb3e3,	// (0x00068c74) volume_set_pane_g5

0xb3eb,	// (0x00068c7c) volume_set_pane_g6

0xb3f3,	// (0x00068c84) volume_set_pane_g7

0xb3fb,	// (0x00068c8c) volume_set_pane_g8

0xb403,	// (0x00068c94) volume_set_pane_g9

0xb40b,	// (0x00068c9c) volume_set_pane_g10

0x0009,

0xf90b,	// (0x0006d19c) volume_set_pane_g

0x9307,	// (0x00066b98) indicator_pane_ParamLimits

0x9307,	// (0x00066b98) indicator_pane

0x932f,	// (0x00066bc0) main_idle_pane_g2_ParamLimits

0x932f,	// (0x00066bc0) main_idle_pane_g2

0x9367,	// (0x00066bf8) main_pane_idle_g1_ParamLimits

0x9367,	// (0x00066bf8) main_pane_idle_g1

0x711c,	// (0x000649ad) popup_clock_digital_analogue_window_ParamLimits

0x711c,	// (0x000649ad) popup_clock_digital_analogue_window

0x938e,	// (0x00066c1f) soft_indicator_pane_ParamLimits

0x938e,	// (0x00066c1f) soft_indicator_pane

0x93b2,	// (0x00066c43) wallpaper_pane_ParamLimits

0x93b2,	// (0x00066c43) wallpaper_pane

0x709f,	// (0x00064930) wallpaper_pane_g1

0x93c4,	// (0x00066c55) indicator_pane_g1_ParamLimits

0x93c4,	// (0x00066c55) indicator_pane_g1

0x3748,	// (0x00060fd9) navi_navi_icon_text_pane_srt_g1

0x714a,	// (0x000649db) soft_indicator_pane_t1

0x7164,	// (0x000649f5) aid_ps_area_pane

0x93da,	// (0x00066c6b) aid_ps_clock_pane

0x7175,	// (0x00064a06) aid_ps_indicator_pane

0x7181,	// (0x00064a12) indicator_ps_pane_ParamLimits

0x7181,	// (0x00064a12) indicator_ps_pane

0x7190,	// (0x00064a21) power_save_pane_g1_ParamLimits

0x7190,	// (0x00064a21) power_save_pane_g1

0x719c,	// (0x00064a2d) power_save_pane_g2_ParamLimits

0x719c,	// (0x00064a2d) power_save_pane_g2

0xe815,	// (0x0006c0a6) aid_navinavi_width_pane

0x7164,	// (0x000649f5) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0006cdd4) power_save_pane_g_ParamLimits

0xf543,	// (0x0006cdd4) power_save_pane_g

0x71aa,	// (0x00064a3b) power_save_pane_t1_ParamLimits

0x71aa,	// (0x00064a3b) power_save_pane_t1

0x93da,	// (0x00066c6b) aid_ps_clock_pane_ParamLimits

0x7175,	// (0x00064a06) aid_ps_indicator_pane_ParamLimits

0x71bc,	// (0x00064a4d) power_save_pane_t4_ParamLimits

0x71bc,	// (0x00064a4d) power_save_pane_t4

0x0001,

0xf548,	// (0x0006cdd9) power_save_pane_t_ParamLimits

0xf548,	// (0x0006cdd9) power_save_pane_t

0x71e6,	// (0x00064a77) power_save_t3_ParamLimits

0x71e6,	// (0x00064a77) power_save_t3

0x71d1,	// (0x00064a62) power_save_t2_ParamLimits

0x71d1,	// (0x00064a62) power_save_t2

0x71fb,	// (0x00064a8c) indicator_ps_pane_g1

0x93e8,	// (0x00066c79) ai_gene_pane_ParamLimits

0x93e8,	// (0x00066c79) ai_gene_pane

0x93ff,	// (0x00066c90) ai_links_pane_ParamLimits

0x93ff,	// (0x00066c90) ai_links_pane

0x9417,	// (0x00066ca8) indicator_pane_cp1_ParamLimits

0x9417,	// (0x00066ca8) indicator_pane_cp1

0x9426,	// (0x00066cb7) main_pane_idle_g1_cp_ParamLimits

0x9426,	// (0x00066cb7) main_pane_idle_g1_cp

0x943e,	// (0x00066ccf) popup_ai_links_title_window

0x9447,	// (0x00066cd8) soft_indicator_pane_cp1_ParamLimits

0x9447,	// (0x00066cd8) soft_indicator_pane_cp1

0x30b8,	// (0x00060949) ai_links_pane_g1

0x30c1,	// (0x00060952) grid_ai_links_pane

0xc99d,	// (0x0006a22e) ai_gene_pane_1

0x30a6,	// (0x00060937) ai_gene_pane_2

0x30af,	// (0x00060940) list_highlight_pane_cp4

0xc979,	// (0x0006a20a) cell_ai_link_pane_ParamLimits

0xc979,	// (0x0006a20a) cell_ai_link_pane

0x3077,	// (0x00060908) cell_ai_link_pane_g1

0x7336,	// (0x00064bc7) cell_ai_link_pane_g2

0x0001,

0xf8e6,	// (0x0006d177) cell_ai_link_pane_g

0x70a9,	// (0x0006493a) grid_highlight_cp2

0x70a9,	// (0x0006493a) bg_popup_sub_pane_cp1

0x7212,	// (0x00064aa3) popup_ai_links_title_window_t1

0x2fc7,	// (0x00060858) ai_gene_pane_1_g1_ParamLimits

0x2fc7,	// (0x00060858) ai_gene_pane_1_g1

0x2fd3,	// (0x00060864) ai_gene_pane_1_g2_ParamLimits

0x2fd3,	// (0x00060864) ai_gene_pane_1_g2

0x0001,

0xf8dc,	// (0x0006d16d) ai_gene_pane_1_g_ParamLimits

0xf8dc,	// (0x0006d16d) ai_gene_pane_1_g

0x2fe0,	// (0x00060871) ai_gene_pane_1_t1_ParamLimits

0x2fe0,	// (0x00060871) ai_gene_pane_1_t1

0x3014,	// (0x000608a5) grid_ai_soft_ind_pane

0x2fb2,	// (0x00060843) ai_gene_pane_2_t1_ParamLimits

0x2fb2,	// (0x00060843) ai_gene_pane_2_t1

0x945b,	// (0x00066cec) main_pane_empty_t1_ParamLimits

0x945b,	// (0x00066cec) main_pane_empty_t1

0x9473,	// (0x00066d04) main_pane_empty_t2_ParamLimits

0x9473,	// (0x00066d04) main_pane_empty_t2

0x9488,	// (0x00066d19) main_pane_empty_t3_ParamLimits

0x9488,	// (0x00066d19) main_pane_empty_t3

0x949a,	// (0x00066d2b) main_pane_empty_t4_ParamLimits

0x949a,	// (0x00066d2b) main_pane_empty_t4

0x94ac,	// (0x00066d3d) main_pane_empty_t5_ParamLimits

0x94ac,	// (0x00066d3d) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0006cdde) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0006cdde) main_pane_empty_t

0x810f,	// (0x000659a0) bg_popup_window_pane_ParamLimits

0x810f,	// (0x000659a0) bg_popup_window_pane

0xc8f3,	// (0x0006a184) find_popup_pane_cp2_ParamLimits

0xc8f3,	// (0x0006a184) find_popup_pane_cp2

0x2d2e,	// (0x000605bf) heading_pane_ParamLimits

0x2d2e,	// (0x000605bf) heading_pane

0x70a9,	// (0x0006493a) bg_popup_sub_pane

0xc874,	// (0x0006a105) bg_popup_window_pane_g1_ParamLimits

0xc874,	// (0x0006a105) bg_popup_window_pane_g1

0xc883,	// (0x0006a114) bg_popup_window_pane_g2_ParamLimits

0xc883,	// (0x0006a114) bg_popup_window_pane_g2

0xc88f,	// (0x0006a120) bg_popup_window_pane_g3_ParamLimits

0xc88f,	// (0x0006a120) bg_popup_window_pane_g3

0xc89b,	// (0x0006a12c) bg_popup_window_pane_g4_ParamLimits

0xc89b,	// (0x0006a12c) bg_popup_window_pane_g4

0xc8aa,	// (0x0006a13b) bg_popup_window_pane_g5_ParamLimits

0xc8aa,	// (0x0006a13b) bg_popup_window_pane_g5

0xc8ba,	// (0x0006a14b) bg_popup_window_pane_g6_ParamLimits

0xc8ba,	// (0x0006a14b) bg_popup_window_pane_g6

0xc8c6,	// (0x0006a157) bg_popup_window_pane_g7_ParamLimits

0xc8c6,	// (0x0006a157) bg_popup_window_pane_g7

0xc8d5,	// (0x0006a166) bg_popup_window_pane_g8_ParamLimits

0xc8d5,	// (0x0006a166) bg_popup_window_pane_g8

0xc8e4,	// (0x0006a175) bg_popup_window_pane_g9_ParamLimits

0xc8e4,	// (0x0006a175) bg_popup_window_pane_g9

0x2d08,	// (0x00060599) bg_popup_window_pane_g10_ParamLimits

0x2d08,	// (0x00060599) bg_popup_window_pane_g10

0x0009,

0xf8a4,	// (0x0006d135) bg_popup_window_pane_g_ParamLimits

0xf8a4,	// (0x0006d135) bg_popup_window_pane_g

0x2c31,	// (0x000604c2) bg_popup_heading_pane_ParamLimits

0x2c31,	// (0x000604c2) bg_popup_heading_pane

0x0979,	// (0x0005e20a) tabs_4_passive_pane_cp_srt_ParamLimits

0x0979,	// (0x0005e20a) tabs_4_passive_pane_cp_srt

0x098b,	// (0x0005e21c) tabs_4_passive_pane_srt_ParamLimits

0x2c45,	// (0x000604d6) heading_pane_g2

0x098b,	// (0x0005e21c) tabs_4_passive_pane_srt

0x1fbb,	// (0x0005f84c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1fbb,	// (0x0005f84c) bg_passive_tab_pane_cp3_srt

0x2c4d,	// (0x000604de) heading_pane_t1_ParamLimits

0x2c4d,	// (0x000604de) heading_pane_t1

0x2c64,	// (0x000604f5) heading_pane_t2_ParamLimits

0x2c64,	// (0x000604f5) heading_pane_t2

0x0001,

0xf89f,	// (0x0006d130) heading_pane_t_ParamLimits

0xf89f,	// (0x0006d130) heading_pane_t

0x276e,	// (0x0005ffff) bg_popup_heading_pane_g1

0x281d,	// (0x000600ae) bg_popup_heading_pane_g2

0x2827,	// (0x000600b8) bg_popup_heading_pane_g3

0x2831,	// (0x000600c2) bg_popup_heading_pane_g4

0x283b,	// (0x000600cc) bg_popup_heading_pane_g5

0x2845,	// (0x000600d6) bg_popup_heading_pane_g6

0x284d,	// (0x000600de) bg_popup_heading_pane_g7

0x2855,	// (0x000600e6) bg_popup_heading_pane_g8

0x285f,	// (0x000600f0) bg_popup_heading_pane_g9

0x0008,

0xf85b,	// (0x0006d0ec) bg_popup_heading_pane_g

0x1f2f,	// (0x0005f7c0) bg_popup_sub_pane_g1

0x1f3f,	// (0x0005f7d0) bg_popup_sub_pane_g2

0x1f37,	// (0x0005f7c8) bg_popup_sub_pane_g3

0x1f4f,	// (0x0005f7e0) bg_popup_sub_pane_g4

0x1f47,	// (0x0005f7d8) bg_popup_sub_pane_g5

0x1f57,	// (0x0005f7e8) bg_popup_sub_pane_g6

0x1f5f,	// (0x0005f7f0) bg_popup_sub_pane_g7

0x1f6f,	// (0x0005f800) bg_popup_sub_pane_g8

0x1f67,	// (0x0005f7f8) bg_popup_sub_pane_g9

0x0008,

0xf835,	// (0x0006d0c6) bg_popup_sub_pane_g

0x7221,	// (0x00064ab2) bg_popup_window_pane_cp5_ParamLimits

0x7221,	// (0x00064ab2) bg_popup_window_pane_cp5

0x723d,	// (0x00064ace) popup_note_window_g1_ParamLimits

0x723d,	// (0x00064ace) popup_note_window_g1

0x7249,	// (0x00064ada) popup_note_window_t1_ParamLimits

0x7249,	// (0x00064ada) popup_note_window_t1

0x725f,	// (0x00064af0) popup_note_window_t2_ParamLimits

0x725f,	// (0x00064af0) popup_note_window_t2

0x7275,	// (0x00064b06) popup_note_window_t3_ParamLimits

0x7275,	// (0x00064b06) popup_note_window_t3

0x728b,	// (0x00064b1c) popup_note_window_t4_ParamLimits

0x728b,	// (0x00064b1c) popup_note_window_t4

0x72b3,	// (0x00064b44) popup_note_window_t5_ParamLimits

0x72b3,	// (0x00064b44) popup_note_window_t5

0x0004,

0xf558,	// (0x0006cde9) popup_note_window_t_ParamLimits

0xf558,	// (0x0006cde9) popup_note_window_t

0x72d7,	// (0x00064b68) bg_popup_window_pane_cp6_ParamLimits

0x72d7,	// (0x00064b68) bg_popup_window_pane_cp6

0x26ea,	// (0x0005ff7b) popup_note_image_window_g1_ParamLimits

0x26ea,	// (0x0005ff7b) popup_note_image_window_g1

0xc719,	// (0x00069faa) popup_note_image_window_g2_ParamLimits

0xc719,	// (0x00069faa) popup_note_image_window_g2

0x0001,

0xf829,	// (0x0006d0ba) popup_note_image_window_g_ParamLimits

0xf829,	// (0x0006d0ba) popup_note_image_window_g

0x270f,	// (0x0005ffa0) popup_note_image_window_t1_ParamLimits

0x270f,	// (0x0005ffa0) popup_note_image_window_t1

0x2728,	// (0x0005ffb9) popup_note_image_window_t2_ParamLimits

0x2728,	// (0x0005ffb9) popup_note_image_window_t2

0x2741,	// (0x0005ffd2) popup_note_image_window_t3_ParamLimits

0x2741,	// (0x0005ffd2) popup_note_image_window_t3

0x0002,

0xf82e,	// (0x0006d0bf) popup_note_image_window_t_ParamLimits

0xf82e,	// (0x0006d0bf) popup_note_image_window_t

0x25b3,	// (0x0005fe44) bg_popup_window_pane_cp7_ParamLimits

0x25b3,	// (0x0005fe44) bg_popup_window_pane_cp7

0x25e3,	// (0x0005fe74) popup_note_wait_window_g1_ParamLimits

0x25e3,	// (0x0005fe74) popup_note_wait_window_g1

0x25ef,	// (0x0005fe80) popup_note_wait_window_g2_ParamLimits

0x25ef,	// (0x0005fe80) popup_note_wait_window_g2

0x0002,

0xf817,	// (0x0006d0a8) popup_note_wait_window_g_ParamLimits

0xf817,	// (0x0006d0a8) popup_note_wait_window_g

0x2607,	// (0x0005fe98) popup_note_wait_window_t1_ParamLimits

0x2607,	// (0x0005fe98) popup_note_wait_window_t1

0xc6ba,	// (0x00069f4b) popup_note_wait_window_t2_ParamLimits

0xc6ba,	// (0x00069f4b) popup_note_wait_window_t2

0xc6d7,	// (0x00069f68) popup_note_wait_window_t3_ParamLimits

0xc6d7,	// (0x00069f68) popup_note_wait_window_t3

0xc6ea,	// (0x00069f7b) popup_note_wait_window_t4_ParamLimits

0xc6ea,	// (0x00069f7b) popup_note_wait_window_t4

0x0004,

0xf81e,	// (0x0006d0af) popup_note_wait_window_t_ParamLimits

0xf81e,	// (0x0006d0af) popup_note_wait_window_t

0x2683,	// (0x0005ff14) wait_bar_pane_ParamLimits

0x2683,	// (0x0005ff14) wait_bar_pane

0x70a9,	// (0x0006493a) wait_anim_pane

0x70a9,	// (0x0006493a) wait_border_pane

0x709f,	// (0x00064930) wait_anim_pane_g1

0x709f,	// (0x00064930) wait_anim_pane_g2

0x0001,

0xf6d7,	// (0x0006cf68) wait_anim_pane_g

0x255f,	// (0x0005fdf0) wait_border_pane_g1

0x256a,	// (0x0005fdfb) wait_border_pane_g2

0x2573,	// (0x0005fe04) wait_border_pane_g3

0x0002,

0xf810,	// (0x0006d0a1) wait_border_pane_g

0x23ca,	// (0x0005fc5b) bg_popup_window_pane_cp16_ParamLimits

0x23ca,	// (0x0005fc5b) bg_popup_window_pane_cp16

0xc66a,	// (0x00069efb) indicator_popup_pane_cp4_ParamLimits

0xc66a,	// (0x00069efb) indicator_popup_pane_cp4

0x24de,	// (0x0005fd6f) popup_query_data_window_t1_ParamLimits

0x24de,	// (0x0005fd6f) popup_query_data_window_t1

0x24f0,	// (0x0005fd81) popup_query_data_window_t2_ParamLimits

0x24f0,	// (0x0005fd81) popup_query_data_window_t2

0x2509,	// (0x0005fd9a) popup_query_data_window_t3_ParamLimits

0x2509,	// (0x0005fd9a) popup_query_data_window_t3

0x0002,

0xf809,	// (0x0006d09a) popup_query_data_window_t_ParamLimits

0xf809,	// (0x0006d09a) popup_query_data_window_t

0xc67e,	// (0x00069f0f) query_popup_data_pane_ParamLimits

0xc67e,	// (0x00069f0f) query_popup_data_pane

0xc692,	// (0x00069f23) query_popup_data_pane_cp1_ParamLimits

0xc692,	// (0x00069f23) query_popup_data_pane_cp1

0x23ca,	// (0x0005fc5b) bg_popup_window_pane_cp10_ParamLimits

0x23ca,	// (0x0005fc5b) bg_popup_window_pane_cp10

0xb37f,	// (0x00068c10) indicator_popup_pane_ParamLimits

0xb37f,	// (0x00068c10) indicator_popup_pane

0xb3a1,	// (0x00068c32) popup_query_code_window_t1_ParamLimits

0xb3a1,	// (0x00068c32) popup_query_code_window_t1

0xc621,	// (0x00069eb2) popup_query_code_window_t2_ParamLimits

0xc621,	// (0x00069eb2) popup_query_code_window_t2

0x2481,	// (0x0005fd12) popup_query_code_window_t3_ParamLimits

0x2481,	// (0x0005fd12) popup_query_code_window_t3

0x0002,

0xf802,	// (0x0006d093) popup_query_code_window_t_ParamLimits

0xf802,	// (0x0006d093) popup_query_code_window_t

0x24b0,	// (0x0005fd41) query_popup_pane_ParamLimits

0x24b0,	// (0x0005fd41) query_popup_pane

0x72d7,	// (0x00064b68) bg_popup_window_pane_cp15_ParamLimits

0x72d7,	// (0x00064b68) bg_popup_window_pane_cp15

0x94e4,	// (0x00066d75) indicator_popup_pane_cp1_ParamLimits

0x94e4,	// (0x00066d75) indicator_popup_pane_cp1

0x94f7,	// (0x00066d88) indicator_popup_pane_cp2_ParamLimits

0x94f7,	// (0x00066d88) indicator_popup_pane_cp2

0x950a,	// (0x00066d9b) popup_query_data_code_window_g1_ParamLimits

0x950a,	// (0x00066d9b) popup_query_data_code_window_g1

0x72f5,	// (0x00064b86) popup_query_data_code_window_t1_ParamLimits

0x72f5,	// (0x00064b86) popup_query_data_code_window_t1

0x7307,	// (0x00064b98) popup_query_data_code_window_t2_ParamLimits

0x7307,	// (0x00064b98) popup_query_data_code_window_t2

0x951d,	// (0x00066dae) popup_query_data_code_window_t3_ParamLimits

0x951d,	// (0x00066dae) popup_query_data_code_window_t3

0x9533,	// (0x00066dc4) popup_query_data_code_window_t4_ParamLimits

0x9533,	// (0x00066dc4) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0006cdf4) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0006cdf4) popup_query_data_code_window_t

0x054e,	// (0x0005dddf) list_single_midp_graphic_pane_g3

0x954b,	// (0x00066ddc) query_popup_data_pane_cp2_ParamLimits

0x955e,	// (0x00066def) query_popup_pane_cp2_ParamLimits

0x955e,	// (0x00066def) query_popup_pane_cp2

0x70a9,	// (0x0006493a) bg_popup_window_pane_cp11

0x23ae,	// (0x0005fc3f) heading_pane_cp5

0x23b6,	// (0x0005fc47) listscroll_popup_info_pane

0x70a9,	// (0x0006493a) input_focus_pane_cp3

0x7319,	// (0x00064baa) query_popup_pane_t1

0x7327,	// (0x00064bb8) list_popup_info_pane_ParamLimits

0x7327,	// (0x00064bb8) list_popup_info_pane

0x7336,	// (0x00064bc7) listscroll_popup_info_pane_g1

0x733e,	// (0x00064bcf) scroll_pane_cp7

0x9571,	// (0x00066e02) popup_info_list_pane_t1_ParamLimits

0x9571,	// (0x00066e02) popup_info_list_pane_t1

0x958b,	// (0x00066e1c) popup_info_list_pane_t2_ParamLimits

0x958b,	// (0x00066e1c) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0006cdfd) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0006cdfd) popup_info_list_pane_t

0x70a9,	// (0x0006493a) bg_popup_window_pane_cp12

0xcd7d,	// (0x0006a60e) find_popup_pane

0x70f7,	// (0x00064988) bg_popup_window_pane_cp3

0x7348,	// (0x00064bd9) heading_pane_cp3

0x7357,	// (0x00064be8) listscroll_popup_graphic_pane

0x70a9,	// (0x0006493a) bg_popup_window_pane_cp4

0x95f5,	// (0x00066e86) heading_pane_cp4

0x7367,	// (0x00064bf8) listscroll_popup_colour_pane

0x95ff,	// (0x00066e90) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x95ff,	// (0x00066e90) cell_large_graphic_colour_none_popup_pane

0x9613,	// (0x00066ea4) grid_large_graphic_colour_popup_pane_ParamLimits

0x9613,	// (0x00066ea4) grid_large_graphic_colour_popup_pane

0x9637,	// (0x00066ec8) listscroll_popup_colour_pane_g1_ParamLimits

0x9637,	// (0x00066ec8) listscroll_popup_colour_pane_g1

0x964e,	// (0x00066edf) listscroll_popup_colour_pane_g2_ParamLimits

0x964e,	// (0x00066edf) listscroll_popup_colour_pane_g2

0x9662,	// (0x00066ef3) listscroll_popup_colour_pane_g3_ParamLimits

0x9662,	// (0x00066ef3) listscroll_popup_colour_pane_g3

0x9672,	// (0x00066f03) listscroll_popup_colour_pane_g4_ParamLimits

0x9672,	// (0x00066f03) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0006ce02) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0006ce02) listscroll_popup_colour_pane_g

0x736f,	// (0x00064c00) scroll_pane_cp6_ParamLimits

0x736f,	// (0x00064c00) scroll_pane_cp6

0x9682,	// (0x00066f13) cell_large_graphic_colour_popup_pane_ParamLimits

0x9682,	// (0x00066f13) cell_large_graphic_colour_popup_pane

0x96a1,	// (0x00066f32) cell_large_graphic_colour_none_popup_pane_t1

0x70a9,	// (0x0006493a) grid_highlight_pane_cp5

0x7381,	// (0x00064c12) cell_large_graphic_colour_popup_pane_g1

0x7389,	// (0x00064c1a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0006ce0b) cell_large_graphic_colour_popup_pane_g

0x7391,	// (0x00064c22) cell_large_graphic_colour_popup_pane_g2_copy1

0x739a,	// (0x00064c2b) grid_highlight_pane_cp4

0x73a2,	// (0x00064c33) bg_popup_window_pane_cp8_ParamLimits

0x73a2,	// (0x00064c33) bg_popup_window_pane_cp8

0x96b0,	// (0x00066f41) popup_snote_single_text_window_g1_ParamLimits

0x96b0,	// (0x00066f41) popup_snote_single_text_window_g1

0x96c2,	// (0x00066f53) popup_snote_single_text_window_t1_ParamLimits

0x96c2,	// (0x00066f53) popup_snote_single_text_window_t1

0x96d5,	// (0x00066f66) popup_snote_single_text_window_t2_ParamLimits

0x96d5,	// (0x00066f66) popup_snote_single_text_window_t2

0x96e8,	// (0x00066f79) popup_snote_single_text_window_t3_ParamLimits

0x96e8,	// (0x00066f79) popup_snote_single_text_window_t3

0x9721,	// (0x00066fb2) popup_snote_single_text_window_t4_ParamLimits

0x9721,	// (0x00066fb2) popup_snote_single_text_window_t4

0x9755,	// (0x00066fe6) popup_snote_single_text_window_t5_ParamLimits

0x9755,	// (0x00066fe6) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0006ce10) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0006ce10) popup_snote_single_text_window_t

0x7f34,	// (0x000657c5) bg_popup_window_pane_cp9_ParamLimits

0x7f34,	// (0x000657c5) bg_popup_window_pane_cp9

0x96b0,	// (0x00066f41) popup_snote_single_graphic_window_g1_ParamLimits

0x96b0,	// (0x00066f41) popup_snote_single_graphic_window_g1

0x7f42,	// (0x000657d3) popup_snote_single_graphic_window_g2_ParamLimits

0x7f42,	// (0x000657d3) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0006ce1b) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0006ce1b) popup_snote_single_graphic_window_g

0x7f4e,	// (0x000657df) popup_snote_single_graphic_window_t1_ParamLimits

0x7f4e,	// (0x000657df) popup_snote_single_graphic_window_t1

0x7f61,	// (0x000657f2) popup_snote_single_graphic_window_t2_ParamLimits

0x7f61,	// (0x000657f2) popup_snote_single_graphic_window_t2

0x96e8,	// (0x00066f79) popup_snote_single_graphic_window_t3_ParamLimits

0x96e8,	// (0x00066f79) popup_snote_single_graphic_window_t3

0x9721,	// (0x00066fb2) popup_snote_single_graphic_window_t4_ParamLimits

0x9721,	// (0x00066fb2) popup_snote_single_graphic_window_t4

0x9784,	// (0x00067015) popup_snote_single_graphic_window_t5_ParamLimits

0x9784,	// (0x00067015) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0006ce20) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0006ce20) popup_snote_single_graphic_window_t

0x36a4,	// (0x00060f35) grid_graphic_popup_pane_ParamLimits

0x36a4,	// (0x00060f35) grid_graphic_popup_pane

0x36ce,	// (0x00060f5f) listscroll_popup_graphic_pane_g1_ParamLimits

0x36ce,	// (0x00060f5f) listscroll_popup_graphic_pane_g1

0xcd1b,	// (0x0006a5ac) listscroll_popup_graphic_pane_g2_ParamLimits

0xcd1b,	// (0x0006a5ac) listscroll_popup_graphic_pane_g2

0x0001,

0xf97f,	// (0x0006d210) listscroll_popup_graphic_pane_g_ParamLimits

0xf97f,	// (0x0006d210) listscroll_popup_graphic_pane_g

0x36f6,	// (0x00060f87) scroll_pane_cp5

0xccd6,	// (0x0006a567) cell_graphic_popup_pane_ParamLimits

0xccd6,	// (0x0006a567) cell_graphic_popup_pane

0x3614,	// (0x00060ea5) cell_graphic_popup_pane_g1

0x361c,	// (0x00060ead) cell_graphic_popup_pane_g2

0x7391,	// (0x00064c22) cell_graphic_popup_pane_g3

0x0002,

0xf978,	// (0x0006d209) cell_graphic_popup_pane_g

0x3625,	// (0x00060eb6) cell_graphic_popup_pane_t2

0x739a,	// (0x00064c2b) grid_highlight_pane_cp3

0x7f86,	// (0x00065817) list_gen_pane_ParamLimits

0x7f86,	// (0x00065817) list_gen_pane

0x7fae,	// (0x0006583f) scroll_pane

0xcc40,	// (0x0006a4d1) bg_list_pane_g1_ParamLimits

0xcc40,	// (0x0006a4d1) bg_list_pane_g1

0xcc5b,	// (0x0006a4ec) bg_list_pane_g2_ParamLimits

0xcc5b,	// (0x0006a4ec) bg_list_pane_g2

0xcc6e,	// (0x0006a4ff) bg_list_pane_g3_ParamLimits

0xcc6e,	// (0x0006a4ff) bg_list_pane_g3

0xcc80,	// (0x0006a511) bg_list_pane_g4_ParamLimits

0xcc80,	// (0x0006a511) bg_list_pane_g4

0xcc92,	// (0x0006a523) bg_list_pane_g5_ParamLimits

0xcc92,	// (0x0006a523) bg_list_pane_g5

0x0004,

0xf96d,	// (0x0006d1fe) bg_list_pane_g_ParamLimits

0xf96d,	// (0x0006d1fe) bg_list_pane_g

0xb4bf,	// (0x00068d50) list_double2_graphic_large_graphic_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_double2_graphic_large_graphic_pane

0xb4bf,	// (0x00068d50) list_double2_graphic_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_double2_graphic_pane

0xb4bf,	// (0x00068d50) list_double2_large_graphic_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_double2_large_graphic_pane

0xb4bf,	// (0x00068d50) list_double2_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_double2_pane

0xb4bf,	// (0x00068d50) list_double_graphic_heading_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_double_graphic_heading_pane

0xb4bf,	// (0x00068d50) list_double_graphic_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_double_graphic_pane

0xb4bf,	// (0x00068d50) list_double_heading_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_double_heading_pane

0xb4bf,	// (0x00068d50) list_double_large_graphic_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_double_large_graphic_pane

0xb4bf,	// (0x00068d50) list_double_number_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_double_number_pane

0xb4bf,	// (0x00068d50) list_double_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_double_pane

0xb4bf,	// (0x00068d50) list_double_time_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_double_time_pane

0xb4bf,	// (0x00068d50) list_setting_number_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_setting_number_pane

0xb4bf,	// (0x00068d50) list_setting_pane_ParamLimits

0xb4bf,	// (0x00068d50) list_setting_pane

0x9dc8,	// (0x00067659) list_single_2graphic_pane_ParamLimits

0x9dc8,	// (0x00067659) list_single_2graphic_pane

0x9dc8,	// (0x00067659) list_single_graphic_heading_pane_ParamLimits

0x9dc8,	// (0x00067659) list_single_graphic_heading_pane

0x9dc8,	// (0x00067659) list_single_graphic_pane_ParamLimits

0x9dc8,	// (0x00067659) list_single_graphic_pane

0x9dc8,	// (0x00067659) list_single_heading_pane_ParamLimits

0x9dc8,	// (0x00067659) list_single_heading_pane

0xcc2d,	// (0x0006a4be) list_single_large_graphic_pane_ParamLimits

0xcc2d,	// (0x0006a4be) list_single_large_graphic_pane

0x9dc8,	// (0x00067659) list_single_number_heading_pane_ParamLimits

0x9dc8,	// (0x00067659) list_single_number_heading_pane

0x9dc8,	// (0x00067659) list_single_number_pane_ParamLimits

0x9dc8,	// (0x00067659) list_single_number_pane

0x9dc8,	// (0x00067659) list_single_pane_ParamLimits

0x9dc8,	// (0x00067659) list_single_pane

0x70a9,	// (0x0006493a) list_highlight_pane_cp1

0xbed8,	// (0x00069769) list_single_pane_g1_ParamLimits

0xbed8,	// (0x00069769) list_single_pane_g1

0x051d,	// (0x0005ddae) list_single_pane_g2_ParamLimits

0x051d,	// (0x0005ddae) list_single_pane_g2

0x0001,

0xf5ab,	// (0x0006ce3c) list_single_pane_g_ParamLimits

0xf5ab,	// (0x0006ce3c) list_single_pane_g

0x97c9,	// (0x0006705a) list_single_pane_t1_ParamLimits

0x97c9,	// (0x0006705a) list_single_pane_t1

0xbed8,	// (0x00069769) list_single_number_pane_g1_ParamLimits

0xbed8,	// (0x00069769) list_single_number_pane_g1

0x051d,	// (0x0005ddae) list_single_number_pane_g2_ParamLimits

0x051d,	// (0x0005ddae) list_single_number_pane_g2

0x0001,

0xf5ab,	// (0x0006ce3c) list_single_number_pane_g_ParamLimits

0xf5ab,	// (0x0006ce3c) list_single_number_pane_g

0x97c9,	// (0x0006705a) list_single_number_pane_t1_ParamLimits

0x97c9,	// (0x0006705a) list_single_number_pane_t1

0xb413,	// (0x00068ca4) list_single_number_pane_t2_ParamLimits

0xb413,	// (0x00068ca4) list_single_number_pane_t2

0x0001,

0xf92e,	// (0x0006d1bf) list_single_number_pane_t_ParamLimits

0xf92e,	// (0x0006d1bf) list_single_number_pane_t

0x97bd,	// (0x0006704e) list_single_graphic_pane_g1_ParamLimits

0x97bd,	// (0x0006704e) list_single_graphic_pane_g1

0xbed8,	// (0x00069769) list_single_graphic_pane_g2_ParamLimits

0xbed8,	// (0x00069769) list_single_graphic_pane_g2

0x051d,	// (0x0005ddae) list_single_graphic_pane_g3_ParamLimits

0x051d,	// (0x0005ddae) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0006ce2b) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0006ce2b) list_single_graphic_pane_g

0x97c9,	// (0x0006705a) list_single_graphic_pane_t1_ParamLimits

0x97c9,	// (0x0006705a) list_single_graphic_pane_t1

0x97df,	// (0x00067070) list_single_heading_pane_g1_ParamLimits

0x97df,	// (0x00067070) list_single_heading_pane_g1

0x051d,	// (0x0005ddae) list_single_heading_pane_g2_ParamLimits

0x051d,	// (0x0005ddae) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0006ce32) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0006ce32) list_single_heading_pane_g

0x97f2,	// (0x00067083) list_single_heading_pane_t1_ParamLimits

0x97f2,	// (0x00067083) list_single_heading_pane_t1

0x9808,	// (0x00067099) list_single_heading_pane_t2_ParamLimits

0x9808,	// (0x00067099) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0006ce37) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0006ce37) list_single_heading_pane_t

0xbed8,	// (0x00069769) list_single_number_heading_pane_g1_ParamLimits

0xbed8,	// (0x00069769) list_single_number_heading_pane_g1

0x051d,	// (0x0005ddae) list_single_number_heading_pane_g2_ParamLimits

0x051d,	// (0x0005ddae) list_single_number_heading_pane_g2

0x0001,

0xf5ab,	// (0x0006ce3c) list_single_number_heading_pane_g_ParamLimits

0xf5ab,	// (0x0006ce3c) list_single_number_heading_pane_g

0xbee4,	// (0x00069775) list_single_number_heading_pane_t1_ParamLimits

0xbee4,	// (0x00069775) list_single_number_heading_pane_t1

0x981a,	// (0x000670ab) list_single_number_heading_pane_t2_ParamLimits

0x981a,	// (0x000670ab) list_single_number_heading_pane_t2

0x982c,	// (0x000670bd) list_single_number_heading_pane_t3_ParamLimits

0x982c,	// (0x000670bd) list_single_number_heading_pane_t3

0x0002,

0xf5b0,	// (0x0006ce41) list_single_number_heading_pane_t_ParamLimits

0xf5b0,	// (0x0006ce41) list_single_number_heading_pane_t

0x983e,	// (0x000670cf) list_single_graphic_heading_pane_g1_ParamLimits

0x983e,	// (0x000670cf) list_single_graphic_heading_pane_g1

0x984a,	// (0x000670db) list_single_graphic_heading_pane_g4_ParamLimits

0x984a,	// (0x000670db) list_single_graphic_heading_pane_g4

0x051d,	// (0x0005ddae) list_single_graphic_heading_pane_g5_ParamLimits

0x051d,	// (0x0005ddae) list_single_graphic_heading_pane_g5

0x0002,

0xf5b7,	// (0x0006ce48) list_single_graphic_heading_pane_g_ParamLimits

0xf5b7,	// (0x0006ce48) list_single_graphic_heading_pane_g

0xbee4,	// (0x00069775) list_single_graphic_heading_pane_t1_ParamLimits

0xbee4,	// (0x00069775) list_single_graphic_heading_pane_t1

0x985b,	// (0x000670ec) list_single_graphic_heading_pane_t2_ParamLimits

0x985b,	// (0x000670ec) list_single_graphic_heading_pane_t2

0x0001,

0xf5be,	// (0x0006ce4f) list_single_graphic_heading_pane_t_ParamLimits

0xf5be,	// (0x0006ce4f) list_single_graphic_heading_pane_t

0x3c8b,	// (0x0006151c) list_single_large_graphic_pane_g1_ParamLimits

0x3c8b,	// (0x0006151c) list_single_large_graphic_pane_g1

0xe85f,	// (0x0006c0f0) list_single_large_graphic_pane_g2_ParamLimits

0xe85f,	// (0x0006c0f0) list_single_large_graphic_pane_g2

0xe86b,	// (0x0006c0fc) list_single_large_graphic_pane_g3_ParamLimits

0xe86b,	// (0x0006c0fc) list_single_large_graphic_pane_g3

0x0002,

0xf5c3,	// (0x0006ce54) list_single_large_graphic_pane_g_ParamLimits

0xf5c3,	// (0x0006ce54) list_single_large_graphic_pane_g

0x256a,	// (0x0005fdfb) wait_border_pane_g2_copy1

0x986d,	// (0x000670fe) list_single_large_graphic_pane_g4_cp2

0xbefa,	// (0x0006978b) list_single_large_graphic_pane_t1_ParamLimits

0xbefa,	// (0x0006978b) list_single_large_graphic_pane_t1

0x9875,	// (0x00067106) list_double_pane_g1_ParamLimits

0x9875,	// (0x00067106) list_double_pane_g1

0x9881,	// (0x00067112) list_double_pane_g2_ParamLimits

0x9881,	// (0x00067112) list_double_pane_g2

0x0001,

0xf5ca,	// (0x0006ce5b) list_double_pane_g_ParamLimits

0xf5ca,	// (0x0006ce5b) list_double_pane_g

0x988d,	// (0x0006711e) list_double_pane_t1_ParamLimits

0x988d,	// (0x0006711e) list_double_pane_t1

0x98a3,	// (0x00067134) list_double_pane_t2_ParamLimits

0x98a3,	// (0x00067134) list_double_pane_t2

0x0001,

0xf5cf,	// (0x0006ce60) list_double_pane_t_ParamLimits

0xf5cf,	// (0x0006ce60) list_double_pane_t

0x98b5,	// (0x00067146) list_double2_pane_g1_ParamLimits

0x98b5,	// (0x00067146) list_double2_pane_g1

0x98c6,	// (0x00067157) list_double2_pane_g2_ParamLimits

0x98c6,	// (0x00067157) list_double2_pane_g2

0x0001,

0xf5d4,	// (0x0006ce65) list_double2_pane_g_ParamLimits

0xf5d4,	// (0x0006ce65) list_double2_pane_g

0x98d2,	// (0x00067163) list_double2_pane_t1_ParamLimits

0x98d2,	// (0x00067163) list_double2_pane_t1

0x98e8,	// (0x00067179) list_double2_pane_t2_ParamLimits

0x98e8,	// (0x00067179) list_double2_pane_t2

0x0001,

0xf5d9,	// (0x0006ce6a) list_double2_pane_t_ParamLimits

0xf5d9,	// (0x0006ce6a) list_double2_pane_t

0x9875,	// (0x00067106) list_double_number_pane_g1_ParamLimits

0x9875,	// (0x00067106) list_double_number_pane_g1

0x9881,	// (0x00067112) list_double_number_pane_g2_ParamLimits

0x9881,	// (0x00067112) list_double_number_pane_g2

0x0001,

0xf5ca,	// (0x0006ce5b) list_double_number_pane_g_ParamLimits

0xf5ca,	// (0x0006ce5b) list_double_number_pane_g

0x98fa,	// (0x0006718b) list_double_number_pane_t1_ParamLimits

0x98fa,	// (0x0006718b) list_double_number_pane_t1

0x988d,	// (0x0006711e) list_double_number_pane_t2_ParamLimits

0x988d,	// (0x0006711e) list_double_number_pane_t2

0x98a3,	// (0x00067134) list_double_number_pane_t3_ParamLimits

0x98a3,	// (0x00067134) list_double_number_pane_t3

0x0002,

0xf5de,	// (0x0006ce6f) list_double_number_pane_t_ParamLimits

0xf5de,	// (0x0006ce6f) list_double_number_pane_t

0x990c,	// (0x0006719d) list_double_graphic_pane_g1_ParamLimits

0x990c,	// (0x0006719d) list_double_graphic_pane_g1

0x9918,	// (0x000671a9) list_double_graphic_pane_g2_ParamLimits

0x9918,	// (0x000671a9) list_double_graphic_pane_g2

0x3a92,	// (0x00061323) list_double_graphic_pane_g3_ParamLimits

0x3a92,	// (0x00061323) list_double_graphic_pane_g3

0x0003,

0xf5e5,	// (0x0006ce76) list_double_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0006ce76) list_double_graphic_pane_g

0x988d,	// (0x0006711e) list_double_graphic_pane_t1_ParamLimits

0x988d,	// (0x0006711e) list_double_graphic_pane_t1

0x98a3,	// (0x00067134) list_double_graphic_pane_t2_ParamLimits

0x98a3,	// (0x00067134) list_double_graphic_pane_t2

0x0001,

0xf5cf,	// (0x0006ce60) list_double_graphic_pane_t_ParamLimits

0xf5cf,	// (0x0006ce60) list_double_graphic_pane_t

0x9933,	// (0x000671c4) list_double2_graphic_pane_g1_ParamLimits

0x9933,	// (0x000671c4) list_double2_graphic_pane_g1

0x993f,	// (0x000671d0) list_double2_graphic_pane_g2_ParamLimits

0x993f,	// (0x000671d0) list_double2_graphic_pane_g2

0x994b,	// (0x000671dc) list_double2_graphic_pane_g3_ParamLimits

0x994b,	// (0x000671dc) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x0006ce7f) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x0006ce7f) list_double2_graphic_pane_g

0x9957,	// (0x000671e8) list_double2_graphic_pane_t1_ParamLimits

0x9957,	// (0x000671e8) list_double2_graphic_pane_t1

0x98e8,	// (0x00067179) list_double2_graphic_pane_t2_ParamLimits

0x98e8,	// (0x00067179) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x0006ce86) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x0006ce86) list_double2_graphic_pane_t

0x996d,	// (0x000671fe) list_double_large_graphic_pane_g1_ParamLimits

0x996d,	// (0x000671fe) list_double_large_graphic_pane_g1

0x998c,	// (0x0006721d) list_double_large_graphic_pane_g2_ParamLimits

0x998c,	// (0x0006721d) list_double_large_graphic_pane_g2

0x9881,	// (0x00067112) list_double_large_graphic_pane_g3_ParamLimits

0x9881,	// (0x00067112) list_double_large_graphic_pane_g3

0x99a2,	// (0x00067233) list_double_large_graphic_pane_g4_ParamLimits

0x99a2,	// (0x00067233) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x0006ce8b) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x0006ce8b) list_double_large_graphic_pane_g

0x99b5,	// (0x00067246) list_double_large_graphic_pane_t1_ParamLimits

0x99b5,	// (0x00067246) list_double_large_graphic_pane_t1

0x99ce,	// (0x0006725f) list_double_large_graphic_pane_t2_ParamLimits

0x99ce,	// (0x0006725f) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x0006ce96) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x0006ce96) list_double_large_graphic_pane_t

0x99e0,	// (0x00067271) list_double2_large_graphic_pane_g1_ParamLimits

0x99e0,	// (0x00067271) list_double2_large_graphic_pane_g1

0x99ec,	// (0x0006727d) list_double2_large_graphic_pane_g2_ParamLimits

0x99ec,	// (0x0006727d) list_double2_large_graphic_pane_g2

0x994b,	// (0x000671dc) list_double2_large_graphic_pane_g3_ParamLimits

0x994b,	// (0x000671dc) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x0006ce9b) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x0006ce9b) list_double2_large_graphic_pane_g

0x99fd,	// (0x0006728e) list_double2_large_graphic_pane_t1_ParamLimits

0x99fd,	// (0x0006728e) list_double2_large_graphic_pane_t1

0x9a13,	// (0x000672a4) list_double2_large_graphic_pane_t2_ParamLimits

0x9a13,	// (0x000672a4) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x0006cea2) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x0006cea2) list_double2_large_graphic_pane_t

0x9a25,	// (0x000672b6) list_double_heading_pane_g1_ParamLimits

0x9a25,	// (0x000672b6) list_double_heading_pane_g1

0xe88c,	// (0x0006c11d) list_double_heading_pane_g2_ParamLimits

0xe88c,	// (0x0006c11d) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x0006cea7) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x0006cea7) list_double_heading_pane_g

0x9a36,	// (0x000672c7) list_double_heading_pane_t1_ParamLimits

0x9a36,	// (0x000672c7) list_double_heading_pane_t1

0x98e8,	// (0x00067179) list_double_heading_pane_t2_ParamLimits

0x98e8,	// (0x00067179) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x0006ceac) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x0006ceac) list_double_heading_pane_t

0x990c,	// (0x0006719d) list_double_graphic_heading_pane_g1_ParamLimits

0x990c,	// (0x0006719d) list_double_graphic_heading_pane_g1

0x9a25,	// (0x000672b6) list_double_graphic_heading_pane_g2_ParamLimits

0x9a25,	// (0x000672b6) list_double_graphic_heading_pane_g2

0xe88c,	// (0x0006c11d) list_double_graphic_heading_pane_g3_ParamLimits

0xe88c,	// (0x0006c11d) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x0006ceb1) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x0006ceb1) list_double_graphic_heading_pane_g

0x9a36,	// (0x000672c7) list_double_graphic_heading_pane_t1_ParamLimits

0x9a36,	// (0x000672c7) list_double_graphic_heading_pane_t1

0x98e8,	// (0x00067179) list_double_graphic_heading_pane_t2_ParamLimits

0x98e8,	// (0x00067179) list_double_graphic_heading_pane_t2

0x0001,

0xf61b,	// (0x0006ceac) list_double_graphic_heading_pane_t_ParamLimits

0xf61b,	// (0x0006ceac) list_double_graphic_heading_pane_t

0x9a4c,	// (0x000672dd) list_double_time_pane_g1_ParamLimits

0x9a4c,	// (0x000672dd) list_double_time_pane_g1

0xbf10,	// (0x000697a1) list_double_time_pane_g2_ParamLimits

0xbf10,	// (0x000697a1) list_double_time_pane_g2

0x0001,

0xf627,	// (0x0006ceb8) list_double_time_pane_g_ParamLimits

0xf627,	// (0x0006ceb8) list_double_time_pane_g

0x9a5d,	// (0x000672ee) list_double_time_pane_t1_ParamLimits

0x9a5d,	// (0x000672ee) list_double_time_pane_t1

0x9a73,	// (0x00067304) list_double_time_pane_t2_ParamLimits

0x9a73,	// (0x00067304) list_double_time_pane_t2

0x9a85,	// (0x00067316) list_double_time_pane_t3_ParamLimits

0x9a85,	// (0x00067316) list_double_time_pane_t3

0x9a97,	// (0x00067328) list_double_time_pane_t4_ParamLimits

0x9a97,	// (0x00067328) list_double_time_pane_t4

0x0003,

0xf62c,	// (0x0006cebd) list_double_time_pane_t_ParamLimits

0xf62c,	// (0x0006cebd) list_double_time_pane_t

0x9aa9,	// (0x0006733a) list_setting_pane_g1_ParamLimits

0x9aa9,	// (0x0006733a) list_setting_pane_g1

0x9ab5,	// (0x00067346) list_setting_pane_g2_ParamLimits

0x9ab5,	// (0x00067346) list_setting_pane_g2

0x0001,

0xf635,	// (0x0006cec6) list_setting_pane_g_ParamLimits

0xf635,	// (0x0006cec6) list_setting_pane_g

0x9ac1,	// (0x00067352) list_setting_pane_t1_ParamLimits

0x9ac1,	// (0x00067352) list_setting_pane_t1

0x9adb,	// (0x0006736c) list_setting_pane_t2_ParamLimits

0x9adb,	// (0x0006736c) list_setting_pane_t2

0x0002,

0xf63a,	// (0x0006cecb) list_setting_pane_t_ParamLimits

0xf63a,	// (0x0006cecb) list_setting_pane_t

0x9b1a,	// (0x000673ab) set_value_pane_cp_ParamLimits

0x9b1a,	// (0x000673ab) set_value_pane_cp

0x9b26,	// (0x000673b7) list_setting_number_pane_g1_ParamLimits

0x9b26,	// (0x000673b7) list_setting_number_pane_g1

0x9b32,	// (0x000673c3) list_setting_number_pane_g2_ParamLimits

0x9b32,	// (0x000673c3) list_setting_number_pane_g2

0x0001,

0xf641,	// (0x0006ced2) list_setting_number_pane_g_ParamLimits

0xf641,	// (0x0006ced2) list_setting_number_pane_g

0x9b3e,	// (0x000673cf) list_setting_number_pane_t1_ParamLimits

0x9b3e,	// (0x000673cf) list_setting_number_pane_t1

0x9b57,	// (0x000673e8) list_setting_number_pane_t2_ParamLimits

0x9b57,	// (0x000673e8) list_setting_number_pane_t2

0x9b71,	// (0x00067402) list_setting_number_pane_t3_ParamLimits

0x9b71,	// (0x00067402) list_setting_number_pane_t3

0x0003,

0xf646,	// (0x0006ced7) list_setting_number_pane_t_ParamLimits

0xf646,	// (0x0006ced7) list_setting_number_pane_t

0x9b1a,	// (0x000673ab) set_value_pane_ParamLimits

0x9b1a,	// (0x000673ab) set_value_pane

0x7fe2,	// (0x00065873) bg_set_opt_pane_ParamLimits

0x7fe2,	// (0x00065873) bg_set_opt_pane

0xbf1c,	// (0x000697ad) set_value_pane_t1

0x8003,	// (0x00065894) slider_set_pane_cp3

0x9bb4,	// (0x00067445) volume_small_pane_cp

0x800c,	// (0x0006589d) list_form_gen_pane

0x8015,	// (0x000658a6) scroll_pane_cp8

0x9bbd,	// (0x0006744e) form_field_data_pane_ParamLimits

0x9bbd,	// (0x0006744e) form_field_data_pane

0x9bd4,	// (0x00067465) form_field_data_wide_pane_ParamLimits

0x9bd4,	// (0x00067465) form_field_data_wide_pane

0x9bf4,	// (0x00067485) form_field_popup_pane_ParamLimits

0x9bf4,	// (0x00067485) form_field_popup_pane

0x9c14,	// (0x000674a5) form_field_popup_wide_pane_ParamLimits

0x9c14,	// (0x000674a5) form_field_popup_wide_pane

0xbf3a,	// (0x000697cb) form_field_slider_pane_ParamLimits

0xbf3a,	// (0x000697cb) form_field_slider_pane

0x9c2b,	// (0x000674bc) form_field_slider_wide_pane_ParamLimits

0x9c2b,	// (0x000674bc) form_field_slider_wide_pane

0x8026,	// (0x000658b7) data_form_pane

0x9c48,	// (0x000674d9) form_field_data_pane_t1

0x8032,	// (0x000658c3) input_focus_pane

0xbf4d,	// (0x000697de) data_form_wide_pane

0xe898,	// (0x0006c129) form_field_data_wide_pane_t1

0x73af,	// (0x00064c40) input_focus_pane_cp6

0x9c62,	// (0x000674f3) form_field_popup_pane_t1

0x8032,	// (0x000658c3) input_focus_pane_cp7

0x8060,	// (0x000658f1) list_form_pane

0xe8c2,	// (0x0006c153) form_field_popup_wide_pane_t1

0x8032,	// (0x000658c3) input_focus_pane_cp8

0x806c,	// (0x000658fd) list_form_wide_pane

0x9c84,	// (0x00067515) form_field_slider_pane_t1_ParamLimits

0x9c84,	// (0x00067515) form_field_slider_pane_t1

0x9c9c,	// (0x0006752d) form_field_slider_pane_t2_ParamLimits

0x9c9c,	// (0x0006752d) form_field_slider_pane_t2

0x0001,

0xf656,	// (0x0006cee7) form_field_slider_pane_t_ParamLimits

0xf656,	// (0x0006cee7) form_field_slider_pane_t

0x7221,	// (0x00064ab2) input_focus_pane_cp9_ParamLimits

0x7221,	// (0x00064ab2) input_focus_pane_cp9

0x9cb1,	// (0x00067542) slider_cont_pane_ParamLimits

0x9cb1,	// (0x00067542) slider_cont_pane

0x8078,	// (0x00065909) form_field_slider_wide_pane_t1_ParamLimits

0x8078,	// (0x00065909) form_field_slider_wide_pane_t1

0xe8d7,	// (0x0006c168) form_field_slider_wide_pane_t2_ParamLimits

0xe8d7,	// (0x0006c168) form_field_slider_wide_pane_t2

0x0001,

0xf65b,	// (0x0006ceec) form_field_slider_wide_pane_t_ParamLimits

0xf65b,	// (0x0006ceec) form_field_slider_wide_pane_t

0x7221,	// (0x00064ab2) input_focus_pane_cp10_ParamLimits

0x7221,	// (0x00064ab2) input_focus_pane_cp10

0x9cc5,	// (0x00067556) slider_cont_pane_cp1_ParamLimits

0x9cc5,	// (0x00067556) slider_cont_pane_cp1

0x9cd9,	// (0x0006756a) slider_form_pane_cp

0x808a,	// (0x0006591b) input_focus_pane_g1

0x8092,	// (0x00065923) input_focus_pane_g2

0x809a,	// (0x0006592b) input_focus_pane_g3

0x80a2,	// (0x00065933) input_focus_pane_g4

0x80aa,	// (0x0006593b) input_focus_pane_g5

0x80b2,	// (0x00065943) input_focus_pane_g6

0x80ba,	// (0x0006594b) input_focus_pane_g7

0x80c2,	// (0x00065953) input_focus_pane_g8

0x80ca,	// (0x0006595b) input_focus_pane_g9

0x709f,	// (0x00064930) input_focus_pane_g10

0x0009,

0xf660,	// (0x0006cef1) input_focus_pane_g

0x2573,	// (0x0005fe04) wait_border_pane_g3_copy1

0x9ce1,	// (0x00067572) data_form_pane_t1

0x709f,	// (0x00064930) wait_anim_pane_g1_copy1

0xb491,	// (0x00068d22) data_form_wide_pane_t1

0x9cfb,	// (0x0006758c) list_form_graphic_pane_cp_ParamLimits

0x9cfb,	// (0x0006758c) list_form_graphic_pane_cp

0x3452,	// (0x00060ce3) slider_form_pane_g1

0x345b,	// (0x00060cec) slider_form_pane_g2

0x0006,

0xf95e,	// (0x0006d1ef) slider_form_pane_g

0x9d0d,	// (0x0006759e) list_form_graphic_pane_ParamLimits

0x9d0d,	// (0x0006759e) list_form_graphic_pane

0x9d20,	// (0x000675b1) list_form_graphic_pane_g1

0x9d28,	// (0x000675b9) list_form_graphic_pane_t1_ParamLimits

0x9d28,	// (0x000675b9) list_form_graphic_pane_t1

0x70f7,	// (0x00064988) list_highlight_pane_cp5_ParamLimits

0x70f7,	// (0x00064988) list_highlight_pane_cp5

0x9d3d,	// (0x000675ce) find_pane_g1

0x80d2,	// (0x00065963) input_find_pane

0x9d46,	// (0x000675d7) input_find_pane_g1_ParamLimits

0x9d46,	// (0x000675d7) input_find_pane_g1

0x9d52,	// (0x000675e3) input_find_pane_t1_ParamLimits

0x9d52,	// (0x000675e3) input_find_pane_t1

0x9d67,	// (0x000675f8) input_find_pane_t2_ParamLimits

0x9d67,	// (0x000675f8) input_find_pane_t2

0x0001,

0xf675,	// (0x0006cf06) input_find_pane_t_ParamLimits

0xf675,	// (0x0006cf06) input_find_pane_t

0x80db,	// (0x0006596c) input_focus_pane_cp5_ParamLimits

0x80db,	// (0x0006596c) input_focus_pane_cp5

0x80ee,	// (0x0006597f) bg_popup_window_pane_cp2_ParamLimits

0x80ee,	// (0x0006597f) bg_popup_window_pane_cp2

0x80fb,	// (0x0006598c) listscroll_menu_pane_ParamLimits

0x80fb,	// (0x0006598c) listscroll_menu_pane

0x9d88,	// (0x00067619) popup_submenu_window_ParamLimits

0x9d88,	// (0x00067619) popup_submenu_window

0x8107,	// (0x00065998) find_popup_pane_g1

0x9db0,	// (0x00067641) input_popup_find_pane_cp

0x810f,	// (0x000659a0) input_focus_pane_cp4_ParamLimits

0x810f,	// (0x000659a0) input_focus_pane_cp4

0x811d,	// (0x000659ae) input_popup_find_pane_t1_ParamLimits

0x811d,	// (0x000659ae) input_popup_find_pane_t1

0x70a9,	// (0x0006493a) bg_popup_sub_pane_cp

0x814b,	// (0x000659dc) listscroll_popup_sub_pane

0x8153,	// (0x000659e4) list_submenu_pane_ParamLimits

0x8153,	// (0x000659e4) list_submenu_pane

0x8164,	// (0x000659f5) scroll_pane_cp4

0x9dc8,	// (0x00067659) list_single_popup_submenu_pane_ParamLimits

0x9dc8,	// (0x00067659) list_single_popup_submenu_pane

0x9ddc,	// (0x0006766d) list_single_popup_submenu_pane_g1

0x9de4,	// (0x00067675) list_single_popup_submenu_pane_t1_ParamLimits

0x9de4,	// (0x00067675) list_single_popup_submenu_pane_t1

0x7221,	// (0x00064ab2) bg_active_tab_pane_cp1_ParamLimits

0x7221,	// (0x00064ab2) bg_active_tab_pane_cp1

0x816c,	// (0x000659fd) tabs_2_active_pane_g1

0x9df9,	// (0x0006768a) tabs_2_active_pane_t1

0x7221,	// (0x00064ab2) bg_passive_tab_pane_cp1_ParamLimits

0x7221,	// (0x00064ab2) bg_passive_tab_pane_cp1

0x816c,	// (0x000659fd) tabs_2_passive_pane_g1

0x9df9,	// (0x0006768a) tabs_2_passive_pane_t1

0x70f7,	// (0x00064988) bg_active_tab_pane_cp4

0x9e0b,	// (0x0006769c) tabs_2_long_active_pane_t1

0x83d7,	// (0x00065c68) bg_passive_tab_pane_cp4

0x0556,	// (0x0005dde7) list_single_midp_graphic_pane_g4_ParamLimits

0x70f7,	// (0x00064988) bg_active_tab_pane_cp5

0x9e1e,	// (0x000676af) tabs_3_long_active_pane_t1

0x83d7,	// (0x00065c68) bg_passive_tab_pane_cp5

0x0556,	// (0x0005dde7) list_single_midp_graphic_pane_g4

0x70f7,	// (0x00064988) bg_popup_window_pane_cp13_ParamLimits

0x70f7,	// (0x00064988) bg_popup_window_pane_cp13

0x8174,	// (0x00065a05) listscroll_popup_fast_pane_ParamLimits

0x8174,	// (0x00065a05) listscroll_popup_fast_pane

0x8180,	// (0x00065a11) grid_popup_fast_pane_ParamLimits

0x8180,	// (0x00065a11) grid_popup_fast_pane

0x8192,	// (0x00065a23) scroll_pane_cp9_ParamLimits

0x8192,	// (0x00065a23) scroll_pane_cp9

0x4f62,	// (0x000627f3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f62,	// (0x000627f3) list_single_graphic_hl_pane_t1_cp2

0x81a5,	// (0x00065a36) input_focus_pane_cp20_ParamLimits

0x81a5,	// (0x00065a36) input_focus_pane_cp20

0x81b3,	// (0x00065a44) query_popup_data_pane_t1_ParamLimits

0x81b3,	// (0x00065a44) query_popup_data_pane_t1

0x81c6,	// (0x00065a57) query_popup_data_pane_t2_ParamLimits

0x81c6,	// (0x00065a57) query_popup_data_pane_t2

0x820c,	// (0x00065a9d) query_popup_data_pane_t3_ParamLimits

0x820c,	// (0x00065a9d) query_popup_data_pane_t3

0x824d,	// (0x00065ade) query_popup_data_pane_t4_ParamLimits

0x824d,	// (0x00065ade) query_popup_data_pane_t4

0x8289,	// (0x00065b1a) query_popup_data_pane_t5_ParamLimits

0x8289,	// (0x00065b1a) query_popup_data_pane_t5

0x0004,

0xf67a,	// (0x0006cf0b) query_popup_data_pane_t_ParamLimits

0xf67a,	// (0x0006cf0b) query_popup_data_pane_t

0x808a,	// (0x0006591b) bg_set_opt_pane_g1

0x8092,	// (0x00065923) bg_set_opt_pane_g2

0x809a,	// (0x0006592b) bg_set_opt_pane_g3

0x80a2,	// (0x00065933) bg_set_opt_pane_g4

0x80aa,	// (0x0006593b) bg_set_opt_pane_g5

0x80b2,	// (0x00065943) bg_set_opt_pane_g6

0x80ba,	// (0x0006594b) bg_set_opt_pane_g7

0x80c2,	// (0x00065953) bg_set_opt_pane_g8

0x80ca,	// (0x0006595b) bg_set_opt_pane_g9

0x0008,

0xf685,	// (0x0006cf16) bg_set_opt_pane_g

0xf2ba,	// (0x0006cb4b) control_top_pane_stacon_ParamLimits

0xf2ba,	// (0x0006cb4b) control_top_pane_stacon

0xf30d,	// (0x0006cb9e) signal_pane_stacon_ParamLimits

0xf30d,	// (0x0006cb9e) signal_pane_stacon

0xc1a8,	// (0x00069a39) stacon_top_pane_g1_ParamLimits

0xc1a8,	// (0x00069a39) stacon_top_pane_g1

0xf332,	// (0x0006cbc3) title_pane_stacon_ParamLimits

0xf332,	// (0x0006cbc3) title_pane_stacon

0xf35c,	// (0x0006cbed) uni_indicator_pane_stacon_ParamLimits

0xf35c,	// (0x0006cbed) uni_indicator_pane_stacon

0xf371,	// (0x0006cc02) battery_pane_stacon_ParamLimits

0xf371,	// (0x0006cc02) battery_pane_stacon

0xf3b5,	// (0x0006cc46) control_bottom_pane_stacon_ParamLimits

0xf3b5,	// (0x0006cc46) control_bottom_pane_stacon

0xf3d8,	// (0x0006cc69) navi_pane_stacon_ParamLimits

0xf3d8,	// (0x0006cc69) navi_pane_stacon

0xc1ca,	// (0x00069a5b) stacon_bottom_pane_g1_ParamLimits

0xc1ca,	// (0x00069a5b) stacon_bottom_pane_g1

0xe8e9,	// (0x0006c17a) aid_levels_signal_lsc_ParamLimits

0xe8e9,	// (0x0006c17a) aid_levels_signal_lsc

0xe8ff,	// (0x0006c190) signal_pane_stacon_g1_ParamLimits

0xe8ff,	// (0x0006c190) signal_pane_stacon_g1

0xe913,	// (0x0006c1a4) signal_pane_stacon_g2_ParamLimits

0xe913,	// (0x0006c1a4) signal_pane_stacon_g2

0x0001,

0xf698,	// (0x0006cf29) signal_pane_stacon_g_ParamLimits

0xf698,	// (0x0006cf29) signal_pane_stacon_g

0xe948,	// (0x0006c1d9) title_pane_stacon_t1_ParamLimits

0xe948,	// (0x0006c1d9) title_pane_stacon_t1

0x82cd,	// (0x00065b5e) uni_indicator_pane_stacon_g1

0x82d7,	// (0x00065b68) uni_indicator_pane_stacon_g2

0x82e1,	// (0x00065b72) uni_indicator_pane_stacon_g3

0x82eb,	// (0x00065b7c) uni_indicator_pane_stacon_g4

0x0003,

0xf6a4,	// (0x0006cf35) uni_indicator_pane_stacon_g

0xe96d,	// (0x0006c1fe) control_top_pane_stacon_g1

0xe975,	// (0x0006c206) control_top_pane_stacon_t1_ParamLimits

0xe975,	// (0x0006c206) control_top_pane_stacon_t1

0xe9ac,	// (0x0006c23d) aid_levels_battery_lsc_ParamLimits

0xe9ac,	// (0x0006c23d) aid_levels_battery_lsc

0xe9c3,	// (0x0006c254) battery_pane_stacon_g1_ParamLimits

0xe9c3,	// (0x0006c254) battery_pane_stacon_g1

0xe9d6,	// (0x0006c267) battery_pane_stacon_g2_ParamLimits

0xe9d6,	// (0x0006c267) battery_pane_stacon_g2

0x0001,

0xf6ad,	// (0x0006cf3e) battery_pane_stacon_g_ParamLimits

0xf6ad,	// (0x0006cf3e) battery_pane_stacon_g

0xea14,	// (0x0006c2a5) navi_icon_pane_stacon

0xea28,	// (0x0006c2b9) navi_navi_pane_stacon

0xea14,	// (0x0006c2a5) navi_text_pane_stacon

0xe96d,	// (0x0006c1fe) control_bottom_pane_stacon_g1

0xea3c,	// (0x0006c2cd) control_bottom_pane_stacon_t1_ParamLimits

0xea3c,	// (0x0006c2cd) control_bottom_pane_stacon_t1

0x9e4a,	// (0x000676db) grid_app_pane_ParamLimits

0x9e4a,	// (0x000676db) grid_app_pane

0x9e82,	// (0x00067713) scroll_pane_cp15_ParamLimits

0x9e82,	// (0x00067713) scroll_pane_cp15

0x9e97,	// (0x00067728) cell_app_pane_ParamLimits

0x9e97,	// (0x00067728) cell_app_pane

0x9edc,	// (0x0006776d) cell_app_pane_g1_ParamLimits

0x9edc,	// (0x0006776d) cell_app_pane_g1

0x830f,	// (0x00065ba0) cell_app_pane_g2_ParamLimits

0x830f,	// (0x00065ba0) cell_app_pane_g2

0x0001,

0xf6b2,	// (0x0006cf43) cell_app_pane_g_ParamLimits

0xf6b2,	// (0x0006cf43) cell_app_pane_g

0x9f00,	// (0x00067791) cell_app_pane_t1_ParamLimits

0x9f00,	// (0x00067791) cell_app_pane_t1

0x831b,	// (0x00065bac) grid_highlight_pane_ParamLimits

0x831b,	// (0x00065bac) grid_highlight_pane

0x808a,	// (0x0006591b) cell_highlight_pane_g1

0x8092,	// (0x00065923) cell_highlight_pane_g2

0x809a,	// (0x0006592b) cell_highlight_pane_g3

0x80a2,	// (0x00065933) cell_highlight_pane_g4

0x80aa,	// (0x0006593b) cell_highlight_pane_g5

0x80b2,	// (0x00065943) cell_highlight_pane_g6

0x80ba,	// (0x0006594b) cell_highlight_pane_g7

0x80c2,	// (0x00065953) cell_highlight_pane_g8

0x80ca,	// (0x0006595b) cell_highlight_pane_g9

0x709f,	// (0x00064930) cell_highlight_pane_g10

0x0009,

0xf660,	// (0x0006cef1) cell_highlight_pane_g

0x832c,	// (0x00065bbd) bg_scroll_pane

0x9f20,	// (0x000677b1) scroll_handle_pane

0x8373,	// (0x00065c04) scroll_bg_pane_g1

0x8388,	// (0x00065c19) scroll_bg_pane_g2

0x83a0,	// (0x00065c31) scroll_bg_pane_g3

0x0002,

0xf6b7,	// (0x0006cf48) scroll_bg_pane_g

0x9f34,	// (0x000677c5) scroll_handle_focus_pane_ParamLimits

0x9f34,	// (0x000677c5) scroll_handle_focus_pane

0x8373,	// (0x00065c04) scroll_handle_pane_g1

0x83b5,	// (0x00065c46) scroll_handle_pane_g2

0x83a0,	// (0x00065c31) scroll_handle_pane_g3

0x0002,

0xf6be,	// (0x0006cf4f) scroll_handle_pane_g

0x810f,	// (0x000659a0) bg_popup_sub_pane_cp21_ParamLimits

0x810f,	// (0x000659a0) bg_popup_sub_pane_cp21

0x9f41,	// (0x000677d2) popup_fep_japan_predictive_window_t1_ParamLimits

0x9f41,	// (0x000677d2) popup_fep_japan_predictive_window_t1

0x9f58,	// (0x000677e9) popup_fep_japan_predictive_window_t2_ParamLimits

0x9f58,	// (0x000677e9) popup_fep_japan_predictive_window_t2

0x9f8b,	// (0x0006781c) popup_fep_japan_predictive_window_t3_ParamLimits

0x9f8b,	// (0x0006781c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c5,	// (0x0006cf56) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c5,	// (0x0006cf56) popup_fep_japan_predictive_window_t

0x70a9,	// (0x0006493a) bg_popup_sub_pane_cp23

0x9fc2,	// (0x00067853) listscroll_japin_cand_pane

0x83c9,	// (0x00065c5a) popup_fep_japan_candidate_window_t1

0xbf6a,	// (0x000697fb) candidate_pane_ParamLimits

0xbf6a,	// (0x000697fb) candidate_pane

0x9fca,	// (0x0006785b) scroll_pane_cp30

0xbf7c,	// (0x0006980d) list_single_popup_jap_candidate_pane_ParamLimits

0xbf7c,	// (0x0006980d) list_single_popup_jap_candidate_pane

0x70a9,	// (0x0006493a) list_highlight_pane_cp30

0xbf91,	// (0x00069822) list_single_popup_jap_candidate_pane_t1

0xbfa0,	// (0x00069831) level_1_signal

0xbfad,	// (0x0006983e) level_2_signal

0xbfba,	// (0x0006984b) level_3_signal

0xbfc7,	// (0x00069858) level_4_signal

0xbfd4,	// (0x00069865) level_5_signal

0xbfe1,	// (0x00069872) level_6_signal

0xbfee,	// (0x0006987f) level_7_signal

0xbfa0,	// (0x00069831) level_1_battery

0xbfad,	// (0x0006983e) level_2_battery

0xbfba,	// (0x0006984b) level_3_battery

0xbfc7,	// (0x00069858) level_4_battery

0xbfd4,	// (0x00069865) level_5_battery

0xbfe1,	// (0x00069872) level_6_battery

0xbfee,	// (0x0006987f) level_7_battery

0xc013,	// (0x000698a4) list_menu_pane_ParamLimits

0xc013,	// (0x000698a4) list_menu_pane

0xc029,	// (0x000698ba) scroll_pane_cp25_ParamLimits

0xc029,	// (0x000698ba) scroll_pane_cp25

0x9fd2,	// (0x00067863) list_double2_graphic_pane_cp2_ParamLimits

0x9fd2,	// (0x00067863) list_double2_graphic_pane_cp2

0x9fd2,	// (0x00067863) list_double2_large_graphic_pane_cp2_ParamLimits

0x9fd2,	// (0x00067863) list_double2_large_graphic_pane_cp2

0x9fd2,	// (0x00067863) list_double2_pane_cp2_ParamLimits

0x9fd2,	// (0x00067863) list_double2_pane_cp2

0x9fd2,	// (0x00067863) list_double_graphic_pane_cp2_ParamLimits

0x9fd2,	// (0x00067863) list_double_graphic_pane_cp2

0x9fd2,	// (0x00067863) list_double_large_graphic_pane_cp2_ParamLimits

0x9fd2,	// (0x00067863) list_double_large_graphic_pane_cp2

0x9fd2,	// (0x00067863) list_double_number_pane_cp2_ParamLimits

0x9fd2,	// (0x00067863) list_double_number_pane_cp2

0x9fd2,	// (0x00067863) list_double_pane_cp2_ParamLimits

0x9fd2,	// (0x00067863) list_double_pane_cp2

0x9fe1,	// (0x00067872) list_single_2graphic_pane_cp2_ParamLimits

0x9fe1,	// (0x00067872) list_single_2graphic_pane_cp2

0x9fe1,	// (0x00067872) list_single_graphic_heading_pane_cp2_ParamLimits

0x9fe1,	// (0x00067872) list_single_graphic_heading_pane_cp2

0x9fe1,	// (0x00067872) list_single_graphic_pane_cp2_ParamLimits

0x9fe1,	// (0x00067872) list_single_graphic_pane_cp2

0x9fe1,	// (0x00067872) list_single_heading_pane_cp2_ParamLimits

0x9fe1,	// (0x00067872) list_single_heading_pane_cp2

0xc052,	// (0x000698e3) list_single_large_graphic_pane_cp2_ParamLimits

0xc052,	// (0x000698e3) list_single_large_graphic_pane_cp2

0x9fe1,	// (0x00067872) list_single_number_heading_pane_cp2_ParamLimits

0x9fe1,	// (0x00067872) list_single_number_heading_pane_cp2

0x9fe1,	// (0x00067872) list_single_number_pane_cp2_ParamLimits

0x9fe1,	// (0x00067872) list_single_number_pane_cp2

0x9ff3,	// (0x00067884) list_single_pane_cp2_ParamLimits

0x9ff3,	// (0x00067884) list_single_pane_cp2

0xc06c,	// (0x000698fd) bg_popup_sub_pane_cp22

0xf2a0,	// (0x0006cb31) popup_side_volume_key_window_g1

0xf2ac,	// (0x0006cb3d) popup_side_volume_key_window_t1

0xa0bb,	// (0x0006794c) volume_small_pane_cp1

0x7221,	// (0x00064ab2) bg_popup_sub_pane_cp24_ParamLimits

0x7221,	// (0x00064ab2) bg_popup_sub_pane_cp24

0xc082,	// (0x00069913) fep_china_uni_candidate_pane_ParamLimits

0xc082,	// (0x00069913) fep_china_uni_candidate_pane

0xc096,	// (0x00069927) fep_china_uni_entry_pane

0xc0a6,	// (0x00069937) popup_fep_china_uni_window_g1

0xa0c3,	// (0x00067954) fep_china_uni_entry_pane_g1

0xa0cb,	// (0x0006795c) fep_china_uni_entry_pane_g2

0x0001,

0xf6f6,	// (0x0006cf87) fep_china_uni_entry_pane_g

0xc0c2,	// (0x00069953) fep_entry_item_pane

0xc0cc,	// (0x0006995d) fep_candidate_item_pane

0xa0d3,	// (0x00067964) fep_china_uni_candidate_pane_g1

0xc0d4,	// (0x00069965) fep_china_uni_candidate_pane_g2

0xc0dc,	// (0x0006996d) fep_china_uni_candidate_pane_g3

0xa0db,	// (0x0006796c) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fb,	// (0x0006cf8c) fep_china_uni_candidate_pane_g

0x709f,	// (0x00064930) fep_entry_item_pane_g1

0xc0e4,	// (0x00069975) fep_entry_item_pane_t1_ParamLimits

0xc0e4,	// (0x00069975) fep_entry_item_pane_t1

0xc0fa,	// (0x0006998b) fep_candidate_item_pane_t1_ParamLimits

0xc0fa,	// (0x0006998b) fep_candidate_item_pane_t1

0xc10f,	// (0x000699a0) fep_candidate_item_pane_t2_ParamLimits

0xc10f,	// (0x000699a0) fep_candidate_item_pane_t2

0x0001,

0xf704,	// (0x0006cf95) fep_candidate_item_pane_t_ParamLimits

0xf704,	// (0x0006cf95) fep_candidate_item_pane_t

0x70f7,	// (0x00064988) list_highlight_pane_cp31_ParamLimits

0x70f7,	// (0x00064988) list_highlight_pane_cp31

0xc121,	// (0x000699b2) level_1_signal_lsc

0xc12a,	// (0x000699bb) level_2_signal_lsc

0xc133,	// (0x000699c4) level_3_signal_lsc

0xc13c,	// (0x000699cd) level_4_signal_lsc

0xc145,	// (0x000699d6) level_5_signal_lsc

0xc14e,	// (0x000699df) level_6_signal_lsc

0xc157,	// (0x000699e8) level_7_signal_lsc

0xc157,	// (0x000699e8) level_1_battery_lsc

0xc160,	// (0x000699f1) level_2_battery_lsc

0xc169,	// (0x000699fa) level_3_battery_lsc

0xc172,	// (0x00069a03) level_4_battery_lsc

0xc17b,	// (0x00069a0c) level_5_battery_lsc

0xc184,	// (0x00069a15) level_6_battery_lsc

0xc121,	// (0x000699b2) level_7_battery_lsc

0xc18d,	// (0x00069a1e) scroll_handle_focus_pane_g1

0xc196,	// (0x00069a27) scroll_handle_focus_pane_g2

0xc19f,	// (0x00069a30) scroll_handle_focus_pane_g3

0x0002,

0xf709,	// (0x0006cf9a) scroll_handle_focus_pane_g

0xa0e3,	// (0x00067974) list_single_2graphic_pane_g1_ParamLimits

0xa0e3,	// (0x00067974) list_single_2graphic_pane_g1

0x984a,	// (0x000670db) list_single_2graphic_pane_g2_ParamLimits

0x984a,	// (0x000670db) list_single_2graphic_pane_g2

0x051d,	// (0x0005ddae) list_single_2graphic_pane_g3_ParamLimits

0x051d,	// (0x0005ddae) list_single_2graphic_pane_g3

0xa0ef,	// (0x00067980) list_single_2graphic_pane_g4_ParamLimits

0xa0ef,	// (0x00067980) list_single_2graphic_pane_g4

0x0003,

0xf710,	// (0x0006cfa1) list_single_2graphic_pane_g_ParamLimits

0xf710,	// (0x0006cfa1) list_single_2graphic_pane_g

0xa0fb,	// (0x0006798c) list_single_2graphic_pane_t1_ParamLimits

0xa0fb,	// (0x0006798c) list_single_2graphic_pane_t1

0xa129,	// (0x000679ba) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa129,	// (0x000679ba) list_double2_graphic_large_graphic_pane_g1

0x99ec,	// (0x0006727d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x99ec,	// (0x0006727d) list_double2_graphic_large_graphic_pane_g2

0x994b,	// (0x000671dc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x994b,	// (0x000671dc) list_double2_graphic_large_graphic_pane_g3

0xa13b,	// (0x000679cc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa13b,	// (0x000679cc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf719,	// (0x0006cfaa) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf719,	// (0x0006cfaa) list_double2_graphic_large_graphic_pane_g

0xa147,	// (0x000679d8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa147,	// (0x000679d8) list_double2_graphic_large_graphic_pane_t1

0xa15d,	// (0x000679ee) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa15d,	// (0x000679ee) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf722,	// (0x0006cfb3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf722,	// (0x0006cfb3) list_double2_graphic_large_graphic_pane_t

0xa1e2,	// (0x00067a73) popup_fast_swap_window_ParamLimits

0xa1e2,	// (0x00067a73) popup_fast_swap_window

0xa1fe,	// (0x00067a8f) popup_side_volume_key_window

0xc255,	// (0x00069ae6) stacon_top_pane

0xc25f,	// (0x00069af0) status_pane_ParamLimits

0xc25f,	// (0x00069af0) status_pane

0x7095,	// (0x00064926) status_small_pane

0x70a9,	// (0x0006493a) control_pane

0x70a9,	// (0x0006493a) stacon_bottom_pane

0x8015,	// (0x000658a6) scroll_pane_cp121

0x800c,	// (0x0006589d) set_content_pane

0xa16f,	// (0x00067a00) bg_active_tab_pane_g1_cp1

0xa178,	// (0x00067a09) bg_active_tab_pane_g2_cp1

0xa181,	// (0x00067a12) bg_active_tab_pane_g3_cp1

0xa16f,	// (0x00067a00) bg_passive_tab_pane_g1_cp1

0xa178,	// (0x00067a09) bg_passive_tab_pane_g2_cp1

0xa181,	// (0x00067a12) bg_passive_tab_pane_g3_cp1

0xa18a,	// (0x00067a1b) bg_active_tab_pane_g1_cp2

0xa178,	// (0x00067a09) bg_active_tab_pane_g2_cp2

0xa193,	// (0x00067a24) bg_active_tab_pane_g3_cp2

0xa18a,	// (0x00067a1b) bg_passive_tab_pane_g1_cp2

0xa178,	// (0x00067a09) bg_passive_tab_pane_g2_cp2

0xa193,	// (0x00067a24) bg_passive_tab_pane_g3_cp2

0xa19c,	// (0x00067a2d) bg_active_tab_pane_g1_cp3

0xa178,	// (0x00067a09) bg_active_tab_pane_g2_cp3

0xa1a5,	// (0x00067a36) bg_active_tab_pane_g3_cp3

0xa19c,	// (0x00067a2d) bg_passive_tab_pane_g1_cp3

0xa178,	// (0x00067a09) bg_passive_tab_pane_g2_cp3

0xa1a5,	// (0x00067a36) bg_passive_tab_pane_g3_cp3

0xa1ae,	// (0x00067a3f) bg_active_tab_pane_g1_cp4

0xa178,	// (0x00067a09) bg_active_tab_pane_g2_cp4

0xa1b9,	// (0x00067a4a) bg_active_tab_pane_g3_cp4

0xa1ae,	// (0x00067a3f) bg_passive_tab_pane_g1_cp4

0xa178,	// (0x00067a09) bg_passive_tab_pane_g2_cp4

0xa1b9,	// (0x00067a4a) bg_passive_tab_pane_g3_cp4

0xa1c4,	// (0x00067a55) bg_active_tab_pane_g1_cp5

0xa178,	// (0x00067a09) bg_active_tab_pane_g2_cp5

0xa1cd,	// (0x00067a5e) bg_active_tab_pane_g3_cp5

0xa1c4,	// (0x00067a55) bg_passive_tab_pane_g1_cp5

0xa178,	// (0x00067a09) bg_passive_tab_pane_g2_cp5

0xa1cd,	// (0x00067a5e) bg_passive_tab_pane_g3_cp5

0x3ab6,	// (0x00061347) list_set_graphic_pane_ParamLimits

0x3ab6,	// (0x00061347) list_set_graphic_pane

0x70a9,	// (0x0006493a) bg_set_opt_pane_cp4

0xc1e6,	// (0x00069a77) list_set_graphic_pane_g1_ParamLimits

0xc1e6,	// (0x00069a77) list_set_graphic_pane_g1

0xc1f2,	// (0x00069a83) list_set_graphic_pane_g2_ParamLimits

0xc1f2,	// (0x00069a83) list_set_graphic_pane_g2

0x0001,

0xf727,	// (0x0006cfb8) list_set_graphic_pane_g_ParamLimits

0xf727,	// (0x0006cfb8) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x0006d344) volume_small_pane_cp_g

0xa1d6,	// (0x00067a67) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa1d6,	// (0x00067a67) list_double2_large_graphic_pane_g1_cp2

0xc214,	// (0x00069aa5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc214,	// (0x00069aa5) list_double2_large_graphic_pane_g2_cp2

0xc225,	// (0x00069ab6) list_double2_large_graphic_pane_g3_cp2

0xc22d,	// (0x00069abe) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc22d,	// (0x00069abe) list_double2_large_graphic_pane_t1_cp2

0xc243,	// (0x00069ad4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc243,	// (0x00069ad4) list_double2_large_graphic_pane_t2_cp2

0xc968,	// (0x0006a1f9) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc968,	// (0x0006a1f9) list_double_large_graphic_pane_g1_cp2

0x3035,	// (0x000608c6) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3035,	// (0x000608c6) list_double_large_graphic_pane_g2_cp2

0xc37b,	// (0x00069c0c) list_double_large_graphic_pane_g3_cp2

0x3046,	// (0x000608d7) list_double_large_graphic_pane_g4_cp

0x304e,	// (0x000608df) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x304e,	// (0x000608df) list_double_large_graphic_pane_t1_cp2

0x3065,	// (0x000608f6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3065,	// (0x000608f6) list_double_large_graphic_pane_t2_cp2

0xc26d,	// (0x00069afe) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc26d,	// (0x00069afe) list_double2_graphic_pane_g1_cp2

0xc27b,	// (0x00069b0c) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc27b,	// (0x00069b0c) list_double2_graphic_pane_g2_cp2

0xc28c,	// (0x00069b1d) list_double2_graphic_pane_g3_cp2

0xc296,	// (0x00069b27) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc296,	// (0x00069b27) list_double2_graphic_pane_t1_cp2

0xc2ac,	// (0x00069b3d) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc2ac,	// (0x00069b3d) list_double2_graphic_pane_t2_cp2

0xc2be,	// (0x00069b4f) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc2be,	// (0x00069b4f) list_single_number_heading_pane_g1_cp2

0xc2ca,	// (0x00069b5b) list_single_number_heading_pane_g2_cp2

0xc2d2,	// (0x00069b63) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc2d2,	// (0x00069b63) list_single_number_heading_pane_t1_cp2

0xc2e8,	// (0x00069b79) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc2e8,	// (0x00069b79) list_single_number_heading_pane_t2_cp2

0xc2fa,	// (0x00069b8b) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc2fa,	// (0x00069b8b) list_single_number_heading_pane_t3_cp2

0xc2be,	// (0x00069b4f) list_single_heading_pane_g1_cp2_ParamLimits

0xc2be,	// (0x00069b4f) list_single_heading_pane_g1_cp2

0xc2ca,	// (0x00069b5b) list_single_heading_pane_g2_cp2

0xc2d2,	// (0x00069b63) list_single_heading_pane_t1_cp2_ParamLimits

0xc2d2,	// (0x00069b63) list_single_heading_pane_t1_cp2

0x2e2e,	// (0x000606bf) list_single_heading_pane_t2_cp2_ParamLimits

0x2e2e,	// (0x000606bf) list_single_heading_pane_t2_cp2

0x2d76,	// (0x00060607) list_double_graphic_pane_g1_cp2_ParamLimits

0x2d76,	// (0x00060607) list_double_graphic_pane_g1_cp2

0x2d82,	// (0x00060613) list_double_graphic_pane_g2_cp2_ParamLimits

0x2d82,	// (0x00060613) list_double_graphic_pane_g2_cp2

0x2d91,	// (0x00060622) list_double_graphic_pane_g3_cp2

0x2d99,	// (0x0006062a) list_double_graphic_pane_t1_cp2_ParamLimits

0x2d99,	// (0x0006062a) list_double_graphic_pane_t1_cp2

0x2daf,	// (0x00060640) list_double_graphic_pane_t2_cp2_ParamLimits

0x2daf,	// (0x00060640) list_double_graphic_pane_t2_cp2

0xc36f,	// (0x00069c00) list_double_number_pane_g1_cp2_ParamLimits

0xc36f,	// (0x00069c00) list_double_number_pane_g1_cp2

0xc37b,	// (0x00069c0c) list_double_number_pane_g2_cp2

0x2d3a,	// (0x000605cb) list_double_number_pane_t1_cp2_ParamLimits

0x2d3a,	// (0x000605cb) list_double_number_pane_t1_cp2

0x2d4e,	// (0x000605df) list_double_number_pane_t2_cp2_ParamLimits

0x2d4e,	// (0x000605df) list_double_number_pane_t2_cp2

0x2d64,	// (0x000605f5) list_double_number_pane_t3_cp2_ParamLimits

0x2d64,	// (0x000605f5) list_double_number_pane_t3_cp2

0x2c23,	// (0x000604b4) list_single_graphic_pane_g1_cp2_ParamLimits

0x2c23,	// (0x000604b4) list_single_graphic_pane_g1_cp2

0xbed8,	// (0x00069769) list_single_graphic_pane_g2_cp2_ParamLimits

0xbed8,	// (0x00069769) list_single_graphic_pane_g2_cp2

0xc3d8,	// (0x00069c69) list_single_graphic_pane_g3_cp2

0x2bf9,	// (0x0006048a) list_single_graphic_pane_t1_cp2_ParamLimits

0x2bf9,	// (0x0006048a) list_single_graphic_pane_t1_cp2

0xbed8,	// (0x00069769) list_single_number_pane_g1_cp2_ParamLimits

0xbed8,	// (0x00069769) list_single_number_pane_g1_cp2

0xc3d8,	// (0x00069c69) list_single_number_pane_g2_cp2

0x2bf9,	// (0x0006048a) list_single_number_pane_t1_cp2_ParamLimits

0x2bf9,	// (0x0006048a) list_single_number_pane_t1_cp2

0x2c0f,	// (0x000604a0) list_single_number_pane_t2_cp2_ParamLimits

0x2c0f,	// (0x000604a0) list_single_number_pane_t2_cp2

0xc214,	// (0x00069aa5) list_double2_pane_g1_cp2_ParamLimits

0xc214,	// (0x00069aa5) list_double2_pane_g1_cp2

0xc225,	// (0x00069ab6) list_double2_pane_g2_cp2

0xc347,	// (0x00069bd8) list_double2_pane_t1_cp2_ParamLimits

0xc347,	// (0x00069bd8) list_double2_pane_t1_cp2

0xc35d,	// (0x00069bee) list_double2_pane_t2_cp2_ParamLimits

0xc35d,	// (0x00069bee) list_double2_pane_t2_cp2

0xc36f,	// (0x00069c00) list_double_pane_g1_cp2_ParamLimits

0xc36f,	// (0x00069c00) list_double_pane_g1_cp2

0xc37b,	// (0x00069c0c) list_double_pane_g2_cp2

0xc383,	// (0x00069c14) list_double_pane_t1_cp2_ParamLimits

0xc383,	// (0x00069c14) list_double_pane_t1_cp2

0xc399,	// (0x00069c2a) list_double_pane_t2_cp2_ParamLimits

0xc399,	// (0x00069c2a) list_double_pane_t2_cp2

0xa218,	// (0x00067aa9) list_single_pane_cp2_g3

0xbed8,	// (0x00069769) list_single_pane_g1_cp2_ParamLimits

0xbed8,	// (0x00069769) list_single_pane_g1_cp2

0xc3d8,	// (0x00069c69) list_single_pane_g2_cp2

0xc3e0,	// (0x00069c71) list_single_pane_t1_cp2_ParamLimits

0xc3e0,	// (0x00069c71) list_single_pane_t1_cp2

0xa220,	// (0x00067ab1) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa220,	// (0x00067ab1) list_single_large_graphic_pane_g1_cp2

0xc3f8,	// (0x00069c89) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc3f8,	// (0x00069c89) list_single_large_graphic_pane_g2_cp2

0xc404,	// (0x00069c95) list_single_large_graphic_pane_g3_cp2

0xa22c,	// (0x00067abd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa22c,	// (0x00067abd) list_single_large_graphic_pane_g4_cp1

0xc40c,	// (0x00069c9d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc40c,	// (0x00069c9d) list_single_large_graphic_pane_t1_cp2

0x2bc5,	// (0x00060456) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2bc5,	// (0x00060456) list_single_graphic_heading_pane_g1_cp2

0x2b92,	// (0x00060423) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2b92,	// (0x00060423) list_single_graphic_heading_pane_g4_cp2

0xc3d8,	// (0x00069c69) list_single_graphic_heading_pane_g5_cp2

0x2bd1,	// (0x00060462) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2bd1,	// (0x00060462) list_single_graphic_heading_pane_t1_cp2

0x2be7,	// (0x00060478) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2be7,	// (0x00060478) list_single_graphic_heading_pane_t2_cp2

0x2b86,	// (0x00060417) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2b86,	// (0x00060417) list_single_2graphic_pane_g1_cp2

0x2b92,	// (0x00060423) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2b92,	// (0x00060423) list_single_2graphic_pane_g2_cp2

0xc3d8,	// (0x00069c69) list_single_2graphic_pane_g3_cp2

0x2ba3,	// (0x00060434) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2ba3,	// (0x00060434) list_single_2graphic_pane_g4_cp2

0x2baf,	// (0x00060440) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2baf,	// (0x00060440) list_single_2graphic_pane_t1_cp2

0x709f,	// (0x00064930) list_highlight_pane_g10_cp1

0x276e,	// (0x0005ffff) list_highlight_pane_g1_cp1

0x2776,	// (0x00060007) list_highlight_pane_g2_cp1

0x277e,	// (0x0006000f) list_highlight_pane_g3_cp1

0x2786,	// (0x00060017) list_highlight_pane_g4_cp1

0x278e,	// (0x0006001f) list_highlight_pane_g5_cp1

0x2796,	// (0x00060027) list_highlight_pane_g6_cp1

0x279e,	// (0x0006002f) list_highlight_pane_g7_cp1

0x27a6,	// (0x00060037) list_highlight_pane_g8_cp1

0x27ae,	// (0x0006003f) list_highlight_pane_g9_cp1

0xc6fd,	// (0x00069f8e) form_field_slider_pane_t3

0xc70b,	// (0x00069f9c) form_field_slider_pane_t4

0x26b2,	// (0x0005ff43) slider_form_pane_ParamLimits

0x26b2,	// (0x0005ff43) slider_form_pane

0x70a9,	// (0x0006493a) control_abbreviations

0x70a9,	// (0x0006493a) control_conventions

0x70a9,	// (0x0006493a) control_definitions

0x70a9,	// (0x0006493a) format_table_attribute

0xc93f,	// (0x0006a1d0) bg_popup_preview_window_pane_g9

0x70a9,	// (0x0006493a) format_table_data2

0x70a9,	// (0x0006493a) format_table_data3

0x70a9,	// (0x0006493a) format_table_data_example

0x0008,

0x70a9,	// (0x0006493a) intro_purpose

0xf8be,	// (0x0006d14f) bg_popup_preview_window_pane_g

0x70a9,	// (0x0006493a) texts_category

0x70a9,	// (0x0006493a) texts_graphics

0xc422,	// (0x00069cb3) text_digital

0xc431,	// (0x00069cc2) text_primary

0xc440,	// (0x00069cd1) text_primary_small

0xc44f,	// (0x00069ce0) text_secondary

0xc45e,	// (0x00069cef) text_title

0xcca6,	// (0x0006a537) bg_passive_tab_pane_g1_cp3_srt

0xa178,	// (0x00067a09) bg_passive_tab_pane_g2_cp3_srt

0xccaf,	// (0x0006a540) bg_passive_tab_pane_g3_cp3_srt

0x7221,	// (0x00064ab2) bg_active_tab_pane_cp3_srt_ParamLimits

0x7221,	// (0x00064ab2) bg_active_tab_pane_cp3_srt

0xccb8,	// (0x0006a549) tabs_4_active_pane_srt_g1

0xccc0,	// (0x0006a551) tabs_4_active_pane_srt_t1_ParamLimits

0xccc0,	// (0x0006a551) tabs_4_active_pane_srt_t1

0xcca6,	// (0x0006a537) bg_active_tab_pane_g1_cp3_copy1

0xa178,	// (0x00067a09) bg_active_tab_pane_g2_cp3_copy1

0xccaf,	// (0x0006a540) bg_active_tab_pane_g3_cp3_copy1

0x70f7,	// (0x00064988) tabs_2_long_active_pane_srt_ParamLimits

0x70f7,	// (0x00064988) tabs_2_long_active_pane_srt

0x70f7,	// (0x00064988) tabs_2_long_passive_pane_srt_ParamLimits

0x70f7,	// (0x00064988) tabs_2_long_passive_pane_srt

0x83d7,	// (0x00065c68) bg_passive_tab_pane_cp4_srt_ParamLimits

0x83d7,	// (0x00065c68) bg_passive_tab_pane_cp4_srt

0xca57,	// (0x0006a2e8) bg_passive_tab_pane_g1_cp4_srt

0xa178,	// (0x00067a09) bg_passive_tab_pane_g2_cp4_srt

0xca60,	// (0x0006a2f1) bg_passive_tab_pane_g3_cp4_srt

0x70f7,	// (0x00064988) bg_active_tab_pane_cp4_srt_ParamLimits

0x70f7,	// (0x00064988) bg_active_tab_pane_cp4_srt

0xca69,	// (0x0006a2fa) tabs_2_long_active_pane_srt_t1_ParamLimits

0xca69,	// (0x0006a2fa) tabs_2_long_active_pane_srt_t1

0xca57,	// (0x0006a2e8) bg_active_tab_pane_g1_cp4_srt

0xa178,	// (0x00067a09) bg_active_tab_pane_g2_cp4_srt

0xca60,	// (0x0006a2f1) bg_active_tab_pane_g3_cp4_srt

0x7221,	// (0x00064ab2) tabs_3_long_active_pane_srt_ParamLimits

0x7221,	// (0x00064ab2) tabs_3_long_active_pane_srt

0x7221,	// (0x00064ab2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7221,	// (0x00064ab2) tabs_3_long_passive_pane_cp_srt

0x7221,	// (0x00064ab2) tabs_3_long_passive_pane_srt_ParamLimits

0x7221,	// (0x00064ab2) tabs_3_long_passive_pane_srt

0x83d7,	// (0x00065c68) bg_passive_tab_pane_cp5_srt_ParamLimits

0x83d7,	// (0x00065c68) bg_passive_tab_pane_cp5_srt

0xa1c4,	// (0x00067a55) bg_passive_tab_pane_g1_cp5_srt

0xa178,	// (0x00067a09) bg_passive_tab_pane_g2_cp5_srt

0xa1cd,	// (0x00067a5e) bg_passive_tab_pane_g3_cp5_srt

0x70f7,	// (0x00064988) bg_active_tab_pane_cp5_srt_ParamLimits

0x70f7,	// (0x00064988) bg_active_tab_pane_cp5_srt

0xca41,	// (0x0006a2d2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xca41,	// (0x0006a2d2) tabs_3_long_active_pane_srt_t1

0xa1c4,	// (0x00067a55) bg_active_tab_pane_g1_cp5_srt

0xa178,	// (0x00067a09) bg_active_tab_pane_g2_cp5_srt

0xa1cd,	// (0x00067a5e) bg_active_tab_pane_g3_cp5_srt

0x3269,	// (0x00060afa) navi_text_pane_srt_t1

0x3261,	// (0x00060af2) navi_icon_pane_srt_g1

0xc549,	// (0x00069dda) midp_editing_number_pane_srt

0xc46d,	// (0x00069cfe) midp_ticker_pane_srt

0xc551,	// (0x00069de2) midp_ticker_pane_srt_g1

0xc559,	// (0x00069dea) midp_ticker_pane_srt_g2

0x0001,

0xf746,	// (0x0006cfd7) midp_ticker_pane_srt_g

0xc561,	// (0x00069df2) midp_ticker_pane_srt_t1

0x3252,	// (0x00060ae3) midp_editing_number_pane_t1_copy1

0xa246,	// (0x00067ad7) listscroll_midp_pane

0xa246,	// (0x00067ad7) midp_form_pane

0xa2b1,	// (0x00067b42) midp_info_popup_window_ParamLimits

0xa2b1,	// (0x00067b42) midp_info_popup_window

0x810f,	// (0x000659a0) bg_popup_sub_pane_cp50_ParamLimits

0x810f,	// (0x000659a0) bg_popup_sub_pane_cp50

0x23a2,	// (0x0005fc33) listscroll_midp_info_pane_ParamLimits

0x23a2,	// (0x0005fc33) listscroll_midp_info_pane

0x2382,	// (0x0005fc13) listscroll_form_midp_pane_ParamLimits

0x2382,	// (0x0005fc13) listscroll_form_midp_pane

0x238e,	// (0x0005fc1f) scroll_bar_cp050

0x2382,	// (0x0005fc13) list_midp_pane

0xce4e,	// (0x0006a6df) signal_pane_g2_cp

0x229c,	// (0x0005fb2d) listscroll_midp_info_pane_t1_ParamLimits

0x229c,	// (0x0005fb2d) listscroll_midp_info_pane_t1

0xb2d1,	// (0x00068b62) listscroll_midp_info_pane_t2_ParamLimits

0xb2d1,	// (0x00068b62) listscroll_midp_info_pane_t2

0xb30f,	// (0x00068ba0) listscroll_midp_info_pane_t3_ParamLimits

0xb30f,	// (0x00068ba0) listscroll_midp_info_pane_t3

0xb349,	// (0x00068bda) listscroll_midp_info_pane_t4_ParamLimits

0xb349,	// (0x00068bda) listscroll_midp_info_pane_t4

0x0003,

0xf7f9,	// (0x0006d08a) listscroll_midp_info_pane_t_ParamLimits

0xf7f9,	// (0x0006d08a) listscroll_midp_info_pane_t

0x8164,	// (0x000659f5) scroll_pane_cp21

0x223c,	// (0x0005facd) form_midp_field_choice_group_pane

0xb294,	// (0x00068b25) form_midp_field_text_pane

0x2282,	// (0x0005fb13) form_midp_field_time_pane

0x228a,	// (0x0005fb1b) form_midp_gauge_slider_pane

0x2293,	// (0x0005fb24) form_midp_gauge_wait_pane

0x70a9,	// (0x0006493a) form_midp_image_pane

0xb27e,	// (0x00068b0f) list_single_midp_pane_ParamLimits

0xb27e,	// (0x00068b0f) list_single_midp_pane

0xb25c,	// (0x00068aed) form_midp_field_text_pane_t1

0x1fbb,	// (0x0005f84c) input_focus_pane_cp050

0x222b,	// (0x0005fabc) list_midp_form_text_pane

0x21c0,	// (0x0005fa51) form_midp_field_choice_group_pane_t1

0x21ce,	// (0x0005fa5f) input_focus_pane_cp051

0x21e2,	// (0x0005fa73) list_midp_choice_pane

0x70a9,	// (0x0006493a) status_idle_pane

0x21a4,	// (0x0005fa35) form_midp_field_time_pane_t1

0x709f,	// (0x00064930) wait_anim_pane_g2_copy1

0x21b2,	// (0x0005fa43) form_midp_field_time_pane_t2

0x0001,

0xc4cd,	// (0x00069d5e) aid_navinavi_width_2_pane

0xf7f4,	// (0x0006d085) form_midp_field_time_pane_t

0x70a9,	// (0x0006493a) input_focus_pane_cp052

0x70a9,	// (0x0006493a) bg_input_focus_pane_cp040

0x2164,	// (0x0005f9f5) form_midp_gauge_slider_pane_t1

0x2172,	// (0x0005fa03) form_midp_gauge_slider_pane_t2

0xb240,	// (0x00068ad1) form_midp_gauge_slider_pane_t3

0xb24e,	// (0x00068adf) form_midp_gauge_slider_pane_t4

0x0003,

0xf7eb,	// (0x0006d07c) form_midp_gauge_slider_pane_t

0x219c,	// (0x0005fa2d) form_midp_slider_pane

0x70f7,	// (0x00064988) bg_input_focus_pane_cp041_ParamLimits

0x70f7,	// (0x00064988) bg_input_focus_pane_cp041

0x2131,	// (0x0005f9c2) form_midp_gauge_wait_pane_t1_ParamLimits

0x2131,	// (0x0005f9c2) form_midp_gauge_wait_pane_t1

0x2143,	// (0x0005f9d4) form_midp_gauge_wait_pane_t2_ParamLimits

0x2143,	// (0x0005f9d4) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e6,	// (0x0006d077) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e6,	// (0x0006d077) form_midp_gauge_wait_pane_t

0x2155,	// (0x0005f9e6) form_midp_wait_pane_ParamLimits

0x2155,	// (0x0005f9e6) form_midp_wait_pane

0xb20a,	// (0x00068a9b) form_midp_image_pane_g1

0xb213,	// (0x00068aa4) form_midp_image_pane_t1

0xb222,	// (0x00068ab3) form_midp_image_pane_t2

0xb231,	// (0x00068ac2) form_midp_image_pane_t3

0x0002,

0xf7df,	// (0x0006d070) form_midp_image_pane_t

0x20f2,	// (0x0005f983) list_single_midp_pane_g1

0xeba5,	// (0x0006c436) list_single_midp_pane_t1

0xb1f5,	// (0x00068a86) list_midp_form_item_pane_ParamLimits

0xb1f5,	// (0x00068a86) list_midp_form_item_pane

0xc475,	// (0x00069d06) list_midp_form_item_pane_t1

0xc484,	// (0x00069d15) midp_ticker_pane_g1

0xc490,	// (0x00069d21) midp_ticker_pane_g2

0x0001,

0xf72c,	// (0x0006cfbd) midp_ticker_pane_g

0xc49c,	// (0x00069d2d) midp_ticker_pane_t1

0x349f,	// (0x00060d30) midp_editing_number_pane_t1

0x347d,	// (0x00060d0e) midp_editing_number_pane

0x348c,	// (0x00060d1d) midp_ticker_pane

0x23ae,	// (0x0005fc3f) ai_message_heading_pane

0x70a9,	// (0x0006493a) bg_popup_window_pane_cp14

0x23b6,	// (0x0005fc47) listscroll_ai_message_pane

0x31dc,	// (0x00060a6d) ai_message_heading_pane_g1_ParamLimits

0x31dc,	// (0x00060a6d) ai_message_heading_pane_g1

0xca09,	// (0x0006a29a) ai_message_heading_pane_g2_ParamLimits

0xca09,	// (0x0006a29a) ai_message_heading_pane_g2

0x31f4,	// (0x00060a85) ai_message_heading_pane_g3_ParamLimits

0x31f4,	// (0x00060a85) ai_message_heading_pane_g3

0x3200,	// (0x00060a91) ai_message_heading_pane_g4_ParamLimits

0x3200,	// (0x00060a91) ai_message_heading_pane_g4

0x0003,

0xf920,	// (0x0006d1b1) ai_message_heading_pane_g_ParamLimits

0xf920,	// (0x0006d1b1) ai_message_heading_pane_g

0xca15,	// (0x0006a2a6) ai_message_heading_pane_t1_ParamLimits

0xca15,	// (0x0006a2a6) ai_message_heading_pane_t1

0xca2f,	// (0x0006a2c0) ai_message_heading_pane_t2_ParamLimits

0xca2f,	// (0x0006a2c0) ai_message_heading_pane_t2

0x0001,

0xf929,	// (0x0006d1ba) ai_message_heading_pane_t_ParamLimits

0xf929,	// (0x0006d1ba) ai_message_heading_pane_t

0x3238,	// (0x00060ac9) bg_popup_heading_pane_cp1_ParamLimits

0x3238,	// (0x00060ac9) bg_popup_heading_pane_cp1

0x31ca,	// (0x00060a5b) list_ai_message_pane_ParamLimits

0x31ca,	// (0x00060a5b) list_ai_message_pane

0x8164,	// (0x000659f5) scroll_pane_cp10

0x3166,	// (0x000609f7) list_ai_message_pane_g1

0x316e,	// (0x000609ff) list_ai_message_pane_g2

0x0001,

0xf8fd,	// (0x0006d18e) list_ai_message_pane_g

0x3176,	// (0x00060a07) list_ai_message_pane_t1_ParamLimits

0x3176,	// (0x00060a07) list_ai_message_pane_t1

0x318b,	// (0x00060a1c) list_ai_message_pane_t2_ParamLimits

0x318b,	// (0x00060a1c) list_ai_message_pane_t2

0x31a0,	// (0x00060a31) list_ai_message_pane_t3_ParamLimits

0x31a0,	// (0x00060a31) list_ai_message_pane_t3

0x31b5,	// (0x00060a46) list_ai_message_pane_t4_ParamLimits

0x31b5,	// (0x00060a46) list_ai_message_pane_t4

0x0003,

0xf902,	// (0x0006d193) list_ai_message_pane_t_ParamLimits

0xf902,	// (0x0006d193) list_ai_message_pane_t

0xc9e5,	// (0x0006a276) cell_ai_soft_ind_pane_ParamLimits

0xc9e5,	// (0x0006a276) cell_ai_soft_ind_pane

0xc4ae,	// (0x00069d3f) cell_ai_soft_ind_pane_g1_ParamLimits

0xc4ae,	// (0x00069d3f) cell_ai_soft_ind_pane_g1

0x70a9,	// (0x0006493a) grid_highlight_cp1

0xc4bb,	// (0x00069d4c) text_secondary_cp56_ParamLimits

0xc4bb,	// (0x00069d4c) text_secondary_cp56

0x3126,	// (0x000609b7) example_general_pane_ParamLimits

0x3126,	// (0x000609b7) example_general_pane

0x3132,	// (0x000609c3) example_parent_pane_g1_ParamLimits

0x3132,	// (0x000609c3) example_parent_pane_g1

0x313e,	// (0x000609cf) example_parent_pane_t1_ParamLimits

0x313e,	// (0x000609cf) example_parent_pane_t1

0xa97b,	// (0x0006820c) popup_preview_text_window_ParamLimits

0xa97b,	// (0x0006820c) popup_preview_text_window

0xc3d0,	// (0x00069c61) list_single_pane_cp2_g4

0x72d7,	// (0x00064b68) bg_popup_preview_window_pane_ParamLimits

0x72d7,	// (0x00064b68) bg_popup_preview_window_pane

0xc947,	// (0x0006a1d8) popup_preview_text_window_t1_ParamLimits

0xc947,	// (0x0006a1d8) popup_preview_text_window_t1

0x2e9e,	// (0x0006072f) popup_preview_text_window_t2_ParamLimits

0x2e9e,	// (0x0006072f) popup_preview_text_window_t2

0x2ee7,	// (0x00060778) popup_preview_text_window_t3_ParamLimits

0x2ee7,	// (0x00060778) popup_preview_text_window_t3

0x2f2c,	// (0x000607bd) popup_preview_text_window_t4_ParamLimits

0x2f2c,	// (0x000607bd) popup_preview_text_window_t4

0x0004,

0xf8d1,	// (0x0006d162) popup_preview_text_window_t_ParamLimits

0xf8d1,	// (0x0006d162) popup_preview_text_window_t

0x2faa,	// (0x0006083b) scroll_pane_cp11

0x1f2f,	// (0x0005f7c0) bg_popup_preview_window_pane_g1

0xc907,	// (0x0006a198) bg_popup_preview_window_pane_g2

0xc90f,	// (0x0006a1a0) bg_popup_preview_window_pane_g3

0xc917,	// (0x0006a1a8) bg_popup_preview_window_pane_g4

0xc91f,	// (0x0006a1b0) bg_popup_preview_window_pane_g5

0xc927,	// (0x0006a1b8) bg_popup_preview_window_pane_g6

0xc92f,	// (0x0006a1c0) bg_popup_preview_window_pane_g7

0xc937,	// (0x0006a1c8) bg_popup_preview_window_pane_g8

0xe821,	// (0x0006c0b2) aid_popup_width_pane

0xa8f7,	// (0x00068188) popup_midp_note_alarm_window_ParamLimits

0xa8f7,	// (0x00068188) popup_midp_note_alarm_window

0x8026,	// (0x000658b7) data_form_pane_ParamLimits

0x9c3e,	// (0x000674cf) form_field_data_pane_g1

0x9c48,	// (0x000674d9) form_field_data_pane_t1_ParamLimits

0x8032,	// (0x000658c3) input_focus_pane_ParamLimits

0xbf4d,	// (0x000697de) data_form_wide_pane_ParamLimits

0xbf5e,	// (0x000697ef) form_field_data_wide_pane_g1

0xe898,	// (0x0006c129) form_field_data_wide_pane_t1_ParamLimits

0x73af,	// (0x00064c40) input_focus_pane_cp6_ParamLimits

0x9dba,	// (0x0006764b) input_popup_find_pane_g1_ParamLimits

0x9dba,	// (0x0006764b) input_popup_find_pane_g1

0xe9e7,	// (0x0006c278) aid_navi_side_left_pane

0xe9fc,	// (0x0006c28d) aid_navi_side_right_pane

0x2869,	// (0x000600fa) bg_popup_window_pane_cp30_ParamLimits

0x2869,	// (0x000600fa) bg_popup_window_pane_cp30

0x28e3,	// (0x00060174) popup_midp_note_alarm_window_g1_ParamLimits

0x28e3,	// (0x00060174) popup_midp_note_alarm_window_g1

0x2913,	// (0x000601a4) popup_midp_note_alarm_window_t1_ParamLimits

0x2913,	// (0x000601a4) popup_midp_note_alarm_window_t1

0xc750,	// (0x00069fe1) popup_midp_note_alarm_window_t2_ParamLimits

0xc750,	// (0x00069fe1) popup_midp_note_alarm_window_t2

0xc7fe,	// (0x0006a08f) popup_midp_note_alarm_window_t3_ParamLimits

0xc7fe,	// (0x0006a08f) popup_midp_note_alarm_window_t3

0xc826,	// (0x0006a0b7) popup_midp_note_alarm_window_t4_ParamLimits

0xc826,	// (0x0006a0b7) popup_midp_note_alarm_window_t4

0x2aaa,	// (0x0006033b) popup_midp_note_alarm_window_t5_ParamLimits

0x2aaa,	// (0x0006033b) popup_midp_note_alarm_window_t5

0x000a,

0xf86e,	// (0x0006d0ff) popup_midp_note_alarm_window_t_ParamLimits

0xf86e,	// (0x0006d0ff) popup_midp_note_alarm_window_t

0x2b56,	// (0x000603e7) wait_bar_pane_cp1_ParamLimits

0x2b56,	// (0x000603e7) wait_bar_pane_cp1

0x70a9,	// (0x0006493a) wait_anim_pane_copy1

0x70a9,	// (0x0006493a) wait_border_pane_copy1

0x255f,	// (0x0005fdf0) wait_border_pane_g1_copy1

0xe8b2,	// (0x0006c143) form_field_popup_pane_g1

0x9c62,	// (0x000674f3) form_field_popup_pane_t1_ParamLimits

0x8032,	// (0x000658c3) input_focus_pane_cp7_ParamLimits

0x8060,	// (0x000658f1) list_form_pane_ParamLimits

0xe8ba,	// (0x0006c14b) form_field_popup_wide_pane_g1

0xe8c2,	// (0x0006c153) form_field_popup_wide_pane_t1_ParamLimits

0x8032,	// (0x000658c3) input_focus_pane_cp8_ParamLimits

0x806c,	// (0x000658fd) list_form_wide_pane_ParamLimits

0x368c,	// (0x00060f1d) aid_size_cell_graphic_pane

0x9ce1,	// (0x00067572) data_form_pane_t1_ParamLimits

0xb491,	// (0x00068d22) data_form_wide_pane_t1_ParamLimits

0xadbe,	// (0x0006864f) bg_status_flat_pane

0x91b6,	// (0x00066a47) title_pane_t1_ParamLimits

0x70bf,	// (0x00064950) title_pane_t2_ParamLimits

0x70e5,	// (0x00064976) title_pane_t3_ParamLimits

0xf530,	// (0x0006cdc1) title_pane_t_ParamLimits

0xbfa0,	// (0x00069831) level_1_signal_ParamLimits

0xbfad,	// (0x0006983e) level_2_signal_ParamLimits

0xbfba,	// (0x0006984b) level_3_signal_ParamLimits

0xbfc7,	// (0x00069858) level_4_signal_ParamLimits

0xbfd4,	// (0x00069865) level_5_signal_ParamLimits

0xbfe1,	// (0x00069872) level_6_signal_ParamLimits

0xbfee,	// (0x0006987f) level_7_signal_ParamLimits

0xbfa0,	// (0x00069831) level_1_battery_ParamLimits

0xbfad,	// (0x0006983e) level_2_battery_ParamLimits

0xbfba,	// (0x0006984b) level_3_battery_ParamLimits

0xbfc7,	// (0x00069858) level_4_battery_ParamLimits

0xbfd4,	// (0x00069865) level_5_battery_ParamLimits

0xbfe1,	// (0x00069872) level_6_battery_ParamLimits

0xbfee,	// (0x0006987f) level_7_battery_ParamLimits

0x276e,	// (0x0005ffff) bg_status_flat_pane_g1

0x2776,	// (0x00060007) bg_status_flat_pane_g2

0x277e,	// (0x0006000f) bg_status_flat_pane_g3

0x2786,	// (0x00060017) bg_status_flat_pane_g4

0x278e,	// (0x0006001f) bg_status_flat_pane_g5

0x2796,	// (0x00060027) bg_status_flat_pane_g6

0x279e,	// (0x0006002f) bg_status_flat_pane_g7

0x924a,	// (0x00066adb) tabs_3_active_pane_t1_ParamLimits

0x924a,	// (0x00066adb) tabs_3_passive_pane_t1_ParamLimits

0x9264,	// (0x00066af5) tabs_4_active_pane_t1_ParamLimits

0x9264,	// (0x00066af5) tabs_4_1_passive_pane_t1_ParamLimits

0x9df9,	// (0x0006768a) tabs_2_active_pane_t1_ParamLimits

0x9df9,	// (0x0006768a) tabs_2_passive_pane_t1_ParamLimits

0x70f7,	// (0x00064988) bg_active_tab_pane_cp4_ParamLimits

0x9e0b,	// (0x0006769c) tabs_2_long_active_pane_t1_ParamLimits

0x83d7,	// (0x00065c68) bg_passive_tab_pane_cp4_ParamLimits

0x058a,	// (0x0005de1b) list_single_midp_graphic_pane_t1_ParamLimits

0x70f7,	// (0x00064988) bg_active_tab_pane_cp5_ParamLimits

0x9e1e,	// (0x000676af) tabs_3_long_active_pane_t1_ParamLimits

0x83d7,	// (0x00065c68) bg_passive_tab_pane_cp5_ParamLimits

0x058a,	// (0x0005de1b) list_single_midp_graphic_pane_t1

0xadbe,	// (0x0006864f) bg_status_flat_pane_ParamLimits

0x0352,	// (0x0005dbe3) indicator_pane_cp2_ParamLimits

0x0352,	// (0x0005dbe3) indicator_pane_cp2

0xaf3c,	// (0x000687cd) navi_pane_srt_ParamLimits

0xaf3c,	// (0x000687cd) navi_pane_srt

0x04a1,	// (0x0005dd32) popup_clock_digital_analogue_window_cp1

0x713b,	// (0x000649cc) indicator_pane_t1

0xc46d,	// (0x00069cfe) copy_highlight_pane

0xc46d,	// (0x00069cfe) cursor_graphics_pane

0xc46d,	// (0x00069cfe) graphic_within_text_pane

0xc46d,	// (0x00069cfe) link_highlight_pane

0x2f6d,	// (0x000607fe) popup_preview_text_window_t5_ParamLimits

0x2f6d,	// (0x000607fe) popup_preview_text_window_t5

0xc4d5,	// (0x00069d66) cursor_digital_pane

0xc4d5,	// (0x00069d66) cursor_primary_pane

0xc4e6,	// (0x00069d77) cursor_primary_small_pane

0xc4ee,	// (0x00069d7f) cursor_secondary_pane

0xc4f6,	// (0x00069d87) cursor_title_pane

0xc4d5,	// (0x00069d66) link_highlight_digital_pane

0xc4dd,	// (0x00069d6e) link_highlight_primary_pane

0xc4e6,	// (0x00069d77) link_highlight_primary_small_pane

0xc4ee,	// (0x00069d7f) link_highlight_secondary_pane

0xc4f6,	// (0x00069d87) link_highlight_title_pane

0xc4d5,	// (0x00069d66) copy_highlight_digital_pane

0xc4d5,	// (0x00069d66) copy_highlight_primary_pane

0xc4e6,	// (0x00069d77) copy_highlight_primary_small_pane

0xc4ee,	// (0x00069d7f) copy_highlight_secondary_pane

0xc4f6,	// (0x00069d87) copy_highlight_title_pane

0xc4ee,	// (0x00069d7f) graphic_text_digital_pane

0x280c,	// (0x0006009d) graphic_text_primary_pane

0x2815,	// (0x000600a6) graphic_text_primary_small_pane

0xc4e6,	// (0x00069d77) graphic_text_secondary_pane

0xc4d5,	// (0x00069d66) graphic_text_title_pane

0xa302,	// (0x00067b93) cursor_primary_pane_g1

0x27fe,	// (0x0006008f) cursor_text_primary_t1

0xc746,	// (0x00069fd7) cursor_primary_small_pane_g1

0x27f0,	// (0x00060081) cursor_text_primary_small_t1

0xc73c,	// (0x00069fcd) cursor_primary_small_pane_g1_copy1

0x27d8,	// (0x00060069) cursor_text_primary_small_t1_copy1

0x27b6,	// (0x00060047) cursor_text_title_t1

0xc732,	// (0x00069fc3) cursor_title_pane_g1

0xa302,	// (0x00067b93) cursor_digital_pane_g1

0xc4fe,	// (0x00069d8f) cursor_text_digital_t1

0xc50c,	// (0x00069d9d) link_highlight_primary_pane_g1

0x275f,	// (0x0005fff0) link_highlight_primary_pane_t1

0xc50c,	// (0x00069d9d) link_highlight_primary_small_pane_g1

0xc514,	// (0x00069da5) link_highlight_primary_small_pane_t1

0xc50c,	// (0x00069d9d) link_highlight_secondary_pane_g1

0xc523,	// (0x00069db4) link_highlight_secondary_pane_t1

0x26c4,	// (0x0005ff55) link_highlight_title_pane_g1

0x26db,	// (0x0005ff6c) link_highlight_title_pane_t1

0x26c4,	// (0x0005ff55) link_highlight_digital_pane_g1

0x26cc,	// (0x0005ff5d) link_highlight_digital_pane_t1

0x257e,	// (0x0005fe0f) copy_highlight_primary_pane_g1

0x25a4,	// (0x0005fe35) copy_highlight_primary_pane_t1

0x257e,	// (0x0005fe0f) copy_highlight_primary_small_pane_g1

0x2595,	// (0x0005fe26) copy_highlight_primary_small_pane_t1

0xc532,	// (0x00069dc3) copy_highlight_secondary_pane_g1

0xc53a,	// (0x00069dcb) copy_highlight_secondary_pane_t1

0x257e,	// (0x0005fe0f) copy_highlight_title_pane_g1

0x2586,	// (0x0005fe17) copy_highlight_title_pane_t1

0x257e,	// (0x0005fe0f) copy_highlight_digital_pane_g1

0x385a,	// (0x000610eb) copy_highlight_digital_pane_t1

0x37ae,	// (0x0006103f) graphic_text_primary_pane_g1

0x383e,	// (0x000610cf) graphic_text_primary_pane_t1

0x384c,	// (0x000610dd) graphic_text_primary_pane_t2

0x0001,

0xf99d,	// (0x0006d22e) graphic_text_primary_pane_t

0x381a,	// (0x000610ab) graphic_text_primary_small_pane_g1

0x3822,	// (0x000610b3) graphic_text_primary_small_pane_t1

0x3830,	// (0x000610c1) graphic_text_primary_small_pane_t2

0x0001,

0xf998,	// (0x0006d229) graphic_text_primary_small_pane_t

0x37f6,	// (0x00061087) graphic_text_secondary_pane_g1

0x37fe,	// (0x0006108f) graphic_text_secondary_pane_t1

0x380c,	// (0x0006109d) graphic_text_secondary_pane_t2

0x0001,

0xf993,	// (0x0006d224) graphic_text_secondary_pane_t

0x37d2,	// (0x00061063) graphic_text_title_pane_g1

0x37da,	// (0x0006106b) graphic_text_title_pane_t1

0x37e8,	// (0x00061079) graphic_text_title_pane_t2

0x0001,

0xf98e,	// (0x0006d21f) graphic_text_title_pane_t

0x37ae,	// (0x0006103f) graphic_text_digital_pane_g1

0x37b6,	// (0x00061047) graphic_text_digital_pane_t1

0x37c4,	// (0x00061055) graphic_text_digital_pane_t2

0x0001,

0xf989,	// (0x0006d21a) graphic_text_digital_pane_t

0x70f7,	// (0x00064988) navi_icon_pane_srt_ParamLimits

0x70f7,	// (0x00064988) navi_icon_pane_srt

0x70a9,	// (0x0006493a) navi_midp_pane_srt

0x70a9,	// (0x0006493a) navi_navi_pane_srt

0x70f7,	// (0x00064988) navi_text_pane_srt_ParamLimits

0x70f7,	// (0x00064988) navi_text_pane_srt

0x3779,	// (0x0006100a) navi_navi_icon_text_pane_srt

0x3781,	// (0x00061012) navi_navi_pane_srt_g1_ParamLimits

0x3781,	// (0x00061012) navi_navi_pane_srt_g1

0x3793,	// (0x00061024) navi_navi_pane_srt_g2_ParamLimits

0x3793,	// (0x00061024) navi_navi_pane_srt_g2

0x0001,

0xf984,	// (0x0006d215) navi_navi_pane_srt_g_ParamLimits

0xf984,	// (0x0006d215) navi_navi_pane_srt_g

0x37a5,	// (0x00061036) navi_navi_tabs_pane_srt

0x3779,	// (0x0006100a) navi_navi_text_pane_srt

0x3779,	// (0x0006100a) navi_navi_volume_pane_srt

0x376a,	// (0x00060ffb) navi_navi_text_pane_srt_t1

0x09f0,	// (0x0005e281) navi_navi_volume_pane_srt_g1

0x09f8,	// (0x0005e289) volume_small_pane_srt_ParamLimits

0x09f8,	// (0x0005e289) volume_small_pane_srt

0xf3fb,	// (0x0006cc8c) volume_small_pane_srt_g1_ParamLimits

0xf3fb,	// (0x0006cc8c) volume_small_pane_srt_g1

0xf40b,	// (0x0006cc9c) volume_small_pane_srt_g2_ParamLimits

0xf40b,	// (0x0006cc9c) volume_small_pane_srt_g2

0xf41c,	// (0x0006ccad) volume_small_pane_srt_g3_ParamLimits

0xf41c,	// (0x0006ccad) volume_small_pane_srt_g3

0xf42d,	// (0x0006ccbe) volume_small_pane_srt_g4_ParamLimits

0xf42d,	// (0x0006ccbe) volume_small_pane_srt_g4

0xf43e,	// (0x0006cccf) volume_small_pane_srt_g5_ParamLimits

0xf43e,	// (0x0006cccf) volume_small_pane_srt_g5

0xf44f,	// (0x0006cce0) volume_small_pane_srt_g6_ParamLimits

0xf44f,	// (0x0006cce0) volume_small_pane_srt_g6

0xf460,	// (0x0006ccf1) volume_small_pane_srt_g7_ParamLimits

0xf460,	// (0x0006ccf1) volume_small_pane_srt_g7

0xf471,	// (0x0006cd02) volume_small_pane_srt_g8_ParamLimits

0xf471,	// (0x0006cd02) volume_small_pane_srt_g8

0xf482,	// (0x0006cd13) volume_small_pane_srt_g9_ParamLimits

0xf482,	// (0x0006cd13) volume_small_pane_srt_g9

0xf493,	// (0x0006cd24) volume_small_pane_srt_g10_ParamLimits

0xf493,	// (0x0006cd24) volume_small_pane_srt_g10

0x0009,

0xf731,	// (0x0006cfc2) volume_small_pane_srt_g_ParamLimits

0xf731,	// (0x0006cfc2) volume_small_pane_srt_g

0x954b,	// (0x00066ddc) query_popup_data_pane_cp2

0x3750,	// (0x00060fe1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3750,	// (0x00060fe1) navi_navi_icon_text_pane_srt_t1

0x280c,	// (0x0006009d) navi_tabs_2_long_pane_srt

0x280c,	// (0x0006009d) navi_tabs_2_pane_srt

0x280c,	// (0x0006009d) navi_tabs_3_long_pane_srt

0x280c,	// (0x0006009d) navi_tabs_3_pane_srt

0x280c,	// (0x0006009d) navi_tabs_4_pane_srt

0xb516,	// (0x00068da7) tabs_2_active_pane_srt_ParamLimits

0xb516,	// (0x00068da7) tabs_2_active_pane_srt

0xb526,	// (0x00068db7) tabs_2_passive_pane_srt_ParamLimits

0xb526,	// (0x00068db7) tabs_2_passive_pane_srt

0x1fbb,	// (0x0005f84c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1fbb,	// (0x0005f84c) bg_passive_tab_pane_cp1_srt

0xcd4d,	// (0x0006a5de) bg_passive_tab_pane_g1_cp1_srt

0xa178,	// (0x00067a09) bg_passive_tab_pane_g2_cp1_srt

0xcd56,	// (0x0006a5e7) bg_passive_tab_pane_g3_cp1_srt

0x7221,	// (0x00064ab2) bg_active_tab_pane_cp1_srt_ParamLimits

0x7221,	// (0x00064ab2) bg_active_tab_pane_cp1_srt

0xcd5f,	// (0x0006a5f0) tabs_2_active_pane_srt_g1

0xcd67,	// (0x0006a5f8) tabs_2_active_pane_srt_t1_ParamLimits

0xcd67,	// (0x0006a5f8) tabs_2_active_pane_srt_t1

0xcd4d,	// (0x0006a5de) bg_active_tab_pane_g1_cp1_srt

0xa178,	// (0x00067a09) bg_active_tab_pane_g2_cp1_srt

0xcd56,	// (0x0006a5e7) bg_active_tab_pane_g3_cp1_srt

0xb4e3,	// (0x00068d74) tabs_3_active_pane_srt_ParamLimits

0xb4e3,	// (0x00068d74) tabs_3_active_pane_srt

0xb4f4,	// (0x00068d85) tabs_3_passive_pane_cp_srt_ParamLimits

0xb4f4,	// (0x00068d85) tabs_3_passive_pane_cp_srt

0xb505,	// (0x00068d96) tabs_3_passive_pane_srt_ParamLimits

0xb505,	// (0x00068d96) tabs_3_passive_pane_srt

0x1fbb,	// (0x0005f84c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1fbb,	// (0x0005f84c) bg_passive_tab_pane_cp2_srt

0xa30c,	// (0x00067b9d) bg_passive_tab_pane_g1_cp2_srt

0xa178,	// (0x00067a09) bg_passive_tab_pane_g2_cp2_srt

0xa315,	// (0x00067ba6) bg_passive_tab_pane_g3_cp2_srt

0x7221,	// (0x00064ab2) bg_active_tab_pane_cp2_srt_ParamLimits

0x7221,	// (0x00064ab2) bg_active_tab_pane_cp2_srt

0xcd2f,	// (0x0006a5c0) tabs_3_active_pane_srt_g1

0xcd37,	// (0x0006a5c8) tabs_3_active_pane_srt_t1_ParamLimits

0xcd37,	// (0x0006a5c8) tabs_3_active_pane_srt_t1

0xa30c,	// (0x00067b9d) bg_active_tab_pane_g1_cp2_srt

0xa178,	// (0x00067a09) bg_active_tab_pane_g2_cp2_srt

0xa315,	// (0x00067ba6) bg_active_tab_pane_g3_cp2_srt

0x0955,	// (0x0005e1e6) tabs_4_active_pane_srt_ParamLimits

0x0955,	// (0x0005e1e6) tabs_4_active_pane_srt

0x0967,	// (0x0005e1f8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0967,	// (0x0005e1f8) tabs_4_passive_pane_cp2_srt

0xf4b3,	// (0x0006cd44) aid_size_cell_toolbar

0x32fa,	// (0x00060b8b) main_idle_act_pane_ParamLimits

0xf501,	// (0x0006cd92) popup_large_graphic_colour_window_ParamLimits

0xac2d,	// (0x000684be) popup_toolbar_window_ParamLimits

0xac2d,	// (0x000684be) popup_toolbar_window

0x34ca,	// (0x00060d5b) list_single_graphic_2heading_pane_ParamLimits

0x34ca,	// (0x00060d5b) list_single_graphic_2heading_pane

0x82f5,	// (0x00065b86) aid_size_cell_apps_grid_lsc_pane

0x8307,	// (0x00065b98) aid_size_cell_apps_grid_prt_pane

0x83d7,	// (0x00065c68) bg_wml_button_pane_cp1_ParamLimits

0x83d7,	// (0x00065c68) bg_wml_button_pane_cp1

0xb25c,	// (0x00068aed) form_midp_field_text_pane_t1_ParamLimits

0x1fbb,	// (0x0005f84c) input_focus_pane_cp050_ParamLimits

0x222b,	// (0x0005fabc) list_midp_form_text_pane_ParamLimits

0x21ce,	// (0x0005fa5f) input_focus_pane_cp051_ParamLimits

0x21e2,	// (0x0005fa73) list_midp_choice_pane_ParamLimits

0xb1c1,	// (0x00068a52) list_single_2graphic_pane_cp3_ParamLimits

0xb1c1,	// (0x00068a52) list_single_2graphic_pane_cp3

0xb1d5,	// (0x00068a66) list_single_midp_graphic_pane_ParamLimits

0xb1d5,	// (0x00068a66) list_single_midp_graphic_pane

0xea83,	// (0x0006c314) list_single_graphic_2heading_pane_g1_ParamLimits

0xea83,	// (0x0006c314) list_single_graphic_2heading_pane_g1

0xea8f,	// (0x0006c320) list_single_graphic_2heading_pane_g4_ParamLimits

0xea8f,	// (0x0006c320) list_single_graphic_2heading_pane_g4

0xea9b,	// (0x0006c32c) list_single_graphic_2heading_pane_g5_ParamLimits

0xea9b,	// (0x0006c32c) list_single_graphic_2heading_pane_g5

0x0002,

0xf784,	// (0x0006d015) list_single_graphic_2heading_pane_g_ParamLimits

0xf784,	// (0x0006d015) list_single_graphic_2heading_pane_g

0xeaa7,	// (0x0006c338) list_single_graphic_2heading_pane_t1_ParamLimits

0xeaa7,	// (0x0006c338) list_single_graphic_2heading_pane_t1

0xeabb,	// (0x0006c34c) list_single_graphic_2heading_pane_t2_ParamLimits

0xeabb,	// (0x0006c34c) list_single_graphic_2heading_pane_t2

0xead5,	// (0x0006c366) list_single_graphic_2heading_pane_t3_ParamLimits

0xead5,	// (0x0006c366) list_single_graphic_2heading_pane_t3

0x0002,

0xf78b,	// (0x0006d01c) list_single_graphic_2heading_pane_t_ParamLimits

0xf78b,	// (0x0006d01c) list_single_graphic_2heading_pane_t

0x1e6d,	// (0x0005f6fe) bg_popup_sub_pane_cp2

0x1e97,	// (0x0005f728) grid_toobar_pane

0x04ed,	// (0x0005dd7e) cell_toolbar_pane_ParamLimits

0x04ed,	// (0x0005dd7e) cell_toolbar_pane

0x1ed3,	// (0x0005f764) cell_toolbar_pane_g1_ParamLimits

0x1ed3,	// (0x0005f764) cell_toolbar_pane_g1

0xb0d9,	// (0x0006896a) cell_toolbar_pane_g2_ParamLimits

0xb0d9,	// (0x0006896a) cell_toolbar_pane_g2

0x0001,

0xf799,	// (0x0006d02a) cell_toolbar_pane_g_ParamLimits

0xf799,	// (0x0006d02a) cell_toolbar_pane_g

0x1f09,	// (0x0005f79a) grid_highlight_pane_cp2_ParamLimits

0x1f09,	// (0x0005f79a) grid_highlight_pane_cp2

0x1f23,	// (0x0005f7b4) toolbar_button_pane

0x1f2f,	// (0x0005f7c0) toolbar_button_pane_g1

0x1f37,	// (0x0005f7c8) toolbar_button_pane_g2

0x1f3f,	// (0x0005f7d0) toolbar_button_pane_g3

0x1f47,	// (0x0005f7d8) toolbar_button_pane_g4

0x1f4f,	// (0x0005f7e0) toolbar_button_pane_g5

0x1f57,	// (0x0005f7e8) toolbar_button_pane_g6

0x1f5f,	// (0x0005f7f0) toolbar_button_pane_g7

0x1f67,	// (0x0005f7f8) toolbar_button_pane_g8

0x1f6f,	// (0x0005f800) toolbar_button_pane_g9

0x0009,

0xf79e,	// (0x0006d02f) toolbar_button_pane_g

0x0531,	// (0x0005ddc2) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0531,	// (0x0005ddc2) list_single_2graphic_pane_g1_cp3

0xb0ed,	// (0x0006897e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb0ed,	// (0x0006897e) list_single_2graphic_pane_g2_cp3

0x054e,	// (0x0005dddf) list_single_2graphic_pane_g3_cp3

0x0556,	// (0x0005dde7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0556,	// (0x0005dde7) list_single_2graphic_pane_g4_cp3

0xb0fe,	// (0x0006898f) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb0fe,	// (0x0006898f) list_single_2graphic_pane_t1_cp3

0x057e,	// (0x0005de0f) list_single_midp_graphic_pane_g2_ParamLimits

0x057e,	// (0x0005de0f) list_single_midp_graphic_pane_g2

0xea73,	// (0x0006c304) aid_zoom_text_primary

0xf4bb,	// (0x0006cd4c) aid_zoom_text_secondary

0xc5af,	// (0x00069e40) status_small_pane_g7_ParamLimits

0xc5af,	// (0x00069e40) status_small_pane_g7

0xa371,	// (0x00067c02) status_small_pane_t1_ParamLimits

0x9192,	// (0x00066a23) title_pane_g2

0x0003,

0xf527,	// (0x0006cdb8) title_pane_g

0x95a5,	// (0x00066e36) aid_size_cell_colour_1_pane_ParamLimits

0x95a5,	// (0x00066e36) aid_size_cell_colour_1_pane

0x95b9,	// (0x00066e4a) aid_size_cell_colour_2_pane_ParamLimits

0x95b9,	// (0x00066e4a) aid_size_cell_colour_2_pane

0x95cd,	// (0x00066e5e) aid_size_cell_colour_3_pane_ParamLimits

0x95cd,	// (0x00066e5e) aid_size_cell_colour_3_pane

0x95e1,	// (0x00066e72) aid_size_cell_colour_4_pane_ParamLimits

0x95e1,	// (0x00066e72) aid_size_cell_colour_4_pane

0xe924,	// (0x0006c1b5) title_pane_stacon_g1_ParamLimits

0xe924,	// (0x0006c1b5) title_pane_stacon_g1

0x25fb,	// (0x0005fe8c) popup_note_wait_window_g3_ParamLimits

0x25fb,	// (0x0005fe8c) popup_note_wait_window_g3

0x2671,	// (0x0005ff02) popup_note_wait_window_t5_ParamLimits

0x2671,	// (0x0005ff02) popup_note_wait_window_t5

0x70a9,	// (0x0006493a) main_feb_china_hwr_fs_writing_pane

0xa5e1,	// (0x00067e72) popup_feb_china_hwr_fs_window_ParamLimits

0xa5e1,	// (0x00067e72) popup_feb_china_hwr_fs_window

0xb11a,	// (0x000689ab) aid_size_cell_hwr_fs_ParamLimits

0xb11a,	// (0x000689ab) aid_size_cell_hwr_fs

0x1fbb,	// (0x0005f84c) bg_popup_sub_pane_cp3_ParamLimits

0x1fbb,	// (0x0005f84c) bg_popup_sub_pane_cp3

0xb12f,	// (0x000689c0) grid_hwr_fs_pane_ParamLimits

0xb12f,	// (0x000689c0) grid_hwr_fs_pane

0x05cd,	// (0x0005de5e) linegrid_hwr_fs_pane_ParamLimits

0x05cd,	// (0x0005de5e) linegrid_hwr_fs_pane

0xb147,	// (0x000689d8) cell_hwr_fs_pane_ParamLimits

0xb147,	// (0x000689d8) cell_hwr_fs_pane

0x1fc7,	// (0x0005f858) linegrid_hwr_fs_pane_g1_ParamLimits

0x1fc7,	// (0x0005f858) linegrid_hwr_fs_pane_g1

0xb16d,	// (0x000689fe) linegrid_hwr_fs_pane_g2_ParamLimits

0xb16d,	// (0x000689fe) linegrid_hwr_fs_pane_g2

0x1fe5,	// (0x0005f876) linegrid_hwr_fs_pane_g3_ParamLimits

0x1fe5,	// (0x0005f876) linegrid_hwr_fs_pane_g3

0xb17f,	// (0x00068a10) linegrid_hwr_fs_pane_g4_ParamLimits

0xb17f,	// (0x00068a10) linegrid_hwr_fs_pane_g4

0x0619,	// (0x0005deaa) linegrid_hwr_fs_pane_g5_ParamLimits

0x0619,	// (0x0005deaa) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c4,	// (0x0006d055) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c4,	// (0x0006d055) linegrid_hwr_fs_pane_g

0x1ff1,	// (0x0005f882) cell_hwr_fs_pane_g1_ParamLimits

0x1ff1,	// (0x0005f882) cell_hwr_fs_pane_g1

0x1da7,	// (0x0005f638) cell_hwr_fs_pane_g2_ParamLimits

0x1da7,	// (0x0005f638) cell_hwr_fs_pane_g2

0xb199,	// (0x00068a2a) cell_hwr_fs_pane_g3_ParamLimits

0xb199,	// (0x00068a2a) cell_hwr_fs_pane_g3

0xb1a6,	// (0x00068a37) cell_hwr_fs_pane_g4_ParamLimits

0xb1a6,	// (0x00068a37) cell_hwr_fs_pane_g4

0x0003,

0xf7cf,	// (0x0006d060) cell_hwr_fs_pane_g_ParamLimits

0xf7cf,	// (0x0006d060) cell_hwr_fs_pane_g

0xb1b3,	// (0x00068a44) cell_hwr_fs_pane_t1

0x70a9,	// (0x0006493a) grid_highlight_pane_cp6

0x70a9,	// (0x0006493a) main_idle_act2_pane

0x814b,	// (0x000659dc) aid_inside_area_popup_secondary

0xc865,	// (0x0006a0f6) aid_inside_area_window_primary_ParamLimits

0xc865,	// (0x0006a0f6) aid_inside_area_window_primary

0xcd85,	// (0x0006a616) ai2_news_ticker_pane

0x3871,	// (0x00061102) aid_size_cell_ai1_link_ParamLimits

0x3871,	// (0x00061102) aid_size_cell_ai1_link

0xcd8d,	// (0x0006a61e) popup_ai2_data_window_ParamLimits

0xcd8d,	// (0x0006a61e) popup_ai2_data_window

0x38a1,	// (0x00061132) popup_ai2_link_window_ParamLimits

0x38a1,	// (0x00061132) popup_ai2_link_window

0x1fbb,	// (0x0005f84c) bg_popup_sub_pane_cp4_ParamLimits

0x1fbb,	// (0x0005f84c) bg_popup_sub_pane_cp4

0x38b5,	// (0x00061146) grid_ai2_link_pane_ParamLimits

0x38b5,	// (0x00061146) grid_ai2_link_pane

0x38cc,	// (0x0006115d) popup_ai2_link_window_g1_ParamLimits

0x38cc,	// (0x0006115d) popup_ai2_link_window_g1

0x38d8,	// (0x00061169) popup_ai2_link_window_g2_ParamLimits

0x38d8,	// (0x00061169) popup_ai2_link_window_g2

0x0001,

0xf9a2,	// (0x0006d233) popup_ai2_link_window_g_ParamLimits

0xf9a2,	// (0x0006d233) popup_ai2_link_window_g

0x38e7,	// (0x00061178) ai2_mp_button_pane

0x38ef,	// (0x00061180) ai2_mp_volume_pane

0x21ce,	// (0x0005fa5f) bg_popup_sub_pane_cp5_ParamLimits

0x21ce,	// (0x0005fa5f) bg_popup_sub_pane_cp5

0x38f7,	// (0x00061188) heading_ai2_gene_pane_ParamLimits

0x38f7,	// (0x00061188) heading_ai2_gene_pane

0x3903,	// (0x00061194) list_ai2_gene_pane_ParamLimits

0x3903,	// (0x00061194) list_ai2_gene_pane

0x394b,	// (0x000611dc) cell_ai2_link_pane_ParamLimits

0x394b,	// (0x000611dc) cell_ai2_link_pane

0x3961,	// (0x000611f2) cell_ai2_link_pane_g1

0x70a9,	// (0x0006493a) grid_highlight_pane_cp7

0x0a0d,	// (0x0005e29e) ai2_mp_volume_pane_g1

0x3a31,	// (0x000612c2) ai2_mp_volume_pane_g2

0x39a6,	// (0x00061237) list_ai2_gene_pane_t1

0x3a39,	// (0x000612ca) ai2_mp_volume_pane_g3

0x0002,

0xf9bb,	// (0x0006d24c) ai2_mp_volume_pane_g

0xb536,	// (0x00068dc7) volume_small_pane_cp3

0x3a41,	// (0x000612d2) aid_size_cell_ai2_button

0x3a49,	// (0x000612da) grid_ai2_button_pane

0x3a52,	// (0x000612e3) cell_ai2_button_pane_ParamLimits

0x3a52,	// (0x000612e3) cell_ai2_button_pane

0x709f,	// (0x00064930) cell_ai2_button_pane_g1

0x70a9,	// (0x0006493a) grid_highlight_pane_cp8

0x39f1,	// (0x00061282) ai2_gene_pane_t1_ParamLimits

0x39f1,	// (0x00061282) ai2_gene_pane_t1

0xa543,	// (0x00067dd4) aid_height_parent_landscape

0xcab3,	// (0x0006a344) aid_height_set_list

0x32fa,	// (0x00060b8b) aid_size_parent

0x368c,	// (0x00060f1d) aid_size_cell_graphic_pane_ParamLimits

0x3913,	// (0x000611a4) popup_ai2_data_window_g1_ParamLimits

0x3913,	// (0x000611a4) popup_ai2_data_window_g1

0x391f,	// (0x000611b0) ai2_news_ticker_pane_g1

0x3927,	// (0x000611b8) ai2_news_ticker_pane_g2

0x0001,

0xf9a7,	// (0x0006d238) ai2_news_ticker_pane_g

0x392f,	// (0x000611c0) ai2_news_ticker_pane_t1

0x393d,	// (0x000611ce) ai2_news_ticker_pane_t2

0x0001,

0xf9ac,	// (0x0006d23d) ai2_news_ticker_pane_t

0x396a,	// (0x000611fb) heading_ai2_gene_pane_g1

0x3972,	// (0x00061203) heading_ai2_gene_pane_t1_ParamLimits

0x3972,	// (0x00061203) heading_ai2_gene_pane_t1

0x3987,	// (0x00061218) list_highlight_pane_cp6

0x398f,	// (0x00061220) ai2_gene_pane_ParamLimits

0x398f,	// (0x00061220) ai2_gene_pane

0x39b4,	// (0x00061245) list_ai2_gene_pane_t2

0x0001,

0xf9b1,	// (0x0006d242) list_ai2_gene_pane_t

0x39c2,	// (0x00061253) list_highlight_pane_cp8_ParamLimits

0x39c2,	// (0x00061253) list_highlight_pane_cp8

0x39d3,	// (0x00061264) ai2_gene_pane_g1_ParamLimits

0x39d3,	// (0x00061264) ai2_gene_pane_g1

0x39e5,	// (0x00061276) ai2_gene_pane_g2_ParamLimits

0x39e5,	// (0x00061276) ai2_gene_pane_g2

0x0001,

0xf9b6,	// (0x0006d247) ai2_gene_pane_g_ParamLimits

0xf9b6,	// (0x0006d247) ai2_gene_pane_g

0x7fd1,	// (0x00065862) scroll_pane_cp12

0xa500,	// (0x00067d91) control_pane_t3_ParamLimits

0xa500,	// (0x00067d91) control_pane_t3

0xa362,	// (0x00067bf3) status_small_pane_g8_ParamLimits

0xa362,	// (0x00067bf3) status_small_pane_g8

0xa6a4,	// (0x00067f35) popup_find_window_ParamLimits

0xa931,	// (0x000681c2) popup_note_image_window_ParamLimits

0xeaed,	// (0x0006c37e) list_double2_graphic_pane_vc_g1_ParamLimits

0xeaed,	// (0x0006c37e) list_double2_graphic_pane_vc_g1

0xbed8,	// (0x00069769) list_double2_graphic_pane_vc_g2_ParamLimits

0xbed8,	// (0x00069769) list_double2_graphic_pane_vc_g2

0x051d,	// (0x0005ddae) list_double2_graphic_pane_vc_g3_ParamLimits

0x051d,	// (0x0005ddae) list_double2_graphic_pane_vc_g3

0x0002,

0xf792,	// (0x0006d023) list_double2_graphic_pane_vc_g_ParamLimits

0xf792,	// (0x0006d023) list_double2_graphic_pane_vc_g

0xeaf9,	// (0x0006c38a) list_double2_graphic_pane_vc_t1_ParamLimits

0xeaf9,	// (0x0006c38a) list_double2_graphic_pane_vc_t1

0xbed8,	// (0x00069769) list_single_heading_pane_vc_g1_ParamLimits

0xbed8,	// (0x00069769) list_single_heading_pane_vc_g1

0x051d,	// (0x0005ddae) list_single_heading_pane_vc_g2_ParamLimits

0x051d,	// (0x0005ddae) list_single_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x0006ce3c) list_single_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x0006ce3c) list_single_heading_pane_vc_g

0xeb0f,	// (0x0006c3a0) list_single_heading_pane_vc_t1_ParamLimits

0xeb0f,	// (0x0006c3a0) list_single_heading_pane_vc_t1

0xeb25,	// (0x0006c3b6) list_single_heading_pane_vc_t2_ParamLimits

0xeb25,	// (0x0006c3b6) list_single_heading_pane_vc_t2

0x0001,

0xf7b3,	// (0x0006d044) list_single_heading_pane_vc_t_ParamLimits

0xf7b3,	// (0x0006d044) list_single_heading_pane_vc_t

0x1f77,	// (0x0005f808) list_setting_number_pane_vc_g1_ParamLimits

0x1f77,	// (0x0005f808) list_setting_number_pane_vc_g1

0x1f83,	// (0x0005f814) list_setting_number_pane_vc_g2_ParamLimits

0x1f83,	// (0x0005f814) list_setting_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x0006d049) list_setting_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x0006d049) list_setting_number_pane_vc_g

0xeb3b,	// (0x0006c3cc) list_setting_number_pane_vc_t1_ParamLimits

0xeb3b,	// (0x0006c3cc) list_setting_number_pane_vc_t1

0xeb4f,	// (0x0006c3e0) list_setting_number_pane_vc_t2_ParamLimits

0xeb4f,	// (0x0006c3e0) list_setting_number_pane_vc_t2

0xeb6b,	// (0x0006c3fc) list_setting_number_pane_vc_t3_ParamLimits

0xeb6b,	// (0x0006c3fc) list_setting_number_pane_vc_t3

0x0002,

0xf7bd,	// (0x0006d04e) list_setting_number_pane_vc_t_ParamLimits

0xf7bd,	// (0x0006d04e) list_setting_number_pane_vc_t

0xeb95,	// (0x0006c426) set_value_pane_vc_ParamLimits

0xeb95,	// (0x0006c426) set_value_pane_vc

0x34ca,	// (0x00060d5b) list_double2_graphic_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_double2_graphic_pane_vc

0x34dd,	// (0x00060d6e) list_double2_large_graphic_pane_vc_ParamLimits

0x34dd,	// (0x00060d6e) list_double2_large_graphic_pane_vc

0x34ca,	// (0x00060d5b) list_double2_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_double2_pane_vc

0x34ca,	// (0x00060d5b) list_double_graphic_heading_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_double_graphic_heading_pane_vc

0x34ca,	// (0x00060d5b) list_double_graphic_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_double_graphic_pane_vc

0x34ca,	// (0x00060d5b) list_double_heading_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_double_heading_pane_vc

0x34ef,	// (0x00060d80) list_double_large_graphic_pane_vc_ParamLimits

0x34ef,	// (0x00060d80) list_double_large_graphic_pane_vc

0x34ca,	// (0x00060d5b) list_double_number_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_double_number_pane_vc

0x34ca,	// (0x00060d5b) list_double_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_double_pane_vc

0x34ca,	// (0x00060d5b) list_double_time_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_double_time_pane_vc

0x34ca,	// (0x00060d5b) list_setting_number_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_setting_number_pane_vc

0x34ca,	// (0x00060d5b) list_setting_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_setting_pane_vc

0x34ca,	// (0x00060d5b) list_single_graphic_heading_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_single_graphic_heading_pane_vc

0x34ca,	// (0x00060d5b) list_single_heading_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_single_heading_pane_vc

0x34ca,	// (0x00060d5b) list_single_number_heading_pane_vc_ParamLimits

0x34ca,	// (0x00060d5b) list_single_number_heading_pane_vc

0xebb4,	// (0x0006c445) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xebb4,	// (0x0006c445) list_double_graphic_heading_pane_vc_g1

0xebc0,	// (0x0006c451) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xebc0,	// (0x0006c451) list_double_graphic_heading_pane_vc_g2

0xebcc,	// (0x0006c45d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xebcc,	// (0x0006c45d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c2,	// (0x0006d253) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c2,	// (0x0006d253) list_double_graphic_heading_pane_vc_g

0xebd8,	// (0x0006c469) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xebd8,	// (0x0006c469) list_double_graphic_heading_pane_vc_t1

0xebec,	// (0x0006c47d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xebec,	// (0x0006c47d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c9,	// (0x0006d25a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c9,	// (0x0006d25a) list_double_graphic_heading_pane_vc_t

0x1f77,	// (0x0005f808) list_setting_pane_vc_g1_ParamLimits

0x1f77,	// (0x0005f808) list_setting_pane_vc_g1

0x1f83,	// (0x0005f814) list_setting_pane_vc_g2_ParamLimits

0x1f83,	// (0x0005f814) list_setting_pane_vc_g2

0x0001,

0xf7b8,	// (0x0006d049) list_setting_pane_vc_g_ParamLimits

0xf7b8,	// (0x0006d049) list_setting_pane_vc_g

0xec04,	// (0x0006c495) list_setting_pane_vc_t1_ParamLimits

0xec04,	// (0x0006c495) list_setting_pane_vc_t1

0xec20,	// (0x0006c4b1) list_setting_pane_vc_t2_ParamLimits

0xec20,	// (0x0006c4b1) list_setting_pane_vc_t2

0x0001,

0xfa0c,	// (0x0006d29d) list_setting_pane_vc_t_ParamLimits

0xfa0c,	// (0x0006d29d) list_setting_pane_vc_t

0xeb95,	// (0x0006c426) set_value_pane_cp_vc_ParamLimits

0xeb95,	// (0x0006c426) set_value_pane_cp_vc

0xbed8,	// (0x00069769) list_single_number_heading_pane_vc_g1_ParamLimits

0xbed8,	// (0x00069769) list_single_number_heading_pane_vc_g1

0x051d,	// (0x0005ddae) list_single_number_heading_pane_vc_g2_ParamLimits

0x051d,	// (0x0005ddae) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x0006ce3c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x0006ce3c) list_single_number_heading_pane_vc_g

0xbee4,	// (0x00069775) list_single_number_heading_pane_vc_t1_ParamLimits

0xbee4,	// (0x00069775) list_single_number_heading_pane_vc_t1

0xec3a,	// (0x0006c4cb) list_single_number_heading_pane_vc_t2_ParamLimits

0xec3a,	// (0x0006c4cb) list_single_number_heading_pane_vc_t2

0xec50,	// (0x0006c4e1) list_single_number_heading_pane_vc_t3_ParamLimits

0xec50,	// (0x0006c4e1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa11,	// (0x0006d2a2) list_single_number_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x0006d2a2) list_single_number_heading_pane_vc_t

0xec62,	// (0x0006c4f3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xec62,	// (0x0006c4f3) list_single_graphic_heading_pane_vc_g1

0xbed8,	// (0x00069769) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbed8,	// (0x00069769) list_single_graphic_heading_pane_vc_g4

0x051d,	// (0x0005ddae) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x051d,	// (0x0005ddae) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa18,	// (0x0006d2a9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa18,	// (0x0006d2a9) list_single_graphic_heading_pane_vc_g

0xbee4,	// (0x00069775) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xbee4,	// (0x00069775) list_single_graphic_heading_pane_vc_t1

0xec6e,	// (0x0006c4ff) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xec6e,	// (0x0006c4ff) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1f,	// (0x0006d2b0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x0006d2b0) list_single_graphic_heading_pane_vc_t

0xbed8,	// (0x00069769) list_double2_pane_vc_g1_ParamLimits

0xbed8,	// (0x00069769) list_double2_pane_vc_g1

0x051d,	// (0x0005ddae) list_double2_pane_vc_g2_ParamLimits

0x051d,	// (0x0005ddae) list_double2_pane_vc_g2

0x0001,

0xf5ab,	// (0x0006ce3c) list_double2_pane_vc_g_ParamLimits

0xf5ab,	// (0x0006ce3c) list_double2_pane_vc_g

0xec80,	// (0x0006c511) list_double2_pane_vc_t1_ParamLimits

0xec80,	// (0x0006c511) list_double2_pane_vc_t1

0x3c8b,	// (0x0006151c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3c8b,	// (0x0006151c) list_double2_large_graphic_pane_vc_g1

0xe85f,	// (0x0006c0f0) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe85f,	// (0x0006c0f0) list_double2_large_graphic_pane_vc_g2

0xe86b,	// (0x0006c0fc) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe86b,	// (0x0006c0fc) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c3,	// (0x0006ce54) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c3,	// (0x0006ce54) list_double2_large_graphic_pane_vc_g

0xbefa,	// (0x0006978b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xbefa,	// (0x0006978b) list_double2_large_graphic_pane_vc_t1

0x3c97,	// (0x00061528) list_double_time_pane_vc_g1_ParamLimits

0x3c97,	// (0x00061528) list_double_time_pane_vc_g1

0x3ca3,	// (0x00061534) list_double_time_pane_vc_g2_ParamLimits

0x3ca3,	// (0x00061534) list_double_time_pane_vc_g2

0x0001,

0xfa24,	// (0x0006d2b5) list_double_time_pane_vc_g_ParamLimits

0xfa24,	// (0x0006d2b5) list_double_time_pane_vc_g

0xec98,	// (0x0006c529) list_double_time_pane_vc_t1_ParamLimits

0xec98,	// (0x0006c529) list_double_time_pane_vc_t1

0xecbc,	// (0x0006c54d) list_double_time_pane_vc_t2_ParamLimits

0xecbc,	// (0x0006c54d) list_double_time_pane_vc_t2

0xed0b,	// (0x0006c59c) list_double_time_pane_vc_t3_ParamLimits

0xed0b,	// (0x0006c59c) list_double_time_pane_vc_t3

0xed1d,	// (0x0006c5ae) list_double_time_pane_vc_t4_ParamLimits

0xed1d,	// (0x0006c5ae) list_double_time_pane_vc_t4

0x0003,

0xfa29,	// (0x0006d2ba) list_double_time_pane_vc_t_ParamLimits

0xfa29,	// (0x0006d2ba) list_double_time_pane_vc_t

0xbed8,	// (0x00069769) list_double_pane_vc_g1_ParamLimits

0xbed8,	// (0x00069769) list_double_pane_vc_g1

0x051d,	// (0x0005ddae) list_double_pane_vc_g2_ParamLimits

0x051d,	// (0x0005ddae) list_double_pane_vc_g2

0x0001,

0xf5ab,	// (0x0006ce3c) list_double_pane_vc_g_ParamLimits

0xf5ab,	// (0x0006ce3c) list_double_pane_vc_g

0xed31,	// (0x0006c5c2) list_double_pane_vc_t1_ParamLimits

0xed31,	// (0x0006c5c2) list_double_pane_vc_t1

0xed45,	// (0x0006c5d6) list_double_pane_vc_t2_ParamLimits

0xed45,	// (0x0006c5d6) list_double_pane_vc_t2

0x0001,

0xfa32,	// (0x0006d2c3) list_double_pane_vc_t_ParamLimits

0xfa32,	// (0x0006d2c3) list_double_pane_vc_t

0xbed8,	// (0x00069769) list_double_number_pane_vc_g1_ParamLimits

0xbed8,	// (0x00069769) list_double_number_pane_vc_g1

0x051d,	// (0x0005ddae) list_double_number_pane_vc_g2_ParamLimits

0x051d,	// (0x0005ddae) list_double_number_pane_vc_g2

0x0001,

0xf5ab,	// (0x0006ce3c) list_double_number_pane_vc_g_ParamLimits

0xf5ab,	// (0x0006ce3c) list_double_number_pane_vc_g

0xed5d,	// (0x0006c5ee) list_double_number_pane_vc_t1_ParamLimits

0xed5d,	// (0x0006c5ee) list_double_number_pane_vc_t1

0xed31,	// (0x0006c5c2) list_double_number_pane_vc_t2_ParamLimits

0xed31,	// (0x0006c5c2) list_double_number_pane_vc_t2

0xed6f,	// (0x0006c600) list_double_number_pane_vc_t3_ParamLimits

0xed6f,	// (0x0006c600) list_double_number_pane_vc_t3

0x0002,

0xfa37,	// (0x0006d2c8) list_double_number_pane_vc_t_ParamLimits

0xfa37,	// (0x0006d2c8) list_double_number_pane_vc_t

0x3caf,	// (0x00061540) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3caf,	// (0x00061540) list_double_large_graphic_pane_vc_g1

0x3ccb,	// (0x0006155c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3ccb,	// (0x0006155c) list_double_large_graphic_pane_vc_g2

0x3cdf,	// (0x00061570) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3cdf,	// (0x00061570) list_double_large_graphic_pane_vc_g3

0xed89,	// (0x0006c61a) list_double_large_graphic_pane_vc_g4_ParamLimits

0xed89,	// (0x0006c61a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3e,	// (0x0006d2cf) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x0006d2cf) list_double_large_graphic_pane_vc_g

0xed98,	// (0x0006c629) list_double_large_graphic_pane_vc_t1_ParamLimits

0xed98,	// (0x0006c629) list_double_large_graphic_pane_vc_t1

0xedb4,	// (0x0006c645) list_double_large_graphic_pane_vc_t2_ParamLimits

0xedb4,	// (0x0006c645) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa47,	// (0x0006d2d8) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa47,	// (0x0006d2d8) list_double_large_graphic_pane_vc_t

0xebc0,	// (0x0006c451) list_double_heading_pane_vc_g1_ParamLimits

0xebc0,	// (0x0006c451) list_double_heading_pane_vc_g1

0xebcc,	// (0x0006c45d) list_double_heading_pane_vc_g2_ParamLimits

0xebcc,	// (0x0006c45d) list_double_heading_pane_vc_g2

0x0001,

0xfa4c,	// (0x0006d2dd) list_double_heading_pane_vc_g_ParamLimits

0xfa4c,	// (0x0006d2dd) list_double_heading_pane_vc_g

0xedd6,	// (0x0006c667) list_double_heading_pane_vc_t1_ParamLimits

0xedd6,	// (0x0006c667) list_double_heading_pane_vc_t1

0xedea,	// (0x0006c67b) list_double_heading_pane_vc_t2_ParamLimits

0xedea,	// (0x0006c67b) list_double_heading_pane_vc_t2

0x0001,

0xfa51,	// (0x0006d2e2) list_double_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x0006d2e2) list_double_heading_pane_vc_t

0xee02,	// (0x0006c693) list_double_graphic_pane_vc_g1_ParamLimits

0xee02,	// (0x0006c693) list_double_graphic_pane_vc_g1

0x3cee,	// (0x0006157f) list_double_graphic_pane_vc_g2_ParamLimits

0x3cee,	// (0x0006157f) list_double_graphic_pane_vc_g2

0xbed8,	// (0x00069769) list_double_graphic_pane_vc_g3_ParamLimits

0xbed8,	// (0x00069769) list_double_graphic_pane_vc_g3

0x0003,

0xfa56,	// (0x0006d2e7) list_double_graphic_pane_vc_g_ParamLimits

0xfa56,	// (0x0006d2e7) list_double_graphic_pane_vc_g

0xee15,	// (0x0006c6a6) list_double_graphic_pane_vc_t1_ParamLimits

0xee15,	// (0x0006c6a6) list_double_graphic_pane_vc_t1

0xee34,	// (0x0006c6c5) list_double_graphic_pane_vc_t2_ParamLimits

0xee34,	// (0x0006c6c5) list_double_graphic_pane_vc_t2

0x0001,

0xfa5f,	// (0x0006d2f0) list_double_graphic_pane_vc_t_ParamLimits

0xfa5f,	// (0x0006d2f0) list_double_graphic_pane_vc_t

0xe82d,	// (0x0006c0be) aid_size_cell_fastswap

0x8dfd,	// (0x0006668e) aid_size_cell_touch_ParamLimits

0x8dfd,	// (0x0006668e) aid_size_cell_touch

0xe83f,	// (0x0006c0d0) popup_fast_swap_wide_window_ParamLimits

0xe83f,	// (0x0006c0d0) popup_fast_swap_wide_window

0x9129,	// (0x000669ba) touch_pane_ParamLimits

0x9129,	// (0x000669ba) touch_pane

0x801e,	// (0x000658af) button_value_adjust_pane_cp2

0xbf2a,	// (0x000697bb) button_value_adjust_pane_cp4

0xbf32,	// (0x000697c3) form_field_data_pane_cp2

0x9bea,	// (0x0006747b) form_field_data_wide_pane_cp2

0x832c,	// (0x00065bbd) bg_scroll_pane_ParamLimits

0x9f20,	// (0x000677b1) scroll_handle_pane_ParamLimits

0xf211,	// (0x0006caa2) scroll_sc2_down_pane_ParamLimits

0xf211,	// (0x0006caa2) scroll_sc2_down_pane

0x835d,	// (0x00065bee) scroll_sc2_up_pane_ParamLimits

0x835d,	// (0x00065bee) scroll_sc2_up_pane

0xced6,	// (0x0006a767) grid_wheel_folder_pane_g1_ParamLimits

0xced6,	// (0x0006a767) grid_wheel_folder_pane_g1

0xf393,	// (0x0006cc24) clock_nsta_pane_cp2_ParamLimits

0xf393,	// (0x0006cc24) clock_nsta_pane_cp2

0xa246,	// (0x00067ad7) listscroll_midp_pane_ParamLimits

0xa252,	// (0x00067ae3) midp_canvas_pane

0xc5d1,	// (0x00069e62) nsta_clock_indic_pane

0xc5f9,	// (0x00069e8a) listscroll_form_pane_vc

0xc601,	// (0x00069e92) listscroll_set_pane_vc_ParamLimits

0xc601,	// (0x00069e92) listscroll_set_pane_vc

0xade6,	// (0x00068677) clock_nsta_pane

0xae10,	// (0x000686a1) indicator_nsta_pane

0x1e6d,	// (0x0005f6fe) bg_popup_sub_pane_cp2_ParamLimits

0x1e81,	// (0x0005f712) find_pane_cp2_ParamLimits

0x1e81,	// (0x0005f712) find_pane_cp2

0x1e97,	// (0x0005f728) grid_toobar_pane_ParamLimits

0x1f8f,	// (0x0005f820) list_form_gen_pane_vc_ParamLimits

0x1f8f,	// (0x0005f820) list_form_gen_pane_vc

0x1fa5,	// (0x0005f836) scroll_pane_cp8_vc_ParamLimits

0x1fa5,	// (0x0005f836) scroll_pane_cp8_vc

0x2021,	// (0x0005f8b2) data_form_wide_pane_vc_ParamLimits

0x2021,	// (0x0005f8b2) data_form_wide_pane_vc

0x202d,	// (0x0005f8be) form_field_data_wide_pane_vc_g1

0x2035,	// (0x0005f8c6) form_field_data_wide_pane_vc_t1_ParamLimits

0x2035,	// (0x0005f8c6) form_field_data_wide_pane_vc_t1

0x8032,	// (0x000658c3) input_focus_pane_cp6_vc_ParamLimits

0x8032,	// (0x000658c3) input_focus_pane_cp6_vc

0x2382,	// (0x0005fc13) list_midp_pane_ParamLimits

0x36f6,	// (0x00060f87) scroll_pane_cp16_ParamLimits

0x36f6,	// (0x00060f87) scroll_pane_cp16

0x23d8,	// (0x0005fc69) button_value_adjust_pane_ParamLimits

0x23d8,	// (0x0005fc69) button_value_adjust_pane

0xcac4,	// (0x0006a355) button_value_adjust_pane_cp6_ParamLimits

0xcac4,	// (0x0006a355) button_value_adjust_pane_cp6

0xcbde,	// (0x0006a46f) settings_code_pane_cp_ParamLimits

0xcbde,	// (0x0006a46f) settings_code_pane_cp

0x709f,	// (0x00064930) cell_touch_pane_g1

0x709f,	// (0x00064930) cell_touch_pane_g2

0x0001,

0xf6d7,	// (0x0006cf68) cell_touch_pane_g

0xcda3,	// (0x0006a634) cell_touch_pane_cp_ParamLimits

0xcda3,	// (0x0006a634) cell_touch_pane_cp

0xcdbf,	// (0x0006a650) cell_touch_pane_ParamLimits

0xcdbf,	// (0x0006a650) cell_touch_pane

0x709f,	// (0x00064930) scroll_sc2_down_pane_g1

0x709f,	// (0x00064930) scroll_sc2_up_pane_g1

0x70a9,	// (0x0006493a) bg_set_opt_pane_cp4_vc

0x3a86,	// (0x00061317) list_set_graphic_pane_vc_g1_ParamLimits

0x3a86,	// (0x00061317) list_set_graphic_pane_vc_g1

0x3a92,	// (0x00061323) list_set_graphic_pane_vc_g2_ParamLimits

0x3a92,	// (0x00061323) list_set_graphic_pane_vc_g2

0x0001,

0xf9ce,	// (0x0006d25f) list_set_graphic_pane_vc_g_ParamLimits

0xf9ce,	// (0x0006d25f) list_set_graphic_pane_vc_g

0x3a9e,	// (0x0006132f) text_primary_small_cp13_vc_ParamLimits

0x3a9e,	// (0x0006132f) text_primary_small_cp13_vc

0x3ab6,	// (0x00061347) list_set_graphic_pane_vc_ParamLimits

0x3ab6,	// (0x00061347) list_set_graphic_pane_vc

0x70a9,	// (0x0006493a) input_focus_pane_cp2_vc

0x709f,	// (0x00064930) setting_code_pane_vc_g1

0x710e,	// (0x0006499f) setting_code_pane_vc_t1

0x3ac9,	// (0x0006135a) set_text_pane_vc_t1_ParamLimits

0x3ac9,	// (0x0006135a) set_text_pane_vc_t1

0x70a9,	// (0x0006493a) input_focus_pane_cp1_vc

0x3ae6,	// (0x00061377) list_set_text_pane_vc

0x709f,	// (0x00064930) setting_text_pane_vc_g1

0x70a9,	// (0x0006493a) bg_set_opt_pane_cp2_vc

0x7105,	// (0x00064996) setting_slider_graphic_pane_vc_g1

0x3af0,	// (0x00061381) setting_slider_graphic_pane_vc_t1

0x3b00,	// (0x00061391) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d3,	// (0x0006d264) setting_slider_graphic_pane_vc_t

0x3b10,	// (0x000613a1) slider_set_pane_cp_vc

0x3b18,	// (0x000613a9) slider_set_pane_vc_g1

0x3b21,	// (0x000613b2) slider_set_pane_vc_g2

0x0006,

0xf9d8,	// (0x0006d269) slider_set_pane_vc_g

0x808a,	// (0x0006591b) set_opt_bg_pane_g1_copy1

0x8092,	// (0x00065923) set_opt_bg_pane_g2_copy1

0x3b4d,	// (0x000613de) set_opt_bg_pane_g3_copy1

0x80a2,	// (0x00065933) set_opt_bg_pane_g4_copy1

0x80aa,	// (0x0006593b) set_opt_bg_pane_g5_copy1

0x80b2,	// (0x00065943) set_opt_bg_pane_g6_copy1

0x3b55,	// (0x000613e6) set_opt_bg_pane_g7_copy1

0x3b5f,	// (0x000613f0) set_opt_bg_pane_g8_copy1

0x3b67,	// (0x000613f8) set_opt_bg_pane_g9_copy1

0x70a9,	// (0x0006493a) bg_set_opt_pane_cp_vc

0x3b6f,	// (0x00061400) setting_slider_pane_vc_t1

0x3b7e,	// (0x0006140f) setting_slider_pane_vc_t2

0x3b8e,	// (0x0006141f) setting_slider_pane_vc_t3

0x0002,

0xf9e7,	// (0x0006d278) setting_slider_pane_vc_t

0x3b9e,	// (0x0006142f) slider_set_pane_vc

0x066b,	// (0x0005defc) volume_set_pane_vc_g1

0x0a1e,	// (0x0005e2af) volume_set_pane_vc_g2

0x0a27,	// (0x0005e2b8) volume_set_pane_vc_g3

0x0a30,	// (0x0005e2c1) volume_set_pane_vc_g4

0x0a39,	// (0x0005e2ca) volume_set_pane_vc_g5

0x0a42,	// (0x0005e2d3) volume_set_pane_vc_g6

0x0a4b,	// (0x0005e2dc) volume_set_pane_vc_g7

0x0a54,	// (0x0005e2e5) volume_set_pane_vc_g8

0x0a5d,	// (0x0005e2ee) volume_set_pane_vc_g9

0x0a66,	// (0x0005e2f7) volume_set_pane_vc_g10

0x0009,

0xf9ee,	// (0x0006d27f) volume_set_pane_vc_g

0x3ba6,	// (0x00061437) volume_set_pane_vc

0x3bb0,	// (0x00061441) button_value_adjust_pane_cp1_vc

0x3bba,	// (0x0006144b) list_highlight_pane_cp2_vc

0x3bc3,	// (0x00061454) list_set_pane_vc_ParamLimits

0x3bc3,	// (0x00061454) list_set_pane_vc

0x3c21,	// (0x000614b2) main_pane_set_vc_t1_ParamLimits

0x3c21,	// (0x000614b2) main_pane_set_vc_t1

0x3c36,	// (0x000614c7) main_pane_set_vc_t2_ParamLimits

0x3c36,	// (0x000614c7) main_pane_set_vc_t2

0x3c48,	// (0x000614d9) main_pane_set_vc_t3_ParamLimits

0x3c48,	// (0x000614d9) main_pane_set_vc_t3

0x3c5a,	// (0x000614eb) main_pane_set_vc_t4_ParamLimits

0x3c5a,	// (0x000614eb) main_pane_set_vc_t4

0x0003,

0xfa03,	// (0x0006d294) main_pane_set_vc_t_ParamLimits

0xfa03,	// (0x0006d294) main_pane_set_vc_t

0x3c6c,	// (0x000614fd) setting_code_pane_vc_ParamLimits

0x3c6c,	// (0x000614fd) setting_code_pane_vc

0x3c7b,	// (0x0006150c) setting_slider_graphic_pane_vc

0x3c7b,	// (0x0006150c) setting_slider_pane_vc

0x3c7b,	// (0x0006150c) setting_text_pane_vc

0x3c7b,	// (0x0006150c) setting_volume_pane_vc

0x3c83,	// (0x00061514) scroll_pane_cp121_vc

0x800c,	// (0x0006589d) set_content_pane_vc

0x3d0b,	// (0x0006159c) button_value_adjust_pane_g1

0x3d14,	// (0x000615a5) button_value_adjust_pane_g2

0x0001,

0xfa64,	// (0x0006d2f5) button_value_adjust_pane_g

0x3d1d,	// (0x000615ae) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3d1d,	// (0x000615ae) form_field_slider_wide_pane_vc_t1

0x3d31,	// (0x000615c2) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3d31,	// (0x000615c2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa69,	// (0x0006d2fa) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa69,	// (0x0006d2fa) form_field_slider_wide_pane_vc_t

0x7221,	// (0x00064ab2) input_focus_pane_cp10_vc_ParamLimits

0x7221,	// (0x00064ab2) input_focus_pane_cp10_vc

0x3d5f,	// (0x000615f0) slider_cont_pane_cp1_vc_ParamLimits

0x3d5f,	// (0x000615f0) slider_cont_pane_cp1_vc

0x3d71,	// (0x00061602) slider_form_pane_g1_cp2

0x3b21,	// (0x000613b2) slider_form_pane_g2_cp2

0x3d9e,	// (0x0006162f) form_field_slider_pane_vc_t3

0x3dac,	// (0x0006163d) form_field_slider_pane_vc_t4

0x3dba,	// (0x0006164b) slider_form_pane_vc_ParamLimits

0x3dba,	// (0x0006164b) slider_form_pane_vc

0x3dc7,	// (0x00061658) form_field_slider_pane_vc_t1_ParamLimits

0x3dc7,	// (0x00061658) form_field_slider_pane_vc_t1

0x3d31,	// (0x000615c2) form_field_slider_pane_vc_t2_ParamLimits

0x3d31,	// (0x000615c2) form_field_slider_pane_vc_t2

0x0001,

0xfa7b,	// (0x0006d30c) form_field_slider_pane_vc_t_ParamLimits

0xfa7b,	// (0x0006d30c) form_field_slider_pane_vc_t

0x7221,	// (0x00064ab2) input_focus_pane_cp9_vc_ParamLimits

0x7221,	// (0x00064ab2) input_focus_pane_cp9_vc

0x3de3,	// (0x00061674) slider_cont_pane_vc_ParamLimits

0x3de3,	// (0x00061674) slider_cont_pane_vc

0x3df7,	// (0x00061688) list_form_graphic_pane_cp_vc_ParamLimits

0x3df7,	// (0x00061688) list_form_graphic_pane_cp_vc

0x202d,	// (0x0005f8be) form_field_popup_wide_pane_vc_g1

0x3e0c,	// (0x0006169d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3e0c,	// (0x0006169d) form_field_popup_wide_pane_vc_t1

0x8032,	// (0x000658c3) input_focus_pane_cp8_vc_ParamLimits

0x8032,	// (0x000658c3) input_focus_pane_cp8_vc

0x3e51,	// (0x000616e2) list_form_wide_pane_vc_ParamLimits

0x3e51,	// (0x000616e2) list_form_wide_pane_vc

0x3e5d,	// (0x000616ee) list_form_graphic_pane_vc_g1

0x3e65,	// (0x000616f6) list_form_graphic_pane_vc_t1_ParamLimits

0x3e65,	// (0x000616f6) list_form_graphic_pane_vc_t1

0x70f7,	// (0x00064988) list_highlight_pane_cp5_vc_ParamLimits

0x70f7,	// (0x00064988) list_highlight_pane_cp5_vc

0x3e81,	// (0x00061712) list_form_graphic_pane_vc_ParamLimits

0x3e81,	// (0x00061712) list_form_graphic_pane_vc

0x202d,	// (0x0005f8be) form_field_popup_pane_vc_g1

0x3e97,	// (0x00061728) form_field_popup_pane_vc_t1_ParamLimits

0x3e97,	// (0x00061728) form_field_popup_pane_vc_t1

0x8032,	// (0x000658c3) input_focus_pane_cp7_vc_ParamLimits

0x8032,	// (0x000658c3) input_focus_pane_cp7_vc

0x3eae,	// (0x0006173f) list_form_pane_vc_ParamLimits

0x3eae,	// (0x0006173f) list_form_pane_vc

0x3eba,	// (0x0006174b) data_form_pane_vc_t1_ParamLimits

0x3eba,	// (0x0006174b) data_form_pane_vc_t1

0x808a,	// (0x0006591b) input_focus_pane_vc_g1

0x8092,	// (0x00065923) input_focus_pane_vc_g2

0x809a,	// (0x0006592b) input_focus_pane_vc_g3

0x80a2,	// (0x00065933) input_focus_pane_vc_g4

0x80aa,	// (0x0006593b) input_focus_pane_vc_g5

0x80b2,	// (0x00065943) input_focus_pane_vc_g6

0x80ba,	// (0x0006594b) input_focus_pane_vc_g7

0x80c2,	// (0x00065953) input_focus_pane_vc_g8

0x80ca,	// (0x0006595b) input_focus_pane_vc_g9

0x709f,	// (0x00064930) input_focus_pane_vc_g10

0x0009,

0xf660,	// (0x0006cef1) input_focus_pane_vc_g

0x2021,	// (0x0005f8b2) data_form_pane_vc_ParamLimits

0x2021,	// (0x0005f8b2) data_form_pane_vc

0x202d,	// (0x0005f8be) form_field_data_pane_vc_g1

0x3ed5,	// (0x00061766) form_field_data_pane_vc_t1_ParamLimits

0x3ed5,	// (0x00061766) form_field_data_pane_vc_t1

0x8032,	// (0x000658c3) input_focus_pane_vc_ParamLimits

0x8032,	// (0x000658c3) input_focus_pane_vc

0x3eef,	// (0x00061780) button_value_adjust_pane_cp3_vc

0x3ef7,	// (0x00061788) button_value_adjust_pane_cp5_vc

0x3eff,	// (0x00061790) form_field_data_pane_vc_ParamLimits

0x3eff,	// (0x00061790) form_field_data_pane_vc

0x3f16,	// (0x000617a7) form_field_data_pane_vc_cp2

0x3f1e,	// (0x000617af) form_field_data_wide_pane_vc_ParamLimits

0x3f1e,	// (0x000617af) form_field_data_wide_pane_vc

0x3f34,	// (0x000617c5) form_field_data_wide_pane_vc_cp2

0x3f3c,	// (0x000617cd) form_field_popup_pane_vc_ParamLimits

0x3f3c,	// (0x000617cd) form_field_popup_pane_vc

0x3f53,	// (0x000617e4) form_field_popup_wide_pane_vc_ParamLimits

0x3f53,	// (0x000617e4) form_field_popup_wide_pane_vc

0x3f69,	// (0x000617fa) form_field_slider_pane_vc_ParamLimits

0x3f69,	// (0x000617fa) form_field_slider_pane_vc

0x3f7c,	// (0x0006180d) form_field_slider_wide_pane_vc_ParamLimits

0x3f7c,	// (0x0006180d) form_field_slider_wide_pane_vc

0xcddc,	// (0x0006a66d) grid_touch_1_pane_ParamLimits

0xcddc,	// (0x0006a66d) grid_touch_1_pane

0xcdf0,	// (0x0006a681) grid_touch_2_pane_ParamLimits

0xcdf0,	// (0x0006a681) grid_touch_2_pane

0x4060,	// (0x000618f1) touch_pane_g1_ParamLimits

0x4060,	// (0x000618f1) touch_pane_g1

0x3fb3,	// (0x00061844) cell_app_pane_cp_wide_ParamLimits

0x3fb3,	// (0x00061844) cell_app_pane_cp_wide

0x3fc4,	// (0x00061855) grid_popup_fast_wide_pane_ParamLimits

0x3fc4,	// (0x00061855) grid_popup_fast_wide_pane

0x3fd8,	// (0x00061869) scroll_pane_cp19_ParamLimits

0x3fd8,	// (0x00061869) scroll_pane_cp19

0x70a9,	// (0x0006493a) bg_popup_window_pane_cp20

0x3fec,	// (0x0006187d) listscroll_popup_fast_wide_pane

0xce1a,	// (0x0006a6ab) grid_indicator_nsta_pane

0x4006,	// (0x00061897) clock_nsta_pane_g1

0x400f,	// (0x000618a0) clock_nsta_pane_t1

0xce26,	// (0x0006a6b7) cell_indicator_nsta_pane_ParamLimits

0xce26,	// (0x0006a6b7) cell_indicator_nsta_pane

0x4060,	// (0x000618f1) cell_indicator_nsta_pane_g1

0xce41,	// (0x0006a6d2) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x0006d318) cell_indicator_nsta_pane_g

0x4080,	// (0x00061911) clock_nsta_pane_cp

0x4089,	// (0x0006191a) indicator_nsta_pane_cp

0x4093,	// (0x00061924) nsta_clock_indic_pane_g1

0x7133,	// (0x000649c4) grid_indicator_pane

0x9fba,	// (0x0006784b) scroll_pane_cp29

0xf2e2,	// (0x0006cb73) indicator_nsta_pane_cp2_ParamLimits

0xf2e2,	// (0x0006cb73) indicator_nsta_pane_cp2

0x70f7,	// (0x00064988) main_apps_wheel_pane

0xb294,	// (0x00068b25) form_midp_field_text_pane_ParamLimits

0x238e,	// (0x0005fc1f) scroll_bar_cp050_ParamLimits

0x40ec,	// (0x0006197d) cell_indicator_pane_ParamLimits

0x40ec,	// (0x0006197d) cell_indicator_pane

0x4105,	// (0x00061996) cell_indicator_pane_g1

0xce60,	// (0x0006a6f1) grid_wheel_folder_pane_ParamLimits

0xce60,	// (0x0006a6f1) grid_wheel_folder_pane

0xce6e,	// (0x0006a6ff) list_wheel_apps_pane_ParamLimits

0xce6e,	// (0x0006a6ff) list_wheel_apps_pane

0xce7c,	// (0x0006a70d) main_apps_wheel_pane_g1_ParamLimits

0xce7c,	// (0x0006a70d) main_apps_wheel_pane_g1

0xce88,	// (0x0006a719) main_apps_wheel_pane_g2_ParamLimits

0xce88,	// (0x0006a719) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x0006d334) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x0006d334) main_apps_wheel_pane_g

0xce96,	// (0x0006a727) main_apps_wheel_pane_t1_ParamLimits

0xce96,	// (0x0006a727) main_apps_wheel_pane_t1

0xceaa,	// (0x0006a73b) list_wheel_apps_pane_g1

0xceb2,	// (0x0006a743) list_wheel_apps_pane_g2

0xceba,	// (0x0006a74b) list_wheel_apps_pane_g3

0xcec2,	// (0x0006a753) list_wheel_apps_pane_g4

0xcecc,	// (0x0006a75d) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x0006d339) list_wheel_apps_pane_g

0xc31a,	// (0x00069bab) navi_icon_text_pane

0xacda,	// (0x0006856b) aid_fill_nsta

0x41cc,	// (0x00061a5d) navi_icon_text_pane_g1

0x41d8,	// (0x00061a69) navi_icon_text_pane_t1

0xc1fe,	// (0x00069a8f) list_set_graphic_pane_t1_ParamLimits

0xc1fe,	// (0x00069a8f) list_set_graphic_pane_t1

0x2ad9,	// (0x0006036a) popup_midp_note_alarm_window_t6_ParamLimits

0x2ad9,	// (0x0006036a) popup_midp_note_alarm_window_t6

0x2aeb,	// (0x0006037c) popup_midp_note_alarm_window_t7_ParamLimits

0x2aeb,	// (0x0006037c) popup_midp_note_alarm_window_t7

0x2afd,	// (0x0006038e) popup_midp_note_alarm_window_t8_ParamLimits

0x2afd,	// (0x0006038e) popup_midp_note_alarm_window_t8

0x2b0f,	// (0x000603a0) popup_midp_note_alarm_window_t9_ParamLimits

0x2b0f,	// (0x000603a0) popup_midp_note_alarm_window_t9

0x2b21,	// (0x000603b2) popup_midp_note_alarm_window_t10_ParamLimits

0x2b21,	// (0x000603b2) popup_midp_note_alarm_window_t10

0x2b33,	// (0x000603c4) popup_midp_note_alarm_window_t11_ParamLimits

0x2b33,	// (0x000603c4) popup_midp_note_alarm_window_t11

0xc846,	// (0x0006a0d7) scroll_pane_cp17_ParamLimits

0xc846,	// (0x0006a0d7) scroll_pane_cp17

0x066b,	// (0x0005defc) volume_small_pane_cp_g1

0x0a6f,	// (0x0005e300) volume_small_pane_cp_g2

0x0a78,	// (0x0005e309) volume_small_pane_cp_g3

0x0a81,	// (0x0005e312) volume_small_pane_cp_g4

0x0a8a,	// (0x0005e31b) volume_small_pane_cp_g5

0x0a39,	// (0x0005e2ca) volume_small_pane_cp_g6

0x0a93,	// (0x0005e324) volume_small_pane_cp_g7

0x0a9c,	// (0x0005e32d) volume_small_pane_cp_g8

0x0aa5,	// (0x0005e336) volume_small_pane_cp_g9

0x0aae,	// (0x0005e33f) volume_small_pane_cp_g10

0xc484,	// (0x00069d15) midp_ticker_pane_g1_ParamLimits

0xc490,	// (0x00069d21) midp_ticker_pane_g2_ParamLimits

0xf72c,	// (0x0006cfbd) midp_ticker_pane_g_ParamLimits

0xc49c,	// (0x00069d2d) midp_ticker_pane_t1_ParamLimits

0xacfe,	// (0x0006858f) aid_fill_nsta_2

0x237a,	// (0x0005fc0b) list_form2_midp_pane

0x347d,	// (0x00060d0e) midp_editing_number_pane_ParamLimits

0x348c,	// (0x00060d1d) midp_ticker_pane_ParamLimits

0x41ea,	// (0x00061a7b) form2_midp_field_pane

0x420e,	// (0x00061a9f) scroll_pane_cp51

0x422e,	// (0x00061abf) form2_midp_button_pane_ParamLimits

0x422e,	// (0x00061abf) form2_midp_button_pane

0x4240,	// (0x00061ad1) form2_midp_content_pane_ParamLimits

0x4240,	// (0x00061ad1) form2_midp_content_pane

0x425a,	// (0x00061aeb) form2_midp_field_choice_group_pane

0x4262,	// (0x00061af3) form2_midp_field_pane_g1

0x426a,	// (0x00061afb) form2_midp_field_pane_g2

0x4272,	// (0x00061b03) form2_midp_field_pane_g3

0x427a,	// (0x00061b0b) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x0006d35e) form2_midp_field_pane_g

0x4282,	// (0x00061b13) form2_midp_gauge_slider_pane

0x428a,	// (0x00061b1b) form2_midp_gauge_wait_pane

0x4292,	// (0x00061b23) form2_midp_image_pane_ParamLimits

0x4292,	// (0x00061b23) form2_midp_image_pane

0xceff,	// (0x0006a790) form2_midp_label_pane_ParamLimits

0xceff,	// (0x0006a790) form2_midp_label_pane

0xcf18,	// (0x0006a7a9) form2_midp_label_pane_cp_ParamLimits

0xcf18,	// (0x0006a7a9) form2_midp_label_pane_cp

0x42e7,	// (0x00061b78) form2_midp_string_pane_ParamLimits

0x42e7,	// (0x00061b78) form2_midp_string_pane

0xb53f,	// (0x00068dd0) form2_midp_text_pane_ParamLimits

0xb53f,	// (0x00068dd0) form2_midp_text_pane

0x42f9,	// (0x00061b8a) form2_midp_time_pane

0x4309,	// (0x00061b9a) input_focus_pane_cp51_ParamLimits

0x4309,	// (0x00061b9a) input_focus_pane_cp51

0xcf37,	// (0x0006a7c8) form2_midp_label_pane_t1_ParamLimits

0xcf37,	// (0x0006a7c8) form2_midp_label_pane_t1

0xb558,	// (0x00068de9) form2_mdip_text_pane_t1_ParamLimits

0xb558,	// (0x00068de9) form2_mdip_text_pane_t1

0xee63,	// (0x0006c6f4) form2_midp_time_pane_t1

0x436a,	// (0x00061bfb) form2_midp_gauge_slider_pane_t1

0xcf77,	// (0x0006a808) form2_midp_gauge_slider_pane_t2

0xcf89,	// (0x0006a81a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x0006d367) form2_midp_gauge_slider_pane_t

0x43a0,	// (0x00061c31) form2_midp_slider_pane

0x43ac,	// (0x00061c3d) form2_midp_gauge_wait_pane_t1

0x43ba,	// (0x00061c4b) form2_midp_wait_pane_ParamLimits

0x43ba,	// (0x00061c4b) form2_midp_wait_pane

0xcf9b,	// (0x0006a82c) list_single_2graphic_pane_cp4_ParamLimits

0xcf9b,	// (0x0006a82c) list_single_2graphic_pane_cp4

0xb1d5,	// (0x00068a66) list_single_midp_graphic_pane_cp_ParamLimits

0xb1d5,	// (0x00068a66) list_single_midp_graphic_pane_cp

0x70a9,	// (0x0006493a) list_highlight_pane_cp20

0x440d,	// (0x00061c9e) list_single_2graphic_pane_g1_cp4

0x396a,	// (0x000611fb) list_single_2graphic_pane_g2_cp4

0x4415,	// (0x00061ca6) list_single_2graphic_pane_t1_cp4

0x70f7,	// (0x00064988) list_highlight_pane_cp21

0x4424,	// (0x00061cb5) list_single_midp_graphic_pane_g4_cp

0x4433,	// (0x00061cc4) list_single_midp_graphic_pane_t1_cp

0xcfb0,	// (0x0006a841) form2_mdip_string_pane_t1_ParamLimits

0xcfb0,	// (0x0006a841) form2_mdip_string_pane_t1

0x70a9,	// (0x0006493a) bg_wml_button_pane_cp2

0x709f,	// (0x00064930) form2_midp_image_pane_g1

0xe877,	// (0x0006c108) list_double_large_graphic_pane_g5_ParamLimits

0xe877,	// (0x0006c108) list_double_large_graphic_pane_g5

0xa246,	// (0x00067ad7) midp_form_pane_ParamLimits

0x70f7,	// (0x00064988) main_apps_wheel_pane_ParamLimits

0xa9b8,	// (0x00068249) popup_preview_window_ParamLimits

0xa9b8,	// (0x00068249) popup_preview_window

0xac85,	// (0x00068516) popup_touch_info_window_ParamLimits

0xac85,	// (0x00068516) popup_touch_info_window

0xaca3,	// (0x00068534) popup_touch_menu_window_ParamLimits

0xaca3,	// (0x00068534) popup_touch_menu_window

0x7095,	// (0x00064926) bg_popup_sub_pane_cp6

0x454f,	// (0x00061de0) list_touch_menu_pane

0xd026,	// (0x0006a8b7) list_single_touch_menu_pane_ParamLimits

0xd026,	// (0x0006a8b7) list_single_touch_menu_pane

0xd03a,	// (0x0006a8cb) list_single_touch_menu_pane_t1

0x70f7,	// (0x00064988) bg_popup_sub_pane_cp7_ParamLimits

0x70f7,	// (0x00064988) bg_popup_sub_pane_cp7

0x23ae,	// (0x0005fc3f) heading_sub_pane

0x457b,	// (0x00061e0c) list_touch_info_pane_ParamLimits

0x457b,	// (0x00061e0c) list_touch_info_pane

0x458b,	// (0x00061e1c) list_single_touch_info_pane_ParamLimits

0x458b,	// (0x00061e1c) list_single_touch_info_pane

0x459d,	// (0x00061e2e) list_single_touch_info_pane_t1

0x45ab,	// (0x00061e3c) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x0006d375) list_single_touch_info_pane_t

0xc46d,	// (0x00069cfe) bg_popup_heading_pane_cp

0x45b9,	// (0x00061e4a) heading_sub_pane_t1

0x1fbb,	// (0x0005f84c) bg_popup_preview_window_pane_cp_ParamLimits

0x1fbb,	// (0x0005f84c) bg_popup_preview_window_pane_cp

0x23ae,	// (0x0005fc3f) heading_preview_pane

0x457b,	// (0x00061e0c) list_preview_pane_ParamLimits

0x457b,	// (0x00061e0c) list_preview_pane

0x45c7,	// (0x00061e58) popup_preview_window_g1

0x458b,	// (0x00061e1c) list_single_preview_pane_ParamLimits

0x458b,	// (0x00061e1c) list_single_preview_pane

0x45cf,	// (0x00061e60) list_single_preview_pane_g1

0x45d7,	// (0x00061e68) list_single_preview_pane_t1

0x459d,	// (0x00061e2e) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x0006d37a) list_single_preview_pane_t

0x45e5,	// (0x00061e76) bg_popup_heading_pane_cp2_ParamLimits

0x45e5,	// (0x00061e76) bg_popup_heading_pane_cp2

0x45fb,	// (0x00061e8c) heading_preview_pane_g1

0x4603,	// (0x00061e94) heading_preview_pane_t1_ParamLimits

0x4603,	// (0x00061e94) heading_preview_pane_t1

0x714a,	// (0x000649db) soft_indicator_pane_t1_ParamLimits

0x7fae,	// (0x0006583f) scroll_pane_ParamLimits

0x834b,	// (0x00065bdc) scroll_sc2_left_pane

0x8354,	// (0x00065be5) scroll_sc2_right_pane

0x8373,	// (0x00065c04) scroll_bg_pane_g1_ParamLimits

0x8388,	// (0x00065c19) scroll_bg_pane_g2_ParamLimits

0x83a0,	// (0x00065c31) scroll_bg_pane_g3_ParamLimits

0xf6b7,	// (0x0006cf48) scroll_bg_pane_g_ParamLimits

0x8373,	// (0x00065c04) scroll_handle_pane_g1_ParamLimits

0x83b5,	// (0x00065c46) scroll_handle_pane_g2_ParamLimits

0x83a0,	// (0x00065c31) scroll_handle_pane_g3_ParamLimits

0xf6be,	// (0x0006cf4f) scroll_handle_pane_g_ParamLimits

0xa585,	// (0x00067e16) popup_choice_list_window_ParamLimits

0xa585,	// (0x00067e16) popup_choice_list_window

0x1e79,	// (0x0005f70a) choice_list_pane

0x1efb,	// (0x0005f78c) cell_toolbar_pane_t1

0x1f23,	// (0x0005f7b4) toolbar_button_pane_ParamLimits

0x2fff,	// (0x00060890) ai_gene_pane_1_t2_ParamLimits

0x2fff,	// (0x00060890) ai_gene_pane_1_t2

0x0001,

0xf8e1,	// (0x0006d172) ai_gene_pane_1_t_ParamLimits

0xf8e1,	// (0x0006d172) ai_gene_pane_1_t

0x46f5,	// (0x00061f86) scroll_sc2_left_pane_g1

0x46f5,	// (0x00061f86) scroll_sc2_right_pane_g1

0x83d7,	// (0x00065c68) bg_popup_sub_pane_cp10

0x46ff,	// (0x00061f90) list_choice_list_pane

0xcc07,	// (0x0006a498) list_single_choice_list_pane_ParamLimits

0xcc07,	// (0x0006a498) list_single_choice_list_pane

0xd048,	// (0x0006a8d9) list_single_choice_list_pane_g1

0x9de4,	// (0x00067675) list_single_choice_list_pane_t1_ParamLimits

0x9de4,	// (0x00067675) list_single_choice_list_pane_t1

0x4733,	// (0x00061fc4) choice_list_pane_g1

0xd050,	// (0x0006a8e1) choice_list_pane_t1

0x7095,	// (0x00064926) input_focus_pane_cp11

0x82c0,	// (0x00065b51) title_pane_stacon_g2_ParamLimits

0x82c0,	// (0x00065b51) title_pane_stacon_g2

0x0002,

0xf69d,	// (0x0006cf2e) title_pane_stacon_g_ParamLimits

0xf69d,	// (0x0006cf2e) title_pane_stacon_g

0xc46d,	// (0x00069cfe) cursor_press_pane

0xa62c,	// (0x00067ebd) popup_fep_hwr_window_ParamLimits

0xa62c,	// (0x00067ebd) popup_fep_hwr_window

0xf4e3,	// (0x0006cd74) popup_fep_vkb_window_ParamLimits

0xf4e3,	// (0x0006cd74) popup_fep_vkb_window

0xd05e,	// (0x0006a8ef) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x0006d3a3) fep_vkb_side_pane_g_ParamLimits

0x0b2b,	// (0x0005e3bc) fep_hwr_candidate_pane_ParamLimits

0x0b2b,	// (0x0005e3bc) fep_hwr_candidate_pane

0x0b55,	// (0x0005e3e6) fep_hwr_side_pane_ParamLimits

0x0b55,	// (0x0005e3e6) fep_hwr_side_pane

0x0b75,	// (0x0005e406) fep_hwr_top_pane_ParamLimits

0x0b75,	// (0x0005e406) fep_hwr_top_pane

0x0b8d,	// (0x0005e41e) fep_hwr_write_pane_ParamLimits

0x0b8d,	// (0x0005e41e) fep_hwr_write_pane

0xfb12,	// (0x0006d3a3) fep_vkb_side_pane_g

0x4751,	// (0x00061fe2) fep_hwr_top_pane_g1

0x4763,	// (0x00061ff4) fep_hwr_top_pane_g2

0x0bc7,	// (0x0005e458) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x0006d37f) fep_hwr_top_pane_g

0x0bdc,	// (0x0005e46d) fep_hwr_top_text_pane

0xc00b,	// (0x0006989c) fep_hwr_top_text_pane_g1

0x4799,	// (0x0006202a) fep_hwr_top_text_pane_t1

0x0cd2,	// (0x0005e563) fep_hwr_candidate_pane_g1

0x49de,	// (0x0006226f) fep_vkb_keypad_pane_g3_ParamLimits

0x49de,	// (0x0006226f) fep_vkb_keypad_pane_g3

0x4a06,	// (0x00062297) fep_vkb_keypad_pane_g4_ParamLimits

0x4a06,	// (0x00062297) fep_vkb_keypad_pane_g4

0x4a75,	// (0x00062306) fep_vkb_bottom_pane_g2_ParamLimits

0x4a75,	// (0x00062306) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x0006d3aa) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x0006d3aa) fep_vkb_bottom_pane_g

0x46f5,	// (0x00061f86) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x0006d3b4) cell_vkb_side_pane_g

0x4b00,	// (0x00062391) cell_vkb_side_pane_t1

0x4b0e,	// (0x0006239f) cell_vkb_side_pane_t1_copy1

0x46f5,	// (0x00061f86) bg_fep_vkb_candidate_pane_g2

0x4c3a,	// (0x000624cb) cell_vkb_candidate_pane_ParamLimits

0x47a7,	// (0x00062038) aid_size_cell_vkb_ParamLimits

0x47a7,	// (0x00062038) aid_size_cell_vkb

0x4c3a,	// (0x000624cb) cell_vkb_candidate_pane

0x0cf9,	// (0x0005e58a) bg_popup_fep_shadow_pane_g1

0xd085,	// (0x0006a916) fep_vkb_bottom_pane_ParamLimits

0xd085,	// (0x0006a916) fep_vkb_bottom_pane

0x486b,	// (0x000620fc) fep_vkb_candidate_pane_ParamLimits

0x486b,	// (0x000620fc) fep_vkb_candidate_pane

0xd0aa,	// (0x0006a93b) fep_vkb_keypad_pane_ParamLimits

0xd0aa,	// (0x0006a93b) fep_vkb_keypad_pane

0xd0df,	// (0x0006a970) fep_vkb_side_pane_ParamLimits

0xd0df,	// (0x0006a970) fep_vkb_side_pane

0xd11b,	// (0x0006a9ac) fep_vkb_top_pane_ParamLimits

0xd11b,	// (0x0006a9ac) fep_vkb_top_pane

0x4937,	// (0x000621c8) fep_vkb_top_pane_g1_ParamLimits

0x4937,	// (0x000621c8) fep_vkb_top_pane_g1

0x4946,	// (0x000621d7) fep_vkb_top_pane_g2_ParamLimits

0x4946,	// (0x000621d7) fep_vkb_top_pane_g2

0x4955,	// (0x000621e6) fep_vkb_top_pane_g3_ParamLimits

0x4955,	// (0x000621e6) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x0006d39a) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x0006d39a) fep_vkb_top_pane_g

0x4973,	// (0x00062204) fep_vkb_top_text_pane_ParamLimits

0x4973,	// (0x00062204) fep_vkb_top_text_pane

0xd150,	// (0x0006a9e1) fep_vkb_side_pane_g1_ParamLimits

0xd150,	// (0x0006a9e1) fep_vkb_side_pane_g1

0x49cd,	// (0x0006225e) grid_vkb_side_pane_ParamLimits

0x49cd,	// (0x0006225e) grid_vkb_side_pane

0x0d01,	// (0x0005e592) bg_popup_fep_shadow_pane_g2

0x0d0a,	// (0x0005e59b) bg_popup_fep_shadow_pane_g3

0x0d12,	// (0x0005e5a3) bg_popup_fep_shadow_pane_g4

0x0d1b,	// (0x0005e5ac) bg_popup_fep_shadow_pane_g5

0x0d25,	// (0x0005e5b6) bg_popup_fep_shadow_pane_g6

0x0d2d,	// (0x0005e5be) bg_popup_fep_shadow_pane_g7

0x80a2,	// (0x00065933) bg_popup_fep_shadow_pane_g8

0x4a24,	// (0x000622b5) grid_vkb_keypad_number_pane_ParamLimits

0x4a24,	// (0x000622b5) grid_vkb_keypad_number_pane

0x4a34,	// (0x000622c5) grid_vkb_keypad_pane_ParamLimits

0x4a34,	// (0x000622c5) grid_vkb_keypad_pane

0x4a5a,	// (0x000622eb) fep_vkb_bottom_pane_g1_ParamLimits

0x4a5a,	// (0x000622eb) fep_vkb_bottom_pane_g1

0x4a83,	// (0x00062314) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4a83,	// (0x00062314) grid_vkb_keypad_bottom_left_pane

0x4a98,	// (0x00062329) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4a98,	// (0x00062329) grid_vkb_keypad_bottom_right_pane

0x4aad,	// (0x0006233e) fep_vkb_top_text_pane_g1

0xd197,	// (0x0006aa28) fep_vkb_top_text_pane_t1

0xd1a9,	// (0x0006aa3a) cell_vkb_side_pane_ParamLimits

0xd1a9,	// (0x0006aa3a) cell_vkb_side_pane

0x46f5,	// (0x00061f86) cell_vkb_side_pane_g1

0x4b1c,	// (0x000623ad) cell_vkb_keypad_pane_ParamLimits

0x4b1c,	// (0x000623ad) cell_vkb_keypad_pane

0x4b91,	// (0x00062422) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x0006d3c7) bg_popup_fep_shadow_pane_g

0x0d3f,	// (0x0005e5d0) cell_hwr_side_pane_g1

0x0d3f,	// (0x0005e5d0) cell_hwr_side_pane_g2

0x4b9b,	// (0x0006242c) cell_vkb_keypad_pane_t1

0xd1bf,	// (0x0006aa50) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd1bf,	// (0x0006aa50) cell_vkb_keypad_bottom_left_pane

0xd1d4,	// (0x0006aa65) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd1d4,	// (0x0006aa65) cell_vkb_keypad_bottom_right_pane

0x46f5,	// (0x00061f86) cell_vkb_keypad_bottom_left_pane_g1

0x46f5,	// (0x00061f86) cell_vkb_keypad_bottom_right_pane_g1

0x4bff,	// (0x00062490) cell_vkb_keypad_number_pane_ParamLimits

0x4bff,	// (0x00062490) cell_vkb_keypad_number_pane

0x4c1e,	// (0x000624af) cell_vkb_keypad_number_pane_g1

0x4c28,	// (0x000624b9) cell_vkb_keypad_number_pane_g2

0x4c31,	// (0x000624c2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x0006d3b9) cell_vkb_keypad_number_pane_g

0x4b9b,	// (0x0006242c) cell_vkb_keypad_number_pane_t1

0x4c55,	// (0x000624e6) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x0006d3da) cell_hwr_side_pane_g

0x4c6e,	// (0x000624ff) cell_hwr_side_pane_t1

0x0d49,	// (0x0005e5da) cell_hwr_side_pane_t1_copy1

0x0d57,	// (0x0005e5e8) cell_hwr_candidate_pane_g1

0x0d86,	// (0x0005e617) cell_hwr_candidate_pane_t1

0x46f5,	// (0x00061f86) cell_vkb_candidate_pane_g2

0x4cd3,	// (0x00062564) cell_vkb_candidate_pane_t1

0x0af2,	// (0x0005e383) bg_popup_fep_shadow_pane_ParamLimits

0x0af2,	// (0x0005e383) bg_popup_fep_shadow_pane

0x0ba7,	// (0x0005e438) bg_fep_hwr_top_pane_g4

0x4775,	// (0x00062006) bg_hwr_side_pane_g1_ParamLimits

0x4775,	// (0x00062006) bg_hwr_side_pane_g1

0xb58a,	// (0x00068e1b) cell_hwr_side_pane_ParamLimits

0xb58a,	// (0x00068e1b) cell_hwr_side_pane

0x0c53,	// (0x0005e4e4) fep_hwr_write_pane_g1_ParamLimits

0x0c53,	// (0x0005e4e4) fep_hwr_write_pane_g1

0x0c60,	// (0x0005e4f1) fep_hwr_write_pane_g2_ParamLimits

0x0c60,	// (0x0005e4f1) fep_hwr_write_pane_g2

0x0c6d,	// (0x0005e4fe) fep_hwr_write_pane_g3_ParamLimits

0x0c6d,	// (0x0005e4fe) fep_hwr_write_pane_g3

0xb5aa,	// (0x00068e3b) fep_hwr_write_pane_g4_ParamLimits

0xb5aa,	// (0x00068e3b) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x0006d386) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x0006d386) fep_hwr_write_pane_g

0x0ba7,	// (0x0005e438) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0ba7,	// (0x0005e438) bg_fep_hwr_candidate_pane_g2

0x0c90,	// (0x0005e521) cell_hwr_candidate_pane_ParamLimits

0x0c90,	// (0x0005e521) cell_hwr_candidate_pane

0x0cd2,	// (0x0005e563) fep_hwr_candidate_pane_g1_ParamLimits

0x47d5,	// (0x00062066) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x47d5,	// (0x00062066) bg_popup_fep_shadow_pane_cp2

0x4965,	// (0x000621f6) fep_vkb_top_pane_g4_ParamLimits

0x4965,	// (0x000621f6) fep_vkb_top_pane_g4

0x49ab,	// (0x0006223c) fep_vkb_side_pane_g2_ParamLimits

0x49ab,	// (0x0006223c) fep_vkb_side_pane_g2

0x9aef,	// (0x00067380) list_setting_pane_t4_ParamLimits

0x9aef,	// (0x00067380) list_setting_pane_t4

0x9b89,	// (0x0006741a) list_setting_number_pane_t5_ParamLimits

0x9b89,	// (0x0006741a) list_setting_number_pane_t5

0xc042,	// (0x000698d3) list_double_heading_pane_cp2_ParamLimits

0xc042,	// (0x000698d3) list_double_heading_pane_cp2

0xd1ef,	// (0x0006aa80) list_double_heading_pane_g1_cp2_ParamLimits

0xd1ef,	// (0x0006aa80) list_double_heading_pane_g1_cp2

0x4ce1,	// (0x00062572) list_double_heading_pane_g2_cp2_ParamLimits

0x4ce1,	// (0x00062572) list_double_heading_pane_g2_cp2

0x4cf5,	// (0x00062586) list_double_heading_pane_t1_cp2_ParamLimits

0x4cf5,	// (0x00062586) list_double_heading_pane_t1_cp2

0x4d0b,	// (0x0006259c) list_double_heading_pane_t2_cp2_ParamLimits

0x4d0b,	// (0x0006259c) list_double_heading_pane_t2_cp2

0x708d,	// (0x0006491e) aid_value_unit2

0xe855,	// (0x0006c0e6) popup_preview_fixed_window

0x722f,	// (0x00064ac0) bg_popup_preview_window_pane_cp02

0x4d1d,	// (0x000625ae) list_preview_fixed_pane

0x4d63,	// (0x000625f4) list_empty_pane_fp_ParamLimits

0x4d63,	// (0x000625f4) list_empty_pane_fp

0x4d63,	// (0x000625f4) list_single_cale_day_pane_fp_ParamLimits

0x4d63,	// (0x000625f4) list_single_cale_day_pane_fp

0x4d63,	// (0x000625f4) list_single_graphic_heading_pane_fp_ParamLimits

0x4d63,	// (0x000625f4) list_single_graphic_heading_pane_fp

0x4d63,	// (0x000625f4) list_single_graphic_pane_fp_ParamLimits

0x4d63,	// (0x000625f4) list_single_graphic_pane_fp

0x4d63,	// (0x000625f4) list_single_heading_pane_fp_ParamLimits

0x4d63,	// (0x000625f4) list_single_heading_pane_fp

0x4d63,	// (0x000625f4) list_single_pane_fp_ParamLimits

0x4d63,	// (0x000625f4) list_single_pane_fp

0x4d79,	// (0x0006260a) list_single_pane_fp_g1_ParamLimits

0x4d79,	// (0x0006260a) list_single_pane_fp_g1

0xd1fb,	// (0x0006aa8c) list_single_pane_fp_g2_ParamLimits

0xd1fb,	// (0x0006aa8c) list_single_pane_fp_g2

0x4d85,	// (0x00062616) list_single_pane_fp_g3_ParamLimits

0x4d85,	// (0x00062616) list_single_pane_fp_g3

0x4d99,	// (0x0006262a) list_single_pane_fp_g4_ParamLimits

0x4d99,	// (0x0006262a) list_single_pane_fp_g4

0x0003,

0xfb5c,	// (0x0006d3ed) list_single_pane_fp_g_ParamLimits

0xfb5c,	// (0x0006d3ed) list_single_pane_fp_g

0xee76,	// (0x0006c707) list_single_pane_fp_t1_ParamLimits

0xee76,	// (0x0006c707) list_single_pane_fp_t1

0xee8d,	// (0x0006c71e) list_single_graphic_pane_fp_g1_ParamLimits

0xee8d,	// (0x0006c71e) list_single_graphic_pane_fp_g1

0x4d79,	// (0x0006260a) list_single_graphic_pane_fp_g2_ParamLimits

0x4d79,	// (0x0006260a) list_single_graphic_pane_fp_g2

0xd1fb,	// (0x0006aa8c) list_single_graphic_pane_fp_g3_ParamLimits

0xd1fb,	// (0x0006aa8c) list_single_graphic_pane_fp_g3

0x4d85,	// (0x00062616) list_single_graphic_pane_fp_g4_ParamLimits

0x4d85,	// (0x00062616) list_single_graphic_pane_fp_g4

0x4d99,	// (0x0006262a) list_single_graphic_pane_fp_g5_ParamLimits

0x4d99,	// (0x0006262a) list_single_graphic_pane_fp_g5

0x0004,

0xfb65,	// (0x0006d3f6) list_single_graphic_pane_fp_g_ParamLimits

0xfb65,	// (0x0006d3f6) list_single_graphic_pane_fp_g

0xee99,	// (0x0006c72a) list_single_graphic_pane_fp_t1_ParamLimits

0xee99,	// (0x0006c72a) list_single_graphic_pane_fp_t1

0xee8d,	// (0x0006c71e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xee8d,	// (0x0006c71e) list_single_graphic_heading_pane_fp_g1

0x4d79,	// (0x0006260a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4d79,	// (0x0006260a) list_single_graphic_heading_pane_fp_g2

0xd1fb,	// (0x0006aa8c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd1fb,	// (0x0006aa8c) list_single_graphic_heading_pane_fp_g3

0x4d85,	// (0x00062616) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4d85,	// (0x00062616) list_single_graphic_heading_pane_fp_g4

0x4d99,	// (0x0006262a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4d99,	// (0x0006262a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb65,	// (0x0006d3f6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb65,	// (0x0006d3f6) list_single_graphic_heading_pane_fp_g

0xeeaf,	// (0x0006c740) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xeeaf,	// (0x0006c740) list_single_graphic_heading_pane_fp_t1

0xeec5,	// (0x0006c756) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xeec5,	// (0x0006c756) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb70,	// (0x0006d401) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb70,	// (0x0006d401) list_single_graphic_heading_pane_fp_t

0xeed7,	// (0x0006c768) list_single_cale_day_pane_fp_g1_ParamLimits

0xeed7,	// (0x0006c768) list_single_cale_day_pane_fp_g1

0x4da5,	// (0x00062636) list_single_cale_day_pane_fp_g2_ParamLimits

0x4da5,	// (0x00062636) list_single_cale_day_pane_fp_g2

0x4620,	// (0x00061eb1) list_single_cale_day_pane_fp_g3_ParamLimits

0x4620,	// (0x00061eb1) list_single_cale_day_pane_fp_g3

0x4648,	// (0x00061ed9) list_single_cale_day_pane_fp_g4_ParamLimits

0x4648,	// (0x00061ed9) list_single_cale_day_pane_fp_g4

0x466c,	// (0x00061efd) list_single_cale_day_pane_fp_g5_ParamLimits

0x466c,	// (0x00061efd) list_single_cale_day_pane_fp_g5

0x0004,

0xfb75,	// (0x0006d406) list_single_cale_day_pane_fp_g_ParamLimits

0xfb75,	// (0x0006d406) list_single_cale_day_pane_fp_g

0xef0f,	// (0x0006c7a0) list_single_cale_day_pane_fp_t1_ParamLimits

0xef0f,	// (0x0006c7a0) list_single_cale_day_pane_fp_t1

0xef35,	// (0x0006c7c6) list_single_cale_day_pane_fp_t2_ParamLimits

0xef35,	// (0x0006c7c6) list_single_cale_day_pane_fp_t2

0xef4e,	// (0x0006c7df) list_single_cale_day_pane_fp_t3_ParamLimits

0xef4e,	// (0x0006c7df) list_single_cale_day_pane_fp_t3

0x0002,

0xfb80,	// (0x0006d411) list_single_cale_day_pane_fp_t_ParamLimits

0xfb80,	// (0x0006d411) list_single_cale_day_pane_fp_t

0x4d79,	// (0x0006260a) list_empty_pane_fp_g1_ParamLimits

0x4d79,	// (0x0006260a) list_empty_pane_fp_g1

0xef67,	// (0x0006c7f8) list_empty_pane_fp_t1

0xef75,	// (0x0006c806) list_empty_pane_fp_t2

0x0001,

0xfb87,	// (0x0006d418) list_empty_pane_fp_t

0x4d79,	// (0x0006260a) list_single_heading_pane_fp_g1_ParamLimits

0x4d79,	// (0x0006260a) list_single_heading_pane_fp_g1

0xd1fb,	// (0x0006aa8c) list_single_heading_pane_fp_g2_ParamLimits

0xd1fb,	// (0x0006aa8c) list_single_heading_pane_fp_g2

0x4d85,	// (0x00062616) list_single_heading_pane_fp_g3_ParamLimits

0x4d85,	// (0x00062616) list_single_heading_pane_fp_g3

0x0002,

0xfb8c,	// (0x0006d41d) list_single_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0006d41d) list_single_heading_pane_fp_g

0xef83,	// (0x0006c814) list_single_heading_pane_fp_t1_ParamLimits

0xef83,	// (0x0006c814) list_single_heading_pane_fp_t1

0xef95,	// (0x0006c826) list_single_heading_pane_fp_t2_ParamLimits

0xef95,	// (0x0006c826) list_single_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x0006d424) list_single_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x0006d424) list_single_heading_pane_fp_t

0x9e30,	// (0x000676c1) aid_size_cell_fast

0x7204,	// (0x00064a95) soft_indicator_pane_cp1_t1

0x9e39,	// (0x000676ca) cell_app_pane_cp2_ParamLimits

0x9e39,	// (0x000676ca) cell_app_pane_cp2

0x0b14,	// (0x0005e3a5) fep_hwr_candidate_drop_down_list_pane

0x0cec,	// (0x0005e57d) fep_hwr_candidate_pane_g3_ParamLimits

0x0cec,	// (0x0005e57d) fep_hwr_candidate_pane_g3

0xd066,	// (0x0006a8f7) fep_hwr_candidate_pane_g4_ParamLimits

0xd066,	// (0x0006a8f7) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x0006d393) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x0006d393) fep_hwr_candidate_pane_g

0x485a,	// (0x000620eb) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x485a,	// (0x000620eb) fep_vkb_candidate_drop_down_list_pane

0x4c5d,	// (0x000624ee) fep_vkb_candidate_pane_g3

0x4c65,	// (0x000624f6) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x0006d3c0) fep_vkb_candidate_pane_g

0x0d57,	// (0x0005e5e8) cell_hwr_candidate_pane_g1_ParamLimits

0x0d65,	// (0x0005e5f6) cell_hwr_candidate_pane_g3_ParamLimits

0x0d65,	// (0x0005e5f6) cell_hwr_candidate_pane_g3

0x4c7c,	// (0x0006250d) cell_hwr_candidate_pane_g4_ParamLimits

0x4c7c,	// (0x0006250d) cell_hwr_candidate_pane_g4

0x0002,

0xfb4e,	// (0x0006d3df) cell_hwr_candidate_pane_g_ParamLimits

0xfb4e,	// (0x0006d3df) cell_hwr_candidate_pane_g

0x4c9d,	// (0x0006252e) cell_vkb_candidate_pane_g3_ParamLimits

0x4c9d,	// (0x0006252e) cell_vkb_candidate_pane_g3

0x4cb8,	// (0x00062549) cell_vkb_candidate_pane_g4_ParamLimits

0x4cb8,	// (0x00062549) cell_vkb_candidate_pane_g4

0xd207,	// (0x0006aa98) cell_app_pane_cp2_g1_ParamLimits

0xd207,	// (0x0006aa98) cell_app_pane_cp2_g1

0x4dcf,	// (0x00062660) cell_app_pane_cp2_g2_ParamLimits

0x4dcf,	// (0x00062660) cell_app_pane_cp2_g2

0x0001,

0xfb98,	// (0x0006d429) cell_app_pane_cp2_g_ParamLimits

0xfb98,	// (0x0006d429) cell_app_pane_cp2_g

0x4ddb,	// (0x0006266c) cell_app_pane_cp2_t1_ParamLimits

0x4ddb,	// (0x0006266c) cell_app_pane_cp2_t1

0x8032,	// (0x000658c3) grid_highlight_pane_cp1_ParamLimits

0x8032,	// (0x000658c3) grid_highlight_pane_cp1

0x0da4,	// (0x0005e635) cell_hwr_candidate_pane_cp1_ParamLimits

0x0da4,	// (0x0005e635) cell_hwr_candidate_pane_cp1

0x0d57,	// (0x0005e5e8) fep_hwr_candidate_drop_down_list_pane_g1

0x0dc3,	// (0x0005e654) fep_hwr_candidate_drop_down_list_pane_g2

0x0dd0,	// (0x0005e661) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x0006d42e) fep_hwr_candidate_drop_down_list_pane_g

0x0ddd,	// (0x0005e66e) fep_hwr_candidate_drop_down_list_scroll_pane

0x0de6,	// (0x0005e677) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0de6,	// (0x0005e677) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0df3,	// (0x0005e684) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0df3,	// (0x0005e684) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0e00,	// (0x0005e691) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0e00,	// (0x0005e691) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0e0d,	// (0x0005e69e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0e0d,	// (0x0005e69e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0e28,	// (0x0005e6b9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0e28,	// (0x0005e6b9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0e43,	// (0x0005e6d4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0e43,	// (0x0005e6d4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0e5e,	// (0x0005e6ef) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0e5e,	// (0x0005e6ef) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0e79,	// (0x0005e70a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0e79,	// (0x0005e70a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba4,	// (0x0006d435) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba4,	// (0x0006d435) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4ded,	// (0x0006267e) cell_vkb_candidate_pane_cp1_ParamLimits

0x4ded,	// (0x0006267e) cell_vkb_candidate_pane_cp1

0x4965,	// (0x000621f6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4965,	// (0x000621f6) fep_vkb_candidate_drop_down_list_pane_g1

0x4e0d,	// (0x0006269e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e0d,	// (0x0006269e) fep_vkb_candidate_drop_down_list_pane_g2

0x4e1a,	// (0x000626ab) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e1a,	// (0x000626ab) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x0006d446) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x0006d446) fep_vkb_candidate_drop_down_list_pane_g

0x4e27,	// (0x000626b8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e27,	// (0x000626b8) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e34,	// (0x000626c5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e34,	// (0x000626c5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e41,	// (0x000626d2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e41,	// (0x000626d2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4e4d,	// (0x000626de) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e4d,	// (0x000626de) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e59,	// (0x000626ea) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e59,	// (0x000626ea) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4e7a,	// (0x0006270b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4e7a,	// (0x0006270b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4e9b,	// (0x0006272c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4e9b,	// (0x0006272c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4ebc,	// (0x0006274d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4ebc,	// (0x0006274d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4edd,	// (0x0006276e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4edd,	// (0x0006276e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x0006d44d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x0006d44d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x917f,	// (0x00066a10) title_pane_g1_ParamLimits

0x9192,	// (0x00066a23) title_pane_g2_ParamLimits

0xf527,	// (0x0006cdb8) title_pane_g_ParamLimits

0xbffb,	// (0x0006988c) aid_call2_pane

0xc003,	// (0x00069894) aid_call_pane

0xc00b,	// (0x0006989c) popup_clock_analogue_window_g1

0xc00b,	// (0x0006989c) popup_clock_analogue_window_g2

0xf226,	// (0x0006cab7) popup_clock_analogue_window_g3

0xf22f,	// (0x0006cac0) popup_clock_analogue_window_g4

0x709f,	// (0x00064930) popup_clock_analogue_window_g5

0x0004,

0xf6cc,	// (0x0006cf5d) popup_clock_analogue_window_g

0xf237,	// (0x0006cac8) popup_clock_analogue_window_t1

0xf245,	// (0x0006cad6) clock_digital_number_pane_ParamLimits

0xf245,	// (0x0006cad6) clock_digital_number_pane

0xf251,	// (0x0006cae2) clock_digital_number_pane_cp02_ParamLimits

0xf251,	// (0x0006cae2) clock_digital_number_pane_cp02

0xf25d,	// (0x0006caee) clock_digital_number_pane_cp03_ParamLimits

0xf25d,	// (0x0006caee) clock_digital_number_pane_cp03

0xf269,	// (0x0006cafa) clock_digital_number_pane_cp04_ParamLimits

0xf269,	// (0x0006cafa) clock_digital_number_pane_cp04

0xf275,	// (0x0006cb06) clock_digital_separator_pane_ParamLimits

0xf275,	// (0x0006cb06) clock_digital_separator_pane

0xf281,	// (0x0006cb12) popup_clock_digital_window_t1_ParamLimits

0xf281,	// (0x0006cb12) popup_clock_digital_window_t1

0x709f,	// (0x00064930) clock_digital_number_pane_g1

0x709f,	// (0x00064930) clock_digital_number_pane_g2

0x0001,

0xf6d7,	// (0x0006cf68) clock_digital_number_pane_g

0x709f,	// (0x00064930) clock_digital_separator_pane_g1

0x709f,	// (0x00064930) clock_digital_separator_pane_g2

0x0001,

0xf6d7,	// (0x0006cf68) clock_digital_separator_pane_g

0xacda,	// (0x0006856b) aid_fill_nsta_ParamLimits

0xae10,	// (0x000686a1) indicator_nsta_pane_ParamLimits

0x0499,	// (0x0005dd2a) popup_clock_analogue_window

0x0499,	// (0x0005dd2a) popup_clock_digital_window

0xce1a,	// (0x0006a6ab) grid_indicator_nsta_pane_ParamLimits

0x401d,	// (0x000618ae) clock_nsta_pane_t2

0x0001,

0x8a4f,	// (0x000662e0) clock_nsta_pane_t

0xf207,	// (0x0006ca98) aid_size_max_handle

0x9f17,	// (0x000677a8) aid_size_min_handle

0xc46d,	// (0x00069cfe) editor_scroll_pane

0x4ef8,	// (0x00062789) ex_editor_pane

0x8164,	// (0x000659f5) scroll_pane_cp13

0x7fda,	// (0x0006586b) scroll_pane_cp14

0xc03a,	// (0x000698cb) scroll_pane_cp36

0x9fe1,	// (0x00067872) list_single_graphic_hl_pane_cp2_ParamLimits

0x9fe1,	// (0x00067872) list_single_graphic_hl_pane_cp2

0xb4d1,	// (0x00068d62) list_single_graphic_hl_pane_ParamLimits

0xb4d1,	// (0x00068d62) list_single_graphic_hl_pane

0xb5bf,	// (0x00068e50) aid_size_min_hl_cp1

0x4f00,	// (0x00062791) list_highlight_pane_cp34_ParamLimits

0x4f00,	// (0x00062791) list_highlight_pane_cp34

0x4f11,	// (0x000627a2) list_single_graphic_hl_pane_g1_ParamLimits

0x4f11,	// (0x000627a2) list_single_graphic_hl_pane_g1

0xb5c8,	// (0x00068e59) list_single_graphic_hl_pane_g2_ParamLimits

0xb5c8,	// (0x00068e59) list_single_graphic_hl_pane_g2

0xb5c8,	// (0x00068e59) list_single_graphic_hl_pane_g3_ParamLimits

0xb5c8,	// (0x00068e59) list_single_graphic_hl_pane_g3

0xc3f8,	// (0x00069c89) list_single_graphic_hl_pane_g4_ParamLimits

0xc3f8,	// (0x00069c89) list_single_graphic_hl_pane_g4

0xb5d4,	// (0x00068e65) list_single_graphic_hl_pane_g5_ParamLimits

0xb5d4,	// (0x00068e65) list_single_graphic_hl_pane_g5

0x0004,

0xfbcd,	// (0x0006d45e) list_single_graphic_hl_pane_g_ParamLimits

0xfbcd,	// (0x0006d45e) list_single_graphic_hl_pane_g

0xb5e8,	// (0x00068e79) list_single_graphic_hl_pane_t1_ParamLimits

0xb5e8,	// (0x00068e79) list_single_graphic_hl_pane_t1

0x4f1e,	// (0x000627af) aid_size_min_hl_cp2

0x4f27,	// (0x000627b8) list_highlight_pane_cp34_cp2_ParamLimits

0x4f27,	// (0x000627b8) list_highlight_pane_cp34_cp2

0x4f11,	// (0x000627a2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f11,	// (0x000627a2) list_single_graphic_hl_pane_g1_cp2

0x4f34,	// (0x000627c5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f34,	// (0x000627c5) list_single_graphic_hl_pane_g2_cp2

0xd225,	// (0x0006aab6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd225,	// (0x0006aab6) list_single_graphic_hl_pane_g3_cp2

0xbed8,	// (0x00069769) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbed8,	// (0x00069769) list_single_graphic_hl_pane_g4_cp2

0x4f4e,	// (0x000627df) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f4e,	// (0x000627df) list_single_graphic_hl_pane_g5_cp2

0xa3f9,	// (0x00067c8a) control_pane_g4_ParamLimits

0xa3f9,	// (0x00067c8a) control_pane_g4

0x83d7,	// (0x00065c68) bg_popup_sub_pane_cp10_ParamLimits

0x46ff,	// (0x00061f90) list_choice_list_pane_ParamLimits

0x470e,	// (0x00061f9f) scroll_pane_cp23

0x722f,	// (0x00064ac0) bg_popup_preview_window_pane_cp02_ParamLimits

0x4d1d,	// (0x000625ae) list_preview_fixed_pane_ParamLimits

0x4d33,	// (0x000625c4) list_preview_fixed_pane_cp_ParamLimits

0x4d33,	// (0x000625c4) list_preview_fixed_pane_cp

0x4d3f,	// (0x000625d0) popup_preview_fixed_window_g1_ParamLimits

0x4d3f,	// (0x000625d0) popup_preview_fixed_window_g1

0x4d4b,	// (0x000625dc) popup_preview_fixed_window_g2_ParamLimits

0x4d4b,	// (0x000625dc) popup_preview_fixed_window_g2

0x0002,

0xfb55,	// (0x0006d3e6) popup_preview_fixed_window_g_ParamLimits

0xfb55,	// (0x0006d3e6) popup_preview_fixed_window_g

0xe9e7,	// (0x0006c278) aid_navi_side_left_pane_ParamLimits

0xe9fc,	// (0x0006c28d) aid_navi_side_right_pane_ParamLimits

0xea14,	// (0x0006c2a5) navi_icon_pane_stacon_ParamLimits

0xea28,	// (0x0006c2b9) navi_navi_pane_stacon_ParamLimits

0xea14,	// (0x0006c2a5) navi_text_pane_stacon_ParamLimits

0xe835,	// (0x0006c0c6) main_text_info_pane

0x4f78,	// (0x00062809) listscroll_text_info_pane

0x4f80,	// (0x00062811) list_text_info_pane_ParamLimits

0x4f80,	// (0x00062811) list_text_info_pane

0x4f8f,	// (0x00062820) scroll_pane_cp24_ParamLimits

0x4f8f,	// (0x00062820) scroll_pane_cp24

0xd233,	// (0x0006aac4) list_text_info_pane_t1_ParamLimits

0xd233,	// (0x0006aac4) list_text_info_pane_t1

0xa5a1,	// (0x00067e32) popup_fast_swap2_window_ParamLimits

0xa5a1,	// (0x00067e32) popup_fast_swap2_window

0x4fe1,	// (0x00062872) aid_size_cell_fast2

0x7095,	// (0x00064926) bg_popup_window_pane_cp17

0x23ae,	// (0x0005fc3f) heading_pane_cp2

0x4feb,	// (0x0006287c) listscroll_fast2_pane

0xd24f,	// (0x0006aae0) grid_fast2_pane

0xd259,	// (0x0006aaea) listscroll_fast2_pane_g1

0xd261,	// (0x0006aaf2) listscroll_fast2_pane_g2

0x0001,

0xfbd8,	// (0x0006d469) listscroll_fast2_pane_g

0x8164,	// (0x000659f5) scroll_pane_cp26

0x500f,	// (0x000628a0) cell_fast2_pane_ParamLimits

0x500f,	// (0x000628a0) cell_fast2_pane

0x5024,	// (0x000628b5) cell_fast2_pane_g1

0x502d,	// (0x000628be) cell_fast2_pane_g2

0x5036,	// (0x000628c7) cell_fast2_pane_g3

0x0002,

0xfbdd,	// (0x0006d46e) cell_fast2_pane_g

0x739a,	// (0x00064c2b) grid_highlight_pane_cp9

0xf4cb,	// (0x0006cd5c) main_eswt_pane_ParamLimits

0xf4cb,	// (0x0006cd5c) main_eswt_pane

0x4fa4,	// (0x00062835) list_single_text_info_pane

0x503e,	// (0x000628cf) eswt_ctrl_button_pane

0x503e,	// (0x000628cf) eswt_ctrl_canvas_pane

0xd26b,	// (0x0006aafc) eswt_ctrl_combo_pane

0x503e,	// (0x000628cf) eswt_ctrl_default_pane

0x503e,	// (0x000628cf) eswt_ctrl_label_pane

0x504e,	// (0x000628df) eswt_ctrl_wait_pane

0xd273,	// (0x0006ab04) eswt_shell_pane

0x7095,	// (0x00064926) listscroll_eswt_app_pane

0x5076,	// (0x00062907) popup_eswt_tasktip_window_ParamLimits

0x5076,	// (0x00062907) popup_eswt_tasktip_window

0x1fbb,	// (0x0005f84c) bg_popup_window_pane_cp18

0x5087,	// (0x00062918) eswt_control_pane_g1_ParamLimits

0x5087,	// (0x00062918) eswt_control_pane_g1

0x5094,	// (0x00062925) eswt_control_pane_g2_ParamLimits

0x5094,	// (0x00062925) eswt_control_pane_g2

0x50a1,	// (0x00062932) eswt_control_pane_g3_ParamLimits

0x50a1,	// (0x00062932) eswt_control_pane_g3

0x50ae,	// (0x0006293f) eswt_control_pane_g4_ParamLimits

0x50ae,	// (0x0006293f) eswt_control_pane_g4

0x0003,

0xfbe4,	// (0x0006d475) eswt_control_pane_g_ParamLimits

0xfbe4,	// (0x0006d475) eswt_control_pane_g

0x8032,	// (0x000658c3) bg_button_pane_ParamLimits

0x8032,	// (0x000658c3) bg_button_pane

0x73af,	// (0x00064c40) common_borders_pane_copy2_ParamLimits

0x73af,	// (0x00064c40) common_borders_pane_copy2

0x50bb,	// (0x0006294c) control_button_pane_g1_ParamLimits

0x50bb,	// (0x0006294c) control_button_pane_g1

0x50c7,	// (0x00062958) control_button_pane_g2_ParamLimits

0x50c7,	// (0x00062958) control_button_pane_g2

0x50d3,	// (0x00062964) control_button_pane_g3_ParamLimits

0x50d3,	// (0x00062964) control_button_pane_g3

0x0002,

0xfbed,	// (0x0006d47e) control_button_pane_g_ParamLimits

0xfbed,	// (0x0006d47e) control_button_pane_g

0x50e7,	// (0x00062978) control_button_pane_t1

0x50f5,	// (0x00062986) control_button_pane_t2

0x0001,

0xfbf4,	// (0x0006d485) control_button_pane_t

0x1f2f,	// (0x0005f7c0) bg_button_pane_g1

0x1f3f,	// (0x0005f7d0) bg_button_pane_g2

0x1f37,	// (0x0005f7c8) bg_button_pane_g3

0x1f4f,	// (0x0005f7e0) bg_button_pane_g4

0x1f47,	// (0x0005f7d8) bg_button_pane_g5

0x1f57,	// (0x0005f7e8) bg_button_pane_g6

0x1f5f,	// (0x0005f7f0) bg_button_pane_g7

0x1f6f,	// (0x0005f800) bg_button_pane_g8

0x1f67,	// (0x0005f7f8) bg_button_pane_g9

0x0008,

0xf835,	// (0x0006d0c6) bg_button_pane_g

0x45e5,	// (0x00061e76) common_borders_pane_ParamLimits

0x45e5,	// (0x00061e76) common_borders_pane

0x5087,	// (0x00062918) eswt_control_pane_g1_copy1_ParamLimits

0x5087,	// (0x00062918) eswt_control_pane_g1_copy1

0x5094,	// (0x00062925) eswt_control_pane_g2_copy1_ParamLimits

0x5094,	// (0x00062925) eswt_control_pane_g2_copy1

0x50a1,	// (0x00062932) eswt_control_pane_g3_copy1_ParamLimits

0x50a1,	// (0x00062932) eswt_control_pane_g3_copy1

0x50ae,	// (0x0006293f) eswt_control_pane_g4_copy1_ParamLimits

0x50ae,	// (0x0006293f) eswt_control_pane_g4_copy1

0x46f5,	// (0x00061f86) bg_eswt_ctrl_canvas_pane_g1

0x45e5,	// (0x00061e76) common_borders_pane_cp2_ParamLimits

0x45e5,	// (0x00061e76) common_borders_pane_cp2

0x45e5,	// (0x00061e76) common_borders_pane_cp3_ParamLimits

0x45e5,	// (0x00061e76) common_borders_pane_cp3

0x5103,	// (0x00062994) separator_horizontal_pane

0x510b,	// (0x0006299c) separator_vertical_pane

0x5087,	// (0x00062918) eswt_control_pane_g1_copy2_ParamLimits

0x5087,	// (0x00062918) eswt_control_pane_g1_copy2

0x5094,	// (0x00062925) eswt_control_pane_g2_copy2_ParamLimits

0x5094,	// (0x00062925) eswt_control_pane_g2_copy2

0x50a1,	// (0x00062932) eswt_control_pane_g3_copy2_ParamLimits

0x50a1,	// (0x00062932) eswt_control_pane_g3_copy2

0x50ae,	// (0x0006293f) eswt_control_pane_g4_copy2_ParamLimits

0x50ae,	// (0x0006293f) eswt_control_pane_g4_copy2

0x7095,	// (0x00064926) common_borders_pane_cp4

0x5114,	// (0x000629a5) separator_horizontal_pane_g1

0x511d,	// (0x000629ae) separator_horizontal_pane_g2

0x5126,	// (0x000629b7) separator_horizontal_pane_g3

0x0002,

0xfbf9,	// (0x0006d48a) separator_horizontal_pane_g

0x5087,	// (0x00062918) eswt_control_pane_g1_copy3_ParamLimits

0x5087,	// (0x00062918) eswt_control_pane_g1_copy3

0x5094,	// (0x00062925) eswt_control_pane_g2_copy3_ParamLimits

0x5094,	// (0x00062925) eswt_control_pane_g2_copy3

0x50a1,	// (0x00062932) eswt_control_pane_g3_copy3_ParamLimits

0x50a1,	// (0x00062932) eswt_control_pane_g3_copy3

0x50ae,	// (0x0006293f) eswt_control_pane_g4_copy3_ParamLimits

0x50ae,	// (0x0006293f) eswt_control_pane_g4_copy3

0x7095,	// (0x00064926) common_borders_pane_cp5

0x512f,	// (0x000629c0) separator_vertical_pane_g1

0x5138,	// (0x000629c9) separator_vertical_pane_g2

0x5141,	// (0x000629d2) separator_vertical_pane_g3

0x0002,

0xfc00,	// (0x0006d491) separator_vertical_pane_g

0x5087,	// (0x00062918) eswt_control_pane_g1_copy4_ParamLimits

0x5087,	// (0x00062918) eswt_control_pane_g1_copy4

0x5094,	// (0x00062925) eswt_control_pane_g2_copy4_ParamLimits

0x5094,	// (0x00062925) eswt_control_pane_g2_copy4

0x50a1,	// (0x00062932) eswt_control_pane_g3_copy4_ParamLimits

0x50a1,	// (0x00062932) eswt_control_pane_g3_copy4

0x50ae,	// (0x0006293f) eswt_control_pane_g4_copy4_ParamLimits

0x50ae,	// (0x0006293f) eswt_control_pane_g4_copy4

0xd293,	// (0x0006ab24) eswt_ctrl_combo_button_pane

0xd29b,	// (0x0006ab2c) eswt_ctrl_input_pane

0xd2a3,	// (0x0006ab34) popup_choice_list_window_cp70

0xd2ab,	// (0x0006ab3c) eswt_ctrl_input_pane_t1

0x7095,	// (0x00064926) input_focus_pane_cp70

0x45e5,	// (0x00061e76) bg_button_pane_cp70_ParamLimits

0x45e5,	// (0x00061e76) bg_button_pane_cp70

0xd2b9,	// (0x0006ab4a) eswt_ctrl_combo_button_pane_g1

0x5178,	// (0x00062a09) wait_bar_pane_cp70

0x1fbb,	// (0x0005f84c) bg_popup_window_pane_cp70_ParamLimits

0x1fbb,	// (0x0005f84c) bg_popup_window_pane_cp70

0x5180,	// (0x00062a11) popup_eswt_tasktip_window_t1

0x5196,	// (0x00062a27) wait_bar_pane_cp71_ParamLimits

0x5196,	// (0x00062a27) wait_bar_pane_cp71

0x51a2,	// (0x00062a33) grid_eswt_app_pane

0x834b,	// (0x00065bdc) scroll_pane_cp70

0xd2c1,	// (0x0006ab52) cell_eswt_app_pane_ParamLimits

0xd2c1,	// (0x0006ab52) cell_eswt_app_pane

0xd2eb,	// (0x0006ab7c) cell_eswt_app_pane_g1_ParamLimits

0xd2eb,	// (0x0006ab7c) cell_eswt_app_pane_g1

0xd31a,	// (0x0006abab) cell_eswt_app_pane_g2_ParamLimits

0xd31a,	// (0x0006abab) cell_eswt_app_pane_g2

0x0001,

0xfc07,	// (0x0006d498) cell_eswt_app_pane_g_ParamLimits

0xfc07,	// (0x0006d498) cell_eswt_app_pane_g

0xd33e,	// (0x0006abcf) cell_eswt_app_pane_t1_ParamLimits

0xd33e,	// (0x0006abcf) cell_eswt_app_pane_t1

0x5260,	// (0x00062af1) grid_highlight_pane_cp70_ParamLimits

0x5260,	// (0x00062af1) grid_highlight_pane_cp70

0xc36f,	// (0x00069c00) set_content_pane_g1

0xa38b,	// (0x00067c1c) status_small_volume_pane

0xb5fe,	// (0x00068e8f) status_small_volume_pane_g1

0xb606,	// (0x00068e97) volume_small2_pane

0xb60f,	// (0x00068ea0) volume_small2_pane_g1

0xb618,	// (0x00068ea9) volume_small2_pane_g2

0xb621,	// (0x00068eb2) volume_small2_pane_g3

0xb62a,	// (0x00068ebb) volume_small2_pane_g4

0xb633,	// (0x00068ec4) volume_small2_pane_g5

0xb63c,	// (0x00068ecd) volume_small2_pane_g6

0xb645,	// (0x00068ed6) volume_small2_pane_g7

0xb64e,	// (0x00068edf) volume_small2_pane_g8

0xb657,	// (0x00068ee8) volume_small2_pane_g9

0xb660,	// (0x00068ef1) volume_small2_pane_g10

0x0009,

0xfc0c,	// (0x0006d49d) volume_small2_pane_g

0x4aad,	// (0x0006233e) fep_vkb_top_text_pane_g1_ParamLimits

0xd197,	// (0x0006aa28) fep_vkb_top_text_pane_t1_ParamLimits

0x4d57,	// (0x000625e8) popup_preview_fixed_window_g3_ParamLimits

0x4d57,	// (0x000625e8) popup_preview_fixed_window_g3

0xac18,	// (0x000684a9) popup_toolbar_trans_pane

0xcab3,	// (0x0006a344) aid_height_set_list_ParamLimits

0x32fa,	// (0x00060b8b) aid_size_parent_ParamLimits

0x83d7,	// (0x00065c68) list_highlight_pane_cp2_ParamLimits

0xc36f,	// (0x00069c00) set_content_pane_g1_ParamLimits

0xcc1b,	// (0x0006a4ac) list_single_image_pane_ParamLimits

0xcc1b,	// (0x0006a4ac) list_single_image_pane

0xd370,	// (0x0006ac01) aid_size_cell_image_ParamLimits

0xd370,	// (0x0006ac01) aid_size_cell_image

0xd37d,	// (0x0006ac0e) grid_single_image_pane_ParamLimits

0xd37d,	// (0x0006ac0e) grid_single_image_pane

0xd1fb,	// (0x0006aa8c) list_single_image_pane_g1_ParamLimits

0xd1fb,	// (0x0006aa8c) list_single_image_pane_g1

0x4d85,	// (0x00062616) list_single_image_pane_g2_ParamLimits

0x4d85,	// (0x00062616) list_single_image_pane_g2

0x0001,

0xfc21,	// (0x0006d4b2) list_single_image_pane_g_ParamLimits

0xfc21,	// (0x0006d4b2) list_single_image_pane_g

0x5285,	// (0x00062b16) list_single_image_pane_t1_ParamLimits

0x5285,	// (0x00062b16) list_single_image_pane_t1

0xd389,	// (0x0006ac1a) cell_image_list_pane_ParamLimits

0xd389,	// (0x0006ac1a) cell_image_list_pane

0xd39d,	// (0x0006ac2e) cell_image_list_pane_g1

0xd3a6,	// (0x0006ac37) cell_image_list_pane_g2

0x0001,

0xfc26,	// (0x0006d4b7) cell_image_list_pane_g

0xd3af,	// (0x0006ac40) aid_size_cell_tb_trans_pane

0x8032,	// (0x000658c3) bg_tb_trans_pane

0xd3c1,	// (0x0006ac52) grid_tb_trans_pane

0x1f2f,	// (0x0005f7c0) bg_tb_trans_pane_g1

0x1f3f,	// (0x0005f7d0) bg_tb_trans_pane_g2

0x1f37,	// (0x0005f7c8) bg_tb_trans_pane_g3

0x1f4f,	// (0x0005f7e0) bg_tb_trans_pane_g4

0x1f47,	// (0x0005f7d8) bg_tb_trans_pane_g5

0x1f6f,	// (0x0005f800) bg_tb_trans_pane_g6

0x1f67,	// (0x0005f7f8) bg_tb_trans_pane_g7

0x1f57,	// (0x0005f7e8) bg_tb_trans_pane_g8

0x1f5f,	// (0x0005f7f0) bg_tb_trans_pane_g9

0x0008,

0xfc2b,	// (0x0006d4bc) bg_tb_trans_pane_g

0xd3d5,	// (0x0006ac66) cell_toolbar_trans_pane_ParamLimits

0xd3d5,	// (0x0006ac66) cell_toolbar_trans_pane

0x46f5,	// (0x00061f86) cell_toolbar_trans_pane_g1

0xcee3,	// (0x0006a774) list_form2_midp_pane_t1

0xcef1,	// (0x0006a782) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x0006d359) list_form2_midp_pane_t

0x420e,	// (0x00061a9f) scroll_pane_cp51_ParamLimits

0x43ca,	// (0x00061c5b) form2_midp_wait_pane_g1

0x43d3,	// (0x00061c64) form2_midp_wait_pane_g2

0x43dc,	// (0x00061c6d) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x0006d36e) form2_midp_wait_pane_g

0x70f7,	// (0x00064988) list_highlight_pane_cp21_ParamLimits

0x4424,	// (0x00061cb5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4433,	// (0x00061cc4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x34ca,	// (0x00060d5b) list_single_2graphic_im_pane_ParamLimits

0x34ca,	// (0x00060d5b) list_single_2graphic_im_pane

0xd3fb,	// (0x0006ac8c) list_single_2graphic_im_pane_g1_ParamLimits

0xd3fb,	// (0x0006ac8c) list_single_2graphic_im_pane_g1

0xd40c,	// (0x0006ac9d) list_single_2graphic_im_pane_g2_ParamLimits

0xd40c,	// (0x0006ac9d) list_single_2graphic_im_pane_g2

0xd418,	// (0x0006aca9) list_single_2graphic_im_pane_g3_ParamLimits

0xd418,	// (0x0006aca9) list_single_2graphic_im_pane_g3

0x0003,

0xfc3e,	// (0x0006d4cf) list_single_2graphic_im_pane_g_ParamLimits

0xfc3e,	// (0x0006d4cf) list_single_2graphic_im_pane_g

0xd42c,	// (0x0006acbd) list_single_2graphic_im_pane_t1_ParamLimits

0xd42c,	// (0x0006acbd) list_single_2graphic_im_pane_t1

0x4d63,	// (0x000625f4) list_single_graphic_2heading_pane_fp_ParamLimits

0x4d63,	// (0x000625f4) list_single_graphic_2heading_pane_fp

0xee8d,	// (0x0006c71e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xee8d,	// (0x0006c71e) list_single_graphic_2heading_pane_fp_g1

0x4d79,	// (0x0006260a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4d79,	// (0x0006260a) list_single_graphic_2heading_pane_fp_g2

0xd1fb,	// (0x0006aa8c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd1fb,	// (0x0006aa8c) list_single_graphic_2heading_pane_fp_g3

0x4d85,	// (0x00062616) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4d85,	// (0x00062616) list_single_graphic_2heading_pane_fp_g4

0x4d99,	// (0x0006262a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4d99,	// (0x0006262a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb65,	// (0x0006d3f6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb65,	// (0x0006d3f6) list_single_graphic_2heading_pane_fp_g

0xefab,	// (0x0006c83c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xefab,	// (0x0006c83c) list_single_graphic_2heading_pane_fp_t1

0xeec5,	// (0x0006c756) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xeec5,	// (0x0006c756) list_single_graphic_2heading_pane_fp_t2

0xefc1,	// (0x0006c852) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xefc1,	// (0x0006c852) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc47,	// (0x0006d4d8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc47,	// (0x0006d4d8) list_single_graphic_2heading_pane_fp_t

0x4781,	// (0x00062012) fep_hwr_write_pane_g5_ParamLimits

0x4781,	// (0x00062012) fep_hwr_write_pane_g5

0x478d,	// (0x0006201e) fep_hwr_write_pane_g6_ParamLimits

0x478d,	// (0x0006201e) fep_hwr_write_pane_g6

0xd273,	// (0x0006ab04) eswt_shell_pane_ParamLimits

0x1fbb,	// (0x0005f84c) bg_popup_window_pane_cp18_ParamLimits

0x23ae,	// (0x0005fc3f) heading_pane_cp70

0x5180,	// (0x00062a11) popup_eswt_tasktip_window_t1_ParamLimits

0xad35,	// (0x000685c6) aid_touch_tab_arrow_left

0xad4b,	// (0x000685dc) aid_touch_tab_arrow_right

0x91aa,	// (0x00066a3b) title_pane_g3_ParamLimits

0x91aa,	// (0x00066a3b) title_pane_g3

0x7ffa,	// (0x0006588b) set_value_pane_g1

0xac18,	// (0x000684a9) popup_toolbar_trans_pane_ParamLimits

0xd3af,	// (0x0006ac40) aid_size_cell_tb_trans_pane_ParamLimits

0x8032,	// (0x000658c3) bg_tb_trans_pane_ParamLimits

0xd3c1,	// (0x0006ac52) grid_tb_trans_pane_ParamLimits

0x722f,	// (0x00064ac0) cont_note_pane_ParamLimits

0x722f,	// (0x00064ac0) cont_note_pane

0x73af,	// (0x00064c40) cont_snote2_single_text_pane_ParamLimits

0x73af,	// (0x00064c40) cont_snote2_single_text_pane

0x73af,	// (0x00064c40) cont_snote2_single_graphic_pane_ParamLimits

0x73af,	// (0x00064c40) cont_snote2_single_graphic_pane

0x25d5,	// (0x0005fe66) cont_note_wait_pane_ParamLimits

0x25d5,	// (0x0005fe66) cont_note_wait_pane

0x25d5,	// (0x0005fe66) cont_note_image_pane_ParamLimits

0x25d5,	// (0x0005fe66) cont_note_image_pane

0x537b,	// (0x00062c0c) popup_note2_window_g1_ParamLimits

0x537b,	// (0x00062c0c) popup_note2_window_g1

0xd46a,	// (0x0006acfb) popup_note2_window_t1_ParamLimits

0xd46a,	// (0x0006acfb) popup_note2_window_t1

0xd4af,	// (0x0006ad40) popup_note2_window_t2_ParamLimits

0xd4af,	// (0x0006ad40) popup_note2_window_t2

0xd4f4,	// (0x0006ad85) popup_note2_window_t3_ParamLimits

0xd4f4,	// (0x0006ad85) popup_note2_window_t3

0x547b,	// (0x00062d0c) popup_note2_window_t4_ParamLimits

0x547b,	// (0x00062d0c) popup_note2_window_t4

0x72b3,	// (0x00064b44) popup_note2_window_t5_ParamLimits

0x72b3,	// (0x00064b44) popup_note2_window_t5

0x0004,

0xfc53,	// (0x0006d4e4) popup_note2_window_t_ParamLimits

0xfc53,	// (0x0006d4e4) popup_note2_window_t

0x54aa,	// (0x00062d3b) popup_note2_image_window_g1_ParamLimits

0x54aa,	// (0x00062d3b) popup_note2_image_window_g1

0xd539,	// (0x0006adca) popup_note2_image_window_g2_ParamLimits

0xd539,	// (0x0006adca) popup_note2_image_window_g2

0x0001,

0xfc5e,	// (0x0006d4ef) popup_note2_image_window_g_ParamLimits

0xfc5e,	// (0x0006d4ef) popup_note2_image_window_g

0x54c8,	// (0x00062d59) popup_note2_image_window_t1_ParamLimits

0x54c8,	// (0x00062d59) popup_note2_image_window_t1

0x54e0,	// (0x00062d71) popup_note2_image_window_t2_ParamLimits

0x54e0,	// (0x00062d71) popup_note2_image_window_t2

0x54f8,	// (0x00062d89) popup_note2_image_window_t3_ParamLimits

0x54f8,	// (0x00062d89) popup_note2_image_window_t3

0x0002,

0xfc63,	// (0x0006d4f4) popup_note2_image_window_t_ParamLimits

0xfc63,	// (0x0006d4f4) popup_note2_image_window_t

0x25e3,	// (0x0005fe74) popup_note2_wait_window_g1_ParamLimits

0x25e3,	// (0x0005fe74) popup_note2_wait_window_g1

0x25ef,	// (0x0005fe80) popup_note2_wait_window_g2_ParamLimits

0x25ef,	// (0x0005fe80) popup_note2_wait_window_g2

0x25fb,	// (0x0005fe8c) popup_note2_wait_window_g3_ParamLimits

0x25fb,	// (0x0005fe8c) popup_note2_wait_window_g3

0x0002,

0xf817,	// (0x0006d0a8) popup_note2_wait_window_g_ParamLimits

0xf817,	// (0x0006d0a8) popup_note2_wait_window_g

0x5514,	// (0x00062da5) popup_note2_wait_window_t1_ParamLimits

0x5514,	// (0x00062da5) popup_note2_wait_window_t1

0x5532,	// (0x00062dc3) popup_note2_wait_window_t2_ParamLimits

0x5532,	// (0x00062dc3) popup_note2_wait_window_t2

0x5550,	// (0x00062de1) popup_note2_wait_window_t3_ParamLimits

0x5550,	// (0x00062de1) popup_note2_wait_window_t3

0x5562,	// (0x00062df3) popup_note2_wait_window_t4_ParamLimits

0x5562,	// (0x00062df3) popup_note2_wait_window_t4

0x0003,

0xfc6a,	// (0x0006d4fb) popup_note2_wait_window_t_ParamLimits

0xfc6a,	// (0x0006d4fb) popup_note2_wait_window_t

0x5574,	// (0x00062e05) wait_bar2_pane_ParamLimits

0x5574,	// (0x00062e05) wait_bar2_pane

0x558c,	// (0x00062e1d) popup_snote2_single_text_window_g1_ParamLimits

0x558c,	// (0x00062e1d) popup_snote2_single_text_window_g1

0x55b4,	// (0x00062e45) popup_snote2_single_text_window_t1_ParamLimits

0x55b4,	// (0x00062e45) popup_snote2_single_text_window_t1

0x5600,	// (0x00062e91) popup_snote2_single_text_window_t2_ParamLimits

0x5600,	// (0x00062e91) popup_snote2_single_text_window_t2

0x564c,	// (0x00062edd) popup_snote2_single_text_window_t3_ParamLimits

0x564c,	// (0x00062edd) popup_snote2_single_text_window_t3

0x568d,	// (0x00062f1e) popup_snote2_single_text_window_t4_ParamLimits

0x568d,	// (0x00062f1e) popup_snote2_single_text_window_t4

0x56c3,	// (0x00062f54) popup_snote2_single_text_window_t5_ParamLimits

0x56c3,	// (0x00062f54) popup_snote2_single_text_window_t5

0x0004,

0xfc73,	// (0x0006d504) popup_snote2_single_text_window_t_ParamLimits

0xfc73,	// (0x0006d504) popup_snote2_single_text_window_t

0xd54b,	// (0x0006addc) popup_snote2_single_graphic_window_g1_ParamLimits

0xd54b,	// (0x0006addc) popup_snote2_single_graphic_window_g1

0x5716,	// (0x00062fa7) popup_snote2_single_graphic_window_g2_ParamLimits

0x5716,	// (0x00062fa7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7e,	// (0x0006d50f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7e,	// (0x0006d50f) popup_snote2_single_graphic_window_g

0x573e,	// (0x00062fcf) popup_snote2_single_graphic_window_t1_ParamLimits

0x573e,	// (0x00062fcf) popup_snote2_single_graphic_window_t1

0x578a,	// (0x0006301b) popup_snote2_single_graphic_window_t2_ParamLimits

0x578a,	// (0x0006301b) popup_snote2_single_graphic_window_t2

0x564c,	// (0x00062edd) popup_snote2_single_graphic_window_t3_ParamLimits

0x564c,	// (0x00062edd) popup_snote2_single_graphic_window_t3

0x568d,	// (0x00062f1e) popup_snote2_single_graphic_window_t4_ParamLimits

0x568d,	// (0x00062f1e) popup_snote2_single_graphic_window_t4

0x56c3,	// (0x00062f54) popup_snote2_single_graphic_window_t5_ParamLimits

0x56c3,	// (0x00062f54) popup_snote2_single_graphic_window_t5

0x0004,

0xfc83,	// (0x0006d514) popup_snote2_single_graphic_window_t_ParamLimits

0xfc83,	// (0x0006d514) popup_snote2_single_graphic_window_t

0x40cb,	// (0x0006195c) clock_nsta_pane_cp2_t1

0x40cb,	// (0x0006195c) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x0006d32f) clock_nsta_pane_cp2_t

0xbf5e,	// (0x000697ef) form_field_data_wide_pane_g1_ParamLimits

0x8040,	// (0x000658d1) form_field_data_wide_pane_g2_ParamLimits

0x8040,	// (0x000658d1) form_field_data_wide_pane_g2

0x804c,	// (0x000658dd) form_field_data_wide_pane_g3_ParamLimits

0x804c,	// (0x000658dd) form_field_data_wide_pane_g3

0x0002,

0xf64f,	// (0x0006cee0) form_field_data_wide_pane_g_ParamLimits

0xf64f,	// (0x0006cee0) form_field_data_wide_pane_g

0xce04,	// (0x0006a695) grid_touch_3_pane_ParamLimits

0xce04,	// (0x0006a695) grid_touch_3_pane

0xd573,	// (0x0006ae04) cell_touch_3_pane_ParamLimits

0xd573,	// (0x0006ae04) cell_touch_3_pane

0x46f5,	// (0x00061f86) cell_touch_3_pane_g1

0x46f5,	// (0x00061f86) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x0006d3b4) cell_touch_3_pane_g

0x72e5,	// (0x00064b76) cont_query_data_pane

0x72ed,	// (0x00064b7e) cont_query_data_pane_cp1

0x5804,	// (0x00063095) button_value_adjust_pane_cp7

0x580c,	// (0x0006309d) query_popup_pane_cp3

0xc06c,	// (0x000698fd) bg_popup_sub_pane_cp22_ParamLimits

0xa080,	// (0x00067911) navi_navi_volume_pane_cp2

0xa08f,	// (0x00067920) popup_side_volume_key_window_g2

0xa09e,	// (0x0006792f) popup_side_volume_key_window_g3

0x0002,

0xf6e5,	// (0x0006cf76) popup_side_volume_key_window_g

0xa0ad,	// (0x0006793e) popup_side_volume_key_window_t2

0x0001,

0xf6ec,	// (0x0006cf7d) popup_side_volume_key_window_t

0xa1fe,	// (0x00067a8f) popup_side_volume_key_window_ParamLimits

0x9927,	// (0x000671b8) list_double_graphic_pane_g4_ParamLimits

0x9927,	// (0x000671b8) list_double_graphic_pane_g4

0xcc07,	// (0x0006a498) list_single_2heading_msg_pane_ParamLimits

0xcc07,	// (0x0006a498) list_single_2heading_msg_pane

0xd5bc,	// (0x0006ae4d) list_single_2heading_msg_pane_g1_ParamLimits

0xd5bc,	// (0x0006ae4d) list_single_2heading_msg_pane_g1

0xd5c8,	// (0x0006ae59) list_single_2heading_msg_pane_g2_ParamLimits

0xd5c8,	// (0x0006ae59) list_single_2heading_msg_pane_g2

0xd5db,	// (0x0006ae6c) list_single_2heading_msg_pane_g3_ParamLimits

0xd5db,	// (0x0006ae6c) list_single_2heading_msg_pane_g3

0xd5e7,	// (0x0006ae78) list_single_2heading_msg_pane_g4_ParamLimits

0xd5e7,	// (0x0006ae78) list_single_2heading_msg_pane_g4

0x0003,

0xfc8e,	// (0x0006d51f) list_single_2heading_msg_pane_g_ParamLimits

0xfc8e,	// (0x0006d51f) list_single_2heading_msg_pane_g

0xb669,	// (0x00068efa) list_single_2heading_msg_pane_t1_ParamLimits

0xb669,	// (0x00068efa) list_single_2heading_msg_pane_t1

0xb691,	// (0x00068f22) list_single_2heading_msg_pane_t2_ParamLimits

0xb691,	// (0x00068f22) list_single_2heading_msg_pane_t2

0xb6fc,	// (0x00068f8d) list_single_2heading_msg_pane_t3_ParamLimits

0xb6fc,	// (0x00068f8d) list_single_2heading_msg_pane_t3

0xefe1,	// (0x0006c872) list_single_2heading_msg_pane_t4_ParamLimits

0xefe1,	// (0x0006c872) list_single_2heading_msg_pane_t4

0x0003,

0xfc97,	// (0x0006d528) list_single_2heading_msg_pane_t_ParamLimits

0xfc97,	// (0x0006d528) list_single_2heading_msg_pane_t

0x70b3,	// (0x00064944) title_pane_g4_ParamLimits

0x70b3,	// (0x00064944) title_pane_g4

0xe938,	// (0x0006c1c9) title_pane_stacon_g3_ParamLimits

0xe938,	// (0x0006c1c9) title_pane_stacon_g3

0x533e,	// (0x00062bcf) list_single_2graphic_im_pane_g4_ParamLimits

0x533e,	// (0x00062bcf) list_single_2graphic_im_pane_g4

0xc960,	// (0x0006a1f1) popup_side_volume_key_window_cp

0x387d,	// (0x0006110e) main_idle_act2_pane_t1

0x0529,	// (0x0005ddba) toolbar_button_pane_g10

0x97b3,	// (0x00067044) popup_toolbar_window_cp1

0x40bc,	// (0x0006194d) clock_nsta_pane_cp_t1

0x40bc,	// (0x0006194d) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x0006d32a) clock_nsta_pane_cp_t

0xa080,	// (0x00067911) navi_navi_volume_pane_cp2_ParamLimits

0xf2a0,	// (0x0006cb31) popup_side_volume_key_window_g1_ParamLimits

0xa08f,	// (0x00067920) popup_side_volume_key_window_g2_ParamLimits

0xa09e,	// (0x0006792f) popup_side_volume_key_window_g3_ParamLimits

0xf6e5,	// (0x0006cf76) popup_side_volume_key_window_g_ParamLimits

0x0b00,	// (0x0005e391) fep_hwr_aid_pane

0x0ba7,	// (0x0005e438) bg_fep_hwr_top_pane_g4_ParamLimits

0x4751,	// (0x00061fe2) fep_hwr_top_pane_g1_ParamLimits

0x4763,	// (0x00061ff4) fep_hwr_top_pane_g2_ParamLimits

0x0bc7,	// (0x0005e458) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x0006d37f) fep_hwr_top_pane_g_ParamLimits

0x0bdc,	// (0x0005e46d) fep_hwr_top_text_pane_ParamLimits

0x2ddf,	// (0x00060670) aid_touch_tab_arrow_arrow_2

0x2de8,	// (0x00060679) aid_touch_tab_arrow_left_2

0x0b14,	// (0x0005e3a5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0b4b,	// (0x0005e3dc) fep_hwr_prediction_pane

0x48bc,	// (0x0006214d) fep_vkb_prediction_pane

0xd177,	// (0x0006aa08) fep_vkb_side_pane_g3_ParamLimits

0xd177,	// (0x0006aa08) fep_vkb_side_pane_g3

0x0d57,	// (0x0005e5e8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0dc3,	// (0x0005e654) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0dd0,	// (0x0005e661) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9d,	// (0x0006d42e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0fda,	// (0x0005e86b) fep_hwr_prediction_pane_g1

0x0fe4,	// (0x0005e875) fep_hwr_prediction_pane_g2

0x0fec,	// (0x0005e87d) fep_hwr_prediction_pane_g3

0x0ff4,	// (0x0005e885) fep_hwr_prediction_pane_g4

0x0003,

0xfca0,	// (0x0006d531) fep_hwr_prediction_pane_g

0x5831,	// (0x000630c2) fep_vkb_prediction_pane_g1

0x583b,	// (0x000630cc) fep_vkb_prediction_pane_g2

0x5843,	// (0x000630d4) fep_vkb_prediction_pane_g3

0x584b,	// (0x000630dc) fep_vkb_prediction_pane_g4

0x0003,

0xfca9,	// (0x0006d53a) fep_vkb_prediction_pane_g

0xb439,	// (0x00068cca) slider_set_pane_g3

0xb44d,	// (0x00068cde) slider_set_pane_g4

0xb465,	// (0x00068cf6) slider_set_pane_g5

0xb439,	// (0x00068cca) slider_set_pane_g6

0xb47b,	// (0x00068d0c) slider_set_pane_g7

0x345b,	// (0x00060cec) slider_form_pane_g3

0x3464,	// (0x00060cf5) slider_form_pane_g4

0x346c,	// (0x00060cfd) slider_form_pane_g5

0x345b,	// (0x00060cec) slider_form_pane_g6

0xcbfe,	// (0x0006a48f) slider_form_pane_g7

0x3b29,	// (0x000613ba) slider_set_pane_vc_g3

0x3b32,	// (0x000613c3) slider_set_pane_vc_g4

0x3b3b,	// (0x000613cc) slider_set_pane_vc_g5

0x3b29,	// (0x000613ba) slider_set_pane_vc_g6

0x3b44,	// (0x000613d5) slider_set_pane_vc_g7

0x3d7a,	// (0x0006160b) slider_form_pane_vc_g1

0x3d83,	// (0x00061614) slider_form_pane_vc_g2

0x3d8c,	// (0x0006161d) slider_form_pane_vc_g3

0x3d7a,	// (0x0006160b) slider_form_pane_vc_g4

0x3d95,	// (0x00061626) slider_form_pane_vc_g5

0x0004,

0xfa70,	// (0x0006d301) slider_form_pane_vc_g

0xe835,	// (0x0006c0c6) main_idle_act3_pane

0x5853,	// (0x000630e4) ai3_links_pane

0xd5ff,	// (0x0006ae90) popup_ai3_data_window_ParamLimits

0xd5ff,	// (0x0006ae90) popup_ai3_data_window

0x7095,	// (0x00064926) grid_ai3_links_pane

0xd617,	// (0x0006aea8) cell_ai3_links_pane_ParamLimits

0xd617,	// (0x0006aea8) cell_ai3_links_pane

0x588c,	// (0x0006311d) bg_popup_sub_pane_cp11

0x5899,	// (0x0006312a) cell_ai3_links_pane_g1

0x7095,	// (0x00064926) bg_popup_sub_pane_cp12

0x58be,	// (0x0006314f) heading_ai3_data_pane

0x58c6,	// (0x00063157) list_ai3_gene_pane

0x58d2,	// (0x00063163) popup_ai3_data_window_g1

0x58da,	// (0x0006316b) heading_ai3_data_pane_g1

0x58e2,	// (0x00063173) heading_ai3_data_pane_t1

0xd631,	// (0x0006aec2) list_double_ai3_gene_pane_ParamLimits

0xd631,	// (0x0006aec2) list_double_ai3_gene_pane

0x58fd,	// (0x0006318e) list_single_ai3_gene_pane_ParamLimits

0x58fd,	// (0x0006318e) list_single_ai3_gene_pane

0x45e5,	// (0x00061e76) list_highlight_pane_cp7_ParamLimits

0x45e5,	// (0x00061e76) list_highlight_pane_cp7

0x590a,	// (0x0006319b) list_single_a13_gene_pane_t1_ParamLimits

0x590a,	// (0x0006319b) list_single_a13_gene_pane_t1

0x5921,	// (0x000631b2) list_single_ai3_gene_pane_g1

0x592a,	// (0x000631bb) list_single_ai3_gene_pane_g2

0x0001,

0xfcb2,	// (0x0006d543) list_single_ai3_gene_pane_g

0x5932,	// (0x000631c3) list_double_ai3_gene_pane_g1_ParamLimits

0x5932,	// (0x000631c3) list_double_ai3_gene_pane_g1

0xd63e,	// (0x0006aecf) list_double_ai3_gene_pane_t1_ParamLimits

0xd63e,	// (0x0006aecf) list_double_ai3_gene_pane_t1

0x595a,	// (0x000631eb) list_double_ai3_gene_pane_t2_ParamLimits

0x595a,	// (0x000631eb) list_double_ai3_gene_pane_t2

0x596f,	// (0x00063200) list_double_ai3_gene_pane_t3_ParamLimits

0x596f,	// (0x00063200) list_double_ai3_gene_pane_t3

0x0002,

0xfcb7,	// (0x0006d548) list_double_ai3_gene_pane_t_ParamLimits

0xfcb7,	// (0x0006d548) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xefd7,	// (0x0006c868) aid_size_min_col_2

0xd5a6,	// (0x0006ae37) aid_size_min_msg_ParamLimits

0xd5a6,	// (0x0006ae37) aid_size_min_msg

0xd18b,	// (0x0006aa1c) fep_vkb_top_text_pane_g2_ParamLimits

0xd18b,	// (0x0006aa1c) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x0006d3af) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x0006d3af) fep_vkb_top_text_pane_g

0xe835,	// (0x0006c0c6) main_hc_apps_shell_pane

0x598c,	// (0x0006321d) grid_hc_apps_pane_ParamLimits

0x598c,	// (0x0006321d) grid_hc_apps_pane

0x599e,	// (0x0006322f) list_hc_apps_pane

0x59a6,	// (0x00063237) scroll_pane_cp37_ParamLimits

0x59a6,	// (0x00063237) scroll_pane_cp37

0xd65a,	// (0x0006aeeb) cell_hc_apps_pane_ParamLimits

0xd65a,	// (0x0006aeeb) cell_hc_apps_pane

0xd718,	// (0x0006afa9) cell_hc_apps_pane_g1_ParamLimits

0xd718,	// (0x0006afa9) cell_hc_apps_pane_g1

0x5a90,	// (0x00063321) cell_hc_apps_pane_g2_ParamLimits

0x5a90,	// (0x00063321) cell_hc_apps_pane_g2

0x5aac,	// (0x0006333d) cell_hc_apps_pane_g3_ParamLimits

0x5aac,	// (0x0006333d) cell_hc_apps_pane_g3

0x0002,

0xfcbe,	// (0x0006d54f) cell_hc_apps_pane_g_ParamLimits

0xfcbe,	// (0x0006d54f) cell_hc_apps_pane_g

0xd744,	// (0x0006afd5) cell_hc_apps_pane_t1_ParamLimits

0xd744,	// (0x0006afd5) cell_hc_apps_pane_t1

0x722f,	// (0x00064ac0) grid_highlight_pane_cp10_ParamLimits

0x722f,	// (0x00064ac0) grid_highlight_pane_cp10

0xd782,	// (0x0006b013) list_single_hc_apps_pane_ParamLimits

0xd782,	// (0x0006b013) list_single_hc_apps_pane

0xd7b2,	// (0x0006b043) list_single_hc_apps_pane_g1

0xd7cb,	// (0x0006b05c) list_single_hc_apps_pane_g2

0x0001,

0xfcc5,	// (0x0006d556) list_single_hc_apps_pane_g

0xd7e4,	// (0x0006b075) list_single_hc_apps_pane_g2_copy1

0xb76a,	// (0x00068ffb) list_single_hc_apps_pane_t1

0x70f7,	// (0x00064988) bg_set_opt_pane_cp_ParamLimits

0x927e,	// (0x00066b0f) setting_slider_pane_t1_ParamLimits

0x9297,	// (0x00066b28) setting_slider_pane_t2_ParamLimits

0x92b1,	// (0x00066b42) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0006cdc8) setting_slider_pane_t_ParamLimits

0x92c9,	// (0x00066b5a) slider_set_pane_ParamLimits

0xf4a4,	// (0x0006cd35) control_pane_g5_ParamLimits

0xf4a4,	// (0x0006cd35) control_pane_g5

0xca80,	// (0x0006a311) slider_set_pane_g1_ParamLimits

0x084b,	// (0x0005e0dc) slider_set_pane_g2_ParamLimits

0xb439,	// (0x00068cca) slider_set_pane_g3_ParamLimits

0xb44d,	// (0x00068cde) slider_set_pane_g4_ParamLimits

0xb465,	// (0x00068cf6) slider_set_pane_g5_ParamLimits

0xb439,	// (0x00068cca) slider_set_pane_g6_ParamLimits

0xb47b,	// (0x00068d0c) slider_set_pane_g7_ParamLimits

0xf933,	// (0x0006d1c4) slider_set_pane_g_ParamLimits

0xc31a,	// (0x00069bab) navi_icon_text_pane_ParamLimits

0xacfe,	// (0x0006858f) aid_fill_nsta_2_ParamLimits

0xad35,	// (0x000685c6) aid_touch_tab_arrow_left_ParamLimits

0xad4b,	// (0x000685dc) aid_touch_tab_arrow_right_ParamLimits

0xade6,	// (0x00068677) clock_nsta_pane_ParamLimits

0x2dc1,	// (0x00060652) navi_icon_pane_g1_ParamLimits

0x2dcd,	// (0x0006065e) navi_text_pane_t1_ParamLimits

0x41cc,	// (0x00061a5d) navi_icon_text_pane_g1_ParamLimits

0x41d8,	// (0x00061a69) navi_icon_text_pane_t1_ParamLimits

0xd7b2,	// (0x0006b043) list_single_hc_apps_pane_g1_ParamLimits

0xd7cb,	// (0x0006b05c) list_single_hc_apps_pane_g2_ParamLimits

0xfcc5,	// (0x0006d556) list_single_hc_apps_pane_g_ParamLimits

0xd7e4,	// (0x0006b075) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb76a,	// (0x00068ffb) list_single_hc_apps_pane_t1_ParamLimits

0x90af,	// (0x00066940) popup_toolbar2_fixed_window_ParamLimits

0x90af,	// (0x00066940) popup_toolbar2_fixed_window

0xac0e,	// (0x0006849f) popup_toolbar2_float_window

0x7095,	// (0x00064926) bg_popup_sub_pane_cp27

0x5b8a,	// (0x0006341b) grid_toolbar2_float_pane

0x7095,	// (0x00064926) bg_popup_sub_pane_cp26

0x5b8a,	// (0x0006341b) grid_toolbar2_fixed_pane

0xd800,	// (0x0006b091) cell_toolbar2_fixed_pane_ParamLimits

0xd800,	// (0x0006b091) cell_toolbar2_fixed_pane

0xd81a,	// (0x0006b0ab) cell_toolbar2_fixed_pane_g1

0x1eaf,	// (0x0005f740) toolbar2_fixed_button_pane

0x1f2f,	// (0x0005f7c0) toolbar2_fixed_button_pane_g1

0x1f3f,	// (0x0005f7d0) toolbar2_fixed_button_pane_g2

0x1f37,	// (0x0005f7c8) toolbar2_fixed_button_pane_g3

0x1f4f,	// (0x0005f7e0) toolbar2_fixed_button_pane_g4

0x1f47,	// (0x0005f7d8) toolbar2_fixed_button_pane_g5

0x1f57,	// (0x0005f7e8) toolbar2_fixed_button_pane_g6

0x1f5f,	// (0x0005f7f0) toolbar2_fixed_button_pane_g7

0x1f6f,	// (0x0005f800) toolbar2_fixed_button_pane_g8

0x1f67,	// (0x0005f7f8) toolbar2_fixed_button_pane_g9

0x0008,

0xf835,	// (0x0006d0c6) toolbar2_fixed_button_pane_g

0x5bab,	// (0x0006343c) cell_toolbar2_float_pane_ParamLimits

0x5bab,	// (0x0006343c) cell_toolbar2_float_pane

0x5bbc,	// (0x0006344d) cell_toolbar2_float_pane_g1

0x1eaf,	// (0x0005f740) toolbar2_fixed_button_pane_cp

0xd073,	// (0x0006a904) fep_vkb_accented_list_pane_ParamLimits

0xd073,	// (0x0006a904) fep_vkb_accented_list_pane

0x0d37,	// (0x0005e5c8) bg_popup_fep_shadow_pane_g9

0xc46d,	// (0x00069cfe) bg_popup_fep_shadow_pane_cp3

0x814b,	// (0x000659dc) list_accented_list_pane

0x5bc5,	// (0x00063456) list_single_accented_list_pane_ParamLimits

0x5bc5,	// (0x00063456) list_single_accented_list_pane

0xc46d,	// (0x00069cfe) list_highlight_pane_cp10

0x5bd6,	// (0x00063467) list_single_accented_list_pane_t1

0xab38,	// (0x000683c9) popup_slider_window_ParamLimits

0xab38,	// (0x000683c9) popup_slider_window

0x5814,	// (0x000630a5) aid_indentation_list_msg

0xd90b,	// (0x0006b19c) bg_popup_window_pane_cp19

0x5cfc,	// (0x0006358d) popup_slider_window_g1

0x5d18,	// (0x000635a9) popup_slider_window_g2

0x5d34,	// (0x000635c5) popup_slider_window_g3

0x0005,

0xfcca,	// (0x0006d55b) popup_slider_window_g

0x5d9a,	// (0x0006362b) popup_slider_window_t1

0x5e0e,	// (0x0006369f) small_volume_slider_vertical_pane

0x46f5,	// (0x00061f86) small_volume_slider_vertical_pane_g1

0x46f5,	// (0x00061f86) small_volume_slider_vertical_pane_g2

0x5e2a,	// (0x000636bb) small_volume_slider_vertical_pane_g3

0x0002,

0xfcdc,	// (0x0006d56d) small_volume_slider_vertical_pane_g

0x8ea1,	// (0x00066732) area_side_right_pane_ParamLimits

0x8ea1,	// (0x00066732) area_side_right_pane

0xb798,	// (0x00069029) aid_size_side_button_ParamLimits

0xb798,	// (0x00069029) aid_size_side_button

0xb7b1,	// (0x00069042) grid_sctrl_middle_pane_ParamLimits

0xb7b1,	// (0x00069042) grid_sctrl_middle_pane

0x105d,	// (0x0005e8ee) sctrl_sk_bottom_pane

0x106e,	// (0x0005e8ff) sctrl_sk_top_pane

0x1080,	// (0x0005e911) aid_touch_sctrl_top

0x108d,	// (0x0005e91e) bg_sctrl_sk_pane_ParamLimits

0x108d,	// (0x0005e91e) bg_sctrl_sk_pane

0x109b,	// (0x0005e92c) sctrl_sk_top_pane_g1

0x10a8,	// (0x0005e939) sctrl_sk_top_pane_t1

0x1080,	// (0x0005e911) aid_touch_sctrl_bottom

0x108d,	// (0x0005e91e) bg_sctrl_sk_pane_cp_ParamLimits

0x108d,	// (0x0005e91e) bg_sctrl_sk_pane_cp

0x10c3,	// (0x0005e954) sctrl_sk_bottom_pane_g1

0x10a8,	// (0x0005e939) sctrl_sk_bottom_pane_t1

0xb7d0,	// (0x00069061) cell_sctrl_middle_pane_ParamLimits

0xb7d0,	// (0x00069061) cell_sctrl_middle_pane

0xb7f3,	// (0x00069084) aid_touch_sctrl_middle_ParamLimits

0xb7f3,	// (0x00069084) aid_touch_sctrl_middle

0x108d,	// (0x0005e91e) bg_sctrl_middle_pane_ParamLimits

0x108d,	// (0x0005e91e) bg_sctrl_middle_pane

0x19b5,	// (0x0005f246) cell_sctrl_middle_pane_g1_ParamLimits

0x19b5,	// (0x0005f246) cell_sctrl_middle_pane_g1

0xb807,	// (0x00069098) cell_sctrl_middle_pane_g2_ParamLimits

0xb807,	// (0x00069098) cell_sctrl_middle_pane_g2

0x0001,

0xfce8,	// (0x0006d579) cell_sctrl_middle_pane_g_ParamLimits

0xfce8,	// (0x0006d579) cell_sctrl_middle_pane_g

0x1f2f,	// (0x0005f7c0) bg_sctrl_middle_pane_g1

0x1f37,	// (0x0005f7c8) bg_sctrl_middle_pane_g2

0x1f3f,	// (0x0005f7d0) bg_sctrl_middle_pane_g3

0x1f47,	// (0x0005f7d8) bg_sctrl_middle_pane_g4

0x1f4f,	// (0x0005f7e0) bg_sctrl_middle_pane_g5

0x1f57,	// (0x0005f7e8) bg_sctrl_middle_pane_g6

0x1f5f,	// (0x0005f7f0) bg_sctrl_middle_pane_g7

0x1f67,	// (0x0005f7f8) bg_sctrl_middle_pane_g8

0x0007,

0xfced,	// (0x0006d57e) bg_sctrl_middle_pane_g

0x1f6f,	// (0x0005f800) bg_sctrl_middle_pane_g8_copy1

0x1f2f,	// (0x0005f7c0) bg_sctrl_sk_pane_g1

0x1f3f,	// (0x0005f7d0) bg_sctrl_sk_pane_g2

0x1f37,	// (0x0005f7c8) bg_sctrl_sk_pane_g3

0x0008,

0xf835,	// (0x0006d0c6) bg_sctrl_sk_pane_g

0x7f74,	// (0x00065805) aid_size_touch_scroll_bar

0x1f4f,	// (0x0005f7e0) bg_sctrl_sk_pane_g4

0x1f47,	// (0x0005f7d8) bg_sctrl_sk_pane_g5

0x1f57,	// (0x0005f7e8) bg_sctrl_sk_pane_g6

0x1f5f,	// (0x0005f7f0) bg_sctrl_sk_pane_g7

0x1f6f,	// (0x0005f800) bg_sctrl_sk_pane_g8

0x1f67,	// (0x0005f7f8) bg_sctrl_sk_pane_g9

0xf4d9,	// (0x0006cd6a) popup_fep_china_hwr2_fs_candidate_window

0xa5fe,	// (0x00067e8f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa5fe,	// (0x00067e8f) popup_fep_china_hwr2_fs_control_window

0x0d57,	// (0x0005e5e8) sctrl_sk_top_pane_g2

0x0001,

0xfce3,	// (0x0006d574) sctrl_sk_top_pane_g

0xd9a1,	// (0x0006b232) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9a1,	// (0x0006b232) aid_fep_china_hwr2_fs_cell

0xd9b5,	// (0x0006b246) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9b5,	// (0x0006b246) bg_popup_fep_shadow_pane_cp4

0xd9cc,	// (0x0006b25d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9cc,	// (0x0006b25d) bg_popup_fep_shadow_pane_cp5

0xd9de,	// (0x0006b26f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9de,	// (0x0006b26f) popup_fep_china_hwr2_fs_control_bar_grid

0xd9f2,	// (0x0006b283) popup_fep_china_hwr2_fs_control_funtion_grid

0x5e86,	// (0x00063717) aid_fep_china_hwr2_fs_candi_cell

0x7095,	// (0x00064926) bg_popup_fep_shadow_pane_cp6

0x5e90,	// (0x00063721) popup_fep_china_hwr2_fs_candidate_grid

0xd9fa,	// (0x0006b28b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9fa,	// (0x0006b28b) cell_fep_china_hwr2_fs_funtion_grid

0x46f5,	// (0x00061f86) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5eb2,	// (0x00063743) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5eb2,	// (0x00063743) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5ec0,	// (0x00063751) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5ec0,	// (0x00063751) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfe,	// (0x0006d58f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfe,	// (0x0006d58f) cell_fep_china_hwr2_fs_funtion_grid_g

0xda12,	// (0x0006b2a3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda12,	// (0x0006b2a3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda27,	// (0x0006b2b8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda27,	// (0x0006b2b8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd03,	// (0x0006d594) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd03,	// (0x0006d594) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f07,	// (0x00063798) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5f0f,	// (0x000637a0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5f17,	// (0x000637a8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd08,	// (0x0006d599) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5f1f,	// (0x000637b0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5f1f,	// (0x000637b0) cell_fep_china_hwr2_fs_candidate_grid

0x5f38,	// (0x000637c9) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5f40,	// (0x000637d1) popup_fep_china_hwr2_fs_candidate_grid_g21

0x46f5,	// (0x00061f86) cell_fep_china_hwr2_fs_candidate_grid_g1

0x46f5,	// (0x00061f86) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x0006d3b4) cell_fep_china_hwr2_fs_candidate_grid_g

0x5f48,	// (0x000637d9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x02b8,	// (0x0005db49) clock_nsta_pane_cp_24_ParamLimits

0x02b8,	// (0x0005db49) clock_nsta_pane_cp_24

0x0336,	// (0x0005dbc7) indicator_nsta_pane_cp_24_ParamLimits

0x0336,	// (0x0005dbc7) indicator_nsta_pane_cp_24

0x2c3d,	// (0x000604ce) heading_pane_g1

0x0001,

0xf89a,	// (0x0006d12b) heading_pane_g

0x36c6,	// (0x00060f57) grid_sct_catagory_button_pane

0x36f6,	// (0x00060f87) scroll_pane_cp5_ParamLimits

0x421a,	// (0x00061aab) button_value_adjust_pane_cp5_ParamLimits

0x421a,	// (0x00061aab) button_value_adjust_pane_cp5

0x42f9,	// (0x00061b8a) form2_midp_time_pane_ParamLimits

0x5f56,	// (0x000637e7) cell_sct_catagory_button_pane_ParamLimits

0x5f56,	// (0x000637e7) cell_sct_catagory_button_pane

0x45e5,	// (0x00061e76) bg_button_pane_cp01_ParamLimits

0x45e5,	// (0x00061e76) bg_button_pane_cp01

0x46f5,	// (0x00061f86) cell_sct_catagory_button_pane_g1

0xabb1,	// (0x00068442) popup_tb_extension_window

0xda43,	// (0x0006b2d4) aid_size_cell_ext_ParamLimits

0xda43,	// (0x0006b2d4) aid_size_cell_ext

0x73af,	// (0x00064c40) bg_tb_trans_pane_cp1_ParamLimits

0x73af,	// (0x00064c40) bg_tb_trans_pane_cp1

0xda69,	// (0x0006b2fa) grid_tb_ext_pane_ParamLimits

0xda69,	// (0x0006b2fa) grid_tb_ext_pane

0xdaa8,	// (0x0006b339) cell_tb_ext_pane_ParamLimits

0xdaa8,	// (0x0006b339) cell_tb_ext_pane

0xdad0,	// (0x0006b361) cell_tb_ext_pane_g1_ParamLimits

0xdad0,	// (0x0006b361) cell_tb_ext_pane_g1

0x5fec,	// (0x0006387d) cell_tb_ext_pane_t1

0x722f,	// (0x00064ac0) list_highlight_pane_cp11_ParamLimits

0x722f,	// (0x00064ac0) list_highlight_pane_cp11

0x90c4,	// (0x00066955) popup_uni_indicator_window_ParamLimits

0x90c4,	// (0x00066955) popup_uni_indicator_window

0x8032,	// (0x000658c3) bg_popup_sub_pane_cp14

0xdaed,	// (0x0006b37e) list_uniindi_pane

0xdaf9,	// (0x0006b38a) uniindi_top_pane

0x722f,	// (0x00064ac0) bg_uniindi_top_pane

0xdb18,	// (0x0006b3a9) uniindi_top_pane_g1

0xdb2e,	// (0x0006b3bf) uniindi_top_pane_g2

0x0003,

0xfd0f,	// (0x0006d5a0) uniindi_top_pane_g

0xdb4b,	// (0x0006b3dc) uniindi_top_pane_t1

0x609d,	// (0x0006392e) list_single_uniindi_pane_ParamLimits

0x609d,	// (0x0006392e) list_single_uniindi_pane

0x46f5,	// (0x00061f86) bg_uniindi_top_pane_g1

0x60b0,	// (0x00063941) list_single_uniindi_pane_g1

0x60c3,	// (0x00063954) list_single_uniindi_pane_t1

0xe835,	// (0x0006c0c6) control_bg_pane

0x60e8,	// (0x00063979) bg_sctrl_sk_pane_cp1

0x60f1,	// (0x00063982) bg_sctrl_sk_pane_cp2

0x60fa,	// (0x0006398b) control_bg_pane_g1

0x6103,	// (0x00063994) control_bg_pane_g2

0x0001,

0xfd18,	// (0x0006d5a9) control_bg_pane_g

0x4060,	// (0x000618f1) cell_indicator_nsta_pane_g1_ParamLimits

0xce41,	// (0x0006a6d2) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x0006d318) cell_indicator_nsta_pane_g_ParamLimits

0xee63,	// (0x0006c6f4) form2_midp_time_pane_t1_ParamLimits

0x0af2,	// (0x0005e383) main_idle_act4_pane_ParamLimits

0x0af2,	// (0x0005e383) main_idle_act4_pane

0xabb1,	// (0x00068442) popup_tb_extension_window_ParamLimits

0xda8e,	// (0x0006b31f) tb_ext_find_pane_ParamLimits

0xda8e,	// (0x0006b31f) tb_ext_find_pane

0x610c,	// (0x0006399d) ai_gene_pane_1_cp1

0xc4ee,	// (0x00069d7f) ai_gene_pane_2_cp1

0xdb75,	// (0x0006b406) list_single_idle_plugin_calendar_pane

0x611d,	// (0x000639ae) list_single_idle_plugin_notification_pane

0x6126,	// (0x000639b7) list_single_idle_plugin_player_pane

0xdb7e,	// (0x0006b40f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb7e,	// (0x0006b40f) list_single_idle_plugin_shortcut_pane

0xdba6,	// (0x0006b437) main_idle_act4_pane_t1

0xdbbd,	// (0x0006b44e) main_idle_act4_pane_t2

0x0001,

0xfd1d,	// (0x0006d5ae) main_idle_act4_pane_t

0xdbd4,	// (0x0006b465) middle_sk_idle_act4_pane_ParamLimits

0xdbd4,	// (0x0006b465) middle_sk_idle_act4_pane

0xdbf0,	// (0x0006b481) popup_clock_digital_analogue_window_cp2

0xdc1c,	// (0x0006b4ad) shortcut_wheel_idle_act4_pane_ParamLimits

0xdc1c,	// (0x0006b4ad) shortcut_wheel_idle_act4_pane

0x46f5,	// (0x00061f86) shortcut_wheel_idle_act4_pane_g1

0x46f5,	// (0x00061f86) shortcut_wheel_idle_act4_pane_g2

0x46f5,	// (0x00061f86) shortcut_wheel_idle_act4_pane_g3

0x46f5,	// (0x00061f86) shortcut_wheel_idle_act4_pane_g4

0x46f5,	// (0x00061f86) shortcut_wheel_idle_act4_pane_g5

0x61b9,	// (0x00063a4a) shortcut_wheel_idle_act4_pane_g6

0x61c1,	// (0x00063a52) shortcut_wheel_idle_act4_pane_g7

0x61c9,	// (0x00063a5a) shortcut_wheel_idle_act4_pane_g8

0x61d1,	// (0x00063a62) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd22,	// (0x0006d5b3) shortcut_wheel_idle_act4_pane_g

0xdc99,	// (0x0006b52a) middle_sk_idle_act4_pane_g1_ParamLimits

0xdc99,	// (0x0006b52a) middle_sk_idle_act4_pane_g1

0xdca7,	// (0x0006b538) middle_sk_idle_act4_pane_g2_ParamLimits

0xdca7,	// (0x0006b538) middle_sk_idle_act4_pane_g2

0x0001,

0xfd45,	// (0x0006d5d6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd45,	// (0x0006d5d6) middle_sk_idle_act4_pane_g

0xdcbf,	// (0x0006b550) middle_sk_idle_act4_pane_t1_ParamLimits

0xdcbf,	// (0x0006b550) middle_sk_idle_act4_pane_t1

0xdcee,	// (0x0006b57f) grid_ai_shortcut_pane_ParamLimits

0xdcee,	// (0x0006b57f) grid_ai_shortcut_pane

0xdd0b,	// (0x0006b59c) list_highlight_pane_cp16_ParamLimits

0xdd0b,	// (0x0006b59c) list_highlight_pane_cp16

0xdd18,	// (0x0006b5a9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdd18,	// (0x0006b5a9) list_single_idle_plugin_shortcut_pane_g1

0xdd24,	// (0x0006b5b5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdd24,	// (0x0006b5b5) list_single_idle_plugin_shortcut_pane_g2

0xdd40,	// (0x0006b5d1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdd40,	// (0x0006b5d1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4a,	// (0x0006d5db) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4a,	// (0x0006d5db) list_single_idle_plugin_shortcut_pane_g

0xdd55,	// (0x0006b5e6) cell_ai_shortcut_pane_ParamLimits

0xdd55,	// (0x0006b5e6) cell_ai_shortcut_pane

0xdd6b,	// (0x0006b5fc) cell_ai_shortcut_pane_g1_ParamLimits

0xdd6b,	// (0x0006b5fc) cell_ai_shortcut_pane_g1

0x610c,	// (0x0006399d) ai_gene_pane_1_cp2

0x6301,	// (0x00063b92) ai_gene_pane_2_cp2

0x6309,	// (0x00063b9a) list_highlight_pane_cp15

0xdd8d,	// (0x0006b61e) list_single_idle_plugin_calendar_pane_g1

0x6309,	// (0x00063b9a) list_highlight_pane_cp17

0x631a,	// (0x00063bab) list_single_idle_plugin_calendar_pane_g1_copy1

0x6322,	// (0x00063bb3) list_single_idle_plugin_player_pane_g1

0x391f,	// (0x000611b0) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd51,	// (0x0006d5e2) list_single_idle_plugin_player_pane_g

0x632a,	// (0x00063bbb) list_single_idle_plugin_player_pane_t1

0x6338,	// (0x00063bc9) list_single_idle_plugin_player_pane_t2

0x6346,	// (0x00063bd7) list_single_idle_plugin_player_pane_t3

0x6354,	// (0x00063be5) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd56,	// (0x0006d5e7) list_single_idle_plugin_player_pane_t

0x6362,	// (0x00063bf3) wait_bar_pane_cp15

0x636a,	// (0x00063bfb) grid_ai_notification_pane

0x391f,	// (0x000611b0) list_single_idle_plugin_notification_pane_g1

0xdd95,	// (0x0006b626) cell_ai_notification_pane_ParamLimits

0xdd95,	// (0x0006b626) cell_ai_notification_pane

0x6380,	// (0x00063c11) cell_ai_notification_pane_g1

0x6388,	// (0x00063c19) cell_ai_notification_pane_t1

0xdda2,	// (0x0006b633) tb_ext_find_button_pane

0xddaa,	// (0x0006b63b) tb_ext_find_pane_g1

0xddb2,	// (0x0006b643) tb_ext_find_pane_t1

0xc00b,	// (0x0006989c) tb_ext_find_button_pane_g1

0xddc0,	// (0x0006b651) tb_ext_find_button_pane_g2

0x0001,

0xfd5f,	// (0x0006d5f0) tb_ext_find_button_pane_g

0xdba6,	// (0x0006b437) main_idle_act4_pane_t1_ParamLimits

0xdbbd,	// (0x0006b44e) main_idle_act4_pane_t2_ParamLimits

0xfd1d,	// (0x0006d5ae) main_idle_act4_pane_t_ParamLimits

0xdbf0,	// (0x0006b481) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdc08,	// (0x0006b499) sat_plugin_idle_act4_pane_ParamLimits

0xdc08,	// (0x0006b499) sat_plugin_idle_act4_pane

0xddc9,	// (0x0006b65a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddc9,	// (0x0006b65a) sat_plugin_idle_act4_pane_t1

0xdde1,	// (0x0006b672) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdde1,	// (0x0006b672) sat_plugin_idle_act4_pane_t2

0xddf9,	// (0x0006b68a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddf9,	// (0x0006b68a) sat_plugin_idle_act4_pane_t3

0xde11,	// (0x0006b6a2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde11,	// (0x0006b6a2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd64,	// (0x0006d5f5) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd64,	// (0x0006d5f5) sat_plugin_idle_act4_pane_t

0x903f,	// (0x000668d0) popup_battery_window_ParamLimits

0x903f,	// (0x000668d0) popup_battery_window

0x722f,	// (0x00064ac0) bg_popup_sub_pane_cp25_ParamLimits

0x722f,	// (0x00064ac0) bg_popup_sub_pane_cp25

0x6409,	// (0x00063c9a) popup_battery_window_g1_ParamLimits

0x6409,	// (0x00063c9a) popup_battery_window_g1

0x6415,	// (0x00063ca6) popup_battery_window_t1_ParamLimits

0x6415,	// (0x00063ca6) popup_battery_window_t1

0x6427,	// (0x00063cb8) popup_battery_window_t2_ParamLimits

0x6427,	// (0x00063cb8) popup_battery_window_t2

0x0001,

0xfd6d,	// (0x0006d5fe) popup_battery_window_t_ParamLimits

0xfd6d,	// (0x0006d5fe) popup_battery_window_t

0xa252,	// (0x00067ae3) midp_canvas_pane_ParamLimits

0xa2c4,	// (0x00067b55) midp_keypad_pane_ParamLimits

0xa2c4,	// (0x00067b55) midp_keypad_pane

0x83d7,	// (0x00065c68) main_midp_pane_ParamLimits

0xce4e,	// (0x0006a6df) signal_pane_g2_cp_ParamLimits

0xde29,	// (0x0006b6ba) aid_size_cell_midp_keypad_ParamLimits

0xde29,	// (0x0006b6ba) aid_size_cell_midp_keypad

0xde47,	// (0x0006b6d8) midp_keyp_game_grid_pane_ParamLimits

0xde47,	// (0x0006b6d8) midp_keyp_game_grid_pane

0xde6e,	// (0x0006b6ff) midp_keyp_rocker_pane_ParamLimits

0xde6e,	// (0x0006b6ff) midp_keyp_rocker_pane

0xdebf,	// (0x0006b750) midp_keyp_sk_left_pane_ParamLimits

0xdebf,	// (0x0006b750) midp_keyp_sk_left_pane

0xdf13,	// (0x0006b7a4) midp_keyp_sk_right_pane_ParamLimits

0xdf13,	// (0x0006b7a4) midp_keyp_sk_right_pane

0x7095,	// (0x00064926) bg_button_pane_cp03

0xdf67,	// (0x0006b7f8) midp_keyp_sk_left_pane_g1

0x7095,	// (0x00064926) bg_button_pane_cp04

0xdf67,	// (0x0006b7f8) midp_keyp_sk_right_pane_g1

0x46f5,	// (0x00061f86) midp_keyp_rocker_pane_g1

0xdf70,	// (0x0006b801) keyp_game_cell_pane_ParamLimits

0xdf70,	// (0x0006b801) keyp_game_cell_pane

0x7095,	// (0x00064926) bg_button_pane_cp02

0xdf94,	// (0x0006b825) keyp_game_cell_pane_g1

0x905f,	// (0x000668f0) popup_fep_vkb2_window_ParamLimits

0x905f,	// (0x000668f0) popup_fep_vkb2_window

0xb81f,	// (0x000690b0) aid_size_cell_vkb2_ParamLimits

0xb81f,	// (0x000690b0) aid_size_cell_vkb2

0xb853,	// (0x000690e4) popup_fep_vkb2_window_g1_ParamLimits

0xb853,	// (0x000690e4) popup_fep_vkb2_window_g1

0xb8a3,	// (0x00069134) vkb2_area_bottom_pane_ParamLimits

0xb8a3,	// (0x00069134) vkb2_area_bottom_pane

0xb8f7,	// (0x00069188) vkb2_area_keypad_pane_ParamLimits

0xb8f7,	// (0x00069188) vkb2_area_keypad_pane

0xb93f,	// (0x000691d0) vkb2_area_top_pane_ParamLimits

0xb93f,	// (0x000691d0) vkb2_area_top_pane

0xb9cb,	// (0x0006925c) vkb2_top_entry_pane_ParamLimits

0xb9cb,	// (0x0006925c) vkb2_top_entry_pane

0xb9f8,	// (0x00069289) vkb2_top_grid_left_pane_ParamLimits

0xb9f8,	// (0x00069289) vkb2_top_grid_left_pane

0xba19,	// (0x000692aa) vkb2_top_grid_right_pane_ParamLimits

0xba19,	// (0x000692aa) vkb2_top_grid_right_pane

0x132e,	// (0x0005ebbf) vkb2_cell_keypad_pane_ParamLimits

0x132e,	// (0x0005ebbf) vkb2_cell_keypad_pane

0xba61,	// (0x000692f2) vkb2_area_bottom_grid_pane_ParamLimits

0xba61,	// (0x000692f2) vkb2_area_bottom_grid_pane

0xba8b,	// (0x0006931c) vkb2_area_bottom_pane_g1_ParamLimits

0xba8b,	// (0x0006931c) vkb2_area_bottom_pane_g1

0xbab1,	// (0x00069342) vkb2_area_bottom_pane_g2_ParamLimits

0xbab1,	// (0x00069342) vkb2_area_bottom_pane_g2

0xbae2,	// (0x00069373) vkb2_area_bottom_pane_g3_ParamLimits

0xbae2,	// (0x00069373) vkb2_area_bottom_pane_g3

0x0002,

0xfd72,	// (0x0006d603) vkb2_area_bottom_pane_g_ParamLimits

0xfd72,	// (0x0006d603) vkb2_area_bottom_pane_g

0x14d8,	// (0x0005ed69) vkb2_top_cell_left_pane_ParamLimits

0x14d8,	// (0x0005ed69) vkb2_top_cell_left_pane

0xdf9d,	// (0x0006b82e) vkb2_top_entry_pane_g1_ParamLimits

0xdf9d,	// (0x0006b82e) vkb2_top_entry_pane_g1

0xdfab,	// (0x0006b83c) vkb2_top_entry_pane_t1_ParamLimits

0xdfab,	// (0x0006b83c) vkb2_top_entry_pane_t1

0x65d8,	// (0x00063e69) vkb2_top_entry_pane_t2_ParamLimits

0x65d8,	// (0x00063e69) vkb2_top_entry_pane_t2

0x660a,	// (0x00063e9b) vkb2_top_entry_pane_t3_ParamLimits

0x660a,	// (0x00063e9b) vkb2_top_entry_pane_t3

0x0002,

0xfd79,	// (0x0006d60a) vkb2_top_entry_pane_t_ParamLimits

0xfd79,	// (0x0006d60a) vkb2_top_entry_pane_t

0xbb4c,	// (0x000693dd) vkb2_top_grid_right_pane_g1_ParamLimits

0xbb4c,	// (0x000693dd) vkb2_top_grid_right_pane_g1

0x153b,	// (0x0005edcc) vkb2_top_grid_right_pane_g2_ParamLimits

0x153b,	// (0x0005edcc) vkb2_top_grid_right_pane_g2

0x1553,	// (0x0005ede4) vkb2_top_grid_right_pane_g3_ParamLimits

0x1553,	// (0x0005ede4) vkb2_top_grid_right_pane_g3

0xbb62,	// (0x000693f3) vkb2_top_grid_right_pane_g4_ParamLimits

0xbb62,	// (0x000693f3) vkb2_top_grid_right_pane_g4

0x0003,

0xfd80,	// (0x0006d611) vkb2_top_grid_right_pane_g_ParamLimits

0xfd80,	// (0x0006d611) vkb2_top_grid_right_pane_g

0x1581,	// (0x0005ee12) vkb2_top_cell_left_pane_g1

0x15a3,	// (0x0005ee34) vkb2_cell_keypad_pane_g1_ParamLimits

0x15a3,	// (0x0005ee34) vkb2_cell_keypad_pane_g1

0x662e,	// (0x00063ebf) vkb2_cell_keypad_pane_t1_ParamLimits

0x662e,	// (0x00063ebf) vkb2_cell_keypad_pane_t1

0x15b1,	// (0x0005ee42) vkb2_cell_bottom_grid_pane_ParamLimits

0x15b1,	// (0x0005ee42) vkb2_cell_bottom_grid_pane

0x15ea,	// (0x0005ee7b) vkb2_cell_bottom_grid_pane_g1

0xdc3d,	// (0x0006b4ce) aid_call2_pane_cp02

0xdc45,	// (0x0006b4d6) aid_call_pane_cp02

0xdc4d,	// (0x0006b4de) clock_digital_number_pane_cp10

0xdc55,	// (0x0006b4e6) clock_digital_number_pane_cp11

0xdc5d,	// (0x0006b4ee) clock_digital_number_pane_cp12

0xdc65,	// (0x0006b4f6) clock_digital_number_pane_cp13

0xdc6d,	// (0x0006b4fe) clock_digital_separator_pane_cp10

0xc00b,	// (0x0006989c) popup_clock_digital_analogue_window_cp2_g1

0xc00b,	// (0x0006989c) popup_clock_digital_analogue_window_cp2_g2

0xdc75,	// (0x0006b506) popup_clock_digital_analogue_window_cp2_g3

0xc00b,	// (0x0006989c) popup_clock_digital_analogue_window_cp2_g4

0xdc75,	// (0x0006b506) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd35,	// (0x0006d5c6) popup_clock_digital_analogue_window_cp2_g

0xdc7d,	// (0x0006b50e) popup_clock_digital_analogue_window_cp2_t1

0xdc8b,	// (0x0006b51c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd40,	// (0x0006d5d1) popup_clock_digital_analogue_window_cp2_t

0x46f5,	// (0x00061f86) clock_digital_number_pane_cp10_g1

0x46f5,	// (0x00061f86) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x0006d3b4) clock_digital_number_pane_cp10_g

0x46f5,	// (0x00061f86) clock_digital_separator_pane_cp10_g1

0x46f5,	// (0x00061f86) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x0006d3b4) clock_digital_separator_pane_cp10_g

0xdb3a,	// (0x0006b3cb) uniindi_top_pane_g3

0x6066,	// (0x000638f7) uniindi_top_pane_g4

0x13b9,	// (0x0005ec4a) vkb2_row_keypad_pane_ParamLimits

0x13b9,	// (0x0005ec4a) vkb2_row_keypad_pane

0x160a,	// (0x0005ee9b) vkb2_cell_t_keypad_pane_ParamLimits

0x160a,	// (0x0005ee9b) vkb2_cell_t_keypad_pane

0x161a,	// (0x0005eeab) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x161a,	// (0x0005eeab) vkb2_cell_t_keypad_pane_cp08

0x162d,	// (0x0005eebe) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x162d,	// (0x0005eebe) vkb2_cell_t_keypad_pane_cp09

0x1641,	// (0x0005eed2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1641,	// (0x0005eed2) vkb2_cell_t_keypad_pane_cp01

0x1652,	// (0x0005eee3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1652,	// (0x0005eee3) vkb2_cell_t_keypad_pane_cp02

0x1663,	// (0x0005eef4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1663,	// (0x0005eef4) vkb2_cell_t_keypad_pane_cp03

0x1674,	// (0x0005ef05) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1674,	// (0x0005ef05) vkb2_cell_t_keypad_pane_cp04

0x1685,	// (0x0005ef16) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1685,	// (0x0005ef16) vkb2_cell_t_keypad_pane_cp05

0x1696,	// (0x0005ef27) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1696,	// (0x0005ef27) vkb2_cell_t_keypad_pane_cp06

0x16a7,	// (0x0005ef38) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x16a7,	// (0x0005ef38) vkb2_cell_t_keypad_pane_cp07

0x16b8,	// (0x0005ef49) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x16b8,	// (0x0005ef49) vkb2_cell_t_keypad_pane_cp10

0x0d57,	// (0x0005e5e8) vkb2_cell_t_keypad_pane_g1

0x6645,	// (0x00063ed6) vkb2_cell_t_keypad_pane_t1

0xe835,	// (0x0006c0c6) popup_grid_graphic2_window

0xdfe4,	// (0x0006b875) aid_size_cell_graphic2_ParamLimits

0xdfe4,	// (0x0006b875) aid_size_cell_graphic2

0xe022,	// (0x0006b8b3) bg_popup_window_pane_cp21_ParamLimits

0xe022,	// (0x0006b8b3) bg_popup_window_pane_cp21

0xe030,	// (0x0006b8c1) graphic2_pages_pane_ParamLimits

0xe030,	// (0x0006b8c1) graphic2_pages_pane

0xe086,	// (0x0006b917) grid_graphic2_control_pane_ParamLimits

0xe086,	// (0x0006b917) grid_graphic2_control_pane

0xe0ce,	// (0x0006b95f) grid_graphic2_pane_ParamLimits

0xe0ce,	// (0x0006b95f) grid_graphic2_pane

0xe155,	// (0x0006b9e6) cell_graphic2_pane

0xe835,	// (0x0006c0c6) main_comp_mode_pane

0x58c6,	// (0x00063157) list_ai3_gene_pane_ParamLimits

0xd90b,	// (0x0006b19c) bg_popup_window_pane_cp19_ParamLimits

0x5ca0,	// (0x00063531) bg_touch_area_indi_pane_ParamLimits

0x5ca0,	// (0x00063531) bg_touch_area_indi_pane

0x5cb6,	// (0x00063547) bg_touch_area_indi_pane_cp01_ParamLimits

0x5cb6,	// (0x00063547) bg_touch_area_indi_pane_cp01

0x5ccc,	// (0x0006355d) bg_touch_area_indi_pane_cp02_ParamLimits

0x5ccc,	// (0x0006355d) bg_touch_area_indi_pane_cp02

0x5ce2,	// (0x00063573) bg_touch_area_indi_pane_cp03_ParamLimits

0x5ce2,	// (0x00063573) bg_touch_area_indi_pane_cp03

0x5cfc,	// (0x0006358d) popup_slider_window_g1_ParamLimits

0x5d18,	// (0x000635a9) popup_slider_window_g2_ParamLimits

0x5d34,	// (0x000635c5) popup_slider_window_g3_ParamLimits

0xfcca,	// (0x0006d55b) popup_slider_window_g_ParamLimits

0x5d9a,	// (0x0006362b) popup_slider_window_t1_ParamLimits

0x5e0e,	// (0x0006369f) small_volume_slider_vertical_pane_ParamLimits

0xe155,	// (0x0006b9e6) cell_graphic2_pane_ParamLimits

0xe1b0,	// (0x0006ba41) bg_button_pane_cp10_ParamLimits

0xe1b0,	// (0x0006ba41) bg_button_pane_cp10

0xe1c3,	// (0x0006ba54) bg_button_pane_cp11_ParamLimits

0xe1c3,	// (0x0006ba54) bg_button_pane_cp11

0xe1d6,	// (0x0006ba67) graphic2_pages_pane_g1_ParamLimits

0xe1d6,	// (0x0006ba67) graphic2_pages_pane_g1

0xe1f1,	// (0x0006ba82) graphic2_pages_pane_g2_ParamLimits

0xe1f1,	// (0x0006ba82) graphic2_pages_pane_g2

0x0001,

0xfd8e,	// (0x0006d61f) graphic2_pages_pane_g_ParamLimits

0xfd8e,	// (0x0006d61f) graphic2_pages_pane_g

0xe209,	// (0x0006ba9a) graphic2_pages_pane_t1_ParamLimits

0xe209,	// (0x0006ba9a) graphic2_pages_pane_t1

0xe221,	// (0x0006bab2) cell_graphic2_control_pane_ParamLimits

0xe221,	// (0x0006bab2) cell_graphic2_control_pane

0xe253,	// (0x0006bae4) cell_graphic2_pane_g1_ParamLimits

0xe253,	// (0x0006bae4) cell_graphic2_pane_g1

0xe260,	// (0x0006baf1) cell_graphic2_pane_g2_ParamLimits

0xe260,	// (0x0006baf1) cell_graphic2_pane_g2

0xd066,	// (0x0006a8f7) cell_graphic2_pane_g3_ParamLimits

0xd066,	// (0x0006a8f7) cell_graphic2_pane_g3

0xe26d,	// (0x0006bafe) cell_graphic2_pane_g4_ParamLimits

0xe26d,	// (0x0006bafe) cell_graphic2_pane_g4

0xe27a,	// (0x0006bb0b) cell_graphic2_pane_g5_ParamLimits

0xe27a,	// (0x0006bb0b) cell_graphic2_pane_g5

0x0004,

0xfd93,	// (0x0006d624) cell_graphic2_pane_g_ParamLimits

0xfd93,	// (0x0006d624) cell_graphic2_pane_g

0xe297,	// (0x0006bb28) cell_graphic2_pane_t1_ParamLimits

0xe297,	// (0x0006bb28) cell_graphic2_pane_t1

0x2c31,	// (0x000604c2) grid_highlight_pane_cp11_ParamLimits

0x2c31,	// (0x000604c2) grid_highlight_pane_cp11

0x722f,	// (0x00064ac0) bg_button_pane_cp05

0xe2e1,	// (0x0006bb72) cell_graphic2_control_pane_g1

0x46f5,	// (0x00061f86) bg_touch_area_indi_pane_g1

0x691e,	// (0x000641af) aid_cmod_rocker_key_size

0x6928,	// (0x000641b9) aid_cmode_itu_key_size

0x6932,	// (0x000641c3) main_cmode_video_pane

0x693c,	// (0x000641cd) main_comp_mode_itu_pane

0x6948,	// (0x000641d9) main_comp_mode_rocker_pane

0x6954,	// (0x000641e5) cell_cmode_rocker_pane_ParamLimits

0x6954,	// (0x000641e5) cell_cmode_rocker_pane

0x6966,	// (0x000641f7) cell_cmode_itu_pane_ParamLimits

0x6966,	// (0x000641f7) cell_cmode_itu_pane

0x8032,	// (0x000658c3) bg_button_pane_cp06_ParamLimits

0x8032,	// (0x000658c3) bg_button_pane_cp06

0x4965,	// (0x000621f6) cell_cmode_rocker_pane_g1_ParamLimits

0x4965,	// (0x000621f6) cell_cmode_rocker_pane_g1

0x5eb2,	// (0x00063743) cell_cmode_rocker_pane_g2_ParamLimits

0x5eb2,	// (0x00063743) cell_cmode_rocker_pane_g2

0x0001,

0xfda3,	// (0x0006d634) cell_cmode_rocker_pane_g_ParamLimits

0xfda3,	// (0x0006d634) cell_cmode_rocker_pane_g

0x7095,	// (0x00064926) bg_button_pane_cp07

0x697b,	// (0x0006420c) cell_cmode_itu_pane_g1

0x6984,	// (0x00064215) cell_cmode_itu_pane_t1

0x6992,	// (0x00064223) cell_cmode_itu_pane_t2

0x0001,

0xfda8,	// (0x0006d639) cell_cmode_itu_pane_t

0x60d8,	// (0x00063969) aid_touch_ctrl_left

0x60e0,	// (0x00063971) aid_touch_ctrl_right

0x7095,	// (0x00064926) compa_mode_pane

0xe307,	// (0x0006bb98) aid_cmod_rocker_key_size_cp

0xe311,	// (0x0006bba2) aid_cmode_itu_key_size_cp

0x69b4,	// (0x00064245) compa_mode_pane_g1

0x69bc,	// (0x0006424d) compa_mode_pane_g2

0x69c4,	// (0x00064255) compa_mode_pane_g3

0x0002,

0xfdad,	// (0x0006d63e) compa_mode_pane_g

0xe31b,	// (0x0006bbac) main_comp_mode_itu_pane_cp

0xe323,	// (0x0006bbb4) main_comp_mode_rocker_pane_cp

0xe32b,	// (0x0006bbbc) cell_cmode_itu_pane_cp_ParamLimits

0xe32b,	// (0x0006bbbc) cell_cmode_itu_pane_cp

0xe340,	// (0x0006bbd1) cell_cmode_rocker_pane_cp_ParamLimits

0xe340,	// (0x0006bbd1) cell_cmode_rocker_pane_cp

0x8032,	// (0x000658c3) bg_button_pane_cp06_cp_ParamLimits

0x8032,	// (0x000658c3) bg_button_pane_cp06_cp

0x4965,	// (0x000621f6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4965,	// (0x000621f6) cell_cmode_rocker_pane_g1_cp

0x46f5,	// (0x00061f86) cell_cmode_rocker_pane_g2_cp

0x7095,	// (0x00064926) bg_button_pane_cp07_cp

0xe352,	// (0x0006bbe3) cell_cmode_itu_pane_g1_cp

0xe35b,	// (0x0006bbec) cell_cmode_itu_pane_t1_cp

0xe35b,	// (0x0006bbec) cell_cmode_itu_pane_t2_cp

0xcbf4,	// (0x0006a485) settings_code_pane_cp2

0x70f7,	// (0x00064988) bg_popup_window_pane_cp3_ParamLimits

0x7348,	// (0x00064bd9) heading_pane_cp3_ParamLimits

0x7357,	// (0x00064be8) listscroll_popup_graphic_pane_ParamLimits

0x0b00,	// (0x0005e391) fep_hwr_aid_pane_ParamLimits

0x1080,	// (0x0005e911) aid_touch_sctrl_top_ParamLimits

0x109b,	// (0x0005e92c) sctrl_sk_top_pane_g1_ParamLimits

0x0d57,	// (0x0005e5e8) sctrl_sk_top_pane_g2_ParamLimits

0xfce3,	// (0x0006d574) sctrl_sk_top_pane_g_ParamLimits

0x10a8,	// (0x0005e939) sctrl_sk_top_pane_t1_ParamLimits

0x1080,	// (0x0005e911) aid_touch_sctrl_bottom_ParamLimits

0x10a8,	// (0x0005e939) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb06,	// (0x0006b397) aid_area_touch_clock

0xb98b,	// (0x0006921c) aid_vkb2_area_top_pane_cell_ParamLimits

0xb98b,	// (0x0006921c) aid_vkb2_area_top_pane_cell

0xba3a,	// (0x000692cb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xba3a,	// (0x000692cb) aid_vkb2_area_bottom_pane_cell

0x6590,	// (0x00063e21) popup_char_count_window

0x6a1a,	// (0x000642ab) popup_char_count_window_g1

0x6a23,	// (0x000642b4) popup_char_count_window_g2

0x6a2c,	// (0x000642bd) popup_char_count_window_g3

0x0002,

0xfdb4,	// (0x0006d645) popup_char_count_window_g

0x6a35,	// (0x000642c6) popup_char_count_window_t1

0x114f,	// (0x0005e9e0) popup_fep_char_preview_window_ParamLimits

0x114f,	// (0x0005e9e0) popup_fep_char_preview_window

0xb9ab,	// (0x0006923c) vkb2_top_candi_pane_ParamLimits

0xb9ab,	// (0x0006923c) vkb2_top_candi_pane

0xe369,	// (0x0006bbfa) cell_vkb2_top_candi_pane_ParamLimits

0xe369,	// (0x0006bbfa) cell_vkb2_top_candi_pane

0x16cd,	// (0x0005ef5e) bg_popup_fep_char_preview_window_ParamLimits

0x16cd,	// (0x0005ef5e) bg_popup_fep_char_preview_window

0x16db,	// (0x0005ef6c) popup_fep_char_preview_window_t1_ParamLimits

0x16db,	// (0x0005ef6c) popup_fep_char_preview_window_t1

0x6a8d,	// (0x0006431e) bg_popup_fep_char_preview_window_g1

0x6a95,	// (0x00064326) bg_popup_fep_char_preview_window_g2

0x6a9d,	// (0x0006432e) bg_popup_fep_char_preview_window_g3

0x6aa5,	// (0x00064336) bg_popup_fep_char_preview_window_g4

0x6aad,	// (0x0006433e) bg_popup_fep_char_preview_window_g5

0x6ab5,	// (0x00064346) bg_popup_fep_char_preview_window_g6

0x6abd,	// (0x0006434e) bg_popup_fep_char_preview_window_g7

0x6ac5,	// (0x00064356) bg_popup_fep_char_preview_window_g8

0x6acd,	// (0x0006435e) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbb,	// (0x0006d64c) bg_popup_fep_char_preview_window_g

0x0d57,	// (0x0005e5e8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0d57,	// (0x0005e5e8) cell_vkb2_top_candi_pane_g1

0x0d65,	// (0x0005e5f6) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0d65,	// (0x0005e5f6) cell_vkb2_top_candi_pane_g2

0x4c7c,	// (0x0006250d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4c7c,	// (0x0006250d) cell_vkb2_top_candi_pane_g3

0x171d,	// (0x0005efae) cell_vkb2_top_candi_pane_g4_ParamLimits

0x171d,	// (0x0005efae) cell_vkb2_top_candi_pane_g4

0x4e7a,	// (0x0006270b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4e7a,	// (0x0006270b) cell_vkb2_top_candi_pane_g5

0x173e,	// (0x0005efcf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x173e,	// (0x0005efcf) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd0,	// (0x0006d661) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd0,	// (0x0006d661) cell_vkb2_top_candi_pane_g

0x174c,	// (0x0005efdd) cell_vkb2_top_candi_pane_t1

0xb425,	// (0x00068cb6) aid_size_touch_slider_mark_ParamLimits

0xb425,	// (0x00068cb6) aid_size_touch_slider_mark

0xe06c,	// (0x0006b8fd) grid_graphic2_catg_pane_ParamLimits

0xe06c,	// (0x0006b8fd) grid_graphic2_catg_pane

0xe128,	// (0x0006b9b9) popup_grid_graphic2_window_t1_ParamLimits

0xe128,	// (0x0006b9b9) popup_grid_graphic2_window_t1

0xe13e,	// (0x0006b9cf) popup_grid_graphic2_window_t2_ParamLimits

0xe13e,	// (0x0006b9cf) popup_grid_graphic2_window_t2

0x0001,

0xfd89,	// (0x0006d61a) popup_grid_graphic2_window_t_ParamLimits

0xfd89,	// (0x0006d61a) popup_grid_graphic2_window_t

0x722f,	// (0x00064ac0) bg_button_pane_cp05_ParamLimits

0xe2e1,	// (0x0006bb72) cell_graphic2_control_pane_g1_ParamLimits

0xe3c9,	// (0x0006bc5a) cell_graphic2_catg_pane_ParamLimits

0xe3c9,	// (0x0006bc5a) cell_graphic2_catg_pane

0x7095,	// (0x00064926) bg_button_pane_cp12

0xe3db,	// (0x0006bc6c) cell_graphic2_catg_pane_g1

0x5fec,	// (0x0006387d) cell_tb_ext_pane_t1_ParamLimits

0x14f8,	// (0x0005ed89) vkb2_top_cell_right_narrow_pane_ParamLimits

0x14f8,	// (0x0005ed89) vkb2_top_cell_right_narrow_pane

0x1510,	// (0x0005eda1) vkb2_top_cell_right_wide_pane_ParamLimits

0x1510,	// (0x0005eda1) vkb2_top_cell_right_wide_pane

0x0af2,	// (0x0005e383) bg_vkb2_func_pane_ParamLimits

0x0af2,	// (0x0005e383) bg_vkb2_func_pane

0x1581,	// (0x0005ee12) vkb2_top_cell_left_pane_g1_ParamLimits

0x0af2,	// (0x0005e383) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0af2,	// (0x0005e383) bg_vkb2_fuc_pane_cp03

0x15ea,	// (0x0005ee7b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1f37,	// (0x0005f7c8) bg_vkb2_func_pane_g1

0x1f3f,	// (0x0005f7d0) bg_vkb2_func_pane_g2

0x1f4f,	// (0x0005f7e0) bg_vkb2_func_pane_g3

0x1f47,	// (0x0005f7d8) bg_vkb2_func_pane_g4

0x1f57,	// (0x0005f7e8) bg_vkb2_func_pane_g5

0x1f5f,	// (0x0005f7f0) bg_vkb2_func_pane_g6

0x1f67,	// (0x0005f7f8) bg_vkb2_func_pane_g7

0x1f6f,	// (0x0005f800) bg_vkb2_func_pane_g8

0x1f2f,	// (0x0005f7c0) bg_vkb2_func_pane_g9

0x0008,

0xfddd,	// (0x0006d66e) bg_vkb2_func_pane_g

0x0af2,	// (0x0005e383) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0af2,	// (0x0005e383) bg_vkb2_fuc_pane_cp01

0x1581,	// (0x0005ee12) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1581,	// (0x0005ee12) vkb2_top_cell_right_wide_pane_g1

0x0af2,	// (0x0005e383) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0af2,	// (0x0005e383) bg_vkb2_fuc_pane_cp02

0x176b,	// (0x0005effc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x176b,	// (0x0005effc) vkb2_top_cell_right_narrow_pane_g1

0xd84d,	// (0x0006b0de) aid_touch_area_decrease_ParamLimits

0xd84d,	// (0x0006b0de) aid_touch_area_decrease

0xd887,	// (0x0006b118) aid_touch_area_increase_ParamLimits

0xd887,	// (0x0006b118) aid_touch_area_increase

0xd8af,	// (0x0006b140) aid_touch_area_mute_ParamLimits

0xd8af,	// (0x0006b140) aid_touch_area_mute

0xd8d7,	// (0x0006b168) aid_touch_area_slider_ParamLimits

0xd8d7,	// (0x0006b168) aid_touch_area_slider

0xd917,	// (0x0006b1a8) popup_slider_window_g4_ParamLimits

0xd917,	// (0x0006b1a8) popup_slider_window_g4

0xd931,	// (0x0006b1c2) popup_slider_window_g5_ParamLimits

0xd931,	// (0x0006b1c2) popup_slider_window_g5

0xd957,	// (0x0006b1e8) popup_slider_window_g6_ParamLimits

0xd957,	// (0x0006b1e8) popup_slider_window_g6

0x5dc8,	// (0x00063659) popup_slider_window_t2_ParamLimits

0x5dc8,	// (0x00063659) popup_slider_window_t2

0x0001,

0xfcd7,	// (0x0006d568) popup_slider_window_t_ParamLimits

0xfcd7,	// (0x0006d568) popup_slider_window_t

0xd96d,	// (0x0006b1fe) slider_pane_ParamLimits

0xd96d,	// (0x0006b1fe) slider_pane

0x6af0,	// (0x00064381) slider_pane_g1_ParamLimits

0x6af0,	// (0x00064381) slider_pane_g1

0x6b04,	// (0x00064395) slider_pane_g2_ParamLimits

0x6b04,	// (0x00064395) slider_pane_g2

0x6b1a,	// (0x000643ab) slider_pane_g3_ParamLimits

0x6b1a,	// (0x000643ab) slider_pane_g3

0x0003,

0xfdf0,	// (0x0006d681) slider_pane_g_ParamLimits

0xfdf0,	// (0x0006d681) slider_pane_g

0xabf9,	// (0x0006848a) popup_tb_float_extension_window_ParamLimits

0xabf9,	// (0x0006848a) popup_tb_float_extension_window

0x6b46,	// (0x000643d7) aid_size_cell_tb_float_ext

0x7095,	// (0x00064926) bg_popup_sub_window_cp28

0xe3e4,	// (0x0006bc75) grid_tb_float_ext_pane

0xe3ee,	// (0x0006bc7f) cell_tb_float_ext_pane_ParamLimits

0xe3ee,	// (0x0006bc7f) cell_tb_float_ext_pane

0xe408,	// (0x0006bc99) cell_tb_float_ext_pane_g1

0xe411,	// (0x0006bca2) grid_highlight_pane_cp12

0xb59d,	// (0x00068e2e) cell_last_hwr_side_pane_ParamLimits

0xb59d,	// (0x00068e2e) cell_last_hwr_side_pane

0x46f5,	// (0x00061f86) cell_last_hwr_side_pane_g1

0x6b88,	// (0x00064419) cell_last_hwr_side_pane_g2

0x0001,

0xfdf9,	// (0x0006d68a) cell_last_hwr_side_pane_g

0xbb17,	// (0x000693a8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbb17,	// (0x000693a8) vkb2_area_bottom_space_btn_pane

0x0d57,	// (0x0005e5e8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6645,	// (0x00063ed6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x174c,	// (0x0005efdd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x178b,	// (0x0005f01c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x178b,	// (0x0005f01c) vkb2_area_bottom_space_btn_pane_g1

0x17c5,	// (0x0005f056) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x17c5,	// (0x0005f056) vkb2_area_bottom_space_btn_pane_g2

0x17fb,	// (0x0005f08c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x17fb,	// (0x0005f08c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfe,	// (0x0006d68f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfe,	// (0x0006d68f) vkb2_area_bottom_space_btn_pane_g

0x0bb5,	// (0x0005e446) cel_fep_hwr_func_pane_ParamLimits

0x0bb5,	// (0x0005e446) cel_fep_hwr_func_pane

0xb572,	// (0x00068e03) cell_hwr_side_button_pane_ParamLimits

0xb572,	// (0x00068e03) cell_hwr_side_button_pane

0xdb06,	// (0x0006b397) aid_area_touch_clock_ParamLimits

0x722f,	// (0x00064ac0) bg_uniindi_top_pane_ParamLimits

0xdb18,	// (0x0006b3a9) uniindi_top_pane_g1_ParamLimits

0xdb2e,	// (0x0006b3bf) uniindi_top_pane_g2_ParamLimits

0xdb3a,	// (0x0006b3cb) uniindi_top_pane_g3_ParamLimits

0x6066,	// (0x000638f7) uniindi_top_pane_g4_ParamLimits

0xfd0f,	// (0x0006d5a0) uniindi_top_pane_g_ParamLimits

0xdb4b,	// (0x0006b3dc) uniindi_top_pane_t1_ParamLimits

0x722f,	// (0x00064ac0) bg_vkb2_func_pane_cp01_ParamLimits

0x722f,	// (0x00064ac0) bg_vkb2_func_pane_cp01

0x6b91,	// (0x00064422) cel_fep_hwr_func_pane_g1_ParamLimits

0x6b91,	// (0x00064422) cel_fep_hwr_func_pane_g1

0x722f,	// (0x00064ac0) bg_vkb2_func_pane_cp02_ParamLimits

0x722f,	// (0x00064ac0) bg_vkb2_func_pane_cp02

0x6b91,	// (0x00064422) cell_hwr_side_button_pane_g1_ParamLimits

0x6b91,	// (0x00064422) cell_hwr_side_button_pane_g1

0x1db3,	// (0x0005f644) status_pane_g4_ParamLimits

0x1db3,	// (0x0005f644) status_pane_g4

0x1dcd,	// (0x0005f65e) status_pane_t1

0x4362,	// (0x00061bf3) form2_midp_gauge_slider_cont_pane

0x436a,	// (0x00061bfb) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcf77,	// (0x0006a808) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcf89,	// (0x0006a81a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x0006d367) form2_midp_gauge_slider_pane_t_ParamLimits

0x43a0,	// (0x00061c31) form2_midp_slider_pane_ParamLimits

0x1117,	// (0x0005e9a8) aid_size_cell_func_vkb2_ParamLimits

0x1117,	// (0x0005e9a8) aid_size_cell_func_vkb2

0x6b32,	// (0x000643c3) slider_pane_g4_ParamLimits

0x6b32,	// (0x000643c3) slider_pane_g4

0xbb80,	// (0x00069411) form2_midp_gauge_slider_pane_t2_cp01

0xbb8e,	// (0x0006941f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbb8e,	// (0x0006941f) form2_midp_gauge_slider_pane_t3_cp01

0x1870,	// (0x0005f101) form2_midp_slider_pane_cp01

0x7095,	// (0x00064926) navi_smil_pane

0x6bca,	// (0x0006445b) navi_smil_pane_g1

0x6bd2,	// (0x00064463) navi_smil_pane_t1

0x6b9f,	// (0x00064430) form2_midp_slider_pane_g1

0x6ba8,	// (0x00064439) form2_midp_slider_pane_g2

0x6bb0,	// (0x00064441) form2_midp_slider_pane_g3

0x6b9f,	// (0x00064430) form2_midp_slider_pane_g4

0xe41a,	// (0x0006bcab) form2_midp_slider_pane_g5

0x0004,

0xfe07,	// (0x0006d698) form2_midp_slider_pane_g

0x1835,	// (0x0005f0c6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1835,	// (0x0005f0c6) vkb2_area_bottom_space_btn_pane_g4

0xae31,	// (0x000686c2) lc0_navi_pane_ParamLimits

0xae31,	// (0x000686c2) lc0_navi_pane

0xae9b,	// (0x0006872c) lc0_stat_indi_pane_ParamLimits

0xae9b,	// (0x0006872c) lc0_stat_indi_pane

0xaeb0,	// (0x00068741) ls0_title_pane_ParamLimits

0xaeb0,	// (0x00068741) ls0_title_pane

0x8032,	// (0x000658c3) bg_popup_sub_pane_cp14_ParamLimits

0xdaed,	// (0x0006b37e) list_uniindi_pane_ParamLimits

0xdaf9,	// (0x0006b38a) uniindi_top_pane_ParamLimits

0x60b0,	// (0x00063941) list_single_uniindi_pane_g1_ParamLimits

0x60c3,	// (0x00063954) list_single_uniindi_pane_t1_ParamLimits

0xbbab,	// (0x0006943c) lc0_stat_clock_pane_ParamLimits

0xbbab,	// (0x0006943c) lc0_stat_clock_pane

0xe425,	// (0x0006bcb6) lc0_stat_indi_pane_g1_ParamLimits

0xe425,	// (0x0006bcb6) lc0_stat_indi_pane_g1

0xe432,	// (0x0006bcc3) lc0_stat_indi_pane_g2_ParamLimits

0xe432,	// (0x0006bcc3) lc0_stat_indi_pane_g2

0x0001,

0xfe12,	// (0x0006d6a3) lc0_stat_indi_pane_g_ParamLimits

0xfe12,	// (0x0006d6a3) lc0_stat_indi_pane_g

0xbbbb,	// (0x0006944c) lc0_uni_indicator_pane_ParamLimits

0xbbbb,	// (0x0006944c) lc0_uni_indicator_pane

0xe43f,	// (0x0006bcd0) ls0_title_pane_g1_ParamLimits

0xe43f,	// (0x0006bcd0) ls0_title_pane_g1

0xe453,	// (0x0006bce4) ls0_title_pane_t1_ParamLimits

0xe453,	// (0x0006bce4) ls0_title_pane_t1

0xbbcb,	// (0x0006945c) lc0_uni_indicator_pane_g1_ParamLimits

0xbbcb,	// (0x0006945c) lc0_uni_indicator_pane_g1

0x6c44,	// (0x000644d5) lc0_stat_clock_pane_t1

0xe835,	// (0x0006c0c6) main_ai5_pane

0x6c5a,	// (0x000644eb) ai5_sk_pane_ParamLimits

0x6c5a,	// (0x000644eb) ai5_sk_pane

0xe48b,	// (0x0006bd1c) cell_ai5_widget_pane_ParamLimits

0xe48b,	// (0x0006bd1c) cell_ai5_widget_pane

0x6d30,	// (0x000645c1) aid_size_cell_widget_grid

0x6d3e,	// (0x000645cf) bg_ai5_widget_pane_ParamLimits

0x6d3e,	// (0x000645cf) bg_ai5_widget_pane

0x6dbc,	// (0x0006464d) cell_ai5_widget_pane_g2

0x6dd0,	// (0x00064661) cell_ai5_widget_pane_g3

0x6dea,	// (0x0006467b) cell_ai5_widget_pane_g4

0x6dfa,	// (0x0006468b) cell_ai5_widget_pane_g5

0x6e0a,	// (0x0006469b) cell_ai5_widget_pane_g6

0x6e16,	// (0x000646a7) cell_ai5_widget_pane_g7

0x6e82,	// (0x00064713) cell_ai5_widget_pane_t1_ParamLimits

0x6e82,	// (0x00064713) cell_ai5_widget_pane_t1

0x6e9f,	// (0x00064730) cell_ai5_widget_pane_t2_ParamLimits

0x6e9f,	// (0x00064730) cell_ai5_widget_pane_t2

0x6eb7,	// (0x00064748) cell_ai5_widget_pane_t3_ParamLimits

0x6eb7,	// (0x00064748) cell_ai5_widget_pane_t3

0x6ecf,	// (0x00064760) cell_ai5_widget_pane_t4_ParamLimits

0x6ecf,	// (0x00064760) cell_ai5_widget_pane_t4

0xe4f7,	// (0x0006bd88) cell_ai5_widget_pane_t5_ParamLimits

0xe4f7,	// (0x0006bd88) cell_ai5_widget_pane_t5

0x6f14,	// (0x000647a5) cell_ai5_widget_pane_t6_ParamLimits

0x6f14,	// (0x000647a5) cell_ai5_widget_pane_t6

0x6f26,	// (0x000647b7) cell_ai5_widget_pane_t7_ParamLimits

0x6f26,	// (0x000647b7) cell_ai5_widget_pane_t7

0x6f45,	// (0x000647d6) cell_ai5_widget_pane_t8_ParamLimits

0x6f45,	// (0x000647d6) cell_ai5_widget_pane_t8

0x000b,

0xfe32,	// (0x0006d6c3) cell_ai5_widget_pane_t_ParamLimits

0xfe32,	// (0x0006d6c3) cell_ai5_widget_pane_t

0x6fc9,	// (0x0006485a) grid_ai5_widget_pane

0x8032,	// (0x000658c3) highlight_cell_ai5_widget_pane_ParamLimits

0x8032,	// (0x000658c3) highlight_cell_ai5_widget_pane

0xe517,	// (0x0006bda8) ai5_sk_left_pane

0xe521,	// (0x0006bdb2) ai5_sk_middle_pane

0xe52b,	// (0x0006bdbc) ai5_sk_right_pane

0x6ffb,	// (0x0006488c) bg_ai5_widget_pane_g1_ParamLimits

0x6ffb,	// (0x0006488c) bg_ai5_widget_pane_g1

0x7007,	// (0x00064898) bg_ai5_widget_pane_g2_ParamLimits

0x7007,	// (0x00064898) bg_ai5_widget_pane_g2

0x7013,	// (0x000648a4) bg_ai5_widget_pane_g3_ParamLimits

0x7013,	// (0x000648a4) bg_ai5_widget_pane_g3

0x701f,	// (0x000648b0) bg_ai5_widget_pane_g4_ParamLimits

0x701f,	// (0x000648b0) bg_ai5_widget_pane_g4

0x702b,	// (0x000648bc) bg_ai5_widget_pane_g5_ParamLimits

0x702b,	// (0x000648bc) bg_ai5_widget_pane_g5

0x7037,	// (0x000648c8) bg_ai5_widget_pane_g6_ParamLimits

0x7037,	// (0x000648c8) bg_ai5_widget_pane_g6

0x7043,	// (0x000648d4) bg_ai5_widget_pane_g7_ParamLimits

0x7043,	// (0x000648d4) bg_ai5_widget_pane_g7

0x704f,	// (0x000648e0) bg_ai5_widget_pane_g8_ParamLimits

0x704f,	// (0x000648e0) bg_ai5_widget_pane_g8

0x705b,	// (0x000648ec) bg_ai5_widget_pane_g9_ParamLimits

0x705b,	// (0x000648ec) bg_ai5_widget_pane_g9

0x0008,

0xfe4b,	// (0x0006d6dc) bg_ai5_widget_pane_g_ParamLimits

0xfe4b,	// (0x0006d6dc) bg_ai5_widget_pane_g

0x73bd,	// (0x00064c4e) cell_shortcut_ai5_widget_pane_ParamLimits

0x73bd,	// (0x00064c4e) cell_shortcut_ai5_widget_pane

0xc46d,	// (0x00069cfe) bg_cell_shortcut_ai5_widget_pane

0x73ce,	// (0x00064c5f) cell_grid_ai5_widget_pane_g1

0xc46d,	// (0x00069cfe) highlight_cell_shortcut_ai5_widget_pane

0x1f37,	// (0x0005f7c8) ai5_sk_left_pane_g1

0x73d7,	// (0x00064c68) ai5_sk_left_pane_g2

0x73df,	// (0x00064c70) ai5_sk_left_pane_g3

0x73e7,	// (0x00064c78) ai5_sk_left_pane_g4

0x0003,

0xfe5e,	// (0x0006d6ef) ai5_sk_left_pane_g

0x73ef,	// (0x00064c80) ai5_sk_left_pane_t1

0x1f3f,	// (0x0005f7d0) ai5_sk_right_pane_g1

0x73fd,	// (0x00064c8e) ai5_sk_right_pane_g2

0x7405,	// (0x00064c96) ai5_sk_right_pane_g3

0x740d,	// (0x00064c9e) ai5_sk_right_pane_g4

0x0003,

0xfe67,	// (0x0006d6f8) ai5_sk_right_pane_g

0x7415,	// (0x00064ca6) ai5_sk_right_pane_t1

0x1f3f,	// (0x0005f7d0) ai5_sk_middle_pane_g1

0x1f37,	// (0x0005f7c8) ai5_sk_middle_pane_g2

0x1f57,	// (0x0005f7e8) ai5_sk_middle_pane_g3

0x7405,	// (0x00064c96) ai5_sk_middle_pane_g4

0x73df,	// (0x00064c70) ai5_sk_middle_pane_g5

0x7423,	// (0x00064cb4) ai5_sk_middle_pane_g6

0xe535,	// (0x0006bdc6) ai5_sk_middle_pane_g7

0x0006,

0xfe70,	// (0x0006d701) ai5_sk_middle_pane_g

0xad1d,	// (0x000685ae) aid_touch_area_size_lc0_ParamLimits

0xad1d,	// (0x000685ae) aid_touch_area_size_lc0

0x0d86,	// (0x0005e617) cell_hwr_candidate_pane_t1_ParamLimits

0x0214,	// (0x0005daa5) aid_touch_navi_pane

0xafa9,	// (0x0006883a) status_dt_navi_pane_ParamLimits

0xafa9,	// (0x0006883a) status_dt_navi_pane

0xafc1,	// (0x00068852) status_dt_sta_pane_ParamLimits

0xafc1,	// (0x00068852) status_dt_sta_pane

0xe53d,	// (0x0006bdce) dt_sta_controll_pane

0xe54a,	// (0x0006bddb) dt_sta_indi_pane

0xe557,	// (0x0006bde8) dt_sta_title_pane

0x722f,	// (0x00064ac0) bg_dt_sta_indi_pane_ParamLimits

0x722f,	// (0x00064ac0) bg_dt_sta_indi_pane

0xe569,	// (0x0006bdfa) dt_sta_battery_pane

0xe571,	// (0x0006be02) dt_sta_indi_pane_g1

0x7475,	// (0x00064d06) dt_sta_indi_pane_g2

0x747e,	// (0x00064d0f) dt_sta_indi_pane_g3

0x0002,

0xfe7f,	// (0x0006d710) dt_sta_indi_pane_g

0x7487,	// (0x00064d18) dt_sta_signal_pane

0x8032,	// (0x000658c3) bg_dt_sta_title_pane_ParamLimits

0x8032,	// (0x000658c3) bg_dt_sta_title_pane

0x2d91,	// (0x00060622) dt_sta_title_pane_g1

0xe57a,	// (0x0006be0b) dt_sta_title_pane_t1_ParamLimits

0xe57a,	// (0x0006be0b) dt_sta_title_pane_t1

0x7095,	// (0x00064926) bg_dt_sta_control_pane

0xe58f,	// (0x0006be20) dt_sta_controll_pane_g1

0xe598,	// (0x0006be29) bg_dt_sta_title_pane_g1

0xe5a1,	// (0x0006be32) bg_dt_sta_title_pane_g2

0xe5aa,	// (0x0006be3b) bg_dt_sta_title_pane_g3

0x0002,

0xfe86,	// (0x0006d717) bg_dt_sta_title_pane_g

0x46f5,	// (0x00061f86) bg_dt_sta_indi_pane_g1

0x74c9,	// (0x00064d5a) dt_sta_signal_pane_g1

0x74d1,	// (0x00064d62) dt_sta_signal_pane_g2

0x0001,

0xfe8d,	// (0x0006d71e) dt_sta_signal_pane_g

0x74d9,	// (0x00064d6a) dt_sta_battery_pane_g1

0x74e2,	// (0x00064d73) dt_sta_battery_pane_t1

0x46f5,	// (0x00061f86) bg_dt_sta_control_pane_g1

0xc08e,	// (0x0006991f) fep_china_uni_eep_pane

0xc096,	// (0x00069927) fep_china_uni_entry_pane_ParamLimits

0xc0a6,	// (0x00069937) popup_fep_china_uni_window_g1_ParamLimits

0xc0b6,	// (0x00069947) popup_fep_china_uni_window_g2_ParamLimits

0xc0b6,	// (0x00069947) popup_fep_china_uni_window_g2

0x0001,

0xf6f1,	// (0x0006cf82) popup_fep_china_uni_window_g_ParamLimits

0xf6f1,	// (0x0006cf82) popup_fep_china_uni_window_g

0x74f1,	// (0x00064d82) fep_china_uni_eep_pane_g1

0x74f9,	// (0x00064d8a) fep_china_uni_eep_pane_t1

0x6bc1,	// (0x00064452) aid_touch_area_size_smil_player

0x036a,	// (0x0005dbfb) lc0_clock_pane

0x1dc1,	// (0x0005f652) status_pane_g5_ParamLimits

0x1dc1,	// (0x0005f652) status_pane_g5

0xa755,	// (0x00067fe6) popup_keymap_window

0x1d7f,	// (0x0005f610) status_icon_pane

0x6dd0,	// (0x00064661) cell_ai5_widget_pane_g3_ParamLimits

0x6dea,	// (0x0006467b) cell_ai5_widget_pane_g4_ParamLimits

0x6dfa,	// (0x0006468b) cell_ai5_widget_pane_g5_ParamLimits

0x6e22,	// (0x000646b3) cell_ai5_widget_pane_g8_ParamLimits

0x6e22,	// (0x000646b3) cell_ai5_widget_pane_g8

0x6e36,	// (0x000646c7) cell_ai5_widget_pane_g9_ParamLimits

0x6e36,	// (0x000646c7) cell_ai5_widget_pane_g9

0x6e4a,	// (0x000646db) cell_ai5_widget_pane_g10_ParamLimits

0x6e4a,	// (0x000646db) cell_ai5_widget_pane_g10

0x7508,	// (0x00064d99) status_icon_pane_g1

0x7095,	// (0x00064926) bg_popup_sub_pane_cp13

0x7510,	// (0x00064da1) popup_keymap_window_t1

0xa411,	// (0x00067ca2) control_pane_g6_ParamLimits

0xa411,	// (0x00067ca2) control_pane_g6

0xa41e,	// (0x00067caf) control_pane_g7_ParamLimits

0xa41e,	// (0x00067caf) control_pane_g7

0xa42b,	// (0x00067cbc) control_pane_g8_ParamLimits

0xa42b,	// (0x00067cbc) control_pane_g8

0xe53d,	// (0x0006bdce) dt_sta_controll_pane_ParamLimits

0xe54a,	// (0x0006bddb) dt_sta_indi_pane_ParamLimits

0xe557,	// (0x0006bde8) dt_sta_title_pane_ParamLimits

0x7f7d,	// (0x0006580e) aid_size_touch_scroll_bar_cale

0x9053,	// (0x000668e4) popup_discreet_window_ParamLimits

0x9053,	// (0x000668e4) popup_discreet_window

0x90a5,	// (0x00066936) popup_sk_window

0x25d5,	// (0x0005fe66) bg_popup_sub_pane_cp28_ParamLimits

0x25d5,	// (0x0005fe66) bg_popup_sub_pane_cp28

0x751e,	// (0x00064daf) popup_discreet_window_g1_ParamLimits

0x751e,	// (0x00064daf) popup_discreet_window_g1

0x753e,	// (0x00064dcf) popup_discreet_window_t1_ParamLimits

0x753e,	// (0x00064dcf) popup_discreet_window_t1

0x755c,	// (0x00064ded) popup_discreet_window_t2_ParamLimits

0x755c,	// (0x00064ded) popup_discreet_window_t2

0x0002,

0xfe92,	// (0x0006d723) popup_discreet_window_t_ParamLimits

0xfe92,	// (0x0006d723) popup_discreet_window_t

0x18a7,	// (0x0005f138) popup_sk_window_g1

0x18b1,	// (0x0005f142) popup_sk_window_g2

0x0001,

0xfe99,	// (0x0006d72a) popup_sk_window_g

0xbbf6,	// (0x00069487) popup_sk_window_t1

0xbc04,	// (0x00069495) popup_sk_window_t1_copy1

0x6dbc,	// (0x0006464d) cell_ai5_widget_pane_g2_ParamLimits

0x6f57,	// (0x000647e8) cell_ai5_widget_pane_t9_ParamLimits

0x6f57,	// (0x000647e8) cell_ai5_widget_pane_t9

0x7095,	// (0x00064926) main_fep_fshwr2_pane

0xbc12,	// (0x000694a3) aid_fshwr2_btn_pane

0xbc26,	// (0x000694b7) aid_fshwr2_syb_pane

0xbc3a,	// (0x000694cb) aid_fshwr2_txt_pane

0xbc4a,	// (0x000694db) fshwr2_func_candi_pane

0xbc6a,	// (0x000694fb) fshwr2_hwr_syb_pane

0xbc8c,	// (0x0006951d) fshwr2_icf_pane

0xe835,	// (0x0006c0c6) fshwr2_icf_bg_pane

0x1979,	// (0x0005f20a) fshwr2_icf_pane_t1_ParamLimits

0x1979,	// (0x0005f20a) fshwr2_icf_pane_t1

0xc00b,	// (0x0006989c) fshwr2_func_candi_pane_g1

0xe5b3,	// (0x0006be44) fshwr2_func_candi_row_pane_ParamLimits

0xe5b3,	// (0x0006be44) fshwr2_func_candi_row_pane

0xbcbc,	// (0x0006954d) cell_fshwr2_syb_pane_ParamLimits

0xbcbc,	// (0x0006954d) cell_fshwr2_syb_pane

0x19b5,	// (0x0005f246) fshwr2_hwr_syb_pane_g1_ParamLimits

0x19b5,	// (0x0005f246) fshwr2_hwr_syb_pane_g1

0xe835,	// (0x0006c0c6) bg_popup_call_pane_cp01

0xbce2,	// (0x00069573) fshwr2_func_candi_cell_pane_ParamLimits

0xbce2,	// (0x00069573) fshwr2_func_candi_cell_pane

0x23be,	// (0x0005fc4f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x23be,	// (0x0005fc4f) fshwr2_func_candi_cell_bg_pane

0xbd2d,	// (0x000695be) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbd2d,	// (0x000695be) fshwr2_func_candi_cell_pane_g1

0xbd64,	// (0x000695f5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbd64,	// (0x000695f5) fshwr2_func_candi_cell_pane_t1

0xe835,	// (0x0006c0c6) bg_button_pane_cp08

0x83d7,	// (0x00065c68) cell_fshwr2_syb_bg_pane

0xbd7f,	// (0x00069610) cell_fshwr2_syb_bg_pane_g1

0xbd92,	// (0x00069623) cell_fshwr2_syb_bg_pane_t1

0x8032,	// (0x000658c3) main_tmo_pane

0xc9a6,	// (0x0006a237) uni_indicator_pane_g1_ParamLimits

0xc9bc,	// (0x0006a24d) uni_indicator_pane_g2_ParamLimits

0xc9d2,	// (0x0006a263) uni_indicator_pane_g3_ParamLimits

0x30fe,	// (0x0006098f) uni_indicator_pane_g4_ParamLimits

0x30fe,	// (0x0006098f) uni_indicator_pane_g4

0x3112,	// (0x000609a3) uni_indicator_pane_g5_ParamLimits

0x3112,	// (0x000609a3) uni_indicator_pane_g5

0x3112,	// (0x000609a3) uni_indicator_pane_g6_ParamLimits

0x3112,	// (0x000609a3) uni_indicator_pane_g6

0xf8f0,	// (0x0006d181) uni_indicator_pane_g_ParamLimits

0xd82f,	// (0x0006b0c0) popup_tmo_note_window_ParamLimits

0xd82f,	// (0x0006b0c0) popup_tmo_note_window

0x10f9,	// (0x0005e98a) fshwr2_bg_pane

0xbd55,	// (0x000695e6) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbd55,	// (0x000695e6) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9e,	// (0x0006d72f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9e,	// (0x0006d72f) fshwr2_func_candi_cell_pane_g

0x0d3f,	// (0x0005e5d0) bg_popup_window_pane_cp01

0x1a6b,	// (0x0005f2fc) bg_popup_window_pane_g1_cp01

0x75d5,	// (0x00064e66) bg_popup_window_pane_cp22_ParamLimits

0x75d5,	// (0x00064e66) bg_popup_window_pane_cp22

0xe5d6,	// (0x0006be67) listscroll_tmo_link_pane_ParamLimits

0xe5d6,	// (0x0006be67) listscroll_tmo_link_pane

0x7623,	// (0x00064eb4) popup_tmo_note_window_g1_ParamLimits

0x7623,	// (0x00064eb4) popup_tmo_note_window_g1

0xe616,	// (0x0006bea7) tmo_note_info_pane_ParamLimits

0xe616,	// (0x0006bea7) tmo_note_info_pane

0xe630,	// (0x0006bec1) list_tmo_note_info_pane_g1_ParamLimits

0xe630,	// (0x0006bec1) list_tmo_note_info_pane_g1

0x7661,	// (0x00064ef2) list_tmo_note_info_pane_g2_ParamLimits

0x7661,	// (0x00064ef2) list_tmo_note_info_pane_g2

0x0001,

0xfea3,	// (0x0006d734) list_tmo_note_info_pane_g_ParamLimits

0xfea3,	// (0x0006d734) list_tmo_note_info_pane_g

0x767d,	// (0x00064f0e) list_tmo_note_info_text_pane_ParamLimits

0x767d,	// (0x00064f0e) list_tmo_note_info_text_pane

0x76fe,	// (0x00064f8f) list_tmo_link_pane

0x770b,	// (0x00064f9c) scroll_pane_cp20

0x7718,	// (0x00064fa9) list_single_tmo_link_pane_ParamLimits

0x7718,	// (0x00064fa9) list_single_tmo_link_pane

0x7728,	// (0x00064fb9) list_single_tmo_link_pane_t1

0x7736,	// (0x00064fc7) list_tmo_note_info_text_pane_t1_ParamLimits

0x7736,	// (0x00064fc7) list_tmo_note_info_text_pane_t1

0x9d7c,	// (0x0006760d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9d7c,	// (0x0006760d) aid_size_touch_scroll_bar_cp01

0x9c7c,	// (0x0006750d) aid_size_touch_slider_marker

0x9095,	// (0x00066926) popup_settings_window_ParamLimits

0x9095,	// (0x00066926) popup_settings_window

0xea7b,	// (0x0006c30c) popup_candi_list_indi_window

0x0214,	// (0x0005daa5) aid_touch_navi_pane_ParamLimits

0x1054,	// (0x0005e8e5) rs_clock_indi_pane

0x105d,	// (0x0005e8ee) sctrl_sk_bottom_pane_ParamLimits

0x106e,	// (0x0005e8ff) sctrl_sk_top_pane_ParamLimits

0xb84b,	// (0x000690dc) popup_fep_tooltip_window

0x6d30,	// (0x000645c1) aid_size_cell_widget_grid_ParamLimits

0x6da5,	// (0x00064636) cell_ai5_widget_pane_g1_ParamLimits

0x6da5,	// (0x00064636) cell_ai5_widget_pane_g1

0x6e0a,	// (0x0006469b) cell_ai5_widget_pane_g6_ParamLimits

0x6e16,	// (0x000646a7) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe17,	// (0x0006d6a8) cell_ai5_widget_pane_g_ParamLimits

0xfe17,	// (0x0006d6a8) cell_ai5_widget_pane_g

0x6f86,	// (0x00064817) cell_ai5_widget_pane_t10_ParamLimits

0x6f86,	// (0x00064817) cell_ai5_widget_pane_t10

0x6fc9,	// (0x0006485a) grid_ai5_widget_pane_ParamLimits

0x7067,	// (0x000648f8) cell_contacts_ai5_widget_pane_ParamLimits

0x7067,	// (0x000648f8) cell_contacts_ai5_widget_pane

0x7571,	// (0x00064e02) popup_discreet_window_t3_ParamLimits

0x7571,	// (0x00064e02) popup_discreet_window_t3

0xbca8,	// (0x00069539) popup_fshwr2_char_preview_window_ParamLimits

0xbca8,	// (0x00069539) popup_fshwr2_char_preview_window

0xe647,	// (0x0006bed8) tmo_note_info_pane_t1

0xe65c,	// (0x0006beed) tmo_note_info_pane_t2

0xe673,	// (0x0006bf04) tmo_note_info_pane_t3

0x76da,	// (0x00064f6b) tmo_note_info_pane_t4

0x76ec,	// (0x00064f7d) tmo_note_info_pane_t5

0x0004,

0xfea8,	// (0x0006d739) tmo_note_info_pane_t

0x76fe,	// (0x00064f8f) list_tmo_link_pane_ParamLimits

0x770b,	// (0x00064f9c) scroll_pane_cp20_ParamLimits

0xe835,	// (0x0006c0c6) bg_popup_fep_char_preview_window_cp01

0xe688,	// (0x0006bf19) popup_fshwr2_char_preview_window_t1

0x775d,	// (0x00064fee) popup_candi_list_indi_window_g1

0x7766,	// (0x00064ff7) bg_cell_contacts_ai5_widget_pane

0x7772,	// (0x00065003) cell_contacts_ai5_widget_pane_g1

0x4dcf,	// (0x00062660) cell_contacts_ai5_widget_pane_g2

0x7787,	// (0x00065018) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb3,	// (0x0006d744) cell_contacts_ai5_widget_pane_g

0x7793,	// (0x00065024) cell_contacts_ai5_widget_pane_t1

0x8032,	// (0x000658c3) highlight_cell_shortcut_ai5_widget_pane_cp01

0x780a,	// (0x0006509b) settings_container_pane

0xc46d,	// (0x00069cfe) listscroll_set_pane_copy1

0x3c83,	// (0x00061514) scroll_pane_cp121_copy1

0x237a,	// (0x0005fc0b) set_content_pane_copy1

0xe696,	// (0x0006bf27) aid_height_set_list_copy1_ParamLimits

0xe696,	// (0x0006bf27) aid_height_set_list_copy1

0x32fa,	// (0x00060b8b) aid_size_parent_copy1_ParamLimits

0x32fa,	// (0x00060b8b) aid_size_parent_copy1

0xe6a2,	// (0x0006bf33) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe6a2,	// (0x0006bf33) button_value_adjust_pane_cp6_copy1

0x83d7,	// (0x00065c68) list_highlight_pane_cp2_copy1_ParamLimits

0x83d7,	// (0x00065c68) list_highlight_pane_cp2_copy1

0xe6b6,	// (0x0006bf47) list_set_pane_copy1_ParamLimits

0xe6b6,	// (0x0006bf47) list_set_pane_copy1

0x77a5,	// (0x00065036) main_pane_set_t1_copy1_ParamLimits

0x77a5,	// (0x00065036) main_pane_set_t1_copy1

0x77df,	// (0x00065070) main_pane_set_t2_copy1_ParamLimits

0x77df,	// (0x00065070) main_pane_set_t2_copy1

0xe763,	// (0x0006bff4) main_pane_set_t3_copy1

0xe771,	// (0x0006c002) main_pane_set_t4_copy1

0x77fe,	// (0x0006508f) set_content_pane_g1_copy1_ParamLimits

0x77fe,	// (0x0006508f) set_content_pane_g1_copy1

0xe77f,	// (0x0006c010) setting_code_pane_copy1

0x7907,	// (0x00065198) setting_slider_graphic_pane_copy1

0x7907,	// (0x00065198) setting_slider_pane_copy1

0x790f,	// (0x000651a0) setting_text_pane_copy1

0x790f,	// (0x000651a0) setting_volume_pane_copy1

0xe77f,	// (0x0006c010) settings_code_pane_cp2_copy1

0xe787,	// (0x0006c018) settings_code_pane_cp_copy1_ParamLimits

0xe787,	// (0x0006c018) settings_code_pane_cp_copy1

0xbda8,	// (0x00069639) volume_set_pane_copy1

0xe79b,	// (0x0006c02c) volume_set_pane_g10_copy1

0xe7a3,	// (0x0006c034) volume_set_pane_g1_copy1

0xe7ab,	// (0x0006c03c) volume_set_pane_g2_copy1

0xe7b3,	// (0x0006c044) volume_set_pane_g3_copy1

0xe7bb,	// (0x0006c04c) volume_set_pane_g4_copy1

0xe7c3,	// (0x0006c054) volume_set_pane_g5_copy1

0xe7cb,	// (0x0006c05c) volume_set_pane_g6_copy1

0xe7d3,	// (0x0006c064) volume_set_pane_g7_copy1

0xe7db,	// (0x0006c06c) volume_set_pane_g8_copy1

0xe7e3,	// (0x0006c074) volume_set_pane_g9_copy1

0x70f7,	// (0x00064988) bg_set_opt_pane_cp_copy1_ParamLimits

0x70f7,	// (0x00064988) bg_set_opt_pane_cp_copy1

0xbdb0,	// (0x00069641) setting_slider_pane_t1_copy1_ParamLimits

0xbdb0,	// (0x00069641) setting_slider_pane_t1_copy1

0xbdcf,	// (0x00069660) setting_slider_pane_t2_copy1_ParamLimits

0xbdcf,	// (0x00069660) setting_slider_pane_t2_copy1

0xbde9,	// (0x0006967a) setting_slider_pane_t3_copy1_ParamLimits

0xbde9,	// (0x0006967a) setting_slider_pane_t3_copy1

0xbe01,	// (0x00069692) slider_set_pane_copy1_ParamLimits

0xbe01,	// (0x00069692) slider_set_pane_copy1

0x808a,	// (0x0006591b) set_opt_bg_pane_g1_copy2

0x8092,	// (0x00065923) set_opt_bg_pane_g2_copy2

0x797b,	// (0x0006520c) set_opt_bg_pane_g3_copy2

0x80a2,	// (0x00065933) set_opt_bg_pane_g4_copy2

0x80aa,	// (0x0006593b) set_opt_bg_pane_g5_copy2

0x80b2,	// (0x00065943) set_opt_bg_pane_g6_copy2

0xe7eb,	// (0x0006c07c) set_opt_bg_pane_g7_copy2

0x798d,	// (0x0006521e) set_opt_bg_pane_g8_copy2

0x7997,	// (0x00065228) set_opt_bg_pane_g9_copy2

0xbe17,	// (0x000696a8) aid_size_touch_slider_mark_copy1_ParamLimits

0xbe17,	// (0x000696a8) aid_size_touch_slider_mark_copy1

0xe7f3,	// (0x0006c084) slider_set_pane_g1_copy1

0x1af7,	// (0x0005f388) slider_set_pane_g2_copy1

0xb439,	// (0x00068cca) slider_set_pane_g3_copy1_ParamLimits

0xb439,	// (0x00068cca) slider_set_pane_g3_copy1

0xb44d,	// (0x00068cde) slider_set_pane_g4_copy1_ParamLimits

0xb44d,	// (0x00068cde) slider_set_pane_g4_copy1

0xb465,	// (0x00068cf6) slider_set_pane_g5_copy1_ParamLimits

0xb465,	// (0x00068cf6) slider_set_pane_g5_copy1

0xb439,	// (0x00068cca) slider_set_pane_g6_copy1_ParamLimits

0xb439,	// (0x00068cca) slider_set_pane_g6_copy1

0xbe2b,	// (0x000696bc) slider_set_pane_g7_copy1_ParamLimits

0xbe2b,	// (0x000696bc) slider_set_pane_g7_copy1

0x70a9,	// (0x0006493a) bg_set_opt_pane_cp2_copy1

0xe7fc,	// (0x0006c08d) setting_slider_graphic_pane_g1_copy1

0xe805,	// (0x0006c096) setting_slider_graphic_pane_t1_copy1

0xf006,	// (0x0006c897) setting_slider_graphic_pane_t2_copy1

0xf016,	// (0x0006c8a7) slider_set_pane_cp_copy1

0x79e3,	// (0x00065274) input_focus_pane_cp1_copy1

0x79ec,	// (0x0006527d) list_set_text_pane_copy1

0x79f4,	// (0x00065285) setting_text_pane_g1_copy1

0xf026,	// (0x0006c8b7) set_text_pane_t1_copy1

0x79e3,	// (0x00065274) input_focus_pane_cp2_copy1

0x79f4,	// (0x00065285) setting_code_pane_g1_copy1

0x79fd,	// (0x0006528e) setting_code_pane_t1_copy1

0x7a0b,	// (0x0006529c) list_set_graphic_pane_copy1

0x70a9,	// (0x0006493a) bg_set_opt_pane_cp4_copy1

0xc1e6,	// (0x00069a77) list_set_graphic_pane_g1_copy1_ParamLimits

0xc1e6,	// (0x00069a77) list_set_graphic_pane_g1_copy1

0x7a1f,	// (0x000652b0) list_set_graphic_pane_g2_copy1

0xc1fe,	// (0x00069a8f) list_set_graphic_pane_t1_copy1_ParamLimits

0xc1fe,	// (0x00069a8f) list_set_graphic_pane_t1_copy1

0x46f5,	// (0x00061f86) rs_clock_indi_pane_g1

0x7a27,	// (0x000652b8) rs_clock_indi_pane_t1

0x7a35,	// (0x000652c6) rs_indi_pane

0x7a3d,	// (0x000652ce) rs_indi_pane_g1

0x7a46,	// (0x000652d7) rs_indi_pane_g2

0x775d,	// (0x00064fee) rs_indi_pane_g3

0x0002,

0xfeba,	// (0x0006d74b) rs_indi_pane_g

0xc46d,	// (0x00069cfe) bg_popup_preview_window_pane_cp03

0x7a4f,	// (0x000652e0) popup_fep_tooltip_window_t1

0xd45d,	// (0x0006acee) popup_note2_window_g2_ParamLimits

0xd45d,	// (0x0006acee) popup_note2_window_g2

0x0001,

0xfc4e,	// (0x0006d4df) popup_note2_window_g_ParamLimits

0xfc4e,	// (0x0006d4df) popup_note2_window_g

0x588c,	// (0x0006311d) bg_popup_sub_pane_cp11_ParamLimits

0x5899,	// (0x0006312a) cell_ai3_links_pane_g1_ParamLimits

0x58b0,	// (0x00063141) cell_ai3_links_pane_t1

0xf026,	// (0x0006c8b7) set_text_pane_t1_copy1_ParamLimits

0xc3ab,	// (0x00069c3c) cell_graphic_popup_pane_cp2_ParamLimits

0xc3ab,	// (0x00069c3c) cell_graphic_popup_pane_cp2

0xf040,	// (0x0006c8d1) cell_graphic_popup_pane_g1_cp2

0x7389,	// (0x00064c1a) cell_graphic_popup_pane_g2_cp2

0x7a65,	// (0x000652f6) cell_graphic_popup_pane_g3_cp2

0xf048,	// (0x0006c8d9) cell_graphic_popup_pane_t2_cp2

0x739a,	// (0x00064c2b) grid_highlight_pane_cp3_cp2

0x82f5,	// (0x00065b86) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8032,	// (0x000658c3) main_tmo_pane_ParamLimits

0xd823,	// (0x0006b0b4) popup_tmo_big_image_note_window

0x6d94,	// (0x00064625) cell_ai5_widget_list_pane

0x6d9c,	// (0x0006462d) cell_ai5_widget_lrg_icon_pane

0xe647,	// (0x0006bed8) tmo_note_info_pane_t1_ParamLimits

0xe65c,	// (0x0006beed) tmo_note_info_pane_t2_ParamLimits

0xe673,	// (0x0006bf04) tmo_note_info_pane_t3_ParamLimits

0x76da,	// (0x00064f6b) tmo_note_info_pane_t4_ParamLimits

0x76ec,	// (0x00064f7d) tmo_note_info_pane_t5_ParamLimits

0xfea8,	// (0x0006d739) tmo_note_info_pane_t_ParamLimits

0x780a,	// (0x0006509b) settings_container_pane_ParamLimits

0xf01e,	// (0x0006c8af) indicator_popup_pane_cp5

0xf01e,	// (0x0006c8af) indicator_popup_pane_cp6

0x7a0b,	// (0x0006529c) list_set_graphic_pane_copy1_ParamLimits

0x7095,	// (0x00064926) bg_popup_window_pane_cp23

0x7a7b,	// (0x0006530c) popup_tmo_big_image_note_window_g1

0x7a84,	// (0x00065315) popup_tmo_big_image_note_window_t1

0x7a94,	// (0x00065325) popup_tmo_big_image_note_window_t2

0x7aa4,	// (0x00065335) popup_tmo_big_image_note_window_t3

0x0002,

0xfec1,	// (0x0006d752) popup_tmo_big_image_note_window_t

0x46f5,	// (0x00061f86) cell_ai5_widget_lrg_icon_pane_g1

0x7ab4,	// (0x00065345) cell_ai5_widget_lrg_icon_pane_t1

0x7ac2,	// (0x00065353) cell_ai5_widget_list_row_pane_ParamLimits

0x7ac2,	// (0x00065353) cell_ai5_widget_list_row_pane

0x7ad9,	// (0x0006536a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7ad9,	// (0x0006536a) cell_ai5_widget_list_row_pane_g1

0x7ae6,	// (0x00065377) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7ae6,	// (0x00065377) cell_ai5_widget_list_row_pane_t1

0x7b11,	// (0x000653a2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7b11,	// (0x000653a2) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec8,	// (0x0006d759) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec8,	// (0x0006d759) cell_ai5_widget_list_row_pane_t

0xe835,	// (0x0006c0c6) main_fep_vtchi_ss_pane

0x7b61,	// (0x000653f2) popup_fep_char_pre_window

0x7b69,	// (0x000653fa) popup_fep_ituss_window

0xf080,	// (0x0006c911) popup_fep_vkbss_window

0x83d7,	// (0x00065c68) grid_vkbss_keypad_pane_ParamLimits

0x83d7,	// (0x00065c68) grid_vkbss_keypad_pane

0x7be1,	// (0x00065472) ituss_keypad_pane

0x1b40,	// (0x0005f3d1) aid_vkbss_key_offset_ParamLimits

0x1b40,	// (0x0005f3d1) aid_vkbss_key_offset

0xbe55,	// (0x000696e6) cell_vkbss_key_pane_ParamLimits

0xbe55,	// (0x000696e6) cell_vkbss_key_pane

0x7bf1,	// (0x00065482) bg_cell_vkbss_key_g1_ParamLimits

0x7bf1,	// (0x00065482) bg_cell_vkbss_key_g1

0xf08d,	// (0x0006c91e) cell_vkbss_key_3p_pane_ParamLimits

0xf08d,	// (0x0006c91e) cell_vkbss_key_3p_pane

0xf0c3,	// (0x0006c954) cell_vkbss_key_g1_ParamLimits

0xf0c3,	// (0x0006c954) cell_vkbss_key_g1

0xf0f9,	// (0x0006c98a) cell_vkbss_key_t1_ParamLimits

0xf0f9,	// (0x0006c98a) cell_vkbss_key_t1

0x1b97,	// (0x0005f428) cell_ituss_key_pane_ParamLimits

0x1b97,	// (0x0005f428) cell_ituss_key_pane

0x7cc5,	// (0x00065556) bg_cell_ituss_key_g1_ParamLimits

0x7cc5,	// (0x00065556) bg_cell_ituss_key_g1

0x7cd1,	// (0x00065562) cell_ituss_key_pane_g1_ParamLimits

0x7cd1,	// (0x00065562) cell_ituss_key_pane_g1

0x1ba8,	// (0x0005f439) cell_ituss_key_pane_g2_ParamLimits

0x1ba8,	// (0x0005f439) cell_ituss_key_pane_g2

0x0005,

0xfecf,	// (0x0006d760) cell_ituss_key_pane_g_ParamLimits

0xfecf,	// (0x0006d760) cell_ituss_key_pane_g

0x1c2c,	// (0x0005f4bd) cell_ituss_key_t1_ParamLimits

0x1c2c,	// (0x0005f4bd) cell_ituss_key_t1

0x1c66,	// (0x0005f4f7) cell_ituss_key_t2_ParamLimits

0x1c66,	// (0x0005f4f7) cell_ituss_key_t2

0x1c98,	// (0x0005f529) cell_ituss_key_t3_ParamLimits

0x1c98,	// (0x0005f529) cell_ituss_key_t3

0x1cc9,	// (0x0005f55a) cell_ituss_key_t4_ParamLimits

0x1cc9,	// (0x0005f55a) cell_ituss_key_t4

0x0005,

0xfedc,	// (0x0006d76d) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x0006d76d) cell_ituss_key_t

0xf155,	// (0x0006c9e6) cell_vkbss_key_3p_pane_g1

0xf15d,	// (0x0006c9ee) cell_vkbss_key_3p_pane_g2

0xf165,	// (0x0006c9f6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x0006d77a) cell_vkbss_key_3p_pane_g

0xc46d,	// (0x00069cfe) bg_popup_fep_char_preview_window_cp02

0x7d0f,	// (0x000655a0) popup_fep_char_pre_window_t1

0xe4ed,	// (0x0006bd7e) main_ai5_sk_pane

0x7766,	// (0x00064ff7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7772,	// (0x00065003) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4dcf,	// (0x00062660) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7787,	// (0x00065018) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb3,	// (0x0006d744) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7793,	// (0x00065024) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8032,	// (0x000658c3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf16d,	// (0x0006c9fe) main_ai5_sk_pane_g1

0xb399,	// (0x00068c2a) popup_query_code_window_g1

0xf071,	// (0x0006c902) popup_fep_vkb_icf_pane

0x7bb5,	// (0x00065446) popup_fep_vtchi_icf_pane

0x7d26,	// (0x000655b7) bg_icf_pane

0x7d26,	// (0x000655b7) list_vkb_icf_pane

0x7d32,	// (0x000655c3) bg_icf_pane_cp01

0x7d45,	// (0x000655d6) vtchi_icf_list_pane

0xf1c2,	// (0x0006ca53) list_vkb_icf_pane_t1_ParamLimits

0xf1c2,	// (0x0006ca53) list_vkb_icf_pane_t1

0x7dca,	// (0x0006565b) vtchi_icf_list_pane_t1_ParamLimits

0x7dca,	// (0x0006565b) vtchi_icf_list_pane_t1

0x7b69,	// (0x000653fa) popup_fep_ituss_window_ParamLimits

0x7bb5,	// (0x00065446) popup_fep_vtchi_icf_pane_ParamLimits

0x7be1,	// (0x00065472) ituss_keypad_pane_ParamLimits

0x1b36,	// (0x0005f3c7) ituss_sks_pane

0x7d26,	// (0x000655b7) bg_icf_pane_ParamLimits

0xf056,	// (0x0006c8e7) icf_edit_indi_pane_ParamLimits

0xf056,	// (0x0006c8e7) icf_edit_indi_pane

0x7d26,	// (0x000655b7) list_vkb_icf_pane_ParamLimits

0x7d32,	// (0x000655c3) bg_icf_pane_cp01_ParamLimits

0x7b54,	// (0x000653e5) icf_edit_indi_pane_cp01_ParamLimits

0x7b54,	// (0x000653e5) icf_edit_indi_pane_cp01

0x7d45,	// (0x000655d6) vtchi_query_pane

0x6b91,	// (0x00064422) icf_edit_indi_pane_g1_ParamLimits

0x6b91,	// (0x00064422) icf_edit_indi_pane_g1

0xf1da,	// (0x0006ca6b) icf_edit_indi_pane_g2_ParamLimits

0xf1da,	// (0x0006ca6b) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x0006d7a5) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x0006d7a5) icf_edit_indi_pane_g

0xf1ee,	// (0x0006ca7f) icf_edit_indi_pane_t1

0x7dee,	// (0x0006567f) bg_input_focus_pane_cp042

0x7f74,	// (0x00065805) vtchi_button_pane

0x7df7,	// (0x00065688) vtchi_query_pane_t1

0x7e05,	// (0x00065696) vtchi_query_pane_t2

0x7e13,	// (0x000656a4) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x0006d794) vtchi_query_pane_t

0xe835,	// (0x0006c0c6) bg_button_pane_cp13

0x7e21,	// (0x000656b2) vtchi_button_pane_g1

0x1d4a,	// (0x0005f5db) ituss_sks_pane_g1

0x1d55,	// (0x0005f5e6) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x0006d79b) ituss_sks_pane_g

0x7e29,	// (0x000656ba) ituss_sks_pane_t1

0x7e37,	// (0x000656c8) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x0006d7a0) ituss_sks_pane_t

0x409b,	// (0x0006192c) indicator_nsta_pane_cp_g1

0x40a4,	// (0x00061935) indicator_nsta_pane_cp_g2

0x40ac,	// (0x0006193d) indicator_nsta_pane_cp_g3

0x40b4,	// (0x00061945) indicator_nsta_pane_cp_g4

0x40a4,	// (0x00061935) indicator_nsta_pane_cp_g5

0x40ac,	// (0x0006193d) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x0006d31d) indicator_nsta_pane_cp_g

0xe2c2,	// (0x0006bb53) cell_graphic2_pane_t2_ParamLimits

0xe2c2,	// (0x0006bb53) cell_graphic2_pane_t2

0x0001,

0xfd9e,	// (0x0006d62f) cell_graphic2_pane_t_ParamLimits

0xfd9e,	// (0x0006d62f) cell_graphic2_pane_t

0xe2f9,	// (0x0006bb8a) cell_graphic2_control_pane_t1

0xa054,	// (0x000678e5) signal_pane_g3_ParamLimits

0xa054,	// (0x000678e5) signal_pane_g3

0xa068,	// (0x000678f9) signal_pane_g4_ParamLimits

0xa068,	// (0x000678f9) signal_pane_g4

0x7b23,	// (0x000653b4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7b23,	// (0x000653b4) cell_ai5_widget_list_row_pane_t3

0x7ce5,	// (0x00065576) cell_ituss_key_pane_t1_ParamLimits

0x7ce5,	// (0x00065576) cell_ituss_key_pane_t1

0x2049,	// (0x0005f8da) form_field_data_wide_pane_vc_t2_ParamLimits

0x2049,	// (0x0005f8da) form_field_data_wide_pane_vc_t2

0x205d,	// (0x0005f8ee) form_field_data_wide_pane_vc_t3_ParamLimits

0x205d,	// (0x0005f8ee) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d8,	// (0x0006d069) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d8,	// (0x0006d069) form_field_data_wide_pane_vc_t

0x3d45,	// (0x000615d6) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3d45,	// (0x000615d6) form_field_slider_wide_pane_vc_t3

0x3e23,	// (0x000616b4) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3e23,	// (0x000616b4) form_field_popup_wide_pane_vc_t2

0x3e3a,	// (0x000616cb) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3e3a,	// (0x000616cb) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa80,	// (0x0006d311) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0006d311) form_field_popup_wide_pane_vc_t

0xbc12,	// (0x000694a3) aid_fshwr2_btn_pane_ParamLimits

0xbc26,	// (0x000694b7) aid_fshwr2_syb_pane_ParamLimits

0xbc3a,	// (0x000694cb) aid_fshwr2_txt_pane_ParamLimits

0x10f9,	// (0x0005e98a) fshwr2_bg_pane_ParamLimits

0xbc4a,	// (0x000694db) fshwr2_func_candi_pane_ParamLimits

0xbc6a,	// (0x000694fb) fshwr2_hwr_syb_pane_ParamLimits

0xbc8c,	// (0x0006951d) fshwr2_icf_pane_ParamLimits

0x3cff,	// (0x00061590) list_double_graphic_pane_vc_g4_ParamLimits

0x3cff,	// (0x00061590) list_double_graphic_pane_vc_g4

0x1bc8,	// (0x0005f459) cell_ituss_key_pane_g3_ParamLimits

0x1bc8,	// (0x0005f459) cell_ituss_key_pane_g3

0x1cfa,	// (0x0005f58b) cell_ituss_key_t5_ParamLimits

0x1cfa,	// (0x0005f58b) cell_ituss_key_t5

0xf080,	// (0x0006c911) popup_fep_vkbss_window_ParamLimits

0x6d27,	// (0x000645b8) aid_cell_ai5_quarter

0xf1ee,	// (0x0006ca7f) icf_edit_indi_pane_t1_ParamLimits

0x94be,	// (0x00066d4f) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x94be,	// (0x00066d4f) aid_tch_indicator_popup_pane_cp2

0x94d1,	// (0x00066d62) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x94d1,	// (0x00066d62) aid_tch_query_popup_data_pane_cp2

0x23be,	// (0x0005fc4f) aid_tch_query_popup_pane_ParamLimits

0x23be,	// (0x0005fc4f) aid_tch_query_popup_pane

0x23be,	// (0x0005fc4f) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x23be,	// (0x0005fc4f) aid_tch_query_popup_data_pane_cp1

0x83d7,	// (0x00065c68) cell_fshwr2_syb_bg_pane_ParamLimits

0xbd7f,	// (0x00069610) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbd92,	// (0x00069623) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf071,	// (0x0006c902) popup_fep_vkb_icf_pane_ParamLimits

0xbb78,	// (0x00069409) bg_popup_fep_char_preview_window_g10

0x6e5e,	// (0x000646ef) cell_ai5_widget_pane_g11_ParamLimits

0x6e5e,	// (0x000646ef) cell_ai5_widget_pane_g11

0x6e6a,	// (0x000646fb) cell_ai5_widget_pane_g12_ParamLimits

0x6e6a,	// (0x000646fb) cell_ai5_widget_pane_g12

0x6e76,	// (0x00064707) cell_ai5_widget_pane_g13_ParamLimits

0x6e76,	// (0x00064707) cell_ai5_widget_pane_g13

0x6fa5,	// (0x00064836) cell_ai5_widget_pane_t11_ParamLimits

0x6fa5,	// (0x00064836) cell_ai5_widget_pane_t11

0x6fb7,	// (0x00064848) cell_ai5_widget_pane_t12_ParamLimits

0x6fb7,	// (0x00064848) cell_ai5_widget_pane_t12

0x1bd4,	// (0x0005f465) cell_ituss_key_pane_g4_ParamLimits

0x1bd4,	// (0x0005f465) cell_ituss_key_pane_g4

0x1bf0,	// (0x0005f481) cell_ituss_key_pane_g5_ParamLimits

0x1bf0,	// (0x0005f481) cell_ituss_key_pane_g5

0x1c0c,	// (0x0005f49d) cell_ituss_key_pane_g6_ParamLimits

0x1c0c,	// (0x0005f49d) cell_ituss_key_pane_g6

0x1f2f,	// (0x0005f7c0) bg_icf_pane_g1

0xf176,	// (0x0006ca07) bg_icf_pane_g2

0xf180,	// (0x0006ca11) bg_icf_pane_g3

0xf188,	// (0x0006ca19) bg_icf_pane_g4

0xf192,	// (0x0006ca23) bg_icf_pane_g5

0xf19c,	// (0x0006ca2d) bg_icf_pane_g6

0xf1a6,	// (0x0006ca37) bg_icf_pane_g7

0xf1ae,	// (0x0006ca3f) bg_icf_pane_g8

0xf1b8,	// (0x0006ca49) bg_icf_pane_g9

0x0008,

0xfef0,	// (0x0006d781) bg_icf_pane_g

0x7bce,	// (0x0006545f) popup_hyb_candi_window_ParamLimits

0x7bce,	// (0x0006545f) popup_hyb_candi_window

0x1fbb,	// (0x0005f84c) bg_popup_sub_pane_cp01_ParamLimits

0x1fbb,	// (0x0005f84c) bg_popup_sub_pane_cp01

0x7e72,	// (0x00065703) entry_hyb_candi_pane_ParamLimits

0x7e72,	// (0x00065703) entry_hyb_candi_pane

0x7e81,	// (0x00065712) grid_hyb_candi_pane_ParamLimits

0x7e81,	// (0x00065712) grid_hyb_candi_pane

0x7e96,	// (0x00065727) grid_hyb_phrase_pane_ParamLimits

0x7e96,	// (0x00065727) grid_hyb_phrase_pane

0x7ea5,	// (0x00065736) cell_hyb_candi_pane_ParamLimits

0x7ea5,	// (0x00065736) cell_hyb_candi_pane

0x7ec8,	// (0x00065759) cell_hyb_candi_scroll_pane

0xc00b,	// (0x0006989c) cell_hyb_candi_pane_g1

0x7ed1,	// (0x00065762) cell_hyb_candi_pane_t1

0x7edf,	// (0x00065770) cell_hyb_phrase_pane

0xc00b,	// (0x0006989c) cell_hyb_phrase_pane_g1

0x7ee8,	// (0x00065779) cell_hyb_phrase_pane_t1

0x7ef6,	// (0x00065787) entry_hyb_candi_pane_t1

0xc46d,	// (0x00069cfe) input_focus_pane_cp06

0x7f04,	// (0x00065795) cell_hyb_candi_scroll_pane_g1

0x7f0c,	// (0x0006579d) cell_hyb_candi_scroll_pane_g1_aid

0x7f14,	// (0x000657a5) cell_hyb_candi_scroll_pane_g2

0x7f1c,	// (0x000657ad) cell_hyb_candi_scroll_pane_g2_aid

0x7f24,	// (0x000657b5) cell_hyb_candi_scroll_pane_g3

0x7f2c,	// (0x000657bd) cell_hyb_candi_scroll_pane_g4

0xe481,	// (0x0006bd12) ai5_page_g1

0x1d0c,	// (0x0005f59d) cell_ituss_key_t6_ParamLimits

0x1d0c,	// (0x0005f59d) cell_ituss_key_t6

0xbe41,	// (0x000696d2) icf_edit_indi_pane_cp02_ParamLimits

0xbe41,	// (0x000696d2) icf_edit_indi_pane_cp02

0x1b29,	// (0x0005f3ba) icf_edit_indi_pane_cp03_ParamLimits

0x1b29,	// (0x0005f3ba) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
