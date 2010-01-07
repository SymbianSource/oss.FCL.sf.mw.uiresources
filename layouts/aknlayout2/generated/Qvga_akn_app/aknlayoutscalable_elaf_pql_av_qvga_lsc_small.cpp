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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000120e5 };

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
0xae9e,	// (0x0001cf83) Screen

0xaea8,	// (0x0001cf8d) application_window_ParamLimits

0xaea8,	// (0x0001cf8d) application_window

0xdc85,	// (0x0001fd6a) screen_g1

0xaed6,	// (0x0001cfbb) area_bottom_pane_ParamLimits

0xaed6,	// (0x0001cfbb) area_bottom_pane

0xdc8f,	// (0x0001fd74) area_top_pane_ParamLimits

0xdc8f,	// (0x0001fd74) area_top_pane

0x4574,	// (0x00016659) main_pane_ParamLimits

0x4574,	// (0x00016659) main_pane

0xdd07,	// (0x0001fdec) misc_graphics

0xbe78,	// (0x0001df5d) battery_pane_ParamLimits

0xbe78,	// (0x0001df5d) battery_pane

0x1833,	// (0x00013918) bg_status_flat_pane_g8

0x183b,	// (0x00013920) bg_status_flat_pane_g9

0x0f8d,	// (0x00013072) context_pane_ParamLimits

0x0f8d,	// (0x00013072) context_pane

0xbfd2,	// (0x0001e0b7) navi_pane_ParamLimits

0xbfd2,	// (0x0001e0b7) navi_pane

0xc047,	// (0x0001e12c) signal_pane_ParamLimits

0xc047,	// (0x0001e12c) signal_pane

0x0008,

0xf89f,	// (0x00021984) bg_status_flat_pane_g

0xc0d3,	// (0x0001e1b8) status_pane_g1_ParamLimits

0xc0d3,	// (0x0001e1b8) status_pane_g1

0xc0df,	// (0x0001e1c4) status_pane_g2_ParamLimits

0xc0df,	// (0x0001e1c4) status_pane_g2

0x0ff3,	// (0x000130d8) status_pane_g3_ParamLimits

0x0ff3,	// (0x000130d8) status_pane_g3

0x0004,

0xf7e0,	// (0x000218c5) status_pane_g_ParamLimits

0xf7e0,	// (0x000218c5) status_pane_g

0xc0eb,	// (0x0001e1d0) title_pane_ParamLimits

0xc0eb,	// (0x0001e1d0) title_pane

0xc146,	// (0x0001e22b) uni_indicator_pane_ParamLimits

0xc146,	// (0x0001e22b) uni_indicator_pane

0x0de7,	// (0x00012ecc) bg_list_pane_ParamLimits

0x0de7,	// (0x00012ecc) bg_list_pane

0xabfc,	// (0x0001cce1) find_pane

0xb85d,	// (0x0001d942) listscroll_app_pane_ParamLimits

0xb85d,	// (0x0001d942) listscroll_app_pane

0x0e07,	// (0x00012eec) listscroll_form_pane

0xac04,	// (0x0001cce9) listscroll_gen_pane_ParamLimits

0xac04,	// (0x0001cce9) listscroll_gen_pane

0x0e07,	// (0x00012eec) listscroll_set_pane

0xb869,	// (0x0001d94e) main_idle_act_pane

0xf378,	// (0x0002145d) main_idle_trad_pane

0xf378,	// (0x0002145d) main_list_empty_pane

0x0dc3,	// (0x00012ea8) main_midp_pane

0x0e21,	// (0x00012f06) main_pane_g1_ParamLimits

0x0e21,	// (0x00012f06) main_pane_g1

0xb87c,	// (0x0001d961) popup_ai_message_window_ParamLimits

0xb87c,	// (0x0001d961) popup_ai_message_window

0xb900,	// (0x0001d9e5) popup_fep_china_uni_window_ParamLimits

0xb900,	// (0x0001d9e5) popup_fep_china_uni_window

0x0e59,	// (0x00012f3e) popup_fep_japan_candidate_window_ParamLimits

0x0e59,	// (0x00012f3e) popup_fep_japan_candidate_window

0x0e77,	// (0x00012f5c) popup_fep_japan_predictive_window_ParamLimits

0x0e77,	// (0x00012f5c) popup_fep_japan_predictive_window

0xb93e,	// (0x0001da23) popup_find_window

0xb957,	// (0x0001da3c) popup_grid_graphic_window_ParamLimits

0xb957,	// (0x0001da3c) popup_grid_graphic_window

0x0ea3,	// (0x00012f88) popup_large_graphic_colour_window

0xb9d3,	// (0x0001dab8) popup_menu_window_ParamLimits

0xb9d3,	// (0x0001dab8) popup_menu_window

0xbb31,	// (0x0001dc16) popup_note_image_window

0xbaf9,	// (0x0001dbde) popup_note_wait_window_ParamLimits

0xbaf9,	// (0x0001dbde) popup_note_wait_window

0xbb47,	// (0x0001dc2c) popup_note_window_ParamLimits

0xbb47,	// (0x0001dc2c) popup_note_window

0xbbdb,	// (0x0001dcc0) popup_query_code_window_ParamLimits

0xbbdb,	// (0x0001dcc0) popup_query_code_window

0x0ec2,	// (0x00012fa7) popup_query_data_code_window_ParamLimits

0x0ec2,	// (0x00012fa7) popup_query_data_code_window

0xbc13,	// (0x0001dcf8) popup_query_data_window_ParamLimits

0xbc13,	// (0x0001dcf8) popup_query_data_window

0xbc87,	// (0x0001dd6c) popup_query_sat_info_window_ParamLimits

0xbc87,	// (0x0001dd6c) popup_query_sat_info_window

0xbd14,	// (0x0001ddf9) popup_snote_single_graphic_window_ParamLimits

0xbd14,	// (0x0001ddf9) popup_snote_single_graphic_window

0xbd14,	// (0x0001ddf9) popup_snote_single_text_window_ParamLimits

0xbd14,	// (0x0001ddf9) popup_snote_single_text_window

0x0ed7,	// (0x00012fbc) popup_sub_window_general

0x0f19,	// (0x00012ffe) popup_window_general_ParamLimits

0x0f19,	// (0x00012ffe) popup_window_general

0x0f2c,	// (0x00013011) power_save_pane

0xb706,	// (0x0001d7eb) control_pane_g1_ParamLimits

0xb706,	// (0x0001d7eb) control_pane_g1

0x4bfc,	// (0x00016ce1) control_pane_g2_ParamLimits

0x4bfc,	// (0x00016ce1) control_pane_g2

0xf584,	// (0x00021669) control_pane_g3_ParamLimits

0xf584,	// (0x00021669) control_pane_g3

0x0007,

0xf7c8,	// (0x000218ad) control_pane_g_ParamLimits

0xf7c8,	// (0x000218ad) control_pane_g

0xb763,	// (0x0001d848) control_pane_t1_ParamLimits

0xb763,	// (0x0001d848) control_pane_t1

0xb7bf,	// (0x0001d8a4) control_pane_t2_ParamLimits

0xb7bf,	// (0x0001d8a4) control_pane_t2

0x0002,

0xf7d9,	// (0x000218be) control_pane_t_ParamLimits

0xf7d9,	// (0x000218be) control_pane_t

0xf4a7,	// (0x0002158c) navi_navi_volume_pane_cp1

0xf4b0,	// (0x00021595) status_small_icon_pane

0xf4b8,	// (0x0002159d) status_small_pane_g1_ParamLimits

0xf4b8,	// (0x0002159d) status_small_pane_g1

0xf4ec,	// (0x000215d1) status_small_pane_g2_ParamLimits

0xf4ec,	// (0x000215d1) status_small_pane_g2

0xf4f8,	// (0x000215dd) status_small_pane_g3_ParamLimits

0xf4f8,	// (0x000215dd) status_small_pane_g3

0xf504,	// (0x000215e9) status_small_pane_g4_ParamLimits

0xf504,	// (0x000215e9) status_small_pane_g4

0xf510,	// (0x000215f5) status_small_pane_g5_ParamLimits

0xf510,	// (0x000215f5) status_small_pane_g5

0xf51d,	// (0x00021602) status_small_pane_g6_ParamLimits

0xf51d,	// (0x00021602) status_small_pane_g6

0x0007,

0xf7b7,	// (0x0002189c) status_small_pane_g_ParamLimits

0xf7b7,	// (0x0002189c) status_small_pane_g

0xf54d,	// (0x00021632) status_small_pane_t1

0xf570,	// (0x00021655) status_small_wait_pane_ParamLimits

0xf570,	// (0x00021655) status_small_wait_pane

0xb5cc,	// (0x0001d6b1) aid_levels_signal_ParamLimits

0xb5cc,	// (0x0001d6b1) aid_levels_signal

0xb5e0,	// (0x0001d6c5) signal_pane_g1_ParamLimits

0xb5e0,	// (0x0001d6c5) signal_pane_g1

0xb5fa,	// (0x0001d6df) signal_pane_g2_ParamLimits

0xb5fa,	// (0x0001d6df) signal_pane_g2

0x0001,

0xf74c,	// (0x00021831) signal_pane_g_ParamLimits

0xf74c,	// (0x00021831) signal_pane_g

0xeeff,	// (0x00020fe4) context_pane_g1

0xb026,	// (0x0001d10b) title_pane_g1

0xb068,	// (0x0001d14d) title_pane_t1

0xdd1d,	// (0x0001fe02) title_pane_t2

0xdd43,	// (0x0001fe28) title_pane_t3

0x0002,

0xf59b,	// (0x00021680) title_pane_t

0xc16c,	// (0x0001e251) aid_levels_battery_ParamLimits

0xc16c,	// (0x0001e251) aid_levels_battery

0xc184,	// (0x0001e269) battery_pane_g1_ParamLimits

0xc184,	// (0x0001e269) battery_pane_g1

0xc19f,	// (0x0001e284) battery_pane_g2_ParamLimits

0xc19f,	// (0x0001e284) battery_pane_g2

0x0001,

0xf7eb,	// (0x000218d0) battery_pane_g_ParamLimits

0xf7eb,	// (0x000218d0) battery_pane_g

0xc50e,	// (0x0001e5f3) uni_indicator_pane_g1

0xc523,	// (0x0001e608) uni_indicator_pane_g2

0xc539,	// (0x0001e61e) uni_indicator_pane_g3

0x0005,

0xf947,	// (0x00021a2c) uni_indicator_pane_g

0xea73,	// (0x00020b58) navi_icon_pane_ParamLimits

0xea73,	// (0x00020b58) navi_icon_pane

0xdd07,	// (0x0001fdec) navi_midp_pane

0xdd07,	// (0x0001fdec) navi_navi_pane

0xea73,	// (0x00020b58) navi_text_pane_ParamLimits

0xea73,	// (0x00020b58) navi_text_pane

0xdc85,	// (0x0001fd6a) status_small_wait_pane_g1

0xe05e,	// (0x00020143) status_small_wait_pane_g2

0x0001,

0xf942,	// (0x00021a27) status_small_wait_pane_g

0xc4b4,	// (0x0001e599) navi_navi_icon_text_pane

0xc4bc,	// (0x0001e5a1) navi_navi_pane_g1_ParamLimits

0xc4bc,	// (0x0001e5a1) navi_navi_pane_g1

0xc4ce,	// (0x0001e5b3) navi_navi_pane_g2_ParamLimits

0xc4ce,	// (0x0001e5b3) navi_navi_pane_g2

0x0001,

0xf910,	// (0x000219f5) navi_navi_pane_g_ParamLimits

0xf910,	// (0x000219f5) navi_navi_pane_g

0xc4e0,	// (0x0001e5c5) navi_navi_tabs_pane

0xc4b4,	// (0x0001e599) navi_navi_text_pane

0xc4b4,	// (0x0001e599) navi_navi_volume_pane

0x1d79,	// (0x00013e5e) navi_text_pane_t1

0x1d6d,	// (0x00013e52) navi_icon_pane_g1

0x1cc1,	// (0x00013da6) navi_navi_text_pane_t1

0x57ae,	// (0x00017893) navi_navi_volume_pane_g1

0xc4ab,	// (0x0001e590) volume_small_pane

0xc407,	// (0x0001e4ec) navi_navi_icon_text_pane_g1

0xc40f,	// (0x0001e4f4) navi_navi_icon_text_pane_t1

0x187b,	// (0x00013960) navi_tabs_2_long_pane

0x187b,	// (0x00013960) navi_tabs_2_pane

0x187b,	// (0x00013960) navi_tabs_3_long_pane

0x187b,	// (0x00013960) navi_tabs_3_pane

0x187b,	// (0x00013960) navi_tabs_4_pane

0xc3e7,	// (0x0001e4cc) tabs_2_active_pane_ParamLimits

0xc3e7,	// (0x0001e4cc) tabs_2_active_pane

0xc3f7,	// (0x0001e4dc) tabs_2_passive_pane_ParamLimits

0xc3f7,	// (0x0001e4dc) tabs_2_passive_pane

0xc3b5,	// (0x0001e49a) tabs_3_active_pane_ParamLimits

0xc3b5,	// (0x0001e49a) tabs_3_active_pane

0xc3c5,	// (0x0001e4aa) tabs_3_passive_pane_ParamLimits

0xc3c5,	// (0x0001e4aa) tabs_3_passive_pane

0xc3d6,	// (0x0001e4bb) tabs_3_passive_pane_cp_ParamLimits

0xc3d6,	// (0x0001e4bb) tabs_3_passive_pane_cp

0xc371,	// (0x0001e456) tabs_4_active_pane_ParamLimits

0xc371,	// (0x0001e456) tabs_4_active_pane

0xc382,	// (0x0001e467) tabs_4_passive_pane_ParamLimits

0xc382,	// (0x0001e467) tabs_4_passive_pane

0xc393,	// (0x0001e478) tabs_4_passive_pane_cp_ParamLimits

0xc393,	// (0x0001e478) tabs_4_passive_pane_cp

0xc3a4,	// (0x0001e489) tabs_4_passive_pane_cp2_ParamLimits

0xc3a4,	// (0x0001e489) tabs_4_passive_pane_cp2

0xc351,	// (0x0001e436) tabs_2_long_active_pane_ParamLimits

0xc351,	// (0x0001e436) tabs_2_long_active_pane

0xc361,	// (0x0001e446) tabs_2_long_passive_pane_ParamLimits

0xc361,	// (0x0001e446) tabs_2_long_passive_pane

0xc31a,	// (0x0001e3ff) tabs_3_long_active_pane_ParamLimits

0xc31a,	// (0x0001e3ff) tabs_3_long_active_pane

0xc32d,	// (0x0001e412) tabs_3_long_passive_pane_ParamLimits

0xc32d,	// (0x0001e412) tabs_3_long_passive_pane

0xc33e,	// (0x0001e423) tabs_3_long_passive_pane_cp_ParamLimits

0xc33e,	// (0x0001e423) tabs_3_long_passive_pane_cp

0x55db,	// (0x000176c0) volume_small_pane_g1

0x55e4,	// (0x000176c9) volume_small_pane_g2

0x55ed,	// (0x000176d2) volume_small_pane_g3

0x55f6,	// (0x000176db) volume_small_pane_g4

0x55ff,	// (0x000176e4) volume_small_pane_g5

0x5608,	// (0x000176ed) volume_small_pane_g6

0x5611,	// (0x000176f6) volume_small_pane_g7

0x561a,	// (0x000176ff) volume_small_pane_g8

0x5623,	// (0x00017708) volume_small_pane_g9

0x562c,	// (0x00017711) volume_small_pane_g10

0x0009,

0xf8dc,	// (0x000219c1) volume_small_pane_g

0xdd55,	// (0x0001fe3a) bg_active_tab_pane_cp2_ParamLimits

0xdd55,	// (0x0001fe3a) bg_active_tab_pane_cp2

0xdd63,	// (0x0001fe48) tabs_3_active_pane_g1

0xb0f5,	// (0x0001d1da) tabs_3_active_pane_t1

0xdd55,	// (0x0001fe3a) bg_passive_tab_pane_cp2_ParamLimits

0xdd55,	// (0x0001fe3a) bg_passive_tab_pane_cp2

0xdd63,	// (0x0001fe48) tabs_3_passive_pane_g1

0xb0f5,	// (0x0001d1da) tabs_3_passive_pane_t1

0xdd55,	// (0x0001fe3a) bg_active_tab_pane_cp3_ParamLimits

0xdd55,	// (0x0001fe3a) bg_active_tab_pane_cp3

0x2226,	// (0x0001430b) tabs_4_active_pane_g1

0xb10b,	// (0x0001d1f0) tabs_4_active_pane_t1

0xdd55,	// (0x0001fe3a) bg_passive_tab_pane_cp3_ParamLimits

0xdd55,	// (0x0001fe3a) bg_passive_tab_pane_cp3

0x2226,	// (0x0001430b) tabs_4_1_passive_pane_g1

0xb10b,	// (0x0001d1f0) tabs_4_1_passive_pane_t1

0x0dc3,	// (0x00012ea8) list_highlight_pane_cp2

0xc5f5,	// (0x0001e6da) list_set_pane_ParamLimits

0xc5f5,	// (0x0001e6da) list_set_pane

0xc683,	// (0x0001e768) main_pane_set_t1_ParamLimits

0xc683,	// (0x0001e768) main_pane_set_t1

0xc6a3,	// (0x0001e788) main_pane_set_t2_ParamLimits

0xc6a3,	// (0x0001e788) main_pane_set_t2

0xc6b7,	// (0x0001e79c) main_pane_set_t3_ParamLimits

0xc6b7,	// (0x0001e79c) main_pane_set_t3

0xc6c9,	// (0x0001e7ae) main_pane_set_t4_ParamLimits

0xc6c9,	// (0x0001e7ae) main_pane_set_t4

0x0003,

0xf9ac,	// (0x00021a91) main_pane_set_t_ParamLimits

0xf9ac,	// (0x00021a91) main_pane_set_t

0xc6db,	// (0x0001e7c0) setting_code_pane

0xc6e3,	// (0x0001e7c8) setting_slider_graphic_pane

0xc6e3,	// (0x0001e7c8) setting_slider_pane

0xc6e3,	// (0x0001e7c8) setting_text_pane

0xc6e3,	// (0x0001e7c8) setting_volume_pane

0xb121,	// (0x0001d206) volume_set_pane

0xdd6b,	// (0x0001fe50) bg_set_opt_pane_cp

0xdd79,	// (0x0001fe5e) setting_slider_pane_t1

0xb129,	// (0x0001d20e) setting_slider_pane_t2

0xb142,	// (0x0001d227) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00021687) setting_slider_pane_t

0xdd8f,	// (0x0001fe74) slider_set_pane

0xdd07,	// (0x0001fdec) bg_set_opt_pane_cp2

0xdda5,	// (0x0001fe8a) setting_slider_graphic_pane_g1

0xb159,	// (0x0001d23e) setting_slider_graphic_pane_t1

0xb168,	// (0x0001d24d) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0002168e) setting_slider_graphic_pane_t

0xb177,	// (0x0001d25c) slider_set_pane_cp

0xdd07,	// (0x0001fdec) input_focus_pane_cp1

0x2254,	// (0x00014339) list_set_text_pane

0xdc85,	// (0x0001fd6a) setting_text_pane_g1

0xdd07,	// (0x0001fdec) input_focus_pane_cp2

0xdc85,	// (0x0001fd6a) setting_code_pane_g1

0xddae,	// (0x0001fe93) setting_code_pane_t1

0xa685,	// (0x0001c76a) set_text_pane_t1_ParamLimits

0xa685,	// (0x0001c76a) set_text_pane_t1

0xea0e,	// (0x00020af3) set_opt_bg_pane_g1

0xea16,	// (0x00020afb) set_opt_bg_pane_g2

0xc5b5,	// (0x0001e69a) set_opt_bg_pane_g3

0xea26,	// (0x00020b0b) set_opt_bg_pane_g4

0xea2e,	// (0x00020b13) set_opt_bg_pane_g5

0xea36,	// (0x00020b1b) set_opt_bg_pane_g6

0xc5bd,	// (0x0001e6a2) set_opt_bg_pane_g7

0xc5c5,	// (0x0001e6aa) set_opt_bg_pane_g8

0xc5cd,	// (0x0001e6b2) set_opt_bg_pane_g9

0x0008,

0xf999,	// (0x00021a7e) set_opt_bg_pane_g

0x21bc,	// (0x000142a1) slider_set_pane_g1

0x5875,	// (0x0001795a) slider_set_pane_g2

0x0006,

0xf98a,	// (0x00021a6f) slider_set_pane_g

0xc54f,	// (0x0001e634) volume_set_pane_g1

0xc557,	// (0x0001e63c) volume_set_pane_g2

0xc55f,	// (0x0001e644) volume_set_pane_g3

0xc567,	// (0x0001e64c) volume_set_pane_g4

0xc56f,	// (0x0001e654) volume_set_pane_g5

0xc577,	// (0x0001e65c) volume_set_pane_g6

0xc57f,	// (0x0001e664) volume_set_pane_g7

0xc587,	// (0x0001e66c) volume_set_pane_g8

0xc58f,	// (0x0001e674) volume_set_pane_g9

0xc597,	// (0x0001e67c) volume_set_pane_g10

0x0009,

0xf962,	// (0x00021a47) volume_set_pane_g

0xb17f,	// (0x0001d264) indicator_pane_ParamLimits

0xb17f,	// (0x0001d264) indicator_pane

0xb1a7,	// (0x0001d28c) main_idle_pane_g2_ParamLimits

0xb1a7,	// (0x0001d28c) main_idle_pane_g2

0xb1d7,	// (0x0001d2bc) main_pane_idle_g1_ParamLimits

0xb1d7,	// (0x0001d2bc) main_pane_idle_g1

0xddbc,	// (0x0001fea1) popup_clock_digital_analogue_window_ParamLimits

0xddbc,	// (0x0001fea1) popup_clock_digital_analogue_window

0xb1fc,	// (0x0001d2e1) soft_indicator_pane_ParamLimits

0xb1fc,	// (0x0001d2e1) soft_indicator_pane

0xb216,	// (0x0001d2fb) wallpaper_pane_ParamLimits

0xb216,	// (0x0001d2fb) wallpaper_pane

0xdc85,	// (0x0001fd6a) wallpaper_pane_g1

0xb228,	// (0x0001d30d) indicator_pane_g1_ParamLimits

0xb228,	// (0x0001d30d) indicator_pane_g1

0x2361,	// (0x00014446) navi_navi_icon_text_pane_srt_g1

0xddea,	// (0x0001fecf) soft_indicator_pane_t1

0xde04,	// (0x0001fee9) aid_ps_area_pane

0xb241,	// (0x0001d326) aid_ps_clock_pane

0xde15,	// (0x0001fefa) aid_ps_indicator_pane

0xde21,	// (0x0001ff06) indicator_ps_pane_ParamLimits

0xde21,	// (0x0001ff06) indicator_ps_pane

0xde30,	// (0x0001ff15) power_save_pane_g1_ParamLimits

0xde30,	// (0x0001ff15) power_save_pane_g1

0xde3c,	// (0x0001ff21) power_save_pane_g2_ParamLimits

0xde3c,	// (0x0001ff21) power_save_pane_g2

0x44f0,	// (0x000165d5) aid_navinavi_width_pane

0xde04,	// (0x0001fee9) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00021693) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00021693) power_save_pane_g

0xde4a,	// (0x0001ff2f) power_save_pane_t1_ParamLimits

0xde4a,	// (0x0001ff2f) power_save_pane_t1

0xb241,	// (0x0001d326) aid_ps_clock_pane_ParamLimits

0xde15,	// (0x0001fefa) aid_ps_indicator_pane_ParamLimits

0xde5c,	// (0x0001ff41) power_save_pane_t4_ParamLimits

0xde5c,	// (0x0001ff41) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00021698) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00021698) power_save_pane_t

0xde86,	// (0x0001ff6b) power_save_t3_ParamLimits

0xde86,	// (0x0001ff6b) power_save_t3

0xde71,	// (0x0001ff56) power_save_t2_ParamLimits

0xde71,	// (0x0001ff56) power_save_t2

0xde9b,	// (0x0001ff80) indicator_ps_pane_g1

0xb24d,	// (0x0001d332) ai_gene_pane_ParamLimits

0xb24d,	// (0x0001d332) ai_gene_pane

0xb264,	// (0x0001d349) ai_links_pane_ParamLimits

0xb264,	// (0x0001d349) ai_links_pane

0xb276,	// (0x0001d35b) indicator_pane_cp1_ParamLimits

0xb276,	// (0x0001d35b) indicator_pane_cp1

0xb285,	// (0x0001d36a) main_pane_idle_g1_cp_ParamLimits

0xb285,	// (0x0001d36a) main_pane_idle_g1_cp

0xdea4,	// (0x0001ff89) popup_ai_links_title_window

0xb29d,	// (0x0001d382) soft_indicator_pane_cp1_ParamLimits

0xb29d,	// (0x0001d382) soft_indicator_pane_cp1

0x1ffe,	// (0x000140e3) ai_links_pane_g1

0x2007,	// (0x000140ec) grid_ai_links_pane

0xc505,	// (0x0001e5ea) ai_gene_pane_1

0x1fec,	// (0x000140d1) ai_gene_pane_2

0x1ff5,	// (0x000140da) list_highlight_pane_cp4

0xc4e9,	// (0x0001e5ce) cell_ai_link_pane_ParamLimits

0xc4e9,	// (0x0001e5ce) cell_ai_link_pane

0x1fe4,	// (0x000140c9) cell_ai_link_pane_g1

0xe05e,	// (0x00020143) cell_ai_link_pane_g2

0x0001,

0xf93d,	// (0x00021a22) cell_ai_link_pane_g

0xdd07,	// (0x0001fdec) grid_highlight_cp2

0xdd07,	// (0x0001fdec) bg_popup_sub_pane_cp1

0xdebb,	// (0x0001ffa0) popup_ai_links_title_window_t1

0x1f36,	// (0x0001401b) ai_gene_pane_1_g1_ParamLimits

0x1f36,	// (0x0001401b) ai_gene_pane_1_g1

0x1f42,	// (0x00014027) ai_gene_pane_1_g2_ParamLimits

0x1f42,	// (0x00014027) ai_gene_pane_1_g2

0x0001,

0xf933,	// (0x00021a18) ai_gene_pane_1_g_ParamLimits

0xf933,	// (0x00021a18) ai_gene_pane_1_g

0x1f4f,	// (0x00014034) ai_gene_pane_1_t1_ParamLimits

0x1f4f,	// (0x00014034) ai_gene_pane_1_t1

0x1f83,	// (0x00014068) grid_ai_soft_ind_pane

0x1f21,	// (0x00014006) ai_gene_pane_2_t1_ParamLimits

0x1f21,	// (0x00014006) ai_gene_pane_2_t1

0xb2b1,	// (0x0001d396) main_pane_empty_t1_ParamLimits

0xb2b1,	// (0x0001d396) main_pane_empty_t1

0xb2ce,	// (0x0001d3b3) main_pane_empty_t2_ParamLimits

0xb2ce,	// (0x0001d3b3) main_pane_empty_t2

0xb2e6,	// (0x0001d3cb) main_pane_empty_t3_ParamLimits

0xb2e6,	// (0x0001d3cb) main_pane_empty_t3

0xb2f9,	// (0x0001d3de) main_pane_empty_t4_ParamLimits

0xb2f9,	// (0x0001d3de) main_pane_empty_t4

0xb30c,	// (0x0001d3f1) main_pane_empty_t5_ParamLimits

0xb30c,	// (0x0001d3f1) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002169d) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002169d) main_pane_empty_t

0xea73,	// (0x00020b58) bg_popup_window_pane_ParamLimits

0xea73,	// (0x00020b58) bg_popup_window_pane

0x1cd0,	// (0x00013db5) find_popup_pane_cp2_ParamLimits

0x1cd0,	// (0x00013db5) find_popup_pane_cp2

0x1cdc,	// (0x00013dc1) heading_pane_ParamLimits

0x1cdc,	// (0x00013dc1) heading_pane

0xdd07,	// (0x0001fdec) bg_popup_sub_pane

0xc42c,	// (0x0001e511) bg_popup_window_pane_g1_ParamLimits

0xc42c,	// (0x0001e511) bg_popup_window_pane_g1

0xc43b,	// (0x0001e520) bg_popup_window_pane_g2_ParamLimits

0xc43b,	// (0x0001e520) bg_popup_window_pane_g2

0xc447,	// (0x0001e52c) bg_popup_window_pane_g3_ParamLimits

0xc447,	// (0x0001e52c) bg_popup_window_pane_g3

0xc453,	// (0x0001e538) bg_popup_window_pane_g4_ParamLimits

0xc453,	// (0x0001e538) bg_popup_window_pane_g4

0xc462,	// (0x0001e547) bg_popup_window_pane_g5_ParamLimits

0xc462,	// (0x0001e547) bg_popup_window_pane_g5

0xc472,	// (0x0001e557) bg_popup_window_pane_g6_ParamLimits

0xc472,	// (0x0001e557) bg_popup_window_pane_g6

0xc47e,	// (0x0001e563) bg_popup_window_pane_g7_ParamLimits

0xc47e,	// (0x0001e563) bg_popup_window_pane_g7

0xc48d,	// (0x0001e572) bg_popup_window_pane_g8_ParamLimits

0xc48d,	// (0x0001e572) bg_popup_window_pane_g8

0xc49c,	// (0x0001e581) bg_popup_window_pane_g9_ParamLimits

0xc49c,	// (0x0001e581) bg_popup_window_pane_g9

0x1cb5,	// (0x00013d9a) bg_popup_window_pane_g10_ParamLimits

0x1cb5,	// (0x00013d9a) bg_popup_window_pane_g10

0x0009,

0xf8fb,	// (0x000219e0) bg_popup_window_pane_g_ParamLimits

0xf8fb,	// (0x000219e0) bg_popup_window_pane_g

0x1c6c,	// (0x00013d51) bg_popup_heading_pane_ParamLimits

0x1c6c,	// (0x00013d51) bg_popup_heading_pane

0x5b25,	// (0x00017c0a) tabs_4_passive_pane_cp_srt_ParamLimits

0x5b25,	// (0x00017c0a) tabs_4_passive_pane_cp_srt

0x5b37,	// (0x00017c1c) tabs_4_passive_pane_srt_ParamLimits

0x1c80,	// (0x00013d65) heading_pane_g2

0x5b37,	// (0x00017c1c) tabs_4_passive_pane_srt

0x11f1,	// (0x000132d6) bg_passive_tab_pane_cp3_srt_ParamLimits

0x11f1,	// (0x000132d6) bg_passive_tab_pane_cp3_srt

0x1c88,	// (0x00013d6d) heading_pane_t1_ParamLimits

0x1c88,	// (0x00013d6d) heading_pane_t1

0x1c9f,	// (0x00013d84) heading_pane_t2_ParamLimits

0x1c9f,	// (0x00013d84) heading_pane_t2

0x0001,

0xf8f6,	// (0x000219db) heading_pane_t_ParamLimits

0xf8f6,	// (0x000219db) heading_pane_t

0x17fb,	// (0x000138e0) bg_popup_heading_pane_g1

0x188c,	// (0x00013971) bg_popup_heading_pane_g2

0x1894,	// (0x00013979) bg_popup_heading_pane_g3

0x189c,	// (0x00013981) bg_popup_heading_pane_g4

0x18a4,	// (0x00013989) bg_popup_heading_pane_g5

0x18ac,	// (0x00013991) bg_popup_heading_pane_g6

0x18b4,	// (0x00013999) bg_popup_heading_pane_g7

0x18bc,	// (0x000139a1) bg_popup_heading_pane_g8

0x18c4,	// (0x000139a9) bg_popup_heading_pane_g9

0x0008,

0xf8b2,	// (0x00021997) bg_popup_heading_pane_g

0x10db,	// (0x000131c0) bg_popup_sub_pane_g1

0x10eb,	// (0x000131d0) bg_popup_sub_pane_g2

0x10e3,	// (0x000131c8) bg_popup_sub_pane_g3

0x10fb,	// (0x000131e0) bg_popup_sub_pane_g4

0x10f3,	// (0x000131d8) bg_popup_sub_pane_g5

0x1103,	// (0x000131e8) bg_popup_sub_pane_g6

0x110b,	// (0x000131f0) bg_popup_sub_pane_g7

0x111b,	// (0x00013200) bg_popup_sub_pane_g8

0x1113,	// (0x000131f8) bg_popup_sub_pane_g9

0x0008,

0xf88c,	// (0x00021971) bg_popup_sub_pane_g

0xdd55,	// (0x0001fe3a) bg_popup_window_pane_cp5_ParamLimits

0xdd55,	// (0x0001fe3a) bg_popup_window_pane_cp5

0xded8,	// (0x0001ffbd) popup_note_window_g1_ParamLimits

0xded8,	// (0x0001ffbd) popup_note_window_g1

0xdee4,	// (0x0001ffc9) popup_note_window_t1_ParamLimits

0xdee4,	// (0x0001ffc9) popup_note_window_t1

0xdefa,	// (0x0001ffdf) popup_note_window_t2_ParamLimits

0xdefa,	// (0x0001ffdf) popup_note_window_t2

0xdf10,	// (0x0001fff5) popup_note_window_t3_ParamLimits

0xdf10,	// (0x0001fff5) popup_note_window_t3

0xdf26,	// (0x0002000b) popup_note_window_t4_ParamLimits

0xdf26,	// (0x0002000b) popup_note_window_t4

0xdf4e,	// (0x00020033) popup_note_window_t5_ParamLimits

0xdf4e,	// (0x00020033) popup_note_window_t5

0x0004,

0xf5c3,	// (0x000216a8) popup_note_window_t_ParamLimits

0xf5c3,	// (0x000216a8) popup_note_window_t

0xdf72,	// (0x00020057) bg_popup_window_pane_cp6_ParamLimits

0xdf72,	// (0x00020057) bg_popup_window_pane_cp6

0x1777,	// (0x0001385c) popup_note_image_window_g1_ParamLimits

0x1777,	// (0x0001385c) popup_note_image_window_g1

0x1783,	// (0x00013868) popup_note_image_window_g2_ParamLimits

0x1783,	// (0x00013868) popup_note_image_window_g2

0x0001,

0xf880,	// (0x00021965) popup_note_image_window_g_ParamLimits

0xf880,	// (0x00021965) popup_note_image_window_g

0x179c,	// (0x00013881) popup_note_image_window_t1_ParamLimits

0x179c,	// (0x00013881) popup_note_image_window_t1

0x17b5,	// (0x0001389a) popup_note_image_window_t2_ParamLimits

0x17b5,	// (0x0001389a) popup_note_image_window_t2

0x17ce,	// (0x000138b3) popup_note_image_window_t3_ParamLimits

0x17ce,	// (0x000138b3) popup_note_image_window_t3

0x0002,

0xf885,	// (0x0002196a) popup_note_image_window_t_ParamLimits

0xf885,	// (0x0002196a) popup_note_image_window_t

0x1662,	// (0x00013747) bg_popup_window_pane_cp7_ParamLimits

0x1662,	// (0x00013747) bg_popup_window_pane_cp7

0x1692,	// (0x00013777) popup_note_wait_window_g1_ParamLimits

0x1692,	// (0x00013777) popup_note_wait_window_g1

0x169e,	// (0x00013783) popup_note_wait_window_g2_ParamLimits

0x169e,	// (0x00013783) popup_note_wait_window_g2

0x0002,

0xf86e,	// (0x00021953) popup_note_wait_window_g_ParamLimits

0xf86e,	// (0x00021953) popup_note_wait_window_g

0x16b6,	// (0x0001379b) popup_note_wait_window_t1_ParamLimits

0x16b6,	// (0x0001379b) popup_note_wait_window_t1

0x16dd,	// (0x000137c2) popup_note_wait_window_t2_ParamLimits

0x16dd,	// (0x000137c2) popup_note_wait_window_t2

0x16fa,	// (0x000137df) popup_note_wait_window_t3_ParamLimits

0x16fa,	// (0x000137df) popup_note_wait_window_t3

0x170d,	// (0x000137f2) popup_note_wait_window_t4_ParamLimits

0x170d,	// (0x000137f2) popup_note_wait_window_t4

0x0004,

0xf875,	// (0x0002195a) popup_note_wait_window_t_ParamLimits

0xf875,	// (0x0002195a) popup_note_wait_window_t

0x1732,	// (0x00013817) wait_bar_pane_ParamLimits

0x1732,	// (0x00013817) wait_bar_pane

0xdd07,	// (0x0001fdec) wait_anim_pane

0xdd07,	// (0x0001fdec) wait_border_pane

0xdc85,	// (0x0001fd6a) wait_anim_pane_g1

0xdc85,	// (0x0001fd6a) wait_anim_pane_g2

0x0001,

0xf747,	// (0x0002182c) wait_anim_pane_g

0x1606,	// (0x000136eb) wait_border_pane_g1

0x161b,	// (0x00013700) wait_border_pane_g2

0x1624,	// (0x00013709) wait_border_pane_g3

0x0002,

0xf867,	// (0x0002194c) wait_border_pane_g

0x1568,	// (0x0001364d) bg_popup_window_pane_cp16_ParamLimits

0x1568,	// (0x0001364d) bg_popup_window_pane_cp16

0x1576,	// (0x0001365b) indicator_popup_pane_cp4_ParamLimits

0x1576,	// (0x0001365b) indicator_popup_pane_cp4

0x158a,	// (0x0001366f) popup_query_data_window_t1_ParamLimits

0x158a,	// (0x0001366f) popup_query_data_window_t1

0x159c,	// (0x00013681) popup_query_data_window_t2_ParamLimits

0x159c,	// (0x00013681) popup_query_data_window_t2

0x15b5,	// (0x0001369a) popup_query_data_window_t3_ParamLimits

0x15b5,	// (0x0001369a) popup_query_data_window_t3

0x0002,

0xf860,	// (0x00021945) popup_query_data_window_t_ParamLimits

0xf860,	// (0x00021945) popup_query_data_window_t

0x15cf,	// (0x000136b4) query_popup_data_pane_ParamLimits

0x15cf,	// (0x000136b4) query_popup_data_pane

0x15e3,	// (0x000136c8) query_popup_data_pane_cp1_ParamLimits

0x15e3,	// (0x000136c8) query_popup_data_pane_cp1

0xdf72,	// (0x00020057) bg_popup_window_pane_cp10_ParamLimits

0xdf72,	// (0x00020057) bg_popup_window_pane_cp10

0x14cb,	// (0x000135b0) indicator_popup_pane_ParamLimits

0x14cb,	// (0x000135b0) indicator_popup_pane

0xdfc9,	// (0x000200ae) popup_query_code_window_t1_ParamLimits

0xdfc9,	// (0x000200ae) popup_query_code_window_t1

0x14e3,	// (0x000135c8) popup_query_code_window_t2_ParamLimits

0x14e3,	// (0x000135c8) popup_query_code_window_t2

0x1521,	// (0x00013606) popup_query_code_window_t3_ParamLimits

0x1521,	// (0x00013606) popup_query_code_window_t3

0x0002,

0xf859,	// (0x0002193e) popup_query_code_window_t_ParamLimits

0xf859,	// (0x0002193e) popup_query_code_window_t

0x1550,	// (0x00013635) query_popup_pane_ParamLimits

0x1550,	// (0x00013635) query_popup_pane

0xdf72,	// (0x00020057) bg_popup_window_pane_cp15_ParamLimits

0xdf72,	// (0x00020057) bg_popup_window_pane_cp15

0xdf90,	// (0x00020075) indicator_popup_pane_cp1_ParamLimits

0xdf90,	// (0x00020075) indicator_popup_pane_cp1

0xdfa3,	// (0x00020088) indicator_popup_pane_cp2_ParamLimits

0xdfa3,	// (0x00020088) indicator_popup_pane_cp2

0xdfb6,	// (0x0002009b) popup_query_data_code_window_g1_ParamLimits

0xdfb6,	// (0x0002009b) popup_query_data_code_window_g1

0xdfc9,	// (0x000200ae) popup_query_data_code_window_t1_ParamLimits

0xdfc9,	// (0x000200ae) popup_query_data_code_window_t1

0xdfdb,	// (0x000200c0) popup_query_data_code_window_t2_ParamLimits

0xdfdb,	// (0x000200c0) popup_query_data_code_window_t2

0xdfed,	// (0x000200d2) popup_query_data_code_window_t3_ParamLimits

0xdfed,	// (0x000200d2) popup_query_data_code_window_t3

0xe003,	// (0x000200e8) popup_query_data_code_window_t4_ParamLimits

0xe003,	// (0x000200e8) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x000216b3) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x000216b3) popup_query_data_code_window_t

0xf1f9,	// (0x000212de) list_single_midp_graphic_pane_g3

0xe01b,	// (0x00020100) query_popup_data_pane_cp2_ParamLimits

0xe02e,	// (0x00020113) query_popup_pane_cp2_ParamLimits

0xe02e,	// (0x00020113) query_popup_pane_cp2

0xdd07,	// (0x0001fdec) bg_popup_window_pane_cp11

0x149f,	// (0x00013584) heading_pane_cp5

0xe0ba,	// (0x0002019f) listscroll_popup_info_pane

0xdd07,	// (0x0001fdec) input_focus_pane_cp3

0xe041,	// (0x00020126) query_popup_pane_t1

0xe04f,	// (0x00020134) list_popup_info_pane_ParamLimits

0xe04f,	// (0x00020134) list_popup_info_pane

0xe05e,	// (0x00020143) listscroll_popup_info_pane_g1

0xe066,	// (0x0002014b) scroll_pane_cp7

0xe06e,	// (0x00020153) popup_info_list_pane_t1_ParamLimits

0xe06e,	// (0x00020153) popup_info_list_pane_t1

0xe088,	// (0x0002016d) popup_info_list_pane_t2_ParamLimits

0xe088,	// (0x0002016d) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x000216bc) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x000216bc) popup_info_list_pane_t

0xdd07,	// (0x0001fdec) bg_popup_window_pane_cp12

0x237b,	// (0x00014460) find_popup_pane

0xdd6b,	// (0x0001fe50) bg_popup_window_pane_cp3

0xe0a2,	// (0x00020187) heading_pane_cp3

0xe0ae,	// (0x00020193) listscroll_popup_graphic_pane

0xdd07,	// (0x0001fdec) bg_popup_window_pane_cp4

0xb36f,	// (0x0001d454) heading_pane_cp4

0xe0ba,	// (0x0002019f) listscroll_popup_colour_pane

0xe0c2,	// (0x000201a7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xe0c2,	// (0x000201a7) cell_large_graphic_colour_none_popup_pane

0xb377,	// (0x0001d45c) grid_large_graphic_colour_popup_pane_ParamLimits

0xb377,	// (0x0001d45c) grid_large_graphic_colour_popup_pane

0xb393,	// (0x0001d478) listscroll_popup_colour_pane_g1_ParamLimits

0xb393,	// (0x0001d478) listscroll_popup_colour_pane_g1

0xb3aa,	// (0x0001d48f) listscroll_popup_colour_pane_g2_ParamLimits

0xb3aa,	// (0x0001d48f) listscroll_popup_colour_pane_g2

0xe0d2,	// (0x000201b7) listscroll_popup_colour_pane_g3_ParamLimits

0xe0d2,	// (0x000201b7) listscroll_popup_colour_pane_g3

0xb3be,	// (0x0001d4a3) listscroll_popup_colour_pane_g4_ParamLimits

0xb3be,	// (0x0001d4a3) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x000216c1) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x000216c1) listscroll_popup_colour_pane_g

0xe0e2,	// (0x000201c7) scroll_pane_cp6_ParamLimits

0xe0e2,	// (0x000201c7) scroll_pane_cp6

0xb3cd,	// (0x0001d4b2) cell_large_graphic_colour_popup_pane_ParamLimits

0xb3cd,	// (0x0001d4b2) cell_large_graphic_colour_popup_pane

0xe0f4,	// (0x000201d9) cell_large_graphic_colour_none_popup_pane_t1

0xdd07,	// (0x0001fdec) grid_highlight_pane_cp5

0xe103,	// (0x000201e8) cell_large_graphic_colour_popup_pane_g1

0xe10b,	// (0x000201f0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x000216ca) cell_large_graphic_colour_popup_pane_g

0xe113,	// (0x000201f8) cell_large_graphic_colour_popup_pane_g2_copy1

0xe11c,	// (0x00020201) grid_highlight_pane_cp4

0xe124,	// (0x00020209) bg_popup_window_pane_cp8_ParamLimits

0xe124,	// (0x00020209) bg_popup_window_pane_cp8

0xe13f,	// (0x00020224) popup_snote_single_text_window_g1_ParamLimits

0xe13f,	// (0x00020224) popup_snote_single_text_window_g1

0xe151,	// (0x00020236) popup_snote_single_text_window_t1_ParamLimits

0xe151,	// (0x00020236) popup_snote_single_text_window_t1

0xe164,	// (0x00020249) popup_snote_single_text_window_t2_ParamLimits

0xe164,	// (0x00020249) popup_snote_single_text_window_t2

0xe177,	// (0x0002025c) popup_snote_single_text_window_t3_ParamLimits

0xe177,	// (0x0002025c) popup_snote_single_text_window_t3

0xe1b0,	// (0x00020295) popup_snote_single_text_window_t4_ParamLimits

0xe1b0,	// (0x00020295) popup_snote_single_text_window_t4

0xe1e4,	// (0x000202c9) popup_snote_single_text_window_t5_ParamLimits

0xe1e4,	// (0x000202c9) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x000216cf) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x000216cf) popup_snote_single_text_window_t

0xe213,	// (0x000202f8) bg_popup_window_pane_cp9_ParamLimits

0xe213,	// (0x000202f8) bg_popup_window_pane_cp9

0xe13f,	// (0x00020224) popup_snote_single_graphic_window_g1_ParamLimits

0xe13f,	// (0x00020224) popup_snote_single_graphic_window_g1

0xe221,	// (0x00020306) popup_snote_single_graphic_window_g2_ParamLimits

0xe221,	// (0x00020306) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x000216da) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x000216da) popup_snote_single_graphic_window_g

0xe22d,	// (0x00020312) popup_snote_single_graphic_window_t1_ParamLimits

0xe22d,	// (0x00020312) popup_snote_single_graphic_window_t1

0xe240,	// (0x00020325) popup_snote_single_graphic_window_t2_ParamLimits

0xe240,	// (0x00020325) popup_snote_single_graphic_window_t2

0xe177,	// (0x0002025c) popup_snote_single_graphic_window_t3_ParamLimits

0xe177,	// (0x0002025c) popup_snote_single_graphic_window_t3

0xe1b0,	// (0x00020295) popup_snote_single_graphic_window_t4_ParamLimits

0xe1b0,	// (0x00020295) popup_snote_single_graphic_window_t4

0xe1e4,	// (0x000202c9) popup_snote_single_graphic_window_t5_ParamLimits

0xe1e4,	// (0x000202c9) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x000216df) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x000216df) popup_snote_single_graphic_window_t

0xc7de,	// (0x0001e8c3) grid_graphic_popup_pane_ParamLimits

0xc7de,	// (0x0001e8c3) grid_graphic_popup_pane

0xc801,	// (0x0001e8e6) listscroll_popup_graphic_pane_g1_ParamLimits

0xc801,	// (0x0001e8e6) listscroll_popup_graphic_pane_g1

0xc815,	// (0x0001e8fa) listscroll_popup_graphic_pane_g2_ParamLimits

0xc815,	// (0x0001e8fa) listscroll_popup_graphic_pane_g2

0x0001,

0xf9d6,	// (0x00021abb) listscroll_popup_graphic_pane_g_ParamLimits

0xf9d6,	// (0x00021abb) listscroll_popup_graphic_pane_g

0x2248,	// (0x0001432d) scroll_pane_cp5

0xc799,	// (0x0001e87e) cell_graphic_popup_pane_ParamLimits

0xc799,	// (0x0001e87e) cell_graphic_popup_pane

0x2324,	// (0x00014409) cell_graphic_popup_pane_g1

0x232c,	// (0x00014411) cell_graphic_popup_pane_g2

0xe113,	// (0x000201f8) cell_graphic_popup_pane_g3

0x0002,

0xf9cf,	// (0x00021ab4) cell_graphic_popup_pane_g

0x2335,	// (0x0001441a) cell_graphic_popup_pane_t2

0xe11c,	// (0x00020201) grid_highlight_pane_cp3

0xe265,	// (0x0002034a) list_gen_pane_ParamLimits

0xe265,	// (0x0002034a) list_gen_pane

0xe28e,	// (0x00020373) scroll_pane

0xc76c,	// (0x0001e851) bg_list_pane_g1_ParamLimits

0xc76c,	// (0x0001e851) bg_list_pane_g1

0x22db,	// (0x000143c0) bg_list_pane_g2_ParamLimits

0x22db,	// (0x000143c0) bg_list_pane_g2

0x22ee,	// (0x000143d3) bg_list_pane_g3_ParamLimits

0x22ee,	// (0x000143d3) bg_list_pane_g3

0x2300,	// (0x000143e5) bg_list_pane_g4_ParamLimits

0x2300,	// (0x000143e5) bg_list_pane_g4

0xc787,	// (0x0001e86c) bg_list_pane_g5_ParamLimits

0xc787,	// (0x0001e86c) bg_list_pane_g5

0x0004,

0xf9c4,	// (0x00021aa9) bg_list_pane_g_ParamLimits

0xf9c4,	// (0x00021aa9) bg_list_pane_g

0xc710,	// (0x0001e7f5) list_double2_graphic_large_graphic_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_double2_graphic_large_graphic_pane

0xc710,	// (0x0001e7f5) list_double2_graphic_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_double2_graphic_pane

0xc710,	// (0x0001e7f5) list_double2_large_graphic_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_double2_large_graphic_pane

0xc722,	// (0x0001e807) list_double2_pane_ParamLimits

0xc722,	// (0x0001e807) list_double2_pane

0xc710,	// (0x0001e7f5) list_double_graphic_heading_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_double_graphic_heading_pane

0xc710,	// (0x0001e7f5) list_double_graphic_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_double_graphic_pane

0xc710,	// (0x0001e7f5) list_double_heading_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_double_heading_pane

0xc710,	// (0x0001e7f5) list_double_large_graphic_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_double_large_graphic_pane

0xc710,	// (0x0001e7f5) list_double_number_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_double_number_pane

0xc710,	// (0x0001e7f5) list_double_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_double_pane

0xc710,	// (0x0001e7f5) list_double_time_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_double_time_pane

0xc710,	// (0x0001e7f5) list_setting_number_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_setting_number_pane

0xc710,	// (0x0001e7f5) list_setting_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_setting_pane

0xac6c,	// (0x0001cd51) list_single_2graphic_pane_ParamLimits

0xac6c,	// (0x0001cd51) list_single_2graphic_pane

0xac6c,	// (0x0001cd51) list_single_graphic_heading_pane_ParamLimits

0xac6c,	// (0x0001cd51) list_single_graphic_heading_pane

0xac6c,	// (0x0001cd51) list_single_graphic_pane_ParamLimits

0xac6c,	// (0x0001cd51) list_single_graphic_pane

0xac6c,	// (0x0001cd51) list_single_heading_pane_ParamLimits

0xac6c,	// (0x0001cd51) list_single_heading_pane

0xc710,	// (0x0001e7f5) list_single_large_graphic_pane_ParamLimits

0xc710,	// (0x0001e7f5) list_single_large_graphic_pane

0xac6c,	// (0x0001cd51) list_single_number_heading_pane_ParamLimits

0xac6c,	// (0x0001cd51) list_single_number_heading_pane

0xac6c,	// (0x0001cd51) list_single_number_pane_ParamLimits

0xac6c,	// (0x0001cd51) list_single_number_pane

0xac6c,	// (0x0001cd51) list_single_pane_ParamLimits

0xac6c,	// (0x0001cd51) list_single_pane

0xdd07,	// (0x0001fdec) list_highlight_pane_cp1

0x3d7f,	// (0x00015e64) list_single_pane_g1_ParamLimits

0x3d7f,	// (0x00015e64) list_single_pane_g1

0x3d8b,	// (0x00015e70) list_single_pane_g2_ParamLimits

0x3d8b,	// (0x00015e70) list_single_pane_g2

0x0001,

0xf60c,	// (0x000216f1) list_single_pane_g_ParamLimits

0xf60c,	// (0x000216f1) list_single_pane_g

0x3f44,	// (0x00016029) list_single_pane_t1_ParamLimits

0x3f44,	// (0x00016029) list_single_pane_t1

0x3d7f,	// (0x00015e64) list_single_number_pane_g1_ParamLimits

0x3d7f,	// (0x00015e64) list_single_number_pane_g1

0x3d8b,	// (0x00015e70) list_single_number_pane_g2_ParamLimits

0x3d8b,	// (0x00015e70) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x000216f1) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x000216f1) list_single_number_pane_g

0x3ddd,	// (0x00015ec2) list_single_number_pane_t1_ParamLimits

0x3ddd,	// (0x00015ec2) list_single_number_pane_t1

0xac2f,	// (0x0001cd14) list_single_number_pane_t2_ParamLimits

0xac2f,	// (0x0001cd14) list_single_number_pane_t2

0x0001,

0xf985,	// (0x00021a6a) list_single_number_pane_t_ParamLimits

0xf985,	// (0x00021a6a) list_single_number_pane_t

0x3654,	// (0x00015739) list_single_graphic_pane_g1_ParamLimits

0x3654,	// (0x00015739) list_single_graphic_pane_g1

0x3d7f,	// (0x00015e64) list_single_graphic_pane_g2_ParamLimits

0x3d7f,	// (0x00015e64) list_single_graphic_pane_g2

0x3d8b,	// (0x00015e70) list_single_graphic_pane_g3_ParamLimits

0x3d8b,	// (0x00015e70) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x000216ea) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x000216ea) list_single_graphic_pane_g

0x3ddd,	// (0x00015ec2) list_single_graphic_pane_t1_ParamLimits

0x3ddd,	// (0x00015ec2) list_single_graphic_pane_t1

0x3d7f,	// (0x00015e64) list_single_heading_pane_g1_ParamLimits

0x3d7f,	// (0x00015e64) list_single_heading_pane_g1

0x3d8b,	// (0x00015e70) list_single_heading_pane_g2_ParamLimits

0x3d8b,	// (0x00015e70) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x000216f1) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x000216f1) list_single_heading_pane_g

0xa69f,	// (0x0001c784) list_single_heading_pane_t1_ParamLimits

0xa69f,	// (0x0001c784) list_single_heading_pane_t1

0xa6b5,	// (0x0001c79a) list_single_heading_pane_t2_ParamLimits

0xa6b5,	// (0x0001c79a) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x000216f6) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x000216f6) list_single_heading_pane_t

0x3d7f,	// (0x00015e64) list_single_number_heading_pane_g1_ParamLimits

0x3d7f,	// (0x00015e64) list_single_number_heading_pane_g1

0x3d8b,	// (0x00015e70) list_single_number_heading_pane_g2_ParamLimits

0x3d8b,	// (0x00015e70) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x000216f1) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x000216f1) list_single_number_heading_pane_g

0xa69f,	// (0x0001c784) list_single_number_heading_pane_t1_ParamLimits

0xa69f,	// (0x0001c784) list_single_number_heading_pane_t1

0xa6c7,	// (0x0001c7ac) list_single_number_heading_pane_t2_ParamLimits

0xa6c7,	// (0x0001c7ac) list_single_number_heading_pane_t2

0x3f20,	// (0x00016005) list_single_number_heading_pane_t3_ParamLimits

0x3f20,	// (0x00016005) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x000216fb) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x000216fb) list_single_number_heading_pane_t

0x3654,	// (0x00015739) list_single_graphic_heading_pane_g1_ParamLimits

0x3654,	// (0x00015739) list_single_graphic_heading_pane_g1

0xa6d9,	// (0x0001c7be) list_single_graphic_heading_pane_g4_ParamLimits

0xa6d9,	// (0x0001c7be) list_single_graphic_heading_pane_g4

0x3d8b,	// (0x00015e70) list_single_graphic_heading_pane_g5_ParamLimits

0x3d8b,	// (0x00015e70) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00021702) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00021702) list_single_graphic_heading_pane_g

0xa69f,	// (0x0001c784) list_single_graphic_heading_pane_t1_ParamLimits

0xa69f,	// (0x0001c784) list_single_graphic_heading_pane_t1

0xa6ea,	// (0x0001c7cf) list_single_graphic_heading_pane_t2_ParamLimits

0xa6ea,	// (0x0001c7cf) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00021709) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00021709) list_single_graphic_heading_pane_t

0x3f5a,	// (0x0001603f) list_single_large_graphic_pane_g1_ParamLimits

0x3f5a,	// (0x0001603f) list_single_large_graphic_pane_g1

0x3f66,	// (0x0001604b) list_single_large_graphic_pane_g2_ParamLimits

0x3f66,	// (0x0001604b) list_single_large_graphic_pane_g2

0x3f72,	// (0x00016057) list_single_large_graphic_pane_g3_ParamLimits

0x3f72,	// (0x00016057) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002170e) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002170e) list_single_large_graphic_pane_g

0x161b,	// (0x00013700) wait_border_pane_g2_copy1

0xa6fc,	// (0x0001c7e1) list_single_large_graphic_pane_g4_cp2

0x3f7e,	// (0x00016063) list_single_large_graphic_pane_t1_ParamLimits

0x3f7e,	// (0x00016063) list_single_large_graphic_pane_t1

0x3660,	// (0x00015745) list_double_pane_g1_ParamLimits

0x3660,	// (0x00015745) list_double_pane_g1

0x366c,	// (0x00015751) list_double_pane_g2_ParamLimits

0x366c,	// (0x00015751) list_double_pane_g2

0x0001,

0xf630,	// (0x00021715) list_double_pane_g_ParamLimits

0xf630,	// (0x00021715) list_double_pane_g

0x3e82,	// (0x00015f67) list_double_pane_t1_ParamLimits

0x3e82,	// (0x00015f67) list_double_pane_t1

0xa704,	// (0x0001c7e9) list_double_pane_t2_ParamLimits

0xa704,	// (0x0001c7e9) list_double_pane_t2

0x0001,

0xf635,	// (0x0002171a) list_double_pane_t_ParamLimits

0xf635,	// (0x0002171a) list_double_pane_t

0xa716,	// (0x0001c7fb) list_double2_pane_g1_ParamLimits

0xa716,	// (0x0001c7fb) list_double2_pane_g1

0x383f,	// (0x00015924) list_double2_pane_g2_ParamLimits

0x383f,	// (0x00015924) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0002171f) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0002171f) list_double2_pane_g

0xa727,	// (0x0001c80c) list_double2_pane_t1_ParamLimits

0xa727,	// (0x0001c80c) list_double2_pane_t1

0xa73d,	// (0x0001c822) list_double2_pane_t2_ParamLimits

0xa73d,	// (0x0001c822) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00021724) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00021724) list_double2_pane_t

0x3660,	// (0x00015745) list_double_number_pane_g1_ParamLimits

0x3660,	// (0x00015745) list_double_number_pane_g1

0x366c,	// (0x00015751) list_double_number_pane_g2_ParamLimits

0x366c,	// (0x00015751) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00021715) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00021715) list_double_number_pane_g

0xa74f,	// (0x0001c834) list_double_number_pane_t1_ParamLimits

0xa74f,	// (0x0001c834) list_double_number_pane_t1

0x3678,	// (0x0001575d) list_double_number_pane_t2_ParamLimits

0x3678,	// (0x0001575d) list_double_number_pane_t2

0xa761,	// (0x0001c846) list_double_number_pane_t3_ParamLimits

0xa761,	// (0x0001c846) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00021729) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00021729) list_double_number_pane_t

0x3654,	// (0x00015739) list_double_graphic_pane_g1_ParamLimits

0x3654,	// (0x00015739) list_double_graphic_pane_g1

0xa773,	// (0x0001c858) list_double_graphic_pane_g2_ParamLimits

0xa773,	// (0x0001c858) list_double_graphic_pane_g2

0xa782,	// (0x0001c867) list_double_graphic_pane_g3_ParamLimits

0xa782,	// (0x0001c867) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00021730) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00021730) list_double_graphic_pane_g

0xa79a,	// (0x0001c87f) list_double_graphic_pane_t1_ParamLimits

0xa79a,	// (0x0001c87f) list_double_graphic_pane_t1

0xa7b0,	// (0x0001c895) list_double_graphic_pane_t2_ParamLimits

0xa7b0,	// (0x0001c895) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00021739) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00021739) list_double_graphic_pane_t

0xa7c2,	// (0x0001c8a7) list_double2_graphic_pane_g1_ParamLimits

0xa7c2,	// (0x0001c8a7) list_double2_graphic_pane_g1

0x3660,	// (0x00015745) list_double2_graphic_pane_g2_ParamLimits

0x3660,	// (0x00015745) list_double2_graphic_pane_g2

0x366c,	// (0x00015751) list_double2_graphic_pane_g3_ParamLimits

0x366c,	// (0x00015751) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0002173e) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0002173e) list_double2_graphic_pane_g

0xa7ce,	// (0x0001c8b3) list_double2_graphic_pane_t1_ParamLimits

0xa7ce,	// (0x0001c8b3) list_double2_graphic_pane_t1

0xa7e4,	// (0x0001c8c9) list_double2_graphic_pane_t2_ParamLimits

0xa7e4,	// (0x0001c8c9) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00021745) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00021745) list_double2_graphic_pane_t

0xa7f6,	// (0x0001c8db) list_double_large_graphic_pane_g1_ParamLimits

0xa7f6,	// (0x0001c8db) list_double_large_graphic_pane_g1

0xa81f,	// (0x0001c904) list_double_large_graphic_pane_g2_ParamLimits

0xa81f,	// (0x0001c904) list_double_large_graphic_pane_g2

0x366c,	// (0x00015751) list_double_large_graphic_pane_g3_ParamLimits

0x366c,	// (0x00015751) list_double_large_graphic_pane_g3

0xa830,	// (0x0001c915) list_double_large_graphic_pane_g4_ParamLimits

0xa830,	// (0x0001c915) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002174a) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002174a) list_double_large_graphic_pane_g

0xa841,	// (0x0001c926) list_double_large_graphic_pane_t1_ParamLimits

0xa841,	// (0x0001c926) list_double_large_graphic_pane_t1

0xa85a,	// (0x0001c93f) list_double_large_graphic_pane_t2_ParamLimits

0xa85a,	// (0x0001c93f) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00021755) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00021755) list_double_large_graphic_pane_t

0xa86c,	// (0x0001c951) list_double2_large_graphic_pane_g1_ParamLimits

0xa86c,	// (0x0001c951) list_double2_large_graphic_pane_g1

0xa878,	// (0x0001c95d) list_double2_large_graphic_pane_g2_ParamLimits

0xa878,	// (0x0001c95d) list_double2_large_graphic_pane_g2

0xa889,	// (0x0001c96e) list_double2_large_graphic_pane_g3_ParamLimits

0xa889,	// (0x0001c96e) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002175a) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002175a) list_double2_large_graphic_pane_g

0xa895,	// (0x0001c97a) list_double2_large_graphic_pane_t1_ParamLimits

0xa895,	// (0x0001c97a) list_double2_large_graphic_pane_t1

0xa8ab,	// (0x0001c990) list_double2_large_graphic_pane_t2_ParamLimits

0xa8ab,	// (0x0001c990) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00021761) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00021761) list_double2_large_graphic_pane_t

0xa8bd,	// (0x0001c9a2) list_double_heading_pane_g1_ParamLimits

0xa8bd,	// (0x0001c9a2) list_double_heading_pane_g1

0xa8ce,	// (0x0001c9b3) list_double_heading_pane_g2_ParamLimits

0xa8ce,	// (0x0001c9b3) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00021766) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00021766) list_double_heading_pane_g

0xa8da,	// (0x0001c9bf) list_double_heading_pane_t1_ParamLimits

0xa8da,	// (0x0001c9bf) list_double_heading_pane_t1

0xa8f0,	// (0x0001c9d5) list_double_heading_pane_t2_ParamLimits

0xa8f0,	// (0x0001c9d5) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002176b) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002176b) list_double_heading_pane_t

0xa902,	// (0x0001c9e7) list_double_graphic_heading_pane_g1_ParamLimits

0xa902,	// (0x0001c9e7) list_double_graphic_heading_pane_g1

0xa8bd,	// (0x0001c9a2) list_double_graphic_heading_pane_g2_ParamLimits

0xa8bd,	// (0x0001c9a2) list_double_graphic_heading_pane_g2

0xa8ce,	// (0x0001c9b3) list_double_graphic_heading_pane_g3_ParamLimits

0xa8ce,	// (0x0001c9b3) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00021770) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00021770) list_double_graphic_heading_pane_g

0xa90e,	// (0x0001c9f3) list_double_graphic_heading_pane_t1_ParamLimits

0xa90e,	// (0x0001c9f3) list_double_graphic_heading_pane_t1

0xa7e4,	// (0x0001c8c9) list_double_graphic_heading_pane_t2_ParamLimits

0xa7e4,	// (0x0001c8c9) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00021777) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00021777) list_double_graphic_heading_pane_t

0xa81f,	// (0x0001c904) list_double_time_pane_g1_ParamLimits

0xa81f,	// (0x0001c904) list_double_time_pane_g1

0x366c,	// (0x00015751) list_double_time_pane_g2_ParamLimits

0x366c,	// (0x00015751) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0002177c) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0002177c) list_double_time_pane_g

0x368e,	// (0x00015773) list_double_time_pane_t1_ParamLimits

0x368e,	// (0x00015773) list_double_time_pane_t1

0xa924,	// (0x0001ca09) list_double_time_pane_t2_ParamLimits

0xa924,	// (0x0001ca09) list_double_time_pane_t2

0xa936,	// (0x0001ca1b) list_double_time_pane_t3_ParamLimits

0xa936,	// (0x0001ca1b) list_double_time_pane_t3

0xa948,	// (0x0001ca2d) list_double_time_pane_t4_ParamLimits

0xa948,	// (0x0001ca2d) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x00021781) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x00021781) list_double_time_pane_t

0xa95a,	// (0x0001ca3f) list_setting_pane_g1_ParamLimits

0xa95a,	// (0x0001ca3f) list_setting_pane_g1

0xa8ce,	// (0x0001c9b3) list_setting_pane_g2_ParamLimits

0xa8ce,	// (0x0001c9b3) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0002178a) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0002178a) list_setting_pane_g

0xa966,	// (0x0001ca4b) list_setting_pane_t1_ParamLimits

0xa966,	// (0x0001ca4b) list_setting_pane_t1

0xa97d,	// (0x0001ca62) list_setting_pane_t2_ParamLimits

0xa97d,	// (0x0001ca62) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0002178f) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0002178f) list_setting_pane_t

0xa9ba,	// (0x0001ca9f) set_value_pane_cp_ParamLimits

0xa9ba,	// (0x0001ca9f) set_value_pane_cp

0xa9c6,	// (0x0001caab) list_setting_number_pane_g1_ParamLimits

0xa9c6,	// (0x0001caab) list_setting_number_pane_g1

0xa9d2,	// (0x0001cab7) list_setting_number_pane_g2_ParamLimits

0xa9d2,	// (0x0001cab7) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x00021796) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x00021796) list_setting_number_pane_g

0xa9de,	// (0x0001cac3) list_setting_number_pane_t1_ParamLimits

0xa9de,	// (0x0001cac3) list_setting_number_pane_t1

0xa9f2,	// (0x0001cad7) list_setting_number_pane_t2_ParamLimits

0xa9f2,	// (0x0001cad7) list_setting_number_pane_t2

0xaa09,	// (0x0001caee) list_setting_number_pane_t3_ParamLimits

0xaa09,	// (0x0001caee) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x0002179b) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x0002179b) list_setting_number_pane_t

0xa9ba,	// (0x0001ca9f) set_value_pane_ParamLimits

0xa9ba,	// (0x0001ca9f) set_value_pane

0xe977,	// (0x00020a5c) bg_set_opt_pane_ParamLimits

0xe977,	// (0x00020a5c) bg_set_opt_pane

0x3ab2,	// (0x00015b97) set_value_pane_t1

0xe998,	// (0x00020a7d) slider_set_pane_cp3

0xe9a1,	// (0x00020a86) volume_small_pane_cp

0xe9aa,	// (0x00020a8f) list_form_gen_pane

0xe2b2,	// (0x00020397) scroll_pane_cp8

0xaa4c,	// (0x0001cb31) form_field_data_pane_ParamLimits

0xaa4c,	// (0x0001cb31) form_field_data_pane

0xaa63,	// (0x0001cb48) form_field_data_wide_pane_ParamLimits

0xaa63,	// (0x0001cb48) form_field_data_wide_pane

0xaa83,	// (0x0001cb68) form_field_popup_pane_ParamLimits

0xaa83,	// (0x0001cb68) form_field_popup_pane

0xaa9b,	// (0x0001cb80) form_field_popup_wide_pane_ParamLimits

0xaa9b,	// (0x0001cb80) form_field_popup_wide_pane

0x3b36,	// (0x00015c1b) form_field_slider_pane_ParamLimits

0x3b36,	// (0x00015c1b) form_field_slider_pane

0x3b49,	// (0x00015c2e) form_field_slider_wide_pane_ParamLimits

0x3b49,	// (0x00015c2e) form_field_slider_wide_pane

0xe9b3,	// (0x00020a98) data_form_pane

0xb3f4,	// (0x0001d4d9) form_field_data_pane_t1

0xe9bf,	// (0x00020aa4) input_focus_pane

0xe9cd,	// (0x00020ab2) data_form_wide_pane

0x3b70,	// (0x00015c55) form_field_data_wide_pane_t1

0xe131,	// (0x00020216) input_focus_pane_cp6

0xaabc,	// (0x0001cba1) form_field_popup_pane_t1

0xe9bf,	// (0x00020aa4) input_focus_pane_cp7

0xe9b3,	// (0x00020a98) list_form_pane

0x3bb2,	// (0x00015c97) form_field_popup_wide_pane_t1

0xe9bf,	// (0x00020aa4) input_focus_pane_cp8

0xe9ed,	// (0x00020ad2) list_form_wide_pane

0xaadc,	// (0x0001cbc1) form_field_slider_pane_t1_ParamLimits

0xaadc,	// (0x0001cbc1) form_field_slider_pane_t1

0xaaf2,	// (0x0001cbd7) form_field_slider_pane_t2_ParamLimits

0xaaf2,	// (0x0001cbd7) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x000217ab) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x000217ab) form_field_slider_pane_t

0xdd55,	// (0x0001fe3a) input_focus_pane_cp9_ParamLimits

0xdd55,	// (0x0001fe3a) input_focus_pane_cp9

0xab07,	// (0x0001cbec) slider_cont_pane_ParamLimits

0xab07,	// (0x0001cbec) slider_cont_pane

0xe9fc,	// (0x00020ae1) form_field_slider_wide_pane_t1_ParamLimits

0xe9fc,	// (0x00020ae1) form_field_slider_wide_pane_t1

0x3c07,	// (0x00015cec) form_field_slider_wide_pane_t2_ParamLimits

0x3c07,	// (0x00015cec) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x000217b0) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x000217b0) form_field_slider_wide_pane_t

0xdd55,	// (0x0001fe3a) input_focus_pane_cp10_ParamLimits

0xdd55,	// (0x0001fe3a) input_focus_pane_cp10

0xab1b,	// (0x0001cc00) slider_cont_pane_cp1_ParamLimits

0xab1b,	// (0x0001cc00) slider_cont_pane_cp1

0xab31,	// (0x0001cc16) slider_form_pane_cp

0xea0e,	// (0x00020af3) input_focus_pane_g1

0xea16,	// (0x00020afb) input_focus_pane_g2

0xea1e,	// (0x00020b03) input_focus_pane_g3

0xea26,	// (0x00020b0b) input_focus_pane_g4

0xea2e,	// (0x00020b13) input_focus_pane_g5

0xea36,	// (0x00020b1b) input_focus_pane_g6

0xea3e,	// (0x00020b23) input_focus_pane_g7

0xea46,	// (0x00020b2b) input_focus_pane_g8

0xea4e,	// (0x00020b33) input_focus_pane_g9

0xdc85,	// (0x0001fd6a) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x000217b5) input_focus_pane_g

0x1624,	// (0x00013709) wait_border_pane_g3_copy1

0xab39,	// (0x0001cc1e) data_form_pane_t1

0xdc85,	// (0x0001fd6a) wait_anim_pane_g1_copy1

0xac41,	// (0x0001cd26) data_form_wide_pane_t1

0xea56,	// (0x00020b3b) list_form_graphic_pane_cp_ParamLimits

0xea56,	// (0x00020b3b) list_form_graphic_pane_cp

0x226e,	// (0x00014353) slider_form_pane_g1

0x2277,	// (0x0001435c) slider_form_pane_g2

0x0006,

0xf9b5,	// (0x00021a9a) slider_form_pane_g

0xab52,	// (0x0001cc37) list_form_graphic_pane_ParamLimits

0xab52,	// (0x0001cc37) list_form_graphic_pane

0x3c67,	// (0x00015d4c) list_form_graphic_pane_g1

0x3c6f,	// (0x00015d54) list_form_graphic_pane_t1_ParamLimits

0x3c6f,	// (0x00015d54) list_form_graphic_pane_t1

0xdd6b,	// (0x0001fe50) list_highlight_pane_cp5_ParamLimits

0xdd6b,	// (0x0001fe50) list_highlight_pane_cp5

0xab67,	// (0x0001cc4c) find_pane_g1

0xea6a,	// (0x00020b4f) input_find_pane

0xab72,	// (0x0001cc57) input_find_pane_g1_ParamLimits

0xab72,	// (0x0001cc57) input_find_pane_g1

0x3c99,	// (0x00015d7e) input_find_pane_t1_ParamLimits

0x3c99,	// (0x00015d7e) input_find_pane_t1

0x3cae,	// (0x00015d93) input_find_pane_t2_ParamLimits

0x3cae,	// (0x00015d93) input_find_pane_t2

0x0001,

0xf6e5,	// (0x000217ca) input_find_pane_t_ParamLimits

0xf6e5,	// (0x000217ca) input_find_pane_t

0xea73,	// (0x00020b58) input_focus_pane_cp5_ParamLimits

0xea73,	// (0x00020b58) input_focus_pane_cp5

0xdd55,	// (0x0001fe3a) bg_popup_window_pane_cp2_ParamLimits

0xdd55,	// (0x0001fe3a) bg_popup_window_pane_cp2

0xea8d,	// (0x00020b72) listscroll_menu_pane_ParamLimits

0xea8d,	// (0x00020b72) listscroll_menu_pane

0xea99,	// (0x00020b7e) popup_submenu_window_ParamLimits

0xea99,	// (0x00020b7e) popup_submenu_window

0xeabd,	// (0x00020ba2) find_popup_pane_g1

0xeac5,	// (0x00020baa) input_popup_find_pane_cp

0xea73,	// (0x00020b58) input_focus_pane_cp4_ParamLimits

0xea73,	// (0x00020b58) input_focus_pane_cp4

0xeacf,	// (0x00020bb4) input_popup_find_pane_t1_ParamLimits

0xeacf,	// (0x00020bb4) input_popup_find_pane_t1

0xdd07,	// (0x0001fdec) bg_popup_sub_pane_cp

0xeafd,	// (0x00020be2) listscroll_popup_sub_pane

0xeb05,	// (0x00020bea) list_submenu_pane_ParamLimits

0xeb05,	// (0x00020bea) list_submenu_pane

0xeb16,	// (0x00020bfb) scroll_pane_cp4

0xea56,	// (0x00020b3b) list_single_popup_submenu_pane_ParamLimits

0xea56,	// (0x00020b3b) list_single_popup_submenu_pane

0xeb1e,	// (0x00020c03) list_single_popup_submenu_pane_g1

0xeb26,	// (0x00020c0b) list_single_popup_submenu_pane_t1_ParamLimits

0xeb26,	// (0x00020c0b) list_single_popup_submenu_pane_t1

0xdd55,	// (0x0001fe3a) bg_active_tab_pane_cp1_ParamLimits

0xdd55,	// (0x0001fe3a) bg_active_tab_pane_cp1

0x222e,	// (0x00014313) tabs_2_active_pane_g1

0xb418,	// (0x0001d4fd) tabs_2_active_pane_t1

0xdd55,	// (0x0001fe3a) bg_passive_tab_pane_cp1_ParamLimits

0xdd55,	// (0x0001fe3a) bg_passive_tab_pane_cp1

0x222e,	// (0x00014313) tabs_2_passive_pane_g1

0xb418,	// (0x0001d4fd) tabs_2_passive_pane_t1

0xdd6b,	// (0x0001fe50) bg_active_tab_pane_cp4

0xb42e,	// (0x0001d513) tabs_2_long_active_pane_t1

0x0dc3,	// (0x00012ea8) bg_passive_tab_pane_cp4

0x160f,	// (0x000136f4) list_single_midp_graphic_pane_g4_ParamLimits

0xdd6b,	// (0x0001fe50) bg_active_tab_pane_cp5

0xb445,	// (0x0001d52a) tabs_3_long_active_pane_t1

0x0dc3,	// (0x00012ea8) bg_passive_tab_pane_cp5

0x160f,	// (0x000136f4) list_single_midp_graphic_pane_g4

0xdd6b,	// (0x0001fe50) bg_popup_window_pane_cp13_ParamLimits

0xdd6b,	// (0x0001fe50) bg_popup_window_pane_cp13

0xeb44,	// (0x00020c29) listscroll_popup_fast_pane_ParamLimits

0xeb44,	// (0x00020c29) listscroll_popup_fast_pane

0xeb53,	// (0x00020c38) grid_popup_fast_pane_ParamLimits

0xeb53,	// (0x00020c38) grid_popup_fast_pane

0xeb65,	// (0x00020c4a) scroll_pane_cp9_ParamLimits

0xeb65,	// (0x00020c4a) scroll_pane_cp9

0x6c74,	// (0x00018d59) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6c74,	// (0x00018d59) list_single_graphic_hl_pane_t1_cp2

0xeb89,	// (0x00020c6e) input_focus_pane_cp20_ParamLimits

0xeb89,	// (0x00020c6e) input_focus_pane_cp20

0xeb97,	// (0x00020c7c) query_popup_data_pane_t1_ParamLimits

0xeb97,	// (0x00020c7c) query_popup_data_pane_t1

0xebaa,	// (0x00020c8f) query_popup_data_pane_t2_ParamLimits

0xebaa,	// (0x00020c8f) query_popup_data_pane_t2

0xebf0,	// (0x00020cd5) query_popup_data_pane_t3_ParamLimits

0xebf0,	// (0x00020cd5) query_popup_data_pane_t3

0xec31,	// (0x00020d16) query_popup_data_pane_t4_ParamLimits

0xec31,	// (0x00020d16) query_popup_data_pane_t4

0xec6d,	// (0x00020d52) query_popup_data_pane_t5_ParamLimits

0xec6d,	// (0x00020d52) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x000217cf) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x000217cf) query_popup_data_pane_t

0xea0e,	// (0x00020af3) bg_set_opt_pane_g1

0xea16,	// (0x00020afb) bg_set_opt_pane_g2

0xea1e,	// (0x00020b03) bg_set_opt_pane_g3

0xea26,	// (0x00020b0b) bg_set_opt_pane_g4

0xea2e,	// (0x00020b13) bg_set_opt_pane_g5

0xea36,	// (0x00020b1b) bg_set_opt_pane_g6

0xea3e,	// (0x00020b23) bg_set_opt_pane_g7

0xea46,	// (0x00020b2b) bg_set_opt_pane_g8

0xea4e,	// (0x00020b33) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x000217da) bg_set_opt_pane_g

0x4a05,	// (0x00016aea) control_top_pane_stacon_ParamLimits

0x4a05,	// (0x00016aea) control_top_pane_stacon

0x4a58,	// (0x00016b3d) signal_pane_stacon_ParamLimits

0x4a58,	// (0x00016b3d) signal_pane_stacon

0xf08b,	// (0x00021170) stacon_top_pane_g1_ParamLimits

0xf08b,	// (0x00021170) stacon_top_pane_g1

0x4a7d,	// (0x00016b62) title_pane_stacon_ParamLimits

0x4a7d,	// (0x00016b62) title_pane_stacon

0x4a9f,	// (0x00016b84) uni_indicator_pane_stacon_ParamLimits

0x4a9f,	// (0x00016b84) uni_indicator_pane_stacon

0x4ab4,	// (0x00016b99) battery_pane_stacon_ParamLimits

0x4ab4,	// (0x00016b99) battery_pane_stacon

0x4af4,	// (0x00016bd9) control_bottom_pane_stacon_ParamLimits

0x4af4,	// (0x00016bd9) control_bottom_pane_stacon

0x4b13,	// (0x00016bf8) navi_pane_stacon_ParamLimits

0x4b13,	// (0x00016bf8) navi_pane_stacon

0xf0ad,	// (0x00021192) stacon_bottom_pane_g1_ParamLimits

0xf0ad,	// (0x00021192) stacon_bottom_pane_g1

0xeca4,	// (0x00020d89) aid_levels_signal_lsc_ParamLimits

0xeca4,	// (0x00020d89) aid_levels_signal_lsc

0x47d1,	// (0x000168b6) signal_pane_stacon_g1_ParamLimits

0x47d1,	// (0x000168b6) signal_pane_stacon_g1

0x47dd,	// (0x000168c2) signal_pane_stacon_g2_ParamLimits

0x47dd,	// (0x000168c2) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x000217ed) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x000217ed) signal_pane_stacon_g

0x4811,	// (0x000168f6) title_pane_stacon_t1_ParamLimits

0x4811,	// (0x000168f6) title_pane_stacon_t1

0xecbe,	// (0x00020da3) uni_indicator_pane_stacon_g1

0xecc8,	// (0x00020dad) uni_indicator_pane_stacon_g2

0xecd2,	// (0x00020db7) uni_indicator_pane_stacon_g3

0xecdc,	// (0x00020dc1) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x000217f9) uni_indicator_pane_stacon_g

0x4836,	// (0x0001691b) control_top_pane_stacon_g1

0x483e,	// (0x00016923) control_top_pane_stacon_t1_ParamLimits

0x483e,	// (0x00016923) control_top_pane_stacon_t1

0xece6,	// (0x00020dcb) aid_levels_battery_lsc_ParamLimits

0xece6,	// (0x00020dcb) aid_levels_battery_lsc

0x486f,	// (0x00016954) battery_pane_stacon_g1_ParamLimits

0x486f,	// (0x00016954) battery_pane_stacon_g1

0x487b,	// (0x00016960) battery_pane_stacon_g2_ParamLimits

0x487b,	// (0x00016960) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x00021802) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x00021802) battery_pane_stacon_g

0x48aa,	// (0x0001698f) navi_icon_pane_stacon

0x48ba,	// (0x0001699f) navi_navi_pane_stacon

0x48aa,	// (0x0001698f) navi_text_pane_stacon

0x4836,	// (0x0001691b) control_bottom_pane_stacon_g1

0x48ca,	// (0x000169af) control_bottom_pane_stacon_t1_ParamLimits

0x48ca,	// (0x000169af) control_bottom_pane_stacon_t1

0xb45b,	// (0x0001d540) grid_app_pane_ParamLimits

0xb45b,	// (0x0001d540) grid_app_pane

0xb489,	// (0x0001d56e) scroll_pane_cp15_ParamLimits

0xb489,	// (0x0001d56e) scroll_pane_cp15

0xb4a0,	// (0x0001d585) cell_app_pane_ParamLimits

0xb4a0,	// (0x0001d585) cell_app_pane

0xb4df,	// (0x0001d5c4) cell_app_pane_g1_ParamLimits

0xb4df,	// (0x0001d5c4) cell_app_pane_g1

0xed0e,	// (0x00020df3) cell_app_pane_g2_ParamLimits

0xed0e,	// (0x00020df3) cell_app_pane_g2

0x0001,

0xf722,	// (0x00021807) cell_app_pane_g_ParamLimits

0xf722,	// (0x00021807) cell_app_pane_g

0xed1a,	// (0x00020dff) cell_app_pane_t1_ParamLimits

0xed1a,	// (0x00020dff) cell_app_pane_t1

0xed2c,	// (0x00020e11) grid_highlight_pane_ParamLimits

0xed2c,	// (0x00020e11) grid_highlight_pane

0xea0e,	// (0x00020af3) cell_highlight_pane_g1

0xea16,	// (0x00020afb) cell_highlight_pane_g2

0xea1e,	// (0x00020b03) cell_highlight_pane_g3

0xea26,	// (0x00020b0b) cell_highlight_pane_g4

0xea2e,	// (0x00020b13) cell_highlight_pane_g5

0xea36,	// (0x00020b1b) cell_highlight_pane_g6

0xea3e,	// (0x00020b23) cell_highlight_pane_g7

0xea46,	// (0x00020b2b) cell_highlight_pane_g8

0xea4e,	// (0x00020b33) cell_highlight_pane_g9

0xdc85,	// (0x0001fd6a) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x000217b5) cell_highlight_pane_g

0xed3d,	// (0x00020e22) bg_scroll_pane

0x490e,	// (0x000169f3) scroll_handle_pane

0xed84,	// (0x00020e69) scroll_bg_pane_g1

0xed99,	// (0x00020e7e) scroll_bg_pane_g2

0xedb1,	// (0x00020e96) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x0002180c) scroll_bg_pane_g

0xedc6,	// (0x00020eab) scroll_handle_focus_pane_ParamLimits

0xedc6,	// (0x00020eab) scroll_handle_focus_pane

0xed84,	// (0x00020e69) scroll_handle_pane_g1

0xedd3,	// (0x00020eb8) scroll_handle_pane_g2

0xedb1,	// (0x00020e96) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x00021813) scroll_handle_pane_g

0xea73,	// (0x00020b58) bg_popup_sub_pane_cp21_ParamLimits

0xea73,	// (0x00020b58) bg_popup_sub_pane_cp21

0xede7,	// (0x00020ecc) popup_fep_japan_predictive_window_t1_ParamLimits

0xede7,	// (0x00020ecc) popup_fep_japan_predictive_window_t1

0xedfe,	// (0x00020ee3) popup_fep_japan_predictive_window_t2_ParamLimits

0xedfe,	// (0x00020ee3) popup_fep_japan_predictive_window_t2

0xee31,	// (0x00020f16) popup_fep_japan_predictive_window_t3_ParamLimits

0xee31,	// (0x00020f16) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x0002181a) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x0002181a) popup_fep_japan_predictive_window_t

0xdd07,	// (0x0001fdec) bg_popup_sub_pane_cp23

0xee68,	// (0x00020f4d) listscroll_japin_cand_pane

0xee70,	// (0x00020f55) popup_fep_japan_candidate_window_t1

0xee7e,	// (0x00020f63) candidate_pane_ParamLimits

0xee7e,	// (0x00020f63) candidate_pane

0xee91,	// (0x00020f76) scroll_pane_cp30

0xee99,	// (0x00020f7e) list_single_popup_jap_candidate_pane_ParamLimits

0xee99,	// (0x00020f7e) list_single_popup_jap_candidate_pane

0xdd07,	// (0x0001fdec) list_highlight_pane_cp30

0xeeae,	// (0x00020f93) list_single_popup_jap_candidate_pane_t1

0xb50c,	// (0x0001d5f1) level_1_signal

0xb51e,	// (0x0001d603) level_2_signal

0xb531,	// (0x0001d616) level_3_signal

0xb544,	// (0x0001d629) level_4_signal

0xb557,	// (0x0001d63c) level_5_signal

0xb56a,	// (0x0001d64f) level_6_signal

0xb57d,	// (0x0001d662) level_7_signal

0xb50c,	// (0x0001d5f1) level_1_battery

0xb51e,	// (0x0001d603) level_2_battery

0xb531,	// (0x0001d616) level_3_battery

0xb544,	// (0x0001d629) level_4_battery

0xb557,	// (0x0001d63c) level_5_battery

0xb56a,	// (0x0001d64f) level_6_battery

0xb57d,	// (0x0001d662) level_7_battery

0xeed5,	// (0x00020fba) list_menu_pane_ParamLimits

0xeed5,	// (0x00020fba) list_menu_pane

0xeee6,	// (0x00020fcb) scroll_pane_cp25_ParamLimits

0xeee6,	// (0x00020fcb) scroll_pane_cp25

0xb590,	// (0x0001d675) list_double2_graphic_pane_cp2_ParamLimits

0xb590,	// (0x0001d675) list_double2_graphic_pane_cp2

0xb590,	// (0x0001d675) list_double2_large_graphic_pane_cp2_ParamLimits

0xb590,	// (0x0001d675) list_double2_large_graphic_pane_cp2

0xb590,	// (0x0001d675) list_double2_pane_cp2_ParamLimits

0xb590,	// (0x0001d675) list_double2_pane_cp2

0xb590,	// (0x0001d675) list_double_graphic_pane_cp2_ParamLimits

0xb590,	// (0x0001d675) list_double_graphic_pane_cp2

0xb590,	// (0x0001d675) list_double_large_graphic_pane_cp2_ParamLimits

0xb590,	// (0x0001d675) list_double_large_graphic_pane_cp2

0xb590,	// (0x0001d675) list_double_number_pane_cp2_ParamLimits

0xb590,	// (0x0001d675) list_double_number_pane_cp2

0xb590,	// (0x0001d675) list_double_pane_cp2_ParamLimits

0xb590,	// (0x0001d675) list_double_pane_cp2

0xb5ab,	// (0x0001d690) list_single_2graphic_pane_cp2_ParamLimits

0xb5ab,	// (0x0001d690) list_single_2graphic_pane_cp2

0xb5ab,	// (0x0001d690) list_single_graphic_heading_pane_cp2_ParamLimits

0xb5ab,	// (0x0001d690) list_single_graphic_heading_pane_cp2

0xb5ab,	// (0x0001d690) list_single_graphic_pane_cp2_ParamLimits

0xb5ab,	// (0x0001d690) list_single_graphic_pane_cp2

0xb5ab,	// (0x0001d690) list_single_heading_pane_cp2_ParamLimits

0xb5ab,	// (0x0001d690) list_single_heading_pane_cp2

0xb5bc,	// (0x0001d6a1) list_single_large_graphic_pane_cp2_ParamLimits

0xb5bc,	// (0x0001d6a1) list_single_large_graphic_pane_cp2

0xb5ab,	// (0x0001d690) list_single_number_heading_pane_cp2_ParamLimits

0xb5ab,	// (0x0001d690) list_single_number_heading_pane_cp2

0xb5ab,	// (0x0001d690) list_single_number_pane_cp2_ParamLimits

0xb5ab,	// (0x0001d690) list_single_number_pane_cp2

0xb5ab,	// (0x0001d690) list_single_pane_cp2_ParamLimits

0xb5ab,	// (0x0001d690) list_single_pane_cp2

0xef08,	// (0x00020fed) bg_popup_sub_pane_cp22

0x49bd,	// (0x00016aa2) popup_side_volume_key_window_g1

0x49e1,	// (0x00016ac6) popup_side_volume_key_window_t1

0x49fd,	// (0x00016ae2) volume_small_pane_cp1

0xdd55,	// (0x0001fe3a) bg_popup_sub_pane_cp24_ParamLimits

0xdd55,	// (0x0001fe3a) bg_popup_sub_pane_cp24

0xef1e,	// (0x00021003) fep_china_uni_candidate_pane_ParamLimits

0xef1e,	// (0x00021003) fep_china_uni_candidate_pane

0xef50,	// (0x00021035) fep_china_uni_entry_pane

0xef60,	// (0x00021045) popup_fep_china_uni_window_g1

0xef7c,	// (0x00021061) fep_china_uni_entry_pane_g1

0xef84,	// (0x00021069) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x00021847) fep_china_uni_entry_pane_g

0xef8c,	// (0x00021071) fep_entry_item_pane

0xef96,	// (0x0002107b) fep_candidate_item_pane

0xef9e,	// (0x00021083) fep_china_uni_candidate_pane_g1

0xefa6,	// (0x0002108b) fep_china_uni_candidate_pane_g2

0xefae,	// (0x00021093) fep_china_uni_candidate_pane_g3

0xefb6,	// (0x0002109b) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x0002184c) fep_china_uni_candidate_pane_g

0xdc85,	// (0x0001fd6a) fep_entry_item_pane_g1

0xefbe,	// (0x000210a3) fep_entry_item_pane_t1_ParamLimits

0xefbe,	// (0x000210a3) fep_entry_item_pane_t1

0xefd4,	// (0x000210b9) fep_candidate_item_pane_t1_ParamLimits

0xefd4,	// (0x000210b9) fep_candidate_item_pane_t1

0xefe9,	// (0x000210ce) fep_candidate_item_pane_t2_ParamLimits

0xefe9,	// (0x000210ce) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x00021855) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x00021855) fep_candidate_item_pane_t

0xdd6b,	// (0x0001fe50) list_highlight_pane_cp31_ParamLimits

0xdd6b,	// (0x0001fe50) list_highlight_pane_cp31

0xeffb,	// (0x000210e0) level_1_signal_lsc

0xf004,	// (0x000210e9) level_2_signal_lsc

0xf00d,	// (0x000210f2) level_3_signal_lsc

0xf016,	// (0x000210fb) level_4_signal_lsc

0xf01f,	// (0x00021104) level_5_signal_lsc

0xf028,	// (0x0002110d) level_6_signal_lsc

0xf031,	// (0x00021116) level_7_signal_lsc

0xf031,	// (0x00021116) level_1_battery_lsc

0xf03a,	// (0x0002111f) level_2_battery_lsc

0xf043,	// (0x00021128) level_3_battery_lsc

0xf04c,	// (0x00021131) level_4_battery_lsc

0xf055,	// (0x0002113a) level_5_battery_lsc

0xf05e,	// (0x00021143) level_6_battery_lsc

0xeffb,	// (0x000210e0) level_7_battery_lsc

0xf067,	// (0x0002114c) scroll_handle_focus_pane_g1

0xf070,	// (0x00021155) scroll_handle_focus_pane_g2

0xf079,	// (0x0002115e) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x0002185a) scroll_handle_focus_pane_g

0x3cc3,	// (0x00015da8) list_single_2graphic_pane_g1_ParamLimits

0x3cc3,	// (0x00015da8) list_single_2graphic_pane_g1

0xa6d9,	// (0x0001c7be) list_single_2graphic_pane_g2_ParamLimits

0xa6d9,	// (0x0001c7be) list_single_2graphic_pane_g2

0x3d8b,	// (0x00015e70) list_single_2graphic_pane_g3_ParamLimits

0x3d8b,	// (0x00015e70) list_single_2graphic_pane_g3

0xab7e,	// (0x0001cc63) list_single_2graphic_pane_g4_ParamLimits

0xab7e,	// (0x0001cc63) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x00021861) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x00021861) list_single_2graphic_pane_g

0xab8a,	// (0x0001cc6f) list_single_2graphic_pane_t1_ParamLimits

0xab8a,	// (0x0001cc6f) list_single_2graphic_pane_t1

0xabb8,	// (0x0001cc9d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xabb8,	// (0x0001cc9d) list_double2_graphic_large_graphic_pane_g1

0xa878,	// (0x0001c95d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa878,	// (0x0001c95d) list_double2_graphic_large_graphic_pane_g2

0xa889,	// (0x0001c96e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa889,	// (0x0001c96e) list_double2_graphic_large_graphic_pane_g3

0xabc8,	// (0x0001ccad) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xabc8,	// (0x0001ccad) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x0002186a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x0002186a) list_double2_graphic_large_graphic_pane_g

0xabd4,	// (0x0001ccb9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xabd4,	// (0x0001ccb9) list_double2_graphic_large_graphic_pane_t1

0xabea,	// (0x0001cccf) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xabea,	// (0x0001cccf) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x00021873) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x00021873) list_double2_graphic_large_graphic_pane_t

0xf154,	// (0x00021239) popup_fast_swap_window_ParamLimits

0xf154,	// (0x00021239) popup_fast_swap_window

0xf170,	// (0x00021255) popup_side_volume_key_window

0xf18a,	// (0x0002126f) stacon_top_pane

0xf194,	// (0x00021279) status_pane_ParamLimits

0xf194,	// (0x00021279) status_pane

0xf18a,	// (0x0002126f) status_small_pane

0xdd07,	// (0x0001fdec) control_pane

0xdd07,	// (0x0001fdec) stacon_bottom_pane

0xe2b2,	// (0x00020397) scroll_pane_cp121

0xe9aa,	// (0x00020a8f) set_content_pane

0x223f,	// (0x00014324) bg_active_tab_pane_g1_cp1

0xf082,	// (0x00021167) bg_active_tab_pane_g2_cp1

0x2236,	// (0x0001431b) bg_active_tab_pane_g3_cp1

0x223f,	// (0x00014324) bg_passive_tab_pane_g1_cp1

0xf082,	// (0x00021167) bg_passive_tab_pane_g2_cp1

0x2236,	// (0x0001431b) bg_passive_tab_pane_g3_cp1

0xb615,	// (0x0001d6fa) bg_active_tab_pane_g1_cp2

0xf082,	// (0x00021167) bg_active_tab_pane_g2_cp2

0xb61e,	// (0x0001d703) bg_active_tab_pane_g3_cp2

0xb615,	// (0x0001d6fa) bg_passive_tab_pane_g1_cp2

0xf082,	// (0x00021167) bg_passive_tab_pane_g2_cp2

0xb61e,	// (0x0001d703) bg_passive_tab_pane_g3_cp2

0xb627,	// (0x0001d70c) bg_active_tab_pane_g1_cp3

0xf082,	// (0x00021167) bg_active_tab_pane_g2_cp3

0xb630,	// (0x0001d715) bg_active_tab_pane_g3_cp3

0xb627,	// (0x0001d70c) bg_passive_tab_pane_g1_cp3

0xf082,	// (0x00021167) bg_passive_tab_pane_g2_cp3

0xb630,	// (0x0001d715) bg_passive_tab_pane_g3_cp3

0xb639,	// (0x0001d71e) bg_active_tab_pane_g1_cp4

0xf082,	// (0x00021167) bg_active_tab_pane_g2_cp4

0xb642,	// (0x0001d727) bg_active_tab_pane_g3_cp4

0xb639,	// (0x0001d71e) bg_passive_tab_pane_g1_cp4

0xf082,	// (0x00021167) bg_passive_tab_pane_g2_cp4

0xb642,	// (0x0001d727) bg_passive_tab_pane_g3_cp4

0xf0c9,	// (0x000211ae) bg_active_tab_pane_g1_cp5

0xf082,	// (0x00021167) bg_active_tab_pane_g2_cp5

0xf0d2,	// (0x000211b7) bg_active_tab_pane_g3_cp5

0xf0c9,	// (0x000211ae) bg_passive_tab_pane_g1_cp5

0xf082,	// (0x00021167) bg_passive_tab_pane_g2_cp5

0xf0d2,	// (0x000211b7) bg_passive_tab_pane_g3_cp5

0xb64b,	// (0x0001d730) list_set_graphic_pane_ParamLimits

0xb64b,	// (0x0001d730) list_set_graphic_pane

0xdd07,	// (0x0001fdec) bg_set_opt_pane_cp4

0xf0db,	// (0x000211c0) list_set_graphic_pane_g1_ParamLimits

0xf0db,	// (0x000211c0) list_set_graphic_pane_g1

0xf0e7,	// (0x000211cc) list_set_graphic_pane_g2_ParamLimits

0xf0e7,	// (0x000211cc) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x00021878) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x00021878) list_set_graphic_pane_g

0x0009,

0xfaeb,	// (0x00021bd0) volume_small_pane_cp_g

0xf109,	// (0x000211ee) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xf109,	// (0x000211ee) list_double2_large_graphic_pane_g1_cp2

0xf115,	// (0x000211fa) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf115,	// (0x000211fa) list_double2_large_graphic_pane_g2_cp2

0xf124,	// (0x00021209) list_double2_large_graphic_pane_g3_cp2

0xf12c,	// (0x00021211) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf12c,	// (0x00021211) list_double2_large_graphic_pane_t1_cp2

0xf142,	// (0x00021227) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf142,	// (0x00021227) list_double2_large_graphic_pane_t2_cp2

0x1f93,	// (0x00014078) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x1f93,	// (0x00014078) list_double_large_graphic_pane_g1_cp2

0x1fa4,	// (0x00014089) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x1fa4,	// (0x00014089) list_double_large_graphic_pane_g2_cp2

0xf26f,	// (0x00021354) list_double_large_graphic_pane_g3_cp2

0x1fb3,	// (0x00014098) list_double_large_graphic_pane_g4_cp

0x1fbb,	// (0x000140a0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x1fbb,	// (0x000140a0) list_double_large_graphic_pane_t1_cp2

0x1fd2,	// (0x000140b7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x1fd2,	// (0x000140b7) list_double_large_graphic_pane_t2_cp2

0xf1a2,	// (0x00021287) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf1a2,	// (0x00021287) list_double2_graphic_pane_g1_cp2

0xf1ae,	// (0x00021293) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf1ae,	// (0x00021293) list_double2_graphic_pane_g2_cp2

0xf1bd,	// (0x000212a2) list_double2_graphic_pane_g3_cp2

0xf1c5,	// (0x000212aa) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf1c5,	// (0x000212aa) list_double2_graphic_pane_t1_cp2

0xf1db,	// (0x000212c0) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf1db,	// (0x000212c0) list_double2_graphic_pane_t2_cp2

0xf1ed,	// (0x000212d2) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf1ed,	// (0x000212d2) list_single_number_heading_pane_g1_cp2

0xf1f9,	// (0x000212de) list_single_number_heading_pane_g2_cp2

0xf201,	// (0x000212e6) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf201,	// (0x000212e6) list_single_number_heading_pane_t1_cp2

0xf217,	// (0x000212fc) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf217,	// (0x000212fc) list_single_number_heading_pane_t2_cp2

0xf229,	// (0x0002130e) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf229,	// (0x0002130e) list_single_number_heading_pane_t3_cp2

0xf1ed,	// (0x000212d2) list_single_heading_pane_g1_cp2_ParamLimits

0xf1ed,	// (0x000212d2) list_single_heading_pane_g1_cp2

0xf1f9,	// (0x000212de) list_single_heading_pane_g2_cp2

0xf201,	// (0x000212e6) list_single_heading_pane_t1_cp2_ParamLimits

0xf201,	// (0x000212e6) list_single_heading_pane_t1_cp2

0x1d9d,	// (0x00013e82) list_single_heading_pane_t2_cp2_ParamLimits

0x1d9d,	// (0x00013e82) list_single_heading_pane_t2_cp2

0x1d22,	// (0x00013e07) list_double_graphic_pane_g1_cp2_ParamLimits

0x1d22,	// (0x00013e07) list_double_graphic_pane_g1_cp2

0x1d2e,	// (0x00013e13) list_double_graphic_pane_g2_cp2_ParamLimits

0x1d2e,	// (0x00013e13) list_double_graphic_pane_g2_cp2

0x1d3d,	// (0x00013e22) list_double_graphic_pane_g3_cp2

0x1d45,	// (0x00013e2a) list_double_graphic_pane_t1_cp2_ParamLimits

0x1d45,	// (0x00013e2a) list_double_graphic_pane_t1_cp2

0x1d5b,	// (0x00013e40) list_double_graphic_pane_t2_cp2_ParamLimits

0x1d5b,	// (0x00013e40) list_double_graphic_pane_t2_cp2

0xf263,	// (0x00021348) list_double_number_pane_g1_cp2_ParamLimits

0xf263,	// (0x00021348) list_double_number_pane_g1_cp2

0xf26f,	// (0x00021354) list_double_number_pane_g2_cp2

0x1ce8,	// (0x00013dcd) list_double_number_pane_t1_cp2_ParamLimits

0x1ce8,	// (0x00013dcd) list_double_number_pane_t1_cp2

0x1cfa,	// (0x00013ddf) list_double_number_pane_t2_cp2_ParamLimits

0x1cfa,	// (0x00013ddf) list_double_number_pane_t2_cp2

0x1d10,	// (0x00013df5) list_double_number_pane_t3_cp2_ParamLimits

0x1d10,	// (0x00013df5) list_double_number_pane_t3_cp2

0x1c60,	// (0x00013d45) list_single_graphic_pane_g1_cp2_ParamLimits

0x1c60,	// (0x00013d45) list_single_graphic_pane_g1_cp2

0xf1ed,	// (0x000212d2) list_single_graphic_pane_g2_cp2_ParamLimits

0xf1ed,	// (0x000212d2) list_single_graphic_pane_g2_cp2

0xf1f9,	// (0x000212de) list_single_graphic_pane_g3_cp2

0x1c38,	// (0x00013d1d) list_single_graphic_pane_t1_cp2_ParamLimits

0x1c38,	// (0x00013d1d) list_single_graphic_pane_t1_cp2

0xf1ed,	// (0x000212d2) list_single_number_pane_g1_cp2_ParamLimits

0xf1ed,	// (0x000212d2) list_single_number_pane_g1_cp2

0xf1f9,	// (0x000212de) list_single_number_pane_g2_cp2

0x1c38,	// (0x00013d1d) list_single_number_pane_t1_cp2_ParamLimits

0x1c38,	// (0x00013d1d) list_single_number_pane_t1_cp2

0x1c4e,	// (0x00013d33) list_single_number_pane_t2_cp2_ParamLimits

0x1c4e,	// (0x00013d33) list_single_number_pane_t2_cp2

0xf115,	// (0x000211fa) list_double2_pane_g1_cp2_ParamLimits

0xf115,	// (0x000211fa) list_double2_pane_g1_cp2

0xf124,	// (0x00021209) list_double2_pane_g2_cp2

0xf23b,	// (0x00021320) list_double2_pane_t1_cp2_ParamLimits

0xf23b,	// (0x00021320) list_double2_pane_t1_cp2

0xf251,	// (0x00021336) list_double2_pane_t2_cp2_ParamLimits

0xf251,	// (0x00021336) list_double2_pane_t2_cp2

0xf263,	// (0x00021348) list_double_pane_g1_cp2_ParamLimits

0xf263,	// (0x00021348) list_double_pane_g1_cp2

0xf26f,	// (0x00021354) list_double_pane_g2_cp2

0xf277,	// (0x0002135c) list_double_pane_t1_cp2_ParamLimits

0xf277,	// (0x0002135c) list_double_pane_t1_cp2

0xf28d,	// (0x00021372) list_double_pane_t2_cp2_ParamLimits

0xf28d,	// (0x00021372) list_double_pane_t2_cp2

0xf2b5,	// (0x0002139a) list_single_pane_cp2_g3

0xf1ed,	// (0x000212d2) list_single_pane_g1_cp2_ParamLimits

0xf1ed,	// (0x000212d2) list_single_pane_g1_cp2

0xf1f9,	// (0x000212de) list_single_pane_g2_cp2

0xf2c5,	// (0x000213aa) list_single_pane_t1_cp2_ParamLimits

0xf2c5,	// (0x000213aa) list_single_pane_t1_cp2

0xf2dd,	// (0x000213c2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xf2dd,	// (0x000213c2) list_single_large_graphic_pane_g1_cp2

0xf2e9,	// (0x000213ce) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf2e9,	// (0x000213ce) list_single_large_graphic_pane_g2_cp2

0xf2f5,	// (0x000213da) list_single_large_graphic_pane_g3_cp2

0xf2fd,	// (0x000213e2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xf2fd,	// (0x000213e2) list_single_large_graphic_pane_g4_cp1

0xf317,	// (0x000213fc) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf317,	// (0x000213fc) list_single_large_graphic_pane_t1_cp2

0x1c1a,	// (0x00013cff) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x1c1a,	// (0x00013cff) list_single_graphic_heading_pane_g1_cp2

0x1bf5,	// (0x00013cda) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x1bf5,	// (0x00013cda) list_single_graphic_heading_pane_g4_cp2

0xf1f9,	// (0x000212de) list_single_graphic_heading_pane_g5_cp2

0xf201,	// (0x000212e6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xf201,	// (0x000212e6) list_single_graphic_heading_pane_t1_cp2

0x1c26,	// (0x00013d0b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x1c26,	// (0x00013d0b) list_single_graphic_heading_pane_t2_cp2

0x1be9,	// (0x00013cce) list_single_2graphic_pane_g1_cp2_ParamLimits

0x1be9,	// (0x00013cce) list_single_2graphic_pane_g1_cp2

0x1bf5,	// (0x00013cda) list_single_2graphic_pane_g2_cp2_ParamLimits

0x1bf5,	// (0x00013cda) list_single_2graphic_pane_g2_cp2

0xf1f9,	// (0x000212de) list_single_2graphic_pane_g3_cp2

0x160f,	// (0x000136f4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x160f,	// (0x000136f4) list_single_2graphic_pane_g4_cp2

0x1c04,	// (0x00013ce9) list_single_2graphic_pane_t1_cp2_ParamLimits

0x1c04,	// (0x00013ce9) list_single_2graphic_pane_t1_cp2

0xdc85,	// (0x0001fd6a) list_highlight_pane_g10_cp1

0x17fb,	// (0x000138e0) list_highlight_pane_g1_cp1

0x1803,	// (0x000138e8) list_highlight_pane_g2_cp1

0x180b,	// (0x000138f0) list_highlight_pane_g3_cp1

0x1813,	// (0x000138f8) list_highlight_pane_g4_cp1

0x181b,	// (0x00013900) list_highlight_pane_g5_cp1

0x1823,	// (0x00013908) list_highlight_pane_g6_cp1

0x182b,	// (0x00013910) list_highlight_pane_g7_cp1

0x1833,	// (0x00013918) list_highlight_pane_g8_cp1

0x183b,	// (0x00013920) list_highlight_pane_g9_cp1

0xc2e0,	// (0x0001e3c5) form_field_slider_pane_t3

0xc2ee,	// (0x0001e3d3) form_field_slider_pane_t4

0x1745,	// (0x0001382a) slider_form_pane_ParamLimits

0x1745,	// (0x0001382a) slider_form_pane

0xdd07,	// (0x0001fdec) control_abbreviations

0xdd07,	// (0x0001fdec) control_conventions

0xdd07,	// (0x0001fdec) control_definitions

0xdd07,	// (0x0001fdec) format_table_attribute

0x1de7,	// (0x00013ecc) bg_popup_preview_window_pane_g9

0xdd07,	// (0x0001fdec) format_table_data2

0xdd07,	// (0x0001fdec) format_table_data3

0xdd07,	// (0x0001fdec) format_table_data_example

0x0008,

0xdd07,	// (0x0001fdec) intro_purpose

0xf915,	// (0x000219fa) bg_popup_preview_window_pane_g

0xdd07,	// (0x0001fdec) texts_category

0xdd07,	// (0x0001fdec) texts_graphics

0xf32d,	// (0x00021412) text_digital

0xf33c,	// (0x00021421) text_primary

0xf34b,	// (0x00021430) text_primary_small

0xf35a,	// (0x0002143f) text_secondary

0xf369,	// (0x0002144e) text_title

0x231b,	// (0x00014400) bg_passive_tab_pane_g1_cp3_srt

0xf082,	// (0x00021167) bg_passive_tab_pane_g2_cp3_srt

0x2312,	// (0x000143f7) bg_passive_tab_pane_g3_cp3_srt

0xdd55,	// (0x0001fe3a) bg_active_tab_pane_cp3_srt_ParamLimits

0xdd55,	// (0x0001fe3a) bg_active_tab_pane_cp3_srt

0x2226,	// (0x0001430b) tabs_4_active_pane_srt_g1

0xb10b,	// (0x0001d1f0) tabs_4_active_pane_srt_t1_ParamLimits

0xb10b,	// (0x0001d1f0) tabs_4_active_pane_srt_t1

0x231b,	// (0x00014400) bg_active_tab_pane_g1_cp3_copy1

0xf082,	// (0x00021167) bg_active_tab_pane_g2_cp3_copy1

0x2312,	// (0x000143f7) bg_active_tab_pane_g3_cp3_copy1

0xdd6b,	// (0x0001fe50) tabs_2_long_active_pane_srt_ParamLimits

0xdd6b,	// (0x0001fe50) tabs_2_long_active_pane_srt

0xdd6b,	// (0x0001fe50) tabs_2_long_passive_pane_srt_ParamLimits

0xdd6b,	// (0x0001fe50) tabs_2_long_passive_pane_srt

0x0dc3,	// (0x00012ea8) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0dc3,	// (0x00012ea8) bg_passive_tab_pane_cp4_srt

0x21b3,	// (0x00014298) bg_passive_tab_pane_g1_cp4_srt

0xf082,	// (0x00021167) bg_passive_tab_pane_g2_cp4_srt

0x21aa,	// (0x0001428f) bg_passive_tab_pane_g3_cp4_srt

0xdd6b,	// (0x0001fe50) bg_active_tab_pane_cp4_srt_ParamLimits

0xdd6b,	// (0x0001fe50) bg_active_tab_pane_cp4_srt

0xb42e,	// (0x0001d513) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb42e,	// (0x0001d513) tabs_2_long_active_pane_srt_t1

0x21b3,	// (0x00014298) bg_active_tab_pane_g1_cp4_srt

0xf082,	// (0x00021167) bg_active_tab_pane_g2_cp4_srt

0x21aa,	// (0x0001428f) bg_active_tab_pane_g3_cp4_srt

0xdd55,	// (0x0001fe3a) tabs_3_long_active_pane_srt_ParamLimits

0xdd55,	// (0x0001fe3a) tabs_3_long_active_pane_srt

0xdd55,	// (0x0001fe3a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xdd55,	// (0x0001fe3a) tabs_3_long_passive_pane_cp_srt

0xdd55,	// (0x0001fe3a) tabs_3_long_passive_pane_srt_ParamLimits

0xdd55,	// (0x0001fe3a) tabs_3_long_passive_pane_srt

0x0dc3,	// (0x00012ea8) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0dc3,	// (0x00012ea8) bg_passive_tab_pane_cp5_srt

0xf0c9,	// (0x000211ae) bg_passive_tab_pane_g1_cp5_srt

0xf082,	// (0x00021167) bg_passive_tab_pane_g2_cp5_srt

0xf0d2,	// (0x000211b7) bg_passive_tab_pane_g3_cp5_srt

0xdd6b,	// (0x0001fe50) bg_active_tab_pane_cp5_srt_ParamLimits

0xdd6b,	// (0x0001fe50) bg_active_tab_pane_cp5_srt

0xb445,	// (0x0001d52a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb445,	// (0x0001d52a) tabs_3_long_active_pane_srt_t1

0xf0c9,	// (0x000211ae) bg_active_tab_pane_g1_cp5_srt

0xf082,	// (0x00021167) bg_active_tab_pane_g2_cp5_srt

0xf0d2,	// (0x000211b7) bg_active_tab_pane_g3_cp5_srt

0x219c,	// (0x00014281) navi_text_pane_srt_t1

0x2194,	// (0x00014279) navi_icon_pane_srt_g1

0xf481,	// (0x00021566) midp_editing_number_pane_srt

0xf378,	// (0x0002145d) midp_ticker_pane_srt

0xf489,	// (0x0002156e) midp_ticker_pane_srt_g1

0xf491,	// (0x00021576) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x00021897) midp_ticker_pane_srt_g

0xf499,	// (0x0002157e) midp_ticker_pane_srt_t1

0x2185,	// (0x0001426a) midp_editing_number_pane_t1_copy1

0xb65f,	// (0x0001d744) listscroll_midp_pane

0xb65f,	// (0x0001d744) midp_form_pane

0xf380,	// (0x00021465) midp_info_popup_window_ParamLimits

0xf380,	// (0x00021465) midp_info_popup_window

0xea73,	// (0x00020b58) bg_popup_sub_pane_cp50_ParamLimits

0xea73,	// (0x00020b58) bg_popup_sub_pane_cp50

0x1493,	// (0x00013578) listscroll_midp_info_pane_ParamLimits

0x1493,	// (0x00013578) listscroll_midp_info_pane

0x147b,	// (0x00013560) listscroll_form_midp_pane_ParamLimits

0x147b,	// (0x00013560) listscroll_form_midp_pane

0x1487,	// (0x0001356c) scroll_bar_cp050

0xc2d4,	// (0x0001e3b9) list_midp_pane

0x2c9e,	// (0x00014d83) signal_pane_g2_cp

0x13ad,	// (0x00013492) listscroll_midp_info_pane_t1_ParamLimits

0x13ad,	// (0x00013492) listscroll_midp_info_pane_t1

0x13c5,	// (0x000134aa) listscroll_midp_info_pane_t2_ParamLimits

0x13c5,	// (0x000134aa) listscroll_midp_info_pane_t2

0x1403,	// (0x000134e8) listscroll_midp_info_pane_t3_ParamLimits

0x1403,	// (0x000134e8) listscroll_midp_info_pane_t3

0x143d,	// (0x00013522) listscroll_midp_info_pane_t4_ParamLimits

0x143d,	// (0x00013522) listscroll_midp_info_pane_t4

0x0003,

0xf850,	// (0x00021935) listscroll_midp_info_pane_t_ParamLimits

0xf850,	// (0x00021935) listscroll_midp_info_pane_t

0xeb16,	// (0x00020bfb) scroll_pane_cp21

0x1351,	// (0x00013436) form_midp_field_choice_group_pane

0x135a,	// (0x0001343f) form_midp_field_text_pane

0x1393,	// (0x00013478) form_midp_field_time_pane

0x139b,	// (0x00013480) form_midp_gauge_slider_pane

0x13a4,	// (0x00013489) form_midp_gauge_wait_pane

0xdd07,	// (0x0001fdec) form_midp_image_pane

0xac19,	// (0x0001ccfe) list_single_midp_pane_ParamLimits

0xac19,	// (0x0001ccfe) list_single_midp_pane

0xc2b3,	// (0x0001e398) form_midp_field_text_pane_t1

0x11f1,	// (0x000132d6) input_focus_pane_cp050

0x1340,	// (0x00013425) list_midp_form_text_pane

0x130f,	// (0x000133f4) form_midp_field_choice_group_pane_t1

0x131d,	// (0x00013402) input_focus_pane_cp051

0x1331,	// (0x00013416) list_midp_choice_pane

0xdd07,	// (0x0001fdec) status_idle_pane

0x12f3,	// (0x000133d8) form_midp_field_time_pane_t1

0xdc85,	// (0x0001fd6a) wait_anim_pane_g2_copy1

0x1301,	// (0x000133e6) form_midp_field_time_pane_t2

0x0001,

0xf3eb,	// (0x000214d0) aid_navinavi_width_2_pane

0xf84b,	// (0x00021930) form_midp_field_time_pane_t

0xdd07,	// (0x0001fdec) input_focus_pane_cp052

0xdd07,	// (0x0001fdec) bg_input_focus_pane_cp040

0x12cf,	// (0x000133b4) form_midp_gauge_slider_pane_t1

0x12dd,	// (0x000133c2) form_midp_gauge_slider_pane_t2

0xc297,	// (0x0001e37c) form_midp_gauge_slider_pane_t3

0xc2a5,	// (0x0001e38a) form_midp_gauge_slider_pane_t4

0x0003,

0xf842,	// (0x00021927) form_midp_gauge_slider_pane_t

0x12eb,	// (0x000133d0) form_midp_slider_pane

0xdd6b,	// (0x0001fe50) bg_input_focus_pane_cp041_ParamLimits

0xdd6b,	// (0x0001fe50) bg_input_focus_pane_cp041

0x129f,	// (0x00013384) form_midp_gauge_wait_pane_t1_ParamLimits

0x129f,	// (0x00013384) form_midp_gauge_wait_pane_t1

0x12b1,	// (0x00013396) form_midp_gauge_wait_pane_t2_ParamLimits

0x12b1,	// (0x00013396) form_midp_gauge_wait_pane_t2

0x0001,

0xf83d,	// (0x00021922) form_midp_gauge_wait_pane_t_ParamLimits

0xf83d,	// (0x00021922) form_midp_gauge_wait_pane_t

0x12c3,	// (0x000133a8) form_midp_wait_pane_ParamLimits

0x12c3,	// (0x000133a8) form_midp_wait_pane

0x1269,	// (0x0001334e) form_midp_image_pane_g1

0x1272,	// (0x00013357) form_midp_image_pane_t1

0x1281,	// (0x00013366) form_midp_image_pane_t2

0x1290,	// (0x00013375) form_midp_image_pane_t3

0x0002,

0xf836,	// (0x0002191b) form_midp_image_pane_t

0x1251,	// (0x00013336) list_single_midp_pane_g1

0x3e1b,	// (0x00015f00) list_single_midp_pane_t1

0xc283,	// (0x0001e368) list_midp_form_item_pane_ParamLimits

0xc283,	// (0x0001e368) list_midp_form_item_pane

0xf393,	// (0x00021478) list_midp_form_item_pane_t1

0xf3a2,	// (0x00021487) midp_ticker_pane_g1

0xf3ae,	// (0x00021493) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x0002187d) midp_ticker_pane_g

0xf3ba,	// (0x0002149f) midp_ticker_pane_t1

0x2185,	// (0x0001426a) midp_editing_number_pane_t1

0x2298,	// (0x0001437d) midp_editing_number_pane

0x22a4,	// (0x00014389) midp_ticker_pane

0x2175,	// (0x0001425a) ai_message_heading_pane

0xdd07,	// (0x0001fdec) bg_popup_window_pane_cp14

0x217d,	// (0x00014262) listscroll_ai_message_pane

0x20ff,	// (0x000141e4) ai_message_heading_pane_g1_ParamLimits

0x20ff,	// (0x000141e4) ai_message_heading_pane_g1

0x210b,	// (0x000141f0) ai_message_heading_pane_g2_ParamLimits

0x210b,	// (0x000141f0) ai_message_heading_pane_g2

0x2117,	// (0x000141fc) ai_message_heading_pane_g3_ParamLimits

0x2117,	// (0x000141fc) ai_message_heading_pane_g3

0x2123,	// (0x00014208) ai_message_heading_pane_g4_ParamLimits

0x2123,	// (0x00014208) ai_message_heading_pane_g4

0x0003,

0xf977,	// (0x00021a5c) ai_message_heading_pane_g_ParamLimits

0xf977,	// (0x00021a5c) ai_message_heading_pane_g

0x212f,	// (0x00014214) ai_message_heading_pane_t1_ParamLimits

0x212f,	// (0x00014214) ai_message_heading_pane_t1

0x2149,	// (0x0001422e) ai_message_heading_pane_t2_ParamLimits

0x2149,	// (0x0001422e) ai_message_heading_pane_t2

0x0001,

0xf980,	// (0x00021a65) ai_message_heading_pane_t_ParamLimits

0xf980,	// (0x00021a65) ai_message_heading_pane_t

0x215b,	// (0x00014240) bg_popup_heading_pane_cp1_ParamLimits

0x215b,	// (0x00014240) bg_popup_heading_pane_cp1

0x20ed,	// (0x000141d2) list_ai_message_pane_ParamLimits

0x20ed,	// (0x000141d2) list_ai_message_pane

0xeb16,	// (0x00020bfb) scroll_pane_cp10

0x2089,	// (0x0001416e) list_ai_message_pane_g1

0x2091,	// (0x00014176) list_ai_message_pane_g2

0x0001,

0xf954,	// (0x00021a39) list_ai_message_pane_g

0x2099,	// (0x0001417e) list_ai_message_pane_t1_ParamLimits

0x2099,	// (0x0001417e) list_ai_message_pane_t1

0x20ae,	// (0x00014193) list_ai_message_pane_t2_ParamLimits

0x20ae,	// (0x00014193) list_ai_message_pane_t2

0x20c3,	// (0x000141a8) list_ai_message_pane_t3_ParamLimits

0x20c3,	// (0x000141a8) list_ai_message_pane_t3

0x20d8,	// (0x000141bd) list_ai_message_pane_t4_ParamLimits

0x20d8,	// (0x000141bd) list_ai_message_pane_t4

0x0003,

0xf959,	// (0x00021a3e) list_ai_message_pane_t_ParamLimits

0xf959,	// (0x00021a3e) list_ai_message_pane_t

0x2077,	// (0x0001415c) cell_ai_soft_ind_pane_ParamLimits

0x2077,	// (0x0001415c) cell_ai_soft_ind_pane

0xf3cc,	// (0x000214b1) cell_ai_soft_ind_pane_g1_ParamLimits

0xf3cc,	// (0x000214b1) cell_ai_soft_ind_pane_g1

0xdd07,	// (0x0001fdec) grid_highlight_cp1

0xf3d9,	// (0x000214be) text_secondary_cp56_ParamLimits

0xf3d9,	// (0x000214be) text_secondary_cp56

0x204c,	// (0x00014131) example_general_pane_ParamLimits

0x204c,	// (0x00014131) example_general_pane

0x2058,	// (0x0001413d) example_parent_pane_g1_ParamLimits

0x2058,	// (0x0001413d) example_parent_pane_g1

0x2064,	// (0x00014149) example_parent_pane_t1_ParamLimits

0x2064,	// (0x00014149) example_parent_pane_t1

0xbb77,	// (0x0001dc5c) popup_preview_text_window_ParamLimits

0xbb77,	// (0x0001dc5c) popup_preview_text_window

0xf2bd,	// (0x000213a2) list_single_pane_cp2_g4

0xdf72,	// (0x00020057) bg_popup_preview_window_pane_ParamLimits

0xdf72,	// (0x00020057) bg_popup_preview_window_pane

0x1def,	// (0x00013ed4) popup_preview_text_window_t1_ParamLimits

0x1def,	// (0x00013ed4) popup_preview_text_window_t1

0x1e0d,	// (0x00013ef2) popup_preview_text_window_t2_ParamLimits

0x1e0d,	// (0x00013ef2) popup_preview_text_window_t2

0x1e56,	// (0x00013f3b) popup_preview_text_window_t3_ParamLimits

0x1e56,	// (0x00013f3b) popup_preview_text_window_t3

0x1e9b,	// (0x00013f80) popup_preview_text_window_t4_ParamLimits

0x1e9b,	// (0x00013f80) popup_preview_text_window_t4

0x0004,

0xf928,	// (0x00021a0d) popup_preview_text_window_t_ParamLimits

0xf928,	// (0x00021a0d) popup_preview_text_window_t

0x1f19,	// (0x00013ffe) scroll_pane_cp11

0x10db,	// (0x000131c0) bg_popup_preview_window_pane_g1

0x1daf,	// (0x00013e94) bg_popup_preview_window_pane_g2

0x1db7,	// (0x00013e9c) bg_popup_preview_window_pane_g3

0x1dbf,	// (0x00013ea4) bg_popup_preview_window_pane_g4

0x1dc7,	// (0x00013eac) bg_popup_preview_window_pane_g5

0x1dcf,	// (0x00013eb4) bg_popup_preview_window_pane_g6

0x1dd7,	// (0x00013ebc) bg_popup_preview_window_pane_g7

0x1ddf,	// (0x00013ec4) bg_popup_preview_window_pane_g8

0x44f8,	// (0x000165dd) aid_popup_width_pane

0xbaf9,	// (0x0001dbde) popup_midp_note_alarm_window_ParamLimits

0xbaf9,	// (0x0001dbde) popup_midp_note_alarm_window

0xe9b3,	// (0x00020a98) data_form_pane_ParamLimits

0xaab2,	// (0x0001cb97) form_field_data_pane_g1

0xb3f4,	// (0x0001d4d9) form_field_data_pane_t1_ParamLimits

0xe9bf,	// (0x00020aa4) input_focus_pane_ParamLimits

0xe9cd,	// (0x00020ab2) data_form_wide_pane_ParamLimits

0x3b64,	// (0x00015c49) form_field_data_wide_pane_g1

0x3b70,	// (0x00015c55) form_field_data_wide_pane_t1_ParamLimits

0xe131,	// (0x00020216) input_focus_pane_cp6_ParamLimits

0xb40c,	// (0x0001d4f1) input_popup_find_pane_g1_ParamLimits

0xb40c,	// (0x0001d4f1) input_popup_find_pane_g1

0x488b,	// (0x00016970) aid_navi_side_left_pane

0x489b,	// (0x00016980) aid_navi_side_right_pane

0x18cc,	// (0x000139b1) bg_popup_window_pane_cp30_ParamLimits

0x18cc,	// (0x000139b1) bg_popup_window_pane_cp30

0x1946,	// (0x00013a2b) popup_midp_note_alarm_window_g1_ParamLimits

0x1946,	// (0x00013a2b) popup_midp_note_alarm_window_g1

0x1976,	// (0x00013a5b) popup_midp_note_alarm_window_t1_ParamLimits

0x1976,	// (0x00013a5b) popup_midp_note_alarm_window_t1

0x1a17,	// (0x00013afc) popup_midp_note_alarm_window_t2_ParamLimits

0x1a17,	// (0x00013afc) popup_midp_note_alarm_window_t2

0x1ac5,	// (0x00013baa) popup_midp_note_alarm_window_t3_ParamLimits

0x1ac5,	// (0x00013baa) popup_midp_note_alarm_window_t3

0x1aed,	// (0x00013bd2) popup_midp_note_alarm_window_t4_ParamLimits

0x1aed,	// (0x00013bd2) popup_midp_note_alarm_window_t4

0x1b0d,	// (0x00013bf2) popup_midp_note_alarm_window_t5_ParamLimits

0x1b0d,	// (0x00013bf2) popup_midp_note_alarm_window_t5

0x000a,

0xf8c5,	// (0x000219aa) popup_midp_note_alarm_window_t_ParamLimits

0xf8c5,	// (0x000219aa) popup_midp_note_alarm_window_t

0x1bb9,	// (0x00013c9e) wait_bar_pane_cp1_ParamLimits

0x1bb9,	// (0x00013c9e) wait_bar_pane_cp1

0xdd07,	// (0x0001fdec) wait_anim_pane_copy1

0xdd07,	// (0x0001fdec) wait_border_pane_copy1

0x1606,	// (0x000136eb) wait_border_pane_g1_copy1

0x3b8a,	// (0x00015c6f) form_field_popup_pane_g1

0xaabc,	// (0x0001cba1) form_field_popup_pane_t1_ParamLimits

0xe9bf,	// (0x00020aa4) input_focus_pane_cp7_ParamLimits

0xe9b3,	// (0x00020a98) list_form_pane_ParamLimits

0x3baa,	// (0x00015c8f) form_field_popup_wide_pane_g1

0x3bb2,	// (0x00015c97) form_field_popup_wide_pane_t1_ParamLimits

0xe9bf,	// (0x00020aa4) input_focus_pane_cp8_ParamLimits

0xe9ed,	// (0x00020ad2) list_form_wide_pane_ParamLimits

0x2343,	// (0x00014428) aid_size_cell_graphic_pane

0xab39,	// (0x0001cc1e) data_form_pane_t1_ParamLimits

0xac41,	// (0x0001cd26) data_form_wide_pane_t1_ParamLimits

0xbed5,	// (0x0001dfba) bg_status_flat_pane

0xb068,	// (0x0001d14d) title_pane_t1_ParamLimits

0xdd1d,	// (0x0001fe02) title_pane_t2_ParamLimits

0xdd43,	// (0x0001fe28) title_pane_t3_ParamLimits

0xf59b,	// (0x00021680) title_pane_t_ParamLimits

0xb50c,	// (0x0001d5f1) level_1_signal_ParamLimits

0xb51e,	// (0x0001d603) level_2_signal_ParamLimits

0xb531,	// (0x0001d616) level_3_signal_ParamLimits

0xb544,	// (0x0001d629) level_4_signal_ParamLimits

0xb557,	// (0x0001d63c) level_5_signal_ParamLimits

0xb56a,	// (0x0001d64f) level_6_signal_ParamLimits

0xb57d,	// (0x0001d662) level_7_signal_ParamLimits

0xb50c,	// (0x0001d5f1) level_1_battery_ParamLimits

0xb51e,	// (0x0001d603) level_2_battery_ParamLimits

0xb531,	// (0x0001d616) level_3_battery_ParamLimits

0xb544,	// (0x0001d629) level_4_battery_ParamLimits

0xb557,	// (0x0001d63c) level_5_battery_ParamLimits

0xb56a,	// (0x0001d64f) level_6_battery_ParamLimits

0xb57d,	// (0x0001d662) level_7_battery_ParamLimits

0x17fb,	// (0x000138e0) bg_status_flat_pane_g1

0x1803,	// (0x000138e8) bg_status_flat_pane_g2

0x180b,	// (0x000138f0) bg_status_flat_pane_g3

0x1813,	// (0x000138f8) bg_status_flat_pane_g4

0x181b,	// (0x00013900) bg_status_flat_pane_g5

0x1823,	// (0x00013908) bg_status_flat_pane_g6

0x182b,	// (0x00013910) bg_status_flat_pane_g7

0xb0f5,	// (0x0001d1da) tabs_3_active_pane_t1_ParamLimits

0xb0f5,	// (0x0001d1da) tabs_3_passive_pane_t1_ParamLimits

0xb10b,	// (0x0001d1f0) tabs_4_active_pane_t1_ParamLimits

0xb10b,	// (0x0001d1f0) tabs_4_1_passive_pane_t1_ParamLimits

0xb418,	// (0x0001d4fd) tabs_2_active_pane_t1_ParamLimits

0xb418,	// (0x0001d4fd) tabs_2_passive_pane_t1_ParamLimits

0xdd6b,	// (0x0001fe50) bg_active_tab_pane_cp4_ParamLimits

0xb42e,	// (0x0001d513) tabs_2_long_active_pane_t1_ParamLimits

0x0dc3,	// (0x00012ea8) bg_passive_tab_pane_cp4_ParamLimits

0x542f,	// (0x00017514) list_single_midp_graphic_pane_t1_ParamLimits

0xdd6b,	// (0x0001fe50) bg_active_tab_pane_cp5_ParamLimits

0xb445,	// (0x0001d52a) tabs_3_long_active_pane_t1_ParamLimits

0x0dc3,	// (0x00012ea8) bg_passive_tab_pane_cp5_ParamLimits

0x542f,	// (0x00017514) list_single_midp_graphic_pane_t1

0xbed5,	// (0x0001dfba) bg_status_flat_pane_ParamLimits

0x0fba,	// (0x0001309f) indicator_pane_cp2_ParamLimits

0x0fba,	// (0x0001309f) indicator_pane_cp2

0xc03b,	// (0x0001e120) navi_pane_srt_ParamLimits

0xc03b,	// (0x0001e120) navi_pane_srt

0x0fe2,	// (0x000130c7) popup_clock_digital_analogue_window_cp1

0xdddb,	// (0x0001fec0) indicator_pane_t1

0xf378,	// (0x0002145d) copy_highlight_pane

0xf378,	// (0x0002145d) cursor_graphics_pane

0xf378,	// (0x0002145d) graphic_within_text_pane

0xf378,	// (0x0002145d) link_highlight_pane

0x1edc,	// (0x00013fc1) popup_preview_text_window_t5_ParamLimits

0x1edc,	// (0x00013fc1) popup_preview_text_window_t5

0xf3f3,	// (0x000214d8) cursor_digital_pane

0xf3f3,	// (0x000214d8) cursor_primary_pane

0xf404,	// (0x000214e9) cursor_primary_small_pane

0xf40c,	// (0x000214f1) cursor_secondary_pane

0xf414,	// (0x000214f9) cursor_title_pane

0xf3f3,	// (0x000214d8) link_highlight_digital_pane

0xf3fb,	// (0x000214e0) link_highlight_primary_pane

0xf404,	// (0x000214e9) link_highlight_primary_small_pane

0xf40c,	// (0x000214f1) link_highlight_secondary_pane

0xf414,	// (0x000214f9) link_highlight_title_pane

0xf3f3,	// (0x000214d8) copy_highlight_digital_pane

0xf3f3,	// (0x000214d8) copy_highlight_primary_pane

0xf404,	// (0x000214e9) copy_highlight_primary_small_pane

0xf40c,	// (0x000214f1) copy_highlight_secondary_pane

0xf414,	// (0x000214f9) copy_highlight_title_pane

0xf40c,	// (0x000214f1) graphic_text_digital_pane

0x187b,	// (0x00013960) graphic_text_primary_pane

0x1884,	// (0x00013969) graphic_text_primary_small_pane

0xf404,	// (0x000214e9) graphic_text_secondary_pane

0xf3f3,	// (0x000214d8) graphic_text_title_pane

0xb6fc,	// (0x0001d7e1) cursor_primary_pane_g1

0x186d,	// (0x00013952) cursor_text_primary_t1

0xc310,	// (0x0001e3f5) cursor_primary_small_pane_g1

0x185f,	// (0x00013944) cursor_text_primary_small_t1

0xc306,	// (0x0001e3eb) cursor_primary_small_pane_g1_copy1

0x1851,	// (0x00013936) cursor_text_primary_small_t1_copy1

0x1843,	// (0x00013928) cursor_text_title_t1

0xc2fc,	// (0x0001e3e1) cursor_title_pane_g1

0xb6fc,	// (0x0001d7e1) cursor_digital_pane_g1

0xf41c,	// (0x00021501) cursor_text_digital_t1

0xf42a,	// (0x0002150f) link_highlight_primary_pane_g1

0x17ec,	// (0x000138d1) link_highlight_primary_pane_t1

0xf42a,	// (0x0002150f) link_highlight_primary_small_pane_g1

0xf432,	// (0x00021517) link_highlight_primary_small_pane_t1

0xf441,	// (0x00021526) link_highlight_secondary_pane_g1

0xf449,	// (0x0002152e) link_highlight_secondary_pane_t1

0x1751,	// (0x00013836) link_highlight_title_pane_g1

0x1768,	// (0x0001384d) link_highlight_title_pane_t1

0x1751,	// (0x00013836) link_highlight_digital_pane_g1

0x1759,	// (0x0001383e) link_highlight_digital_pane_t1

0x162d,	// (0x00013712) copy_highlight_primary_pane_g1

0x1653,	// (0x00013738) copy_highlight_primary_pane_t1

0x162d,	// (0x00013712) copy_highlight_primary_small_pane_g1

0x1644,	// (0x00013729) copy_highlight_primary_small_pane_t1

0xf458,	// (0x0002153d) copy_highlight_secondary_pane_g1

0xf460,	// (0x00021545) copy_highlight_secondary_pane_t1

0x162d,	// (0x00013712) copy_highlight_title_pane_g1

0x1635,	// (0x0001371a) copy_highlight_title_pane_t1

0x162d,	// (0x00013712) copy_highlight_digital_pane_g1

0x2482,	// (0x00014567) copy_highlight_digital_pane_t1

0x2392,	// (0x00014477) graphic_text_primary_pane_g1

0x2466,	// (0x0001454b) graphic_text_primary_pane_t1

0x2474,	// (0x00014559) graphic_text_primary_pane_t2

0x0001,

0xf9f4,	// (0x00021ad9) graphic_text_primary_pane_t

0x2442,	// (0x00014527) graphic_text_primary_small_pane_g1

0x244a,	// (0x0001452f) graphic_text_primary_small_pane_t1

0x2458,	// (0x0001453d) graphic_text_primary_small_pane_t2

0x0001,

0xf9ef,	// (0x00021ad4) graphic_text_primary_small_pane_t

0x241e,	// (0x00014503) graphic_text_secondary_pane_g1

0x2426,	// (0x0001450b) graphic_text_secondary_pane_t1

0x2434,	// (0x00014519) graphic_text_secondary_pane_t2

0x0001,

0xf9ea,	// (0x00021acf) graphic_text_secondary_pane_t

0x23b6,	// (0x0001449b) graphic_text_title_pane_g1

0x2402,	// (0x000144e7) graphic_text_title_pane_t1

0x2410,	// (0x000144f5) graphic_text_title_pane_t2

0x0001,

0xf9e5,	// (0x00021aca) graphic_text_title_pane_t

0x2392,	// (0x00014477) graphic_text_digital_pane_g1

0x239a,	// (0x0001447f) graphic_text_digital_pane_t1

0x23a8,	// (0x0001448d) graphic_text_digital_pane_t2

0x0001,

0xf9e0,	// (0x00021ac5) graphic_text_digital_pane_t

0xdd6b,	// (0x0001fe50) navi_icon_pane_srt_ParamLimits

0xdd6b,	// (0x0001fe50) navi_icon_pane_srt

0xdd07,	// (0x0001fdec) navi_midp_pane_srt

0xdd07,	// (0x0001fdec) navi_navi_pane_srt

0xdd6b,	// (0x0001fe50) navi_text_pane_srt_ParamLimits

0xdd6b,	// (0x0001fe50) navi_text_pane_srt

0x21c9,	// (0x000142ae) navi_navi_icon_text_pane_srt

0x21e3,	// (0x000142c8) navi_navi_pane_srt_g1_ParamLimits

0x21e3,	// (0x000142c8) navi_navi_pane_srt_g1

0x21d1,	// (0x000142b6) navi_navi_pane_srt_g2_ParamLimits

0x21d1,	// (0x000142b6) navi_navi_pane_srt_g2

0x0001,

0xf9db,	// (0x00021ac0) navi_navi_pane_srt_g_ParamLimits

0xf9db,	// (0x00021ac0) navi_navi_pane_srt_g

0x21f5,	// (0x000142da) navi_navi_tabs_pane_srt

0x21c9,	// (0x000142ae) navi_navi_text_pane_srt

0x21c9,	// (0x000142ae) navi_navi_volume_pane_srt

0x2383,	// (0x00014468) navi_navi_text_pane_srt_t1

0x5b9c,	// (0x00017c81) navi_navi_volume_pane_srt_g1

0x5ba4,	// (0x00017c89) volume_small_pane_srt_ParamLimits

0x5ba4,	// (0x00017c89) volume_small_pane_srt

0x4b32,	// (0x00016c17) volume_small_pane_srt_g1_ParamLimits

0x4b32,	// (0x00016c17) volume_small_pane_srt_g1

0x4b42,	// (0x00016c27) volume_small_pane_srt_g2_ParamLimits

0x4b42,	// (0x00016c27) volume_small_pane_srt_g2

0x4b53,	// (0x00016c38) volume_small_pane_srt_g3_ParamLimits

0x4b53,	// (0x00016c38) volume_small_pane_srt_g3

0x4b64,	// (0x00016c49) volume_small_pane_srt_g4_ParamLimits

0x4b64,	// (0x00016c49) volume_small_pane_srt_g4

0x4b75,	// (0x00016c5a) volume_small_pane_srt_g5_ParamLimits

0x4b75,	// (0x00016c5a) volume_small_pane_srt_g5

0x4b86,	// (0x00016c6b) volume_small_pane_srt_g6_ParamLimits

0x4b86,	// (0x00016c6b) volume_small_pane_srt_g6

0x4b97,	// (0x00016c7c) volume_small_pane_srt_g7_ParamLimits

0x4b97,	// (0x00016c7c) volume_small_pane_srt_g7

0x4ba8,	// (0x00016c8d) volume_small_pane_srt_g8_ParamLimits

0x4ba8,	// (0x00016c8d) volume_small_pane_srt_g8

0x4bb9,	// (0x00016c9e) volume_small_pane_srt_g9_ParamLimits

0x4bb9,	// (0x00016c9e) volume_small_pane_srt_g9

0x4bca,	// (0x00016caf) volume_small_pane_srt_g10_ParamLimits

0x4bca,	// (0x00016caf) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x00021882) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x00021882) volume_small_pane_srt_g

0xe01b,	// (0x00020100) query_popup_data_pane_cp2

0x2369,	// (0x0001444e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2369,	// (0x0001444e) navi_navi_icon_text_pane_srt_t1

0x187b,	// (0x00013960) navi_tabs_2_long_pane_srt

0x187b,	// (0x00013960) navi_tabs_2_pane_srt

0x187b,	// (0x00013960) navi_tabs_3_long_pane_srt

0x187b,	// (0x00013960) navi_tabs_3_pane_srt

0x187b,	// (0x00013960) navi_tabs_4_pane_srt

0x5b7c,	// (0x00017c61) tabs_2_active_pane_srt_ParamLimits

0x5b7c,	// (0x00017c61) tabs_2_active_pane_srt

0x5b8c,	// (0x00017c71) tabs_2_passive_pane_srt_ParamLimits

0x5b8c,	// (0x00017c71) tabs_2_passive_pane_srt

0x11f1,	// (0x000132d6) bg_passive_tab_pane_cp1_srt_ParamLimits

0x11f1,	// (0x000132d6) bg_passive_tab_pane_cp1_srt

0x223f,	// (0x00014324) bg_passive_tab_pane_g1_cp1_srt

0xf082,	// (0x00021167) bg_passive_tab_pane_g2_cp1_srt

0x2236,	// (0x0001431b) bg_passive_tab_pane_g3_cp1_srt

0xdd55,	// (0x0001fe3a) bg_active_tab_pane_cp1_srt_ParamLimits

0xdd55,	// (0x0001fe3a) bg_active_tab_pane_cp1_srt

0x222e,	// (0x00014313) tabs_2_active_pane_srt_g1

0xb418,	// (0x0001d4fd) tabs_2_active_pane_srt_t1_ParamLimits

0xb418,	// (0x0001d4fd) tabs_2_active_pane_srt_t1

0x223f,	// (0x00014324) bg_active_tab_pane_g1_cp1_srt

0xf082,	// (0x00021167) bg_active_tab_pane_g2_cp1_srt

0x2236,	// (0x0001431b) bg_active_tab_pane_g3_cp1_srt

0x5b49,	// (0x00017c2e) tabs_3_active_pane_srt_ParamLimits

0x5b49,	// (0x00017c2e) tabs_3_active_pane_srt

0x5b5a,	// (0x00017c3f) tabs_3_passive_pane_cp_srt_ParamLimits

0x5b5a,	// (0x00017c3f) tabs_3_passive_pane_cp_srt

0x5b6b,	// (0x00017c50) tabs_3_passive_pane_srt_ParamLimits

0x5b6b,	// (0x00017c50) tabs_3_passive_pane_srt

0x11f1,	// (0x000132d6) bg_passive_tab_pane_cp2_srt_ParamLimits

0x11f1,	// (0x000132d6) bg_passive_tab_pane_cp2_srt

0xf46f,	// (0x00021554) bg_passive_tab_pane_g1_cp2_srt

0xf082,	// (0x00021167) bg_passive_tab_pane_g2_cp2_srt

0xf478,	// (0x0002155d) bg_passive_tab_pane_g3_cp2_srt

0xdd55,	// (0x0001fe3a) bg_active_tab_pane_cp2_srt_ParamLimits

0xdd55,	// (0x0001fe3a) bg_active_tab_pane_cp2_srt

0x2359,	// (0x0001443e) tabs_3_active_pane_srt_g1

0xb0f5,	// (0x0001d1da) tabs_3_active_pane_srt_t1_ParamLimits

0xb0f5,	// (0x0001d1da) tabs_3_active_pane_srt_t1

0xf46f,	// (0x00021554) bg_active_tab_pane_g1_cp2_srt

0xf082,	// (0x00021167) bg_active_tab_pane_g2_cp2_srt

0xf478,	// (0x0002155d) bg_active_tab_pane_g3_cp2_srt

0x5b01,	// (0x00017be6) tabs_4_active_pane_srt_ParamLimits

0x5b01,	// (0x00017be6) tabs_4_active_pane_srt

0x5b13,	// (0x00017bf8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5b13,	// (0x00017bf8) tabs_4_passive_pane_cp2_srt

0x0dcf,	// (0x00012eb4) aid_size_cell_toolbar

0xb869,	// (0x0001d94e) main_idle_act_pane_ParamLimits

0x0ea3,	// (0x00012f88) popup_large_graphic_colour_window_ParamLimits

0xbdc7,	// (0x0001deac) popup_toolbar_window_ParamLimits

0xbdc7,	// (0x0001deac) popup_toolbar_window

0x3e98,	// (0x00015f7d) list_single_graphic_2heading_pane_ParamLimits

0x3e98,	// (0x00015f7d) list_single_graphic_2heading_pane

0xecf4,	// (0x00020dd9) aid_size_cell_apps_grid_lsc_pane

0xed06,	// (0x00020deb) aid_size_cell_apps_grid_prt_pane

0x0dc3,	// (0x00012ea8) bg_wml_button_pane_cp1_ParamLimits

0x0dc3,	// (0x00012ea8) bg_wml_button_pane_cp1

0xc2b3,	// (0x0001e398) form_midp_field_text_pane_t1_ParamLimits

0x11f1,	// (0x000132d6) input_focus_pane_cp050_ParamLimits

0x1340,	// (0x00013425) list_midp_form_text_pane_ParamLimits

0x131d,	// (0x00013402) input_focus_pane_cp051_ParamLimits

0x1331,	// (0x00013416) list_midp_choice_pane_ParamLimits

0xc251,	// (0x0001e336) list_single_2graphic_pane_cp3_ParamLimits

0xc251,	// (0x0001e336) list_single_2graphic_pane_cp3

0xc264,	// (0x0001e349) list_single_midp_graphic_pane_ParamLimits

0xc264,	// (0x0001e349) list_single_midp_graphic_pane

0x3654,	// (0x00015739) list_single_graphic_2heading_pane_g1_ParamLimits

0x3654,	// (0x00015739) list_single_graphic_2heading_pane_g1

0x3d7f,	// (0x00015e64) list_single_graphic_2heading_pane_g4_ParamLimits

0x3d7f,	// (0x00015e64) list_single_graphic_2heading_pane_g4

0x3d8b,	// (0x00015e70) list_single_graphic_2heading_pane_g5_ParamLimits

0x3d8b,	// (0x00015e70) list_single_graphic_2heading_pane_g5

0x0002,

0xf605,	// (0x000216ea) list_single_graphic_2heading_pane_g_ParamLimits

0xf605,	// (0x000216ea) list_single_graphic_2heading_pane_g

0x3d97,	// (0x00015e7c) list_single_graphic_2heading_pane_t1_ParamLimits

0x3d97,	// (0x00015e7c) list_single_graphic_2heading_pane_t1

0x3dab,	// (0x00015e90) list_single_graphic_2heading_pane_t2_ParamLimits

0x3dab,	// (0x00015e90) list_single_graphic_2heading_pane_t2

0x3dc5,	// (0x00015eaa) list_single_graphic_2heading_pane_t3_ParamLimits

0x3dc5,	// (0x00015eaa) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f0,	// (0x000218d5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f0,	// (0x000218d5) list_single_graphic_2heading_pane_t

0x1025,	// (0x0001310a) bg_popup_sub_pane_cp2

0x104b,	// (0x00013130) grid_toobar_pane

0x53cb,	// (0x000174b0) cell_toolbar_pane_ParamLimits

0x53cb,	// (0x000174b0) cell_toolbar_pane

0x1081,	// (0x00013166) cell_toolbar_pane_g1_ParamLimits

0x1081,	// (0x00013166) cell_toolbar_pane_g1

0x1093,	// (0x00013178) cell_toolbar_pane_g2_ParamLimits

0x1093,	// (0x00013178) cell_toolbar_pane_g2

0x0001,

0xf7f7,	// (0x000218dc) cell_toolbar_pane_g_ParamLimits

0xf7f7,	// (0x000218dc) cell_toolbar_pane_g

0x10b5,	// (0x0001319a) grid_highlight_pane_cp2_ParamLimits

0x10b5,	// (0x0001319a) grid_highlight_pane_cp2

0x10cf,	// (0x000131b4) toolbar_button_pane

0x10db,	// (0x000131c0) toolbar_button_pane_g1

0x10eb,	// (0x000131d0) toolbar_button_pane_g2

0x10e3,	// (0x000131c8) toolbar_button_pane_g3

0x10fb,	// (0x000131e0) toolbar_button_pane_g4

0x10f3,	// (0x000131d8) toolbar_button_pane_g5

0x1103,	// (0x000131e8) toolbar_button_pane_g6

0x110b,	// (0x000131f0) toolbar_button_pane_g7

0x111b,	// (0x00013200) toolbar_button_pane_g8

0x1113,	// (0x000131f8) toolbar_button_pane_g9

0x0009,

0xf7fc,	// (0x000218e1) toolbar_button_pane_g

0x53fa,	// (0x000174df) list_single_2graphic_pane_g1_cp3_ParamLimits

0x53fa,	// (0x000174df) list_single_2graphic_pane_g1_cp3

0xc1b9,	// (0x0001e29e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc1b9,	// (0x0001e29e) list_single_2graphic_pane_g2_cp3

0xf1f9,	// (0x000212de) list_single_2graphic_pane_g3_cp3

0x160f,	// (0x000136f4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x160f,	// (0x000136f4) list_single_2graphic_pane_g4_cp3

0x5415,	// (0x000174fa) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5415,	// (0x000174fa) list_single_2graphic_pane_t1_cp3

0xf1ed,	// (0x000212d2) list_single_midp_graphic_pane_g2_ParamLimits

0xf1ed,	// (0x000212d2) list_single_midp_graphic_pane_g2

0x0ddf,	// (0x00012ec4) aid_zoom_text_primary

0x3d52,	// (0x00015e37) aid_zoom_text_secondary

0xf52a,	// (0x0002160f) status_small_pane_g7_ParamLimits

0xf52a,	// (0x0002160f) status_small_pane_g7

0xf54d,	// (0x00021632) status_small_pane_t1_ParamLimits

0xb03d,	// (0x0001d122) title_pane_g2

0x0003,

0xf592,	// (0x00021677) title_pane_g

0xb31f,	// (0x0001d404) aid_size_cell_colour_1_pane_ParamLimits

0xb31f,	// (0x0001d404) aid_size_cell_colour_1_pane

0xb333,	// (0x0001d418) aid_size_cell_colour_2_pane_ParamLimits

0xb333,	// (0x0001d418) aid_size_cell_colour_2_pane

0xb347,	// (0x0001d42c) aid_size_cell_colour_3_pane_ParamLimits

0xb347,	// (0x0001d42c) aid_size_cell_colour_3_pane

0xb35b,	// (0x0001d440) aid_size_cell_colour_4_pane_ParamLimits

0xb35b,	// (0x0001d440) aid_size_cell_colour_4_pane

0x47ed,	// (0x000168d2) title_pane_stacon_g1_ParamLimits

0x47ed,	// (0x000168d2) title_pane_stacon_g1

0x16aa,	// (0x0001378f) popup_note_wait_window_g3_ParamLimits

0x16aa,	// (0x0001378f) popup_note_wait_window_g3

0x1720,	// (0x00013805) popup_note_wait_window_t5_ParamLimits

0x1720,	// (0x00013805) popup_note_wait_window_t5

0xdd07,	// (0x0001fdec) main_feb_china_hwr_fs_writing_pane

0xb8ca,	// (0x0001d9af) popup_feb_china_hwr_fs_window_ParamLimits

0xb8ca,	// (0x0001d9af) popup_feb_china_hwr_fs_window

0xc1ca,	// (0x0001e2af) aid_size_cell_hwr_fs_ParamLimits

0xc1ca,	// (0x0001e2af) aid_size_cell_hwr_fs

0x11f1,	// (0x000132d6) bg_popup_sub_pane_cp3_ParamLimits

0x11f1,	// (0x000132d6) bg_popup_sub_pane_cp3

0xc1df,	// (0x0001e2c4) grid_hwr_fs_pane_ParamLimits

0xc1df,	// (0x0001e2c4) grid_hwr_fs_pane

0x546e,	// (0x00017553) linegrid_hwr_fs_pane_ParamLimits

0x546e,	// (0x00017553) linegrid_hwr_fs_pane

0xc1f7,	// (0x0001e2dc) cell_hwr_fs_pane_ParamLimits

0xc1f7,	// (0x0001e2dc) cell_hwr_fs_pane

0x11fd,	// (0x000132e2) linegrid_hwr_fs_pane_g1_ParamLimits

0x11fd,	// (0x000132e2) linegrid_hwr_fs_pane_g1

0xc217,	// (0x0001e2fc) linegrid_hwr_fs_pane_g2_ParamLimits

0xc217,	// (0x0001e2fc) linegrid_hwr_fs_pane_g2

0x1209,	// (0x000132ee) linegrid_hwr_fs_pane_g3_ParamLimits

0x1209,	// (0x000132ee) linegrid_hwr_fs_pane_g3

0x54ae,	// (0x00017593) linegrid_hwr_fs_pane_g4_ParamLimits

0x54ae,	// (0x00017593) linegrid_hwr_fs_pane_g4

0x54c8,	// (0x000175ad) linegrid_hwr_fs_pane_g5_ParamLimits

0x54c8,	// (0x000175ad) linegrid_hwr_fs_pane_g5

0x0004,

0xf822,	// (0x00021907) linegrid_hwr_fs_pane_g_ParamLimits

0xf822,	// (0x00021907) linegrid_hwr_fs_pane_g

0x1215,	// (0x000132fa) cell_hwr_fs_pane_g1_ParamLimits

0x1215,	// (0x000132fa) cell_hwr_fs_pane_g1

0x0ff3,	// (0x000130d8) cell_hwr_fs_pane_g2_ParamLimits

0x0ff3,	// (0x000130d8) cell_hwr_fs_pane_g2

0xc229,	// (0x0001e30e) cell_hwr_fs_pane_g3_ParamLimits

0xc229,	// (0x0001e30e) cell_hwr_fs_pane_g3

0xc236,	// (0x0001e31b) cell_hwr_fs_pane_g4_ParamLimits

0xc236,	// (0x0001e31b) cell_hwr_fs_pane_g4

0x0003,

0xf82d,	// (0x00021912) cell_hwr_fs_pane_g_ParamLimits

0xf82d,	// (0x00021912) cell_hwr_fs_pane_g

0xc243,	// (0x0001e328) cell_hwr_fs_pane_t1

0xdd07,	// (0x0001fdec) grid_highlight_pane_cp6

0xdd07,	// (0x0001fdec) main_idle_act2_pane

0xeafd,	// (0x00020be2) aid_inside_area_popup_secondary

0xc41d,	// (0x0001e502) aid_inside_area_window_primary_ParamLimits

0xc41d,	// (0x0001e502) aid_inside_area_window_primary

0x2491,	// (0x00014576) ai2_news_ticker_pane

0x2499,	// (0x0001457e) aid_size_cell_ai1_link_ParamLimits

0x2499,	// (0x0001457e) aid_size_cell_ai1_link

0xc829,	// (0x0001e90e) popup_ai2_data_window_ParamLimits

0xc829,	// (0x0001e90e) popup_ai2_data_window

0x24b3,	// (0x00014598) popup_ai2_link_window_ParamLimits

0x24b3,	// (0x00014598) popup_ai2_link_window

0x11f1,	// (0x000132d6) bg_popup_sub_pane_cp4_ParamLimits

0x11f1,	// (0x000132d6) bg_popup_sub_pane_cp4

0x24c7,	// (0x000145ac) grid_ai2_link_pane_ParamLimits

0x24c7,	// (0x000145ac) grid_ai2_link_pane

0x24de,	// (0x000145c3) popup_ai2_link_window_g1_ParamLimits

0x24de,	// (0x000145c3) popup_ai2_link_window_g1

0x24ea,	// (0x000145cf) popup_ai2_link_window_g2_ParamLimits

0x24ea,	// (0x000145cf) popup_ai2_link_window_g2

0x0001,

0xf9f9,	// (0x00021ade) popup_ai2_link_window_g_ParamLimits

0xf9f9,	// (0x00021ade) popup_ai2_link_window_g

0x24f9,	// (0x000145de) ai2_mp_button_pane

0x2501,	// (0x000145e6) ai2_mp_volume_pane

0x131d,	// (0x00013402) bg_popup_sub_pane_cp5_ParamLimits

0x131d,	// (0x00013402) bg_popup_sub_pane_cp5

0x2509,	// (0x000145ee) heading_ai2_gene_pane_ParamLimits

0x2509,	// (0x000145ee) heading_ai2_gene_pane

0x2515,	// (0x000145fa) list_ai2_gene_pane_ParamLimits

0x2515,	// (0x000145fa) list_ai2_gene_pane

0x255d,	// (0x00014642) cell_ai2_link_pane_ParamLimits

0x255d,	// (0x00014642) cell_ai2_link_pane

0x2573,	// (0x00014658) cell_ai2_link_pane_g1

0xdd07,	// (0x0001fdec) grid_highlight_pane_cp7

0x5c00,	// (0x00017ce5) ai2_mp_volume_pane_g1

0x2623,	// (0x00014708) ai2_mp_volume_pane_g2

0xc853,	// (0x0001e938) list_ai2_gene_pane_t1

0x261b,	// (0x00014700) ai2_mp_volume_pane_g3

0x0002,

0xfa12,	// (0x00021af7) ai2_mp_volume_pane_g

0x5c08,	// (0x00017ced) volume_small_pane_cp3

0x262b,	// (0x00014710) aid_size_cell_ai2_button

0x2633,	// (0x00014718) grid_ai2_button_pane

0x263c,	// (0x00014721) cell_ai2_button_pane_ParamLimits

0x263c,	// (0x00014721) cell_ai2_button_pane

0xdc85,	// (0x0001fd6a) cell_ai2_button_pane_g1

0xdd07,	// (0x0001fdec) grid_highlight_pane_cp8

0x25db,	// (0x000146c0) ai2_gene_pane_t1_ParamLimits

0x25db,	// (0x000146c0) ai2_gene_pane_t1

0xb855,	// (0x0001d93a) aid_height_parent_landscape

0xc5d5,	// (0x0001e6ba) aid_height_set_list

0x225c,	// (0x00014341) aid_size_parent

0x2343,	// (0x00014428) aid_size_cell_graphic_pane_ParamLimits

0x2525,	// (0x0001460a) popup_ai2_data_window_g1_ParamLimits

0x2525,	// (0x0001460a) popup_ai2_data_window_g1

0x2531,	// (0x00014616) ai2_news_ticker_pane_g1

0x2539,	// (0x0001461e) ai2_news_ticker_pane_g2

0x0001,

0xf9fe,	// (0x00021ae3) ai2_news_ticker_pane_g

0x2541,	// (0x00014626) ai2_news_ticker_pane_t1

0x254f,	// (0x00014634) ai2_news_ticker_pane_t2

0x0001,

0xfa03,	// (0x00021ae8) ai2_news_ticker_pane_t

0x2324,	// (0x00014409) heading_ai2_gene_pane_g1

0x257c,	// (0x00014661) heading_ai2_gene_pane_t1_ParamLimits

0x257c,	// (0x00014661) heading_ai2_gene_pane_t1

0x2591,	// (0x00014676) list_highlight_pane_cp6

0xc83d,	// (0x0001e922) ai2_gene_pane_ParamLimits

0xc83d,	// (0x0001e922) ai2_gene_pane

0xc861,	// (0x0001e946) list_ai2_gene_pane_t2

0x0001,

0xfa08,	// (0x00021aed) list_ai2_gene_pane_t

0x25ac,	// (0x00014691) list_highlight_pane_cp8_ParamLimits

0x25ac,	// (0x00014691) list_highlight_pane_cp8

0x25bd,	// (0x000146a2) ai2_gene_pane_g1_ParamLimits

0x25bd,	// (0x000146a2) ai2_gene_pane_g1

0x25cf,	// (0x000146b4) ai2_gene_pane_g2_ParamLimits

0x25cf,	// (0x000146b4) ai2_gene_pane_g2

0x0001,

0xfa0d,	// (0x00021af2) ai2_gene_pane_g_ParamLimits

0xfa0d,	// (0x00021af2) ai2_gene_pane_g

0xe2b2,	// (0x00020397) scroll_pane_cp12

0xb814,	// (0x0001d8f9) control_pane_t3_ParamLimits

0xb814,	// (0x0001d8f9) control_pane_t3

0xf53e,	// (0x00021623) status_small_pane_g8_ParamLimits

0xf53e,	// (0x00021623) status_small_pane_g8

0xb93e,	// (0x0001da23) popup_find_window_ParamLimits

0xbb31,	// (0x0001dc16) popup_note_image_window_ParamLimits

0x3654,	// (0x00015739) list_double2_graphic_pane_vc_g1_ParamLimits

0x3654,	// (0x00015739) list_double2_graphic_pane_vc_g1

0x3d7f,	// (0x00015e64) list_double2_graphic_pane_vc_g2_ParamLimits

0x3d7f,	// (0x00015e64) list_double2_graphic_pane_vc_g2

0x3d8b,	// (0x00015e70) list_double2_graphic_pane_vc_g3_ParamLimits

0x3d8b,	// (0x00015e70) list_double2_graphic_pane_vc_g3

0x0002,

0xf605,	// (0x000216ea) list_double2_graphic_pane_vc_g_ParamLimits

0xf605,	// (0x000216ea) list_double2_graphic_pane_vc_g

0x3ddd,	// (0x00015ec2) list_double2_graphic_pane_vc_t1_ParamLimits

0x3ddd,	// (0x00015ec2) list_double2_graphic_pane_vc_t1

0x3d7f,	// (0x00015e64) list_single_heading_pane_vc_g1_ParamLimits

0x3d7f,	// (0x00015e64) list_single_heading_pane_vc_g1

0x3d8b,	// (0x00015e70) list_single_heading_pane_vc_g2_ParamLimits

0x3d8b,	// (0x00015e70) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x000216f1) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x000216f1) list_single_heading_pane_vc_g

0x3df3,	// (0x00015ed8) list_single_heading_pane_vc_t1_ParamLimits

0x3df3,	// (0x00015ed8) list_single_heading_pane_vc_t1

0x3e09,	// (0x00015eee) list_single_heading_pane_vc_t2_ParamLimits

0x3e09,	// (0x00015eee) list_single_heading_pane_vc_t2

0x0001,

0xf811,	// (0x000218f6) list_single_heading_pane_vc_t_ParamLimits

0xf811,	// (0x000218f6) list_single_heading_pane_vc_t

0x114b,	// (0x00013230) list_setting_number_pane_vc_g1_ParamLimits

0x114b,	// (0x00013230) list_setting_number_pane_vc_g1

0x1157,	// (0x0001323c) list_setting_number_pane_vc_g2_ParamLimits

0x1157,	// (0x0001323c) list_setting_number_pane_vc_g2

0x0001,

0xf816,	// (0x000218fb) list_setting_number_pane_vc_g_ParamLimits

0xf816,	// (0x000218fb) list_setting_number_pane_vc_g

0x1163,	// (0x00013248) list_setting_number_pane_vc_t1_ParamLimits

0x1163,	// (0x00013248) list_setting_number_pane_vc_t1

0x1177,	// (0x0001325c) list_setting_number_pane_vc_t2_ParamLimits

0x1177,	// (0x0001325c) list_setting_number_pane_vc_t2

0x1193,	// (0x00013278) list_setting_number_pane_vc_t3_ParamLimits

0x1193,	// (0x00013278) list_setting_number_pane_vc_t3

0x0002,

0xf81b,	// (0x00021900) list_setting_number_pane_vc_t_ParamLimits

0xf81b,	// (0x00021900) list_setting_number_pane_vc_t

0x11b9,	// (0x0001329e) set_value_pane_vc_ParamLimits

0x11b9,	// (0x0001329e) set_value_pane_vc

0x3e98,	// (0x00015f7d) list_double2_graphic_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_double2_graphic_pane_vc

0x22ca,	// (0x000143af) list_double2_large_graphic_pane_vc_ParamLimits

0x22ca,	// (0x000143af) list_double2_large_graphic_pane_vc

0x3e98,	// (0x00015f7d) list_double2_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_double2_pane_vc

0x3e98,	// (0x00015f7d) list_double_graphic_heading_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_double_graphic_heading_pane_vc

0x3e98,	// (0x00015f7d) list_double_graphic_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_double_graphic_pane_vc

0x3e98,	// (0x00015f7d) list_double_heading_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_double_heading_pane_vc

0x22ca,	// (0x000143af) list_double_large_graphic_pane_vc_ParamLimits

0x22ca,	// (0x000143af) list_double_large_graphic_pane_vc

0x3e98,	// (0x00015f7d) list_double_number_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_double_number_pane_vc

0x3e98,	// (0x00015f7d) list_double_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_double_pane_vc

0x3e98,	// (0x00015f7d) list_double_time_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_double_time_pane_vc

0x3e98,	// (0x00015f7d) list_setting_number_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_setting_number_pane_vc

0x3e98,	// (0x00015f7d) list_setting_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_setting_pane_vc

0x3e98,	// (0x00015f7d) list_single_graphic_heading_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_single_graphic_heading_pane_vc

0x3e98,	// (0x00015f7d) list_single_heading_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_single_heading_pane_vc

0x3e98,	// (0x00015f7d) list_single_number_heading_pane_vc_ParamLimits

0x3e98,	// (0x00015f7d) list_single_number_heading_pane_vc

0x3ef0,	// (0x00015fd5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3ef0,	// (0x00015fd5) list_double_graphic_heading_pane_vc_g1

0x3d7f,	// (0x00015e64) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3d7f,	// (0x00015e64) list_double_graphic_heading_pane_vc_g2

0x3d8b,	// (0x00015e70) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3d8b,	// (0x00015e70) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa19,	// (0x00021afe) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa19,	// (0x00021afe) list_double_graphic_heading_pane_vc_g

0x3efc,	// (0x00015fe1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3efc,	// (0x00015fe1) list_double_graphic_heading_pane_vc_t1

0x3df3,	// (0x00015ed8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3df3,	// (0x00015ed8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa20,	// (0x00021b05) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa20,	// (0x00021b05) list_double_graphic_heading_pane_vc_t

0x114b,	// (0x00013230) list_setting_pane_vc_g1_ParamLimits

0x114b,	// (0x00013230) list_setting_pane_vc_g1

0x1157,	// (0x0001323c) list_setting_pane_vc_g2_ParamLimits

0x1157,	// (0x0001323c) list_setting_pane_vc_g2

0x0001,

0xf816,	// (0x000218fb) list_setting_pane_vc_g_ParamLimits

0xf816,	// (0x000218fb) list_setting_pane_vc_g

0x283c,	// (0x00014921) list_setting_pane_vc_t1_ParamLimits

0x283c,	// (0x00014921) list_setting_pane_vc_t1

0x2850,	// (0x00014935) list_setting_pane_vc_t2_ParamLimits

0x2850,	// (0x00014935) list_setting_pane_vc_t2

0x0001,

0xfa63,	// (0x00021b48) list_setting_pane_vc_t_ParamLimits

0xfa63,	// (0x00021b48) list_setting_pane_vc_t

0x11b9,	// (0x0001329e) set_value_pane_cp_vc_ParamLimits

0x11b9,	// (0x0001329e) set_value_pane_cp_vc

0x3d7f,	// (0x00015e64) list_single_number_heading_pane_vc_g1_ParamLimits

0x3d7f,	// (0x00015e64) list_single_number_heading_pane_vc_g1

0x3d8b,	// (0x00015e70) list_single_number_heading_pane_vc_g2_ParamLimits

0x3d8b,	// (0x00015e70) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x000216f1) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x000216f1) list_single_number_heading_pane_vc_g

0x3df3,	// (0x00015ed8) list_single_number_heading_pane_vc_t1_ParamLimits

0x3df3,	// (0x00015ed8) list_single_number_heading_pane_vc_t1

0x3f0e,	// (0x00015ff3) list_single_number_heading_pane_vc_t2_ParamLimits

0x3f0e,	// (0x00015ff3) list_single_number_heading_pane_vc_t2

0x3f20,	// (0x00016005) list_single_number_heading_pane_vc_t3_ParamLimits

0x3f20,	// (0x00016005) list_single_number_heading_pane_vc_t3

0x0002,

0xfa68,	// (0x00021b4d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x00021b4d) list_single_number_heading_pane_vc_t

0x3654,	// (0x00015739) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3654,	// (0x00015739) list_single_graphic_heading_pane_vc_g1

0x3d7f,	// (0x00015e64) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3d7f,	// (0x00015e64) list_single_graphic_heading_pane_vc_g4

0x3d8b,	// (0x00015e70) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3d8b,	// (0x00015e70) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf605,	// (0x000216ea) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x000216ea) list_single_graphic_heading_pane_vc_g

0x3df3,	// (0x00015ed8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3df3,	// (0x00015ed8) list_single_graphic_heading_pane_vc_t1

0x3f32,	// (0x00016017) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3f32,	// (0x00016017) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6f,	// (0x00021b54) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x00021b54) list_single_graphic_heading_pane_vc_t

0x3d7f,	// (0x00015e64) list_double2_pane_vc_g1_ParamLimits

0x3d7f,	// (0x00015e64) list_double2_pane_vc_g1

0x3d8b,	// (0x00015e70) list_double2_pane_vc_g2_ParamLimits

0x3d8b,	// (0x00015e70) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x000216f1) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x000216f1) list_double2_pane_vc_g

0x3f44,	// (0x00016029) list_double2_pane_vc_t1_ParamLimits

0x3f44,	// (0x00016029) list_double2_pane_vc_t1

0x3f5a,	// (0x0001603f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3f5a,	// (0x0001603f) list_double2_large_graphic_pane_vc_g1

0x3f66,	// (0x0001604b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3f66,	// (0x0001604b) list_double2_large_graphic_pane_vc_g2

0x3f72,	// (0x00016057) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3f72,	// (0x00016057) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0002170e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0002170e) list_double2_large_graphic_pane_vc_g

0x3f7e,	// (0x00016063) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3f7e,	// (0x00016063) list_double2_large_graphic_pane_vc_t1

0x3f94,	// (0x00016079) list_double_time_pane_vc_g1_ParamLimits

0x3f94,	// (0x00016079) list_double_time_pane_vc_g1

0x3fa0,	// (0x00016085) list_double_time_pane_vc_g2_ParamLimits

0x3fa0,	// (0x00016085) list_double_time_pane_vc_g2

0x0001,

0xfa74,	// (0x00021b59) list_double_time_pane_vc_g_ParamLimits

0xfa74,	// (0x00021b59) list_double_time_pane_vc_g

0x3fac,	// (0x00016091) list_double_time_pane_vc_t1_ParamLimits

0x3fac,	// (0x00016091) list_double_time_pane_vc_t1

0x3fc5,	// (0x000160aa) list_double_time_pane_vc_t2_ParamLimits

0x3fc5,	// (0x000160aa) list_double_time_pane_vc_t2

0x3ffe,	// (0x000160e3) list_double_time_pane_vc_t3_ParamLimits

0x3ffe,	// (0x000160e3) list_double_time_pane_vc_t3

0x4016,	// (0x000160fb) list_double_time_pane_vc_t4_ParamLimits

0x4016,	// (0x000160fb) list_double_time_pane_vc_t4

0x0003,

0xfa79,	// (0x00021b5e) list_double_time_pane_vc_t_ParamLimits

0xfa79,	// (0x00021b5e) list_double_time_pane_vc_t

0x3d7f,	// (0x00015e64) list_double_pane_vc_g1_ParamLimits

0x3d7f,	// (0x00015e64) list_double_pane_vc_g1

0x3d8b,	// (0x00015e70) list_double_pane_vc_g2_ParamLimits

0x3d8b,	// (0x00015e70) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x000216f1) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x000216f1) list_double_pane_vc_g

0x4028,	// (0x0001610d) list_double_pane_vc_t1_ParamLimits

0x4028,	// (0x0001610d) list_double_pane_vc_t1

0x403a,	// (0x0001611f) list_double_pane_vc_t2_ParamLimits

0x403a,	// (0x0001611f) list_double_pane_vc_t2

0x0001,

0xfa82,	// (0x00021b67) list_double_pane_vc_t_ParamLimits

0xfa82,	// (0x00021b67) list_double_pane_vc_t

0x3d7f,	// (0x00015e64) list_double_number_pane_vc_g1_ParamLimits

0x3d7f,	// (0x00015e64) list_double_number_pane_vc_g1

0x3d8b,	// (0x00015e70) list_double_number_pane_vc_g2_ParamLimits

0x3d8b,	// (0x00015e70) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x000216f1) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x000216f1) list_double_number_pane_vc_g

0x4050,	// (0x00016135) list_double_number_pane_vc_t1_ParamLimits

0x4050,	// (0x00016135) list_double_number_pane_vc_t1

0x4064,	// (0x00016149) list_double_number_pane_vc_t2_ParamLimits

0x4064,	// (0x00016149) list_double_number_pane_vc_t2

0x403a,	// (0x0001611f) list_double_number_pane_vc_t3_ParamLimits

0x403a,	// (0x0001611f) list_double_number_pane_vc_t3

0x0002,

0xfa87,	// (0x00021b6c) list_double_number_pane_vc_t_ParamLimits

0xfa87,	// (0x00021b6c) list_double_number_pane_vc_t

0x4076,	// (0x0001615b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4076,	// (0x0001615b) list_double_large_graphic_pane_vc_g1

0x4082,	// (0x00016167) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4082,	// (0x00016167) list_double_large_graphic_pane_vc_g2

0x3f72,	// (0x00016057) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3f72,	// (0x00016057) list_double_large_graphic_pane_vc_g3

0x4091,	// (0x00016176) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4091,	// (0x00016176) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa8e,	// (0x00021b73) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa8e,	// (0x00021b73) list_double_large_graphic_pane_vc_g

0x409d,	// (0x00016182) list_double_large_graphic_pane_vc_t1_ParamLimits

0x409d,	// (0x00016182) list_double_large_graphic_pane_vc_t1

0x40af,	// (0x00016194) list_double_large_graphic_pane_vc_t2_ParamLimits

0x40af,	// (0x00016194) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa97,	// (0x00021b7c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa97,	// (0x00021b7c) list_double_large_graphic_pane_vc_t

0x3d7f,	// (0x00015e64) list_double_heading_pane_vc_g1_ParamLimits

0x3d7f,	// (0x00015e64) list_double_heading_pane_vc_g1

0x3d8b,	// (0x00015e70) list_double_heading_pane_vc_g2_ParamLimits

0x3d8b,	// (0x00015e70) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x000216f1) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x000216f1) list_double_heading_pane_vc_g

0x40c6,	// (0x000161ab) list_double_heading_pane_vc_t1_ParamLimits

0x40c6,	// (0x000161ab) list_double_heading_pane_vc_t1

0x3df3,	// (0x00015ed8) list_double_heading_pane_vc_t2_ParamLimits

0x3df3,	// (0x00015ed8) list_double_heading_pane_vc_t2

0x0001,

0xfa9c,	// (0x00021b81) list_double_heading_pane_vc_t_ParamLimits

0xfa9c,	// (0x00021b81) list_double_heading_pane_vc_t

0x40d8,	// (0x000161bd) list_double_graphic_pane_vc_g1_ParamLimits

0x40d8,	// (0x000161bd) list_double_graphic_pane_vc_g1

0x40e8,	// (0x000161cd) list_double_graphic_pane_vc_g2_ParamLimits

0x40e8,	// (0x000161cd) list_double_graphic_pane_vc_g2

0x40f7,	// (0x000161dc) list_double_graphic_pane_vc_g3_ParamLimits

0x40f7,	// (0x000161dc) list_double_graphic_pane_vc_g3

0x0002,

0xfaa1,	// (0x00021b86) list_double_graphic_pane_vc_g_ParamLimits

0xfaa1,	// (0x00021b86) list_double_graphic_pane_vc_g

0x4103,	// (0x000161e8) list_double_graphic_pane_vc_t1_ParamLimits

0x4103,	// (0x000161e8) list_double_graphic_pane_vc_t1

0x403a,	// (0x0001611f) list_double_graphic_pane_vc_t2_ParamLimits

0x403a,	// (0x0001611f) list_double_graphic_pane_vc_t2

0x0001,

0xfaa8,	// (0x00021b8d) list_double_graphic_pane_vc_t_ParamLimits

0xfaa8,	// (0x00021b8d) list_double_graphic_pane_vc_t

0x4500,	// (0x000165e5) aid_size_cell_fastswap

0xaeb6,	// (0x0001cf9b) aid_size_cell_touch_ParamLimits

0xaeb6,	// (0x0001cf9b) aid_size_cell_touch

0x464d,	// (0x00016732) popup_fast_swap_wide_window_ParamLimits

0x464d,	// (0x00016732) popup_fast_swap_wide_window

0xafd0,	// (0x0001d0b5) touch_pane_ParamLimits

0xafd0,	// (0x0001d0b5) touch_pane

0x3ac0,	// (0x00015ba5) button_value_adjust_pane_cp2

0x2b7b,	// (0x00014c60) button_value_adjust_pane_cp4

0x3ae0,	// (0x00015bc5) form_field_data_pane_cp2

0xaa79,	// (0x0001cb5e) form_field_data_wide_pane_cp2

0xed3d,	// (0x00020e22) bg_scroll_pane_ParamLimits

0x490e,	// (0x000169f3) scroll_handle_pane_ParamLimits

0x4922,	// (0x00016a07) scroll_sc2_down_pane_ParamLimits

0x4922,	// (0x00016a07) scroll_sc2_down_pane

0xed6e,	// (0x00020e53) scroll_sc2_up_pane_ParamLimits

0xed6e,	// (0x00020e53) scroll_sc2_up_pane

0xc985,	// (0x0001ea6a) grid_wheel_folder_pane_g1_ParamLimits

0xc985,	// (0x0001ea6a) grid_wheel_folder_pane_g1

0x4ad6,	// (0x00016bbb) clock_nsta_pane_cp2_ParamLimits

0x4ad6,	// (0x00016bbb) clock_nsta_pane_cp2

0xb65f,	// (0x0001d744) listscroll_midp_pane_ParamLimits

0xb66f,	// (0x0001d754) midp_canvas_pane

0x4d1e,	// (0x00016e03) nsta_clock_indic_pane

0x0e07,	// (0x00012eec) listscroll_form_pane_vc

0x0e0f,	// (0x00012ef4) listscroll_set_pane_vc_ParamLimits

0x0e0f,	// (0x00012ef4) listscroll_set_pane_vc

0xbefd,	// (0x0001dfe2) clock_nsta_pane

0xbf20,	// (0x0001e005) indicator_nsta_pane

0x1025,	// (0x0001310a) bg_popup_sub_pane_cp2_ParamLimits

0x1039,	// (0x0001311e) find_pane_cp2_ParamLimits

0x1039,	// (0x0001311e) find_pane_cp2

0x104b,	// (0x00013130) grid_toobar_pane_ParamLimits

0x11c5,	// (0x000132aa) list_form_gen_pane_vc_ParamLimits

0x11c5,	// (0x000132aa) list_form_gen_pane_vc

0x11db,	// (0x000132c0) scroll_pane_cp8_vc_ParamLimits

0x11db,	// (0x000132c0) scroll_pane_cp8_vc

0x122b,	// (0x00013310) data_form_wide_pane_vc_ParamLimits

0x122b,	// (0x00013310) data_form_wide_pane_vc

0x1237,	// (0x0001331c) form_field_data_wide_pane_vc_g1

0x123f,	// (0x00013324) form_field_data_wide_pane_vc_t1_ParamLimits

0x123f,	// (0x00013324) form_field_data_wide_pane_vc_t1

0xe9bf,	// (0x00020aa4) input_focus_pane_cp6_vc_ParamLimits

0xe9bf,	// (0x00020aa4) input_focus_pane_cp6_vc

0xc2d4,	// (0x0001e3b9) list_midp_pane_ParamLimits

0x2248,	// (0x0001432d) scroll_pane_cp16_ParamLimits

0x2248,	// (0x0001432d) scroll_pane_cp16

0x14a7,	// (0x0001358c) button_value_adjust_pane_ParamLimits

0x14a7,	// (0x0001358c) button_value_adjust_pane

0xc5e1,	// (0x0001e6c6) button_value_adjust_pane_cp6_ParamLimits

0xc5e1,	// (0x0001e6c6) button_value_adjust_pane_cp6

0xc6eb,	// (0x0001e7d0) settings_code_pane_cp_ParamLimits

0xc6eb,	// (0x0001e7d0) settings_code_pane_cp

0xdc85,	// (0x0001fd6a) cell_touch_pane_g1

0xdc85,	// (0x0001fd6a) cell_touch_pane_g2

0x0001,

0xf747,	// (0x0002182c) cell_touch_pane_g

0xc86f,	// (0x0001e954) cell_touch_pane_cp_ParamLimits

0xc86f,	// (0x0001e954) cell_touch_pane_cp

0xc88b,	// (0x0001e970) cell_touch_pane_ParamLimits

0xc88b,	// (0x0001e970) cell_touch_pane

0xdc85,	// (0x0001fd6a) scroll_sc2_down_pane_g1

0xdc85,	// (0x0001fd6a) scroll_sc2_up_pane_g1

0xdd07,	// (0x0001fdec) bg_set_opt_pane_cp4_vc

0x2660,	// (0x00014745) list_set_graphic_pane_vc_g1_ParamLimits

0x2660,	// (0x00014745) list_set_graphic_pane_vc_g1

0x266c,	// (0x00014751) list_set_graphic_pane_vc_g2_ParamLimits

0x266c,	// (0x00014751) list_set_graphic_pane_vc_g2

0x0001,

0xfa25,	// (0x00021b0a) list_set_graphic_pane_vc_g_ParamLimits

0xfa25,	// (0x00021b0a) list_set_graphic_pane_vc_g

0x2678,	// (0x0001475d) text_primary_small_cp13_vc_ParamLimits

0x2678,	// (0x0001475d) text_primary_small_cp13_vc

0x2599,	// (0x0001467e) list_set_graphic_pane_vc_ParamLimits

0x2599,	// (0x0001467e) list_set_graphic_pane_vc

0xdd07,	// (0x0001fdec) input_focus_pane_cp2_vc

0xdc85,	// (0x0001fd6a) setting_code_pane_vc_g1

0x2690,	// (0x00014775) setting_code_pane_vc_t1

0x269e,	// (0x00014783) set_text_pane_vc_t1_ParamLimits

0x269e,	// (0x00014783) set_text_pane_vc_t1

0xdd07,	// (0x0001fdec) input_focus_pane_cp1_vc

0x26b9,	// (0x0001479e) list_set_text_pane_vc

0xdc85,	// (0x0001fd6a) setting_text_pane_vc_g1

0xdd07,	// (0x0001fdec) bg_set_opt_pane_cp2_vc

0x26c3,	// (0x000147a8) setting_slider_graphic_pane_vc_g1

0x26cb,	// (0x000147b0) setting_slider_graphic_pane_vc_t1

0x26d9,	// (0x000147be) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2a,	// (0x00021b0f) setting_slider_graphic_pane_vc_t

0x26e7,	// (0x000147cc) slider_set_pane_cp_vc

0x26ef,	// (0x000147d4) slider_set_pane_vc_g1

0x26f8,	// (0x000147dd) slider_set_pane_vc_g2

0x0006,

0xfa2f,	// (0x00021b14) slider_set_pane_vc_g

0xea0e,	// (0x00020af3) set_opt_bg_pane_g1_copy1

0xea16,	// (0x00020afb) set_opt_bg_pane_g2_copy1

0x2724,	// (0x00014809) set_opt_bg_pane_g3_copy1

0xea26,	// (0x00020b0b) set_opt_bg_pane_g4_copy1

0xea2e,	// (0x00020b13) set_opt_bg_pane_g5_copy1

0xea36,	// (0x00020b1b) set_opt_bg_pane_g6_copy1

0x272c,	// (0x00014811) set_opt_bg_pane_g7_copy1

0x2734,	// (0x00014819) set_opt_bg_pane_g8_copy1

0x273c,	// (0x00014821) set_opt_bg_pane_g9_copy1

0xdd07,	// (0x0001fdec) bg_set_opt_pane_cp_vc

0x2744,	// (0x00014829) setting_slider_pane_vc_t1

0x26cb,	// (0x000147b0) setting_slider_pane_vc_t2

0x26d9,	// (0x000147be) setting_slider_pane_vc_t3

0x0002,

0xfa3e,	// (0x00021b23) setting_slider_pane_vc_t

0x26e7,	// (0x000147cc) slider_set_pane_vc

0x55db,	// (0x000176c0) volume_set_pane_vc_g1

0x5c33,	// (0x00017d18) volume_set_pane_vc_g2

0x5c3c,	// (0x00017d21) volume_set_pane_vc_g3

0x5c45,	// (0x00017d2a) volume_set_pane_vc_g4

0x5c4e,	// (0x00017d33) volume_set_pane_vc_g5

0x5c57,	// (0x00017d3c) volume_set_pane_vc_g6

0x5c60,	// (0x00017d45) volume_set_pane_vc_g7

0x5c69,	// (0x00017d4e) volume_set_pane_vc_g8

0x5c72,	// (0x00017d57) volume_set_pane_vc_g9

0x5c7b,	// (0x00017d60) volume_set_pane_vc_g10

0x0009,

0xfa45,	// (0x00021b2a) volume_set_pane_vc_g

0x2753,	// (0x00014838) volume_set_pane_vc

0x275b,	// (0x00014840) button_value_adjust_pane_cp1_vc

0x2765,	// (0x0001484a) list_highlight_pane_cp2_vc

0x276e,	// (0x00014853) list_set_pane_vc_ParamLimits

0x276e,	// (0x00014853) list_set_pane_vc

0x27c0,	// (0x000148a5) main_pane_set_vc_t1_ParamLimits

0x27c0,	// (0x000148a5) main_pane_set_vc_t1

0x27d5,	// (0x000148ba) main_pane_set_vc_t2_ParamLimits

0x27d5,	// (0x000148ba) main_pane_set_vc_t2

0x27e7,	// (0x000148cc) main_pane_set_vc_t3_ParamLimits

0x27e7,	// (0x000148cc) main_pane_set_vc_t3

0x27f9,	// (0x000148de) main_pane_set_vc_t4_ParamLimits

0x27f9,	// (0x000148de) main_pane_set_vc_t4

0x0003,

0xfa5a,	// (0x00021b3f) main_pane_set_vc_t_ParamLimits

0xfa5a,	// (0x00021b3f) main_pane_set_vc_t

0x281d,	// (0x00014902) setting_code_pane_vc_ParamLimits

0x281d,	// (0x00014902) setting_code_pane_vc

0x282c,	// (0x00014911) setting_slider_graphic_pane_vc

0x282c,	// (0x00014911) setting_slider_pane_vc

0x282c,	// (0x00014911) setting_text_pane_vc

0x282c,	// (0x00014911) setting_volume_pane_vc

0x2834,	// (0x00014919) scroll_pane_cp121_vc

0xe9aa,	// (0x00020a8f) set_content_pane_vc

0x29e7,	// (0x00014acc) button_value_adjust_pane_g1

0x29f0,	// (0x00014ad5) button_value_adjust_pane_g2

0x0001,

0xfaad,	// (0x00021b92) button_value_adjust_pane_g

0x29f9,	// (0x00014ade) form_field_slider_wide_pane_vc_t1_ParamLimits

0x29f9,	// (0x00014ade) form_field_slider_wide_pane_vc_t1

0x2a0f,	// (0x00014af4) form_field_slider_wide_pane_vc_t2_ParamLimits

0x2a0f,	// (0x00014af4) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab2,	// (0x00021b97) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab2,	// (0x00021b97) form_field_slider_wide_pane_vc_t

0xdd55,	// (0x0001fe3a) input_focus_pane_cp10_vc_ParamLimits

0xdd55,	// (0x0001fe3a) input_focus_pane_cp10_vc

0x2a24,	// (0x00014b09) slider_cont_pane_cp1_vc_ParamLimits

0x2a24,	// (0x00014b09) slider_cont_pane_cp1_vc

0x26ef,	// (0x000147d4) slider_form_pane_g1_cp2

0x26f8,	// (0x000147dd) slider_form_pane_g2_cp2

0x2a3f,	// (0x00014b24) form_field_slider_pane_vc_t3

0x2a4d,	// (0x00014b32) form_field_slider_pane_vc_t4

0x2a5b,	// (0x00014b40) slider_form_pane_vc_ParamLimits

0x2a5b,	// (0x00014b40) slider_form_pane_vc

0x2a68,	// (0x00014b4d) form_field_slider_pane_vc_t1_ParamLimits

0x2a68,	// (0x00014b4d) form_field_slider_pane_vc_t1

0x2a7e,	// (0x00014b63) form_field_slider_pane_vc_t2_ParamLimits

0x2a7e,	// (0x00014b63) form_field_slider_pane_vc_t2

0x0001,

0xfac2,	// (0x00021ba7) form_field_slider_pane_vc_t_ParamLimits

0xfac2,	// (0x00021ba7) form_field_slider_pane_vc_t

0xdd55,	// (0x0001fe3a) input_focus_pane_cp9_vc_ParamLimits

0xdd55,	// (0x0001fe3a) input_focus_pane_cp9_vc

0x2a90,	// (0x00014b75) slider_cont_pane_vc_ParamLimits

0x2a90,	// (0x00014b75) slider_cont_pane_vc

0x2aa2,	// (0x00014b87) list_form_graphic_pane_cp_vc_ParamLimits

0x2aa2,	// (0x00014b87) list_form_graphic_pane_cp_vc

0x1237,	// (0x0001331c) form_field_popup_wide_pane_vc_g1

0x2ab7,	// (0x00014b9c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x2ab7,	// (0x00014b9c) form_field_popup_wide_pane_vc_t1

0xe9bf,	// (0x00020aa4) input_focus_pane_cp8_vc_ParamLimits

0xe9bf,	// (0x00020aa4) input_focus_pane_cp8_vc

0x2acc,	// (0x00014bb1) list_form_wide_pane_vc_ParamLimits

0x2acc,	// (0x00014bb1) list_form_wide_pane_vc

0x2ad8,	// (0x00014bbd) list_form_graphic_pane_vc_g1

0x2ae0,	// (0x00014bc5) list_form_graphic_pane_vc_t1_ParamLimits

0x2ae0,	// (0x00014bc5) list_form_graphic_pane_vc_t1

0xdd6b,	// (0x0001fe50) list_highlight_pane_cp5_vc_ParamLimits

0xdd6b,	// (0x0001fe50) list_highlight_pane_cp5_vc

0x2afc,	// (0x00014be1) list_form_graphic_pane_vc_ParamLimits

0x2afc,	// (0x00014be1) list_form_graphic_pane_vc

0x1237,	// (0x0001331c) form_field_popup_pane_vc_g1

0x2b12,	// (0x00014bf7) form_field_popup_pane_vc_t1_ParamLimits

0x2b12,	// (0x00014bf7) form_field_popup_pane_vc_t1

0xe9bf,	// (0x00020aa4) input_focus_pane_cp7_vc_ParamLimits

0xe9bf,	// (0x00020aa4) input_focus_pane_cp7_vc

0x2b27,	// (0x00014c0c) list_form_pane_vc_ParamLimits

0x2b27,	// (0x00014c0c) list_form_pane_vc

0x2b33,	// (0x00014c18) data_form_pane_vc_t1_ParamLimits

0x2b33,	// (0x00014c18) data_form_pane_vc_t1

0xea0e,	// (0x00020af3) input_focus_pane_vc_g1

0xea16,	// (0x00020afb) input_focus_pane_vc_g2

0xea1e,	// (0x00020b03) input_focus_pane_vc_g3

0xea26,	// (0x00020b0b) input_focus_pane_vc_g4

0xea2e,	// (0x00020b13) input_focus_pane_vc_g5

0xea36,	// (0x00020b1b) input_focus_pane_vc_g6

0xea3e,	// (0x00020b23) input_focus_pane_vc_g7

0xea46,	// (0x00020b2b) input_focus_pane_vc_g8

0xea4e,	// (0x00020b33) input_focus_pane_vc_g9

0xdc85,	// (0x0001fd6a) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x000217b5) input_focus_pane_vc_g

0x122b,	// (0x00013310) data_form_pane_vc_ParamLimits

0x122b,	// (0x00013310) data_form_pane_vc

0x1237,	// (0x0001331c) form_field_data_pane_vc_g1

0x2b65,	// (0x00014c4a) form_field_data_pane_vc_t1_ParamLimits

0x2b65,	// (0x00014c4a) form_field_data_pane_vc_t1

0xe9bf,	// (0x00020aa4) input_focus_pane_vc_ParamLimits

0xe9bf,	// (0x00020aa4) input_focus_pane_vc

0xef2a,	// (0x0002100f) button_value_adjust_pane_cp3_vc

0x2b7b,	// (0x00014c60) button_value_adjust_pane_cp5_vc

0x2b4e,	// (0x00014c33) form_field_data_pane_vc_ParamLimits

0x2b4e,	// (0x00014c33) form_field_data_pane_vc

0xef32,	// (0x00021017) form_field_data_pane_vc_cp2

0x2b83,	// (0x00014c68) form_field_data_wide_pane_vc_ParamLimits

0x2b83,	// (0x00014c68) form_field_data_wide_pane_vc

0x2b99,	// (0x00014c7e) form_field_data_wide_pane_vc_cp2

0x2ba1,	// (0x00014c86) form_field_popup_pane_vc_ParamLimits

0x2ba1,	// (0x00014c86) form_field_popup_pane_vc

0x2bb8,	// (0x00014c9d) form_field_popup_wide_pane_vc_ParamLimits

0x2bb8,	// (0x00014c9d) form_field_popup_wide_pane_vc

0x2bce,	// (0x00014cb3) form_field_slider_pane_vc_ParamLimits

0x2bce,	// (0x00014cb3) form_field_slider_pane_vc

0x2be1,	// (0x00014cc6) form_field_slider_wide_pane_vc_ParamLimits

0x2be1,	// (0x00014cc6) form_field_slider_wide_pane_vc

0xc8a9,	// (0x0001e98e) grid_touch_1_pane_ParamLimits

0xc8a9,	// (0x0001e98e) grid_touch_1_pane

0xc8bd,	// (0x0001e9a2) grid_touch_2_pane_ParamLimits

0xc8bd,	// (0x0001e9a2) grid_touch_2_pane

0x2c3d,	// (0x00014d22) touch_pane_g1_ParamLimits

0x2c3d,	// (0x00014d22) touch_pane_g1

0x2bf4,	// (0x00014cd9) cell_app_pane_cp_wide_ParamLimits

0x2bf4,	// (0x00014cd9) cell_app_pane_cp_wide

0x2c04,	// (0x00014ce9) grid_popup_fast_wide_pane_ParamLimits

0x2c04,	// (0x00014ce9) grid_popup_fast_wide_pane

0x2c18,	// (0x00014cfd) scroll_pane_cp19_ParamLimits

0x2c18,	// (0x00014cfd) scroll_pane_cp19

0xdd07,	// (0x0001fdec) bg_popup_window_pane_cp20

0x2c2c,	// (0x00014d11) listscroll_popup_fast_wide_pane

0xef3a,	// (0x0002101f) grid_indicator_nsta_pane

0x2c34,	// (0x00014d19) clock_nsta_pane_g1

0x2c4b,	// (0x00014d30) clock_nsta_pane_t1

0xc8e7,	// (0x0001e9cc) cell_indicator_nsta_pane_ParamLimits

0xc8e7,	// (0x0001e9cc) cell_indicator_nsta_pane

0x2c3d,	// (0x00014d22) cell_indicator_nsta_pane_g1

0xc904,	// (0x0001e9e9) cell_indicator_nsta_pane_g2

0x0001,

0xfacc,	// (0x00021bb1) cell_indicator_nsta_pane_g

0x2c67,	// (0x00014d4c) clock_nsta_pane_cp

0x2c6f,	// (0x00014d54) indicator_nsta_pane_cp

0x2c78,	// (0x00014d5d) nsta_clock_indic_pane_g1

0xddd3,	// (0x0001feb8) grid_indicator_pane

0xee60,	// (0x00020f45) scroll_pane_cp29

0x4a2d,	// (0x00016b12) indicator_nsta_pane_cp2_ParamLimits

0x4a2d,	// (0x00016b12) indicator_nsta_pane_cp2

0xdd6b,	// (0x0001fe50) main_apps_wheel_pane

0x135a,	// (0x0001343f) form_midp_field_text_pane_ParamLimits

0x1487,	// (0x0001356c) scroll_bar_cp050_ParamLimits

0x2cb0,	// (0x00014d95) cell_indicator_pane_ParamLimits

0x2cb0,	// (0x00014d95) cell_indicator_pane

0x2cc6,	// (0x00014dab) cell_indicator_pane_g1

0xc919,	// (0x0001e9fe) grid_wheel_folder_pane_ParamLimits

0xc919,	// (0x0001e9fe) grid_wheel_folder_pane

0xc927,	// (0x0001ea0c) list_wheel_apps_pane_ParamLimits

0xc927,	// (0x0001ea0c) list_wheel_apps_pane

0xc933,	// (0x0001ea18) main_apps_wheel_pane_g1_ParamLimits

0xc933,	// (0x0001ea18) main_apps_wheel_pane_g1

0xc93f,	// (0x0001ea24) main_apps_wheel_pane_g2_ParamLimits

0xc93f,	// (0x0001ea24) main_apps_wheel_pane_g2

0x0001,

0xfadb,	// (0x00021bc0) main_apps_wheel_pane_g_ParamLimits

0xfadb,	// (0x00021bc0) main_apps_wheel_pane_g

0xc94b,	// (0x0001ea30) main_apps_wheel_pane_t1_ParamLimits

0xc94b,	// (0x0001ea30) main_apps_wheel_pane_t1

0xc95d,	// (0x0001ea42) list_wheel_apps_pane_g1

0xc965,	// (0x0001ea4a) list_wheel_apps_pane_g2

0xc96d,	// (0x0001ea52) list_wheel_apps_pane_g3

0xc975,	// (0x0001ea5a) list_wheel_apps_pane_g4

0xc97d,	// (0x0001ea62) list_wheel_apps_pane_g5

0x0004,

0xfae0,	// (0x00021bc5) list_wheel_apps_pane_g

0xdd6b,	// (0x0001fe50) navi_icon_text_pane

0xbe09,	// (0x0001deee) aid_fill_nsta

0x5d9c,	// (0x00017e81) navi_icon_text_pane_g1

0x5da8,	// (0x00017e8d) navi_icon_text_pane_t1

0xf0f3,	// (0x000211d8) list_set_graphic_pane_t1_ParamLimits

0xf0f3,	// (0x000211d8) list_set_graphic_pane_t1

0x1b3c,	// (0x00013c21) popup_midp_note_alarm_window_t6_ParamLimits

0x1b3c,	// (0x00013c21) popup_midp_note_alarm_window_t6

0x1b4e,	// (0x00013c33) popup_midp_note_alarm_window_t7_ParamLimits

0x1b4e,	// (0x00013c33) popup_midp_note_alarm_window_t7

0x1b60,	// (0x00013c45) popup_midp_note_alarm_window_t8_ParamLimits

0x1b60,	// (0x00013c45) popup_midp_note_alarm_window_t8

0x1b72,	// (0x00013c57) popup_midp_note_alarm_window_t9_ParamLimits

0x1b72,	// (0x00013c57) popup_midp_note_alarm_window_t9

0x1b84,	// (0x00013c69) popup_midp_note_alarm_window_t10_ParamLimits

0x1b84,	// (0x00013c69) popup_midp_note_alarm_window_t10

0x1b96,	// (0x00013c7b) popup_midp_note_alarm_window_t11_ParamLimits

0x1b96,	// (0x00013c7b) popup_midp_note_alarm_window_t11

0x1ba8,	// (0x00013c8d) scroll_pane_cp17_ParamLimits

0x1ba8,	// (0x00013c8d) scroll_pane_cp17

0x55db,	// (0x000176c0) volume_small_pane_cp_g1

0x5dba,	// (0x00017e9f) volume_small_pane_cp_g2

0x5dc3,	// (0x00017ea8) volume_small_pane_cp_g3

0x5dcc,	// (0x00017eb1) volume_small_pane_cp_g4

0x5608,	// (0x000176ed) volume_small_pane_cp_g5

0x5dd5,	// (0x00017eba) volume_small_pane_cp_g6

0x5dde,	// (0x00017ec3) volume_small_pane_cp_g7

0x5de7,	// (0x00017ecc) volume_small_pane_cp_g8

0x5df0,	// (0x00017ed5) volume_small_pane_cp_g9

0x5df9,	// (0x00017ede) volume_small_pane_cp_g10

0xf3a2,	// (0x00021487) midp_ticker_pane_g1_ParamLimits

0xf3ae,	// (0x00021493) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x0002187d) midp_ticker_pane_g_ParamLimits

0xf3ba,	// (0x0002149f) midp_ticker_pane_t1_ParamLimits

0xbe1f,	// (0x0001df04) aid_fill_nsta_2

0x1473,	// (0x00013558) list_form2_midp_pane

0x2298,	// (0x0001437d) midp_editing_number_pane_ParamLimits

0x22a4,	// (0x00014389) midp_ticker_pane_ParamLimits

0x5e02,	// (0x00017ee7) form2_midp_field_pane

0x5e26,	// (0x00017f0b) scroll_pane_cp51

0x5e46,	// (0x00017f2b) form2_midp_button_pane_ParamLimits

0x5e46,	// (0x00017f2b) form2_midp_button_pane

0x5e58,	// (0x00017f3d) form2_midp_content_pane_ParamLimits

0x5e58,	// (0x00017f3d) form2_midp_content_pane

0x5e72,	// (0x00017f57) form2_midp_field_choice_group_pane

0x5e7a,	// (0x00017f5f) form2_midp_field_pane_g1

0x5e82,	// (0x00017f67) form2_midp_field_pane_g2

0x5e8a,	// (0x00017f6f) form2_midp_field_pane_g3

0x5e92,	// (0x00017f77) form2_midp_field_pane_g4

0x0003,

0xfb05,	// (0x00021bea) form2_midp_field_pane_g

0x5e9a,	// (0x00017f7f) form2_midp_gauge_slider_pane

0x5ea2,	// (0x00017f87) form2_midp_gauge_wait_pane

0x5eaa,	// (0x00017f8f) form2_midp_image_pane_ParamLimits

0x5eaa,	// (0x00017f8f) form2_midp_image_pane

0x5ec5,	// (0x00017faa) form2_midp_label_pane_ParamLimits

0x5ec5,	// (0x00017faa) form2_midp_label_pane

0xc9b2,	// (0x0001ea97) form2_midp_label_pane_cp_ParamLimits

0xc9b2,	// (0x0001ea97) form2_midp_label_pane_cp

0x5efd,	// (0x00017fe2) form2_midp_string_pane_ParamLimits

0x5efd,	// (0x00017fe2) form2_midp_string_pane

0xac81,	// (0x0001cd66) form2_midp_text_pane_ParamLimits

0xac81,	// (0x0001cd66) form2_midp_text_pane

0x5f0f,	// (0x00017ff4) form2_midp_time_pane

0x5f1f,	// (0x00018004) input_focus_pane_cp51_ParamLimits

0x5f1f,	// (0x00018004) input_focus_pane_cp51

0x5f37,	// (0x0001801c) form2_midp_label_pane_t1_ParamLimits

0x5f37,	// (0x0001801c) form2_midp_label_pane_t1

0xac9a,	// (0x0001cd7f) form2_mdip_text_pane_t1_ParamLimits

0xac9a,	// (0x0001cd7f) form2_mdip_text_pane_t1

0x414b,	// (0x00016230) form2_midp_time_pane_t1

0x5f7f,	// (0x00018064) form2_midp_gauge_slider_pane_t1

0xc9d1,	// (0x0001eab6) form2_midp_gauge_slider_pane_t2

0xc9e3,	// (0x0001eac8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0e,	// (0x00021bf3) form2_midp_gauge_slider_pane_t

0x5fb5,	// (0x0001809a) form2_midp_slider_pane

0x5fc1,	// (0x000180a6) form2_midp_gauge_wait_pane_t1

0x5fcf,	// (0x000180b4) form2_midp_wait_pane_ParamLimits

0x5fcf,	// (0x000180b4) form2_midp_wait_pane

0xc251,	// (0x0001e336) list_single_2graphic_pane_cp4_ParamLimits

0xc251,	// (0x0001e336) list_single_2graphic_pane_cp4

0xc9f5,	// (0x0001eada) list_single_midp_graphic_pane_cp_ParamLimits

0xc9f5,	// (0x0001eada) list_single_midp_graphic_pane_cp

0xdd07,	// (0x0001fdec) list_highlight_pane_cp20

0x5ffa,	// (0x000180df) list_single_2graphic_pane_g1_cp4

0x2324,	// (0x00014409) list_single_2graphic_pane_g2_cp4

0x6002,	// (0x000180e7) list_single_2graphic_pane_t1_cp4

0xdd6b,	// (0x0001fe50) list_highlight_pane_cp21

0x6011,	// (0x000180f6) list_single_midp_graphic_pane_g4_cp

0x6020,	// (0x00018105) list_single_midp_graphic_pane_t1_cp

0xca13,	// (0x0001eaf8) form2_mdip_string_pane_t1_ParamLimits

0xca13,	// (0x0001eaf8) form2_mdip_string_pane_t1

0xdd07,	// (0x0001fdec) bg_wml_button_pane_cp2

0xdc85,	// (0x0001fd6a) form2_midp_image_pane_g1

0x3897,	// (0x0001597c) list_double_large_graphic_pane_g5_ParamLimits

0x3897,	// (0x0001597c) list_double_large_graphic_pane_g5

0xb65f,	// (0x0001d744) midp_form_pane_ParamLimits

0xdd6b,	// (0x0001fe50) main_apps_wheel_pane_ParamLimits

0xbbab,	// (0x0001dc90) popup_preview_window_ParamLimits

0xbbab,	// (0x0001dc90) popup_preview_window

0x0edf,	// (0x00012fc4) popup_touch_info_window_ParamLimits

0x0edf,	// (0x00012fc4) popup_touch_info_window

0x0efd,	// (0x00012fe2) popup_touch_menu_window_ParamLimits

0x0efd,	// (0x00012fe2) popup_touch_menu_window

0xdc7b,	// (0x0001fd60) bg_popup_sub_pane_cp6

0x60ad,	// (0x00018192) list_touch_menu_pane

0x60b5,	// (0x0001819a) list_single_touch_menu_pane_ParamLimits

0x60b5,	// (0x0001819a) list_single_touch_menu_pane

0x60cc,	// (0x000181b1) list_single_touch_menu_pane_t1

0xdd6b,	// (0x0001fe50) bg_popup_sub_pane_cp7_ParamLimits

0xdd6b,	// (0x0001fe50) bg_popup_sub_pane_cp7

0x60da,	// (0x000181bf) heading_sub_pane

0x60e2,	// (0x000181c7) list_touch_info_pane_ParamLimits

0x60e2,	// (0x000181c7) list_touch_info_pane

0x60f1,	// (0x000181d6) list_single_touch_info_pane_ParamLimits

0x60f1,	// (0x000181d6) list_single_touch_info_pane

0x6102,	// (0x000181e7) list_single_touch_info_pane_t1

0x6110,	// (0x000181f5) list_single_touch_info_pane_t2

0x0001,

0xfb1c,	// (0x00021c01) list_single_touch_info_pane_t

0xf378,	// (0x0002145d) bg_popup_heading_pane_cp

0x611e,	// (0x00018203) heading_sub_pane_t1

0x11f1,	// (0x000132d6) bg_popup_preview_window_pane_cp_ParamLimits

0x11f1,	// (0x000132d6) bg_popup_preview_window_pane_cp

0x60da,	// (0x000181bf) heading_preview_pane

0x60e2,	// (0x000181c7) list_preview_pane_ParamLimits

0x60e2,	// (0x000181c7) list_preview_pane

0x612c,	// (0x00018211) popup_preview_window_g1

0x60f1,	// (0x000181d6) list_single_preview_pane_ParamLimits

0x60f1,	// (0x000181d6) list_single_preview_pane

0x6134,	// (0x00018219) list_single_preview_pane_g1

0x613c,	// (0x00018221) list_single_preview_pane_t1

0x6102,	// (0x000181e7) list_single_preview_pane_t2

0x0001,

0xfb21,	// (0x00021c06) list_single_preview_pane_t

0x614a,	// (0x0001822f) bg_popup_heading_pane_cp2_ParamLimits

0x614a,	// (0x0001822f) bg_popup_heading_pane_cp2

0x6160,	// (0x00018245) heading_preview_pane_g1

0x6168,	// (0x0001824d) heading_preview_pane_t1_ParamLimits

0x6168,	// (0x0001824d) heading_preview_pane_t1

0xddea,	// (0x0001fecf) soft_indicator_pane_t1_ParamLimits

0xe28e,	// (0x00020373) scroll_pane_ParamLimits

0xed5c,	// (0x00020e41) scroll_sc2_left_pane

0xed65,	// (0x00020e4a) scroll_sc2_right_pane

0xed84,	// (0x00020e69) scroll_bg_pane_g1_ParamLimits

0xed99,	// (0x00020e7e) scroll_bg_pane_g2_ParamLimits

0xedb1,	// (0x00020e96) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x0002180c) scroll_bg_pane_g_ParamLimits

0xed84,	// (0x00020e69) scroll_handle_pane_g1_ParamLimits

0xedd3,	// (0x00020eb8) scroll_handle_pane_g2_ParamLimits

0xedb1,	// (0x00020e96) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x00021813) scroll_handle_pane_g_ParamLimits

0x0e37,	// (0x00012f1c) popup_choice_list_window_ParamLimits

0x0e37,	// (0x00012f1c) popup_choice_list_window

0x1031,	// (0x00013116) choice_list_pane

0x10a7,	// (0x0001318c) cell_toolbar_pane_t1

0x10cf,	// (0x000131b4) toolbar_button_pane_ParamLimits

0x1f6e,	// (0x00014053) ai_gene_pane_1_t2_ParamLimits

0x1f6e,	// (0x00014053) ai_gene_pane_1_t2

0x0001,

0xf938,	// (0x00021a1d) ai_gene_pane_1_t_ParamLimits

0xf938,	// (0x00021a1d) ai_gene_pane_1_t

0x6185,	// (0x0001826a) scroll_sc2_left_pane_g1

0x6185,	// (0x0001826a) scroll_sc2_right_pane_g1

0x0dc3,	// (0x00012ea8) bg_popup_sub_pane_cp10

0x618f,	// (0x00018274) list_choice_list_pane

0x61a6,	// (0x0001828b) list_single_choice_list_pane_ParamLimits

0x61a6,	// (0x0001828b) list_single_choice_list_pane

0x61ba,	// (0x0001829f) list_single_choice_list_pane_g1

0xeb26,	// (0x00020c0b) list_single_choice_list_pane_t1_ParamLimits

0xeb26,	// (0x00020c0b) list_single_choice_list_pane_t1

0x61c2,	// (0x000182a7) choice_list_pane_g1

0x61ca,	// (0x000182af) choice_list_pane_t1

0xdc7b,	// (0x0001fd60) input_focus_pane_cp11

0xecb1,	// (0x00020d96) title_pane_stacon_g2_ParamLimits

0xecb1,	// (0x00020d96) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x000217f2) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x000217f2) title_pane_stacon_g

0xf378,	// (0x0002145d) cursor_press_pane

0xb912,	// (0x0001d9f7) popup_fep_hwr_window_ParamLimits

0xb912,	// (0x0001d9f7) popup_fep_hwr_window

0x0e89,	// (0x00012f6e) popup_fep_vkb_window_ParamLimits

0x0e89,	// (0x00012f6e) popup_fep_vkb_window

0x61d8,	// (0x000182bd) cursor_press_pane_g1

0x0002,

0xfb4a,	// (0x00021c2f) fep_vkb_side_pane_g_ParamLimits

0x6215,	// (0x000182fa) fep_hwr_candidate_pane_ParamLimits

0x6215,	// (0x000182fa) fep_hwr_candidate_pane

0x623d,	// (0x00018322) fep_hwr_side_pane_ParamLimits

0x623d,	// (0x00018322) fep_hwr_side_pane

0x625d,	// (0x00018342) fep_hwr_top_pane_ParamLimits

0x625d,	// (0x00018342) fep_hwr_top_pane

0x6275,	// (0x0001835a) fep_hwr_write_pane_ParamLimits

0x6275,	// (0x0001835a) fep_hwr_write_pane

0xfb4a,	// (0x00021c2f) fep_vkb_side_pane_g

0x62af,	// (0x00018394) fep_hwr_top_pane_g1

0x62c1,	// (0x000183a6) fep_hwr_top_pane_g2

0x62d3,	// (0x000183b8) fep_hwr_top_pane_g3

0x0002,

0xfb26,	// (0x00021c0b) fep_hwr_top_pane_g

0x62e8,	// (0x000183cd) fep_hwr_top_text_pane

0xeecd,	// (0x00020fb2) fep_hwr_top_text_pane_g1

0x63c0,	// (0x000184a5) fep_hwr_top_text_pane_t1

0x6408,	// (0x000184ed) fep_hwr_candidate_pane_g1

0x663e,	// (0x00018723) fep_vkb_keypad_pane_g3_ParamLimits

0x663e,	// (0x00018723) fep_vkb_keypad_pane_g3

0x6660,	// (0x00018745) fep_vkb_keypad_pane_g4_ParamLimits

0x6660,	// (0x00018745) fep_vkb_keypad_pane_g4

0x66cf,	// (0x000187b4) fep_vkb_bottom_pane_g2_ParamLimits

0x66cf,	// (0x000187b4) fep_vkb_bottom_pane_g2

0x0001,

0xfb51,	// (0x00021c36) fep_vkb_bottom_pane_g_ParamLimits

0xfb51,	// (0x00021c36) fep_vkb_bottom_pane_g

0x6185,	// (0x0001826a) cell_vkb_side_pane_g2

0x0001,

0xfb5b,	// (0x00021c40) cell_vkb_side_pane_g

0x675a,	// (0x0001883f) cell_vkb_side_pane_t1

0x6768,	// (0x0001884d) cell_vkb_side_pane_t1_copy1

0x6185,	// (0x0001826a) bg_fep_vkb_candidate_pane_g2

0x688c,	// (0x00018971) cell_vkb_candidate_pane_ParamLimits

0x643c,	// (0x00018521) aid_size_cell_vkb_ParamLimits

0x643c,	// (0x00018521) aid_size_cell_vkb

0x688c,	// (0x00018971) cell_vkb_candidate_pane

0x68be,	// (0x000189a3) bg_popup_fep_shadow_pane_g1

0x64b2,	// (0x00018597) fep_vkb_bottom_pane_ParamLimits

0x64b2,	// (0x00018597) fep_vkb_bottom_pane

0x64ef,	// (0x000185d4) fep_vkb_candidate_pane_ParamLimits

0x64ef,	// (0x000185d4) fep_vkb_candidate_pane

0x650b,	// (0x000185f0) fep_vkb_keypad_pane_ParamLimits

0x650b,	// (0x000185f0) fep_vkb_keypad_pane

0x653f,	// (0x00018624) fep_vkb_side_pane_ParamLimits

0x653f,	// (0x00018624) fep_vkb_side_pane

0x656b,	// (0x00018650) fep_vkb_top_pane_ParamLimits

0x656b,	// (0x00018650) fep_vkb_top_pane

0x6597,	// (0x0001867c) fep_vkb_top_pane_g1_ParamLimits

0x6597,	// (0x0001867c) fep_vkb_top_pane_g1

0x65a6,	// (0x0001868b) fep_vkb_top_pane_g2_ParamLimits

0x65a6,	// (0x0001868b) fep_vkb_top_pane_g2

0x65b5,	// (0x0001869a) fep_vkb_top_pane_g3_ParamLimits

0x65b5,	// (0x0001869a) fep_vkb_top_pane_g3

0x0003,

0xfb41,	// (0x00021c26) fep_vkb_top_pane_g_ParamLimits

0xfb41,	// (0x00021c26) fep_vkb_top_pane_g

0x65d3,	// (0x000186b8) fep_vkb_top_text_pane_ParamLimits

0x65d3,	// (0x000186b8) fep_vkb_top_text_pane

0xcada,	// (0x0001ebbf) fep_vkb_side_pane_g1_ParamLimits

0xcada,	// (0x0001ebbf) fep_vkb_side_pane_g1

0x662d,	// (0x00018712) grid_vkb_side_pane_ParamLimits

0x662d,	// (0x00018712) grid_vkb_side_pane

0x68c6,	// (0x000189ab) bg_popup_fep_shadow_pane_g2

0x68cf,	// (0x000189b4) bg_popup_fep_shadow_pane_g3

0x68d7,	// (0x000189bc) bg_popup_fep_shadow_pane_g4

0x68e0,	// (0x000189c5) bg_popup_fep_shadow_pane_g5

0x68e8,	// (0x000189cd) bg_popup_fep_shadow_pane_g6

0x68f0,	// (0x000189d5) bg_popup_fep_shadow_pane_g7

0xea2e,	// (0x00020b13) bg_popup_fep_shadow_pane_g8

0x667e,	// (0x00018763) grid_vkb_keypad_number_pane_ParamLimits

0x667e,	// (0x00018763) grid_vkb_keypad_number_pane

0x668e,	// (0x00018773) grid_vkb_keypad_pane_ParamLimits

0x668e,	// (0x00018773) grid_vkb_keypad_pane

0x66b4,	// (0x00018799) fep_vkb_bottom_pane_g1_ParamLimits

0x66b4,	// (0x00018799) fep_vkb_bottom_pane_g1

0x66dd,	// (0x000187c2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x66dd,	// (0x000187c2) grid_vkb_keypad_bottom_left_pane

0x66f2,	// (0x000187d7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x66f2,	// (0x000187d7) grid_vkb_keypad_bottom_right_pane

0x6707,	// (0x000187ec) fep_vkb_top_text_pane_g1

0xcb21,	// (0x0001ec06) fep_vkb_top_text_pane_t1

0xcb33,	// (0x0001ec18) cell_vkb_side_pane_ParamLimits

0xcb33,	// (0x0001ec18) cell_vkb_side_pane

0x6185,	// (0x0001826a) cell_vkb_side_pane_g1

0x6776,	// (0x0001885b) cell_vkb_keypad_pane_ParamLimits

0x6776,	// (0x0001885b) cell_vkb_keypad_pane

0x67e3,	// (0x000188c8) cell_vkb_keypad_pane_g1

0x0008,

0xfb6e,	// (0x00021c53) bg_popup_fep_shadow_pane_g

0x6185,	// (0x0001826a) cell_hwr_side_pane_g1

0x6185,	// (0x0001826a) cell_hwr_side_pane_g2

0x67ed,	// (0x000188d2) cell_vkb_keypad_pane_t1

0xcb49,	// (0x0001ec2e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcb49,	// (0x0001ec2e) cell_vkb_keypad_bottom_left_pane

0xcb5e,	// (0x0001ec43) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcb5e,	// (0x0001ec43) cell_vkb_keypad_bottom_right_pane

0x6185,	// (0x0001826a) cell_vkb_keypad_bottom_left_pane_g1

0x6185,	// (0x0001826a) cell_vkb_keypad_bottom_right_pane_g1

0x6851,	// (0x00018936) cell_vkb_keypad_number_pane_ParamLimits

0x6851,	// (0x00018936) cell_vkb_keypad_number_pane

0x6870,	// (0x00018955) cell_vkb_keypad_number_pane_g1

0x687a,	// (0x0001895f) cell_vkb_keypad_number_pane_g2

0x6883,	// (0x00018968) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb60,	// (0x00021c45) cell_vkb_keypad_number_pane_g

0x67ed,	// (0x000188d2) cell_vkb_keypad_number_pane_t1

0x68a5,	// (0x0001898a) fep_vkb_candidate_pane_g1

0x0001,

0xfb5b,	// (0x00021c40) cell_hwr_side_pane_g

0x6900,	// (0x000189e5) cell_hwr_side_pane_t1

0x690e,	// (0x000189f3) cell_hwr_side_pane_t1_copy1

0x65c5,	// (0x000186aa) cell_hwr_candidate_pane_g1

0x695e,	// (0x00018a43) cell_hwr_candidate_pane_t1

0x6185,	// (0x0001826a) cell_vkb_candidate_pane_g2

0x69b1,	// (0x00018a96) cell_vkb_candidate_pane_t1

0x61e0,	// (0x000182c5) bg_popup_fep_shadow_pane_ParamLimits

0x61e0,	// (0x000182c5) bg_popup_fep_shadow_pane

0x628f,	// (0x00018374) bg_fep_hwr_top_pane_g4

0x62fd,	// (0x000183e2) bg_hwr_side_pane_g1_ParamLimits

0x62fd,	// (0x000183e2) bg_hwr_side_pane_g1

0xca95,	// (0x0001eb7a) cell_hwr_side_pane_ParamLimits

0xca95,	// (0x0001eb7a) cell_hwr_side_pane

0x636b,	// (0x00018450) fep_hwr_write_pane_g1_ParamLimits

0x636b,	// (0x00018450) fep_hwr_write_pane_g1

0x6378,	// (0x0001845d) fep_hwr_write_pane_g2_ParamLimits

0x6378,	// (0x0001845d) fep_hwr_write_pane_g2

0x6385,	// (0x0001846a) fep_hwr_write_pane_g3_ParamLimits

0x6385,	// (0x0001846a) fep_hwr_write_pane_g3

0xcab5,	// (0x0001eb9a) fep_hwr_write_pane_g4_ParamLimits

0xcab5,	// (0x0001eb9a) fep_hwr_write_pane_g4

0x0005,

0xfb2d,	// (0x00021c12) fep_hwr_write_pane_g_ParamLimits

0xfb2d,	// (0x00021c12) fep_hwr_write_pane_g

0x628f,	// (0x00018374) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x628f,	// (0x00018374) bg_fep_hwr_candidate_pane_g2

0x63ce,	// (0x000184b3) cell_hwr_candidate_pane_ParamLimits

0x63ce,	// (0x000184b3) cell_hwr_candidate_pane

0x6408,	// (0x000184ed) fep_hwr_candidate_pane_g1_ParamLimits

0x646a,	// (0x0001854f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x646a,	// (0x0001854f) bg_popup_fep_shadow_pane_cp2

0x65c5,	// (0x000186aa) fep_vkb_top_pane_g4_ParamLimits

0x65c5,	// (0x000186aa) fep_vkb_top_pane_g4

0x660b,	// (0x000186f0) fep_vkb_side_pane_g2_ParamLimits

0x660b,	// (0x000186f0) fep_vkb_side_pane_g2

0xa98f,	// (0x0001ca74) list_setting_pane_t4_ParamLimits

0xa98f,	// (0x0001ca74) list_setting_pane_t4

0xaa21,	// (0x0001cb06) list_setting_number_pane_t5_ParamLimits

0xaa21,	// (0x0001cb06) list_setting_number_pane_t5

0xb59f,	// (0x0001d684) list_double_heading_pane_cp2_ParamLimits

0xb59f,	// (0x0001d684) list_double_heading_pane_cp2

0xf1ed,	// (0x000212d2) list_double_heading_pane_g1_cp2_ParamLimits

0xf1ed,	// (0x000212d2) list_double_heading_pane_g1_cp2

0x69bf,	// (0x00018aa4) list_double_heading_pane_g2_cp2_ParamLimits

0x69bf,	// (0x00018aa4) list_double_heading_pane_g2_cp2

0x69d3,	// (0x00018ab8) list_double_heading_pane_t1_cp2_ParamLimits

0x69d3,	// (0x00018ab8) list_double_heading_pane_t1_cp2

0x69e9,	// (0x00018ace) list_double_heading_pane_t2_cp2_ParamLimits

0x69e9,	// (0x00018ace) list_double_heading_pane_t2_cp2

0xdc73,	// (0x0001fd58) aid_value_unit2

0x4689,	// (0x0001676e) popup_preview_fixed_window

0xdeca,	// (0x0001ffaf) bg_popup_preview_window_pane_cp02

0x69fb,	// (0x00018ae0) list_preview_fixed_pane

0x6a41,	// (0x00018b26) list_empty_pane_fp_ParamLimits

0x6a41,	// (0x00018b26) list_empty_pane_fp

0x6a41,	// (0x00018b26) list_single_cale_day_pane_fp_ParamLimits

0x6a41,	// (0x00018b26) list_single_cale_day_pane_fp

0x6a41,	// (0x00018b26) list_single_graphic_heading_pane_fp_ParamLimits

0x6a41,	// (0x00018b26) list_single_graphic_heading_pane_fp

0x6a41,	// (0x00018b26) list_single_graphic_pane_fp_ParamLimits

0x6a41,	// (0x00018b26) list_single_graphic_pane_fp

0x6a41,	// (0x00018b26) list_single_heading_pane_fp_ParamLimits

0x6a41,	// (0x00018b26) list_single_heading_pane_fp

0x6a41,	// (0x00018b26) list_single_pane_fp_ParamLimits

0x6a41,	// (0x00018b26) list_single_pane_fp

0x6a55,	// (0x00018b3a) list_single_pane_fp_g1_ParamLimits

0x6a55,	// (0x00018b3a) list_single_pane_fp_g1

0x39b8,	// (0x00015a9d) list_single_pane_fp_g2_ParamLimits

0x39b8,	// (0x00015a9d) list_single_pane_fp_g2

0x415e,	// (0x00016243) list_single_pane_fp_g3_ParamLimits

0x415e,	// (0x00016243) list_single_pane_fp_g3

0x6a61,	// (0x00018b46) list_single_pane_fp_g4_ParamLimits

0x6a61,	// (0x00018b46) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x00021c74) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x00021c74) list_single_pane_fp_g

0x4172,	// (0x00016257) list_single_pane_fp_t1_ParamLimits

0x4172,	// (0x00016257) list_single_pane_fp_t1

0x4189,	// (0x0001626e) list_single_graphic_pane_fp_g1_ParamLimits

0x4189,	// (0x0001626e) list_single_graphic_pane_fp_g1

0x6a55,	// (0x00018b3a) list_single_graphic_pane_fp_g2_ParamLimits

0x6a55,	// (0x00018b3a) list_single_graphic_pane_fp_g2

0x39b8,	// (0x00015a9d) list_single_graphic_pane_fp_g3_ParamLimits

0x39b8,	// (0x00015a9d) list_single_graphic_pane_fp_g3

0x415e,	// (0x00016243) list_single_graphic_pane_fp_g4_ParamLimits

0x415e,	// (0x00016243) list_single_graphic_pane_fp_g4

0x6a61,	// (0x00018b46) list_single_graphic_pane_fp_g5_ParamLimits

0x6a61,	// (0x00018b46) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x00021c7d) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x00021c7d) list_single_graphic_pane_fp_g

0x4195,	// (0x0001627a) list_single_graphic_pane_fp_t1_ParamLimits

0x4195,	// (0x0001627a) list_single_graphic_pane_fp_t1

0x4189,	// (0x0001626e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4189,	// (0x0001626e) list_single_graphic_heading_pane_fp_g1

0x6a55,	// (0x00018b3a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6a55,	// (0x00018b3a) list_single_graphic_heading_pane_fp_g2

0x39b8,	// (0x00015a9d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x39b8,	// (0x00015a9d) list_single_graphic_heading_pane_fp_g3

0x415e,	// (0x00016243) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x415e,	// (0x00016243) list_single_graphic_heading_pane_fp_g4

0x6a61,	// (0x00018b46) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6a61,	// (0x00018b46) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00021c7d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00021c7d) list_single_graphic_heading_pane_fp_g

0x41ab,	// (0x00016290) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x41ab,	// (0x00016290) list_single_graphic_heading_pane_fp_t1

0x41c1,	// (0x000162a6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x41c1,	// (0x000162a6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x00021c88) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x00021c88) list_single_graphic_heading_pane_fp_t

0x41d3,	// (0x000162b8) list_single_cale_day_pane_fp_g1_ParamLimits

0x41d3,	// (0x000162b8) list_single_cale_day_pane_fp_g1

0x6a6d,	// (0x00018b52) list_single_cale_day_pane_fp_g2_ParamLimits

0x6a6d,	// (0x00018b52) list_single_cale_day_pane_fp_g2

0x420b,	// (0x000162f0) list_single_cale_day_pane_fp_g3_ParamLimits

0x420b,	// (0x000162f0) list_single_cale_day_pane_fp_g3

0x4233,	// (0x00016318) list_single_cale_day_pane_fp_g4_ParamLimits

0x4233,	// (0x00016318) list_single_cale_day_pane_fp_g4

0x4257,	// (0x0001633c) list_single_cale_day_pane_fp_g5_ParamLimits

0x4257,	// (0x0001633c) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x00021c8d) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x00021c8d) list_single_cale_day_pane_fp_g

0x427b,	// (0x00016360) list_single_cale_day_pane_fp_t1_ParamLimits

0x427b,	// (0x00016360) list_single_cale_day_pane_fp_t1

0x42a1,	// (0x00016386) list_single_cale_day_pane_fp_t2_ParamLimits

0x42a1,	// (0x00016386) list_single_cale_day_pane_fp_t2

0x42ba,	// (0x0001639f) list_single_cale_day_pane_fp_t3_ParamLimits

0x42ba,	// (0x0001639f) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x00021c98) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x00021c98) list_single_cale_day_pane_fp_t

0x6a55,	// (0x00018b3a) list_empty_pane_fp_g1_ParamLimits

0x6a55,	// (0x00018b3a) list_empty_pane_fp_g1

0x42d3,	// (0x000163b8) list_empty_pane_fp_t1

0x42e1,	// (0x000163c6) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x00021c9f) list_empty_pane_fp_t

0x6a55,	// (0x00018b3a) list_single_heading_pane_fp_g1_ParamLimits

0x6a55,	// (0x00018b3a) list_single_heading_pane_fp_g1

0x39b8,	// (0x00015a9d) list_single_heading_pane_fp_g2_ParamLimits

0x39b8,	// (0x00015a9d) list_single_heading_pane_fp_g2

0x415e,	// (0x00016243) list_single_heading_pane_fp_g3_ParamLimits

0x415e,	// (0x00016243) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x00021ca4) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x00021ca4) list_single_heading_pane_fp_g

0x42ef,	// (0x000163d4) list_single_heading_pane_fp_t1_ParamLimits

0x42ef,	// (0x000163d4) list_single_heading_pane_fp_t1

0x4301,	// (0x000163e6) list_single_heading_pane_fp_t2_ParamLimits

0x4301,	// (0x000163e6) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x00021cab) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x00021cab) list_single_heading_pane_fp_t

0xeb3b,	// (0x00020c20) aid_size_cell_fast

0xdead,	// (0x0001ff92) soft_indicator_pane_cp1_t1

0xeb78,	// (0x00020c5d) cell_app_pane_cp2_ParamLimits

0xeb78,	// (0x00020c5d) cell_app_pane_cp2

0x6202,	// (0x000182e7) fep_hwr_candidate_drop_down_list_pane

0x6422,	// (0x00018507) fep_hwr_candidate_pane_g3_ParamLimits

0x6422,	// (0x00018507) fep_hwr_candidate_pane_g3

0x642f,	// (0x00018514) fep_hwr_candidate_pane_g4_ParamLimits

0x642f,	// (0x00018514) fep_hwr_candidate_pane_g4

0x0002,

0xfb3a,	// (0x00021c1f) fep_hwr_candidate_pane_g_ParamLimits

0xfb3a,	// (0x00021c1f) fep_hwr_candidate_pane_g

0x64de,	// (0x000185c3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x64de,	// (0x000185c3) fep_vkb_candidate_drop_down_list_pane

0x68ad,	// (0x00018992) fep_vkb_candidate_pane_g3

0x68b5,	// (0x0001899a) fep_vkb_candidate_pane_g4

0x0002,

0xfb67,	// (0x00021c4c) fep_vkb_candidate_pane_g

0x65c5,	// (0x000186aa) cell_hwr_candidate_pane_g1_ParamLimits

0x691c,	// (0x00018a01) cell_hwr_candidate_pane_g3_ParamLimits

0x691c,	// (0x00018a01) cell_hwr_candidate_pane_g3

0x693d,	// (0x00018a22) cell_hwr_candidate_pane_g4_ParamLimits

0x693d,	// (0x00018a22) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x00021c66) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x00021c66) cell_hwr_candidate_pane_g

0x697b,	// (0x00018a60) cell_vkb_candidate_pane_g3_ParamLimits

0x697b,	// (0x00018a60) cell_vkb_candidate_pane_g3

0x6996,	// (0x00018a7b) cell_vkb_candidate_pane_g4_ParamLimits

0x6996,	// (0x00018a7b) cell_vkb_candidate_pane_g4

0x6a79,	// (0x00018b5e) cell_app_pane_cp2_g1_ParamLimits

0x6a79,	// (0x00018b5e) cell_app_pane_cp2_g1

0x6a97,	// (0x00018b7c) cell_app_pane_cp2_g2_ParamLimits

0x6a97,	// (0x00018b7c) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x00021cb0) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x00021cb0) cell_app_pane_cp2_g

0x6aa3,	// (0x00018b88) cell_app_pane_cp2_t1_ParamLimits

0x6aa3,	// (0x00018b88) cell_app_pane_cp2_t1

0xe9bf,	// (0x00020aa4) grid_highlight_pane_cp1_ParamLimits

0xe9bf,	// (0x00020aa4) grid_highlight_pane_cp1

0x6ab5,	// (0x00018b9a) cell_hwr_candidate_pane_cp1_ParamLimits

0x6ab5,	// (0x00018b9a) cell_hwr_candidate_pane_cp1

0x65c5,	// (0x000186aa) fep_hwr_candidate_drop_down_list_pane_g1

0x6ad3,	// (0x00018bb8) fep_hwr_candidate_drop_down_list_pane_g2

0x6ae0,	// (0x00018bc5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x00021cb5) fep_hwr_candidate_drop_down_list_pane_g

0x6aed,	// (0x00018bd2) fep_hwr_candidate_drop_down_list_scroll_pane

0x6af6,	// (0x00018bdb) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6af6,	// (0x00018bdb) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6b03,	// (0x00018be8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6b03,	// (0x00018be8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6b10,	// (0x00018bf5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6b10,	// (0x00018bf5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x697b,	// (0x00018a60) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x697b,	// (0x00018a60) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6996,	// (0x00018a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6996,	// (0x00018a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6b1d,	// (0x00018c02) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6b1d,	// (0x00018c02) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6b38,	// (0x00018c1d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6b38,	// (0x00018c1d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6b53,	// (0x00018c38) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6b53,	// (0x00018c38) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x00021cbc) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x00021cbc) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xcb79,	// (0x0001ec5e) cell_vkb_candidate_pane_cp1_ParamLimits

0xcb79,	// (0x0001ec5e) cell_vkb_candidate_pane_cp1

0x65c5,	// (0x000186aa) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x65c5,	// (0x000186aa) fep_vkb_candidate_drop_down_list_pane_g1

0x6ad3,	// (0x00018bb8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6ad3,	// (0x00018bb8) fep_vkb_candidate_drop_down_list_pane_g2

0x6ae0,	// (0x00018bc5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6ae0,	// (0x00018bc5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x00021cb5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd0,	// (0x00021cb5) fep_vkb_candidate_drop_down_list_pane_g

0x6b91,	// (0x00018c76) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6b91,	// (0x00018c76) fep_vkb_candidate_drop_down_list_scroll_pane

0x6b9e,	// (0x00018c83) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6b9e,	// (0x00018c83) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6bab,	// (0x00018c90) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6bab,	// (0x00018c90) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6bb7,	// (0x00018c9c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6bb7,	// (0x00018c9c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x691c,	// (0x00018a01) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x691c,	// (0x00018a01) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x693d,	// (0x00018a22) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x693d,	// (0x00018a22) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6bc3,	// (0x00018ca8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6bc3,	// (0x00018ca8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6be4,	// (0x00018cc9) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6be4,	// (0x00018cc9) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6c05,	// (0x00018cea) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6c05,	// (0x00018cea) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x00021ccd) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x00021ccd) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb026,	// (0x0001d10b) title_pane_g1_ParamLimits

0xb03d,	// (0x0001d122) title_pane_g2_ParamLimits

0xf592,	// (0x00021677) title_pane_g_ParamLimits

0xeebd,	// (0x00020fa2) aid_call2_pane

0xeec5,	// (0x00020faa) aid_call_pane

0xeecd,	// (0x00020fb2) popup_clock_analogue_window_g1

0xeecd,	// (0x00020fb2) popup_clock_analogue_window_g2

0x4937,	// (0x00016a1c) popup_clock_analogue_window_g3

0x4940,	// (0x00016a25) popup_clock_analogue_window_g4

0xdc85,	// (0x0001fd6a) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x00021821) popup_clock_analogue_window_g

0x4948,	// (0x00016a2d) popup_clock_analogue_window_t1

0x4956,	// (0x00016a3b) clock_digital_number_pane_ParamLimits

0x4956,	// (0x00016a3b) clock_digital_number_pane

0x4962,	// (0x00016a47) clock_digital_number_pane_cp02_ParamLimits

0x4962,	// (0x00016a47) clock_digital_number_pane_cp02

0x496e,	// (0x00016a53) clock_digital_number_pane_cp03_ParamLimits

0x496e,	// (0x00016a53) clock_digital_number_pane_cp03

0x497a,	// (0x00016a5f) clock_digital_number_pane_cp04_ParamLimits

0x497a,	// (0x00016a5f) clock_digital_number_pane_cp04

0x4986,	// (0x00016a6b) clock_digital_separator_pane_ParamLimits

0x4986,	// (0x00016a6b) clock_digital_separator_pane

0x4992,	// (0x00016a77) popup_clock_digital_window_t1_ParamLimits

0x4992,	// (0x00016a77) popup_clock_digital_window_t1

0xdc85,	// (0x0001fd6a) clock_digital_number_pane_g1

0xdc85,	// (0x0001fd6a) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x0002182c) clock_digital_number_pane_g

0xdc85,	// (0x0001fd6a) clock_digital_separator_pane_g1

0xdc85,	// (0x0001fd6a) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x0002182c) clock_digital_separator_pane_g

0xbe09,	// (0x0001deee) aid_fill_nsta_ParamLimits

0xbf20,	// (0x0001e005) indicator_nsta_pane_ParamLimits

0x0fda,	// (0x000130bf) popup_clock_analogue_window

0x0fda,	// (0x000130bf) popup_clock_digital_window

0xef3a,	// (0x0002101f) grid_indicator_nsta_pane_ParamLimits

0x2c59,	// (0x00014d3e) clock_nsta_pane_t2

0x0001,

0xfac7,	// (0x00021bac) clock_nsta_pane_t

0x48fb,	// (0x000169e0) aid_size_max_handle

0xb503,	// (0x0001d5e8) aid_size_min_handle

0xf378,	// (0x0002145d) editor_scroll_pane

0x6c20,	// (0x00018d05) ex_editor_pane

0xeb16,	// (0x00020bfb) scroll_pane_cp13

0xe2bb,	// (0x000203a0) scroll_pane_cp14

0xeef7,	// (0x00020fdc) scroll_pane_cp36

0xb5ab,	// (0x0001d690) list_single_graphic_hl_pane_cp2_ParamLimits

0xb5ab,	// (0x0001d690) list_single_graphic_hl_pane_cp2

0xc748,	// (0x0001e82d) list_single_graphic_hl_pane_ParamLimits

0xc748,	// (0x0001e82d) list_single_graphic_hl_pane

0x4317,	// (0x000163fc) aid_size_min_hl_cp1

0x6c28,	// (0x00018d0d) list_highlight_pane_cp34_ParamLimits

0x6c28,	// (0x00018d0d) list_highlight_pane_cp34

0x6c39,	// (0x00018d1e) list_single_graphic_hl_pane_g1_ParamLimits

0x6c39,	// (0x00018d1e) list_single_graphic_hl_pane_g1

0xacb5,	// (0x0001cd9a) list_single_graphic_hl_pane_g2_ParamLimits

0xacb5,	// (0x0001cd9a) list_single_graphic_hl_pane_g2

0xacb5,	// (0x0001cd9a) list_single_graphic_hl_pane_g3_ParamLimits

0xacb5,	// (0x0001cd9a) list_single_graphic_hl_pane_g3

0xacc1,	// (0x0001cda6) list_single_graphic_hl_pane_g4_ParamLimits

0xacc1,	// (0x0001cda6) list_single_graphic_hl_pane_g4

0xaccd,	// (0x0001cdb2) list_single_graphic_hl_pane_g5_ParamLimits

0xaccd,	// (0x0001cdb2) list_single_graphic_hl_pane_g5

0x0004,

0xfbf9,	// (0x00021cde) list_single_graphic_hl_pane_g_ParamLimits

0xfbf9,	// (0x00021cde) list_single_graphic_hl_pane_g

0xace1,	// (0x0001cdc6) list_single_graphic_hl_pane_t1_ParamLimits

0xace1,	// (0x0001cdc6) list_single_graphic_hl_pane_t1

0x6c46,	// (0x00018d2b) aid_size_min_hl_cp2

0x6c4f,	// (0x00018d34) list_highlight_pane_cp34_cp2_ParamLimits

0x6c4f,	// (0x00018d34) list_highlight_pane_cp34_cp2

0x6c39,	// (0x00018d1e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6c39,	// (0x00018d1e) list_single_graphic_hl_pane_g1_cp2

0x6c5c,	// (0x00018d41) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6c5c,	// (0x00018d41) list_single_graphic_hl_pane_g2_cp2

0x6c68,	// (0x00018d4d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6c68,	// (0x00018d4d) list_single_graphic_hl_pane_g3_cp2

0xf1ed,	// (0x000212d2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xf1ed,	// (0x000212d2) list_single_graphic_hl_pane_g4_cp2

0x69bf,	// (0x00018aa4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x69bf,	// (0x00018aa4) list_single_graphic_hl_pane_g5_cp2

0xb727,	// (0x0001d80c) control_pane_g4_ParamLimits

0xb727,	// (0x0001d80c) control_pane_g4

0x0dc3,	// (0x00012ea8) bg_popup_sub_pane_cp10_ParamLimits

0x618f,	// (0x00018274) list_choice_list_pane_ParamLimits

0x619e,	// (0x00018283) scroll_pane_cp23

0xdeca,	// (0x0001ffaf) bg_popup_preview_window_pane_cp02_ParamLimits

0x69fb,	// (0x00018ae0) list_preview_fixed_pane_ParamLimits

0x6a11,	// (0x00018af6) list_preview_fixed_pane_cp_ParamLimits

0x6a11,	// (0x00018af6) list_preview_fixed_pane_cp

0x6a1d,	// (0x00018b02) popup_preview_fixed_window_g1_ParamLimits

0x6a1d,	// (0x00018b02) popup_preview_fixed_window_g1

0x6a29,	// (0x00018b0e) popup_preview_fixed_window_g2_ParamLimits

0x6a29,	// (0x00018b0e) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x00021c6d) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x00021c6d) popup_preview_fixed_window_g

0x488b,	// (0x00016970) aid_navi_side_left_pane_ParamLimits

0x489b,	// (0x00016980) aid_navi_side_right_pane_ParamLimits

0x48aa,	// (0x0001698f) navi_icon_pane_stacon_ParamLimits

0x48ba,	// (0x0001699f) navi_navi_pane_stacon_ParamLimits

0x48aa,	// (0x0001698f) navi_text_pane_stacon_ParamLimits

0xdc7b,	// (0x0001fd60) main_text_info_pane

0x6c8a,	// (0x00018d6f) listscroll_text_info_pane

0x6c92,	// (0x00018d77) list_text_info_pane_ParamLimits

0x6c92,	// (0x00018d77) list_text_info_pane

0x6ca1,	// (0x00018d86) scroll_pane_cp24_ParamLimits

0x6ca1,	// (0x00018d86) scroll_pane_cp24

0xcb99,	// (0x0001ec7e) list_text_info_pane_t1_ParamLimits

0xcb99,	// (0x0001ec7e) list_text_info_pane_t1

0xb892,	// (0x0001d977) popup_fast_swap2_window_ParamLimits

0xb892,	// (0x0001d977) popup_fast_swap2_window

0x6cdc,	// (0x00018dc1) aid_size_cell_fast2

0xdc7b,	// (0x0001fd60) bg_popup_window_pane_cp17

0x149f,	// (0x00013584) heading_pane_cp2

0xe0ba,	// (0x0002019f) listscroll_fast2_pane

0x6ce6,	// (0x00018dcb) grid_fast2_pane

0x6cee,	// (0x00018dd3) listscroll_fast2_pane_g1

0x6cf6,	// (0x00018ddb) listscroll_fast2_pane_g2

0x0001,

0xfc04,	// (0x00021ce9) listscroll_fast2_pane_g

0xeb16,	// (0x00020bfb) scroll_pane_cp26

0x6cfe,	// (0x00018de3) cell_fast2_pane_ParamLimits

0x6cfe,	// (0x00018de3) cell_fast2_pane

0x6d14,	// (0x00018df9) cell_fast2_pane_g1

0x6d1d,	// (0x00018e02) cell_fast2_pane_g2

0x6d26,	// (0x00018e0b) cell_fast2_pane_g3

0x0002,

0xfc09,	// (0x00021cee) cell_fast2_pane_g

0xe11c,	// (0x00020201) grid_highlight_pane_cp9

0xe131,	// (0x00020216) main_eswt_pane_ParamLimits

0xe131,	// (0x00020216) main_eswt_pane

0x6cb6,	// (0x00018d9b) list_single_text_info_pane

0x6d2e,	// (0x00018e13) eswt_ctrl_button_pane

0x6d2e,	// (0x00018e13) eswt_ctrl_canvas_pane

0x6d36,	// (0x00018e1b) eswt_ctrl_combo_pane

0x6d2e,	// (0x00018e13) eswt_ctrl_default_pane

0x6d2e,	// (0x00018e13) eswt_ctrl_label_pane

0x6d3e,	// (0x00018e23) eswt_ctrl_wait_pane

0x6d46,	// (0x00018e2b) eswt_shell_pane

0xdc7b,	// (0x0001fd60) listscroll_eswt_app_pane

0x6d62,	// (0x00018e47) popup_eswt_tasktip_window_ParamLimits

0x6d62,	// (0x00018e47) popup_eswt_tasktip_window

0x11f1,	// (0x000132d6) bg_popup_window_pane_cp18

0x6d73,	// (0x00018e58) eswt_control_pane_g1_ParamLimits

0x6d73,	// (0x00018e58) eswt_control_pane_g1

0x6d80,	// (0x00018e65) eswt_control_pane_g2_ParamLimits

0x6d80,	// (0x00018e65) eswt_control_pane_g2

0x6d8d,	// (0x00018e72) eswt_control_pane_g3_ParamLimits

0x6d8d,	// (0x00018e72) eswt_control_pane_g3

0x6d9a,	// (0x00018e7f) eswt_control_pane_g4_ParamLimits

0x6d9a,	// (0x00018e7f) eswt_control_pane_g4

0x0003,

0xfc10,	// (0x00021cf5) eswt_control_pane_g_ParamLimits

0xfc10,	// (0x00021cf5) eswt_control_pane_g

0xe9bf,	// (0x00020aa4) bg_button_pane_ParamLimits

0xe9bf,	// (0x00020aa4) bg_button_pane

0xe131,	// (0x00020216) common_borders_pane_copy2_ParamLimits

0xe131,	// (0x00020216) common_borders_pane_copy2

0x6da7,	// (0x00018e8c) control_button_pane_g1_ParamLimits

0x6da7,	// (0x00018e8c) control_button_pane_g1

0x6db3,	// (0x00018e98) control_button_pane_g2_ParamLimits

0x6db3,	// (0x00018e98) control_button_pane_g2

0x6dbf,	// (0x00018ea4) control_button_pane_g3_ParamLimits

0x6dbf,	// (0x00018ea4) control_button_pane_g3

0x0002,

0xfc19,	// (0x00021cfe) control_button_pane_g_ParamLimits

0xfc19,	// (0x00021cfe) control_button_pane_g

0x6dd3,	// (0x00018eb8) control_button_pane_t1

0x6de1,	// (0x00018ec6) control_button_pane_t2

0x0001,

0xfc20,	// (0x00021d05) control_button_pane_t

0x10db,	// (0x000131c0) bg_button_pane_g1

0x10eb,	// (0x000131d0) bg_button_pane_g2

0x10e3,	// (0x000131c8) bg_button_pane_g3

0x10fb,	// (0x000131e0) bg_button_pane_g4

0x10f3,	// (0x000131d8) bg_button_pane_g5

0x1103,	// (0x000131e8) bg_button_pane_g6

0x110b,	// (0x000131f0) bg_button_pane_g7

0x111b,	// (0x00013200) bg_button_pane_g8

0x1113,	// (0x000131f8) bg_button_pane_g9

0x0008,

0xf88c,	// (0x00021971) bg_button_pane_g

0x614a,	// (0x0001822f) common_borders_pane_ParamLimits

0x614a,	// (0x0001822f) common_borders_pane

0x6d73,	// (0x00018e58) eswt_control_pane_g1_copy1_ParamLimits

0x6d73,	// (0x00018e58) eswt_control_pane_g1_copy1

0x6d80,	// (0x00018e65) eswt_control_pane_g2_copy1_ParamLimits

0x6d80,	// (0x00018e65) eswt_control_pane_g2_copy1

0x6d8d,	// (0x00018e72) eswt_control_pane_g3_copy1_ParamLimits

0x6d8d,	// (0x00018e72) eswt_control_pane_g3_copy1

0x6d9a,	// (0x00018e7f) eswt_control_pane_g4_copy1_ParamLimits

0x6d9a,	// (0x00018e7f) eswt_control_pane_g4_copy1

0x6185,	// (0x0001826a) bg_eswt_ctrl_canvas_pane_g1

0x614a,	// (0x0001822f) common_borders_pane_cp2_ParamLimits

0x614a,	// (0x0001822f) common_borders_pane_cp2

0x614a,	// (0x0001822f) common_borders_pane_cp3_ParamLimits

0x614a,	// (0x0001822f) common_borders_pane_cp3

0x6def,	// (0x00018ed4) separator_horizontal_pane

0xed5c,	// (0x00020e41) separator_vertical_pane

0x6d73,	// (0x00018e58) eswt_control_pane_g1_copy2_ParamLimits

0x6d73,	// (0x00018e58) eswt_control_pane_g1_copy2

0x6d80,	// (0x00018e65) eswt_control_pane_g2_copy2_ParamLimits

0x6d80,	// (0x00018e65) eswt_control_pane_g2_copy2

0x6d8d,	// (0x00018e72) eswt_control_pane_g3_copy2_ParamLimits

0x6d8d,	// (0x00018e72) eswt_control_pane_g3_copy2

0x6d9a,	// (0x00018e7f) eswt_control_pane_g4_copy2_ParamLimits

0x6d9a,	// (0x00018e7f) eswt_control_pane_g4_copy2

0xdc7b,	// (0x0001fd60) common_borders_pane_cp4

0x6df7,	// (0x00018edc) separator_horizontal_pane_g1

0x6e00,	// (0x00018ee5) separator_horizontal_pane_g2

0x6e09,	// (0x00018eee) separator_horizontal_pane_g3

0x0002,

0xfc25,	// (0x00021d0a) separator_horizontal_pane_g

0x6d73,	// (0x00018e58) eswt_control_pane_g1_copy3_ParamLimits

0x6d73,	// (0x00018e58) eswt_control_pane_g1_copy3

0x6d80,	// (0x00018e65) eswt_control_pane_g2_copy3_ParamLimits

0x6d80,	// (0x00018e65) eswt_control_pane_g2_copy3

0x6d8d,	// (0x00018e72) eswt_control_pane_g3_copy3_ParamLimits

0x6d8d,	// (0x00018e72) eswt_control_pane_g3_copy3

0x6d9a,	// (0x00018e7f) eswt_control_pane_g4_copy3_ParamLimits

0x6d9a,	// (0x00018e7f) eswt_control_pane_g4_copy3

0xdc7b,	// (0x0001fd60) common_borders_pane_cp5

0x6e12,	// (0x00018ef7) separator_vertical_pane_g1

0x6e1b,	// (0x00018f00) separator_vertical_pane_g2

0x6e24,	// (0x00018f09) separator_vertical_pane_g3

0x0002,

0xfc2c,	// (0x00021d11) separator_vertical_pane_g

0x6d73,	// (0x00018e58) eswt_control_pane_g1_copy4_ParamLimits

0x6d73,	// (0x00018e58) eswt_control_pane_g1_copy4

0x6d80,	// (0x00018e65) eswt_control_pane_g2_copy4_ParamLimits

0x6d80,	// (0x00018e65) eswt_control_pane_g2_copy4

0x6d8d,	// (0x00018e72) eswt_control_pane_g3_copy4_ParamLimits

0x6d8d,	// (0x00018e72) eswt_control_pane_g3_copy4

0x6d9a,	// (0x00018e7f) eswt_control_pane_g4_copy4_ParamLimits

0x6d9a,	// (0x00018e7f) eswt_control_pane_g4_copy4

0xcbb4,	// (0x0001ec99) eswt_ctrl_combo_button_pane

0xcbbc,	// (0x0001eca1) eswt_ctrl_input_pane

0xcbc4,	// (0x0001eca9) popup_choice_list_window_cp70

0xcbcc,	// (0x0001ecb1) eswt_ctrl_input_pane_t1

0xdc7b,	// (0x0001fd60) input_focus_pane_cp70

0x614a,	// (0x0001822f) bg_button_pane_cp70_ParamLimits

0x614a,	// (0x0001822f) bg_button_pane_cp70

0xcbda,	// (0x0001ecbf) eswt_ctrl_combo_button_pane_g1

0x6e5b,	// (0x00018f40) wait_bar_pane_cp70

0x11f1,	// (0x000132d6) bg_popup_window_pane_cp70_ParamLimits

0x11f1,	// (0x000132d6) bg_popup_window_pane_cp70

0x6e63,	// (0x00018f48) popup_eswt_tasktip_window_t1

0x6e79,	// (0x00018f5e) wait_bar_pane_cp71_ParamLimits

0x6e79,	// (0x00018f5e) wait_bar_pane_cp71

0x6e85,	// (0x00018f6a) grid_eswt_app_pane

0xed65,	// (0x00020e4a) scroll_pane_cp70

0xcbe2,	// (0x0001ecc7) cell_eswt_app_pane_ParamLimits

0xcbe2,	// (0x0001ecc7) cell_eswt_app_pane

0xcc0a,	// (0x0001ecef) cell_eswt_app_pane_g1_ParamLimits

0xcc0a,	// (0x0001ecef) cell_eswt_app_pane_g1

0xcc39,	// (0x0001ed1e) cell_eswt_app_pane_g2_ParamLimits

0xcc39,	// (0x0001ed1e) cell_eswt_app_pane_g2

0x0001,

0xfc33,	// (0x00021d18) cell_eswt_app_pane_g_ParamLimits

0xfc33,	// (0x00021d18) cell_eswt_app_pane_g

0xcc62,	// (0x0001ed47) cell_eswt_app_pane_t1_ParamLimits

0xcc62,	// (0x0001ed47) cell_eswt_app_pane_t1

0x6f40,	// (0x00019025) grid_highlight_pane_cp70_ParamLimits

0x6f40,	// (0x00019025) grid_highlight_pane_cp70

0xe2c3,	// (0x000203a8) set_content_pane_g1

0xf567,	// (0x0002164c) status_small_volume_pane

0x6f4c,	// (0x00019031) status_small_volume_pane_g1

0x6f54,	// (0x00019039) volume_small2_pane

0x6f5d,	// (0x00019042) volume_small2_pane_g1

0x6f66,	// (0x0001904b) volume_small2_pane_g2

0x6f6f,	// (0x00019054) volume_small2_pane_g3

0x6f78,	// (0x0001905d) volume_small2_pane_g4

0x6f81,	// (0x00019066) volume_small2_pane_g5

0x6f8a,	// (0x0001906f) volume_small2_pane_g6

0x6f93,	// (0x00019078) volume_small2_pane_g7

0x6f9c,	// (0x00019081) volume_small2_pane_g8

0x6fa5,	// (0x0001908a) volume_small2_pane_g9

0x6fae,	// (0x00019093) volume_small2_pane_g10

0x0009,

0xfc38,	// (0x00021d1d) volume_small2_pane_g

0x6707,	// (0x000187ec) fep_vkb_top_text_pane_g1_ParamLimits

0xcb21,	// (0x0001ec06) fep_vkb_top_text_pane_t1_ParamLimits

0x6a35,	// (0x00018b1a) popup_preview_fixed_window_g3_ParamLimits

0x6a35,	// (0x00018b1a) popup_preview_fixed_window_g3

0xbdb2,	// (0x0001de97) popup_toolbar_trans_pane

0xc5d5,	// (0x0001e6ba) aid_height_set_list_ParamLimits

0x225c,	// (0x00014341) aid_size_parent_ParamLimits

0x0dc3,	// (0x00012ea8) list_highlight_pane_cp2_ParamLimits

0xe2c3,	// (0x000203a8) set_content_pane_g1_ParamLimits

0xc75b,	// (0x0001e840) list_single_image_pane_ParamLimits

0xc75b,	// (0x0001e840) list_single_image_pane

0xcc94,	// (0x0001ed79) aid_size_cell_image_ParamLimits

0xcc94,	// (0x0001ed79) aid_size_cell_image

0xcca1,	// (0x0001ed86) grid_single_image_pane_ParamLimits

0xcca1,	// (0x0001ed86) grid_single_image_pane

0xe2c3,	// (0x000203a8) list_single_image_pane_g1_ParamLimits

0xe2c3,	// (0x000203a8) list_single_image_pane_g1

0xe9d9,	// (0x00020abe) list_single_image_pane_g2_ParamLimits

0xe9d9,	// (0x00020abe) list_single_image_pane_g2

0x0001,

0xfc4d,	// (0x00021d32) list_single_image_pane_g_ParamLimits

0xfc4d,	// (0x00021d32) list_single_image_pane_g

0x23be,	// (0x000144a3) list_single_image_pane_t1_ParamLimits

0x23be,	// (0x000144a3) list_single_image_pane_t1

0xccad,	// (0x0001ed92) cell_image_list_pane_ParamLimits

0xccad,	// (0x0001ed92) cell_image_list_pane

0xccc1,	// (0x0001eda6) cell_image_list_pane_g1

0xccca,	// (0x0001edaf) cell_image_list_pane_g2

0x0001,

0xfc52,	// (0x00021d37) cell_image_list_pane_g

0x6ff5,	// (0x000190da) aid_size_cell_tb_trans_pane

0xe9bf,	// (0x00020aa4) bg_tb_trans_pane

0x7007,	// (0x000190ec) grid_tb_trans_pane

0x10db,	// (0x000131c0) bg_tb_trans_pane_g1

0x10eb,	// (0x000131d0) bg_tb_trans_pane_g2

0x10e3,	// (0x000131c8) bg_tb_trans_pane_g3

0x10fb,	// (0x000131e0) bg_tb_trans_pane_g4

0x10f3,	// (0x000131d8) bg_tb_trans_pane_g5

0x111b,	// (0x00013200) bg_tb_trans_pane_g6

0x1113,	// (0x000131f8) bg_tb_trans_pane_g7

0x1103,	// (0x000131e8) bg_tb_trans_pane_g8

0x110b,	// (0x000131f0) bg_tb_trans_pane_g9

0x0008,

0xfc57,	// (0x00021d3c) bg_tb_trans_pane_g

0x701b,	// (0x00019100) cell_toolbar_trans_pane_ParamLimits

0x701b,	// (0x00019100) cell_toolbar_trans_pane

0x6185,	// (0x0001826a) cell_toolbar_trans_pane_g1

0xc996,	// (0x0001ea7b) list_form2_midp_pane_t1

0xc9a4,	// (0x0001ea89) list_form2_midp_pane_t2

0x0001,

0xfb00,	// (0x00021be5) list_form2_midp_pane_t

0x5e26,	// (0x00017f0b) scroll_pane_cp51_ParamLimits

0x5fdf,	// (0x000180c4) form2_midp_wait_pane_g1

0x5fe8,	// (0x000180cd) form2_midp_wait_pane_g2

0x5ff1,	// (0x000180d6) form2_midp_wait_pane_g3

0x0002,

0xfb15,	// (0x00021bfa) form2_midp_wait_pane_g

0xdd6b,	// (0x0001fe50) list_highlight_pane_cp21_ParamLimits

0x6011,	// (0x000180f6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6020,	// (0x00018105) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3e98,	// (0x00015f7d) list_single_2graphic_im_pane_ParamLimits

0x3e98,	// (0x00015f7d) list_single_2graphic_im_pane

0xccd3,	// (0x0001edb8) list_single_2graphic_im_pane_g1_ParamLimits

0xccd3,	// (0x0001edb8) list_single_2graphic_im_pane_g1

0xcce4,	// (0x0001edc9) list_single_2graphic_im_pane_g2_ParamLimits

0xcce4,	// (0x0001edc9) list_single_2graphic_im_pane_g2

0xccf0,	// (0x0001edd5) list_single_2graphic_im_pane_g3_ParamLimits

0xccf0,	// (0x0001edd5) list_single_2graphic_im_pane_g3

0x0003,

0xfc6a,	// (0x00021d4f) list_single_2graphic_im_pane_g_ParamLimits

0xfc6a,	// (0x00021d4f) list_single_2graphic_im_pane_g

0xcd04,	// (0x0001ede9) list_single_2graphic_im_pane_t1_ParamLimits

0xcd04,	// (0x0001ede9) list_single_2graphic_im_pane_t1

0x6a41,	// (0x00018b26) list_single_graphic_2heading_pane_fp_ParamLimits

0x6a41,	// (0x00018b26) list_single_graphic_2heading_pane_fp

0x4189,	// (0x0001626e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4189,	// (0x0001626e) list_single_graphic_2heading_pane_fp_g1

0x6a55,	// (0x00018b3a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6a55,	// (0x00018b3a) list_single_graphic_2heading_pane_fp_g2

0x39b8,	// (0x00015a9d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x39b8,	// (0x00015a9d) list_single_graphic_2heading_pane_fp_g3

0x415e,	// (0x00016243) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x415e,	// (0x00016243) list_single_graphic_2heading_pane_fp_g4

0x6a61,	// (0x00018b46) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6a61,	// (0x00018b46) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00021c7d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00021c7d) list_single_graphic_2heading_pane_fp_g

0x4356,	// (0x0001643b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4356,	// (0x0001643b) list_single_graphic_2heading_pane_fp_t1

0x41c1,	// (0x000162a6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x41c1,	// (0x000162a6) list_single_graphic_2heading_pane_fp_t2

0x436c,	// (0x00016451) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x436c,	// (0x00016451) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc73,	// (0x00021d58) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc73,	// (0x00021d58) list_single_graphic_2heading_pane_fp_t

0x63a8,	// (0x0001848d) fep_hwr_write_pane_g5_ParamLimits

0x63a8,	// (0x0001848d) fep_hwr_write_pane_g5

0x63b4,	// (0x00018499) fep_hwr_write_pane_g6_ParamLimits

0x63b4,	// (0x00018499) fep_hwr_write_pane_g6

0x6d46,	// (0x00018e2b) eswt_shell_pane_ParamLimits

0x11f1,	// (0x000132d6) bg_popup_window_pane_cp18_ParamLimits

0x2175,	// (0x0001425a) heading_pane_cp70

0x6e63,	// (0x00018f48) popup_eswt_tasktip_window_t1_ParamLimits

0xbe4d,	// (0x0001df32) aid_touch_tab_arrow_left

0xbe61,	// (0x0001df46) aid_touch_tab_arrow_right

0xb05c,	// (0x0001d141) title_pane_g3_ParamLimits

0xb05c,	// (0x0001d141) title_pane_g3

0xe98f,	// (0x00020a74) set_value_pane_g1

0xbdb2,	// (0x0001de97) popup_toolbar_trans_pane_ParamLimits

0x6ff5,	// (0x000190da) aid_size_cell_tb_trans_pane_ParamLimits

0xe9bf,	// (0x00020aa4) bg_tb_trans_pane_ParamLimits

0x7007,	// (0x000190ec) grid_tb_trans_pane_ParamLimits

0xdeca,	// (0x0001ffaf) cont_note_pane_ParamLimits

0xdeca,	// (0x0001ffaf) cont_note_pane

0xe131,	// (0x00020216) cont_snote2_single_text_pane_ParamLimits

0xe131,	// (0x00020216) cont_snote2_single_text_pane

0xe131,	// (0x00020216) cont_snote2_single_graphic_pane_ParamLimits

0xe131,	// (0x00020216) cont_snote2_single_graphic_pane

0x1684,	// (0x00013769) cont_note_wait_pane_ParamLimits

0x1684,	// (0x00013769) cont_note_wait_pane

0x1684,	// (0x00013769) cont_note_image_pane_ParamLimits

0x1684,	// (0x00013769) cont_note_image_pane

0x70af,	// (0x00019194) popup_note2_window_g1_ParamLimits

0x70af,	// (0x00019194) popup_note2_window_g1

0x70e0,	// (0x000191c5) popup_note2_window_t1_ParamLimits

0x70e0,	// (0x000191c5) popup_note2_window_t1

0x7125,	// (0x0001920a) popup_note2_window_t2_ParamLimits

0x7125,	// (0x0001920a) popup_note2_window_t2

0x716a,	// (0x0001924f) popup_note2_window_t3_ParamLimits

0x716a,	// (0x0001924f) popup_note2_window_t3

0x71af,	// (0x00019294) popup_note2_window_t4_ParamLimits

0x71af,	// (0x00019294) popup_note2_window_t4

0xdf4e,	// (0x00020033) popup_note2_window_t5_ParamLimits

0xdf4e,	// (0x00020033) popup_note2_window_t5

0x0004,

0xfc7f,	// (0x00021d64) popup_note2_window_t_ParamLimits

0xfc7f,	// (0x00021d64) popup_note2_window_t

0x71de,	// (0x000192c3) popup_note2_image_window_g1_ParamLimits

0x71de,	// (0x000192c3) popup_note2_image_window_g1

0x71ea,	// (0x000192cf) popup_note2_image_window_g2_ParamLimits

0x71ea,	// (0x000192cf) popup_note2_image_window_g2

0x0001,

0xfc8a,	// (0x00021d6f) popup_note2_image_window_g_ParamLimits

0xfc8a,	// (0x00021d6f) popup_note2_image_window_g

0x71fc,	// (0x000192e1) popup_note2_image_window_t1_ParamLimits

0x71fc,	// (0x000192e1) popup_note2_image_window_t1

0x7214,	// (0x000192f9) popup_note2_image_window_t2_ParamLimits

0x7214,	// (0x000192f9) popup_note2_image_window_t2

0x722c,	// (0x00019311) popup_note2_image_window_t3_ParamLimits

0x722c,	// (0x00019311) popup_note2_image_window_t3

0x0002,

0xfc8f,	// (0x00021d74) popup_note2_image_window_t_ParamLimits

0xfc8f,	// (0x00021d74) popup_note2_image_window_t

0x1692,	// (0x00013777) popup_note2_wait_window_g1_ParamLimits

0x1692,	// (0x00013777) popup_note2_wait_window_g1

0x169e,	// (0x00013783) popup_note2_wait_window_g2_ParamLimits

0x169e,	// (0x00013783) popup_note2_wait_window_g2

0x16aa,	// (0x0001378f) popup_note2_wait_window_g3_ParamLimits

0x16aa,	// (0x0001378f) popup_note2_wait_window_g3

0x0002,

0xf86e,	// (0x00021953) popup_note2_wait_window_g_ParamLimits

0xf86e,	// (0x00021953) popup_note2_wait_window_g

0x7248,	// (0x0001932d) popup_note2_wait_window_t1_ParamLimits

0x7248,	// (0x0001932d) popup_note2_wait_window_t1

0x7266,	// (0x0001934b) popup_note2_wait_window_t2_ParamLimits

0x7266,	// (0x0001934b) popup_note2_wait_window_t2

0x7284,	// (0x00019369) popup_note2_wait_window_t3_ParamLimits

0x7284,	// (0x00019369) popup_note2_wait_window_t3

0x7296,	// (0x0001937b) popup_note2_wait_window_t4_ParamLimits

0x7296,	// (0x0001937b) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x00021d7b) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x00021d7b) popup_note2_wait_window_t

0x72a8,	// (0x0001938d) wait_bar2_pane_ParamLimits

0x72a8,	// (0x0001938d) wait_bar2_pane

0x72c0,	// (0x000193a5) popup_snote2_single_text_window_g1_ParamLimits

0x72c0,	// (0x000193a5) popup_snote2_single_text_window_g1

0x72e8,	// (0x000193cd) popup_snote2_single_text_window_t1_ParamLimits

0x72e8,	// (0x000193cd) popup_snote2_single_text_window_t1

0x7334,	// (0x00019419) popup_snote2_single_text_window_t2_ParamLimits

0x7334,	// (0x00019419) popup_snote2_single_text_window_t2

0x7380,	// (0x00019465) popup_snote2_single_text_window_t3_ParamLimits

0x7380,	// (0x00019465) popup_snote2_single_text_window_t3

0x73c1,	// (0x000194a6) popup_snote2_single_text_window_t4_ParamLimits

0x73c1,	// (0x000194a6) popup_snote2_single_text_window_t4

0x73f7,	// (0x000194dc) popup_snote2_single_text_window_t5_ParamLimits

0x73f7,	// (0x000194dc) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x00021d84) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x00021d84) popup_snote2_single_text_window_t

0x7422,	// (0x00019507) popup_snote2_single_graphic_window_g1_ParamLimits

0x7422,	// (0x00019507) popup_snote2_single_graphic_window_g1

0x744a,	// (0x0001952f) popup_snote2_single_graphic_window_g2_ParamLimits

0x744a,	// (0x0001952f) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x00021d8f) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x00021d8f) popup_snote2_single_graphic_window_g

0x7472,	// (0x00019557) popup_snote2_single_graphic_window_t1_ParamLimits

0x7472,	// (0x00019557) popup_snote2_single_graphic_window_t1

0x74be,	// (0x000195a3) popup_snote2_single_graphic_window_t2_ParamLimits

0x74be,	// (0x000195a3) popup_snote2_single_graphic_window_t2

0x7380,	// (0x00019465) popup_snote2_single_graphic_window_t3_ParamLimits

0x7380,	// (0x00019465) popup_snote2_single_graphic_window_t3

0x73c1,	// (0x000194a6) popup_snote2_single_graphic_window_t4_ParamLimits

0x73c1,	// (0x000194a6) popup_snote2_single_graphic_window_t4

0x73f7,	// (0x000194dc) popup_snote2_single_graphic_window_t5_ParamLimits

0x73f7,	// (0x000194dc) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x00021d94) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x00021d94) popup_snote2_single_graphic_window_t

0x2c8f,	// (0x00014d74) clock_nsta_pane_cp2_t1

0x2c8f,	// (0x00014d74) clock_nsta_pane_cp2_t2

0x0001,

0xfad6,	// (0x00021bbb) clock_nsta_pane_cp2_t

0x3b64,	// (0x00015c49) form_field_data_wide_pane_g1_ParamLimits

0xe2c3,	// (0x000203a8) form_field_data_wide_pane_g2_ParamLimits

0xe2c3,	// (0x000203a8) form_field_data_wide_pane_g2

0xe9d9,	// (0x00020abe) form_field_data_wide_pane_g3_ParamLimits

0xe9d9,	// (0x00020abe) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x000217a4) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x000217a4) form_field_data_wide_pane_g

0xc8d1,	// (0x0001e9b6) grid_touch_3_pane_ParamLimits

0xc8d1,	// (0x0001e9b6) grid_touch_3_pane

0xcd35,	// (0x0001ee1a) cell_touch_3_pane_ParamLimits

0xcd35,	// (0x0001ee1a) cell_touch_3_pane

0x6185,	// (0x0001826a) cell_touch_3_pane_g1

0x6185,	// (0x0001826a) cell_touch_3_pane_g2

0x0001,

0xfb5b,	// (0x00021c40) cell_touch_3_pane_g

0xdf80,	// (0x00020065) cont_query_data_pane

0xdf88,	// (0x0002006d) cont_query_data_pane_cp1

0x7537,	// (0x0001961c) button_value_adjust_pane_cp7

0x753f,	// (0x00019624) query_popup_pane_cp3

0xef08,	// (0x00020fed) bg_popup_sub_pane_cp22_ParamLimits

0x49b1,	// (0x00016a96) navi_navi_volume_pane_cp2

0x49c9,	// (0x00016aae) popup_side_volume_key_window_g2

0x49d5,	// (0x00016aba) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x00021836) popup_side_volume_key_window_g

0x49ef,	// (0x00016ad4) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x0002183d) popup_side_volume_key_window_t

0xf170,	// (0x00021255) popup_side_volume_key_window_ParamLimits

0xa78e,	// (0x0001c873) list_double_graphic_pane_g4_ParamLimits

0xa78e,	// (0x0001c873) list_double_graphic_pane_g4

0xc733,	// (0x0001e818) list_single_2heading_msg_pane_ParamLimits

0xc733,	// (0x0001e818) list_single_2heading_msg_pane

0xacf7,	// (0x0001cddc) list_single_2heading_msg_pane_g1_ParamLimits

0xacf7,	// (0x0001cddc) list_single_2heading_msg_pane_g1

0xad03,	// (0x0001cde8) list_single_2heading_msg_pane_g2_ParamLimits

0xad03,	// (0x0001cde8) list_single_2heading_msg_pane_g2

0xad16,	// (0x0001cdfb) list_single_2heading_msg_pane_g3_ParamLimits

0xad16,	// (0x0001cdfb) list_single_2heading_msg_pane_g3

0xad22,	// (0x0001ce07) list_single_2heading_msg_pane_g4_ParamLimits

0xad22,	// (0x0001ce07) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x00021d9f) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x00021d9f) list_single_2heading_msg_pane_g

0xad3a,	// (0x0001ce1f) list_single_2heading_msg_pane_t1_ParamLimits

0xad3a,	// (0x0001ce1f) list_single_2heading_msg_pane_t1

0xad62,	// (0x0001ce47) list_single_2heading_msg_pane_t2_ParamLimits

0xad62,	// (0x0001ce47) list_single_2heading_msg_pane_t2

0xadcd,	// (0x0001ceb2) list_single_2heading_msg_pane_t3_ParamLimits

0xadcd,	// (0x0001ceb2) list_single_2heading_msg_pane_t3

0x444f,	// (0x00016534) list_single_2heading_msg_pane_t4_ParamLimits

0x444f,	// (0x00016534) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x00021da8) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x00021da8) list_single_2heading_msg_pane_t

0xdd11,	// (0x0001fdf6) title_pane_g4_ParamLimits

0xdd11,	// (0x0001fdf6) title_pane_g4

0x4801,	// (0x000168e6) title_pane_stacon_g3_ParamLimits

0x4801,	// (0x000168e6) title_pane_stacon_g3

0x7072,	// (0x00019157) list_single_2graphic_im_pane_g4_ParamLimits

0x7072,	// (0x00019157) list_single_2graphic_im_pane_g4

0x1f8b,	// (0x00014070) popup_side_volume_key_window_cp

0x24a5,	// (0x0001458a) main_idle_act2_pane_t1

0x53f2,	// (0x000174d7) toolbar_button_pane_g10

0xb3ec,	// (0x0001d4d1) popup_toolbar_window_cp1

0x2c80,	// (0x00014d65) clock_nsta_pane_cp_t1

0x2c80,	// (0x00014d65) clock_nsta_pane_cp_t2

0x0001,

0xfad1,	// (0x00021bb6) clock_nsta_pane_cp_t

0x49b1,	// (0x00016a96) navi_navi_volume_pane_cp2_ParamLimits

0x49bd,	// (0x00016aa2) popup_side_volume_key_window_g1_ParamLimits

0x49c9,	// (0x00016aae) popup_side_volume_key_window_g2_ParamLimits

0x49d5,	// (0x00016aba) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x00021836) popup_side_volume_key_window_g_ParamLimits

0x61ee,	// (0x000182d3) fep_hwr_aid_pane

0x628f,	// (0x00018374) bg_fep_hwr_top_pane_g4_ParamLimits

0x62af,	// (0x00018394) fep_hwr_top_pane_g1_ParamLimits

0x62c1,	// (0x000183a6) fep_hwr_top_pane_g2_ParamLimits

0x62d3,	// (0x000183b8) fep_hwr_top_pane_g3_ParamLimits

0xfb26,	// (0x00021c0b) fep_hwr_top_pane_g_ParamLimits

0x62e8,	// (0x000183cd) fep_hwr_top_text_pane_ParamLimits

0x1d94,	// (0x00013e79) aid_touch_tab_arrow_arrow_2

0x1d8b,	// (0x00013e70) aid_touch_tab_arrow_left_2

0x6202,	// (0x000182e7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6235,	// (0x0001831a) fep_hwr_prediction_pane

0x6537,	// (0x0001861c) fep_vkb_prediction_pane

0xcb01,	// (0x0001ebe6) fep_vkb_side_pane_g3_ParamLimits

0xcb01,	// (0x0001ebe6) fep_vkb_side_pane_g3

0x65c5,	// (0x000186aa) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6ad3,	// (0x00018bb8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6ae0,	// (0x00018bc5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x00021cb5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7564,	// (0x00019649) fep_hwr_prediction_pane_g1

0x756e,	// (0x00019653) fep_hwr_prediction_pane_g2

0x7576,	// (0x0001965b) fep_hwr_prediction_pane_g3

0x757e,	// (0x00019663) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x00021db1) fep_hwr_prediction_pane_g

0x7564,	// (0x00019649) fep_vkb_prediction_pane_g1

0x7586,	// (0x0001966b) fep_vkb_prediction_pane_g2

0x758e,	// (0x00019673) fep_vkb_prediction_pane_g3

0x7596,	// (0x0001967b) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x00021dba) fep_vkb_prediction_pane_g

0x2212,	// (0x000142f7) slider_set_pane_g3

0x23d4,	// (0x000144b9) slider_set_pane_g4

0x23ec,	// (0x000144d1) slider_set_pane_g5

0x2212,	// (0x000142f7) slider_set_pane_g6

0xc59f,	// (0x0001e684) slider_set_pane_g7

0x227f,	// (0x00014364) slider_form_pane_g3

0x2288,	// (0x0001436d) slider_form_pane_g4

0x2290,	// (0x00014375) slider_form_pane_g5

0x227f,	// (0x00014364) slider_form_pane_g6

0xc707,	// (0x0001e7ec) slider_form_pane_g7

0x2700,	// (0x000147e5) slider_set_pane_vc_g3

0x2709,	// (0x000147ee) slider_set_pane_vc_g4

0x2712,	// (0x000147f7) slider_set_pane_vc_g5

0x2700,	// (0x000147e5) slider_set_pane_vc_g6

0x271b,	// (0x00014800) slider_set_pane_vc_g7

0x2700,	// (0x000147e5) slider_form_pane_vc_g1

0x2709,	// (0x000147ee) slider_form_pane_vc_g2

0x2712,	// (0x000147f7) slider_form_pane_vc_g3

0x2700,	// (0x000147e5) slider_form_pane_vc_g4

0x2a36,	// (0x00014b1b) slider_form_pane_vc_g5

0x0004,

0xfab7,	// (0x00021b9c) slider_form_pane_vc_g

0xdc7b,	// (0x0001fd60) main_idle_act3_pane

0x759e,	// (0x00019683) ai3_links_pane

0xcd7c,	// (0x0001ee61) popup_ai3_data_window_ParamLimits

0xcd7c,	// (0x0001ee61) popup_ai3_data_window

0xdc7b,	// (0x0001fd60) grid_ai3_links_pane

0xcd94,	// (0x0001ee79) cell_ai3_links_pane_ParamLimits

0xcd94,	// (0x0001ee79) cell_ai3_links_pane

0x75d3,	// (0x000196b8) bg_popup_sub_pane_cp11

0x75e0,	// (0x000196c5) cell_ai3_links_pane_g1

0xdc7b,	// (0x0001fd60) bg_popup_sub_pane_cp12

0x7605,	// (0x000196ea) heading_ai3_data_pane

0x760d,	// (0x000196f2) list_ai3_gene_pane

0x7619,	// (0x000196fe) popup_ai3_data_window_g1

0x7621,	// (0x00019706) heading_ai3_data_pane_g1

0x7629,	// (0x0001970e) heading_ai3_data_pane_t1

0x7637,	// (0x0001971c) list_double_ai3_gene_pane_ParamLimits

0x7637,	// (0x0001971c) list_double_ai3_gene_pane

0x7644,	// (0x00019729) list_single_ai3_gene_pane_ParamLimits

0x7644,	// (0x00019729) list_single_ai3_gene_pane

0x614a,	// (0x0001822f) list_highlight_pane_cp7_ParamLimits

0x614a,	// (0x0001822f) list_highlight_pane_cp7

0x7651,	// (0x00019736) list_single_a13_gene_pane_t1_ParamLimits

0x7651,	// (0x00019736) list_single_a13_gene_pane_t1

0x7668,	// (0x0001974d) list_single_ai3_gene_pane_g1

0x7671,	// (0x00019756) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x00021dc3) list_single_ai3_gene_pane_g

0x7679,	// (0x0001975e) list_double_ai3_gene_pane_g1_ParamLimits

0x7679,	// (0x0001975e) list_double_ai3_gene_pane_g1

0x7685,	// (0x0001976a) list_double_ai3_gene_pane_t1_ParamLimits

0x7685,	// (0x0001976a) list_double_ai3_gene_pane_t1

0x76a1,	// (0x00019786) list_double_ai3_gene_pane_t2_ParamLimits

0x76a1,	// (0x00019786) list_double_ai3_gene_pane_t2

0x76b6,	// (0x0001979b) list_double_ai3_gene_pane_t3_ParamLimits

0x76b6,	// (0x0001979b) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x00021dc8) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x00021dc8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4382,	// (0x00016467) aid_size_min_col_2

0xcd68,	// (0x0001ee4d) aid_size_min_msg_ParamLimits

0xcd68,	// (0x0001ee4d) aid_size_min_msg

0xcb15,	// (0x0001ebfa) fep_vkb_top_text_pane_g2_ParamLimits

0xcb15,	// (0x0001ebfa) fep_vkb_top_text_pane_g2

0x0001,

0xfb56,	// (0x00021c3b) fep_vkb_top_text_pane_g_ParamLimits

0xfb56,	// (0x00021c3b) fep_vkb_top_text_pane_g

0xdc7b,	// (0x0001fd60) main_hc_apps_shell_pane

0x76d3,	// (0x000197b8) grid_hc_apps_pane_ParamLimits

0x76d3,	// (0x000197b8) grid_hc_apps_pane

0x76e2,	// (0x000197c7) list_hc_apps_pane

0x76ea,	// (0x000197cf) scroll_pane_cp37_ParamLimits

0x76ea,	// (0x000197cf) scroll_pane_cp37

0xcdaa,	// (0x0001ee8f) cell_hc_apps_pane_ParamLimits

0xcdaa,	// (0x0001ee8f) cell_hc_apps_pane

0xce44,	// (0x0001ef29) cell_hc_apps_pane_g1_ParamLimits

0xce44,	// (0x0001ef29) cell_hc_apps_pane_g1

0x77b1,	// (0x00019896) cell_hc_apps_pane_g2_ParamLimits

0x77b1,	// (0x00019896) cell_hc_apps_pane_g2

0x77cd,	// (0x000198b2) cell_hc_apps_pane_g3_ParamLimits

0x77cd,	// (0x000198b2) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x00021dcf) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x00021dcf) cell_hc_apps_pane_g

0xce71,	// (0x0001ef56) cell_hc_apps_pane_t1_ParamLimits

0xce71,	// (0x0001ef56) cell_hc_apps_pane_t1

0xdeca,	// (0x0001ffaf) grid_highlight_pane_cp10_ParamLimits

0xdeca,	// (0x0001ffaf) grid_highlight_pane_cp10

0xceaf,	// (0x0001ef94) list_single_hc_apps_pane_ParamLimits

0xceaf,	// (0x0001ef94) list_single_hc_apps_pane

0xcedb,	// (0x0001efc0) list_single_hc_apps_pane_g1

0xae3b,	// (0x0001cf20) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x00021dd6) list_single_hc_apps_pane_g

0xae54,	// (0x0001cf39) list_single_hc_apps_pane_g2_copy1

0xae70,	// (0x0001cf55) list_single_hc_apps_pane_t1

0xdd6b,	// (0x0001fe50) bg_set_opt_pane_cp_ParamLimits

0xdd79,	// (0x0001fe5e) setting_slider_pane_t1_ParamLimits

0xb129,	// (0x0001d20e) setting_slider_pane_t2_ParamLimits

0xb142,	// (0x0001d227) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00021687) setting_slider_pane_t_ParamLimits

0xdd8f,	// (0x0001fe74) slider_set_pane_ParamLimits

0x4c32,	// (0x00016d17) control_pane_g5_ParamLimits

0x4c32,	// (0x00016d17) control_pane_g5

0x21bc,	// (0x000142a1) slider_set_pane_g1_ParamLimits

0x5875,	// (0x0001795a) slider_set_pane_g2_ParamLimits

0x2212,	// (0x000142f7) slider_set_pane_g3_ParamLimits

0x23d4,	// (0x000144b9) slider_set_pane_g4_ParamLimits

0x23ec,	// (0x000144d1) slider_set_pane_g5_ParamLimits

0x2212,	// (0x000142f7) slider_set_pane_g6_ParamLimits

0xc59f,	// (0x0001e684) slider_set_pane_g7_ParamLimits

0xf98a,	// (0x00021a6f) slider_set_pane_g_ParamLimits

0xdd6b,	// (0x0001fe50) navi_icon_text_pane_ParamLimits

0xbe1f,	// (0x0001df04) aid_fill_nsta_2_ParamLimits

0xbe4d,	// (0x0001df32) aid_touch_tab_arrow_left_ParamLimits

0xbe61,	// (0x0001df46) aid_touch_tab_arrow_right_ParamLimits

0xbefd,	// (0x0001dfe2) clock_nsta_pane_ParamLimits

0x1d6d,	// (0x00013e52) navi_icon_pane_g1_ParamLimits

0x1d79,	// (0x00013e5e) navi_text_pane_t1_ParamLimits

0x5d9c,	// (0x00017e81) navi_icon_text_pane_g1_ParamLimits

0x5da8,	// (0x00017e8d) navi_icon_text_pane_t1_ParamLimits

0xcedb,	// (0x0001efc0) list_single_hc_apps_pane_g1_ParamLimits

0xae3b,	// (0x0001cf20) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x00021dd6) list_single_hc_apps_pane_g_ParamLimits

0xae54,	// (0x0001cf39) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xae70,	// (0x0001cf55) list_single_hc_apps_pane_t1_ParamLimits

0xafbb,	// (0x0001d0a0) popup_toolbar2_fixed_window_ParamLimits

0xafbb,	// (0x0001d0a0) popup_toolbar2_fixed_window

0xbdaa,	// (0x0001de8f) popup_toolbar2_float_window

0xdc7b,	// (0x0001fd60) bg_popup_sub_pane_cp27

0x7876,	// (0x0001995b) grid_toolbar2_float_pane

0xdc7b,	// (0x0001fd60) bg_popup_sub_pane_cp26

0x7876,	// (0x0001995b) grid_toolbar2_fixed_pane

0xcef4,	// (0x0001efd9) cell_toolbar2_fixed_pane_ParamLimits

0xcef4,	// (0x0001efd9) cell_toolbar2_fixed_pane

0xcf0f,	// (0x0001eff4) cell_toolbar2_fixed_pane_g1

0x7898,	// (0x0001997d) toolbar2_fixed_button_pane

0x10db,	// (0x000131c0) toolbar2_fixed_button_pane_g1

0x10eb,	// (0x000131d0) toolbar2_fixed_button_pane_g2

0x10e3,	// (0x000131c8) toolbar2_fixed_button_pane_g3

0x10fb,	// (0x000131e0) toolbar2_fixed_button_pane_g4

0x10f3,	// (0x000131d8) toolbar2_fixed_button_pane_g5

0x1103,	// (0x000131e8) toolbar2_fixed_button_pane_g6

0x110b,	// (0x000131f0) toolbar2_fixed_button_pane_g7

0x111b,	// (0x00013200) toolbar2_fixed_button_pane_g8

0x1113,	// (0x000131f8) toolbar2_fixed_button_pane_g9

0x0008,

0xf88c,	// (0x00021971) toolbar2_fixed_button_pane_g

0x78a0,	// (0x00019985) cell_toolbar2_float_pane_ParamLimits

0x78a0,	// (0x00019985) cell_toolbar2_float_pane

0x78b1,	// (0x00019996) cell_toolbar2_float_pane_g1

0x7898,	// (0x0001997d) toolbar2_fixed_button_pane_cp

0xcaca,	// (0x0001ebaf) fep_vkb_accented_list_pane_ParamLimits

0xcaca,	// (0x0001ebaf) fep_vkb_accented_list_pane

0x68f8,	// (0x000189dd) bg_popup_fep_shadow_pane_g9

0xf378,	// (0x0002145d) bg_popup_fep_shadow_pane_cp3

0xeafd,	// (0x00020be2) list_accented_list_pane

0x78ba,	// (0x0001999f) list_single_accented_list_pane_ParamLimits

0x78ba,	// (0x0001999f) list_single_accented_list_pane

0xf378,	// (0x0002145d) list_highlight_pane_cp10

0x78cb,	// (0x000199b0) list_single_accented_list_pane_t1

0xbcec,	// (0x0001ddd1) popup_slider_window_ParamLimits

0xbcec,	// (0x0001ddd1) popup_slider_window

0x7547,	// (0x0001962c) aid_indentation_list_msg

0xcfee,	// (0x0001f0d3) bg_popup_window_pane_cp19

0x79cf,	// (0x00019ab4) popup_slider_window_g1

0x79eb,	// (0x00019ad0) popup_slider_window_g2

0x7a07,	// (0x00019aec) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x00021ddb) popup_slider_window_g

0x7a63,	// (0x00019b48) popup_slider_window_t1

0x7ad5,	// (0x00019bba) small_volume_slider_vertical_pane

0x6185,	// (0x0001826a) small_volume_slider_vertical_pane_g1

0x6185,	// (0x0001826a) small_volume_slider_vertical_pane_g2

0x7af1,	// (0x00019bd6) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x00021ded) small_volume_slider_vertical_pane_g

0xaf3f,	// (0x0001d024) area_side_right_pane_ParamLimits

0xaf3f,	// (0x0001d024) area_side_right_pane

0xd0a6,	// (0x0001f18b) aid_size_side_button_ParamLimits

0xd0a6,	// (0x0001f18b) aid_size_side_button

0xd0bf,	// (0x0001f1a4) grid_sctrl_middle_pane_ParamLimits

0xd0bf,	// (0x0001f1a4) grid_sctrl_middle_pane

0x7b2a,	// (0x00019c0f) sctrl_sk_bottom_pane

0x7b3b,	// (0x00019c20) sctrl_sk_top_pane

0x7b4d,	// (0x00019c32) aid_touch_sctrl_top

0xdeca,	// (0x0001ffaf) bg_sctrl_sk_pane_ParamLimits

0xdeca,	// (0x0001ffaf) bg_sctrl_sk_pane

0x7b5a,	// (0x00019c3f) sctrl_sk_top_pane_g1

0x7b67,	// (0x00019c4c) sctrl_sk_top_pane_t1

0x7b4d,	// (0x00019c32) aid_touch_sctrl_bottom

0xdeca,	// (0x0001ffaf) bg_sctrl_sk_pane_cp_ParamLimits

0xdeca,	// (0x0001ffaf) bg_sctrl_sk_pane_cp

0x7b82,	// (0x00019c67) sctrl_sk_bottom_pane_g1

0x7b67,	// (0x00019c4c) sctrl_sk_bottom_pane_t1

0xd0d5,	// (0x0001f1ba) cell_sctrl_middle_pane_ParamLimits

0xd0d5,	// (0x0001f1ba) cell_sctrl_middle_pane

0xd0e6,	// (0x0001f1cb) aid_touch_sctrl_middle_ParamLimits

0xd0e6,	// (0x0001f1cb) aid_touch_sctrl_middle

0xd0f3,	// (0x0001f1d8) bg_sctrl_middle_pane_ParamLimits

0xd0f3,	// (0x0001f1d8) bg_sctrl_middle_pane

0x7c49,	// (0x00019d2e) cell_sctrl_middle_pane_g1_ParamLimits

0x7c49,	// (0x00019d2e) cell_sctrl_middle_pane_g1

0xd101,	// (0x0001f1e6) cell_sctrl_middle_pane_g2_ParamLimits

0xd101,	// (0x0001f1e6) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x00021df9) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x00021df9) cell_sctrl_middle_pane_g

0x10db,	// (0x000131c0) bg_sctrl_middle_pane_g1

0x10eb,	// (0x000131d0) bg_sctrl_middle_pane_g2

0x10e3,	// (0x000131c8) bg_sctrl_middle_pane_g3

0x10fb,	// (0x000131e0) bg_sctrl_middle_pane_g4

0x10f3,	// (0x000131d8) bg_sctrl_middle_pane_g5

0x1103,	// (0x000131e8) bg_sctrl_middle_pane_g6

0x110b,	// (0x000131f0) bg_sctrl_middle_pane_g7

0x111b,	// (0x00013200) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x00021dfe) bg_sctrl_middle_pane_g

0x1113,	// (0x000131f8) bg_sctrl_middle_pane_g8_copy1

0x10db,	// (0x000131c0) bg_sctrl_sk_pane_g1

0x10eb,	// (0x000131d0) bg_sctrl_sk_pane_g2

0x10e3,	// (0x000131c8) bg_sctrl_sk_pane_g3

0x0008,

0xf88c,	// (0x00021971) bg_sctrl_sk_pane_g

0xe253,	// (0x00020338) aid_size_touch_scroll_bar

0x10fb,	// (0x000131e0) bg_sctrl_sk_pane_g4

0x10f3,	// (0x000131d8) bg_sctrl_sk_pane_g5

0x1103,	// (0x000131e8) bg_sctrl_sk_pane_g6

0x110b,	// (0x000131f0) bg_sctrl_sk_pane_g7

0x111b,	// (0x00013200) bg_sctrl_sk_pane_g8

0x1113,	// (0x000131f8) bg_sctrl_sk_pane_g9

0x0e51,	// (0x00012f36) popup_fep_china_hwr2_fs_candidate_window

0xb8e7,	// (0x0001d9cc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb8e7,	// (0x0001d9cc) popup_fep_china_hwr2_fs_control_window

0x65c5,	// (0x000186aa) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x00021df4) sctrl_sk_top_pane_g

0xd10e,	// (0x0001f1f3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd10e,	// (0x0001f1f3) aid_fep_china_hwr2_fs_cell

0xd122,	// (0x0001f207) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd122,	// (0x0001f207) bg_popup_fep_shadow_pane_cp4

0xd139,	// (0x0001f21e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd139,	// (0x0001f21e) bg_popup_fep_shadow_pane_cp5

0xd14b,	// (0x0001f230) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd14b,	// (0x0001f230) popup_fep_china_hwr2_fs_control_bar_grid

0xd15f,	// (0x0001f244) popup_fep_china_hwr2_fs_control_funtion_grid

0x7c1f,	// (0x00019d04) aid_fep_china_hwr2_fs_candi_cell

0xdc7b,	// (0x0001fd60) bg_popup_fep_shadow_pane_cp6

0x7c29,	// (0x00019d0e) popup_fep_china_hwr2_fs_candidate_grid

0xd167,	// (0x0001f24c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd167,	// (0x0001f24c) cell_fep_china_hwr2_fs_funtion_grid

0x6185,	// (0x0001826a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7c49,	// (0x00019d2e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7c49,	// (0x00019d2e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7c57,	// (0x00019d3c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7c57,	// (0x00019d3c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x00021e0f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x00021e0f) cell_fep_china_hwr2_fs_funtion_grid_g

0xd17f,	// (0x0001f264) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd17f,	// (0x0001f264) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd194,	// (0x0001f279) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd194,	// (0x0001f279) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x00021e14) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x00021e14) cell_fep_china_hwr2_fs_funtion_grid_t

0x7c9e,	// (0x00019d83) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7ca6,	// (0x00019d8b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7cae,	// (0x00019d93) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x00021e19) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7cb6,	// (0x00019d9b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7cb6,	// (0x00019d9b) cell_fep_china_hwr2_fs_candidate_grid

0x7ccf,	// (0x00019db4) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7cd7,	// (0x00019dbc) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6185,	// (0x0001826a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6185,	// (0x0001826a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5b,	// (0x00021c40) cell_fep_china_hwr2_fs_candidate_grid_g

0x7cdf,	// (0x00019dc4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0f40,	// (0x00013025) clock_nsta_pane_cp_24_ParamLimits

0x0f40,	// (0x00013025) clock_nsta_pane_cp_24

0x0f9d,	// (0x00013082) indicator_nsta_pane_cp_24_ParamLimits

0x0f9d,	// (0x00013082) indicator_nsta_pane_cp_24

0x1c78,	// (0x00013d5d) heading_pane_g1

0x0001,

0xf8f1,	// (0x000219d6) heading_pane_g

0xc7f9,	// (0x0001e8de) grid_sct_catagory_button_pane

0x2248,	// (0x0001432d) scroll_pane_cp5_ParamLimits

0x5e32,	// (0x00017f17) button_value_adjust_pane_cp5_ParamLimits

0x5e32,	// (0x00017f17) button_value_adjust_pane_cp5

0x5f0f,	// (0x00017ff4) form2_midp_time_pane_ParamLimits

0x7ced,	// (0x00019dd2) cell_sct_catagory_button_pane_ParamLimits

0x7ced,	// (0x00019dd2) cell_sct_catagory_button_pane

0x614a,	// (0x0001822f) bg_button_pane_cp01_ParamLimits

0x614a,	// (0x0001822f) bg_button_pane_cp01

0x6185,	// (0x0001826a) cell_sct_catagory_button_pane_g1

0xbd5b,	// (0x0001de40) popup_tb_extension_window

0xd1b0,	// (0x0001f295) aid_size_cell_ext_ParamLimits

0xd1b0,	// (0x0001f295) aid_size_cell_ext

0xe131,	// (0x00020216) bg_tb_trans_pane_cp1_ParamLimits

0xe131,	// (0x00020216) bg_tb_trans_pane_cp1

0xd1d6,	// (0x0001f2bb) grid_tb_ext_pane_ParamLimits

0xd1d6,	// (0x0001f2bb) grid_tb_ext_pane

0xd20c,	// (0x0001f2f1) cell_tb_ext_pane_ParamLimits

0xd20c,	// (0x0001f2f1) cell_tb_ext_pane

0xd230,	// (0x0001f315) cell_tb_ext_pane_g1_ParamLimits

0xd230,	// (0x0001f315) cell_tb_ext_pane_g1

0x7d77,	// (0x00019e5c) cell_tb_ext_pane_t1

0xdeca,	// (0x0001ffaf) list_highlight_pane_cp11_ParamLimits

0xdeca,	// (0x0001ffaf) list_highlight_pane_cp11

0x46cc,	// (0x000167b1) popup_uni_indicator_window_ParamLimits

0x46cc,	// (0x000167b1) popup_uni_indicator_window

0xe9bf,	// (0x00020aa4) bg_popup_sub_pane_cp14

0x7d92,	// (0x00019e77) list_uniindi_pane

0x7d9e,	// (0x00019e83) uniindi_top_pane

0xdeca,	// (0x0001ffaf) bg_uniindi_top_pane

0x7dbd,	// (0x00019ea2) uniindi_top_pane_g1

0x7dd3,	// (0x00019eb8) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x00021e20) uniindi_top_pane_g

0x7dfd,	// (0x00019ee2) uniindi_top_pane_t1

0x7e27,	// (0x00019f0c) list_single_uniindi_pane_ParamLimits

0x7e27,	// (0x00019f0c) list_single_uniindi_pane

0x6185,	// (0x0001826a) bg_uniindi_top_pane_g1

0x7e39,	// (0x00019f1e) list_single_uniindi_pane_g1

0x7e4c,	// (0x00019f31) list_single_uniindi_pane_t1

0xdc7b,	// (0x0001fd60) control_bg_pane

0x7e71,	// (0x00019f56) bg_sctrl_sk_pane_cp1

0x7e7a,	// (0x00019f5f) bg_sctrl_sk_pane_cp2

0x7e83,	// (0x00019f68) control_bg_pane_g1

0x7e8c,	// (0x00019f71) control_bg_pane_g2

0x0001,

0xfd44,	// (0x00021e29) control_bg_pane_g

0x2c3d,	// (0x00014d22) cell_indicator_nsta_pane_g1_ParamLimits

0xc904,	// (0x0001e9e9) cell_indicator_nsta_pane_g2_ParamLimits

0xfacc,	// (0x00021bb1) cell_indicator_nsta_pane_g_ParamLimits

0x414b,	// (0x00016230) form2_midp_time_pane_t1_ParamLimits

0x61e0,	// (0x000182c5) main_idle_act4_pane_ParamLimits

0x61e0,	// (0x000182c5) main_idle_act4_pane

0xbd5b,	// (0x0001de40) popup_tb_extension_window_ParamLimits

0xd1f6,	// (0x0001f2db) tb_ext_find_pane_ParamLimits

0xd1f6,	// (0x0001f2db) tb_ext_find_pane

0x7e95,	// (0x00019f7a) ai_gene_pane_1_cp1

0xf40c,	// (0x000214f1) ai_gene_pane_2_cp1

0x7e9d,	// (0x00019f82) list_single_idle_plugin_calendar_pane

0x7ea6,	// (0x00019f8b) list_single_idle_plugin_notification_pane

0x7eaf,	// (0x00019f94) list_single_idle_plugin_player_pane

0xd24d,	// (0x0001f332) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd24d,	// (0x0001f332) list_single_idle_plugin_shortcut_pane

0xd275,	// (0x0001f35a) main_idle_act4_pane_t1

0xd28b,	// (0x0001f370) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x00021e2e) main_idle_act4_pane_t

0xd2a1,	// (0x0001f386) middle_sk_idle_act4_pane_ParamLimits

0xd2a1,	// (0x0001f386) middle_sk_idle_act4_pane

0xd2bd,	// (0x0001f3a2) popup_clock_digital_analogue_window_cp2

0xd2e3,	// (0x0001f3c8) shortcut_wheel_idle_act4_pane_ParamLimits

0xd2e3,	// (0x0001f3c8) shortcut_wheel_idle_act4_pane

0x6185,	// (0x0001826a) shortcut_wheel_idle_act4_pane_g1

0x6185,	// (0x0001826a) shortcut_wheel_idle_act4_pane_g2

0x6185,	// (0x0001826a) shortcut_wheel_idle_act4_pane_g3

0x6185,	// (0x0001826a) shortcut_wheel_idle_act4_pane_g4

0x6185,	// (0x0001826a) shortcut_wheel_idle_act4_pane_g5

0x7f42,	// (0x0001a027) shortcut_wheel_idle_act4_pane_g6

0x7f4a,	// (0x0001a02f) shortcut_wheel_idle_act4_pane_g7

0x7f52,	// (0x0001a037) shortcut_wheel_idle_act4_pane_g8

0x7f5a,	// (0x0001a03f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x00021e33) shortcut_wheel_idle_act4_pane_g

0x628f,	// (0x00018374) middle_sk_idle_act4_pane_g1_ParamLimits

0x628f,	// (0x00018374) middle_sk_idle_act4_pane_g1

0xd35e,	// (0x0001f443) middle_sk_idle_act4_pane_g2_ParamLimits

0xd35e,	// (0x0001f443) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x00021e56) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x00021e56) middle_sk_idle_act4_pane_g

0xd376,	// (0x0001f45b) middle_sk_idle_act4_pane_t1_ParamLimits

0xd376,	// (0x0001f45b) middle_sk_idle_act4_pane_t1

0xd3a5,	// (0x0001f48a) grid_ai_shortcut_pane_ParamLimits

0xd3a5,	// (0x0001f48a) grid_ai_shortcut_pane

0xd3c2,	// (0x0001f4a7) list_highlight_pane_cp16_ParamLimits

0xd3c2,	// (0x0001f4a7) list_highlight_pane_cp16

0xd3cf,	// (0x0001f4b4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd3cf,	// (0x0001f4b4) list_single_idle_plugin_shortcut_pane_g1

0xd3db,	// (0x0001f4c0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd3db,	// (0x0001f4c0) list_single_idle_plugin_shortcut_pane_g2

0xd3f7,	// (0x0001f4dc) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd3f7,	// (0x0001f4dc) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x00021e5b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x00021e5b) list_single_idle_plugin_shortcut_pane_g

0xd40c,	// (0x0001f4f1) cell_ai_shortcut_pane_ParamLimits

0xd40c,	// (0x0001f4f1) cell_ai_shortcut_pane

0xd422,	// (0x0001f507) cell_ai_shortcut_pane_g1_ParamLimits

0xd422,	// (0x0001f507) cell_ai_shortcut_pane_g1

0x7e95,	// (0x00019f7a) ai_gene_pane_1_cp2

0x8087,	// (0x0001a16c) ai_gene_pane_2_cp2

0x808f,	// (0x0001a174) list_highlight_pane_cp15

0x8098,	// (0x0001a17d) list_single_idle_plugin_calendar_pane_g1

0x808f,	// (0x0001a174) list_highlight_pane_cp17

0x80a0,	// (0x0001a185) list_single_idle_plugin_calendar_pane_g1_copy1

0x80a8,	// (0x0001a18d) list_single_idle_plugin_player_pane_g1

0x2531,	// (0x00014616) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x00021e62) list_single_idle_plugin_player_pane_g

0x80b0,	// (0x0001a195) list_single_idle_plugin_player_pane_t1

0x80be,	// (0x0001a1a3) list_single_idle_plugin_player_pane_t2

0x80cc,	// (0x0001a1b1) list_single_idle_plugin_player_pane_t3

0x80da,	// (0x0001a1bf) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x00021e67) list_single_idle_plugin_player_pane_t

0x80e8,	// (0x0001a1cd) wait_bar_pane_cp15

0x80f0,	// (0x0001a1d5) grid_ai_notification_pane

0x2531,	// (0x00014616) list_single_idle_plugin_notification_pane_g1

0xd444,	// (0x0001f529) cell_ai_notification_pane_ParamLimits

0xd444,	// (0x0001f529) cell_ai_notification_pane

0x8106,	// (0x0001a1eb) cell_ai_notification_pane_g1

0x810e,	// (0x0001a1f3) cell_ai_notification_pane_t1

0xd451,	// (0x0001f536) tb_ext_find_button_pane

0xd459,	// (0x0001f53e) tb_ext_find_pane_g1

0xd461,	// (0x0001f546) tb_ext_find_pane_t1

0xeecd,	// (0x00020fb2) tb_ext_find_button_pane_g1

0x813a,	// (0x0001a21f) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x00021e70) tb_ext_find_button_pane_g

0xd275,	// (0x0001f35a) main_idle_act4_pane_t1_ParamLimits

0xd28b,	// (0x0001f370) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x00021e2e) main_idle_act4_pane_t_ParamLimits

0xd2bd,	// (0x0001f3a2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd2d3,	// (0x0001f3b8) sat_plugin_idle_act4_pane_ParamLimits

0xd2d3,	// (0x0001f3b8) sat_plugin_idle_act4_pane

0xd46f,	// (0x0001f554) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd46f,	// (0x0001f554) sat_plugin_idle_act4_pane_t1

0xd487,	// (0x0001f56c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd487,	// (0x0001f56c) sat_plugin_idle_act4_pane_t2

0xd49f,	// (0x0001f584) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd49f,	// (0x0001f584) sat_plugin_idle_act4_pane_t3

0xd4b7,	// (0x0001f59c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd4b7,	// (0x0001f59c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x00021e75) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x00021e75) sat_plugin_idle_act4_pane_t

0x462d,	// (0x00016712) popup_battery_window_ParamLimits

0x462d,	// (0x00016712) popup_battery_window

0xdeca,	// (0x0001ffaf) bg_popup_sub_pane_cp25_ParamLimits

0xdeca,	// (0x0001ffaf) bg_popup_sub_pane_cp25

0x818f,	// (0x0001a274) popup_battery_window_g1_ParamLimits

0x818f,	// (0x0001a274) popup_battery_window_g1

0x819b,	// (0x0001a280) popup_battery_window_t1_ParamLimits

0x819b,	// (0x0001a280) popup_battery_window_t1

0x81ad,	// (0x0001a292) popup_battery_window_t2_ParamLimits

0x81ad,	// (0x0001a292) popup_battery_window_t2

0x0001,

0xfd99,	// (0x00021e7e) popup_battery_window_t_ParamLimits

0xfd99,	// (0x00021e7e) popup_battery_window_t

0xb66f,	// (0x0001d754) midp_canvas_pane_ParamLimits

0xb6c4,	// (0x0001d7a9) midp_keypad_pane_ParamLimits

0xb6c4,	// (0x0001d7a9) midp_keypad_pane

0x0dc3,	// (0x00012ea8) main_midp_pane_ParamLimits

0x2c9e,	// (0x00014d83) signal_pane_g2_cp_ParamLimits

0xd4cf,	// (0x0001f5b4) aid_size_cell_midp_keypad_ParamLimits

0xd4cf,	// (0x0001f5b4) aid_size_cell_midp_keypad

0xd4ed,	// (0x0001f5d2) midp_keyp_game_grid_pane_ParamLimits

0xd4ed,	// (0x0001f5d2) midp_keyp_game_grid_pane

0xd50c,	// (0x0001f5f1) midp_keyp_rocker_pane_ParamLimits

0xd50c,	// (0x0001f5f1) midp_keyp_rocker_pane

0xd54d,	// (0x0001f632) midp_keyp_sk_left_pane_ParamLimits

0xd54d,	// (0x0001f632) midp_keyp_sk_left_pane

0xd59f,	// (0x0001f684) midp_keyp_sk_right_pane_ParamLimits

0xd59f,	// (0x0001f684) midp_keyp_sk_right_pane

0xdc7b,	// (0x0001fd60) bg_button_pane_cp03

0xd5eb,	// (0x0001f6d0) midp_keyp_sk_left_pane_g1

0xdc7b,	// (0x0001fd60) bg_button_pane_cp04

0xd5eb,	// (0x0001f6d0) midp_keyp_sk_right_pane_g1

0x6185,	// (0x0001826a) midp_keyp_rocker_pane_g1

0xd5f4,	// (0x0001f6d9) keyp_game_cell_pane_ParamLimits

0xd5f4,	// (0x0001f6d9) keyp_game_cell_pane

0xdc7b,	// (0x0001fd60) bg_button_pane_cp02

0xd616,	// (0x0001f6fb) keyp_game_cell_pane_g1

0xaf81,	// (0x0001d066) popup_fep_vkb2_window_ParamLimits

0xaf81,	// (0x0001d066) popup_fep_vkb2_window

0xd61f,	// (0x0001f704) aid_size_cell_vkb2_ParamLimits

0xd61f,	// (0x0001f704) aid_size_cell_vkb2

0xd655,	// (0x0001f73a) popup_fep_vkb2_window_g1_ParamLimits

0xd655,	// (0x0001f73a) popup_fep_vkb2_window_g1

0xd6a5,	// (0x0001f78a) vkb2_area_bottom_pane_ParamLimits

0xd6a5,	// (0x0001f78a) vkb2_area_bottom_pane

0xd6e3,	// (0x0001f7c8) vkb2_area_keypad_pane_ParamLimits

0xd6e3,	// (0x0001f7c8) vkb2_area_keypad_pane

0xd721,	// (0x0001f806) vkb2_area_top_pane_ParamLimits

0xd721,	// (0x0001f806) vkb2_area_top_pane

0xd79d,	// (0x0001f882) vkb2_top_entry_pane_ParamLimits

0xd79d,	// (0x0001f882) vkb2_top_entry_pane

0xd7ca,	// (0x0001f8af) vkb2_top_grid_left_pane_ParamLimits

0xd7ca,	// (0x0001f8af) vkb2_top_grid_left_pane

0xd7ea,	// (0x0001f8cf) vkb2_top_grid_right_pane_ParamLimits

0xd7ea,	// (0x0001f8cf) vkb2_top_grid_right_pane

0x84e8,	// (0x0001a5cd) vkb2_cell_keypad_pane_ParamLimits

0x84e8,	// (0x0001a5cd) vkb2_cell_keypad_pane

0xd830,	// (0x0001f915) vkb2_area_bottom_grid_pane_ParamLimits

0xd830,	// (0x0001f915) vkb2_area_bottom_grid_pane

0xd856,	// (0x0001f93b) vkb2_area_bottom_pane_g1_ParamLimits

0xd856,	// (0x0001f93b) vkb2_area_bottom_pane_g1

0xd87c,	// (0x0001f961) vkb2_area_bottom_pane_g2_ParamLimits

0xd87c,	// (0x0001f961) vkb2_area_bottom_pane_g2

0xd8ad,	// (0x0001f992) vkb2_area_bottom_pane_g3_ParamLimits

0xd8ad,	// (0x0001f992) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x00021e83) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x00021e83) vkb2_area_bottom_pane_g

0x8660,	// (0x0001a745) vkb2_top_cell_left_pane_ParamLimits

0x8660,	// (0x0001a745) vkb2_top_cell_left_pane

0xd903,	// (0x0001f9e8) vkb2_top_entry_pane_g1_ParamLimits

0xd903,	// (0x0001f9e8) vkb2_top_entry_pane_g1

0xd911,	// (0x0001f9f6) vkb2_top_entry_pane_t1_ParamLimits

0xd911,	// (0x0001f9f6) vkb2_top_entry_pane_t1

0x86c8,	// (0x0001a7ad) vkb2_top_entry_pane_t2_ParamLimits

0x86c8,	// (0x0001a7ad) vkb2_top_entry_pane_t2

0x86fa,	// (0x0001a7df) vkb2_top_entry_pane_t3_ParamLimits

0x86fa,	// (0x0001a7df) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x00021e8a) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x00021e8a) vkb2_top_entry_pane_t

0xd94a,	// (0x0001fa2f) vkb2_top_grid_right_pane_g1_ParamLimits

0xd94a,	// (0x0001fa2f) vkb2_top_grid_right_pane_g1

0x8753,	// (0x0001a838) vkb2_top_grid_right_pane_g2_ParamLimits

0x8753,	// (0x0001a838) vkb2_top_grid_right_pane_g2

0x876b,	// (0x0001a850) vkb2_top_grid_right_pane_g3_ParamLimits

0x876b,	// (0x0001a850) vkb2_top_grid_right_pane_g3

0xd960,	// (0x0001fa45) vkb2_top_grid_right_pane_g4_ParamLimits

0xd960,	// (0x0001fa45) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x00021e91) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x00021e91) vkb2_top_grid_right_pane_g

0x8799,	// (0x0001a87e) vkb2_top_cell_left_pane_g1

0x87b0,	// (0x0001a895) vkb2_cell_keypad_pane_g1_ParamLimits

0x87b0,	// (0x0001a895) vkb2_cell_keypad_pane_g1

0x87be,	// (0x0001a8a3) vkb2_cell_keypad_pane_t1_ParamLimits

0x87be,	// (0x0001a8a3) vkb2_cell_keypad_pane_t1

0x87d5,	// (0x0001a8ba) vkb2_cell_bottom_grid_pane_ParamLimits

0x87d5,	// (0x0001a8ba) vkb2_cell_bottom_grid_pane

0x880e,	// (0x0001a8f3) vkb2_cell_bottom_grid_pane_g1

0xd302,	// (0x0001f3e7) aid_call2_pane_cp02

0xd30a,	// (0x0001f3ef) aid_call_pane_cp02

0xd312,	// (0x0001f3f7) clock_digital_number_pane_cp10

0xd31a,	// (0x0001f3ff) clock_digital_number_pane_cp11

0xd322,	// (0x0001f407) clock_digital_number_pane_cp12

0xd32a,	// (0x0001f40f) clock_digital_number_pane_cp13

0xd332,	// (0x0001f417) clock_digital_separator_pane_cp10

0xeecd,	// (0x00020fb2) popup_clock_digital_analogue_window_cp2_g1

0xeecd,	// (0x00020fb2) popup_clock_digital_analogue_window_cp2_g2

0xd33a,	// (0x0001f41f) popup_clock_digital_analogue_window_cp2_g3

0xeecd,	// (0x00020fb2) popup_clock_digital_analogue_window_cp2_g4

0xd33a,	// (0x0001f41f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x00021e46) popup_clock_digital_analogue_window_cp2_g

0xd342,	// (0x0001f427) popup_clock_digital_analogue_window_cp2_t1

0xd350,	// (0x0001f435) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x00021e51) popup_clock_digital_analogue_window_cp2_t

0x6185,	// (0x0001826a) clock_digital_number_pane_cp10_g1

0x6185,	// (0x0001826a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5b,	// (0x00021c40) clock_digital_number_pane_cp10_g

0x6185,	// (0x0001826a) clock_digital_separator_pane_cp10_g1

0x6185,	// (0x0001826a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5b,	// (0x00021c40) clock_digital_separator_pane_cp10_g

0x7ddf,	// (0x00019ec4) uniindi_top_pane_g3

0x7df0,	// (0x00019ed5) uniindi_top_pane_g4

0x8553,	// (0x0001a638) vkb2_row_keypad_pane_ParamLimits

0x8553,	// (0x0001a638) vkb2_row_keypad_pane

0x882a,	// (0x0001a90f) vkb2_cell_t_keypad_pane_ParamLimits

0x882a,	// (0x0001a90f) vkb2_cell_t_keypad_pane

0x8837,	// (0x0001a91c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8837,	// (0x0001a91c) vkb2_cell_t_keypad_pane_cp08

0x8847,	// (0x0001a92c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8847,	// (0x0001a92c) vkb2_cell_t_keypad_pane_cp09

0x8858,	// (0x0001a93d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8858,	// (0x0001a93d) vkb2_cell_t_keypad_pane_cp01

0x8868,	// (0x0001a94d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8868,	// (0x0001a94d) vkb2_cell_t_keypad_pane_cp02

0x8878,	// (0x0001a95d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8878,	// (0x0001a95d) vkb2_cell_t_keypad_pane_cp03

0x8888,	// (0x0001a96d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8888,	// (0x0001a96d) vkb2_cell_t_keypad_pane_cp04

0x8898,	// (0x0001a97d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8898,	// (0x0001a97d) vkb2_cell_t_keypad_pane_cp05

0x88a8,	// (0x0001a98d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x88a8,	// (0x0001a98d) vkb2_cell_t_keypad_pane_cp06

0x88b8,	// (0x0001a99d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x88b8,	// (0x0001a99d) vkb2_cell_t_keypad_pane_cp07

0x88c8,	// (0x0001a9ad) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x88c8,	// (0x0001a9ad) vkb2_cell_t_keypad_pane_cp10

0x65c5,	// (0x000186aa) vkb2_cell_t_keypad_pane_g1

0x88dd,	// (0x0001a9c2) vkb2_cell_t_keypad_pane_t1

0xdc7b,	// (0x0001fd60) popup_grid_graphic2_window

0xd976,	// (0x0001fa5b) aid_size_cell_graphic2_ParamLimits

0xd976,	// (0x0001fa5b) aid_size_cell_graphic2

0x1684,	// (0x00013769) bg_popup_window_pane_cp21_ParamLimits

0x1684,	// (0x00013769) bg_popup_window_pane_cp21

0xd9a8,	// (0x0001fa8d) graphic2_pages_pane_ParamLimits

0xd9a8,	// (0x0001fa8d) graphic2_pages_pane

0xd9f1,	// (0x0001fad6) grid_graphic2_control_pane_ParamLimits

0xd9f1,	// (0x0001fad6) grid_graphic2_control_pane

0xda1f,	// (0x0001fb04) grid_graphic2_pane_ParamLimits

0xda1f,	// (0x0001fb04) grid_graphic2_pane

0xda7e,	// (0x0001fb63) cell_graphic2_pane

0xdc7b,	// (0x0001fd60) main_comp_mode_pane

0x760d,	// (0x000196f2) list_ai3_gene_pane_ParamLimits

0xcfee,	// (0x0001f0d3) bg_popup_window_pane_cp19_ParamLimits

0x7977,	// (0x00019a5c) bg_touch_area_indi_pane_ParamLimits

0x7977,	// (0x00019a5c) bg_touch_area_indi_pane

0x798d,	// (0x00019a72) bg_touch_area_indi_pane_cp01_ParamLimits

0x798d,	// (0x00019a72) bg_touch_area_indi_pane_cp01

0x79a3,	// (0x00019a88) bg_touch_area_indi_pane_cp02_ParamLimits

0x79a3,	// (0x00019a88) bg_touch_area_indi_pane_cp02

0x79b9,	// (0x00019a9e) bg_touch_area_indi_pane_cp03_ParamLimits

0x79b9,	// (0x00019a9e) bg_touch_area_indi_pane_cp03

0x79cf,	// (0x00019ab4) popup_slider_window_g1_ParamLimits

0x79eb,	// (0x00019ad0) popup_slider_window_g2_ParamLimits

0x7a07,	// (0x00019aec) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x00021ddb) popup_slider_window_g_ParamLimits

0x7a63,	// (0x00019b48) popup_slider_window_t1_ParamLimits

0x7ad5,	// (0x00019bba) small_volume_slider_vertical_pane_ParamLimits

0xda7e,	// (0x0001fb63) cell_graphic2_pane_ParamLimits

0xdac7,	// (0x0001fbac) bg_button_pane_cp10_ParamLimits

0xdac7,	// (0x0001fbac) bg_button_pane_cp10

0xdad8,	// (0x0001fbbd) bg_button_pane_cp11_ParamLimits

0xdad8,	// (0x0001fbbd) bg_button_pane_cp11

0xdae9,	// (0x0001fbce) graphic2_pages_pane_g1_ParamLimits

0xdae9,	// (0x0001fbce) graphic2_pages_pane_g1

0xdb04,	// (0x0001fbe9) graphic2_pages_pane_g2_ParamLimits

0xdb04,	// (0x0001fbe9) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x00021e9f) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x00021e9f) graphic2_pages_pane_g

0xdb1c,	// (0x0001fc01) graphic2_pages_pane_t1_ParamLimits

0xdb1c,	// (0x0001fc01) graphic2_pages_pane_t1

0xdb34,	// (0x0001fc19) cell_graphic2_control_pane_ParamLimits

0xdb34,	// (0x0001fc19) cell_graphic2_control_pane

0xdb4e,	// (0x0001fc33) cell_graphic2_pane_g1_ParamLimits

0xdb4e,	// (0x0001fc33) cell_graphic2_pane_g1

0x6422,	// (0x00018507) cell_graphic2_pane_g2_ParamLimits

0x6422,	// (0x00018507) cell_graphic2_pane_g2

0xdb5b,	// (0x0001fc40) cell_graphic2_pane_g3_ParamLimits

0xdb5b,	// (0x0001fc40) cell_graphic2_pane_g3

0x642f,	// (0x00018514) cell_graphic2_pane_g4_ParamLimits

0x642f,	// (0x00018514) cell_graphic2_pane_g4

0xdb68,	// (0x0001fc4d) cell_graphic2_pane_g5_ParamLimits

0xdb68,	// (0x0001fc4d) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x00021ea4) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x00021ea4) cell_graphic2_pane_g

0xdb88,	// (0x0001fc6d) cell_graphic2_pane_t1_ParamLimits

0xdb88,	// (0x0001fc6d) cell_graphic2_pane_t1

0x1c6c,	// (0x00013d51) grid_highlight_pane_cp11_ParamLimits

0x1c6c,	// (0x00013d51) grid_highlight_pane_cp11

0xe9bf,	// (0x00020aa4) bg_button_pane_cp05

0xdb9f,	// (0x0001fc84) cell_graphic2_control_pane_g1

0x6185,	// (0x0001826a) bg_touch_area_indi_pane_g1

0x8af7,	// (0x0001abdc) aid_cmod_rocker_key_size

0x8b01,	// (0x0001abe6) aid_cmode_itu_key_size

0x8b0b,	// (0x0001abf0) main_cmode_video_pane

0x8b13,	// (0x0001abf8) main_comp_mode_itu_pane

0x8b1d,	// (0x0001ac02) main_comp_mode_rocker_pane

0x8b25,	// (0x0001ac0a) cell_cmode_rocker_pane_ParamLimits

0x8b25,	// (0x0001ac0a) cell_cmode_rocker_pane

0x8b37,	// (0x0001ac1c) cell_cmode_itu_pane_ParamLimits

0x8b37,	// (0x0001ac1c) cell_cmode_itu_pane

0xe9bf,	// (0x00020aa4) bg_button_pane_cp06_ParamLimits

0xe9bf,	// (0x00020aa4) bg_button_pane_cp06

0x65c5,	// (0x000186aa) cell_cmode_rocker_pane_g1_ParamLimits

0x65c5,	// (0x000186aa) cell_cmode_rocker_pane_g1

0x7c49,	// (0x00019d2e) cell_cmode_rocker_pane_g2_ParamLimits

0x7c49,	// (0x00019d2e) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x00021eaf) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x00021eaf) cell_cmode_rocker_pane_g

0xdc7b,	// (0x0001fd60) bg_button_pane_cp07

0x8b4c,	// (0x0001ac31) cell_cmode_itu_pane_g1

0x8b55,	// (0x0001ac3a) cell_cmode_itu_pane_t1

0x8b63,	// (0x0001ac48) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x00021eb4) cell_cmode_itu_pane_t

0x7e61,	// (0x00019f46) aid_touch_ctrl_left

0x7e69,	// (0x00019f4e) aid_touch_ctrl_right

0xdc7b,	// (0x0001fd60) compa_mode_pane

0xdbac,	// (0x0001fc91) aid_cmod_rocker_key_size_cp

0xdbb6,	// (0x0001fc9b) aid_cmode_itu_key_size_cp

0x8b85,	// (0x0001ac6a) compa_mode_pane_g1

0x8b8d,	// (0x0001ac72) compa_mode_pane_g2

0x8b95,	// (0x0001ac7a) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x00021eb9) compa_mode_pane_g

0xdbc0,	// (0x0001fca5) main_comp_mode_itu_pane_cp

0xdbca,	// (0x0001fcaf) main_comp_mode_rocker_pane_cp

0xdbd4,	// (0x0001fcb9) cell_cmode_itu_pane_cp_ParamLimits

0xdbd4,	// (0x0001fcb9) cell_cmode_itu_pane_cp

0xdbe9,	// (0x0001fcce) cell_cmode_rocker_pane_cp_ParamLimits

0xdbe9,	// (0x0001fcce) cell_cmode_rocker_pane_cp

0xe9bf,	// (0x00020aa4) bg_button_pane_cp06_cp_ParamLimits

0xe9bf,	// (0x00020aa4) bg_button_pane_cp06_cp

0x65c5,	// (0x000186aa) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x65c5,	// (0x000186aa) cell_cmode_rocker_pane_g1_cp

0x6185,	// (0x0001826a) cell_cmode_rocker_pane_g2_cp

0xdc7b,	// (0x0001fd60) bg_button_pane_cp07_cp

0xdbfb,	// (0x0001fce0) cell_cmode_itu_pane_g1_cp

0xdc04,	// (0x0001fce9) cell_cmode_itu_pane_t1_cp

0xdc12,	// (0x0001fcf7) cell_cmode_itu_pane_t2_cp

0xc6ff,	// (0x0001e7e4) settings_code_pane_cp2

0xdd6b,	// (0x0001fe50) bg_popup_window_pane_cp3_ParamLimits

0xe0a2,	// (0x00020187) heading_pane_cp3_ParamLimits

0xe0ae,	// (0x00020193) listscroll_popup_graphic_pane_ParamLimits

0x61ee,	// (0x000182d3) fep_hwr_aid_pane_ParamLimits

0x7b4d,	// (0x00019c32) aid_touch_sctrl_top_ParamLimits

0x7b5a,	// (0x00019c3f) sctrl_sk_top_pane_g1_ParamLimits

0x65c5,	// (0x000186aa) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x00021df4) sctrl_sk_top_pane_g_ParamLimits

0x7b67,	// (0x00019c4c) sctrl_sk_top_pane_t1_ParamLimits

0x7b4d,	// (0x00019c32) aid_touch_sctrl_bottom_ParamLimits

0x7b67,	// (0x00019c4c) sctrl_sk_bottom_pane_t1_ParamLimits

0x7dab,	// (0x00019e90) aid_area_touch_clock

0xd75f,	// (0x0001f844) aid_vkb2_area_top_pane_cell_ParamLimits

0xd75f,	// (0x0001f844) aid_vkb2_area_top_pane_cell

0xd80a,	// (0x0001f8ef) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd80a,	// (0x0001f8ef) aid_vkb2_area_bottom_pane_cell

0x8680,	// (0x0001a765) popup_char_count_window

0x8bf9,	// (0x0001acde) popup_char_count_window_g1

0x8c02,	// (0x0001ace7) popup_char_count_window_g2

0x8c0b,	// (0x0001acf0) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x00021ec0) popup_char_count_window_g

0x8c14,	// (0x0001acf9) popup_char_count_window_t1

0x8338,	// (0x0001a41d) popup_fep_char_preview_window_ParamLimits

0x8338,	// (0x0001a41d) popup_fep_char_preview_window

0xd77f,	// (0x0001f864) vkb2_top_candi_pane_ParamLimits

0xd77f,	// (0x0001f864) vkb2_top_candi_pane

0xdc20,	// (0x0001fd05) cell_vkb2_top_candi_pane_ParamLimits

0xdc20,	// (0x0001fd05) cell_vkb2_top_candi_pane

0x1684,	// (0x00013769) bg_popup_fep_char_preview_window_ParamLimits

0x1684,	// (0x00013769) bg_popup_fep_char_preview_window

0x8c5b,	// (0x0001ad40) popup_fep_char_preview_window_t1_ParamLimits

0x8c5b,	// (0x0001ad40) popup_fep_char_preview_window_t1

0x8c95,	// (0x0001ad7a) bg_popup_fep_char_preview_window_g1

0x8c9d,	// (0x0001ad82) bg_popup_fep_char_preview_window_g2

0x8ca5,	// (0x0001ad8a) bg_popup_fep_char_preview_window_g3

0x8cad,	// (0x0001ad92) bg_popup_fep_char_preview_window_g4

0x8cb5,	// (0x0001ad9a) bg_popup_fep_char_preview_window_g5

0x8cbd,	// (0x0001ada2) bg_popup_fep_char_preview_window_g6

0x8cc5,	// (0x0001adaa) bg_popup_fep_char_preview_window_g7

0x8ccd,	// (0x0001adb2) bg_popup_fep_char_preview_window_g8

0x8cd5,	// (0x0001adba) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x00021ec7) bg_popup_fep_char_preview_window_g

0x65c5,	// (0x000186aa) cell_vkb2_top_candi_pane_g1_ParamLimits

0x65c5,	// (0x000186aa) cell_vkb2_top_candi_pane_g1

0x691c,	// (0x00018a01) cell_vkb2_top_candi_pane_g2_ParamLimits

0x691c,	// (0x00018a01) cell_vkb2_top_candi_pane_g2

0x693d,	// (0x00018a22) cell_vkb2_top_candi_pane_g3_ParamLimits

0x693d,	// (0x00018a22) cell_vkb2_top_candi_pane_g3

0x8cdd,	// (0x0001adc2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8cdd,	// (0x0001adc2) cell_vkb2_top_candi_pane_g4

0x8cfe,	// (0x0001ade3) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8cfe,	// (0x0001ade3) cell_vkb2_top_candi_pane_g5

0x7c49,	// (0x00019d2e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7c49,	// (0x00019d2e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x00021eda) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x00021eda) cell_vkb2_top_candi_pane_g

0x8d1f,	// (0x0001ae04) cell_vkb2_top_candi_pane_t1

0x21fe,	// (0x000142e3) aid_size_touch_slider_mark_ParamLimits

0x21fe,	// (0x000142e3) aid_size_touch_slider_mark

0xd9dc,	// (0x0001fac1) grid_graphic2_catg_pane_ParamLimits

0xd9dc,	// (0x0001fac1) grid_graphic2_catg_pane

0xda53,	// (0x0001fb38) popup_grid_graphic2_window_t1_ParamLimits

0xda53,	// (0x0001fb38) popup_grid_graphic2_window_t1

0xda68,	// (0x0001fb4d) popup_grid_graphic2_window_t2_ParamLimits

0xda68,	// (0x0001fb4d) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x00021e9a) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x00021e9a) popup_grid_graphic2_window_t

0xe9bf,	// (0x00020aa4) bg_button_pane_cp05_ParamLimits

0xdb9f,	// (0x0001fc84) cell_graphic2_control_pane_g1_ParamLimits

0x7e27,	// (0x00019f0c) cell_graphic2_catg_pane_ParamLimits

0x7e27,	// (0x00019f0c) cell_graphic2_catg_pane

0xdc7b,	// (0x0001fd60) bg_button_pane_cp12

0xdc6a,	// (0x0001fd4f) cell_graphic2_catg_pane_g1

0x7d77,	// (0x00019e5c) cell_tb_ext_pane_t1_ParamLimits

0x8710,	// (0x0001a7f5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8710,	// (0x0001a7f5) vkb2_top_cell_right_narrow_pane

0x8728,	// (0x0001a80d) vkb2_top_cell_right_wide_pane_ParamLimits

0x8728,	// (0x0001a80d) vkb2_top_cell_right_wide_pane

0x61e0,	// (0x000182c5) bg_vkb2_func_pane_ParamLimits

0x61e0,	// (0x000182c5) bg_vkb2_func_pane

0x8799,	// (0x0001a87e) vkb2_top_cell_left_pane_g1_ParamLimits

0x61e0,	// (0x000182c5) bg_vkb2_fuc_pane_cp03_ParamLimits

0x61e0,	// (0x000182c5) bg_vkb2_fuc_pane_cp03

0x880e,	// (0x0001a8f3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x10eb,	// (0x000131d0) bg_vkb2_func_pane_g1

0x10e3,	// (0x000131c8) bg_vkb2_func_pane_g2

0x10f3,	// (0x000131d8) bg_vkb2_func_pane_g3

0x10fb,	// (0x000131e0) bg_vkb2_func_pane_g4

0x1103,	// (0x000131e8) bg_vkb2_func_pane_g5

0x110b,	// (0x000131f0) bg_vkb2_func_pane_g6

0x111b,	// (0x00013200) bg_vkb2_func_pane_g7

0x1113,	// (0x000131f8) bg_vkb2_func_pane_g8

0x10db,	// (0x000131c0) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x00021ee7) bg_vkb2_func_pane_g

0x61e0,	// (0x000182c5) bg_vkb2_fuc_pane_cp01_ParamLimits

0x61e0,	// (0x000182c5) bg_vkb2_fuc_pane_cp01

0x8799,	// (0x0001a87e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8799,	// (0x0001a87e) vkb2_top_cell_right_wide_pane_g1

0x61e0,	// (0x000182c5) bg_vkb2_fuc_pane_cp02_ParamLimits

0x61e0,	// (0x000182c5) bg_vkb2_fuc_pane_cp02

0x880e,	// (0x0001a8f3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x880e,	// (0x0001a8f3) vkb2_top_cell_right_narrow_pane_g1

0xcf3c,	// (0x0001f021) aid_touch_area_decrease_ParamLimits

0xcf3c,	// (0x0001f021) aid_touch_area_decrease

0xcf6a,	// (0x0001f04f) aid_touch_area_increase_ParamLimits

0xcf6a,	// (0x0001f04f) aid_touch_area_increase

0xcf92,	// (0x0001f077) aid_touch_area_mute_ParamLimits

0xcf92,	// (0x0001f077) aid_touch_area_mute

0xcfba,	// (0x0001f09f) aid_touch_area_slider_ParamLimits

0xcfba,	// (0x0001f09f) aid_touch_area_slider

0xcffa,	// (0x0001f0df) popup_slider_window_g4_ParamLimits

0xcffa,	// (0x0001f0df) popup_slider_window_g4

0xd022,	// (0x0001f107) popup_slider_window_g5_ParamLimits

0xd022,	// (0x0001f107) popup_slider_window_g5

0xd056,	// (0x0001f13b) popup_slider_window_g6_ParamLimits

0xd056,	// (0x0001f13b) popup_slider_window_g6

0x7a8f,	// (0x00019b74) popup_slider_window_t2_ParamLimits

0x7a8f,	// (0x00019b74) popup_slider_window_t2

0x0001,

0xfd03,	// (0x00021de8) popup_slider_window_t_ParamLimits

0xfd03,	// (0x00021de8) popup_slider_window_t

0xd072,	// (0x0001f157) slider_pane_ParamLimits

0xd072,	// (0x0001f157) slider_pane

0x8d50,	// (0x0001ae35) slider_pane_g1_ParamLimits

0x8d50,	// (0x0001ae35) slider_pane_g1

0x8d64,	// (0x0001ae49) slider_pane_g2_ParamLimits

0x8d64,	// (0x0001ae49) slider_pane_g2

0x8d7a,	// (0x0001ae5f) slider_pane_g3_ParamLimits

0x8d7a,	// (0x0001ae5f) slider_pane_g3

0x0003,

0xfe15,	// (0x00021efa) slider_pane_g_ParamLimits

0xfe15,	// (0x00021efa) slider_pane_g

0xbd97,	// (0x0001de7c) popup_tb_float_extension_window_ParamLimits

0xbd97,	// (0x0001de7c) popup_tb_float_extension_window

0x8da6,	// (0x0001ae8b) aid_size_cell_tb_float_ext

0xdc7b,	// (0x0001fd60) bg_popup_sub_window_cp28

0x8db1,	// (0x0001ae96) grid_tb_float_ext_pane

0x8db9,	// (0x0001ae9e) cell_tb_float_ext_pane_ParamLimits

0x8db9,	// (0x0001ae9e) cell_tb_float_ext_pane

0x8dd1,	// (0x0001aeb6) cell_tb_float_ext_pane_g1

0x8dda,	// (0x0001aebf) grid_highlight_pane_cp12

0xcaa8,	// (0x0001eb8d) cell_last_hwr_side_pane_ParamLimits

0xcaa8,	// (0x0001eb8d) cell_last_hwr_side_pane

0x6185,	// (0x0001826a) cell_last_hwr_side_pane_g1

0x8de3,	// (0x0001aec8) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x00021f03) cell_last_hwr_side_pane_g

0xd8de,	// (0x0001f9c3) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd8de,	// (0x0001f9c3) vkb2_area_bottom_space_btn_pane

0x65c5,	// (0x000186aa) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x88dd,	// (0x0001a9c2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8d1f,	// (0x0001ae04) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8dec,	// (0x0001aed1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8dec,	// (0x0001aed1) vkb2_area_bottom_space_btn_pane_g1

0x8e22,	// (0x0001af07) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8e22,	// (0x0001af07) vkb2_area_bottom_space_btn_pane_g2

0x8e58,	// (0x0001af3d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8e58,	// (0x0001af3d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x00021f08) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x00021f08) vkb2_area_bottom_space_btn_pane_g

0x629d,	// (0x00018382) cel_fep_hwr_func_pane_ParamLimits

0x629d,	// (0x00018382) cel_fep_hwr_func_pane

0xca7d,	// (0x0001eb62) cell_hwr_side_button_pane_ParamLimits

0xca7d,	// (0x0001eb62) cell_hwr_side_button_pane

0x7dab,	// (0x00019e90) aid_area_touch_clock_ParamLimits

0xdeca,	// (0x0001ffaf) bg_uniindi_top_pane_ParamLimits

0x7dbd,	// (0x00019ea2) uniindi_top_pane_g1_ParamLimits

0x7dd3,	// (0x00019eb8) uniindi_top_pane_g2_ParamLimits

0x7ddf,	// (0x00019ec4) uniindi_top_pane_g3_ParamLimits

0x7df0,	// (0x00019ed5) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x00021e20) uniindi_top_pane_g_ParamLimits

0x7dfd,	// (0x00019ee2) uniindi_top_pane_t1_ParamLimits

0xdeca,	// (0x0001ffaf) bg_vkb2_func_pane_cp01_ParamLimits

0xdeca,	// (0x0001ffaf) bg_vkb2_func_pane_cp01

0x8e9e,	// (0x0001af83) cel_fep_hwr_func_pane_g1_ParamLimits

0x8e9e,	// (0x0001af83) cel_fep_hwr_func_pane_g1

0xdeca,	// (0x0001ffaf) bg_vkb2_func_pane_cp02_ParamLimits

0xdeca,	// (0x0001ffaf) bg_vkb2_func_pane_cp02

0x8e9e,	// (0x0001af83) cell_hwr_side_button_pane_g1_ParamLimits

0x8e9e,	// (0x0001af83) cell_hwr_side_button_pane_g1

0x0fff,	// (0x000130e4) status_pane_g4_ParamLimits

0x0fff,	// (0x000130e4) status_pane_g4

0x1017,	// (0x000130fc) status_pane_t1

0x5f77,	// (0x0001805c) form2_midp_gauge_slider_cont_pane

0x5f7f,	// (0x00018064) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc9d1,	// (0x0001eab6) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc9e3,	// (0x0001eac8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0e,	// (0x00021bf3) form2_midp_gauge_slider_pane_t_ParamLimits

0x5fb5,	// (0x0001809a) form2_midp_slider_pane_ParamLimits

0x82f8,	// (0x0001a3dd) aid_size_cell_func_vkb2_ParamLimits

0x82f8,	// (0x0001a3dd) aid_size_cell_func_vkb2

0x8d92,	// (0x0001ae77) slider_pane_g4_ParamLimits

0x8d92,	// (0x0001ae77) slider_pane_g4

0xe2cf,	// (0x000203b4) form2_midp_gauge_slider_pane_t2_cp01

0xe2dd,	// (0x000203c2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe2dd,	// (0x000203c2) form2_midp_gauge_slider_pane_t3_cp01

0x8ed7,	// (0x0001afbc) form2_midp_slider_pane_cp01

0xdc7b,	// (0x0001fd60) navi_smil_pane

0x8f0b,	// (0x0001aff0) navi_smil_pane_g1

0x8f13,	// (0x0001aff8) navi_smil_pane_t1

0x8ee0,	// (0x0001afc5) form2_midp_slider_pane_g1

0x8ee9,	// (0x0001afce) form2_midp_slider_pane_g2

0x8ef1,	// (0x0001afd6) form2_midp_slider_pane_g3

0x8ee0,	// (0x0001afc5) form2_midp_slider_pane_g4

0xe2fa,	// (0x000203df) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x00021f11) form2_midp_slider_pane_g

0x8e8e,	// (0x0001af73) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8e8e,	// (0x0001af73) vkb2_area_bottom_space_btn_pane_g4

0xbf39,	// (0x0001e01e) lc0_navi_pane_ParamLimits

0xbf39,	// (0x0001e01e) lc0_navi_pane

0xbfa3,	// (0x0001e088) lc0_stat_indi_pane_ParamLimits

0xbfa3,	// (0x0001e088) lc0_stat_indi_pane

0xbfb8,	// (0x0001e09d) ls0_title_pane_ParamLimits

0xbfb8,	// (0x0001e09d) ls0_title_pane

0xe9bf,	// (0x00020aa4) bg_popup_sub_pane_cp14_ParamLimits

0x7d92,	// (0x00019e77) list_uniindi_pane_ParamLimits

0x7d9e,	// (0x00019e83) uniindi_top_pane_ParamLimits

0x7e39,	// (0x00019f1e) list_single_uniindi_pane_g1_ParamLimits

0x7e4c,	// (0x00019f31) list_single_uniindi_pane_t1_ParamLimits

0xe303,	// (0x000203e8) lc0_stat_clock_pane_ParamLimits

0xe303,	// (0x000203e8) lc0_stat_clock_pane

0xe310,	// (0x000203f5) lc0_stat_indi_pane_g1_ParamLimits

0xe310,	// (0x000203f5) lc0_stat_indi_pane_g1

0xe31d,	// (0x00020402) lc0_stat_indi_pane_g2_ParamLimits

0xe31d,	// (0x00020402) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x00021f1c) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x00021f1c) lc0_stat_indi_pane_g

0xe32a,	// (0x0002040f) lc0_uni_indicator_pane_ParamLimits

0xe32a,	// (0x0002040f) lc0_uni_indicator_pane

0x8f55,	// (0x0001b03a) ls0_title_pane_g1_ParamLimits

0x8f55,	// (0x0001b03a) ls0_title_pane_g1

0xe337,	// (0x0002041c) ls0_title_pane_t1_ParamLimits

0xe337,	// (0x0002041c) ls0_title_pane_t1

0xe365,	// (0x0002044a) lc0_uni_indicator_pane_g1_ParamLimits

0xe365,	// (0x0002044a) lc0_uni_indicator_pane_g1

0x8fb1,	// (0x0001b096) lc0_stat_clock_pane_t1

0xdc7b,	// (0x0001fd60) main_ai5_pane

0x8fbf,	// (0x0001b0a4) ai5_sk_pane_ParamLimits

0x8fbf,	// (0x0001b0a4) ai5_sk_pane

0xe37a,	// (0x0002045f) cell_ai5_widget_pane_ParamLimits

0xe37a,	// (0x0002045f) cell_ai5_widget_pane

0xe3e1,	// (0x000204c6) aid_size_cell_widget_grid

0x903b,	// (0x0001b120) bg_ai5_widget_pane_ParamLimits

0x903b,	// (0x0001b120) bg_ai5_widget_pane

0xe410,	// (0x000204f5) cell_ai5_widget_pane_g2

0xe420,	// (0x00020505) cell_ai5_widget_pane_g3

0xe434,	// (0x00020519) cell_ai5_widget_pane_g4

0xe440,	// (0x00020525) cell_ai5_widget_pane_g5

0xe44c,	// (0x00020531) cell_ai5_widget_pane_g6

0xe458,	// (0x0002053d) cell_ai5_widget_pane_g7

0xe4a0,	// (0x00020585) cell_ai5_widget_pane_t1_ParamLimits

0xe4a0,	// (0x00020585) cell_ai5_widget_pane_t1

0xe4bd,	// (0x000205a2) cell_ai5_widget_pane_t2_ParamLimits

0xe4bd,	// (0x000205a2) cell_ai5_widget_pane_t2

0xe4d5,	// (0x000205ba) cell_ai5_widget_pane_t3_ParamLimits

0xe4d5,	// (0x000205ba) cell_ai5_widget_pane_t3

0xe4ed,	// (0x000205d2) cell_ai5_widget_pane_t4_ParamLimits

0xe4ed,	// (0x000205d2) cell_ai5_widget_pane_t4

0xe507,	// (0x000205ec) cell_ai5_widget_pane_t5_ParamLimits

0xe507,	// (0x000205ec) cell_ai5_widget_pane_t5

0x9179,	// (0x0001b25e) cell_ai5_widget_pane_t6_ParamLimits

0x9179,	// (0x0001b25e) cell_ai5_widget_pane_t6

0x918b,	// (0x0001b270) cell_ai5_widget_pane_t7_ParamLimits

0x918b,	// (0x0001b270) cell_ai5_widget_pane_t7

0xe526,	// (0x0002060b) cell_ai5_widget_pane_t8_ParamLimits

0xe526,	// (0x0002060b) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x00021f36) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x00021f36) cell_ai5_widget_pane_t

0xe56e,	// (0x00020653) grid_ai5_widget_pane

0xe9bf,	// (0x00020aa4) highlight_cell_ai5_widget_pane_ParamLimits

0xe9bf,	// (0x00020aa4) highlight_cell_ai5_widget_pane

0xe582,	// (0x00020667) ai5_sk_left_pane

0xe58c,	// (0x00020671) ai5_sk_middle_pane

0xe596,	// (0x0002067b) ai5_sk_right_pane

0x9220,	// (0x0001b305) bg_ai5_widget_pane_g1_ParamLimits

0x9220,	// (0x0001b305) bg_ai5_widget_pane_g1

0x922c,	// (0x0001b311) bg_ai5_widget_pane_g2_ParamLimits

0x922c,	// (0x0001b311) bg_ai5_widget_pane_g2

0x9238,	// (0x0001b31d) bg_ai5_widget_pane_g3_ParamLimits

0x9238,	// (0x0001b31d) bg_ai5_widget_pane_g3

0x9244,	// (0x0001b329) bg_ai5_widget_pane_g4_ParamLimits

0x9244,	// (0x0001b329) bg_ai5_widget_pane_g4

0x9250,	// (0x0001b335) bg_ai5_widget_pane_g5_ParamLimits

0x9250,	// (0x0001b335) bg_ai5_widget_pane_g5

0x925c,	// (0x0001b341) bg_ai5_widget_pane_g6_ParamLimits

0x925c,	// (0x0001b341) bg_ai5_widget_pane_g6

0x9268,	// (0x0001b34d) bg_ai5_widget_pane_g7_ParamLimits

0x9268,	// (0x0001b34d) bg_ai5_widget_pane_g7

0x9274,	// (0x0001b359) bg_ai5_widget_pane_g8_ParamLimits

0x9274,	// (0x0001b359) bg_ai5_widget_pane_g8

0x9280,	// (0x0001b365) bg_ai5_widget_pane_g9_ParamLimits

0x9280,	// (0x0001b365) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x00021f4b) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x00021f4b) bg_ai5_widget_pane_g

0xe5a0,	// (0x00020685) cell_shortcut_ai5_widget_pane_ParamLimits

0xe5a0,	// (0x00020685) cell_shortcut_ai5_widget_pane

0xddd3,	// (0x0001feb8) bg_cell_shortcut_ai5_widget_pane

0xe5b1,	// (0x00020696) cell_grid_ai5_widget_pane_g1

0x92c2,	// (0x0001b3a7) highlight_cell_shortcut_ai5_widget_pane

0x10e3,	// (0x000131c8) ai5_sk_left_pane_g1

0x92ca,	// (0x0001b3af) ai5_sk_left_pane_g2

0x92d2,	// (0x0001b3b7) ai5_sk_left_pane_g3

0x92da,	// (0x0001b3bf) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x00021f5e) ai5_sk_left_pane_g

0x92e2,	// (0x0001b3c7) ai5_sk_left_pane_t1

0x10eb,	// (0x000131d0) ai5_sk_right_pane_g1

0x92f0,	// (0x0001b3d5) ai5_sk_right_pane_g2

0x92f8,	// (0x0001b3dd) ai5_sk_right_pane_g3

0x9300,	// (0x0001b3e5) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x00021f67) ai5_sk_right_pane_g

0x9308,	// (0x0001b3ed) ai5_sk_right_pane_t1

0x10eb,	// (0x000131d0) ai5_sk_middle_pane_g1

0x10e3,	// (0x000131c8) ai5_sk_middle_pane_g2

0x1103,	// (0x000131e8) ai5_sk_middle_pane_g3

0x92f8,	// (0x0001b3dd) ai5_sk_middle_pane_g4

0x92d2,	// (0x0001b3b7) ai5_sk_middle_pane_g5

0x9316,	// (0x0001b3fb) ai5_sk_middle_pane_g6

0xe5ba,	// (0x0002069f) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x00021f70) ai5_sk_middle_pane_g

0xbe37,	// (0x0001df1c) aid_touch_area_size_lc0_ParamLimits

0xbe37,	// (0x0001df1c) aid_touch_area_size_lc0

0x695e,	// (0x00018a43) cell_hwr_candidate_pane_t1_ParamLimits

0x0f34,	// (0x00013019) aid_touch_navi_pane

0xc0a4,	// (0x0001e189) status_dt_navi_pane_ParamLimits

0xc0a4,	// (0x0001e189) status_dt_navi_pane

0xc0bc,	// (0x0001e1a1) status_dt_sta_pane_ParamLimits

0xc0bc,	// (0x0001e1a1) status_dt_sta_pane

0xe5c2,	// (0x000206a7) dt_sta_controll_pane

0xe5cf,	// (0x000206b4) dt_sta_indi_pane

0xe5dc,	// (0x000206c1) dt_sta_title_pane

0xdeca,	// (0x0001ffaf) bg_dt_sta_indi_pane_ParamLimits

0xdeca,	// (0x0001ffaf) bg_dt_sta_indi_pane

0xe5ee,	// (0x000206d3) dt_sta_battery_pane

0xe5f6,	// (0x000206db) dt_sta_indi_pane_g1

0xe5ff,	// (0x000206e4) dt_sta_indi_pane_g2

0xe608,	// (0x000206ed) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x00021f7f) dt_sta_indi_pane_g

0xe611,	// (0x000206f6) dt_sta_signal_pane

0xe9bf,	// (0x00020aa4) bg_dt_sta_title_pane_ParamLimits

0xe9bf,	// (0x00020aa4) bg_dt_sta_title_pane

0xe61a,	// (0x000206ff) dt_sta_title_pane_g1

0xe622,	// (0x00020707) dt_sta_title_pane_t1_ParamLimits

0xe622,	// (0x00020707) dt_sta_title_pane_t1

0xdc7b,	// (0x0001fd60) bg_dt_sta_control_pane

0xe637,	// (0x0002071c) dt_sta_controll_pane_g1

0xe640,	// (0x00020725) bg_dt_sta_title_pane_g1

0xe649,	// (0x0002072e) bg_dt_sta_title_pane_g2

0xe652,	// (0x00020737) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x00021f86) bg_dt_sta_title_pane_g

0x6185,	// (0x0001826a) bg_dt_sta_indi_pane_g1

0xe65b,	// (0x00020740) dt_sta_signal_pane_g1

0xe663,	// (0x00020748) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x00021f8d) dt_sta_signal_pane_g

0x93d4,	// (0x0001b4b9) dt_sta_battery_pane_g1

0x93dd,	// (0x0001b4c2) dt_sta_battery_pane_t1

0x6185,	// (0x0001826a) bg_dt_sta_control_pane_g1

0xef48,	// (0x0002102d) fep_china_uni_eep_pane

0xef50,	// (0x00021035) fep_china_uni_entry_pane_ParamLimits

0xef60,	// (0x00021045) popup_fep_china_uni_window_g1_ParamLimits

0xef70,	// (0x00021055) popup_fep_china_uni_window_g2_ParamLimits

0xef70,	// (0x00021055) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x00021842) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x00021842) popup_fep_china_uni_window_g

0x93ec,	// (0x0001b4d1) fep_china_uni_eep_pane_g1

0x93f4,	// (0x0001b4d9) fep_china_uni_eep_pane_t1

0x8f02,	// (0x0001afe7) aid_touch_area_size_smil_player

0x0fd2,	// (0x000130b7) lc0_clock_pane

0x100b,	// (0x000130f0) status_pane_g5_ParamLimits

0x100b,	// (0x000130f0) status_pane_g5

0xb9cb,	// (0x0001dab0) popup_keymap_window

0x0feb,	// (0x000130d0) status_icon_pane

0xe420,	// (0x00020505) cell_ai5_widget_pane_g3_ParamLimits

0xe434,	// (0x00020519) cell_ai5_widget_pane_g4_ParamLimits

0xe440,	// (0x00020525) cell_ai5_widget_pane_g5_ParamLimits

0xe464,	// (0x00020549) cell_ai5_widget_pane_g8_ParamLimits

0xe464,	// (0x00020549) cell_ai5_widget_pane_g8

0xe478,	// (0x0002055d) cell_ai5_widget_pane_g9_ParamLimits

0xe478,	// (0x0002055d) cell_ai5_widget_pane_g9

0xe48c,	// (0x00020571) cell_ai5_widget_pane_g10_ParamLimits

0xe48c,	// (0x00020571) cell_ai5_widget_pane_g10

0x9403,	// (0x0001b4e8) status_icon_pane_g1

0xdc7b,	// (0x0001fd60) bg_popup_sub_pane_cp13

0x940b,	// (0x0001b4f0) popup_keymap_window_t1

0xb73c,	// (0x0001d821) control_pane_g6_ParamLimits

0xb73c,	// (0x0001d821) control_pane_g6

0xb749,	// (0x0001d82e) control_pane_g7_ParamLimits

0xb749,	// (0x0001d82e) control_pane_g7

0xb756,	// (0x0001d83b) control_pane_g8_ParamLimits

0xb756,	// (0x0001d83b) control_pane_g8

0xe5c2,	// (0x000206a7) dt_sta_controll_pane_ParamLimits

0xe5cf,	// (0x000206b4) dt_sta_indi_pane_ParamLimits

0xe5dc,	// (0x000206c1) dt_sta_title_pane_ParamLimits

0xe25c,	// (0x00020341) aid_size_touch_scroll_bar_cale

0x4641,	// (0x00016726) popup_discreet_window_ParamLimits

0x4641,	// (0x00016726) popup_discreet_window

0xafb3,	// (0x0001d098) popup_sk_window

0x1684,	// (0x00013769) bg_popup_sub_pane_cp28_ParamLimits

0x1684,	// (0x00013769) bg_popup_sub_pane_cp28

0x9419,	// (0x0001b4fe) popup_discreet_window_g1_ParamLimits

0x9419,	// (0x0001b4fe) popup_discreet_window_g1

0x9439,	// (0x0001b51e) popup_discreet_window_t1_ParamLimits

0x9439,	// (0x0001b51e) popup_discreet_window_t1

0x9457,	// (0x0001b53c) popup_discreet_window_t2_ParamLimits

0x9457,	// (0x0001b53c) popup_discreet_window_t2

0x0002,

0xfead,	// (0x00021f92) popup_discreet_window_t_ParamLimits

0xfead,	// (0x00021f92) popup_discreet_window_t

0x94a9,	// (0x0001b58e) popup_sk_window_g1

0x94b2,	// (0x0001b597) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x00021f99) popup_sk_window_g

0x94bb,	// (0x0001b5a0) popup_sk_window_t1

0x94c9,	// (0x0001b5ae) popup_sk_window_t1_copy1

0xe410,	// (0x000204f5) cell_ai5_widget_pane_g2_ParamLimits

0xe538,	// (0x0002061d) cell_ai5_widget_pane_t9_ParamLimits

0xe538,	// (0x0002061d) cell_ai5_widget_pane_t9

0xdc7b,	// (0x0001fd60) main_fep_fshwr2_pane

0xe66b,	// (0x00020750) aid_fshwr2_btn_pane

0xe673,	// (0x00020758) aid_fshwr2_syb_pane

0xe67b,	// (0x00020760) aid_fshwr2_txt_pane

0xe683,	// (0x00020768) fshwr2_func_candi_pane

0xe68b,	// (0x00020770) fshwr2_hwr_syb_pane

0xe693,	// (0x00020778) fshwr2_icf_pane

0xdc7b,	// (0x0001fd60) fshwr2_icf_bg_pane

0xe69b,	// (0x00020780) fshwr2_icf_pane_t1_ParamLimits

0xe69b,	// (0x00020780) fshwr2_icf_pane_t1

0x6185,	// (0x0001826a) fshwr2_func_candi_pane_g1

0x9530,	// (0x0001b615) fshwr2_func_candi_row_pane_ParamLimits

0x9530,	// (0x0001b615) fshwr2_func_candi_row_pane

0xe6b3,	// (0x00020798) cell_fshwr2_syb_pane_ParamLimits

0xe6b3,	// (0x00020798) cell_fshwr2_syb_pane

0x65c5,	// (0x000186aa) fshwr2_hwr_syb_pane_g1_ParamLimits

0x65c5,	// (0x000186aa) fshwr2_hwr_syb_pane_g1

0xdc7b,	// (0x0001fd60) bg_popup_call_pane_cp01

0x9558,	// (0x0001b63d) fshwr2_func_candi_cell_pane_ParamLimits

0x9558,	// (0x0001b63d) fshwr2_func_candi_cell_pane

0x9583,	// (0x0001b668) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9583,	// (0x0001b668) fshwr2_func_candi_cell_bg_pane

0x959d,	// (0x0001b682) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x959d,	// (0x0001b682) fshwr2_func_candi_cell_pane_g1

0x95bd,	// (0x0001b6a2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x95bd,	// (0x0001b6a2) fshwr2_func_candi_cell_pane_t1

0xdc7b,	// (0x0001fd60) bg_button_pane_cp08

0xf378,	// (0x0002145d) cell_fshwr2_syb_bg_pane

0xe6ca,	// (0x000207af) cell_fshwr2_syb_bg_pane_g1

0xe6d2,	// (0x000207b7) cell_fshwr2_syb_bg_pane_t1

0xe9bf,	// (0x00020aa4) main_tmo_pane

0xc50e,	// (0x0001e5f3) uni_indicator_pane_g1_ParamLimits

0xc523,	// (0x0001e608) uni_indicator_pane_g2_ParamLimits

0xc539,	// (0x0001e61e) uni_indicator_pane_g3_ParamLimits

0x2010,	// (0x000140f5) uni_indicator_pane_g4_ParamLimits

0x2010,	// (0x000140f5) uni_indicator_pane_g4

0x2024,	// (0x00014109) uni_indicator_pane_g5_ParamLimits

0x2024,	// (0x00014109) uni_indicator_pane_g5

0x2038,	// (0x0001411d) uni_indicator_pane_g6_ParamLimits

0x2038,	// (0x0001411d) uni_indicator_pane_g6

0xf947,	// (0x00021a2c) uni_indicator_pane_g_ParamLimits

0xcf20,	// (0x0001f005) popup_tmo_note_window_ParamLimits

0xcf20,	// (0x0001f005) popup_tmo_note_window

0xdc7b,	// (0x0001fd60) fshwr2_bg_pane

0x95ae,	// (0x0001b693) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x95ae,	// (0x0001b693) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x00021f9e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x00021f9e) fshwr2_func_candi_cell_pane_g

0x6185,	// (0x0001826a) bg_popup_window_pane_cp01

0x95e7,	// (0x0001b6cc) bg_popup_window_pane_g1_cp01

0x95f0,	// (0x0001b6d5) bg_popup_window_pane_cp22_ParamLimits

0x95f0,	// (0x0001b6d5) bg_popup_window_pane_cp22

0x95fe,	// (0x0001b6e3) listscroll_tmo_link_pane_ParamLimits

0x95fe,	// (0x0001b6e3) listscroll_tmo_link_pane

0x963e,	// (0x0001b723) popup_tmo_note_window_g1_ParamLimits

0x963e,	// (0x0001b723) popup_tmo_note_window_g1

0x964b,	// (0x0001b730) tmo_note_info_pane_ParamLimits

0x964b,	// (0x0001b730) tmo_note_info_pane

0xe6e1,	// (0x000207c6) list_tmo_note_info_pane_g1_ParamLimits

0xe6e1,	// (0x000207c6) list_tmo_note_info_pane_g1

0x967c,	// (0x0001b761) list_tmo_note_info_pane_g2_ParamLimits

0x967c,	// (0x0001b761) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x00021fa3) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x00021fa3) list_tmo_note_info_pane_g

0x9698,	// (0x0001b77d) list_tmo_note_info_text_pane_ParamLimits

0x9698,	// (0x0001b77d) list_tmo_note_info_text_pane

0x9719,	// (0x0001b7fe) list_tmo_link_pane

0x9726,	// (0x0001b80b) scroll_pane_cp20

0x9733,	// (0x0001b818) list_single_tmo_link_pane_ParamLimits

0x9733,	// (0x0001b818) list_single_tmo_link_pane

0x9743,	// (0x0001b828) list_single_tmo_link_pane_t1

0x9751,	// (0x0001b836) list_tmo_note_info_text_pane_t1_ParamLimits

0x9751,	// (0x0001b836) list_tmo_note_info_text_pane_t1

0xea81,	// (0x00020b66) aid_size_touch_scroll_bar_cp01_ParamLimits

0xea81,	// (0x00020b66) aid_size_touch_scroll_bar_cp01

0xaad4,	// (0x0001cbb9) aid_size_touch_slider_marker

0xafa7,	// (0x0001d08c) popup_settings_window_ParamLimits

0xafa7,	// (0x0001d08c) popup_settings_window

0x3d77,	// (0x00015e5c) popup_candi_list_indi_window

0x0f34,	// (0x00013019) aid_touch_navi_pane_ParamLimits

0x7b21,	// (0x00019c06) rs_clock_indi_pane

0x7b2a,	// (0x00019c0f) sctrl_sk_bottom_pane_ParamLimits

0x7b3b,	// (0x00019c20) sctrl_sk_top_pane_ParamLimits

0x8352,	// (0x0001a437) popup_fep_tooltip_window

0xe3e1,	// (0x000204c6) aid_size_cell_widget_grid_ParamLimits

0xe404,	// (0x000204e9) cell_ai5_widget_pane_g1_ParamLimits

0xe404,	// (0x000204e9) cell_ai5_widget_pane_g1

0xe44c,	// (0x00020531) cell_ai5_widget_pane_g6_ParamLimits

0xe458,	// (0x0002053d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x00021f21) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x00021f21) cell_ai5_widget_pane_g

0xe55c,	// (0x00020641) cell_ai5_widget_pane_t10_ParamLimits

0xe55c,	// (0x00020641) cell_ai5_widget_pane_t10

0xe56e,	// (0x00020653) grid_ai5_widget_pane_ParamLimits

0x928c,	// (0x0001b371) cell_contacts_ai5_widget_pane_ParamLimits

0x928c,	// (0x0001b371) cell_contacts_ai5_widget_pane

0x946c,	// (0x0001b551) popup_discreet_window_t3_ParamLimits

0x946c,	// (0x0001b551) popup_discreet_window_t3

0x9507,	// (0x0001b5ec) popup_fshwr2_char_preview_window_ParamLimits

0x9507,	// (0x0001b5ec) popup_fshwr2_char_preview_window

0xe6f8,	// (0x000207dd) tmo_note_info_pane_t1

0xe70d,	// (0x000207f2) tmo_note_info_pane_t2

0xe722,	// (0x00020807) tmo_note_info_pane_t3

0x96f5,	// (0x0001b7da) tmo_note_info_pane_t4

0x9707,	// (0x0001b7ec) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x00021fa8) tmo_note_info_pane_t

0x9719,	// (0x0001b7fe) list_tmo_link_pane_ParamLimits

0x9726,	// (0x0001b80b) scroll_pane_cp20_ParamLimits

0xdc7b,	// (0x0001fd60) bg_popup_fep_char_preview_window_cp01

0x976a,	// (0x0001b84f) popup_fshwr2_char_preview_window_t1

0x9778,	// (0x0001b85d) popup_candi_list_indi_window_g1

0x9781,	// (0x0001b866) bg_cell_contacts_ai5_widget_pane

0x978d,	// (0x0001b872) cell_contacts_ai5_widget_pane_g1

0x97a1,	// (0x0001b886) cell_contacts_ai5_widget_pane_g2

0x97b0,	// (0x0001b895) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x00021fb3) cell_contacts_ai5_widget_pane_g

0x97c3,	// (0x0001b8a8) cell_contacts_ai5_widget_pane_t1

0xe9bf,	// (0x00020aa4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe79a,	// (0x0002087f) settings_container_pane

0xf378,	// (0x0002145d) listscroll_set_pane_copy1

0x2834,	// (0x00014919) scroll_pane_cp121_copy1

0x9847,	// (0x0001b92c) set_content_pane_copy1

0x984f,	// (0x0001b934) aid_height_set_list_copy1_ParamLimits

0x984f,	// (0x0001b934) aid_height_set_list_copy1

0x225c,	// (0x00014341) aid_size_parent_copy1_ParamLimits

0x225c,	// (0x00014341) aid_size_parent_copy1

0xe7a6,	// (0x0002088b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe7a6,	// (0x0002088b) button_value_adjust_pane_cp6_copy1

0x0dc3,	// (0x00012ea8) list_highlight_pane_cp2_copy1_ParamLimits

0x0dc3,	// (0x00012ea8) list_highlight_pane_cp2_copy1

0xe7ba,	// (0x0002089f) list_set_pane_copy1_ParamLimits

0xe7ba,	// (0x0002089f) list_set_pane_copy1

0xe737,	// (0x0002081c) main_pane_set_t1_copy1_ParamLimits

0xe737,	// (0x0002081c) main_pane_set_t1_copy1

0xe771,	// (0x00020856) main_pane_set_t2_copy1_ParamLimits

0xe771,	// (0x00020856) main_pane_set_t2_copy1

0x98fd,	// (0x0001b9e2) main_pane_set_t3_copy1

0x990b,	// (0x0001b9f0) main_pane_set_t4_copy1

0xe78e,	// (0x00020873) set_content_pane_g1_copy1_ParamLimits

0xe78e,	// (0x00020873) set_content_pane_g1_copy1

0xe848,	// (0x0002092d) setting_code_pane_copy1

0x9921,	// (0x0001ba06) setting_slider_graphic_pane_copy1

0x9921,	// (0x0001ba06) setting_slider_pane_copy1

0x9929,	// (0x0001ba0e) setting_text_pane_copy1

0x9921,	// (0x0001ba06) setting_volume_pane_copy1

0xe850,	// (0x00020935) settings_code_pane_cp2_copy1

0xe858,	// (0x0002093d) settings_code_pane_cp_copy1_ParamLimits

0xe858,	// (0x0002093d) settings_code_pane_cp_copy1

0xe86c,	// (0x00020951) volume_set_pane_copy1

0xe874,	// (0x00020959) volume_set_pane_g10_copy1

0xe87c,	// (0x00020961) volume_set_pane_g1_copy1

0xe884,	// (0x00020969) volume_set_pane_g2_copy1

0xe88c,	// (0x00020971) volume_set_pane_g3_copy1

0xe894,	// (0x00020979) volume_set_pane_g4_copy1

0xe89c,	// (0x00020981) volume_set_pane_g5_copy1

0xe8a4,	// (0x00020989) volume_set_pane_g6_copy1

0xe8ac,	// (0x00020991) volume_set_pane_g7_copy1

0xe8b4,	// (0x00020999) volume_set_pane_g8_copy1

0xe8bc,	// (0x000209a1) volume_set_pane_g9_copy1

0xdd6b,	// (0x0001fe50) bg_set_opt_pane_cp_copy1_ParamLimits

0xdd6b,	// (0x0001fe50) bg_set_opt_pane_cp_copy1

0xdd79,	// (0x0001fe5e) setting_slider_pane_t1_copy1_ParamLimits

0xdd79,	// (0x0001fe5e) setting_slider_pane_t1_copy1

0x99a5,	// (0x0001ba8a) setting_slider_pane_t2_copy1_ParamLimits

0x99a5,	// (0x0001ba8a) setting_slider_pane_t2_copy1

0x99be,	// (0x0001baa3) setting_slider_pane_t3_copy1_ParamLimits

0x99be,	// (0x0001baa3) setting_slider_pane_t3_copy1

0xdd8f,	// (0x0001fe74) slider_set_pane_copy1_ParamLimits

0xdd8f,	// (0x0001fe74) slider_set_pane_copy1

0xea0e,	// (0x00020af3) set_opt_bg_pane_g1_copy2

0xea16,	// (0x00020afb) set_opt_bg_pane_g2_copy2

0x99d5,	// (0x0001baba) set_opt_bg_pane_g3_copy2

0xea26,	// (0x00020b0b) set_opt_bg_pane_g4_copy2

0xea2e,	// (0x00020b13) set_opt_bg_pane_g5_copy2

0xea36,	// (0x00020b1b) set_opt_bg_pane_g6_copy2

0xe8c4,	// (0x000209a9) set_opt_bg_pane_g7_copy2

0x99e5,	// (0x0001baca) set_opt_bg_pane_g8_copy2

0x99ed,	// (0x0001bad2) set_opt_bg_pane_g9_copy2

0x21fe,	// (0x000142e3) aid_size_touch_slider_mark_copy1_ParamLimits

0x21fe,	// (0x000142e3) aid_size_touch_slider_mark_copy1

0x226e,	// (0x00014353) slider_set_pane_g1_copy1

0x2277,	// (0x0001435c) slider_set_pane_g2_copy1

0x2212,	// (0x000142f7) slider_set_pane_g3_copy1_ParamLimits

0x2212,	// (0x000142f7) slider_set_pane_g3_copy1

0x23d4,	// (0x000144b9) slider_set_pane_g4_copy1_ParamLimits

0x23d4,	// (0x000144b9) slider_set_pane_g4_copy1

0x23ec,	// (0x000144d1) slider_set_pane_g5_copy1_ParamLimits

0x23ec,	// (0x000144d1) slider_set_pane_g5_copy1

0x2212,	// (0x000142f7) slider_set_pane_g6_copy1_ParamLimits

0x2212,	// (0x000142f7) slider_set_pane_g6_copy1

0xe8cc,	// (0x000209b1) slider_set_pane_g7_copy1_ParamLimits

0xe8cc,	// (0x000209b1) slider_set_pane_g7_copy1

0xdd07,	// (0x0001fdec) bg_set_opt_pane_cp2_copy1

0xdda5,	// (0x0001fe8a) setting_slider_graphic_pane_g1_copy1

0xe8e2,	// (0x000209c7) setting_slider_graphic_pane_t1_copy1

0xe8f1,	// (0x000209d6) setting_slider_graphic_pane_t2_copy1

0xe900,	// (0x000209e5) slider_set_pane_cp_copy1

0x9a39,	// (0x0001bb1e) input_focus_pane_cp1_copy1

0x9a42,	// (0x0001bb27) list_set_text_pane_copy1

0x9a4a,	// (0x0001bb2f) setting_text_pane_g1_copy1

0x44d7,	// (0x000165bc) set_text_pane_t1_copy1

0x9a39,	// (0x0001bb1e) input_focus_pane_cp2_copy1

0x9a4a,	// (0x0001bb2f) setting_code_pane_g1_copy1

0x9a53,	// (0x0001bb38) setting_code_pane_t1_copy1

0xb64b,	// (0x0001d730) list_set_graphic_pane_copy1

0xdd07,	// (0x0001fdec) bg_set_opt_pane_cp4_copy1

0x9a75,	// (0x0001bb5a) list_set_graphic_pane_g1_copy1_ParamLimits

0x9a75,	// (0x0001bb5a) list_set_graphic_pane_g1_copy1

0x9a81,	// (0x0001bb66) list_set_graphic_pane_g2_copy1

0xf0f3,	// (0x000211d8) list_set_graphic_pane_t1_copy1_ParamLimits

0xf0f3,	// (0x000211d8) list_set_graphic_pane_t1_copy1

0x6185,	// (0x0001826a) rs_clock_indi_pane_g1

0x9a89,	// (0x0001bb6e) rs_clock_indi_pane_t1

0x9a97,	// (0x0001bb7c) rs_indi_pane

0x9a9f,	// (0x0001bb84) rs_indi_pane_g1

0x9aa8,	// (0x0001bb8d) rs_indi_pane_g2

0x9778,	// (0x0001b85d) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x00021fba) rs_indi_pane_g

0xf378,	// (0x0002145d) bg_popup_preview_window_pane_cp03

0x9ab1,	// (0x0001bb96) popup_fep_tooltip_window_t1

0x70d3,	// (0x000191b8) popup_note2_window_g2_ParamLimits

0x70d3,	// (0x000191b8) popup_note2_window_g2

0x0001,

0xfc7a,	// (0x00021d5f) popup_note2_window_g_ParamLimits

0xfc7a,	// (0x00021d5f) popup_note2_window_g

0x75d3,	// (0x000196b8) bg_popup_sub_pane_cp11_ParamLimits

0x75e0,	// (0x000196c5) cell_ai3_links_pane_g1_ParamLimits

0x75f7,	// (0x000196dc) cell_ai3_links_pane_t1

0x44d7,	// (0x000165bc) set_text_pane_t1_copy1_ParamLimits

0xf29f,	// (0x00021384) cell_graphic_popup_pane_cp2_ParamLimits

0xf29f,	// (0x00021384) cell_graphic_popup_pane_cp2

0x9abf,	// (0x0001bba4) cell_graphic_popup_pane_g1_cp2

0xe10b,	// (0x000201f0) cell_graphic_popup_pane_g2_cp2

0x9ac7,	// (0x0001bbac) cell_graphic_popup_pane_g3_cp2

0x9acf,	// (0x0001bbb4) cell_graphic_popup_pane_t2_cp2

0xe11c,	// (0x00020201) grid_highlight_pane_cp3_cp2

0xecf4,	// (0x00020dd9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe9bf,	// (0x00020aa4) main_tmo_pane_ParamLimits

0xcf18,	// (0x0001effd) popup_tmo_big_image_note_window

0xe3f4,	// (0x000204d9) cell_ai5_widget_list_pane

0xe3fc,	// (0x000204e1) cell_ai5_widget_lrg_icon_pane

0xe6f8,	// (0x000207dd) tmo_note_info_pane_t1_ParamLimits

0xe70d,	// (0x000207f2) tmo_note_info_pane_t2_ParamLimits

0xe722,	// (0x00020807) tmo_note_info_pane_t3_ParamLimits

0x96f5,	// (0x0001b7da) tmo_note_info_pane_t4_ParamLimits

0x9707,	// (0x0001b7ec) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x00021fa8) tmo_note_info_pane_t_ParamLimits

0xe79a,	// (0x0002087f) settings_container_pane_ParamLimits

0x9a31,	// (0x0001bb16) indicator_popup_pane_cp5

0x9a31,	// (0x0001bb16) indicator_popup_pane_cp6

0xb64b,	// (0x0001d730) list_set_graphic_pane_copy1_ParamLimits

0xdc7b,	// (0x0001fd60) bg_popup_window_pane_cp23

0x9add,	// (0x0001bbc2) popup_tmo_big_image_note_window_g1

0x9ae6,	// (0x0001bbcb) popup_tmo_big_image_note_window_t1

0x9af4,	// (0x0001bbd9) popup_tmo_big_image_note_window_t2

0x9b02,	// (0x0001bbe7) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x00021fc1) popup_tmo_big_image_note_window_t

0xe908,	// (0x000209ed) cell_ai5_widget_lrg_icon_pane_g1

0xe910,	// (0x000209f5) cell_ai5_widget_lrg_icon_pane_t1

0xe91e,	// (0x00020a03) cell_ai5_widget_list_row_pane_ParamLimits

0xe91e,	// (0x00020a03) cell_ai5_widget_list_row_pane

0xe937,	// (0x00020a1c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe937,	// (0x00020a1c) cell_ai5_widget_list_row_pane_g1

0xe944,	// (0x00020a29) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe944,	// (0x00020a29) cell_ai5_widget_list_row_pane_t1

0xe95c,	// (0x00020a41) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe95c,	// (0x00020a41) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee3,	// (0x00021fc8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x00021fc8) cell_ai5_widget_list_row_pane_t

0xdc7b,	// (0x0001fd60) main_fep_vtchi_ss_pane

0x9b76,	// (0x0001bc5b) popup_fep_char_pre_window

0x9b7e,	// (0x0001bc63) popup_fep_ituss_window

0x9b87,	// (0x0001bc6c) popup_fep_vkbss_window

0x9b90,	// (0x0001bc75) grid_vkbss_keypad_pane_ParamLimits

0x9b90,	// (0x0001bc75) grid_vkbss_keypad_pane

0x9ba0,	// (0x0001bc85) ituss_keypad_pane

0x9ba8,	// (0x0001bc8d) aid_vkbss_key_offset_ParamLimits

0x9ba8,	// (0x0001bc8d) aid_vkbss_key_offset

0x9bb7,	// (0x0001bc9c) cell_vkbss_key_pane_ParamLimits

0x9bb7,	// (0x0001bc9c) cell_vkbss_key_pane

0x9bcd,	// (0x0001bcb2) bg_cell_vkbss_key_g1_ParamLimits

0x9bcd,	// (0x0001bcb2) bg_cell_vkbss_key_g1

0x9bd9,	// (0x0001bcbe) cell_vkbss_key_3p_pane_ParamLimits

0x9bd9,	// (0x0001bcbe) cell_vkbss_key_3p_pane

0x9bed,	// (0x0001bcd2) cell_vkbss_key_g1_ParamLimits

0x9bed,	// (0x0001bcd2) cell_vkbss_key_g1

0x9c01,	// (0x0001bce6) cell_vkbss_key_t1_ParamLimits

0x9c01,	// (0x0001bce6) cell_vkbss_key_t1

0x9c2c,	// (0x0001bd11) cell_ituss_key_pane_ParamLimits

0x9c2c,	// (0x0001bd11) cell_ituss_key_pane

0x9c3b,	// (0x0001bd20) bg_cell_ituss_key_g1_ParamLimits

0x9c3b,	// (0x0001bd20) bg_cell_ituss_key_g1

0x9c47,	// (0x0001bd2c) cell_ituss_key_pane_g1_ParamLimits

0x9c47,	// (0x0001bd2c) cell_ituss_key_pane_g1

0x9c53,	// (0x0001bd38) cell_ituss_key_pane_g2_ParamLimits

0x9c53,	// (0x0001bd38) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x00021fcd) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x00021fcd) cell_ituss_key_pane_g

0x9c66,	// (0x0001bd4b) cell_ituss_key_t1_ParamLimits

0x9c66,	// (0x0001bd4b) cell_ituss_key_t1

0x9c84,	// (0x0001bd69) cell_ituss_key_t2_ParamLimits

0x9c84,	// (0x0001bd69) cell_ituss_key_t2

0x9ca3,	// (0x0001bd88) cell_ituss_key_t3_ParamLimits

0x9ca3,	// (0x0001bd88) cell_ituss_key_t3

0x9cc2,	// (0x0001bda7) cell_ituss_key_t4_ParamLimits

0x9cc2,	// (0x0001bda7) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x00021fd2) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x00021fd2) cell_ituss_key_t

0x9ce1,	// (0x0001bdc6) cell_vkbss_key_3p_pane_g1

0x9ce9,	// (0x0001bdce) cell_vkbss_key_3p_pane_g2

0x9cf1,	// (0x0001bdd6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x00021fdb) cell_vkbss_key_3p_pane_g

0xdc7b,	// (0x0001fd60) bg_popup_fep_char_preview_window_cp02

0x9cf9,	// (0x0001bdde) popup_fep_char_pre_window_t1

0xe3d7,	// (0x000204bc) main_ai5_sk_pane

0x9781,	// (0x0001b866) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x978d,	// (0x0001b872) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x97a1,	// (0x0001b886) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x97b0,	// (0x0001b895) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x00021fb3) cell_contacts_ai5_widget_pane_g_ParamLimits

0x97c3,	// (0x0001b8a8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe9bf,	// (0x00020aa4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe96e,	// (0x00020a53) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small
