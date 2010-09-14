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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000d5e9 };

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
0x7b57,	// (0x00015140) Screen

0x7b63,	// (0x0001514c) application_window_ParamLimits

0x7b63,	// (0x0001514c) application_window

0x35a4,	// (0x00010b8d) screen_g1

0x5523,	// (0x00012b0c) area_bottom_pane_ParamLimits

0x5523,	// (0x00012b0c) area_bottom_pane

0x55e3,	// (0x00012bcc) area_top_pane_ParamLimits

0x55e3,	// (0x00012bcc) area_top_pane

0x5681,	// (0x00012c6a) main_pane_ParamLimits

0x5681,	// (0x00012c6a) main_pane

0x371d,	// (0x00010d06) misc_graphics

0x8cc0,	// (0x000162a9) battery_pane_ParamLimits

0x8cc0,	// (0x000162a9) battery_pane

0x9ab1,	// (0x0001709a) bg_status_flat_pane_g8

0x9ab9,	// (0x000170a2) bg_status_flat_pane_g9

0x8d88,	// (0x00016371) context_pane_ParamLimits

0x8d88,	// (0x00016371) context_pane

0x8e9e,	// (0x00016487) navi_pane_ParamLimits

0x8e9e,	// (0x00016487) navi_pane

0x8f22,	// (0x0001650b) signal_pane_ParamLimits

0x8f22,	// (0x0001650b) signal_pane

0x0008,

0xf845,	// (0x0001ce2e) bg_status_flat_pane_g

0x8f8f,	// (0x00016578) status_pane_g1_ParamLimits

0x8f8f,	// (0x00016578) status_pane_g1

0x8fa3,	// (0x0001658c) status_pane_g2_ParamLimits

0x8fa3,	// (0x0001658c) status_pane_g2

0x8faf,	// (0x00016598) status_pane_g3_ParamLimits

0x8faf,	// (0x00016598) status_pane_g3

0x0004,

0xf76c,	// (0x0001cd55) status_pane_g_ParamLimits

0xf76c,	// (0x0001cd55) status_pane_g

0x8fe3,	// (0x000165cc) title_pane_ParamLimits

0x8fe3,	// (0x000165cc) title_pane

0x9020,	// (0x00016609) uni_indicator_pane_ParamLimits

0x9020,	// (0x00016609) uni_indicator_pane

0x4aa7,	// (0x00012090) bg_list_pane_ParamLimits

0x4aa7,	// (0x00012090) bg_list_pane

0x8c3c,	// (0x00016225) find_pane

0x4a5e,	// (0x00012047) listscroll_app_pane_ParamLimits

0x4a5e,	// (0x00012047) listscroll_app_pane

0x4ac7,	// (0x000120b0) listscroll_form_pane

0x5f4b,	// (0x00013534) listscroll_gen_pane_ParamLimits

0x5f4b,	// (0x00013534) listscroll_gen_pane

0x5f5f,	// (0x00013548) listscroll_set_pane

0x86d5,	// (0x00015cbe) main_idle_act_pane

0x487f,	// (0x00011e68) main_idle_trad_pane

0x487f,	// (0x00011e68) main_list_empty_pane

0x4a5e,	// (0x00012047) main_midp_pane

0x4ae9,	// (0x000120d2) main_pane_g1_ParamLimits

0x4ae9,	// (0x000120d2) main_pane_g1

0x5f75,	// (0x0001355e) popup_ai_message_window_ParamLimits

0x5f75,	// (0x0001355e) popup_ai_message_window

0x6019,	// (0x00013602) popup_fep_china_uni_window_ParamLimits

0x6019,	// (0x00013602) popup_fep_china_uni_window

0x6073,	// (0x0001365c) popup_fep_japan_candidate_window_ParamLimits

0x6073,	// (0x0001365c) popup_fep_japan_candidate_window

0x6091,	// (0x0001367a) popup_fep_japan_predictive_window_ParamLimits

0x6091,	// (0x0001367a) popup_fep_japan_predictive_window

0x60c1,	// (0x000136aa) popup_find_window

0x60ce,	// (0x000136b7) popup_grid_graphic_window_ParamLimits

0x60ce,	// (0x000136b7) popup_grid_graphic_window

0x60f8,	// (0x000136e1) popup_large_graphic_colour_window

0x611e,	// (0x00013707) popup_menu_window_ParamLimits

0x611e,	// (0x00013707) popup_menu_window

0x62da,	// (0x000138c3) popup_note_image_window

0x62c6,	// (0x000138af) popup_note_wait_window_ParamLimits

0x62c6,	// (0x000138af) popup_note_wait_window

0x62c6,	// (0x000138af) popup_note_window_ParamLimits

0x62c6,	// (0x000138af) popup_note_window

0x6330,	// (0x00013919) popup_query_code_window_ParamLimits

0x6330,	// (0x00013919) popup_query_code_window

0x6344,	// (0x0001392d) popup_query_data_code_window_ParamLimits

0x6344,	// (0x0001392d) popup_query_data_code_window

0x6361,	// (0x0001394a) popup_query_data_window_ParamLimits

0x6361,	// (0x0001394a) popup_query_data_window

0x637d,	// (0x00013966) popup_query_sat_info_window_ParamLimits

0x637d,	// (0x00013966) popup_query_sat_info_window

0x63b6,	// (0x0001399f) popup_snote_single_graphic_window_ParamLimits

0x63b6,	// (0x0001399f) popup_snote_single_graphic_window

0x63b6,	// (0x0001399f) popup_snote_single_text_window_ParamLimits

0x63b6,	// (0x0001399f) popup_snote_single_text_window

0x63cb,	// (0x000139b4) popup_sub_window_general

0x64fb,	// (0x00013ae4) popup_window_general_ParamLimits

0x64fb,	// (0x00013ae4) popup_window_general

0x8c44,	// (0x0001622d) power_save_pane

0x5dd1,	// (0x000133ba) control_pane_g1_ParamLimits

0x5dd1,	// (0x000133ba) control_pane_g1

0x5df8,	// (0x000133e1) control_pane_g2_ParamLimits

0x5df8,	// (0x000133e1) control_pane_g2

0x4a6a,	// (0x00012053) control_pane_g3_ParamLimits

0x4a6a,	// (0x00012053) control_pane_g3

0x0007,

0xf754,	// (0x0001cd3d) control_pane_g_ParamLimits

0xf754,	// (0x0001cd3d) control_pane_g

0x5e42,	// (0x0001342b) control_pane_t1_ParamLimits

0x5e42,	// (0x0001342b) control_pane_t1

0x5e98,	// (0x00013481) control_pane_t2_ParamLimits

0x5e98,	// (0x00013481) control_pane_t2

0x0002,

0xf765,	// (0x0001cd4e) control_pane_t_ParamLimits

0xf765,	// (0x0001cd4e) control_pane_t

0x8b6e,	// (0x00016157) navi_navi_volume_pane_cp1

0x8b76,	// (0x0001615f) status_small_icon_pane

0x4a2a,	// (0x00012013) status_small_pane_g1_ParamLimits

0x4a2a,	// (0x00012013) status_small_pane_g1

0x8b7e,	// (0x00016167) status_small_pane_g2_ParamLimits

0x8b7e,	// (0x00016167) status_small_pane_g2

0x8b8a,	// (0x00016173) status_small_pane_g3_ParamLimits

0x8b8a,	// (0x00016173) status_small_pane_g3

0x8b96,	// (0x0001617f) status_small_pane_g4_ParamLimits

0x8b96,	// (0x0001617f) status_small_pane_g4

0x8ba2,	// (0x0001618b) status_small_pane_g5_ParamLimits

0x8ba2,	// (0x0001618b) status_small_pane_g5

0x8bb0,	// (0x00016199) status_small_pane_g6_ParamLimits

0x8bb0,	// (0x00016199) status_small_pane_g6

0x0007,

0xf743,	// (0x0001cd2c) status_small_pane_g_ParamLimits

0xf743,	// (0x0001cd2c) status_small_pane_g

0x8bdf,	// (0x000161c8) status_small_pane_t1

0x8c01,	// (0x000161ea) status_small_wait_pane_ParamLimits

0x8c01,	// (0x000161ea) status_small_wait_pane

0x887e,	// (0x00015e67) aid_levels_signal_ParamLimits

0x887e,	// (0x00015e67) aid_levels_signal

0x8890,	// (0x00015e79) signal_pane_g1_ParamLimits

0x8890,	// (0x00015e79) signal_pane_g1

0x88a5,	// (0x00015e8e) signal_pane_g2_ParamLimits

0x88a5,	// (0x00015e8e) signal_pane_g2

0x0003,

0xf6d4,	// (0x0001ccbd) signal_pane_g_ParamLimits

0xf6d4,	// (0x0001ccbd) signal_pane_g

0x430a,	// (0x000118f3) context_pane_g1

0x7b73,	// (0x0001515c) title_pane_g1

0x7b9d,	// (0x00015186) title_pane_t1

0x3753,	// (0x00010d3c) title_pane_t2

0x3779,	// (0x00010d62) title_pane_t3

0x0002,

0xf532,	// (0x0001cb1b) title_pane_t

0x9038,	// (0x00016621) aid_levels_battery_ParamLimits

0x9038,	// (0x00016621) aid_levels_battery

0x904c,	// (0x00016635) battery_pane_g1_ParamLimits

0x904c,	// (0x00016635) battery_pane_g1

0x9062,	// (0x0001664b) battery_pane_g2_ParamLimits

0x9062,	// (0x0001664b) battery_pane_g2

0x0001,

0xf777,	// (0x0001cd60) battery_pane_g_ParamLimits

0xf777,	// (0x0001cd60) battery_pane_g

0xa3d5,	// (0x000179be) uni_indicator_pane_g1

0xa3e8,	// (0x000179d1) uni_indicator_pane_g2

0xa3fa,	// (0x000179e3) uni_indicator_pane_g3

0x0005,

0xf8ed,	// (0x0001ced6) uni_indicator_pane_g

0x4716,	// (0x00011cff) navi_icon_pane_ParamLimits

0x4716,	// (0x00011cff) navi_icon_pane

0x466b,	// (0x00011c54) navi_midp_pane

0x4732,	// (0x00011d1b) navi_navi_pane

0x473c,	// (0x00011d25) navi_text_pane_ParamLimits

0x473c,	// (0x00011d25) navi_text_pane

0x35a4,	// (0x00010b8d) status_small_wait_pane_g1

0x39e4,	// (0x00010fcd) status_small_wait_pane_g2

0x0001,

0xf8e8,	// (0x0001ced1) status_small_wait_pane_g

0xa0fc,	// (0x000176e5) navi_navi_icon_text_pane

0xa104,	// (0x000176ed) navi_navi_pane_g1_ParamLimits

0xa104,	// (0x000176ed) navi_navi_pane_g1

0xa116,	// (0x000176ff) navi_navi_pane_g2_ParamLimits

0xa116,	// (0x000176ff) navi_navi_pane_g2

0x0001,

0xf8b6,	// (0x0001ce9f) navi_navi_pane_g_ParamLimits

0xf8b6,	// (0x0001ce9f) navi_navi_pane_g

0xa128,	// (0x00017711) navi_navi_tabs_pane

0xa131,	// (0x0001771a) navi_navi_text_pane

0xa0fc,	// (0x000176e5) navi_navi_volume_pane

0xa0d8,	// (0x000176c1) navi_text_pane_t1

0xa0cc,	// (0x000176b5) navi_icon_pane_g1

0xa01f,	// (0x00017608) navi_navi_text_pane_t1

0x6817,	// (0x00013e00) navi_navi_volume_pane_g1

0x681f,	// (0x00013e08) volume_small_pane

0x9f85,	// (0x0001756e) navi_navi_icon_text_pane_g1

0x9f8d,	// (0x00017576) navi_navi_icon_text_pane_t1

0x4732,	// (0x00011d1b) navi_tabs_2_long_pane

0x4732,	// (0x00011d1b) navi_tabs_2_pane

0x4732,	// (0x00011d1b) navi_tabs_3_long_pane

0x4732,	// (0x00011d1b) navi_tabs_3_pane

0x4732,	// (0x00011d1b) navi_tabs_4_pane

0x67f7,	// (0x00013de0) tabs_2_active_pane_ParamLimits

0x67f7,	// (0x00013de0) tabs_2_active_pane

0x6807,	// (0x00013df0) tabs_2_passive_pane_ParamLimits

0x6807,	// (0x00013df0) tabs_2_passive_pane

0x67c5,	// (0x00013dae) tabs_3_active_pane_ParamLimits

0x67c5,	// (0x00013dae) tabs_3_active_pane

0x67d5,	// (0x00013dbe) tabs_3_passive_pane_ParamLimits

0x67d5,	// (0x00013dbe) tabs_3_passive_pane

0x67e6,	// (0x00013dcf) tabs_3_passive_pane_cp_ParamLimits

0x67e6,	// (0x00013dcf) tabs_3_passive_pane_cp

0x6781,	// (0x00013d6a) tabs_4_active_pane_ParamLimits

0x6781,	// (0x00013d6a) tabs_4_active_pane

0x6792,	// (0x00013d7b) tabs_4_passive_pane_ParamLimits

0x6792,	// (0x00013d7b) tabs_4_passive_pane

0x67a3,	// (0x00013d8c) tabs_4_passive_pane_cp_ParamLimits

0x67a3,	// (0x00013d8c) tabs_4_passive_pane_cp

0x67b4,	// (0x00013d9d) tabs_4_passive_pane_cp2_ParamLimits

0x67b4,	// (0x00013d9d) tabs_4_passive_pane_cp2

0x675d,	// (0x00013d46) tabs_2_long_active_pane_ParamLimits

0x675d,	// (0x00013d46) tabs_2_long_active_pane

0x676f,	// (0x00013d58) tabs_2_long_passive_pane_ParamLimits

0x676f,	// (0x00013d58) tabs_2_long_passive_pane

0x6718,	// (0x00013d01) tabs_3_long_active_pane_ParamLimits

0x6718,	// (0x00013d01) tabs_3_long_active_pane

0x6731,	// (0x00013d1a) tabs_3_long_passive_pane_ParamLimits

0x6731,	// (0x00013d1a) tabs_3_long_passive_pane

0x6744,	// (0x00013d2d) tabs_3_long_passive_pane_cp_ParamLimits

0x6744,	// (0x00013d2d) tabs_3_long_passive_pane_cp

0x66be,	// (0x00013ca7) volume_small_pane_g1

0x66c7,	// (0x00013cb0) volume_small_pane_g2

0x66d0,	// (0x00013cb9) volume_small_pane_g3

0x66d9,	// (0x00013cc2) volume_small_pane_g4

0x66e2,	// (0x00013ccb) volume_small_pane_g5

0x66eb,	// (0x00013cd4) volume_small_pane_g6

0x66f4,	// (0x00013cdd) volume_small_pane_g7

0x66fd,	// (0x00013ce6) volume_small_pane_g8

0x6706,	// (0x00013cef) volume_small_pane_g9

0x670f,	// (0x00013cf8) volume_small_pane_g10

0x0009,

0xf882,	// (0x0001ce6b) volume_small_pane_g

0x3799,	// (0x00010d82) bg_active_tab_pane_cp2_ParamLimits

0x3799,	// (0x00010d82) bg_active_tab_pane_cp2

0x7c05,	// (0x000151ee) tabs_3_active_pane_g1

0x7c0d,	// (0x000151f6) tabs_3_active_pane_t1

0x3799,	// (0x00010d82) bg_passive_tab_pane_cp2_ParamLimits

0x3799,	// (0x00010d82) bg_passive_tab_pane_cp2

0x7c05,	// (0x000151ee) tabs_3_passive_pane_g1

0x7c0d,	// (0x000151f6) tabs_3_passive_pane_t1

0x3799,	// (0x00010d82) bg_active_tab_pane_cp3_ParamLimits

0x3799,	// (0x00010d82) bg_active_tab_pane_cp3

0x7c1f,	// (0x00015208) tabs_4_active_pane_g1

0x7c27,	// (0x00015210) tabs_4_active_pane_t1

0x3799,	// (0x00010d82) bg_passive_tab_pane_cp3_ParamLimits

0x3799,	// (0x00010d82) bg_passive_tab_pane_cp3

0x7c1f,	// (0x00015208) tabs_4_1_passive_pane_g1

0x7c27,	// (0x00015210) tabs_4_1_passive_pane_t1

0x4a5e,	// (0x00012047) list_highlight_pane_cp2

0xa64f,	// (0x00017c38) list_set_pane_ParamLimits

0xa64f,	// (0x00017c38) list_set_pane

0xa6f1,	// (0x00017cda) main_pane_set_t1_ParamLimits

0xa6f1,	// (0x00017cda) main_pane_set_t1

0xa711,	// (0x00017cfa) main_pane_set_t2_ParamLimits

0xa711,	// (0x00017cfa) main_pane_set_t2

0xa725,	// (0x00017d0e) main_pane_set_t3_ParamLimits

0xa725,	// (0x00017d0e) main_pane_set_t3

0xa737,	// (0x00017d20) main_pane_set_t4_ParamLimits

0xa737,	// (0x00017d20) main_pane_set_t4

0x0003,

0xf952,	// (0x0001cf3b) main_pane_set_t_ParamLimits

0xf952,	// (0x0001cf3b) main_pane_set_t

0xa749,	// (0x00017d32) setting_code_pane

0xa755,	// (0x00017d3e) setting_slider_graphic_pane

0xa755,	// (0x00017d3e) setting_slider_pane

0xa755,	// (0x00017d3e) setting_text_pane

0xa755,	// (0x00017d3e) setting_volume_pane

0x58c2,	// (0x00012eab) volume_set_pane

0x3799,	// (0x00010d82) bg_set_opt_pane_cp

0x58ca,	// (0x00012eb3) setting_slider_pane_t1

0x58e3,	// (0x00012ecc) setting_slider_pane_t2

0x58fd,	// (0x00012ee6) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001cb22) setting_slider_pane_t

0x5915,	// (0x00012efe) slider_set_pane

0x371d,	// (0x00010d06) bg_set_opt_pane_cp2

0x37a7,	// (0x00010d90) setting_slider_graphic_pane_g1

0x592b,	// (0x00012f14) setting_slider_graphic_pane_t1

0x593b,	// (0x00012f24) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001cb29) setting_slider_graphic_pane_t

0x594b,	// (0x00012f34) slider_set_pane_cp

0x371d,	// (0x00010d06) input_focus_pane_cp1

0xa60e,	// (0x00017bf7) list_set_text_pane

0x35a4,	// (0x00010b8d) setting_text_pane_g1

0x371d,	// (0x00010d06) input_focus_pane_cp2

0x35a4,	// (0x00010b8d) setting_code_pane_g1

0x37b0,	// (0x00010d99) setting_code_pane_t1

0x37be,	// (0x00010da7) set_text_pane_t1_ParamLimits

0x37be,	// (0x00010da7) set_text_pane_t1

0x3c81,	// (0x0001126a) set_opt_bg_pane_g1

0x3c89,	// (0x00011272) set_opt_bg_pane_g2

0xa5e8,	// (0x00017bd1) set_opt_bg_pane_g3

0x3c99,	// (0x00011282) set_opt_bg_pane_g4

0x3ca1,	// (0x0001128a) set_opt_bg_pane_g5

0x3ca9,	// (0x00011292) set_opt_bg_pane_g6

0xa5f2,	// (0x00017bdb) set_opt_bg_pane_g7

0xa5fa,	// (0x00017be3) set_opt_bg_pane_g8

0xa604,	// (0x00017bed) set_opt_bg_pane_g9

0x0008,

0xf93f,	// (0x0001cf28) set_opt_bg_pane_g

0xa5db,	// (0x00017bc4) slider_set_pane_g1

0x688c,	// (0x00013e75) slider_set_pane_g2

0x0006,

0xf930,	// (0x0001cf19) slider_set_pane_g

0x6828,	// (0x00013e11) volume_set_pane_g1

0x6830,	// (0x00013e19) volume_set_pane_g2

0x6838,	// (0x00013e21) volume_set_pane_g3

0x6840,	// (0x00013e29) volume_set_pane_g4

0x6848,	// (0x00013e31) volume_set_pane_g5

0x6850,	// (0x00013e39) volume_set_pane_g6

0x6858,	// (0x00013e41) volume_set_pane_g7

0x6860,	// (0x00013e49) volume_set_pane_g8

0x6868,	// (0x00013e51) volume_set_pane_g9

0x6870,	// (0x00013e59) volume_set_pane_g10

0x0009,

0xf908,	// (0x0001cef1) volume_set_pane_g

0x7c39,	// (0x00015222) indicator_pane_ParamLimits

0x7c39,	// (0x00015222) indicator_pane

0x7c45,	// (0x0001522e) main_idle_pane_g2_ParamLimits

0x7c45,	// (0x0001522e) main_idle_pane_g2

0x7c6d,	// (0x00015256) main_pane_idle_g1_ParamLimits

0x7c6d,	// (0x00015256) main_pane_idle_g1

0x37d8,	// (0x00010dc1) popup_clock_digital_analogue_window_ParamLimits

0x37d8,	// (0x00010dc1) popup_clock_digital_analogue_window

0x7c7a,	// (0x00015263) soft_indicator_pane_ParamLimits

0x7c7a,	// (0x00015263) soft_indicator_pane

0x7c86,	// (0x0001526f) wallpaper_pane_ParamLimits

0x7c86,	// (0x0001526f) wallpaper_pane

0x35a4,	// (0x00010b8d) wallpaper_pane_g1

0x7c92,	// (0x0001527b) indicator_pane_g1_ParamLimits

0x7c92,	// (0x0001527b) indicator_pane_g1

0xaaff,	// (0x000180e8) navi_navi_icon_text_pane_srt_g1

0x3806,	// (0x00010def) soft_indicator_pane_t1

0x3820,	// (0x00010e09) aid_ps_area_pane

0x7c9e,	// (0x00015287) aid_ps_clock_pane

0x3831,	// (0x00010e1a) aid_ps_indicator_pane

0x383d,	// (0x00010e26) indicator_ps_pane_ParamLimits

0x383d,	// (0x00010e26) indicator_ps_pane

0x384c,	// (0x00010e35) power_save_pane_g1_ParamLimits

0x384c,	// (0x00010e35) power_save_pane_g1

0x3858,	// (0x00010e41) power_save_pane_g2_ParamLimits

0x3858,	// (0x00010e41) power_save_pane_g2

0x54d7,	// (0x00012ac0) aid_navinavi_width_pane

0x3820,	// (0x00010e09) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001cb2e) power_save_pane_g_ParamLimits

0xf545,	// (0x0001cb2e) power_save_pane_g

0x3866,	// (0x00010e4f) power_save_pane_t1_ParamLimits

0x3866,	// (0x00010e4f) power_save_pane_t1

0x7c9e,	// (0x00015287) aid_ps_clock_pane_ParamLimits

0x3831,	// (0x00010e1a) aid_ps_indicator_pane_ParamLimits

0x3878,	// (0x00010e61) power_save_pane_t4_ParamLimits

0x3878,	// (0x00010e61) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001cb33) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001cb33) power_save_pane_t

0x38a2,	// (0x00010e8b) power_save_t3_ParamLimits

0x38a2,	// (0x00010e8b) power_save_t3

0x388d,	// (0x00010e76) power_save_t2_ParamLimits

0x388d,	// (0x00010e76) power_save_t2

0x38b7,	// (0x00010ea0) indicator_ps_pane_g1

0x7cac,	// (0x00015295) ai_gene_pane_ParamLimits

0x7cac,	// (0x00015295) ai_gene_pane

0x7cb8,	// (0x000152a1) ai_links_pane_ParamLimits

0x7cb8,	// (0x000152a1) ai_links_pane

0x7cc4,	// (0x000152ad) indicator_pane_cp1_ParamLimits

0x7cc4,	// (0x000152ad) indicator_pane_cp1

0x7cd0,	// (0x000152b9) main_pane_idle_g1_cp_ParamLimits

0x7cd0,	// (0x000152b9) main_pane_idle_g1_cp

0x7cdc,	// (0x000152c5) popup_ai_links_title_window

0x7ce5,	// (0x000152ce) soft_indicator_pane_cp1_ParamLimits

0x7ce5,	// (0x000152ce) soft_indicator_pane_cp1

0xa3c3,	// (0x000179ac) ai_links_pane_g1

0xa3cc,	// (0x000179b5) grid_ai_links_pane

0xa3a6,	// (0x0001798f) ai_gene_pane_1

0xa3b1,	// (0x0001799a) ai_gene_pane_2

0xa3ba,	// (0x000179a3) list_highlight_pane_cp4

0xa38a,	// (0x00017973) cell_ai_link_pane_ParamLimits

0xa38a,	// (0x00017973) cell_ai_link_pane

0xa382,	// (0x0001796b) cell_ai_link_pane_g1

0x39e4,	// (0x00010fcd) cell_ai_link_pane_g2

0x0001,

0xf8e3,	// (0x0001cecc) cell_ai_link_pane_g

0x371d,	// (0x00010d06) grid_highlight_cp2

0x371d,	// (0x00010d06) bg_popup_sub_pane_cp1

0x38ce,	// (0x00010eb7) popup_ai_links_title_window_t1

0xa2d2,	// (0x000178bb) ai_gene_pane_1_g1_ParamLimits

0xa2d2,	// (0x000178bb) ai_gene_pane_1_g1

0xa2de,	// (0x000178c7) ai_gene_pane_1_g2_ParamLimits

0xa2de,	// (0x000178c7) ai_gene_pane_1_g2

0x0001,

0xf8d9,	// (0x0001cec2) ai_gene_pane_1_g_ParamLimits

0xf8d9,	// (0x0001cec2) ai_gene_pane_1_g

0xa2eb,	// (0x000178d4) ai_gene_pane_1_t1_ParamLimits

0xa2eb,	// (0x000178d4) ai_gene_pane_1_t1

0xa31f,	// (0x00017908) grid_ai_soft_ind_pane

0xa2bd,	// (0x000178a6) ai_gene_pane_2_t1_ParamLimits

0xa2bd,	// (0x000178a6) ai_gene_pane_2_t1

0x7cf1,	// (0x000152da) main_pane_empty_t1_ParamLimits

0x7cf1,	// (0x000152da) main_pane_empty_t1

0x7d09,	// (0x000152f2) main_pane_empty_t2_ParamLimits

0x7d09,	// (0x000152f2) main_pane_empty_t2

0x7d1e,	// (0x00015307) main_pane_empty_t3_ParamLimits

0x7d1e,	// (0x00015307) main_pane_empty_t3

0x7d30,	// (0x00015319) main_pane_empty_t4_ParamLimits

0x7d30,	// (0x00015319) main_pane_empty_t4

0x7d42,	// (0x0001532b) main_pane_empty_t5_ParamLimits

0x7d42,	// (0x0001532b) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001cb38) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001cb38) main_pane_empty_t

0x3d06,	// (0x000112ef) bg_popup_window_pane_ParamLimits

0x3d06,	// (0x000112ef) bg_popup_window_pane

0xa02d,	// (0x00017616) find_popup_pane_cp2_ParamLimits

0xa02d,	// (0x00017616) find_popup_pane_cp2

0xa039,	// (0x00017622) heading_pane_ParamLimits

0xa039,	// (0x00017622) heading_pane

0x371d,	// (0x00010d06) bg_popup_sub_pane

0x9fa7,	// (0x00017590) bg_popup_window_pane_g1_ParamLimits

0x9fa7,	// (0x00017590) bg_popup_window_pane_g1

0x9fb3,	// (0x0001759c) bg_popup_window_pane_g2_ParamLimits

0x9fb3,	// (0x0001759c) bg_popup_window_pane_g2

0x9fbf,	// (0x000175a8) bg_popup_window_pane_g3_ParamLimits

0x9fbf,	// (0x000175a8) bg_popup_window_pane_g3

0x9fcb,	// (0x000175b4) bg_popup_window_pane_g4_ParamLimits

0x9fcb,	// (0x000175b4) bg_popup_window_pane_g4

0x9fd7,	// (0x000175c0) bg_popup_window_pane_g5_ParamLimits

0x9fd7,	// (0x000175c0) bg_popup_window_pane_g5

0x9fe3,	// (0x000175cc) bg_popup_window_pane_g6_ParamLimits

0x9fe3,	// (0x000175cc) bg_popup_window_pane_g6

0x9fef,	// (0x000175d8) bg_popup_window_pane_g7_ParamLimits

0x9fef,	// (0x000175d8) bg_popup_window_pane_g7

0x9ffb,	// (0x000175e4) bg_popup_window_pane_g8_ParamLimits

0x9ffb,	// (0x000175e4) bg_popup_window_pane_g8

0xa007,	// (0x000175f0) bg_popup_window_pane_g9_ParamLimits

0xa007,	// (0x000175f0) bg_popup_window_pane_g9

0xa013,	// (0x000175fc) bg_popup_window_pane_g10_ParamLimits

0xa013,	// (0x000175fc) bg_popup_window_pane_g10

0x0009,

0xf8a1,	// (0x0001ce8a) bg_popup_window_pane_g_ParamLimits

0xf8a1,	// (0x0001ce8a) bg_popup_window_pane_g

0x9f3c,	// (0x00017525) bg_popup_heading_pane_ParamLimits

0x9f3c,	// (0x00017525) bg_popup_heading_pane

0x6914,	// (0x00013efd) tabs_4_passive_pane_cp_srt_ParamLimits

0x6914,	// (0x00013efd) tabs_4_passive_pane_cp_srt

0x6926,	// (0x00013f0f) tabs_4_passive_pane_srt_ParamLimits

0x9f50,	// (0x00017539) heading_pane_g2

0x6926,	// (0x00013f0f) tabs_4_passive_pane_srt

0x4a5e,	// (0x00012047) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4a5e,	// (0x00012047) bg_passive_tab_pane_cp3_srt

0x9f58,	// (0x00017541) heading_pane_t1_ParamLimits

0x9f58,	// (0x00017541) heading_pane_t1

0x9f6f,	// (0x00017558) heading_pane_t2_ParamLimits

0x9f6f,	// (0x00017558) heading_pane_t2

0x0001,

0xf89c,	// (0x0001ce85) heading_pane_t_ParamLimits

0xf89c,	// (0x0001ce85) heading_pane_t

0x9a79,	// (0x00017062) bg_popup_heading_pane_g1

0x9b28,	// (0x00017111) bg_popup_heading_pane_g2

0x9b32,	// (0x0001711b) bg_popup_heading_pane_g3

0x9b3c,	// (0x00017125) bg_popup_heading_pane_g4

0x9b46,	// (0x0001712f) bg_popup_heading_pane_g5

0x9b50,	// (0x00017139) bg_popup_heading_pane_g6

0x9b58,	// (0x00017141) bg_popup_heading_pane_g7

0x9b60,	// (0x00017149) bg_popup_heading_pane_g8

0x9b6a,	// (0x00017153) bg_popup_heading_pane_g9

0x0008,

0xf858,	// (0x0001ce41) bg_popup_heading_pane_g

0x9165,	// (0x0001674e) bg_popup_sub_pane_g1

0x9175,	// (0x0001675e) bg_popup_sub_pane_g2

0x916d,	// (0x00016756) bg_popup_sub_pane_g3

0x9185,	// (0x0001676e) bg_popup_sub_pane_g4

0x917d,	// (0x00016766) bg_popup_sub_pane_g5

0x918d,	// (0x00016776) bg_popup_sub_pane_g6

0x9195,	// (0x0001677e) bg_popup_sub_pane_g7

0x91a5,	// (0x0001678e) bg_popup_sub_pane_g8

0x919d,	// (0x00016786) bg_popup_sub_pane_g9

0x0008,

0xf832,	// (0x0001ce1b) bg_popup_sub_pane_g

0x378b,	// (0x00010d74) bg_popup_window_pane_cp5_ParamLimits

0x378b,	// (0x00010d74) bg_popup_window_pane_cp5

0x38eb,	// (0x00010ed4) popup_note_window_g1_ParamLimits

0x38eb,	// (0x00010ed4) popup_note_window_g1

0x38f7,	// (0x00010ee0) popup_note_window_t1_ParamLimits

0x38f7,	// (0x00010ee0) popup_note_window_t1

0x390d,	// (0x00010ef6) popup_note_window_t2_ParamLimits

0x390d,	// (0x00010ef6) popup_note_window_t2

0x3923,	// (0x00010f0c) popup_note_window_t3_ParamLimits

0x3923,	// (0x00010f0c) popup_note_window_t3

0x3939,	// (0x00010f22) popup_note_window_t4_ParamLimits

0x3939,	// (0x00010f22) popup_note_window_t4

0x3961,	// (0x00010f4a) popup_note_window_t5_ParamLimits

0x3961,	// (0x00010f4a) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001cb43) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001cb43) popup_note_window_t

0x3985,	// (0x00010f6e) bg_popup_window_pane_cp6_ParamLimits

0x3985,	// (0x00010f6e) bg_popup_window_pane_cp6

0x99f5,	// (0x00016fde) popup_note_image_window_g1_ParamLimits

0x99f5,	// (0x00016fde) popup_note_image_window_g1

0x9a01,	// (0x00016fea) popup_note_image_window_g2_ParamLimits

0x9a01,	// (0x00016fea) popup_note_image_window_g2

0x0001,

0xf826,	// (0x0001ce0f) popup_note_image_window_g_ParamLimits

0xf826,	// (0x0001ce0f) popup_note_image_window_g

0x9a1a,	// (0x00017003) popup_note_image_window_t1_ParamLimits

0x9a1a,	// (0x00017003) popup_note_image_window_t1

0x9a33,	// (0x0001701c) popup_note_image_window_t2_ParamLimits

0x9a33,	// (0x0001701c) popup_note_image_window_t2

0x9a4c,	// (0x00017035) popup_note_image_window_t3_ParamLimits

0x9a4c,	// (0x00017035) popup_note_image_window_t3

0x0002,

0xf82b,	// (0x0001ce14) popup_note_image_window_t_ParamLimits

0xf82b,	// (0x0001ce14) popup_note_image_window_t

0x98be,	// (0x00016ea7) bg_popup_window_pane_cp7_ParamLimits

0x98be,	// (0x00016ea7) bg_popup_window_pane_cp7

0x98ee,	// (0x00016ed7) popup_note_wait_window_g1_ParamLimits

0x98ee,	// (0x00016ed7) popup_note_wait_window_g1

0x98fa,	// (0x00016ee3) popup_note_wait_window_g2_ParamLimits

0x98fa,	// (0x00016ee3) popup_note_wait_window_g2

0x0002,

0xf814,	// (0x0001cdfd) popup_note_wait_window_g_ParamLimits

0xf814,	// (0x0001cdfd) popup_note_wait_window_g

0x9912,	// (0x00016efb) popup_note_wait_window_t1_ParamLimits

0x9912,	// (0x00016efb) popup_note_wait_window_t1

0x9939,	// (0x00016f22) popup_note_wait_window_t2_ParamLimits

0x9939,	// (0x00016f22) popup_note_wait_window_t2

0x9956,	// (0x00016f3f) popup_note_wait_window_t3_ParamLimits

0x9956,	// (0x00016f3f) popup_note_wait_window_t3

0x9969,	// (0x00016f52) popup_note_wait_window_t4_ParamLimits

0x9969,	// (0x00016f52) popup_note_wait_window_t4

0x0004,

0xf81b,	// (0x0001ce04) popup_note_wait_window_t_ParamLimits

0xf81b,	// (0x0001ce04) popup_note_wait_window_t

0x998e,	// (0x00016f77) wait_bar_pane_ParamLimits

0x998e,	// (0x00016f77) wait_bar_pane

0x371d,	// (0x00010d06) wait_anim_pane

0x371d,	// (0x00010d06) wait_border_pane

0x35a4,	// (0x00010b8d) wait_anim_pane_g1

0x35a4,	// (0x00010b8d) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x0001ccb8) wait_anim_pane_g

0x986a,	// (0x00016e53) wait_border_pane_g1

0x9875,	// (0x00016e5e) wait_border_pane_g2

0x987e,	// (0x00016e67) wait_border_pane_g3

0x0002,

0xf80d,	// (0x0001cdf6) wait_border_pane_g

0x96d5,	// (0x00016cbe) bg_popup_window_pane_cp16_ParamLimits

0x96d5,	// (0x00016cbe) bg_popup_window_pane_cp16

0x97d5,	// (0x00016dbe) indicator_popup_pane_cp4_ParamLimits

0x97d5,	// (0x00016dbe) indicator_popup_pane_cp4

0x97e9,	// (0x00016dd2) popup_query_data_window_t1_ParamLimits

0x97e9,	// (0x00016dd2) popup_query_data_window_t1

0x97fb,	// (0x00016de4) popup_query_data_window_t2_ParamLimits

0x97fb,	// (0x00016de4) popup_query_data_window_t2

0x9814,	// (0x00016dfd) popup_query_data_window_t3_ParamLimits

0x9814,	// (0x00016dfd) popup_query_data_window_t3

0x0002,

0xf806,	// (0x0001cdef) popup_query_data_window_t_ParamLimits

0xf806,	// (0x0001cdef) popup_query_data_window_t

0x982e,	// (0x00016e17) query_popup_data_pane_ParamLimits

0x982e,	// (0x00016e17) query_popup_data_pane

0x9842,	// (0x00016e2b) query_popup_data_pane_cp1_ParamLimits

0x9842,	// (0x00016e2b) query_popup_data_pane_cp1

0x96d5,	// (0x00016cbe) bg_popup_window_pane_cp10_ParamLimits

0x96d5,	// (0x00016cbe) bg_popup_window_pane_cp10

0x9707,	// (0x00016cf0) indicator_popup_pane_ParamLimits

0x9707,	// (0x00016cf0) indicator_popup_pane

0x9729,	// (0x00016d12) popup_query_code_window_t1_ParamLimits

0x9729,	// (0x00016d12) popup_query_code_window_t1

0x9743,	// (0x00016d2c) popup_query_code_window_t2_ParamLimits

0x9743,	// (0x00016d2c) popup_query_code_window_t2

0x978c,	// (0x00016d75) popup_query_code_window_t3_ParamLimits

0x978c,	// (0x00016d75) popup_query_code_window_t3

0x0002,

0xf7ff,	// (0x0001cde8) popup_query_code_window_t_ParamLimits

0xf7ff,	// (0x0001cde8) popup_query_code_window_t

0x97bb,	// (0x00016da4) query_popup_pane_ParamLimits

0x97bb,	// (0x00016da4) query_popup_pane

0x3985,	// (0x00010f6e) bg_popup_window_pane_cp15_ParamLimits

0x3985,	// (0x00010f6e) bg_popup_window_pane_cp15

0x7d7c,	// (0x00015365) indicator_popup_pane_cp1_ParamLimits

0x7d7c,	// (0x00015365) indicator_popup_pane_cp1

0x7d8f,	// (0x00015378) indicator_popup_pane_cp2_ParamLimits

0x7d8f,	// (0x00015378) indicator_popup_pane_cp2

0x7da2,	// (0x0001538b) popup_query_data_code_window_g1_ParamLimits

0x7da2,	// (0x0001538b) popup_query_data_code_window_g1

0x39a3,	// (0x00010f8c) popup_query_data_code_window_t1_ParamLimits

0x39a3,	// (0x00010f8c) popup_query_data_code_window_t1

0x39b5,	// (0x00010f9e) popup_query_data_code_window_t2_ParamLimits

0x39b5,	// (0x00010f9e) popup_query_data_code_window_t2

0x7db5,	// (0x0001539e) popup_query_data_code_window_t3_ParamLimits

0x7db5,	// (0x0001539e) popup_query_data_code_window_t3

0x7dcb,	// (0x000153b4) popup_query_data_code_window_t4_ParamLimits

0x7dcb,	// (0x000153b4) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001cb4e) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001cb4e) popup_query_data_code_window_t

0x65cf,	// (0x00013bb8) list_single_midp_graphic_pane_g3

0x7de3,	// (0x000153cc) query_popup_data_pane_cp2_ParamLimits

0x7df6,	// (0x000153df) query_popup_pane_cp2_ParamLimits

0x7df6,	// (0x000153df) query_popup_pane_cp2

0x371d,	// (0x00010d06) bg_popup_window_pane_cp11

0x96b9,	// (0x00016ca2) heading_pane_cp5

0x96c1,	// (0x00016caa) listscroll_popup_info_pane

0x371d,	// (0x00010d06) input_focus_pane_cp3

0x39c7,	// (0x00010fb0) query_popup_pane_t1

0x39d5,	// (0x00010fbe) list_popup_info_pane_ParamLimits

0x39d5,	// (0x00010fbe) list_popup_info_pane

0x39e4,	// (0x00010fcd) listscroll_popup_info_pane_g1

0x39ec,	// (0x00010fd5) scroll_pane_cp7

0x7e09,	// (0x000153f2) popup_info_list_pane_t1_ParamLimits

0x7e09,	// (0x000153f2) popup_info_list_pane_t1

0x7e23,	// (0x0001540c) popup_info_list_pane_t2_ParamLimits

0x7e23,	// (0x0001540c) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001cb57) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001cb57) popup_info_list_pane_t

0x371d,	// (0x00010d06) bg_popup_window_pane_cp12

0xab19,	// (0x00018102) find_popup_pane

0x3799,	// (0x00010d82) bg_popup_window_pane_cp3

0x39f6,	// (0x00010fdf) heading_pane_cp3

0x3a05,	// (0x00010fee) listscroll_popup_graphic_pane

0x371d,	// (0x00010d06) bg_popup_window_pane_cp4

0x7e8d,	// (0x00015476) heading_pane_cp4

0x3a15,	// (0x00010ffe) listscroll_popup_colour_pane

0x7e97,	// (0x00015480) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7e97,	// (0x00015480) cell_large_graphic_colour_none_popup_pane

0x7eab,	// (0x00015494) grid_large_graphic_colour_popup_pane_ParamLimits

0x7eab,	// (0x00015494) grid_large_graphic_colour_popup_pane

0x7ecf,	// (0x000154b8) listscroll_popup_colour_pane_g1_ParamLimits

0x7ecf,	// (0x000154b8) listscroll_popup_colour_pane_g1

0x7ee6,	// (0x000154cf) listscroll_popup_colour_pane_g2_ParamLimits

0x7ee6,	// (0x000154cf) listscroll_popup_colour_pane_g2

0x7efd,	// (0x000154e6) listscroll_popup_colour_pane_g3_ParamLimits

0x7efd,	// (0x000154e6) listscroll_popup_colour_pane_g3

0x7f0d,	// (0x000154f6) listscroll_popup_colour_pane_g4_ParamLimits

0x7f0d,	// (0x000154f6) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001cb5c) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001cb5c) listscroll_popup_colour_pane_g

0x3a1d,	// (0x00011006) scroll_pane_cp6_ParamLimits

0x3a1d,	// (0x00011006) scroll_pane_cp6

0x7f1d,	// (0x00015506) cell_large_graphic_colour_popup_pane_ParamLimits

0x7f1d,	// (0x00015506) cell_large_graphic_colour_popup_pane

0x7f3c,	// (0x00015525) cell_large_graphic_colour_none_popup_pane_t1

0x371d,	// (0x00010d06) grid_highlight_pane_cp5

0x3a2f,	// (0x00011018) cell_large_graphic_colour_popup_pane_g1

0x3a37,	// (0x00011020) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001cb65) cell_large_graphic_colour_popup_pane_g

0x3a3f,	// (0x00011028) cell_large_graphic_colour_popup_pane_g2_copy1

0x3a48,	// (0x00011031) grid_highlight_pane_cp4

0x3a50,	// (0x00011039) bg_popup_window_pane_cp8_ParamLimits

0x3a50,	// (0x00011039) bg_popup_window_pane_cp8

0x7f4b,	// (0x00015534) popup_snote_single_text_window_g1_ParamLimits

0x7f4b,	// (0x00015534) popup_snote_single_text_window_g1

0x7f5d,	// (0x00015546) popup_snote_single_text_window_t1_ParamLimits

0x7f5d,	// (0x00015546) popup_snote_single_text_window_t1

0x7f70,	// (0x00015559) popup_snote_single_text_window_t2_ParamLimits

0x7f70,	// (0x00015559) popup_snote_single_text_window_t2

0x7f83,	// (0x0001556c) popup_snote_single_text_window_t3_ParamLimits

0x7f83,	// (0x0001556c) popup_snote_single_text_window_t3

0x7fbc,	// (0x000155a5) popup_snote_single_text_window_t4_ParamLimits

0x7fbc,	// (0x000155a5) popup_snote_single_text_window_t4

0x7ff0,	// (0x000155d9) popup_snote_single_text_window_t5_ParamLimits

0x7ff0,	// (0x000155d9) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001cb6a) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001cb6a) popup_snote_single_text_window_t

0x3a6b,	// (0x00011054) bg_popup_window_pane_cp9_ParamLimits

0x3a6b,	// (0x00011054) bg_popup_window_pane_cp9

0x7f4b,	// (0x00015534) popup_snote_single_graphic_window_g1_ParamLimits

0x7f4b,	// (0x00015534) popup_snote_single_graphic_window_g1

0x3a79,	// (0x00011062) popup_snote_single_graphic_window_g2_ParamLimits

0x3a79,	// (0x00011062) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001cb75) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001cb75) popup_snote_single_graphic_window_g

0x3a85,	// (0x0001106e) popup_snote_single_graphic_window_t1_ParamLimits

0x3a85,	// (0x0001106e) popup_snote_single_graphic_window_t1

0x3a98,	// (0x00011081) popup_snote_single_graphic_window_t2_ParamLimits

0x3a98,	// (0x00011081) popup_snote_single_graphic_window_t2

0x801f,	// (0x00015608) popup_snote_single_graphic_window_t3_ParamLimits

0x801f,	// (0x00015608) popup_snote_single_graphic_window_t3

0x8058,	// (0x00015641) popup_snote_single_graphic_window_t4_ParamLimits

0x8058,	// (0x00015641) popup_snote_single_graphic_window_t4

0x808c,	// (0x00015675) popup_snote_single_graphic_window_t5_ParamLimits

0x808c,	// (0x00015675) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001cb7a) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001cb7a) popup_snote_single_graphic_window_t

0xaa5b,	// (0x00018044) grid_graphic_popup_pane_ParamLimits

0xaa5b,	// (0x00018044) grid_graphic_popup_pane

0xaa85,	// (0x0001806e) listscroll_popup_graphic_pane_g1_ParamLimits

0xaa85,	// (0x0001806e) listscroll_popup_graphic_pane_g1

0xaa99,	// (0x00018082) listscroll_popup_graphic_pane_g2_ParamLimits

0xaa99,	// (0x00018082) listscroll_popup_graphic_pane_g2

0x0001,

0xf97c,	// (0x0001cf65) listscroll_popup_graphic_pane_g_ParamLimits

0xf97c,	// (0x0001cf65) listscroll_popup_graphic_pane_g

0xaaad,	// (0x00018096) scroll_pane_cp5

0xa9f1,	// (0x00017fda) cell_graphic_popup_pane_ParamLimits

0xa9f1,	// (0x00017fda) cell_graphic_popup_pane

0xa9d2,	// (0x00017fbb) cell_graphic_popup_pane_g1

0xa9da,	// (0x00017fc3) cell_graphic_popup_pane_g2

0x3a3f,	// (0x00011028) cell_graphic_popup_pane_g3

0x0002,

0xf975,	// (0x0001cf5e) cell_graphic_popup_pane_g

0xa9e3,	// (0x00017fcc) cell_graphic_popup_pane_t2

0x3a48,	// (0x00011031) grid_highlight_pane_cp3

0x3abd,	// (0x000110a6) list_gen_pane_ParamLimits

0x3abd,	// (0x000110a6) list_gen_pane

0x3ae5,	// (0x000110ce) scroll_pane

0xa92a,	// (0x00017f13) bg_list_pane_g1_ParamLimits

0xa92a,	// (0x00017f13) bg_list_pane_g1

0xa947,	// (0x00017f30) bg_list_pane_g2_ParamLimits

0xa947,	// (0x00017f30) bg_list_pane_g2

0xa95c,	// (0x00017f45) bg_list_pane_g3_ParamLimits

0xa95c,	// (0x00017f45) bg_list_pane_g3

0xa970,	// (0x00017f59) bg_list_pane_g4_ParamLimits

0xa970,	// (0x00017f59) bg_list_pane_g4

0xa984,	// (0x00017f6d) bg_list_pane_g5_ParamLimits

0xa984,	// (0x00017f6d) bg_list_pane_g5

0x0004,

0xf96a,	// (0x0001cf53) bg_list_pane_g_ParamLimits

0xf96a,	// (0x0001cf53) bg_list_pane_g

0xa80e,	// (0x00017df7) list_double2_graphic_large_graphic_pane_ParamLimits

0xa80e,	// (0x00017df7) list_double2_graphic_large_graphic_pane

0xa80e,	// (0x00017df7) list_double2_graphic_pane_ParamLimits

0xa80e,	// (0x00017df7) list_double2_graphic_pane

0xa80e,	// (0x00017df7) list_double2_large_graphic_pane_ParamLimits

0xa80e,	// (0x00017df7) list_double2_large_graphic_pane

0xa80e,	// (0x00017df7) list_double2_pane_ParamLimits

0xa80e,	// (0x00017df7) list_double2_pane

0xa80e,	// (0x00017df7) list_double_graphic_heading_pane_ParamLimits

0xa80e,	// (0x00017df7) list_double_graphic_heading_pane

0xa80e,	// (0x00017df7) list_double_graphic_pane_ParamLimits

0xa80e,	// (0x00017df7) list_double_graphic_pane

0xa80e,	// (0x00017df7) list_double_heading_pane_ParamLimits

0xa80e,	// (0x00017df7) list_double_heading_pane

0xa80e,	// (0x00017df7) list_double_large_graphic_pane_ParamLimits

0xa80e,	// (0x00017df7) list_double_large_graphic_pane

0xa80e,	// (0x00017df7) list_double_number_pane_ParamLimits

0xa80e,	// (0x00017df7) list_double_number_pane

0xa80e,	// (0x00017df7) list_double_pane_ParamLimits

0xa80e,	// (0x00017df7) list_double_pane

0xa80e,	// (0x00017df7) list_double_time_pane_ParamLimits

0xa80e,	// (0x00017df7) list_double_time_pane

0xa80e,	// (0x00017df7) list_setting_number_pane_ParamLimits

0xa80e,	// (0x00017df7) list_setting_number_pane

0xa80e,	// (0x00017df7) list_setting_pane_ParamLimits

0xa80e,	// (0x00017df7) list_setting_pane

0xa88c,	// (0x00017e75) list_single_2graphic_pane_ParamLimits

0xa88c,	// (0x00017e75) list_single_2graphic_pane

0xa88c,	// (0x00017e75) list_single_graphic_heading_pane_ParamLimits

0xa88c,	// (0x00017e75) list_single_graphic_heading_pane

0xa88c,	// (0x00017e75) list_single_graphic_pane_ParamLimits

0xa88c,	// (0x00017e75) list_single_graphic_pane

0xa88c,	// (0x00017e75) list_single_heading_pane_ParamLimits

0xa88c,	// (0x00017e75) list_single_heading_pane

0xa907,	// (0x00017ef0) list_single_large_graphic_pane_ParamLimits

0xa907,	// (0x00017ef0) list_single_large_graphic_pane

0xa88c,	// (0x00017e75) list_single_number_heading_pane_ParamLimits

0xa88c,	// (0x00017e75) list_single_number_heading_pane

0xa88c,	// (0x00017e75) list_single_number_pane_ParamLimits

0xa88c,	// (0x00017e75) list_single_number_pane

0xa88c,	// (0x00017e75) list_single_pane_ParamLimits

0xa88c,	// (0x00017e75) list_single_pane

0x371d,	// (0x00010d06) list_highlight_pane_cp1

0x80d1,	// (0x000156ba) list_single_pane_g1_ParamLimits

0x80d1,	// (0x000156ba) list_single_pane_g1

0x80dd,	// (0x000156c6) list_single_pane_g2_ParamLimits

0x80dd,	// (0x000156c6) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001cb8c) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001cb8c) list_single_pane_g

0xa7c7,	// (0x00017db0) list_single_pane_t1_ParamLimits

0xa7c7,	// (0x00017db0) list_single_pane_t1

0x80d1,	// (0x000156ba) list_single_number_pane_g1_ParamLimits

0x80d1,	// (0x000156ba) list_single_number_pane_g1

0x80dd,	// (0x000156c6) list_single_number_pane_g2_ParamLimits

0x80dd,	// (0x000156c6) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001cb8c) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001cb8c) list_single_number_pane_g

0x80e9,	// (0x000156d2) list_single_number_pane_t1_ParamLimits

0x80e9,	// (0x000156d2) list_single_number_pane_t1

0xa56d,	// (0x00017b56) list_single_number_pane_t2_ParamLimits

0xa56d,	// (0x00017b56) list_single_number_pane_t2

0x0001,

0xf92b,	// (0x0001cf14) list_single_number_pane_t_ParamLimits

0xf92b,	// (0x0001cf14) list_single_number_pane_t

0x80c5,	// (0x000156ae) list_single_graphic_pane_g1_ParamLimits

0x80c5,	// (0x000156ae) list_single_graphic_pane_g1

0x80d1,	// (0x000156ba) list_single_graphic_pane_g2_ParamLimits

0x80d1,	// (0x000156ba) list_single_graphic_pane_g2

0x80dd,	// (0x000156c6) list_single_graphic_pane_g3_ParamLimits

0x80dd,	// (0x000156c6) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001cb85) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001cb85) list_single_graphic_pane_g

0x80e9,	// (0x000156d2) list_single_graphic_pane_t1_ParamLimits

0x80e9,	// (0x000156d2) list_single_graphic_pane_t1

0x80d1,	// (0x000156ba) list_single_heading_pane_g1_ParamLimits

0x80d1,	// (0x000156ba) list_single_heading_pane_g1

0x80dd,	// (0x000156c6) list_single_heading_pane_g2_ParamLimits

0x80dd,	// (0x000156c6) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001cb8c) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001cb8c) list_single_heading_pane_g

0x80ff,	// (0x000156e8) list_single_heading_pane_t1_ParamLimits

0x80ff,	// (0x000156e8) list_single_heading_pane_t1

0x8115,	// (0x000156fe) list_single_heading_pane_t2_ParamLimits

0x8115,	// (0x000156fe) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001cb91) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001cb91) list_single_heading_pane_t

0x80d1,	// (0x000156ba) list_single_number_heading_pane_g1_ParamLimits

0x80d1,	// (0x000156ba) list_single_number_heading_pane_g1

0x80dd,	// (0x000156c6) list_single_number_heading_pane_g2_ParamLimits

0x80dd,	// (0x000156c6) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001cb8c) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001cb8c) list_single_number_heading_pane_g

0x80ff,	// (0x000156e8) list_single_number_heading_pane_t1_ParamLimits

0x80ff,	// (0x000156e8) list_single_number_heading_pane_t1

0x8127,	// (0x00015710) list_single_number_heading_pane_t2_ParamLimits

0x8127,	// (0x00015710) list_single_number_heading_pane_t2

0x8139,	// (0x00015722) list_single_number_heading_pane_t3_ParamLimits

0x8139,	// (0x00015722) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001cb96) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001cb96) list_single_number_heading_pane_t

0x814b,	// (0x00015734) list_single_graphic_heading_pane_g1_ParamLimits

0x814b,	// (0x00015734) list_single_graphic_heading_pane_g1

0x8157,	// (0x00015740) list_single_graphic_heading_pane_g4_ParamLimits

0x8157,	// (0x00015740) list_single_graphic_heading_pane_g4

0x80dd,	// (0x000156c6) list_single_graphic_heading_pane_g5_ParamLimits

0x80dd,	// (0x000156c6) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001cb9d) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001cb9d) list_single_graphic_heading_pane_g

0x80ff,	// (0x000156e8) list_single_graphic_heading_pane_t1_ParamLimits

0x80ff,	// (0x000156e8) list_single_graphic_heading_pane_t1

0x8168,	// (0x00015751) list_single_graphic_heading_pane_t2_ParamLimits

0x8168,	// (0x00015751) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001cba4) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001cba4) list_single_graphic_heading_pane_t

0x817a,	// (0x00015763) list_single_large_graphic_pane_g1_ParamLimits

0x817a,	// (0x00015763) list_single_large_graphic_pane_g1

0x80d1,	// (0x000156ba) list_single_large_graphic_pane_g2_ParamLimits

0x80d1,	// (0x000156ba) list_single_large_graphic_pane_g2

0x80dd,	// (0x000156c6) list_single_large_graphic_pane_g3_ParamLimits

0x80dd,	// (0x000156c6) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001cba9) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001cba9) list_single_large_graphic_pane_g

0x9875,	// (0x00016e5e) wait_border_pane_g2_copy1

0x8186,	// (0x0001576f) list_single_large_graphic_pane_g4_cp2

0x80e9,	// (0x000156d2) list_single_large_graphic_pane_t1_ParamLimits

0x80e9,	// (0x000156d2) list_single_large_graphic_pane_t1

0x3d73,	// (0x0001135c) list_double_pane_g1_ParamLimits

0x3d73,	// (0x0001135c) list_double_pane_g1

0x818e,	// (0x00015777) list_double_pane_g2_ParamLimits

0x818e,	// (0x00015777) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001cbb0) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001cbb0) list_double_pane_g

0x819a,	// (0x00015783) list_double_pane_t1_ParamLimits

0x819a,	// (0x00015783) list_double_pane_t1

0x81b0,	// (0x00015799) list_double_pane_t2_ParamLimits

0x81b0,	// (0x00015799) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001cbb5) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001cbb5) list_double_pane_t

0x81c2,	// (0x000157ab) list_double2_pane_g1_ParamLimits

0x81c2,	// (0x000157ab) list_double2_pane_g1

0x81d3,	// (0x000157bc) list_double2_pane_g2_ParamLimits

0x81d3,	// (0x000157bc) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001cbba) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001cbba) list_double2_pane_g

0x81df,	// (0x000157c8) list_double2_pane_t1_ParamLimits

0x81df,	// (0x000157c8) list_double2_pane_t1

0x81f5,	// (0x000157de) list_double2_pane_t2_ParamLimits

0x81f5,	// (0x000157de) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001cbbf) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001cbbf) list_double2_pane_t

0x3d73,	// (0x0001135c) list_double_number_pane_g1_ParamLimits

0x3d73,	// (0x0001135c) list_double_number_pane_g1

0x818e,	// (0x00015777) list_double_number_pane_g2_ParamLimits

0x818e,	// (0x00015777) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001cbb0) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001cbb0) list_double_number_pane_g

0x8207,	// (0x000157f0) list_double_number_pane_t1_ParamLimits

0x8207,	// (0x000157f0) list_double_number_pane_t1

0x8219,	// (0x00015802) list_double_number_pane_t2_ParamLimits

0x8219,	// (0x00015802) list_double_number_pane_t2

0x822f,	// (0x00015818) list_double_number_pane_t3_ParamLimits

0x822f,	// (0x00015818) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001cbc4) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001cbc4) list_double_number_pane_t

0x8241,	// (0x0001582a) list_double_graphic_pane_g1_ParamLimits

0x8241,	// (0x0001582a) list_double_graphic_pane_g1

0x824d,	// (0x00015836) list_double_graphic_pane_g2_ParamLimits

0x824d,	// (0x00015836) list_double_graphic_pane_g2

0x825c,	// (0x00015845) list_double_graphic_pane_g3_ParamLimits

0x825c,	// (0x00015845) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001cbcb) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001cbcb) list_double_graphic_pane_g

0x8219,	// (0x00015802) list_double_graphic_pane_t1_ParamLimits

0x8219,	// (0x00015802) list_double_graphic_pane_t1

0x822f,	// (0x00015818) list_double_graphic_pane_t2_ParamLimits

0x822f,	// (0x00015818) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001cbd4) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001cbd4) list_double_graphic_pane_t

0x8274,	// (0x0001585d) list_double2_graphic_pane_g1_ParamLimits

0x8274,	// (0x0001585d) list_double2_graphic_pane_g1

0x3d7f,	// (0x00011368) list_double2_graphic_pane_g2_ParamLimits

0x3d7f,	// (0x00011368) list_double2_graphic_pane_g2

0x81d3,	// (0x000157bc) list_double2_graphic_pane_g3_ParamLimits

0x81d3,	// (0x000157bc) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001cbd9) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001cbd9) list_double2_graphic_pane_g

0x8280,	// (0x00015869) list_double2_graphic_pane_t1_ParamLimits

0x8280,	// (0x00015869) list_double2_graphic_pane_t1

0x8296,	// (0x0001587f) list_double2_graphic_pane_t2_ParamLimits

0x8296,	// (0x0001587f) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001cbe0) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001cbe0) list_double2_graphic_pane_t

0x82a8,	// (0x00015891) list_double_large_graphic_pane_g1_ParamLimits

0x82a8,	// (0x00015891) list_double_large_graphic_pane_g1

0x82c7,	// (0x000158b0) list_double_large_graphic_pane_g2_ParamLimits

0x82c7,	// (0x000158b0) list_double_large_graphic_pane_g2

0x818e,	// (0x00015777) list_double_large_graphic_pane_g3_ParamLimits

0x818e,	// (0x00015777) list_double_large_graphic_pane_g3

0x82d8,	// (0x000158c1) list_double_large_graphic_pane_g4_ParamLimits

0x82d8,	// (0x000158c1) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001cbe5) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001cbe5) list_double_large_graphic_pane_g

0x82eb,	// (0x000158d4) list_double_large_graphic_pane_t1_ParamLimits

0x82eb,	// (0x000158d4) list_double_large_graphic_pane_t1

0x8304,	// (0x000158ed) list_double_large_graphic_pane_t2_ParamLimits

0x8304,	// (0x000158ed) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001cbf0) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001cbf0) list_double_large_graphic_pane_t

0x8316,	// (0x000158ff) list_double2_large_graphic_pane_g1_ParamLimits

0x8316,	// (0x000158ff) list_double2_large_graphic_pane_g1

0x81c2,	// (0x000157ab) list_double2_large_graphic_pane_g2_ParamLimits

0x81c2,	// (0x000157ab) list_double2_large_graphic_pane_g2

0x81d3,	// (0x000157bc) list_double2_large_graphic_pane_g3_ParamLimits

0x81d3,	// (0x000157bc) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001cbf5) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001cbf5) list_double2_large_graphic_pane_g

0x8280,	// (0x00015869) list_double2_large_graphic_pane_t1_ParamLimits

0x8280,	// (0x00015869) list_double2_large_graphic_pane_t1

0x8296,	// (0x0001587f) list_double2_large_graphic_pane_t2_ParamLimits

0x8296,	// (0x0001587f) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001cbe0) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001cbe0) list_double2_large_graphic_pane_t

0x8322,	// (0x0001590b) list_double_heading_pane_g1_ParamLimits

0x8322,	// (0x0001590b) list_double_heading_pane_g1

0x3b19,	// (0x00011102) list_double_heading_pane_g2_ParamLimits

0x3b19,	// (0x00011102) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0001cbfc) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0001cbfc) list_double_heading_pane_g

0x8333,	// (0x0001591c) list_double_heading_pane_t1_ParamLimits

0x8333,	// (0x0001591c) list_double_heading_pane_t1

0x8296,	// (0x0001587f) list_double_heading_pane_t2_ParamLimits

0x8296,	// (0x0001587f) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0001cc01) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0001cc01) list_double_heading_pane_t

0x8241,	// (0x0001582a) list_double_graphic_heading_pane_g1_ParamLimits

0x8241,	// (0x0001582a) list_double_graphic_heading_pane_g1

0x8322,	// (0x0001590b) list_double_graphic_heading_pane_g2_ParamLimits

0x8322,	// (0x0001590b) list_double_graphic_heading_pane_g2

0x3b19,	// (0x00011102) list_double_graphic_heading_pane_g3_ParamLimits

0x3b19,	// (0x00011102) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0001cc06) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001cc06) list_double_graphic_heading_pane_g

0x8333,	// (0x0001591c) list_double_graphic_heading_pane_t1_ParamLimits

0x8333,	// (0x0001591c) list_double_graphic_heading_pane_t1

0x8296,	// (0x0001587f) list_double_graphic_heading_pane_t2_ParamLimits

0x8296,	// (0x0001587f) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0001cc01) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0001cc01) list_double_graphic_heading_pane_t

0x82c7,	// (0x000158b0) list_double_time_pane_g1_ParamLimits

0x82c7,	// (0x000158b0) list_double_time_pane_g1

0x818e,	// (0x00015777) list_double_time_pane_g2_ParamLimits

0x818e,	// (0x00015777) list_double_time_pane_g2

0x0001,

0xf624,	// (0x0001cc0d) list_double_time_pane_g_ParamLimits

0xf624,	// (0x0001cc0d) list_double_time_pane_g

0x8349,	// (0x00015932) list_double_time_pane_t1_ParamLimits

0x8349,	// (0x00015932) list_double_time_pane_t1

0x835f,	// (0x00015948) list_double_time_pane_t2_ParamLimits

0x835f,	// (0x00015948) list_double_time_pane_t2

0x8371,	// (0x0001595a) list_double_time_pane_t3_ParamLimits

0x8371,	// (0x0001595a) list_double_time_pane_t3

0x8383,	// (0x0001596c) list_double_time_pane_t4_ParamLimits

0x8383,	// (0x0001596c) list_double_time_pane_t4

0x0003,

0xf629,	// (0x0001cc12) list_double_time_pane_t_ParamLimits

0xf629,	// (0x0001cc12) list_double_time_pane_t

0x3d7f,	// (0x00011368) list_setting_pane_g1_ParamLimits

0x3d7f,	// (0x00011368) list_setting_pane_g1

0x81d3,	// (0x000157bc) list_setting_pane_g2_ParamLimits

0x81d3,	// (0x000157bc) list_setting_pane_g2

0x0001,

0xf632,	// (0x0001cc1b) list_setting_pane_g_ParamLimits

0xf632,	// (0x0001cc1b) list_setting_pane_g

0x8395,	// (0x0001597e) list_setting_pane_t1_ParamLimits

0x8395,	// (0x0001597e) list_setting_pane_t1

0x83ac,	// (0x00015995) list_setting_pane_t2_ParamLimits

0x83ac,	// (0x00015995) list_setting_pane_t2

0x0002,

0xf637,	// (0x0001cc20) list_setting_pane_t_ParamLimits

0xf637,	// (0x0001cc20) list_setting_pane_t

0x83e9,	// (0x000159d2) set_value_pane_cp_ParamLimits

0x83e9,	// (0x000159d2) set_value_pane_cp

0x3d7f,	// (0x00011368) list_setting_number_pane_g1_ParamLimits

0x3d7f,	// (0x00011368) list_setting_number_pane_g1

0x81d3,	// (0x000157bc) list_setting_number_pane_g2_ParamLimits

0x81d3,	// (0x000157bc) list_setting_number_pane_g2

0x0001,

0xf632,	// (0x0001cc1b) list_setting_number_pane_g_ParamLimits

0xf632,	// (0x0001cc1b) list_setting_number_pane_g

0x83f5,	// (0x000159de) list_setting_number_pane_t1_ParamLimits

0x83f5,	// (0x000159de) list_setting_number_pane_t1

0x8409,	// (0x000159f2) list_setting_number_pane_t2_ParamLimits

0x8409,	// (0x000159f2) list_setting_number_pane_t2

0x8420,	// (0x00015a09) list_setting_number_pane_t3_ParamLimits

0x8420,	// (0x00015a09) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x0001cc27) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x0001cc27) list_setting_number_pane_t

0x83e9,	// (0x000159d2) set_value_pane_ParamLimits

0x83e9,	// (0x000159d2) set_value_pane

0x3b3a,	// (0x00011123) bg_set_opt_pane_ParamLimits

0x3b3a,	// (0x00011123) bg_set_opt_pane

0x3b5b,	// (0x00011144) set_value_pane_t1

0x3b69,	// (0x00011152) slider_set_pane_cp3

0x8463,	// (0x00015a4c) volume_small_pane_cp

0x3b72,	// (0x0001115b) list_form_gen_pane

0x3b7b,	// (0x00011164) scroll_pane_cp8

0x846c,	// (0x00015a55) form_field_data_pane_ParamLimits

0x846c,	// (0x00015a55) form_field_data_pane

0x8484,	// (0x00015a6d) form_field_data_wide_pane_ParamLimits

0x8484,	// (0x00015a6d) form_field_data_wide_pane

0x84a5,	// (0x00015a8e) form_field_popup_pane_ParamLimits

0x84a5,	// (0x00015a8e) form_field_popup_pane

0x84c5,	// (0x00015aae) form_field_popup_wide_pane_ParamLimits

0x84c5,	// (0x00015aae) form_field_popup_wide_pane

0x3b9c,	// (0x00011185) form_field_slider_pane_ParamLimits

0x3b9c,	// (0x00011185) form_field_slider_pane

0x84e2,	// (0x00015acb) form_field_slider_wide_pane_ParamLimits

0x84e2,	// (0x00015acb) form_field_slider_wide_pane

0x3baf,	// (0x00011198) data_form_pane

0x84ff,	// (0x00015ae8) form_field_data_pane_t1

0x3bbb,	// (0x000111a4) input_focus_pane

0x3bc9,	// (0x000111b2) data_form_wide_pane

0x3c06,	// (0x000111ef) form_field_data_wide_pane_t1

0x3a5d,	// (0x00011046) input_focus_pane_cp6

0x8517,	// (0x00015b00) form_field_popup_pane_t1

0x3bbb,	// (0x000111a4) input_focus_pane_cp7

0x3c28,	// (0x00011211) list_form_pane

0x3c3c,	// (0x00011225) form_field_popup_wide_pane_t1

0x3bbb,	// (0x000111a4) input_focus_pane_cp8

0x3c51,	// (0x0001123a) list_form_wide_pane

0x8537,	// (0x00015b20) form_field_slider_pane_t1_ParamLimits

0x8537,	// (0x00015b20) form_field_slider_pane_t1

0x8549,	// (0x00015b32) form_field_slider_pane_t2_ParamLimits

0x8549,	// (0x00015b32) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x0001cc37) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x0001cc37) form_field_slider_pane_t

0x378b,	// (0x00010d74) input_focus_pane_cp9_ParamLimits

0x378b,	// (0x00010d74) input_focus_pane_cp9

0x855b,	// (0x00015b44) slider_cont_pane_ParamLimits

0x855b,	// (0x00015b44) slider_cont_pane

0x3c5d,	// (0x00011246) form_field_slider_wide_pane_t1_ParamLimits

0x3c5d,	// (0x00011246) form_field_slider_wide_pane_t1

0x3c6f,	// (0x00011258) form_field_slider_wide_pane_t2_ParamLimits

0x3c6f,	// (0x00011258) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x0001cc3c) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x0001cc3c) form_field_slider_wide_pane_t

0x378b,	// (0x00010d74) input_focus_pane_cp10_ParamLimits

0x378b,	// (0x00010d74) input_focus_pane_cp10

0x856f,	// (0x00015b58) slider_cont_pane_cp1_ParamLimits

0x856f,	// (0x00015b58) slider_cont_pane_cp1

0x8583,	// (0x00015b6c) slider_form_pane_cp

0x3c81,	// (0x0001126a) input_focus_pane_g1

0x3c89,	// (0x00011272) input_focus_pane_g2

0x3c91,	// (0x0001127a) input_focus_pane_g3

0x3c99,	// (0x00011282) input_focus_pane_g4

0x3ca1,	// (0x0001128a) input_focus_pane_g5

0x3ca9,	// (0x00011292) input_focus_pane_g6

0x3cb1,	// (0x0001129a) input_focus_pane_g7

0x3cb9,	// (0x000112a2) input_focus_pane_g8

0x3cc1,	// (0x000112aa) input_focus_pane_g9

0x35a4,	// (0x00010b8d) input_focus_pane_g10

0x0009,

0xf658,	// (0x0001cc41) input_focus_pane_g

0x987e,	// (0x00016e67) wait_border_pane_g3_copy1

0x858b,	// (0x00015b74) data_form_pane_t1

0x35a4,	// (0x00010b8d) wait_anim_pane_g1_copy1

0xa7aa,	// (0x00017d93) data_form_wide_pane_t1

0x85a6,	// (0x00015b8f) list_form_graphic_pane_cp_ParamLimits

0x85a6,	// (0x00015b8f) list_form_graphic_pane_cp

0xa77f,	// (0x00017d68) slider_form_pane_g1

0xa788,	// (0x00017d71) slider_form_pane_g2

0x0006,

0xf95b,	// (0x0001cf44) slider_form_pane_g

0x85ba,	// (0x00015ba3) list_form_graphic_pane_ParamLimits

0x85ba,	// (0x00015ba3) list_form_graphic_pane

0x85d1,	// (0x00015bba) list_form_graphic_pane_g1

0x85d9,	// (0x00015bc2) list_form_graphic_pane_t1_ParamLimits

0x85d9,	// (0x00015bc2) list_form_graphic_pane_t1

0x3799,	// (0x00010d82) list_highlight_pane_cp5_ParamLimits

0x3799,	// (0x00010d82) list_highlight_pane_cp5

0x85ee,	// (0x00015bd7) find_pane_g1

0x3cc9,	// (0x000112b2) input_find_pane

0x85f7,	// (0x00015be0) input_find_pane_g1_ParamLimits

0x85f7,	// (0x00015be0) input_find_pane_g1

0x8603,	// (0x00015bec) input_find_pane_t1_ParamLimits

0x8603,	// (0x00015bec) input_find_pane_t1

0x8618,	// (0x00015c01) input_find_pane_t2_ParamLimits

0x8618,	// (0x00015c01) input_find_pane_t2

0x0001,

0xf66d,	// (0x0001cc56) input_find_pane_t_ParamLimits

0xf66d,	// (0x0001cc56) input_find_pane_t

0x3cd2,	// (0x000112bb) input_focus_pane_cp5_ParamLimits

0x3cd2,	// (0x000112bb) input_focus_pane_cp5

0x3ce5,	// (0x000112ce) bg_popup_window_pane_cp2_ParamLimits

0x3ce5,	// (0x000112ce) bg_popup_window_pane_cp2

0x3cf2,	// (0x000112db) listscroll_menu_pane_ParamLimits

0x3cf2,	// (0x000112db) listscroll_menu_pane

0x8639,	// (0x00015c22) popup_submenu_window_ParamLimits

0x8639,	// (0x00015c22) popup_submenu_window

0x3cfe,	// (0x000112e7) find_popup_pane_g1

0x8661,	// (0x00015c4a) input_popup_find_pane_cp

0x3d06,	// (0x000112ef) input_focus_pane_cp4_ParamLimits

0x3d06,	// (0x000112ef) input_focus_pane_cp4

0x3d14,	// (0x000112fd) input_popup_find_pane_t1_ParamLimits

0x3d14,	// (0x000112fd) input_popup_find_pane_t1

0x371d,	// (0x00010d06) bg_popup_sub_pane_cp

0x3d42,	// (0x0001132b) listscroll_popup_sub_pane

0x3d4a,	// (0x00011333) list_submenu_pane_ParamLimits

0x3d4a,	// (0x00011333) list_submenu_pane

0x3d5b,	// (0x00011344) scroll_pane_cp4

0x8679,	// (0x00015c62) list_single_popup_submenu_pane_ParamLimits

0x8679,	// (0x00015c62) list_single_popup_submenu_pane

0x3d6b,	// (0x00011354) list_single_popup_submenu_pane_g1

0x868d,	// (0x00015c76) list_single_popup_submenu_pane_t1_ParamLimits

0x868d,	// (0x00015c76) list_single_popup_submenu_pane_t1

0x3799,	// (0x00010d82) bg_active_tab_pane_cp1_ParamLimits

0x3799,	// (0x00010d82) bg_active_tab_pane_cp1

0x3d63,	// (0x0001134c) tabs_2_active_pane_g1

0x86a2,	// (0x00015c8b) tabs_2_active_pane_t1

0x3799,	// (0x00010d82) bg_passive_tab_pane_cp1_ParamLimits

0x3799,	// (0x00010d82) bg_passive_tab_pane_cp1

0x3d63,	// (0x0001134c) tabs_2_passive_pane_g1

0x86a2,	// (0x00015c8b) tabs_2_passive_pane_t1

0x86b4,	// (0x00015c9d) bg_active_tab_pane_cp4

0x86c2,	// (0x00015cab) tabs_2_long_active_pane_t1

0x86d5,	// (0x00015cbe) bg_passive_tab_pane_cp4

0x65d7,	// (0x00013bc0) list_single_midp_graphic_pane_g4_ParamLimits

0x86b4,	// (0x00015c9d) bg_active_tab_pane_cp5

0x86e1,	// (0x00015cca) tabs_3_long_active_pane_t1

0x86d5,	// (0x00015cbe) bg_passive_tab_pane_cp5

0x65d7,	// (0x00013bc0) list_single_midp_graphic_pane_g4

0x3799,	// (0x00010d82) bg_popup_window_pane_cp13_ParamLimits

0x3799,	// (0x00010d82) bg_popup_window_pane_cp13

0x3d8b,	// (0x00011374) listscroll_popup_fast_pane_ParamLimits

0x3d8b,	// (0x00011374) listscroll_popup_fast_pane

0x3d97,	// (0x00011380) grid_popup_fast_pane_ParamLimits

0x3d97,	// (0x00011380) grid_popup_fast_pane

0x3da9,	// (0x00011392) scroll_pane_cp9_ParamLimits

0x3da9,	// (0x00011392) scroll_pane_cp9

0xc6f7,	// (0x00019ce0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6f7,	// (0x00019ce0) list_single_graphic_hl_pane_t1_cp2

0x3dbc,	// (0x000113a5) input_focus_pane_cp20_ParamLimits

0x3dbc,	// (0x000113a5) input_focus_pane_cp20

0x3dca,	// (0x000113b3) query_popup_data_pane_t1_ParamLimits

0x3dca,	// (0x000113b3) query_popup_data_pane_t1

0x3ddd,	// (0x000113c6) query_popup_data_pane_t2_ParamLimits

0x3ddd,	// (0x000113c6) query_popup_data_pane_t2

0x3e23,	// (0x0001140c) query_popup_data_pane_t3_ParamLimits

0x3e23,	// (0x0001140c) query_popup_data_pane_t3

0x3e64,	// (0x0001144d) query_popup_data_pane_t4_ParamLimits

0x3e64,	// (0x0001144d) query_popup_data_pane_t4

0x3ea0,	// (0x00011489) query_popup_data_pane_t5_ParamLimits

0x3ea0,	// (0x00011489) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x0001cc5b) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x0001cc5b) query_popup_data_pane_t

0x3c81,	// (0x0001126a) bg_set_opt_pane_g1

0x3c89,	// (0x00011272) bg_set_opt_pane_g2

0x3c91,	// (0x0001127a) bg_set_opt_pane_g3

0x3c99,	// (0x00011282) bg_set_opt_pane_g4

0x3ca1,	// (0x0001128a) bg_set_opt_pane_g5

0x3ca9,	// (0x00011292) bg_set_opt_pane_g6

0x3cb1,	// (0x0001129a) bg_set_opt_pane_g7

0x3cb9,	// (0x000112a2) bg_set_opt_pane_g8

0x3cc1,	// (0x000112aa) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x0001cc66) bg_set_opt_pane_g

0x5be7,	// (0x000131d0) control_top_pane_stacon_ParamLimits

0x5be7,	// (0x000131d0) control_top_pane_stacon

0x5c3a,	// (0x00013223) signal_pane_stacon_ParamLimits

0x5c3a,	// (0x00013223) signal_pane_stacon

0x44f5,	// (0x00011ade) stacon_top_pane_g1_ParamLimits

0x44f5,	// (0x00011ade) stacon_top_pane_g1

0x5c5f,	// (0x00013248) title_pane_stacon_ParamLimits

0x5c5f,	// (0x00013248) title_pane_stacon

0x5c89,	// (0x00013272) uni_indicator_pane_stacon_ParamLimits

0x5c89,	// (0x00013272) uni_indicator_pane_stacon

0x5c9e,	// (0x00013287) battery_pane_stacon_ParamLimits

0x5c9e,	// (0x00013287) battery_pane_stacon

0x5ce2,	// (0x000132cb) control_bottom_pane_stacon_ParamLimits

0x5ce2,	// (0x000132cb) control_bottom_pane_stacon

0x5d05,	// (0x000132ee) navi_pane_stacon_ParamLimits

0x5d05,	// (0x000132ee) navi_pane_stacon

0x45e0,	// (0x00011bc9) stacon_bottom_pane_g1_ParamLimits

0x45e0,	// (0x00011bc9) stacon_bottom_pane_g1

0x5953,	// (0x00012f3c) aid_levels_signal_lsc_ParamLimits

0x5953,	// (0x00012f3c) aid_levels_signal_lsc

0x5969,	// (0x00012f52) signal_pane_stacon_g1_ParamLimits

0x5969,	// (0x00012f52) signal_pane_stacon_g1

0x597d,	// (0x00012f66) signal_pane_stacon_g2_ParamLimits

0x597d,	// (0x00012f66) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x0001cc79) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x0001cc79) signal_pane_stacon_g

0x59b2,	// (0x00012f9b) title_pane_stacon_t1_ParamLimits

0x59b2,	// (0x00012f9b) title_pane_stacon_t1

0x3f7c,	// (0x00011565) uni_indicator_pane_stacon_g1

0x3f86,	// (0x0001156f) uni_indicator_pane_stacon_g2

0x3f68,	// (0x00011551) uni_indicator_pane_stacon_g3

0x3f72,	// (0x0001155b) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x0001cc85) uni_indicator_pane_stacon_g

0x59d7,	// (0x00012fc0) control_top_pane_stacon_g1

0x59df,	// (0x00012fc8) control_top_pane_stacon_t1_ParamLimits

0x59df,	// (0x00012fc8) control_top_pane_stacon_t1

0x5a16,	// (0x00012fff) aid_levels_battery_lsc_ParamLimits

0x5a16,	// (0x00012fff) aid_levels_battery_lsc

0x5a2d,	// (0x00013016) battery_pane_stacon_g1_ParamLimits

0x5a2d,	// (0x00013016) battery_pane_stacon_g1

0x5a40,	// (0x00013029) battery_pane_stacon_g2_ParamLimits

0x5a40,	// (0x00013029) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x0001cc8e) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x0001cc8e) battery_pane_stacon_g

0x5a7e,	// (0x00013067) navi_icon_pane_stacon

0x5a92,	// (0x0001307b) navi_navi_pane_stacon

0x5a7e,	// (0x00013067) navi_text_pane_stacon

0x59d7,	// (0x00012fc0) control_bottom_pane_stacon_g1

0x5aa6,	// (0x0001308f) control_bottom_pane_stacon_t1_ParamLimits

0x5aa6,	// (0x0001308f) control_bottom_pane_stacon_t1

0x870d,	// (0x00015cf6) grid_app_pane_ParamLimits

0x870d,	// (0x00015cf6) grid_app_pane

0x872f,	// (0x00015d18) scroll_pane_cp15_ParamLimits

0x872f,	// (0x00015d18) scroll_pane_cp15

0x8742,	// (0x00015d2b) cell_app_pane_ParamLimits

0x8742,	// (0x00015d2b) cell_app_pane

0x876a,	// (0x00015d53) cell_app_pane_g1_ParamLimits

0x876a,	// (0x00015d53) cell_app_pane_g1

0x40b0,	// (0x00011699) cell_app_pane_g2_ParamLimits

0x40b0,	// (0x00011699) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x0001cc93) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x0001cc93) cell_app_pane_g

0x878e,	// (0x00015d77) cell_app_pane_t1_ParamLimits

0x878e,	// (0x00015d77) cell_app_pane_t1

0x40bc,	// (0x000116a5) grid_highlight_pane_ParamLimits

0x40bc,	// (0x000116a5) grid_highlight_pane

0x3c81,	// (0x0001126a) cell_highlight_pane_g1

0x3c89,	// (0x00011272) cell_highlight_pane_g2

0x3c91,	// (0x0001127a) cell_highlight_pane_g3

0x3c99,	// (0x00011282) cell_highlight_pane_g4

0x3ca1,	// (0x0001128a) cell_highlight_pane_g5

0x3ca9,	// (0x00011292) cell_highlight_pane_g6

0x3cb1,	// (0x0001129a) cell_highlight_pane_g7

0x3cb9,	// (0x000112a2) cell_highlight_pane_g8

0x3cc1,	// (0x000112aa) cell_highlight_pane_g9

0x35a4,	// (0x00010b8d) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x0001cc41) cell_highlight_pane_g

0x40d7,	// (0x000116c0) bg_scroll_pane

0x5af0,	// (0x000130d9) scroll_handle_pane

0x4133,	// (0x0001171c) scroll_bg_pane_g1

0x4148,	// (0x00011731) scroll_bg_pane_g2

0x4160,	// (0x00011749) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x0001cc98) scroll_bg_pane_g

0x87a5,	// (0x00015d8e) scroll_handle_focus_pane_ParamLimits

0x87a5,	// (0x00015d8e) scroll_handle_focus_pane

0x4133,	// (0x0001171c) scroll_handle_pane_g1

0x4175,	// (0x0001175e) scroll_handle_pane_g2

0x4160,	// (0x00011749) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x0001cc9f) scroll_handle_pane_g

0x3d06,	// (0x000112ef) bg_popup_sub_pane_cp21_ParamLimits

0x3d06,	// (0x000112ef) bg_popup_sub_pane_cp21

0x87b2,	// (0x00015d9b) popup_fep_japan_predictive_window_t1_ParamLimits

0x87b2,	// (0x00015d9b) popup_fep_japan_predictive_window_t1

0x87cc,	// (0x00015db5) popup_fep_japan_predictive_window_t2_ParamLimits

0x87cc,	// (0x00015db5) popup_fep_japan_predictive_window_t2

0x87ff,	// (0x00015de8) popup_fep_japan_predictive_window_t3_ParamLimits

0x87ff,	// (0x00015de8) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x0001cca6) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x0001cca6) popup_fep_japan_predictive_window_t

0x371d,	// (0x00010d06) bg_popup_sub_pane_cp23

0x4335,	// (0x0001191e) listscroll_japin_cand_pane

0x4189,	// (0x00011772) popup_fep_japan_candidate_window_t1

0x4197,	// (0x00011780) candidate_pane_ParamLimits

0x4197,	// (0x00011780) candidate_pane

0x8836,	// (0x00015e1f) scroll_pane_cp30

0x41a9,	// (0x00011792) list_single_popup_jap_candidate_pane_ParamLimits

0x41a9,	// (0x00011792) list_single_popup_jap_candidate_pane

0x371d,	// (0x00010d06) list_highlight_pane_cp30

0x41be,	// (0x000117a7) list_single_popup_jap_candidate_pane_t1

0x41cd,	// (0x000117b6) level_1_signal

0x41da,	// (0x000117c3) level_2_signal

0x41e7,	// (0x000117d0) level_3_signal

0x41f4,	// (0x000117dd) level_4_signal

0x4201,	// (0x000117ea) level_5_signal

0x420e,	// (0x000117f7) level_6_signal

0x421b,	// (0x00011804) level_7_signal

0x41cd,	// (0x000117b6) level_1_battery

0x41da,	// (0x000117c3) level_2_battery

0x41e7,	// (0x000117d0) level_3_battery

0x41f4,	// (0x000117dd) level_4_battery

0x4201,	// (0x000117ea) level_5_battery

0x420e,	// (0x000117f7) level_6_battery

0x421b,	// (0x00011804) level_7_battery

0x425f,	// (0x00011848) list_menu_pane_ParamLimits

0x425f,	// (0x00011848) list_menu_pane

0x4275,	// (0x0001185e) scroll_pane_cp25_ParamLimits

0x4275,	// (0x0001185e) scroll_pane_cp25

0x428e,	// (0x00011877) list_double2_graphic_pane_cp2_ParamLimits

0x428e,	// (0x00011877) list_double2_graphic_pane_cp2

0x428e,	// (0x00011877) list_double2_large_graphic_pane_cp2_ParamLimits

0x428e,	// (0x00011877) list_double2_large_graphic_pane_cp2

0x428e,	// (0x00011877) list_double2_pane_cp2_ParamLimits

0x428e,	// (0x00011877) list_double2_pane_cp2

0x428e,	// (0x00011877) list_double_graphic_pane_cp2_ParamLimits

0x428e,	// (0x00011877) list_double_graphic_pane_cp2

0x428e,	// (0x00011877) list_double_large_graphic_pane_cp2_ParamLimits

0x428e,	// (0x00011877) list_double_large_graphic_pane_cp2

0x428e,	// (0x00011877) list_double_number_pane_cp2_ParamLimits

0x428e,	// (0x00011877) list_double_number_pane_cp2

0x428e,	// (0x00011877) list_double_pane_cp2_ParamLimits

0x428e,	// (0x00011877) list_double_pane_cp2

0x8852,	// (0x00015e3b) list_single_2graphic_pane_cp2_ParamLimits

0x8852,	// (0x00015e3b) list_single_2graphic_pane_cp2

0x8852,	// (0x00015e3b) list_single_graphic_heading_pane_cp2_ParamLimits

0x8852,	// (0x00015e3b) list_single_graphic_heading_pane_cp2

0x8852,	// (0x00015e3b) list_single_graphic_pane_cp2_ParamLimits

0x8852,	// (0x00015e3b) list_single_graphic_pane_cp2

0x8852,	// (0x00015e3b) list_single_heading_pane_cp2_ParamLimits

0x8852,	// (0x00015e3b) list_single_heading_pane_cp2

0x429e,	// (0x00011887) list_single_large_graphic_pane_cp2_ParamLimits

0x429e,	// (0x00011887) list_single_large_graphic_pane_cp2

0x8852,	// (0x00015e3b) list_single_number_heading_pane_cp2_ParamLimits

0x8852,	// (0x00015e3b) list_single_number_heading_pane_cp2

0x8852,	// (0x00015e3b) list_single_number_pane_cp2_ParamLimits

0x8852,	// (0x00015e3b) list_single_number_pane_cp2

0x8868,	// (0x00015e51) list_single_pane_cp2_ParamLimits

0x8868,	// (0x00015e51) list_single_pane_cp2

0x4313,	// (0x000118fc) bg_popup_sub_pane_cp22

0x5b9f,	// (0x00013188) popup_side_volume_key_window_g1

0x5bc3,	// (0x000131ac) popup_side_volume_key_window_t1

0x5bdf,	// (0x000131c8) volume_small_pane_cp1

0x378b,	// (0x00010d74) bg_popup_sub_pane_cp24_ParamLimits

0x378b,	// (0x00010d74) bg_popup_sub_pane_cp24

0x4357,	// (0x00011940) fep_china_uni_candidate_pane_ParamLimits

0x4357,	// (0x00011940) fep_china_uni_candidate_pane

0x436b,	// (0x00011954) fep_china_uni_entry_pane

0x437b,	// (0x00011964) popup_fep_china_uni_window_g1

0x88d9,	// (0x00015ec2) fep_china_uni_entry_pane_g1

0x88e1,	// (0x00015eca) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x0001ccd7) fep_china_uni_entry_pane_g

0x4397,	// (0x00011980) fep_entry_item_pane

0x43a1,	// (0x0001198a) fep_candidate_item_pane

0x88e9,	// (0x00015ed2) fep_china_uni_candidate_pane_g1

0x43a9,	// (0x00011992) fep_china_uni_candidate_pane_g2

0x43b1,	// (0x0001199a) fep_china_uni_candidate_pane_g3

0x88f1,	// (0x00015eda) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x0001ccdc) fep_china_uni_candidate_pane_g

0x35a4,	// (0x00010b8d) fep_entry_item_pane_g1

0x43b9,	// (0x000119a2) fep_entry_item_pane_t1_ParamLimits

0x43b9,	// (0x000119a2) fep_entry_item_pane_t1

0x43cf,	// (0x000119b8) fep_candidate_item_pane_t1_ParamLimits

0x43cf,	// (0x000119b8) fep_candidate_item_pane_t1

0x43e4,	// (0x000119cd) fep_candidate_item_pane_t2_ParamLimits

0x43e4,	// (0x000119cd) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x0001cce5) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x0001cce5) fep_candidate_item_pane_t

0x3799,	// (0x00010d82) list_highlight_pane_cp31_ParamLimits

0x3799,	// (0x00010d82) list_highlight_pane_cp31

0x43f6,	// (0x000119df) level_1_signal_lsc

0x43ff,	// (0x000119e8) level_2_signal_lsc

0x4408,	// (0x000119f1) level_3_signal_lsc

0x4411,	// (0x000119fa) level_4_signal_lsc

0x441a,	// (0x00011a03) level_5_signal_lsc

0x4423,	// (0x00011a0c) level_6_signal_lsc

0x442c,	// (0x00011a15) level_7_signal_lsc

0x442c,	// (0x00011a15) level_1_battery_lsc

0x4435,	// (0x00011a1e) level_2_battery_lsc

0x443e,	// (0x00011a27) level_3_battery_lsc

0x4447,	// (0x00011a30) level_4_battery_lsc

0x4450,	// (0x00011a39) level_5_battery_lsc

0x4459,	// (0x00011a42) level_6_battery_lsc

0x43f6,	// (0x000119df) level_7_battery_lsc

0x4462,	// (0x00011a4b) scroll_handle_focus_pane_g1

0x446b,	// (0x00011a54) scroll_handle_focus_pane_g2

0x4474,	// (0x00011a5d) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x0001ccea) scroll_handle_focus_pane_g

0x88f9,	// (0x00015ee2) list_single_2graphic_pane_g1_ParamLimits

0x88f9,	// (0x00015ee2) list_single_2graphic_pane_g1

0x8157,	// (0x00015740) list_single_2graphic_pane_g2_ParamLimits

0x8157,	// (0x00015740) list_single_2graphic_pane_g2

0x80dd,	// (0x000156c6) list_single_2graphic_pane_g3_ParamLimits

0x80dd,	// (0x000156c6) list_single_2graphic_pane_g3

0x8905,	// (0x00015eee) list_single_2graphic_pane_g4_ParamLimits

0x8905,	// (0x00015eee) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x0001ccf1) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x0001ccf1) list_single_2graphic_pane_g

0x8916,	// (0x00015eff) list_single_2graphic_pane_t1_ParamLimits

0x8916,	// (0x00015eff) list_single_2graphic_pane_t1

0x8944,	// (0x00015f2d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8944,	// (0x00015f2d) list_double2_graphic_large_graphic_pane_g1

0x81c2,	// (0x000157ab) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x81c2,	// (0x000157ab) list_double2_graphic_large_graphic_pane_g2

0x81d3,	// (0x000157bc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x81d3,	// (0x000157bc) list_double2_graphic_large_graphic_pane_g3

0x8954,	// (0x00015f3d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8954,	// (0x00015f3d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x0001ccfa) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x0001ccfa) list_double2_graphic_large_graphic_pane_g

0x8960,	// (0x00015f49) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8960,	// (0x00015f49) list_double2_graphic_large_graphic_pane_t1

0x8976,	// (0x00015f5f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8976,	// (0x00015f5f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x0001cd03) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x0001cd03) list_double2_graphic_large_graphic_pane_t

0x8a19,	// (0x00016002) popup_fast_swap_window_ParamLimits

0x8a19,	// (0x00016002) popup_fast_swap_window

0x8a35,	// (0x0001601e) popup_side_volume_key_window

0x466b,	// (0x00011c54) stacon_top_pane

0x4675,	// (0x00011c5e) status_pane_ParamLimits

0x4675,	// (0x00011c5e) status_pane

0x8a4f,	// (0x00016038) status_small_pane

0x371d,	// (0x00010d06) control_pane

0x371d,	// (0x00010d06) stacon_bottom_pane

0x3b7b,	// (0x00011164) scroll_pane_cp121

0x3b72,	// (0x0001115b) set_content_pane

0x8988,	// (0x00015f71) bg_active_tab_pane_g1_cp1

0x8991,	// (0x00015f7a) bg_active_tab_pane_g2_cp1

0x899a,	// (0x00015f83) bg_active_tab_pane_g3_cp1

0x8988,	// (0x00015f71) bg_passive_tab_pane_g1_cp1

0x8991,	// (0x00015f7a) bg_passive_tab_pane_g2_cp1

0x899a,	// (0x00015f83) bg_passive_tab_pane_g3_cp1

0x89a3,	// (0x00015f8c) bg_active_tab_pane_g1_cp2

0x8991,	// (0x00015f7a) bg_active_tab_pane_g2_cp2

0x89ac,	// (0x00015f95) bg_active_tab_pane_g3_cp2

0x89a3,	// (0x00015f8c) bg_passive_tab_pane_g1_cp2

0x8991,	// (0x00015f7a) bg_passive_tab_pane_g2_cp2

0x89ac,	// (0x00015f95) bg_passive_tab_pane_g3_cp2

0x89b5,	// (0x00015f9e) bg_active_tab_pane_g1_cp3

0x8991,	// (0x00015f7a) bg_active_tab_pane_g2_cp3

0x89be,	// (0x00015fa7) bg_active_tab_pane_g3_cp3

0x89b5,	// (0x00015f9e) bg_passive_tab_pane_g1_cp3

0x8991,	// (0x00015f7a) bg_passive_tab_pane_g2_cp3

0x89be,	// (0x00015fa7) bg_passive_tab_pane_g3_cp3

0x89c7,	// (0x00015fb0) bg_active_tab_pane_g1_cp4

0x8991,	// (0x00015f7a) bg_active_tab_pane_g2_cp4

0x89d2,	// (0x00015fbb) bg_active_tab_pane_g3_cp4

0x89c7,	// (0x00015fb0) bg_passive_tab_pane_g1_cp4

0x8991,	// (0x00015f7a) bg_passive_tab_pane_g2_cp4

0x89d2,	// (0x00015fbb) bg_passive_tab_pane_g3_cp4

0x89dd,	// (0x00015fc6) bg_active_tab_pane_g1_cp5

0x8991,	// (0x00015f7a) bg_active_tab_pane_g2_cp5

0x89e6,	// (0x00015fcf) bg_active_tab_pane_g3_cp5

0x89dd,	// (0x00015fc6) bg_passive_tab_pane_g1_cp5

0x8991,	// (0x00015f7a) bg_passive_tab_pane_g2_cp5

0x89e6,	// (0x00015fcf) bg_passive_tab_pane_g3_cp5

0x89ef,	// (0x00015fd8) list_set_graphic_pane_ParamLimits

0x89ef,	// (0x00015fd8) list_set_graphic_pane

0x371d,	// (0x00010d06) bg_set_opt_pane_cp4

0x45fc,	// (0x00011be5) list_set_graphic_pane_g1_ParamLimits

0x45fc,	// (0x00011be5) list_set_graphic_pane_g1

0x4608,	// (0x00011bf1) list_set_graphic_pane_g2_ParamLimits

0x4608,	// (0x00011bf1) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x0001cd08) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x0001cd08) list_set_graphic_pane_g

0x0009,

0xfab7,	// (0x0001d0a0) volume_small_pane_cp_g

0x8a0d,	// (0x00015ff6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a0d,	// (0x00015ff6) list_double2_large_graphic_pane_g1_cp2

0x462a,	// (0x00011c13) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x462a,	// (0x00011c13) list_double2_large_graphic_pane_g2_cp2

0x463b,	// (0x00011c24) list_double2_large_graphic_pane_g3_cp2

0x4643,	// (0x00011c2c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4643,	// (0x00011c2c) list_double2_large_graphic_pane_t1_cp2

0x4659,	// (0x00011c42) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4659,	// (0x00011c42) list_double2_large_graphic_pane_t2_cp2

0xa32f,	// (0x00017918) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa32f,	// (0x00017918) list_double_large_graphic_pane_g1_cp2

0xa340,	// (0x00017929) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa340,	// (0x00017929) list_double_large_graphic_pane_g2_cp2

0x4791,	// (0x00011d7a) list_double_large_graphic_pane_g3_cp2

0xa351,	// (0x0001793a) list_double_large_graphic_pane_g4_cp

0xa359,	// (0x00017942) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa359,	// (0x00017942) list_double_large_graphic_pane_t1_cp2

0xa370,	// (0x00017959) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa370,	// (0x00017959) list_double_large_graphic_pane_t2_cp2

0x4683,	// (0x00011c6c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4683,	// (0x00011c6c) list_double2_graphic_pane_g1_cp2

0x4691,	// (0x00011c7a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4691,	// (0x00011c7a) list_double2_graphic_pane_g2_cp2

0x46a2,	// (0x00011c8b) list_double2_graphic_pane_g3_cp2

0x46ac,	// (0x00011c95) list_double2_graphic_pane_t1_cp2_ParamLimits

0x46ac,	// (0x00011c95) list_double2_graphic_pane_t1_cp2

0x46c2,	// (0x00011cab) list_double2_graphic_pane_t2_cp2_ParamLimits

0x46c2,	// (0x00011cab) list_double2_graphic_pane_t2_cp2

0x433d,	// (0x00011926) list_single_number_heading_pane_g1_cp2_ParamLimits

0x433d,	// (0x00011926) list_single_number_heading_pane_g1_cp2

0x46d4,	// (0x00011cbd) list_single_number_heading_pane_g2_cp2

0x46dc,	// (0x00011cc5) list_single_number_heading_pane_t1_cp2_ParamLimits

0x46dc,	// (0x00011cc5) list_single_number_heading_pane_t1_cp2

0x46f2,	// (0x00011cdb) list_single_number_heading_pane_t2_cp2_ParamLimits

0x46f2,	// (0x00011cdb) list_single_number_heading_pane_t2_cp2

0x4704,	// (0x00011ced) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4704,	// (0x00011ced) list_single_number_heading_pane_t3_cp2

0x433d,	// (0x00011926) list_single_heading_pane_g1_cp2_ParamLimits

0x433d,	// (0x00011926) list_single_heading_pane_g1_cp2

0x46d4,	// (0x00011cbd) list_single_heading_pane_g2_cp2

0x46dc,	// (0x00011cc5) list_single_heading_pane_t1_cp2_ParamLimits

0x46dc,	// (0x00011cc5) list_single_heading_pane_t1_cp2

0xa139,	// (0x00017722) list_single_heading_pane_t2_cp2_ParamLimits

0xa139,	// (0x00017722) list_single_heading_pane_t2_cp2

0xa081,	// (0x0001766a) list_double_graphic_pane_g1_cp2_ParamLimits

0xa081,	// (0x0001766a) list_double_graphic_pane_g1_cp2

0xa08d,	// (0x00017676) list_double_graphic_pane_g2_cp2_ParamLimits

0xa08d,	// (0x00017676) list_double_graphic_pane_g2_cp2

0xa09c,	// (0x00017685) list_double_graphic_pane_g3_cp2

0xa0a4,	// (0x0001768d) list_double_graphic_pane_t1_cp2_ParamLimits

0xa0a4,	// (0x0001768d) list_double_graphic_pane_t1_cp2

0xa0ba,	// (0x000176a3) list_double_graphic_pane_t2_cp2_ParamLimits

0xa0ba,	// (0x000176a3) list_double_graphic_pane_t2_cp2

0x4785,	// (0x00011d6e) list_double_number_pane_g1_cp2_ParamLimits

0x4785,	// (0x00011d6e) list_double_number_pane_g1_cp2

0x4791,	// (0x00011d7a) list_double_number_pane_g2_cp2

0xa045,	// (0x0001762e) list_double_number_pane_t1_cp2_ParamLimits

0xa045,	// (0x0001762e) list_double_number_pane_t1_cp2

0xa059,	// (0x00017642) list_double_number_pane_t2_cp2_ParamLimits

0xa059,	// (0x00017642) list_double_number_pane_t2_cp2

0xa06f,	// (0x00017658) list_double_number_pane_t3_cp2_ParamLimits

0xa06f,	// (0x00017658) list_double_number_pane_t3_cp2

0x9f2e,	// (0x00017517) list_single_graphic_pane_g1_cp2_ParamLimits

0x9f2e,	// (0x00017517) list_single_graphic_pane_g1_cp2

0x4767,	// (0x00011d50) list_single_graphic_pane_g2_cp2_ParamLimits

0x4767,	// (0x00011d50) list_single_graphic_pane_g2_cp2

0x47ea,	// (0x00011dd3) list_single_graphic_pane_g3_cp2

0x9f04,	// (0x000174ed) list_single_graphic_pane_t1_cp2_ParamLimits

0x9f04,	// (0x000174ed) list_single_graphic_pane_t1_cp2

0x4767,	// (0x00011d50) list_single_number_pane_g1_cp2_ParamLimits

0x4767,	// (0x00011d50) list_single_number_pane_g1_cp2

0x47ea,	// (0x00011dd3) list_single_number_pane_g2_cp2

0x9f04,	// (0x000174ed) list_single_number_pane_t1_cp2_ParamLimits

0x9f04,	// (0x000174ed) list_single_number_pane_t1_cp2

0x9f1a,	// (0x00017503) list_single_number_pane_t2_cp2_ParamLimits

0x9f1a,	// (0x00017503) list_single_number_pane_t2_cp2

0x462a,	// (0x00011c13) list_double2_pane_g1_cp2_ParamLimits

0x462a,	// (0x00011c13) list_double2_pane_g1_cp2

0x463b,	// (0x00011c24) list_double2_pane_g2_cp2

0x4751,	// (0x00011d3a) list_double2_pane_t1_cp2_ParamLimits

0x4751,	// (0x00011d3a) list_double2_pane_t1_cp2

0x4773,	// (0x00011d5c) list_double2_pane_t2_cp2_ParamLimits

0x4773,	// (0x00011d5c) list_double2_pane_t2_cp2

0x4785,	// (0x00011d6e) list_double_pane_g1_cp2_ParamLimits

0x4785,	// (0x00011d6e) list_double_pane_g1_cp2

0x4791,	// (0x00011d7a) list_double_pane_g2_cp2

0x4799,	// (0x00011d82) list_double_pane_t1_cp2_ParamLimits

0x4799,	// (0x00011d82) list_double_pane_t1_cp2

0x47af,	// (0x00011d98) list_double_pane_t2_cp2_ParamLimits

0x47af,	// (0x00011d98) list_double_pane_t2_cp2

0x8a5a,	// (0x00016043) list_single_pane_cp2_g3

0x4767,	// (0x00011d50) list_single_pane_g1_cp2_ParamLimits

0x4767,	// (0x00011d50) list_single_pane_g1_cp2

0x47ea,	// (0x00011dd3) list_single_pane_g2_cp2

0x47f2,	// (0x00011ddb) list_single_pane_t1_cp2_ParamLimits

0x47f2,	// (0x00011ddb) list_single_pane_t1_cp2

0x8a62,	// (0x0001604b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a62,	// (0x0001604b) list_single_large_graphic_pane_g1_cp2

0x480a,	// (0x00011df3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x480a,	// (0x00011df3) list_single_large_graphic_pane_g2_cp2

0x4816,	// (0x00011dff) list_single_large_graphic_pane_g3_cp2

0x8a6e,	// (0x00016057) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a6e,	// (0x00016057) list_single_large_graphic_pane_g4_cp1

0x481e,	// (0x00011e07) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x481e,	// (0x00011e07) list_single_large_graphic_pane_t1_cp2

0x9ed0,	// (0x000174b9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9ed0,	// (0x000174b9) list_single_graphic_heading_pane_g1_cp2

0x9e9d,	// (0x00017486) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e9d,	// (0x00017486) list_single_graphic_heading_pane_g4_cp2

0x47ea,	// (0x00011dd3) list_single_graphic_heading_pane_g5_cp2

0x9edc,	// (0x000174c5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9edc,	// (0x000174c5) list_single_graphic_heading_pane_t1_cp2

0x9ef2,	// (0x000174db) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9ef2,	// (0x000174db) list_single_graphic_heading_pane_t2_cp2

0x9e91,	// (0x0001747a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e91,	// (0x0001747a) list_single_2graphic_pane_g1_cp2

0x9e9d,	// (0x00017486) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e9d,	// (0x00017486) list_single_2graphic_pane_g2_cp2

0x47ea,	// (0x00011dd3) list_single_2graphic_pane_g3_cp2

0x9eae,	// (0x00017497) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9eae,	// (0x00017497) list_single_2graphic_pane_g4_cp2

0x9eba,	// (0x000174a3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9eba,	// (0x000174a3) list_single_2graphic_pane_t1_cp2

0x35a4,	// (0x00010b8d) list_highlight_pane_g10_cp1

0x9a79,	// (0x00017062) list_highlight_pane_g1_cp1

0x9a81,	// (0x0001706a) list_highlight_pane_g2_cp1

0x9a89,	// (0x00017072) list_highlight_pane_g3_cp1

0x9a91,	// (0x0001707a) list_highlight_pane_g4_cp1

0x9a99,	// (0x00017082) list_highlight_pane_g5_cp1

0x9aa1,	// (0x0001708a) list_highlight_pane_g6_cp1

0x9aa9,	// (0x00017092) list_highlight_pane_g7_cp1

0x9ab1,	// (0x0001709a) list_highlight_pane_g8_cp1

0x9ab9,	// (0x000170a2) list_highlight_pane_g9_cp1

0x99a1,	// (0x00016f8a) form_field_slider_pane_t3

0x99af,	// (0x00016f98) form_field_slider_pane_t4

0x99bd,	// (0x00016fa6) slider_form_pane_ParamLimits

0x99bd,	// (0x00016fa6) slider_form_pane

0x371d,	// (0x00010d06) control_abbreviations

0x371d,	// (0x00010d06) control_conventions

0x371d,	// (0x00010d06) control_definitions

0x371d,	// (0x00010d06) format_table_attribute

0xa183,	// (0x0001776c) bg_popup_preview_window_pane_g9

0x371d,	// (0x00010d06) format_table_data2

0x371d,	// (0x00010d06) format_table_data3

0x371d,	// (0x00010d06) format_table_data_example

0x0008,

0x371d,	// (0x00010d06) intro_purpose

0xf8bb,	// (0x0001cea4) bg_popup_preview_window_pane_g

0x371d,	// (0x00010d06) texts_category

0x371d,	// (0x00010d06) texts_graphics

0x4834,	// (0x00011e1d) text_digital

0x4843,	// (0x00011e2c) text_primary

0x4852,	// (0x00011e3b) text_primary_small

0x4861,	// (0x00011e4a) text_secondary

0x4870,	// (0x00011e59) text_title

0xa9a6,	// (0x00017f8f) bg_passive_tab_pane_g1_cp3_srt

0x8991,	// (0x00015f7a) bg_passive_tab_pane_g2_cp3_srt

0xa9af,	// (0x00017f98) bg_passive_tab_pane_g3_cp3_srt

0x3799,	// (0x00010d82) bg_active_tab_pane_cp3_srt_ParamLimits

0x3799,	// (0x00010d82) bg_active_tab_pane_cp3_srt

0xa9b8,	// (0x00017fa1) tabs_4_active_pane_srt_g1

0xa9c0,	// (0x00017fa9) tabs_4_active_pane_srt_t1_ParamLimits

0xa9c0,	// (0x00017fa9) tabs_4_active_pane_srt_t1

0xa9a6,	// (0x00017f8f) bg_active_tab_pane_g1_cp3_copy1

0x8991,	// (0x00015f7a) bg_active_tab_pane_g2_cp3_copy1

0xa9af,	// (0x00017f98) bg_active_tab_pane_g3_cp3_copy1

0x3799,	// (0x00010d82) tabs_2_long_active_pane_srt_ParamLimits

0x3799,	// (0x00010d82) tabs_2_long_active_pane_srt

0x3799,	// (0x00010d82) tabs_2_long_passive_pane_srt_ParamLimits

0x3799,	// (0x00010d82) tabs_2_long_passive_pane_srt

0x86d5,	// (0x00015cbe) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86d5,	// (0x00015cbe) bg_passive_tab_pane_cp4_srt

0xa5b6,	// (0x00017b9f) bg_passive_tab_pane_g1_cp4_srt

0x8991,	// (0x00015f7a) bg_passive_tab_pane_g2_cp4_srt

0xa5bf,	// (0x00017ba8) bg_passive_tab_pane_g3_cp4_srt

0x86b4,	// (0x00015c9d) bg_active_tab_pane_cp4_srt_ParamLimits

0x86b4,	// (0x00015c9d) bg_active_tab_pane_cp4_srt

0xa5c8,	// (0x00017bb1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa5c8,	// (0x00017bb1) tabs_2_long_active_pane_srt_t1

0xa5b6,	// (0x00017b9f) bg_active_tab_pane_g1_cp4_srt

0x8991,	// (0x00015f7a) bg_active_tab_pane_g2_cp4_srt

0xa5bf,	// (0x00017ba8) bg_active_tab_pane_g3_cp4_srt

0x378b,	// (0x00010d74) tabs_3_long_active_pane_srt_ParamLimits

0x378b,	// (0x00010d74) tabs_3_long_active_pane_srt

0x378b,	// (0x00010d74) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x378b,	// (0x00010d74) tabs_3_long_passive_pane_cp_srt

0x378b,	// (0x00010d74) tabs_3_long_passive_pane_srt_ParamLimits

0x378b,	// (0x00010d74) tabs_3_long_passive_pane_srt

0x86d5,	// (0x00015cbe) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86d5,	// (0x00015cbe) bg_passive_tab_pane_cp5_srt

0x89dd,	// (0x00015fc6) bg_passive_tab_pane_g1_cp5_srt

0x8991,	// (0x00015f7a) bg_passive_tab_pane_g2_cp5_srt

0x89e6,	// (0x00015fcf) bg_passive_tab_pane_g3_cp5_srt

0x86b4,	// (0x00015c9d) bg_active_tab_pane_cp5_srt_ParamLimits

0x86b4,	// (0x00015c9d) bg_active_tab_pane_cp5_srt

0xa5a4,	// (0x00017b8d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa5a4,	// (0x00017b8d) tabs_3_long_active_pane_srt_t1

0x89dd,	// (0x00015fc6) bg_active_tab_pane_g1_cp5_srt

0x8991,	// (0x00015f7a) bg_active_tab_pane_g2_cp5_srt

0x89e6,	// (0x00015fcf) bg_active_tab_pane_g3_cp5_srt

0xa596,	// (0x00017b7f) navi_text_pane_srt_t1

0xa58e,	// (0x00017b77) navi_icon_pane_srt_g1

0x4a04,	// (0x00011fed) midp_editing_number_pane_srt

0x487f,	// (0x00011e68) midp_ticker_pane_srt

0x4a0c,	// (0x00011ff5) midp_ticker_pane_srt_g1

0x4a14,	// (0x00011ffd) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x0001cd27) midp_ticker_pane_srt_g

0x4a1c,	// (0x00012005) midp_ticker_pane_srt_t1

0xa57f,	// (0x00017b68) midp_editing_number_pane_t1_copy1

0x8a88,	// (0x00016071) listscroll_midp_pane

0x8a88,	// (0x00016071) midp_form_pane

0x8afa,	// (0x000160e3) midp_info_popup_window_ParamLimits

0x8afa,	// (0x000160e3) midp_info_popup_window

0x3d06,	// (0x000112ef) bg_popup_sub_pane_cp50_ParamLimits

0x3d06,	// (0x000112ef) bg_popup_sub_pane_cp50

0x96ad,	// (0x00016c96) listscroll_midp_info_pane_ParamLimits

0x96ad,	// (0x00016c96) listscroll_midp_info_pane

0x968d,	// (0x00016c76) listscroll_form_midp_pane_ParamLimits

0x968d,	// (0x00016c76) listscroll_form_midp_pane

0x9699,	// (0x00016c82) scroll_bar_cp050

0x966d,	// (0x00016c56) list_midp_pane

0xb741,	// (0x00018d2a) signal_pane_g2_cp

0x95a7,	// (0x00016b90) listscroll_midp_info_pane_t1_ParamLimits

0x95a7,	// (0x00016b90) listscroll_midp_info_pane_t1

0x95bf,	// (0x00016ba8) listscroll_midp_info_pane_t2_ParamLimits

0x95bf,	// (0x00016ba8) listscroll_midp_info_pane_t2

0x95fd,	// (0x00016be6) listscroll_midp_info_pane_t3_ParamLimits

0x95fd,	// (0x00016be6) listscroll_midp_info_pane_t3

0x9637,	// (0x00016c20) listscroll_midp_info_pane_t4_ParamLimits

0x9637,	// (0x00016c20) listscroll_midp_info_pane_t4

0x0003,

0xf7f6,	// (0x0001cddf) listscroll_midp_info_pane_t_ParamLimits

0xf7f6,	// (0x0001cddf) listscroll_midp_info_pane_t

0x3d5b,	// (0x00011344) scroll_pane_cp21

0x9547,	// (0x00016b30) form_midp_field_choice_group_pane

0x9550,	// (0x00016b39) form_midp_field_text_pane

0x958d,	// (0x00016b76) form_midp_field_time_pane

0x9595,	// (0x00016b7e) form_midp_gauge_slider_pane

0x959e,	// (0x00016b87) form_midp_gauge_wait_pane

0x371d,	// (0x00010d06) form_midp_image_pane

0x9515,	// (0x00016afe) list_single_midp_pane_ParamLimits

0x9515,	// (0x00016afe) list_single_midp_pane

0x94ca,	// (0x00016ab3) form_midp_field_text_pane_t1

0x9285,	// (0x0001686e) input_focus_pane_cp050

0x9504,	// (0x00016aed) list_midp_form_text_pane

0x9499,	// (0x00016a82) form_midp_field_choice_group_pane_t1

0x94a7,	// (0x00016a90) input_focus_pane_cp051

0x94bb,	// (0x00016aa4) list_midp_choice_pane

0x371d,	// (0x00010d06) status_idle_pane

0x947d,	// (0x00016a66) form_midp_field_time_pane_t1

0x35a4,	// (0x00010b8d) wait_anim_pane_g2_copy1

0x948b,	// (0x00016a74) form_midp_field_time_pane_t2

0x0001,

0x48df,	// (0x00011ec8) aid_navinavi_width_2_pane

0xf7f1,	// (0x0001cdda) form_midp_field_time_pane_t

0x371d,	// (0x00010d06) input_focus_pane_cp052

0x371d,	// (0x00010d06) bg_input_focus_pane_cp040

0x943d,	// (0x00016a26) form_midp_gauge_slider_pane_t1

0x944b,	// (0x00016a34) form_midp_gauge_slider_pane_t2

0x9459,	// (0x00016a42) form_midp_gauge_slider_pane_t3

0x9467,	// (0x00016a50) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e8,	// (0x0001cdd1) form_midp_gauge_slider_pane_t

0x9475,	// (0x00016a5e) form_midp_slider_pane

0x3799,	// (0x00010d82) bg_input_focus_pane_cp041_ParamLimits

0x3799,	// (0x00010d82) bg_input_focus_pane_cp041

0x940a,	// (0x000169f3) form_midp_gauge_wait_pane_t1_ParamLimits

0x940a,	// (0x000169f3) form_midp_gauge_wait_pane_t1

0x941c,	// (0x00016a05) form_midp_gauge_wait_pane_t2_ParamLimits

0x941c,	// (0x00016a05) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e3,	// (0x0001cdcc) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e3,	// (0x0001cdcc) form_midp_gauge_wait_pane_t

0x942e,	// (0x00016a17) form_midp_wait_pane_ParamLimits

0x942e,	// (0x00016a17) form_midp_wait_pane

0x93d4,	// (0x000169bd) form_midp_image_pane_g1

0x93dd,	// (0x000169c6) form_midp_image_pane_t1

0x93ec,	// (0x000169d5) form_midp_image_pane_t2

0x93fb,	// (0x000169e4) form_midp_image_pane_t3

0x0002,

0xf7dc,	// (0x0001cdc5) form_midp_image_pane_t

0x93bc,	// (0x000169a5) list_single_midp_pane_g1

0x93c5,	// (0x000169ae) list_single_midp_pane_t1

0x9393,	// (0x0001697c) list_midp_form_item_pane_ParamLimits

0x9393,	// (0x0001697c) list_midp_form_item_pane

0x4887,	// (0x00011e70) list_midp_form_item_pane_t1

0x4896,	// (0x00011e7f) midp_ticker_pane_g1

0x48a2,	// (0x00011e8b) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x0001cd0d) midp_ticker_pane_g

0x48ae,	// (0x00011e97) midp_ticker_pane_t1

0xa7ff,	// (0x00017de8) midp_editing_number_pane_t1

0xa7dd,	// (0x00017dc6) midp_editing_number_pane

0xa7ec,	// (0x00017dd5) midp_ticker_pane

0xa55d,	// (0x00017b46) ai_message_heading_pane

0x371d,	// (0x00010d06) bg_popup_window_pane_cp14

0xa565,	// (0x00017b4e) listscroll_ai_message_pane

0xa4e7,	// (0x00017ad0) ai_message_heading_pane_g1_ParamLimits

0xa4e7,	// (0x00017ad0) ai_message_heading_pane_g1

0xa4f3,	// (0x00017adc) ai_message_heading_pane_g2_ParamLimits

0xa4f3,	// (0x00017adc) ai_message_heading_pane_g2

0xa4ff,	// (0x00017ae8) ai_message_heading_pane_g3_ParamLimits

0xa4ff,	// (0x00017ae8) ai_message_heading_pane_g3

0xa50b,	// (0x00017af4) ai_message_heading_pane_g4_ParamLimits

0xa50b,	// (0x00017af4) ai_message_heading_pane_g4

0x0003,

0xf91d,	// (0x0001cf06) ai_message_heading_pane_g_ParamLimits

0xf91d,	// (0x0001cf06) ai_message_heading_pane_g

0xa517,	// (0x00017b00) ai_message_heading_pane_t1_ParamLimits

0xa517,	// (0x00017b00) ai_message_heading_pane_t1

0xa531,	// (0x00017b1a) ai_message_heading_pane_t2_ParamLimits

0xa531,	// (0x00017b1a) ai_message_heading_pane_t2

0x0001,

0xf926,	// (0x0001cf0f) ai_message_heading_pane_t_ParamLimits

0xf926,	// (0x0001cf0f) ai_message_heading_pane_t

0xa543,	// (0x00017b2c) bg_popup_heading_pane_cp1_ParamLimits

0xa543,	// (0x00017b2c) bg_popup_heading_pane_cp1

0xa4d5,	// (0x00017abe) list_ai_message_pane_ParamLimits

0xa4d5,	// (0x00017abe) list_ai_message_pane

0x3d5b,	// (0x00011344) scroll_pane_cp10

0xa471,	// (0x00017a5a) list_ai_message_pane_g1

0xa479,	// (0x00017a62) list_ai_message_pane_g2

0x0001,

0xf8fa,	// (0x0001cee3) list_ai_message_pane_g

0xa481,	// (0x00017a6a) list_ai_message_pane_t1_ParamLimits

0xa481,	// (0x00017a6a) list_ai_message_pane_t1

0xa496,	// (0x00017a7f) list_ai_message_pane_t2_ParamLimits

0xa496,	// (0x00017a7f) list_ai_message_pane_t2

0xa4ab,	// (0x00017a94) list_ai_message_pane_t3_ParamLimits

0xa4ab,	// (0x00017a94) list_ai_message_pane_t3

0xa4c0,	// (0x00017aa9) list_ai_message_pane_t4_ParamLimits

0xa4c0,	// (0x00017aa9) list_ai_message_pane_t4

0x0003,

0xf8ff,	// (0x0001cee8) list_ai_message_pane_t_ParamLimits

0xf8ff,	// (0x0001cee8) list_ai_message_pane_t

0xa45c,	// (0x00017a45) cell_ai_soft_ind_pane_ParamLimits

0xa45c,	// (0x00017a45) cell_ai_soft_ind_pane

0x48c0,	// (0x00011ea9) cell_ai_soft_ind_pane_g1_ParamLimits

0x48c0,	// (0x00011ea9) cell_ai_soft_ind_pane_g1

0x371d,	// (0x00010d06) grid_highlight_cp1

0x48cd,	// (0x00011eb6) text_secondary_cp56_ParamLimits

0x48cd,	// (0x00011eb6) text_secondary_cp56

0xa431,	// (0x00017a1a) example_general_pane_ParamLimits

0xa431,	// (0x00017a1a) example_general_pane

0xa43d,	// (0x00017a26) example_parent_pane_g1_ParamLimits

0xa43d,	// (0x00017a26) example_parent_pane_g1

0xa449,	// (0x00017a32) example_parent_pane_t1_ParamLimits

0xa449,	// (0x00017a32) example_parent_pane_t1

0x62e8,	// (0x000138d1) popup_preview_text_window_ParamLimits

0x62e8,	// (0x000138d1) popup_preview_text_window

0x47e2,	// (0x00011dcb) list_single_pane_cp2_g4

0x3985,	// (0x00010f6e) bg_popup_preview_window_pane_ParamLimits

0x3985,	// (0x00010f6e) bg_popup_preview_window_pane

0xa18b,	// (0x00017774) popup_preview_text_window_t1_ParamLimits

0xa18b,	// (0x00017774) popup_preview_text_window_t1

0xa1a9,	// (0x00017792) popup_preview_text_window_t2_ParamLimits

0xa1a9,	// (0x00017792) popup_preview_text_window_t2

0xa1f2,	// (0x000177db) popup_preview_text_window_t3_ParamLimits

0xa1f2,	// (0x000177db) popup_preview_text_window_t3

0xa237,	// (0x00017820) popup_preview_text_window_t4_ParamLimits

0xa237,	// (0x00017820) popup_preview_text_window_t4

0x0004,

0xf8ce,	// (0x0001ceb7) popup_preview_text_window_t_ParamLimits

0xf8ce,	// (0x0001ceb7) popup_preview_text_window_t

0xa2b5,	// (0x0001789e) scroll_pane_cp11

0x9165,	// (0x0001674e) bg_popup_preview_window_pane_g1

0xa14b,	// (0x00017734) bg_popup_preview_window_pane_g2

0xa153,	// (0x0001773c) bg_popup_preview_window_pane_g3

0xa15b,	// (0x00017744) bg_popup_preview_window_pane_g4

0xa163,	// (0x0001774c) bg_popup_preview_window_pane_g5

0xa16b,	// (0x00017754) bg_popup_preview_window_pane_g6

0xa173,	// (0x0001775c) bg_popup_preview_window_pane_g7

0xa17b,	// (0x00017764) bg_popup_preview_window_pane_g8

0x54e3,	// (0x00012acc) aid_popup_width_pane

0x62c6,	// (0x000138af) popup_midp_note_alarm_window_ParamLimits

0x62c6,	// (0x000138af) popup_midp_note_alarm_window

0x3baf,	// (0x00011198) data_form_pane_ParamLimits

0x84f5,	// (0x00015ade) form_field_data_pane_g1

0x84ff,	// (0x00015ae8) form_field_data_pane_t1_ParamLimits

0x3bbb,	// (0x000111a4) input_focus_pane_ParamLimits

0x3bc9,	// (0x000111b2) data_form_wide_pane_ParamLimits

0x3bda,	// (0x000111c3) form_field_data_wide_pane_g1

0x3c06,	// (0x000111ef) form_field_data_wide_pane_t1_ParamLimits

0x3a5d,	// (0x00011046) input_focus_pane_cp6_ParamLimits

0x866b,	// (0x00015c54) input_popup_find_pane_g1_ParamLimits

0x866b,	// (0x00015c54) input_popup_find_pane_g1

0x5a51,	// (0x0001303a) aid_navi_side_left_pane

0x5a66,	// (0x0001304f) aid_navi_side_right_pane

0x9b74,	// (0x0001715d) bg_popup_window_pane_cp30_ParamLimits

0x9b74,	// (0x0001715d) bg_popup_window_pane_cp30

0x9bee,	// (0x000171d7) popup_midp_note_alarm_window_g1_ParamLimits

0x9bee,	// (0x000171d7) popup_midp_note_alarm_window_g1

0x9c1e,	// (0x00017207) popup_midp_note_alarm_window_t1_ParamLimits

0x9c1e,	// (0x00017207) popup_midp_note_alarm_window_t1

0x9cbf,	// (0x000172a8) popup_midp_note_alarm_window_t2_ParamLimits

0x9cbf,	// (0x000172a8) popup_midp_note_alarm_window_t2

0x9d6d,	// (0x00017356) popup_midp_note_alarm_window_t3_ParamLimits

0x9d6d,	// (0x00017356) popup_midp_note_alarm_window_t3

0x9d95,	// (0x0001737e) popup_midp_note_alarm_window_t4_ParamLimits

0x9d95,	// (0x0001737e) popup_midp_note_alarm_window_t4

0x9db5,	// (0x0001739e) popup_midp_note_alarm_window_t5_ParamLimits

0x9db5,	// (0x0001739e) popup_midp_note_alarm_window_t5

0x000a,

0xf86b,	// (0x0001ce54) popup_midp_note_alarm_window_t_ParamLimits

0xf86b,	// (0x0001ce54) popup_midp_note_alarm_window_t

0x9e61,	// (0x0001744a) wait_bar_pane_cp1_ParamLimits

0x9e61,	// (0x0001744a) wait_bar_pane_cp1

0x371d,	// (0x00010d06) wait_anim_pane_copy1

0x371d,	// (0x00010d06) wait_border_pane_copy1

0x986a,	// (0x00016e53) wait_border_pane_g1_copy1

0x3c20,	// (0x00011209) form_field_popup_pane_g1

0x8517,	// (0x00015b00) form_field_popup_pane_t1_ParamLimits

0x3bbb,	// (0x000111a4) input_focus_pane_cp7_ParamLimits

0x3c28,	// (0x00011211) list_form_pane_ParamLimits

0x3c34,	// (0x0001121d) form_field_popup_wide_pane_g1

0x3c3c,	// (0x00011225) form_field_popup_wide_pane_t1_ParamLimits

0x3bbb,	// (0x000111a4) input_focus_pane_cp8_ParamLimits

0x3c51,	// (0x0001123a) list_form_wide_pane_ParamLimits

0xaa43,	// (0x0001802c) aid_size_cell_graphic_pane

0x858b,	// (0x00015b74) data_form_pane_t1_ParamLimits

0xa7aa,	// (0x00017d93) data_form_wide_pane_t1_ParamLimits

0x8d01,	// (0x000162ea) bg_status_flat_pane

0x7b9d,	// (0x00015186) title_pane_t1_ParamLimits

0x3753,	// (0x00010d3c) title_pane_t2_ParamLimits

0x3779,	// (0x00010d62) title_pane_t3_ParamLimits

0xf532,	// (0x0001cb1b) title_pane_t_ParamLimits

0x41cd,	// (0x000117b6) level_1_signal_ParamLimits

0x41da,	// (0x000117c3) level_2_signal_ParamLimits

0x41e7,	// (0x000117d0) level_3_signal_ParamLimits

0x41f4,	// (0x000117dd) level_4_signal_ParamLimits

0x4201,	// (0x000117ea) level_5_signal_ParamLimits

0x420e,	// (0x000117f7) level_6_signal_ParamLimits

0x421b,	// (0x00011804) level_7_signal_ParamLimits

0x41cd,	// (0x000117b6) level_1_battery_ParamLimits

0x41da,	// (0x000117c3) level_2_battery_ParamLimits

0x41e7,	// (0x000117d0) level_3_battery_ParamLimits

0x41f4,	// (0x000117dd) level_4_battery_ParamLimits

0x4201,	// (0x000117ea) level_5_battery_ParamLimits

0x420e,	// (0x000117f7) level_6_battery_ParamLimits

0x421b,	// (0x00011804) level_7_battery_ParamLimits

0x9a79,	// (0x00017062) bg_status_flat_pane_g1

0x9a81,	// (0x0001706a) bg_status_flat_pane_g2

0x9a89,	// (0x00017072) bg_status_flat_pane_g3

0x9a91,	// (0x0001707a) bg_status_flat_pane_g4

0x9a99,	// (0x00017082) bg_status_flat_pane_g5

0x9aa1,	// (0x0001708a) bg_status_flat_pane_g6

0x9aa9,	// (0x00017092) bg_status_flat_pane_g7

0x7c0d,	// (0x000151f6) tabs_3_active_pane_t1_ParamLimits

0x7c0d,	// (0x000151f6) tabs_3_passive_pane_t1_ParamLimits

0x7c27,	// (0x00015210) tabs_4_active_pane_t1_ParamLimits

0x7c27,	// (0x00015210) tabs_4_1_passive_pane_t1_ParamLimits

0x86a2,	// (0x00015c8b) tabs_2_active_pane_t1_ParamLimits

0x86a2,	// (0x00015c8b) tabs_2_passive_pane_t1_ParamLimits

0x86b4,	// (0x00015c9d) bg_active_tab_pane_cp4_ParamLimits

0x86c2,	// (0x00015cab) tabs_2_long_active_pane_t1_ParamLimits

0x86d5,	// (0x00015cbe) bg_passive_tab_pane_cp4_ParamLimits

0x660b,	// (0x00013bf4) list_single_midp_graphic_pane_t1_ParamLimits

0x86b4,	// (0x00015c9d) bg_active_tab_pane_cp5_ParamLimits

0x86e1,	// (0x00015cca) tabs_3_long_active_pane_t1_ParamLimits

0x86d5,	// (0x00015cbe) bg_passive_tab_pane_cp5_ParamLimits

0x660b,	// (0x00013bf4) list_single_midp_graphic_pane_t1

0x8d01,	// (0x000162ea) bg_status_flat_pane_ParamLimits

0x8dca,	// (0x000163b3) indicator_pane_cp2_ParamLimits

0x8dca,	// (0x000163b3) indicator_pane_cp2

0x8ef5,	// (0x000164de) navi_pane_srt_ParamLimits

0x8ef5,	// (0x000164de) navi_pane_srt

0x8f19,	// (0x00016502) popup_clock_digital_analogue_window_cp1

0x37f7,	// (0x00010de0) indicator_pane_t1

0x487f,	// (0x00011e68) copy_highlight_pane

0x487f,	// (0x00011e68) cursor_graphics_pane

0x487f,	// (0x00011e68) graphic_within_text_pane

0x487f,	// (0x00011e68) link_highlight_pane

0xa278,	// (0x00017861) popup_preview_text_window_t5_ParamLimits

0xa278,	// (0x00017861) popup_preview_text_window_t5

0x48e7,	// (0x00011ed0) cursor_digital_pane

0x48e7,	// (0x00011ed0) cursor_primary_pane

0x48f8,	// (0x00011ee1) cursor_primary_small_pane

0x4900,	// (0x00011ee9) cursor_secondary_pane

0x4908,	// (0x00011ef1) cursor_title_pane

0x48e7,	// (0x00011ed0) link_highlight_digital_pane

0x48ef,	// (0x00011ed8) link_highlight_primary_pane

0x48f8,	// (0x00011ee1) link_highlight_primary_small_pane

0x4900,	// (0x00011ee9) link_highlight_secondary_pane

0x4908,	// (0x00011ef1) link_highlight_title_pane

0x48e7,	// (0x00011ed0) copy_highlight_digital_pane

0x48e7,	// (0x00011ed0) copy_highlight_primary_pane

0x48f8,	// (0x00011ee1) copy_highlight_primary_small_pane

0x4900,	// (0x00011ee9) copy_highlight_secondary_pane

0x4908,	// (0x00011ef1) copy_highlight_title_pane

0x4900,	// (0x00011ee9) graphic_text_digital_pane

0x9b17,	// (0x00017100) graphic_text_primary_pane

0x9b20,	// (0x00017109) graphic_text_primary_small_pane

0x48f8,	// (0x00011ee1) graphic_text_secondary_pane

0x48e7,	// (0x00011ed0) graphic_text_title_pane

0x8b52,	// (0x0001613b) cursor_primary_pane_g1

0x9b09,	// (0x000170f2) cursor_text_primary_t1

0x9af1,	// (0x000170da) cursor_primary_small_pane_g1

0x9afb,	// (0x000170e4) cursor_text_primary_small_t1

0x9ad9,	// (0x000170c2) cursor_primary_small_pane_g1_copy1

0x9ae3,	// (0x000170cc) cursor_text_primary_small_t1_copy1

0x9ac1,	// (0x000170aa) cursor_text_title_t1

0x9acf,	// (0x000170b8) cursor_title_pane_g1

0x8b52,	// (0x0001613b) cursor_digital_pane_g1

0x4910,	// (0x00011ef9) cursor_text_digital_t1

0x491e,	// (0x00011f07) link_highlight_primary_pane_g1

0x9a6a,	// (0x00017053) link_highlight_primary_pane_t1

0x491e,	// (0x00011f07) link_highlight_primary_small_pane_g1

0x4926,	// (0x00011f0f) link_highlight_primary_small_pane_t1

0x491e,	// (0x00011f07) link_highlight_secondary_pane_g1

0x4935,	// (0x00011f1e) link_highlight_secondary_pane_t1

0x99cf,	// (0x00016fb8) link_highlight_title_pane_g1

0x99e6,	// (0x00016fcf) link_highlight_title_pane_t1

0x99cf,	// (0x00016fb8) link_highlight_digital_pane_g1

0x99d7,	// (0x00016fc0) link_highlight_digital_pane_t1

0x9889,	// (0x00016e72) copy_highlight_primary_pane_g1

0x98af,	// (0x00016e98) copy_highlight_primary_pane_t1

0x9889,	// (0x00016e72) copy_highlight_primary_small_pane_g1

0x98a0,	// (0x00016e89) copy_highlight_primary_small_pane_t1

0x4944,	// (0x00011f2d) copy_highlight_secondary_pane_g1

0x494c,	// (0x00011f35) copy_highlight_secondary_pane_t1

0x9889,	// (0x00016e72) copy_highlight_title_pane_g1

0x9891,	// (0x00016e7a) copy_highlight_title_pane_t1

0x9889,	// (0x00016e72) copy_highlight_digital_pane_g1

0xac11,	// (0x000181fa) copy_highlight_digital_pane_t1

0xab65,	// (0x0001814e) graphic_text_primary_pane_g1

0xabf5,	// (0x000181de) graphic_text_primary_pane_t1

0xac03,	// (0x000181ec) graphic_text_primary_pane_t2

0x0001,

0xf99a,	// (0x0001cf83) graphic_text_primary_pane_t

0xabd1,	// (0x000181ba) graphic_text_primary_small_pane_g1

0xabd9,	// (0x000181c2) graphic_text_primary_small_pane_t1

0xabe7,	// (0x000181d0) graphic_text_primary_small_pane_t2

0x0001,

0xf995,	// (0x0001cf7e) graphic_text_primary_small_pane_t

0xabad,	// (0x00018196) graphic_text_secondary_pane_g1

0xabb5,	// (0x0001819e) graphic_text_secondary_pane_t1

0xabc3,	// (0x000181ac) graphic_text_secondary_pane_t2

0x0001,

0xf990,	// (0x0001cf79) graphic_text_secondary_pane_t

0xab89,	// (0x00018172) graphic_text_title_pane_g1

0xab91,	// (0x0001817a) graphic_text_title_pane_t1

0xab9f,	// (0x00018188) graphic_text_title_pane_t2

0x0001,

0xf98b,	// (0x0001cf74) graphic_text_title_pane_t

0xab65,	// (0x0001814e) graphic_text_digital_pane_g1

0xab6d,	// (0x00018156) graphic_text_digital_pane_t1

0xab7b,	// (0x00018164) graphic_text_digital_pane_t2

0x0001,

0xf986,	// (0x0001cf6f) graphic_text_digital_pane_t

0x3799,	// (0x00010d82) navi_icon_pane_srt_ParamLimits

0x3799,	// (0x00010d82) navi_icon_pane_srt

0x371d,	// (0x00010d06) navi_midp_pane_srt

0x371d,	// (0x00010d06) navi_navi_pane_srt

0x3799,	// (0x00010d82) navi_text_pane_srt_ParamLimits

0x3799,	// (0x00010d82) navi_text_pane_srt

0xab30,	// (0x00018119) navi_navi_icon_text_pane_srt

0xab38,	// (0x00018121) navi_navi_pane_srt_g1_ParamLimits

0xab38,	// (0x00018121) navi_navi_pane_srt_g1

0xab4a,	// (0x00018133) navi_navi_pane_srt_g2_ParamLimits

0xab4a,	// (0x00018133) navi_navi_pane_srt_g2

0x0001,

0xf981,	// (0x0001cf6a) navi_navi_pane_srt_g_ParamLimits

0xf981,	// (0x0001cf6a) navi_navi_pane_srt_g

0xab5c,	// (0x00018145) navi_navi_tabs_pane_srt

0xab30,	// (0x00018119) navi_navi_text_pane_srt

0xab30,	// (0x00018119) navi_navi_volume_pane_srt

0xab21,	// (0x0001810a) navi_navi_text_pane_srt_t1

0x698b,	// (0x00013f74) navi_navi_volume_pane_srt_g1

0x6993,	// (0x00013f7c) volume_small_pane_srt_ParamLimits

0x6993,	// (0x00013f7c) volume_small_pane_srt

0x5d28,	// (0x00013311) volume_small_pane_srt_g1_ParamLimits

0x5d28,	// (0x00013311) volume_small_pane_srt_g1

0x5d38,	// (0x00013321) volume_small_pane_srt_g2_ParamLimits

0x5d38,	// (0x00013321) volume_small_pane_srt_g2

0x5d49,	// (0x00013332) volume_small_pane_srt_g3_ParamLimits

0x5d49,	// (0x00013332) volume_small_pane_srt_g3

0x5d5a,	// (0x00013343) volume_small_pane_srt_g4_ParamLimits

0x5d5a,	// (0x00013343) volume_small_pane_srt_g4

0x5d6b,	// (0x00013354) volume_small_pane_srt_g5_ParamLimits

0x5d6b,	// (0x00013354) volume_small_pane_srt_g5

0x5d7c,	// (0x00013365) volume_small_pane_srt_g6_ParamLimits

0x5d7c,	// (0x00013365) volume_small_pane_srt_g6

0x5d8d,	// (0x00013376) volume_small_pane_srt_g7_ParamLimits

0x5d8d,	// (0x00013376) volume_small_pane_srt_g7

0x5d9e,	// (0x00013387) volume_small_pane_srt_g8_ParamLimits

0x5d9e,	// (0x00013387) volume_small_pane_srt_g8

0x5daf,	// (0x00013398) volume_small_pane_srt_g9_ParamLimits

0x5daf,	// (0x00013398) volume_small_pane_srt_g9

0x5dc0,	// (0x000133a9) volume_small_pane_srt_g10_ParamLimits

0x5dc0,	// (0x000133a9) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x0001cd12) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x0001cd12) volume_small_pane_srt_g

0x7de3,	// (0x000153cc) query_popup_data_pane_cp2

0xab07,	// (0x000180f0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xab07,	// (0x000180f0) navi_navi_icon_text_pane_srt_t1

0x9b17,	// (0x00017100) navi_tabs_2_long_pane_srt

0x9b17,	// (0x00017100) navi_tabs_2_pane_srt

0x9b17,	// (0x00017100) navi_tabs_3_long_pane_srt

0x9b17,	// (0x00017100) navi_tabs_3_pane_srt

0x9b17,	// (0x00017100) navi_tabs_4_pane_srt

0x696b,	// (0x00013f54) tabs_2_active_pane_srt_ParamLimits

0x696b,	// (0x00013f54) tabs_2_active_pane_srt

0x697b,	// (0x00013f64) tabs_2_passive_pane_srt_ParamLimits

0x697b,	// (0x00013f64) tabs_2_passive_pane_srt

0x4a5e,	// (0x00012047) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4a5e,	// (0x00012047) bg_passive_tab_pane_cp1_srt

0xaad3,	// (0x000180bc) bg_passive_tab_pane_g1_cp1_srt

0x8991,	// (0x00015f7a) bg_passive_tab_pane_g2_cp1_srt

0xaadc,	// (0x000180c5) bg_passive_tab_pane_g3_cp1_srt

0x3799,	// (0x00010d82) bg_active_tab_pane_cp1_srt_ParamLimits

0x3799,	// (0x00010d82) bg_active_tab_pane_cp1_srt

0xaae5,	// (0x000180ce) tabs_2_active_pane_srt_g1

0xaaed,	// (0x000180d6) tabs_2_active_pane_srt_t1_ParamLimits

0xaaed,	// (0x000180d6) tabs_2_active_pane_srt_t1

0xaad3,	// (0x000180bc) bg_active_tab_pane_g1_cp1_srt

0x8991,	// (0x00015f7a) bg_active_tab_pane_g2_cp1_srt

0xaadc,	// (0x000180c5) bg_active_tab_pane_g3_cp1_srt

0x6938,	// (0x00013f21) tabs_3_active_pane_srt_ParamLimits

0x6938,	// (0x00013f21) tabs_3_active_pane_srt

0x6949,	// (0x00013f32) tabs_3_passive_pane_cp_srt_ParamLimits

0x6949,	// (0x00013f32) tabs_3_passive_pane_cp_srt

0x695a,	// (0x00013f43) tabs_3_passive_pane_srt_ParamLimits

0x695a,	// (0x00013f43) tabs_3_passive_pane_srt

0x4a5e,	// (0x00012047) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4a5e,	// (0x00012047) bg_passive_tab_pane_cp2_srt

0x8b5c,	// (0x00016145) bg_passive_tab_pane_g1_cp2_srt

0x8991,	// (0x00015f7a) bg_passive_tab_pane_g2_cp2_srt

0x8b65,	// (0x0001614e) bg_passive_tab_pane_g3_cp2_srt

0x3799,	// (0x00010d82) bg_active_tab_pane_cp2_srt_ParamLimits

0x3799,	// (0x00010d82) bg_active_tab_pane_cp2_srt

0xaab9,	// (0x000180a2) tabs_3_active_pane_srt_g1

0xaac1,	// (0x000180aa) tabs_3_active_pane_srt_t1_ParamLimits

0xaac1,	// (0x000180aa) tabs_3_active_pane_srt_t1

0x8b5c,	// (0x00016145) bg_active_tab_pane_g1_cp2_srt

0x8991,	// (0x00015f7a) bg_active_tab_pane_g2_cp2_srt

0x8b65,	// (0x0001614e) bg_active_tab_pane_g3_cp2_srt

0x68f0,	// (0x00013ed9) tabs_4_active_pane_srt_ParamLimits

0x68f0,	// (0x00013ed9) tabs_4_active_pane_srt

0x6902,	// (0x00013eeb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6902,	// (0x00013eeb) tabs_4_passive_pane_cp2_srt

0x5f33,	// (0x0001351c) aid_size_cell_toolbar

0x86d5,	// (0x00015cbe) main_idle_act_pane_ParamLimits

0x60f8,	// (0x000136e1) popup_large_graphic_colour_window_ParamLimits

0x6463,	// (0x00013a4c) popup_toolbar_window_ParamLimits

0x6463,	// (0x00013a4c) popup_toolbar_window

0xa82a,	// (0x00017e13) list_single_graphic_2heading_pane_ParamLimits

0xa82a,	// (0x00017e13) list_single_graphic_2heading_pane

0x4096,	// (0x0001167f) aid_size_cell_apps_grid_lsc_pane

0x40a8,	// (0x00011691) aid_size_cell_apps_grid_prt_pane

0x4a5e,	// (0x00012047) bg_wml_button_pane_cp1_ParamLimits

0x4a5e,	// (0x00012047) bg_wml_button_pane_cp1

0x94ca,	// (0x00016ab3) form_midp_field_text_pane_t1_ParamLimits

0x9285,	// (0x0001686e) input_focus_pane_cp050_ParamLimits

0x9504,	// (0x00016aed) list_midp_form_text_pane_ParamLimits

0x94a7,	// (0x00016a90) input_focus_pane_cp051_ParamLimits

0x94bb,	// (0x00016aa4) list_midp_choice_pane_ParamLimits

0x933b,	// (0x00016924) list_single_2graphic_pane_cp3_ParamLimits

0x933b,	// (0x00016924) list_single_2graphic_pane_cp3

0x9360,	// (0x00016949) list_single_midp_graphic_pane_ParamLimits

0x9360,	// (0x00016949) list_single_midp_graphic_pane

0x6510,	// (0x00013af9) list_single_graphic_2heading_pane_g1_ParamLimits

0x6510,	// (0x00013af9) list_single_graphic_2heading_pane_g1

0x651c,	// (0x00013b05) list_single_graphic_2heading_pane_g4_ParamLimits

0x651c,	// (0x00013b05) list_single_graphic_2heading_pane_g4

0x6528,	// (0x00013b11) list_single_graphic_2heading_pane_g5_ParamLimits

0x6528,	// (0x00013b11) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x0001cd65) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x0001cd65) list_single_graphic_2heading_pane_g

0x6534,	// (0x00013b1d) list_single_graphic_2heading_pane_t1_ParamLimits

0x6534,	// (0x00013b1d) list_single_graphic_2heading_pane_t1

0x6548,	// (0x00013b31) list_single_graphic_2heading_pane_t2_ParamLimits

0x6548,	// (0x00013b31) list_single_graphic_2heading_pane_t2

0x6562,	// (0x00013b4b) list_single_graphic_2heading_pane_t3_ParamLimits

0x6562,	// (0x00013b4b) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x0001cd6c) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x0001cd6c) list_single_graphic_2heading_pane_t

0x9075,	// (0x0001665e) bg_popup_sub_pane_cp2

0x909f,	// (0x00016688) grid_toobar_pane

0x657a,	// (0x00013b63) cell_toolbar_pane_ParamLimits

0x657a,	// (0x00013b63) cell_toolbar_pane

0x9109,	// (0x000166f2) cell_toolbar_pane_g1_ParamLimits

0x9109,	// (0x000166f2) cell_toolbar_pane_g1

0x911d,	// (0x00016706) cell_toolbar_pane_g2_ParamLimits

0x911d,	// (0x00016706) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x0001cd7a) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x0001cd7a) cell_toolbar_pane_g

0x913f,	// (0x00016728) grid_highlight_pane_cp2_ParamLimits

0x913f,	// (0x00016728) grid_highlight_pane_cp2

0x9159,	// (0x00016742) toolbar_button_pane

0x9165,	// (0x0001674e) toolbar_button_pane_g1

0x916d,	// (0x00016756) toolbar_button_pane_g2

0x9175,	// (0x0001675e) toolbar_button_pane_g3

0x917d,	// (0x00016766) toolbar_button_pane_g4

0x9185,	// (0x0001676e) toolbar_button_pane_g5

0x918d,	// (0x00016776) toolbar_button_pane_g6

0x9195,	// (0x0001677e) toolbar_button_pane_g7

0x919d,	// (0x00016786) toolbar_button_pane_g8

0x91a5,	// (0x0001678e) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x0001cd7f) toolbar_button_pane_g

0x65b2,	// (0x00013b9b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x65b2,	// (0x00013b9b) list_single_2graphic_pane_g1_cp3

0x65be,	// (0x00013ba7) list_single_2graphic_pane_g2_cp3_ParamLimits

0x65be,	// (0x00013ba7) list_single_2graphic_pane_g2_cp3

0x65cf,	// (0x00013bb8) list_single_2graphic_pane_g3_cp3

0x65d7,	// (0x00013bc0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x65d7,	// (0x00013bc0) list_single_2graphic_pane_g4_cp3

0x65e3,	// (0x00013bcc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x65e3,	// (0x00013bcc) list_single_2graphic_pane_t1_cp3

0x65ff,	// (0x00013be8) list_single_midp_graphic_pane_g2_ParamLimits

0x65ff,	// (0x00013be8) list_single_midp_graphic_pane_g2

0x5f3b,	// (0x00013524) aid_zoom_text_primary

0x5f43,	// (0x0001352c) aid_zoom_text_secondary

0x8bbc,	// (0x000161a5) status_small_pane_g7_ParamLimits

0x8bbc,	// (0x000161a5) status_small_pane_g7

0x8bdf,	// (0x000161c8) status_small_pane_t1_ParamLimits

0x7b80,	// (0x00015169) title_pane_g2

0x0003,

0xf529,	// (0x0001cb12) title_pane_g

0x7e3d,	// (0x00015426) aid_size_cell_colour_1_pane_ParamLimits

0x7e3d,	// (0x00015426) aid_size_cell_colour_1_pane

0x7e51,	// (0x0001543a) aid_size_cell_colour_2_pane_ParamLimits

0x7e51,	// (0x0001543a) aid_size_cell_colour_2_pane

0x7e65,	// (0x0001544e) aid_size_cell_colour_3_pane_ParamLimits

0x7e65,	// (0x0001544e) aid_size_cell_colour_3_pane

0x7e79,	// (0x00015462) aid_size_cell_colour_4_pane_ParamLimits

0x7e79,	// (0x00015462) aid_size_cell_colour_4_pane

0x598e,	// (0x00012f77) title_pane_stacon_g1_ParamLimits

0x598e,	// (0x00012f77) title_pane_stacon_g1

0x9906,	// (0x00016eef) popup_note_wait_window_g3_ParamLimits

0x9906,	// (0x00016eef) popup_note_wait_window_g3

0x997c,	// (0x00016f65) popup_note_wait_window_t5_ParamLimits

0x997c,	// (0x00016f65) popup_note_wait_window_t5

0x371d,	// (0x00010d06) main_feb_china_hwr_fs_writing_pane

0x5fdf,	// (0x000135c8) popup_feb_china_hwr_fs_window_ParamLimits

0x5fdf,	// (0x000135c8) popup_feb_china_hwr_fs_window

0x6621,	// (0x00013c0a) aid_size_cell_hwr_fs_ParamLimits

0x6621,	// (0x00013c0a) aid_size_cell_hwr_fs

0x9285,	// (0x0001686e) bg_popup_sub_pane_cp3_ParamLimits

0x9285,	// (0x0001686e) bg_popup_sub_pane_cp3

0x6636,	// (0x00013c1f) grid_hwr_fs_pane_ParamLimits

0x6636,	// (0x00013c1f) grid_hwr_fs_pane

0x664e,	// (0x00013c37) linegrid_hwr_fs_pane_ParamLimits

0x664e,	// (0x00013c37) linegrid_hwr_fs_pane

0x665e,	// (0x00013c47) cell_hwr_fs_pane_ParamLimits

0x665e,	// (0x00013c47) cell_hwr_fs_pane

0x9291,	// (0x0001687a) linegrid_hwr_fs_pane_g1_ParamLimits

0x9291,	// (0x0001687a) linegrid_hwr_fs_pane_g1

0x929d,	// (0x00016886) linegrid_hwr_fs_pane_g2_ParamLimits

0x929d,	// (0x00016886) linegrid_hwr_fs_pane_g2

0x92af,	// (0x00016898) linegrid_hwr_fs_pane_g3_ParamLimits

0x92af,	// (0x00016898) linegrid_hwr_fs_pane_g3

0x6680,	// (0x00013c69) linegrid_hwr_fs_pane_g4_ParamLimits

0x6680,	// (0x00013c69) linegrid_hwr_fs_pane_g4

0x669a,	// (0x00013c83) linegrid_hwr_fs_pane_g5_ParamLimits

0x669a,	// (0x00013c83) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c1,	// (0x0001cdaa) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c1,	// (0x0001cdaa) linegrid_hwr_fs_pane_g

0x92bb,	// (0x000168a4) cell_hwr_fs_pane_g1_ParamLimits

0x92bb,	// (0x000168a4) cell_hwr_fs_pane_g1

0x8faf,	// (0x00016598) cell_hwr_fs_pane_g2_ParamLimits

0x8faf,	// (0x00016598) cell_hwr_fs_pane_g2

0x92d1,	// (0x000168ba) cell_hwr_fs_pane_g3_ParamLimits

0x92d1,	// (0x000168ba) cell_hwr_fs_pane_g3

0x92de,	// (0x000168c7) cell_hwr_fs_pane_g4_ParamLimits

0x92de,	// (0x000168c7) cell_hwr_fs_pane_g4

0x0003,

0xf7cc,	// (0x0001cdb5) cell_hwr_fs_pane_g_ParamLimits

0xf7cc,	// (0x0001cdb5) cell_hwr_fs_pane_g

0x66b0,	// (0x00013c99) cell_hwr_fs_pane_t1

0x371d,	// (0x00010d06) grid_highlight_pane_cp6

0x371d,	// (0x00010d06) main_idle_act2_pane

0x3d42,	// (0x0001132b) aid_inside_area_popup_secondary

0x9f9b,	// (0x00017584) aid_inside_area_window_primary_ParamLimits

0x9f9b,	// (0x00017584) aid_inside_area_window_primary

0xac20,	// (0x00018209) ai2_news_ticker_pane

0xac28,	// (0x00018211) aid_size_cell_ai1_link_ParamLimits

0xac28,	// (0x00018211) aid_size_cell_ai1_link

0xac42,	// (0x0001822b) popup_ai2_data_window_ParamLimits

0xac42,	// (0x0001822b) popup_ai2_data_window

0xac58,	// (0x00018241) popup_ai2_link_window_ParamLimits

0xac58,	// (0x00018241) popup_ai2_link_window

0x9285,	// (0x0001686e) bg_popup_sub_pane_cp4_ParamLimits

0x9285,	// (0x0001686e) bg_popup_sub_pane_cp4

0xac6c,	// (0x00018255) grid_ai2_link_pane_ParamLimits

0xac6c,	// (0x00018255) grid_ai2_link_pane

0xac83,	// (0x0001826c) popup_ai2_link_window_g1_ParamLimits

0xac83,	// (0x0001826c) popup_ai2_link_window_g1

0xac8f,	// (0x00018278) popup_ai2_link_window_g2_ParamLimits

0xac8f,	// (0x00018278) popup_ai2_link_window_g2

0x0001,

0xf99f,	// (0x0001cf88) popup_ai2_link_window_g_ParamLimits

0xf99f,	// (0x0001cf88) popup_ai2_link_window_g

0xac9e,	// (0x00018287) ai2_mp_button_pane

0xaca6,	// (0x0001828f) ai2_mp_volume_pane

0x94a7,	// (0x00016a90) bg_popup_sub_pane_cp5_ParamLimits

0x94a7,	// (0x00016a90) bg_popup_sub_pane_cp5

0xacae,	// (0x00018297) heading_ai2_gene_pane_ParamLimits

0xacae,	// (0x00018297) heading_ai2_gene_pane

0xacba,	// (0x000182a3) list_ai2_gene_pane_ParamLimits

0xacba,	// (0x000182a3) list_ai2_gene_pane

0xad02,	// (0x000182eb) cell_ai2_link_pane_ParamLimits

0xad02,	// (0x000182eb) cell_ai2_link_pane

0xad18,	// (0x00018301) cell_ai2_link_pane_g1

0x371d,	// (0x00010d06) grid_highlight_pane_cp7

0x69a8,	// (0x00013f91) ai2_mp_volume_pane_g1

0xade8,	// (0x000183d1) ai2_mp_volume_pane_g2

0xad5d,	// (0x00018346) list_ai2_gene_pane_t1

0xadf0,	// (0x000183d9) ai2_mp_volume_pane_g3

0x0002,

0xf9b8,	// (0x0001cfa1) ai2_mp_volume_pane_g

0x69b0,	// (0x00013f99) volume_small_pane_cp3

0xadf8,	// (0x000183e1) aid_size_cell_ai2_button

0xae00,	// (0x000183e9) grid_ai2_button_pane

0xae09,	// (0x000183f2) cell_ai2_button_pane_ParamLimits

0xae09,	// (0x000183f2) cell_ai2_button_pane

0x35a4,	// (0x00010b8d) cell_ai2_button_pane_g1

0x371d,	// (0x00010d06) grid_highlight_pane_cp8

0xada8,	// (0x00018391) ai2_gene_pane_t1_ParamLimits

0xada8,	// (0x00018391) ai2_gene_pane_t1

0x5f29,	// (0x00013512) aid_height_parent_landscape

0xa616,	// (0x00017bff) aid_height_set_list

0xa627,	// (0x00017c10) aid_size_parent

0xaa43,	// (0x0001802c) aid_size_cell_graphic_pane_ParamLimits

0xacca,	// (0x000182b3) popup_ai2_data_window_g1_ParamLimits

0xacca,	// (0x000182b3) popup_ai2_data_window_g1

0xacd6,	// (0x000182bf) ai2_news_ticker_pane_g1

0xacde,	// (0x000182c7) ai2_news_ticker_pane_g2

0x0001,

0xf9a4,	// (0x0001cf8d) ai2_news_ticker_pane_g

0xace6,	// (0x000182cf) ai2_news_ticker_pane_t1

0xacf4,	// (0x000182dd) ai2_news_ticker_pane_t2

0x0001,

0xf9a9,	// (0x0001cf92) ai2_news_ticker_pane_t

0xad21,	// (0x0001830a) heading_ai2_gene_pane_g1

0xad29,	// (0x00018312) heading_ai2_gene_pane_t1_ParamLimits

0xad29,	// (0x00018312) heading_ai2_gene_pane_t1

0xad3e,	// (0x00018327) list_highlight_pane_cp6

0xad46,	// (0x0001832f) ai2_gene_pane_ParamLimits

0xad46,	// (0x0001832f) ai2_gene_pane

0xad6b,	// (0x00018354) list_ai2_gene_pane_t2

0x0001,

0xf9ae,	// (0x0001cf97) list_ai2_gene_pane_t

0xad79,	// (0x00018362) list_highlight_pane_cp8_ParamLimits

0xad79,	// (0x00018362) list_highlight_pane_cp8

0xad8a,	// (0x00018373) ai2_gene_pane_g1_ParamLimits

0xad8a,	// (0x00018373) ai2_gene_pane_g1

0xad9c,	// (0x00018385) ai2_gene_pane_g2_ParamLimits

0xad9c,	// (0x00018385) ai2_gene_pane_g2

0x0001,

0xf9b3,	// (0x0001cf9c) ai2_gene_pane_g_ParamLimits

0xf9b3,	// (0x0001cf9c) ai2_gene_pane_g

0x3b08,	// (0x000110f1) scroll_pane_cp12

0x5ee6,	// (0x000134cf) control_pane_t3_ParamLimits

0x5ee6,	// (0x000134cf) control_pane_t3

0x8bd0,	// (0x000161b9) status_small_pane_g8_ParamLimits

0x8bd0,	// (0x000161b9) status_small_pane_g8

0x60c1,	// (0x000136aa) popup_find_window_ParamLimits

0x62da,	// (0x000138c3) popup_note_image_window_ParamLimits

0x90db,	// (0x000166c4) list_double2_graphic_pane_vc_g1_ParamLimits

0x90db,	// (0x000166c4) list_double2_graphic_pane_vc_g1

0x4767,	// (0x00011d50) list_double2_graphic_pane_vc_g2_ParamLimits

0x4767,	// (0x00011d50) list_double2_graphic_pane_vc_g2

0x90e7,	// (0x000166d0) list_double2_graphic_pane_vc_g3_ParamLimits

0x90e7,	// (0x000166d0) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x0001cd73) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x0001cd73) list_double2_graphic_pane_vc_g

0x90f3,	// (0x000166dc) list_double2_graphic_pane_vc_t1_ParamLimits

0x90f3,	// (0x000166dc) list_double2_graphic_pane_vc_t1

0x4767,	// (0x00011d50) list_single_heading_pane_vc_g1_ParamLimits

0x4767,	// (0x00011d50) list_single_heading_pane_vc_g1

0x90e7,	// (0x000166d0) list_single_heading_pane_vc_g2_ParamLimits

0x90e7,	// (0x000166d0) list_single_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd94) list_single_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd94) list_single_heading_pane_vc_g

0x91ad,	// (0x00016796) list_single_heading_pane_vc_t1_ParamLimits

0x91ad,	// (0x00016796) list_single_heading_pane_vc_t1

0x91c3,	// (0x000167ac) list_single_heading_pane_vc_t2_ParamLimits

0x91c3,	// (0x000167ac) list_single_heading_pane_vc_t2

0x0001,

0xf7b0,	// (0x0001cd99) list_single_heading_pane_vc_t_ParamLimits

0xf7b0,	// (0x0001cd99) list_single_heading_pane_vc_t

0x91d5,	// (0x000167be) list_setting_number_pane_vc_g1_ParamLimits

0x91d5,	// (0x000167be) list_setting_number_pane_vc_g1

0x91e1,	// (0x000167ca) list_setting_number_pane_vc_g2_ParamLimits

0x91e1,	// (0x000167ca) list_setting_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001cd9e) list_setting_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001cd9e) list_setting_number_pane_vc_g

0x91ed,	// (0x000167d6) list_setting_number_pane_vc_t1_ParamLimits

0x91ed,	// (0x000167d6) list_setting_number_pane_vc_t1

0x9201,	// (0x000167ea) list_setting_number_pane_vc_t2_ParamLimits

0x9201,	// (0x000167ea) list_setting_number_pane_vc_t2

0x921d,	// (0x00016806) list_setting_number_pane_vc_t3_ParamLimits

0x921d,	// (0x00016806) list_setting_number_pane_vc_t3

0x0002,

0xf7ba,	// (0x0001cda3) list_setting_number_pane_vc_t_ParamLimits

0xf7ba,	// (0x0001cda3) list_setting_number_pane_vc_t

0x9249,	// (0x00016832) set_value_pane_vc_ParamLimits

0x9249,	// (0x00016832) set_value_pane_vc

0xa82a,	// (0x00017e13) list_double2_graphic_pane_vc_ParamLimits

0xa82a,	// (0x00017e13) list_double2_graphic_pane_vc

0xa83d,	// (0x00017e26) list_double2_large_graphic_pane_vc_ParamLimits

0xa83d,	// (0x00017e26) list_double2_large_graphic_pane_vc

0xa82a,	// (0x00017e13) list_double2_pane_vc_ParamLimits

0xa82a,	// (0x00017e13) list_double2_pane_vc

0xa82a,	// (0x00017e13) list_double_graphic_heading_pane_vc_ParamLimits

0xa82a,	// (0x00017e13) list_double_graphic_heading_pane_vc

0xa82a,	// (0x00017e13) list_double_graphic_pane_vc_ParamLimits

0xa82a,	// (0x00017e13) list_double_graphic_pane_vc

0xa82a,	// (0x00017e13) list_double_heading_pane_vc_ParamLimits

0xa82a,	// (0x00017e13) list_double_heading_pane_vc

0xa84f,	// (0x00017e38) list_double_large_graphic_pane_vc_ParamLimits

0xa84f,	// (0x00017e38) list_double_large_graphic_pane_vc

0xa82a,	// (0x00017e13) list_double_number_pane_vc_ParamLimits

0xa82a,	// (0x00017e13) list_double_number_pane_vc

0xa82a,	// (0x00017e13) list_double_pane_vc_ParamLimits

0xa82a,	// (0x00017e13) list_double_pane_vc

0xa82a,	// (0x00017e13) list_double_time_pane_vc_ParamLimits

0xa82a,	// (0x00017e13) list_double_time_pane_vc

0xa82a,	// (0x00017e13) list_setting_number_pane_vc_ParamLimits

0xa82a,	// (0x00017e13) list_setting_number_pane_vc

0xa82a,	// (0x00017e13) list_setting_pane_vc_ParamLimits

0xa82a,	// (0x00017e13) list_setting_pane_vc

0xa82a,	// (0x00017e13) list_single_graphic_heading_pane_vc_ParamLimits

0xa82a,	// (0x00017e13) list_single_graphic_heading_pane_vc

0xa82a,	// (0x00017e13) list_single_heading_pane_vc_ParamLimits

0xa82a,	// (0x00017e13) list_single_heading_pane_vc

0xa86d,	// (0x00017e56) list_single_number_heading_pane_vc_ParamLimits

0xa86d,	// (0x00017e56) list_single_number_heading_pane_vc

0xae3d,	// (0x00018426) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xae3d,	// (0x00018426) list_double_graphic_heading_pane_vc_g1

0x4767,	// (0x00011d50) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4767,	// (0x00011d50) list_double_graphic_heading_pane_vc_g2

0x90e7,	// (0x000166d0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x90e7,	// (0x000166d0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bf,	// (0x0001cfa8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bf,	// (0x0001cfa8) list_double_graphic_heading_pane_vc_g

0xae49,	// (0x00018432) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xae49,	// (0x00018432) list_double_graphic_heading_pane_vc_t1

0xae5d,	// (0x00018446) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae5d,	// (0x00018446) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c6,	// (0x0001cfaf) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c6,	// (0x0001cfaf) list_double_graphic_heading_pane_vc_t

0x91d5,	// (0x000167be) list_setting_pane_vc_g1_ParamLimits

0x91d5,	// (0x000167be) list_setting_pane_vc_g1

0x91e1,	// (0x000167ca) list_setting_pane_vc_g2_ParamLimits

0x91e1,	// (0x000167ca) list_setting_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001cd9e) list_setting_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001cd9e) list_setting_pane_vc_g

0xb07a,	// (0x00018663) list_setting_pane_vc_t1_ParamLimits

0xb07a,	// (0x00018663) list_setting_pane_vc_t1

0xb096,	// (0x0001867f) list_setting_pane_vc_t2_ParamLimits

0xb096,	// (0x0001867f) list_setting_pane_vc_t2

0x0001,

0xfa09,	// (0x0001cff2) list_setting_pane_vc_t_ParamLimits

0xfa09,	// (0x0001cff2) list_setting_pane_vc_t

0x9249,	// (0x00016832) set_value_pane_cp_vc_ParamLimits

0x9249,	// (0x00016832) set_value_pane_cp_vc

0x4767,	// (0x00011d50) list_single_number_heading_pane_vc_g1_ParamLimits

0x4767,	// (0x00011d50) list_single_number_heading_pane_vc_g1

0x90e7,	// (0x000166d0) list_single_number_heading_pane_vc_g2_ParamLimits

0x90e7,	// (0x000166d0) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd94) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd94) list_single_number_heading_pane_vc_g

0xb0b0,	// (0x00018699) list_single_number_heading_pane_vc_t1_ParamLimits

0xb0b0,	// (0x00018699) list_single_number_heading_pane_vc_t1

0xb0c6,	// (0x000186af) list_single_number_heading_pane_vc_t2_ParamLimits

0xb0c6,	// (0x000186af) list_single_number_heading_pane_vc_t2

0xb0d8,	// (0x000186c1) list_single_number_heading_pane_vc_t3_ParamLimits

0xb0d8,	// (0x000186c1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001cff7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0e,	// (0x0001cff7) list_single_number_heading_pane_vc_t

0xb0ea,	// (0x000186d3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb0ea,	// (0x000186d3) list_single_graphic_heading_pane_vc_g1

0x4767,	// (0x00011d50) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4767,	// (0x00011d50) list_single_graphic_heading_pane_vc_g4

0x90e7,	// (0x000166d0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x90e7,	// (0x000166d0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa15,	// (0x0001cffe) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa15,	// (0x0001cffe) list_single_graphic_heading_pane_vc_g

0x9edc,	// (0x000174c5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9edc,	// (0x000174c5) list_single_graphic_heading_pane_vc_t1

0xb0f6,	// (0x000186df) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb0f6,	// (0x000186df) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1c,	// (0x0001d005) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1c,	// (0x0001d005) list_single_graphic_heading_pane_vc_t

0x4767,	// (0x00011d50) list_double2_pane_vc_g1_ParamLimits

0x4767,	// (0x00011d50) list_double2_pane_vc_g1

0x90e7,	// (0x000166d0) list_double2_pane_vc_g2_ParamLimits

0x90e7,	// (0x000166d0) list_double2_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd94) list_double2_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd94) list_double2_pane_vc_g

0xb108,	// (0x000186f1) list_double2_pane_vc_t1_ParamLimits

0xb108,	// (0x000186f1) list_double2_pane_vc_t1

0xb120,	// (0x00018709) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb120,	// (0x00018709) list_double2_large_graphic_pane_vc_g1

0xb12c,	// (0x00018715) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb12c,	// (0x00018715) list_double2_large_graphic_pane_vc_g2

0xb138,	// (0x00018721) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb138,	// (0x00018721) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa21,	// (0x0001d00a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa21,	// (0x0001d00a) list_double2_large_graphic_pane_vc_g

0xb144,	// (0x0001872d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb144,	// (0x0001872d) list_double2_large_graphic_pane_vc_t1

0xb15a,	// (0x00018743) list_double_time_pane_vc_g1_ParamLimits

0xb15a,	// (0x00018743) list_double_time_pane_vc_g1

0xb166,	// (0x0001874f) list_double_time_pane_vc_g2_ParamLimits

0xb166,	// (0x0001874f) list_double_time_pane_vc_g2

0x0001,

0xfa28,	// (0x0001d011) list_double_time_pane_vc_g_ParamLimits

0xfa28,	// (0x0001d011) list_double_time_pane_vc_g

0xb172,	// (0x0001875b) list_double_time_pane_vc_t1_ParamLimits

0xb172,	// (0x0001875b) list_double_time_pane_vc_t1

0xb196,	// (0x0001877f) list_double_time_pane_vc_t2_ParamLimits

0xb196,	// (0x0001877f) list_double_time_pane_vc_t2

0xb1c5,	// (0x000187ae) list_double_time_pane_vc_t3_ParamLimits

0xb1c5,	// (0x000187ae) list_double_time_pane_vc_t3

0xb1d7,	// (0x000187c0) list_double_time_pane_vc_t4_ParamLimits

0xb1d7,	// (0x000187c0) list_double_time_pane_vc_t4

0x0003,

0xfa2d,	// (0x0001d016) list_double_time_pane_vc_t_ParamLimits

0xfa2d,	// (0x0001d016) list_double_time_pane_vc_t

0x4767,	// (0x00011d50) list_double_pane_vc_g1_ParamLimits

0x4767,	// (0x00011d50) list_double_pane_vc_g1

0x90e7,	// (0x000166d0) list_double_pane_vc_g2_ParamLimits

0x90e7,	// (0x000166d0) list_double_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd94) list_double_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd94) list_double_pane_vc_g

0xb1eb,	// (0x000187d4) list_double_pane_vc_t1_ParamLimits

0xb1eb,	// (0x000187d4) list_double_pane_vc_t1

0xb1ff,	// (0x000187e8) list_double_pane_vc_t2_ParamLimits

0xb1ff,	// (0x000187e8) list_double_pane_vc_t2

0x0001,

0xfa36,	// (0x0001d01f) list_double_pane_vc_t_ParamLimits

0xfa36,	// (0x0001d01f) list_double_pane_vc_t

0x4767,	// (0x00011d50) list_double_number_pane_vc_g1_ParamLimits

0x4767,	// (0x00011d50) list_double_number_pane_vc_g1

0x90e7,	// (0x000166d0) list_double_number_pane_vc_g2_ParamLimits

0x90e7,	// (0x000166d0) list_double_number_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd94) list_double_number_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd94) list_double_number_pane_vc_g

0xb217,	// (0x00018800) list_double_number_pane_vc_t1_ParamLimits

0xb217,	// (0x00018800) list_double_number_pane_vc_t1

0xb1eb,	// (0x000187d4) list_double_number_pane_vc_t2_ParamLimits

0xb1eb,	// (0x000187d4) list_double_number_pane_vc_t2

0xb229,	// (0x00018812) list_double_number_pane_vc_t3_ParamLimits

0xb229,	// (0x00018812) list_double_number_pane_vc_t3

0x0002,

0xfa3b,	// (0x0001d024) list_double_number_pane_vc_t_ParamLimits

0xfa3b,	// (0x0001d024) list_double_number_pane_vc_t

0xb241,	// (0x0001882a) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb241,	// (0x0001882a) list_double_large_graphic_pane_vc_g1

0xb25d,	// (0x00018846) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb25d,	// (0x00018846) list_double_large_graphic_pane_vc_g2

0xb271,	// (0x0001885a) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb271,	// (0x0001885a) list_double_large_graphic_pane_vc_g3

0xb280,	// (0x00018869) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb280,	// (0x00018869) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa42,	// (0x0001d02b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa42,	// (0x0001d02b) list_double_large_graphic_pane_vc_g

0xb28f,	// (0x00018878) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb28f,	// (0x00018878) list_double_large_graphic_pane_vc_t1

0xb2ab,	// (0x00018894) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb2ab,	// (0x00018894) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4b,	// (0x0001d034) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4b,	// (0x0001d034) list_double_large_graphic_pane_vc_t

0x4767,	// (0x00011d50) list_double_heading_pane_vc_g1_ParamLimits

0x4767,	// (0x00011d50) list_double_heading_pane_vc_g1

0x90e7,	// (0x000166d0) list_double_heading_pane_vc_g2_ParamLimits

0x90e7,	// (0x000166d0) list_double_heading_pane_vc_g2

0x0001,

0xf7ab,	// (0x0001cd94) list_double_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x0001cd94) list_double_heading_pane_vc_g

0xb2cd,	// (0x000188b6) list_double_heading_pane_vc_t1_ParamLimits

0xb2cd,	// (0x000188b6) list_double_heading_pane_vc_t1

0xb2e1,	// (0x000188ca) list_double_heading_pane_vc_t2_ParamLimits

0xb2e1,	// (0x000188ca) list_double_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0001d039) list_double_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0001d039) list_double_heading_pane_vc_t

0xb2f9,	// (0x000188e2) list_double_graphic_pane_vc_g1_ParamLimits

0xb2f9,	// (0x000188e2) list_double_graphic_pane_vc_g1

0xb30c,	// (0x000188f5) list_double_graphic_pane_vc_g2_ParamLimits

0xb30c,	// (0x000188f5) list_double_graphic_pane_vc_g2

0x4767,	// (0x00011d50) list_double_graphic_pane_vc_g3_ParamLimits

0x4767,	// (0x00011d50) list_double_graphic_pane_vc_g3

0x0003,

0xfa55,	// (0x0001d03e) list_double_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001d03e) list_double_graphic_pane_vc_g

0xb329,	// (0x00018912) list_double_graphic_pane_vc_t1_ParamLimits

0xb329,	// (0x00018912) list_double_graphic_pane_vc_t1

0xb348,	// (0x00018931) list_double_graphic_pane_vc_t2_ParamLimits

0xb348,	// (0x00018931) list_double_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001d047) list_double_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001d047) list_double_graphic_pane_vc_t

0x54ef,	// (0x00012ad8) aid_size_cell_fastswap

0x54f7,	// (0x00012ae0) aid_size_cell_touch_ParamLimits

0x54f7,	// (0x00012ae0) aid_size_cell_touch

0x575c,	// (0x00012d45) popup_fast_swap_wide_window_ParamLimits

0x575c,	// (0x00012d45) popup_fast_swap_wide_window

0x5862,	// (0x00012e4b) touch_pane_ParamLimits

0x5862,	// (0x00012e4b) touch_pane

0x3b84,	// (0x0001116d) button_value_adjust_pane_cp2

0x3b8c,	// (0x00011175) button_value_adjust_pane_cp4

0x3b94,	// (0x0001117d) form_field_data_pane_cp2

0x849b,	// (0x00015a84) form_field_data_wide_pane_cp2

0x40d7,	// (0x000116c0) bg_scroll_pane_ParamLimits

0x5af0,	// (0x000130d9) scroll_handle_pane_ParamLimits

0x5b04,	// (0x000130ed) scroll_sc2_down_pane_ParamLimits

0x5b04,	// (0x000130ed) scroll_sc2_down_pane

0x411d,	// (0x00011706) scroll_sc2_up_pane_ParamLimits

0x411d,	// (0x00011706) scroll_sc2_up_pane

0xb81a,	// (0x00018e03) grid_wheel_folder_pane_g1_ParamLimits

0xb81a,	// (0x00018e03) grid_wheel_folder_pane_g1

0x5cc0,	// (0x000132a9) clock_nsta_pane_cp2_ParamLimits

0x5cc0,	// (0x000132a9) clock_nsta_pane_cp2

0x8a88,	// (0x00016071) listscroll_midp_pane_ParamLimits

0x8a94,	// (0x0001607d) midp_canvas_pane

0x4a87,	// (0x00012070) nsta_clock_indic_pane

0x4ac7,	// (0x000120b0) listscroll_form_pane_vc

0x4ad7,	// (0x000120c0) listscroll_set_pane_vc_ParamLimits

0x4ad7,	// (0x000120c0) listscroll_set_pane_vc

0x8d1d,	// (0x00016306) clock_nsta_pane

0x8d98,	// (0x00016381) indicator_nsta_pane

0x9075,	// (0x0001665e) bg_popup_sub_pane_cp2_ParamLimits

0x9089,	// (0x00016672) find_pane_cp2_ParamLimits

0x9089,	// (0x00016672) find_pane_cp2

0x909f,	// (0x00016688) grid_toobar_pane_ParamLimits

0x9259,	// (0x00016842) list_form_gen_pane_vc_ParamLimits

0x9259,	// (0x00016842) list_form_gen_pane_vc

0x926f,	// (0x00016858) scroll_pane_cp8_vc_ParamLimits

0x926f,	// (0x00016858) scroll_pane_cp8_vc

0x92eb,	// (0x000168d4) data_form_wide_pane_vc_ParamLimits

0x92eb,	// (0x000168d4) data_form_wide_pane_vc

0x92f7,	// (0x000168e0) form_field_data_wide_pane_vc_g1

0x92ff,	// (0x000168e8) form_field_data_wide_pane_vc_t1_ParamLimits

0x92ff,	// (0x000168e8) form_field_data_wide_pane_vc_t1

0x3bbb,	// (0x000111a4) input_focus_pane_cp6_vc_ParamLimits

0x3bbb,	// (0x000111a4) input_focus_pane_cp6_vc

0x966d,	// (0x00016c56) list_midp_pane_ParamLimits

0x9679,	// (0x00016c62) scroll_pane_cp16_ParamLimits

0x9679,	// (0x00016c62) scroll_pane_cp16

0x96e3,	// (0x00016ccc) button_value_adjust_pane_ParamLimits

0x96e3,	// (0x00016ccc) button_value_adjust_pane

0xa639,	// (0x00017c22) button_value_adjust_pane_cp6_ParamLimits

0xa639,	// (0x00017c22) button_value_adjust_pane_cp6

0xa75f,	// (0x00017d48) settings_code_pane_cp_ParamLimits

0xa75f,	// (0x00017d48) settings_code_pane_cp

0x35a4,	// (0x00010b8d) cell_touch_pane_g1

0x35a4,	// (0x00010b8d) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x0001ccb8) cell_touch_pane_g

0xae1b,	// (0x00018404) cell_touch_pane_cp_ParamLimits

0xae1b,	// (0x00018404) cell_touch_pane_cp

0xae2b,	// (0x00018414) cell_touch_pane_ParamLimits

0xae2b,	// (0x00018414) cell_touch_pane

0x35a4,	// (0x00010b8d) scroll_sc2_down_pane_g1

0x35a4,	// (0x00010b8d) scroll_sc2_up_pane_g1

0x371d,	// (0x00010d06) bg_set_opt_pane_cp4_vc

0xae75,	// (0x0001845e) list_set_graphic_pane_vc_g1_ParamLimits

0xae75,	// (0x0001845e) list_set_graphic_pane_vc_g1

0xae81,	// (0x0001846a) list_set_graphic_pane_vc_g2_ParamLimits

0xae81,	// (0x0001846a) list_set_graphic_pane_vc_g2

0x0001,

0xf9cb,	// (0x0001cfb4) list_set_graphic_pane_vc_g_ParamLimits

0xf9cb,	// (0x0001cfb4) list_set_graphic_pane_vc_g

0xae8d,	// (0x00018476) text_primary_small_cp13_vc_ParamLimits

0xae8d,	// (0x00018476) text_primary_small_cp13_vc

0xaea5,	// (0x0001848e) list_set_graphic_pane_vc_ParamLimits

0xaea5,	// (0x0001848e) list_set_graphic_pane_vc

0x371d,	// (0x00010d06) input_focus_pane_cp2_vc

0x35a4,	// (0x00010b8d) setting_code_pane_vc_g1

0x37b0,	// (0x00010d99) setting_code_pane_vc_t1

0xaeb8,	// (0x000184a1) set_text_pane_vc_t1_ParamLimits

0xaeb8,	// (0x000184a1) set_text_pane_vc_t1

0x371d,	// (0x00010d06) input_focus_pane_cp1_vc

0xaed5,	// (0x000184be) list_set_text_pane_vc

0x35a4,	// (0x00010b8d) setting_text_pane_vc_g1

0x371d,	// (0x00010d06) bg_set_opt_pane_cp2_vc

0x37a7,	// (0x00010d90) setting_slider_graphic_pane_vc_g1

0xaedf,	// (0x000184c8) setting_slider_graphic_pane_vc_t1

0xaeef,	// (0x000184d8) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d0,	// (0x0001cfb9) setting_slider_graphic_pane_vc_t

0xaeff,	// (0x000184e8) slider_set_pane_cp_vc

0xaf07,	// (0x000184f0) slider_set_pane_vc_g1

0xaf10,	// (0x000184f9) slider_set_pane_vc_g2

0x0006,

0xf9d5,	// (0x0001cfbe) slider_set_pane_vc_g

0x3c81,	// (0x0001126a) set_opt_bg_pane_g1_copy1

0x3c89,	// (0x00011272) set_opt_bg_pane_g2_copy1

0xaf3c,	// (0x00018525) set_opt_bg_pane_g3_copy1

0x3c99,	// (0x00011282) set_opt_bg_pane_g4_copy1

0x3ca1,	// (0x0001128a) set_opt_bg_pane_g5_copy1

0x3ca9,	// (0x00011292) set_opt_bg_pane_g6_copy1

0xaf44,	// (0x0001852d) set_opt_bg_pane_g7_copy1

0xaf4e,	// (0x00018537) set_opt_bg_pane_g8_copy1

0xaf56,	// (0x0001853f) set_opt_bg_pane_g9_copy1

0x371d,	// (0x00010d06) bg_set_opt_pane_cp_vc

0xaf5e,	// (0x00018547) setting_slider_pane_vc_t1

0xaf6d,	// (0x00018556) setting_slider_pane_vc_t2

0xaf7d,	// (0x00018566) setting_slider_pane_vc_t3

0x0002,

0xf9e4,	// (0x0001cfcd) setting_slider_pane_vc_t

0xaf8d,	// (0x00018576) slider_set_pane_vc

0x66be,	// (0x00013ca7) volume_set_pane_vc_g1

0x69b9,	// (0x00013fa2) volume_set_pane_vc_g2

0x69c2,	// (0x00013fab) volume_set_pane_vc_g3

0x69cb,	// (0x00013fb4) volume_set_pane_vc_g4

0x69d4,	// (0x00013fbd) volume_set_pane_vc_g5

0x69dd,	// (0x00013fc6) volume_set_pane_vc_g6

0x69e6,	// (0x00013fcf) volume_set_pane_vc_g7

0x69ef,	// (0x00013fd8) volume_set_pane_vc_g8

0x69f8,	// (0x00013fe1) volume_set_pane_vc_g9

0x6a01,	// (0x00013fea) volume_set_pane_vc_g10

0x0009,

0xf9eb,	// (0x0001cfd4) volume_set_pane_vc_g

0xaf95,	// (0x0001857e) volume_set_pane_vc

0xaf9f,	// (0x00018588) button_value_adjust_pane_cp1_vc

0xafa9,	// (0x00018592) list_highlight_pane_cp2_vc

0xafb2,	// (0x0001859b) list_set_pane_vc_ParamLimits

0xafb2,	// (0x0001859b) list_set_pane_vc

0xb010,	// (0x000185f9) main_pane_set_vc_t1_ParamLimits

0xb010,	// (0x000185f9) main_pane_set_vc_t1

0xb025,	// (0x0001860e) main_pane_set_vc_t2_ParamLimits

0xb025,	// (0x0001860e) main_pane_set_vc_t2

0xb037,	// (0x00018620) main_pane_set_vc_t3_ParamLimits

0xb037,	// (0x00018620) main_pane_set_vc_t3

0xb049,	// (0x00018632) main_pane_set_vc_t4_ParamLimits

0xb049,	// (0x00018632) main_pane_set_vc_t4

0x0003,

0xfa00,	// (0x0001cfe9) main_pane_set_vc_t_ParamLimits

0xfa00,	// (0x0001cfe9) main_pane_set_vc_t

0xb05b,	// (0x00018644) setting_code_pane_vc_ParamLimits

0xb05b,	// (0x00018644) setting_code_pane_vc

0xb06a,	// (0x00018653) setting_slider_graphic_pane_vc

0xb06a,	// (0x00018653) setting_slider_pane_vc

0xb06a,	// (0x00018653) setting_text_pane_vc

0xb06a,	// (0x00018653) setting_volume_pane_vc

0xb072,	// (0x0001865b) scroll_pane_cp121_vc

0x3b72,	// (0x0001115b) set_content_pane_vc

0xb372,	// (0x0001895b) button_value_adjust_pane_g1

0xb37b,	// (0x00018964) button_value_adjust_pane_g2

0x0001,

0xfa63,	// (0x0001d04c) button_value_adjust_pane_g

0xb384,	// (0x0001896d) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb384,	// (0x0001896d) form_field_slider_wide_pane_vc_t1

0xb398,	// (0x00018981) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb398,	// (0x00018981) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa68,	// (0x0001d051) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x0001d051) form_field_slider_wide_pane_vc_t

0x378b,	// (0x00010d74) input_focus_pane_cp10_vc_ParamLimits

0x378b,	// (0x00010d74) input_focus_pane_cp10_vc

0xb3c6,	// (0x000189af) slider_cont_pane_cp1_vc_ParamLimits

0xb3c6,	// (0x000189af) slider_cont_pane_cp1_vc

0xb3d8,	// (0x000189c1) slider_form_pane_g1_cp2

0xaf10,	// (0x000184f9) slider_form_pane_g2_cp2

0xb405,	// (0x000189ee) form_field_slider_pane_vc_t3

0xb413,	// (0x000189fc) form_field_slider_pane_vc_t4

0xb421,	// (0x00018a0a) slider_form_pane_vc_ParamLimits

0xb421,	// (0x00018a0a) slider_form_pane_vc

0xb42e,	// (0x00018a17) form_field_slider_pane_vc_t1_ParamLimits

0xb42e,	// (0x00018a17) form_field_slider_pane_vc_t1

0xb398,	// (0x00018981) form_field_slider_pane_vc_t2_ParamLimits

0xb398,	// (0x00018981) form_field_slider_pane_vc_t2

0x0001,

0xfa7a,	// (0x0001d063) form_field_slider_pane_vc_t_ParamLimits

0xfa7a,	// (0x0001d063) form_field_slider_pane_vc_t

0x378b,	// (0x00010d74) input_focus_pane_cp9_vc_ParamLimits

0x378b,	// (0x00010d74) input_focus_pane_cp9_vc

0xb44a,	// (0x00018a33) slider_cont_pane_vc_ParamLimits

0xb44a,	// (0x00018a33) slider_cont_pane_vc

0xb45e,	// (0x00018a47) list_form_graphic_pane_cp_vc_ParamLimits

0xb45e,	// (0x00018a47) list_form_graphic_pane_cp_vc

0x92f7,	// (0x000168e0) form_field_popup_wide_pane_vc_g1

0xb473,	// (0x00018a5c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb473,	// (0x00018a5c) form_field_popup_wide_pane_vc_t1

0x3bbb,	// (0x000111a4) input_focus_pane_cp8_vc_ParamLimits

0x3bbb,	// (0x000111a4) input_focus_pane_cp8_vc

0xb4b8,	// (0x00018aa1) list_form_wide_pane_vc_ParamLimits

0xb4b8,	// (0x00018aa1) list_form_wide_pane_vc

0xb4c4,	// (0x00018aad) list_form_graphic_pane_vc_g1

0xb4cc,	// (0x00018ab5) list_form_graphic_pane_vc_t1_ParamLimits

0xb4cc,	// (0x00018ab5) list_form_graphic_pane_vc_t1

0x3799,	// (0x00010d82) list_highlight_pane_cp5_vc_ParamLimits

0x3799,	// (0x00010d82) list_highlight_pane_cp5_vc

0xb4e8,	// (0x00018ad1) list_form_graphic_pane_vc_ParamLimits

0xb4e8,	// (0x00018ad1) list_form_graphic_pane_vc

0x92f7,	// (0x000168e0) form_field_popup_pane_vc_g1

0xb4fe,	// (0x00018ae7) form_field_popup_pane_vc_t1_ParamLimits

0xb4fe,	// (0x00018ae7) form_field_popup_pane_vc_t1

0x3bbb,	// (0x000111a4) input_focus_pane_cp7_vc_ParamLimits

0x3bbb,	// (0x000111a4) input_focus_pane_cp7_vc

0xb515,	// (0x00018afe) list_form_pane_vc_ParamLimits

0xb515,	// (0x00018afe) list_form_pane_vc

0xb521,	// (0x00018b0a) data_form_pane_vc_t1_ParamLimits

0xb521,	// (0x00018b0a) data_form_pane_vc_t1

0x3c81,	// (0x0001126a) input_focus_pane_vc_g1

0x3c89,	// (0x00011272) input_focus_pane_vc_g2

0x3c91,	// (0x0001127a) input_focus_pane_vc_g3

0x3c99,	// (0x00011282) input_focus_pane_vc_g4

0x3ca1,	// (0x0001128a) input_focus_pane_vc_g5

0x3ca9,	// (0x00011292) input_focus_pane_vc_g6

0x3cb1,	// (0x0001129a) input_focus_pane_vc_g7

0x3cb9,	// (0x000112a2) input_focus_pane_vc_g8

0x3cc1,	// (0x000112aa) input_focus_pane_vc_g9

0x35a4,	// (0x00010b8d) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x0001cc41) input_focus_pane_vc_g

0x92eb,	// (0x000168d4) data_form_pane_vc_ParamLimits

0x92eb,	// (0x000168d4) data_form_pane_vc

0x92f7,	// (0x000168e0) form_field_data_pane_vc_g1

0xb53c,	// (0x00018b25) form_field_data_pane_vc_t1_ParamLimits

0xb53c,	// (0x00018b25) form_field_data_pane_vc_t1

0x3bbb,	// (0x000111a4) input_focus_pane_vc_ParamLimits

0x3bbb,	// (0x000111a4) input_focus_pane_vc

0xb556,	// (0x00018b3f) button_value_adjust_pane_cp3_vc

0xb55e,	// (0x00018b47) button_value_adjust_pane_cp5_vc

0xb566,	// (0x00018b4f) form_field_data_pane_vc_ParamLimits

0xb566,	// (0x00018b4f) form_field_data_pane_vc

0xb57d,	// (0x00018b66) form_field_data_pane_vc_cp2

0xb585,	// (0x00018b6e) form_field_data_wide_pane_vc_ParamLimits

0xb585,	// (0x00018b6e) form_field_data_wide_pane_vc

0xb59b,	// (0x00018b84) form_field_data_wide_pane_vc_cp2

0xb5a3,	// (0x00018b8c) form_field_popup_pane_vc_ParamLimits

0xb5a3,	// (0x00018b8c) form_field_popup_pane_vc

0xb5ba,	// (0x00018ba3) form_field_popup_wide_pane_vc_ParamLimits

0xb5ba,	// (0x00018ba3) form_field_popup_wide_pane_vc

0xb5d0,	// (0x00018bb9) form_field_slider_pane_vc_ParamLimits

0xb5d0,	// (0x00018bb9) form_field_slider_pane_vc

0xb5e3,	// (0x00018bcc) form_field_slider_wide_pane_vc_ParamLimits

0xb5e3,	// (0x00018bcc) form_field_slider_wide_pane_vc

0xb5f6,	// (0x00018bdf) grid_touch_1_pane_ParamLimits

0xb5f6,	// (0x00018bdf) grid_touch_1_pane

0xb602,	// (0x00018beb) grid_touch_2_pane_ParamLimits

0xb602,	// (0x00018beb) grid_touch_2_pane

0x4a6a,	// (0x00012053) touch_pane_g1_ParamLimits

0x4a6a,	// (0x00012053) touch_pane_g1

0xb61a,	// (0x00018c03) cell_app_pane_cp_wide_ParamLimits

0xb61a,	// (0x00018c03) cell_app_pane_cp_wide

0xb62b,	// (0x00018c14) grid_popup_fast_wide_pane_ParamLimits

0xb62b,	// (0x00018c14) grid_popup_fast_wide_pane

0xb63f,	// (0x00018c28) scroll_pane_cp19_ParamLimits

0xb63f,	// (0x00018c28) scroll_pane_cp19

0x371d,	// (0x00010d06) bg_popup_window_pane_cp20

0xb653,	// (0x00018c3c) listscroll_popup_fast_wide_pane

0xb65b,	// (0x00018c44) grid_indicator_nsta_pane

0xb66d,	// (0x00018c56) clock_nsta_pane_g1

0xb676,	// (0x00018c5f) clock_nsta_pane_t1

0xb692,	// (0x00018c7b) cell_indicator_nsta_pane_ParamLimits

0xb692,	// (0x00018c7b) cell_indicator_nsta_pane

0xb6c7,	// (0x00018cb0) cell_indicator_nsta_pane_g1

0xb6d5,	// (0x00018cbe) cell_indicator_nsta_pane_g2

0x0001,

0xfa8b,	// (0x0001d074) cell_indicator_nsta_pane_g

0xb6e7,	// (0x00018cd0) clock_nsta_pane_cp

0xb6f0,	// (0x00018cd9) indicator_nsta_pane_cp

0xb6fa,	// (0x00018ce3) nsta_clock_indic_pane_g1

0x37ef,	// (0x00010dd8) grid_indicator_pane

0x882e,	// (0x00015e17) scroll_pane_cp29

0x5c0f,	// (0x000131f8) indicator_nsta_pane_cp2_ParamLimits

0x5c0f,	// (0x000131f8) indicator_nsta_pane_cp2

0x3799,	// (0x00010d82) main_apps_wheel_pane

0x9550,	// (0x00016b39) form_midp_field_text_pane_ParamLimits

0x9699,	// (0x00016c82) scroll_bar_cp050_ParamLimits

0xb753,	// (0x00018d3c) cell_indicator_pane_ParamLimits

0xb753,	// (0x00018d3c) cell_indicator_pane

0xb76c,	// (0x00018d55) cell_indicator_pane_g1

0xb776,	// (0x00018d5f) grid_wheel_folder_pane_ParamLimits

0xb776,	// (0x00018d5f) grid_wheel_folder_pane

0xb78c,	// (0x00018d75) list_wheel_apps_pane_ParamLimits

0xb78c,	// (0x00018d75) list_wheel_apps_pane

0xb79d,	// (0x00018d86) main_apps_wheel_pane_g1_ParamLimits

0xb79d,	// (0x00018d86) main_apps_wheel_pane_g1

0xb7b1,	// (0x00018d9a) main_apps_wheel_pane_g2_ParamLimits

0xb7b1,	// (0x00018d9a) main_apps_wheel_pane_g2

0x0001,

0xfaa7,	// (0x0001d090) main_apps_wheel_pane_g_ParamLimits

0xfaa7,	// (0x0001d090) main_apps_wheel_pane_g

0xb7c9,	// (0x00018db2) main_apps_wheel_pane_t1_ParamLimits

0xb7c9,	// (0x00018db2) main_apps_wheel_pane_t1

0xb7ec,	// (0x00018dd5) list_wheel_apps_pane_g1

0xb7f4,	// (0x00018ddd) list_wheel_apps_pane_g2

0xb7fc,	// (0x00018de5) list_wheel_apps_pane_g3

0xb806,	// (0x00018def) list_wheel_apps_pane_g4

0xb810,	// (0x00018df9) list_wheel_apps_pane_g5

0x0004,

0xfaac,	// (0x0001d095) list_wheel_apps_pane_g

0x4724,	// (0x00011d0d) navi_icon_text_pane

0x8c4c,	// (0x00016235) aid_fill_nsta

0xb833,	// (0x00018e1c) navi_icon_text_pane_g1

0xb83f,	// (0x00018e28) navi_icon_text_pane_t1

0x4614,	// (0x00011bfd) list_set_graphic_pane_t1_ParamLimits

0x4614,	// (0x00011bfd) list_set_graphic_pane_t1

0x9de4,	// (0x000173cd) popup_midp_note_alarm_window_t6_ParamLimits

0x9de4,	// (0x000173cd) popup_midp_note_alarm_window_t6

0x9df6,	// (0x000173df) popup_midp_note_alarm_window_t7_ParamLimits

0x9df6,	// (0x000173df) popup_midp_note_alarm_window_t7

0x9e08,	// (0x000173f1) popup_midp_note_alarm_window_t8_ParamLimits

0x9e08,	// (0x000173f1) popup_midp_note_alarm_window_t8

0x9e1a,	// (0x00017403) popup_midp_note_alarm_window_t9_ParamLimits

0x9e1a,	// (0x00017403) popup_midp_note_alarm_window_t9

0x9e2c,	// (0x00017415) popup_midp_note_alarm_window_t10_ParamLimits

0x9e2c,	// (0x00017415) popup_midp_note_alarm_window_t10

0x9e3e,	// (0x00017427) popup_midp_note_alarm_window_t11_ParamLimits

0x9e3e,	// (0x00017427) popup_midp_note_alarm_window_t11

0x9e50,	// (0x00017439) scroll_pane_cp17_ParamLimits

0x9e50,	// (0x00017439) scroll_pane_cp17

0x66be,	// (0x00013ca7) volume_small_pane_cp_g1

0x6a0a,	// (0x00013ff3) volume_small_pane_cp_g2

0x6a13,	// (0x00013ffc) volume_small_pane_cp_g3

0x6a1c,	// (0x00014005) volume_small_pane_cp_g4

0x6a25,	// (0x0001400e) volume_small_pane_cp_g5

0x69d4,	// (0x00013fbd) volume_small_pane_cp_g6

0x6a2e,	// (0x00014017) volume_small_pane_cp_g7

0x6a37,	// (0x00014020) volume_small_pane_cp_g8

0x6a40,	// (0x00014029) volume_small_pane_cp_g9

0x6a49,	// (0x00014032) volume_small_pane_cp_g10

0x4896,	// (0x00011e7f) midp_ticker_pane_g1_ParamLimits

0x48a2,	// (0x00011e8b) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x0001cd0d) midp_ticker_pane_g_ParamLimits

0x48ae,	// (0x00011e97) midp_ticker_pane_t1_ParamLimits

0x8c62,	// (0x0001624b) aid_fill_nsta_2

0x9685,	// (0x00016c6e) list_form2_midp_pane

0xa7dd,	// (0x00017dc6) midp_editing_number_pane_ParamLimits

0xa7ec,	// (0x00017dd5) midp_ticker_pane_ParamLimits

0xb851,	// (0x00018e3a) form2_midp_field_pane

0xb875,	// (0x00018e5e) scroll_pane_cp51

0xb895,	// (0x00018e7e) form2_midp_button_pane_ParamLimits

0xb895,	// (0x00018e7e) form2_midp_button_pane

0xb8a7,	// (0x00018e90) form2_midp_content_pane_ParamLimits

0xb8a7,	// (0x00018e90) form2_midp_content_pane

0xb8c1,	// (0x00018eaa) form2_midp_field_choice_group_pane

0xb8c9,	// (0x00018eb2) form2_midp_field_pane_g1

0xb8d1,	// (0x00018eba) form2_midp_field_pane_g2

0xb8d9,	// (0x00018ec2) form2_midp_field_pane_g3

0xb8e1,	// (0x00018eca) form2_midp_field_pane_g4

0x0003,

0xfad1,	// (0x0001d0ba) form2_midp_field_pane_g

0xb8e9,	// (0x00018ed2) form2_midp_gauge_slider_pane

0xb8f1,	// (0x00018eda) form2_midp_gauge_wait_pane

0xb8f9,	// (0x00018ee2) form2_midp_image_pane_ParamLimits

0xb8f9,	// (0x00018ee2) form2_midp_image_pane

0xb914,	// (0x00018efd) form2_midp_label_pane_ParamLimits

0xb914,	// (0x00018efd) form2_midp_label_pane

0xb92d,	// (0x00018f16) form2_midp_label_pane_cp_ParamLimits

0xb92d,	// (0x00018f16) form2_midp_label_pane_cp

0xb94e,	// (0x00018f37) form2_midp_string_pane_ParamLimits

0xb94e,	// (0x00018f37) form2_midp_string_pane

0xb960,	// (0x00018f49) form2_midp_text_pane_ParamLimits

0xb960,	// (0x00018f49) form2_midp_text_pane

0xb97b,	// (0x00018f64) form2_midp_time_pane

0xb98b,	// (0x00018f74) input_focus_pane_cp51_ParamLimits

0xb98b,	// (0x00018f74) input_focus_pane_cp51

0xb9a3,	// (0x00018f8c) form2_midp_label_pane_t1_ParamLimits

0xb9a3,	// (0x00018f8c) form2_midp_label_pane_t1

0xb9e4,	// (0x00018fcd) form2_mdip_text_pane_t1_ParamLimits

0xb9e4,	// (0x00018fcd) form2_mdip_text_pane_t1

0xba03,	// (0x00018fec) form2_midp_time_pane_t1

0xba1e,	// (0x00019007) form2_midp_gauge_slider_pane_t1

0xba30,	// (0x00019019) form2_midp_gauge_slider_pane_t2

0xba42,	// (0x0001902b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfada,	// (0x0001d0c3) form2_midp_gauge_slider_pane_t

0xba54,	// (0x0001903d) form2_midp_slider_pane

0xba60,	// (0x00019049) form2_midp_gauge_wait_pane_t1

0xba6e,	// (0x00019057) form2_midp_wait_pane_ParamLimits

0xba6e,	// (0x00019057) form2_midp_wait_pane

0xba99,	// (0x00019082) list_single_2graphic_pane_cp4_ParamLimits

0xba99,	// (0x00019082) list_single_2graphic_pane_cp4

0x9360,	// (0x00016949) list_single_midp_graphic_pane_cp_ParamLimits

0x9360,	// (0x00016949) list_single_midp_graphic_pane_cp

0x371d,	// (0x00010d06) list_highlight_pane_cp20

0xbac1,	// (0x000190aa) list_single_2graphic_pane_g1_cp4

0xad21,	// (0x0001830a) list_single_2graphic_pane_g2_cp4

0xbac9,	// (0x000190b2) list_single_2graphic_pane_t1_cp4

0x3799,	// (0x00010d82) list_highlight_pane_cp21

0xbad8,	// (0x000190c1) list_single_midp_graphic_pane_g4_cp

0xbae7,	// (0x000190d0) list_single_midp_graphic_pane_t1_cp

0xbafc,	// (0x000190e5) form2_mdip_string_pane_t1_ParamLimits

0xbafc,	// (0x000190e5) form2_mdip_string_pane_t1

0x371d,	// (0x00010d06) bg_wml_button_pane_cp2

0x35a4,	// (0x00010b8d) form2_midp_image_pane_g1

0x3b25,	// (0x0001110e) list_double_large_graphic_pane_g5_ParamLimits

0x3b25,	// (0x0001110e) list_double_large_graphic_pane_g5

0x8a88,	// (0x00016071) midp_form_pane_ParamLimits

0x3799,	// (0x00010d82) main_apps_wheel_pane_ParamLimits

0x6300,	// (0x000138e9) popup_preview_window_ParamLimits

0x6300,	// (0x000138e9) popup_preview_window

0x64bb,	// (0x00013aa4) popup_touch_info_window_ParamLimits

0x64bb,	// (0x00013aa4) popup_touch_info_window

0x64d9,	// (0x00013ac2) popup_touch_menu_window_ParamLimits

0x64d9,	// (0x00013ac2) popup_touch_menu_window

0x359a,	// (0x00010b83) bg_popup_sub_pane_cp6

0xbc03,	// (0x000191ec) list_touch_menu_pane

0xbc0b,	// (0x000191f4) list_single_touch_menu_pane_ParamLimits

0xbc0b,	// (0x000191f4) list_single_touch_menu_pane

0xbc21,	// (0x0001920a) list_single_touch_menu_pane_t1

0x3799,	// (0x00010d82) bg_popup_sub_pane_cp7_ParamLimits

0x3799,	// (0x00010d82) bg_popup_sub_pane_cp7

0xbc2f,	// (0x00019218) heading_sub_pane

0xbc37,	// (0x00019220) list_touch_info_pane_ParamLimits

0xbc37,	// (0x00019220) list_touch_info_pane

0xbc46,	// (0x0001922f) list_single_touch_info_pane_ParamLimits

0xbc46,	// (0x0001922f) list_single_touch_info_pane

0xbc58,	// (0x00019241) list_single_touch_info_pane_t1

0xbc66,	// (0x0001924f) list_single_touch_info_pane_t2

0x0001,

0xfae8,	// (0x0001d0d1) list_single_touch_info_pane_t

0x487f,	// (0x00011e68) bg_popup_heading_pane_cp

0xbc74,	// (0x0001925d) heading_sub_pane_t1

0x9285,	// (0x0001686e) bg_popup_preview_window_pane_cp_ParamLimits

0x9285,	// (0x0001686e) bg_popup_preview_window_pane_cp

0xbc2f,	// (0x00019218) heading_preview_pane

0xbc37,	// (0x00019220) list_preview_pane_ParamLimits

0xbc37,	// (0x00019220) list_preview_pane

0xbc82,	// (0x0001926b) popup_preview_window_g1

0xbc46,	// (0x0001922f) list_single_preview_pane_ParamLimits

0xbc46,	// (0x0001922f) list_single_preview_pane

0xbc8a,	// (0x00019273) list_single_preview_pane_g1

0xbc92,	// (0x0001927b) list_single_preview_pane_t1

0xbc58,	// (0x00019241) list_single_preview_pane_t2

0x0001,

0xfaed,	// (0x0001d0d6) list_single_preview_pane_t

0xbca0,	// (0x00019289) bg_popup_heading_pane_cp2_ParamLimits

0xbca0,	// (0x00019289) bg_popup_heading_pane_cp2

0xbcb6,	// (0x0001929f) heading_preview_pane_g1

0xbcbe,	// (0x000192a7) heading_preview_pane_t1_ParamLimits

0xbcbe,	// (0x000192a7) heading_preview_pane_t1

0x3806,	// (0x00010def) soft_indicator_pane_t1_ParamLimits

0x3ae5,	// (0x000110ce) scroll_pane_ParamLimits

0x4114,	// (0x000116fd) scroll_sc2_left_pane

0x410b,	// (0x000116f4) scroll_sc2_right_pane

0x4133,	// (0x0001171c) scroll_bg_pane_g1_ParamLimits

0x4148,	// (0x00011731) scroll_bg_pane_g2_ParamLimits

0x4160,	// (0x00011749) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x0001cc98) scroll_bg_pane_g_ParamLimits

0x4133,	// (0x0001171c) scroll_handle_pane_g1_ParamLimits

0x4175,	// (0x0001175e) scroll_handle_pane_g2_ParamLimits

0x4160,	// (0x00011749) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x0001cc9f) scroll_handle_pane_g_ParamLimits

0x5f83,	// (0x0001356c) popup_choice_list_window_ParamLimits

0x5f83,	// (0x0001356c) popup_choice_list_window

0x9081,	// (0x0001666a) choice_list_pane

0x9131,	// (0x0001671a) cell_toolbar_pane_t1

0x9159,	// (0x00016742) toolbar_button_pane_ParamLimits

0xa30a,	// (0x000178f3) ai_gene_pane_1_t2_ParamLimits

0xa30a,	// (0x000178f3) ai_gene_pane_1_t2

0x0001,

0xf8de,	// (0x0001cec7) ai_gene_pane_1_t_ParamLimits

0xf8de,	// (0x0001cec7) ai_gene_pane_1_t

0xbcdb,	// (0x000192c4) scroll_sc2_left_pane_g1

0xbcdb,	// (0x000192c4) scroll_sc2_right_pane_g1

0x4a5e,	// (0x00012047) bg_popup_sub_pane_cp10

0xbce5,	// (0x000192ce) list_choice_list_pane

0xbcfe,	// (0x000192e7) list_single_choice_list_pane_ParamLimits

0xbcfe,	// (0x000192e7) list_single_choice_list_pane

0xbd11,	// (0x000192fa) list_single_choice_list_pane_g1

0x868d,	// (0x00015c76) list_single_choice_list_pane_t1_ParamLimits

0x868d,	// (0x00015c76) list_single_choice_list_pane_t1

0xbd19,	// (0x00019302) choice_list_pane_g1

0xbd21,	// (0x0001930a) choice_list_pane_t1

0x359a,	// (0x00010b83) input_focus_pane_cp11

0x3f26,	// (0x0001150f) title_pane_stacon_g2_ParamLimits

0x3f26,	// (0x0001150f) title_pane_stacon_g2

0x0002,

0xf695,	// (0x0001cc7e) title_pane_stacon_g_ParamLimits

0xf695,	// (0x0001cc7e) title_pane_stacon_g

0x487f,	// (0x00011e68) cursor_press_pane

0x602b,	// (0x00013614) popup_fep_hwr_window_ParamLimits

0x602b,	// (0x00013614) popup_fep_hwr_window

0x60a3,	// (0x0001368c) popup_fep_vkb_window_ParamLimits

0x60a3,	// (0x0001368c) popup_fep_vkb_window

0xbd2f,	// (0x00019318) cursor_press_pane_g1

0x0002,

0xfb16,	// (0x0001d0ff) fep_vkb_side_pane_g_ParamLimits

0x6a8b,	// (0x00014074) fep_hwr_candidate_pane_ParamLimits

0x6a8b,	// (0x00014074) fep_hwr_candidate_pane

0x6ab5,	// (0x0001409e) fep_hwr_side_pane_ParamLimits

0x6ab5,	// (0x0001409e) fep_hwr_side_pane

0x6ad5,	// (0x000140be) fep_hwr_top_pane_ParamLimits

0x6ad5,	// (0x000140be) fep_hwr_top_pane

0x6aed,	// (0x000140d6) fep_hwr_write_pane_ParamLimits

0x6aed,	// (0x000140d6) fep_hwr_write_pane

0xfb16,	// (0x0001d0ff) fep_vkb_side_pane_g

0xbd37,	// (0x00019320) fep_hwr_top_pane_g1

0xbd49,	// (0x00019332) fep_hwr_top_pane_g2

0x6b27,	// (0x00014110) fep_hwr_top_pane_g3

0x0002,

0xfaf2,	// (0x0001d0db) fep_hwr_top_pane_g

0x6b3c,	// (0x00014125) fep_hwr_top_text_pane

0x4238,	// (0x00011821) fep_hwr_top_text_pane_g1

0xbd7f,	// (0x00019368) fep_hwr_top_text_pane_t1

0x6c32,	// (0x0001421b) fep_hwr_candidate_pane_g1

0xbfc4,	// (0x000195ad) fep_vkb_keypad_pane_g3_ParamLimits

0xbfc4,	// (0x000195ad) fep_vkb_keypad_pane_g3

0xbfec,	// (0x000195d5) fep_vkb_keypad_pane_g4_ParamLimits

0xbfec,	// (0x000195d5) fep_vkb_keypad_pane_g4

0xc05b,	// (0x00019644) fep_vkb_bottom_pane_g2_ParamLimits

0xc05b,	// (0x00019644) fep_vkb_bottom_pane_g2

0x0001,

0xfb1d,	// (0x0001d106) fep_vkb_bottom_pane_g_ParamLimits

0xfb1d,	// (0x0001d106) fep_vkb_bottom_pane_g

0xbcdb,	// (0x000192c4) cell_vkb_side_pane_g2

0x0001,

0xfb27,	// (0x0001d110) cell_vkb_side_pane_g

0xc0e6,	// (0x000196cf) cell_vkb_side_pane_t1

0xc0f4,	// (0x000196dd) cell_vkb_side_pane_t1_copy1

0xbcdb,	// (0x000192c4) bg_fep_vkb_candidate_pane_g2

0xc220,	// (0x00019809) cell_vkb_candidate_pane_ParamLimits

0xbd8d,	// (0x00019376) aid_size_cell_vkb_ParamLimits

0xbd8d,	// (0x00019376) aid_size_cell_vkb

0xc220,	// (0x00019809) cell_vkb_candidate_pane

0x6c59,	// (0x00014242) bg_popup_fep_shadow_pane_g1

0xbe1b,	// (0x00019404) fep_vkb_bottom_pane_ParamLimits

0xbe1b,	// (0x00019404) fep_vkb_bottom_pane

0xbe51,	// (0x0001943a) fep_vkb_candidate_pane_ParamLimits

0xbe51,	// (0x0001943a) fep_vkb_candidate_pane

0xbe6d,	// (0x00019456) fep_vkb_keypad_pane_ParamLimits

0xbe6d,	// (0x00019456) fep_vkb_keypad_pane

0xbeac,	// (0x00019495) fep_vkb_side_pane_ParamLimits

0xbeac,	// (0x00019495) fep_vkb_side_pane

0xbee8,	// (0x000194d1) fep_vkb_top_pane_ParamLimits

0xbee8,	// (0x000194d1) fep_vkb_top_pane

0xbf1d,	// (0x00019506) fep_vkb_top_pane_g1_ParamLimits

0xbf1d,	// (0x00019506) fep_vkb_top_pane_g1

0xbf2c,	// (0x00019515) fep_vkb_top_pane_g2_ParamLimits

0xbf2c,	// (0x00019515) fep_vkb_top_pane_g2

0xbf3b,	// (0x00019524) fep_vkb_top_pane_g3_ParamLimits

0xbf3b,	// (0x00019524) fep_vkb_top_pane_g3

0x0003,

0xfb0d,	// (0x0001d0f6) fep_vkb_top_pane_g_ParamLimits

0xfb0d,	// (0x0001d0f6) fep_vkb_top_pane_g

0xbf59,	// (0x00019542) fep_vkb_top_text_pane_ParamLimits

0xbf59,	// (0x00019542) fep_vkb_top_text_pane

0xbf6a,	// (0x00019553) fep_vkb_side_pane_g1_ParamLimits

0xbf6a,	// (0x00019553) fep_vkb_side_pane_g1

0xbfb3,	// (0x0001959c) grid_vkb_side_pane_ParamLimits

0xbfb3,	// (0x0001959c) grid_vkb_side_pane

0x6c61,	// (0x0001424a) bg_popup_fep_shadow_pane_g2

0x6c6a,	// (0x00014253) bg_popup_fep_shadow_pane_g3

0x6c72,	// (0x0001425b) bg_popup_fep_shadow_pane_g4

0x6c7b,	// (0x00014264) bg_popup_fep_shadow_pane_g5

0x6c85,	// (0x0001426e) bg_popup_fep_shadow_pane_g6

0x6c8d,	// (0x00014276) bg_popup_fep_shadow_pane_g7

0x3c99,	// (0x00011282) bg_popup_fep_shadow_pane_g8

0xc00a,	// (0x000195f3) grid_vkb_keypad_number_pane_ParamLimits

0xc00a,	// (0x000195f3) grid_vkb_keypad_number_pane

0xc01a,	// (0x00019603) grid_vkb_keypad_pane_ParamLimits

0xc01a,	// (0x00019603) grid_vkb_keypad_pane

0xc040,	// (0x00019629) fep_vkb_bottom_pane_g1_ParamLimits

0xc040,	// (0x00019629) fep_vkb_bottom_pane_g1

0xc069,	// (0x00019652) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc069,	// (0x00019652) grid_vkb_keypad_bottom_left_pane

0xc07e,	// (0x00019667) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc07e,	// (0x00019667) grid_vkb_keypad_bottom_right_pane

0xc093,	// (0x0001967c) fep_vkb_top_text_pane_g1

0xc0ae,	// (0x00019697) fep_vkb_top_text_pane_t1

0xc0c3,	// (0x000196ac) cell_vkb_side_pane_ParamLimits

0xc0c3,	// (0x000196ac) cell_vkb_side_pane

0xbcdb,	// (0x000192c4) cell_vkb_side_pane_g1

0xc102,	// (0x000196eb) cell_vkb_keypad_pane_ParamLimits

0xc102,	// (0x000196eb) cell_vkb_keypad_pane

0xc177,	// (0x00019760) cell_vkb_keypad_pane_g1

0x0008,

0xfb3a,	// (0x0001d123) bg_popup_fep_shadow_pane_g

0x6c9f,	// (0x00014288) cell_hwr_side_pane_g1

0x6c9f,	// (0x00014288) cell_hwr_side_pane_g2

0xc181,	// (0x0001976a) cell_vkb_keypad_pane_t1

0xc18f,	// (0x00019778) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc18f,	// (0x00019778) cell_vkb_keypad_bottom_left_pane

0xc1ac,	// (0x00019795) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1ac,	// (0x00019795) cell_vkb_keypad_bottom_right_pane

0xbcdb,	// (0x000192c4) cell_vkb_keypad_bottom_left_pane_g1

0xbcdb,	// (0x000192c4) cell_vkb_keypad_bottom_right_pane_g1

0xc1e5,	// (0x000197ce) cell_vkb_keypad_number_pane_ParamLimits

0xc1e5,	// (0x000197ce) cell_vkb_keypad_number_pane

0xc204,	// (0x000197ed) cell_vkb_keypad_number_pane_g1

0xc20e,	// (0x000197f7) cell_vkb_keypad_number_pane_g2

0xc217,	// (0x00019800) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2c,	// (0x0001d115) cell_vkb_keypad_number_pane_g

0xc181,	// (0x0001976a) cell_vkb_keypad_number_pane_t1

0xc23b,	// (0x00019824) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x0001d136) cell_hwr_side_pane_g

0xc254,	// (0x0001983d) cell_hwr_side_pane_t1

0x6ca9,	// (0x00014292) cell_hwr_side_pane_t1_copy1

0x6cb7,	// (0x000142a0) cell_hwr_candidate_pane_g1

0x6ce6,	// (0x000142cf) cell_hwr_candidate_pane_t1

0xbcdb,	// (0x000192c4) cell_vkb_candidate_pane_g2

0xc298,	// (0x00019881) cell_vkb_candidate_pane_t1

0x6a52,	// (0x0001403b) bg_popup_fep_shadow_pane_ParamLimits

0x6a52,	// (0x0001403b) bg_popup_fep_shadow_pane

0x6b07,	// (0x000140f0) bg_fep_hwr_top_pane_g4

0xbd5b,	// (0x00019344) bg_hwr_side_pane_g1_ParamLimits

0xbd5b,	// (0x00019344) bg_hwr_side_pane_g1

0x6b78,	// (0x00014161) cell_hwr_side_pane_ParamLimits

0x6b78,	// (0x00014161) cell_hwr_side_pane

0x6bb3,	// (0x0001419c) fep_hwr_write_pane_g1_ParamLimits

0x6bb3,	// (0x0001419c) fep_hwr_write_pane_g1

0x6bc0,	// (0x000141a9) fep_hwr_write_pane_g2_ParamLimits

0x6bc0,	// (0x000141a9) fep_hwr_write_pane_g2

0x6bcd,	// (0x000141b6) fep_hwr_write_pane_g3_ParamLimits

0x6bcd,	// (0x000141b6) fep_hwr_write_pane_g3

0x6bdb,	// (0x000141c4) fep_hwr_write_pane_g4_ParamLimits

0x6bdb,	// (0x000141c4) fep_hwr_write_pane_g4

0x0005,

0xfaf9,	// (0x0001d0e2) fep_hwr_write_pane_g_ParamLimits

0xfaf9,	// (0x0001d0e2) fep_hwr_write_pane_g

0x6b07,	// (0x000140f0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6b07,	// (0x000140f0) bg_fep_hwr_candidate_pane_g2

0x6bf0,	// (0x000141d9) cell_hwr_candidate_pane_ParamLimits

0x6bf0,	// (0x000141d9) cell_hwr_candidate_pane

0x6c32,	// (0x0001421b) fep_hwr_candidate_pane_g1_ParamLimits

0xbdbb,	// (0x000193a4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbdbb,	// (0x000193a4) bg_popup_fep_shadow_pane_cp2

0xbf4b,	// (0x00019534) fep_vkb_top_pane_g4_ParamLimits

0xbf4b,	// (0x00019534) fep_vkb_top_pane_g4

0xbf91,	// (0x0001957a) fep_vkb_side_pane_g2_ParamLimits

0xbf91,	// (0x0001957a) fep_vkb_side_pane_g2

0x83be,	// (0x000159a7) list_setting_pane_t4_ParamLimits

0x83be,	// (0x000159a7) list_setting_pane_t4

0x8438,	// (0x00015a21) list_setting_number_pane_t5_ParamLimits

0x8438,	// (0x00015a21) list_setting_number_pane_t5

0x883e,	// (0x00015e27) list_double_heading_pane_cp2_ParamLimits

0x883e,	// (0x00015e27) list_double_heading_pane_cp2

0x3d73,	// (0x0001135c) list_double_heading_pane_g1_cp2_ParamLimits

0x3d73,	// (0x0001135c) list_double_heading_pane_g1_cp2

0xc2a6,	// (0x0001988f) list_double_heading_pane_g2_cp2_ParamLimits

0xc2a6,	// (0x0001988f) list_double_heading_pane_g2_cp2

0xc2ba,	// (0x000198a3) list_double_heading_pane_t1_cp2_ParamLimits

0xc2ba,	// (0x000198a3) list_double_heading_pane_t1_cp2

0xc2d0,	// (0x000198b9) list_double_heading_pane_t2_cp2_ParamLimits

0xc2d0,	// (0x000198b9) list_double_heading_pane_t2_cp2

0x3592,	// (0x00010b7b) aid_value_unit2

0x57a8,	// (0x00012d91) popup_preview_fixed_window

0x38dd,	// (0x00010ec6) bg_popup_preview_window_pane_cp02

0xc2e2,	// (0x000198cb) list_preview_fixed_pane

0xc328,	// (0x00019911) list_empty_pane_fp_ParamLimits

0xc328,	// (0x00019911) list_empty_pane_fp

0xc328,	// (0x00019911) list_single_cale_day_pane_fp_ParamLimits

0xc328,	// (0x00019911) list_single_cale_day_pane_fp

0xc328,	// (0x00019911) list_single_graphic_heading_pane_fp_ParamLimits

0xc328,	// (0x00019911) list_single_graphic_heading_pane_fp

0xc328,	// (0x00019911) list_single_graphic_pane_fp_ParamLimits

0xc328,	// (0x00019911) list_single_graphic_pane_fp

0xc328,	// (0x00019911) list_single_heading_pane_fp_ParamLimits

0xc328,	// (0x00019911) list_single_heading_pane_fp

0xc328,	// (0x00019911) list_single_pane_fp_ParamLimits

0xc328,	// (0x00019911) list_single_pane_fp

0xc33e,	// (0x00019927) list_single_pane_fp_g1_ParamLimits

0xc33e,	// (0x00019927) list_single_pane_fp_g1

0x3d7f,	// (0x00011368) list_single_pane_fp_g2_ParamLimits

0x3d7f,	// (0x00011368) list_single_pane_fp_g2

0xc34a,	// (0x00019933) list_single_pane_fp_g3_ParamLimits

0xc34a,	// (0x00019933) list_single_pane_fp_g3

0xc35e,	// (0x00019947) list_single_pane_fp_g4_ParamLimits

0xc35e,	// (0x00019947) list_single_pane_fp_g4

0x0003,

0xfb60,	// (0x0001d149) list_single_pane_fp_g_ParamLimits

0xfb60,	// (0x0001d149) list_single_pane_fp_g

0xc36a,	// (0x00019953) list_single_pane_fp_t1_ParamLimits

0xc36a,	// (0x00019953) list_single_pane_fp_t1

0xc381,	// (0x0001996a) list_single_graphic_pane_fp_g1_ParamLimits

0xc381,	// (0x0001996a) list_single_graphic_pane_fp_g1

0xc33e,	// (0x00019927) list_single_graphic_pane_fp_g2_ParamLimits

0xc33e,	// (0x00019927) list_single_graphic_pane_fp_g2

0x3d7f,	// (0x00011368) list_single_graphic_pane_fp_g3_ParamLimits

0x3d7f,	// (0x00011368) list_single_graphic_pane_fp_g3

0xc34a,	// (0x00019933) list_single_graphic_pane_fp_g4_ParamLimits

0xc34a,	// (0x00019933) list_single_graphic_pane_fp_g4

0xc35e,	// (0x00019947) list_single_graphic_pane_fp_g5_ParamLimits

0xc35e,	// (0x00019947) list_single_graphic_pane_fp_g5

0x0004,

0xfb69,	// (0x0001d152) list_single_graphic_pane_fp_g_ParamLimits

0xfb69,	// (0x0001d152) list_single_graphic_pane_fp_g

0xc38d,	// (0x00019976) list_single_graphic_pane_fp_t1_ParamLimits

0xc38d,	// (0x00019976) list_single_graphic_pane_fp_t1

0xc381,	// (0x0001996a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc381,	// (0x0001996a) list_single_graphic_heading_pane_fp_g1

0xc33e,	// (0x00019927) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc33e,	// (0x00019927) list_single_graphic_heading_pane_fp_g2

0x3d7f,	// (0x00011368) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3d7f,	// (0x00011368) list_single_graphic_heading_pane_fp_g3

0xc34a,	// (0x00019933) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc34a,	// (0x00019933) list_single_graphic_heading_pane_fp_g4

0xc35e,	// (0x00019947) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc35e,	// (0x00019947) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0001d152) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0001d152) list_single_graphic_heading_pane_fp_g

0xc3a3,	// (0x0001998c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc3a3,	// (0x0001998c) list_single_graphic_heading_pane_fp_t1

0xc3b9,	// (0x000199a2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc3b9,	// (0x000199a2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb74,	// (0x0001d15d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb74,	// (0x0001d15d) list_single_graphic_heading_pane_fp_t

0xc3cb,	// (0x000199b4) list_single_cale_day_pane_fp_g1_ParamLimits

0xc3cb,	// (0x000199b4) list_single_cale_day_pane_fp_g1

0xc403,	// (0x000199ec) list_single_cale_day_pane_fp_g2_ParamLimits

0xc403,	// (0x000199ec) list_single_cale_day_pane_fp_g2

0xc40f,	// (0x000199f8) list_single_cale_day_pane_fp_g3_ParamLimits

0xc40f,	// (0x000199f8) list_single_cale_day_pane_fp_g3

0xc437,	// (0x00019a20) list_single_cale_day_pane_fp_g4_ParamLimits

0xc437,	// (0x00019a20) list_single_cale_day_pane_fp_g4

0xc45b,	// (0x00019a44) list_single_cale_day_pane_fp_g5_ParamLimits

0xc45b,	// (0x00019a44) list_single_cale_day_pane_fp_g5

0x0004,

0xfb79,	// (0x0001d162) list_single_cale_day_pane_fp_g_ParamLimits

0xfb79,	// (0x0001d162) list_single_cale_day_pane_fp_g

0xc47f,	// (0x00019a68) list_single_cale_day_pane_fp_t1_ParamLimits

0xc47f,	// (0x00019a68) list_single_cale_day_pane_fp_t1

0xc4a5,	// (0x00019a8e) list_single_cale_day_pane_fp_t2_ParamLimits

0xc4a5,	// (0x00019a8e) list_single_cale_day_pane_fp_t2

0xc4be,	// (0x00019aa7) list_single_cale_day_pane_fp_t3_ParamLimits

0xc4be,	// (0x00019aa7) list_single_cale_day_pane_fp_t3

0x0002,

0xfb84,	// (0x0001d16d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb84,	// (0x0001d16d) list_single_cale_day_pane_fp_t

0xc33e,	// (0x00019927) list_empty_pane_fp_g1_ParamLimits

0xc33e,	// (0x00019927) list_empty_pane_fp_g1

0xc4d7,	// (0x00019ac0) list_empty_pane_fp_t1

0xc4e5,	// (0x00019ace) list_empty_pane_fp_t2

0x0001,

0xfb8b,	// (0x0001d174) list_empty_pane_fp_t

0xc33e,	// (0x00019927) list_single_heading_pane_fp_g1_ParamLimits

0xc33e,	// (0x00019927) list_single_heading_pane_fp_g1

0x3d7f,	// (0x00011368) list_single_heading_pane_fp_g2_ParamLimits

0x3d7f,	// (0x00011368) list_single_heading_pane_fp_g2

0xc34a,	// (0x00019933) list_single_heading_pane_fp_g3_ParamLimits

0xc34a,	// (0x00019933) list_single_heading_pane_fp_g3

0x0002,

0xfb90,	// (0x0001d179) list_single_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x0001d179) list_single_heading_pane_fp_g

0xc4f3,	// (0x00019adc) list_single_heading_pane_fp_t1_ParamLimits

0xc4f3,	// (0x00019adc) list_single_heading_pane_fp_t1

0xc505,	// (0x00019aee) list_single_heading_pane_fp_t2_ParamLimits

0xc505,	// (0x00019aee) list_single_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0001d180) list_single_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0001d180) list_single_heading_pane_fp_t

0x86f3,	// (0x00015cdc) aid_size_cell_fast

0x38c0,	// (0x00010ea9) soft_indicator_pane_cp1_t1

0x86fc,	// (0x00015ce5) cell_app_pane_cp2_ParamLimits

0x86fc,	// (0x00015ce5) cell_app_pane_cp2

0x6a74,	// (0x0001405d) fep_hwr_candidate_drop_down_list_pane

0x6c4c,	// (0x00014235) fep_hwr_candidate_pane_g3_ParamLimits

0x6c4c,	// (0x00014235) fep_hwr_candidate_pane_g3

0x2a91,	// (0x0001007a) fep_hwr_candidate_pane_g4_ParamLimits

0x2a91,	// (0x0001007a) fep_hwr_candidate_pane_g4

0x0002,

0xfb06,	// (0x0001d0ef) fep_hwr_candidate_pane_g_ParamLimits

0xfb06,	// (0x0001d0ef) fep_hwr_candidate_pane_g

0xbe40,	// (0x00019429) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe40,	// (0x00019429) fep_vkb_candidate_drop_down_list_pane

0xc243,	// (0x0001982c) fep_vkb_candidate_pane_g3

0xc24b,	// (0x00019834) fep_vkb_candidate_pane_g4

0x0002,

0xfb33,	// (0x0001d11c) fep_vkb_candidate_pane_g

0x6cb7,	// (0x000142a0) cell_hwr_candidate_pane_g1_ParamLimits

0x6cc5,	// (0x000142ae) cell_hwr_candidate_pane_g3_ParamLimits

0x6cc5,	// (0x000142ae) cell_hwr_candidate_pane_g3

0xe02c,	// (0x0001b615) cell_hwr_candidate_pane_g4_ParamLimits

0xe02c,	// (0x0001b615) cell_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x0001d13b) cell_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x0001d13b) cell_hwr_candidate_pane_g

0xc262,	// (0x0001984b) cell_vkb_candidate_pane_g3_ParamLimits

0xc262,	// (0x0001984b) cell_vkb_candidate_pane_g3

0xc27d,	// (0x00019866) cell_vkb_candidate_pane_g4_ParamLimits

0xc27d,	// (0x00019866) cell_vkb_candidate_pane_g4

0xc51b,	// (0x00019b04) cell_app_pane_cp2_g1_ParamLimits

0xc51b,	// (0x00019b04) cell_app_pane_cp2_g1

0xc539,	// (0x00019b22) cell_app_pane_cp2_g2_ParamLimits

0xc539,	// (0x00019b22) cell_app_pane_cp2_g2

0x0001,

0xfb9c,	// (0x0001d185) cell_app_pane_cp2_g_ParamLimits

0xfb9c,	// (0x0001d185) cell_app_pane_cp2_g

0xc545,	// (0x00019b2e) cell_app_pane_cp2_t1_ParamLimits

0xc545,	// (0x00019b2e) cell_app_pane_cp2_t1

0x3bbb,	// (0x000111a4) grid_highlight_pane_cp1_ParamLimits

0x3bbb,	// (0x000111a4) grid_highlight_pane_cp1

0x6d04,	// (0x000142ed) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d04,	// (0x000142ed) cell_hwr_candidate_pane_cp1

0x6cb7,	// (0x000142a0) fep_hwr_candidate_drop_down_list_pane_g1

0x6d23,	// (0x0001430c) fep_hwr_candidate_drop_down_list_pane_g2

0x6d30,	// (0x00014319) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x0001d18a) fep_hwr_candidate_drop_down_list_pane_g

0x6d3d,	// (0x00014326) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d46,	// (0x0001432f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d46,	// (0x0001432f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d53,	// (0x0001433c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d53,	// (0x0001433c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d60,	// (0x00014349) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d60,	// (0x00014349) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6d6d,	// (0x00014356) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d6d,	// (0x00014356) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d88,	// (0x00014371) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d88,	// (0x00014371) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6da3,	// (0x0001438c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6da3,	// (0x0001438c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6dbe,	// (0x000143a7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6dbe,	// (0x000143a7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6dd9,	// (0x000143c2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6dd9,	// (0x000143c2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x0001d191) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x0001d191) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc557,	// (0x00019b40) cell_vkb_candidate_pane_cp1_ParamLimits

0xc557,	// (0x00019b40) cell_vkb_candidate_pane_cp1

0xbf4b,	// (0x00019534) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf4b,	// (0x00019534) fep_vkb_candidate_drop_down_list_pane_g1

0xc577,	// (0x00019b60) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc577,	// (0x00019b60) fep_vkb_candidate_drop_down_list_pane_g2

0xc584,	// (0x00019b6d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc584,	// (0x00019b6d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001d1a2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb9,	// (0x0001d1a2) fep_vkb_candidate_drop_down_list_pane_g

0xc591,	// (0x00019b7a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc591,	// (0x00019b7a) fep_vkb_candidate_drop_down_list_scroll_pane

0xc59e,	// (0x00019b87) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc59e,	// (0x00019b87) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc5ab,	// (0x00019b94) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc5ab,	// (0x00019b94) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc5b7,	// (0x00019ba0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc5b7,	// (0x00019ba0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5c3,	// (0x00019bac) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5c3,	// (0x00019bac) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5e4,	// (0x00019bcd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5e4,	// (0x00019bcd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc605,	// (0x00019bee) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc605,	// (0x00019bee) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc626,	// (0x00019c0f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc626,	// (0x00019c0f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc647,	// (0x00019c30) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc647,	// (0x00019c30) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001d1a9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001d1a9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b73,	// (0x0001515c) title_pane_g1_ParamLimits

0x7b80,	// (0x00015169) title_pane_g2_ParamLimits

0xf529,	// (0x0001cb12) title_pane_g_ParamLimits

0x4230,	// (0x00011819) aid_call2_pane

0x4228,	// (0x00011811) aid_call_pane

0x4238,	// (0x00011821) popup_clock_analogue_window_g1

0x4238,	// (0x00011821) popup_clock_analogue_window_g2

0x5b19,	// (0x00013102) popup_clock_analogue_window_g3

0x5b22,	// (0x0001310b) popup_clock_analogue_window_g4

0x35a4,	// (0x00010b8d) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x0001ccad) popup_clock_analogue_window_g

0x5b2a,	// (0x00013113) popup_clock_analogue_window_t1

0x5b38,	// (0x00013121) clock_digital_number_pane_ParamLimits

0x5b38,	// (0x00013121) clock_digital_number_pane

0x5b44,	// (0x0001312d) clock_digital_number_pane_cp02_ParamLimits

0x5b44,	// (0x0001312d) clock_digital_number_pane_cp02

0x5b50,	// (0x00013139) clock_digital_number_pane_cp03_ParamLimits

0x5b50,	// (0x00013139) clock_digital_number_pane_cp03

0x5b5c,	// (0x00013145) clock_digital_number_pane_cp04_ParamLimits

0x5b5c,	// (0x00013145) clock_digital_number_pane_cp04

0x5b68,	// (0x00013151) clock_digital_separator_pane_ParamLimits

0x5b68,	// (0x00013151) clock_digital_separator_pane

0x5b74,	// (0x0001315d) popup_clock_digital_window_t1_ParamLimits

0x5b74,	// (0x0001315d) popup_clock_digital_window_t1

0x35a4,	// (0x00010b8d) clock_digital_number_pane_g1

0x35a4,	// (0x00010b8d) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x0001ccb8) clock_digital_number_pane_g

0x35a4,	// (0x00010b8d) clock_digital_separator_pane_g1

0x35a4,	// (0x00010b8d) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x0001ccb8) clock_digital_separator_pane_g

0x8c4c,	// (0x00016235) aid_fill_nsta_ParamLimits

0x8d98,	// (0x00016381) indicator_nsta_pane_ParamLimits

0x8f11,	// (0x000164fa) popup_clock_analogue_window

0x8f11,	// (0x000164fa) popup_clock_digital_window

0xb65b,	// (0x00018c44) grid_indicator_nsta_pane_ParamLimits

0xb684,	// (0x00018c6d) clock_nsta_pane_t2

0x0001,

0xfa86,	// (0x0001d06f) clock_nsta_pane_t

0x5add,	// (0x000130c6) aid_size_max_handle

0x5ae7,	// (0x000130d0) aid_size_min_handle

0x487f,	// (0x00011e68) editor_scroll_pane

0xc662,	// (0x00019c4b) ex_editor_pane

0x3d5b,	// (0x00011344) scroll_pane_cp13

0x3b11,	// (0x000110fa) scroll_pane_cp14

0x4286,	// (0x0001186f) scroll_pane_cp36

0x8852,	// (0x00015e3b) list_single_graphic_hl_pane_cp2_ParamLimits

0x8852,	// (0x00015e3b) list_single_graphic_hl_pane_cp2

0xa8cc,	// (0x00017eb5) list_single_graphic_hl_pane_ParamLimits

0xa8cc,	// (0x00017eb5) list_single_graphic_hl_pane

0xc66a,	// (0x00019c53) aid_size_min_hl_cp1

0xc673,	// (0x00019c5c) list_highlight_pane_cp34_ParamLimits

0xc673,	// (0x00019c5c) list_highlight_pane_cp34

0xc684,	// (0x00019c6d) list_single_graphic_hl_pane_g1_ParamLimits

0xc684,	// (0x00019c6d) list_single_graphic_hl_pane_g1

0xc691,	// (0x00019c7a) list_single_graphic_hl_pane_g2_ParamLimits

0xc691,	// (0x00019c7a) list_single_graphic_hl_pane_g2

0xc691,	// (0x00019c7a) list_single_graphic_hl_pane_g3_ParamLimits

0xc691,	// (0x00019c7a) list_single_graphic_hl_pane_g3

0x4767,	// (0x00011d50) list_single_graphic_hl_pane_g4_ParamLimits

0x4767,	// (0x00011d50) list_single_graphic_hl_pane_g4

0xc69d,	// (0x00019c86) list_single_graphic_hl_pane_g5_ParamLimits

0xc69d,	// (0x00019c86) list_single_graphic_hl_pane_g5

0x0004,

0xfbd1,	// (0x0001d1ba) list_single_graphic_hl_pane_g_ParamLimits

0xfbd1,	// (0x0001d1ba) list_single_graphic_hl_pane_g

0xc6b1,	// (0x00019c9a) list_single_graphic_hl_pane_t1_ParamLimits

0xc6b1,	// (0x00019c9a) list_single_graphic_hl_pane_t1

0xc6c7,	// (0x00019cb0) aid_size_min_hl_cp2

0xc6d0,	// (0x00019cb9) list_highlight_pane_cp34_cp2_ParamLimits

0xc6d0,	// (0x00019cb9) list_highlight_pane_cp34_cp2

0xc684,	// (0x00019c6d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc684,	// (0x00019c6d) list_single_graphic_hl_pane_g1_cp2

0xc6dd,	// (0x00019cc6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc6dd,	// (0x00019cc6) list_single_graphic_hl_pane_g2_cp2

0xc6e9,	// (0x00019cd2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc6e9,	// (0x00019cd2) list_single_graphic_hl_pane_g3_cp2

0x4767,	// (0x00011d50) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4767,	// (0x00011d50) list_single_graphic_hl_pane_g4_cp2

0xc69d,	// (0x00019c86) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc69d,	// (0x00019c86) list_single_graphic_hl_pane_g5_cp2

0x5e1f,	// (0x00013408) control_pane_g4_ParamLimits

0x5e1f,	// (0x00013408) control_pane_g4

0x4a5e,	// (0x00012047) bg_popup_sub_pane_cp10_ParamLimits

0xbce5,	// (0x000192ce) list_choice_list_pane_ParamLimits

0xbcf4,	// (0x000192dd) scroll_pane_cp23

0x38dd,	// (0x00010ec6) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2e2,	// (0x000198cb) list_preview_fixed_pane_ParamLimits

0xc2f8,	// (0x000198e1) list_preview_fixed_pane_cp_ParamLimits

0xc2f8,	// (0x000198e1) list_preview_fixed_pane_cp

0xc304,	// (0x000198ed) popup_preview_fixed_window_g1_ParamLimits

0xc304,	// (0x000198ed) popup_preview_fixed_window_g1

0xc310,	// (0x000198f9) popup_preview_fixed_window_g2_ParamLimits

0xc310,	// (0x000198f9) popup_preview_fixed_window_g2

0x0002,

0xfb59,	// (0x0001d142) popup_preview_fixed_window_g_ParamLimits

0xfb59,	// (0x0001d142) popup_preview_fixed_window_g

0x5a51,	// (0x0001303a) aid_navi_side_left_pane_ParamLimits

0x5a66,	// (0x0001304f) aid_navi_side_right_pane_ParamLimits

0x5a7e,	// (0x00013067) navi_icon_pane_stacon_ParamLimits

0x5a92,	// (0x0001307b) navi_navi_pane_stacon_ParamLimits

0x5a7e,	// (0x00013067) navi_text_pane_stacon_ParamLimits

0x5677,	// (0x00012c60) main_text_info_pane

0xc70d,	// (0x00019cf6) listscroll_text_info_pane

0xc715,	// (0x00019cfe) list_text_info_pane_ParamLimits

0xc715,	// (0x00019cfe) list_text_info_pane

0xc724,	// (0x00019d0d) scroll_pane_cp24_ParamLimits

0xc724,	// (0x00019d0d) scroll_pane_cp24

0xc742,	// (0x00019d2b) list_text_info_pane_t1_ParamLimits

0xc742,	// (0x00019d2b) list_text_info_pane_t1

0x5f9f,	// (0x00013588) popup_fast_swap2_window_ParamLimits

0x5f9f,	// (0x00013588) popup_fast_swap2_window

0xc776,	// (0x00019d5f) aid_size_cell_fast2

0x359a,	// (0x00010b83) bg_popup_window_pane_cp17

0x96b9,	// (0x00016ca2) heading_pane_cp2

0x96c1,	// (0x00016caa) listscroll_fast2_pane

0xc780,	// (0x00019d69) grid_fast2_pane

0xc78a,	// (0x00019d73) listscroll_fast2_pane_g1

0xc792,	// (0x00019d7b) listscroll_fast2_pane_g2

0x0001,

0xfbdc,	// (0x0001d1c5) listscroll_fast2_pane_g

0x3d5b,	// (0x00011344) scroll_pane_cp26

0xc79c,	// (0x00019d85) cell_fast2_pane_ParamLimits

0xc79c,	// (0x00019d85) cell_fast2_pane

0xc7b1,	// (0x00019d9a) cell_fast2_pane_g1

0xc7ba,	// (0x00019da3) cell_fast2_pane_g2

0xc7c3,	// (0x00019dac) cell_fast2_pane_g3

0x0002,

0xfbe1,	// (0x0001d1ca) cell_fast2_pane_g

0x3a48,	// (0x00011031) grid_highlight_pane_cp9

0x5f67,	// (0x00013550) main_eswt_pane_ParamLimits

0x5f67,	// (0x00013550) main_eswt_pane

0xc739,	// (0x00019d22) list_single_text_info_pane

0xc7cb,	// (0x00019db4) eswt_ctrl_button_pane

0xc7cb,	// (0x00019db4) eswt_ctrl_canvas_pane

0xc7d3,	// (0x00019dbc) eswt_ctrl_combo_pane

0xc7cb,	// (0x00019db4) eswt_ctrl_default_pane

0xc7cb,	// (0x00019db4) eswt_ctrl_label_pane

0xc7db,	// (0x00019dc4) eswt_ctrl_wait_pane

0xc7e3,	// (0x00019dcc) eswt_shell_pane

0x359a,	// (0x00010b83) listscroll_eswt_app_pane

0xc803,	// (0x00019dec) popup_eswt_tasktip_window_ParamLimits

0xc803,	// (0x00019dec) popup_eswt_tasktip_window

0x9285,	// (0x0001686e) bg_popup_window_pane_cp18

0xc814,	// (0x00019dfd) eswt_control_pane_g1_ParamLimits

0xc814,	// (0x00019dfd) eswt_control_pane_g1

0xc821,	// (0x00019e0a) eswt_control_pane_g2_ParamLimits

0xc821,	// (0x00019e0a) eswt_control_pane_g2

0xc82e,	// (0x00019e17) eswt_control_pane_g3_ParamLimits

0xc82e,	// (0x00019e17) eswt_control_pane_g3

0xc83b,	// (0x00019e24) eswt_control_pane_g4_ParamLimits

0xc83b,	// (0x00019e24) eswt_control_pane_g4

0x0003,

0xfbe8,	// (0x0001d1d1) eswt_control_pane_g_ParamLimits

0xfbe8,	// (0x0001d1d1) eswt_control_pane_g

0x3bbb,	// (0x000111a4) bg_button_pane_ParamLimits

0x3bbb,	// (0x000111a4) bg_button_pane

0x3a5d,	// (0x00011046) common_borders_pane_copy2_ParamLimits

0x3a5d,	// (0x00011046) common_borders_pane_copy2

0xc848,	// (0x00019e31) control_button_pane_g1_ParamLimits

0xc848,	// (0x00019e31) control_button_pane_g1

0xc854,	// (0x00019e3d) control_button_pane_g2_ParamLimits

0xc854,	// (0x00019e3d) control_button_pane_g2

0xc860,	// (0x00019e49) control_button_pane_g3_ParamLimits

0xc860,	// (0x00019e49) control_button_pane_g3

0x0002,

0xfbf1,	// (0x0001d1da) control_button_pane_g_ParamLimits

0xfbf1,	// (0x0001d1da) control_button_pane_g

0xc874,	// (0x00019e5d) control_button_pane_t1

0xc882,	// (0x00019e6b) control_button_pane_t2

0x0001,

0xfbf8,	// (0x0001d1e1) control_button_pane_t

0x9165,	// (0x0001674e) bg_button_pane_g1

0x9175,	// (0x0001675e) bg_button_pane_g2

0x916d,	// (0x00016756) bg_button_pane_g3

0x9185,	// (0x0001676e) bg_button_pane_g4

0x917d,	// (0x00016766) bg_button_pane_g5

0x918d,	// (0x00016776) bg_button_pane_g6

0x9195,	// (0x0001677e) bg_button_pane_g7

0x91a5,	// (0x0001678e) bg_button_pane_g8

0x919d,	// (0x00016786) bg_button_pane_g9

0x0008,

0xf832,	// (0x0001ce1b) bg_button_pane_g

0xbca0,	// (0x00019289) common_borders_pane_ParamLimits

0xbca0,	// (0x00019289) common_borders_pane

0xc814,	// (0x00019dfd) eswt_control_pane_g1_copy1_ParamLimits

0xc814,	// (0x00019dfd) eswt_control_pane_g1_copy1

0xc821,	// (0x00019e0a) eswt_control_pane_g2_copy1_ParamLimits

0xc821,	// (0x00019e0a) eswt_control_pane_g2_copy1

0xc82e,	// (0x00019e17) eswt_control_pane_g3_copy1_ParamLimits

0xc82e,	// (0x00019e17) eswt_control_pane_g3_copy1

0xc83b,	// (0x00019e24) eswt_control_pane_g4_copy1_ParamLimits

0xc83b,	// (0x00019e24) eswt_control_pane_g4_copy1

0xbcdb,	// (0x000192c4) bg_eswt_ctrl_canvas_pane_g1

0xbca0,	// (0x00019289) common_borders_pane_cp2_ParamLimits

0xbca0,	// (0x00019289) common_borders_pane_cp2

0xbca0,	// (0x00019289) common_borders_pane_cp3_ParamLimits

0xbca0,	// (0x00019289) common_borders_pane_cp3

0xc890,	// (0x00019e79) separator_horizontal_pane

0xc898,	// (0x00019e81) separator_vertical_pane

0xc814,	// (0x00019dfd) eswt_control_pane_g1_copy2_ParamLimits

0xc814,	// (0x00019dfd) eswt_control_pane_g1_copy2

0xc821,	// (0x00019e0a) eswt_control_pane_g2_copy2_ParamLimits

0xc821,	// (0x00019e0a) eswt_control_pane_g2_copy2

0xc82e,	// (0x00019e17) eswt_control_pane_g3_copy2_ParamLimits

0xc82e,	// (0x00019e17) eswt_control_pane_g3_copy2

0xc83b,	// (0x00019e24) eswt_control_pane_g4_copy2_ParamLimits

0xc83b,	// (0x00019e24) eswt_control_pane_g4_copy2

0x359a,	// (0x00010b83) common_borders_pane_cp4

0xc8a1,	// (0x00019e8a) separator_horizontal_pane_g1

0xc8aa,	// (0x00019e93) separator_horizontal_pane_g2

0xc8b3,	// (0x00019e9c) separator_horizontal_pane_g3

0x0002,

0xfbfd,	// (0x0001d1e6) separator_horizontal_pane_g

0xc814,	// (0x00019dfd) eswt_control_pane_g1_copy3_ParamLimits

0xc814,	// (0x00019dfd) eswt_control_pane_g1_copy3

0xc821,	// (0x00019e0a) eswt_control_pane_g2_copy3_ParamLimits

0xc821,	// (0x00019e0a) eswt_control_pane_g2_copy3

0xc82e,	// (0x00019e17) eswt_control_pane_g3_copy3_ParamLimits

0xc82e,	// (0x00019e17) eswt_control_pane_g3_copy3

0xc83b,	// (0x00019e24) eswt_control_pane_g4_copy3_ParamLimits

0xc83b,	// (0x00019e24) eswt_control_pane_g4_copy3

0x359a,	// (0x00010b83) common_borders_pane_cp5

0xc8bc,	// (0x00019ea5) separator_vertical_pane_g1

0xc8c5,	// (0x00019eae) separator_vertical_pane_g2

0xc8ce,	// (0x00019eb7) separator_vertical_pane_g3

0x0002,

0xfc04,	// (0x0001d1ed) separator_vertical_pane_g

0xc814,	// (0x00019dfd) eswt_control_pane_g1_copy4_ParamLimits

0xc814,	// (0x00019dfd) eswt_control_pane_g1_copy4

0xc821,	// (0x00019e0a) eswt_control_pane_g2_copy4_ParamLimits

0xc821,	// (0x00019e0a) eswt_control_pane_g2_copy4

0xc82e,	// (0x00019e17) eswt_control_pane_g3_copy4_ParamLimits

0xc82e,	// (0x00019e17) eswt_control_pane_g3_copy4

0xc83b,	// (0x00019e24) eswt_control_pane_g4_copy4_ParamLimits

0xc83b,	// (0x00019e24) eswt_control_pane_g4_copy4

0xc8d7,	// (0x00019ec0) eswt_ctrl_combo_button_pane

0xc8df,	// (0x00019ec8) eswt_ctrl_input_pane

0xc8e7,	// (0x00019ed0) popup_choice_list_window_cp70

0xc8ef,	// (0x00019ed8) eswt_ctrl_input_pane_t1

0x359a,	// (0x00010b83) input_focus_pane_cp70

0xbca0,	// (0x00019289) bg_button_pane_cp70_ParamLimits

0xbca0,	// (0x00019289) bg_button_pane_cp70

0xc8fd,	// (0x00019ee6) eswt_ctrl_combo_button_pane_g1

0xc905,	// (0x00019eee) wait_bar_pane_cp70

0x9285,	// (0x0001686e) bg_popup_window_pane_cp70_ParamLimits

0x9285,	// (0x0001686e) bg_popup_window_pane_cp70

0xc90d,	// (0x00019ef6) popup_eswt_tasktip_window_t1

0xc923,	// (0x00019f0c) wait_bar_pane_cp71_ParamLimits

0xc923,	// (0x00019f0c) wait_bar_pane_cp71

0xc92f,	// (0x00019f18) grid_eswt_app_pane

0x4114,	// (0x000116fd) scroll_pane_cp70

0xc938,	// (0x00019f21) cell_eswt_app_pane_ParamLimits

0xc938,	// (0x00019f21) cell_eswt_app_pane

0xc968,	// (0x00019f51) cell_eswt_app_pane_g1_ParamLimits

0xc968,	// (0x00019f51) cell_eswt_app_pane_g1

0xc997,	// (0x00019f80) cell_eswt_app_pane_g2_ParamLimits

0xc997,	// (0x00019f80) cell_eswt_app_pane_g2

0x0001,

0xfc0b,	// (0x0001d1f4) cell_eswt_app_pane_g_ParamLimits

0xfc0b,	// (0x0001d1f4) cell_eswt_app_pane_g

0xc9bb,	// (0x00019fa4) cell_eswt_app_pane_t1_ParamLimits

0xc9bb,	// (0x00019fa4) cell_eswt_app_pane_t1

0xc9ed,	// (0x00019fd6) grid_highlight_pane_cp70_ParamLimits

0xc9ed,	// (0x00019fd6) grid_highlight_pane_cp70

0x4785,	// (0x00011d6e) set_content_pane_g1

0x8bf9,	// (0x000161e2) status_small_volume_pane

0x6df4,	// (0x000143dd) status_small_volume_pane_g1

0x6dfc,	// (0x000143e5) volume_small2_pane

0x6e05,	// (0x000143ee) volume_small2_pane_g1

0x6e0e,	// (0x000143f7) volume_small2_pane_g2

0x6e17,	// (0x00014400) volume_small2_pane_g3

0x6e20,	// (0x00014409) volume_small2_pane_g4

0x6e29,	// (0x00014412) volume_small2_pane_g5

0x6e32,	// (0x0001441b) volume_small2_pane_g6

0x6e3b,	// (0x00014424) volume_small2_pane_g7

0x6e44,	// (0x0001442d) volume_small2_pane_g8

0x6e4d,	// (0x00014436) volume_small2_pane_g9

0x6e56,	// (0x0001443f) volume_small2_pane_g10

0x0009,

0xfc10,	// (0x0001d1f9) volume_small2_pane_g

0xc093,	// (0x0001967c) fep_vkb_top_text_pane_g1_ParamLimits

0xc0ae,	// (0x00019697) fep_vkb_top_text_pane_t1_ParamLimits

0xc31c,	// (0x00019905) popup_preview_fixed_window_g3_ParamLimits

0xc31c,	// (0x00019905) popup_preview_fixed_window_g3

0x644e,	// (0x00013a37) popup_toolbar_trans_pane

0xa616,	// (0x00017bff) aid_height_set_list_ParamLimits

0xa627,	// (0x00017c10) aid_size_parent_ParamLimits

0x4a5e,	// (0x00012047) list_highlight_pane_cp2_ParamLimits

0x4785,	// (0x00011d6e) set_content_pane_g1_ParamLimits

0xa8eb,	// (0x00017ed4) list_single_image_pane_ParamLimits

0xa8eb,	// (0x00017ed4) list_single_image_pane

0xc9f9,	// (0x00019fe2) aid_size_cell_image_ParamLimits

0xc9f9,	// (0x00019fe2) aid_size_cell_image

0xca06,	// (0x00019fef) grid_single_image_pane_ParamLimits

0xca06,	// (0x00019fef) grid_single_image_pane

0x3d7f,	// (0x00011368) list_single_image_pane_g1_ParamLimits

0x3d7f,	// (0x00011368) list_single_image_pane_g1

0xc34a,	// (0x00019933) list_single_image_pane_g2_ParamLimits

0xc34a,	// (0x00019933) list_single_image_pane_g2

0x0001,

0xfc25,	// (0x0001d20e) list_single_image_pane_g_ParamLimits

0xfc25,	// (0x0001d20e) list_single_image_pane_g

0xca12,	// (0x00019ffb) list_single_image_pane_t1_ParamLimits

0xca12,	// (0x00019ffb) list_single_image_pane_t1

0xca28,	// (0x0001a011) cell_image_list_pane_ParamLimits

0xca28,	// (0x0001a011) cell_image_list_pane

0xca3c,	// (0x0001a025) cell_image_list_pane_g1

0xca45,	// (0x0001a02e) cell_image_list_pane_g2

0x0001,

0xfc2a,	// (0x0001d213) cell_image_list_pane_g

0xca4e,	// (0x0001a037) aid_size_cell_tb_trans_pane

0x3bbb,	// (0x000111a4) bg_tb_trans_pane

0xca60,	// (0x0001a049) grid_tb_trans_pane

0x9165,	// (0x0001674e) bg_tb_trans_pane_g1

0x9175,	// (0x0001675e) bg_tb_trans_pane_g2

0x916d,	// (0x00016756) bg_tb_trans_pane_g3

0x9185,	// (0x0001676e) bg_tb_trans_pane_g4

0x917d,	// (0x00016766) bg_tb_trans_pane_g5

0x91a5,	// (0x0001678e) bg_tb_trans_pane_g6

0x919d,	// (0x00016786) bg_tb_trans_pane_g7

0x918d,	// (0x00016776) bg_tb_trans_pane_g8

0x9195,	// (0x0001677e) bg_tb_trans_pane_g9

0x0008,

0xfc2f,	// (0x0001d218) bg_tb_trans_pane_g

0xca74,	// (0x0001a05d) cell_toolbar_trans_pane_ParamLimits

0xca74,	// (0x0001a05d) cell_toolbar_trans_pane

0xbcdb,	// (0x000192c4) cell_toolbar_trans_pane_g1

0xb859,	// (0x00018e42) list_form2_midp_pane_t1

0xb867,	// (0x00018e50) list_form2_midp_pane_t2

0x0001,

0xfacc,	// (0x0001d0b5) list_form2_midp_pane_t

0xb875,	// (0x00018e5e) scroll_pane_cp51_ParamLimits

0xba7e,	// (0x00019067) form2_midp_wait_pane_g1

0xba87,	// (0x00019070) form2_midp_wait_pane_g2

0xba90,	// (0x00019079) form2_midp_wait_pane_g3

0x0002,

0xfae1,	// (0x0001d0ca) form2_midp_wait_pane_g

0x3799,	// (0x00010d82) list_highlight_pane_cp21_ParamLimits

0xbad8,	// (0x000190c1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbae7,	// (0x000190d0) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa86d,	// (0x00017e56) list_single_2graphic_im_pane_ParamLimits

0xa86d,	// (0x00017e56) list_single_2graphic_im_pane

0xca9a,	// (0x0001a083) list_single_2graphic_im_pane_g1_ParamLimits

0xca9a,	// (0x0001a083) list_single_2graphic_im_pane_g1

0xcaab,	// (0x0001a094) list_single_2graphic_im_pane_g2_ParamLimits

0xcaab,	// (0x0001a094) list_single_2graphic_im_pane_g2

0xcab7,	// (0x0001a0a0) list_single_2graphic_im_pane_g3_ParamLimits

0xcab7,	// (0x0001a0a0) list_single_2graphic_im_pane_g3

0x0003,

0xfc42,	// (0x0001d22b) list_single_2graphic_im_pane_g_ParamLimits

0xfc42,	// (0x0001d22b) list_single_2graphic_im_pane_g

0xcad7,	// (0x0001a0c0) list_single_2graphic_im_pane_t1_ParamLimits

0xcad7,	// (0x0001a0c0) list_single_2graphic_im_pane_t1

0xc328,	// (0x00019911) list_single_graphic_2heading_pane_fp_ParamLimits

0xc328,	// (0x00019911) list_single_graphic_2heading_pane_fp

0xc381,	// (0x0001996a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc381,	// (0x0001996a) list_single_graphic_2heading_pane_fp_g1

0xc33e,	// (0x00019927) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc33e,	// (0x00019927) list_single_graphic_2heading_pane_fp_g2

0x3d7f,	// (0x00011368) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3d7f,	// (0x00011368) list_single_graphic_2heading_pane_fp_g3

0xc34a,	// (0x00019933) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc34a,	// (0x00019933) list_single_graphic_2heading_pane_fp_g4

0xc35e,	// (0x00019947) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc35e,	// (0x00019947) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb69,	// (0x0001d152) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb69,	// (0x0001d152) list_single_graphic_2heading_pane_fp_g

0xcb08,	// (0x0001a0f1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb08,	// (0x0001a0f1) list_single_graphic_2heading_pane_fp_t1

0xc3b9,	// (0x000199a2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc3b9,	// (0x000199a2) list_single_graphic_2heading_pane_fp_t2

0xcb1e,	// (0x0001a107) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb1e,	// (0x0001a107) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4b,	// (0x0001d234) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4b,	// (0x0001d234) list_single_graphic_2heading_pane_fp_t

0xbd67,	// (0x00019350) fep_hwr_write_pane_g5_ParamLimits

0xbd67,	// (0x00019350) fep_hwr_write_pane_g5

0xbd73,	// (0x0001935c) fep_hwr_write_pane_g6_ParamLimits

0xbd73,	// (0x0001935c) fep_hwr_write_pane_g6

0xc7e3,	// (0x00019dcc) eswt_shell_pane_ParamLimits

0x9285,	// (0x0001686e) bg_popup_window_pane_cp18_ParamLimits

0xa55d,	// (0x00017b46) heading_pane_cp70

0xc90d,	// (0x00019ef6) popup_eswt_tasktip_window_t1_ParamLimits

0x8ca1,	// (0x0001628a) aid_touch_tab_arrow_left

0x8cb0,	// (0x00016299) aid_touch_tab_arrow_right

0x7b91,	// (0x0001517a) title_pane_g3_ParamLimits

0x7b91,	// (0x0001517a) title_pane_g3

0x3b52,	// (0x0001113b) set_value_pane_g1

0x644e,	// (0x00013a37) popup_toolbar_trans_pane_ParamLimits

0xca4e,	// (0x0001a037) aid_size_cell_tb_trans_pane_ParamLimits

0x3bbb,	// (0x000111a4) bg_tb_trans_pane_ParamLimits

0xca60,	// (0x0001a049) grid_tb_trans_pane_ParamLimits

0x38dd,	// (0x00010ec6) cont_note_pane_ParamLimits

0x38dd,	// (0x00010ec6) cont_note_pane

0x3a5d,	// (0x00011046) cont_snote2_single_text_pane_ParamLimits

0x3a5d,	// (0x00011046) cont_snote2_single_text_pane

0x3a5d,	// (0x00011046) cont_snote2_single_graphic_pane_ParamLimits

0x3a5d,	// (0x00011046) cont_snote2_single_graphic_pane

0x98e0,	// (0x00016ec9) cont_note_wait_pane_ParamLimits

0x98e0,	// (0x00016ec9) cont_note_wait_pane

0x98e0,	// (0x00016ec9) cont_note_image_pane_ParamLimits

0x98e0,	// (0x00016ec9) cont_note_image_pane

0xcb34,	// (0x0001a11d) popup_note2_window_g1_ParamLimits

0xcb34,	// (0x0001a11d) popup_note2_window_g1

0xcb65,	// (0x0001a14e) popup_note2_window_t1_ParamLimits

0xcb65,	// (0x0001a14e) popup_note2_window_t1

0xcbaa,	// (0x0001a193) popup_note2_window_t2_ParamLimits

0xcbaa,	// (0x0001a193) popup_note2_window_t2

0xcbef,	// (0x0001a1d8) popup_note2_window_t3_ParamLimits

0xcbef,	// (0x0001a1d8) popup_note2_window_t3

0xcc34,	// (0x0001a21d) popup_note2_window_t4_ParamLimits

0xcc34,	// (0x0001a21d) popup_note2_window_t4

0x3961,	// (0x00010f4a) popup_note2_window_t5_ParamLimits

0x3961,	// (0x00010f4a) popup_note2_window_t5

0x0004,

0xfc57,	// (0x0001d240) popup_note2_window_t_ParamLimits

0xfc57,	// (0x0001d240) popup_note2_window_t

0xcc63,	// (0x0001a24c) popup_note2_image_window_g1_ParamLimits

0xcc63,	// (0x0001a24c) popup_note2_image_window_g1

0xcc6f,	// (0x0001a258) popup_note2_image_window_g2_ParamLimits

0xcc6f,	// (0x0001a258) popup_note2_image_window_g2

0x0001,

0xfc62,	// (0x0001d24b) popup_note2_image_window_g_ParamLimits

0xfc62,	// (0x0001d24b) popup_note2_image_window_g

0xcc81,	// (0x0001a26a) popup_note2_image_window_t1_ParamLimits

0xcc81,	// (0x0001a26a) popup_note2_image_window_t1

0xcc99,	// (0x0001a282) popup_note2_image_window_t2_ParamLimits

0xcc99,	// (0x0001a282) popup_note2_image_window_t2

0xccb1,	// (0x0001a29a) popup_note2_image_window_t3_ParamLimits

0xccb1,	// (0x0001a29a) popup_note2_image_window_t3

0x0002,

0xfc67,	// (0x0001d250) popup_note2_image_window_t_ParamLimits

0xfc67,	// (0x0001d250) popup_note2_image_window_t

0x98ee,	// (0x00016ed7) popup_note2_wait_window_g1_ParamLimits

0x98ee,	// (0x00016ed7) popup_note2_wait_window_g1

0x98fa,	// (0x00016ee3) popup_note2_wait_window_g2_ParamLimits

0x98fa,	// (0x00016ee3) popup_note2_wait_window_g2

0x9906,	// (0x00016eef) popup_note2_wait_window_g3_ParamLimits

0x9906,	// (0x00016eef) popup_note2_wait_window_g3

0x0002,

0xf814,	// (0x0001cdfd) popup_note2_wait_window_g_ParamLimits

0xf814,	// (0x0001cdfd) popup_note2_wait_window_g

0xcccd,	// (0x0001a2b6) popup_note2_wait_window_t1_ParamLimits

0xcccd,	// (0x0001a2b6) popup_note2_wait_window_t1

0xcceb,	// (0x0001a2d4) popup_note2_wait_window_t2_ParamLimits

0xcceb,	// (0x0001a2d4) popup_note2_wait_window_t2

0xcd09,	// (0x0001a2f2) popup_note2_wait_window_t3_ParamLimits

0xcd09,	// (0x0001a2f2) popup_note2_wait_window_t3

0xcd1b,	// (0x0001a304) popup_note2_wait_window_t4_ParamLimits

0xcd1b,	// (0x0001a304) popup_note2_wait_window_t4

0x0003,

0xfc6e,	// (0x0001d257) popup_note2_wait_window_t_ParamLimits

0xfc6e,	// (0x0001d257) popup_note2_wait_window_t

0xcd2d,	// (0x0001a316) wait_bar2_pane_ParamLimits

0xcd2d,	// (0x0001a316) wait_bar2_pane

0xcd45,	// (0x0001a32e) popup_snote2_single_text_window_g1_ParamLimits

0xcd45,	// (0x0001a32e) popup_snote2_single_text_window_g1

0xcd6d,	// (0x0001a356) popup_snote2_single_text_window_t1_ParamLimits

0xcd6d,	// (0x0001a356) popup_snote2_single_text_window_t1

0xcdb9,	// (0x0001a3a2) popup_snote2_single_text_window_t2_ParamLimits

0xcdb9,	// (0x0001a3a2) popup_snote2_single_text_window_t2

0xce05,	// (0x0001a3ee) popup_snote2_single_text_window_t3_ParamLimits

0xce05,	// (0x0001a3ee) popup_snote2_single_text_window_t3

0xce46,	// (0x0001a42f) popup_snote2_single_text_window_t4_ParamLimits

0xce46,	// (0x0001a42f) popup_snote2_single_text_window_t4

0xce7c,	// (0x0001a465) popup_snote2_single_text_window_t5_ParamLimits

0xce7c,	// (0x0001a465) popup_snote2_single_text_window_t5

0x0004,

0xfc77,	// (0x0001d260) popup_snote2_single_text_window_t_ParamLimits

0xfc77,	// (0x0001d260) popup_snote2_single_text_window_t

0xcea7,	// (0x0001a490) popup_snote2_single_graphic_window_g1_ParamLimits

0xcea7,	// (0x0001a490) popup_snote2_single_graphic_window_g1

0xcecf,	// (0x0001a4b8) popup_snote2_single_graphic_window_g2_ParamLimits

0xcecf,	// (0x0001a4b8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc82,	// (0x0001d26b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc82,	// (0x0001d26b) popup_snote2_single_graphic_window_g

0xcef7,	// (0x0001a4e0) popup_snote2_single_graphic_window_t1_ParamLimits

0xcef7,	// (0x0001a4e0) popup_snote2_single_graphic_window_t1

0xcf43,	// (0x0001a52c) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf43,	// (0x0001a52c) popup_snote2_single_graphic_window_t2

0xce05,	// (0x0001a3ee) popup_snote2_single_graphic_window_t3_ParamLimits

0xce05,	// (0x0001a3ee) popup_snote2_single_graphic_window_t3

0xce46,	// (0x0001a42f) popup_snote2_single_graphic_window_t4_ParamLimits

0xce46,	// (0x0001a42f) popup_snote2_single_graphic_window_t4

0xce7c,	// (0x0001a465) popup_snote2_single_graphic_window_t5_ParamLimits

0xce7c,	// (0x0001a465) popup_snote2_single_graphic_window_t5

0x0004,

0xfc87,	// (0x0001d270) popup_snote2_single_graphic_window_t_ParamLimits

0xfc87,	// (0x0001d270) popup_snote2_single_graphic_window_t

0xb732,	// (0x00018d1b) clock_nsta_pane_cp2_t1

0xb732,	// (0x00018d1b) clock_nsta_pane_cp2_t2

0x0001,

0xfaa2,	// (0x0001d08b) clock_nsta_pane_cp2_t

0x3bda,	// (0x000111c3) form_field_data_wide_pane_g1_ParamLimits

0x3be6,	// (0x000111cf) form_field_data_wide_pane_g2_ParamLimits

0x3be6,	// (0x000111cf) form_field_data_wide_pane_g2

0x3bf2,	// (0x000111db) form_field_data_wide_pane_g3_ParamLimits

0x3bf2,	// (0x000111db) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x0001cc30) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x0001cc30) form_field_data_wide_pane_g

0xb60e,	// (0x00018bf7) grid_touch_3_pane_ParamLimits

0xb60e,	// (0x00018bf7) grid_touch_3_pane

0xcf8f,	// (0x0001a578) cell_touch_3_pane_ParamLimits

0xcf8f,	// (0x0001a578) cell_touch_3_pane

0xbcdb,	// (0x000192c4) cell_touch_3_pane_g1

0xbcdb,	// (0x000192c4) cell_touch_3_pane_g2

0x0001,

0xfb27,	// (0x0001d110) cell_touch_3_pane_g

0x3993,	// (0x00010f7c) cont_query_data_pane

0x399b,	// (0x00010f84) cont_query_data_pane_cp1

0xcfbd,	// (0x0001a5a6) button_value_adjust_pane_cp7

0xcfc5,	// (0x0001a5ae) query_popup_pane_cp3

0x4313,	// (0x000118fc) bg_popup_sub_pane_cp22_ParamLimits

0x5b93,	// (0x0001317c) navi_navi_volume_pane_cp2

0x5bab,	// (0x00013194) popup_side_volume_key_window_g2

0x5bb7,	// (0x000131a0) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x0001ccc6) popup_side_volume_key_window_g

0x5bd1,	// (0x000131ba) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x0001cccd) popup_side_volume_key_window_t

0x8a35,	// (0x0001601e) popup_side_volume_key_window_ParamLimits

0x8268,	// (0x00015851) list_double_graphic_pane_g4_ParamLimits

0x8268,	// (0x00015851) list_double_graphic_pane_g4

0xa8ac,	// (0x00017e95) list_single_2heading_msg_pane_ParamLimits

0xa8ac,	// (0x00017e95) list_single_2heading_msg_pane

0xcff4,	// (0x0001a5dd) list_single_2heading_msg_pane_g1_ParamLimits

0xcff4,	// (0x0001a5dd) list_single_2heading_msg_pane_g1

0x80d1,	// (0x000156ba) list_single_2heading_msg_pane_g2_ParamLimits

0x80d1,	// (0x000156ba) list_single_2heading_msg_pane_g2

0xd000,	// (0x0001a5e9) list_single_2heading_msg_pane_g3_ParamLimits

0xd000,	// (0x0001a5e9) list_single_2heading_msg_pane_g3

0xd00c,	// (0x0001a5f5) list_single_2heading_msg_pane_g4_ParamLimits

0xd00c,	// (0x0001a5f5) list_single_2heading_msg_pane_g4

0x0003,

0xfc92,	// (0x0001d27b) list_single_2heading_msg_pane_g_ParamLimits

0xfc92,	// (0x0001d27b) list_single_2heading_msg_pane_g

0xd024,	// (0x0001a60d) list_single_2heading_msg_pane_t1_ParamLimits

0xd024,	// (0x0001a60d) list_single_2heading_msg_pane_t1

0xd04c,	// (0x0001a635) list_single_2heading_msg_pane_t2_ParamLimits

0xd04c,	// (0x0001a635) list_single_2heading_msg_pane_t2

0xd07b,	// (0x0001a664) list_single_2heading_msg_pane_t3_ParamLimits

0xd07b,	// (0x0001a664) list_single_2heading_msg_pane_t3

0xd0b4,	// (0x0001a69d) list_single_2heading_msg_pane_t4_ParamLimits

0xd0b4,	// (0x0001a69d) list_single_2heading_msg_pane_t4

0x0003,

0xfc9b,	// (0x0001d284) list_single_2heading_msg_pane_t_ParamLimits

0xfc9b,	// (0x0001d284) list_single_2heading_msg_pane_t

0x3747,	// (0x00010d30) title_pane_g4_ParamLimits

0x3747,	// (0x00010d30) title_pane_g4

0x59a2,	// (0x00012f8b) title_pane_stacon_g3_ParamLimits

0x59a2,	// (0x00012f8b) title_pane_stacon_g3

0xcacb,	// (0x0001a0b4) list_single_2graphic_im_pane_g4_ParamLimits

0xcacb,	// (0x0001a0b4) list_single_2graphic_im_pane_g4

0xa327,	// (0x00017910) popup_side_volume_key_window_cp

0xac34,	// (0x0001821d) main_idle_act2_pane_t1

0x65aa,	// (0x00013b93) toolbar_button_pane_g10

0x80bb,	// (0x000156a4) popup_toolbar_window_cp1

0xb723,	// (0x00018d0c) clock_nsta_pane_cp_t1

0xb723,	// (0x00018d0c) clock_nsta_pane_cp_t2

0x0001,

0xfa9d,	// (0x0001d086) clock_nsta_pane_cp_t

0x5b93,	// (0x0001317c) navi_navi_volume_pane_cp2_ParamLimits

0x5b9f,	// (0x00013188) popup_side_volume_key_window_g1_ParamLimits

0x5bab,	// (0x00013194) popup_side_volume_key_window_g2_ParamLimits

0x5bb7,	// (0x000131a0) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x0001ccc6) popup_side_volume_key_window_g_ParamLimits

0x6a60,	// (0x00014049) fep_hwr_aid_pane

0x6b07,	// (0x000140f0) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd37,	// (0x00019320) fep_hwr_top_pane_g1_ParamLimits

0xbd49,	// (0x00019332) fep_hwr_top_pane_g2_ParamLimits

0x6b27,	// (0x00014110) fep_hwr_top_pane_g3_ParamLimits

0xfaf2,	// (0x0001d0db) fep_hwr_top_pane_g_ParamLimits

0x6b3c,	// (0x00014125) fep_hwr_top_text_pane_ParamLimits

0xa0ea,	// (0x000176d3) aid_touch_tab_arrow_arrow_2

0xa0f3,	// (0x000176dc) aid_touch_tab_arrow_left_2

0x6a74,	// (0x0001405d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6aab,	// (0x00014094) fep_hwr_prediction_pane

0xbea2,	// (0x0001948b) fep_vkb_prediction_pane

0xbf9f,	// (0x00019588) fep_vkb_side_pane_g3_ParamLimits

0xbf9f,	// (0x00019588) fep_vkb_side_pane_g3

0x6cb7,	// (0x000142a0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6d23,	// (0x0001430c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6d30,	// (0x00014319) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba1,	// (0x0001d18a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6e5f,	// (0x00014448) fep_hwr_prediction_pane_g1

0x6e69,	// (0x00014452) fep_hwr_prediction_pane_g2

0x6e71,	// (0x0001445a) fep_hwr_prediction_pane_g3

0x6e79,	// (0x00014462) fep_hwr_prediction_pane_g4

0x0003,

0xfca4,	// (0x0001d28d) fep_hwr_prediction_pane_g

0xd0d9,	// (0x0001a6c2) fep_vkb_prediction_pane_g1

0xd0e3,	// (0x0001a6cc) fep_vkb_prediction_pane_g2

0xd0eb,	// (0x0001a6d4) fep_vkb_prediction_pane_g3

0xd0f3,	// (0x0001a6dc) fep_vkb_prediction_pane_g4

0x0003,

0xfcad,	// (0x0001d296) fep_vkb_prediction_pane_g

0x6898,	// (0x00013e81) slider_set_pane_g3

0x68ac,	// (0x00013e95) slider_set_pane_g4

0x68c4,	// (0x00013ead) slider_set_pane_g5

0x6898,	// (0x00013e81) slider_set_pane_g6

0x68da,	// (0x00013ec3) slider_set_pane_g7

0xa788,	// (0x00017d71) slider_form_pane_g3

0xa791,	// (0x00017d7a) slider_form_pane_g4

0xa799,	// (0x00017d82) slider_form_pane_g5

0xa788,	// (0x00017d71) slider_form_pane_g6

0xa7a1,	// (0x00017d8a) slider_form_pane_g7

0xaf18,	// (0x00018501) slider_set_pane_vc_g3

0xaf21,	// (0x0001850a) slider_set_pane_vc_g4

0xaf2a,	// (0x00018513) slider_set_pane_vc_g5

0xaf18,	// (0x00018501) slider_set_pane_vc_g6

0xaf33,	// (0x0001851c) slider_set_pane_vc_g7

0xb3e1,	// (0x000189ca) slider_form_pane_vc_g1

0xb3ea,	// (0x000189d3) slider_form_pane_vc_g2

0xb3f3,	// (0x000189dc) slider_form_pane_vc_g3

0xb3e1,	// (0x000189ca) slider_form_pane_vc_g4

0xb3fc,	// (0x000189e5) slider_form_pane_vc_g5

0x0004,

0xfa6f,	// (0x0001d058) slider_form_pane_vc_g

0x5677,	// (0x00012c60) main_idle_act3_pane

0xd0fb,	// (0x0001a6e4) ai3_links_pane

0xd104,	// (0x0001a6ed) popup_ai3_data_window_ParamLimits

0xd104,	// (0x0001a6ed) popup_ai3_data_window

0x359a,	// (0x00010b83) grid_ai3_links_pane

0xd11c,	// (0x0001a705) cell_ai3_links_pane_ParamLimits

0xd11c,	// (0x0001a705) cell_ai3_links_pane

0xd134,	// (0x0001a71d) bg_popup_sub_pane_cp11

0xd141,	// (0x0001a72a) cell_ai3_links_pane_g1

0x359a,	// (0x00010b83) bg_popup_sub_pane_cp12

0xd166,	// (0x0001a74f) heading_ai3_data_pane

0xd16e,	// (0x0001a757) list_ai3_gene_pane

0xd17a,	// (0x0001a763) popup_ai3_data_window_g1

0xd182,	// (0x0001a76b) heading_ai3_data_pane_g1

0xd18a,	// (0x0001a773) heading_ai3_data_pane_t1

0xd198,	// (0x0001a781) list_double_ai3_gene_pane_ParamLimits

0xd198,	// (0x0001a781) list_double_ai3_gene_pane

0xd1a5,	// (0x0001a78e) list_single_ai3_gene_pane_ParamLimits

0xd1a5,	// (0x0001a78e) list_single_ai3_gene_pane

0xbca0,	// (0x00019289) list_highlight_pane_cp7_ParamLimits

0xbca0,	// (0x00019289) list_highlight_pane_cp7

0xd1b2,	// (0x0001a79b) list_single_a13_gene_pane_t1_ParamLimits

0xd1b2,	// (0x0001a79b) list_single_a13_gene_pane_t1

0xd1c9,	// (0x0001a7b2) list_single_ai3_gene_pane_g1

0xd1d2,	// (0x0001a7bb) list_single_ai3_gene_pane_g2

0x0001,

0xfcb6,	// (0x0001d29f) list_single_ai3_gene_pane_g

0xd1da,	// (0x0001a7c3) list_double_ai3_gene_pane_g1_ParamLimits

0xd1da,	// (0x0001a7c3) list_double_ai3_gene_pane_g1

0xd1e6,	// (0x0001a7cf) list_double_ai3_gene_pane_t1_ParamLimits

0xd1e6,	// (0x0001a7cf) list_double_ai3_gene_pane_t1

0xd202,	// (0x0001a7eb) list_double_ai3_gene_pane_t2_ParamLimits

0xd202,	// (0x0001a7eb) list_double_ai3_gene_pane_t2

0xd217,	// (0x0001a800) list_double_ai3_gene_pane_t3_ParamLimits

0xd217,	// (0x0001a800) list_double_ai3_gene_pane_t3

0x0002,

0xfcbb,	// (0x0001d2a4) list_double_ai3_gene_pane_t_ParamLimits

0xfcbb,	// (0x0001d2a4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcfd6,	// (0x0001a5bf) aid_size_min_col_2

0xcfe0,	// (0x0001a5c9) aid_size_min_msg_ParamLimits

0xcfe0,	// (0x0001a5c9) aid_size_min_msg

0xc09f,	// (0x00019688) fep_vkb_top_text_pane_g2_ParamLimits

0xc09f,	// (0x00019688) fep_vkb_top_text_pane_g2

0x0001,

0xfb22,	// (0x0001d10b) fep_vkb_top_text_pane_g_ParamLimits

0xfb22,	// (0x0001d10b) fep_vkb_top_text_pane_g

0x5677,	// (0x00012c60) main_hc_apps_shell_pane

0xd234,	// (0x0001a81d) grid_hc_apps_pane_ParamLimits

0xd234,	// (0x0001a81d) grid_hc_apps_pane

0xd246,	// (0x0001a82f) list_hc_apps_pane

0xd24e,	// (0x0001a837) scroll_pane_cp37_ParamLimits

0xd24e,	// (0x0001a837) scroll_pane_cp37

0xd25a,	// (0x0001a843) cell_hc_apps_pane_ParamLimits

0xd25a,	// (0x0001a843) cell_hc_apps_pane

0xd308,	// (0x0001a8f1) cell_hc_apps_pane_g1_ParamLimits

0xd308,	// (0x0001a8f1) cell_hc_apps_pane_g1

0xd338,	// (0x0001a921) cell_hc_apps_pane_g2_ParamLimits

0xd338,	// (0x0001a921) cell_hc_apps_pane_g2

0xd354,	// (0x0001a93d) cell_hc_apps_pane_g3_ParamLimits

0xd354,	// (0x0001a93d) cell_hc_apps_pane_g3

0x0002,

0xfcc2,	// (0x0001d2ab) cell_hc_apps_pane_g_ParamLimits

0xfcc2,	// (0x0001d2ab) cell_hc_apps_pane_g

0xd376,	// (0x0001a95f) cell_hc_apps_pane_t1_ParamLimits

0xd376,	// (0x0001a95f) cell_hc_apps_pane_t1

0x38dd,	// (0x00010ec6) grid_highlight_pane_cp10_ParamLimits

0x38dd,	// (0x00010ec6) grid_highlight_pane_cp10

0xd3b6,	// (0x0001a99f) list_single_hc_apps_pane_ParamLimits

0xd3b6,	// (0x0001a99f) list_single_hc_apps_pane

0xd419,	// (0x0001aa02) list_single_hc_apps_pane_g1

0xd432,	// (0x0001aa1b) list_single_hc_apps_pane_g2

0x0001,

0xfcc9,	// (0x0001d2b2) list_single_hc_apps_pane_g

0xd44b,	// (0x0001aa34) list_single_hc_apps_pane_g2_copy1

0xd467,	// (0x0001aa50) list_single_hc_apps_pane_t1

0x3799,	// (0x00010d82) bg_set_opt_pane_cp_ParamLimits

0x58ca,	// (0x00012eb3) setting_slider_pane_t1_ParamLimits

0x58e3,	// (0x00012ecc) setting_slider_pane_t2_ParamLimits

0x58fd,	// (0x00012ee6) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001cb22) setting_slider_pane_t_ParamLimits

0x5915,	// (0x00012efe) slider_set_pane_ParamLimits

0x5e33,	// (0x0001341c) control_pane_g5_ParamLimits

0x5e33,	// (0x0001341c) control_pane_g5

0xa5db,	// (0x00017bc4) slider_set_pane_g1_ParamLimits

0x688c,	// (0x00013e75) slider_set_pane_g2_ParamLimits

0x6898,	// (0x00013e81) slider_set_pane_g3_ParamLimits

0x68ac,	// (0x00013e95) slider_set_pane_g4_ParamLimits

0x68c4,	// (0x00013ead) slider_set_pane_g5_ParamLimits

0x6898,	// (0x00013e81) slider_set_pane_g6_ParamLimits

0x68da,	// (0x00013ec3) slider_set_pane_g7_ParamLimits

0xf930,	// (0x0001cf19) slider_set_pane_g_ParamLimits

0x4724,	// (0x00011d0d) navi_icon_text_pane_ParamLimits

0x8c62,	// (0x0001624b) aid_fill_nsta_2_ParamLimits

0x8ca1,	// (0x0001628a) aid_touch_tab_arrow_left_ParamLimits

0x8cb0,	// (0x00016299) aid_touch_tab_arrow_right_ParamLimits

0x8d1d,	// (0x00016306) clock_nsta_pane_ParamLimits

0xa0cc,	// (0x000176b5) navi_icon_pane_g1_ParamLimits

0xa0d8,	// (0x000176c1) navi_text_pane_t1_ParamLimits

0xb833,	// (0x00018e1c) navi_icon_text_pane_g1_ParamLimits

0xb83f,	// (0x00018e28) navi_icon_text_pane_t1_ParamLimits

0xd419,	// (0x0001aa02) list_single_hc_apps_pane_g1_ParamLimits

0xd432,	// (0x0001aa1b) list_single_hc_apps_pane_g2_ParamLimits

0xfcc9,	// (0x0001d2b2) list_single_hc_apps_pane_g_ParamLimits

0xd44b,	// (0x0001aa34) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd467,	// (0x0001aa50) list_single_hc_apps_pane_t1_ParamLimits

0x57d4,	// (0x00012dbd) popup_toolbar2_fixed_window_ParamLimits

0x57d4,	// (0x00012dbd) popup_toolbar2_fixed_window

0x6444,	// (0x00013a2d) popup_toolbar2_float_window

0x359a,	// (0x00010b83) bg_popup_sub_pane_cp27

0xd495,	// (0x0001aa7e) grid_toolbar2_float_pane

0x359a,	// (0x00010b83) bg_popup_sub_pane_cp26

0xd495,	// (0x0001aa7e) grid_toolbar2_fixed_pane

0xd49d,	// (0x0001aa86) cell_toolbar2_fixed_pane_ParamLimits

0xd49d,	// (0x0001aa86) cell_toolbar2_fixed_pane

0xd4ad,	// (0x0001aa96) cell_toolbar2_fixed_pane_g1

0x6316,	// (0x000138ff) toolbar2_fixed_button_pane

0x9165,	// (0x0001674e) toolbar2_fixed_button_pane_g1

0x9175,	// (0x0001675e) toolbar2_fixed_button_pane_g2

0x916d,	// (0x00016756) toolbar2_fixed_button_pane_g3

0x9185,	// (0x0001676e) toolbar2_fixed_button_pane_g4

0x917d,	// (0x00016766) toolbar2_fixed_button_pane_g5

0x918d,	// (0x00016776) toolbar2_fixed_button_pane_g6

0x9195,	// (0x0001677e) toolbar2_fixed_button_pane_g7

0x91a5,	// (0x0001678e) toolbar2_fixed_button_pane_g8

0x919d,	// (0x00016786) toolbar2_fixed_button_pane_g9

0x0008,

0xf832,	// (0x0001ce1b) toolbar2_fixed_button_pane_g

0xd4b6,	// (0x0001aa9f) cell_toolbar2_float_pane_ParamLimits

0xd4b6,	// (0x0001aa9f) cell_toolbar2_float_pane

0xd4c7,	// (0x0001aab0) cell_toolbar2_float_pane_g1

0x6316,	// (0x000138ff) toolbar2_fixed_button_pane_cp

0xbe09,	// (0x000193f2) fep_vkb_accented_list_pane_ParamLimits

0xbe09,	// (0x000193f2) fep_vkb_accented_list_pane

0x6c97,	// (0x00014280) bg_popup_fep_shadow_pane_g9

0x487f,	// (0x00011e68) bg_popup_fep_shadow_pane_cp3

0x3d42,	// (0x0001132b) list_accented_list_pane

0xd4d0,	// (0x0001aab9) list_single_accented_list_pane_ParamLimits

0xd4d0,	// (0x0001aab9) list_single_accented_list_pane

0x487f,	// (0x00011e68) list_highlight_pane_cp10

0xd4e1,	// (0x0001aaca) list_single_accented_list_pane_t1

0x6394,	// (0x0001397d) popup_slider_window_ParamLimits

0x6394,	// (0x0001397d) popup_slider_window

0xcfcd,	// (0x0001a5b6) aid_indentation_list_msg

0xd59f,	// (0x0001ab88) bg_popup_window_pane_cp19

0xd607,	// (0x0001abf0) popup_slider_window_g1

0xd623,	// (0x0001ac0c) popup_slider_window_g2

0xd63f,	// (0x0001ac28) popup_slider_window_g3

0x0005,

0xfcce,	// (0x0001d2b7) popup_slider_window_g

0xd6a5,	// (0x0001ac8e) popup_slider_window_t1

0xd719,	// (0x0001ad02) small_volume_slider_vertical_pane

0xbcdb,	// (0x000192c4) small_volume_slider_vertical_pane_g1

0xbcdb,	// (0x000192c4) small_volume_slider_vertical_pane_g2

0xd735,	// (0x0001ad1e) small_volume_slider_vertical_pane_g3

0x0002,

0xfce0,	// (0x0001d2c9) small_volume_slider_vertical_pane_g

0x559a,	// (0x00012b83) area_side_right_pane_ParamLimits

0x559a,	// (0x00012b83) area_side_right_pane

0x6e81,	// (0x0001446a) aid_size_side_button_ParamLimits

0x6e81,	// (0x0001446a) aid_size_side_button

0x6e95,	// (0x0001447e) grid_sctrl_middle_pane_ParamLimits

0x6e95,	// (0x0001447e) grid_sctrl_middle_pane

0x6eb4,	// (0x0001449d) sctrl_sk_bottom_pane

0x6ec5,	// (0x000144ae) sctrl_sk_top_pane

0x6ed7,	// (0x000144c0) aid_touch_sctrl_top

0x6ee4,	// (0x000144cd) bg_sctrl_sk_pane_ParamLimits

0x6ee4,	// (0x000144cd) bg_sctrl_sk_pane

0x6ef2,	// (0x000144db) sctrl_sk_top_pane_g1

0x6eff,	// (0x000144e8) sctrl_sk_top_pane_t1

0x6ed7,	// (0x000144c0) aid_touch_sctrl_bottom

0x6ee4,	// (0x000144cd) bg_sctrl_sk_pane_cp_ParamLimits

0x6ee4,	// (0x000144cd) bg_sctrl_sk_pane_cp

0x6f1a,	// (0x00014503) sctrl_sk_bottom_pane_g1

0x6eff,	// (0x000144e8) sctrl_sk_bottom_pane_t1

0x6f23,	// (0x0001450c) cell_sctrl_middle_pane_ParamLimits

0x6f23,	// (0x0001450c) cell_sctrl_middle_pane

0x6f3e,	// (0x00014527) aid_touch_sctrl_middle_ParamLimits

0x6f3e,	// (0x00014527) aid_touch_sctrl_middle

0x6f50,	// (0x00014539) bg_sctrl_middle_pane_ParamLimits

0x6f50,	// (0x00014539) bg_sctrl_middle_pane

0x6cb7,	// (0x000142a0) cell_sctrl_middle_pane_g1_ParamLimits

0x6cb7,	// (0x000142a0) cell_sctrl_middle_pane_g1

0x6f5e,	// (0x00014547) cell_sctrl_middle_pane_g2_ParamLimits

0x6f5e,	// (0x00014547) cell_sctrl_middle_pane_g2

0x0001,

0xfcec,	// (0x0001d2d5) cell_sctrl_middle_pane_g_ParamLimits

0xfcec,	// (0x0001d2d5) cell_sctrl_middle_pane_g

0x9165,	// (0x0001674e) bg_sctrl_middle_pane_g1

0x916d,	// (0x00016756) bg_sctrl_middle_pane_g2

0x9175,	// (0x0001675e) bg_sctrl_middle_pane_g3

0x917d,	// (0x00016766) bg_sctrl_middle_pane_g4

0x9185,	// (0x0001676e) bg_sctrl_middle_pane_g5

0x918d,	// (0x00016776) bg_sctrl_middle_pane_g6

0x9195,	// (0x0001677e) bg_sctrl_middle_pane_g7

0x919d,	// (0x00016786) bg_sctrl_middle_pane_g8

0x0007,

0xfcf1,	// (0x0001d2da) bg_sctrl_middle_pane_g

0x91a5,	// (0x0001678e) bg_sctrl_middle_pane_g8_copy1

0x9165,	// (0x0001674e) bg_sctrl_sk_pane_g1

0x9175,	// (0x0001675e) bg_sctrl_sk_pane_g2

0x916d,	// (0x00016756) bg_sctrl_sk_pane_g3

0x0008,

0xf832,	// (0x0001ce1b) bg_sctrl_sk_pane_g

0x3aab,	// (0x00011094) aid_size_touch_scroll_bar

0x9185,	// (0x0001676e) bg_sctrl_sk_pane_g4

0x917d,	// (0x00016766) bg_sctrl_sk_pane_g5

0x918d,	// (0x00016776) bg_sctrl_sk_pane_g6

0x9195,	// (0x0001677e) bg_sctrl_sk_pane_g7

0x91a5,	// (0x0001678e) bg_sctrl_sk_pane_g8

0x919d,	// (0x00016786) bg_sctrl_sk_pane_g9

0x5ffd,	// (0x000135e6) popup_fep_china_hwr2_fs_candidate_window

0x6007,	// (0x000135f0) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6007,	// (0x000135f0) popup_fep_china_hwr2_fs_control_window

0x6cb7,	// (0x000142a0) sctrl_sk_top_pane_g2

0x0001,

0xfce7,	// (0x0001d2d0) sctrl_sk_top_pane_g

0xd73e,	// (0x0001ad27) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd73e,	// (0x0001ad27) aid_fep_china_hwr2_fs_cell

0xd750,	// (0x0001ad39) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd750,	// (0x0001ad39) bg_popup_fep_shadow_pane_cp4

0xd767,	// (0x0001ad50) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd767,	// (0x0001ad50) bg_popup_fep_shadow_pane_cp5

0xd779,	// (0x0001ad62) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd779,	// (0x0001ad62) popup_fep_china_hwr2_fs_control_bar_grid

0xd789,	// (0x0001ad72) popup_fep_china_hwr2_fs_control_funtion_grid

0xd791,	// (0x0001ad7a) aid_fep_china_hwr2_fs_candi_cell

0x359a,	// (0x00010b83) bg_popup_fep_shadow_pane_cp6

0xd79b,	// (0x0001ad84) popup_fep_china_hwr2_fs_candidate_grid

0xd7a5,	// (0x0001ad8e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7a5,	// (0x0001ad8e) cell_fep_china_hwr2_fs_funtion_grid

0xbcdb,	// (0x000192c4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7bd,	// (0x0001ada6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7bd,	// (0x0001ada6) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7cb,	// (0x0001adb4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7cb,	// (0x0001adb4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd02,	// (0x0001d2eb) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd02,	// (0x0001d2eb) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7e1,	// (0x0001adca) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7e1,	// (0x0001adca) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7f6,	// (0x0001addf) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7f6,	// (0x0001addf) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd07,	// (0x0001d2f0) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd07,	// (0x0001d2f0) cell_fep_china_hwr2_fs_funtion_grid_t

0xd812,	// (0x0001adfb) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd81a,	// (0x0001ae03) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd822,	// (0x0001ae0b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0c,	// (0x0001d2f5) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd82a,	// (0x0001ae13) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd82a,	// (0x0001ae13) cell_fep_china_hwr2_fs_candidate_grid

0xd843,	// (0x0001ae2c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd84b,	// (0x0001ae34) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbcdb,	// (0x000192c4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbcdb,	// (0x000192c4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb27,	// (0x0001d110) cell_fep_china_hwr2_fs_candidate_grid_g

0xd853,	// (0x0001ae3c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8d30,	// (0x00016319) clock_nsta_pane_cp_24_ParamLimits

0x8d30,	// (0x00016319) clock_nsta_pane_cp_24

0x8dae,	// (0x00016397) indicator_nsta_pane_cp_24_ParamLimits

0x8dae,	// (0x00016397) indicator_nsta_pane_cp_24

0x9f48,	// (0x00017531) heading_pane_g1

0x0001,

0xf897,	// (0x0001ce80) heading_pane_g

0xaa7d,	// (0x00018066) grid_sct_catagory_button_pane

0xaaad,	// (0x00018096) scroll_pane_cp5_ParamLimits

0xb881,	// (0x00018e6a) button_value_adjust_pane_cp5_ParamLimits

0xb881,	// (0x00018e6a) button_value_adjust_pane_cp5

0xb97b,	// (0x00018f64) form2_midp_time_pane_ParamLimits

0xd861,	// (0x0001ae4a) cell_sct_catagory_button_pane_ParamLimits

0xd861,	// (0x0001ae4a) cell_sct_catagory_button_pane

0xbca0,	// (0x00019289) bg_button_pane_cp01_ParamLimits

0xbca0,	// (0x00019289) bg_button_pane_cp01

0xbcdb,	// (0x000192c4) cell_sct_catagory_button_pane_g1

0x63d3,	// (0x000139bc) popup_tb_extension_window

0xd873,	// (0x0001ae5c) aid_size_cell_ext_ParamLimits

0xd873,	// (0x0001ae5c) aid_size_cell_ext

0x38dd,	// (0x00010ec6) bg_tb_trans_pane_cp1_ParamLimits

0x38dd,	// (0x00010ec6) bg_tb_trans_pane_cp1

0xd893,	// (0x0001ae7c) grid_tb_ext_pane_ParamLimits

0xd893,	// (0x0001ae7c) grid_tb_ext_pane

0xd8c3,	// (0x0001aeac) cell_tb_ext_pane_ParamLimits

0xd8c3,	// (0x0001aeac) cell_tb_ext_pane

0xd8da,	// (0x0001aec3) cell_tb_ext_pane_g1_ParamLimits

0xd8da,	// (0x0001aec3) cell_tb_ext_pane_g1

0xd8f7,	// (0x0001aee0) cell_tb_ext_pane_t1

0x38dd,	// (0x00010ec6) list_highlight_pane_cp11_ParamLimits

0x38dd,	// (0x00010ec6) list_highlight_pane_cp11

0x57f3,	// (0x00012ddc) popup_uni_indicator_window_ParamLimits

0x57f3,	// (0x00012ddc) popup_uni_indicator_window

0x3bbb,	// (0x000111a4) bg_popup_sub_pane_cp14

0xd913,	// (0x0001aefc) list_uniindi_pane

0xd91f,	// (0x0001af08) uniindi_top_pane

0x38dd,	// (0x00010ec6) bg_uniindi_top_pane

0xd93e,	// (0x0001af27) uniindi_top_pane_g1

0xd954,	// (0x0001af3d) uniindi_top_pane_g2

0x0003,

0xfd13,	// (0x0001d2fc) uniindi_top_pane_g

0xd97e,	// (0x0001af67) uniindi_top_pane_t1

0xd9a8,	// (0x0001af91) list_single_uniindi_pane_ParamLimits

0xd9a8,	// (0x0001af91) list_single_uniindi_pane

0xbcdb,	// (0x000192c4) bg_uniindi_top_pane_g1

0xd9bb,	// (0x0001afa4) list_single_uniindi_pane_g1

0xd9ce,	// (0x0001afb7) list_single_uniindi_pane_t1

0x5677,	// (0x00012c60) control_bg_pane

0xd9f3,	// (0x0001afdc) bg_sctrl_sk_pane_cp1

0xd9fc,	// (0x0001afe5) bg_sctrl_sk_pane_cp2

0xda05,	// (0x0001afee) control_bg_pane_g1

0xda0e,	// (0x0001aff7) control_bg_pane_g2

0x0001,

0xfd1c,	// (0x0001d305) control_bg_pane_g

0xb6c7,	// (0x00018cb0) cell_indicator_nsta_pane_g1_ParamLimits

0xb6d5,	// (0x00018cbe) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8b,	// (0x0001d074) cell_indicator_nsta_pane_g_ParamLimits

0xba03,	// (0x00018fec) form2_midp_time_pane_t1_ParamLimits

0x5f67,	// (0x00013550) main_idle_act4_pane_ParamLimits

0x5f67,	// (0x00013550) main_idle_act4_pane

0x63d3,	// (0x000139bc) popup_tb_extension_window_ParamLimits

0xd8b3,	// (0x0001ae9c) tb_ext_find_pane_ParamLimits

0xd8b3,	// (0x0001ae9c) tb_ext_find_pane

0xda17,	// (0x0001b000) ai_gene_pane_1_cp1

0x4900,	// (0x00011ee9) ai_gene_pane_2_cp1

0xda1f,	// (0x0001b008) list_single_idle_plugin_calendar_pane

0xda28,	// (0x0001b011) list_single_idle_plugin_notification_pane

0xda31,	// (0x0001b01a) list_single_idle_plugin_player_pane

0xda3a,	// (0x0001b023) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda3a,	// (0x0001b023) list_single_idle_plugin_shortcut_pane

0xda5c,	// (0x0001b045) main_idle_act4_pane_t1

0xda6e,	// (0x0001b057) main_idle_act4_pane_t2

0x0001,

0xfd21,	// (0x0001d30a) main_idle_act4_pane_t

0xda80,	// (0x0001b069) middle_sk_idle_act4_pane_ParamLimits

0xda80,	// (0x0001b069) middle_sk_idle_act4_pane

0xda96,	// (0x0001b07f) popup_clock_digital_analogue_window_cp2

0xdab0,	// (0x0001b099) shortcut_wheel_idle_act4_pane_ParamLimits

0xdab0,	// (0x0001b099) shortcut_wheel_idle_act4_pane

0xbcdb,	// (0x000192c4) shortcut_wheel_idle_act4_pane_g1

0xbcdb,	// (0x000192c4) shortcut_wheel_idle_act4_pane_g2

0xbcdb,	// (0x000192c4) shortcut_wheel_idle_act4_pane_g3

0xbcdb,	// (0x000192c4) shortcut_wheel_idle_act4_pane_g4

0xbcdb,	// (0x000192c4) shortcut_wheel_idle_act4_pane_g5

0xdac4,	// (0x0001b0ad) shortcut_wheel_idle_act4_pane_g6

0xdacc,	// (0x0001b0b5) shortcut_wheel_idle_act4_pane_g7

0xdad4,	// (0x0001b0bd) shortcut_wheel_idle_act4_pane_g8

0xdadc,	// (0x0001b0c5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd26,	// (0x0001d30f) shortcut_wheel_idle_act4_pane_g

0xbf4b,	// (0x00019534) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf4b,	// (0x00019534) middle_sk_idle_act4_pane_g1

0xdb40,	// (0x0001b129) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb40,	// (0x0001b129) middle_sk_idle_act4_pane_g2

0x0001,

0xfd49,	// (0x0001d332) middle_sk_idle_act4_pane_g_ParamLimits

0xfd49,	// (0x0001d332) middle_sk_idle_act4_pane_g

0xdb4c,	// (0x0001b135) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb4c,	// (0x0001b135) middle_sk_idle_act4_pane_t1

0xdb69,	// (0x0001b152) grid_ai_shortcut_pane_ParamLimits

0xdb69,	// (0x0001b152) grid_ai_shortcut_pane

0xdb82,	// (0x0001b16b) list_highlight_pane_cp16_ParamLimits

0xdb82,	// (0x0001b16b) list_highlight_pane_cp16

0xdb8f,	// (0x0001b178) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb8f,	// (0x0001b178) list_single_idle_plugin_shortcut_pane_g1

0xdb9b,	// (0x0001b184) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb9b,	// (0x0001b184) list_single_idle_plugin_shortcut_pane_g2

0xdbb3,	// (0x0001b19c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbb3,	// (0x0001b19c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4e,	// (0x0001d337) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4e,	// (0x0001d337) list_single_idle_plugin_shortcut_pane_g

0xdbc6,	// (0x0001b1af) cell_ai_shortcut_pane_ParamLimits

0xdbc6,	// (0x0001b1af) cell_ai_shortcut_pane

0xdbea,	// (0x0001b1d3) cell_ai_shortcut_pane_g1_ParamLimits

0xdbea,	// (0x0001b1d3) cell_ai_shortcut_pane_g1

0xda17,	// (0x0001b000) ai_gene_pane_1_cp2

0xdc0c,	// (0x0001b1f5) ai_gene_pane_2_cp2

0xdc14,	// (0x0001b1fd) list_highlight_pane_cp15

0xdc1d,	// (0x0001b206) list_single_idle_plugin_calendar_pane_g1

0xdc14,	// (0x0001b1fd) list_highlight_pane_cp17

0xdc25,	// (0x0001b20e) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc2d,	// (0x0001b216) list_single_idle_plugin_player_pane_g1

0xacd6,	// (0x000182bf) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd55,	// (0x0001d33e) list_single_idle_plugin_player_pane_g

0xdc35,	// (0x0001b21e) list_single_idle_plugin_player_pane_t1

0xdc43,	// (0x0001b22c) list_single_idle_plugin_player_pane_t2

0xdc51,	// (0x0001b23a) list_single_idle_plugin_player_pane_t3

0xdc5f,	// (0x0001b248) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5a,	// (0x0001d343) list_single_idle_plugin_player_pane_t

0xdc6d,	// (0x0001b256) wait_bar_pane_cp15

0xdc75,	// (0x0001b25e) grid_ai_notification_pane

0xacd6,	// (0x000182bf) list_single_idle_plugin_notification_pane_g1

0xdc7e,	// (0x0001b267) cell_ai_notification_pane_ParamLimits

0xdc7e,	// (0x0001b267) cell_ai_notification_pane

0xdc8b,	// (0x0001b274) cell_ai_notification_pane_g1

0xdc93,	// (0x0001b27c) cell_ai_notification_pane_t1

0xdca1,	// (0x0001b28a) tb_ext_find_button_pane

0xdca9,	// (0x0001b292) tb_ext_find_pane_g1

0xdcb1,	// (0x0001b29a) tb_ext_find_pane_t1

0x4238,	// (0x00011821) tb_ext_find_button_pane_g1

0xdcbf,	// (0x0001b2a8) tb_ext_find_button_pane_g2

0x0001,

0xfd63,	// (0x0001d34c) tb_ext_find_button_pane_g

0xda5c,	// (0x0001b045) main_idle_act4_pane_t1_ParamLimits

0xda6e,	// (0x0001b057) main_idle_act4_pane_t2_ParamLimits

0xfd21,	// (0x0001d30a) main_idle_act4_pane_t_ParamLimits

0xda96,	// (0x0001b07f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaa4,	// (0x0001b08d) sat_plugin_idle_act4_pane_ParamLimits

0xdaa4,	// (0x0001b08d) sat_plugin_idle_act4_pane

0xdcc8,	// (0x0001b2b1) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcc8,	// (0x0001b2b1) sat_plugin_idle_act4_pane_t1

0xdcdb,	// (0x0001b2c4) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcdb,	// (0x0001b2c4) sat_plugin_idle_act4_pane_t2

0xdcee,	// (0x0001b2d7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdcee,	// (0x0001b2d7) sat_plugin_idle_act4_pane_t3

0xdd01,	// (0x0001b2ea) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd01,	// (0x0001b2ea) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd68,	// (0x0001d351) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd68,	// (0x0001d351) sat_plugin_idle_act4_pane_t

0x573c,	// (0x00012d25) popup_battery_window_ParamLimits

0x573c,	// (0x00012d25) popup_battery_window

0x38dd,	// (0x00010ec6) bg_popup_sub_pane_cp25_ParamLimits

0x38dd,	// (0x00010ec6) bg_popup_sub_pane_cp25

0xdd14,	// (0x0001b2fd) popup_battery_window_g1_ParamLimits

0xdd14,	// (0x0001b2fd) popup_battery_window_g1

0xdd20,	// (0x0001b309) popup_battery_window_t1_ParamLimits

0xdd20,	// (0x0001b309) popup_battery_window_t1

0xdd32,	// (0x0001b31b) popup_battery_window_t2_ParamLimits

0xdd32,	// (0x0001b31b) popup_battery_window_t2

0x0001,

0xfd71,	// (0x0001d35a) popup_battery_window_t_ParamLimits

0xfd71,	// (0x0001d35a) popup_battery_window_t

0x8a94,	// (0x0001607d) midp_canvas_pane_ParamLimits

0x8b0d,	// (0x000160f6) midp_keypad_pane_ParamLimits

0x8b0d,	// (0x000160f6) midp_keypad_pane

0x4a5e,	// (0x00012047) main_midp_pane_ParamLimits

0xb741,	// (0x00018d2a) signal_pane_g2_cp_ParamLimits

0xdd4f,	// (0x0001b338) aid_size_cell_midp_keypad_ParamLimits

0xdd4f,	// (0x0001b338) aid_size_cell_midp_keypad

0xdd69,	// (0x0001b352) midp_keyp_game_grid_pane_ParamLimits

0xdd69,	// (0x0001b352) midp_keyp_game_grid_pane

0xdd89,	// (0x0001b372) midp_keyp_rocker_pane_ParamLimits

0xdd89,	// (0x0001b372) midp_keyp_rocker_pane

0xddc2,	// (0x0001b3ab) midp_keyp_sk_left_pane_ParamLimits

0xddc2,	// (0x0001b3ab) midp_keyp_sk_left_pane

0xde1c,	// (0x0001b405) midp_keyp_sk_right_pane_ParamLimits

0xde1c,	// (0x0001b405) midp_keyp_sk_right_pane

0x359a,	// (0x00010b83) bg_button_pane_cp03

0xde76,	// (0x0001b45f) midp_keyp_sk_left_pane_g1

0x359a,	// (0x00010b83) bg_button_pane_cp04

0xde76,	// (0x0001b45f) midp_keyp_sk_right_pane_g1

0xbcdb,	// (0x000192c4) midp_keyp_rocker_pane_g1

0xde7f,	// (0x0001b468) keyp_game_cell_pane_ParamLimits

0xde7f,	// (0x0001b468) keyp_game_cell_pane

0x359a,	// (0x00010b83) bg_button_pane_cp02

0xde92,	// (0x0001b47b) keyp_game_cell_pane_g1

0x5772,	// (0x00012d5b) popup_fep_vkb2_window_ParamLimits

0x5772,	// (0x00012d5b) popup_fep_vkb2_window

0x6f7c,	// (0x00014565) aid_size_cell_vkb2_ParamLimits

0x6f7c,	// (0x00014565) aid_size_cell_vkb2

0x6fc8,	// (0x000145b1) popup_fep_vkb2_window_g1_ParamLimits

0x6fc8,	// (0x000145b1) popup_fep_vkb2_window_g1

0x7010,	// (0x000145f9) vkb2_area_bottom_pane_ParamLimits

0x7010,	// (0x000145f9) vkb2_area_bottom_pane

0x705c,	// (0x00014645) vkb2_area_keypad_pane_ParamLimits

0x705c,	// (0x00014645) vkb2_area_keypad_pane

0x709e,	// (0x00014687) vkb2_area_top_pane_ParamLimits

0x709e,	// (0x00014687) vkb2_area_top_pane

0x711d,	// (0x00014706) vkb2_top_entry_pane_ParamLimits

0x711d,	// (0x00014706) vkb2_top_entry_pane

0x7147,	// (0x00014730) vkb2_top_grid_left_pane_ParamLimits

0x7147,	// (0x00014730) vkb2_top_grid_left_pane

0x7166,	// (0x0001474f) vkb2_top_grid_right_pane_ParamLimits

0x7166,	// (0x0001474f) vkb2_top_grid_right_pane

0x7185,	// (0x0001476e) vkb2_cell_keypad_pane_ParamLimits

0x7185,	// (0x0001476e) vkb2_cell_keypad_pane

0x7256,	// (0x0001483f) vkb2_area_bottom_grid_pane_ParamLimits

0x7256,	// (0x0001483f) vkb2_area_bottom_grid_pane

0x727c,	// (0x00014865) vkb2_area_bottom_pane_g1_ParamLimits

0x727c,	// (0x00014865) vkb2_area_bottom_pane_g1

0x72a0,	// (0x00014889) vkb2_area_bottom_pane_g2_ParamLimits

0x72a0,	// (0x00014889) vkb2_area_bottom_pane_g2

0x72ce,	// (0x000148b7) vkb2_area_bottom_pane_g3_ParamLimits

0x72ce,	// (0x000148b7) vkb2_area_bottom_pane_g3

0x0002,

0xfd76,	// (0x0001d35f) vkb2_area_bottom_pane_g_ParamLimits

0xfd76,	// (0x0001d35f) vkb2_area_bottom_pane_g

0x732f,	// (0x00014918) vkb2_top_cell_left_pane_ParamLimits

0x732f,	// (0x00014918) vkb2_top_cell_left_pane

0xdea3,	// (0x0001b48c) vkb2_top_entry_pane_g1_ParamLimits

0xdea3,	// (0x0001b48c) vkb2_top_entry_pane_g1

0xdeb1,	// (0x0001b49a) vkb2_top_entry_pane_t1_ParamLimits

0xdeb1,	// (0x0001b49a) vkb2_top_entry_pane_t1

0xdee3,	// (0x0001b4cc) vkb2_top_entry_pane_t2_ParamLimits

0xdee3,	// (0x0001b4cc) vkb2_top_entry_pane_t2

0xdf15,	// (0x0001b4fe) vkb2_top_entry_pane_t3_ParamLimits

0xdf15,	// (0x0001b4fe) vkb2_top_entry_pane_t3

0x0002,

0xfd7d,	// (0x0001d366) vkb2_top_entry_pane_t_ParamLimits

0xfd7d,	// (0x0001d366) vkb2_top_entry_pane_t

0x737c,	// (0x00014965) vkb2_top_grid_right_pane_g1_ParamLimits

0x737c,	// (0x00014965) vkb2_top_grid_right_pane_g1

0x7392,	// (0x0001497b) vkb2_top_grid_right_pane_g2_ParamLimits

0x7392,	// (0x0001497b) vkb2_top_grid_right_pane_g2

0x73aa,	// (0x00014993) vkb2_top_grid_right_pane_g3_ParamLimits

0x73aa,	// (0x00014993) vkb2_top_grid_right_pane_g3

0x73c2,	// (0x000149ab) vkb2_top_grid_right_pane_g4_ParamLimits

0x73c2,	// (0x000149ab) vkb2_top_grid_right_pane_g4

0x0003,

0xfd84,	// (0x0001d36d) vkb2_top_grid_right_pane_g_ParamLimits

0xfd84,	// (0x0001d36d) vkb2_top_grid_right_pane_g

0x73d8,	// (0x000149c1) vkb2_top_cell_left_pane_g1

0x73ef,	// (0x000149d8) vkb2_cell_keypad_pane_g1_ParamLimits

0x73ef,	// (0x000149d8) vkb2_cell_keypad_pane_g1

0xdf39,	// (0x0001b522) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf39,	// (0x0001b522) vkb2_cell_keypad_pane_t1

0x73fd,	// (0x000149e6) vkb2_cell_bottom_grid_pane_ParamLimits

0x73fd,	// (0x000149e6) vkb2_cell_bottom_grid_pane

0x7436,	// (0x00014a1f) vkb2_cell_bottom_grid_pane_g1

0xdae4,	// (0x0001b0cd) aid_call2_pane_cp02

0xdaec,	// (0x0001b0d5) aid_call_pane_cp02

0xdaf4,	// (0x0001b0dd) clock_digital_number_pane_cp10

0xdafc,	// (0x0001b0e5) clock_digital_number_pane_cp11

0xdb04,	// (0x0001b0ed) clock_digital_number_pane_cp12

0xdb0c,	// (0x0001b0f5) clock_digital_number_pane_cp13

0xdb14,	// (0x0001b0fd) clock_digital_separator_pane_cp10

0x4238,	// (0x00011821) popup_clock_digital_analogue_window_cp2_g1

0x4238,	// (0x00011821) popup_clock_digital_analogue_window_cp2_g2

0xdb1c,	// (0x0001b105) popup_clock_digital_analogue_window_cp2_g3

0x4238,	// (0x00011821) popup_clock_digital_analogue_window_cp2_g4

0xdb1c,	// (0x0001b105) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd39,	// (0x0001d322) popup_clock_digital_analogue_window_cp2_g

0xdb24,	// (0x0001b10d) popup_clock_digital_analogue_window_cp2_t1

0xdb32,	// (0x0001b11b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd44,	// (0x0001d32d) popup_clock_digital_analogue_window_cp2_t

0xbcdb,	// (0x000192c4) clock_digital_number_pane_cp10_g1

0xbcdb,	// (0x000192c4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb27,	// (0x0001d110) clock_digital_number_pane_cp10_g

0xbcdb,	// (0x000192c4) clock_digital_separator_pane_cp10_g1

0xbcdb,	// (0x000192c4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb27,	// (0x0001d110) clock_digital_separator_pane_cp10_g

0xd960,	// (0x0001af49) uniindi_top_pane_g3

0xd971,	// (0x0001af5a) uniindi_top_pane_g4

0x7210,	// (0x000147f9) vkb2_row_keypad_pane_ParamLimits

0x7210,	// (0x000147f9) vkb2_row_keypad_pane

0x7456,	// (0x00014a3f) vkb2_cell_t_keypad_pane_ParamLimits

0x7456,	// (0x00014a3f) vkb2_cell_t_keypad_pane

0x7466,	// (0x00014a4f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7466,	// (0x00014a4f) vkb2_cell_t_keypad_pane_cp08

0x7479,	// (0x00014a62) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7479,	// (0x00014a62) vkb2_cell_t_keypad_pane_cp09

0x748d,	// (0x00014a76) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x748d,	// (0x00014a76) vkb2_cell_t_keypad_pane_cp01

0x749e,	// (0x00014a87) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x749e,	// (0x00014a87) vkb2_cell_t_keypad_pane_cp02

0x74af,	// (0x00014a98) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x74af,	// (0x00014a98) vkb2_cell_t_keypad_pane_cp03

0x74c0,	// (0x00014aa9) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74c0,	// (0x00014aa9) vkb2_cell_t_keypad_pane_cp04

0x74d1,	// (0x00014aba) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74d1,	// (0x00014aba) vkb2_cell_t_keypad_pane_cp05

0x74e2,	// (0x00014acb) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x74e2,	// (0x00014acb) vkb2_cell_t_keypad_pane_cp06

0x74f3,	// (0x00014adc) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x74f3,	// (0x00014adc) vkb2_cell_t_keypad_pane_cp07

0x7504,	// (0x00014aed) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7504,	// (0x00014aed) vkb2_cell_t_keypad_pane_cp10

0x6cb7,	// (0x000142a0) vkb2_cell_t_keypad_pane_g1

0xdf50,	// (0x0001b539) vkb2_cell_t_keypad_pane_t1

0x5677,	// (0x00012c60) popup_grid_graphic2_window

0xdf62,	// (0x0001b54b) aid_size_cell_graphic2_ParamLimits

0xdf62,	// (0x0001b54b) aid_size_cell_graphic2

0xdf9a,	// (0x0001b583) bg_popup_window_pane_cp21_ParamLimits

0xdf9a,	// (0x0001b583) bg_popup_window_pane_cp21

0xdfa8,	// (0x0001b591) graphic2_pages_pane_ParamLimits

0xdfa8,	// (0x0001b591) graphic2_pages_pane

0xdfee,	// (0x0001b5d7) grid_graphic2_control_pane_ParamLimits

0xdfee,	// (0x0001b5d7) grid_graphic2_control_pane

0xe04d,	// (0x0001b636) grid_graphic2_pane_ParamLimits

0xe04d,	// (0x0001b636) grid_graphic2_pane

0xe0c1,	// (0x0001b6aa) cell_graphic2_pane

0x5677,	// (0x00012c60) main_comp_mode_pane

0xd16e,	// (0x0001a757) list_ai3_gene_pane_ParamLimits

0xd59f,	// (0x0001ab88) bg_popup_window_pane_cp19_ParamLimits

0xd5ab,	// (0x0001ab94) bg_touch_area_indi_pane_ParamLimits

0xd5ab,	// (0x0001ab94) bg_touch_area_indi_pane

0xd5c1,	// (0x0001abaa) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5c1,	// (0x0001abaa) bg_touch_area_indi_pane_cp01

0xd5d7,	// (0x0001abc0) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5d7,	// (0x0001abc0) bg_touch_area_indi_pane_cp02

0xd5ed,	// (0x0001abd6) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5ed,	// (0x0001abd6) bg_touch_area_indi_pane_cp03

0xd607,	// (0x0001abf0) popup_slider_window_g1_ParamLimits

0xd623,	// (0x0001ac0c) popup_slider_window_g2_ParamLimits

0xd63f,	// (0x0001ac28) popup_slider_window_g3_ParamLimits

0xfcce,	// (0x0001d2b7) popup_slider_window_g_ParamLimits

0xd6a5,	// (0x0001ac8e) popup_slider_window_t1_ParamLimits

0xd719,	// (0x0001ad02) small_volume_slider_vertical_pane_ParamLimits

0xe0c1,	// (0x0001b6aa) cell_graphic2_pane_ParamLimits

0xe110,	// (0x0001b6f9) bg_button_pane_cp10_ParamLimits

0xe110,	// (0x0001b6f9) bg_button_pane_cp10

0xe123,	// (0x0001b70c) bg_button_pane_cp11_ParamLimits

0xe123,	// (0x0001b70c) bg_button_pane_cp11

0xe136,	// (0x0001b71f) graphic2_pages_pane_g1_ParamLimits

0xe136,	// (0x0001b71f) graphic2_pages_pane_g1

0xe151,	// (0x0001b73a) graphic2_pages_pane_g2_ParamLimits

0xe151,	// (0x0001b73a) graphic2_pages_pane_g2

0x0001,

0xfd92,	// (0x0001d37b) graphic2_pages_pane_g_ParamLimits

0xfd92,	// (0x0001d37b) graphic2_pages_pane_g

0xe169,	// (0x0001b752) graphic2_pages_pane_t1_ParamLimits

0xe169,	// (0x0001b752) graphic2_pages_pane_t1

0xe181,	// (0x0001b76a) cell_graphic2_control_pane_ParamLimits

0xe181,	// (0x0001b76a) cell_graphic2_control_pane

0xe19f,	// (0x0001b788) cell_graphic2_pane_g1_ParamLimits

0xe19f,	// (0x0001b788) cell_graphic2_pane_g1

0xe1ac,	// (0x0001b795) cell_graphic2_pane_g2_ParamLimits

0xe1ac,	// (0x0001b795) cell_graphic2_pane_g2

0xe1b9,	// (0x0001b7a2) cell_graphic2_pane_g3_ParamLimits

0xe1b9,	// (0x0001b7a2) cell_graphic2_pane_g3

0xe1c6,	// (0x0001b7af) cell_graphic2_pane_g4_ParamLimits

0xe1c6,	// (0x0001b7af) cell_graphic2_pane_g4

0xe1d3,	// (0x0001b7bc) cell_graphic2_pane_g5_ParamLimits

0xe1d3,	// (0x0001b7bc) cell_graphic2_pane_g5

0x0004,

0xfd97,	// (0x0001d380) cell_graphic2_pane_g_ParamLimits

0xfd97,	// (0x0001d380) cell_graphic2_pane_g

0xe1ec,	// (0x0001b7d5) cell_graphic2_pane_t1_ParamLimits

0xe1ec,	// (0x0001b7d5) cell_graphic2_pane_t1

0x9285,	// (0x0001686e) grid_highlight_pane_cp11_ParamLimits

0x9285,	// (0x0001686e) grid_highlight_pane_cp11

0x38dd,	// (0x00010ec6) bg_button_pane_cp05

0xe222,	// (0x0001b80b) cell_graphic2_control_pane_g1

0xbcdb,	// (0x000192c4) bg_touch_area_indi_pane_g1

0xe24a,	// (0x0001b833) aid_cmod_rocker_key_size

0xe254,	// (0x0001b83d) aid_cmode_itu_key_size

0xe25e,	// (0x0001b847) main_cmode_video_pane

0xe268,	// (0x0001b851) main_comp_mode_itu_pane

0xe274,	// (0x0001b85d) main_comp_mode_rocker_pane

0xe280,	// (0x0001b869) cell_cmode_rocker_pane_ParamLimits

0xe280,	// (0x0001b869) cell_cmode_rocker_pane

0xe292,	// (0x0001b87b) cell_cmode_itu_pane_ParamLimits

0xe292,	// (0x0001b87b) cell_cmode_itu_pane

0x3bbb,	// (0x000111a4) bg_button_pane_cp06_ParamLimits

0x3bbb,	// (0x000111a4) bg_button_pane_cp06

0xbf4b,	// (0x00019534) cell_cmode_rocker_pane_g1_ParamLimits

0xbf4b,	// (0x00019534) cell_cmode_rocker_pane_g1

0xd7bd,	// (0x0001ada6) cell_cmode_rocker_pane_g2_ParamLimits

0xd7bd,	// (0x0001ada6) cell_cmode_rocker_pane_g2

0x0001,

0xfda7,	// (0x0001d390) cell_cmode_rocker_pane_g_ParamLimits

0xfda7,	// (0x0001d390) cell_cmode_rocker_pane_g

0x359a,	// (0x00010b83) bg_button_pane_cp07

0xe2a7,	// (0x0001b890) cell_cmode_itu_pane_g1

0xe2b0,	// (0x0001b899) cell_cmode_itu_pane_t1

0xe2be,	// (0x0001b8a7) cell_cmode_itu_pane_t2

0x0001,

0xfdac,	// (0x0001d395) cell_cmode_itu_pane_t

0xd9e3,	// (0x0001afcc) aid_touch_ctrl_left

0xd9eb,	// (0x0001afd4) aid_touch_ctrl_right

0x359a,	// (0x00010b83) compa_mode_pane

0xe2cc,	// (0x0001b8b5) aid_cmod_rocker_key_size_cp

0xe2d6,	// (0x0001b8bf) aid_cmode_itu_key_size_cp

0xe2e0,	// (0x0001b8c9) compa_mode_pane_g1

0xe2e8,	// (0x0001b8d1) compa_mode_pane_g2

0xe2f0,	// (0x0001b8d9) compa_mode_pane_g3

0x0002,

0xfdb1,	// (0x0001d39a) compa_mode_pane_g

0xe2f8,	// (0x0001b8e1) main_comp_mode_itu_pane_cp

0xe300,	// (0x0001b8e9) main_comp_mode_rocker_pane_cp

0xe308,	// (0x0001b8f1) cell_cmode_itu_pane_cp_ParamLimits

0xe308,	// (0x0001b8f1) cell_cmode_itu_pane_cp

0xe31d,	// (0x0001b906) cell_cmode_rocker_pane_cp_ParamLimits

0xe31d,	// (0x0001b906) cell_cmode_rocker_pane_cp

0x3bbb,	// (0x000111a4) bg_button_pane_cp06_cp_ParamLimits

0x3bbb,	// (0x000111a4) bg_button_pane_cp06_cp

0xbf4b,	// (0x00019534) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf4b,	// (0x00019534) cell_cmode_rocker_pane_g1_cp

0xbcdb,	// (0x000192c4) cell_cmode_rocker_pane_g2_cp

0x359a,	// (0x00010b83) bg_button_pane_cp07_cp

0xe32f,	// (0x0001b918) cell_cmode_itu_pane_g1_cp

0xe338,	// (0x0001b921) cell_cmode_itu_pane_t1_cp

0xe338,	// (0x0001b921) cell_cmode_itu_pane_t2_cp

0xa775,	// (0x00017d5e) settings_code_pane_cp2

0x3799,	// (0x00010d82) bg_popup_window_pane_cp3_ParamLimits

0x39f6,	// (0x00010fdf) heading_pane_cp3_ParamLimits

0x3a05,	// (0x00010fee) listscroll_popup_graphic_pane_ParamLimits

0x6a60,	// (0x00014049) fep_hwr_aid_pane_ParamLimits

0x6ed7,	// (0x000144c0) aid_touch_sctrl_top_ParamLimits

0x6ef2,	// (0x000144db) sctrl_sk_top_pane_g1_ParamLimits

0x6cb7,	// (0x000142a0) sctrl_sk_top_pane_g2_ParamLimits

0xfce7,	// (0x0001d2d0) sctrl_sk_top_pane_g_ParamLimits

0x6eff,	// (0x000144e8) sctrl_sk_top_pane_t1_ParamLimits

0x6ed7,	// (0x000144c0) aid_touch_sctrl_bottom_ParamLimits

0x6eff,	// (0x000144e8) sctrl_sk_bottom_pane_t1_ParamLimits

0xd92c,	// (0x0001af15) aid_area_touch_clock

0x70e4,	// (0x000146cd) aid_vkb2_area_top_pane_cell_ParamLimits

0x70e4,	// (0x000146cd) aid_vkb2_area_top_pane_cell

0x7232,	// (0x0001481b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7232,	// (0x0001481b) aid_vkb2_area_bottom_pane_cell

0xde9b,	// (0x0001b484) popup_char_count_window

0xe346,	// (0x0001b92f) popup_char_count_window_g1

0xe34f,	// (0x0001b938) popup_char_count_window_g2

0xe358,	// (0x0001b941) popup_char_count_window_g3

0x0002,

0xfdb8,	// (0x0001d3a1) popup_char_count_window_g

0xe361,	// (0x0001b94a) popup_char_count_window_t1

0x6fa6,	// (0x0001458f) popup_fep_char_preview_window_ParamLimits

0x6fa6,	// (0x0001458f) popup_fep_char_preview_window

0x7102,	// (0x000146eb) vkb2_top_candi_pane_ParamLimits

0x7102,	// (0x000146eb) vkb2_top_candi_pane

0xe36f,	// (0x0001b958) cell_vkb2_top_candi_pane_ParamLimits

0xe36f,	// (0x0001b958) cell_vkb2_top_candi_pane

0x7519,	// (0x00014b02) bg_popup_fep_char_preview_window_ParamLimits

0x7519,	// (0x00014b02) bg_popup_fep_char_preview_window

0x7527,	// (0x00014b10) popup_fep_char_preview_window_t1_ParamLimits

0x7527,	// (0x00014b10) popup_fep_char_preview_window_t1

0xe3b9,	// (0x0001b9a2) bg_popup_fep_char_preview_window_g1

0xe3c1,	// (0x0001b9aa) bg_popup_fep_char_preview_window_g2

0xe3c9,	// (0x0001b9b2) bg_popup_fep_char_preview_window_g3

0xe3d1,	// (0x0001b9ba) bg_popup_fep_char_preview_window_g4

0xe3d9,	// (0x0001b9c2) bg_popup_fep_char_preview_window_g5

0xe3e1,	// (0x0001b9ca) bg_popup_fep_char_preview_window_g6

0xe3e9,	// (0x0001b9d2) bg_popup_fep_char_preview_window_g7

0xe3f1,	// (0x0001b9da) bg_popup_fep_char_preview_window_g8

0xe3f9,	// (0x0001b9e2) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbf,	// (0x0001d3a8) bg_popup_fep_char_preview_window_g

0x6cb7,	// (0x000142a0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6cb7,	// (0x000142a0) cell_vkb2_top_candi_pane_g1

0x6cc5,	// (0x000142ae) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6cc5,	// (0x000142ae) cell_vkb2_top_candi_pane_g2

0xe02c,	// (0x0001b615) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe02c,	// (0x0001b615) cell_vkb2_top_candi_pane_g3

0x7569,	// (0x00014b52) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7569,	// (0x00014b52) cell_vkb2_top_candi_pane_g4

0xc5e4,	// (0x00019bcd) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc5e4,	// (0x00019bcd) cell_vkb2_top_candi_pane_g5

0x758a,	// (0x00014b73) cell_vkb2_top_candi_pane_g6_ParamLimits

0x758a,	// (0x00014b73) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd4,	// (0x0001d3bd) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd4,	// (0x0001d3bd) cell_vkb2_top_candi_pane_g

0x7598,	// (0x00014b81) cell_vkb2_top_candi_pane_t1

0x6878,	// (0x00013e61) aid_size_touch_slider_mark_ParamLimits

0x6878,	// (0x00013e61) aid_size_touch_slider_mark

0xdfde,	// (0x0001b5c7) grid_graphic2_catg_pane_ParamLimits

0xdfde,	// (0x0001b5c7) grid_graphic2_catg_pane

0xe09d,	// (0x0001b686) popup_grid_graphic2_window_t1_ParamLimits

0xe09d,	// (0x0001b686) popup_grid_graphic2_window_t1

0xe0af,	// (0x0001b698) popup_grid_graphic2_window_t2_ParamLimits

0xe0af,	// (0x0001b698) popup_grid_graphic2_window_t2

0x0001,

0xfd8d,	// (0x0001d376) popup_grid_graphic2_window_t_ParamLimits

0xfd8d,	// (0x0001d376) popup_grid_graphic2_window_t

0x38dd,	// (0x00010ec6) bg_button_pane_cp05_ParamLimits

0xe222,	// (0x0001b80b) cell_graphic2_control_pane_g1_ParamLimits

0xe401,	// (0x0001b9ea) cell_graphic2_catg_pane_ParamLimits

0xe401,	// (0x0001b9ea) cell_graphic2_catg_pane

0x359a,	// (0x00010b83) bg_button_pane_cp12

0xe413,	// (0x0001b9fc) cell_graphic2_catg_pane_g1

0xd8f7,	// (0x0001aee0) cell_tb_ext_pane_t1_ParamLimits

0x734f,	// (0x00014938) vkb2_top_cell_right_narrow_pane_ParamLimits

0x734f,	// (0x00014938) vkb2_top_cell_right_narrow_pane

0x7367,	// (0x00014950) vkb2_top_cell_right_wide_pane_ParamLimits

0x7367,	// (0x00014950) vkb2_top_cell_right_wide_pane

0x6a52,	// (0x0001403b) bg_vkb2_func_pane_ParamLimits

0x6a52,	// (0x0001403b) bg_vkb2_func_pane

0x73d8,	// (0x000149c1) vkb2_top_cell_left_pane_g1_ParamLimits

0x6a52,	// (0x0001403b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6a52,	// (0x0001403b) bg_vkb2_fuc_pane_cp03

0x7436,	// (0x00014a1f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x916d,	// (0x00016756) bg_vkb2_func_pane_g1

0x9175,	// (0x0001675e) bg_vkb2_func_pane_g2

0x9185,	// (0x0001676e) bg_vkb2_func_pane_g3

0x917d,	// (0x00016766) bg_vkb2_func_pane_g4

0x918d,	// (0x00016776) bg_vkb2_func_pane_g5

0x9195,	// (0x0001677e) bg_vkb2_func_pane_g6

0x919d,	// (0x00016786) bg_vkb2_func_pane_g7

0x91a5,	// (0x0001678e) bg_vkb2_func_pane_g8

0x9165,	// (0x0001674e) bg_vkb2_func_pane_g9

0x0008,

0xfde1,	// (0x0001d3ca) bg_vkb2_func_pane_g

0x6a52,	// (0x0001403b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6a52,	// (0x0001403b) bg_vkb2_fuc_pane_cp01

0x73d8,	// (0x000149c1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73d8,	// (0x000149c1) vkb2_top_cell_right_wide_pane_g1

0x6a52,	// (0x0001403b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6a52,	// (0x0001403b) bg_vkb2_fuc_pane_cp02

0x75b7,	// (0x00014ba0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x75b7,	// (0x00014ba0) vkb2_top_cell_right_narrow_pane_g1

0xd519,	// (0x0001ab02) aid_touch_area_decrease_ParamLimits

0xd519,	// (0x0001ab02) aid_touch_area_decrease

0xd53d,	// (0x0001ab26) aid_touch_area_increase_ParamLimits

0xd53d,	// (0x0001ab26) aid_touch_area_increase

0xd555,	// (0x0001ab3e) aid_touch_area_mute_ParamLimits

0xd555,	// (0x0001ab3e) aid_touch_area_mute

0xd571,	// (0x0001ab5a) aid_touch_area_slider_ParamLimits

0xd571,	// (0x0001ab5a) aid_touch_area_slider

0xd65b,	// (0x0001ac44) popup_slider_window_g4_ParamLimits

0xd65b,	// (0x0001ac44) popup_slider_window_g4

0xd673,	// (0x0001ac5c) popup_slider_window_g5_ParamLimits

0xd673,	// (0x0001ac5c) popup_slider_window_g5

0xd695,	// (0x0001ac7e) popup_slider_window_g6_ParamLimits

0xd695,	// (0x0001ac7e) popup_slider_window_g6

0xd6d3,	// (0x0001acbc) popup_slider_window_t2_ParamLimits

0xd6d3,	// (0x0001acbc) popup_slider_window_t2

0x0001,

0xfcdb,	// (0x0001d2c4) popup_slider_window_t_ParamLimits

0xfcdb,	// (0x0001d2c4) popup_slider_window_t

0xd6eb,	// (0x0001acd4) slider_pane_ParamLimits

0xd6eb,	// (0x0001acd4) slider_pane

0xe41c,	// (0x0001ba05) slider_pane_g1_ParamLimits

0xe41c,	// (0x0001ba05) slider_pane_g1

0xe430,	// (0x0001ba19) slider_pane_g2_ParamLimits

0xe430,	// (0x0001ba19) slider_pane_g2

0xe446,	// (0x0001ba2f) slider_pane_g3_ParamLimits

0xe446,	// (0x0001ba2f) slider_pane_g3

0x0003,

0xfdf4,	// (0x0001d3dd) slider_pane_g_ParamLimits

0xfdf4,	// (0x0001d3dd) slider_pane_g

0x642f,	// (0x00013a18) popup_tb_float_extension_window_ParamLimits

0x642f,	// (0x00013a18) popup_tb_float_extension_window

0xe472,	// (0x0001ba5b) aid_size_cell_tb_float_ext

0x359a,	// (0x00010b83) bg_popup_sub_window_cp28

0xe47e,	// (0x0001ba67) grid_tb_float_ext_pane

0xe488,	// (0x0001ba71) cell_tb_float_ext_pane_ParamLimits

0xe488,	// (0x0001ba71) cell_tb_float_ext_pane

0xe4a2,	// (0x0001ba8b) cell_tb_float_ext_pane_g1

0xe4ab,	// (0x0001ba94) grid_highlight_pane_cp12

0x6ba1,	// (0x0001418a) cell_last_hwr_side_pane_ParamLimits

0x6ba1,	// (0x0001418a) cell_last_hwr_side_pane

0xbcdb,	// (0x000192c4) cell_last_hwr_side_pane_g1

0xe4b4,	// (0x0001ba9d) cell_last_hwr_side_pane_g2

0x0001,

0xfdfd,	// (0x0001d3e6) cell_last_hwr_side_pane_g

0x72fe,	// (0x000148e7) vkb2_area_bottom_space_btn_pane_ParamLimits

0x72fe,	// (0x000148e7) vkb2_area_bottom_space_btn_pane

0x6cb7,	// (0x000142a0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf50,	// (0x0001b539) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7598,	// (0x00014b81) cell_vkb2_top_candi_pane_t1_ParamLimits

0x75d7,	// (0x00014bc0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x75d7,	// (0x00014bc0) vkb2_area_bottom_space_btn_pane_g1

0x7611,	// (0x00014bfa) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7611,	// (0x00014bfa) vkb2_area_bottom_space_btn_pane_g2

0x7647,	// (0x00014c30) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7647,	// (0x00014c30) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe02,	// (0x0001d3eb) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe02,	// (0x0001d3eb) vkb2_area_bottom_space_btn_pane_g

0x6b15,	// (0x000140fe) cel_fep_hwr_func_pane_ParamLimits

0x6b15,	// (0x000140fe) cel_fep_hwr_func_pane

0x6b51,	// (0x0001413a) cell_hwr_side_button_pane_ParamLimits

0x6b51,	// (0x0001413a) cell_hwr_side_button_pane

0xd92c,	// (0x0001af15) aid_area_touch_clock_ParamLimits

0x38dd,	// (0x00010ec6) bg_uniindi_top_pane_ParamLimits

0xd93e,	// (0x0001af27) uniindi_top_pane_g1_ParamLimits

0xd954,	// (0x0001af3d) uniindi_top_pane_g2_ParamLimits

0xd960,	// (0x0001af49) uniindi_top_pane_g3_ParamLimits

0xd971,	// (0x0001af5a) uniindi_top_pane_g4_ParamLimits

0xfd13,	// (0x0001d2fc) uniindi_top_pane_g_ParamLimits

0xd97e,	// (0x0001af67) uniindi_top_pane_t1_ParamLimits

0x38dd,	// (0x00010ec6) bg_vkb2_func_pane_cp01_ParamLimits

0x38dd,	// (0x00010ec6) bg_vkb2_func_pane_cp01

0xe4bd,	// (0x0001baa6) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4bd,	// (0x0001baa6) cel_fep_hwr_func_pane_g1

0x38dd,	// (0x00010ec6) bg_vkb2_func_pane_cp02_ParamLimits

0x38dd,	// (0x00010ec6) bg_vkb2_func_pane_cp02

0xe4bd,	// (0x0001baa6) cell_hwr_side_button_pane_g1_ParamLimits

0xe4bd,	// (0x0001baa6) cell_hwr_side_button_pane_g1

0x8fbb,	// (0x000165a4) status_pane_g4_ParamLimits

0x8fbb,	// (0x000165a4) status_pane_g4

0x8fd5,	// (0x000165be) status_pane_t1

0xba16,	// (0x00018fff) form2_midp_gauge_slider_cont_pane

0xba1e,	// (0x00019007) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba30,	// (0x00019019) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba42,	// (0x0001902b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfada,	// (0x0001d0c3) form2_midp_gauge_slider_pane_t_ParamLimits

0xba54,	// (0x0001903d) form2_midp_slider_pane_ParamLimits

0x6f6e,	// (0x00014557) aid_size_cell_func_vkb2_ParamLimits

0x6f6e,	// (0x00014557) aid_size_cell_func_vkb2

0xe45e,	// (0x0001ba47) slider_pane_g4_ParamLimits

0xe45e,	// (0x0001ba47) slider_pane_g4

0x7691,	// (0x00014c7a) form2_midp_gauge_slider_pane_t2_cp01

0x769f,	// (0x00014c88) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x769f,	// (0x00014c88) form2_midp_gauge_slider_pane_t3_cp01

0x76bc,	// (0x00014ca5) form2_midp_slider_pane_cp01

0x359a,	// (0x00010b83) navi_smil_pane

0xe4f6,	// (0x0001badf) navi_smil_pane_g1

0xe4fe,	// (0x0001bae7) navi_smil_pane_t1

0xe4cb,	// (0x0001bab4) form2_midp_slider_pane_g1

0xe4d4,	// (0x0001babd) form2_midp_slider_pane_g2

0xe4dc,	// (0x0001bac5) form2_midp_slider_pane_g3

0xe4cb,	// (0x0001bab4) form2_midp_slider_pane_g4

0xe4e4,	// (0x0001bacd) form2_midp_slider_pane_g5

0x0004,

0xfe0b,	// (0x0001d3f4) form2_midp_slider_pane_g

0x7681,	// (0x00014c6a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7681,	// (0x00014c6a) vkb2_area_bottom_space_btn_pane_g4

0x8dea,	// (0x000163d3) lc0_navi_pane_ParamLimits

0x8dea,	// (0x000163d3) lc0_navi_pane

0x8e60,	// (0x00016449) lc0_stat_indi_pane_ParamLimits

0x8e60,	// (0x00016449) lc0_stat_indi_pane

0x8e77,	// (0x00016460) ls0_title_pane_ParamLimits

0x8e77,	// (0x00016460) ls0_title_pane

0x3bbb,	// (0x000111a4) bg_popup_sub_pane_cp14_ParamLimits

0xd913,	// (0x0001aefc) list_uniindi_pane_ParamLimits

0xd91f,	// (0x0001af08) uniindi_top_pane_ParamLimits

0xd9bb,	// (0x0001afa4) list_single_uniindi_pane_g1_ParamLimits

0xd9ce,	// (0x0001afb7) list_single_uniindi_pane_t1_ParamLimits

0x76c5,	// (0x00014cae) lc0_stat_clock_pane_ParamLimits

0x76c5,	// (0x00014cae) lc0_stat_clock_pane

0xe50c,	// (0x0001baf5) lc0_stat_indi_pane_g1_ParamLimits

0xe50c,	// (0x0001baf5) lc0_stat_indi_pane_g1

0xe519,	// (0x0001bb02) lc0_stat_indi_pane_g2_ParamLimits

0xe519,	// (0x0001bb02) lc0_stat_indi_pane_g2

0x0001,

0xfe16,	// (0x0001d3ff) lc0_stat_indi_pane_g_ParamLimits

0xfe16,	// (0x0001d3ff) lc0_stat_indi_pane_g

0x76d2,	// (0x00014cbb) lc0_uni_indicator_pane_ParamLimits

0x76d2,	// (0x00014cbb) lc0_uni_indicator_pane

0xe526,	// (0x0001bb0f) ls0_title_pane_g1_ParamLimits

0xe526,	// (0x0001bb0f) ls0_title_pane_g1

0xe53a,	// (0x0001bb23) ls0_title_pane_t1_ParamLimits

0xe53a,	// (0x0001bb23) ls0_title_pane_t1

0x76df,	// (0x00014cc8) lc0_uni_indicator_pane_g1_ParamLimits

0x76df,	// (0x00014cc8) lc0_uni_indicator_pane_g1

0xe570,	// (0x0001bb59) lc0_stat_clock_pane_t1

0x5677,	// (0x00012c60) main_ai5_pane

0xe57e,	// (0x0001bb67) ai5_sk_pane_ParamLimits

0xe57e,	// (0x0001bb67) ai5_sk_pane

0xe58b,	// (0x0001bb74) cell_ai5_widget_pane_ParamLimits

0xe58b,	// (0x0001bb74) cell_ai5_widget_pane

0xe654,	// (0x0001bc3d) aid_size_cell_widget_grid

0xe662,	// (0x0001bc4b) bg_ai5_widget_pane_ParamLimits

0xe662,	// (0x0001bc4b) bg_ai5_widget_pane

0xe6de,	// (0x0001bcc7) cell_ai5_widget_pane_g2

0xe6f2,	// (0x0001bcdb) cell_ai5_widget_pane_g3

0xe70c,	// (0x0001bcf5) cell_ai5_widget_pane_g4

0xe71c,	// (0x0001bd05) cell_ai5_widget_pane_g5

0xe72c,	// (0x0001bd15) cell_ai5_widget_pane_g6

0xe738,	// (0x0001bd21) cell_ai5_widget_pane_g7

0xe7a4,	// (0x0001bd8d) cell_ai5_widget_pane_t1_ParamLimits

0xe7a4,	// (0x0001bd8d) cell_ai5_widget_pane_t1

0xe7c1,	// (0x0001bdaa) cell_ai5_widget_pane_t2_ParamLimits

0xe7c1,	// (0x0001bdaa) cell_ai5_widget_pane_t2

0xe7d9,	// (0x0001bdc2) cell_ai5_widget_pane_t3_ParamLimits

0xe7d9,	// (0x0001bdc2) cell_ai5_widget_pane_t3

0xe7f1,	// (0x0001bdda) cell_ai5_widget_pane_t4_ParamLimits

0xe7f1,	// (0x0001bdda) cell_ai5_widget_pane_t4

0xe817,	// (0x0001be00) cell_ai5_widget_pane_t5_ParamLimits

0xe817,	// (0x0001be00) cell_ai5_widget_pane_t5

0xe836,	// (0x0001be1f) cell_ai5_widget_pane_t6_ParamLimits

0xe836,	// (0x0001be1f) cell_ai5_widget_pane_t6

0xe848,	// (0x0001be31) cell_ai5_widget_pane_t7_ParamLimits

0xe848,	// (0x0001be31) cell_ai5_widget_pane_t7

0xe867,	// (0x0001be50) cell_ai5_widget_pane_t8_ParamLimits

0xe867,	// (0x0001be50) cell_ai5_widget_pane_t8

0x000b,

0xfe36,	// (0x0001d41f) cell_ai5_widget_pane_t_ParamLimits

0xfe36,	// (0x0001d41f) cell_ai5_widget_pane_t

0xe8eb,	// (0x0001bed4) grid_ai5_widget_pane

0x3bbb,	// (0x000111a4) highlight_cell_ai5_widget_pane_ParamLimits

0x3bbb,	// (0x000111a4) highlight_cell_ai5_widget_pane

0xe8f9,	// (0x0001bee2) ai5_sk_left_pane

0xe903,	// (0x0001beec) ai5_sk_middle_pane

0xe90d,	// (0x0001bef6) ai5_sk_right_pane

0xe917,	// (0x0001bf00) bg_ai5_widget_pane_g1_ParamLimits

0xe917,	// (0x0001bf00) bg_ai5_widget_pane_g1

0xe923,	// (0x0001bf0c) bg_ai5_widget_pane_g2_ParamLimits

0xe923,	// (0x0001bf0c) bg_ai5_widget_pane_g2

0xe92f,	// (0x0001bf18) bg_ai5_widget_pane_g3_ParamLimits

0xe92f,	// (0x0001bf18) bg_ai5_widget_pane_g3

0xe93b,	// (0x0001bf24) bg_ai5_widget_pane_g4_ParamLimits

0xe93b,	// (0x0001bf24) bg_ai5_widget_pane_g4

0xe947,	// (0x0001bf30) bg_ai5_widget_pane_g5_ParamLimits

0xe947,	// (0x0001bf30) bg_ai5_widget_pane_g5

0xe953,	// (0x0001bf3c) bg_ai5_widget_pane_g6_ParamLimits

0xe953,	// (0x0001bf3c) bg_ai5_widget_pane_g6

0xe95f,	// (0x0001bf48) bg_ai5_widget_pane_g7_ParamLimits

0xe95f,	// (0x0001bf48) bg_ai5_widget_pane_g7

0xe96b,	// (0x0001bf54) bg_ai5_widget_pane_g8_ParamLimits

0xe96b,	// (0x0001bf54) bg_ai5_widget_pane_g8

0xe977,	// (0x0001bf60) bg_ai5_widget_pane_g9_ParamLimits

0xe977,	// (0x0001bf60) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0001d438) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0001d438) bg_ai5_widget_pane_g

0xe9a9,	// (0x0001bf92) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9a9,	// (0x0001bf92) cell_shortcut_ai5_widget_pane

0x487f,	// (0x00011e68) bg_cell_shortcut_ai5_widget_pane

0xe9ba,	// (0x0001bfa3) cell_grid_ai5_widget_pane_g1

0x487f,	// (0x00011e68) highlight_cell_shortcut_ai5_widget_pane

0x916d,	// (0x00016756) ai5_sk_left_pane_g1

0xe9c3,	// (0x0001bfac) ai5_sk_left_pane_g2

0xe9cb,	// (0x0001bfb4) ai5_sk_left_pane_g3

0xe9d3,	// (0x0001bfbc) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0001d44b) ai5_sk_left_pane_g

0xe9db,	// (0x0001bfc4) ai5_sk_left_pane_t1

0x9175,	// (0x0001675e) ai5_sk_right_pane_g1

0xe9e9,	// (0x0001bfd2) ai5_sk_right_pane_g2

0xe9f1,	// (0x0001bfda) ai5_sk_right_pane_g3

0xe9f9,	// (0x0001bfe2) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0001d454) ai5_sk_right_pane_g

0xea01,	// (0x0001bfea) ai5_sk_right_pane_t1

0x9175,	// (0x0001675e) ai5_sk_middle_pane_g1

0x916d,	// (0x00016756) ai5_sk_middle_pane_g2

0x918d,	// (0x00016776) ai5_sk_middle_pane_g3

0xe9f1,	// (0x0001bfda) ai5_sk_middle_pane_g4

0xe9cb,	// (0x0001bfb4) ai5_sk_middle_pane_g5

0xea0f,	// (0x0001bff8) ai5_sk_middle_pane_g6

0xea17,	// (0x0001c000) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0001d45d) ai5_sk_middle_pane_g

0x8c70,	// (0x00016259) aid_touch_area_size_lc0_ParamLimits

0x8c70,	// (0x00016259) aid_touch_area_size_lc0

0x6ce6,	// (0x000142cf) cell_hwr_candidate_pane_t1_ParamLimits

0x8c8c,	// (0x00016275) aid_touch_navi_pane

0x8f65,	// (0x0001654e) status_dt_navi_pane_ParamLimits

0x8f65,	// (0x0001654e) status_dt_navi_pane

0x8f72,	// (0x0001655b) status_dt_sta_pane_ParamLimits

0x8f72,	// (0x0001655b) status_dt_sta_pane

0xea1f,	// (0x0001c008) dt_sta_controll_pane

0xea2c,	// (0x0001c015) dt_sta_indi_pane

0xea3d,	// (0x0001c026) dt_sta_title_pane

0x38dd,	// (0x00010ec6) bg_dt_sta_indi_pane_ParamLimits

0x38dd,	// (0x00010ec6) bg_dt_sta_indi_pane

0xea50,	// (0x0001c039) dt_sta_battery_pane

0xea58,	// (0x0001c041) dt_sta_indi_pane_g1

0xea61,	// (0x0001c04a) dt_sta_indi_pane_g2

0xea6a,	// (0x0001c053) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0001d46c) dt_sta_indi_pane_g

0xea73,	// (0x0001c05c) dt_sta_signal_pane

0x3bbb,	// (0x000111a4) bg_dt_sta_title_pane_ParamLimits

0x3bbb,	// (0x000111a4) bg_dt_sta_title_pane

0xa09c,	// (0x00017685) dt_sta_title_pane_g1

0xea7c,	// (0x0001c065) dt_sta_title_pane_t1_ParamLimits

0xea7c,	// (0x0001c065) dt_sta_title_pane_t1

0x359a,	// (0x00010b83) bg_dt_sta_control_pane

0xea91,	// (0x0001c07a) dt_sta_controll_pane_g1

0xea9a,	// (0x0001c083) bg_dt_sta_title_pane_g1

0xeaa3,	// (0x0001c08c) bg_dt_sta_title_pane_g2

0xeaac,	// (0x0001c095) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0001d473) bg_dt_sta_title_pane_g

0xbcdb,	// (0x000192c4) bg_dt_sta_indi_pane_g1

0xeab5,	// (0x0001c09e) dt_sta_signal_pane_g1

0xeabd,	// (0x0001c0a6) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0001d47a) dt_sta_signal_pane_g

0xeac5,	// (0x0001c0ae) dt_sta_battery_pane_g1

0xeace,	// (0x0001c0b7) dt_sta_battery_pane_t1

0xbcdb,	// (0x000192c4) bg_dt_sta_control_pane_g1

0x4363,	// (0x0001194c) fep_china_uni_eep_pane

0x436b,	// (0x00011954) fep_china_uni_entry_pane_ParamLimits

0x437b,	// (0x00011964) popup_fep_china_uni_window_g1_ParamLimits

0x438b,	// (0x00011974) popup_fep_china_uni_window_g2_ParamLimits

0x438b,	// (0x00011974) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x0001ccd2) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x0001ccd2) popup_fep_china_uni_window_g

0xeadd,	// (0x0001c0c6) fep_china_uni_eep_pane_g1

0xeae5,	// (0x0001c0ce) fep_china_uni_eep_pane_t1

0xe4ed,	// (0x0001bad6) aid_touch_area_size_smil_player

0x8de2,	// (0x000163cb) lc0_clock_pane

0x8fc9,	// (0x000165b2) status_pane_g5_ParamLimits

0x8fc9,	// (0x000165b2) status_pane_g5

0x60f0,	// (0x000136d9) popup_keymap_window

0x8f87,	// (0x00016570) status_icon_pane

0xe6f2,	// (0x0001bcdb) cell_ai5_widget_pane_g3_ParamLimits

0xe70c,	// (0x0001bcf5) cell_ai5_widget_pane_g4_ParamLimits

0xe71c,	// (0x0001bd05) cell_ai5_widget_pane_g5_ParamLimits

0xe744,	// (0x0001bd2d) cell_ai5_widget_pane_g8_ParamLimits

0xe744,	// (0x0001bd2d) cell_ai5_widget_pane_g8

0xe758,	// (0x0001bd41) cell_ai5_widget_pane_g9_ParamLimits

0xe758,	// (0x0001bd41) cell_ai5_widget_pane_g9

0xe76c,	// (0x0001bd55) cell_ai5_widget_pane_g10_ParamLimits

0xe76c,	// (0x0001bd55) cell_ai5_widget_pane_g10

0xeaf4,	// (0x0001c0dd) status_icon_pane_g1

0x359a,	// (0x00010b83) bg_popup_sub_pane_cp13

0xeafc,	// (0x0001c0e5) popup_keymap_window_t1

0x8c15,	// (0x000161fe) control_pane_g6_ParamLimits

0x8c15,	// (0x000161fe) control_pane_g6

0x8c22,	// (0x0001620b) control_pane_g7_ParamLimits

0x8c22,	// (0x0001620b) control_pane_g7

0x8c2f,	// (0x00016218) control_pane_g8_ParamLimits

0x8c2f,	// (0x00016218) control_pane_g8

0xea1f,	// (0x0001c008) dt_sta_controll_pane_ParamLimits

0xea2c,	// (0x0001c015) dt_sta_indi_pane_ParamLimits

0xea3d,	// (0x0001c026) dt_sta_title_pane_ParamLimits

0x3ab4,	// (0x0001109d) aid_size_touch_scroll_bar_cale

0x5750,	// (0x00012d39) popup_discreet_window_ParamLimits

0x5750,	// (0x00012d39) popup_discreet_window

0x57ca,	// (0x00012db3) popup_sk_window

0x98e0,	// (0x00016ec9) bg_popup_sub_pane_cp28_ParamLimits

0x98e0,	// (0x00016ec9) bg_popup_sub_pane_cp28

0xeb0a,	// (0x0001c0f3) popup_discreet_window_g1_ParamLimits

0xeb0a,	// (0x0001c0f3) popup_discreet_window_g1

0xeb2a,	// (0x0001c113) popup_discreet_window_t1_ParamLimits

0xeb2a,	// (0x0001c113) popup_discreet_window_t1

0xeb48,	// (0x0001c131) popup_discreet_window_t2_ParamLimits

0xeb48,	// (0x0001c131) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0001d47f) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0001d47f) popup_discreet_window_t

0x76f3,	// (0x00014cdc) popup_sk_window_g1

0x76fd,	// (0x00014ce6) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0001d486) popup_sk_window_g

0x7705,	// (0x00014cee) popup_sk_window_t1

0x7713,	// (0x00014cfc) popup_sk_window_t1_copy1

0xe6de,	// (0x0001bcc7) cell_ai5_widget_pane_g2_ParamLimits

0xe879,	// (0x0001be62) cell_ai5_widget_pane_t9_ParamLimits

0xe879,	// (0x0001be62) cell_ai5_widget_pane_t9

0x359a,	// (0x00010b83) main_fep_fshwr2_pane

0x7721,	// (0x00014d0a) aid_fshwr2_btn_pane

0x7735,	// (0x00014d1e) aid_fshwr2_syb_pane

0x7749,	// (0x00014d32) aid_fshwr2_txt_pane

0x7759,	// (0x00014d42) fshwr2_func_candi_pane

0x777d,	// (0x00014d66) fshwr2_hwr_syb_pane

0x7797,	// (0x00014d80) fshwr2_icf_pane

0x5677,	// (0x00012c60) fshwr2_icf_bg_pane

0x77c5,	// (0x00014dae) fshwr2_icf_pane_t1_ParamLimits

0x77c5,	// (0x00014dae) fshwr2_icf_pane_t1

0x4238,	// (0x00011821) fshwr2_func_candi_pane_g1

0xeb9a,	// (0x0001c183) fshwr2_func_candi_row_pane_ParamLimits

0xeb9a,	// (0x0001c183) fshwr2_func_candi_row_pane

0x77de,	// (0x00014dc7) cell_fshwr2_syb_pane_ParamLimits

0x77de,	// (0x00014dc7) cell_fshwr2_syb_pane

0x7801,	// (0x00014dea) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7801,	// (0x00014dea) fshwr2_hwr_syb_pane_g1

0x5677,	// (0x00012c60) bg_popup_call_pane_cp01

0x780f,	// (0x00014df8) fshwr2_func_candi_cell_pane_ParamLimits

0x780f,	// (0x00014df8) fshwr2_func_candi_cell_pane

0x9f3c,	// (0x00017525) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f3c,	// (0x00017525) fshwr2_func_candi_cell_bg_pane

0x785a,	// (0x00014e43) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x785a,	// (0x00014e43) fshwr2_func_candi_cell_pane_g1

0x787a,	// (0x00014e63) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x787a,	// (0x00014e63) fshwr2_func_candi_cell_pane_t1

0x5677,	// (0x00012c60) bg_button_pane_cp08

0x4a5e,	// (0x00012047) cell_fshwr2_syb_bg_pane

0x788d,	// (0x00014e76) cell_fshwr2_syb_bg_pane_g1

0x78a1,	// (0x00014e8a) cell_fshwr2_syb_bg_pane_t1

0x3bbb,	// (0x000111a4) main_tmo_pane

0xa3d5,	// (0x000179be) uni_indicator_pane_g1_ParamLimits

0xa3e8,	// (0x000179d1) uni_indicator_pane_g2_ParamLimits

0xa3fa,	// (0x000179e3) uni_indicator_pane_g3_ParamLimits

0xa409,	// (0x000179f2) uni_indicator_pane_g4_ParamLimits

0xa409,	// (0x000179f2) uni_indicator_pane_g4

0xa41d,	// (0x00017a06) uni_indicator_pane_g5_ParamLimits

0xa41d,	// (0x00017a06) uni_indicator_pane_g5

0xa41d,	// (0x00017a06) uni_indicator_pane_g6_ParamLimits

0xa41d,	// (0x00017a06) uni_indicator_pane_g6

0xf8ed,	// (0x0001ced6) uni_indicator_pane_g_ParamLimits

0xd4fb,	// (0x0001aae4) popup_tmo_note_window_ParamLimits

0xd4fb,	// (0x0001aae4) popup_tmo_note_window

0x6f50,	// (0x00014539) fshwr2_bg_pane

0x786b,	// (0x00014e54) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x786b,	// (0x00014e54) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0001d48b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0001d48b) fshwr2_func_candi_cell_pane_g

0x6c9f,	// (0x00014288) bg_popup_window_pane_cp01

0x78b7,	// (0x00014ea0) bg_popup_window_pane_g1_cp01

0xebc1,	// (0x0001c1aa) bg_popup_window_pane_cp22_ParamLimits

0xebc1,	// (0x0001c1aa) bg_popup_window_pane_cp22

0xebcf,	// (0x0001c1b8) listscroll_tmo_link_pane_ParamLimits

0xebcf,	// (0x0001c1b8) listscroll_tmo_link_pane

0xec0f,	// (0x0001c1f8) popup_tmo_note_window_g1_ParamLimits

0xec0f,	// (0x0001c1f8) popup_tmo_note_window_g1

0xec1c,	// (0x0001c205) tmo_note_info_pane_ParamLimits

0xec1c,	// (0x0001c205) tmo_note_info_pane

0xec36,	// (0x0001c21f) list_tmo_note_info_pane_g1_ParamLimits

0xec36,	// (0x0001c21f) list_tmo_note_info_pane_g1

0xec4d,	// (0x0001c236) list_tmo_note_info_pane_g2_ParamLimits

0xec4d,	// (0x0001c236) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0001d490) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0001d490) list_tmo_note_info_pane_g

0xec69,	// (0x0001c252) list_tmo_note_info_text_pane_ParamLimits

0xec69,	// (0x0001c252) list_tmo_note_info_text_pane

0xecea,	// (0x0001c2d3) list_tmo_link_pane

0xecf7,	// (0x0001c2e0) scroll_pane_cp20

0xed04,	// (0x0001c2ed) list_single_tmo_link_pane_ParamLimits

0xed04,	// (0x0001c2ed) list_single_tmo_link_pane

0xed14,	// (0x0001c2fd) list_single_tmo_link_pane_t1

0xed22,	// (0x0001c30b) list_tmo_note_info_text_pane_t1_ParamLimits

0xed22,	// (0x0001c30b) list_tmo_note_info_text_pane_t1

0x862d,	// (0x00015c16) aid_size_touch_scroll_bar_cp01_ParamLimits

0x862d,	// (0x00015c16) aid_size_touch_scroll_bar_cp01

0x852f,	// (0x00015b18) aid_size_touch_slider_marker

0x57b2,	// (0x00012d9b) popup_settings_window_ParamLimits

0x57b2,	// (0x00012d9b) popup_settings_window

0x4af7,	// (0x000120e0) popup_candi_list_indi_window

0x8c8c,	// (0x00016275) aid_touch_navi_pane_ParamLimits

0x6eab,	// (0x00014494) rs_clock_indi_pane

0x6eb4,	// (0x0001449d) sctrl_sk_bottom_pane_ParamLimits

0x6ec5,	// (0x000144ae) sctrl_sk_top_pane_ParamLimits

0x6fc0,	// (0x000145a9) popup_fep_tooltip_window

0xe654,	// (0x0001bc3d) aid_size_cell_widget_grid_ParamLimits

0xe6c9,	// (0x0001bcb2) cell_ai5_widget_pane_g1_ParamLimits

0xe6c9,	// (0x0001bcb2) cell_ai5_widget_pane_g1

0xe72c,	// (0x0001bd15) cell_ai5_widget_pane_g6_ParamLimits

0xe738,	// (0x0001bd21) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1b,	// (0x0001d404) cell_ai5_widget_pane_g_ParamLimits

0xfe1b,	// (0x0001d404) cell_ai5_widget_pane_g

0xe8a8,	// (0x0001be91) cell_ai5_widget_pane_t10_ParamLimits

0xe8a8,	// (0x0001be91) cell_ai5_widget_pane_t10

0xe8eb,	// (0x0001bed4) grid_ai5_widget_pane_ParamLimits

0xe983,	// (0x0001bf6c) cell_contacts_ai5_widget_pane_ParamLimits

0xe983,	// (0x0001bf6c) cell_contacts_ai5_widget_pane

0xeb5d,	// (0x0001c146) popup_discreet_window_t3_ParamLimits

0xeb5d,	// (0x0001c146) popup_discreet_window_t3

0x77af,	// (0x00014d98) popup_fshwr2_char_preview_window_ParamLimits

0x77af,	// (0x00014d98) popup_fshwr2_char_preview_window

0xec87,	// (0x0001c270) tmo_note_info_pane_t1

0xec9c,	// (0x0001c285) tmo_note_info_pane_t2

0xecb1,	// (0x0001c29a) tmo_note_info_pane_t3

0xecc6,	// (0x0001c2af) tmo_note_info_pane_t4

0xecd8,	// (0x0001c2c1) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0001d495) tmo_note_info_pane_t

0xecea,	// (0x0001c2d3) list_tmo_link_pane_ParamLimits

0xecf7,	// (0x0001c2e0) scroll_pane_cp20_ParamLimits

0x5677,	// (0x00012c60) bg_popup_fep_char_preview_window_cp01

0xed3b,	// (0x0001c324) popup_fshwr2_char_preview_window_t1

0xed49,	// (0x0001c332) popup_candi_list_indi_window_g1

0xed52,	// (0x0001c33b) bg_cell_contacts_ai5_widget_pane

0xed5e,	// (0x0001c347) cell_contacts_ai5_widget_pane_g1

0xc539,	// (0x00019b22) cell_contacts_ai5_widget_pane_g2

0xed73,	// (0x0001c35c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0001d4a0) cell_contacts_ai5_widget_pane_g

0xed7f,	// (0x0001c368) cell_contacts_ai5_widget_pane_t1

0x3bbb,	// (0x000111a4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xedf6,	// (0x0001c3df) settings_container_pane

0x487f,	// (0x00011e68) listscroll_set_pane_copy1

0xb072,	// (0x0001865b) scroll_pane_cp121_copy1

0x9685,	// (0x00016c6e) set_content_pane_copy1

0xee02,	// (0x0001c3eb) aid_height_set_list_copy1_ParamLimits

0xee02,	// (0x0001c3eb) aid_height_set_list_copy1

0xa627,	// (0x00017c10) aid_size_parent_copy1_ParamLimits

0xa627,	// (0x00017c10) aid_size_parent_copy1

0xee0e,	// (0x0001c3f7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee0e,	// (0x0001c3f7) button_value_adjust_pane_cp6_copy1

0x4a5e,	// (0x00012047) list_highlight_pane_cp2_copy1_ParamLimits

0x4a5e,	// (0x00012047) list_highlight_pane_cp2_copy1

0xee22,	// (0x0001c40b) list_set_pane_copy1_ParamLimits

0xee22,	// (0x0001c40b) list_set_pane_copy1

0xed91,	// (0x0001c37a) main_pane_set_t1_copy1_ParamLimits

0xed91,	// (0x0001c37a) main_pane_set_t1_copy1

0xedcb,	// (0x0001c3b4) main_pane_set_t2_copy1_ParamLimits

0xedcb,	// (0x0001c3b4) main_pane_set_t2_copy1

0xeecf,	// (0x0001c4b8) main_pane_set_t3_copy1

0xeedd,	// (0x0001c4c6) main_pane_set_t4_copy1

0xedea,	// (0x0001c3d3) set_content_pane_g1_copy1_ParamLimits

0xedea,	// (0x0001c3d3) set_content_pane_g1_copy1

0xeeeb,	// (0x0001c4d4) setting_code_pane_copy1

0xeef3,	// (0x0001c4dc) setting_slider_graphic_pane_copy1

0xeef3,	// (0x0001c4dc) setting_slider_pane_copy1

0xeefb,	// (0x0001c4e4) setting_text_pane_copy1

0xeefb,	// (0x0001c4e4) setting_volume_pane_copy1

0xeeeb,	// (0x0001c4d4) settings_code_pane_cp2_copy1

0xef03,	// (0x0001c4ec) settings_code_pane_cp_copy1_ParamLimits

0xef03,	// (0x0001c4ec) settings_code_pane_cp_copy1

0x78c0,	// (0x00014ea9) volume_set_pane_copy1

0xef17,	// (0x0001c500) volume_set_pane_g10_copy1

0xef1f,	// (0x0001c508) volume_set_pane_g1_copy1

0xef27,	// (0x0001c510) volume_set_pane_g2_copy1

0xef2f,	// (0x0001c518) volume_set_pane_g3_copy1

0xef37,	// (0x0001c520) volume_set_pane_g4_copy1

0xef3f,	// (0x0001c528) volume_set_pane_g5_copy1

0xef47,	// (0x0001c530) volume_set_pane_g6_copy1

0xef4f,	// (0x0001c538) volume_set_pane_g7_copy1

0xef57,	// (0x0001c540) volume_set_pane_g8_copy1

0xef5f,	// (0x0001c548) volume_set_pane_g9_copy1

0x3799,	// (0x00010d82) bg_set_opt_pane_cp_copy1_ParamLimits

0x3799,	// (0x00010d82) bg_set_opt_pane_cp_copy1

0x78c8,	// (0x00014eb1) setting_slider_pane_t1_copy1_ParamLimits

0x78c8,	// (0x00014eb1) setting_slider_pane_t1_copy1

0x78e7,	// (0x00014ed0) setting_slider_pane_t2_copy1_ParamLimits

0x78e7,	// (0x00014ed0) setting_slider_pane_t2_copy1

0x7901,	// (0x00014eea) setting_slider_pane_t3_copy1_ParamLimits

0x7901,	// (0x00014eea) setting_slider_pane_t3_copy1

0x7919,	// (0x00014f02) slider_set_pane_copy1_ParamLimits

0x7919,	// (0x00014f02) slider_set_pane_copy1

0x3c81,	// (0x0001126a) set_opt_bg_pane_g1_copy2

0x3c89,	// (0x00011272) set_opt_bg_pane_g2_copy2

0xef67,	// (0x0001c550) set_opt_bg_pane_g3_copy2

0x3c99,	// (0x00011282) set_opt_bg_pane_g4_copy2

0x3ca1,	// (0x0001128a) set_opt_bg_pane_g5_copy2

0x3ca9,	// (0x00011292) set_opt_bg_pane_g6_copy2

0xef71,	// (0x0001c55a) set_opt_bg_pane_g7_copy2

0xef79,	// (0x0001c562) set_opt_bg_pane_g8_copy2

0xef83,	// (0x0001c56c) set_opt_bg_pane_g9_copy2

0x792f,	// (0x00014f18) aid_size_touch_slider_mark_copy1_ParamLimits

0x792f,	// (0x00014f18) aid_size_touch_slider_mark_copy1

0xef8d,	// (0x0001c576) slider_set_pane_g1_copy1

0x7943,	// (0x00014f2c) slider_set_pane_g2_copy1

0x6898,	// (0x00013e81) slider_set_pane_g3_copy1_ParamLimits

0x6898,	// (0x00013e81) slider_set_pane_g3_copy1

0x68ac,	// (0x00013e95) slider_set_pane_g4_copy1_ParamLimits

0x68ac,	// (0x00013e95) slider_set_pane_g4_copy1

0x68c4,	// (0x00013ead) slider_set_pane_g5_copy1_ParamLimits

0x68c4,	// (0x00013ead) slider_set_pane_g5_copy1

0x6898,	// (0x00013e81) slider_set_pane_g6_copy1_ParamLimits

0x6898,	// (0x00013e81) slider_set_pane_g6_copy1

0x794b,	// (0x00014f34) slider_set_pane_g7_copy1_ParamLimits

0x794b,	// (0x00014f34) slider_set_pane_g7_copy1

0x371d,	// (0x00010d06) bg_set_opt_pane_cp2_copy1

0xef96,	// (0x0001c57f) setting_slider_graphic_pane_g1_copy1

0xef9f,	// (0x0001c588) setting_slider_graphic_pane_t1_copy1

0xefaf,	// (0x0001c598) setting_slider_graphic_pane_t2_copy1

0xefbf,	// (0x0001c5a8) slider_set_pane_cp_copy1

0xefcf,	// (0x0001c5b8) input_focus_pane_cp1_copy1

0xefd8,	// (0x0001c5c1) list_set_text_pane_copy1

0xefe0,	// (0x0001c5c9) setting_text_pane_g1_copy1

0xefe9,	// (0x0001c5d2) set_text_pane_t1_copy1

0xefcf,	// (0x0001c5b8) input_focus_pane_cp2_copy1

0xefe0,	// (0x0001c5c9) setting_code_pane_g1_copy1

0xf004,	// (0x0001c5ed) setting_code_pane_t1_copy1

0xf012,	// (0x0001c5fb) list_set_graphic_pane_copy1

0x371d,	// (0x00010d06) bg_set_opt_pane_cp4_copy1

0x45fc,	// (0x00011be5) list_set_graphic_pane_g1_copy1_ParamLimits

0x45fc,	// (0x00011be5) list_set_graphic_pane_g1_copy1

0xf026,	// (0x0001c60f) list_set_graphic_pane_g2_copy1

0x4614,	// (0x00011bfd) list_set_graphic_pane_t1_copy1_ParamLimits

0x4614,	// (0x00011bfd) list_set_graphic_pane_t1_copy1

0xbcdb,	// (0x000192c4) rs_clock_indi_pane_g1

0xf02e,	// (0x0001c617) rs_clock_indi_pane_t1

0xf03c,	// (0x0001c625) rs_indi_pane

0xf044,	// (0x0001c62d) rs_indi_pane_g1

0xf04d,	// (0x0001c636) rs_indi_pane_g2

0xed49,	// (0x0001c332) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0001d4a7) rs_indi_pane_g

0x487f,	// (0x00011e68) bg_popup_preview_window_pane_cp03

0xf056,	// (0x0001c63f) popup_fep_tooltip_window_t1

0xcb58,	// (0x0001a141) popup_note2_window_g2_ParamLimits

0xcb58,	// (0x0001a141) popup_note2_window_g2

0x0001,

0xfc52,	// (0x0001d23b) popup_note2_window_g_ParamLimits

0xfc52,	// (0x0001d23b) popup_note2_window_g

0xd134,	// (0x0001a71d) bg_popup_sub_pane_cp11_ParamLimits

0xd141,	// (0x0001a72a) cell_ai3_links_pane_g1_ParamLimits

0xd158,	// (0x0001a741) cell_ai3_links_pane_t1

0xefe9,	// (0x0001c5d2) set_text_pane_t1_copy1_ParamLimits

0x47c1,	// (0x00011daa) cell_graphic_popup_pane_cp2_ParamLimits

0x47c1,	// (0x00011daa) cell_graphic_popup_pane_cp2

0xf064,	// (0x0001c64d) cell_graphic_popup_pane_g1_cp2

0x3a37,	// (0x00011020) cell_graphic_popup_pane_g2_cp2

0xf06c,	// (0x0001c655) cell_graphic_popup_pane_g3_cp2

0xf074,	// (0x0001c65d) cell_graphic_popup_pane_t2_cp2

0x3a48,	// (0x00011031) grid_highlight_pane_cp3_cp2

0x4096,	// (0x0001167f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3bbb,	// (0x000111a4) main_tmo_pane_ParamLimits

0xd4ef,	// (0x0001aad8) popup_tmo_big_image_note_window

0xe6b8,	// (0x0001bca1) cell_ai5_widget_list_pane

0xe6c0,	// (0x0001bca9) cell_ai5_widget_lrg_icon_pane

0xec87,	// (0x0001c270) tmo_note_info_pane_t1_ParamLimits

0xec9c,	// (0x0001c285) tmo_note_info_pane_t2_ParamLimits

0xecb1,	// (0x0001c29a) tmo_note_info_pane_t3_ParamLimits

0xecc6,	// (0x0001c2af) tmo_note_info_pane_t4_ParamLimits

0xecd8,	// (0x0001c2c1) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0001d495) tmo_note_info_pane_t_ParamLimits

0xedf6,	// (0x0001c3df) settings_container_pane_ParamLimits

0xefc7,	// (0x0001c5b0) indicator_popup_pane_cp5

0xefc7,	// (0x0001c5b0) indicator_popup_pane_cp6

0xf012,	// (0x0001c5fb) list_set_graphic_pane_copy1_ParamLimits

0x359a,	// (0x00010b83) bg_popup_window_pane_cp23

0xf082,	// (0x0001c66b) popup_tmo_big_image_note_window_g1

0xf08b,	// (0x0001c674) popup_tmo_big_image_note_window_t1

0xf09b,	// (0x0001c684) popup_tmo_big_image_note_window_t2

0xf0ab,	// (0x0001c694) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0001d4ae) popup_tmo_big_image_note_window_t

0xbcdb,	// (0x000192c4) cell_ai5_widget_lrg_icon_pane_g1

0xf0bb,	// (0x0001c6a4) cell_ai5_widget_lrg_icon_pane_t1

0xf0c9,	// (0x0001c6b2) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c9,	// (0x0001c6b2) cell_ai5_widget_list_row_pane

0xf0e0,	// (0x0001c6c9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e0,	// (0x0001c6c9) cell_ai5_widget_list_row_pane_g1

0xf0ed,	// (0x0001c6d6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ed,	// (0x0001c6d6) cell_ai5_widget_list_row_pane_t1

0xf118,	// (0x0001c701) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf118,	// (0x0001c701) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0001d4b5) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0001d4b5) cell_ai5_widget_list_row_pane_t

0x5677,	// (0x00012c60) main_fep_vtchi_ss_pane

0xf168,	// (0x0001c751) popup_fep_char_pre_window

0xf170,	// (0x0001c759) popup_fep_ituss_window

0xf19c,	// (0x0001c785) popup_fep_vkbss_window

0x4a5e,	// (0x00012047) grid_vkbss_keypad_pane_ParamLimits

0x4a5e,	// (0x00012047) grid_vkbss_keypad_pane

0xf1dc,	// (0x0001c7c5) ituss_keypad_pane

0x796b,	// (0x00014f54) aid_vkbss_key_offset_ParamLimits

0x796b,	// (0x00014f54) aid_vkbss_key_offset

0x7977,	// (0x00014f60) cell_vkbss_key_pane_ParamLimits

0x7977,	// (0x00014f60) cell_vkbss_key_pane

0xf1ec,	// (0x0001c7d5) bg_cell_vkbss_key_g1_ParamLimits

0xf1ec,	// (0x0001c7d5) bg_cell_vkbss_key_g1

0xf1f8,	// (0x0001c7e1) cell_vkbss_key_3p_pane_ParamLimits

0xf1f8,	// (0x0001c7e1) cell_vkbss_key_3p_pane

0xf22e,	// (0x0001c817) cell_vkbss_key_g1_ParamLimits

0xf22e,	// (0x0001c817) cell_vkbss_key_g1

0xf264,	// (0x0001c84d) cell_vkbss_key_t1_ParamLimits

0xf264,	// (0x0001c84d) cell_vkbss_key_t1

0x79cf,	// (0x00014fb8) cell_ituss_key_pane_ParamLimits

0x79cf,	// (0x00014fb8) cell_ituss_key_pane

0xf2c0,	// (0x0001c8a9) bg_cell_ituss_key_g1_ParamLimits

0xf2c0,	// (0x0001c8a9) bg_cell_ituss_key_g1

0xf2cc,	// (0x0001c8b5) cell_ituss_key_pane_g1_ParamLimits

0xf2cc,	// (0x0001c8b5) cell_ituss_key_pane_g1

0x79e0,	// (0x00014fc9) cell_ituss_key_pane_g2_ParamLimits

0x79e0,	// (0x00014fc9) cell_ituss_key_pane_g2

0x0005,

0xfed3,	// (0x0001d4bc) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0001d4bc) cell_ituss_key_pane_g

0x7a64,	// (0x0001504d) cell_ituss_key_t1_ParamLimits

0x7a64,	// (0x0001504d) cell_ituss_key_t1

0x7a9e,	// (0x00015087) cell_ituss_key_t2_ParamLimits

0x7a9e,	// (0x00015087) cell_ituss_key_t2

0x7ad0,	// (0x000150b9) cell_ituss_key_t3_ParamLimits

0x7ad0,	// (0x000150b9) cell_ituss_key_t3

0x7b01,	// (0x000150ea) cell_ituss_key_t4_ParamLimits

0x7b01,	// (0x000150ea) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x0001d4c9) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x0001d4c9) cell_ituss_key_t

0xf2f2,	// (0x0001c8db) cell_vkbss_key_3p_pane_g1

0xf2fa,	// (0x0001c8e3) cell_vkbss_key_3p_pane_g2

0xf302,	// (0x0001c8eb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x0001d4d4) cell_vkbss_key_3p_pane_g

0x487f,	// (0x00011e68) bg_popup_fep_char_preview_window_cp02

0xf30a,	// (0x0001c8f3) popup_fep_char_pre_window_t1

0xe641,	// (0x0001bc2a) main_ai5_sk_pane

0xed52,	// (0x0001c33b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed5e,	// (0x0001c347) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc539,	// (0x00019b22) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed73,	// (0x0001c35c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0001d4a0) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed7f,	// (0x0001c368) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3bbb,	// (0x000111a4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf318,	// (0x0001c901) main_ai5_sk_pane_g1

0x9721,	// (0x00016d0a) popup_query_code_window_g1

0xf186,	// (0x0001c76f) popup_fep_vkb_icf_pane

0xf1b3,	// (0x0001c79c) popup_fep_vtchi_icf_pane

0xf321,	// (0x0001c90a) bg_icf_pane

0xf321,	// (0x0001c90a) list_vkb_icf_pane

0xf32d,	// (0x0001c916) bg_icf_pane_cp01

0xf340,	// (0x0001c929) vtchi_icf_list_pane

0xf3a0,	// (0x0001c989) list_vkb_icf_pane_t1_ParamLimits

0xf3a0,	// (0x0001c989) list_vkb_icf_pane_t1

0xf3c2,	// (0x0001c9ab) vtchi_icf_list_pane_t1_ParamLimits

0xf3c2,	// (0x0001c9ab) vtchi_icf_list_pane_t1

0xf170,	// (0x0001c759) popup_fep_ituss_window_ParamLimits

0xf1b3,	// (0x0001c79c) popup_fep_vtchi_icf_pane_ParamLimits

0xf1dc,	// (0x0001c7c5) ituss_keypad_pane_ParamLimits

0x7961,	// (0x00014f4a) ituss_sks_pane

0xf321,	// (0x0001c90a) bg_icf_pane_ParamLimits

0xf140,	// (0x0001c729) icf_edit_indi_pane_ParamLimits

0xf140,	// (0x0001c729) icf_edit_indi_pane

0xf321,	// (0x0001c90a) list_vkb_icf_pane_ParamLimits

0xf32d,	// (0x0001c916) bg_icf_pane_cp01_ParamLimits

0xf15b,	// (0x0001c744) icf_edit_indi_pane_cp01_ParamLimits

0xf15b,	// (0x0001c744) icf_edit_indi_pane_cp01

0xf340,	// (0x0001c929) vtchi_query_pane

0xe4bd,	// (0x0001baa6) icf_edit_indi_pane_g1_ParamLimits

0xe4bd,	// (0x0001baa6) icf_edit_indi_pane_g1

0xf43a,	// (0x0001ca23) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0001ca23) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x0001d4ff) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x0001d4ff) icf_edit_indi_pane_g

0xf44e,	// (0x0001ca37) icf_edit_indi_pane_t1

0xf3e3,	// (0x0001c9cc) bg_input_focus_pane_cp042

0x3aab,	// (0x00011094) vtchi_button_pane

0xf3ec,	// (0x0001c9d5) vtchi_query_pane_t1

0xf3fa,	// (0x0001c9e3) vtchi_query_pane_t2

0xf408,	// (0x0001c9f1) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x0001d4ee) vtchi_query_pane_t

0x5677,	// (0x00012c60) bg_button_pane_cp13

0xf416,	// (0x0001c9ff) vtchi_button_pane_g1

0x7b44,	// (0x0001512d) ituss_sks_pane_g1

0x7b4f,	// (0x00015138) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x0001d4f5) ituss_sks_pane_g

0xf41e,	// (0x0001ca07) ituss_sks_pane_t1

0xf42c,	// (0x0001ca15) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x0001d4fa) ituss_sks_pane_t

0xb702,	// (0x00018ceb) indicator_nsta_pane_cp_g1

0xb70b,	// (0x00018cf4) indicator_nsta_pane_cp_g2

0xb713,	// (0x00018cfc) indicator_nsta_pane_cp_g3

0xb71b,	// (0x00018d04) indicator_nsta_pane_cp_g4

0xb70b,	// (0x00018cf4) indicator_nsta_pane_cp_g5

0xb713,	// (0x00018cfc) indicator_nsta_pane_cp_g6

0x0005,

0xfa90,	// (0x0001d079) indicator_nsta_pane_cp_g

0xe210,	// (0x0001b7f9) cell_graphic2_pane_t2_ParamLimits

0xe210,	// (0x0001b7f9) cell_graphic2_pane_t2

0x0001,

0xfda2,	// (0x0001d38b) cell_graphic2_pane_t_ParamLimits

0xfda2,	// (0x0001d38b) cell_graphic2_pane_t

0xe23c,	// (0x0001b825) cell_graphic2_control_pane_t1

0x88b7,	// (0x00015ea0) signal_pane_g3_ParamLimits

0x88b7,	// (0x00015ea0) signal_pane_g3

0x88c9,	// (0x00015eb2) signal_pane_g4_ParamLimits

0x88c9,	// (0x00015eb2) signal_pane_g4

0xf12a,	// (0x0001c713) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf12a,	// (0x0001c713) cell_ai5_widget_list_row_pane_t3

0xf2e0,	// (0x0001c8c9) cell_ituss_key_pane_t1_ParamLimits

0xf2e0,	// (0x0001c8c9) cell_ituss_key_pane_t1

0x9313,	// (0x000168fc) form_field_data_wide_pane_vc_t2_ParamLimits

0x9313,	// (0x000168fc) form_field_data_wide_pane_vc_t2

0x9327,	// (0x00016910) form_field_data_wide_pane_vc_t3_ParamLimits

0x9327,	// (0x00016910) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d5,	// (0x0001cdbe) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d5,	// (0x0001cdbe) form_field_data_wide_pane_vc_t

0xb3ac,	// (0x00018995) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb3ac,	// (0x00018995) form_field_slider_wide_pane_vc_t3

0xb48a,	// (0x00018a73) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb48a,	// (0x00018a73) form_field_popup_wide_pane_vc_t2

0xb4a1,	// (0x00018a8a) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb4a1,	// (0x00018a8a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7f,	// (0x0001d068) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0001d068) form_field_popup_wide_pane_vc_t

0x7721,	// (0x00014d0a) aid_fshwr2_btn_pane_ParamLimits

0x7735,	// (0x00014d1e) aid_fshwr2_syb_pane_ParamLimits

0x7749,	// (0x00014d32) aid_fshwr2_txt_pane_ParamLimits

0x6f50,	// (0x00014539) fshwr2_bg_pane_ParamLimits

0x7759,	// (0x00014d42) fshwr2_func_candi_pane_ParamLimits

0x777d,	// (0x00014d66) fshwr2_hwr_syb_pane_ParamLimits

0x7797,	// (0x00014d80) fshwr2_icf_pane_ParamLimits

0xb31d,	// (0x00018906) list_double_graphic_pane_vc_g4_ParamLimits

0xb31d,	// (0x00018906) list_double_graphic_pane_vc_g4

0x7a00,	// (0x00014fe9) cell_ituss_key_pane_g3_ParamLimits

0x7a00,	// (0x00014fe9) cell_ituss_key_pane_g3

0x7b32,	// (0x0001511b) cell_ituss_key_t5_ParamLimits

0x7b32,	// (0x0001511b) cell_ituss_key_t5

0xf19c,	// (0x0001c785) popup_fep_vkbss_window_ParamLimits

0xe64b,	// (0x0001bc34) aid_cell_ai5_quarter

0xf44e,	// (0x0001ca37) icf_edit_indi_pane_t1_ParamLimits

0x7d56,	// (0x0001533f) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7d56,	// (0x0001533f) aid_tch_indicator_popup_pane_cp2

0x7d69,	// (0x00015352) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7d69,	// (0x00015352) aid_tch_query_popup_data_pane_cp2

0x96c9,	// (0x00016cb2) aid_tch_query_popup_pane_ParamLimits

0x96c9,	// (0x00016cb2) aid_tch_query_popup_pane

0x96c9,	// (0x00016cb2) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x96c9,	// (0x00016cb2) aid_tch_query_popup_data_pane_cp1

0x4a5e,	// (0x00012047) cell_fshwr2_syb_bg_pane_ParamLimits

0x788d,	// (0x00014e76) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x78a1,	// (0x00014e8a) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf186,	// (0x0001c76f) popup_fep_vkb_icf_pane_ParamLimits

0x7561,	// (0x00014b4a) bg_popup_fep_char_preview_window_g10

0xe780,	// (0x0001bd69) cell_ai5_widget_pane_g11_ParamLimits

0xe780,	// (0x0001bd69) cell_ai5_widget_pane_g11

0xe78c,	// (0x0001bd75) cell_ai5_widget_pane_g12_ParamLimits

0xe78c,	// (0x0001bd75) cell_ai5_widget_pane_g12

0xe798,	// (0x0001bd81) cell_ai5_widget_pane_g13_ParamLimits

0xe798,	// (0x0001bd81) cell_ai5_widget_pane_g13

0xe8c7,	// (0x0001beb0) cell_ai5_widget_pane_t11_ParamLimits

0xe8c7,	// (0x0001beb0) cell_ai5_widget_pane_t11

0xe8d9,	// (0x0001bec2) cell_ai5_widget_pane_t12_ParamLimits

0xe8d9,	// (0x0001bec2) cell_ai5_widget_pane_t12

0x7a0c,	// (0x00014ff5) cell_ituss_key_pane_g4_ParamLimits

0x7a0c,	// (0x00014ff5) cell_ituss_key_pane_g4

0x7a28,	// (0x00015011) cell_ituss_key_pane_g5_ParamLimits

0x7a28,	// (0x00015011) cell_ituss_key_pane_g5

0x7a44,	// (0x0001502d) cell_ituss_key_pane_g6_ParamLimits

0x7a44,	// (0x0001502d) cell_ituss_key_pane_g6

0x9165,	// (0x0001674e) bg_icf_pane_g1

0xf348,	// (0x0001c931) bg_icf_pane_g2

0xf354,	// (0x0001c93d) bg_icf_pane_g3

0xf35e,	// (0x0001c947) bg_icf_pane_g4

0xf36a,	// (0x0001c953) bg_icf_pane_g5

0xf374,	// (0x0001c95d) bg_icf_pane_g6

0xf380,	// (0x0001c969) bg_icf_pane_g7

0xf38a,	// (0x0001c973) bg_icf_pane_g8

0xf396,	// (0x0001c97f) bg_icf_pane_g9

0x0008,

0xfef2,	// (0x0001d4db) bg_icf_pane_g

0xf1c9,	// (0x0001c7b2) popup_hyb_candi_window_ParamLimits

0xf1c9,	// (0x0001c7b2) popup_hyb_candi_window

0x9285,	// (0x0001686e) bg_popup_sub_pane_cp01_ParamLimits

0x9285,	// (0x0001686e) bg_popup_sub_pane_cp01

0xf467,	// (0x0001ca50) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0001ca50) entry_hyb_candi_pane

0xf476,	// (0x0001ca5f) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0001ca5f) grid_hyb_candi_pane

0xf48b,	// (0x0001ca74) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0001ca74) grid_hyb_phrase_pane

0xf49a,	// (0x0001ca83) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0001ca83) cell_hyb_candi_pane

0xf4bd,	// (0x0001caa6) cell_hyb_candi_scroll_pane

0x4238,	// (0x00011821) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0001caaf) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0001cabd) cell_hyb_phrase_pane

0x4238,	// (0x00011821) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0001cac6) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0001cad4) entry_hyb_candi_pane_t1

0x487f,	// (0x00011e68) input_focus_pane_cp06

0xf4f9,	// (0x0001cae2) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0001caea) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0001caf2) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0001cafa) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0001cb02) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0001cb0a) cell_hyb_candi_scroll_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
