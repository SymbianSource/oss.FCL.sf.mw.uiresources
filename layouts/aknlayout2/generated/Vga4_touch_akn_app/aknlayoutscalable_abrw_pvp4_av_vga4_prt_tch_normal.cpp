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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000cbcb };

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
0x7546,	// (0x00014111) Screen

0x7552,	// (0x0001411d) application_window_ParamLimits

0x7552,	// (0x0001411d) application_window

0x3540,	// (0x0001010b) screen_g1

0x4e6e,	// (0x00011a39) area_bottom_pane_ParamLimits

0x4e6e,	// (0x00011a39) area_bottom_pane

0x4f2e,	// (0x00011af9) area_top_pane_ParamLimits

0x4f2e,	// (0x00011af9) area_top_pane

0x4fcc,	// (0x00011b97) main_pane_ParamLimits

0x4fcc,	// (0x00011b97) main_pane

0x36b9,	// (0x00010284) misc_graphics

0x8c37,	// (0x00015802) battery_pane_ParamLimits

0x8c37,	// (0x00015802) battery_pane

0x9a1a,	// (0x000165e5) bg_status_flat_pane_g8

0x9a22,	// (0x000165ed) bg_status_flat_pane_g9

0x8cff,	// (0x000158ca) context_pane_ParamLimits

0x8cff,	// (0x000158ca) context_pane

0x8e23,	// (0x000159ee) navi_pane_ParamLimits

0x8e23,	// (0x000159ee) navi_pane

0x8eb3,	// (0x00015a7e) signal_pane_ParamLimits

0x8eb3,	// (0x00015a7e) signal_pane

0x0008,

0xf84f,	// (0x0001c41a) bg_status_flat_pane_g

0x8f20,	// (0x00015aeb) status_pane_g1_ParamLimits

0x8f20,	// (0x00015aeb) status_pane_g1

0x8f2c,	// (0x00015af7) status_pane_g2_ParamLimits

0x8f2c,	// (0x00015af7) status_pane_g2

0x8f38,	// (0x00015b03) status_pane_g3_ParamLimits

0x8f38,	// (0x00015b03) status_pane_g3

0x0004,

0xf776,	// (0x0001c341) status_pane_g_ParamLimits

0xf776,	// (0x0001c341) status_pane_g

0x8f6c,	// (0x00015b37) title_pane_ParamLimits

0x8f6c,	// (0x00015b37) title_pane

0x8fad,	// (0x00015b78) uni_indicator_pane_ParamLimits

0x8fad,	// (0x00015b78) uni_indicator_pane

0x8b59,	// (0x00015724) bg_list_pane_ParamLimits

0x8b59,	// (0x00015724) bg_list_pane

0x8b79,	// (0x00015744) find_pane

0x8b81,	// (0x0001574c) listscroll_app_pane_ParamLimits

0x8b81,	// (0x0001574c) listscroll_app_pane

0x8b8d,	// (0x00015758) listscroll_form_pane

0x58ab,	// (0x00012476) listscroll_gen_pane_ParamLimits

0x58ab,	// (0x00012476) listscroll_gen_pane

0x58bf,	// (0x0001248a) listscroll_set_pane

0x7eb0,	// (0x00014a7b) main_idle_act_pane

0x8852,	// (0x0001541d) main_idle_trad_pane

0x8852,	// (0x0001541d) main_list_empty_pane

0x8b81,	// (0x0001574c) main_midp_pane

0x8ba7,	// (0x00015772) main_pane_g1_ParamLimits

0x8ba7,	// (0x00015772) main_pane_g1

0x58d5,	// (0x000124a0) popup_ai_message_window_ParamLimits

0x58d5,	// (0x000124a0) popup_ai_message_window

0x5989,	// (0x00012554) popup_fep_china_uni_window_ParamLimits

0x5989,	// (0x00012554) popup_fep_china_uni_window

0x59e9,	// (0x000125b4) popup_fep_japan_candidate_window_ParamLimits

0x59e9,	// (0x000125b4) popup_fep_japan_candidate_window

0x5a13,	// (0x000125de) popup_fep_japan_predictive_window_ParamLimits

0x5a13,	// (0x000125de) popup_fep_japan_predictive_window

0x5a49,	// (0x00012614) popup_find_window

0x5a56,	// (0x00012621) popup_grid_graphic_window_ParamLimits

0x5a56,	// (0x00012621) popup_grid_graphic_window

0x5a86,	// (0x00012651) popup_large_graphic_colour_window

0x5aac,	// (0x00012677) popup_menu_window_ParamLimits

0x5aac,	// (0x00012677) popup_menu_window

0x5c76,	// (0x00012841) popup_note_image_window

0x5c60,	// (0x0001282b) popup_note_wait_window_ParamLimits

0x5c60,	// (0x0001282b) popup_note_wait_window

0x5c60,	// (0x0001282b) popup_note_window_ParamLimits

0x5c60,	// (0x0001282b) popup_note_window

0x5cdc,	// (0x000128a7) popup_query_code_window_ParamLimits

0x5cdc,	// (0x000128a7) popup_query_code_window

0x5cf2,	// (0x000128bd) popup_query_data_code_window_ParamLimits

0x5cf2,	// (0x000128bd) popup_query_data_code_window

0x5d15,	// (0x000128e0) popup_query_data_window_ParamLimits

0x5d15,	// (0x000128e0) popup_query_data_window

0x5d37,	// (0x00012902) popup_query_sat_info_window_ParamLimits

0x5d37,	// (0x00012902) popup_query_sat_info_window

0x5d76,	// (0x00012941) popup_snote_single_graphic_window_ParamLimits

0x5d76,	// (0x00012941) popup_snote_single_graphic_window

0x5d76,	// (0x00012941) popup_snote_single_text_window_ParamLimits

0x5d76,	// (0x00012941) popup_snote_single_text_window

0x5d8d,	// (0x00012958) popup_sub_window_general

0x5ed3,	// (0x00012a9e) popup_window_general_ParamLimits

0x5ed3,	// (0x00012a9e) popup_window_general

0x8bbd,	// (0x00015788) power_save_pane

0x5752,	// (0x0001231d) control_pane_g1_ParamLimits

0x5752,	// (0x0001231d) control_pane_g1

0x5775,	// (0x00012340) control_pane_g2_ParamLimits

0x5775,	// (0x00012340) control_pane_g2

0x8b1c,	// (0x000156e7) control_pane_g3_ParamLimits

0x8b1c,	// (0x000156e7) control_pane_g3

0x0007,

0xf75e,	// (0x0001c329) control_pane_g_ParamLimits

0xf75e,	// (0x0001c329) control_pane_g

0x57ba,	// (0x00012385) control_pane_t1_ParamLimits

0x57ba,	// (0x00012385) control_pane_t1

0x5802,	// (0x000123cd) control_pane_t2_ParamLimits

0x5802,	// (0x000123cd) control_pane_t2

0x0002,

0xf76f,	// (0x0001c33a) control_pane_t_ParamLimits

0xf76f,	// (0x0001c33a) control_pane_t

0x8a41,	// (0x0001560c) navi_navi_volume_pane_cp1

0x8a49,	// (0x00015614) status_small_icon_pane

0x8a51,	// (0x0001561c) status_small_pane_g1_ParamLimits

0x8a51,	// (0x0001561c) status_small_pane_g1

0x8a85,	// (0x00015650) status_small_pane_g2_ParamLimits

0x8a85,	// (0x00015650) status_small_pane_g2

0x8a91,	// (0x0001565c) status_small_pane_g3_ParamLimits

0x8a91,	// (0x0001565c) status_small_pane_g3

0x8a9d,	// (0x00015668) status_small_pane_g4_ParamLimits

0x8a9d,	// (0x00015668) status_small_pane_g4

0x8aa9,	// (0x00015674) status_small_pane_g5_ParamLimits

0x8aa9,	// (0x00015674) status_small_pane_g5

0x8ab7,	// (0x00015682) status_small_pane_g6_ParamLimits

0x8ab7,	// (0x00015682) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001c318) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001c318) status_small_pane_g

0x8ae6,	// (0x000156b1) status_small_pane_t1

0x8b08,	// (0x000156d3) status_small_wait_pane_ParamLimits

0x8b08,	// (0x000156d3) status_small_wait_pane

0x8233,	// (0x00014dfe) aid_levels_signal_ParamLimits

0x8233,	// (0x00014dfe) aid_levels_signal

0x8242,	// (0x00014e0d) signal_pane_g1_ParamLimits

0x8242,	// (0x00014e0d) signal_pane_g1

0x8257,	// (0x00014e22) signal_pane_g2_ParamLimits

0x8257,	// (0x00014e22) signal_pane_g2

0x0003,

0xf6de,	// (0x0001c2a9) signal_pane_g_ParamLimits

0xf6de,	// (0x0001c2a9) signal_pane_g

0x8288,	// (0x00014e53) context_pane_g1

0x7562,	// (0x0001412d) title_pane_g1

0x7594,	// (0x0001415f) title_pane_t1

0x3723,	// (0x000102ee) title_pane_t2

0x3749,	// (0x00010314) title_pane_t3

0x0002,

0xf532,	// (0x0001c0fd) title_pane_t

0x8fc5,	// (0x00015b90) aid_levels_battery_ParamLimits

0x8fc5,	// (0x00015b90) aid_levels_battery

0x8fd6,	// (0x00015ba1) battery_pane_g1_ParamLimits

0x8fd6,	// (0x00015ba1) battery_pane_g1

0x8fec,	// (0x00015bb7) battery_pane_g2_ParamLimits

0x8fec,	// (0x00015bb7) battery_pane_g2

0x0001,

0xf781,	// (0x0001c34c) battery_pane_g_ParamLimits

0xf781,	// (0x0001c34c) battery_pane_g

0xa364,	// (0x00016f2f) uni_indicator_pane_g1

0xa37a,	// (0x00016f45) uni_indicator_pane_g2

0xa390,	// (0x00016f5b) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0001c4c2) uni_indicator_pane_g

0x86b5,	// (0x00015280) navi_icon_pane_ParamLimits

0x86b5,	// (0x00015280) navi_icon_pane

0x85fc,	// (0x000151c7) navi_midp_pane

0x86d1,	// (0x0001529c) navi_navi_pane

0x86db,	// (0x000152a6) navi_text_pane_ParamLimits

0x86db,	// (0x000152a6) navi_text_pane

0x3540,	// (0x0001010b) status_small_wait_pane_g1

0x3b17,	// (0x000106e2) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x0001c4bd) status_small_wait_pane_g

0xa077,	// (0x00016c42) navi_navi_icon_text_pane

0xa07f,	// (0x00016c4a) navi_navi_pane_g1_ParamLimits

0xa07f,	// (0x00016c4a) navi_navi_pane_g1

0xa091,	// (0x00016c5c) navi_navi_pane_g2_ParamLimits

0xa091,	// (0x00016c5c) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0001c48b) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0001c48b) navi_navi_pane_g

0xa0a3,	// (0x00016c6e) navi_navi_tabs_pane

0xa0ac,	// (0x00016c77) navi_navi_text_pane

0xa077,	// (0x00016c42) navi_navi_volume_pane

0xa053,	// (0x00016c1e) navi_text_pane_t1

0xa047,	// (0x00016c12) navi_icon_pane_g1

0x9f9a,	// (0x00016b65) navi_navi_text_pane_t1

0x61fc,	// (0x00012dc7) navi_navi_volume_pane_g1

0x6204,	// (0x00012dcf) volume_small_pane

0x9f00,	// (0x00016acb) navi_navi_icon_text_pane_g1

0x9f08,	// (0x00016ad3) navi_navi_icon_text_pane_t1

0x86d1,	// (0x0001529c) navi_tabs_2_long_pane

0x86d1,	// (0x0001529c) navi_tabs_2_pane

0x86d1,	// (0x0001529c) navi_tabs_3_long_pane

0x86d1,	// (0x0001529c) navi_tabs_3_pane

0x86d1,	// (0x0001529c) navi_tabs_4_pane

0x61dc,	// (0x00012da7) tabs_2_active_pane_ParamLimits

0x61dc,	// (0x00012da7) tabs_2_active_pane

0x61ec,	// (0x00012db7) tabs_2_passive_pane_ParamLimits

0x61ec,	// (0x00012db7) tabs_2_passive_pane

0x61aa,	// (0x00012d75) tabs_3_active_pane_ParamLimits

0x61aa,	// (0x00012d75) tabs_3_active_pane

0x61ba,	// (0x00012d85) tabs_3_passive_pane_ParamLimits

0x61ba,	// (0x00012d85) tabs_3_passive_pane

0x61cb,	// (0x00012d96) tabs_3_passive_pane_cp_ParamLimits

0x61cb,	// (0x00012d96) tabs_3_passive_pane_cp

0x615e,	// (0x00012d29) tabs_4_active_pane_ParamLimits

0x615e,	// (0x00012d29) tabs_4_active_pane

0x6171,	// (0x00012d3c) tabs_4_passive_pane_ParamLimits

0x6171,	// (0x00012d3c) tabs_4_passive_pane

0x6182,	// (0x00012d4d) tabs_4_passive_pane_cp_ParamLimits

0x6182,	// (0x00012d4d) tabs_4_passive_pane_cp

0x6193,	// (0x00012d5e) tabs_4_passive_pane_cp2_ParamLimits

0x6193,	// (0x00012d5e) tabs_4_passive_pane_cp2

0x613a,	// (0x00012d05) tabs_2_long_active_pane_ParamLimits

0x613a,	// (0x00012d05) tabs_2_long_active_pane

0x614c,	// (0x00012d17) tabs_2_long_passive_pane_ParamLimits

0x614c,	// (0x00012d17) tabs_2_long_passive_pane

0x60fb,	// (0x00012cc6) tabs_3_long_active_pane_ParamLimits

0x60fb,	// (0x00012cc6) tabs_3_long_active_pane

0x610e,	// (0x00012cd9) tabs_3_long_passive_pane_ParamLimits

0x610e,	// (0x00012cd9) tabs_3_long_passive_pane

0x6127,	// (0x00012cf2) tabs_3_long_passive_pane_cp_ParamLimits

0x6127,	// (0x00012cf2) tabs_3_long_passive_pane_cp

0x60a1,	// (0x00012c6c) volume_small_pane_g1

0x60aa,	// (0x00012c75) volume_small_pane_g2

0x60b3,	// (0x00012c7e) volume_small_pane_g3

0x60bc,	// (0x00012c87) volume_small_pane_g4

0x60c5,	// (0x00012c90) volume_small_pane_g5

0x60ce,	// (0x00012c99) volume_small_pane_g6

0x60d7,	// (0x00012ca2) volume_small_pane_g7

0x60e0,	// (0x00012cab) volume_small_pane_g8

0x60e9,	// (0x00012cb4) volume_small_pane_g9

0x60f2,	// (0x00012cbd) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0001c457) volume_small_pane_g

0x3773,	// (0x0001033e) bg_active_tab_pane_cp2_ParamLimits

0x3773,	// (0x0001033e) bg_active_tab_pane_cp2

0x75fc,	// (0x000141c7) tabs_3_active_pane_g1

0x7604,	// (0x000141cf) tabs_3_active_pane_t1

0x3773,	// (0x0001033e) bg_passive_tab_pane_cp2_ParamLimits

0x3773,	// (0x0001033e) bg_passive_tab_pane_cp2

0x75fc,	// (0x000141c7) tabs_3_passive_pane_g1

0x7604,	// (0x000141cf) tabs_3_passive_pane_t1

0x3773,	// (0x0001033e) bg_active_tab_pane_cp3_ParamLimits

0x3773,	// (0x0001033e) bg_active_tab_pane_cp3

0x7616,	// (0x000141e1) tabs_4_active_pane_g1

0x761e,	// (0x000141e9) tabs_4_active_pane_t1

0x3773,	// (0x0001033e) bg_passive_tab_pane_cp3_ParamLimits

0x3773,	// (0x0001033e) bg_passive_tab_pane_cp3

0x7616,	// (0x000141e1) tabs_4_1_passive_pane_g1

0x761e,	// (0x000141e9) tabs_4_1_passive_pane_t1

0x8b81,	// (0x0001574c) list_highlight_pane_cp2

0xa605,	// (0x000171d0) list_set_pane_ParamLimits

0xa605,	// (0x000171d0) list_set_pane

0xa6c7,	// (0x00017292) main_pane_set_t1_ParamLimits

0xa6c7,	// (0x00017292) main_pane_set_t1

0xa6e7,	// (0x000172b2) main_pane_set_t2_ParamLimits

0xa6e7,	// (0x000172b2) main_pane_set_t2

0xa6fb,	// (0x000172c6) main_pane_set_t3_ParamLimits

0xa6fb,	// (0x000172c6) main_pane_set_t3

0xa70f,	// (0x000172da) main_pane_set_t4_ParamLimits

0xa70f,	// (0x000172da) main_pane_set_t4

0x0003,

0xf95c,	// (0x0001c527) main_pane_set_t_ParamLimits

0xf95c,	// (0x0001c527) main_pane_set_t

0xa723,	// (0x000172ee) setting_code_pane

0xa72d,	// (0x000172f8) setting_slider_graphic_pane

0xa72d,	// (0x000172f8) setting_slider_pane

0xa72d,	// (0x000172f8) setting_text_pane

0xa72d,	// (0x000172f8) setting_volume_pane

0x522b,	// (0x00011df6) volume_set_pane

0x3773,	// (0x0001033e) bg_set_opt_pane_cp

0x5235,	// (0x00011e00) setting_slider_pane_t1

0x524e,	// (0x00011e19) setting_slider_pane_t2

0x5268,	// (0x00011e33) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001c104) setting_slider_pane_t

0x5280,	// (0x00011e4b) slider_set_pane

0x36b9,	// (0x00010284) bg_set_opt_pane_cp2

0x37e2,	// (0x000103ad) setting_slider_graphic_pane_g1

0x5296,	// (0x00011e61) setting_slider_graphic_pane_t1

0x52a6,	// (0x00011e71) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001c10b) setting_slider_graphic_pane_t

0x52b6,	// (0x00011e81) slider_set_pane_cp

0x36b9,	// (0x00010284) input_focus_pane_cp1

0xa5c6,	// (0x00017191) list_set_text_pane

0x3540,	// (0x0001010b) setting_text_pane_g1

0x36b9,	// (0x00010284) input_focus_pane_cp2

0x3540,	// (0x0001010b) setting_code_pane_g1

0x3813,	// (0x000103de) setting_code_pane_t1

0x3821,	// (0x000103ec) set_text_pane_t1_ParamLimits

0x3821,	// (0x000103ec) set_text_pane_t1

0x3fa6,	// (0x00010b71) set_opt_bg_pane_g1

0x3fae,	// (0x00010b79) set_opt_bg_pane_g2

0xa59e,	// (0x00017169) set_opt_bg_pane_g3

0x3fbe,	// (0x00010b89) set_opt_bg_pane_g4

0x3fc6,	// (0x00010b91) set_opt_bg_pane_g5

0x3fce,	// (0x00010b99) set_opt_bg_pane_g6

0xa5a8,	// (0x00017173) set_opt_bg_pane_g7

0xa5b2,	// (0x0001717d) set_opt_bg_pane_g8

0xa5bc,	// (0x00017187) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0001c514) set_opt_bg_pane_g

0xa591,	// (0x0001715c) slider_set_pane_g1

0x6285,	// (0x00012e50) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0001c505) slider_set_pane_g

0x620d,	// (0x00012dd8) volume_set_pane_g1

0x6217,	// (0x00012de2) volume_set_pane_g2

0x6221,	// (0x00012dec) volume_set_pane_g3

0x622b,	// (0x00012df6) volume_set_pane_g4

0x6235,	// (0x00012e00) volume_set_pane_g5

0x623f,	// (0x00012e0a) volume_set_pane_g6

0x6249,	// (0x00012e14) volume_set_pane_g7

0x6253,	// (0x00012e1e) volume_set_pane_g8

0x625d,	// (0x00012e28) volume_set_pane_g9

0x6267,	// (0x00012e32) volume_set_pane_g10

0x0009,

0xf912,	// (0x0001c4dd) volume_set_pane_g

0x7630,	// (0x000141fb) indicator_pane_ParamLimits

0x7630,	// (0x000141fb) indicator_pane

0x763c,	// (0x00014207) main_idle_pane_g2_ParamLimits

0x763c,	// (0x00014207) main_idle_pane_g2

0x7664,	// (0x0001422f) main_pane_idle_g1_ParamLimits

0x7664,	// (0x0001422f) main_pane_idle_g1

0x383b,	// (0x00010406) popup_clock_digital_analogue_window_ParamLimits

0x383b,	// (0x00010406) popup_clock_digital_analogue_window

0x7672,	// (0x0001423d) soft_indicator_pane_ParamLimits

0x7672,	// (0x0001423d) soft_indicator_pane

0x7680,	// (0x0001424b) wallpaper_pane_ParamLimits

0x7680,	// (0x0001424b) wallpaper_pane

0x3540,	// (0x0001010b) wallpaper_pane_g1

0x768c,	// (0x00014257) indicator_pane_g1_ParamLimits

0x768c,	// (0x00014257) indicator_pane_g1

0xaa97,	// (0x00017662) navi_navi_icon_text_pane_srt_g1

0x3869,	// (0x00010434) soft_indicator_pane_t1

0x3883,	// (0x0001044e) aid_ps_area_pane

0x7698,	// (0x00014263) aid_ps_clock_pane

0x3894,	// (0x0001045f) aid_ps_indicator_pane

0x38a0,	// (0x0001046b) indicator_ps_pane_ParamLimits

0x38a0,	// (0x0001046b) indicator_ps_pane

0x38af,	// (0x0001047a) power_save_pane_g1_ParamLimits

0x38af,	// (0x0001047a) power_save_pane_g1

0x38bb,	// (0x00010486) power_save_pane_g2_ParamLimits

0x38bb,	// (0x00010486) power_save_pane_g2

0x4e22,	// (0x000119ed) aid_navinavi_width_pane

0x3883,	// (0x0001044e) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001c110) power_save_pane_g_ParamLimits

0xf545,	// (0x0001c110) power_save_pane_g

0x38c9,	// (0x00010494) power_save_pane_t1_ParamLimits

0x38c9,	// (0x00010494) power_save_pane_t1

0x7698,	// (0x00014263) aid_ps_clock_pane_ParamLimits

0x3894,	// (0x0001045f) aid_ps_indicator_pane_ParamLimits

0x38db,	// (0x000104a6) power_save_pane_t4_ParamLimits

0x38db,	// (0x000104a6) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001c115) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001c115) power_save_pane_t

0x3905,	// (0x000104d0) power_save_t3_ParamLimits

0x3905,	// (0x000104d0) power_save_t3

0x38f0,	// (0x000104bb) power_save_t2_ParamLimits

0x38f0,	// (0x000104bb) power_save_t2

0x391a,	// (0x000104e5) indicator_ps_pane_g1

0x76a6,	// (0x00014271) ai_gene_pane_ParamLimits

0x76a6,	// (0x00014271) ai_gene_pane

0x76b2,	// (0x0001427d) ai_links_pane_ParamLimits

0x76b2,	// (0x0001427d) ai_links_pane

0x76be,	// (0x00014289) indicator_pane_cp1_ParamLimits

0x76be,	// (0x00014289) indicator_pane_cp1

0x76ca,	// (0x00014295) main_pane_idle_g1_cp_ParamLimits

0x76ca,	// (0x00014295) main_pane_idle_g1_cp

0x3923,	// (0x000104ee) popup_ai_links_title_window

0x76d6,	// (0x000142a1) soft_indicator_pane_cp1_ParamLimits

0x76d6,	// (0x000142a1) soft_indicator_pane_cp1

0xa352,	// (0x00016f1d) ai_links_pane_g1

0xa35b,	// (0x00016f26) grid_ai_links_pane

0xa337,	// (0x00016f02) ai_gene_pane_1

0xa340,	// (0x00016f0b) ai_gene_pane_2

0xa349,	// (0x00016f14) list_highlight_pane_cp4

0xa317,	// (0x00016ee2) cell_ai_link_pane_ParamLimits

0xa317,	// (0x00016ee2) cell_ai_link_pane

0xa30f,	// (0x00016eda) cell_ai_link_pane_g1

0x3b17,	// (0x000106e2) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x0001c4b8) cell_ai_link_pane_g

0x36b9,	// (0x00010284) grid_highlight_cp2

0x36b9,	// (0x00010284) bg_popup_sub_pane_cp1

0x393a,	// (0x00010505) popup_ai_links_title_window_t1

0xa25b,	// (0x00016e26) ai_gene_pane_1_g1_ParamLimits

0xa25b,	// (0x00016e26) ai_gene_pane_1_g1

0xa267,	// (0x00016e32) ai_gene_pane_1_g2_ParamLimits

0xa267,	// (0x00016e32) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0001c4ae) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0001c4ae) ai_gene_pane_1_g

0xa274,	// (0x00016e3f) ai_gene_pane_1_t1_ParamLimits

0xa274,	// (0x00016e3f) ai_gene_pane_1_t1

0xa2a8,	// (0x00016e73) grid_ai_soft_ind_pane

0xa246,	// (0x00016e11) ai_gene_pane_2_t1_ParamLimits

0xa246,	// (0x00016e11) ai_gene_pane_2_t1

0x76e2,	// (0x000142ad) main_pane_empty_t1_ParamLimits

0x76e2,	// (0x000142ad) main_pane_empty_t1

0x76fa,	// (0x000142c5) main_pane_empty_t2_ParamLimits

0x76fa,	// (0x000142c5) main_pane_empty_t2

0x770f,	// (0x000142da) main_pane_empty_t3_ParamLimits

0x770f,	// (0x000142da) main_pane_empty_t3

0x7721,	// (0x000142ec) main_pane_empty_t4_ParamLimits

0x7721,	// (0x000142ec) main_pane_empty_t4

0x7733,	// (0x000142fe) main_pane_empty_t5_ParamLimits

0x7733,	// (0x000142fe) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001c11a) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001c11a) main_pane_empty_t

0x4064,	// (0x00010c2f) bg_popup_window_pane_ParamLimits

0x4064,	// (0x00010c2f) bg_popup_window_pane

0x9fa8,	// (0x00016b73) find_popup_pane_cp2_ParamLimits

0x9fa8,	// (0x00016b73) find_popup_pane_cp2

0x9fb4,	// (0x00016b7f) heading_pane_ParamLimits

0x9fb4,	// (0x00016b7f) heading_pane

0x36b9,	// (0x00010284) bg_popup_sub_pane

0x9f22,	// (0x00016aed) bg_popup_window_pane_g1_ParamLimits

0x9f22,	// (0x00016aed) bg_popup_window_pane_g1

0x9f2e,	// (0x00016af9) bg_popup_window_pane_g2_ParamLimits

0x9f2e,	// (0x00016af9) bg_popup_window_pane_g2

0x9f3a,	// (0x00016b05) bg_popup_window_pane_g3_ParamLimits

0x9f3a,	// (0x00016b05) bg_popup_window_pane_g3

0x9f46,	// (0x00016b11) bg_popup_window_pane_g4_ParamLimits

0x9f46,	// (0x00016b11) bg_popup_window_pane_g4

0x9f52,	// (0x00016b1d) bg_popup_window_pane_g5_ParamLimits

0x9f52,	// (0x00016b1d) bg_popup_window_pane_g5

0x9f5e,	// (0x00016b29) bg_popup_window_pane_g6_ParamLimits

0x9f5e,	// (0x00016b29) bg_popup_window_pane_g6

0x9f6a,	// (0x00016b35) bg_popup_window_pane_g7_ParamLimits

0x9f6a,	// (0x00016b35) bg_popup_window_pane_g7

0x9f76,	// (0x00016b41) bg_popup_window_pane_g8_ParamLimits

0x9f76,	// (0x00016b41) bg_popup_window_pane_g8

0x9f82,	// (0x00016b4d) bg_popup_window_pane_g9_ParamLimits

0x9f82,	// (0x00016b4d) bg_popup_window_pane_g9

0x9f8e,	// (0x00016b59) bg_popup_window_pane_g10_ParamLimits

0x9f8e,	// (0x00016b59) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0001c476) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0001c476) bg_popup_window_pane_g

0x9eb7,	// (0x00016a82) bg_popup_heading_pane_ParamLimits

0x9eb7,	// (0x00016a82) bg_popup_heading_pane

0x630d,	// (0x00012ed8) tabs_4_passive_pane_cp_srt_ParamLimits

0x630d,	// (0x00012ed8) tabs_4_passive_pane_cp_srt

0x631f,	// (0x00012eea) tabs_4_passive_pane_srt_ParamLimits

0x9ecb,	// (0x00016a96) heading_pane_g2

0x631f,	// (0x00012eea) tabs_4_passive_pane_srt

0x8b81,	// (0x0001574c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8b81,	// (0x0001574c) bg_passive_tab_pane_cp3_srt

0x9ed3,	// (0x00016a9e) heading_pane_t1_ParamLimits

0x9ed3,	// (0x00016a9e) heading_pane_t1

0x9eea,	// (0x00016ab5) heading_pane_t2_ParamLimits

0x9eea,	// (0x00016ab5) heading_pane_t2

0x0001,

0xf8a6,	// (0x0001c471) heading_pane_t_ParamLimits

0xf8a6,	// (0x0001c471) heading_pane_t

0x99e2,	// (0x000165ad) bg_popup_heading_pane_g1

0x9a91,	// (0x0001665c) bg_popup_heading_pane_g2

0x9a9b,	// (0x00016666) bg_popup_heading_pane_g3

0x9aa5,	// (0x00016670) bg_popup_heading_pane_g4

0x9aaf,	// (0x0001667a) bg_popup_heading_pane_g5

0x9ab9,	// (0x00016684) bg_popup_heading_pane_g6

0x9ac1,	// (0x0001668c) bg_popup_heading_pane_g7

0x9ac9,	// (0x00016694) bg_popup_heading_pane_g8

0x9ad3,	// (0x0001669e) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x0001c42d) bg_popup_heading_pane_g

0x90fb,	// (0x00015cc6) bg_popup_sub_pane_g1

0x910b,	// (0x00015cd6) bg_popup_sub_pane_g2

0x9103,	// (0x00015cce) bg_popup_sub_pane_g3

0x911b,	// (0x00015ce6) bg_popup_sub_pane_g4

0x9113,	// (0x00015cde) bg_popup_sub_pane_g5

0x9123,	// (0x00015cee) bg_popup_sub_pane_g6

0x912b,	// (0x00015cf6) bg_popup_sub_pane_g7

0x913b,	// (0x00015d06) bg_popup_sub_pane_g8

0x9133,	// (0x00015cfe) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x0001c407) bg_popup_sub_pane_g

0x375b,	// (0x00010326) bg_popup_window_pane_cp5_ParamLimits

0x375b,	// (0x00010326) bg_popup_window_pane_cp5

0x3957,	// (0x00010522) popup_note_window_g1_ParamLimits

0x3957,	// (0x00010522) popup_note_window_g1

0x3963,	// (0x0001052e) popup_note_window_t1_ParamLimits

0x3963,	// (0x0001052e) popup_note_window_t1

0x3979,	// (0x00010544) popup_note_window_t2_ParamLimits

0x3979,	// (0x00010544) popup_note_window_t2

0x398f,	// (0x0001055a) popup_note_window_t3_ParamLimits

0x398f,	// (0x0001055a) popup_note_window_t3

0x39a5,	// (0x00010570) popup_note_window_t4_ParamLimits

0x39a5,	// (0x00010570) popup_note_window_t4

0x39cd,	// (0x00010598) popup_note_window_t5_ParamLimits

0x39cd,	// (0x00010598) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001c125) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001c125) popup_note_window_t

0x3a17,	// (0x000105e2) bg_popup_window_pane_cp6_ParamLimits

0x3a17,	// (0x000105e2) bg_popup_window_pane_cp6

0x995e,	// (0x00016529) popup_note_image_window_g1_ParamLimits

0x995e,	// (0x00016529) popup_note_image_window_g1

0x996a,	// (0x00016535) popup_note_image_window_g2_ParamLimits

0x996a,	// (0x00016535) popup_note_image_window_g2

0x0001,

0xf830,	// (0x0001c3fb) popup_note_image_window_g_ParamLimits

0xf830,	// (0x0001c3fb) popup_note_image_window_g

0x9983,	// (0x0001654e) popup_note_image_window_t1_ParamLimits

0x9983,	// (0x0001654e) popup_note_image_window_t1

0x999c,	// (0x00016567) popup_note_image_window_t2_ParamLimits

0x999c,	// (0x00016567) popup_note_image_window_t2

0x99b5,	// (0x00016580) popup_note_image_window_t3_ParamLimits

0x99b5,	// (0x00016580) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0001c400) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0001c400) popup_note_image_window_t

0x981e,	// (0x000163e9) bg_popup_window_pane_cp7_ParamLimits

0x981e,	// (0x000163e9) bg_popup_window_pane_cp7

0x984e,	// (0x00016419) popup_note_wait_window_g1_ParamLimits

0x984e,	// (0x00016419) popup_note_wait_window_g1

0x985a,	// (0x00016425) popup_note_wait_window_g2_ParamLimits

0x985a,	// (0x00016425) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x0001c3e9) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x0001c3e9) popup_note_wait_window_g

0x9872,	// (0x0001643d) popup_note_wait_window_t1_ParamLimits

0x9872,	// (0x0001643d) popup_note_wait_window_t1

0x9899,	// (0x00016464) popup_note_wait_window_t2_ParamLimits

0x9899,	// (0x00016464) popup_note_wait_window_t2

0x98b7,	// (0x00016482) popup_note_wait_window_t3_ParamLimits

0x98b7,	// (0x00016482) popup_note_wait_window_t3

0x98ca,	// (0x00016495) popup_note_wait_window_t4_ParamLimits

0x98ca,	// (0x00016495) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0001c3f0) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0001c3f0) popup_note_wait_window_t

0x98ef,	// (0x000164ba) wait_bar_pane_ParamLimits

0x98ef,	// (0x000164ba) wait_bar_pane

0x36b9,	// (0x00010284) wait_anim_pane

0x36b9,	// (0x00010284) wait_border_pane

0x3540,	// (0x0001010b) wait_anim_pane_g1

0x3540,	// (0x0001010b) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0001c2a4) wait_anim_pane_g

0x97c2,	// (0x0001638d) wait_border_pane_g1

0x97cd,	// (0x00016398) wait_border_pane_g2

0x97d6,	// (0x000163a1) wait_border_pane_g3

0x0002,

0xf817,	// (0x0001c3e2) wait_border_pane_g

0x962c,	// (0x000161f7) bg_popup_window_pane_cp16_ParamLimits

0x962c,	// (0x000161f7) bg_popup_window_pane_cp16

0x972c,	// (0x000162f7) indicator_popup_pane_cp4_ParamLimits

0x972c,	// (0x000162f7) indicator_popup_pane_cp4

0x9740,	// (0x0001630b) popup_query_data_window_t1_ParamLimits

0x9740,	// (0x0001630b) popup_query_data_window_t1

0x9752,	// (0x0001631d) popup_query_data_window_t2_ParamLimits

0x9752,	// (0x0001631d) popup_query_data_window_t2

0x976b,	// (0x00016336) popup_query_data_window_t3_ParamLimits

0x976b,	// (0x00016336) popup_query_data_window_t3

0x0002,

0xf810,	// (0x0001c3db) popup_query_data_window_t_ParamLimits

0xf810,	// (0x0001c3db) popup_query_data_window_t

0x9785,	// (0x00016350) query_popup_data_pane_ParamLimits

0x9785,	// (0x00016350) query_popup_data_pane

0x9799,	// (0x00016364) query_popup_data_pane_cp1_ParamLimits

0x9799,	// (0x00016364) query_popup_data_pane_cp1

0x962c,	// (0x000161f7) bg_popup_window_pane_cp10_ParamLimits

0x962c,	// (0x000161f7) bg_popup_window_pane_cp10

0x965e,	// (0x00016229) indicator_popup_pane_ParamLimits

0x965e,	// (0x00016229) indicator_popup_pane

0x9680,	// (0x0001624b) popup_query_code_window_t1_ParamLimits

0x9680,	// (0x0001624b) popup_query_code_window_t1

0x969a,	// (0x00016265) popup_query_code_window_t2_ParamLimits

0x969a,	// (0x00016265) popup_query_code_window_t2

0x96e3,	// (0x000162ae) popup_query_code_window_t3_ParamLimits

0x96e3,	// (0x000162ae) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0001c3d4) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0001c3d4) popup_query_code_window_t

0x9712,	// (0x000162dd) query_popup_pane_ParamLimits

0x9712,	// (0x000162dd) query_popup_pane

0x3a17,	// (0x000105e2) bg_popup_window_pane_cp15_ParamLimits

0x3a17,	// (0x000105e2) bg_popup_window_pane_cp15

0x3a37,	// (0x00010602) indicator_popup_pane_cp1_ParamLimits

0x3a37,	// (0x00010602) indicator_popup_pane_cp1

0x3a4a,	// (0x00010615) indicator_popup_pane_cp2_ParamLimits

0x3a4a,	// (0x00010615) indicator_popup_pane_cp2

0x3a65,	// (0x00010630) popup_query_data_code_window_g1_ParamLimits

0x3a65,	// (0x00010630) popup_query_data_code_window_g1

0x3a78,	// (0x00010643) popup_query_data_code_window_t1_ParamLimits

0x3a78,	// (0x00010643) popup_query_data_code_window_t1

0x3a8a,	// (0x00010655) popup_query_data_code_window_t2_ParamLimits

0x3a8a,	// (0x00010655) popup_query_data_code_window_t2

0x3a9c,	// (0x00010667) popup_query_data_code_window_t3_ParamLimits

0x3a9c,	// (0x00010667) popup_query_data_code_window_t3

0x3ab2,	// (0x0001067d) popup_query_data_code_window_t4_ParamLimits

0x3ab2,	// (0x0001067d) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001c130) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001c130) popup_query_data_code_window_t

0x5fad,	// (0x00012b78) list_single_midp_graphic_pane_g3

0x3acc,	// (0x00010697) query_popup_data_pane_cp2_ParamLimits

0x3adf,	// (0x000106aa) query_popup_pane_cp2_ParamLimits

0x3adf,	// (0x000106aa) query_popup_pane_cp2

0x36b9,	// (0x00010284) bg_popup_window_pane_cp11

0x9610,	// (0x000161db) heading_pane_cp5

0x9618,	// (0x000161e3) listscroll_popup_info_pane

0x36b9,	// (0x00010284) input_focus_pane_cp3

0x3afa,	// (0x000106c5) query_popup_pane_t1

0x3b08,	// (0x000106d3) list_popup_info_pane_ParamLimits

0x3b08,	// (0x000106d3) list_popup_info_pane

0x3b17,	// (0x000106e2) listscroll_popup_info_pane_g1

0x3b1f,	// (0x000106ea) scroll_pane_cp7

0x3b29,	// (0x000106f4) popup_info_list_pane_t1_ParamLimits

0x3b29,	// (0x000106f4) popup_info_list_pane_t1

0x3b43,	// (0x0001070e) popup_info_list_pane_t2_ParamLimits

0x3b43,	// (0x0001070e) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001c139) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001c139) popup_info_list_pane_t

0x36b9,	// (0x00010284) bg_popup_window_pane_cp12

0xaab1,	// (0x0001767c) find_popup_pane

0x3773,	// (0x0001033e) bg_popup_window_pane_cp3

0x3b5d,	// (0x00010728) heading_pane_cp3

0x3b6c,	// (0x00010737) listscroll_popup_graphic_pane

0x36b9,	// (0x00010284) bg_popup_window_pane_cp4

0x7795,	// (0x00014360) heading_pane_cp4

0x3b7c,	// (0x00010747) listscroll_popup_colour_pane

0x779f,	// (0x0001436a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x779f,	// (0x0001436a) cell_large_graphic_colour_none_popup_pane

0x77b3,	// (0x0001437e) grid_large_graphic_colour_popup_pane_ParamLimits

0x77b3,	// (0x0001437e) grid_large_graphic_colour_popup_pane

0x77df,	// (0x000143aa) listscroll_popup_colour_pane_g1_ParamLimits

0x77df,	// (0x000143aa) listscroll_popup_colour_pane_g1

0x77f6,	// (0x000143c1) listscroll_popup_colour_pane_g2_ParamLimits

0x77f6,	// (0x000143c1) listscroll_popup_colour_pane_g2

0x780d,	// (0x000143d8) listscroll_popup_colour_pane_g3_ParamLimits

0x780d,	// (0x000143d8) listscroll_popup_colour_pane_g3

0x781d,	// (0x000143e8) listscroll_popup_colour_pane_g4_ParamLimits

0x781d,	// (0x000143e8) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001c13e) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001c13e) listscroll_popup_colour_pane_g

0x3b84,	// (0x0001074f) scroll_pane_cp6_ParamLimits

0x3b84,	// (0x0001074f) scroll_pane_cp6

0x7831,	// (0x000143fc) cell_large_graphic_colour_popup_pane_ParamLimits

0x7831,	// (0x000143fc) cell_large_graphic_colour_popup_pane

0x3b96,	// (0x00010761) cell_large_graphic_colour_none_popup_pane_t1

0x36b9,	// (0x00010284) grid_highlight_pane_cp5

0x3ba5,	// (0x00010770) cell_large_graphic_colour_popup_pane_g1

0x3bad,	// (0x00010778) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001c147) cell_large_graphic_colour_popup_pane_g

0x3bb5,	// (0x00010780) cell_large_graphic_colour_popup_pane_g2_copy1

0x3bbe,	// (0x00010789) grid_highlight_pane_cp4

0x3bc6,	// (0x00010791) bg_popup_window_pane_cp8_ParamLimits

0x3bc6,	// (0x00010791) bg_popup_window_pane_cp8

0x3be1,	// (0x000107ac) popup_snote_single_text_window_g1_ParamLimits

0x3be1,	// (0x000107ac) popup_snote_single_text_window_g1

0x3bf3,	// (0x000107be) popup_snote_single_text_window_t1_ParamLimits

0x3bf3,	// (0x000107be) popup_snote_single_text_window_t1

0x3c06,	// (0x000107d1) popup_snote_single_text_window_t2_ParamLimits

0x3c06,	// (0x000107d1) popup_snote_single_text_window_t2

0x3c19,	// (0x000107e4) popup_snote_single_text_window_t3_ParamLimits

0x3c19,	// (0x000107e4) popup_snote_single_text_window_t3

0x3c52,	// (0x0001081d) popup_snote_single_text_window_t4_ParamLimits

0x3c52,	// (0x0001081d) popup_snote_single_text_window_t4

0x3c86,	// (0x00010851) popup_snote_single_text_window_t5_ParamLimits

0x3c86,	// (0x00010851) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001c14c) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001c14c) popup_snote_single_text_window_t

0x3cb5,	// (0x00010880) bg_popup_window_pane_cp9_ParamLimits

0x3cb5,	// (0x00010880) bg_popup_window_pane_cp9

0x3be1,	// (0x000107ac) popup_snote_single_graphic_window_g1_ParamLimits

0x3be1,	// (0x000107ac) popup_snote_single_graphic_window_g1

0x3cc3,	// (0x0001088e) popup_snote_single_graphic_window_g2_ParamLimits

0x3cc3,	// (0x0001088e) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001c157) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001c157) popup_snote_single_graphic_window_g

0x3ccf,	// (0x0001089a) popup_snote_single_graphic_window_t1_ParamLimits

0x3ccf,	// (0x0001089a) popup_snote_single_graphic_window_t1

0x3ce2,	// (0x000108ad) popup_snote_single_graphic_window_t2_ParamLimits

0x3ce2,	// (0x000108ad) popup_snote_single_graphic_window_t2

0x3cf5,	// (0x000108c0) popup_snote_single_graphic_window_t3_ParamLimits

0x3cf5,	// (0x000108c0) popup_snote_single_graphic_window_t3

0x3d2e,	// (0x000108f9) popup_snote_single_graphic_window_t4_ParamLimits

0x3d2e,	// (0x000108f9) popup_snote_single_graphic_window_t4

0x3d62,	// (0x0001092d) popup_snote_single_graphic_window_t5_ParamLimits

0x3d62,	// (0x0001092d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001c15c) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001c15c) popup_snote_single_graphic_window_t

0xa9ef,	// (0x000175ba) grid_graphic_popup_pane_ParamLimits

0xa9ef,	// (0x000175ba) grid_graphic_popup_pane

0xaa1d,	// (0x000175e8) listscroll_popup_graphic_pane_g1_ParamLimits

0xaa1d,	// (0x000175e8) listscroll_popup_graphic_pane_g1

0xaa31,	// (0x000175fc) listscroll_popup_graphic_pane_g2_ParamLimits

0xaa31,	// (0x000175fc) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0001c551) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0001c551) listscroll_popup_graphic_pane_g

0xaa45,	// (0x00017610) scroll_pane_cp5

0xa987,	// (0x00017552) cell_graphic_popup_pane_ParamLimits

0xa987,	// (0x00017552) cell_graphic_popup_pane

0xa968,	// (0x00017533) cell_graphic_popup_pane_g1

0xa970,	// (0x0001753b) cell_graphic_popup_pane_g2

0x3bb5,	// (0x00010780) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x0001c54a) cell_graphic_popup_pane_g

0xa979,	// (0x00017544) cell_graphic_popup_pane_t2

0x3bbe,	// (0x00010789) grid_highlight_pane_cp3

0x3da3,	// (0x0001096e) list_gen_pane_ParamLimits

0x3da3,	// (0x0001096e) list_gen_pane

0x3dcb,	// (0x00010996) scroll_pane

0xa8c0,	// (0x0001748b) bg_list_pane_g1_ParamLimits

0xa8c0,	// (0x0001748b) bg_list_pane_g1

0xa8dd,	// (0x000174a8) bg_list_pane_g2_ParamLimits

0xa8dd,	// (0x000174a8) bg_list_pane_g2

0xa8f2,	// (0x000174bd) bg_list_pane_g3_ParamLimits

0xa8f2,	// (0x000174bd) bg_list_pane_g3

0xa906,	// (0x000174d1) bg_list_pane_g4_ParamLimits

0xa906,	// (0x000174d1) bg_list_pane_g4

0xa91a,	// (0x000174e5) bg_list_pane_g5_ParamLimits

0xa91a,	// (0x000174e5) bg_list_pane_g5

0x0004,

0xf974,	// (0x0001c53f) bg_list_pane_g_ParamLimits

0xf974,	// (0x0001c53f) bg_list_pane_g

0xa7e6,	// (0x000173b1) list_double2_graphic_large_graphic_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_double2_graphic_large_graphic_pane

0xa7e6,	// (0x000173b1) list_double2_graphic_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_double2_graphic_pane

0xa7e6,	// (0x000173b1) list_double2_large_graphic_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_double2_large_graphic_pane

0xa7e6,	// (0x000173b1) list_double2_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_double2_pane

0xa7e6,	// (0x000173b1) list_double_graphic_heading_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_double_graphic_heading_pane

0xa7e6,	// (0x000173b1) list_double_graphic_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_double_graphic_pane

0xa7e6,	// (0x000173b1) list_double_heading_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_double_heading_pane

0xa7e6,	// (0x000173b1) list_double_large_graphic_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_double_large_graphic_pane

0xa7e6,	// (0x000173b1) list_double_number_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_double_number_pane

0xa7e6,	// (0x000173b1) list_double_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_double_pane

0xa7e6,	// (0x000173b1) list_double_time_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_double_time_pane

0xa7e6,	// (0x000173b1) list_setting_number_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_setting_number_pane

0xa7e6,	// (0x000173b1) list_setting_pane_ParamLimits

0xa7e6,	// (0x000173b1) list_setting_pane

0xa84a,	// (0x00017415) list_single_2graphic_pane_ParamLimits

0xa84a,	// (0x00017415) list_single_2graphic_pane

0xa84a,	// (0x00017415) list_single_graphic_heading_pane_ParamLimits

0xa84a,	// (0x00017415) list_single_graphic_heading_pane

0xa84a,	// (0x00017415) list_single_graphic_pane_ParamLimits

0xa84a,	// (0x00017415) list_single_graphic_pane

0xa84a,	// (0x00017415) list_single_heading_pane_ParamLimits

0xa84a,	// (0x00017415) list_single_heading_pane

0xa8a5,	// (0x00017470) list_single_large_graphic_pane_ParamLimits

0xa8a5,	// (0x00017470) list_single_large_graphic_pane

0xa84a,	// (0x00017415) list_single_number_heading_pane_ParamLimits

0xa84a,	// (0x00017415) list_single_number_heading_pane

0xa84a,	// (0x00017415) list_single_number_pane_ParamLimits

0xa84a,	// (0x00017415) list_single_number_pane

0xa84a,	// (0x00017415) list_single_pane_ParamLimits

0xa84a,	// (0x00017415) list_single_pane

0x36b9,	// (0x00010284) list_highlight_pane_cp1

0x7868,	// (0x00014433) list_single_pane_g1_ParamLimits

0x7868,	// (0x00014433) list_single_pane_g1

0x7874,	// (0x0001443f) list_single_pane_g2_ParamLimits

0x7874,	// (0x0001443f) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001c16e) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001c16e) list_single_pane_g

0xa79f,	// (0x0001736a) list_single_pane_t1_ParamLimits

0xa79f,	// (0x0001736a) list_single_pane_t1

0x7868,	// (0x00014433) list_single_number_pane_g1_ParamLimits

0x7868,	// (0x00014433) list_single_number_pane_g1

0x7874,	// (0x0001443f) list_single_number_pane_g2_ParamLimits

0x7874,	// (0x0001443f) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001c16e) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001c16e) list_single_number_pane_g

0xa50d,	// (0x000170d8) list_single_number_pane_t1_ParamLimits

0xa50d,	// (0x000170d8) list_single_number_pane_t1

0xa523,	// (0x000170ee) list_single_number_pane_t2_ParamLimits

0xa523,	// (0x000170ee) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0001c500) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0001c500) list_single_number_pane_t

0x785c,	// (0x00014427) list_single_graphic_pane_g1_ParamLimits

0x785c,	// (0x00014427) list_single_graphic_pane_g1

0x7868,	// (0x00014433) list_single_graphic_pane_g2_ParamLimits

0x7868,	// (0x00014433) list_single_graphic_pane_g2

0x7874,	// (0x0001443f) list_single_graphic_pane_g3_ParamLimits

0x7874,	// (0x0001443f) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001c167) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001c167) list_single_graphic_pane_g

0x7880,	// (0x0001444b) list_single_graphic_pane_t1_ParamLimits

0x7880,	// (0x0001444b) list_single_graphic_pane_t1

0x7868,	// (0x00014433) list_single_heading_pane_g1_ParamLimits

0x7868,	// (0x00014433) list_single_heading_pane_g1

0x7874,	// (0x0001443f) list_single_heading_pane_g2_ParamLimits

0x7874,	// (0x0001443f) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001c16e) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001c16e) list_single_heading_pane_g

0x7896,	// (0x00014461) list_single_heading_pane_t1_ParamLimits

0x7896,	// (0x00014461) list_single_heading_pane_t1

0x78ac,	// (0x00014477) list_single_heading_pane_t2_ParamLimits

0x78ac,	// (0x00014477) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001c173) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001c173) list_single_heading_pane_t

0x7868,	// (0x00014433) list_single_number_heading_pane_g1_ParamLimits

0x7868,	// (0x00014433) list_single_number_heading_pane_g1

0x7874,	// (0x0001443f) list_single_number_heading_pane_g2_ParamLimits

0x7874,	// (0x0001443f) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001c16e) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001c16e) list_single_number_heading_pane_g

0x7896,	// (0x00014461) list_single_number_heading_pane_t1_ParamLimits

0x7896,	// (0x00014461) list_single_number_heading_pane_t1

0x78be,	// (0x00014489) list_single_number_heading_pane_t2_ParamLimits

0x78be,	// (0x00014489) list_single_number_heading_pane_t2

0x78d0,	// (0x0001449b) list_single_number_heading_pane_t3_ParamLimits

0x78d0,	// (0x0001449b) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001c178) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001c178) list_single_number_heading_pane_t

0x78e2,	// (0x000144ad) list_single_graphic_heading_pane_g1_ParamLimits

0x78e2,	// (0x000144ad) list_single_graphic_heading_pane_g1

0x78ee,	// (0x000144b9) list_single_graphic_heading_pane_g4_ParamLimits

0x78ee,	// (0x000144b9) list_single_graphic_heading_pane_g4

0x7874,	// (0x0001443f) list_single_graphic_heading_pane_g5_ParamLimits

0x7874,	// (0x0001443f) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001c17f) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001c17f) list_single_graphic_heading_pane_g

0x7896,	// (0x00014461) list_single_graphic_heading_pane_t1_ParamLimits

0x7896,	// (0x00014461) list_single_graphic_heading_pane_t1

0x78ff,	// (0x000144ca) list_single_graphic_heading_pane_t2_ParamLimits

0x78ff,	// (0x000144ca) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001c186) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001c186) list_single_graphic_heading_pane_t

0x7911,	// (0x000144dc) list_single_large_graphic_pane_g1_ParamLimits

0x7911,	// (0x000144dc) list_single_large_graphic_pane_g1

0x7868,	// (0x00014433) list_single_large_graphic_pane_g2_ParamLimits

0x7868,	// (0x00014433) list_single_large_graphic_pane_g2

0x7874,	// (0x0001443f) list_single_large_graphic_pane_g3_ParamLimits

0x7874,	// (0x0001443f) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001c18b) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001c18b) list_single_large_graphic_pane_g

0x97cd,	// (0x00016398) wait_border_pane_g2_copy1

0x791d,	// (0x000144e8) list_single_large_graphic_pane_g4_cp2

0x7925,	// (0x000144f0) list_single_large_graphic_pane_t1_ParamLimits

0x7925,	// (0x000144f0) list_single_large_graphic_pane_t1

0x3e20,	// (0x000109eb) list_double_pane_g1_ParamLimits

0x3e20,	// (0x000109eb) list_double_pane_g1

0x793b,	// (0x00014506) list_double_pane_g2_ParamLimits

0x793b,	// (0x00014506) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001c192) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001c192) list_double_pane_g

0x7947,	// (0x00014512) list_double_pane_t1_ParamLimits

0x7947,	// (0x00014512) list_double_pane_t1

0x795d,	// (0x00014528) list_double_pane_t2_ParamLimits

0x795d,	// (0x00014528) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001c197) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001c197) list_double_pane_t

0x796f,	// (0x0001453a) list_double2_pane_g1_ParamLimits

0x796f,	// (0x0001453a) list_double2_pane_g1

0x7980,	// (0x0001454b) list_double2_pane_g2_ParamLimits

0x7980,	// (0x0001454b) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001c19c) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001c19c) list_double2_pane_g

0x798c,	// (0x00014557) list_double2_pane_t1_ParamLimits

0x798c,	// (0x00014557) list_double2_pane_t1

0x79a2,	// (0x0001456d) list_double2_pane_t2_ParamLimits

0x79a2,	// (0x0001456d) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001c1a1) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001c1a1) list_double2_pane_t

0x3e20,	// (0x000109eb) list_double_number_pane_g1_ParamLimits

0x3e20,	// (0x000109eb) list_double_number_pane_g1

0x793b,	// (0x00014506) list_double_number_pane_g2_ParamLimits

0x793b,	// (0x00014506) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001c192) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001c192) list_double_number_pane_g

0x79b4,	// (0x0001457f) list_double_number_pane_t1_ParamLimits

0x79b4,	// (0x0001457f) list_double_number_pane_t1

0x79c6,	// (0x00014591) list_double_number_pane_t2_ParamLimits

0x79c6,	// (0x00014591) list_double_number_pane_t2

0x79dc,	// (0x000145a7) list_double_number_pane_t3_ParamLimits

0x79dc,	// (0x000145a7) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001c1a6) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001c1a6) list_double_number_pane_t

0x79ee,	// (0x000145b9) list_double_graphic_pane_g1_ParamLimits

0x79ee,	// (0x000145b9) list_double_graphic_pane_g1

0x79fa,	// (0x000145c5) list_double_graphic_pane_g2_ParamLimits

0x79fa,	// (0x000145c5) list_double_graphic_pane_g2

0x7a09,	// (0x000145d4) list_double_graphic_pane_g3_ParamLimits

0x7a09,	// (0x000145d4) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001c1ad) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001c1ad) list_double_graphic_pane_g

0x7a21,	// (0x000145ec) list_double_graphic_pane_t1_ParamLimits

0x7a21,	// (0x000145ec) list_double_graphic_pane_t1

0x7a37,	// (0x00014602) list_double_graphic_pane_t2_ParamLimits

0x7a37,	// (0x00014602) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001c1b6) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001c1b6) list_double_graphic_pane_t

0x7a49,	// (0x00014614) list_double2_graphic_pane_g1_ParamLimits

0x7a49,	// (0x00014614) list_double2_graphic_pane_g1

0x7a55,	// (0x00014620) list_double2_graphic_pane_g2_ParamLimits

0x7a55,	// (0x00014620) list_double2_graphic_pane_g2

0x7980,	// (0x0001454b) list_double2_graphic_pane_g3_ParamLimits

0x7980,	// (0x0001454b) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001c1bb) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001c1bb) list_double2_graphic_pane_g

0x7a61,	// (0x0001462c) list_double2_graphic_pane_t1_ParamLimits

0x7a61,	// (0x0001462c) list_double2_graphic_pane_t1

0x7a77,	// (0x00014642) list_double2_graphic_pane_t2_ParamLimits

0x7a77,	// (0x00014642) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001c1c2) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001c1c2) list_double2_graphic_pane_t

0x7a89,	// (0x00014654) list_double_large_graphic_pane_g1_ParamLimits

0x7a89,	// (0x00014654) list_double_large_graphic_pane_g1

0x7aa8,	// (0x00014673) list_double_large_graphic_pane_g2_ParamLimits

0x7aa8,	// (0x00014673) list_double_large_graphic_pane_g2

0x793b,	// (0x00014506) list_double_large_graphic_pane_g3_ParamLimits

0x793b,	// (0x00014506) list_double_large_graphic_pane_g3

0x7ab9,	// (0x00014684) list_double_large_graphic_pane_g4_ParamLimits

0x7ab9,	// (0x00014684) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001c1c7) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001c1c7) list_double_large_graphic_pane_g

0x7acc,	// (0x00014697) list_double_large_graphic_pane_t1_ParamLimits

0x7acc,	// (0x00014697) list_double_large_graphic_pane_t1

0x7ae5,	// (0x000146b0) list_double_large_graphic_pane_t2_ParamLimits

0x7ae5,	// (0x000146b0) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001c1d2) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001c1d2) list_double_large_graphic_pane_t

0x7af7,	// (0x000146c2) list_double2_large_graphic_pane_g1_ParamLimits

0x7af7,	// (0x000146c2) list_double2_large_graphic_pane_g1

0x796f,	// (0x0001453a) list_double2_large_graphic_pane_g2_ParamLimits

0x796f,	// (0x0001453a) list_double2_large_graphic_pane_g2

0x7980,	// (0x0001454b) list_double2_large_graphic_pane_g3_ParamLimits

0x7980,	// (0x0001454b) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001c1d7) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001c1d7) list_double2_large_graphic_pane_g

0x7b03,	// (0x000146ce) list_double2_large_graphic_pane_t1_ParamLimits

0x7b03,	// (0x000146ce) list_double2_large_graphic_pane_t1

0x7b19,	// (0x000146e4) list_double2_large_graphic_pane_t2_ParamLimits

0x7b19,	// (0x000146e4) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001c1de) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001c1de) list_double2_large_graphic_pane_t

0x7b2b,	// (0x000146f6) list_double_heading_pane_g1_ParamLimits

0x7b2b,	// (0x000146f6) list_double_heading_pane_g1

0x7b3c,	// (0x00014707) list_double_heading_pane_g2_ParamLimits

0x7b3c,	// (0x00014707) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001c1e3) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001c1e3) list_double_heading_pane_g

0x7b48,	// (0x00014713) list_double_heading_pane_t1_ParamLimits

0x7b48,	// (0x00014713) list_double_heading_pane_t1

0x7b5e,	// (0x00014729) list_double_heading_pane_t2_ParamLimits

0x7b5e,	// (0x00014729) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001c1e8) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001c1e8) list_double_heading_pane_t

0x3dff,	// (0x000109ca) list_double_graphic_heading_pane_g1_ParamLimits

0x3dff,	// (0x000109ca) list_double_graphic_heading_pane_g1

0x7b2b,	// (0x000146f6) list_double_graphic_heading_pane_g2_ParamLimits

0x7b2b,	// (0x000146f6) list_double_graphic_heading_pane_g2

0x7b3c,	// (0x00014707) list_double_graphic_heading_pane_g3_ParamLimits

0x7b3c,	// (0x00014707) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001c1ed) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001c1ed) list_double_graphic_heading_pane_g

0x7b70,	// (0x0001473b) list_double_graphic_heading_pane_t1_ParamLimits

0x7b70,	// (0x0001473b) list_double_graphic_heading_pane_t1

0x7b86,	// (0x00014751) list_double_graphic_heading_pane_t2_ParamLimits

0x7b86,	// (0x00014751) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001c1f4) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001c1f4) list_double_graphic_heading_pane_t

0x7aa8,	// (0x00014673) list_double_time_pane_g1_ParamLimits

0x7aa8,	// (0x00014673) list_double_time_pane_g1

0x793b,	// (0x00014506) list_double_time_pane_g2_ParamLimits

0x793b,	// (0x00014506) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001c1f9) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001c1f9) list_double_time_pane_g

0x7b98,	// (0x00014763) list_double_time_pane_t1_ParamLimits

0x7b98,	// (0x00014763) list_double_time_pane_t1

0x7bae,	// (0x00014779) list_double_time_pane_t2_ParamLimits

0x7bae,	// (0x00014779) list_double_time_pane_t2

0x7bc0,	// (0x0001478b) list_double_time_pane_t3_ParamLimits

0x7bc0,	// (0x0001478b) list_double_time_pane_t3

0x7bd2,	// (0x0001479d) list_double_time_pane_t4_ParamLimits

0x7bd2,	// (0x0001479d) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001c1fe) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001c1fe) list_double_time_pane_t

0x7a55,	// (0x00014620) list_setting_pane_g1_ParamLimits

0x7a55,	// (0x00014620) list_setting_pane_g1

0x7980,	// (0x0001454b) list_setting_pane_g2_ParamLimits

0x7980,	// (0x0001454b) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001c207) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001c207) list_setting_pane_g

0x7be4,	// (0x000147af) list_setting_pane_t1_ParamLimits

0x7be4,	// (0x000147af) list_setting_pane_t1

0x7bfb,	// (0x000147c6) list_setting_pane_t2_ParamLimits

0x7bfb,	// (0x000147c6) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001c20c) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001c20c) list_setting_pane_t

0x7c3a,	// (0x00014805) set_value_pane_cp_ParamLimits

0x7c3a,	// (0x00014805) set_value_pane_cp

0x7a55,	// (0x00014620) list_setting_number_pane_g1_ParamLimits

0x7a55,	// (0x00014620) list_setting_number_pane_g1

0x7980,	// (0x0001454b) list_setting_number_pane_g2_ParamLimits

0x7980,	// (0x0001454b) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001c207) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001c207) list_setting_number_pane_g

0x7c48,	// (0x00014813) list_setting_number_pane_t1_ParamLimits

0x7c48,	// (0x00014813) list_setting_number_pane_t1

0x7c5c,	// (0x00014827) list_setting_number_pane_t2_ParamLimits

0x7c5c,	// (0x00014827) list_setting_number_pane_t2

0x7c73,	// (0x0001483e) list_setting_number_pane_t3_ParamLimits

0x7c73,	// (0x0001483e) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001c213) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001c213) list_setting_number_pane_t

0x7c3a,	// (0x00014805) set_value_pane_ParamLimits

0x7c3a,	// (0x00014805) set_value_pane

0x3e2c,	// (0x000109f7) bg_set_opt_pane_ParamLimits

0x3e2c,	// (0x000109f7) bg_set_opt_pane

0x3e4d,	// (0x00010a18) set_value_pane_t1

0x3e5b,	// (0x00010a26) slider_set_pane_cp3

0x3e64,	// (0x00010a2f) volume_small_pane_cp

0x3e6d,	// (0x00010a38) list_form_gen_pane

0x3e76,	// (0x00010a41) scroll_pane_cp8

0x7cb6,	// (0x00014881) form_field_data_pane_ParamLimits

0x7cb6,	// (0x00014881) form_field_data_pane

0x7cd4,	// (0x0001489f) form_field_data_wide_pane_ParamLimits

0x7cd4,	// (0x0001489f) form_field_data_wide_pane

0x3e97,	// (0x00010a62) form_field_popup_pane_ParamLimits

0x3e97,	// (0x00010a62) form_field_popup_pane

0x7cfb,	// (0x000148c6) form_field_popup_wide_pane_ParamLimits

0x7cfb,	// (0x000148c6) form_field_popup_wide_pane

0x3eb9,	// (0x00010a84) form_field_slider_pane_ParamLimits

0x3eb9,	// (0x00010a84) form_field_slider_pane

0x3ecc,	// (0x00010a97) form_field_slider_wide_pane_ParamLimits

0x3ecc,	// (0x00010a97) form_field_slider_wide_pane

0x3edf,	// (0x00010aaa) data_form_pane

0x7d26,	// (0x000148f1) form_field_data_pane_t1

0x3eeb,	// (0x00010ab6) input_focus_pane

0x3ef9,	// (0x00010ac4) data_form_wide_pane

0x3f31,	// (0x00010afc) form_field_data_wide_pane_t1

0x3bd3,	// (0x0001079e) input_focus_pane_cp6

0x7d40,	// (0x0001490b) form_field_popup_pane_t1

0x3eeb,	// (0x00010ab6) input_focus_pane_cp7

0x3f50,	// (0x00010b1b) list_form_pane

0x3f64,	// (0x00010b2f) form_field_popup_wide_pane_t1

0x3eeb,	// (0x00010ab6) input_focus_pane_cp8

0x3f76,	// (0x00010b41) list_form_wide_pane

0x7d62,	// (0x0001492d) form_field_slider_pane_t1_ParamLimits

0x7d62,	// (0x0001492d) form_field_slider_pane_t1

0x7d76,	// (0x00014941) form_field_slider_pane_t2_ParamLimits

0x7d76,	// (0x00014941) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001c223) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001c223) form_field_slider_pane_t

0x375b,	// (0x00010326) input_focus_pane_cp9_ParamLimits

0x375b,	// (0x00010326) input_focus_pane_cp9

0x7d88,	// (0x00014953) slider_cont_pane_ParamLimits

0x7d88,	// (0x00014953) slider_cont_pane

0x3f82,	// (0x00010b4d) form_field_slider_wide_pane_t1_ParamLimits

0x3f82,	// (0x00010b4d) form_field_slider_wide_pane_t1

0x3f94,	// (0x00010b5f) form_field_slider_wide_pane_t2_ParamLimits

0x3f94,	// (0x00010b5f) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001c228) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001c228) form_field_slider_wide_pane_t

0x375b,	// (0x00010326) input_focus_pane_cp10_ParamLimits

0x375b,	// (0x00010326) input_focus_pane_cp10

0x7d9c,	// (0x00014967) slider_cont_pane_cp1_ParamLimits

0x7d9c,	// (0x00014967) slider_cont_pane_cp1

0x7db0,	// (0x0001497b) slider_form_pane_cp

0x3fa6,	// (0x00010b71) input_focus_pane_g1

0x3fae,	// (0x00010b79) input_focus_pane_g2

0x3fb6,	// (0x00010b81) input_focus_pane_g3

0x3fbe,	// (0x00010b89) input_focus_pane_g4

0x3fc6,	// (0x00010b91) input_focus_pane_g5

0x3fce,	// (0x00010b99) input_focus_pane_g6

0x3fd6,	// (0x00010ba1) input_focus_pane_g7

0x3fde,	// (0x00010ba9) input_focus_pane_g8

0x3fe6,	// (0x00010bb1) input_focus_pane_g9

0x3540,	// (0x0001010b) input_focus_pane_g10

0x0009,

0xf662,	// (0x0001c22d) input_focus_pane_g

0x97d6,	// (0x000163a1) wait_border_pane_g3_copy1

0x7db8,	// (0x00014983) data_form_pane_t1

0x3540,	// (0x0001010b) wait_anim_pane_g1_copy1

0xa780,	// (0x0001734b) data_form_wide_pane_t1

0x7dd7,	// (0x000149a2) list_form_graphic_pane_cp_ParamLimits

0x7dd7,	// (0x000149a2) list_form_graphic_pane_cp

0xa755,	// (0x00017320) slider_form_pane_g1

0xa75e,	// (0x00017329) slider_form_pane_g2

0x0006,

0xf965,	// (0x0001c530) slider_form_pane_g

0x3fee,	// (0x00010bb9) list_form_graphic_pane_ParamLimits

0x3fee,	// (0x00010bb9) list_form_graphic_pane

0x4000,	// (0x00010bcb) list_form_graphic_pane_g1

0x4008,	// (0x00010bd3) list_form_graphic_pane_t1_ParamLimits

0x4008,	// (0x00010bd3) list_form_graphic_pane_t1

0x3773,	// (0x0001033e) list_highlight_pane_cp5_ParamLimits

0x3773,	// (0x0001033e) list_highlight_pane_cp5

0x7dec,	// (0x000149b7) find_pane_g1

0x401d,	// (0x00010be8) input_find_pane

0x7df5,	// (0x000149c0) input_find_pane_g1_ParamLimits

0x7df5,	// (0x000149c0) input_find_pane_g1

0x7e01,	// (0x000149cc) input_find_pane_t1_ParamLimits

0x7e01,	// (0x000149cc) input_find_pane_t1

0x7e16,	// (0x000149e1) input_find_pane_t2_ParamLimits

0x7e16,	// (0x000149e1) input_find_pane_t2

0x0001,

0xf677,	// (0x0001c242) input_find_pane_t_ParamLimits

0xf677,	// (0x0001c242) input_find_pane_t

0x4026,	// (0x00010bf1) input_focus_pane_cp5_ParamLimits

0x4026,	// (0x00010bf1) input_focus_pane_cp5

0x4039,	// (0x00010c04) bg_popup_window_pane_cp2_ParamLimits

0x4039,	// (0x00010c04) bg_popup_window_pane_cp2

0x4046,	// (0x00010c11) listscroll_menu_pane_ParamLimits

0x4046,	// (0x00010c11) listscroll_menu_pane

0x7e37,	// (0x00014a02) popup_submenu_window_ParamLimits

0x7e37,	// (0x00014a02) popup_submenu_window

0x4052,	// (0x00010c1d) find_popup_pane_g1

0x405a,	// (0x00010c25) input_popup_find_pane_cp

0x4064,	// (0x00010c2f) input_focus_pane_cp4_ParamLimits

0x4064,	// (0x00010c2f) input_focus_pane_cp4

0x4072,	// (0x00010c3d) input_popup_find_pane_t1_ParamLimits

0x4072,	// (0x00010c3d) input_popup_find_pane_t1

0x36b9,	// (0x00010284) bg_popup_sub_pane_cp

0x40a0,	// (0x00010c6b) listscroll_popup_sub_pane

0x40a8,	// (0x00010c73) list_submenu_pane_ParamLimits

0x40a8,	// (0x00010c73) list_submenu_pane

0x40b9,	// (0x00010c84) scroll_pane_cp4

0x40c1,	// (0x00010c8c) list_single_popup_submenu_pane_ParamLimits

0x40c1,	// (0x00010c8c) list_single_popup_submenu_pane

0x40d6,	// (0x00010ca1) list_single_popup_submenu_pane_g1

0x40de,	// (0x00010ca9) list_single_popup_submenu_pane_t1_ParamLimits

0x40de,	// (0x00010ca9) list_single_popup_submenu_pane_t1

0x3773,	// (0x0001033e) bg_active_tab_pane_cp1_ParamLimits

0x3773,	// (0x0001033e) bg_active_tab_pane_cp1

0x7e75,	// (0x00014a40) tabs_2_active_pane_g1

0x7e7d,	// (0x00014a48) tabs_2_active_pane_t1

0x3773,	// (0x0001033e) bg_passive_tab_pane_cp1_ParamLimits

0x3773,	// (0x0001033e) bg_passive_tab_pane_cp1

0x7e75,	// (0x00014a40) tabs_2_passive_pane_g1

0x7e7d,	// (0x00014a48) tabs_2_passive_pane_t1

0x7e8f,	// (0x00014a5a) bg_active_tab_pane_cp4

0x7e9d,	// (0x00014a68) tabs_2_long_active_pane_t1

0x7eb0,	// (0x00014a7b) bg_passive_tab_pane_cp4

0x5fb5,	// (0x00012b80) list_single_midp_graphic_pane_g4_ParamLimits

0x7e8f,	// (0x00014a5a) bg_active_tab_pane_cp5

0x7ebc,	// (0x00014a87) tabs_3_long_active_pane_t1

0x7eb0,	// (0x00014a7b) bg_passive_tab_pane_cp5

0x5fb5,	// (0x00012b80) list_single_midp_graphic_pane_g4

0x3773,	// (0x0001033e) bg_popup_window_pane_cp13_ParamLimits

0x3773,	// (0x0001033e) bg_popup_window_pane_cp13

0x40fc,	// (0x00010cc7) listscroll_popup_fast_pane_ParamLimits

0x40fc,	// (0x00010cc7) listscroll_popup_fast_pane

0x410b,	// (0x00010cd6) grid_popup_fast_pane_ParamLimits

0x410b,	// (0x00010cd6) grid_popup_fast_pane

0x411d,	// (0x00010ce8) scroll_pane_cp9_ParamLimits

0x411d,	// (0x00010ce8) scroll_pane_cp9

0xc6c5,	// (0x00019290) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6c5,	// (0x00019290) list_single_graphic_hl_pane_t1_cp2

0x4141,	// (0x00010d0c) input_focus_pane_cp20_ParamLimits

0x4141,	// (0x00010d0c) input_focus_pane_cp20

0x414f,	// (0x00010d1a) query_popup_data_pane_t1_ParamLimits

0x414f,	// (0x00010d1a) query_popup_data_pane_t1

0x4162,	// (0x00010d2d) query_popup_data_pane_t2_ParamLimits

0x4162,	// (0x00010d2d) query_popup_data_pane_t2

0x41a8,	// (0x00010d73) query_popup_data_pane_t3_ParamLimits

0x41a8,	// (0x00010d73) query_popup_data_pane_t3

0x41e9,	// (0x00010db4) query_popup_data_pane_t4_ParamLimits

0x41e9,	// (0x00010db4) query_popup_data_pane_t4

0x4225,	// (0x00010df0) query_popup_data_pane_t5_ParamLimits

0x4225,	// (0x00010df0) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001c247) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001c247) query_popup_data_pane_t

0x3fa6,	// (0x00010b71) bg_set_opt_pane_g1

0x3fae,	// (0x00010b79) bg_set_opt_pane_g2

0x3fb6,	// (0x00010b81) bg_set_opt_pane_g3

0x3fbe,	// (0x00010b89) bg_set_opt_pane_g4

0x3fc6,	// (0x00010b91) bg_set_opt_pane_g5

0x3fce,	// (0x00010b99) bg_set_opt_pane_g6

0x3fd6,	// (0x00010ba1) bg_set_opt_pane_g7

0x3fde,	// (0x00010ba9) bg_set_opt_pane_g8

0x3fe6,	// (0x00010bb1) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0001c252) bg_set_opt_pane_g

0x5568,	// (0x00012133) control_top_pane_stacon_ParamLimits

0x5568,	// (0x00012133) control_top_pane_stacon

0x55bb,	// (0x00012186) signal_pane_stacon_ParamLimits

0x55bb,	// (0x00012186) signal_pane_stacon

0x84db,	// (0x000150a6) stacon_top_pane_g1_ParamLimits

0x84db,	// (0x000150a6) stacon_top_pane_g1

0x55e0,	// (0x000121ab) title_pane_stacon_ParamLimits

0x55e0,	// (0x000121ab) title_pane_stacon

0x560a,	// (0x000121d5) uni_indicator_pane_stacon_ParamLimits

0x560a,	// (0x000121d5) uni_indicator_pane_stacon

0x561f,	// (0x000121ea) battery_pane_stacon_ParamLimits

0x561f,	// (0x000121ea) battery_pane_stacon

0x5663,	// (0x0001222e) control_bottom_pane_stacon_ParamLimits

0x5663,	// (0x0001222e) control_bottom_pane_stacon

0x5686,	// (0x00012251) navi_pane_stacon_ParamLimits

0x5686,	// (0x00012251) navi_pane_stacon

0x84fd,	// (0x000150c8) stacon_bottom_pane_g1_ParamLimits

0x84fd,	// (0x000150c8) stacon_bottom_pane_g1

0x52be,	// (0x00011e89) aid_levels_signal_lsc_ParamLimits

0x52be,	// (0x00011e89) aid_levels_signal_lsc

0x52d5,	// (0x00011ea0) signal_pane_stacon_g1_ParamLimits

0x52d5,	// (0x00011ea0) signal_pane_stacon_g1

0x52e9,	// (0x00011eb4) signal_pane_stacon_g2_ParamLimits

0x52e9,	// (0x00011eb4) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0001c265) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0001c265) signal_pane_stacon_g

0x531e,	// (0x00011ee9) title_pane_stacon_t1_ParamLimits

0x531e,	// (0x00011ee9) title_pane_stacon_t1

0x4302,	// (0x00010ecd) uni_indicator_pane_stacon_g1

0x430c,	// (0x00010ed7) uni_indicator_pane_stacon_g2

0x42ee,	// (0x00010eb9) uni_indicator_pane_stacon_g3

0x42f8,	// (0x00010ec3) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0001c271) uni_indicator_pane_stacon_g

0x5343,	// (0x00011f0e) control_top_pane_stacon_g1

0x534b,	// (0x00011f16) control_top_pane_stacon_t1_ParamLimits

0x534b,	// (0x00011f16) control_top_pane_stacon_t1

0x5382,	// (0x00011f4d) aid_levels_battery_lsc_ParamLimits

0x5382,	// (0x00011f4d) aid_levels_battery_lsc

0x539a,	// (0x00011f65) battery_pane_stacon_g1_ParamLimits

0x539a,	// (0x00011f65) battery_pane_stacon_g1

0x53ac,	// (0x00011f77) battery_pane_stacon_g2_ParamLimits

0x53ac,	// (0x00011f77) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0001c27a) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0001c27a) battery_pane_stacon_g

0x53ea,	// (0x00011fb5) navi_icon_pane_stacon

0x53fe,	// (0x00011fc9) navi_navi_pane_stacon

0x53ea,	// (0x00011fb5) navi_text_pane_stacon

0x5414,	// (0x00011fdf) control_bottom_pane_stacon_g1

0x541c,	// (0x00011fe7) control_bottom_pane_stacon_t1_ParamLimits

0x541c,	// (0x00011fe7) control_bottom_pane_stacon_t1

0x7ece,	// (0x00014a99) grid_app_pane_ParamLimits

0x7ece,	// (0x00014a99) grid_app_pane

0x7ef0,	// (0x00014abb) scroll_pane_cp15_ParamLimits

0x7ef0,	// (0x00014abb) scroll_pane_cp15

0x7f03,	// (0x00014ace) cell_app_pane_ParamLimits

0x7f03,	// (0x00014ace) cell_app_pane

0x7f2f,	// (0x00014afa) cell_app_pane_g1_ParamLimits

0x7f2f,	// (0x00014afa) cell_app_pane_g1

0x7f53,	// (0x00014b1e) cell_app_pane_g2_ParamLimits

0x7f53,	// (0x00014b1e) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0001c27f) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0001c27f) cell_app_pane_g

0x7f5f,	// (0x00014b2a) cell_app_pane_t1_ParamLimits

0x7f5f,	// (0x00014b2a) cell_app_pane_t1

0x7f90,	// (0x00014b5b) grid_highlight_pane_ParamLimits

0x7f90,	// (0x00014b5b) grid_highlight_pane

0x3fa6,	// (0x00010b71) cell_highlight_pane_g1

0x3fae,	// (0x00010b79) cell_highlight_pane_g2

0x3fb6,	// (0x00010b81) cell_highlight_pane_g3

0x3fbe,	// (0x00010b89) cell_highlight_pane_g4

0x3fc6,	// (0x00010b91) cell_highlight_pane_g5

0x3fce,	// (0x00010b99) cell_highlight_pane_g6

0x3fd6,	// (0x00010ba1) cell_highlight_pane_g7

0x3fde,	// (0x00010ba9) cell_highlight_pane_g8

0x3fe6,	// (0x00010bb1) cell_highlight_pane_g9

0x3540,	// (0x0001010b) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0001c22d) cell_highlight_pane_g

0x7fa1,	// (0x00014b6c) bg_scroll_pane

0x5466,	// (0x00012031) scroll_handle_pane

0x7fe8,	// (0x00014bb3) scroll_bg_pane_g1

0x7ffd,	// (0x00014bc8) scroll_bg_pane_g2

0x8015,	// (0x00014be0) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0001c284) scroll_bg_pane_g

0x802a,	// (0x00014bf5) scroll_handle_focus_pane_ParamLimits

0x802a,	// (0x00014bf5) scroll_handle_focus_pane

0x7fe8,	// (0x00014bb3) scroll_handle_pane_g1

0x8037,	// (0x00014c02) scroll_handle_pane_g2

0x8015,	// (0x00014be0) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0001c28b) scroll_handle_pane_g

0x4064,	// (0x00010c2f) bg_popup_sub_pane_cp21_ParamLimits

0x4064,	// (0x00010c2f) bg_popup_sub_pane_cp21

0x804b,	// (0x00014c16) popup_fep_japan_predictive_window_t1_ParamLimits

0x804b,	// (0x00014c16) popup_fep_japan_predictive_window_t1

0x8062,	// (0x00014c2d) popup_fep_japan_predictive_window_t2_ParamLimits

0x8062,	// (0x00014c2d) popup_fep_japan_predictive_window_t2

0x8095,	// (0x00014c60) popup_fep_japan_predictive_window_t3_ParamLimits

0x8095,	// (0x00014c60) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0001c292) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0001c292) popup_fep_japan_predictive_window_t

0x36b9,	// (0x00010284) bg_popup_sub_pane_cp23

0x80cc,	// (0x00014c97) listscroll_japin_cand_pane

0x80d4,	// (0x00014c9f) popup_fep_japan_candidate_window_t1

0x80e2,	// (0x00014cad) candidate_pane_ParamLimits

0x80e2,	// (0x00014cad) candidate_pane

0x80f4,	// (0x00014cbf) scroll_pane_cp30

0x80fe,	// (0x00014cc9) list_single_popup_jap_candidate_pane_ParamLimits

0x80fe,	// (0x00014cc9) list_single_popup_jap_candidate_pane

0x36b9,	// (0x00010284) list_highlight_pane_cp30

0x8112,	// (0x00014cdd) list_single_popup_jap_candidate_pane_t1

0x8121,	// (0x00014cec) level_1_signal

0x812e,	// (0x00014cf9) level_2_signal

0x813b,	// (0x00014d06) level_3_signal

0x8148,	// (0x00014d13) level_4_signal

0x8155,	// (0x00014d20) level_5_signal

0x8162,	// (0x00014d2d) level_6_signal

0x816f,	// (0x00014d3a) level_7_signal

0x8121,	// (0x00014cec) level_1_battery

0x812e,	// (0x00014cf9) level_2_battery

0x813b,	// (0x00014d06) level_3_battery

0x8148,	// (0x00014d13) level_4_battery

0x8155,	// (0x00014d20) level_5_battery

0x8162,	// (0x00014d2d) level_6_battery

0x816f,	// (0x00014d3a) level_7_battery

0x8194,	// (0x00014d5f) list_menu_pane_ParamLimits

0x8194,	// (0x00014d5f) list_menu_pane

0x81aa,	// (0x00014d75) scroll_pane_cp25_ParamLimits

0x81aa,	// (0x00014d75) scroll_pane_cp25

0x81c3,	// (0x00014d8e) list_double2_graphic_pane_cp2_ParamLimits

0x81c3,	// (0x00014d8e) list_double2_graphic_pane_cp2

0x81c3,	// (0x00014d8e) list_double2_large_graphic_pane_cp2_ParamLimits

0x81c3,	// (0x00014d8e) list_double2_large_graphic_pane_cp2

0x81c3,	// (0x00014d8e) list_double2_pane_cp2_ParamLimits

0x81c3,	// (0x00014d8e) list_double2_pane_cp2

0x81c3,	// (0x00014d8e) list_double_graphic_pane_cp2_ParamLimits

0x81c3,	// (0x00014d8e) list_double_graphic_pane_cp2

0x81c3,	// (0x00014d8e) list_double_large_graphic_pane_cp2_ParamLimits

0x81c3,	// (0x00014d8e) list_double_large_graphic_pane_cp2

0x81c3,	// (0x00014d8e) list_double_number_pane_cp2_ParamLimits

0x81c3,	// (0x00014d8e) list_double_number_pane_cp2

0x81c3,	// (0x00014d8e) list_double_pane_cp2_ParamLimits

0x81c3,	// (0x00014d8e) list_double_pane_cp2

0x81e9,	// (0x00014db4) list_single_2graphic_pane_cp2_ParamLimits

0x81e9,	// (0x00014db4) list_single_2graphic_pane_cp2

0x81e9,	// (0x00014db4) list_single_graphic_heading_pane_cp2_ParamLimits

0x81e9,	// (0x00014db4) list_single_graphic_heading_pane_cp2

0x81e9,	// (0x00014db4) list_single_graphic_pane_cp2_ParamLimits

0x81e9,	// (0x00014db4) list_single_graphic_pane_cp2

0x81e9,	// (0x00014db4) list_single_heading_pane_cp2_ParamLimits

0x81e9,	// (0x00014db4) list_single_heading_pane_cp2

0x8206,	// (0x00014dd1) list_single_large_graphic_pane_cp2_ParamLimits

0x8206,	// (0x00014dd1) list_single_large_graphic_pane_cp2

0x81e9,	// (0x00014db4) list_single_number_heading_pane_cp2_ParamLimits

0x81e9,	// (0x00014db4) list_single_number_heading_pane_cp2

0x81e9,	// (0x00014db4) list_single_number_pane_cp2_ParamLimits

0x81e9,	// (0x00014db4) list_single_number_pane_cp2

0x8216,	// (0x00014de1) list_single_pane_cp2_ParamLimits

0x8216,	// (0x00014de1) list_single_pane_cp2

0x8291,	// (0x00014e5c) bg_popup_sub_pane_cp22

0x5518,	// (0x000120e3) popup_side_volume_key_window_g1

0x5542,	// (0x0001210d) popup_side_volume_key_window_t1

0x5560,	// (0x0001212b) volume_small_pane_cp1

0x375b,	// (0x00010326) bg_popup_sub_pane_cp24_ParamLimits

0x375b,	// (0x00010326) bg_popup_sub_pane_cp24

0x82a7,	// (0x00014e72) fep_china_uni_candidate_pane_ParamLimits

0x82a7,	// (0x00014e72) fep_china_uni_candidate_pane

0x82bb,	// (0x00014e86) fep_china_uni_entry_pane

0x82cb,	// (0x00014e96) popup_fep_china_uni_window_g1

0x82e7,	// (0x00014eb2) fep_china_uni_entry_pane_g1

0x82f1,	// (0x00014ebc) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0001c2c3) fep_china_uni_entry_pane_g

0x82fb,	// (0x00014ec6) fep_entry_item_pane

0x8305,	// (0x00014ed0) fep_candidate_item_pane

0x830d,	// (0x00014ed8) fep_china_uni_candidate_pane_g1

0x8317,	// (0x00014ee2) fep_china_uni_candidate_pane_g2

0x831f,	// (0x00014eea) fep_china_uni_candidate_pane_g3

0x8327,	// (0x00014ef2) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0001c2c8) fep_china_uni_candidate_pane_g

0x3540,	// (0x0001010b) fep_entry_item_pane_g1

0x8331,	// (0x00014efc) fep_entry_item_pane_t1_ParamLimits

0x8331,	// (0x00014efc) fep_entry_item_pane_t1

0x8347,	// (0x00014f12) fep_candidate_item_pane_t1_ParamLimits

0x8347,	// (0x00014f12) fep_candidate_item_pane_t1

0x835c,	// (0x00014f27) fep_candidate_item_pane_t2_ParamLimits

0x835c,	// (0x00014f27) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0001c2d1) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0001c2d1) fep_candidate_item_pane_t

0x3773,	// (0x0001033e) list_highlight_pane_cp31_ParamLimits

0x3773,	// (0x0001033e) list_highlight_pane_cp31

0x836e,	// (0x00014f39) level_1_signal_lsc

0x8377,	// (0x00014f42) level_2_signal_lsc

0x8380,	// (0x00014f4b) level_3_signal_lsc

0x8389,	// (0x00014f54) level_4_signal_lsc

0x8392,	// (0x00014f5d) level_5_signal_lsc

0x839b,	// (0x00014f66) level_6_signal_lsc

0x83a4,	// (0x00014f6f) level_7_signal_lsc

0x83a4,	// (0x00014f6f) level_1_battery_lsc

0x83ad,	// (0x00014f78) level_2_battery_lsc

0x83b6,	// (0x00014f81) level_3_battery_lsc

0x83bf,	// (0x00014f8a) level_4_battery_lsc

0x83c8,	// (0x00014f93) level_5_battery_lsc

0x83d1,	// (0x00014f9c) level_6_battery_lsc

0x836e,	// (0x00014f39) level_7_battery_lsc

0x83da,	// (0x00014fa5) scroll_handle_focus_pane_g1

0x83e3,	// (0x00014fae) scroll_handle_focus_pane_g2

0x83ec,	// (0x00014fb7) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0001c2d6) scroll_handle_focus_pane_g

0x83f5,	// (0x00014fc0) list_single_2graphic_pane_g1_ParamLimits

0x83f5,	// (0x00014fc0) list_single_2graphic_pane_g1

0x78ee,	// (0x000144b9) list_single_2graphic_pane_g2_ParamLimits

0x78ee,	// (0x000144b9) list_single_2graphic_pane_g2

0x7874,	// (0x0001443f) list_single_2graphic_pane_g3_ParamLimits

0x7874,	// (0x0001443f) list_single_2graphic_pane_g3

0x8401,	// (0x00014fcc) list_single_2graphic_pane_g4_ParamLimits

0x8401,	// (0x00014fcc) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0001c2dd) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0001c2dd) list_single_2graphic_pane_g

0x8412,	// (0x00014fdd) list_single_2graphic_pane_t1_ParamLimits

0x8412,	// (0x00014fdd) list_single_2graphic_pane_t1

0x8440,	// (0x0001500b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8440,	// (0x0001500b) list_double2_graphic_large_graphic_pane_g1

0x796f,	// (0x0001453a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x796f,	// (0x0001453a) list_double2_graphic_large_graphic_pane_g2

0x7980,	// (0x0001454b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7980,	// (0x0001454b) list_double2_graphic_large_graphic_pane_g3

0x8452,	// (0x0001501d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8452,	// (0x0001501d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0001c2e6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0001c2e6) list_double2_graphic_large_graphic_pane_g

0x845e,	// (0x00015029) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x845e,	// (0x00015029) list_double2_graphic_large_graphic_pane_t1

0x8474,	// (0x0001503f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8474,	// (0x0001503f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0001c2ef) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0001c2ef) list_double2_graphic_large_graphic_pane_t

0x85c0,	// (0x0001518b) popup_fast_swap_window_ParamLimits

0x85c0,	// (0x0001518b) popup_fast_swap_window

0x85de,	// (0x000151a9) popup_side_volume_key_window

0x85fc,	// (0x000151c7) stacon_top_pane

0x8606,	// (0x000151d1) status_pane_ParamLimits

0x8606,	// (0x000151d1) status_pane

0x3536,	// (0x00010101) status_small_pane

0x36b9,	// (0x00010284) control_pane

0x36b9,	// (0x00010284) stacon_bottom_pane

0x3e76,	// (0x00010a41) scroll_pane_cp121

0x3e6d,	// (0x00010a38) set_content_pane

0x8486,	// (0x00015051) bg_active_tab_pane_g1_cp1

0x848f,	// (0x0001505a) bg_active_tab_pane_g2_cp1

0x8498,	// (0x00015063) bg_active_tab_pane_g3_cp1

0x8486,	// (0x00015051) bg_passive_tab_pane_g1_cp1

0x848f,	// (0x0001505a) bg_passive_tab_pane_g2_cp1

0x8498,	// (0x00015063) bg_passive_tab_pane_g3_cp1

0x84a1,	// (0x0001506c) bg_active_tab_pane_g1_cp2

0x848f,	// (0x0001505a) bg_active_tab_pane_g2_cp2

0x84aa,	// (0x00015075) bg_active_tab_pane_g3_cp2

0x84a1,	// (0x0001506c) bg_passive_tab_pane_g1_cp2

0x848f,	// (0x0001505a) bg_passive_tab_pane_g2_cp2

0x84aa,	// (0x00015075) bg_passive_tab_pane_g3_cp2

0x84b3,	// (0x0001507e) bg_active_tab_pane_g1_cp3

0x848f,	// (0x0001505a) bg_active_tab_pane_g2_cp3

0x84bc,	// (0x00015087) bg_active_tab_pane_g3_cp3

0x84b3,	// (0x0001507e) bg_passive_tab_pane_g1_cp3

0x848f,	// (0x0001505a) bg_passive_tab_pane_g2_cp3

0x84bc,	// (0x00015087) bg_passive_tab_pane_g3_cp3

0x84c5,	// (0x00015090) bg_active_tab_pane_g1_cp4

0x848f,	// (0x0001505a) bg_active_tab_pane_g2_cp4

0x84d0,	// (0x0001509b) bg_active_tab_pane_g3_cp4

0x84c5,	// (0x00015090) bg_passive_tab_pane_g1_cp4

0x848f,	// (0x0001505a) bg_passive_tab_pane_g2_cp4

0x84d0,	// (0x0001509b) bg_passive_tab_pane_g3_cp4

0x8519,	// (0x000150e4) bg_active_tab_pane_g1_cp5

0x848f,	// (0x0001505a) bg_active_tab_pane_g2_cp5

0x8522,	// (0x000150ed) bg_active_tab_pane_g3_cp5

0x8519,	// (0x000150e4) bg_passive_tab_pane_g1_cp5

0x848f,	// (0x0001505a) bg_passive_tab_pane_g2_cp5

0x8522,	// (0x000150ed) bg_passive_tab_pane_g3_cp5

0x852b,	// (0x000150f6) list_set_graphic_pane_ParamLimits

0x852b,	// (0x000150f6) list_set_graphic_pane

0x36b9,	// (0x00010284) bg_set_opt_pane_cp4

0x8541,	// (0x0001510c) list_set_graphic_pane_g1_ParamLimits

0x8541,	// (0x0001510c) list_set_graphic_pane_g1

0x854d,	// (0x00015118) list_set_graphic_pane_g2_ParamLimits

0x854d,	// (0x00015118) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0001c2f4) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0001c2f4) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0001c675) volume_small_pane_cp_g

0x8571,	// (0x0001513c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8571,	// (0x0001513c) list_double2_large_graphic_pane_g1_cp2

0x857f,	// (0x0001514a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x857f,	// (0x0001514a) list_double2_large_graphic_pane_g2_cp2

0x8590,	// (0x0001515b) list_double2_large_graphic_pane_g3_cp2

0x8598,	// (0x00015163) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8598,	// (0x00015163) list_double2_large_graphic_pane_t1_cp2

0x85ae,	// (0x00015179) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x85ae,	// (0x00015179) list_double2_large_graphic_pane_t2_cp2

0xa2ba,	// (0x00016e85) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa2ba,	// (0x00016e85) list_double_large_graphic_pane_g1_cp2

0xa2cd,	// (0x00016e98) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa2cd,	// (0x00016e98) list_double_large_graphic_pane_g2_cp2

0x8724,	// (0x000152ef) list_double_large_graphic_pane_g3_cp2

0xa2de,	// (0x00016ea9) list_double_large_graphic_pane_g4_cp

0xa2e6,	// (0x00016eb1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa2e6,	// (0x00016eb1) list_double_large_graphic_pane_t1_cp2

0xa2fd,	// (0x00016ec8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa2fd,	// (0x00016ec8) list_double_large_graphic_pane_t2_cp2

0x8614,	// (0x000151df) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8614,	// (0x000151df) list_double2_graphic_pane_g1_cp2

0x8622,	// (0x000151ed) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8622,	// (0x000151ed) list_double2_graphic_pane_g2_cp2

0x8633,	// (0x000151fe) list_double2_graphic_pane_g3_cp2

0x863d,	// (0x00015208) list_double2_graphic_pane_t1_cp2_ParamLimits

0x863d,	// (0x00015208) list_double2_graphic_pane_t1_cp2

0x8653,	// (0x0001521e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8653,	// (0x0001521e) list_double2_graphic_pane_t2_cp2

0x8665,	// (0x00015230) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8665,	// (0x00015230) list_single_number_heading_pane_g1_cp2

0x8671,	// (0x0001523c) list_single_number_heading_pane_g2_cp2

0x8679,	// (0x00015244) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8679,	// (0x00015244) list_single_number_heading_pane_t1_cp2

0x868f,	// (0x0001525a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x868f,	// (0x0001525a) list_single_number_heading_pane_t2_cp2

0x86a3,	// (0x0001526e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x86a3,	// (0x0001526e) list_single_number_heading_pane_t3_cp2

0x8665,	// (0x00015230) list_single_heading_pane_g1_cp2_ParamLimits

0x8665,	// (0x00015230) list_single_heading_pane_g1_cp2

0x8671,	// (0x0001523c) list_single_heading_pane_g2_cp2

0x8679,	// (0x00015244) list_single_heading_pane_t1_cp2_ParamLimits

0x8679,	// (0x00015244) list_single_heading_pane_t1_cp2

0xa0b4,	// (0x00016c7f) list_single_heading_pane_t2_cp2_ParamLimits

0xa0b4,	// (0x00016c7f) list_single_heading_pane_t2_cp2

0x9ffc,	// (0x00016bc7) list_double_graphic_pane_g1_cp2_ParamLimits

0x9ffc,	// (0x00016bc7) list_double_graphic_pane_g1_cp2

0xa008,	// (0x00016bd3) list_double_graphic_pane_g2_cp2_ParamLimits

0xa008,	// (0x00016bd3) list_double_graphic_pane_g2_cp2

0xa017,	// (0x00016be2) list_double_graphic_pane_g3_cp2

0xa01f,	// (0x00016bea) list_double_graphic_pane_t1_cp2_ParamLimits

0xa01f,	// (0x00016bea) list_double_graphic_pane_t1_cp2

0xa035,	// (0x00016c00) list_double_graphic_pane_t2_cp2_ParamLimits

0xa035,	// (0x00016c00) list_double_graphic_pane_t2_cp2

0x8718,	// (0x000152e3) list_double_number_pane_g1_cp2_ParamLimits

0x8718,	// (0x000152e3) list_double_number_pane_g1_cp2

0x8724,	// (0x000152ef) list_double_number_pane_g2_cp2

0x9fc0,	// (0x00016b8b) list_double_number_pane_t1_cp2_ParamLimits

0x9fc0,	// (0x00016b8b) list_double_number_pane_t1_cp2

0x9fd4,	// (0x00016b9f) list_double_number_pane_t2_cp2_ParamLimits

0x9fd4,	// (0x00016b9f) list_double_number_pane_t2_cp2

0x9fea,	// (0x00016bb5) list_double_number_pane_t3_cp2_ParamLimits

0x9fea,	// (0x00016bb5) list_double_number_pane_t3_cp2

0x9ea9,	// (0x00016a74) list_single_graphic_pane_g1_cp2_ParamLimits

0x9ea9,	// (0x00016a74) list_single_graphic_pane_g1_cp2

0x8789,	// (0x00015354) list_single_graphic_pane_g2_cp2_ParamLimits

0x8789,	// (0x00015354) list_single_graphic_pane_g2_cp2

0x8795,	// (0x00015360) list_single_graphic_pane_g3_cp2

0x9e7f,	// (0x00016a4a) list_single_graphic_pane_t1_cp2_ParamLimits

0x9e7f,	// (0x00016a4a) list_single_graphic_pane_t1_cp2

0x8789,	// (0x00015354) list_single_number_pane_g1_cp2_ParamLimits

0x8789,	// (0x00015354) list_single_number_pane_g1_cp2

0x8795,	// (0x00015360) list_single_number_pane_g2_cp2

0x9e7f,	// (0x00016a4a) list_single_number_pane_t1_cp2_ParamLimits

0x9e7f,	// (0x00016a4a) list_single_number_pane_t1_cp2

0x9e95,	// (0x00016a60) list_single_number_pane_t2_cp2_ParamLimits

0x9e95,	// (0x00016a60) list_single_number_pane_t2_cp2

0x857f,	// (0x0001514a) list_double2_pane_g1_cp2_ParamLimits

0x857f,	// (0x0001514a) list_double2_pane_g1_cp2

0x8590,	// (0x0001515b) list_double2_pane_g2_cp2

0x86f0,	// (0x000152bb) list_double2_pane_t1_cp2_ParamLimits

0x86f0,	// (0x000152bb) list_double2_pane_t1_cp2

0x8706,	// (0x000152d1) list_double2_pane_t2_cp2_ParamLimits

0x8706,	// (0x000152d1) list_double2_pane_t2_cp2

0x8718,	// (0x000152e3) list_double_pane_g1_cp2_ParamLimits

0x8718,	// (0x000152e3) list_double_pane_g1_cp2

0x8724,	// (0x000152ef) list_double_pane_g2_cp2

0x872c,	// (0x000152f7) list_double_pane_t1_cp2_ParamLimits

0x872c,	// (0x000152f7) list_double_pane_t1_cp2

0x8742,	// (0x0001530d) list_double_pane_t2_cp2_ParamLimits

0x8742,	// (0x0001530d) list_double_pane_t2_cp2

0x8779,	// (0x00015344) list_single_pane_cp2_g3

0x8789,	// (0x00015354) list_single_pane_g1_cp2_ParamLimits

0x8789,	// (0x00015354) list_single_pane_g1_cp2

0x8795,	// (0x00015360) list_single_pane_g2_cp2

0x879d,	// (0x00015368) list_single_pane_t1_cp2_ParamLimits

0x879d,	// (0x00015368) list_single_pane_t1_cp2

0x87b5,	// (0x00015380) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x87b5,	// (0x00015380) list_single_large_graphic_pane_g1_cp2

0x87c3,	// (0x0001538e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x87c3,	// (0x0001538e) list_single_large_graphic_pane_g2_cp2

0x87cf,	// (0x0001539a) list_single_large_graphic_pane_g3_cp2

0x87d7,	// (0x000153a2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x87d7,	// (0x000153a2) list_single_large_graphic_pane_g4_cp1

0x87f1,	// (0x000153bc) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x87f1,	// (0x000153bc) list_single_large_graphic_pane_t1_cp2

0x9e49,	// (0x00016a14) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9e49,	// (0x00016a14) list_single_graphic_heading_pane_g1_cp2

0x9e16,	// (0x000169e1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e16,	// (0x000169e1) list_single_graphic_heading_pane_g4_cp2

0x8795,	// (0x00015360) list_single_graphic_heading_pane_g5_cp2

0x9e55,	// (0x00016a20) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9e55,	// (0x00016a20) list_single_graphic_heading_pane_t1_cp2

0x9e6b,	// (0x00016a36) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9e6b,	// (0x00016a36) list_single_graphic_heading_pane_t2_cp2

0x9e0a,	// (0x000169d5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e0a,	// (0x000169d5) list_single_2graphic_pane_g1_cp2

0x9e16,	// (0x000169e1) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e16,	// (0x000169e1) list_single_2graphic_pane_g2_cp2

0x8795,	// (0x00015360) list_single_2graphic_pane_g3_cp2

0x9e27,	// (0x000169f2) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9e27,	// (0x000169f2) list_single_2graphic_pane_g4_cp2

0x9e33,	// (0x000169fe) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9e33,	// (0x000169fe) list_single_2graphic_pane_t1_cp2

0x3540,	// (0x0001010b) list_highlight_pane_g10_cp1

0x99e2,	// (0x000165ad) list_highlight_pane_g1_cp1

0x99ea,	// (0x000165b5) list_highlight_pane_g2_cp1

0x99f2,	// (0x000165bd) list_highlight_pane_g3_cp1

0x99fa,	// (0x000165c5) list_highlight_pane_g4_cp1

0x9a02,	// (0x000165cd) list_highlight_pane_g5_cp1

0x9a0a,	// (0x000165d5) list_highlight_pane_g6_cp1

0x9a12,	// (0x000165dd) list_highlight_pane_g7_cp1

0x9a1a,	// (0x000165e5) list_highlight_pane_g8_cp1

0x9a22,	// (0x000165ed) list_highlight_pane_g9_cp1

0x9902,	// (0x000164cd) form_field_slider_pane_t3

0x9910,	// (0x000164db) form_field_slider_pane_t4

0x991e,	// (0x000164e9) slider_form_pane_ParamLimits

0x991e,	// (0x000164e9) slider_form_pane

0x36b9,	// (0x00010284) control_abbreviations

0x36b9,	// (0x00010284) control_conventions

0x36b9,	// (0x00010284) control_definitions

0x36b9,	// (0x00010284) format_table_attribute

0xa10a,	// (0x00016cd5) bg_popup_preview_window_pane_g9

0x36b9,	// (0x00010284) format_table_data2

0x36b9,	// (0x00010284) format_table_data3

0x36b9,	// (0x00010284) format_table_data_example

0x0008,

0x36b9,	// (0x00010284) intro_purpose

0xf8c5,	// (0x0001c490) bg_popup_preview_window_pane_g

0x36b9,	// (0x00010284) texts_category

0x36b9,	// (0x00010284) texts_graphics

0x8807,	// (0x000153d2) text_digital

0x8816,	// (0x000153e1) text_primary

0x8825,	// (0x000153f0) text_primary_small

0x8834,	// (0x000153ff) text_secondary

0x8843,	// (0x0001540e) text_title

0xa93c,	// (0x00017507) bg_passive_tab_pane_g1_cp3_srt

0x848f,	// (0x0001505a) bg_passive_tab_pane_g2_cp3_srt

0xa945,	// (0x00017510) bg_passive_tab_pane_g3_cp3_srt

0x3773,	// (0x0001033e) bg_active_tab_pane_cp3_srt_ParamLimits

0x3773,	// (0x0001033e) bg_active_tab_pane_cp3_srt

0xa94e,	// (0x00017519) tabs_4_active_pane_srt_g1

0xa956,	// (0x00017521) tabs_4_active_pane_srt_t1_ParamLimits

0xa956,	// (0x00017521) tabs_4_active_pane_srt_t1

0xa93c,	// (0x00017507) bg_active_tab_pane_g1_cp3_copy1

0x848f,	// (0x0001505a) bg_active_tab_pane_g2_cp3_copy1

0xa945,	// (0x00017510) bg_active_tab_pane_g3_cp3_copy1

0x3773,	// (0x0001033e) tabs_2_long_active_pane_srt_ParamLimits

0x3773,	// (0x0001033e) tabs_2_long_active_pane_srt

0x3773,	// (0x0001033e) tabs_2_long_passive_pane_srt_ParamLimits

0x3773,	// (0x0001033e) tabs_2_long_passive_pane_srt

0x7eb0,	// (0x00014a7b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7eb0,	// (0x00014a7b) bg_passive_tab_pane_cp4_srt

0xa56c,	// (0x00017137) bg_passive_tab_pane_g1_cp4_srt

0x848f,	// (0x0001505a) bg_passive_tab_pane_g2_cp4_srt

0xa575,	// (0x00017140) bg_passive_tab_pane_g3_cp4_srt

0x7e8f,	// (0x00014a5a) bg_active_tab_pane_cp4_srt_ParamLimits

0x7e8f,	// (0x00014a5a) bg_active_tab_pane_cp4_srt

0xa57e,	// (0x00017149) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa57e,	// (0x00017149) tabs_2_long_active_pane_srt_t1

0xa56c,	// (0x00017137) bg_active_tab_pane_g1_cp4_srt

0x848f,	// (0x0001505a) bg_active_tab_pane_g2_cp4_srt

0xa575,	// (0x00017140) bg_active_tab_pane_g3_cp4_srt

0x375b,	// (0x00010326) tabs_3_long_active_pane_srt_ParamLimits

0x375b,	// (0x00010326) tabs_3_long_active_pane_srt

0x375b,	// (0x00010326) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x375b,	// (0x00010326) tabs_3_long_passive_pane_cp_srt

0x375b,	// (0x00010326) tabs_3_long_passive_pane_srt_ParamLimits

0x375b,	// (0x00010326) tabs_3_long_passive_pane_srt

0x7eb0,	// (0x00014a7b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7eb0,	// (0x00014a7b) bg_passive_tab_pane_cp5_srt

0x8519,	// (0x000150e4) bg_passive_tab_pane_g1_cp5_srt

0x848f,	// (0x0001505a) bg_passive_tab_pane_g2_cp5_srt

0x8522,	// (0x000150ed) bg_passive_tab_pane_g3_cp5_srt

0x7e8f,	// (0x00014a5a) bg_active_tab_pane_cp5_srt_ParamLimits

0x7e8f,	// (0x00014a5a) bg_active_tab_pane_cp5_srt

0xa55a,	// (0x00017125) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa55a,	// (0x00017125) tabs_3_long_active_pane_srt_t1

0x8519,	// (0x000150e4) bg_active_tab_pane_g1_cp5_srt

0x848f,	// (0x0001505a) bg_active_tab_pane_g2_cp5_srt

0x8522,	// (0x000150ed) bg_active_tab_pane_g3_cp5_srt

0xa54c,	// (0x00017117) navi_text_pane_srt_t1

0xa544,	// (0x0001710f) navi_icon_pane_srt_g1

0x8a1b,	// (0x000155e6) midp_editing_number_pane_srt

0x8852,	// (0x0001541d) midp_ticker_pane_srt

0x8a23,	// (0x000155ee) midp_ticker_pane_srt_g1

0x8a2b,	// (0x000155f6) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0001c313) midp_ticker_pane_srt_g

0x8a33,	// (0x000155fe) midp_ticker_pane_srt_t1

0xa535,	// (0x00017100) midp_editing_number_pane_t1_copy1

0x885a,	// (0x00015425) listscroll_midp_pane

0x885a,	// (0x00015425) midp_form_pane

0x88c9,	// (0x00015494) midp_info_popup_window_ParamLimits

0x88c9,	// (0x00015494) midp_info_popup_window

0x4064,	// (0x00010c2f) bg_popup_sub_pane_cp50_ParamLimits

0x4064,	// (0x00010c2f) bg_popup_sub_pane_cp50

0x9604,	// (0x000161cf) listscroll_midp_info_pane_ParamLimits

0x9604,	// (0x000161cf) listscroll_midp_info_pane

0x95e4,	// (0x000161af) listscroll_form_midp_pane_ParamLimits

0x95e4,	// (0x000161af) listscroll_form_midp_pane

0x95f0,	// (0x000161bb) scroll_bar_cp050

0x95c4,	// (0x0001618f) list_midp_pane

0xb6ff,	// (0x000182ca) signal_pane_g2_cp

0x94fe,	// (0x000160c9) listscroll_midp_info_pane_t1_ParamLimits

0x94fe,	// (0x000160c9) listscroll_midp_info_pane_t1

0x9516,	// (0x000160e1) listscroll_midp_info_pane_t2_ParamLimits

0x9516,	// (0x000160e1) listscroll_midp_info_pane_t2

0x9554,	// (0x0001611f) listscroll_midp_info_pane_t3_ParamLimits

0x9554,	// (0x0001611f) listscroll_midp_info_pane_t3

0x958e,	// (0x00016159) listscroll_midp_info_pane_t4_ParamLimits

0x958e,	// (0x00016159) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0001c3cb) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0001c3cb) listscroll_midp_info_pane_t

0x40b9,	// (0x00010c84) scroll_pane_cp21

0x9498,	// (0x00016063) form_midp_field_choice_group_pane

0x94a1,	// (0x0001606c) form_midp_field_text_pane

0x94e4,	// (0x000160af) form_midp_field_time_pane

0x94ec,	// (0x000160b7) form_midp_gauge_slider_pane

0x94f5,	// (0x000160c0) form_midp_gauge_wait_pane

0x36b9,	// (0x00010284) form_midp_image_pane

0x9478,	// (0x00016043) list_single_midp_pane_ParamLimits

0x9478,	// (0x00016043) list_single_midp_pane

0x943c,	// (0x00016007) form_midp_field_text_pane_t1

0x921f,	// (0x00015dea) input_focus_pane_cp050

0x9467,	// (0x00016032) list_midp_form_text_pane

0x940b,	// (0x00015fd6) form_midp_field_choice_group_pane_t1

0x9419,	// (0x00015fe4) input_focus_pane_cp051

0x942d,	// (0x00015ff8) list_midp_choice_pane

0x36b9,	// (0x00010284) status_idle_pane

0x93ef,	// (0x00015fba) form_midp_field_time_pane_t1

0x3540,	// (0x0001010b) wait_anim_pane_g2_copy1

0x93fd,	// (0x00015fc8) form_midp_field_time_pane_t2

0x0001,

0x8979,	// (0x00015544) aid_navinavi_width_2_pane

0xf7fb,	// (0x0001c3c6) form_midp_field_time_pane_t

0x36b9,	// (0x00010284) input_focus_pane_cp052

0x36b9,	// (0x00010284) bg_input_focus_pane_cp040

0x93af,	// (0x00015f7a) form_midp_gauge_slider_pane_t1

0x93bd,	// (0x00015f88) form_midp_gauge_slider_pane_t2

0x93cb,	// (0x00015f96) form_midp_gauge_slider_pane_t3

0x93d9,	// (0x00015fa4) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0001c3bd) form_midp_gauge_slider_pane_t

0x93e7,	// (0x00015fb2) form_midp_slider_pane

0x3773,	// (0x0001033e) bg_input_focus_pane_cp041_ParamLimits

0x3773,	// (0x0001033e) bg_input_focus_pane_cp041

0x937c,	// (0x00015f47) form_midp_gauge_wait_pane_t1_ParamLimits

0x937c,	// (0x00015f47) form_midp_gauge_wait_pane_t1

0x938e,	// (0x00015f59) form_midp_gauge_wait_pane_t2_ParamLimits

0x938e,	// (0x00015f59) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x0001c3b8) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x0001c3b8) form_midp_gauge_wait_pane_t

0x93a0,	// (0x00015f6b) form_midp_wait_pane_ParamLimits

0x93a0,	// (0x00015f6b) form_midp_wait_pane

0x9344,	// (0x00015f0f) form_midp_image_pane_g1

0x934d,	// (0x00015f18) form_midp_image_pane_t1

0x935c,	// (0x00015f27) form_midp_image_pane_t2

0x936b,	// (0x00015f36) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0001c3b1) form_midp_image_pane_t

0x932c,	// (0x00015ef7) list_single_midp_pane_g1

0x9335,	// (0x00015f00) list_single_midp_pane_t1

0x9312,	// (0x00015edd) list_midp_form_item_pane_ParamLimits

0x9312,	// (0x00015edd) list_midp_form_item_pane

0x8921,	// (0x000154ec) list_midp_form_item_pane_t1

0x8930,	// (0x000154fb) midp_ticker_pane_g1

0x893c,	// (0x00015507) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0001c2f9) midp_ticker_pane_g

0x8948,	// (0x00015513) midp_ticker_pane_t1

0xa7d7,	// (0x000173a2) midp_editing_number_pane_t1

0xa7b5,	// (0x00017380) midp_editing_number_pane

0xa7c4,	// (0x0001738f) midp_ticker_pane

0xa4fd,	// (0x000170c8) ai_message_heading_pane

0x36b9,	// (0x00010284) bg_popup_window_pane_cp14

0xa505,	// (0x000170d0) listscroll_ai_message_pane

0xa483,	// (0x0001704e) ai_message_heading_pane_g1_ParamLimits

0xa483,	// (0x0001704e) ai_message_heading_pane_g1

0xa48f,	// (0x0001705a) ai_message_heading_pane_g2_ParamLimits

0xa48f,	// (0x0001705a) ai_message_heading_pane_g2

0xa49d,	// (0x00017068) ai_message_heading_pane_g3_ParamLimits

0xa49d,	// (0x00017068) ai_message_heading_pane_g3

0xa4a9,	// (0x00017074) ai_message_heading_pane_g4_ParamLimits

0xa4a9,	// (0x00017074) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0001c4f2) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0001c4f2) ai_message_heading_pane_g

0xa4b5,	// (0x00017080) ai_message_heading_pane_t1_ParamLimits

0xa4b5,	// (0x00017080) ai_message_heading_pane_t1

0xa4cf,	// (0x0001709a) ai_message_heading_pane_t2_ParamLimits

0xa4cf,	// (0x0001709a) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x0001c4fb) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x0001c4fb) ai_message_heading_pane_t

0xa4e3,	// (0x000170ae) bg_popup_heading_pane_cp1_ParamLimits

0xa4e3,	// (0x000170ae) bg_popup_heading_pane_cp1

0xa471,	// (0x0001703c) list_ai_message_pane_ParamLimits

0xa471,	// (0x0001703c) list_ai_message_pane

0x40b9,	// (0x00010c84) scroll_pane_cp10

0xa40d,	// (0x00016fd8) list_ai_message_pane_g1

0xa415,	// (0x00016fe0) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0001c4cf) list_ai_message_pane_g

0xa41d,	// (0x00016fe8) list_ai_message_pane_t1_ParamLimits

0xa41d,	// (0x00016fe8) list_ai_message_pane_t1

0xa432,	// (0x00016ffd) list_ai_message_pane_t2_ParamLimits

0xa432,	// (0x00016ffd) list_ai_message_pane_t2

0xa447,	// (0x00017012) list_ai_message_pane_t3_ParamLimits

0xa447,	// (0x00017012) list_ai_message_pane_t3

0xa45c,	// (0x00017027) list_ai_message_pane_t4_ParamLimits

0xa45c,	// (0x00017027) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x0001c4d4) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x0001c4d4) list_ai_message_pane_t

0xa3f6,	// (0x00016fc1) cell_ai_soft_ind_pane_ParamLimits

0xa3f6,	// (0x00016fc1) cell_ai_soft_ind_pane

0x895a,	// (0x00015525) cell_ai_soft_ind_pane_g1_ParamLimits

0x895a,	// (0x00015525) cell_ai_soft_ind_pane_g1

0x36b9,	// (0x00010284) grid_highlight_cp1

0x8967,	// (0x00015532) text_secondary_cp56_ParamLimits

0x8967,	// (0x00015532) text_secondary_cp56

0xa3cb,	// (0x00016f96) example_general_pane_ParamLimits

0xa3cb,	// (0x00016f96) example_general_pane

0xa3d7,	// (0x00016fa2) example_parent_pane_g1_ParamLimits

0xa3d7,	// (0x00016fa2) example_parent_pane_g1

0xa3e3,	// (0x00016fae) example_parent_pane_t1_ParamLimits

0xa3e3,	// (0x00016fae) example_parent_pane_t1

0x5c84,	// (0x0001284f) popup_preview_text_window_ParamLimits

0x5c84,	// (0x0001284f) popup_preview_text_window

0x8781,	// (0x0001534c) list_single_pane_cp2_g4

0x3a17,	// (0x000105e2) bg_popup_preview_window_pane_ParamLimits

0x3a17,	// (0x000105e2) bg_popup_preview_window_pane

0xa114,	// (0x00016cdf) popup_preview_text_window_t1_ParamLimits

0xa114,	// (0x00016cdf) popup_preview_text_window_t1

0xa132,	// (0x00016cfd) popup_preview_text_window_t2_ParamLimits

0xa132,	// (0x00016cfd) popup_preview_text_window_t2

0xa17b,	// (0x00016d46) popup_preview_text_window_t3_ParamLimits

0xa17b,	// (0x00016d46) popup_preview_text_window_t3

0xa1c0,	// (0x00016d8b) popup_preview_text_window_t4_ParamLimits

0xa1c0,	// (0x00016d8b) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x0001c4a3) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x0001c4a3) popup_preview_text_window_t

0xa23e,	// (0x00016e09) scroll_pane_cp11

0x90fb,	// (0x00015cc6) bg_popup_preview_window_pane_g1

0xa0c8,	// (0x00016c93) bg_popup_preview_window_pane_g2

0xa0d2,	// (0x00016c9d) bg_popup_preview_window_pane_g3

0xa0dc,	// (0x00016ca7) bg_popup_preview_window_pane_g4

0xa0e6,	// (0x00016cb1) bg_popup_preview_window_pane_g5

0xa0f0,	// (0x00016cbb) bg_popup_preview_window_pane_g6

0xa0f8,	// (0x00016cc3) bg_popup_preview_window_pane_g7

0xa100,	// (0x00016ccb) bg_popup_preview_window_pane_g8

0x4e2e,	// (0x000119f9) aid_popup_width_pane

0x5c60,	// (0x0001282b) popup_midp_note_alarm_window_ParamLimits

0x5c60,	// (0x0001282b) popup_midp_note_alarm_window

0x3edf,	// (0x00010aaa) data_form_pane_ParamLimits

0x7d1c,	// (0x000148e7) form_field_data_pane_g1

0x7d26,	// (0x000148f1) form_field_data_pane_t1_ParamLimits

0x3eeb,	// (0x00010ab6) input_focus_pane_ParamLimits

0x3ef9,	// (0x00010ac4) data_form_wide_pane_ParamLimits

0x3f05,	// (0x00010ad0) form_field_data_wide_pane_g1

0x3f31,	// (0x00010afc) form_field_data_wide_pane_t1_ParamLimits

0x3bd3,	// (0x0001079e) input_focus_pane_cp6_ParamLimits

0x7e67,	// (0x00014a32) input_popup_find_pane_g1_ParamLimits

0x7e67,	// (0x00014a32) input_popup_find_pane_g1

0x53bd,	// (0x00011f88) aid_navi_side_left_pane

0x53d2,	// (0x00011f9d) aid_navi_side_right_pane

0x9add,	// (0x000166a8) bg_popup_window_pane_cp30_ParamLimits

0x9add,	// (0x000166a8) bg_popup_window_pane_cp30

0x9b57,	// (0x00016722) popup_midp_note_alarm_window_g1_ParamLimits

0x9b57,	// (0x00016722) popup_midp_note_alarm_window_g1

0x9b87,	// (0x00016752) popup_midp_note_alarm_window_t1_ParamLimits

0x9b87,	// (0x00016752) popup_midp_note_alarm_window_t1

0x9c28,	// (0x000167f3) popup_midp_note_alarm_window_t2_ParamLimits

0x9c28,	// (0x000167f3) popup_midp_note_alarm_window_t2

0x9cd6,	// (0x000168a1) popup_midp_note_alarm_window_t3_ParamLimits

0x9cd6,	// (0x000168a1) popup_midp_note_alarm_window_t3

0x9d08,	// (0x000168d3) popup_midp_note_alarm_window_t4_ParamLimits

0x9d08,	// (0x000168d3) popup_midp_note_alarm_window_t4

0x9d2e,	// (0x000168f9) popup_midp_note_alarm_window_t5_ParamLimits

0x9d2e,	// (0x000168f9) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0001c440) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0001c440) popup_midp_note_alarm_window_t

0x9dda,	// (0x000169a5) wait_bar_pane_cp1_ParamLimits

0x9dda,	// (0x000169a5) wait_bar_pane_cp1

0x36b9,	// (0x00010284) wait_anim_pane_copy1

0x36b9,	// (0x00010284) wait_border_pane_copy1

0x97c2,	// (0x0001638d) wait_border_pane_g1_copy1

0x3f48,	// (0x00010b13) form_field_popup_pane_g1

0x7d40,	// (0x0001490b) form_field_popup_pane_t1_ParamLimits

0x3eeb,	// (0x00010ab6) input_focus_pane_cp7_ParamLimits

0x3f50,	// (0x00010b1b) list_form_pane_ParamLimits

0x3f5c,	// (0x00010b27) form_field_popup_wide_pane_g1

0x3f64,	// (0x00010b2f) form_field_popup_wide_pane_t1_ParamLimits

0x3eeb,	// (0x00010ab6) input_focus_pane_cp8_ParamLimits

0x3f76,	// (0x00010b41) list_form_wide_pane_ParamLimits

0xa9d7,	// (0x000175a2) aid_size_cell_graphic_pane

0x7db8,	// (0x00014983) data_form_pane_t1_ParamLimits

0xa780,	// (0x0001734b) data_form_wide_pane_t1_ParamLimits

0x8c78,	// (0x00015843) bg_status_flat_pane

0x7594,	// (0x0001415f) title_pane_t1_ParamLimits

0x3723,	// (0x000102ee) title_pane_t2_ParamLimits

0x3749,	// (0x00010314) title_pane_t3_ParamLimits

0xf532,	// (0x0001c0fd) title_pane_t_ParamLimits

0x8121,	// (0x00014cec) level_1_signal_ParamLimits

0x812e,	// (0x00014cf9) level_2_signal_ParamLimits

0x813b,	// (0x00014d06) level_3_signal_ParamLimits

0x8148,	// (0x00014d13) level_4_signal_ParamLimits

0x8155,	// (0x00014d20) level_5_signal_ParamLimits

0x8162,	// (0x00014d2d) level_6_signal_ParamLimits

0x816f,	// (0x00014d3a) level_7_signal_ParamLimits

0x8121,	// (0x00014cec) level_1_battery_ParamLimits

0x812e,	// (0x00014cf9) level_2_battery_ParamLimits

0x813b,	// (0x00014d06) level_3_battery_ParamLimits

0x8148,	// (0x00014d13) level_4_battery_ParamLimits

0x8155,	// (0x00014d20) level_5_battery_ParamLimits

0x8162,	// (0x00014d2d) level_6_battery_ParamLimits

0x816f,	// (0x00014d3a) level_7_battery_ParamLimits

0x99e2,	// (0x000165ad) bg_status_flat_pane_g1

0x99ea,	// (0x000165b5) bg_status_flat_pane_g2

0x99f2,	// (0x000165bd) bg_status_flat_pane_g3

0x99fa,	// (0x000165c5) bg_status_flat_pane_g4

0x9a02,	// (0x000165cd) bg_status_flat_pane_g5

0x9a0a,	// (0x000165d5) bg_status_flat_pane_g6

0x9a12,	// (0x000165dd) bg_status_flat_pane_g7

0x7604,	// (0x000141cf) tabs_3_active_pane_t1_ParamLimits

0x7604,	// (0x000141cf) tabs_3_passive_pane_t1_ParamLimits

0x761e,	// (0x000141e9) tabs_4_active_pane_t1_ParamLimits

0x761e,	// (0x000141e9) tabs_4_1_passive_pane_t1_ParamLimits

0x7e7d,	// (0x00014a48) tabs_2_active_pane_t1_ParamLimits

0x7e7d,	// (0x00014a48) tabs_2_passive_pane_t1_ParamLimits

0x7e8f,	// (0x00014a5a) bg_active_tab_pane_cp4_ParamLimits

0x7e9d,	// (0x00014a68) tabs_2_long_active_pane_t1_ParamLimits

0x7eb0,	// (0x00014a7b) bg_passive_tab_pane_cp4_ParamLimits

0x5fe8,	// (0x00012bb3) list_single_midp_graphic_pane_t1_ParamLimits

0x7e8f,	// (0x00014a5a) bg_active_tab_pane_cp5_ParamLimits

0x7ebc,	// (0x00014a87) tabs_3_long_active_pane_t1_ParamLimits

0x7eb0,	// (0x00014a7b) bg_passive_tab_pane_cp5_ParamLimits

0x5fe8,	// (0x00012bb3) list_single_midp_graphic_pane_t1

0x8c78,	// (0x00015843) bg_status_flat_pane_ParamLimits

0x8d43,	// (0x0001590e) indicator_pane_cp2_ParamLimits

0x8d43,	// (0x0001590e) indicator_pane_cp2

0x8e86,	// (0x00015a51) navi_pane_srt_ParamLimits

0x8e86,	// (0x00015a51) navi_pane_srt

0x8eaa,	// (0x00015a75) popup_clock_digital_analogue_window_cp1

0x385a,	// (0x00010425) indicator_pane_t1

0x8852,	// (0x0001541d) copy_highlight_pane

0x8852,	// (0x0001541d) cursor_graphics_pane

0x8852,	// (0x0001541d) graphic_within_text_pane

0x8852,	// (0x0001541d) link_highlight_pane

0xa201,	// (0x00016dcc) popup_preview_text_window_t5_ParamLimits

0xa201,	// (0x00016dcc) popup_preview_text_window_t5

0x8983,	// (0x0001554e) cursor_digital_pane

0x8983,	// (0x0001554e) cursor_primary_pane

0x8994,	// (0x0001555f) cursor_primary_small_pane

0x899c,	// (0x00015567) cursor_secondary_pane

0x89a4,	// (0x0001556f) cursor_title_pane

0x8983,	// (0x0001554e) link_highlight_digital_pane

0x898b,	// (0x00015556) link_highlight_primary_pane

0x8994,	// (0x0001555f) link_highlight_primary_small_pane

0x899c,	// (0x00015567) link_highlight_secondary_pane

0x89a4,	// (0x0001556f) link_highlight_title_pane

0x8983,	// (0x0001554e) copy_highlight_digital_pane

0x8983,	// (0x0001554e) copy_highlight_primary_pane

0x8994,	// (0x0001555f) copy_highlight_primary_small_pane

0x899c,	// (0x00015567) copy_highlight_secondary_pane

0x89a4,	// (0x0001556f) copy_highlight_title_pane

0x899c,	// (0x00015567) graphic_text_digital_pane

0x9a80,	// (0x0001664b) graphic_text_primary_pane

0x9a89,	// (0x00016654) graphic_text_primary_small_pane

0x8994,	// (0x0001555f) graphic_text_secondary_pane

0x8983,	// (0x0001554e) graphic_text_title_pane

0x89ac,	// (0x00015577) cursor_primary_pane_g1

0x9a72,	// (0x0001663d) cursor_text_primary_t1

0x9a5a,	// (0x00016625) cursor_primary_small_pane_g1

0x9a64,	// (0x0001662f) cursor_text_primary_small_t1

0x9a42,	// (0x0001660d) cursor_primary_small_pane_g1_copy1

0x9a4c,	// (0x00016617) cursor_text_primary_small_t1_copy1

0x9a2a,	// (0x000165f5) cursor_text_title_t1

0x9a38,	// (0x00016603) cursor_title_pane_g1

0x89ac,	// (0x00015577) cursor_digital_pane_g1

0x89b6,	// (0x00015581) cursor_text_digital_t1

0x89c4,	// (0x0001558f) link_highlight_primary_pane_g1

0x99d3,	// (0x0001659e) link_highlight_primary_pane_t1

0x89c4,	// (0x0001558f) link_highlight_primary_small_pane_g1

0x89cc,	// (0x00015597) link_highlight_primary_small_pane_t1

0x89db,	// (0x000155a6) link_highlight_secondary_pane_g1

0x89e3,	// (0x000155ae) link_highlight_secondary_pane_t1

0x9947,	// (0x00016512) link_highlight_title_pane_g1

0x994f,	// (0x0001651a) link_highlight_title_pane_t1

0x9930,	// (0x000164fb) link_highlight_digital_pane_g1

0x9938,	// (0x00016503) link_highlight_digital_pane_t1

0x97f8,	// (0x000163c3) copy_highlight_primary_pane_g1

0x980f,	// (0x000163da) copy_highlight_primary_pane_t1

0x97f8,	// (0x000163c3) copy_highlight_primary_small_pane_g1

0x9800,	// (0x000163cb) copy_highlight_primary_small_pane_t1

0x89f2,	// (0x000155bd) copy_highlight_secondary_pane_g1

0x89fa,	// (0x000155c5) copy_highlight_secondary_pane_t1

0x97e1,	// (0x000163ac) copy_highlight_title_pane_g1

0x97e9,	// (0x000163b4) copy_highlight_title_pane_t1

0x97f8,	// (0x000163c3) copy_highlight_digital_pane_g1

0xaba9,	// (0x00017774) copy_highlight_digital_pane_t1

0xaafd,	// (0x000176c8) graphic_text_primary_pane_g1

0xab8d,	// (0x00017758) graphic_text_primary_pane_t1

0xab9b,	// (0x00017766) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x0001c56f) graphic_text_primary_pane_t

0xab69,	// (0x00017734) graphic_text_primary_small_pane_g1

0xab71,	// (0x0001773c) graphic_text_primary_small_pane_t1

0xab7f,	// (0x0001774a) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x0001c56a) graphic_text_primary_small_pane_t

0xab45,	// (0x00017710) graphic_text_secondary_pane_g1

0xab4d,	// (0x00017718) graphic_text_secondary_pane_t1

0xab5b,	// (0x00017726) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x0001c565) graphic_text_secondary_pane_t

0xab21,	// (0x000176ec) graphic_text_title_pane_g1

0xab29,	// (0x000176f4) graphic_text_title_pane_t1

0xab37,	// (0x00017702) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x0001c560) graphic_text_title_pane_t

0xaafd,	// (0x000176c8) graphic_text_digital_pane_g1

0xab05,	// (0x000176d0) graphic_text_digital_pane_t1

0xab13,	// (0x000176de) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x0001c55b) graphic_text_digital_pane_t

0x3773,	// (0x0001033e) navi_icon_pane_srt_ParamLimits

0x3773,	// (0x0001033e) navi_icon_pane_srt

0x36b9,	// (0x00010284) navi_midp_pane_srt

0x36b9,	// (0x00010284) navi_navi_pane_srt

0x3773,	// (0x0001033e) navi_text_pane_srt_ParamLimits

0x3773,	// (0x0001033e) navi_text_pane_srt

0xaac8,	// (0x00017693) navi_navi_icon_text_pane_srt

0xaad0,	// (0x0001769b) navi_navi_pane_srt_g1_ParamLimits

0xaad0,	// (0x0001769b) navi_navi_pane_srt_g1

0xaae2,	// (0x000176ad) navi_navi_pane_srt_g2_ParamLimits

0xaae2,	// (0x000176ad) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x0001c556) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x0001c556) navi_navi_pane_srt_g

0xaaf4,	// (0x000176bf) navi_navi_tabs_pane_srt

0xaac8,	// (0x00017693) navi_navi_text_pane_srt

0xaac8,	// (0x00017693) navi_navi_volume_pane_srt

0xaab9,	// (0x00017684) navi_navi_text_pane_srt_t1

0x6384,	// (0x00012f4f) navi_navi_volume_pane_srt_g1

0x638c,	// (0x00012f57) volume_small_pane_srt_ParamLimits

0x638c,	// (0x00012f57) volume_small_pane_srt

0x56a9,	// (0x00012274) volume_small_pane_srt_g1_ParamLimits

0x56a9,	// (0x00012274) volume_small_pane_srt_g1

0x56b9,	// (0x00012284) volume_small_pane_srt_g2_ParamLimits

0x56b9,	// (0x00012284) volume_small_pane_srt_g2

0x56ca,	// (0x00012295) volume_small_pane_srt_g3_ParamLimits

0x56ca,	// (0x00012295) volume_small_pane_srt_g3

0x56db,	// (0x000122a6) volume_small_pane_srt_g4_ParamLimits

0x56db,	// (0x000122a6) volume_small_pane_srt_g4

0x56ec,	// (0x000122b7) volume_small_pane_srt_g5_ParamLimits

0x56ec,	// (0x000122b7) volume_small_pane_srt_g5

0x56fd,	// (0x000122c8) volume_small_pane_srt_g6_ParamLimits

0x56fd,	// (0x000122c8) volume_small_pane_srt_g6

0x570e,	// (0x000122d9) volume_small_pane_srt_g7_ParamLimits

0x570e,	// (0x000122d9) volume_small_pane_srt_g7

0x571f,	// (0x000122ea) volume_small_pane_srt_g8_ParamLimits

0x571f,	// (0x000122ea) volume_small_pane_srt_g8

0x5730,	// (0x000122fb) volume_small_pane_srt_g9_ParamLimits

0x5730,	// (0x000122fb) volume_small_pane_srt_g9

0x5741,	// (0x0001230c) volume_small_pane_srt_g10_ParamLimits

0x5741,	// (0x0001230c) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0001c2fe) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0001c2fe) volume_small_pane_srt_g

0x3acc,	// (0x00010697) query_popup_data_pane_cp2

0xaa9f,	// (0x0001766a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaa9f,	// (0x0001766a) navi_navi_icon_text_pane_srt_t1

0x9a80,	// (0x0001664b) navi_tabs_2_long_pane_srt

0x9a80,	// (0x0001664b) navi_tabs_2_pane_srt

0x9a80,	// (0x0001664b) navi_tabs_3_long_pane_srt

0x9a80,	// (0x0001664b) navi_tabs_3_pane_srt

0x9a80,	// (0x0001664b) navi_tabs_4_pane_srt

0x6364,	// (0x00012f2f) tabs_2_active_pane_srt_ParamLimits

0x6364,	// (0x00012f2f) tabs_2_active_pane_srt

0x6374,	// (0x00012f3f) tabs_2_passive_pane_srt_ParamLimits

0x6374,	// (0x00012f3f) tabs_2_passive_pane_srt

0x8b81,	// (0x0001574c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8b81,	// (0x0001574c) bg_passive_tab_pane_cp1_srt

0xaa6b,	// (0x00017636) bg_passive_tab_pane_g1_cp1_srt

0x848f,	// (0x0001505a) bg_passive_tab_pane_g2_cp1_srt

0xaa74,	// (0x0001763f) bg_passive_tab_pane_g3_cp1_srt

0x3773,	// (0x0001033e) bg_active_tab_pane_cp1_srt_ParamLimits

0x3773,	// (0x0001033e) bg_active_tab_pane_cp1_srt

0xaa7d,	// (0x00017648) tabs_2_active_pane_srt_g1

0xaa85,	// (0x00017650) tabs_2_active_pane_srt_t1_ParamLimits

0xaa85,	// (0x00017650) tabs_2_active_pane_srt_t1

0xaa6b,	// (0x00017636) bg_active_tab_pane_g1_cp1_srt

0x848f,	// (0x0001505a) bg_active_tab_pane_g2_cp1_srt

0xaa74,	// (0x0001763f) bg_active_tab_pane_g3_cp1_srt

0x6331,	// (0x00012efc) tabs_3_active_pane_srt_ParamLimits

0x6331,	// (0x00012efc) tabs_3_active_pane_srt

0x6342,	// (0x00012f0d) tabs_3_passive_pane_cp_srt_ParamLimits

0x6342,	// (0x00012f0d) tabs_3_passive_pane_cp_srt

0x6353,	// (0x00012f1e) tabs_3_passive_pane_srt_ParamLimits

0x6353,	// (0x00012f1e) tabs_3_passive_pane_srt

0x8b81,	// (0x0001574c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8b81,	// (0x0001574c) bg_passive_tab_pane_cp2_srt

0x8a09,	// (0x000155d4) bg_passive_tab_pane_g1_cp2_srt

0x848f,	// (0x0001505a) bg_passive_tab_pane_g2_cp2_srt

0x8a12,	// (0x000155dd) bg_passive_tab_pane_g3_cp2_srt

0x3773,	// (0x0001033e) bg_active_tab_pane_cp2_srt_ParamLimits

0x3773,	// (0x0001033e) bg_active_tab_pane_cp2_srt

0xaa51,	// (0x0001761c) tabs_3_active_pane_srt_g1

0xaa59,	// (0x00017624) tabs_3_active_pane_srt_t1_ParamLimits

0xaa59,	// (0x00017624) tabs_3_active_pane_srt_t1

0x8a09,	// (0x000155d4) bg_active_tab_pane_g1_cp2_srt

0x848f,	// (0x0001505a) bg_active_tab_pane_g2_cp2_srt

0x8a12,	// (0x000155dd) bg_active_tab_pane_g3_cp2_srt

0x62e9,	// (0x00012eb4) tabs_4_active_pane_srt_ParamLimits

0x62e9,	// (0x00012eb4) tabs_4_active_pane_srt

0x62fb,	// (0x00012ec6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x62fb,	// (0x00012ec6) tabs_4_passive_pane_cp2_srt

0x5893,	// (0x0001245e) aid_size_cell_toolbar

0x7eb0,	// (0x00014a7b) main_idle_act_pane_ParamLimits

0x5a86,	// (0x00012651) popup_large_graphic_colour_window_ParamLimits

0x5e2d,	// (0x000129f8) popup_toolbar_window_ParamLimits

0x5e2d,	// (0x000129f8) popup_toolbar_window

0xa7fd,	// (0x000173c8) list_single_graphic_2heading_pane_ParamLimits

0xa7fd,	// (0x000173c8) list_single_graphic_2heading_pane

0x4426,	// (0x00010ff1) aid_size_cell_apps_grid_lsc_pane

0x4438,	// (0x00011003) aid_size_cell_apps_grid_prt_pane

0x8b81,	// (0x0001574c) bg_wml_button_pane_cp1_ParamLimits

0x8b81,	// (0x0001574c) bg_wml_button_pane_cp1

0x943c,	// (0x00016007) form_midp_field_text_pane_t1_ParamLimits

0x921f,	// (0x00015dea) input_focus_pane_cp050_ParamLimits

0x9467,	// (0x00016032) list_midp_form_text_pane_ParamLimits

0x9419,	// (0x00015fe4) input_focus_pane_cp051_ParamLimits

0x942d,	// (0x00015ff8) list_midp_choice_pane_ParamLimits

0x92d8,	// (0x00015ea3) list_single_2graphic_pane_cp3_ParamLimits

0x92d8,	// (0x00015ea3) list_single_2graphic_pane_cp3

0x92ee,	// (0x00015eb9) list_single_midp_graphic_pane_ParamLimits

0x92ee,	// (0x00015eb9) list_single_midp_graphic_pane

0x5eec,	// (0x00012ab7) list_single_graphic_2heading_pane_g1_ParamLimits

0x5eec,	// (0x00012ab7) list_single_graphic_2heading_pane_g1

0x5ef8,	// (0x00012ac3) list_single_graphic_2heading_pane_g4_ParamLimits

0x5ef8,	// (0x00012ac3) list_single_graphic_2heading_pane_g4

0x5f04,	// (0x00012acf) list_single_graphic_2heading_pane_g5_ParamLimits

0x5f04,	// (0x00012acf) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0001c351) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0001c351) list_single_graphic_2heading_pane_g

0x5f10,	// (0x00012adb) list_single_graphic_2heading_pane_t1_ParamLimits

0x5f10,	// (0x00012adb) list_single_graphic_2heading_pane_t1

0x5f24,	// (0x00012aef) list_single_graphic_2heading_pane_t2_ParamLimits

0x5f24,	// (0x00012aef) list_single_graphic_2heading_pane_t2

0x5f40,	// (0x00012b0b) list_single_graphic_2heading_pane_t3_ParamLimits

0x5f40,	// (0x00012b0b) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001c358) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001c358) list_single_graphic_2heading_pane_t

0x8fff,	// (0x00015bca) bg_popup_sub_pane_cp2

0x9029,	// (0x00015bf4) grid_toobar_pane

0x5f58,	// (0x00012b23) cell_toolbar_pane_ParamLimits

0x5f58,	// (0x00012b23) cell_toolbar_pane

0x909f,	// (0x00015c6a) cell_toolbar_pane_g1_ParamLimits

0x909f,	// (0x00015c6a) cell_toolbar_pane_g1

0x90b3,	// (0x00015c7e) cell_toolbar_pane_g2_ParamLimits

0x90b3,	// (0x00015c7e) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x0001c366) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x0001c366) cell_toolbar_pane_g

0x90d5,	// (0x00015ca0) grid_highlight_pane_cp2_ParamLimits

0x90d5,	// (0x00015ca0) grid_highlight_pane_cp2

0x90ef,	// (0x00015cba) toolbar_button_pane

0x90fb,	// (0x00015cc6) toolbar_button_pane_g1

0x9103,	// (0x00015cce) toolbar_button_pane_g2

0x910b,	// (0x00015cd6) toolbar_button_pane_g3

0x9113,	// (0x00015cde) toolbar_button_pane_g4

0x911b,	// (0x00015ce6) toolbar_button_pane_g5

0x9123,	// (0x00015cee) toolbar_button_pane_g6

0x912b,	// (0x00015cf6) toolbar_button_pane_g7

0x9133,	// (0x00015cfe) toolbar_button_pane_g8

0x913b,	// (0x00015d06) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x0001c36b) toolbar_button_pane_g

0x5f90,	// (0x00012b5b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5f90,	// (0x00012b5b) list_single_2graphic_pane_g1_cp3

0x5f9c,	// (0x00012b67) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5f9c,	// (0x00012b67) list_single_2graphic_pane_g2_cp3

0x5fad,	// (0x00012b78) list_single_2graphic_pane_g3_cp3

0x5fb5,	// (0x00012b80) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5fb5,	// (0x00012b80) list_single_2graphic_pane_g4_cp3

0x5fc1,	// (0x00012b8c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5fc1,	// (0x00012b8c) list_single_2graphic_pane_t1_cp3

0x5fdc,	// (0x00012ba7) list_single_midp_graphic_pane_g2_ParamLimits

0x5fdc,	// (0x00012ba7) list_single_midp_graphic_pane_g2

0x589b,	// (0x00012466) aid_zoom_text_primary

0x58a3,	// (0x0001246e) aid_zoom_text_secondary

0x8ac3,	// (0x0001568e) status_small_pane_g7_ParamLimits

0x8ac3,	// (0x0001568e) status_small_pane_g7

0x8ae6,	// (0x000156b1) status_small_pane_t1_ParamLimits

0x756f,	// (0x0001413a) title_pane_g2

0x0003,

0xf529,	// (0x0001c0f4) title_pane_g

0x7745,	// (0x00014310) aid_size_cell_colour_1_pane_ParamLimits

0x7745,	// (0x00014310) aid_size_cell_colour_1_pane

0x7759,	// (0x00014324) aid_size_cell_colour_2_pane_ParamLimits

0x7759,	// (0x00014324) aid_size_cell_colour_2_pane

0x776d,	// (0x00014338) aid_size_cell_colour_3_pane_ParamLimits

0x776d,	// (0x00014338) aid_size_cell_colour_3_pane

0x7781,	// (0x0001434c) aid_size_cell_colour_4_pane_ParamLimits

0x7781,	// (0x0001434c) aid_size_cell_colour_4_pane

0x52fa,	// (0x00011ec5) title_pane_stacon_g1_ParamLimits

0x52fa,	// (0x00011ec5) title_pane_stacon_g1

0x9866,	// (0x00016431) popup_note_wait_window_g3_ParamLimits

0x9866,	// (0x00016431) popup_note_wait_window_g3

0x98dd,	// (0x000164a8) popup_note_wait_window_t5_ParamLimits

0x98dd,	// (0x000164a8) popup_note_wait_window_t5

0x36b9,	// (0x00010284) main_feb_china_hwr_fs_writing_pane

0x594b,	// (0x00012516) popup_feb_china_hwr_fs_window_ParamLimits

0x594b,	// (0x00012516) popup_feb_china_hwr_fs_window

0x5ffe,	// (0x00012bc9) aid_size_cell_hwr_fs_ParamLimits

0x5ffe,	// (0x00012bc9) aid_size_cell_hwr_fs

0x921f,	// (0x00015dea) bg_popup_sub_pane_cp3_ParamLimits

0x921f,	// (0x00015dea) bg_popup_sub_pane_cp3

0x6013,	// (0x00012bde) grid_hwr_fs_pane_ParamLimits

0x6013,	// (0x00012bde) grid_hwr_fs_pane

0x602b,	// (0x00012bf6) linegrid_hwr_fs_pane_ParamLimits

0x602b,	// (0x00012bf6) linegrid_hwr_fs_pane

0x603b,	// (0x00012c06) cell_hwr_fs_pane_ParamLimits

0x603b,	// (0x00012c06) cell_hwr_fs_pane

0x922b,	// (0x00015df6) linegrid_hwr_fs_pane_g1_ParamLimits

0x922b,	// (0x00015df6) linegrid_hwr_fs_pane_g1

0x9237,	// (0x00015e02) linegrid_hwr_fs_pane_g2_ParamLimits

0x9237,	// (0x00015e02) linegrid_hwr_fs_pane_g2

0x9249,	// (0x00015e14) linegrid_hwr_fs_pane_g3_ParamLimits

0x9249,	// (0x00015e14) linegrid_hwr_fs_pane_g3

0x605f,	// (0x00012c2a) linegrid_hwr_fs_pane_g4_ParamLimits

0x605f,	// (0x00012c2a) linegrid_hwr_fs_pane_g4

0x607d,	// (0x00012c48) linegrid_hwr_fs_pane_g5_ParamLimits

0x607d,	// (0x00012c48) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0001c396) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0001c396) linegrid_hwr_fs_pane_g

0x9255,	// (0x00015e20) cell_hwr_fs_pane_g1_ParamLimits

0x9255,	// (0x00015e20) cell_hwr_fs_pane_g1

0x8f38,	// (0x00015b03) cell_hwr_fs_pane_g2_ParamLimits

0x8f38,	// (0x00015b03) cell_hwr_fs_pane_g2

0x926b,	// (0x00015e36) cell_hwr_fs_pane_g3_ParamLimits

0x926b,	// (0x00015e36) cell_hwr_fs_pane_g3

0x9278,	// (0x00015e43) cell_hwr_fs_pane_g4_ParamLimits

0x9278,	// (0x00015e43) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x0001c3a1) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x0001c3a1) cell_hwr_fs_pane_g

0x6093,	// (0x00012c5e) cell_hwr_fs_pane_t1

0x36b9,	// (0x00010284) grid_highlight_pane_cp6

0x36b9,	// (0x00010284) main_idle_act2_pane

0x40a0,	// (0x00010c6b) aid_inside_area_popup_secondary

0x9f16,	// (0x00016ae1) aid_inside_area_window_primary_ParamLimits

0x9f16,	// (0x00016ae1) aid_inside_area_window_primary

0xabb8,	// (0x00017783) ai2_news_ticker_pane

0xabc0,	// (0x0001778b) aid_size_cell_ai1_link_ParamLimits

0xabc0,	// (0x0001778b) aid_size_cell_ai1_link

0xabda,	// (0x000177a5) popup_ai2_data_window_ParamLimits

0xabda,	// (0x000177a5) popup_ai2_data_window

0xabf8,	// (0x000177c3) popup_ai2_link_window_ParamLimits

0xabf8,	// (0x000177c3) popup_ai2_link_window

0x921f,	// (0x00015dea) bg_popup_sub_pane_cp4_ParamLimits

0x921f,	// (0x00015dea) bg_popup_sub_pane_cp4

0xac0e,	// (0x000177d9) grid_ai2_link_pane_ParamLimits

0xac0e,	// (0x000177d9) grid_ai2_link_pane

0xac25,	// (0x000177f0) popup_ai2_link_window_g1_ParamLimits

0xac25,	// (0x000177f0) popup_ai2_link_window_g1

0xac31,	// (0x000177fc) popup_ai2_link_window_g2_ParamLimits

0xac31,	// (0x000177fc) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x0001c574) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x0001c574) popup_ai2_link_window_g

0xac42,	// (0x0001780d) ai2_mp_button_pane

0xac4a,	// (0x00017815) ai2_mp_volume_pane

0x9419,	// (0x00015fe4) bg_popup_sub_pane_cp5_ParamLimits

0x9419,	// (0x00015fe4) bg_popup_sub_pane_cp5

0xac52,	// (0x0001781d) heading_ai2_gene_pane_ParamLimits

0xac52,	// (0x0001781d) heading_ai2_gene_pane

0xac5e,	// (0x00017829) list_ai2_gene_pane_ParamLimits

0xac5e,	// (0x00017829) list_ai2_gene_pane

0xaca6,	// (0x00017871) cell_ai2_link_pane_ParamLimits

0xaca6,	// (0x00017871) cell_ai2_link_pane

0xacbc,	// (0x00017887) cell_ai2_link_pane_g1

0x36b9,	// (0x00010284) grid_highlight_pane_cp7

0x63a1,	// (0x00012f6c) ai2_mp_volume_pane_g1

0xad8f,	// (0x0001795a) ai2_mp_volume_pane_g2

0xad04,	// (0x000178cf) list_ai2_gene_pane_t1

0xad97,	// (0x00017962) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x0001c58d) ai2_mp_volume_pane_g

0x63a9,	// (0x00012f74) volume_small_pane_cp3

0xad9f,	// (0x0001796a) aid_size_cell_ai2_button

0xada7,	// (0x00017972) grid_ai2_button_pane

0xadb0,	// (0x0001797b) cell_ai2_button_pane_ParamLimits

0xadb0,	// (0x0001797b) cell_ai2_button_pane

0x3540,	// (0x0001010b) cell_ai2_button_pane_g1

0x36b9,	// (0x00010284) grid_highlight_pane_cp8

0xad4f,	// (0x0001791a) ai2_gene_pane_t1_ParamLimits

0xad4f,	// (0x0001791a) ai2_gene_pane_t1

0x5889,	// (0x00012454) aid_height_parent_landscape

0xa5ce,	// (0x00017199) aid_height_set_list

0xa5df,	// (0x000171aa) aid_size_parent

0xa9d7,	// (0x000175a2) aid_size_cell_graphic_pane_ParamLimits

0xac6e,	// (0x00017839) popup_ai2_data_window_g1_ParamLimits

0xac6e,	// (0x00017839) popup_ai2_data_window_g1

0xac7a,	// (0x00017845) ai2_news_ticker_pane_g1

0xac82,	// (0x0001784d) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x0001c579) ai2_news_ticker_pane_g

0xac8a,	// (0x00017855) ai2_news_ticker_pane_t1

0xac98,	// (0x00017863) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x0001c57e) ai2_news_ticker_pane_t

0xacc5,	// (0x00017890) heading_ai2_gene_pane_g1

0xaccd,	// (0x00017898) heading_ai2_gene_pane_t1_ParamLimits

0xaccd,	// (0x00017898) heading_ai2_gene_pane_t1

0xace2,	// (0x000178ad) list_highlight_pane_cp6

0xacea,	// (0x000178b5) ai2_gene_pane_ParamLimits

0xacea,	// (0x000178b5) ai2_gene_pane

0xad12,	// (0x000178dd) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x0001c583) list_ai2_gene_pane_t

0xad20,	// (0x000178eb) list_highlight_pane_cp8_ParamLimits

0xad20,	// (0x000178eb) list_highlight_pane_cp8

0xad31,	// (0x000178fc) ai2_gene_pane_g1_ParamLimits

0xad31,	// (0x000178fc) ai2_gene_pane_g1

0xad43,	// (0x0001790e) ai2_gene_pane_g2_ParamLimits

0xad43,	// (0x0001790e) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x0001c588) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x0001c588) ai2_gene_pane_g

0x3dee,	// (0x000109b9) scroll_pane_cp12

0x5848,	// (0x00012413) control_pane_t3_ParamLimits

0x5848,	// (0x00012413) control_pane_t3

0x8ad7,	// (0x000156a2) status_small_pane_g8_ParamLimits

0x8ad7,	// (0x000156a2) status_small_pane_g8

0x5a49,	// (0x00012614) popup_find_window_ParamLimits

0x5c76,	// (0x00012841) popup_note_image_window_ParamLimits

0x9065,	// (0x00015c30) list_double2_graphic_pane_vc_g1_ParamLimits

0x9065,	// (0x00015c30) list_double2_graphic_pane_vc_g1

0x9071,	// (0x00015c3c) list_double2_graphic_pane_vc_g2_ParamLimits

0x9071,	// (0x00015c3c) list_double2_graphic_pane_vc_g2

0x907d,	// (0x00015c48) list_double2_graphic_pane_vc_g3_ParamLimits

0x907d,	// (0x00015c48) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x0001c35f) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x0001c35f) list_double2_graphic_pane_vc_g

0x9089,	// (0x00015c54) list_double2_graphic_pane_vc_t1_ParamLimits

0x9089,	// (0x00015c54) list_double2_graphic_pane_vc_t1

0x9071,	// (0x00015c3c) list_single_heading_pane_vc_g1_ParamLimits

0x9071,	// (0x00015c3c) list_single_heading_pane_vc_g1

0x907d,	// (0x00015c48) list_single_heading_pane_vc_g2_ParamLimits

0x907d,	// (0x00015c48) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c380) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c380) list_single_heading_pane_vc_g

0x9143,	// (0x00015d0e) list_single_heading_pane_vc_t1_ParamLimits

0x9143,	// (0x00015d0e) list_single_heading_pane_vc_t1

0x9159,	// (0x00015d24) list_single_heading_pane_vc_t2_ParamLimits

0x9159,	// (0x00015d24) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0001c385) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0001c385) list_single_heading_pane_vc_t

0x916b,	// (0x00015d36) list_setting_number_pane_vc_g1_ParamLimits

0x916b,	// (0x00015d36) list_setting_number_pane_vc_g1

0x9177,	// (0x00015d42) list_setting_number_pane_vc_g2_ParamLimits

0x9177,	// (0x00015d42) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001c38a) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c38a) list_setting_number_pane_vc_g

0x9183,	// (0x00015d4e) list_setting_number_pane_vc_t1_ParamLimits

0x9183,	// (0x00015d4e) list_setting_number_pane_vc_t1

0x9197,	// (0x00015d62) list_setting_number_pane_vc_t2_ParamLimits

0x9197,	// (0x00015d62) list_setting_number_pane_vc_t2

0x91b3,	// (0x00015d7e) list_setting_number_pane_vc_t3_ParamLimits

0x91b3,	// (0x00015d7e) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0001c38f) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0001c38f) list_setting_number_pane_vc_t

0x91e1,	// (0x00015dac) set_value_pane_vc_ParamLimits

0x91e1,	// (0x00015dac) set_value_pane_vc

0xa7fd,	// (0x000173c8) list_double2_graphic_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_double2_graphic_pane_vc

0xa7fd,	// (0x000173c8) list_double2_large_graphic_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_double2_large_graphic_pane_vc

0xa7fd,	// (0x000173c8) list_double2_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_double2_pane_vc

0xa7fd,	// (0x000173c8) list_double_graphic_heading_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_double_graphic_heading_pane_vc

0xa7fd,	// (0x000173c8) list_double_graphic_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_double_graphic_pane_vc

0xa7fd,	// (0x000173c8) list_double_heading_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_double_heading_pane_vc

0xa811,	// (0x000173dc) list_double_large_graphic_pane_vc_ParamLimits

0xa811,	// (0x000173dc) list_double_large_graphic_pane_vc

0xa7fd,	// (0x000173c8) list_double_number_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_double_number_pane_vc

0xa7fd,	// (0x000173c8) list_double_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_double_pane_vc

0xa7fd,	// (0x000173c8) list_double_time_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_double_time_pane_vc

0xa7fd,	// (0x000173c8) list_setting_number_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_setting_number_pane_vc

0xa7fd,	// (0x000173c8) list_setting_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_setting_pane_vc

0xa7fd,	// (0x000173c8) list_single_graphic_heading_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_single_graphic_heading_pane_vc

0xa7fd,	// (0x000173c8) list_single_heading_pane_vc_ParamLimits

0xa7fd,	// (0x000173c8) list_single_heading_pane_vc

0xa833,	// (0x000173fe) list_single_number_heading_pane_vc_ParamLimits

0xa833,	// (0x000173fe) list_single_number_heading_pane_vc

0x9065,	// (0x00015c30) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9065,	// (0x00015c30) list_double_graphic_heading_pane_vc_g1

0x87c3,	// (0x0001538e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x87c3,	// (0x0001538e) list_double_graphic_heading_pane_vc_g2

0xade3,	// (0x000179ae) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xade3,	// (0x000179ae) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x0001c594) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x0001c594) list_double_graphic_heading_pane_vc_g

0xadef,	// (0x000179ba) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xadef,	// (0x000179ba) list_double_graphic_heading_pane_vc_t1

0xae05,	// (0x000179d0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae05,	// (0x000179d0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x0001c59b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x0001c59b) list_double_graphic_heading_pane_vc_t

0x916b,	// (0x00015d36) list_setting_pane_vc_g1_ParamLimits

0x916b,	// (0x00015d36) list_setting_pane_vc_g1

0x9177,	// (0x00015d42) list_setting_pane_vc_g2_ParamLimits

0x9177,	// (0x00015d42) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001c38a) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c38a) list_setting_pane_vc_g

0xb056,	// (0x00017c21) list_setting_pane_vc_t1_ParamLimits

0xb056,	// (0x00017c21) list_setting_pane_vc_t1

0xb072,	// (0x00017c3d) list_setting_pane_vc_t2_ParamLimits

0xb072,	// (0x00017c3d) list_setting_pane_vc_t2

0x0001,

0xf9fe,	// (0x0001c5c9) list_setting_pane_vc_t_ParamLimits

0xf9fe,	// (0x0001c5c9) list_setting_pane_vc_t

0x91e1,	// (0x00015dac) set_value_pane_cp_vc_ParamLimits

0x91e1,	// (0x00015dac) set_value_pane_cp_vc

0x9071,	// (0x00015c3c) list_single_number_heading_pane_vc_g1_ParamLimits

0x9071,	// (0x00015c3c) list_single_number_heading_pane_vc_g1

0x907d,	// (0x00015c48) list_single_number_heading_pane_vc_g2_ParamLimits

0x907d,	// (0x00015c48) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c380) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c380) list_single_number_heading_pane_vc_g

0xb08e,	// (0x00017c59) list_single_number_heading_pane_vc_t1_ParamLimits

0xb08e,	// (0x00017c59) list_single_number_heading_pane_vc_t1

0xb0a4,	// (0x00017c6f) list_single_number_heading_pane_vc_t2_ParamLimits

0xb0a4,	// (0x00017c6f) list_single_number_heading_pane_vc_t2

0xb0ba,	// (0x00017c85) list_single_number_heading_pane_vc_t3_ParamLimits

0xb0ba,	// (0x00017c85) list_single_number_heading_pane_vc_t3

0x0002,

0xfa03,	// (0x0001c5ce) list_single_number_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x0001c5ce) list_single_number_heading_pane_vc_t

0x9065,	// (0x00015c30) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9065,	// (0x00015c30) list_single_graphic_heading_pane_vc_g1

0x9071,	// (0x00015c3c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9071,	// (0x00015c3c) list_single_graphic_heading_pane_vc_g4

0x907d,	// (0x00015c48) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x907d,	// (0x00015c48) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x0001c35f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x0001c35f) list_single_graphic_heading_pane_vc_g

0xb08e,	// (0x00017c59) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb08e,	// (0x00017c59) list_single_graphic_heading_pane_vc_t1

0xb0cc,	// (0x00017c97) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb0cc,	// (0x00017c97) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0a,	// (0x0001c5d5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0a,	// (0x0001c5d5) list_single_graphic_heading_pane_vc_t

0x9071,	// (0x00015c3c) list_double2_pane_vc_g1_ParamLimits

0x9071,	// (0x00015c3c) list_double2_pane_vc_g1

0x907d,	// (0x00015c48) list_double2_pane_vc_g2_ParamLimits

0x907d,	// (0x00015c48) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c380) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c380) list_double2_pane_vc_g

0xb0de,	// (0x00017ca9) list_double2_pane_vc_t1_ParamLimits

0xb0de,	// (0x00017ca9) list_double2_pane_vc_t1

0xb0f4,	// (0x00017cbf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb0f4,	// (0x00017cbf) list_double2_large_graphic_pane_vc_g1

0x9071,	// (0x00015c3c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9071,	// (0x00015c3c) list_double2_large_graphic_pane_vc_g2

0x907d,	// (0x00015c48) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x907d,	// (0x00015c48) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0f,	// (0x0001c5da) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0f,	// (0x0001c5da) list_double2_large_graphic_pane_vc_g

0xb100,	// (0x00017ccb) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb100,	// (0x00017ccb) list_double2_large_graphic_pane_vc_t1

0xb116,	// (0x00017ce1) list_double_time_pane_vc_g1_ParamLimits

0xb116,	// (0x00017ce1) list_double_time_pane_vc_g1

0xb122,	// (0x00017ced) list_double_time_pane_vc_g2_ParamLimits

0xb122,	// (0x00017ced) list_double_time_pane_vc_g2

0x0001,

0xfa16,	// (0x0001c5e1) list_double_time_pane_vc_g_ParamLimits

0xfa16,	// (0x0001c5e1) list_double_time_pane_vc_g

0xb12e,	// (0x00017cf9) list_double_time_pane_vc_t1_ParamLimits

0xb12e,	// (0x00017cf9) list_double_time_pane_vc_t1

0xb15e,	// (0x00017d29) list_double_time_pane_vc_t2_ParamLimits

0xb15e,	// (0x00017d29) list_double_time_pane_vc_t2

0xb187,	// (0x00017d52) list_double_time_pane_vc_t3_ParamLimits

0xb187,	// (0x00017d52) list_double_time_pane_vc_t3

0xb199,	// (0x00017d64) list_double_time_pane_vc_t4_ParamLimits

0xb199,	// (0x00017d64) list_double_time_pane_vc_t4

0x0003,

0xfa1b,	// (0x0001c5e6) list_double_time_pane_vc_t_ParamLimits

0xfa1b,	// (0x0001c5e6) list_double_time_pane_vc_t

0x9071,	// (0x00015c3c) list_double_pane_vc_g1_ParamLimits

0x9071,	// (0x00015c3c) list_double_pane_vc_g1

0x907d,	// (0x00015c48) list_double_pane_vc_g2_ParamLimits

0x907d,	// (0x00015c48) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c380) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c380) list_double_pane_vc_g

0xb1ad,	// (0x00017d78) list_double_pane_vc_t1_ParamLimits

0xb1ad,	// (0x00017d78) list_double_pane_vc_t1

0xb1c1,	// (0x00017d8c) list_double_pane_vc_t2_ParamLimits

0xb1c1,	// (0x00017d8c) list_double_pane_vc_t2

0x0001,

0xfa24,	// (0x0001c5ef) list_double_pane_vc_t_ParamLimits

0xfa24,	// (0x0001c5ef) list_double_pane_vc_t

0x9071,	// (0x00015c3c) list_double_number_pane_vc_g1_ParamLimits

0x9071,	// (0x00015c3c) list_double_number_pane_vc_g1

0x907d,	// (0x00015c48) list_double_number_pane_vc_g2_ParamLimits

0x907d,	// (0x00015c48) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c380) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c380) list_double_number_pane_vc_g

0xb1d7,	// (0x00017da2) list_double_number_pane_vc_t1_ParamLimits

0xb1d7,	// (0x00017da2) list_double_number_pane_vc_t1

0xb1e9,	// (0x00017db4) list_double_number_pane_vc_t2_ParamLimits

0xb1e9,	// (0x00017db4) list_double_number_pane_vc_t2

0xb1c1,	// (0x00017d8c) list_double_number_pane_vc_t3_ParamLimits

0xb1c1,	// (0x00017d8c) list_double_number_pane_vc_t3

0x0002,

0xfa29,	// (0x0001c5f4) list_double_number_pane_vc_t_ParamLimits

0xfa29,	// (0x0001c5f4) list_double_number_pane_vc_t

0xb1fd,	// (0x00017dc8) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb1fd,	// (0x00017dc8) list_double_large_graphic_pane_vc_g1

0xb21f,	// (0x00017dea) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb21f,	// (0x00017dea) list_double_large_graphic_pane_vc_g2

0xb233,	// (0x00017dfe) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb233,	// (0x00017dfe) list_double_large_graphic_pane_vc_g3

0xb242,	// (0x00017e0d) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb242,	// (0x00017e0d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa30,	// (0x0001c5fb) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa30,	// (0x0001c5fb) list_double_large_graphic_pane_vc_g

0xb24e,	// (0x00017e19) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb24e,	// (0x00017e19) list_double_large_graphic_pane_vc_t1

0xb26a,	// (0x00017e35) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb26a,	// (0x00017e35) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa39,	// (0x0001c604) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa39,	// (0x0001c604) list_double_large_graphic_pane_vc_t

0x87c3,	// (0x0001538e) list_double_heading_pane_vc_g1_ParamLimits

0x87c3,	// (0x0001538e) list_double_heading_pane_vc_g1

0xade3,	// (0x000179ae) list_double_heading_pane_vc_g2_ParamLimits

0xade3,	// (0x000179ae) list_double_heading_pane_vc_g2

0x0001,

0xfa3e,	// (0x0001c609) list_double_heading_pane_vc_g_ParamLimits

0xfa3e,	// (0x0001c609) list_double_heading_pane_vc_g

0xb28a,	// (0x00017e55) list_double_heading_pane_vc_t1_ParamLimits

0xb28a,	// (0x00017e55) list_double_heading_pane_vc_t1

0xb29c,	// (0x00017e67) list_double_heading_pane_vc_t2_ParamLimits

0xb29c,	// (0x00017e67) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0001c60e) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0001c60e) list_double_heading_pane_vc_t

0xb2b4,	// (0x00017e7f) list_double_graphic_pane_vc_g1_ParamLimits

0xb2b4,	// (0x00017e7f) list_double_graphic_pane_vc_g1

0xb2c0,	// (0x00017e8b) list_double_graphic_pane_vc_g2_ParamLimits

0xb2c0,	// (0x00017e8b) list_double_graphic_pane_vc_g2

0x9071,	// (0x00015c3c) list_double_graphic_pane_vc_g3_ParamLimits

0x9071,	// (0x00015c3c) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0001c613) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0001c613) list_double_graphic_pane_vc_g

0xb2dd,	// (0x00017ea8) list_double_graphic_pane_vc_t1_ParamLimits

0xb2dd,	// (0x00017ea8) list_double_graphic_pane_vc_t1

0xb307,	// (0x00017ed2) list_double_graphic_pane_vc_t2_ParamLimits

0xb307,	// (0x00017ed2) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0001c61c) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0001c61c) list_double_graphic_pane_vc_t

0x4e3a,	// (0x00011a05) aid_size_cell_fastswap

0x4e42,	// (0x00011a0d) aid_size_cell_touch_ParamLimits

0x4e42,	// (0x00011a0d) aid_size_cell_touch

0x50ad,	// (0x00011c78) popup_fast_swap_wide_window_ParamLimits

0x50ad,	// (0x00011c78) popup_fast_swap_wide_window

0x51cb,	// (0x00011d96) touch_pane_ParamLimits

0x51cb,	// (0x00011d96) touch_pane

0x3e7f,	// (0x00010a4a) button_value_adjust_pane_cp2

0x3e87,	// (0x00010a52) button_value_adjust_pane_cp4

0x3e8f,	// (0x00010a5a) form_field_data_pane_cp2

0x7cf1,	// (0x000148bc) form_field_data_wide_pane_cp2

0x7fa1,	// (0x00014b6c) bg_scroll_pane_ParamLimits

0x5466,	// (0x00012031) scroll_handle_pane_ParamLimits

0x547a,	// (0x00012045) scroll_sc2_down_pane_ParamLimits

0x547a,	// (0x00012045) scroll_sc2_down_pane

0x7fd2,	// (0x00014b9d) scroll_sc2_up_pane_ParamLimits

0x7fd2,	// (0x00014b9d) scroll_sc2_up_pane

0xb7e7,	// (0x000183b2) grid_wheel_folder_pane_g1_ParamLimits

0xb7e7,	// (0x000183b2) grid_wheel_folder_pane_g1

0x5641,	// (0x0001220c) clock_nsta_pane_cp2_ParamLimits

0x5641,	// (0x0001220c) clock_nsta_pane_cp2

0x885a,	// (0x00015425) listscroll_midp_pane_ParamLimits

0x8866,	// (0x00015431) midp_canvas_pane

0x8b51,	// (0x0001571c) nsta_clock_indic_pane

0x8b8d,	// (0x00015758) listscroll_form_pane_vc

0x8b95,	// (0x00015760) listscroll_set_pane_vc_ParamLimits

0x8b95,	// (0x00015760) listscroll_set_pane_vc

0x8c94,	// (0x0001585f) clock_nsta_pane

0x8d11,	// (0x000158dc) indicator_nsta_pane

0x8fff,	// (0x00015bca) bg_popup_sub_pane_cp2_ParamLimits

0x9013,	// (0x00015bde) find_pane_cp2_ParamLimits

0x9013,	// (0x00015bde) find_pane_cp2

0x9029,	// (0x00015bf4) grid_toobar_pane_ParamLimits

0x91f3,	// (0x00015dbe) list_form_gen_pane_vc_ParamLimits

0x91f3,	// (0x00015dbe) list_form_gen_pane_vc

0x9209,	// (0x00015dd4) scroll_pane_cp8_vc_ParamLimits

0x9209,	// (0x00015dd4) scroll_pane_cp8_vc

0x9285,	// (0x00015e50) data_form_wide_pane_vc_ParamLimits

0x9285,	// (0x00015e50) data_form_wide_pane_vc

0x9291,	// (0x00015e5c) form_field_data_wide_pane_vc_g1

0x9299,	// (0x00015e64) form_field_data_wide_pane_vc_t1_ParamLimits

0x9299,	// (0x00015e64) form_field_data_wide_pane_vc_t1

0x3eeb,	// (0x00010ab6) input_focus_pane_cp6_vc_ParamLimits

0x3eeb,	// (0x00010ab6) input_focus_pane_cp6_vc

0x95c4,	// (0x0001618f) list_midp_pane_ParamLimits

0x95d0,	// (0x0001619b) scroll_pane_cp16_ParamLimits

0x95d0,	// (0x0001619b) scroll_pane_cp16

0x963a,	// (0x00016205) button_value_adjust_pane_ParamLimits

0x963a,	// (0x00016205) button_value_adjust_pane

0xa5f1,	// (0x000171bc) button_value_adjust_pane_cp6_ParamLimits

0xa5f1,	// (0x000171bc) button_value_adjust_pane_cp6

0xa739,	// (0x00017304) settings_code_pane_cp_ParamLimits

0xa739,	// (0x00017304) settings_code_pane_cp

0x3540,	// (0x0001010b) cell_touch_pane_g1

0x3540,	// (0x0001010b) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0001c2a4) cell_touch_pane_g

0xadc2,	// (0x0001798d) cell_touch_pane_cp_ParamLimits

0xadc2,	// (0x0001798d) cell_touch_pane_cp

0xadd2,	// (0x0001799d) cell_touch_pane_ParamLimits

0xadd2,	// (0x0001799d) cell_touch_pane

0x3540,	// (0x0001010b) scroll_sc2_down_pane_g1

0x3540,	// (0x0001010b) scroll_sc2_up_pane_g1

0x36b9,	// (0x00010284) bg_set_opt_pane_cp4_vc

0xae23,	// (0x000179ee) list_set_graphic_pane_vc_g1_ParamLimits

0xae23,	// (0x000179ee) list_set_graphic_pane_vc_g1

0xae2f,	// (0x000179fa) list_set_graphic_pane_vc_g2_ParamLimits

0xae2f,	// (0x000179fa) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x0001c5a0) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x0001c5a0) list_set_graphic_pane_vc_g

0xae3b,	// (0x00017a06) text_primary_small_cp13_vc_ParamLimits

0xae3b,	// (0x00017a06) text_primary_small_cp13_vc

0xae53,	// (0x00017a1e) list_set_graphic_pane_vc_ParamLimits

0xae53,	// (0x00017a1e) list_set_graphic_pane_vc

0x36b9,	// (0x00010284) input_focus_pane_cp2_vc

0x3540,	// (0x0001010b) setting_code_pane_vc_g1

0x3813,	// (0x000103de) setting_code_pane_vc_t1

0xae66,	// (0x00017a31) set_text_pane_vc_t1_ParamLimits

0xae66,	// (0x00017a31) set_text_pane_vc_t1

0x36b9,	// (0x00010284) input_focus_pane_cp1_vc

0xae87,	// (0x00017a52) list_set_text_pane_vc

0x3540,	// (0x0001010b) setting_text_pane_vc_g1

0x36b9,	// (0x00010284) bg_set_opt_pane_cp2_vc

0x37e2,	// (0x000103ad) setting_slider_graphic_pane_vc_g1

0xae91,	// (0x00017a5c) setting_slider_graphic_pane_vc_t1

0xaea3,	// (0x00017a6e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x0001c5a5) setting_slider_graphic_pane_vc_t

0xaeb5,	// (0x00017a80) slider_set_pane_cp_vc

0xaebf,	// (0x00017a8a) slider_set_pane_vc_g1

0xaec8,	// (0x00017a93) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x0001c5aa) slider_set_pane_vc_g

0x3fa6,	// (0x00010b71) set_opt_bg_pane_g1_copy1

0x3fae,	// (0x00010b79) set_opt_bg_pane_g2_copy1

0xaef4,	// (0x00017abf) set_opt_bg_pane_g3_copy1

0x3fbe,	// (0x00010b89) set_opt_bg_pane_g4_copy1

0x3fc6,	// (0x00010b91) set_opt_bg_pane_g5_copy1

0x3fce,	// (0x00010b99) set_opt_bg_pane_g6_copy1

0xaefe,	// (0x00017ac9) set_opt_bg_pane_g7_copy1

0xaf08,	// (0x00017ad3) set_opt_bg_pane_g8_copy1

0xaf12,	// (0x00017add) set_opt_bg_pane_g9_copy1

0x36b9,	// (0x00010284) bg_set_opt_pane_cp_vc

0xaf1c,	// (0x00017ae7) setting_slider_pane_vc_t1

0xaf2b,	// (0x00017af6) setting_slider_pane_vc_t2

0xaf3d,	// (0x00017b08) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x0001c5b9) setting_slider_pane_vc_t

0xaf4f,	// (0x00017b1a) slider_set_pane_vc

0x60a1,	// (0x00012c6c) volume_set_pane_vc_g1

0x60aa,	// (0x00012c75) volume_set_pane_vc_g2

0x60b3,	// (0x00012c7e) volume_set_pane_vc_g3

0x60bc,	// (0x00012c87) volume_set_pane_vc_g4

0x60c5,	// (0x00012c90) volume_set_pane_vc_g5

0x60ce,	// (0x00012c99) volume_set_pane_vc_g6

0x60d7,	// (0x00012ca2) volume_set_pane_vc_g7

0x60e0,	// (0x00012cab) volume_set_pane_vc_g8

0x60e9,	// (0x00012cb4) volume_set_pane_vc_g9

0x60f2,	// (0x00012cbd) volume_set_pane_vc_g10

0x0009,

0xf88c,	// (0x0001c457) volume_set_pane_vc_g

0xaf59,	// (0x00017b24) volume_set_pane_vc

0xaf63,	// (0x00017b2e) button_value_adjust_pane_cp1_vc

0xaf6d,	// (0x00017b38) list_highlight_pane_cp2_vc

0xaf76,	// (0x00017b41) list_set_pane_vc_ParamLimits

0xaf76,	// (0x00017b41) list_set_pane_vc

0xafe4,	// (0x00017baf) main_pane_set_vc_t1_ParamLimits

0xafe4,	// (0x00017baf) main_pane_set_vc_t1

0xaff9,	// (0x00017bc4) main_pane_set_vc_t2_ParamLimits

0xaff9,	// (0x00017bc4) main_pane_set_vc_t2

0xb00b,	// (0x00017bd6) main_pane_set_vc_t3_ParamLimits

0xb00b,	// (0x00017bd6) main_pane_set_vc_t3

0xb01f,	// (0x00017bea) main_pane_set_vc_t4_ParamLimits

0xb01f,	// (0x00017bea) main_pane_set_vc_t4

0x0003,

0xf9f5,	// (0x0001c5c0) main_pane_set_vc_t_ParamLimits

0xf9f5,	// (0x0001c5c0) main_pane_set_vc_t

0xb033,	// (0x00017bfe) setting_code_pane_vc_ParamLimits

0xb033,	// (0x00017bfe) setting_code_pane_vc

0xb044,	// (0x00017c0f) setting_slider_graphic_pane_vc

0xb044,	// (0x00017c0f) setting_slider_pane_vc

0xb044,	// (0x00017c0f) setting_text_pane_vc

0xb044,	// (0x00017c0f) setting_volume_pane_vc

0xb04e,	// (0x00017c19) scroll_pane_cp121_vc

0x3e6d,	// (0x00010a38) set_content_pane_vc

0xb325,	// (0x00017ef0) button_value_adjust_pane_g1

0xb32e,	// (0x00017ef9) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0001c621) button_value_adjust_pane_g

0xb337,	// (0x00017f02) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb337,	// (0x00017f02) form_field_slider_wide_pane_vc_t1

0xb349,	// (0x00017f14) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb349,	// (0x00017f14) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0001c626) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0001c626) form_field_slider_wide_pane_vc_t

0x375b,	// (0x00010326) input_focus_pane_cp10_vc_ParamLimits

0x375b,	// (0x00010326) input_focus_pane_cp10_vc

0xb375,	// (0x00017f40) slider_cont_pane_cp1_vc_ParamLimits

0xb375,	// (0x00017f40) slider_cont_pane_cp1_vc

0xb387,	// (0x00017f52) slider_form_pane_g1_cp2

0xaec8,	// (0x00017a93) slider_form_pane_g2_cp2

0xb3b4,	// (0x00017f7f) form_field_slider_pane_vc_t3

0xb3c2,	// (0x00017f8d) form_field_slider_pane_vc_t4

0xb3d0,	// (0x00017f9b) slider_form_pane_vc_ParamLimits

0xb3d0,	// (0x00017f9b) slider_form_pane_vc

0xb3dd,	// (0x00017fa8) form_field_slider_pane_vc_t1_ParamLimits

0xb3dd,	// (0x00017fa8) form_field_slider_pane_vc_t1

0xb349,	// (0x00017f14) form_field_slider_pane_vc_t2_ParamLimits

0xb349,	// (0x00017f14) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0001c638) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0001c638) form_field_slider_pane_vc_t

0x375b,	// (0x00010326) input_focus_pane_cp9_vc_ParamLimits

0x375b,	// (0x00010326) input_focus_pane_cp9_vc

0xb3f3,	// (0x00017fbe) slider_cont_pane_vc_ParamLimits

0xb3f3,	// (0x00017fbe) slider_cont_pane_vc

0xb407,	// (0x00017fd2) list_form_graphic_pane_cp_vc_ParamLimits

0xb407,	// (0x00017fd2) list_form_graphic_pane_cp_vc

0x9291,	// (0x00015e5c) form_field_popup_wide_pane_vc_g1

0xb41c,	// (0x00017fe7) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb41c,	// (0x00017fe7) form_field_popup_wide_pane_vc_t1

0x3eeb,	// (0x00010ab6) input_focus_pane_cp8_vc_ParamLimits

0x3eeb,	// (0x00010ab6) input_focus_pane_cp8_vc

0xb461,	// (0x0001802c) list_form_wide_pane_vc_ParamLimits

0xb461,	// (0x0001802c) list_form_wide_pane_vc

0xb46d,	// (0x00018038) list_form_graphic_pane_vc_g1

0xb475,	// (0x00018040) list_form_graphic_pane_vc_t1_ParamLimits

0xb475,	// (0x00018040) list_form_graphic_pane_vc_t1

0x3773,	// (0x0001033e) list_highlight_pane_cp5_vc_ParamLimits

0x3773,	// (0x0001033e) list_highlight_pane_cp5_vc

0xb491,	// (0x0001805c) list_form_graphic_pane_vc_ParamLimits

0xb491,	// (0x0001805c) list_form_graphic_pane_vc

0x9291,	// (0x00015e5c) form_field_popup_pane_vc_g1

0xb4a7,	// (0x00018072) form_field_popup_pane_vc_t1_ParamLimits

0xb4a7,	// (0x00018072) form_field_popup_pane_vc_t1

0x3eeb,	// (0x00010ab6) input_focus_pane_cp7_vc_ParamLimits

0x3eeb,	// (0x00010ab6) input_focus_pane_cp7_vc

0xb4be,	// (0x00018089) list_form_pane_vc_ParamLimits

0xb4be,	// (0x00018089) list_form_pane_vc

0xb4ca,	// (0x00018095) data_form_pane_vc_t1_ParamLimits

0xb4ca,	// (0x00018095) data_form_pane_vc_t1

0x3fa6,	// (0x00010b71) input_focus_pane_vc_g1

0x3fae,	// (0x00010b79) input_focus_pane_vc_g2

0x3fb6,	// (0x00010b81) input_focus_pane_vc_g3

0x3fbe,	// (0x00010b89) input_focus_pane_vc_g4

0x3fc6,	// (0x00010b91) input_focus_pane_vc_g5

0x3fce,	// (0x00010b99) input_focus_pane_vc_g6

0x3fd6,	// (0x00010ba1) input_focus_pane_vc_g7

0x3fde,	// (0x00010ba9) input_focus_pane_vc_g8

0x3fe6,	// (0x00010bb1) input_focus_pane_vc_g9

0x3540,	// (0x0001010b) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0001c22d) input_focus_pane_vc_g

0x9285,	// (0x00015e50) data_form_pane_vc_ParamLimits

0x9285,	// (0x00015e50) data_form_pane_vc

0x9291,	// (0x00015e5c) form_field_data_pane_vc_g1

0xb4e7,	// (0x000180b2) form_field_data_pane_vc_t1_ParamLimits

0xb4e7,	// (0x000180b2) form_field_data_pane_vc_t1

0x3eeb,	// (0x00010ab6) input_focus_pane_vc_ParamLimits

0x3eeb,	// (0x00010ab6) input_focus_pane_vc

0xb501,	// (0x000180cc) button_value_adjust_pane_cp3_vc

0xb509,	// (0x000180d4) button_value_adjust_pane_cp5_vc

0xb511,	// (0x000180dc) form_field_data_pane_vc_ParamLimits

0xb511,	// (0x000180dc) form_field_data_pane_vc

0xb52c,	// (0x000180f7) form_field_data_pane_vc_cp2

0xb534,	// (0x000180ff) form_field_data_wide_pane_vc_ParamLimits

0xb534,	// (0x000180ff) form_field_data_wide_pane_vc

0xb54e,	// (0x00018119) form_field_data_wide_pane_vc_cp2

0xb556,	// (0x00018121) form_field_popup_pane_vc_ParamLimits

0xb556,	// (0x00018121) form_field_popup_pane_vc

0xb571,	// (0x0001813c) form_field_popup_wide_pane_vc_ParamLimits

0xb571,	// (0x0001813c) form_field_popup_wide_pane_vc

0xb58b,	// (0x00018156) form_field_slider_pane_vc_ParamLimits

0xb58b,	// (0x00018156) form_field_slider_pane_vc

0xb59e,	// (0x00018169) form_field_slider_wide_pane_vc_ParamLimits

0xb59e,	// (0x00018169) form_field_slider_wide_pane_vc

0xb5b1,	// (0x0001817c) grid_touch_1_pane_ParamLimits

0xb5b1,	// (0x0001817c) grid_touch_1_pane

0xb5bd,	// (0x00018188) grid_touch_2_pane_ParamLimits

0xb5bd,	// (0x00018188) grid_touch_2_pane

0x8b1c,	// (0x000156e7) touch_pane_g1_ParamLimits

0x8b1c,	// (0x000156e7) touch_pane_g1

0xb5d7,	// (0x000181a2) cell_app_pane_cp_wide_ParamLimits

0xb5d7,	// (0x000181a2) cell_app_pane_cp_wide

0xb5e8,	// (0x000181b3) grid_popup_fast_wide_pane_ParamLimits

0xb5e8,	// (0x000181b3) grid_popup_fast_wide_pane

0xb5fc,	// (0x000181c7) scroll_pane_cp19_ParamLimits

0xb5fc,	// (0x000181c7) scroll_pane_cp19

0x36b9,	// (0x00010284) bg_popup_window_pane_cp20

0xb610,	// (0x000181db) listscroll_popup_fast_wide_pane

0xb618,	// (0x000181e3) grid_indicator_nsta_pane

0xb62a,	// (0x000181f5) clock_nsta_pane_g1

0xb633,	// (0x000181fe) clock_nsta_pane_t1

0xb64f,	// (0x0001821a) cell_indicator_nsta_pane_ParamLimits

0xb64f,	// (0x0001821a) cell_indicator_nsta_pane

0xb684,	// (0x0001824f) cell_indicator_nsta_pane_g1

0xb692,	// (0x0001825d) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0001c649) cell_indicator_nsta_pane_g

0xb6a5,	// (0x00018270) clock_nsta_pane_cp

0xb6ae,	// (0x00018279) indicator_nsta_pane_cp

0xb6b8,	// (0x00018283) nsta_clock_indic_pane_g1

0x3852,	// (0x0001041d) grid_indicator_pane

0x80c4,	// (0x00014c8f) scroll_pane_cp29

0x5590,	// (0x0001215b) indicator_nsta_pane_cp2_ParamLimits

0x5590,	// (0x0001215b) indicator_nsta_pane_cp2

0x3773,	// (0x0001033e) main_apps_wheel_pane

0x94a1,	// (0x0001606c) form_midp_field_text_pane_ParamLimits

0x95f0,	// (0x000161bb) scroll_bar_cp050_ParamLimits

0xb711,	// (0x000182dc) cell_indicator_pane_ParamLimits

0xb711,	// (0x000182dc) cell_indicator_pane

0xb729,	// (0x000182f4) cell_indicator_pane_g1

0xb733,	// (0x000182fe) grid_wheel_folder_pane_ParamLimits

0xb733,	// (0x000182fe) grid_wheel_folder_pane

0xb747,	// (0x00018312) list_wheel_apps_pane_ParamLimits

0xb747,	// (0x00018312) list_wheel_apps_pane

0xb75a,	// (0x00018325) main_apps_wheel_pane_g1_ParamLimits

0xb75a,	// (0x00018325) main_apps_wheel_pane_g1

0xb776,	// (0x00018341) main_apps_wheel_pane_g2_ParamLimits

0xb776,	// (0x00018341) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0001c665) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0001c665) main_apps_wheel_pane_g

0xb792,	// (0x0001835d) main_apps_wheel_pane_t1_ParamLimits

0xb792,	// (0x0001835d) main_apps_wheel_pane_t1

0xb7bb,	// (0x00018386) list_wheel_apps_pane_g1

0xb7c3,	// (0x0001838e) list_wheel_apps_pane_g2

0xb7cb,	// (0x00018396) list_wheel_apps_pane_g3

0xb7d3,	// (0x0001839e) list_wheel_apps_pane_g4

0xb7dd,	// (0x000183a8) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0001c66a) list_wheel_apps_pane_g

0x86c3,	// (0x0001528e) navi_icon_text_pane

0x8bc5,	// (0x00015790) aid_fill_nsta

0xb7fe,	// (0x000183c9) navi_icon_text_pane_g1

0xb80a,	// (0x000183d5) navi_icon_text_pane_t1

0x8559,	// (0x00015124) list_set_graphic_pane_t1_ParamLimits

0x8559,	// (0x00015124) list_set_graphic_pane_t1

0x9d5d,	// (0x00016928) popup_midp_note_alarm_window_t6_ParamLimits

0x9d5d,	// (0x00016928) popup_midp_note_alarm_window_t6

0x9d6f,	// (0x0001693a) popup_midp_note_alarm_window_t7_ParamLimits

0x9d6f,	// (0x0001693a) popup_midp_note_alarm_window_t7

0x9d81,	// (0x0001694c) popup_midp_note_alarm_window_t8_ParamLimits

0x9d81,	// (0x0001694c) popup_midp_note_alarm_window_t8

0x9d93,	// (0x0001695e) popup_midp_note_alarm_window_t9_ParamLimits

0x9d93,	// (0x0001695e) popup_midp_note_alarm_window_t9

0x9da5,	// (0x00016970) popup_midp_note_alarm_window_t10_ParamLimits

0x9da5,	// (0x00016970) popup_midp_note_alarm_window_t10

0x9db7,	// (0x00016982) popup_midp_note_alarm_window_t11_ParamLimits

0x9db7,	// (0x00016982) popup_midp_note_alarm_window_t11

0x9dc9,	// (0x00016994) scroll_pane_cp17_ParamLimits

0x9dc9,	// (0x00016994) scroll_pane_cp17

0x60a1,	// (0x00012c6c) volume_small_pane_cp_g1

0x63b2,	// (0x00012f7d) volume_small_pane_cp_g2

0x63bb,	// (0x00012f86) volume_small_pane_cp_g3

0x63c4,	// (0x00012f8f) volume_small_pane_cp_g4

0x63cd,	// (0x00012f98) volume_small_pane_cp_g5

0x63d6,	// (0x00012fa1) volume_small_pane_cp_g6

0x63df,	// (0x00012faa) volume_small_pane_cp_g7

0x63e8,	// (0x00012fb3) volume_small_pane_cp_g8

0x63f1,	// (0x00012fbc) volume_small_pane_cp_g9

0x63fa,	// (0x00012fc5) volume_small_pane_cp_g10

0x8930,	// (0x000154fb) midp_ticker_pane_g1_ParamLimits

0x893c,	// (0x00015507) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0001c2f9) midp_ticker_pane_g_ParamLimits

0x8948,	// (0x00015513) midp_ticker_pane_t1_ParamLimits

0x8bdb,	// (0x000157a6) aid_fill_nsta_2

0x95dc,	// (0x000161a7) list_form2_midp_pane

0xa7b5,	// (0x00017380) midp_editing_number_pane_ParamLimits

0xa7c4,	// (0x0001738f) midp_ticker_pane_ParamLimits

0xb81c,	// (0x000183e7) form2_midp_field_pane

0xb840,	// (0x0001840b) scroll_pane_cp51

0xb860,	// (0x0001842b) form2_midp_button_pane_ParamLimits

0xb860,	// (0x0001842b) form2_midp_button_pane

0xb872,	// (0x0001843d) form2_midp_content_pane_ParamLimits

0xb872,	// (0x0001843d) form2_midp_content_pane

0xb88c,	// (0x00018457) form2_midp_field_choice_group_pane

0xb894,	// (0x0001845f) form2_midp_field_pane_g1

0xb89c,	// (0x00018467) form2_midp_field_pane_g2

0xb8a4,	// (0x0001846f) form2_midp_field_pane_g3

0xb8ac,	// (0x00018477) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0001c68f) form2_midp_field_pane_g

0xb8b4,	// (0x0001847f) form2_midp_gauge_slider_pane

0xb8bc,	// (0x00018487) form2_midp_gauge_wait_pane

0xb8c4,	// (0x0001848f) form2_midp_image_pane_ParamLimits

0xb8c4,	// (0x0001848f) form2_midp_image_pane

0xb8df,	// (0x000184aa) form2_midp_label_pane_ParamLimits

0xb8df,	// (0x000184aa) form2_midp_label_pane

0xb8fe,	// (0x000184c9) form2_midp_label_pane_cp_ParamLimits

0xb8fe,	// (0x000184c9) form2_midp_label_pane_cp

0xb91f,	// (0x000184ea) form2_midp_string_pane_ParamLimits

0xb91f,	// (0x000184ea) form2_midp_string_pane

0xb931,	// (0x000184fc) form2_midp_text_pane_ParamLimits

0xb931,	// (0x000184fc) form2_midp_text_pane

0xb952,	// (0x0001851d) form2_midp_time_pane

0xb962,	// (0x0001852d) input_focus_pane_cp51_ParamLimits

0xb962,	// (0x0001852d) input_focus_pane_cp51

0xb97a,	// (0x00018545) form2_midp_label_pane_t1_ParamLimits

0xb97a,	// (0x00018545) form2_midp_label_pane_t1

0xb9c0,	// (0x0001858b) form2_mdip_text_pane_t1_ParamLimits

0xb9c0,	// (0x0001858b) form2_mdip_text_pane_t1

0xb9df,	// (0x000185aa) form2_midp_time_pane_t1

0xb9fa,	// (0x000185c5) form2_midp_gauge_slider_pane_t1

0xba0c,	// (0x000185d7) form2_midp_gauge_slider_pane_t2

0xba1e,	// (0x000185e9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0001c698) form2_midp_gauge_slider_pane_t

0xba30,	// (0x000185fb) form2_midp_slider_pane

0xba3c,	// (0x00018607) form2_midp_gauge_wait_pane_t1

0xba4a,	// (0x00018615) form2_midp_wait_pane_ParamLimits

0xba4a,	// (0x00018615) form2_midp_wait_pane

0xba75,	// (0x00018640) list_single_2graphic_pane_cp4_ParamLimits

0xba75,	// (0x00018640) list_single_2graphic_pane_cp4

0x92ee,	// (0x00015eb9) list_single_midp_graphic_pane_cp_ParamLimits

0x92ee,	// (0x00015eb9) list_single_midp_graphic_pane_cp

0x36b9,	// (0x00010284) list_highlight_pane_cp20

0xba8e,	// (0x00018659) list_single_2graphic_pane_g1_cp4

0xacc5,	// (0x00017890) list_single_2graphic_pane_g2_cp4

0xba96,	// (0x00018661) list_single_2graphic_pane_t1_cp4

0x3773,	// (0x0001033e) list_highlight_pane_cp21

0xbaa5,	// (0x00018670) list_single_midp_graphic_pane_g4_cp

0xbab4,	// (0x0001867f) list_single_midp_graphic_pane_t1_cp

0xbac9,	// (0x00018694) form2_mdip_string_pane_t1_ParamLimits

0xbac9,	// (0x00018694) form2_mdip_string_pane_t1

0x36b9,	// (0x00010284) bg_wml_button_pane_cp2

0x3540,	// (0x0001010b) form2_midp_image_pane_g1

0x3e0b,	// (0x000109d6) list_double_large_graphic_pane_g5_ParamLimits

0x3e0b,	// (0x000109d6) list_double_large_graphic_pane_g5

0x885a,	// (0x00015425) midp_form_pane_ParamLimits

0x3773,	// (0x0001033e) main_apps_wheel_pane_ParamLimits

0x5c9e,	// (0x00012869) popup_preview_window_ParamLimits

0x5c9e,	// (0x00012869) popup_preview_window

0x5e85,	// (0x00012a50) popup_touch_info_window_ParamLimits

0x5e85,	// (0x00012a50) popup_touch_info_window

0x5ea7,	// (0x00012a72) popup_touch_menu_window_ParamLimits

0x5ea7,	// (0x00012a72) popup_touch_menu_window

0x3536,	// (0x00010101) bg_popup_sub_pane_cp6

0xbb65,	// (0x00018730) list_touch_menu_pane

0xbb6d,	// (0x00018738) list_single_touch_menu_pane_ParamLimits

0xbb6d,	// (0x00018738) list_single_touch_menu_pane

0xbb85,	// (0x00018750) list_single_touch_menu_pane_t1

0x3773,	// (0x0001033e) bg_popup_sub_pane_cp7_ParamLimits

0x3773,	// (0x0001033e) bg_popup_sub_pane_cp7

0xbb93,	// (0x0001875e) heading_sub_pane

0xbb9b,	// (0x00018766) list_touch_info_pane_ParamLimits

0xbb9b,	// (0x00018766) list_touch_info_pane

0xbbaa,	// (0x00018775) list_single_touch_info_pane_ParamLimits

0xbbaa,	// (0x00018775) list_single_touch_info_pane

0xbbbc,	// (0x00018787) list_single_touch_info_pane_t1

0xbbca,	// (0x00018795) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0001c6a6) list_single_touch_info_pane_t

0x8852,	// (0x0001541d) bg_popup_heading_pane_cp

0xbbd8,	// (0x000187a3) heading_sub_pane_t1

0x921f,	// (0x00015dea) bg_popup_preview_window_pane_cp_ParamLimits

0x921f,	// (0x00015dea) bg_popup_preview_window_pane_cp

0xbb93,	// (0x0001875e) heading_preview_pane

0xbb9b,	// (0x00018766) list_preview_pane_ParamLimits

0xbb9b,	// (0x00018766) list_preview_pane

0xbbe6,	// (0x000187b1) popup_preview_window_g1

0xbbaa,	// (0x00018775) list_single_preview_pane_ParamLimits

0xbbaa,	// (0x00018775) list_single_preview_pane

0xbbee,	// (0x000187b9) list_single_preview_pane_g1

0xbbf6,	// (0x000187c1) list_single_preview_pane_t1

0xbbbc,	// (0x00018787) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0001c6ab) list_single_preview_pane_t

0xbc04,	// (0x000187cf) bg_popup_heading_pane_cp2_ParamLimits

0xbc04,	// (0x000187cf) bg_popup_heading_pane_cp2

0xbc1a,	// (0x000187e5) heading_preview_pane_g1

0xbc22,	// (0x000187ed) heading_preview_pane_t1_ParamLimits

0xbc22,	// (0x000187ed) heading_preview_pane_t1

0x3869,	// (0x00010434) soft_indicator_pane_t1_ParamLimits

0x3dcb,	// (0x00010996) scroll_pane_ParamLimits

0x7fc0,	// (0x00014b8b) scroll_sc2_left_pane

0x7fc9,	// (0x00014b94) scroll_sc2_right_pane

0x7fe8,	// (0x00014bb3) scroll_bg_pane_g1_ParamLimits

0x7ffd,	// (0x00014bc8) scroll_bg_pane_g2_ParamLimits

0x8015,	// (0x00014be0) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0001c284) scroll_bg_pane_g_ParamLimits

0x7fe8,	// (0x00014bb3) scroll_handle_pane_g1_ParamLimits

0x8037,	// (0x00014c02) scroll_handle_pane_g2_ParamLimits

0x8015,	// (0x00014be0) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0001c28b) scroll_handle_pane_g_ParamLimits

0x58e3,	// (0x000124ae) popup_choice_list_window_ParamLimits

0x58e3,	// (0x000124ae) popup_choice_list_window

0x900b,	// (0x00015bd6) choice_list_pane

0x90c7,	// (0x00015c92) cell_toolbar_pane_t1

0x90ef,	// (0x00015cba) toolbar_button_pane_ParamLimits

0xa293,	// (0x00016e5e) ai_gene_pane_1_t2_ParamLimits

0xa293,	// (0x00016e5e) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x0001c4b3) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x0001c4b3) ai_gene_pane_1_t

0xbc3f,	// (0x0001880a) scroll_sc2_left_pane_g1

0xbc3f,	// (0x0001880a) scroll_sc2_right_pane_g1

0x8b81,	// (0x0001574c) bg_popup_sub_pane_cp10

0xbc49,	// (0x00018814) list_choice_list_pane

0xbc62,	// (0x0001882d) list_single_choice_list_pane_ParamLimits

0xbc62,	// (0x0001882d) list_single_choice_list_pane

0xbc7a,	// (0x00018845) list_single_choice_list_pane_g1

0x40de,	// (0x00010ca9) list_single_choice_list_pane_t1_ParamLimits

0x40de,	// (0x00010ca9) list_single_choice_list_pane_t1

0xbc82,	// (0x0001884d) choice_list_pane_g1

0xbc8a,	// (0x00018855) choice_list_pane_t1

0x3536,	// (0x00010101) input_focus_pane_cp11

0x42ac,	// (0x00010e77) title_pane_stacon_g2_ParamLimits

0x42ac,	// (0x00010e77) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0001c26a) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001c26a) title_pane_stacon_g

0x8852,	// (0x0001541d) cursor_press_pane

0x599d,	// (0x00012568) popup_fep_hwr_window_ParamLimits

0x599d,	// (0x00012568) popup_fep_hwr_window

0x5a27,	// (0x000125f2) popup_fep_vkb_window_ParamLimits

0x5a27,	// (0x000125f2) popup_fep_vkb_window

0xbc98,	// (0x00018863) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0001c6d4) fep_vkb_side_pane_g_ParamLimits

0x643c,	// (0x00013007) fep_hwr_candidate_pane_ParamLimits

0x643c,	// (0x00013007) fep_hwr_candidate_pane

0x6466,	// (0x00013031) fep_hwr_side_pane_ParamLimits

0x6466,	// (0x00013031) fep_hwr_side_pane

0x6488,	// (0x00013053) fep_hwr_top_pane_ParamLimits

0x6488,	// (0x00013053) fep_hwr_top_pane

0x64a0,	// (0x0001306b) fep_hwr_write_pane_ParamLimits

0x64a0,	// (0x0001306b) fep_hwr_write_pane

0xfb09,	// (0x0001c6d4) fep_vkb_side_pane_g

0xbca0,	// (0x0001886b) fep_hwr_top_pane_g1

0xbcb2,	// (0x0001887d) fep_hwr_top_pane_g2

0x64da,	// (0x000130a5) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0001c6b0) fep_hwr_top_pane_g

0x64ef,	// (0x000130ba) fep_hwr_top_text_pane

0x818c,	// (0x00014d57) fep_hwr_top_text_pane_g1

0xbce8,	// (0x000188b3) fep_hwr_top_text_pane_t1

0x65f9,	// (0x000131c4) fep_hwr_candidate_pane_g1

0xbf33,	// (0x00018afe) fep_vkb_keypad_pane_g3_ParamLimits

0xbf33,	// (0x00018afe) fep_vkb_keypad_pane_g3

0xbf5f,	// (0x00018b2a) fep_vkb_keypad_pane_g4_ParamLimits

0xbf5f,	// (0x00018b2a) fep_vkb_keypad_pane_g4

0xbfd6,	// (0x00018ba1) fep_vkb_bottom_pane_g2_ParamLimits

0xbfd6,	// (0x00018ba1) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0001c6db) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0001c6db) fep_vkb_bottom_pane_g

0xbc3f,	// (0x0001880a) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0001c6e5) cell_vkb_side_pane_g

0xc061,	// (0x00018c2c) cell_vkb_side_pane_t1

0xc06f,	// (0x00018c3a) cell_vkb_side_pane_t1_copy1

0xbc3f,	// (0x0001880a) bg_fep_vkb_candidate_pane_g2

0xc1b3,	// (0x00018d7e) cell_vkb_candidate_pane_ParamLimits

0xbcf6,	// (0x000188c1) aid_size_cell_vkb_ParamLimits

0xbcf6,	// (0x000188c1) aid_size_cell_vkb

0xc1b3,	// (0x00018d7e) cell_vkb_candidate_pane

0x6620,	// (0x000131eb) bg_popup_fep_shadow_pane_g1

0xbd88,	// (0x00018953) fep_vkb_bottom_pane_ParamLimits

0xbd88,	// (0x00018953) fep_vkb_bottom_pane

0xbdc5,	// (0x00018990) fep_vkb_candidate_pane_ParamLimits

0xbdc5,	// (0x00018990) fep_vkb_candidate_pane

0xbde1,	// (0x000189ac) fep_vkb_keypad_pane_ParamLimits

0xbde1,	// (0x000189ac) fep_vkb_keypad_pane

0xbe14,	// (0x000189df) fep_vkb_side_pane_ParamLimits

0xbe14,	// (0x000189df) fep_vkb_side_pane

0xbe50,	// (0x00018a1b) fep_vkb_top_pane_ParamLimits

0xbe50,	// (0x00018a1b) fep_vkb_top_pane

0xbe8c,	// (0x00018a57) fep_vkb_top_pane_g1_ParamLimits

0xbe8c,	// (0x00018a57) fep_vkb_top_pane_g1

0xbe9b,	// (0x00018a66) fep_vkb_top_pane_g2_ParamLimits

0xbe9b,	// (0x00018a66) fep_vkb_top_pane_g2

0xbeaa,	// (0x00018a75) fep_vkb_top_pane_g3_ParamLimits

0xbeaa,	// (0x00018a75) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0001c6cb) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0001c6cb) fep_vkb_top_pane_g

0xbec8,	// (0x00018a93) fep_vkb_top_text_pane_ParamLimits

0xbec8,	// (0x00018a93) fep_vkb_top_text_pane

0xbed9,	// (0x00018aa4) fep_vkb_side_pane_g1_ParamLimits

0xbed9,	// (0x00018aa4) fep_vkb_side_pane_g1

0xbf22,	// (0x00018aed) grid_vkb_side_pane_ParamLimits

0xbf22,	// (0x00018aed) grid_vkb_side_pane

0x6628,	// (0x000131f3) bg_popup_fep_shadow_pane_g2

0x6631,	// (0x000131fc) bg_popup_fep_shadow_pane_g3

0x6639,	// (0x00013204) bg_popup_fep_shadow_pane_g4

0x6642,	// (0x0001320d) bg_popup_fep_shadow_pane_g5

0x664c,	// (0x00013217) bg_popup_fep_shadow_pane_g6

0x6654,	// (0x0001321f) bg_popup_fep_shadow_pane_g7

0x3fbe,	// (0x00010b89) bg_popup_fep_shadow_pane_g8

0xbf81,	// (0x00018b4c) grid_vkb_keypad_number_pane_ParamLimits

0xbf81,	// (0x00018b4c) grid_vkb_keypad_number_pane

0xbf95,	// (0x00018b60) grid_vkb_keypad_pane_ParamLimits

0xbf95,	// (0x00018b60) grid_vkb_keypad_pane

0xbfbb,	// (0x00018b86) fep_vkb_bottom_pane_g1_ParamLimits

0xbfbb,	// (0x00018b86) fep_vkb_bottom_pane_g1

0xbfe4,	// (0x00018baf) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbfe4,	// (0x00018baf) grid_vkb_keypad_bottom_left_pane

0xbff9,	// (0x00018bc4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbff9,	// (0x00018bc4) grid_vkb_keypad_bottom_right_pane

0xc00e,	// (0x00018bd9) fep_vkb_top_text_pane_g1

0xc029,	// (0x00018bf4) fep_vkb_top_text_pane_t1

0xc03e,	// (0x00018c09) cell_vkb_side_pane_ParamLimits

0xc03e,	// (0x00018c09) cell_vkb_side_pane

0xbc3f,	// (0x0001880a) cell_vkb_side_pane_g1

0xc07d,	// (0x00018c48) cell_vkb_keypad_pane_ParamLimits

0xc07d,	// (0x00018c48) cell_vkb_keypad_pane

0xc10a,	// (0x00018cd5) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0001c6f8) bg_popup_fep_shadow_pane_g

0x6666,	// (0x00013231) cell_hwr_side_pane_g1

0x6666,	// (0x00013231) cell_hwr_side_pane_g2

0xc114,	// (0x00018cdf) cell_vkb_keypad_pane_t1

0xc122,	// (0x00018ced) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc122,	// (0x00018ced) cell_vkb_keypad_bottom_left_pane

0xc13f,	// (0x00018d0a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc13f,	// (0x00018d0a) cell_vkb_keypad_bottom_right_pane

0xbc3f,	// (0x0001880a) cell_vkb_keypad_bottom_left_pane_g1

0xbc3f,	// (0x0001880a) cell_vkb_keypad_bottom_right_pane_g1

0xc178,	// (0x00018d43) cell_vkb_keypad_number_pane_ParamLimits

0xc178,	// (0x00018d43) cell_vkb_keypad_number_pane

0xc197,	// (0x00018d62) cell_vkb_keypad_number_pane_g1

0xc1a1,	// (0x00018d6c) cell_vkb_keypad_number_pane_g2

0xc1aa,	// (0x00018d75) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0001c6ea) cell_vkb_keypad_number_pane_g

0xc114,	// (0x00018cdf) cell_vkb_keypad_number_pane_t1

0xc1d4,	// (0x00018d9f) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x0001c70b) cell_hwr_side_pane_g

0xc1ed,	// (0x00018db8) cell_hwr_side_pane_t1

0x6670,	// (0x0001323b) cell_hwr_side_pane_t1_copy1

0x667e,	// (0x00013249) cell_hwr_candidate_pane_g1

0x66ad,	// (0x00013278) cell_hwr_candidate_pane_t1

0xbc3f,	// (0x0001880a) cell_vkb_candidate_pane_g2

0xc231,	// (0x00018dfc) cell_vkb_candidate_pane_t1

0x6403,	// (0x00012fce) bg_popup_fep_shadow_pane_ParamLimits

0x6403,	// (0x00012fce) bg_popup_fep_shadow_pane

0x64ba,	// (0x00013085) bg_fep_hwr_top_pane_g4

0xbcc4,	// (0x0001888f) bg_hwr_side_pane_g1_ParamLimits

0xbcc4,	// (0x0001888f) bg_hwr_side_pane_g1

0x652d,	// (0x000130f8) cell_hwr_side_pane_ParamLimits

0x652d,	// (0x000130f8) cell_hwr_side_pane

0x656a,	// (0x00013135) fep_hwr_write_pane_g1_ParamLimits

0x656a,	// (0x00013135) fep_hwr_write_pane_g1

0x6577,	// (0x00013142) fep_hwr_write_pane_g2_ParamLimits

0x6577,	// (0x00013142) fep_hwr_write_pane_g2

0x6584,	// (0x0001314f) fep_hwr_write_pane_g3_ParamLimits

0x6584,	// (0x0001314f) fep_hwr_write_pane_g3

0x6592,	// (0x0001315d) fep_hwr_write_pane_g4_ParamLimits

0x6592,	// (0x0001315d) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0001c6b7) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0001c6b7) fep_hwr_write_pane_g

0x64ba,	// (0x00013085) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x64ba,	// (0x00013085) bg_fep_hwr_candidate_pane_g2

0x65a7,	// (0x00013172) cell_hwr_candidate_pane_ParamLimits

0x65a7,	// (0x00013172) cell_hwr_candidate_pane

0x65f9,	// (0x000131c4) fep_hwr_candidate_pane_g1_ParamLimits

0xbd24,	// (0x000188ef) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd24,	// (0x000188ef) bg_popup_fep_shadow_pane_cp2

0xbeba,	// (0x00018a85) fep_vkb_top_pane_g4_ParamLimits

0xbeba,	// (0x00018a85) fep_vkb_top_pane_g4

0xbf00,	// (0x00018acb) fep_vkb_side_pane_g2_ParamLimits

0xbf00,	// (0x00018acb) fep_vkb_side_pane_g2

0x7c0f,	// (0x000147da) list_setting_pane_t4_ParamLimits

0x7c0f,	// (0x000147da) list_setting_pane_t4

0x7c8b,	// (0x00014856) list_setting_number_pane_t5_ParamLimits

0x7c8b,	// (0x00014856) list_setting_number_pane_t5

0x81d3,	// (0x00014d9e) list_double_heading_pane_cp2_ParamLimits

0x81d3,	// (0x00014d9e) list_double_heading_pane_cp2

0xc23f,	// (0x00018e0a) list_double_heading_pane_g1_cp2_ParamLimits

0xc23f,	// (0x00018e0a) list_double_heading_pane_g1_cp2

0xc24b,	// (0x00018e16) list_double_heading_pane_g2_cp2_ParamLimits

0xc24b,	// (0x00018e16) list_double_heading_pane_g2_cp2

0xc25f,	// (0x00018e2a) list_double_heading_pane_t1_cp2_ParamLimits

0xc25f,	// (0x00018e2a) list_double_heading_pane_t1_cp2

0xc275,	// (0x00018e40) list_double_heading_pane_t2_cp2_ParamLimits

0xc275,	// (0x00018e40) list_double_heading_pane_t2_cp2

0x352e,	// (0x000100f9) aid_value_unit2

0x510b,	// (0x00011cd6) popup_preview_fixed_window

0x3949,	// (0x00010514) bg_popup_preview_window_pane_cp02

0xc287,	// (0x00018e52) list_preview_fixed_pane

0xc2cd,	// (0x00018e98) list_empty_pane_fp_ParamLimits

0xc2cd,	// (0x00018e98) list_empty_pane_fp

0xc2cd,	// (0x00018e98) list_single_cale_day_pane_fp_ParamLimits

0xc2cd,	// (0x00018e98) list_single_cale_day_pane_fp

0xc2cd,	// (0x00018e98) list_single_graphic_heading_pane_fp_ParamLimits

0xc2cd,	// (0x00018e98) list_single_graphic_heading_pane_fp

0xc2cd,	// (0x00018e98) list_single_graphic_pane_fp_ParamLimits

0xc2cd,	// (0x00018e98) list_single_graphic_pane_fp

0xc2cd,	// (0x00018e98) list_single_heading_pane_fp_ParamLimits

0xc2cd,	// (0x00018e98) list_single_heading_pane_fp

0xc2cd,	// (0x00018e98) list_single_pane_fp_ParamLimits

0xc2cd,	// (0x00018e98) list_single_pane_fp

0xc2e6,	// (0x00018eb1) list_single_pane_fp_g1_ParamLimits

0xc2e6,	// (0x00018eb1) list_single_pane_fp_g1

0x3e20,	// (0x000109eb) list_single_pane_fp_g2_ParamLimits

0x3e20,	// (0x000109eb) list_single_pane_fp_g2

0xc2f2,	// (0x00018ebd) list_single_pane_fp_g3_ParamLimits

0xc2f2,	// (0x00018ebd) list_single_pane_fp_g3

0xc306,	// (0x00018ed1) list_single_pane_fp_g4_ParamLimits

0xc306,	// (0x00018ed1) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x0001c71e) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x0001c71e) list_single_pane_fp_g

0xc312,	// (0x00018edd) list_single_pane_fp_t1_ParamLimits

0xc312,	// (0x00018edd) list_single_pane_fp_t1

0xc329,	// (0x00018ef4) list_single_graphic_pane_fp_g1_ParamLimits

0xc329,	// (0x00018ef4) list_single_graphic_pane_fp_g1

0xc2e6,	// (0x00018eb1) list_single_graphic_pane_fp_g2_ParamLimits

0xc2e6,	// (0x00018eb1) list_single_graphic_pane_fp_g2

0x3e20,	// (0x000109eb) list_single_graphic_pane_fp_g3_ParamLimits

0x3e20,	// (0x000109eb) list_single_graphic_pane_fp_g3

0xc2f2,	// (0x00018ebd) list_single_graphic_pane_fp_g4_ParamLimits

0xc2f2,	// (0x00018ebd) list_single_graphic_pane_fp_g4

0xc306,	// (0x00018ed1) list_single_graphic_pane_fp_g5_ParamLimits

0xc306,	// (0x00018ed1) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001c727) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001c727) list_single_graphic_pane_fp_g

0xc335,	// (0x00018f00) list_single_graphic_pane_fp_t1_ParamLimits

0xc335,	// (0x00018f00) list_single_graphic_pane_fp_t1

0xc329,	// (0x00018ef4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc329,	// (0x00018ef4) list_single_graphic_heading_pane_fp_g1

0xc2e6,	// (0x00018eb1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc2e6,	// (0x00018eb1) list_single_graphic_heading_pane_fp_g2

0x3e20,	// (0x000109eb) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3e20,	// (0x000109eb) list_single_graphic_heading_pane_fp_g3

0xc2f2,	// (0x00018ebd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc2f2,	// (0x00018ebd) list_single_graphic_heading_pane_fp_g4

0xc306,	// (0x00018ed1) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc306,	// (0x00018ed1) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001c727) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001c727) list_single_graphic_heading_pane_fp_g

0xc34b,	// (0x00018f16) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc34b,	// (0x00018f16) list_single_graphic_heading_pane_fp_t1

0xc361,	// (0x00018f2c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc361,	// (0x00018f2c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x0001c732) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x0001c732) list_single_graphic_heading_pane_fp_t

0xc373,	// (0x00018f3e) list_single_cale_day_pane_fp_g1_ParamLimits

0xc373,	// (0x00018f3e) list_single_cale_day_pane_fp_g1

0xc3ab,	// (0x00018f76) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3ab,	// (0x00018f76) list_single_cale_day_pane_fp_g2

0xc3b7,	// (0x00018f82) list_single_cale_day_pane_fp_g3_ParamLimits

0xc3b7,	// (0x00018f82) list_single_cale_day_pane_fp_g3

0xc3df,	// (0x00018faa) list_single_cale_day_pane_fp_g4_ParamLimits

0xc3df,	// (0x00018faa) list_single_cale_day_pane_fp_g4

0xc403,	// (0x00018fce) list_single_cale_day_pane_fp_g5_ParamLimits

0xc403,	// (0x00018fce) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x0001c737) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x0001c737) list_single_cale_day_pane_fp_g

0xc427,	// (0x00018ff2) list_single_cale_day_pane_fp_t1_ParamLimits

0xc427,	// (0x00018ff2) list_single_cale_day_pane_fp_t1

0xc44d,	// (0x00019018) list_single_cale_day_pane_fp_t2_ParamLimits

0xc44d,	// (0x00019018) list_single_cale_day_pane_fp_t2

0xc466,	// (0x00019031) list_single_cale_day_pane_fp_t3_ParamLimits

0xc466,	// (0x00019031) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x0001c742) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x0001c742) list_single_cale_day_pane_fp_t

0xc2e6,	// (0x00018eb1) list_empty_pane_fp_g1_ParamLimits

0xc2e6,	// (0x00018eb1) list_empty_pane_fp_g1

0xc47f,	// (0x0001904a) list_empty_pane_fp_t1

0xc48d,	// (0x00019058) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x0001c749) list_empty_pane_fp_t

0xc2e6,	// (0x00018eb1) list_single_heading_pane_fp_g1_ParamLimits

0xc2e6,	// (0x00018eb1) list_single_heading_pane_fp_g1

0x3e20,	// (0x000109eb) list_single_heading_pane_fp_g2_ParamLimits

0x3e20,	// (0x000109eb) list_single_heading_pane_fp_g2

0xc2f2,	// (0x00018ebd) list_single_heading_pane_fp_g3_ParamLimits

0xc2f2,	// (0x00018ebd) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x0001c74e) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0001c74e) list_single_heading_pane_fp_g

0xc49b,	// (0x00019066) list_single_heading_pane_fp_t1_ParamLimits

0xc49b,	// (0x00019066) list_single_heading_pane_fp_t1

0xc4ad,	// (0x00019078) list_single_heading_pane_fp_t2_ParamLimits

0xc4ad,	// (0x00019078) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0001c755) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0001c755) list_single_heading_pane_fp_t

0x40f3,	// (0x00010cbe) aid_size_cell_fast

0x392c,	// (0x000104f7) soft_indicator_pane_cp1_t1

0x4130,	// (0x00010cfb) cell_app_pane_cp2_ParamLimits

0x4130,	// (0x00010cfb) cell_app_pane_cp2

0x6425,	// (0x00012ff0) fep_hwr_candidate_drop_down_list_pane

0x6613,	// (0x000131de) fep_hwr_candidate_pane_g3_ParamLimits

0x6613,	// (0x000131de) fep_hwr_candidate_pane_g3

0x2a86,	// (0x0000f651) fep_hwr_candidate_pane_g4_ParamLimits

0x2a86,	// (0x0000f651) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0001c6c4) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0001c6c4) fep_hwr_candidate_pane_g

0xbdb4,	// (0x0001897f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbdb4,	// (0x0001897f) fep_vkb_candidate_drop_down_list_pane

0xc1dc,	// (0x00018da7) fep_vkb_candidate_pane_g3

0xc1e4,	// (0x00018daf) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0001c6f1) fep_vkb_candidate_pane_g

0x667e,	// (0x00013249) cell_hwr_candidate_pane_g1_ParamLimits

0x668c,	// (0x00013257) cell_hwr_candidate_pane_g3_ParamLimits

0x668c,	// (0x00013257) cell_hwr_candidate_pane_g3

0xca0c,	// (0x000195d7) cell_hwr_candidate_pane_g4_ParamLimits

0xca0c,	// (0x000195d7) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x0001c710) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x0001c710) cell_hwr_candidate_pane_g

0xc1fb,	// (0x00018dc6) cell_vkb_candidate_pane_g3_ParamLimits

0xc1fb,	// (0x00018dc6) cell_vkb_candidate_pane_g3

0xc216,	// (0x00018de1) cell_vkb_candidate_pane_g4_ParamLimits

0xc216,	// (0x00018de1) cell_vkb_candidate_pane_g4

0xc4c3,	// (0x0001908e) cell_app_pane_cp2_g1_ParamLimits

0xc4c3,	// (0x0001908e) cell_app_pane_cp2_g1

0xc4e1,	// (0x000190ac) cell_app_pane_cp2_g2_ParamLimits

0xc4e1,	// (0x000190ac) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x0001c75a) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x0001c75a) cell_app_pane_cp2_g

0xc4ed,	// (0x000190b8) cell_app_pane_cp2_t1_ParamLimits

0xc4ed,	// (0x000190b8) cell_app_pane_cp2_t1

0x3eeb,	// (0x00010ab6) grid_highlight_pane_cp1_ParamLimits

0x3eeb,	// (0x00010ab6) grid_highlight_pane_cp1

0x66cb,	// (0x00013296) cell_hwr_candidate_pane_cp1_ParamLimits

0x66cb,	// (0x00013296) cell_hwr_candidate_pane_cp1

0x667e,	// (0x00013249) fep_hwr_candidate_drop_down_list_pane_g1

0x66ef,	// (0x000132ba) fep_hwr_candidate_drop_down_list_pane_g2

0x66fc,	// (0x000132c7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x0001c75f) fep_hwr_candidate_drop_down_list_pane_g

0x6709,	// (0x000132d4) fep_hwr_candidate_drop_down_list_scroll_pane

0x6712,	// (0x000132dd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6712,	// (0x000132dd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x671f,	// (0x000132ea) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x671f,	// (0x000132ea) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x672c,	// (0x000132f7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x672c,	// (0x000132f7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6739,	// (0x00013304) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6739,	// (0x00013304) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6754,	// (0x0001331f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6754,	// (0x0001331f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x676f,	// (0x0001333a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x676f,	// (0x0001333a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x678a,	// (0x00013355) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x678a,	// (0x00013355) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x67a5,	// (0x00013370) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x67a5,	// (0x00013370) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x0001c766) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x0001c766) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc4ff,	// (0x000190ca) cell_vkb_candidate_pane_cp1_ParamLimits

0xc4ff,	// (0x000190ca) cell_vkb_candidate_pane_cp1

0xbeba,	// (0x00018a85) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbeba,	// (0x00018a85) fep_vkb_candidate_drop_down_list_pane_g1

0xc525,	// (0x000190f0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc525,	// (0x000190f0) fep_vkb_candidate_drop_down_list_pane_g2

0xc532,	// (0x000190fd) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc532,	// (0x000190fd) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbac,	// (0x0001c777) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbac,	// (0x0001c777) fep_vkb_candidate_drop_down_list_pane_g

0xc53f,	// (0x0001910a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc53f,	// (0x0001910a) fep_vkb_candidate_drop_down_list_scroll_pane

0xc54c,	// (0x00019117) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc54c,	// (0x00019117) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc559,	// (0x00019124) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc559,	// (0x00019124) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc565,	// (0x00019130) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc565,	// (0x00019130) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc571,	// (0x0001913c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc571,	// (0x0001913c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc592,	// (0x0001915d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc592,	// (0x0001915d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc5b3,	// (0x0001917e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc5b3,	// (0x0001917e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc5d4,	// (0x0001919f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc5d4,	// (0x0001919f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc5f5,	// (0x000191c0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc5f5,	// (0x000191c0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x0001c77e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x0001c77e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7562,	// (0x0001412d) title_pane_g1_ParamLimits

0x756f,	// (0x0001413a) title_pane_g2_ParamLimits

0xf529,	// (0x0001c0f4) title_pane_g_ParamLimits

0x817c,	// (0x00014d47) aid_call2_pane

0x8184,	// (0x00014d4f) aid_call_pane

0x818c,	// (0x00014d57) popup_clock_analogue_window_g1

0x818c,	// (0x00014d57) popup_clock_analogue_window_g2

0x548f,	// (0x0001205a) popup_clock_analogue_window_g3

0x5498,	// (0x00012063) popup_clock_analogue_window_g4

0x3540,	// (0x0001010b) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0001c299) popup_clock_analogue_window_g

0x54a0,	// (0x0001206b) popup_clock_analogue_window_t1

0x54ae,	// (0x00012079) clock_digital_number_pane_ParamLimits

0x54ae,	// (0x00012079) clock_digital_number_pane

0x54ba,	// (0x00012085) clock_digital_number_pane_cp02_ParamLimits

0x54ba,	// (0x00012085) clock_digital_number_pane_cp02

0x54c6,	// (0x00012091) clock_digital_number_pane_cp03_ParamLimits

0x54c6,	// (0x00012091) clock_digital_number_pane_cp03

0x54d2,	// (0x0001209d) clock_digital_number_pane_cp04_ParamLimits

0x54d2,	// (0x0001209d) clock_digital_number_pane_cp04

0x54de,	// (0x000120a9) clock_digital_separator_pane_ParamLimits

0x54de,	// (0x000120a9) clock_digital_separator_pane

0x54ea,	// (0x000120b5) popup_clock_digital_window_t1_ParamLimits

0x54ea,	// (0x000120b5) popup_clock_digital_window_t1

0x3540,	// (0x0001010b) clock_digital_number_pane_g1

0x3540,	// (0x0001010b) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0001c2a4) clock_digital_number_pane_g

0x3540,	// (0x0001010b) clock_digital_separator_pane_g1

0x3540,	// (0x0001010b) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0001c2a4) clock_digital_separator_pane_g

0x8bc5,	// (0x00015790) aid_fill_nsta_ParamLimits

0x8d11,	// (0x000158dc) indicator_nsta_pane_ParamLimits

0x8ea2,	// (0x00015a6d) popup_clock_analogue_window

0x8ea2,	// (0x00015a6d) popup_clock_digital_window

0xb618,	// (0x000181e3) grid_indicator_nsta_pane_ParamLimits

0xb641,	// (0x0001820c) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0001c644) clock_nsta_pane_t

0x5453,	// (0x0001201e) aid_size_max_handle

0x545d,	// (0x00012028) aid_size_min_handle

0x8852,	// (0x0001541d) editor_scroll_pane

0xc610,	// (0x000191db) ex_editor_pane

0x40b9,	// (0x00010c84) scroll_pane_cp13

0x3df7,	// (0x000109c2) scroll_pane_cp14

0x81bb,	// (0x00014d86) scroll_pane_cp36

0x81e9,	// (0x00014db4) list_single_graphic_hl_pane_cp2_ParamLimits

0x81e9,	// (0x00014db4) list_single_graphic_hl_pane_cp2

0xa87a,	// (0x00017445) list_single_graphic_hl_pane_ParamLimits

0xa87a,	// (0x00017445) list_single_graphic_hl_pane

0xc618,	// (0x000191e3) aid_size_min_hl_cp1

0xc621,	// (0x000191ec) list_highlight_pane_cp34_ParamLimits

0xc621,	// (0x000191ec) list_highlight_pane_cp34

0xc632,	// (0x000191fd) list_single_graphic_hl_pane_g1_ParamLimits

0xc632,	// (0x000191fd) list_single_graphic_hl_pane_g1

0xc63f,	// (0x0001920a) list_single_graphic_hl_pane_g2_ParamLimits

0xc63f,	// (0x0001920a) list_single_graphic_hl_pane_g2

0xc63f,	// (0x0001920a) list_single_graphic_hl_pane_g3_ParamLimits

0xc63f,	// (0x0001920a) list_single_graphic_hl_pane_g3

0x8718,	// (0x000152e3) list_single_graphic_hl_pane_g4_ParamLimits

0x8718,	// (0x000152e3) list_single_graphic_hl_pane_g4

0xc64b,	// (0x00019216) list_single_graphic_hl_pane_g5_ParamLimits

0xc64b,	// (0x00019216) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x0001c78f) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x0001c78f) list_single_graphic_hl_pane_g

0xc65f,	// (0x0001922a) list_single_graphic_hl_pane_t1_ParamLimits

0xc65f,	// (0x0001922a) list_single_graphic_hl_pane_t1

0xc675,	// (0x00019240) aid_size_min_hl_cp2

0xc67e,	// (0x00019249) list_highlight_pane_cp34_cp2_ParamLimits

0xc67e,	// (0x00019249) list_highlight_pane_cp34_cp2

0xc632,	// (0x000191fd) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc632,	// (0x000191fd) list_single_graphic_hl_pane_g1_cp2

0xc68b,	// (0x00019256) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc68b,	// (0x00019256) list_single_graphic_hl_pane_g2_cp2

0xc697,	// (0x00019262) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc697,	// (0x00019262) list_single_graphic_hl_pane_g3_cp2

0xc6a5,	// (0x00019270) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc6a5,	// (0x00019270) list_single_graphic_hl_pane_g4_cp2

0xc6b1,	// (0x0001927c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc6b1,	// (0x0001927c) list_single_graphic_hl_pane_g5_cp2

0x5797,	// (0x00012362) control_pane_g4_ParamLimits

0x5797,	// (0x00012362) control_pane_g4

0x8b81,	// (0x0001574c) bg_popup_sub_pane_cp10_ParamLimits

0xbc49,	// (0x00018814) list_choice_list_pane_ParamLimits

0xbc58,	// (0x00018823) scroll_pane_cp23

0x3949,	// (0x00010514) bg_popup_preview_window_pane_cp02_ParamLimits

0xc287,	// (0x00018e52) list_preview_fixed_pane_ParamLimits

0xc29d,	// (0x00018e68) list_preview_fixed_pane_cp_ParamLimits

0xc29d,	// (0x00018e68) list_preview_fixed_pane_cp

0xc2a9,	// (0x00018e74) popup_preview_fixed_window_g1_ParamLimits

0xc2a9,	// (0x00018e74) popup_preview_fixed_window_g1

0xc2b5,	// (0x00018e80) popup_preview_fixed_window_g2_ParamLimits

0xc2b5,	// (0x00018e80) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x0001c717) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x0001c717) popup_preview_fixed_window_g

0x53bd,	// (0x00011f88) aid_navi_side_left_pane_ParamLimits

0x53d2,	// (0x00011f9d) aid_navi_side_right_pane_ParamLimits

0x53ea,	// (0x00011fb5) navi_icon_pane_stacon_ParamLimits

0x53fe,	// (0x00011fc9) navi_navi_pane_stacon_ParamLimits

0x53ea,	// (0x00011fb5) navi_text_pane_stacon_ParamLimits

0x4fc2,	// (0x00011b8d) main_text_info_pane

0xc6db,	// (0x000192a6) listscroll_text_info_pane

0xc6e3,	// (0x000192ae) list_text_info_pane_ParamLimits

0xc6e3,	// (0x000192ae) list_text_info_pane

0xc6f2,	// (0x000192bd) scroll_pane_cp24_ParamLimits

0xc6f2,	// (0x000192bd) scroll_pane_cp24

0xc710,	// (0x000192db) list_text_info_pane_t1_ParamLimits

0xc710,	// (0x000192db) list_text_info_pane_t1

0x5905,	// (0x000124d0) popup_fast_swap2_window_ParamLimits

0x5905,	// (0x000124d0) popup_fast_swap2_window

0xc735,	// (0x00019300) aid_size_cell_fast2

0x3536,	// (0x00010101) bg_popup_window_pane_cp17

0xc73f,	// (0x0001930a) heading_pane_cp2

0xc747,	// (0x00019312) listscroll_fast2_pane

0xc74f,	// (0x0001931a) grid_fast2_pane

0xc759,	// (0x00019324) listscroll_fast2_pane_g1

0xc763,	// (0x0001932e) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x0001c79a) listscroll_fast2_pane_g

0x40b9,	// (0x00010c84) scroll_pane_cp26

0xc76d,	// (0x00019338) cell_fast2_pane_ParamLimits

0xc76d,	// (0x00019338) cell_fast2_pane

0xc784,	// (0x0001934f) cell_fast2_pane_g1

0xc78d,	// (0x00019358) cell_fast2_pane_g2

0xc796,	// (0x00019361) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x0001c79f) cell_fast2_pane_g

0x3bbe,	// (0x00010789) grid_highlight_pane_cp9

0x58c7,	// (0x00012492) main_eswt_pane_ParamLimits

0x58c7,	// (0x00012492) main_eswt_pane

0xc707,	// (0x000192d2) list_single_text_info_pane

0xc79e,	// (0x00019369) eswt_ctrl_button_pane

0xc79e,	// (0x00019369) eswt_ctrl_canvas_pane

0xc7a6,	// (0x00019371) eswt_ctrl_combo_pane

0xc79e,	// (0x00019369) eswt_ctrl_default_pane

0xc79e,	// (0x00019369) eswt_ctrl_label_pane

0xc7ae,	// (0x00019379) eswt_ctrl_wait_pane

0xc7b6,	// (0x00019381) eswt_shell_pane

0x3536,	// (0x00010101) listscroll_eswt_app_pane

0xc7d6,	// (0x000193a1) popup_eswt_tasktip_window_ParamLimits

0xc7d6,	// (0x000193a1) popup_eswt_tasktip_window

0x921f,	// (0x00015dea) bg_popup_window_pane_cp18

0xc7ef,	// (0x000193ba) eswt_control_pane_g1_ParamLimits

0xc7ef,	// (0x000193ba) eswt_control_pane_g1

0xc7fc,	// (0x000193c7) eswt_control_pane_g2_ParamLimits

0xc7fc,	// (0x000193c7) eswt_control_pane_g2

0xc809,	// (0x000193d4) eswt_control_pane_g3_ParamLimits

0xc809,	// (0x000193d4) eswt_control_pane_g3

0xc816,	// (0x000193e1) eswt_control_pane_g4_ParamLimits

0xc816,	// (0x000193e1) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x0001c7a6) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x0001c7a6) eswt_control_pane_g

0x3eeb,	// (0x00010ab6) bg_button_pane_ParamLimits

0x3eeb,	// (0x00010ab6) bg_button_pane

0x3bd3,	// (0x0001079e) common_borders_pane_copy2_ParamLimits

0x3bd3,	// (0x0001079e) common_borders_pane_copy2

0xc823,	// (0x000193ee) control_button_pane_g1_ParamLimits

0xc823,	// (0x000193ee) control_button_pane_g1

0xc82f,	// (0x000193fa) control_button_pane_g2_ParamLimits

0xc82f,	// (0x000193fa) control_button_pane_g2

0xc83b,	// (0x00019406) control_button_pane_g3_ParamLimits

0xc83b,	// (0x00019406) control_button_pane_g3

0x0002,

0xfbe4,	// (0x0001c7af) control_button_pane_g_ParamLimits

0xfbe4,	// (0x0001c7af) control_button_pane_g

0xc84f,	// (0x0001941a) control_button_pane_t1

0xc85d,	// (0x00019428) control_button_pane_t2

0x0001,

0xfbeb,	// (0x0001c7b6) control_button_pane_t

0x90fb,	// (0x00015cc6) bg_button_pane_g1

0x910b,	// (0x00015cd6) bg_button_pane_g2

0x9103,	// (0x00015cce) bg_button_pane_g3

0x911b,	// (0x00015ce6) bg_button_pane_g4

0x9113,	// (0x00015cde) bg_button_pane_g5

0x9123,	// (0x00015cee) bg_button_pane_g6

0x912b,	// (0x00015cf6) bg_button_pane_g7

0x913b,	// (0x00015d06) bg_button_pane_g8

0x9133,	// (0x00015cfe) bg_button_pane_g9

0x0008,

0xf83c,	// (0x0001c407) bg_button_pane_g

0xbc04,	// (0x000187cf) common_borders_pane_ParamLimits

0xbc04,	// (0x000187cf) common_borders_pane

0xc7ef,	// (0x000193ba) eswt_control_pane_g1_copy1_ParamLimits

0xc7ef,	// (0x000193ba) eswt_control_pane_g1_copy1

0xc7fc,	// (0x000193c7) eswt_control_pane_g2_copy1_ParamLimits

0xc7fc,	// (0x000193c7) eswt_control_pane_g2_copy1

0xc809,	// (0x000193d4) eswt_control_pane_g3_copy1_ParamLimits

0xc809,	// (0x000193d4) eswt_control_pane_g3_copy1

0xc816,	// (0x000193e1) eswt_control_pane_g4_copy1_ParamLimits

0xc816,	// (0x000193e1) eswt_control_pane_g4_copy1

0xbc3f,	// (0x0001880a) bg_eswt_ctrl_canvas_pane_g1

0xbc04,	// (0x000187cf) common_borders_pane_cp2_ParamLimits

0xbc04,	// (0x000187cf) common_borders_pane_cp2

0xbc04,	// (0x000187cf) common_borders_pane_cp3_ParamLimits

0xbc04,	// (0x000187cf) common_borders_pane_cp3

0xc86b,	// (0x00019436) separator_horizontal_pane

0xc873,	// (0x0001943e) separator_vertical_pane

0xc7ef,	// (0x000193ba) eswt_control_pane_g1_copy2_ParamLimits

0xc7ef,	// (0x000193ba) eswt_control_pane_g1_copy2

0xc7fc,	// (0x000193c7) eswt_control_pane_g2_copy2_ParamLimits

0xc7fc,	// (0x000193c7) eswt_control_pane_g2_copy2

0xc809,	// (0x000193d4) eswt_control_pane_g3_copy2_ParamLimits

0xc809,	// (0x000193d4) eswt_control_pane_g3_copy2

0xc816,	// (0x000193e1) eswt_control_pane_g4_copy2_ParamLimits

0xc816,	// (0x000193e1) eswt_control_pane_g4_copy2

0x3536,	// (0x00010101) common_borders_pane_cp4

0xc87c,	// (0x00019447) separator_horizontal_pane_g1

0xc885,	// (0x00019450) separator_horizontal_pane_g2

0xc88e,	// (0x00019459) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x0001c7bb) separator_horizontal_pane_g

0xc7ef,	// (0x000193ba) eswt_control_pane_g1_copy3_ParamLimits

0xc7ef,	// (0x000193ba) eswt_control_pane_g1_copy3

0xc7fc,	// (0x000193c7) eswt_control_pane_g2_copy3_ParamLimits

0xc7fc,	// (0x000193c7) eswt_control_pane_g2_copy3

0xc809,	// (0x000193d4) eswt_control_pane_g3_copy3_ParamLimits

0xc809,	// (0x000193d4) eswt_control_pane_g3_copy3

0xc816,	// (0x000193e1) eswt_control_pane_g4_copy3_ParamLimits

0xc816,	// (0x000193e1) eswt_control_pane_g4_copy3

0x3536,	// (0x00010101) common_borders_pane_cp5

0xc897,	// (0x00019462) separator_vertical_pane_g1

0xc8a0,	// (0x0001946b) separator_vertical_pane_g2

0xc8a9,	// (0x00019474) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x0001c7c2) separator_vertical_pane_g

0xc7ef,	// (0x000193ba) eswt_control_pane_g1_copy4_ParamLimits

0xc7ef,	// (0x000193ba) eswt_control_pane_g1_copy4

0xc7fc,	// (0x000193c7) eswt_control_pane_g2_copy4_ParamLimits

0xc7fc,	// (0x000193c7) eswt_control_pane_g2_copy4

0xc809,	// (0x000193d4) eswt_control_pane_g3_copy4_ParamLimits

0xc809,	// (0x000193d4) eswt_control_pane_g3_copy4

0xc816,	// (0x000193e1) eswt_control_pane_g4_copy4_ParamLimits

0xc816,	// (0x000193e1) eswt_control_pane_g4_copy4

0xc8b2,	// (0x0001947d) eswt_ctrl_combo_button_pane

0xc8ba,	// (0x00019485) eswt_ctrl_input_pane

0xc8c2,	// (0x0001948d) popup_choice_list_window_cp70

0xc8ca,	// (0x00019495) eswt_ctrl_input_pane_t1

0x3536,	// (0x00010101) input_focus_pane_cp70

0xbc04,	// (0x000187cf) bg_button_pane_cp70_ParamLimits

0xbc04,	// (0x000187cf) bg_button_pane_cp70

0xc8d8,	// (0x000194a3) eswt_ctrl_combo_button_pane_g1

0xc8e0,	// (0x000194ab) wait_bar_pane_cp70

0x921f,	// (0x00015dea) bg_popup_window_pane_cp70_ParamLimits

0x921f,	// (0x00015dea) bg_popup_window_pane_cp70

0xc8e8,	// (0x000194b3) popup_eswt_tasktip_window_t1

0xc8fe,	// (0x000194c9) wait_bar_pane_cp71_ParamLimits

0xc8fe,	// (0x000194c9) wait_bar_pane_cp71

0xc90a,	// (0x000194d5) grid_eswt_app_pane

0x7fc0,	// (0x00014b8b) scroll_pane_cp70

0xc913,	// (0x000194de) cell_eswt_app_pane_ParamLimits

0xc913,	// (0x000194de) cell_eswt_app_pane

0xc945,	// (0x00019510) cell_eswt_app_pane_g1_ParamLimits

0xc945,	// (0x00019510) cell_eswt_app_pane_g1

0xc974,	// (0x0001953f) cell_eswt_app_pane_g2_ParamLimits

0xc974,	// (0x0001953f) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x0001c7c9) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x0001c7c9) cell_eswt_app_pane_g

0xc99d,	// (0x00019568) cell_eswt_app_pane_t1_ParamLimits

0xc99d,	// (0x00019568) cell_eswt_app_pane_t1

0xc9cf,	// (0x0001959a) grid_highlight_pane_cp70_ParamLimits

0xc9cf,	// (0x0001959a) grid_highlight_pane_cp70

0x8718,	// (0x000152e3) set_content_pane_g1

0x8b00,	// (0x000156cb) status_small_volume_pane

0x67c0,	// (0x0001338b) status_small_volume_pane_g1

0x67c8,	// (0x00013393) volume_small2_pane

0x67d1,	// (0x0001339c) volume_small2_pane_g1

0x67da,	// (0x000133a5) volume_small2_pane_g2

0x67e3,	// (0x000133ae) volume_small2_pane_g3

0x67ec,	// (0x000133b7) volume_small2_pane_g4

0x67f5,	// (0x000133c0) volume_small2_pane_g5

0x67fe,	// (0x000133c9) volume_small2_pane_g6

0x6807,	// (0x000133d2) volume_small2_pane_g7

0x6810,	// (0x000133db) volume_small2_pane_g8

0x6819,	// (0x000133e4) volume_small2_pane_g9

0x6822,	// (0x000133ed) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x0001c7ce) volume_small2_pane_g

0xc00e,	// (0x00018bd9) fep_vkb_top_text_pane_g1_ParamLimits

0xc029,	// (0x00018bf4) fep_vkb_top_text_pane_t1_ParamLimits

0xc2c1,	// (0x00018e8c) popup_preview_fixed_window_g3_ParamLimits

0xc2c1,	// (0x00018e8c) popup_preview_fixed_window_g3

0x5e18,	// (0x000129e3) popup_toolbar_trans_pane

0xa5ce,	// (0x00017199) aid_height_set_list_ParamLimits

0xa5df,	// (0x000171aa) aid_size_parent_ParamLimits

0x8b81,	// (0x0001574c) list_highlight_pane_cp2_ParamLimits

0x8718,	// (0x000152e3) set_content_pane_g1_ParamLimits

0xa891,	// (0x0001745c) list_single_image_pane_ParamLimits

0xa891,	// (0x0001745c) list_single_image_pane

0xc9db,	// (0x000195a6) aid_size_cell_image_ParamLimits

0xc9db,	// (0x000195a6) aid_size_cell_image

0xc9e8,	// (0x000195b3) grid_single_image_pane_ParamLimits

0xc9e8,	// (0x000195b3) grid_single_image_pane

0x3f11,	// (0x00010adc) list_single_image_pane_g1_ParamLimits

0x3f11,	// (0x00010adc) list_single_image_pane_g1

0x3f1d,	// (0x00010ae8) list_single_image_pane_g2_ParamLimits

0x3f1d,	// (0x00010ae8) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x0001c7e3) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x0001c7e3) list_single_image_pane_g

0xc9f6,	// (0x000195c1) list_single_image_pane_t1_ParamLimits

0xc9f6,	// (0x000195c1) list_single_image_pane_t1

0xca2d,	// (0x000195f8) cell_image_list_pane_ParamLimits

0xca2d,	// (0x000195f8) cell_image_list_pane

0xca45,	// (0x00019610) cell_image_list_pane_g1

0xca4e,	// (0x00019619) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x0001c7e8) cell_image_list_pane_g

0xca57,	// (0x00019622) aid_size_cell_tb_trans_pane

0x3eeb,	// (0x00010ab6) bg_tb_trans_pane

0xca69,	// (0x00019634) grid_tb_trans_pane

0x90fb,	// (0x00015cc6) bg_tb_trans_pane_g1

0x910b,	// (0x00015cd6) bg_tb_trans_pane_g2

0x9103,	// (0x00015cce) bg_tb_trans_pane_g3

0x911b,	// (0x00015ce6) bg_tb_trans_pane_g4

0x9113,	// (0x00015cde) bg_tb_trans_pane_g5

0x913b,	// (0x00015d06) bg_tb_trans_pane_g6

0x9133,	// (0x00015cfe) bg_tb_trans_pane_g7

0x9123,	// (0x00015cee) bg_tb_trans_pane_g8

0x912b,	// (0x00015cf6) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x0001c7ed) bg_tb_trans_pane_g

0xca7d,	// (0x00019648) cell_toolbar_trans_pane_ParamLimits

0xca7d,	// (0x00019648) cell_toolbar_trans_pane

0xbc3f,	// (0x0001880a) cell_toolbar_trans_pane_g1

0xb824,	// (0x000183ef) list_form2_midp_pane_t1

0xb832,	// (0x000183fd) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0001c68a) list_form2_midp_pane_t

0xb840,	// (0x0001840b) scroll_pane_cp51_ParamLimits

0xba5a,	// (0x00018625) form2_midp_wait_pane_g1

0xba63,	// (0x0001862e) form2_midp_wait_pane_g2

0xba6c,	// (0x00018637) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0001c69f) form2_midp_wait_pane_g

0x3773,	// (0x0001033e) list_highlight_pane_cp21_ParamLimits

0xbaa5,	// (0x00018670) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbab4,	// (0x0001867f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa833,	// (0x000173fe) list_single_2graphic_im_pane_ParamLimits

0xa833,	// (0x000173fe) list_single_2graphic_im_pane

0xcaa3,	// (0x0001966e) list_single_2graphic_im_pane_g1_ParamLimits

0xcaa3,	// (0x0001966e) list_single_2graphic_im_pane_g1

0xcab4,	// (0x0001967f) list_single_2graphic_im_pane_g2_ParamLimits

0xcab4,	// (0x0001967f) list_single_2graphic_im_pane_g2

0xcac0,	// (0x0001968b) list_single_2graphic_im_pane_g3_ParamLimits

0xcac0,	// (0x0001968b) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x0001c800) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x0001c800) list_single_2graphic_im_pane_g

0xcae0,	// (0x000196ab) list_single_2graphic_im_pane_t1_ParamLimits

0xcae0,	// (0x000196ab) list_single_2graphic_im_pane_t1

0xc2cd,	// (0x00018e98) list_single_graphic_2heading_pane_fp_ParamLimits

0xc2cd,	// (0x00018e98) list_single_graphic_2heading_pane_fp

0xc329,	// (0x00018ef4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc329,	// (0x00018ef4) list_single_graphic_2heading_pane_fp_g1

0xc2e6,	// (0x00018eb1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc2e6,	// (0x00018eb1) list_single_graphic_2heading_pane_fp_g2

0x3e20,	// (0x000109eb) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3e20,	// (0x000109eb) list_single_graphic_2heading_pane_fp_g3

0xc2f2,	// (0x00018ebd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc2f2,	// (0x00018ebd) list_single_graphic_2heading_pane_fp_g4

0xc306,	// (0x00018ed1) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc306,	// (0x00018ed1) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001c727) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001c727) list_single_graphic_2heading_pane_fp_g

0xcb11,	// (0x000196dc) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb11,	// (0x000196dc) list_single_graphic_2heading_pane_fp_t1

0xc361,	// (0x00018f2c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc361,	// (0x00018f2c) list_single_graphic_2heading_pane_fp_t2

0xcb27,	// (0x000196f2) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb27,	// (0x000196f2) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x0001c809) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x0001c809) list_single_graphic_2heading_pane_fp_t

0xbcd0,	// (0x0001889b) fep_hwr_write_pane_g5_ParamLimits

0xbcd0,	// (0x0001889b) fep_hwr_write_pane_g5

0xbcdc,	// (0x000188a7) fep_hwr_write_pane_g6_ParamLimits

0xbcdc,	// (0x000188a7) fep_hwr_write_pane_g6

0xc7b6,	// (0x00019381) eswt_shell_pane_ParamLimits

0x921f,	// (0x00015dea) bg_popup_window_pane_cp18_ParamLimits

0xc7e7,	// (0x000193b2) heading_pane_cp70

0xc8e8,	// (0x000194b3) popup_eswt_tasktip_window_t1_ParamLimits

0x8c1c,	// (0x000157e7) aid_touch_tab_arrow_left

0x8c28,	// (0x000157f3) aid_touch_tab_arrow_right

0x7588,	// (0x00014153) title_pane_g3_ParamLimits

0x7588,	// (0x00014153) title_pane_g3

0x3e44,	// (0x00010a0f) set_value_pane_g1

0x5e18,	// (0x000129e3) popup_toolbar_trans_pane_ParamLimits

0xca57,	// (0x00019622) aid_size_cell_tb_trans_pane_ParamLimits

0x3eeb,	// (0x00010ab6) bg_tb_trans_pane_ParamLimits

0xca69,	// (0x00019634) grid_tb_trans_pane_ParamLimits

0x3949,	// (0x00010514) cont_note_pane_ParamLimits

0x3949,	// (0x00010514) cont_note_pane

0x3bd3,	// (0x0001079e) cont_snote2_single_text_pane_ParamLimits

0x3bd3,	// (0x0001079e) cont_snote2_single_text_pane

0x3bd3,	// (0x0001079e) cont_snote2_single_graphic_pane_ParamLimits

0x3bd3,	// (0x0001079e) cont_snote2_single_graphic_pane

0x9840,	// (0x0001640b) cont_note_wait_pane_ParamLimits

0x9840,	// (0x0001640b) cont_note_wait_pane

0x9840,	// (0x0001640b) cont_note_image_pane_ParamLimits

0x9840,	// (0x0001640b) cont_note_image_pane

0xcb3d,	// (0x00019708) popup_note2_window_g1_ParamLimits

0xcb3d,	// (0x00019708) popup_note2_window_g1

0xcb6e,	// (0x00019739) popup_note2_window_t1_ParamLimits

0xcb6e,	// (0x00019739) popup_note2_window_t1

0xcbb3,	// (0x0001977e) popup_note2_window_t2_ParamLimits

0xcbb3,	// (0x0001977e) popup_note2_window_t2

0xcbf8,	// (0x000197c3) popup_note2_window_t3_ParamLimits

0xcbf8,	// (0x000197c3) popup_note2_window_t3

0xcc3d,	// (0x00019808) popup_note2_window_t4_ParamLimits

0xcc3d,	// (0x00019808) popup_note2_window_t4

0x39cd,	// (0x00010598) popup_note2_window_t5_ParamLimits

0x39cd,	// (0x00010598) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x0001c815) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x0001c815) popup_note2_window_t

0xcc6c,	// (0x00019837) popup_note2_image_window_g1_ParamLimits

0xcc6c,	// (0x00019837) popup_note2_image_window_g1

0xcc78,	// (0x00019843) popup_note2_image_window_g2_ParamLimits

0xcc78,	// (0x00019843) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x0001c820) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x0001c820) popup_note2_image_window_g

0xcc8a,	// (0x00019855) popup_note2_image_window_t1_ParamLimits

0xcc8a,	// (0x00019855) popup_note2_image_window_t1

0xcca2,	// (0x0001986d) popup_note2_image_window_t2_ParamLimits

0xcca2,	// (0x0001986d) popup_note2_image_window_t2

0xccba,	// (0x00019885) popup_note2_image_window_t3_ParamLimits

0xccba,	// (0x00019885) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x0001c825) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x0001c825) popup_note2_image_window_t

0x984e,	// (0x00016419) popup_note2_wait_window_g1_ParamLimits

0x984e,	// (0x00016419) popup_note2_wait_window_g1

0xccd6,	// (0x000198a1) popup_note2_wait_window_g2_ParamLimits

0xccd6,	// (0x000198a1) popup_note2_wait_window_g2

0x9866,	// (0x00016431) popup_note2_wait_window_g3_ParamLimits

0x9866,	// (0x00016431) popup_note2_wait_window_g3

0x0002,

0xfc61,	// (0x0001c82c) popup_note2_wait_window_g_ParamLimits

0xfc61,	// (0x0001c82c) popup_note2_wait_window_g

0xcce2,	// (0x000198ad) popup_note2_wait_window_t1_ParamLimits

0xcce2,	// (0x000198ad) popup_note2_wait_window_t1

0xcd00,	// (0x000198cb) popup_note2_wait_window_t2_ParamLimits

0xcd00,	// (0x000198cb) popup_note2_wait_window_t2

0xcd1e,	// (0x000198e9) popup_note2_wait_window_t3_ParamLimits

0xcd1e,	// (0x000198e9) popup_note2_wait_window_t3

0xcd30,	// (0x000198fb) popup_note2_wait_window_t4_ParamLimits

0xcd30,	// (0x000198fb) popup_note2_wait_window_t4

0x0003,

0xfc68,	// (0x0001c833) popup_note2_wait_window_t_ParamLimits

0xfc68,	// (0x0001c833) popup_note2_wait_window_t

0xcd42,	// (0x0001990d) wait_bar2_pane_ParamLimits

0xcd42,	// (0x0001990d) wait_bar2_pane

0xcd5a,	// (0x00019925) popup_snote2_single_text_window_g1_ParamLimits

0xcd5a,	// (0x00019925) popup_snote2_single_text_window_g1

0xcd82,	// (0x0001994d) popup_snote2_single_text_window_t1_ParamLimits

0xcd82,	// (0x0001994d) popup_snote2_single_text_window_t1

0xcdce,	// (0x00019999) popup_snote2_single_text_window_t2_ParamLimits

0xcdce,	// (0x00019999) popup_snote2_single_text_window_t2

0xce1a,	// (0x000199e5) popup_snote2_single_text_window_t3_ParamLimits

0xce1a,	// (0x000199e5) popup_snote2_single_text_window_t3

0xce5b,	// (0x00019a26) popup_snote2_single_text_window_t4_ParamLimits

0xce5b,	// (0x00019a26) popup_snote2_single_text_window_t4

0xce91,	// (0x00019a5c) popup_snote2_single_text_window_t5_ParamLimits

0xce91,	// (0x00019a5c) popup_snote2_single_text_window_t5

0x0004,

0xfc71,	// (0x0001c83c) popup_snote2_single_text_window_t_ParamLimits

0xfc71,	// (0x0001c83c) popup_snote2_single_text_window_t

0xcebc,	// (0x00019a87) popup_snote2_single_graphic_window_g1_ParamLimits

0xcebc,	// (0x00019a87) popup_snote2_single_graphic_window_g1

0xcee4,	// (0x00019aaf) popup_snote2_single_graphic_window_g2_ParamLimits

0xcee4,	// (0x00019aaf) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7c,	// (0x0001c847) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7c,	// (0x0001c847) popup_snote2_single_graphic_window_g

0xcf0c,	// (0x00019ad7) popup_snote2_single_graphic_window_t1_ParamLimits

0xcf0c,	// (0x00019ad7) popup_snote2_single_graphic_window_t1

0xcf58,	// (0x00019b23) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf58,	// (0x00019b23) popup_snote2_single_graphic_window_t2

0xce1a,	// (0x000199e5) popup_snote2_single_graphic_window_t3_ParamLimits

0xce1a,	// (0x000199e5) popup_snote2_single_graphic_window_t3

0xce5b,	// (0x00019a26) popup_snote2_single_graphic_window_t4_ParamLimits

0xce5b,	// (0x00019a26) popup_snote2_single_graphic_window_t4

0xce91,	// (0x00019a5c) popup_snote2_single_graphic_window_t5_ParamLimits

0xce91,	// (0x00019a5c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc81,	// (0x0001c84c) popup_snote2_single_graphic_window_t_ParamLimits

0xfc81,	// (0x0001c84c) popup_snote2_single_graphic_window_t

0xb6f0,	// (0x000182bb) clock_nsta_pane_cp2_t1

0xb6f0,	// (0x000182bb) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0001c660) clock_nsta_pane_cp2_t

0x3f05,	// (0x00010ad0) form_field_data_wide_pane_g1_ParamLimits

0x3f11,	// (0x00010adc) form_field_data_wide_pane_g2_ParamLimits

0x3f11,	// (0x00010adc) form_field_data_wide_pane_g2

0x3f1d,	// (0x00010ae8) form_field_data_wide_pane_g3_ParamLimits

0x3f1d,	// (0x00010ae8) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001c21c) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001c21c) form_field_data_wide_pane_g

0xb5cb,	// (0x00018196) grid_touch_3_pane_ParamLimits

0xb5cb,	// (0x00018196) grid_touch_3_pane

0xcfa4,	// (0x00019b6f) cell_touch_3_pane_ParamLimits

0xcfa4,	// (0x00019b6f) cell_touch_3_pane

0xbc3f,	// (0x0001880a) cell_touch_3_pane_g1

0xbc3f,	// (0x0001880a) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0001c6e5) cell_touch_3_pane_g

0x3a25,	// (0x000105f0) cont_query_data_pane

0x3a2d,	// (0x000105f8) cont_query_data_pane_cp1

0xcfd7,	// (0x00019ba2) button_value_adjust_pane_cp7

0xcfdf,	// (0x00019baa) query_popup_pane_cp3

0x8291,	// (0x00014e5c) bg_popup_sub_pane_cp22_ParamLimits

0x5509,	// (0x000120d4) navi_navi_volume_pane_cp2

0x5524,	// (0x000120ef) popup_side_volume_key_window_g2

0x5533,	// (0x000120fe) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0001c2b2) popup_side_volume_key_window_g

0x5550,	// (0x0001211b) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0001c2b9) popup_side_volume_key_window_t

0x85de,	// (0x000151a9) popup_side_volume_key_window_ParamLimits

0x7a15,	// (0x000145e0) list_double_graphic_pane_g4_ParamLimits

0x7a15,	// (0x000145e0) list_double_graphic_pane_g4

0xa862,	// (0x0001742d) list_single_2heading_msg_pane_ParamLimits

0xa862,	// (0x0001742d) list_single_2heading_msg_pane

0xd010,	// (0x00019bdb) list_single_2heading_msg_pane_g1_ParamLimits

0xd010,	// (0x00019bdb) list_single_2heading_msg_pane_g1

0xd01c,	// (0x00019be7) list_single_2heading_msg_pane_g2_ParamLimits

0xd01c,	// (0x00019be7) list_single_2heading_msg_pane_g2

0xd028,	// (0x00019bf3) list_single_2heading_msg_pane_g3_ParamLimits

0xd028,	// (0x00019bf3) list_single_2heading_msg_pane_g3

0xd034,	// (0x00019bff) list_single_2heading_msg_pane_g4_ParamLimits

0xd034,	// (0x00019bff) list_single_2heading_msg_pane_g4

0x0003,

0xfc8c,	// (0x0001c857) list_single_2heading_msg_pane_g_ParamLimits

0xfc8c,	// (0x0001c857) list_single_2heading_msg_pane_g

0xd04c,	// (0x00019c17) list_single_2heading_msg_pane_t1_ParamLimits

0xd04c,	// (0x00019c17) list_single_2heading_msg_pane_t1

0xd074,	// (0x00019c3f) list_single_2heading_msg_pane_t2_ParamLimits

0xd074,	// (0x00019c3f) list_single_2heading_msg_pane_t2

0xd0a3,	// (0x00019c6e) list_single_2heading_msg_pane_t3_ParamLimits

0xd0a3,	// (0x00019c6e) list_single_2heading_msg_pane_t3

0xd0dc,	// (0x00019ca7) list_single_2heading_msg_pane_t4_ParamLimits

0xd0dc,	// (0x00019ca7) list_single_2heading_msg_pane_t4

0x0003,

0xfc95,	// (0x0001c860) list_single_2heading_msg_pane_t_ParamLimits

0xfc95,	// (0x0001c860) list_single_2heading_msg_pane_t

0x3717,	// (0x000102e2) title_pane_g4_ParamLimits

0x3717,	// (0x000102e2) title_pane_g4

0x530e,	// (0x00011ed9) title_pane_stacon_g3_ParamLimits

0x530e,	// (0x00011ed9) title_pane_stacon_g3

0xcad4,	// (0x0001969f) list_single_2graphic_im_pane_g4_ParamLimits

0xcad4,	// (0x0001969f) list_single_2graphic_im_pane_g4

0xa2b0,	// (0x00016e7b) popup_side_volume_key_window_cp

0xabcc,	// (0x00017797) main_idle_act2_pane_t1

0x5f88,	// (0x00012b53) toolbar_button_pane_g10

0x7852,	// (0x0001441d) popup_toolbar_window_cp1

0xb6e1,	// (0x000182ac) clock_nsta_pane_cp_t1

0xb6e1,	// (0x000182ac) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0001c65b) clock_nsta_pane_cp_t

0x5509,	// (0x000120d4) navi_navi_volume_pane_cp2_ParamLimits

0x5518,	// (0x000120e3) popup_side_volume_key_window_g1_ParamLimits

0x5524,	// (0x000120ef) popup_side_volume_key_window_g2_ParamLimits

0x5533,	// (0x000120fe) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0001c2b2) popup_side_volume_key_window_g_ParamLimits

0x6411,	// (0x00012fdc) fep_hwr_aid_pane

0x64ba,	// (0x00013085) bg_fep_hwr_top_pane_g4_ParamLimits

0xbca0,	// (0x0001886b) fep_hwr_top_pane_g1_ParamLimits

0xbcb2,	// (0x0001887d) fep_hwr_top_pane_g2_ParamLimits

0x64da,	// (0x000130a5) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0001c6b0) fep_hwr_top_pane_g_ParamLimits

0x64ef,	// (0x000130ba) fep_hwr_top_text_pane_ParamLimits

0xa065,	// (0x00016c30) aid_touch_tab_arrow_arrow_2

0xa06e,	// (0x00016c39) aid_touch_tab_arrow_left_2

0x6425,	// (0x00012ff0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x645c,	// (0x00013027) fep_hwr_prediction_pane

0xbe08,	// (0x000189d3) fep_vkb_prediction_pane

0xbf0e,	// (0x00018ad9) fep_vkb_side_pane_g3_ParamLimits

0xbf0e,	// (0x00018ad9) fep_vkb_side_pane_g3

0x667e,	// (0x00013249) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x66ef,	// (0x000132ba) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x66fc,	// (0x000132c7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x0001c75f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x682b,	// (0x000133f6) fep_hwr_prediction_pane_g1

0x6835,	// (0x00013400) fep_hwr_prediction_pane_g2

0x683d,	// (0x00013408) fep_hwr_prediction_pane_g3

0x6845,	// (0x00013410) fep_hwr_prediction_pane_g4

0x0003,

0xfc9e,	// (0x0001c869) fep_hwr_prediction_pane_g

0xd101,	// (0x00019ccc) fep_vkb_prediction_pane_g1

0xd10b,	// (0x00019cd6) fep_vkb_prediction_pane_g2

0xd113,	// (0x00019cde) fep_vkb_prediction_pane_g3

0xd11b,	// (0x00019ce6) fep_vkb_prediction_pane_g4

0x0003,

0xfca7,	// (0x0001c872) fep_vkb_prediction_pane_g

0x6291,	// (0x00012e5c) slider_set_pane_g3

0x62a5,	// (0x00012e70) slider_set_pane_g4

0x62bd,	// (0x00012e88) slider_set_pane_g5

0x6291,	// (0x00012e5c) slider_set_pane_g6

0x62d3,	// (0x00012e9e) slider_set_pane_g7

0xa75e,	// (0x00017329) slider_form_pane_g3

0xa767,	// (0x00017332) slider_form_pane_g4

0xa76f,	// (0x0001733a) slider_form_pane_g5

0xa75e,	// (0x00017329) slider_form_pane_g6

0xa777,	// (0x00017342) slider_form_pane_g7

0xaed0,	// (0x00017a9b) slider_set_pane_vc_g3

0xaed9,	// (0x00017aa4) slider_set_pane_vc_g4

0xaee2,	// (0x00017aad) slider_set_pane_vc_g5

0xaed0,	// (0x00017a9b) slider_set_pane_vc_g6

0xaeeb,	// (0x00017ab6) slider_set_pane_vc_g7

0xb390,	// (0x00017f5b) slider_form_pane_vc_g1

0xb399,	// (0x00017f64) slider_form_pane_vc_g2

0xb3a2,	// (0x00017f6d) slider_form_pane_vc_g3

0xb390,	// (0x00017f5b) slider_form_pane_vc_g4

0xb3ab,	// (0x00017f76) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0001c62d) slider_form_pane_vc_g

0x4fc2,	// (0x00011b8d) main_idle_act3_pane

0xd123,	// (0x00019cee) ai3_links_pane

0xd12c,	// (0x00019cf7) popup_ai3_data_window_ParamLimits

0xd12c,	// (0x00019cf7) popup_ai3_data_window

0x3536,	// (0x00010101) grid_ai3_links_pane

0xd14a,	// (0x00019d15) cell_ai3_links_pane_ParamLimits

0xd14a,	// (0x00019d15) cell_ai3_links_pane

0xd164,	// (0x00019d2f) bg_popup_sub_pane_cp11

0xd171,	// (0x00019d3c) cell_ai3_links_pane_g1

0x3536,	// (0x00010101) bg_popup_sub_pane_cp12

0xd196,	// (0x00019d61) heading_ai3_data_pane

0xd19e,	// (0x00019d69) list_ai3_gene_pane

0xd1aa,	// (0x00019d75) popup_ai3_data_window_g1

0xd1b2,	// (0x00019d7d) heading_ai3_data_pane_g1

0xd1ba,	// (0x00019d85) heading_ai3_data_pane_t1

0xd1c8,	// (0x00019d93) list_double_ai3_gene_pane_ParamLimits

0xd1c8,	// (0x00019d93) list_double_ai3_gene_pane

0xd1d5,	// (0x00019da0) list_single_ai3_gene_pane_ParamLimits

0xd1d5,	// (0x00019da0) list_single_ai3_gene_pane

0xbc04,	// (0x000187cf) list_highlight_pane_cp7_ParamLimits

0xbc04,	// (0x000187cf) list_highlight_pane_cp7

0xd1e2,	// (0x00019dad) list_single_a13_gene_pane_t1_ParamLimits

0xd1e2,	// (0x00019dad) list_single_a13_gene_pane_t1

0xd1f9,	// (0x00019dc4) list_single_ai3_gene_pane_g1

0xd202,	// (0x00019dcd) list_single_ai3_gene_pane_g2

0x0001,

0xfcb0,	// (0x0001c87b) list_single_ai3_gene_pane_g

0xd20a,	// (0x00019dd5) list_double_ai3_gene_pane_g1_ParamLimits

0xd20a,	// (0x00019dd5) list_double_ai3_gene_pane_g1

0xd216,	// (0x00019de1) list_double_ai3_gene_pane_t1_ParamLimits

0xd216,	// (0x00019de1) list_double_ai3_gene_pane_t1

0xd232,	// (0x00019dfd) list_double_ai3_gene_pane_t2_ParamLimits

0xd232,	// (0x00019dfd) list_double_ai3_gene_pane_t2

0xd247,	// (0x00019e12) list_double_ai3_gene_pane_t3_ParamLimits

0xd247,	// (0x00019e12) list_double_ai3_gene_pane_t3

0x0002,

0xfcb5,	// (0x0001c880) list_double_ai3_gene_pane_t_ParamLimits

0xfcb5,	// (0x0001c880) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcff0,	// (0x00019bbb) aid_size_min_col_2

0xcffa,	// (0x00019bc5) aid_size_min_msg_ParamLimits

0xcffa,	// (0x00019bc5) aid_size_min_msg

0xc01a,	// (0x00018be5) fep_vkb_top_text_pane_g2_ParamLimits

0xc01a,	// (0x00018be5) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0001c6e0) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0001c6e0) fep_vkb_top_text_pane_g

0x4fc2,	// (0x00011b8d) main_hc_apps_shell_pane

0xd264,	// (0x00019e2f) grid_hc_apps_pane_ParamLimits

0xd264,	// (0x00019e2f) grid_hc_apps_pane

0xd276,	// (0x00019e41) list_hc_apps_pane

0xd27e,	// (0x00019e49) scroll_pane_cp37_ParamLimits

0xd27e,	// (0x00019e49) scroll_pane_cp37

0xd28a,	// (0x00019e55) cell_hc_apps_pane_ParamLimits

0xd28a,	// (0x00019e55) cell_hc_apps_pane

0xd33e,	// (0x00019f09) cell_hc_apps_pane_g1_ParamLimits

0xd33e,	// (0x00019f09) cell_hc_apps_pane_g1

0xd36a,	// (0x00019f35) cell_hc_apps_pane_g2_ParamLimits

0xd36a,	// (0x00019f35) cell_hc_apps_pane_g2

0xd386,	// (0x00019f51) cell_hc_apps_pane_g3_ParamLimits

0xd386,	// (0x00019f51) cell_hc_apps_pane_g3

0x0002,

0xfcbc,	// (0x0001c887) cell_hc_apps_pane_g_ParamLimits

0xfcbc,	// (0x0001c887) cell_hc_apps_pane_g

0xd3a8,	// (0x00019f73) cell_hc_apps_pane_t1_ParamLimits

0xd3a8,	// (0x00019f73) cell_hc_apps_pane_t1

0x3949,	// (0x00010514) grid_highlight_pane_cp10_ParamLimits

0x3949,	// (0x00010514) grid_highlight_pane_cp10

0xd3e8,	// (0x00019fb3) list_single_hc_apps_pane_ParamLimits

0xd3e8,	// (0x00019fb3) list_single_hc_apps_pane

0xd427,	// (0x00019ff2) list_single_hc_apps_pane_g1

0xd440,	// (0x0001a00b) list_single_hc_apps_pane_g2

0x0001,

0xfcc3,	// (0x0001c88e) list_single_hc_apps_pane_g

0xd459,	// (0x0001a024) list_single_hc_apps_pane_g2_copy1

0xd475,	// (0x0001a040) list_single_hc_apps_pane_t1

0x3773,	// (0x0001033e) bg_set_opt_pane_cp_ParamLimits

0x5235,	// (0x00011e00) setting_slider_pane_t1_ParamLimits

0x524e,	// (0x00011e19) setting_slider_pane_t2_ParamLimits

0x5268,	// (0x00011e33) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001c104) setting_slider_pane_t_ParamLimits

0x5280,	// (0x00011e4b) slider_set_pane_ParamLimits

0x57ab,	// (0x00012376) control_pane_g5_ParamLimits

0x57ab,	// (0x00012376) control_pane_g5

0xa591,	// (0x0001715c) slider_set_pane_g1_ParamLimits

0x6285,	// (0x00012e50) slider_set_pane_g2_ParamLimits

0x6291,	// (0x00012e5c) slider_set_pane_g3_ParamLimits

0x62a5,	// (0x00012e70) slider_set_pane_g4_ParamLimits

0x62bd,	// (0x00012e88) slider_set_pane_g5_ParamLimits

0x6291,	// (0x00012e5c) slider_set_pane_g6_ParamLimits

0x62d3,	// (0x00012e9e) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0001c505) slider_set_pane_g_ParamLimits

0x86c3,	// (0x0001528e) navi_icon_text_pane_ParamLimits

0x8bdb,	// (0x000157a6) aid_fill_nsta_2_ParamLimits

0x8c1c,	// (0x000157e7) aid_touch_tab_arrow_left_ParamLimits

0x8c28,	// (0x000157f3) aid_touch_tab_arrow_right_ParamLimits

0x8c94,	// (0x0001585f) clock_nsta_pane_ParamLimits

0xa047,	// (0x00016c12) navi_icon_pane_g1_ParamLimits

0xa053,	// (0x00016c1e) navi_text_pane_t1_ParamLimits

0xb7fe,	// (0x000183c9) navi_icon_text_pane_g1_ParamLimits

0xb80a,	// (0x000183d5) navi_icon_text_pane_t1_ParamLimits

0xd427,	// (0x00019ff2) list_single_hc_apps_pane_g1_ParamLimits

0xd440,	// (0x0001a00b) list_single_hc_apps_pane_g2_ParamLimits

0xfcc3,	// (0x0001c88e) list_single_hc_apps_pane_g_ParamLimits

0xd459,	// (0x0001a024) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd475,	// (0x0001a040) list_single_hc_apps_pane_t1_ParamLimits

0x5137,	// (0x00011d02) popup_toolbar2_fixed_window_ParamLimits

0x5137,	// (0x00011d02) popup_toolbar2_fixed_window

0x5e0e,	// (0x000129d9) popup_toolbar2_float_window

0x3536,	// (0x00010101) bg_popup_sub_pane_cp27

0xd4a3,	// (0x0001a06e) grid_toolbar2_float_pane

0x3536,	// (0x00010101) bg_popup_sub_pane_cp26

0xd4a3,	// (0x0001a06e) grid_toolbar2_fixed_pane

0xd4ab,	// (0x0001a076) cell_toolbar2_fixed_pane_ParamLimits

0xd4ab,	// (0x0001a076) cell_toolbar2_fixed_pane

0xd4bb,	// (0x0001a086) cell_toolbar2_fixed_pane_g1

0xd4c4,	// (0x0001a08f) toolbar2_fixed_button_pane

0x90fb,	// (0x00015cc6) toolbar2_fixed_button_pane_g1

0x910b,	// (0x00015cd6) toolbar2_fixed_button_pane_g2

0x9103,	// (0x00015cce) toolbar2_fixed_button_pane_g3

0x911b,	// (0x00015ce6) toolbar2_fixed_button_pane_g4

0x9113,	// (0x00015cde) toolbar2_fixed_button_pane_g5

0x9123,	// (0x00015cee) toolbar2_fixed_button_pane_g6

0x912b,	// (0x00015cf6) toolbar2_fixed_button_pane_g7

0x913b,	// (0x00015d06) toolbar2_fixed_button_pane_g8

0x9133,	// (0x00015cfe) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x0001c407) toolbar2_fixed_button_pane_g

0xd4cc,	// (0x0001a097) cell_toolbar2_float_pane_ParamLimits

0xd4cc,	// (0x0001a097) cell_toolbar2_float_pane

0xd4dd,	// (0x0001a0a8) cell_toolbar2_float_pane_g1

0xd4c4,	// (0x0001a08f) toolbar2_fixed_button_pane_cp

0xbd76,	// (0x00018941) fep_vkb_accented_list_pane_ParamLimits

0xbd76,	// (0x00018941) fep_vkb_accented_list_pane

0x665e,	// (0x00013229) bg_popup_fep_shadow_pane_g9

0x8852,	// (0x0001541d) bg_popup_fep_shadow_pane_cp3

0x40a0,	// (0x00010c6b) list_accented_list_pane

0xd4e6,	// (0x0001a0b1) list_single_accented_list_pane_ParamLimits

0xd4e6,	// (0x0001a0b1) list_single_accented_list_pane

0x8852,	// (0x0001541d) list_highlight_pane_cp10

0xd4f7,	// (0x0001a0c2) list_single_accented_list_pane_t1

0x5d54,	// (0x0001291f) popup_slider_window_ParamLimits

0x5d54,	// (0x0001291f) popup_slider_window

0xcfe7,	// (0x00019bb2) aid_indentation_list_msg

0xd5c7,	// (0x0001a192) bg_popup_window_pane_cp19

0xd633,	// (0x0001a1fe) popup_slider_window_g1

0xd64f,	// (0x0001a21a) popup_slider_window_g2

0xd66b,	// (0x0001a236) popup_slider_window_g3

0x0005,

0xfcc8,	// (0x0001c893) popup_slider_window_g

0xd6d1,	// (0x0001a29c) popup_slider_window_t1

0xd745,	// (0x0001a310) small_volume_slider_vertical_pane

0xbc3f,	// (0x0001880a) small_volume_slider_vertical_pane_g1

0xbc3f,	// (0x0001880a) small_volume_slider_vertical_pane_g2

0xd761,	// (0x0001a32c) small_volume_slider_vertical_pane_g3

0x0002,

0xfcda,	// (0x0001c8a5) small_volume_slider_vertical_pane_g

0x4ee5,	// (0x00011ab0) area_side_right_pane_ParamLimits

0x4ee5,	// (0x00011ab0) area_side_right_pane

0x684d,	// (0x00013418) aid_size_side_button_ParamLimits

0x684d,	// (0x00013418) aid_size_side_button

0x6861,	// (0x0001342c) grid_sctrl_middle_pane_ParamLimits

0x6861,	// (0x0001342c) grid_sctrl_middle_pane

0x6880,	// (0x0001344b) sctrl_sk_bottom_pane

0x6891,	// (0x0001345c) sctrl_sk_top_pane

0x68a3,	// (0x0001346e) aid_touch_sctrl_top

0x68b0,	// (0x0001347b) bg_sctrl_sk_pane_ParamLimits

0x68b0,	// (0x0001347b) bg_sctrl_sk_pane

0x68be,	// (0x00013489) sctrl_sk_top_pane_g1

0x68cb,	// (0x00013496) sctrl_sk_top_pane_t1

0x68a3,	// (0x0001346e) aid_touch_sctrl_bottom

0x68b0,	// (0x0001347b) bg_sctrl_sk_pane_cp_ParamLimits

0x68b0,	// (0x0001347b) bg_sctrl_sk_pane_cp

0x68e6,	// (0x000134b1) sctrl_sk_bottom_pane_g1

0x68cb,	// (0x00013496) sctrl_sk_bottom_pane_t1

0x68ef,	// (0x000134ba) cell_sctrl_middle_pane_ParamLimits

0x68ef,	// (0x000134ba) cell_sctrl_middle_pane

0x690c,	// (0x000134d7) aid_touch_sctrl_middle_ParamLimits

0x690c,	// (0x000134d7) aid_touch_sctrl_middle

0x691e,	// (0x000134e9) bg_sctrl_middle_pane_ParamLimits

0x691e,	// (0x000134e9) bg_sctrl_middle_pane

0x667e,	// (0x00013249) cell_sctrl_middle_pane_g1_ParamLimits

0x667e,	// (0x00013249) cell_sctrl_middle_pane_g1

0x692c,	// (0x000134f7) cell_sctrl_middle_pane_g2_ParamLimits

0x692c,	// (0x000134f7) cell_sctrl_middle_pane_g2

0x0001,

0xfce6,	// (0x0001c8b1) cell_sctrl_middle_pane_g_ParamLimits

0xfce6,	// (0x0001c8b1) cell_sctrl_middle_pane_g

0x90fb,	// (0x00015cc6) bg_sctrl_middle_pane_g1

0x9103,	// (0x00015cce) bg_sctrl_middle_pane_g2

0x910b,	// (0x00015cd6) bg_sctrl_middle_pane_g3

0x9113,	// (0x00015cde) bg_sctrl_middle_pane_g4

0x911b,	// (0x00015ce6) bg_sctrl_middle_pane_g5

0x9123,	// (0x00015cee) bg_sctrl_middle_pane_g6

0x912b,	// (0x00015cf6) bg_sctrl_middle_pane_g7

0x9133,	// (0x00015cfe) bg_sctrl_middle_pane_g8

0x0007,

0xfceb,	// (0x0001c8b6) bg_sctrl_middle_pane_g

0x913b,	// (0x00015d06) bg_sctrl_middle_pane_g8_copy1

0x90fb,	// (0x00015cc6) bg_sctrl_sk_pane_g1

0x910b,	// (0x00015cd6) bg_sctrl_sk_pane_g2

0x9103,	// (0x00015cce) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x0001c407) bg_sctrl_sk_pane_g

0x3d91,	// (0x0001095c) aid_size_touch_scroll_bar

0x911b,	// (0x00015ce6) bg_sctrl_sk_pane_g4

0x9113,	// (0x00015cde) bg_sctrl_sk_pane_g5

0x9123,	// (0x00015cee) bg_sctrl_sk_pane_g6

0x912b,	// (0x00015cf6) bg_sctrl_sk_pane_g7

0x913b,	// (0x00015d06) bg_sctrl_sk_pane_g8

0x9133,	// (0x00015cfe) bg_sctrl_sk_pane_g9

0x5969,	// (0x00012534) popup_fep_china_hwr2_fs_candidate_window

0x5973,	// (0x0001253e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5973,	// (0x0001253e) popup_fep_china_hwr2_fs_control_window

0x667e,	// (0x00013249) sctrl_sk_top_pane_g2

0x0001,

0xfce1,	// (0x0001c8ac) sctrl_sk_top_pane_g

0xd76a,	// (0x0001a335) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd76a,	// (0x0001a335) aid_fep_china_hwr2_fs_cell

0xd77d,	// (0x0001a348) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd77d,	// (0x0001a348) bg_popup_fep_shadow_pane_cp4

0xd796,	// (0x0001a361) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd796,	// (0x0001a361) bg_popup_fep_shadow_pane_cp5

0xd7a8,	// (0x0001a373) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7a8,	// (0x0001a373) popup_fep_china_hwr2_fs_control_bar_grid

0xd7b8,	// (0x0001a383) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7c0,	// (0x0001a38b) aid_fep_china_hwr2_fs_candi_cell

0x3536,	// (0x00010101) bg_popup_fep_shadow_pane_cp6

0xd7ca,	// (0x0001a395) popup_fep_china_hwr2_fs_candidate_grid

0xd7d4,	// (0x0001a39f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7d4,	// (0x0001a39f) cell_fep_china_hwr2_fs_funtion_grid

0xbc3f,	// (0x0001880a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7ec,	// (0x0001a3b7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7ec,	// (0x0001a3b7) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7fa,	// (0x0001a3c5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7fa,	// (0x0001a3c5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfc,	// (0x0001c8c7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfc,	// (0x0001c8c7) cell_fep_china_hwr2_fs_funtion_grid_g

0xd810,	// (0x0001a3db) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd810,	// (0x0001a3db) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd825,	// (0x0001a3f0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd825,	// (0x0001a3f0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd01,	// (0x0001c8cc) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd01,	// (0x0001c8cc) cell_fep_china_hwr2_fs_funtion_grid_t

0xd841,	// (0x0001a40c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd849,	// (0x0001a414) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd851,	// (0x0001a41c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd06,	// (0x0001c8d1) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd859,	// (0x0001a424) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd859,	// (0x0001a424) cell_fep_china_hwr2_fs_candidate_grid

0xd878,	// (0x0001a443) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd880,	// (0x0001a44b) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbc3f,	// (0x0001880a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbc3f,	// (0x0001880a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0001c6e5) cell_fep_china_hwr2_fs_candidate_grid_g

0xd888,	// (0x0001a453) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8ca7,	// (0x00015872) clock_nsta_pane_cp_24_ParamLimits

0x8ca7,	// (0x00015872) clock_nsta_pane_cp_24

0x8d27,	// (0x000158f2) indicator_nsta_pane_cp_24_ParamLimits

0x8d27,	// (0x000158f2) indicator_nsta_pane_cp_24

0x9ec3,	// (0x00016a8e) heading_pane_g1

0x0001,

0xf8a1,	// (0x0001c46c) heading_pane_g

0xaa13,	// (0x000175de) grid_sct_catagory_button_pane

0xaa45,	// (0x00017610) scroll_pane_cp5_ParamLimits

0xb84c,	// (0x00018417) button_value_adjust_pane_cp5_ParamLimits

0xb84c,	// (0x00018417) button_value_adjust_pane_cp5

0xb952,	// (0x0001851d) form2_midp_time_pane_ParamLimits

0xd896,	// (0x0001a461) cell_sct_catagory_button_pane_ParamLimits

0xd896,	// (0x0001a461) cell_sct_catagory_button_pane

0xbc04,	// (0x000187cf) bg_button_pane_cp01_ParamLimits

0xbc04,	// (0x000187cf) bg_button_pane_cp01

0xbc3f,	// (0x0001880a) cell_sct_catagory_button_pane_g1

0x5d95,	// (0x00012960) popup_tb_extension_window

0xd8a8,	// (0x0001a473) aid_size_cell_ext_ParamLimits

0xd8a8,	// (0x0001a473) aid_size_cell_ext

0x3949,	// (0x00010514) bg_tb_trans_pane_cp1_ParamLimits

0x3949,	// (0x00010514) bg_tb_trans_pane_cp1

0xd8c8,	// (0x0001a493) grid_tb_ext_pane_ParamLimits

0xd8c8,	// (0x0001a493) grid_tb_ext_pane

0xd8f6,	// (0x0001a4c1) cell_tb_ext_pane_ParamLimits

0xd8f6,	// (0x0001a4c1) cell_tb_ext_pane

0xd90d,	// (0x0001a4d8) cell_tb_ext_pane_g1_ParamLimits

0xd90d,	// (0x0001a4d8) cell_tb_ext_pane_g1

0xd92a,	// (0x0001a4f5) cell_tb_ext_pane_t1

0x3949,	// (0x00010514) list_highlight_pane_cp11_ParamLimits

0x3949,	// (0x00010514) list_highlight_pane_cp11

0x5156,	// (0x00011d21) popup_uni_indicator_window_ParamLimits

0x5156,	// (0x00011d21) popup_uni_indicator_window

0x3eeb,	// (0x00010ab6) bg_popup_sub_pane_cp14

0xd945,	// (0x0001a510) list_uniindi_pane

0xd951,	// (0x0001a51c) uniindi_top_pane

0x3949,	// (0x00010514) bg_uniindi_top_pane

0xd972,	// (0x0001a53d) uniindi_top_pane_g1

0xd988,	// (0x0001a553) uniindi_top_pane_g2

0x0003,

0xfd0d,	// (0x0001c8d8) uniindi_top_pane_g

0xd9b2,	// (0x0001a57d) uniindi_top_pane_t1

0xd9de,	// (0x0001a5a9) list_single_uniindi_pane_ParamLimits

0xd9de,	// (0x0001a5a9) list_single_uniindi_pane

0xbc3f,	// (0x0001880a) bg_uniindi_top_pane_g1

0xd9f1,	// (0x0001a5bc) list_single_uniindi_pane_g1

0xda04,	// (0x0001a5cf) list_single_uniindi_pane_t1

0x4fc2,	// (0x00011b8d) control_bg_pane

0xda29,	// (0x0001a5f4) bg_sctrl_sk_pane_cp1

0xda32,	// (0x0001a5fd) bg_sctrl_sk_pane_cp2

0xda3b,	// (0x0001a606) control_bg_pane_g1

0xda44,	// (0x0001a60f) control_bg_pane_g2

0x0001,

0xfd16,	// (0x0001c8e1) control_bg_pane_g

0xb684,	// (0x0001824f) cell_indicator_nsta_pane_g1_ParamLimits

0xb692,	// (0x0001825d) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0001c649) cell_indicator_nsta_pane_g_ParamLimits

0xb9df,	// (0x000185aa) form2_midp_time_pane_t1_ParamLimits

0x58c7,	// (0x00012492) main_idle_act4_pane_ParamLimits

0x58c7,	// (0x00012492) main_idle_act4_pane

0x5d95,	// (0x00012960) popup_tb_extension_window_ParamLimits

0xd8e8,	// (0x0001a4b3) tb_ext_find_pane_ParamLimits

0xd8e8,	// (0x0001a4b3) tb_ext_find_pane

0xda4d,	// (0x0001a618) ai_gene_pane_1_cp1

0x899c,	// (0x00015567) ai_gene_pane_2_cp1

0xda55,	// (0x0001a620) list_single_idle_plugin_calendar_pane

0xda5e,	// (0x0001a629) list_single_idle_plugin_notification_pane

0xda67,	// (0x0001a632) list_single_idle_plugin_player_pane

0xda70,	// (0x0001a63b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda70,	// (0x0001a63b) list_single_idle_plugin_shortcut_pane

0xda92,	// (0x0001a65d) main_idle_act4_pane_t1

0xdaa4,	// (0x0001a66f) main_idle_act4_pane_t2

0x0001,

0xfd1b,	// (0x0001c8e6) main_idle_act4_pane_t

0xdab6,	// (0x0001a681) middle_sk_idle_act4_pane_ParamLimits

0xdab6,	// (0x0001a681) middle_sk_idle_act4_pane

0xdacc,	// (0x0001a697) popup_clock_digital_analogue_window_cp2

0xdae6,	// (0x0001a6b1) shortcut_wheel_idle_act4_pane_ParamLimits

0xdae6,	// (0x0001a6b1) shortcut_wheel_idle_act4_pane

0xbc3f,	// (0x0001880a) shortcut_wheel_idle_act4_pane_g1

0xbc3f,	// (0x0001880a) shortcut_wheel_idle_act4_pane_g2

0xbc3f,	// (0x0001880a) shortcut_wheel_idle_act4_pane_g3

0xbc3f,	// (0x0001880a) shortcut_wheel_idle_act4_pane_g4

0xbc3f,	// (0x0001880a) shortcut_wheel_idle_act4_pane_g5

0xdafa,	// (0x0001a6c5) shortcut_wheel_idle_act4_pane_g6

0xdb02,	// (0x0001a6cd) shortcut_wheel_idle_act4_pane_g7

0xdb0a,	// (0x0001a6d5) shortcut_wheel_idle_act4_pane_g8

0xdb12,	// (0x0001a6dd) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd20,	// (0x0001c8eb) shortcut_wheel_idle_act4_pane_g

0xbeba,	// (0x00018a85) middle_sk_idle_act4_pane_g1_ParamLimits

0xbeba,	// (0x00018a85) middle_sk_idle_act4_pane_g1

0xdb76,	// (0x0001a741) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb76,	// (0x0001a741) middle_sk_idle_act4_pane_g2

0x0001,

0xfd43,	// (0x0001c90e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd43,	// (0x0001c90e) middle_sk_idle_act4_pane_g

0xdb82,	// (0x0001a74d) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb82,	// (0x0001a74d) middle_sk_idle_act4_pane_t1

0xdb9f,	// (0x0001a76a) grid_ai_shortcut_pane_ParamLimits

0xdb9f,	// (0x0001a76a) grid_ai_shortcut_pane

0xdbb8,	// (0x0001a783) list_highlight_pane_cp16_ParamLimits

0xdbb8,	// (0x0001a783) list_highlight_pane_cp16

0xdbc5,	// (0x0001a790) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbc5,	// (0x0001a790) list_single_idle_plugin_shortcut_pane_g1

0xdbd1,	// (0x0001a79c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbd1,	// (0x0001a79c) list_single_idle_plugin_shortcut_pane_g2

0xdbeb,	// (0x0001a7b6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbeb,	// (0x0001a7b6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd48,	// (0x0001c913) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd48,	// (0x0001c913) list_single_idle_plugin_shortcut_pane_g

0xdbfe,	// (0x0001a7c9) cell_ai_shortcut_pane_ParamLimits

0xdbfe,	// (0x0001a7c9) cell_ai_shortcut_pane

0xdc21,	// (0x0001a7ec) cell_ai_shortcut_pane_g1_ParamLimits

0xdc21,	// (0x0001a7ec) cell_ai_shortcut_pane_g1

0xda4d,	// (0x0001a618) ai_gene_pane_1_cp2

0xdc43,	// (0x0001a80e) ai_gene_pane_2_cp2

0xdc4b,	// (0x0001a816) list_highlight_pane_cp15

0xdc54,	// (0x0001a81f) list_single_idle_plugin_calendar_pane_g1

0xdc4b,	// (0x0001a816) list_highlight_pane_cp17

0xdc5c,	// (0x0001a827) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc64,	// (0x0001a82f) list_single_idle_plugin_player_pane_g1

0xac7a,	// (0x00017845) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4f,	// (0x0001c91a) list_single_idle_plugin_player_pane_g

0xdc6c,	// (0x0001a837) list_single_idle_plugin_player_pane_t1

0xdc7a,	// (0x0001a845) list_single_idle_plugin_player_pane_t2

0xdc88,	// (0x0001a853) list_single_idle_plugin_player_pane_t3

0xdc96,	// (0x0001a861) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd54,	// (0x0001c91f) list_single_idle_plugin_player_pane_t

0xdca4,	// (0x0001a86f) wait_bar_pane_cp15

0xdcac,	// (0x0001a877) grid_ai_notification_pane

0xac7a,	// (0x00017845) list_single_idle_plugin_notification_pane_g1

0xdcb5,	// (0x0001a880) cell_ai_notification_pane_ParamLimits

0xdcb5,	// (0x0001a880) cell_ai_notification_pane

0xdcc2,	// (0x0001a88d) cell_ai_notification_pane_g1

0xdcca,	// (0x0001a895) cell_ai_notification_pane_t1

0xdcd8,	// (0x0001a8a3) tb_ext_find_button_pane

0xdce0,	// (0x0001a8ab) tb_ext_find_pane_g1

0xdce8,	// (0x0001a8b3) tb_ext_find_pane_t1

0x818c,	// (0x00014d57) tb_ext_find_button_pane_g1

0xdcf6,	// (0x0001a8c1) tb_ext_find_button_pane_g2

0x0001,

0xfd5d,	// (0x0001c928) tb_ext_find_button_pane_g

0xda92,	// (0x0001a65d) main_idle_act4_pane_t1_ParamLimits

0xdaa4,	// (0x0001a66f) main_idle_act4_pane_t2_ParamLimits

0xfd1b,	// (0x0001c8e6) main_idle_act4_pane_t_ParamLimits

0xdacc,	// (0x0001a697) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdada,	// (0x0001a6a5) sat_plugin_idle_act4_pane_ParamLimits

0xdada,	// (0x0001a6a5) sat_plugin_idle_act4_pane

0xdcff,	// (0x0001a8ca) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcff,	// (0x0001a8ca) sat_plugin_idle_act4_pane_t1

0xdd12,	// (0x0001a8dd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd12,	// (0x0001a8dd) sat_plugin_idle_act4_pane_t2

0xdd25,	// (0x0001a8f0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd25,	// (0x0001a8f0) sat_plugin_idle_act4_pane_t3

0xdd38,	// (0x0001a903) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd38,	// (0x0001a903) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd62,	// (0x0001c92d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd62,	// (0x0001c92d) sat_plugin_idle_act4_pane_t

0x5087,	// (0x00011c52) popup_battery_window_ParamLimits

0x5087,	// (0x00011c52) popup_battery_window

0x3949,	// (0x00010514) bg_popup_sub_pane_cp25_ParamLimits

0x3949,	// (0x00010514) bg_popup_sub_pane_cp25

0xdd4b,	// (0x0001a916) popup_battery_window_g1_ParamLimits

0xdd4b,	// (0x0001a916) popup_battery_window_g1

0xdd57,	// (0x0001a922) popup_battery_window_t1_ParamLimits

0xdd57,	// (0x0001a922) popup_battery_window_t1

0xdd69,	// (0x0001a934) popup_battery_window_t2_ParamLimits

0xdd69,	// (0x0001a934) popup_battery_window_t2

0x0001,

0xfd6b,	// (0x0001c936) popup_battery_window_t_ParamLimits

0xfd6b,	// (0x0001c936) popup_battery_window_t

0x8866,	// (0x00015431) midp_canvas_pane_ParamLimits

0x88de,	// (0x000154a9) midp_keypad_pane_ParamLimits

0x88de,	// (0x000154a9) midp_keypad_pane

0x8b81,	// (0x0001574c) main_midp_pane_ParamLimits

0xb6ff,	// (0x000182ca) signal_pane_g2_cp_ParamLimits

0xdd86,	// (0x0001a951) aid_size_cell_midp_keypad_ParamLimits

0xdd86,	// (0x0001a951) aid_size_cell_midp_keypad

0xdda0,	// (0x0001a96b) midp_keyp_game_grid_pane_ParamLimits

0xdda0,	// (0x0001a96b) midp_keyp_game_grid_pane

0xddc0,	// (0x0001a98b) midp_keyp_rocker_pane_ParamLimits

0xddc0,	// (0x0001a98b) midp_keyp_rocker_pane

0xddef,	// (0x0001a9ba) midp_keyp_sk_left_pane_ParamLimits

0xddef,	// (0x0001a9ba) midp_keyp_sk_left_pane

0xde4b,	// (0x0001aa16) midp_keyp_sk_right_pane_ParamLimits

0xde4b,	// (0x0001aa16) midp_keyp_sk_right_pane

0x3536,	// (0x00010101) bg_button_pane_cp03

0xdea7,	// (0x0001aa72) midp_keyp_sk_left_pane_g1

0x3536,	// (0x00010101) bg_button_pane_cp04

0xdea7,	// (0x0001aa72) midp_keyp_sk_right_pane_g1

0xbc3f,	// (0x0001880a) midp_keyp_rocker_pane_g1

0xdeaf,	// (0x0001aa7a) keyp_game_cell_pane_ParamLimits

0xdeaf,	// (0x0001aa7a) keyp_game_cell_pane

0x3536,	// (0x00010101) bg_button_pane_cp02

0xdec2,	// (0x0001aa8d) keyp_game_cell_pane_g1

0x50d1,	// (0x00011c9c) popup_fep_vkb2_window_ParamLimits

0x50d1,	// (0x00011c9c) popup_fep_vkb2_window

0x694a,	// (0x00013515) aid_size_cell_vkb2_ParamLimits

0x694a,	// (0x00013515) aid_size_cell_vkb2

0x6996,	// (0x00013561) popup_fep_vkb2_window_g1_ParamLimits

0x6996,	// (0x00013561) popup_fep_vkb2_window_g1

0x69de,	// (0x000135a9) vkb2_area_bottom_pane_ParamLimits

0x69de,	// (0x000135a9) vkb2_area_bottom_pane

0x6a32,	// (0x000135fd) vkb2_area_keypad_pane_ParamLimits

0x6a32,	// (0x000135fd) vkb2_area_keypad_pane

0x6a78,	// (0x00013643) vkb2_area_top_pane_ParamLimits

0x6a78,	// (0x00013643) vkb2_area_top_pane

0x6af8,	// (0x000136c3) vkb2_top_entry_pane_ParamLimits

0x6af8,	// (0x000136c3) vkb2_top_entry_pane

0x6b22,	// (0x000136ed) vkb2_top_grid_left_pane_ParamLimits

0x6b22,	// (0x000136ed) vkb2_top_grid_left_pane

0x6b41,	// (0x0001370c) vkb2_top_grid_right_pane_ParamLimits

0x6b41,	// (0x0001370c) vkb2_top_grid_right_pane

0x6b60,	// (0x0001372b) vkb2_cell_keypad_pane_ParamLimits

0x6b60,	// (0x0001372b) vkb2_cell_keypad_pane

0x6c31,	// (0x000137fc) vkb2_area_bottom_grid_pane_ParamLimits

0x6c31,	// (0x000137fc) vkb2_area_bottom_grid_pane

0x6c57,	// (0x00013822) vkb2_area_bottom_pane_g1_ParamLimits

0x6c57,	// (0x00013822) vkb2_area_bottom_pane_g1

0x6c7b,	// (0x00013846) vkb2_area_bottom_pane_g2_ParamLimits

0x6c7b,	// (0x00013846) vkb2_area_bottom_pane_g2

0x6ca9,	// (0x00013874) vkb2_area_bottom_pane_g3_ParamLimits

0x6ca9,	// (0x00013874) vkb2_area_bottom_pane_g3

0x0002,

0xfd70,	// (0x0001c93b) vkb2_area_bottom_pane_g_ParamLimits

0xfd70,	// (0x0001c93b) vkb2_area_bottom_pane_g

0x6d0a,	// (0x000138d5) vkb2_top_cell_left_pane_ParamLimits

0x6d0a,	// (0x000138d5) vkb2_top_cell_left_pane

0xded3,	// (0x0001aa9e) vkb2_top_entry_pane_g1_ParamLimits

0xded3,	// (0x0001aa9e) vkb2_top_entry_pane_g1

0xdee1,	// (0x0001aaac) vkb2_top_entry_pane_t1_ParamLimits

0xdee1,	// (0x0001aaac) vkb2_top_entry_pane_t1

0xdf13,	// (0x0001aade) vkb2_top_entry_pane_t2_ParamLimits

0xdf13,	// (0x0001aade) vkb2_top_entry_pane_t2

0xdf45,	// (0x0001ab10) vkb2_top_entry_pane_t3_ParamLimits

0xdf45,	// (0x0001ab10) vkb2_top_entry_pane_t3

0x0002,

0xfd77,	// (0x0001c942) vkb2_top_entry_pane_t_ParamLimits

0xfd77,	// (0x0001c942) vkb2_top_entry_pane_t

0x6d57,	// (0x00013922) vkb2_top_grid_right_pane_g1_ParamLimits

0x6d57,	// (0x00013922) vkb2_top_grid_right_pane_g1

0x6d6d,	// (0x00013938) vkb2_top_grid_right_pane_g2_ParamLimits

0x6d6d,	// (0x00013938) vkb2_top_grid_right_pane_g2

0x6d85,	// (0x00013950) vkb2_top_grid_right_pane_g3_ParamLimits

0x6d85,	// (0x00013950) vkb2_top_grid_right_pane_g3

0x6d9d,	// (0x00013968) vkb2_top_grid_right_pane_g4_ParamLimits

0x6d9d,	// (0x00013968) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7e,	// (0x0001c949) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7e,	// (0x0001c949) vkb2_top_grid_right_pane_g

0x6db3,	// (0x0001397e) vkb2_top_cell_left_pane_g1

0x6dca,	// (0x00013995) vkb2_cell_keypad_pane_g1_ParamLimits

0x6dca,	// (0x00013995) vkb2_cell_keypad_pane_g1

0xdf69,	// (0x0001ab34) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf69,	// (0x0001ab34) vkb2_cell_keypad_pane_t1

0x6dd8,	// (0x000139a3) vkb2_cell_bottom_grid_pane_ParamLimits

0x6dd8,	// (0x000139a3) vkb2_cell_bottom_grid_pane

0x6e11,	// (0x000139dc) vkb2_cell_bottom_grid_pane_g1

0xdb1a,	// (0x0001a6e5) aid_call2_pane_cp02

0xdb22,	// (0x0001a6ed) aid_call_pane_cp02

0xdb2a,	// (0x0001a6f5) clock_digital_number_pane_cp10

0xdb32,	// (0x0001a6fd) clock_digital_number_pane_cp11

0xdb3a,	// (0x0001a705) clock_digital_number_pane_cp12

0xdb42,	// (0x0001a70d) clock_digital_number_pane_cp13

0xdb4a,	// (0x0001a715) clock_digital_separator_pane_cp10

0x818c,	// (0x00014d57) popup_clock_digital_analogue_window_cp2_g1

0x818c,	// (0x00014d57) popup_clock_digital_analogue_window_cp2_g2

0xdb52,	// (0x0001a71d) popup_clock_digital_analogue_window_cp2_g3

0x818c,	// (0x00014d57) popup_clock_digital_analogue_window_cp2_g4

0xdb52,	// (0x0001a71d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd33,	// (0x0001c8fe) popup_clock_digital_analogue_window_cp2_g

0xdb5a,	// (0x0001a725) popup_clock_digital_analogue_window_cp2_t1

0xdb68,	// (0x0001a733) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3e,	// (0x0001c909) popup_clock_digital_analogue_window_cp2_t

0xbc3f,	// (0x0001880a) clock_digital_number_pane_cp10_g1

0xbc3f,	// (0x0001880a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0001c6e5) clock_digital_number_pane_cp10_g

0xbc3f,	// (0x0001880a) clock_digital_separator_pane_cp10_g1

0xbc3f,	// (0x0001880a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0001c6e5) clock_digital_separator_pane_cp10_g

0xd994,	// (0x0001a55f) uniindi_top_pane_g3

0xd9a5,	// (0x0001a570) uniindi_top_pane_g4

0x6beb,	// (0x000137b6) vkb2_row_keypad_pane_ParamLimits

0x6beb,	// (0x000137b6) vkb2_row_keypad_pane

0x6e2d,	// (0x000139f8) vkb2_cell_t_keypad_pane_ParamLimits

0x6e2d,	// (0x000139f8) vkb2_cell_t_keypad_pane

0x6e3d,	// (0x00013a08) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6e3d,	// (0x00013a08) vkb2_cell_t_keypad_pane_cp08

0x6e52,	// (0x00013a1d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6e52,	// (0x00013a1d) vkb2_cell_t_keypad_pane_cp09

0x6e66,	// (0x00013a31) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6e66,	// (0x00013a31) vkb2_cell_t_keypad_pane_cp01

0x6e77,	// (0x00013a42) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6e77,	// (0x00013a42) vkb2_cell_t_keypad_pane_cp02

0x6e88,	// (0x00013a53) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6e88,	// (0x00013a53) vkb2_cell_t_keypad_pane_cp03

0x6e99,	// (0x00013a64) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6e99,	// (0x00013a64) vkb2_cell_t_keypad_pane_cp04

0x6eaa,	// (0x00013a75) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6eaa,	// (0x00013a75) vkb2_cell_t_keypad_pane_cp05

0x6ebb,	// (0x00013a86) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6ebb,	// (0x00013a86) vkb2_cell_t_keypad_pane_cp06

0x6ece,	// (0x00013a99) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6ece,	// (0x00013a99) vkb2_cell_t_keypad_pane_cp07

0x6ee3,	// (0x00013aae) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6ee3,	// (0x00013aae) vkb2_cell_t_keypad_pane_cp10

0x667e,	// (0x00013249) vkb2_cell_t_keypad_pane_g1

0xdf80,	// (0x0001ab4b) vkb2_cell_t_keypad_pane_t1

0x4fc2,	// (0x00011b8d) popup_grid_graphic2_window

0xdf92,	// (0x0001ab5d) aid_size_cell_graphic2_ParamLimits

0xdf92,	// (0x0001ab5d) aid_size_cell_graphic2

0xdfca,	// (0x0001ab95) bg_popup_window_pane_cp21_ParamLimits

0xdfca,	// (0x0001ab95) bg_popup_window_pane_cp21

0xdfd8,	// (0x0001aba3) graphic2_pages_pane_ParamLimits

0xdfd8,	// (0x0001aba3) graphic2_pages_pane

0xe01e,	// (0x0001abe9) grid_graphic2_control_pane_ParamLimits

0xe01e,	// (0x0001abe9) grid_graphic2_control_pane

0xe05c,	// (0x0001ac27) grid_graphic2_pane_ParamLimits

0xe05c,	// (0x0001ac27) grid_graphic2_pane

0xe0d2,	// (0x0001ac9d) cell_graphic2_pane

0x4fc2,	// (0x00011b8d) main_comp_mode_pane

0xd19e,	// (0x00019d69) list_ai3_gene_pane_ParamLimits

0xd5c7,	// (0x0001a192) bg_popup_window_pane_cp19_ParamLimits

0xd5d3,	// (0x0001a19e) bg_touch_area_indi_pane_ParamLimits

0xd5d3,	// (0x0001a19e) bg_touch_area_indi_pane

0xd5e9,	// (0x0001a1b4) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5e9,	// (0x0001a1b4) bg_touch_area_indi_pane_cp01

0xd5ff,	// (0x0001a1ca) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ff,	// (0x0001a1ca) bg_touch_area_indi_pane_cp02

0xd619,	// (0x0001a1e4) bg_touch_area_indi_pane_cp03_ParamLimits

0xd619,	// (0x0001a1e4) bg_touch_area_indi_pane_cp03

0xd633,	// (0x0001a1fe) popup_slider_window_g1_ParamLimits

0xd64f,	// (0x0001a21a) popup_slider_window_g2_ParamLimits

0xd66b,	// (0x0001a236) popup_slider_window_g3_ParamLimits

0xfcc8,	// (0x0001c893) popup_slider_window_g_ParamLimits

0xd6d1,	// (0x0001a29c) popup_slider_window_t1_ParamLimits

0xd745,	// (0x0001a310) small_volume_slider_vertical_pane_ParamLimits

0xe0d2,	// (0x0001ac9d) cell_graphic2_pane_ParamLimits

0xe126,	// (0x0001acf1) bg_button_pane_cp10_ParamLimits

0xe126,	// (0x0001acf1) bg_button_pane_cp10

0xe13b,	// (0x0001ad06) bg_button_pane_cp11_ParamLimits

0xe13b,	// (0x0001ad06) bg_button_pane_cp11

0xe150,	// (0x0001ad1b) graphic2_pages_pane_g1_ParamLimits

0xe150,	// (0x0001ad1b) graphic2_pages_pane_g1

0xe16b,	// (0x0001ad36) graphic2_pages_pane_g2_ParamLimits

0xe16b,	// (0x0001ad36) graphic2_pages_pane_g2

0x0001,

0xfd8c,	// (0x0001c957) graphic2_pages_pane_g_ParamLimits

0xfd8c,	// (0x0001c957) graphic2_pages_pane_g

0xe183,	// (0x0001ad4e) graphic2_pages_pane_t1_ParamLimits

0xe183,	// (0x0001ad4e) graphic2_pages_pane_t1

0xe199,	// (0x0001ad64) cell_graphic2_control_pane_ParamLimits

0xe199,	// (0x0001ad64) cell_graphic2_control_pane

0xe1b9,	// (0x0001ad84) cell_graphic2_pane_g1_ParamLimits

0xe1b9,	// (0x0001ad84) cell_graphic2_pane_g1

0xe1c6,	// (0x0001ad91) cell_graphic2_pane_g2_ParamLimits

0xe1c6,	// (0x0001ad91) cell_graphic2_pane_g2

0xe1d3,	// (0x0001ad9e) cell_graphic2_pane_g3_ParamLimits

0xe1d3,	// (0x0001ad9e) cell_graphic2_pane_g3

0xe1e0,	// (0x0001adab) cell_graphic2_pane_g4_ParamLimits

0xe1e0,	// (0x0001adab) cell_graphic2_pane_g4

0xe1ed,	// (0x0001adb8) cell_graphic2_pane_g5_ParamLimits

0xe1ed,	// (0x0001adb8) cell_graphic2_pane_g5

0x0004,

0xfd91,	// (0x0001c95c) cell_graphic2_pane_g_ParamLimits

0xfd91,	// (0x0001c95c) cell_graphic2_pane_g

0xe205,	// (0x0001add0) cell_graphic2_pane_t1_ParamLimits

0xe205,	// (0x0001add0) cell_graphic2_pane_t1

0x921f,	// (0x00015dea) grid_highlight_pane_cp11_ParamLimits

0x921f,	// (0x00015dea) grid_highlight_pane_cp11

0x3949,	// (0x00010514) bg_button_pane_cp05

0xe23b,	// (0x0001ae06) cell_graphic2_control_pane_g1

0xbc3f,	// (0x0001880a) bg_touch_area_indi_pane_g1

0xe263,	// (0x0001ae2e) aid_cmod_rocker_key_size

0xe26d,	// (0x0001ae38) aid_cmode_itu_key_size

0xe277,	// (0x0001ae42) main_cmode_video_pane

0xe281,	// (0x0001ae4c) main_comp_mode_itu_pane

0xe28d,	// (0x0001ae58) main_comp_mode_rocker_pane

0xe299,	// (0x0001ae64) cell_cmode_rocker_pane_ParamLimits

0xe299,	// (0x0001ae64) cell_cmode_rocker_pane

0xe2ad,	// (0x0001ae78) cell_cmode_itu_pane_ParamLimits

0xe2ad,	// (0x0001ae78) cell_cmode_itu_pane

0x3eeb,	// (0x00010ab6) bg_button_pane_cp06_ParamLimits

0x3eeb,	// (0x00010ab6) bg_button_pane_cp06

0xbeba,	// (0x00018a85) cell_cmode_rocker_pane_g1_ParamLimits

0xbeba,	// (0x00018a85) cell_cmode_rocker_pane_g1

0xd7ec,	// (0x0001a3b7) cell_cmode_rocker_pane_g2_ParamLimits

0xd7ec,	// (0x0001a3b7) cell_cmode_rocker_pane_g2

0x0001,

0xfda1,	// (0x0001c96c) cell_cmode_rocker_pane_g_ParamLimits

0xfda1,	// (0x0001c96c) cell_cmode_rocker_pane_g

0x3536,	// (0x00010101) bg_button_pane_cp07

0xe2c4,	// (0x0001ae8f) cell_cmode_itu_pane_g1

0xe2cd,	// (0x0001ae98) cell_cmode_itu_pane_t1

0xe2db,	// (0x0001aea6) cell_cmode_itu_pane_t2

0x0001,

0xfda6,	// (0x0001c971) cell_cmode_itu_pane_t

0xda19,	// (0x0001a5e4) aid_touch_ctrl_left

0xda21,	// (0x0001a5ec) aid_touch_ctrl_right

0x3536,	// (0x00010101) compa_mode_pane

0xe2e9,	// (0x0001aeb4) aid_cmod_rocker_key_size_cp

0xe2f3,	// (0x0001aebe) aid_cmode_itu_key_size_cp

0xe2fd,	// (0x0001aec8) compa_mode_pane_g1

0xe305,	// (0x0001aed0) compa_mode_pane_g2

0xe30d,	// (0x0001aed8) compa_mode_pane_g3

0x0002,

0xfdab,	// (0x0001c976) compa_mode_pane_g

0xe315,	// (0x0001aee0) main_comp_mode_itu_pane_cp

0xe31d,	// (0x0001aee8) main_comp_mode_rocker_pane_cp

0xe325,	// (0x0001aef0) cell_cmode_itu_pane_cp_ParamLimits

0xe325,	// (0x0001aef0) cell_cmode_itu_pane_cp

0xe33a,	// (0x0001af05) cell_cmode_rocker_pane_cp_ParamLimits

0xe33a,	// (0x0001af05) cell_cmode_rocker_pane_cp

0x3eeb,	// (0x00010ab6) bg_button_pane_cp06_cp_ParamLimits

0x3eeb,	// (0x00010ab6) bg_button_pane_cp06_cp

0xbeba,	// (0x00018a85) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbeba,	// (0x00018a85) cell_cmode_rocker_pane_g1_cp

0xbc3f,	// (0x0001880a) cell_cmode_rocker_pane_g2_cp

0x3536,	// (0x00010101) bg_button_pane_cp07_cp

0xe34c,	// (0x0001af17) cell_cmode_itu_pane_g1_cp

0xe355,	// (0x0001af20) cell_cmode_itu_pane_t1_cp

0xe355,	// (0x0001af20) cell_cmode_itu_pane_t2_cp

0xa74d,	// (0x00017318) settings_code_pane_cp2

0x3773,	// (0x0001033e) bg_popup_window_pane_cp3_ParamLimits

0x3b5d,	// (0x00010728) heading_pane_cp3_ParamLimits

0x3b6c,	// (0x00010737) listscroll_popup_graphic_pane_ParamLimits

0x6411,	// (0x00012fdc) fep_hwr_aid_pane_ParamLimits

0x68a3,	// (0x0001346e) aid_touch_sctrl_top_ParamLimits

0x68be,	// (0x00013489) sctrl_sk_top_pane_g1_ParamLimits

0x667e,	// (0x00013249) sctrl_sk_top_pane_g2_ParamLimits

0xfce1,	// (0x0001c8ac) sctrl_sk_top_pane_g_ParamLimits

0x68cb,	// (0x00013496) sctrl_sk_top_pane_t1_ParamLimits

0x68a3,	// (0x0001346e) aid_touch_sctrl_bottom_ParamLimits

0x68cb,	// (0x00013496) sctrl_sk_bottom_pane_t1_ParamLimits

0xd95e,	// (0x0001a529) aid_area_touch_clock

0x6abe,	// (0x00013689) aid_vkb2_area_top_pane_cell_ParamLimits

0x6abe,	// (0x00013689) aid_vkb2_area_top_pane_cell

0x6c0d,	// (0x000137d8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6c0d,	// (0x000137d8) aid_vkb2_area_bottom_pane_cell

0xdecb,	// (0x0001aa96) popup_char_count_window

0xe363,	// (0x0001af2e) popup_char_count_window_g1

0xe36c,	// (0x0001af37) popup_char_count_window_g2

0xe375,	// (0x0001af40) popup_char_count_window_g3

0x0002,

0xfdb2,	// (0x0001c97d) popup_char_count_window_g

0xe37e,	// (0x0001af49) popup_char_count_window_t1

0x6974,	// (0x0001353f) popup_fep_char_preview_window_ParamLimits

0x6974,	// (0x0001353f) popup_fep_char_preview_window

0x6adc,	// (0x000136a7) vkb2_top_candi_pane_ParamLimits

0x6adc,	// (0x000136a7) vkb2_top_candi_pane

0xe38c,	// (0x0001af57) cell_vkb2_top_candi_pane_ParamLimits

0xe38c,	// (0x0001af57) cell_vkb2_top_candi_pane

0x6ef8,	// (0x00013ac3) bg_popup_fep_char_preview_window_ParamLimits

0x6ef8,	// (0x00013ac3) bg_popup_fep_char_preview_window

0x6f06,	// (0x00013ad1) popup_fep_char_preview_window_t1_ParamLimits

0x6f06,	// (0x00013ad1) popup_fep_char_preview_window_t1

0xe3da,	// (0x0001afa5) bg_popup_fep_char_preview_window_g1

0xe3e2,	// (0x0001afad) bg_popup_fep_char_preview_window_g2

0xe3ea,	// (0x0001afb5) bg_popup_fep_char_preview_window_g3

0xe3f2,	// (0x0001afbd) bg_popup_fep_char_preview_window_g4

0xe3fa,	// (0x0001afc5) bg_popup_fep_char_preview_window_g5

0xe402,	// (0x0001afcd) bg_popup_fep_char_preview_window_g6

0xe40a,	// (0x0001afd5) bg_popup_fep_char_preview_window_g7

0xe412,	// (0x0001afdd) bg_popup_fep_char_preview_window_g8

0xe41a,	// (0x0001afe5) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb9,	// (0x0001c984) bg_popup_fep_char_preview_window_g

0x667e,	// (0x00013249) cell_vkb2_top_candi_pane_g1_ParamLimits

0x667e,	// (0x00013249) cell_vkb2_top_candi_pane_g1

0x668c,	// (0x00013257) cell_vkb2_top_candi_pane_g2_ParamLimits

0x668c,	// (0x00013257) cell_vkb2_top_candi_pane_g2

0xca0c,	// (0x000195d7) cell_vkb2_top_candi_pane_g3_ParamLimits

0xca0c,	// (0x000195d7) cell_vkb2_top_candi_pane_g3

0x6f48,	// (0x00013b13) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6f48,	// (0x00013b13) cell_vkb2_top_candi_pane_g4

0xc592,	// (0x0001915d) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc592,	// (0x0001915d) cell_vkb2_top_candi_pane_g5

0x6f69,	// (0x00013b34) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6f69,	// (0x00013b34) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdce,	// (0x0001c999) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdce,	// (0x0001c999) cell_vkb2_top_candi_pane_g

0x6f77,	// (0x00013b42) cell_vkb2_top_candi_pane_t1

0x6271,	// (0x00012e3c) aid_size_touch_slider_mark_ParamLimits

0x6271,	// (0x00012e3c) aid_size_touch_slider_mark

0xe00e,	// (0x0001abd9) grid_graphic2_catg_pane_ParamLimits

0xe00e,	// (0x0001abd9) grid_graphic2_catg_pane

0xe0ac,	// (0x0001ac77) popup_grid_graphic2_window_t1_ParamLimits

0xe0ac,	// (0x0001ac77) popup_grid_graphic2_window_t1

0xe0be,	// (0x0001ac89) popup_grid_graphic2_window_t2_ParamLimits

0xe0be,	// (0x0001ac89) popup_grid_graphic2_window_t2

0x0001,

0xfd87,	// (0x0001c952) popup_grid_graphic2_window_t_ParamLimits

0xfd87,	// (0x0001c952) popup_grid_graphic2_window_t

0x3949,	// (0x00010514) bg_button_pane_cp05_ParamLimits

0xe23b,	// (0x0001ae06) cell_graphic2_control_pane_g1_ParamLimits

0xe422,	// (0x0001afed) cell_graphic2_catg_pane_ParamLimits

0xe422,	// (0x0001afed) cell_graphic2_catg_pane

0x3536,	// (0x00010101) bg_button_pane_cp12

0xe434,	// (0x0001afff) cell_graphic2_catg_pane_g1

0xd92a,	// (0x0001a4f5) cell_tb_ext_pane_t1_ParamLimits

0x6d2a,	// (0x000138f5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6d2a,	// (0x000138f5) vkb2_top_cell_right_narrow_pane

0x6d42,	// (0x0001390d) vkb2_top_cell_right_wide_pane_ParamLimits

0x6d42,	// (0x0001390d) vkb2_top_cell_right_wide_pane

0x6403,	// (0x00012fce) bg_vkb2_func_pane_ParamLimits

0x6403,	// (0x00012fce) bg_vkb2_func_pane

0x6db3,	// (0x0001397e) vkb2_top_cell_left_pane_g1_ParamLimits

0x6403,	// (0x00012fce) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6403,	// (0x00012fce) bg_vkb2_fuc_pane_cp03

0x6e11,	// (0x000139dc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9103,	// (0x00015cce) bg_vkb2_func_pane_g1

0x910b,	// (0x00015cd6) bg_vkb2_func_pane_g2

0x911b,	// (0x00015ce6) bg_vkb2_func_pane_g3

0x9113,	// (0x00015cde) bg_vkb2_func_pane_g4

0x9123,	// (0x00015cee) bg_vkb2_func_pane_g5

0x912b,	// (0x00015cf6) bg_vkb2_func_pane_g6

0x9133,	// (0x00015cfe) bg_vkb2_func_pane_g7

0x913b,	// (0x00015d06) bg_vkb2_func_pane_g8

0x90fb,	// (0x00015cc6) bg_vkb2_func_pane_g9

0x0008,

0xfddb,	// (0x0001c9a6) bg_vkb2_func_pane_g

0x6403,	// (0x00012fce) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6403,	// (0x00012fce) bg_vkb2_fuc_pane_cp01

0x6db3,	// (0x0001397e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6db3,	// (0x0001397e) vkb2_top_cell_right_wide_pane_g1

0x6403,	// (0x00012fce) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6403,	// (0x00012fce) bg_vkb2_fuc_pane_cp02

0x6f95,	// (0x00013b60) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6f95,	// (0x00013b60) vkb2_top_cell_right_narrow_pane_g1

0xd541,	// (0x0001a10c) aid_touch_area_decrease_ParamLimits

0xd541,	// (0x0001a10c) aid_touch_area_decrease

0xd565,	// (0x0001a130) aid_touch_area_increase_ParamLimits

0xd565,	// (0x0001a130) aid_touch_area_increase

0xd57d,	// (0x0001a148) aid_touch_area_mute_ParamLimits

0xd57d,	// (0x0001a148) aid_touch_area_mute

0xd599,	// (0x0001a164) aid_touch_area_slider_ParamLimits

0xd599,	// (0x0001a164) aid_touch_area_slider

0xd687,	// (0x0001a252) popup_slider_window_g4_ParamLimits

0xd687,	// (0x0001a252) popup_slider_window_g4

0xd69f,	// (0x0001a26a) popup_slider_window_g5_ParamLimits

0xd69f,	// (0x0001a26a) popup_slider_window_g5

0xd6c1,	// (0x0001a28c) popup_slider_window_g6_ParamLimits

0xd6c1,	// (0x0001a28c) popup_slider_window_g6

0xd6ff,	// (0x0001a2ca) popup_slider_window_t2_ParamLimits

0xd6ff,	// (0x0001a2ca) popup_slider_window_t2

0x0001,

0xfcd5,	// (0x0001c8a0) popup_slider_window_t_ParamLimits

0xfcd5,	// (0x0001c8a0) popup_slider_window_t

0xd717,	// (0x0001a2e2) slider_pane_ParamLimits

0xd717,	// (0x0001a2e2) slider_pane

0xe43d,	// (0x0001b008) slider_pane_g1_ParamLimits

0xe43d,	// (0x0001b008) slider_pane_g1

0xe451,	// (0x0001b01c) slider_pane_g2_ParamLimits

0xe451,	// (0x0001b01c) slider_pane_g2

0xe467,	// (0x0001b032) slider_pane_g3_ParamLimits

0xe467,	// (0x0001b032) slider_pane_g3

0x0003,

0xfdee,	// (0x0001c9b9) slider_pane_g_ParamLimits

0xfdee,	// (0x0001c9b9) slider_pane_g

0x5df7,	// (0x000129c2) popup_tb_float_extension_window_ParamLimits

0x5df7,	// (0x000129c2) popup_tb_float_extension_window

0xe493,	// (0x0001b05e) aid_size_cell_tb_float_ext

0x3536,	// (0x00010101) bg_popup_sub_window_cp28

0xe49f,	// (0x0001b06a) grid_tb_float_ext_pane

0xe4ab,	// (0x0001b076) cell_tb_float_ext_pane_ParamLimits

0xe4ab,	// (0x0001b076) cell_tb_float_ext_pane

0xe4c7,	// (0x0001b092) cell_tb_float_ext_pane_g1

0xe4d0,	// (0x0001b09b) grid_highlight_pane_cp12

0x6558,	// (0x00013123) cell_last_hwr_side_pane_ParamLimits

0x6558,	// (0x00013123) cell_last_hwr_side_pane

0xbc3f,	// (0x0001880a) cell_last_hwr_side_pane_g1

0xe4d9,	// (0x0001b0a4) cell_last_hwr_side_pane_g2

0x0001,

0xfdf7,	// (0x0001c9c2) cell_last_hwr_side_pane_g

0x6cd9,	// (0x000138a4) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6cd9,	// (0x000138a4) vkb2_area_bottom_space_btn_pane

0x667e,	// (0x00013249) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf80,	// (0x0001ab4b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6f77,	// (0x00013b42) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6fb1,	// (0x00013b7c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6fb1,	// (0x00013b7c) vkb2_area_bottom_space_btn_pane_g1

0x6feb,	// (0x00013bb6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6feb,	// (0x00013bb6) vkb2_area_bottom_space_btn_pane_g2

0x7021,	// (0x00013bec) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7021,	// (0x00013bec) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfc,	// (0x0001c9c7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfc,	// (0x0001c9c7) vkb2_area_bottom_space_btn_pane_g

0x64c8,	// (0x00013093) cel_fep_hwr_func_pane_ParamLimits

0x64c8,	// (0x00013093) cel_fep_hwr_func_pane

0x6504,	// (0x000130cf) cell_hwr_side_button_pane_ParamLimits

0x6504,	// (0x000130cf) cell_hwr_side_button_pane

0xd95e,	// (0x0001a529) aid_area_touch_clock_ParamLimits

0x3949,	// (0x00010514) bg_uniindi_top_pane_ParamLimits

0xd972,	// (0x0001a53d) uniindi_top_pane_g1_ParamLimits

0xd988,	// (0x0001a553) uniindi_top_pane_g2_ParamLimits

0xd994,	// (0x0001a55f) uniindi_top_pane_g3_ParamLimits

0xd9a5,	// (0x0001a570) uniindi_top_pane_g4_ParamLimits

0xfd0d,	// (0x0001c8d8) uniindi_top_pane_g_ParamLimits

0xd9b2,	// (0x0001a57d) uniindi_top_pane_t1_ParamLimits

0x3949,	// (0x00010514) bg_vkb2_func_pane_cp01_ParamLimits

0x3949,	// (0x00010514) bg_vkb2_func_pane_cp01

0xe4e2,	// (0x0001b0ad) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e2,	// (0x0001b0ad) cel_fep_hwr_func_pane_g1

0x3949,	// (0x00010514) bg_vkb2_func_pane_cp02_ParamLimits

0x3949,	// (0x00010514) bg_vkb2_func_pane_cp02

0xe4e2,	// (0x0001b0ad) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e2,	// (0x0001b0ad) cell_hwr_side_button_pane_g1

0x8f44,	// (0x00015b0f) status_pane_g4_ParamLimits

0x8f44,	// (0x00015b0f) status_pane_g4

0x8f5e,	// (0x00015b29) status_pane_t1

0xb9f2,	// (0x000185bd) form2_midp_gauge_slider_cont_pane

0xb9fa,	// (0x000185c5) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba0c,	// (0x000185d7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba1e,	// (0x000185e9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0001c698) form2_midp_gauge_slider_pane_t_ParamLimits

0xba30,	// (0x000185fb) form2_midp_slider_pane_ParamLimits

0x693c,	// (0x00013507) aid_size_cell_func_vkb2_ParamLimits

0x693c,	// (0x00013507) aid_size_cell_func_vkb2

0xe47f,	// (0x0001b04a) slider_pane_g4_ParamLimits

0xe47f,	// (0x0001b04a) slider_pane_g4

0x706b,	// (0x00013c36) form2_midp_gauge_slider_pane_t2_cp01

0x7079,	// (0x00013c44) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7079,	// (0x00013c44) form2_midp_gauge_slider_pane_t3_cp01

0x7096,	// (0x00013c61) form2_midp_slider_pane_cp01

0x3536,	// (0x00010101) navi_smil_pane

0xe51b,	// (0x0001b0e6) navi_smil_pane_g1

0xe523,	// (0x0001b0ee) navi_smil_pane_t1

0xe4f0,	// (0x0001b0bb) form2_midp_slider_pane_g1

0xe4f9,	// (0x0001b0c4) form2_midp_slider_pane_g2

0xe501,	// (0x0001b0cc) form2_midp_slider_pane_g3

0xe4f0,	// (0x0001b0bb) form2_midp_slider_pane_g4

0xe509,	// (0x0001b0d4) form2_midp_slider_pane_g5

0x0004,

0xfe05,	// (0x0001c9d0) form2_midp_slider_pane_g

0x705b,	// (0x00013c26) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x705b,	// (0x00013c26) vkb2_area_bottom_space_btn_pane_g4

0x8d63,	// (0x0001592e) lc0_navi_pane_ParamLimits

0x8d63,	// (0x0001592e) lc0_navi_pane

0x8ddf,	// (0x000159aa) lc0_stat_indi_pane_ParamLimits

0x8ddf,	// (0x000159aa) lc0_stat_indi_pane

0x8df6,	// (0x000159c1) ls0_title_pane_ParamLimits

0x8df6,	// (0x000159c1) ls0_title_pane

0x3eeb,	// (0x00010ab6) bg_popup_sub_pane_cp14_ParamLimits

0xd945,	// (0x0001a510) list_uniindi_pane_ParamLimits

0xd951,	// (0x0001a51c) uniindi_top_pane_ParamLimits

0xd9f1,	// (0x0001a5bc) list_single_uniindi_pane_g1_ParamLimits

0xda04,	// (0x0001a5cf) list_single_uniindi_pane_t1_ParamLimits

0x709f,	// (0x00013c6a) lc0_stat_clock_pane_ParamLimits

0x709f,	// (0x00013c6a) lc0_stat_clock_pane

0xe531,	// (0x0001b0fc) lc0_stat_indi_pane_g1_ParamLimits

0xe531,	// (0x0001b0fc) lc0_stat_indi_pane_g1

0xe53e,	// (0x0001b109) lc0_stat_indi_pane_g2_ParamLimits

0xe53e,	// (0x0001b109) lc0_stat_indi_pane_g2

0x0001,

0xfe10,	// (0x0001c9db) lc0_stat_indi_pane_g_ParamLimits

0xfe10,	// (0x0001c9db) lc0_stat_indi_pane_g

0x70ac,	// (0x00013c77) lc0_uni_indicator_pane_ParamLimits

0x70ac,	// (0x00013c77) lc0_uni_indicator_pane

0xe54b,	// (0x0001b116) ls0_title_pane_g1_ParamLimits

0xe54b,	// (0x0001b116) ls0_title_pane_g1

0xe55f,	// (0x0001b12a) ls0_title_pane_t1_ParamLimits

0xe55f,	// (0x0001b12a) ls0_title_pane_t1

0x70b9,	// (0x00013c84) lc0_uni_indicator_pane_g1_ParamLimits

0x70b9,	// (0x00013c84) lc0_uni_indicator_pane_g1

0xe595,	// (0x0001b160) lc0_stat_clock_pane_t1

0x4fc2,	// (0x00011b8d) main_ai5_pane

0xe5a3,	// (0x0001b16e) ai5_sk_pane_ParamLimits

0xe5a3,	// (0x0001b16e) ai5_sk_pane

0xe5b0,	// (0x0001b17b) cell_ai5_widget_pane_ParamLimits

0xe5b0,	// (0x0001b17b) cell_ai5_widget_pane

0xe64f,	// (0x0001b21a) aid_size_cell_widget_grid

0xe65d,	// (0x0001b228) bg_ai5_widget_pane_ParamLimits

0xe65d,	// (0x0001b228) bg_ai5_widget_pane

0xe6d9,	// (0x0001b2a4) cell_ai5_widget_pane_g2

0xe6ed,	// (0x0001b2b8) cell_ai5_widget_pane_g3

0xe707,	// (0x0001b2d2) cell_ai5_widget_pane_g4

0xe717,	// (0x0001b2e2) cell_ai5_widget_pane_g5

0xe727,	// (0x0001b2f2) cell_ai5_widget_pane_g6

0xe733,	// (0x0001b2fe) cell_ai5_widget_pane_g7

0xe79f,	// (0x0001b36a) cell_ai5_widget_pane_t1_ParamLimits

0xe79f,	// (0x0001b36a) cell_ai5_widget_pane_t1

0xe7bc,	// (0x0001b387) cell_ai5_widget_pane_t2_ParamLimits

0xe7bc,	// (0x0001b387) cell_ai5_widget_pane_t2

0xe7d4,	// (0x0001b39f) cell_ai5_widget_pane_t3_ParamLimits

0xe7d4,	// (0x0001b39f) cell_ai5_widget_pane_t3

0xe7ec,	// (0x0001b3b7) cell_ai5_widget_pane_t4_ParamLimits

0xe7ec,	// (0x0001b3b7) cell_ai5_widget_pane_t4

0xe812,	// (0x0001b3dd) cell_ai5_widget_pane_t5_ParamLimits

0xe812,	// (0x0001b3dd) cell_ai5_widget_pane_t5

0xe832,	// (0x0001b3fd) cell_ai5_widget_pane_t6_ParamLimits

0xe832,	// (0x0001b3fd) cell_ai5_widget_pane_t6

0xe844,	// (0x0001b40f) cell_ai5_widget_pane_t7_ParamLimits

0xe844,	// (0x0001b40f) cell_ai5_widget_pane_t7

0xe863,	// (0x0001b42e) cell_ai5_widget_pane_t8_ParamLimits

0xe863,	// (0x0001b42e) cell_ai5_widget_pane_t8

0x000b,

0xfe30,	// (0x0001c9fb) cell_ai5_widget_pane_t_ParamLimits

0xfe30,	// (0x0001c9fb) cell_ai5_widget_pane_t

0xe8e7,	// (0x0001b4b2) grid_ai5_widget_pane

0x3eeb,	// (0x00010ab6) highlight_cell_ai5_widget_pane_ParamLimits

0x3eeb,	// (0x00010ab6) highlight_cell_ai5_widget_pane

0xe8f5,	// (0x0001b4c0) ai5_sk_left_pane

0xe8ff,	// (0x0001b4ca) ai5_sk_middle_pane

0xe909,	// (0x0001b4d4) ai5_sk_right_pane

0xe913,	// (0x0001b4de) bg_ai5_widget_pane_g1_ParamLimits

0xe913,	// (0x0001b4de) bg_ai5_widget_pane_g1

0xe91f,	// (0x0001b4ea) bg_ai5_widget_pane_g2_ParamLimits

0xe91f,	// (0x0001b4ea) bg_ai5_widget_pane_g2

0xe92b,	// (0x0001b4f6) bg_ai5_widget_pane_g3_ParamLimits

0xe92b,	// (0x0001b4f6) bg_ai5_widget_pane_g3

0xe937,	// (0x0001b502) bg_ai5_widget_pane_g4_ParamLimits

0xe937,	// (0x0001b502) bg_ai5_widget_pane_g4

0xe943,	// (0x0001b50e) bg_ai5_widget_pane_g5_ParamLimits

0xe943,	// (0x0001b50e) bg_ai5_widget_pane_g5

0xe94f,	// (0x0001b51a) bg_ai5_widget_pane_g6_ParamLimits

0xe94f,	// (0x0001b51a) bg_ai5_widget_pane_g6

0xe95b,	// (0x0001b526) bg_ai5_widget_pane_g7_ParamLimits

0xe95b,	// (0x0001b526) bg_ai5_widget_pane_g7

0xe967,	// (0x0001b532) bg_ai5_widget_pane_g8_ParamLimits

0xe967,	// (0x0001b532) bg_ai5_widget_pane_g8

0xe973,	// (0x0001b53e) bg_ai5_widget_pane_g9_ParamLimits

0xe973,	// (0x0001b53e) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x0001ca14) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x0001ca14) bg_ai5_widget_pane_g

0xe9ab,	// (0x0001b576) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9ab,	// (0x0001b576) cell_shortcut_ai5_widget_pane

0x8852,	// (0x0001541d) bg_cell_shortcut_ai5_widget_pane

0xe9be,	// (0x0001b589) cell_grid_ai5_widget_pane_g1

0x8852,	// (0x0001541d) highlight_cell_shortcut_ai5_widget_pane

0x9103,	// (0x00015cce) ai5_sk_left_pane_g1

0xe9c7,	// (0x0001b592) ai5_sk_left_pane_g2

0xe9cf,	// (0x0001b59a) ai5_sk_left_pane_g3

0xe9d7,	// (0x0001b5a2) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x0001ca27) ai5_sk_left_pane_g

0xe9df,	// (0x0001b5aa) ai5_sk_left_pane_t1

0x910b,	// (0x00015cd6) ai5_sk_right_pane_g1

0xe9ed,	// (0x0001b5b8) ai5_sk_right_pane_g2

0xe9f5,	// (0x0001b5c0) ai5_sk_right_pane_g3

0xe9fd,	// (0x0001b5c8) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x0001ca30) ai5_sk_right_pane_g

0xea05,	// (0x0001b5d0) ai5_sk_right_pane_t1

0x910b,	// (0x00015cd6) ai5_sk_middle_pane_g1

0x9103,	// (0x00015cce) ai5_sk_middle_pane_g2

0x9123,	// (0x00015cee) ai5_sk_middle_pane_g3

0xe9f5,	// (0x0001b5c0) ai5_sk_middle_pane_g4

0xe9cf,	// (0x0001b59a) ai5_sk_middle_pane_g5

0xea13,	// (0x0001b5de) ai5_sk_middle_pane_g6

0xea1b,	// (0x0001b5e6) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x0001ca39) ai5_sk_middle_pane_g

0x8be9,	// (0x000157b4) aid_touch_area_size_lc0_ParamLimits

0x8be9,	// (0x000157b4) aid_touch_area_size_lc0

0x66ad,	// (0x00013278) cell_hwr_candidate_pane_t1_ParamLimits

0x8c07,	// (0x000157d2) aid_touch_navi_pane

0x8ef6,	// (0x00015ac1) status_dt_navi_pane_ParamLimits

0x8ef6,	// (0x00015ac1) status_dt_navi_pane

0x8f03,	// (0x00015ace) status_dt_sta_pane_ParamLimits

0x8f03,	// (0x00015ace) status_dt_sta_pane

0xea23,	// (0x0001b5ee) dt_sta_controll_pane

0xea30,	// (0x0001b5fb) dt_sta_indi_pane

0xea41,	// (0x0001b60c) dt_sta_title_pane

0x3949,	// (0x00010514) bg_dt_sta_indi_pane_ParamLimits

0x3949,	// (0x00010514) bg_dt_sta_indi_pane

0xea54,	// (0x0001b61f) dt_sta_battery_pane

0xea5c,	// (0x0001b627) dt_sta_indi_pane_g1

0xea65,	// (0x0001b630) dt_sta_indi_pane_g2

0xea6e,	// (0x0001b639) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x0001ca48) dt_sta_indi_pane_g

0xea77,	// (0x0001b642) dt_sta_signal_pane

0x3eeb,	// (0x00010ab6) bg_dt_sta_title_pane_ParamLimits

0x3eeb,	// (0x00010ab6) bg_dt_sta_title_pane

0xea80,	// (0x0001b64b) dt_sta_title_pane_g1

0xea88,	// (0x0001b653) dt_sta_title_pane_t1_ParamLimits

0xea88,	// (0x0001b653) dt_sta_title_pane_t1

0x3536,	// (0x00010101) bg_dt_sta_control_pane

0xea9d,	// (0x0001b668) dt_sta_controll_pane_g1

0xeaa6,	// (0x0001b671) bg_dt_sta_title_pane_g1

0xeaaf,	// (0x0001b67a) bg_dt_sta_title_pane_g2

0xeab8,	// (0x0001b683) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x0001ca4f) bg_dt_sta_title_pane_g

0xbc3f,	// (0x0001880a) bg_dt_sta_indi_pane_g1

0xeac1,	// (0x0001b68c) dt_sta_signal_pane_g1

0xeac9,	// (0x0001b694) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x0001ca56) dt_sta_signal_pane_g

0xead1,	// (0x0001b69c) dt_sta_battery_pane_g1

0xeada,	// (0x0001b6a5) dt_sta_battery_pane_t1

0xbc3f,	// (0x0001880a) bg_dt_sta_control_pane_g1

0x82b3,	// (0x00014e7e) fep_china_uni_eep_pane

0x82bb,	// (0x00014e86) fep_china_uni_entry_pane_ParamLimits

0x82cb,	// (0x00014e96) popup_fep_china_uni_window_g1_ParamLimits

0x82db,	// (0x00014ea6) popup_fep_china_uni_window_g2_ParamLimits

0x82db,	// (0x00014ea6) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0001c2be) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0001c2be) popup_fep_china_uni_window_g

0xeae9,	// (0x0001b6b4) fep_china_uni_eep_pane_g1

0xeaf1,	// (0x0001b6bc) fep_china_uni_eep_pane_t1

0xe512,	// (0x0001b0dd) aid_touch_area_size_smil_player

0x8d5b,	// (0x00015926) lc0_clock_pane

0x8f52,	// (0x00015b1d) status_pane_g5_ParamLimits

0x8f52,	// (0x00015b1d) status_pane_g5

0x5a7c,	// (0x00012647) popup_keymap_window

0x8f18,	// (0x00015ae3) status_icon_pane

0xe6ed,	// (0x0001b2b8) cell_ai5_widget_pane_g3_ParamLimits

0xe707,	// (0x0001b2d2) cell_ai5_widget_pane_g4_ParamLimits

0xe717,	// (0x0001b2e2) cell_ai5_widget_pane_g5_ParamLimits

0xe73f,	// (0x0001b30a) cell_ai5_widget_pane_g8_ParamLimits

0xe73f,	// (0x0001b30a) cell_ai5_widget_pane_g8

0xe753,	// (0x0001b31e) cell_ai5_widget_pane_g9_ParamLimits

0xe753,	// (0x0001b31e) cell_ai5_widget_pane_g9

0xe767,	// (0x0001b332) cell_ai5_widget_pane_g10_ParamLimits

0xe767,	// (0x0001b332) cell_ai5_widget_pane_g10

0xeb00,	// (0x0001b6cb) status_icon_pane_g1

0x3536,	// (0x00010101) bg_popup_sub_pane_cp13

0xeb08,	// (0x0001b6d3) popup_keymap_window_t1

0x8b2a,	// (0x000156f5) control_pane_g6_ParamLimits

0x8b2a,	// (0x000156f5) control_pane_g6

0x8b37,	// (0x00015702) control_pane_g7_ParamLimits

0x8b37,	// (0x00015702) control_pane_g7

0x8b44,	// (0x0001570f) control_pane_g8_ParamLimits

0x8b44,	// (0x0001570f) control_pane_g8

0xea23,	// (0x0001b5ee) dt_sta_controll_pane_ParamLimits

0xea30,	// (0x0001b5fb) dt_sta_indi_pane_ParamLimits

0xea41,	// (0x0001b60c) dt_sta_title_pane_ParamLimits

0x3d9a,	// (0x00010965) aid_size_touch_scroll_bar_cale

0x509f,	// (0x00011c6a) popup_discreet_window_ParamLimits

0x509f,	// (0x00011c6a) popup_discreet_window

0x512d,	// (0x00011cf8) popup_sk_window

0x9840,	// (0x0001640b) bg_popup_sub_pane_cp28_ParamLimits

0x9840,	// (0x0001640b) bg_popup_sub_pane_cp28

0xeb16,	// (0x0001b6e1) popup_discreet_window_g1_ParamLimits

0xeb16,	// (0x0001b6e1) popup_discreet_window_g1

0xeb36,	// (0x0001b701) popup_discreet_window_t1_ParamLimits

0xeb36,	// (0x0001b701) popup_discreet_window_t1

0xeb54,	// (0x0001b71f) popup_discreet_window_t2_ParamLimits

0xeb54,	// (0x0001b71f) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x0001ca5b) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x0001ca5b) popup_discreet_window_t

0x70cc,	// (0x00013c97) popup_sk_window_g1

0x70d6,	// (0x00013ca1) popup_sk_window_g2

0x0001,

0xfe97,	// (0x0001ca62) popup_sk_window_g

0x70de,	// (0x00013ca9) popup_sk_window_t1

0x70ec,	// (0x00013cb7) popup_sk_window_t1_copy1

0xe6d9,	// (0x0001b2a4) cell_ai5_widget_pane_g2_ParamLimits

0xe875,	// (0x0001b440) cell_ai5_widget_pane_t9_ParamLimits

0xe875,	// (0x0001b440) cell_ai5_widget_pane_t9

0x3536,	// (0x00010101) main_fep_fshwr2_pane

0x70fa,	// (0x00013cc5) aid_fshwr2_btn_pane

0x710a,	// (0x00013cd5) aid_fshwr2_syb_pane

0x711e,	// (0x00013ce9) aid_fshwr2_txt_pane

0x712e,	// (0x00013cf9) fshwr2_func_candi_pane

0x714e,	// (0x00013d19) fshwr2_hwr_syb_pane

0x7164,	// (0x00013d2f) fshwr2_icf_pane

0x4fc2,	// (0x00011b8d) fshwr2_icf_bg_pane

0x7198,	// (0x00013d63) fshwr2_icf_pane_t1_ParamLimits

0x7198,	// (0x00013d63) fshwr2_icf_pane_t1

0x818c,	// (0x00014d57) fshwr2_func_candi_pane_g1

0xeba6,	// (0x0001b771) fshwr2_func_candi_row_pane_ParamLimits

0xeba6,	// (0x0001b771) fshwr2_func_candi_row_pane

0x71b0,	// (0x00013d7b) cell_fshwr2_syb_pane_ParamLimits

0x71b0,	// (0x00013d7b) cell_fshwr2_syb_pane

0x71d1,	// (0x00013d9c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x71d1,	// (0x00013d9c) fshwr2_hwr_syb_pane_g1

0x4fc2,	// (0x00011b8d) bg_popup_call_pane_cp01

0x71df,	// (0x00013daa) fshwr2_func_candi_cell_pane_ParamLimits

0x71df,	// (0x00013daa) fshwr2_func_candi_cell_pane

0x9eb7,	// (0x00016a82) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9eb7,	// (0x00016a82) fshwr2_func_candi_cell_bg_pane

0x7230,	// (0x00013dfb) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7230,	// (0x00013dfb) fshwr2_func_candi_cell_pane_g1

0x725b,	// (0x00013e26) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x725b,	// (0x00013e26) fshwr2_func_candi_cell_pane_t1

0x4fc2,	// (0x00011b8d) bg_button_pane_cp08

0x8b81,	// (0x0001574c) cell_fshwr2_syb_bg_pane

0x726e,	// (0x00013e39) cell_fshwr2_syb_bg_pane_g1

0x7282,	// (0x00013e4d) cell_fshwr2_syb_bg_pane_t1

0x3eeb,	// (0x00010ab6) main_tmo_pane

0xa364,	// (0x00016f2f) uni_indicator_pane_g1_ParamLimits

0xa37a,	// (0x00016f45) uni_indicator_pane_g2_ParamLimits

0xa390,	// (0x00016f5b) uni_indicator_pane_g3_ParamLimits

0xa3a3,	// (0x00016f6e) uni_indicator_pane_g4_ParamLimits

0xa3a3,	// (0x00016f6e) uni_indicator_pane_g4

0xa3b7,	// (0x00016f82) uni_indicator_pane_g5_ParamLimits

0xa3b7,	// (0x00016f82) uni_indicator_pane_g5

0xa3b7,	// (0x00016f82) uni_indicator_pane_g6_ParamLimits

0xa3b7,	// (0x00016f82) uni_indicator_pane_g6

0xf8f7,	// (0x0001c4c2) uni_indicator_pane_g_ParamLimits

0xd511,	// (0x0001a0dc) popup_tmo_note_window_ParamLimits

0xd511,	// (0x0001a0dc) popup_tmo_note_window

0x691e,	// (0x000134e9) fshwr2_bg_pane

0x724c,	// (0x00013e17) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x724c,	// (0x00013e17) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x0001ca67) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x0001ca67) fshwr2_func_candi_cell_pane_g

0x6666,	// (0x00013231) bg_popup_window_pane_cp01

0x7298,	// (0x00013e63) bg_popup_window_pane_g1_cp01

0xebc9,	// (0x0001b794) bg_popup_window_pane_cp22_ParamLimits

0xebc9,	// (0x0001b794) bg_popup_window_pane_cp22

0xebd7,	// (0x0001b7a2) listscroll_tmo_link_pane_ParamLimits

0xebd7,	// (0x0001b7a2) listscroll_tmo_link_pane

0xec17,	// (0x0001b7e2) popup_tmo_note_window_g1_ParamLimits

0xec17,	// (0x0001b7e2) popup_tmo_note_window_g1

0xec24,	// (0x0001b7ef) tmo_note_info_pane_ParamLimits

0xec24,	// (0x0001b7ef) tmo_note_info_pane

0xec3e,	// (0x0001b809) list_tmo_note_info_pane_g1_ParamLimits

0xec3e,	// (0x0001b809) list_tmo_note_info_pane_g1

0xec55,	// (0x0001b820) list_tmo_note_info_pane_g2_ParamLimits

0xec55,	// (0x0001b820) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x0001ca6c) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x0001ca6c) list_tmo_note_info_pane_g

0xec71,	// (0x0001b83c) list_tmo_note_info_text_pane_ParamLimits

0xec71,	// (0x0001b83c) list_tmo_note_info_text_pane

0xecf6,	// (0x0001b8c1) list_tmo_link_pane

0xed03,	// (0x0001b8ce) scroll_pane_cp20

0xed10,	// (0x0001b8db) list_single_tmo_link_pane_ParamLimits

0xed10,	// (0x0001b8db) list_single_tmo_link_pane

0xed20,	// (0x0001b8eb) list_single_tmo_link_pane_t1

0xed2e,	// (0x0001b8f9) list_tmo_note_info_text_pane_t1_ParamLimits

0xed2e,	// (0x0001b8f9) list_tmo_note_info_text_pane_t1

0x7e2b,	// (0x000149f6) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7e2b,	// (0x000149f6) aid_size_touch_scroll_bar_cp01

0x7d5a,	// (0x00014925) aid_size_touch_slider_marker

0x5115,	// (0x00011ce0) popup_settings_window_ParamLimits

0x5115,	// (0x00011ce0) popup_settings_window

0x8bb5,	// (0x00015780) popup_candi_list_indi_window

0x8c07,	// (0x000157d2) aid_touch_navi_pane_ParamLimits

0x6877,	// (0x00013442) rs_clock_indi_pane

0x6880,	// (0x0001344b) sctrl_sk_bottom_pane_ParamLimits

0x6891,	// (0x0001345c) sctrl_sk_top_pane_ParamLimits

0x698e,	// (0x00013559) popup_fep_tooltip_window

0xe64f,	// (0x0001b21a) aid_size_cell_widget_grid_ParamLimits

0xe6c4,	// (0x0001b28f) cell_ai5_widget_pane_g1_ParamLimits

0xe6c4,	// (0x0001b28f) cell_ai5_widget_pane_g1

0xe727,	// (0x0001b2f2) cell_ai5_widget_pane_g6_ParamLimits

0xe733,	// (0x0001b2fe) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe15,	// (0x0001c9e0) cell_ai5_widget_pane_g_ParamLimits

0xfe15,	// (0x0001c9e0) cell_ai5_widget_pane_g

0xe8a4,	// (0x0001b46f) cell_ai5_widget_pane_t10_ParamLimits

0xe8a4,	// (0x0001b46f) cell_ai5_widget_pane_t10

0xe8e7,	// (0x0001b4b2) grid_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0001b54a) cell_contacts_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0001b54a) cell_contacts_ai5_widget_pane

0xeb69,	// (0x0001b734) popup_discreet_window_t3_ParamLimits

0xeb69,	// (0x0001b734) popup_discreet_window_t3

0x7180,	// (0x00013d4b) popup_fshwr2_char_preview_window_ParamLimits

0x7180,	// (0x00013d4b) popup_fshwr2_char_preview_window

0xec8f,	// (0x0001b85a) tmo_note_info_pane_t1

0xeca4,	// (0x0001b86f) tmo_note_info_pane_t2

0xecbd,	// (0x0001b888) tmo_note_info_pane_t3

0xecd2,	// (0x0001b89d) tmo_note_info_pane_t4

0xece4,	// (0x0001b8af) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x0001ca71) tmo_note_info_pane_t

0xecf6,	// (0x0001b8c1) list_tmo_link_pane_ParamLimits

0xed03,	// (0x0001b8ce) scroll_pane_cp20_ParamLimits

0x4fc2,	// (0x00011b8d) bg_popup_fep_char_preview_window_cp01

0xed47,	// (0x0001b912) popup_fshwr2_char_preview_window_t1

0xed55,	// (0x0001b920) popup_candi_list_indi_window_g1

0xed5e,	// (0x0001b929) bg_cell_contacts_ai5_widget_pane

0xed6a,	// (0x0001b935) cell_contacts_ai5_widget_pane_g1

0xed7f,	// (0x0001b94a) cell_contacts_ai5_widget_pane_g2

0xed8b,	// (0x0001b956) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x0001ca7c) cell_contacts_ai5_widget_pane_g

0xed97,	// (0x0001b962) cell_contacts_ai5_widget_pane_t1

0x3eeb,	// (0x00010ab6) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0e,	// (0x0001b9d9) settings_container_pane

0x8852,	// (0x0001541d) listscroll_set_pane_copy1

0xb04e,	// (0x00017c19) scroll_pane_cp121_copy1

0xee1a,	// (0x0001b9e5) set_content_pane_copy1

0xee22,	// (0x0001b9ed) aid_height_set_list_copy1_ParamLimits

0xee22,	// (0x0001b9ed) aid_height_set_list_copy1

0xa5df,	// (0x000171aa) aid_size_parent_copy1_ParamLimits

0xa5df,	// (0x000171aa) aid_size_parent_copy1

0xee2e,	// (0x0001b9f9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2e,	// (0x0001b9f9) button_value_adjust_pane_cp6_copy1

0x8b81,	// (0x0001574c) list_highlight_pane_cp2_copy1_ParamLimits

0x8b81,	// (0x0001574c) list_highlight_pane_cp2_copy1

0xee42,	// (0x0001ba0d) list_set_pane_copy1_ParamLimits

0xee42,	// (0x0001ba0d) list_set_pane_copy1

0xeda9,	// (0x0001b974) main_pane_set_t1_copy1_ParamLimits

0xeda9,	// (0x0001b974) main_pane_set_t1_copy1

0xede3,	// (0x0001b9ae) main_pane_set_t2_copy1_ParamLimits

0xede3,	// (0x0001b9ae) main_pane_set_t2_copy1

0xef03,	// (0x0001bace) main_pane_set_t3_copy1

0xef11,	// (0x0001badc) main_pane_set_t4_copy1

0xee02,	// (0x0001b9cd) set_content_pane_g1_copy1_ParamLimits

0xee02,	// (0x0001b9cd) set_content_pane_g1_copy1

0xef1f,	// (0x0001baea) setting_code_pane_copy1

0xef27,	// (0x0001baf2) setting_slider_graphic_pane_copy1

0xef27,	// (0x0001baf2) setting_slider_pane_copy1

0xef2f,	// (0x0001bafa) setting_text_pane_copy1

0xef2f,	// (0x0001bafa) setting_volume_pane_copy1

0xef1f,	// (0x0001baea) settings_code_pane_cp2_copy1

0xef37,	// (0x0001bb02) settings_code_pane_cp_copy1_ParamLimits

0xef37,	// (0x0001bb02) settings_code_pane_cp_copy1

0x72a1,	// (0x00013e6c) volume_set_pane_copy1

0xef4b,	// (0x0001bb16) volume_set_pane_g10_copy1

0xef57,	// (0x0001bb22) volume_set_pane_g1_copy1

0xef61,	// (0x0001bb2c) volume_set_pane_g2_copy1

0xef6b,	// (0x0001bb36) volume_set_pane_g3_copy1

0xef75,	// (0x0001bb40) volume_set_pane_g4_copy1

0xef7f,	// (0x0001bb4a) volume_set_pane_g5_copy1

0xef89,	// (0x0001bb54) volume_set_pane_g6_copy1

0xef93,	// (0x0001bb5e) volume_set_pane_g7_copy1

0xef9d,	// (0x0001bb68) volume_set_pane_g8_copy1

0xefa7,	// (0x0001bb72) volume_set_pane_g9_copy1

0x3773,	// (0x0001033e) bg_set_opt_pane_cp_copy1_ParamLimits

0x3773,	// (0x0001033e) bg_set_opt_pane_cp_copy1

0x72ad,	// (0x00013e78) setting_slider_pane_t1_copy1_ParamLimits

0x72ad,	// (0x00013e78) setting_slider_pane_t1_copy1

0x72cc,	// (0x00013e97) setting_slider_pane_t2_copy1_ParamLimits

0x72cc,	// (0x00013e97) setting_slider_pane_t2_copy1

0x72e6,	// (0x00013eb1) setting_slider_pane_t3_copy1_ParamLimits

0x72e6,	// (0x00013eb1) setting_slider_pane_t3_copy1

0x72fe,	// (0x00013ec9) slider_set_pane_copy1_ParamLimits

0x72fe,	// (0x00013ec9) slider_set_pane_copy1

0x3fa6,	// (0x00010b71) set_opt_bg_pane_g1_copy2

0x3fae,	// (0x00010b79) set_opt_bg_pane_g2_copy2

0xefb3,	// (0x0001bb7e) set_opt_bg_pane_g3_copy2

0x3fbe,	// (0x00010b89) set_opt_bg_pane_g4_copy2

0x3fc6,	// (0x00010b91) set_opt_bg_pane_g5_copy2

0x3fce,	// (0x00010b99) set_opt_bg_pane_g6_copy2

0xefbd,	// (0x0001bb88) set_opt_bg_pane_g7_copy2

0xefc7,	// (0x0001bb92) set_opt_bg_pane_g8_copy2

0xefd1,	// (0x0001bb9c) set_opt_bg_pane_g9_copy2

0x7314,	// (0x00013edf) aid_size_touch_slider_mark_copy1_ParamLimits

0x7314,	// (0x00013edf) aid_size_touch_slider_mark_copy1

0xefdb,	// (0x0001bba6) slider_set_pane_g1_copy1

0x7328,	// (0x00013ef3) slider_set_pane_g2_copy1

0x6291,	// (0x00012e5c) slider_set_pane_g3_copy1_ParamLimits

0x6291,	// (0x00012e5c) slider_set_pane_g3_copy1

0x62a5,	// (0x00012e70) slider_set_pane_g4_copy1_ParamLimits

0x62a5,	// (0x00012e70) slider_set_pane_g4_copy1

0x62bd,	// (0x00012e88) slider_set_pane_g5_copy1_ParamLimits

0x62bd,	// (0x00012e88) slider_set_pane_g5_copy1

0x6291,	// (0x00012e5c) slider_set_pane_g6_copy1_ParamLimits

0x6291,	// (0x00012e5c) slider_set_pane_g6_copy1

0x7330,	// (0x00013efb) slider_set_pane_g7_copy1_ParamLimits

0x7330,	// (0x00013efb) slider_set_pane_g7_copy1

0x36b9,	// (0x00010284) bg_set_opt_pane_cp2_copy1

0xefe4,	// (0x0001bbaf) setting_slider_graphic_pane_g1_copy1

0xefed,	// (0x0001bbb8) setting_slider_graphic_pane_t1_copy1

0xeffd,	// (0x0001bbc8) setting_slider_graphic_pane_t2_copy1

0xf00d,	// (0x0001bbd8) slider_set_pane_cp_copy1

0xf01d,	// (0x0001bbe8) input_focus_pane_cp1_copy1

0xf026,	// (0x0001bbf1) list_set_text_pane_copy1

0xf02e,	// (0x0001bbf9) setting_text_pane_g1_copy1

0x3821,	// (0x000103ec) set_text_pane_t1_copy1

0xf01d,	// (0x0001bbe8) input_focus_pane_cp2_copy1

0xf02e,	// (0x0001bbf9) setting_code_pane_g1_copy1

0xf037,	// (0x0001bc02) setting_code_pane_t1_copy1

0xae53,	// (0x00017a1e) list_set_graphic_pane_copy1

0x36b9,	// (0x00010284) bg_set_opt_pane_cp4_copy1

0x8541,	// (0x0001510c) list_set_graphic_pane_g1_copy1_ParamLimits

0x8541,	// (0x0001510c) list_set_graphic_pane_g1_copy1

0xf045,	// (0x0001bc10) list_set_graphic_pane_g2_copy1

0x8559,	// (0x00015124) list_set_graphic_pane_t1_copy1_ParamLimits

0x8559,	// (0x00015124) list_set_graphic_pane_t1_copy1

0xbc3f,	// (0x0001880a) rs_clock_indi_pane_g1

0xf04d,	// (0x0001bc18) rs_clock_indi_pane_t1

0xf05b,	// (0x0001bc26) rs_indi_pane

0xf063,	// (0x0001bc2e) rs_indi_pane_g1

0xf06c,	// (0x0001bc37) rs_indi_pane_g2

0xed55,	// (0x0001b920) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x0001ca83) rs_indi_pane_g

0x8852,	// (0x0001541d) bg_popup_preview_window_pane_cp03

0xf075,	// (0x0001bc40) popup_fep_tooltip_window_t1

0xcb61,	// (0x0001972c) popup_note2_window_g2_ParamLimits

0xcb61,	// (0x0001972c) popup_note2_window_g2

0x0001,

0xfc45,	// (0x0001c810) popup_note2_window_g_ParamLimits

0xfc45,	// (0x0001c810) popup_note2_window_g

0xd164,	// (0x00019d2f) bg_popup_sub_pane_cp11_ParamLimits

0xd171,	// (0x00019d3c) cell_ai3_links_pane_g1_ParamLimits

0xd188,	// (0x00019d53) cell_ai3_links_pane_t1

0x3821,	// (0x000103ec) set_text_pane_t1_copy1_ParamLimits

0x8754,	// (0x0001531f) cell_graphic_popup_pane_cp2_ParamLimits

0x8754,	// (0x0001531f) cell_graphic_popup_pane_cp2

0xf083,	// (0x0001bc4e) cell_graphic_popup_pane_g1_cp2

0x3bad,	// (0x00010778) cell_graphic_popup_pane_g2_cp2

0xf08b,	// (0x0001bc56) cell_graphic_popup_pane_g3_cp2

0xf093,	// (0x0001bc5e) cell_graphic_popup_pane_t2_cp2

0x3bbe,	// (0x00010789) grid_highlight_pane_cp3_cp2

0x4426,	// (0x00010ff1) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3eeb,	// (0x00010ab6) main_tmo_pane_ParamLimits

0xd505,	// (0x0001a0d0) popup_tmo_big_image_note_window

0xe6b3,	// (0x0001b27e) cell_ai5_widget_list_pane

0xe6bb,	// (0x0001b286) cell_ai5_widget_lrg_icon_pane

0xec8f,	// (0x0001b85a) tmo_note_info_pane_t1_ParamLimits

0xeca4,	// (0x0001b86f) tmo_note_info_pane_t2_ParamLimits

0xecbd,	// (0x0001b888) tmo_note_info_pane_t3_ParamLimits

0xecd2,	// (0x0001b89d) tmo_note_info_pane_t4_ParamLimits

0xece4,	// (0x0001b8af) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x0001ca71) tmo_note_info_pane_t_ParamLimits

0xee0e,	// (0x0001b9d9) settings_container_pane_ParamLimits

0xf015,	// (0x0001bbe0) indicator_popup_pane_cp5

0xf015,	// (0x0001bbe0) indicator_popup_pane_cp6

0xae53,	// (0x00017a1e) list_set_graphic_pane_copy1_ParamLimits

0x3536,	// (0x00010101) bg_popup_window_pane_cp23

0xf0a1,	// (0x0001bc6c) popup_tmo_big_image_note_window_g1

0xf0ad,	// (0x0001bc78) popup_tmo_big_image_note_window_t1

0xf0bd,	// (0x0001bc88) popup_tmo_big_image_note_window_t2

0xf0cd,	// (0x0001bc98) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x0001ca8a) popup_tmo_big_image_note_window_t

0xbc3f,	// (0x0001880a) cell_ai5_widget_lrg_icon_pane_g1

0xf0dd,	// (0x0001bca8) cell_ai5_widget_lrg_icon_pane_t1

0xf0eb,	// (0x0001bcb6) cell_ai5_widget_list_row_pane_ParamLimits

0xf0eb,	// (0x0001bcb6) cell_ai5_widget_list_row_pane

0xf103,	// (0x0001bcce) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf103,	// (0x0001bcce) cell_ai5_widget_list_row_pane_g1

0xf110,	// (0x0001bcdb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf110,	// (0x0001bcdb) cell_ai5_widget_list_row_pane_t1

0xf13b,	// (0x0001bd06) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf13b,	// (0x0001bd06) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x0001ca91) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x0001ca91) cell_ai5_widget_list_row_pane_t

0x4fc2,	// (0x00011b8d) main_fep_vtchi_ss_pane

0xf18b,	// (0x0001bd56) popup_fep_char_pre_window

0xf193,	// (0x0001bd5e) popup_fep_ituss_window

0xf1bf,	// (0x0001bd8a) popup_fep_vkbss_window

0x8b81,	// (0x0001574c) grid_vkbss_keypad_pane_ParamLimits

0x8b81,	// (0x0001574c) grid_vkbss_keypad_pane

0xf201,	// (0x0001bdcc) ituss_keypad_pane

0x7350,	// (0x00013f1b) aid_vkbss_key_offset_ParamLimits

0x7350,	// (0x00013f1b) aid_vkbss_key_offset

0x735c,	// (0x00013f27) cell_vkbss_key_pane_ParamLimits

0x735c,	// (0x00013f27) cell_vkbss_key_pane

0xf20d,	// (0x0001bdd8) bg_cell_vkbss_key_g1_ParamLimits

0xf20d,	// (0x0001bdd8) bg_cell_vkbss_key_g1

0xf219,	// (0x0001bde4) cell_vkbss_key_3p_pane_ParamLimits

0xf219,	// (0x0001bde4) cell_vkbss_key_3p_pane

0xf24f,	// (0x0001be1a) cell_vkbss_key_g1_ParamLimits

0xf24f,	// (0x0001be1a) cell_vkbss_key_g1

0xf285,	// (0x0001be50) cell_vkbss_key_t1_ParamLimits

0xf285,	// (0x0001be50) cell_vkbss_key_t1

0x73be,	// (0x00013f89) cell_ituss_key_pane_ParamLimits

0x73be,	// (0x00013f89) cell_ituss_key_pane

0xf2e1,	// (0x0001beac) bg_cell_ituss_key_g1_ParamLimits

0xf2e1,	// (0x0001beac) bg_cell_ituss_key_g1

0xf2ed,	// (0x0001beb8) cell_ituss_key_pane_g1_ParamLimits

0xf2ed,	// (0x0001beb8) cell_ituss_key_pane_g1

0x73cf,	// (0x00013f9a) cell_ituss_key_pane_g2_ParamLimits

0x73cf,	// (0x00013f9a) cell_ituss_key_pane_g2

0x0005,

0xfecd,	// (0x0001ca98) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x0001ca98) cell_ituss_key_pane_g

0x7453,	// (0x0001401e) cell_ituss_key_t1_ParamLimits

0x7453,	// (0x0001401e) cell_ituss_key_t1

0x748d,	// (0x00014058) cell_ituss_key_t2_ParamLimits

0x748d,	// (0x00014058) cell_ituss_key_t2

0x74bf,	// (0x0001408a) cell_ituss_key_t3_ParamLimits

0x74bf,	// (0x0001408a) cell_ituss_key_t3

0x74f0,	// (0x000140bb) cell_ituss_key_t4_ParamLimits

0x74f0,	// (0x000140bb) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0001caa5) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0001caa5) cell_ituss_key_t

0xf313,	// (0x0001bede) cell_vkbss_key_3p_pane_g1

0xf31b,	// (0x0001bee6) cell_vkbss_key_3p_pane_g2

0xf323,	// (0x0001beee) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0001cab0) cell_vkbss_key_3p_pane_g

0x8852,	// (0x0001541d) bg_popup_fep_char_preview_window_cp02

0xf32b,	// (0x0001bef6) popup_fep_char_pre_window_t1

0xe63c,	// (0x0001b207) main_ai5_sk_pane

0xed5e,	// (0x0001b929) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed6a,	// (0x0001b935) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed7f,	// (0x0001b94a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed8b,	// (0x0001b956) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x0001ca7c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed97,	// (0x0001b962) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3eeb,	// (0x00010ab6) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf339,	// (0x0001bf04) main_ai5_sk_pane_g1

0x9678,	// (0x00016243) popup_query_code_window_g1

0xf1a9,	// (0x0001bd74) popup_fep_vkb_icf_pane

0xf1d8,	// (0x0001bda3) popup_fep_vtchi_icf_pane

0xf342,	// (0x0001bf0d) bg_icf_pane

0xf342,	// (0x0001bf0d) list_vkb_icf_pane

0xf34e,	// (0x0001bf19) bg_icf_pane_cp01

0xf361,	// (0x0001bf2c) vtchi_icf_list_pane

0xf3c1,	// (0x0001bf8c) list_vkb_icf_pane_t1_ParamLimits

0xf3c1,	// (0x0001bf8c) list_vkb_icf_pane_t1

0xf3da,	// (0x0001bfa5) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0001bfa5) vtchi_icf_list_pane_t1

0xf193,	// (0x0001bd5e) popup_fep_ituss_window_ParamLimits

0xf1d8,	// (0x0001bda3) popup_fep_vtchi_icf_pane_ParamLimits

0xf201,	// (0x0001bdcc) ituss_keypad_pane_ParamLimits

0x7346,	// (0x00013f11) ituss_sks_pane

0xf342,	// (0x0001bf0d) bg_icf_pane_ParamLimits

0xf163,	// (0x0001bd2e) icf_edit_indi_pane_ParamLimits

0xf163,	// (0x0001bd2e) icf_edit_indi_pane

0xf342,	// (0x0001bf0d) list_vkb_icf_pane_ParamLimits

0xf34e,	// (0x0001bf19) bg_icf_pane_cp01_ParamLimits

0xf17e,	// (0x0001bd49) icf_edit_indi_pane_cp01_ParamLimits

0xf17e,	// (0x0001bd49) icf_edit_indi_pane_cp01

0xf361,	// (0x0001bf2c) vtchi_query_pane

0xe4e2,	// (0x0001b0ad) icf_edit_indi_pane_g1_ParamLimits

0xe4e2,	// (0x0001b0ad) icf_edit_indi_pane_g1

0xf44a,	// (0x0001c015) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x0001c015) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001cadb) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001cadb) icf_edit_indi_pane_g

0xf45e,	// (0x0001c029) icf_edit_indi_pane_t1

0xf3f3,	// (0x0001bfbe) bg_input_focus_pane_cp042

0x3d91,	// (0x0001095c) vtchi_button_pane

0xf3fc,	// (0x0001bfc7) vtchi_query_pane_t1

0xf40a,	// (0x0001bfd5) vtchi_query_pane_t2

0xf418,	// (0x0001bfe3) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001caca) vtchi_query_pane_t

0x4fc2,	// (0x00011b8d) bg_button_pane_cp13

0xf426,	// (0x0001bff1) vtchi_button_pane_g1

0x7533,	// (0x000140fe) ituss_sks_pane_g1

0x753e,	// (0x00014109) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001cad1) ituss_sks_pane_g

0xf42e,	// (0x0001bff9) ituss_sks_pane_t1

0xf43c,	// (0x0001c007) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001cad6) ituss_sks_pane_t

0xb6c0,	// (0x0001828b) indicator_nsta_pane_cp_g1

0xb6c9,	// (0x00018294) indicator_nsta_pane_cp_g2

0xb6d1,	// (0x0001829c) indicator_nsta_pane_cp_g3

0xb6d9,	// (0x000182a4) indicator_nsta_pane_cp_g4

0xb6c9,	// (0x00018294) indicator_nsta_pane_cp_g5

0xb6d1,	// (0x0001829c) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0001c64e) indicator_nsta_pane_cp_g

0xe229,	// (0x0001adf4) cell_graphic2_pane_t2_ParamLimits

0xe229,	// (0x0001adf4) cell_graphic2_pane_t2

0x0001,

0xfd9c,	// (0x0001c967) cell_graphic2_pane_t_ParamLimits

0xfd9c,	// (0x0001c967) cell_graphic2_pane_t

0xe255,	// (0x0001ae20) cell_graphic2_control_pane_t1

0x8269,	// (0x00014e34) signal_pane_g3_ParamLimits

0x8269,	// (0x00014e34) signal_pane_g3

0x8278,	// (0x00014e43) signal_pane_g4_ParamLimits

0x8278,	// (0x00014e43) signal_pane_g4

0xf14d,	// (0x0001bd18) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14d,	// (0x0001bd18) cell_ai5_widget_list_row_pane_t3

0xf301,	// (0x0001becc) cell_ituss_key_pane_t1_ParamLimits

0xf301,	// (0x0001becc) cell_ituss_key_pane_t1

0x92b0,	// (0x00015e7b) form_field_data_wide_pane_vc_t2_ParamLimits

0x92b0,	// (0x00015e7b) form_field_data_wide_pane_vc_t2

0x92c4,	// (0x00015e8f) form_field_data_wide_pane_vc_t3_ParamLimits

0x92c4,	// (0x00015e8f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0001c3aa) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c3aa) form_field_data_wide_pane_vc_t

0xb35d,	// (0x00017f28) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb35d,	// (0x00017f28) form_field_slider_wide_pane_vc_t3

0xb433,	// (0x00017ffe) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb433,	// (0x00017ffe) form_field_popup_wide_pane_vc_t2

0xb44a,	// (0x00018015) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb44a,	// (0x00018015) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0001c63d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0001c63d) form_field_popup_wide_pane_vc_t

0x70fa,	// (0x00013cc5) aid_fshwr2_btn_pane_ParamLimits

0x710a,	// (0x00013cd5) aid_fshwr2_syb_pane_ParamLimits

0x711e,	// (0x00013ce9) aid_fshwr2_txt_pane_ParamLimits

0x691e,	// (0x000134e9) fshwr2_bg_pane_ParamLimits

0x712e,	// (0x00013cf9) fshwr2_func_candi_pane_ParamLimits

0x714e,	// (0x00013d19) fshwr2_hwr_syb_pane_ParamLimits

0x7164,	// (0x00013d2f) fshwr2_icf_pane_ParamLimits

0xb2d1,	// (0x00017e9c) list_double_graphic_pane_vc_g4_ParamLimits

0xb2d1,	// (0x00017e9c) list_double_graphic_pane_vc_g4

0x73ef,	// (0x00013fba) cell_ituss_key_pane_g3_ParamLimits

0x73ef,	// (0x00013fba) cell_ituss_key_pane_g3

0x7521,	// (0x000140ec) cell_ituss_key_t5_ParamLimits

0x7521,	// (0x000140ec) cell_ituss_key_t5

0xf1bf,	// (0x0001bd8a) popup_fep_vkbss_window_ParamLimits

0xe646,	// (0x0001b211) aid_cell_ai5_quarter

0xf45e,	// (0x0001c029) icf_edit_indi_pane_t1_ParamLimits

0x39f1,	// (0x000105bc) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x39f1,	// (0x000105bc) aid_tch_indicator_popup_pane_cp2

0x3a04,	// (0x000105cf) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3a04,	// (0x000105cf) aid_tch_query_popup_data_pane_cp2

0x9620,	// (0x000161eb) aid_tch_query_popup_pane_ParamLimits

0x9620,	// (0x000161eb) aid_tch_query_popup_pane

0x9620,	// (0x000161eb) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9620,	// (0x000161eb) aid_tch_query_popup_data_pane_cp1

0x8b81,	// (0x0001574c) cell_fshwr2_syb_bg_pane_ParamLimits

0x726e,	// (0x00013e39) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7282,	// (0x00013e4d) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a9,	// (0x0001bd74) popup_fep_vkb_icf_pane_ParamLimits

0x6f40,	// (0x00013b0b) bg_popup_fep_char_preview_window_g10

0xe77b,	// (0x0001b346) cell_ai5_widget_pane_g11_ParamLimits

0xe77b,	// (0x0001b346) cell_ai5_widget_pane_g11

0xe787,	// (0x0001b352) cell_ai5_widget_pane_g12_ParamLimits

0xe787,	// (0x0001b352) cell_ai5_widget_pane_g12

0xe793,	// (0x0001b35e) cell_ai5_widget_pane_g13_ParamLimits

0xe793,	// (0x0001b35e) cell_ai5_widget_pane_g13

0xe8c3,	// (0x0001b48e) cell_ai5_widget_pane_t11_ParamLimits

0xe8c3,	// (0x0001b48e) cell_ai5_widget_pane_t11

0xe8d5,	// (0x0001b4a0) cell_ai5_widget_pane_t12_ParamLimits

0xe8d5,	// (0x0001b4a0) cell_ai5_widget_pane_t12

0x73fb,	// (0x00013fc6) cell_ituss_key_pane_g4_ParamLimits

0x73fb,	// (0x00013fc6) cell_ituss_key_pane_g4

0x7417,	// (0x00013fe2) cell_ituss_key_pane_g5_ParamLimits

0x7417,	// (0x00013fe2) cell_ituss_key_pane_g5

0x7433,	// (0x00013ffe) cell_ituss_key_pane_g6_ParamLimits

0x7433,	// (0x00013ffe) cell_ituss_key_pane_g6

0x90fb,	// (0x00015cc6) bg_icf_pane_g1

0xf369,	// (0x0001bf34) bg_icf_pane_g2

0xf375,	// (0x0001bf40) bg_icf_pane_g3

0xf37f,	// (0x0001bf4a) bg_icf_pane_g4

0xf38b,	// (0x0001bf56) bg_icf_pane_g5

0xf395,	// (0x0001bf60) bg_icf_pane_g6

0xf3a1,	// (0x0001bf6c) bg_icf_pane_g7

0xf3ab,	// (0x0001bf76) bg_icf_pane_g8

0xf3b7,	// (0x0001bf82) bg_icf_pane_g9

0x0008,

0xfeec,	// (0x0001cab7) bg_icf_pane_g

0xf1ee,	// (0x0001bdb9) popup_hyb_candi_window_ParamLimits

0xf1ee,	// (0x0001bdb9) popup_hyb_candi_window

0x921f,	// (0x00015dea) bg_popup_sub_pane_cp01_ParamLimits

0x921f,	// (0x00015dea) bg_popup_sub_pane_cp01

0xf477,	// (0x0001c042) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0001c042) entry_hyb_candi_pane

0xf486,	// (0x0001c051) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0001c051) grid_hyb_candi_pane

0xf49b,	// (0x0001c066) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x0001c066) grid_hyb_phrase_pane

0xf4aa,	// (0x0001c075) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x0001c075) cell_hyb_candi_pane

0x3d9a,	// (0x00010965) cell_hyb_candi_scroll_pane

0x818c,	// (0x00014d57) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0001c091) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0001c09f) cell_hyb_phrase_pane

0x818c,	// (0x00014d57) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0001c0a8) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0001c0b6) entry_hyb_candi_pane_t1

0x8852,	// (0x0001541d) input_focus_pane_cp06

0xf4f9,	// (0x0001c0c4) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0001c0cc) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0001c0d4) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0001c0dc) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0001c0e4) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0001c0ec) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
